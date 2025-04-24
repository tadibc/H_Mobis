// Copyright (c) 2020 Nineva Studios
package com.ninevastudios.ble;

import android.app.Activity;
import android.bluetooth.BluetoothDevice;
import android.bluetooth.BluetoothGatt;
import android.bluetooth.BluetoothGattCallback;
import android.bluetooth.BluetoothGattCharacteristic;
import android.bluetooth.BluetoothGattDescriptor;
import android.bluetooth.BluetoothGattService;
import android.util.Log;

import android.bluetooth.BluetoothAdapter;
import android.bluetooth.BluetoothSocket;
import android.bluetooth.le.BluetoothLeScanner;
import android.bluetooth.le.ScanCallback;
import android.bluetooth.le.ScanFilter;
import android.bluetooth.le.ScanRecord;
import android.bluetooth.le.ScanResult;
import android.bluetooth.le.ScanSettings;

import android.util.SparseArray;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.UUID;

public class BleGoodiesDevice {

	public static native void onConnect(long callbackAddr);
	public static native void onDisconnect(long callbackAddr);
	public static native void onConnectError(long callbackAddr, String errorMessage);
	public static native void onDisconnectError(long callbackAddr, String errorMessage);
	public static native void onRead(long callbackAddr, String service, String characteristic, byte[] data);
	public static native void onWrite(long callbackAddr, String service, String characteristic);
	public static native void onNotification(long callbackAddr, String service, String characteristic, byte[] data);
	public static native void onUnsubscribe(long callbackAddr, String service, String characteristic);
	public static native void onError(long callbackAddr, String service, String characteristic, String errorMessage);

	private Activity mActivity = null;
	private BluetoothDevice mDevice = null;
	private BluetoothGatt mConnection = null;
	private int mState = BluetoothGatt.STATE_DISCONNECTED;
	private boolean mServicesDiscovered = false;
	private long mCallbackAddr = 0;
	
	//add spp protocol
	private BluetoothSocket mBtSocket;
	final UUID sppUuid = UUID.fromString("00001101-0000-1000-8000-00805F9B34FB");

	public BleGoodiesDevice(Activity activity, BluetoothDevice device) {
		mActivity = activity;
		mDevice = device;
	}

	public void initCallbacks(long callbackAddr) { mCallbackAddr = callbackAddr; }

	public void connect() {
		//mConnection = mDevice.connectGatt(mActivity, false, getGattCallback()); //original code

		BleGoodiesUtils.log("beyond connect");

		BleGoodiesUtils.log(String.format("beyond Device connect: %s, name: %s", mDevice, mDevice.getName()));
		
		try 
		{
    		mBtSocket = mDevice.createRfcommSocketToServiceRecord(sppUuid);
		} catch (IOException ex) {
			BleGoodiesUtils.log("beyond Failed to create RfComm socket: " + ex.toString());
    		return;
		}
			BleGoodiesUtils.log("beyond Created a bluetooth socket.");

		for (int i = 0; ; i++) 
		{
    		try 
			{
        		mBtSocket.connect();
    		} 
			catch (IOException ex) 
			{
        		if (i < 1) 
				{
            		BleGoodiesUtils.log("beyond Failed to connect. Retrying: " + ex.toString());
            		continue;
        		}

				onConnectError(mCallbackAddr, "beyond Failed to connect : " + ex.toString());
        		BleGoodiesUtils.log("beyond Failed to connect: " + ex.toString());
        		return;
    		}
    		break;
		}
		
		onConnect(mCallbackAddr);
		BleGoodiesUtils.log("beyond Connected to the bluetooth socket.");
	}

	public void disconnect() {
		/*
		if (mConnection == null) return;

		mConnection.close();
		mConnection.disconnect();
		mConnection = null;

		mState = BluetoothGatt.STATE_DISCONNECTED;
		mServicesDiscovered = false;

		onDisconnect(mCallbackAddr);
		*/

		if (mBtSocket == null) return;

		try 
		{
    		mBtSocket.close();
		} 
		catch (IOException ex) 
		{
    		BleGoodiesUtils.log("beyond Failed to close the bluetooth socket.");
    		return;
		}
		BleGoodiesUtils.log("beyond Closed the bluetooth socket.");

		mState = BluetoothGatt.STATE_DISCONNECTED;
		mServicesDiscovered = false;

		onDisconnect(mCallbackAddr);
	}

	public boolean isConnected() {
		//return mState == BluetoothGatt.STATE_CONNECTED;
		if(mBtSocket == null)
			return false;
			
		return mBtSocket.isConnected();
	}

	public String getName() {
		return mDevice.getName();
	}

	public String getId() {
		return mDevice.getAddress();
	}

	public void discoverService() {
		if (mState == BluetoothGatt.STATE_CONNECTED) {
			mConnection.discoverServices();
		}
	}

	public String[] getServicesUUIDs() {
		if (!mServicesDiscovered) return new String[0];

		List<BluetoothGattService> serviceList = mConnection.getServices();
		ArrayList<String> serviceUUIDs = new ArrayList<String>();

		for (BluetoothGattService service : serviceList)
			serviceUUIDs.add(service.getUuid().toString());

		return serviceUUIDs.toArray(new String[0]);
	}

	public boolean hasService(String serviceUUIDString) {
		if (!mServicesDiscovered) return false;

		BluetoothGattService service = null;
		try {
			UUID serviceUUID = UUID.fromString(serviceUUIDString);
			service = mConnection.getService(serviceUUID);
		}
		catch(Exception e) {
			Log.d("BleGoodies", e.toString());
		}

		return service != null;
	}

	private BluetoothGattCharacteristic getCharacteristic(String serviceUUIDString, String characteristicUUIDString) {
		if (!isConnected()) {
			onError(mCallbackAddr, serviceUUIDString, characteristicUUIDString, "Cannot perform operation. Device is not connected.");
			return null;
		}

		if (!mServicesDiscovered) {
			onError(mCallbackAddr, serviceUUIDString, characteristicUUIDString, "Service unavailable");
			return null;
		}

		UUID serviceUUID = UUID.fromString(serviceUUIDString);
		UUID characteristicUuid = UUID.fromString(characteristicUUIDString);

		BluetoothGattService service = mConnection.getService(serviceUUID);
		if (service == null) {
			onError(mCallbackAddr, serviceUUIDString, characteristicUUIDString, "Service unavailable");
			return null;
		}

		BluetoothGattCharacteristic characteristic = service.getCharacteristic(characteristicUuid);
		if (characteristic == null) {
			onError(mCallbackAddr, serviceUUIDString, characteristicUUIDString, "Characteristic unavailable");
			return null;
		}

		return characteristic;
	}

	public void readCharacteristic(String serviceUUIDString, String characteristicUUIDString) {
		try {
			BluetoothGattCharacteristic characteristic = getCharacteristic(serviceUUIDString, characteristicUUIDString);
			if (characteristic != null) {
				mConnection.readCharacteristic(characteristic);
			}
		}
		catch (Exception e) {
			onError(mCallbackAddr, serviceUUIDString, characteristicUUIDString, "Failed to read characteristic: " + e.toString());
		}
	}

	public void writeCharacteristic(String serviceUUIDString, String characteristicUUIDString, byte[] data) {

		BleGoodiesUtils.log("beyond writeCharacteristic is sent: " + characteristicUUIDString);

		/* original code
		try {
			BluetoothGattCharacteristic characteristic = getCharacteristic(serviceUUIDString, characteristicUUIDString);
			if (characteristic != null) {
				characteristic.setValue(data);
				mConnection.writeCharacteristic(characteristic);
			}
		}
		catch (Exception e) {
			onError(mCallbackAddr, serviceUUIDString, characteristicUUIDString, "Failed to write characteristic: " + e.toString());
		}
		*/

		try 
		{
    		BufferedWriter writer = new BufferedWriter(new OutputStreamWriter(mBtSocket.getOutputStream(), "ASCII"));
    		writer.write(characteristicUUIDString);
    		writer.flush();
		} 
		catch (IOException ex) 
		{
    		BleGoodiesUtils.log("beyond Failed to write a command: " + ex.toString());
    		return;
		}
		
		BleGoodiesUtils.log("beyond Command is sent: " + characteristicUUIDString);
	}

	public void subscribeToCharacteristic(String serviceUUIDString, String characteristicUUIDString, boolean isIndication) {
		try {
			BluetoothGattCharacteristic characteristic = getCharacteristic(serviceUUIDString, characteristicUUIDString);
			if (characteristic != null) {
				mConnection.setCharacteristicNotification(characteristic, true);
				BluetoothGattDescriptor descriptor = characteristic.getDescriptor(clientCharacteristicConfigurationUUID());
				if (descriptor != null) {
					descriptor.setValue(isIndication ?
							BluetoothGattDescriptor.ENABLE_INDICATION_VALUE :
							BluetoothGattDescriptor.ENABLE_NOTIFICATION_VALUE);
					mConnection.writeDescriptor(descriptor);
				} else {
					onError(mCallbackAddr, serviceUUIDString, characteristicUUIDString, "Failed to subscribe");
				}
			}
		}
		catch (Exception e) {
			onError(mCallbackAddr, serviceUUIDString, characteristicUUIDString, "Failed to subscribe: " + e.toString());
		}
	}

	public void unsubscribeFromCharacteristic(String serviceUUIDString, String characteristicUUIDString) {
		try {
			BluetoothGattCharacteristic characteristic = getCharacteristic(serviceUUIDString, characteristicUUIDString);
			if (characteristic != null) {
				mConnection.setCharacteristicNotification(characteristic, true);
				BluetoothGattDescriptor descriptor = characteristic.getDescriptor(clientCharacteristicConfigurationUUID());
				if (descriptor != null) {
					descriptor.setValue(BluetoothGattDescriptor.DISABLE_NOTIFICATION_VALUE);
					mConnection.writeDescriptor(descriptor);
					onUnsubscribe(mCallbackAddr, serviceUUIDString, characteristicUUIDString);
				} else {
					onError(mCallbackAddr, serviceUUIDString, characteristicUUIDString, "Failed to unsubscribe");
				}
			}
		}
		catch (Exception e) {
			onError(mCallbackAddr, serviceUUIDString, characteristicUUIDString, "Failed to unsubscribe: " + e.toString());
		}
	}

	private BluetoothGattCallback getGattCallback() {
		return new BluetoothGattCallback() {
			@Override
			public void onConnectionStateChange(BluetoothGatt gatt, int status, int newState) {
				if (status == BluetoothGatt.GATT_SUCCESS) {
					mState = newState;
					if (mState == BluetoothGatt.STATE_CONNECTED) {
						discoverService();
						onConnect(mCallbackAddr);
					}
				}
				// TODO figure out how to properly detect connection/disconnection failures
				// simply checking status other than SUCCESS gives false positives
			}

			@Override
			public void onServicesDiscovered(BluetoothGatt gatt, int status) {
				if (status == BluetoothGatt.GATT_SUCCESS) {
					mServicesDiscovered = true;
				}
			}

			@Override
			public void onCharacteristicRead(BluetoothGatt gatt, BluetoothGattCharacteristic characteristic, int status) {
				if (status == BluetoothGatt.GATT_SUCCESS) {
					onRead(mCallbackAddr, characteristic.getService().getUuid().toString(), characteristic.getUuid().toString(), characteristic.getValue());
				}
				else {
					onError(mCallbackAddr, characteristic.getService().getUuid().toString(), characteristic.getUuid().toString(), "Read failed. Error code: " + status);
				}
			}

			@Override
			public void onCharacteristicWrite(BluetoothGatt gatt, BluetoothGattCharacteristic characteristic, int status) {
				if (status == BluetoothGatt.GATT_SUCCESS) {
					onWrite(mCallbackAddr, characteristic.getService().getUuid().toString(), characteristic.getUuid().toString());
				}
				else {
					onError(mCallbackAddr, characteristic.getService().getUuid().toString(), characteristic.getUuid().toString(), "Write failed. Error code: " + status);
				}
			}

			@Override
			public void onCharacteristicChanged(BluetoothGatt gatt, BluetoothGattCharacteristic characteristic) {
				onNotification(mCallbackAddr, characteristic.getService().getUuid().toString(), characteristic.getUuid().toString(), characteristic.getValue());
			}
		};
	}

	private UUID clientCharacteristicConfigurationUUID() {
		return BleGoodiesUtils.intToUUID(0x2902);
	}

}

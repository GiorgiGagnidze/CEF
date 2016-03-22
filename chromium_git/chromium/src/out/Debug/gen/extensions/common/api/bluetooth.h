// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/bluetooth.idl
// DO NOT EDIT.

#ifndef EXTENSIONS_COMMON_API_BLUETOOTH_H__
#define EXTENSIONS_COMMON_API_BLUETOOTH_H__

#include <stdint.h>

#include <map>
#include <string>
#include <vector>

#include "base/logging.h"
#include "base/memory/linked_ptr.h"
#include "base/memory/scoped_ptr.h"
#include "base/values.h"

namespace extensions {
namespace api {
namespace bluetooth {

//
// Types
//

// Allocation authorities for Vendor IDs.
enum VendorIdSource {
  VENDOR_ID_SOURCE_NONE,
  VENDOR_ID_SOURCE_BLUETOOTH,
  VENDOR_ID_SOURCE_USB,
  VENDOR_ID_SOURCE_LAST = VENDOR_ID_SOURCE_USB,
};


std::string ToString(VendorIdSource as_enum);
VendorIdSource ParseVendorIdSource(const std::string& as_string);

// Common device types recognized by Chrome.
enum DeviceType {
  DEVICE_TYPE_NONE,
  DEVICE_TYPE_COMPUTER,
  DEVICE_TYPE_PHONE,
  DEVICE_TYPE_MODEM,
  DEVICE_TYPE_AUDIO,
  DEVICE_TYPE_CARAUDIO,
  DEVICE_TYPE_VIDEO,
  DEVICE_TYPE_PERIPHERAL,
  DEVICE_TYPE_JOYSTICK,
  DEVICE_TYPE_GAMEPAD,
  DEVICE_TYPE_KEYBOARD,
  DEVICE_TYPE_MOUSE,
  DEVICE_TYPE_TABLET,
  DEVICE_TYPE_KEYBOARDMOUSECOMBO,
  DEVICE_TYPE_LAST = DEVICE_TYPE_KEYBOARDMOUSECOMBO,
};


std::string ToString(DeviceType as_enum);
DeviceType ParseDeviceType(const std::string& as_string);

struct AdapterState {
  AdapterState();
  ~AdapterState();

  // Populates a AdapterState object from a base::Value. Returns whether |out|
  // was successfully populated.
  static bool Populate(const base::Value& value, AdapterState* out);

  // Creates a AdapterState object from a base::Value, or NULL on failure.
  static scoped_ptr<AdapterState> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this AdapterState object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // The address of the adapter, in the format 'XX:XX:XX:XX:XX:XX'.
  std::string address;

  // The human-readable name of the adapter.
  std::string name;

  // Indicates whether or not the adapter has power.
  bool powered;

  // Indicates whether or not the adapter is available (i.e. enabled).
  bool available;

  // Indicates whether or not the adapter is currently discovering.
  bool discovering;


 private:
  DISALLOW_COPY_AND_ASSIGN(AdapterState);
};

struct Device {
  Device();
  ~Device();

  // Populates a Device object from a base::Value. Returns whether |out| was
  // successfully populated.
  static bool Populate(const base::Value& value, Device* out);

  // Creates a Device object from a base::Value, or NULL on failure.
  static scoped_ptr<Device> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this Device object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // The address of the device, in the format 'XX:XX:XX:XX:XX:XX'.
  std::string address;

  // The human-readable name of the device.
  scoped_ptr<std::string> name;

  // The class of the device, a bit-field defined by
  // http://www.bluetooth.org/en-us/specification/assigned-numbers/baseband.
  scoped_ptr<int> device_class;

  // The Device ID record of the device, where available.
  VendorIdSource vendor_id_source;

  scoped_ptr<int> vendor_id;

  scoped_ptr<int> product_id;

  scoped_ptr<int> device_id;

  // The type of the device, if recognized by Chrome. This is obtained from the
  // |deviceClass| field and only represents a small fraction of the possible
  // device types. When in doubt you should use the |deviceClass| field directly.
  DeviceType type;

  // Indicates whether or not the device is paired with the system.
  scoped_ptr<bool> paired;

  // Indicates whether the device is currently connected to the system.
  scoped_ptr<bool> connected;

  // Indicates whether the device is currently connecting to the system.
  scoped_ptr<bool> connecting;

  // Indicates whether the device is connectable.
  scoped_ptr<bool> connectable;

  // UUIDs of protocols, profiles and services advertised by the device. For
  // classic Bluetooth devices, this list is obtained from EIR data and SDP
  // tables. For Low Energy devices, this list is obtained from AD and GATT
  // primary services. For dual mode devices this may be obtained from both.
  scoped_ptr<std::vector<std::string> > uuids;

  // The received signal strength, in dBm. This field is avaliable and valid only
  // during discovery. Outside of discovery it's value is not specified.
  scoped_ptr<int> inquiry_rssi;

  // The transmitted power level. This field is avaliable only for LE devices that
  // include this field in AD. It is avaliable and valid only during discovery.
  scoped_ptr<int> inquiry_tx_power;


 private:
  DISALLOW_COPY_AND_ASSIGN(Device);
};


//
// Functions
//

namespace GetAdapterState {

namespace Results {

// Object containing the adapter information.
scoped_ptr<base::ListValue> Create(const AdapterState& adapter_info);
}  // namespace Results

}  // namespace GetAdapterState

namespace GetDevice {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // Address of device to get.
  std::string device_address;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

// Object containing the device information.
scoped_ptr<base::ListValue> Create(const Device& device_info);
}  // namespace Results

}  // namespace GetDevice

namespace GetDevices {

namespace Results {

// Array of object containing device information.
scoped_ptr<base::ListValue> Create(const std::vector<linked_ptr<Device> >& device_infos);
}  // namespace Results

}  // namespace GetDevices

namespace StartDiscovery {

namespace Results {

scoped_ptr<base::ListValue> Create();
}  // namespace Results

}  // namespace StartDiscovery

namespace StopDiscovery {

namespace Results {

scoped_ptr<base::ListValue> Create();
}  // namespace Results

}  // namespace StopDiscovery

//
// Events
//

namespace OnAdapterStateChanged {

extern const char kEventName[];  // "bluetooth.onAdapterStateChanged"

// The new state of the adapter.
scoped_ptr<base::ListValue> Create(const AdapterState& state);
}  // namespace OnAdapterStateChanged

namespace OnDeviceAdded {

extern const char kEventName[];  // "bluetooth.onDeviceAdded"

scoped_ptr<base::ListValue> Create(const Device& device);
}  // namespace OnDeviceAdded

namespace OnDeviceChanged {

extern const char kEventName[];  // "bluetooth.onDeviceChanged"

scoped_ptr<base::ListValue> Create(const Device& device);
}  // namespace OnDeviceChanged

namespace OnDeviceRemoved {

extern const char kEventName[];  // "bluetooth.onDeviceRemoved"

scoped_ptr<base::ListValue> Create(const Device& device);
}  // namespace OnDeviceRemoved

}  // namespace bluetooth
}  // namespace api
}  // namespace extensions
#endif  // EXTENSIONS_COMMON_API_BLUETOOTH_H__

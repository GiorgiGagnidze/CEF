// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/hid.idl
// DO NOT EDIT.

#ifndef EXTENSIONS_COMMON_API_HID_H__
#define EXTENSIONS_COMMON_API_HID_H__

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
namespace hid {

//
// Types
//

struct HidCollectionInfo {
  HidCollectionInfo();
  ~HidCollectionInfo();

  // Populates a HidCollectionInfo object from a base::Value. Returns whether
  // |out| was successfully populated.
  static bool Populate(const base::Value& value, HidCollectionInfo* out);

  // Creates a HidCollectionInfo object from a base::Value, or NULL on failure.
  static scoped_ptr<HidCollectionInfo> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this HidCollectionInfo object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // HID usage page identifier.
  int usage_page;

  // Page-defined usage identifier.
  int usage;

  // Report IDs which belong to the collection and to its children.
  std::vector<int> report_ids;


 private:
  DISALLOW_COPY_AND_ASSIGN(HidCollectionInfo);
};

struct HidDeviceInfo {
  HidDeviceInfo();
  ~HidDeviceInfo();

  // Populates a HidDeviceInfo object from a base::Value. Returns whether |out|
  // was successfully populated.
  static bool Populate(const base::Value& value, HidDeviceInfo* out);

  // Creates a HidDeviceInfo object from a base::Value, or NULL on failure.
  static scoped_ptr<HidDeviceInfo> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this HidDeviceInfo object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // Opaque device ID.
  int device_id;

  // Vendor ID.
  int vendor_id;

  // Product ID.
  int product_id;

  // The product name read from the device, if available.
  std::string product_name;

  // The serial number read from the device, if available.
  std::string serial_number;

  // Top-level collections from this device's report descriptors.
  std::vector<linked_ptr<HidCollectionInfo> > collections;

  // Top-level collection's maximum input report size.
  int max_input_report_size;

  // Top-level collection's maximum output report size.
  int max_output_report_size;

  // Top-level collection's maximum feature report size.
  int max_feature_report_size;

  // Raw device report descriptor (not available on Windows).
  std::vector<char> report_descriptor;


 private:
  DISALLOW_COPY_AND_ASSIGN(HidDeviceInfo);
};

struct HidConnectInfo {
  HidConnectInfo();
  ~HidConnectInfo();

  // Populates a HidConnectInfo object from a base::Value. Returns whether |out|
  // was successfully populated.
  static bool Populate(const base::Value& value, HidConnectInfo* out);

  // Creates a HidConnectInfo object from a base::Value, or NULL on failure.
  static scoped_ptr<HidConnectInfo> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this HidConnectInfo object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // The opaque ID used to identify this connection in all other functions.
  int connection_id;


 private:
  DISALLOW_COPY_AND_ASSIGN(HidConnectInfo);
};

struct DeviceFilter {
  DeviceFilter();
  ~DeviceFilter();

  // Populates a DeviceFilter object from a base::Value. Returns whether |out|
  // was successfully populated.
  static bool Populate(const base::Value& value, DeviceFilter* out);

  // Creates a DeviceFilter object from a base::Value, or NULL on failure.
  static scoped_ptr<DeviceFilter> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this DeviceFilter object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // Device vendor ID.
  scoped_ptr<int> vendor_id;

  // Device product ID, only checked only if the vendor ID matches.
  scoped_ptr<int> product_id;

  // HID usage page identifier.
  scoped_ptr<int> usage_page;

  // HID usage identifier, checked only if the HID usage page matches.
  scoped_ptr<int> usage;


 private:
  DISALLOW_COPY_AND_ASSIGN(DeviceFilter);
};

struct GetDevicesOptions {
  GetDevicesOptions();
  ~GetDevicesOptions();

  // Populates a GetDevicesOptions object from a base::Value. Returns whether
  // |out| was successfully populated.
  static bool Populate(const base::Value& value, GetDevicesOptions* out);

  // Creates a GetDevicesOptions object from a base::Value, or NULL on failure.
  static scoped_ptr<GetDevicesOptions> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this GetDevicesOptions object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  scoped_ptr<int> vendor_id;

  scoped_ptr<int> product_id;

  // A device matching any given filter will be returned. An empty filter list
  // will return all devices the app has permission for.
  scoped_ptr<std::vector<linked_ptr<DeviceFilter> > > filters;


 private:
  DISALLOW_COPY_AND_ASSIGN(GetDevicesOptions);
};

struct DevicePromptOptions {
  DevicePromptOptions();
  ~DevicePromptOptions();

  // Populates a DevicePromptOptions object from a base::Value. Returns whether
  // |out| was successfully populated.
  static bool Populate(const base::Value& value, DevicePromptOptions* out);

  // Creates a DevicePromptOptions object from a base::Value, or NULL on
  // failure.
  static scoped_ptr<DevicePromptOptions> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this DevicePromptOptions object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // Allow the user to select multiple devices.
  scoped_ptr<bool> multiple;

  // Filter the list of devices presented to the user. If multiple filters are
  // provided devices matching any filter will be displayed.
  scoped_ptr<std::vector<linked_ptr<DeviceFilter> > > filters;


 private:
  DISALLOW_COPY_AND_ASSIGN(DevicePromptOptions);
};


//
// Functions
//

namespace GetDevices {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // The properties to search for on target devices.
  GetDevicesOptions options;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create(const std::vector<linked_ptr<HidDeviceInfo> >& devices);
}  // namespace Results

}  // namespace GetDevices

namespace GetUserSelectedDevices {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // Configuration of the device picker dialog box.
  scoped_ptr<DevicePromptOptions> options;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create(const std::vector<linked_ptr<HidDeviceInfo> >& devices);
}  // namespace Results

}  // namespace GetUserSelectedDevices

namespace Connect {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // The $(ref:HidDeviceInfo.deviceId) of the device to open.
  int device_id;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create(const HidConnectInfo& connection);
}  // namespace Results

}  // namespace Connect

namespace Disconnect {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // The <code>connectionId</code> returned by $(ref:connect).
  int connection_id;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create();
}  // namespace Results

}  // namespace Disconnect

namespace Receive {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // The <code>connectionId</code> returned by $(ref:connect).
  int connection_id;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

// The report ID or <code>0</code> if none.
// The report data, the report ID prefix (if present) is removed.
scoped_ptr<base::ListValue> Create(int report_id, const std::vector<char>& data);
}  // namespace Results

}  // namespace Receive

namespace Send {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // The <code>connectionId</code> returned by $(ref:connect).
  int connection_id;

  // The report ID to use, or <code>0</code> if none.
  int report_id;

  // The report data.
  std::vector<char> data;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create();
}  // namespace Results

}  // namespace Send

namespace ReceiveFeatureReport {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // The <code>connectionId</code> returned by $(ref:connect).
  int connection_id;

  // The report ID, or <code>0</code> if none.
  int report_id;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

// The report data, including a report ID prefix if one is sent by the device.
scoped_ptr<base::ListValue> Create(const std::vector<char>& data);
}  // namespace Results

}  // namespace ReceiveFeatureReport

namespace SendFeatureReport {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // The <code>connectionId</code> returned by $(ref:connect).
  int connection_id;

  // The report ID to use, or <code>0</code> if none.
  int report_id;

  // The report data.
  std::vector<char> data;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create();
}  // namespace Results

}  // namespace SendFeatureReport

//
// Events
//

namespace OnDeviceAdded {

extern const char kEventName[];  // "hid.onDeviceAdded"

scoped_ptr<base::ListValue> Create(const HidDeviceInfo& device);
}  // namespace OnDeviceAdded

namespace OnDeviceRemoved {

extern const char kEventName[];  // "hid.onDeviceRemoved"

// The <code>deviceId</code> property of the device passed to
// $(ref:onDeviceAdded).
scoped_ptr<base::ListValue> Create(int device_id);
}  // namespace OnDeviceRemoved

}  // namespace hid
}  // namespace api
}  // namespace extensions
#endif  // EXTENSIONS_COMMON_API_HID_H__

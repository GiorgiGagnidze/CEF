// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/usb.idl
// DO NOT EDIT.

#ifndef EXTENSIONS_COMMON_API_USB_H__
#define EXTENSIONS_COMMON_API_USB_H__

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
namespace usb {

//
// Types
//

// Direction, Recipient, RequestType, and TransferType all map to their
// namesakes within the USB specification.
enum Direction {
  DIRECTION_NONE,
  DIRECTION_IN,
  DIRECTION_OUT,
  DIRECTION_LAST = DIRECTION_OUT,
};


std::string ToString(Direction as_enum);
Direction ParseDirection(const std::string& as_string);

enum Recipient {
  RECIPIENT_NONE,
  RECIPIENT_DEVICE,
  RECIPIENT_INTERFACE,
  RECIPIENT_ENDPOINT,
  RECIPIENT_OTHER,
  RECIPIENT_LAST = RECIPIENT_OTHER,
};


std::string ToString(Recipient as_enum);
Recipient ParseRecipient(const std::string& as_string);

enum RequestType {
  REQUEST_TYPE_NONE,
  REQUEST_TYPE_STANDARD,
  REQUEST_TYPE_CLASS,
  REQUEST_TYPE_VENDOR,
  REQUEST_TYPE_RESERVED,
  REQUEST_TYPE_LAST = REQUEST_TYPE_RESERVED,
};


std::string ToString(RequestType as_enum);
RequestType ParseRequestType(const std::string& as_string);

enum TransferType {
  TRANSFER_TYPE_NONE,
  TRANSFER_TYPE_CONTROL,
  TRANSFER_TYPE_INTERRUPT,
  TRANSFER_TYPE_ISOCHRONOUS,
  TRANSFER_TYPE_BULK,
  TRANSFER_TYPE_LAST = TRANSFER_TYPE_BULK,
};


std::string ToString(TransferType as_enum);
TransferType ParseTransferType(const std::string& as_string);

// For isochronous mode, SynchronizationType and UsageType map to their
// namesakes within the USB specification.
enum SynchronizationType {
  SYNCHRONIZATION_TYPE_NONE,
  SYNCHRONIZATION_TYPE_ASYNCHRONOUS,
  SYNCHRONIZATION_TYPE_ADAPTIVE,
  SYNCHRONIZATION_TYPE_SYNCHRONOUS,
  SYNCHRONIZATION_TYPE_LAST = SYNCHRONIZATION_TYPE_SYNCHRONOUS,
};


std::string ToString(SynchronizationType as_enum);
SynchronizationType ParseSynchronizationType(const std::string& as_string);

enum UsageType {
  USAGE_TYPE_NONE,
  USAGE_TYPE_DATA,
  USAGE_TYPE_FEEDBACK,
  USAGE_TYPE_EXPLICITFEEDBACK,
  USAGE_TYPE_LAST = USAGE_TYPE_EXPLICITFEEDBACK,
};


std::string ToString(UsageType as_enum);
UsageType ParseUsageType(const std::string& as_string);

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

  // An opaque ID for the USB device. It remains unchanged until the device is
  // unplugged.
  int device;

  // The device vendor ID.
  int vendor_id;

  // The product ID.
  int product_id;

  // The iProduct string read from the device, if available.
  std::string product_name;

  // The iManufacturer string read from the device, if available.
  std::string manufacturer_name;

  // The iSerialNumber string read from the device, if available.
  std::string serial_number;


 private:
  DISALLOW_COPY_AND_ASSIGN(Device);
};

struct ConnectionHandle {
  ConnectionHandle();
  ~ConnectionHandle();

  // Populates a ConnectionHandle object from a base::Value. Returns whether
  // |out| was successfully populated.
  static bool Populate(const base::Value& value, ConnectionHandle* out);

  // Creates a ConnectionHandle object from a base::Value, or NULL on failure.
  static scoped_ptr<ConnectionHandle> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this ConnectionHandle object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // An opaque handle representing this connection to the USB device and all
  // associated claimed interfaces and pending transfers. A new handle is created
  // each time the device is opened. The connection handle is different from
  // $(ref:Device.device).
  int handle;

  // The device vendor ID.
  int vendor_id;

  // The product ID.
  int product_id;


 private:
  DISALLOW_COPY_AND_ASSIGN(ConnectionHandle);
};

struct EndpointDescriptor {
  EndpointDescriptor();
  ~EndpointDescriptor();

  // Populates a EndpointDescriptor object from a base::Value. Returns whether
  // |out| was successfully populated.
  static bool Populate(const base::Value& value, EndpointDescriptor* out);

  // Creates a EndpointDescriptor object from a base::Value, or NULL on failure.
  static scoped_ptr<EndpointDescriptor> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this EndpointDescriptor object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // Endpoint address.
  int address;

  // Transfer type.
  TransferType type;

  // Transfer direction.
  Direction direction;

  // Maximum packet size.
  int maximum_packet_size;

  // Transfer synchronization mode (isochronous only).
  SynchronizationType synchronization;

  // Endpoint usage hint.
  UsageType usage;

  // Polling interval (interrupt and isochronous only).
  scoped_ptr<int> polling_interval;

  // Extra descriptor data associated with this endpoint.
  std::vector<char> extra_data;


 private:
  DISALLOW_COPY_AND_ASSIGN(EndpointDescriptor);
};

struct InterfaceDescriptor {
  InterfaceDescriptor();
  ~InterfaceDescriptor();

  // Populates a InterfaceDescriptor object from a base::Value. Returns whether
  // |out| was successfully populated.
  static bool Populate(const base::Value& value, InterfaceDescriptor* out);

  // Creates a InterfaceDescriptor object from a base::Value, or NULL on
  // failure.
  static scoped_ptr<InterfaceDescriptor> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this InterfaceDescriptor object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // The interface number.
  int interface_number;

  // The interface alternate setting number (defaults to <code>0</code).
  int alternate_setting;

  // The USB interface class.
  int interface_class;

  // The USB interface sub-class.
  int interface_subclass;

  // The USB interface protocol.
  int interface_protocol;

  // Description of the interface.
  scoped_ptr<std::string> description;

  // Available endpoints.
  std::vector<linked_ptr<EndpointDescriptor> > endpoints;

  // Extra descriptor data associated with this interface.
  std::vector<char> extra_data;


 private:
  DISALLOW_COPY_AND_ASSIGN(InterfaceDescriptor);
};

struct ConfigDescriptor {
  ConfigDescriptor();
  ~ConfigDescriptor();

  // Populates a ConfigDescriptor object from a base::Value. Returns whether
  // |out| was successfully populated.
  static bool Populate(const base::Value& value, ConfigDescriptor* out);

  // Creates a ConfigDescriptor object from a base::Value, or NULL on failure.
  static scoped_ptr<ConfigDescriptor> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this ConfigDescriptor object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // Is this the active configuration?
  bool active;

  // The configuration number.
  int configuration_value;

  // Description of the configuration.
  scoped_ptr<std::string> description;

  // The device is self-powered.
  bool self_powered;

  // The device supports remote wakeup.
  bool remote_wakeup;

  // The maximum power needed by this device in milliamps (mA).
  int max_power;

  // Available interfaces.
  std::vector<linked_ptr<InterfaceDescriptor> > interfaces;

  // Extra descriptor data associated with this configuration.
  std::vector<char> extra_data;


 private:
  DISALLOW_COPY_AND_ASSIGN(ConfigDescriptor);
};

struct ControlTransferInfo {
  ControlTransferInfo();
  ~ControlTransferInfo();

  // Populates a ControlTransferInfo object from a base::Value. Returns whether
  // |out| was successfully populated.
  static bool Populate(const base::Value& value, ControlTransferInfo* out);

  // Creates a ControlTransferInfo object from a base::Value, or NULL on
  // failure.
  static scoped_ptr<ControlTransferInfo> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this ControlTransferInfo object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // The transfer direction (<code>"in"</code> or <code>"out"</code>).
  Direction direction;

  // The transfer target. The target given by <code>index</code> must be claimed
  // if <code>"interface"</code> or <code>"endpoint"</code>.
  Recipient recipient;

  // The request type.
  RequestType request_type;

  // The <code>bRequest</code> field, see <i>Universal Serial Bus Specification
  // Revision 1.1</i> &sect; 9.3.
  int request;

  // The <code>wValue</code> field, see <i>Ibid</i>.
  int value;

  // The <code>wIndex</code> field, see <i>Ibid</i>.
  int index;

  // The amount of data to receive (required only by input transfers).
  scoped_ptr<int> length;

  // The data to transmit (required only by output transfers).
  scoped_ptr<std::vector<char> > data;

  // Request timeout (in milliseconds). The default value <code>0</code> indicates
  // no timeout.
  scoped_ptr<int> timeout;


 private:
  DISALLOW_COPY_AND_ASSIGN(ControlTransferInfo);
};

struct GenericTransferInfo {
  GenericTransferInfo();
  ~GenericTransferInfo();

  // Populates a GenericTransferInfo object from a base::Value. Returns whether
  // |out| was successfully populated.
  static bool Populate(const base::Value& value, GenericTransferInfo* out);

  // Creates a GenericTransferInfo object from a base::Value, or NULL on
  // failure.
  static scoped_ptr<GenericTransferInfo> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this GenericTransferInfo object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // The transfer direction (<code>"in"</code> or <code>"out"</code>).
  Direction direction;

  // The target endpoint address. The interface containing this endpoint must be
  // claimed.
  int endpoint;

  // The amount of data to receive (required only by input transfers).
  scoped_ptr<int> length;

  // The data to transmit (required only by output transfers).
  scoped_ptr<std::vector<char> > data;

  // Request timeout (in milliseconds). The default value <code>0</code> indicates
  // no timeout.
  scoped_ptr<int> timeout;


 private:
  DISALLOW_COPY_AND_ASSIGN(GenericTransferInfo);
};

struct IsochronousTransferInfo {
  IsochronousTransferInfo();
  ~IsochronousTransferInfo();

  // Populates a IsochronousTransferInfo object from a base::Value. Returns
  // whether |out| was successfully populated.
  static bool Populate(const base::Value& value, IsochronousTransferInfo* out);

  // Creates a IsochronousTransferInfo object from a base::Value, or NULL on
  // failure.
  static scoped_ptr<IsochronousTransferInfo> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this IsochronousTransferInfo object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // Transfer parameters. The transfer length or data buffer specified in this
  // parameter block is split along <code>packetLength</code> boundaries to form
  // the individual packets of the transfer.
  GenericTransferInfo transfer_info;

  // The total number of packets in this transfer.
  int packets;

  // The length of each of the packets in this transfer.
  int packet_length;


 private:
  DISALLOW_COPY_AND_ASSIGN(IsochronousTransferInfo);
};

struct TransferResultInfo {
  TransferResultInfo();
  ~TransferResultInfo();

  // Populates a TransferResultInfo object from a base::Value. Returns whether
  // |out| was successfully populated.
  static bool Populate(const base::Value& value, TransferResultInfo* out);

  // Creates a TransferResultInfo object from a base::Value, or NULL on failure.
  static scoped_ptr<TransferResultInfo> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this TransferResultInfo object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // A value of <code>0</code> indicates that the transfer was a success. Other
  // values indicate failure.
  scoped_ptr<int> result_code;

  // The data returned by an input transfer. <code>undefined</code> for output
  // transfers.
  scoped_ptr<std::vector<char> > data;


 private:
  DISALLOW_COPY_AND_ASSIGN(TransferResultInfo);
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

  // Device product ID, checked only if the vendor ID matches.
  scoped_ptr<int> product_id;

  // USB interface class, matches any interface on the device.
  scoped_ptr<int> interface_class;

  // USB interface sub-class, checked only if the interface class matches.
  scoped_ptr<int> interface_subclass;

  // USB interface protocol, checked only if the interface sub-class matches.
  scoped_ptr<int> interface_protocol;


 private:
  DISALLOW_COPY_AND_ASSIGN(DeviceFilter);
};

struct EnumerateDevicesOptions {
  EnumerateDevicesOptions();
  ~EnumerateDevicesOptions();

  // Populates a EnumerateDevicesOptions object from a base::Value. Returns
  // whether |out| was successfully populated.
  static bool Populate(const base::Value& value, EnumerateDevicesOptions* out);

  // Creates a EnumerateDevicesOptions object from a base::Value, or NULL on
  // failure.
  static scoped_ptr<EnumerateDevicesOptions> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this EnumerateDevicesOptions object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  scoped_ptr<int> vendor_id;

  scoped_ptr<int> product_id;

  // A device matching any given filter will be returned. An empty filter list
  // will return all devices the app has permission for.
  scoped_ptr<std::vector<linked_ptr<DeviceFilter> > > filters;


 private:
  DISALLOW_COPY_AND_ASSIGN(EnumerateDevicesOptions);
};

struct EnumerateDevicesAndRequestAccessOptions {
  EnumerateDevicesAndRequestAccessOptions();
  ~EnumerateDevicesAndRequestAccessOptions();

  // Populates a EnumerateDevicesAndRequestAccessOptions object from a
  // base::Value. Returns whether |out| was successfully populated.
  static bool Populate(const base::Value& value, EnumerateDevicesAndRequestAccessOptions* out);

  // Creates a EnumerateDevicesAndRequestAccessOptions object from a
  // base::Value, or NULL on failure.
  static scoped_ptr<EnumerateDevicesAndRequestAccessOptions> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this EnumerateDevicesAndRequestAccessOptions object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // The device vendor ID.
  int vendor_id;

  // The product ID.
  int product_id;

  // The interface ID to request access to. Only available on Chrome OS. It has no
  // effect on other platforms.
  scoped_ptr<int> interface_id;


 private:
  DISALLOW_COPY_AND_ASSIGN(EnumerateDevicesAndRequestAccessOptions);
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
  EnumerateDevicesOptions options;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create(const std::vector<linked_ptr<Device> >& devices);
}  // namespace Results

}  // namespace GetDevices

namespace GetUserSelectedDevices {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // Configuration of the device picker dialog box.
  DevicePromptOptions options;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create(const std::vector<linked_ptr<Device> >& devices);
}  // namespace Results

}  // namespace GetUserSelectedDevices

namespace GetConfigurations {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // The $(ref:Device) to fetch descriptors from.
  Device device;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create(const std::vector<linked_ptr<ConfigDescriptor> >& configs);
}  // namespace Results

}  // namespace GetConfigurations

namespace RequestAccess {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // The $(ref:Device) to request access to.
  Device device;

  // The particular interface requested.
  int interface_id;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create(bool success);
}  // namespace Results

}  // namespace RequestAccess

namespace OpenDevice {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // The $(ref:Device) to open.
  Device device;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create(const ConnectionHandle& handle);
}  // namespace Results

}  // namespace OpenDevice

namespace FindDevices {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // The properties to search for on target devices.
  EnumerateDevicesAndRequestAccessOptions options;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create(const std::vector<linked_ptr<ConnectionHandle> >& handles);
}  // namespace Results

}  // namespace FindDevices

namespace CloseDevice {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // The $(ref:ConnectionHandle) to close.
  ConnectionHandle handle;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create();
}  // namespace Results

}  // namespace CloseDevice

namespace SetConfiguration {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // An open connection to the device.
  ConnectionHandle handle;

  int configuration_value;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create();
}  // namespace Results

}  // namespace SetConfiguration

namespace GetConfiguration {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // An open connection to the device.
  ConnectionHandle handle;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create(const ConfigDescriptor& config);
}  // namespace Results

}  // namespace GetConfiguration

namespace ListInterfaces {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // An open connection to the device.
  ConnectionHandle handle;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create(const std::vector<linked_ptr<InterfaceDescriptor> >& descriptors);
}  // namespace Results

}  // namespace ListInterfaces

namespace ClaimInterface {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // An open connection to the device.
  ConnectionHandle handle;

  // The interface to be claimed.
  int interface_number;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create();
}  // namespace Results

}  // namespace ClaimInterface

namespace ReleaseInterface {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // An open connection to the device.
  ConnectionHandle handle;

  // The interface to be released.
  int interface_number;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create();
}  // namespace Results

}  // namespace ReleaseInterface

namespace SetInterfaceAlternateSetting {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // An open connection to the device where this interface has been     claimed.
  ConnectionHandle handle;

  // The interface to configure.
  int interface_number;

  // The alternate setting to configure.
  int alternate_setting;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create();
}  // namespace Results

}  // namespace SetInterfaceAlternateSetting

namespace ControlTransfer {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // An open connection to the device.
  ConnectionHandle handle;

  ControlTransferInfo transfer_info;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create(const TransferResultInfo& info);
}  // namespace Results

}  // namespace ControlTransfer

namespace BulkTransfer {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // An open connection to the device.
  ConnectionHandle handle;

  // The transfer parameters.
  GenericTransferInfo transfer_info;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create(const TransferResultInfo& info);
}  // namespace Results

}  // namespace BulkTransfer

namespace InterruptTransfer {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // An open connection to the device.
  ConnectionHandle handle;

  // The transfer parameters.
  GenericTransferInfo transfer_info;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create(const TransferResultInfo& info);
}  // namespace Results

}  // namespace InterruptTransfer

namespace IsochronousTransfer {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // An open connection to the device.
  ConnectionHandle handle;

  IsochronousTransferInfo transfer_info;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create(const TransferResultInfo& info);
}  // namespace Results

}  // namespace IsochronousTransfer

namespace ResetDevice {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // A connection handle to reset.
  ConnectionHandle handle;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create(bool success);
}  // namespace Results

}  // namespace ResetDevice

//
// Events
//

namespace OnDeviceAdded {

extern const char kEventName[];  // "usb.onDeviceAdded"

scoped_ptr<base::ListValue> Create(const Device& device);
}  // namespace OnDeviceAdded

namespace OnDeviceRemoved {

extern const char kEventName[];  // "usb.onDeviceRemoved"

scoped_ptr<base::ListValue> Create(const Device& device);
}  // namespace OnDeviceRemoved

}  // namespace usb
}  // namespace api
}  // namespace extensions
#endif  // EXTENSIONS_COMMON_API_USB_H__

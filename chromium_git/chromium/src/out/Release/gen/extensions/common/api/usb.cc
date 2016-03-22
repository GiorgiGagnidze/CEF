// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/usb.idl
// DO NOT EDIT.

#include "tools/json_schema_compiler/util.h"
#include "base/logging.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/utf_string_conversions.h"
#include "extensions/common/api/usb.h"
#include <set>
#include <utility>

using base::UTF8ToUTF16;

namespace extensions {
namespace api {
namespace usb {
//
// Types
//

std::string ToString(Direction enum_param) {
  switch (enum_param) {
    case DIRECTION_IN:
      return "in";
    case DIRECTION_OUT:
      return "out";
    case DIRECTION_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

Direction ParseDirection(const std::string& enum_string) {
  if (enum_string == "in")
    return DIRECTION_IN;
  if (enum_string == "out")
    return DIRECTION_OUT;
  return DIRECTION_NONE;
}


std::string ToString(Recipient enum_param) {
  switch (enum_param) {
    case RECIPIENT_DEVICE:
      return "device";
    case RECIPIENT_INTERFACE:
      return "interface";
    case RECIPIENT_ENDPOINT:
      return "endpoint";
    case RECIPIENT_OTHER:
      return "other";
    case RECIPIENT_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

Recipient ParseRecipient(const std::string& enum_string) {
  if (enum_string == "device")
    return RECIPIENT_DEVICE;
  if (enum_string == "interface")
    return RECIPIENT_INTERFACE;
  if (enum_string == "endpoint")
    return RECIPIENT_ENDPOINT;
  if (enum_string == "other")
    return RECIPIENT_OTHER;
  return RECIPIENT_NONE;
}


std::string ToString(RequestType enum_param) {
  switch (enum_param) {
    case REQUEST_TYPE_STANDARD:
      return "standard";
    case REQUEST_TYPE_CLASS:
      return "class";
    case REQUEST_TYPE_VENDOR:
      return "vendor";
    case REQUEST_TYPE_RESERVED:
      return "reserved";
    case REQUEST_TYPE_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

RequestType ParseRequestType(const std::string& enum_string) {
  if (enum_string == "standard")
    return REQUEST_TYPE_STANDARD;
  if (enum_string == "class")
    return REQUEST_TYPE_CLASS;
  if (enum_string == "vendor")
    return REQUEST_TYPE_VENDOR;
  if (enum_string == "reserved")
    return REQUEST_TYPE_RESERVED;
  return REQUEST_TYPE_NONE;
}


std::string ToString(TransferType enum_param) {
  switch (enum_param) {
    case TRANSFER_TYPE_CONTROL:
      return "control";
    case TRANSFER_TYPE_INTERRUPT:
      return "interrupt";
    case TRANSFER_TYPE_ISOCHRONOUS:
      return "isochronous";
    case TRANSFER_TYPE_BULK:
      return "bulk";
    case TRANSFER_TYPE_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

TransferType ParseTransferType(const std::string& enum_string) {
  if (enum_string == "control")
    return TRANSFER_TYPE_CONTROL;
  if (enum_string == "interrupt")
    return TRANSFER_TYPE_INTERRUPT;
  if (enum_string == "isochronous")
    return TRANSFER_TYPE_ISOCHRONOUS;
  if (enum_string == "bulk")
    return TRANSFER_TYPE_BULK;
  return TRANSFER_TYPE_NONE;
}


std::string ToString(SynchronizationType enum_param) {
  switch (enum_param) {
    case SYNCHRONIZATION_TYPE_ASYNCHRONOUS:
      return "asynchronous";
    case SYNCHRONIZATION_TYPE_ADAPTIVE:
      return "adaptive";
    case SYNCHRONIZATION_TYPE_SYNCHRONOUS:
      return "synchronous";
    case SYNCHRONIZATION_TYPE_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

SynchronizationType ParseSynchronizationType(const std::string& enum_string) {
  if (enum_string == "asynchronous")
    return SYNCHRONIZATION_TYPE_ASYNCHRONOUS;
  if (enum_string == "adaptive")
    return SYNCHRONIZATION_TYPE_ADAPTIVE;
  if (enum_string == "synchronous")
    return SYNCHRONIZATION_TYPE_SYNCHRONOUS;
  return SYNCHRONIZATION_TYPE_NONE;
}


std::string ToString(UsageType enum_param) {
  switch (enum_param) {
    case USAGE_TYPE_DATA:
      return "data";
    case USAGE_TYPE_FEEDBACK:
      return "feedback";
    case USAGE_TYPE_EXPLICITFEEDBACK:
      return "explicitFeedback";
    case USAGE_TYPE_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

UsageType ParseUsageType(const std::string& enum_string) {
  if (enum_string == "data")
    return USAGE_TYPE_DATA;
  if (enum_string == "feedback")
    return USAGE_TYPE_FEEDBACK;
  if (enum_string == "explicitFeedback")
    return USAGE_TYPE_EXPLICITFEEDBACK;
  return USAGE_TYPE_NONE;
}


Device::Device()
: device(0), vendor_id(0), product_id(0) {}

Device::~Device() {}

// static
bool Device::Populate(
    const base::Value& value, Device* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* device_value = NULL;
  if (!dict->GetWithoutPathExpansion("device", &device_value)) {
    return false;
  }
  {
    if (!device_value->GetAsInteger(&out->device)) {
      return false;
    }
  }

  const base::Value* vendor_id_value = NULL;
  if (!dict->GetWithoutPathExpansion("vendorId", &vendor_id_value)) {
    return false;
  }
  {
    if (!vendor_id_value->GetAsInteger(&out->vendor_id)) {
      return false;
    }
  }

  const base::Value* product_id_value = NULL;
  if (!dict->GetWithoutPathExpansion("productId", &product_id_value)) {
    return false;
  }
  {
    if (!product_id_value->GetAsInteger(&out->product_id)) {
      return false;
    }
  }

  const base::Value* product_name_value = NULL;
  if (!dict->GetWithoutPathExpansion("productName", &product_name_value)) {
    return false;
  }
  {
    if (!product_name_value->GetAsString(&out->product_name)) {
      return false;
    }
  }

  const base::Value* manufacturer_name_value = NULL;
  if (!dict->GetWithoutPathExpansion("manufacturerName", &manufacturer_name_value)) {
    return false;
  }
  {
    if (!manufacturer_name_value->GetAsString(&out->manufacturer_name)) {
      return false;
    }
  }

  const base::Value* serial_number_value = NULL;
  if (!dict->GetWithoutPathExpansion("serialNumber", &serial_number_value)) {
    return false;
  }
  {
    if (!serial_number_value->GetAsString(&out->serial_number)) {
      return false;
    }
  }

  return true;
}

// static
scoped_ptr<Device> Device::FromValue(const base::Value& value) {
  scoped_ptr<Device> out(new Device());
  if (!Populate(value, out.get()))
    return scoped_ptr<Device>();
  return out;
}

scoped_ptr<base::DictionaryValue> Device::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("device", new base::FundamentalValue(this->device));

  value->SetWithoutPathExpansion("vendorId", new base::FundamentalValue(this->vendor_id));

  value->SetWithoutPathExpansion("productId", new base::FundamentalValue(this->product_id));

  value->SetWithoutPathExpansion("productName", new base::StringValue(this->product_name));

  value->SetWithoutPathExpansion("manufacturerName", new base::StringValue(this->manufacturer_name));

  value->SetWithoutPathExpansion("serialNumber", new base::StringValue(this->serial_number));


  return value;
}


ConnectionHandle::ConnectionHandle()
: handle(0), vendor_id(0), product_id(0) {}

ConnectionHandle::~ConnectionHandle() {}

// static
bool ConnectionHandle::Populate(
    const base::Value& value, ConnectionHandle* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* handle_value = NULL;
  if (!dict->GetWithoutPathExpansion("handle", &handle_value)) {
    return false;
  }
  {
    if (!handle_value->GetAsInteger(&out->handle)) {
      return false;
    }
  }

  const base::Value* vendor_id_value = NULL;
  if (!dict->GetWithoutPathExpansion("vendorId", &vendor_id_value)) {
    return false;
  }
  {
    if (!vendor_id_value->GetAsInteger(&out->vendor_id)) {
      return false;
    }
  }

  const base::Value* product_id_value = NULL;
  if (!dict->GetWithoutPathExpansion("productId", &product_id_value)) {
    return false;
  }
  {
    if (!product_id_value->GetAsInteger(&out->product_id)) {
      return false;
    }
  }

  return true;
}

// static
scoped_ptr<ConnectionHandle> ConnectionHandle::FromValue(const base::Value& value) {
  scoped_ptr<ConnectionHandle> out(new ConnectionHandle());
  if (!Populate(value, out.get()))
    return scoped_ptr<ConnectionHandle>();
  return out;
}

scoped_ptr<base::DictionaryValue> ConnectionHandle::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("handle", new base::FundamentalValue(this->handle));

  value->SetWithoutPathExpansion("vendorId", new base::FundamentalValue(this->vendor_id));

  value->SetWithoutPathExpansion("productId", new base::FundamentalValue(this->product_id));


  return value;
}


EndpointDescriptor::EndpointDescriptor()
: address(0), type(TRANSFER_TYPE_NONE), direction(DIRECTION_NONE), maximum_packet_size(0), synchronization(SYNCHRONIZATION_TYPE_NONE), usage(USAGE_TYPE_NONE) {}

EndpointDescriptor::~EndpointDescriptor() {}

// static
bool EndpointDescriptor::Populate(
    const base::Value& value, EndpointDescriptor* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  out->synchronization = SYNCHRONIZATION_TYPE_NONE;
  out->usage = USAGE_TYPE_NONE;
  const base::Value* address_value = NULL;
  if (!dict->GetWithoutPathExpansion("address", &address_value)) {
    return false;
  }
  {
    if (!address_value->GetAsInteger(&out->address)) {
      return false;
    }
  }

  const base::Value* type_value = NULL;
  if (!dict->GetWithoutPathExpansion("type", &type_value)) {
    return false;
  }
  {
    std::string transfer_type_as_string;
    if (!type_value->GetAsString(&transfer_type_as_string)) {
      return false;
    }
    out->type = ParseTransferType(transfer_type_as_string);
    if (out->type == TRANSFER_TYPE_NONE) {
      return false;
    }
  }

  const base::Value* direction_value = NULL;
  if (!dict->GetWithoutPathExpansion("direction", &direction_value)) {
    return false;
  }
  {
    std::string direction_as_string;
    if (!direction_value->GetAsString(&direction_as_string)) {
      return false;
    }
    out->direction = ParseDirection(direction_as_string);
    if (out->direction == DIRECTION_NONE) {
      return false;
    }
  }

  const base::Value* maximum_packet_size_value = NULL;
  if (!dict->GetWithoutPathExpansion("maximumPacketSize", &maximum_packet_size_value)) {
    return false;
  }
  {
    if (!maximum_packet_size_value->GetAsInteger(&out->maximum_packet_size)) {
      return false;
    }
  }

  const base::Value* synchronization_value = NULL;
  if (dict->GetWithoutPathExpansion("synchronization", &synchronization_value)) {
    {
      std::string synchronization_type_as_string;
      if (!synchronization_value->GetAsString(&synchronization_type_as_string)) {
        return false;
      }
      out->synchronization = ParseSynchronizationType(synchronization_type_as_string);
      if (out->synchronization == SYNCHRONIZATION_TYPE_NONE) {
        return false;
      }
    }
    } else {
    out->synchronization = SYNCHRONIZATION_TYPE_NONE;
  }

  const base::Value* usage_value = NULL;
  if (dict->GetWithoutPathExpansion("usage", &usage_value)) {
    {
      std::string usage_type_as_string;
      if (!usage_value->GetAsString(&usage_type_as_string)) {
        return false;
      }
      out->usage = ParseUsageType(usage_type_as_string);
      if (out->usage == USAGE_TYPE_NONE) {
        return false;
      }
    }
    } else {
    out->usage = USAGE_TYPE_NONE;
  }

  const base::Value* polling_interval_value = NULL;
  if (dict->GetWithoutPathExpansion("pollingInterval", &polling_interval_value)) {
    {
      int temp;
      if (!polling_interval_value->GetAsInteger(&temp)) {
        out->polling_interval.reset();
        return false;
      }
      else
        out->polling_interval.reset(new int(temp));
    }
  }

  const base::Value* extra_data_value = NULL;
  if (!dict->GetWithoutPathExpansion("extra_data", &extra_data_value)) {
    return false;
  }
  {
    const base::BinaryValue* binary_value = NULL;
    if (!extra_data_value->IsType(base::Value::TYPE_BINARY)) {
      return false;
    }
    else {
       binary_value =
         static_cast<const base::BinaryValue*>(extra_data_value);
      out->extra_data.assign(
          binary_value->GetBuffer(),
          binary_value->GetBuffer() + binary_value->GetSize());
    }
  }

  return true;
}

// static
scoped_ptr<EndpointDescriptor> EndpointDescriptor::FromValue(const base::Value& value) {
  scoped_ptr<EndpointDescriptor> out(new EndpointDescriptor());
  if (!Populate(value, out.get()))
    return scoped_ptr<EndpointDescriptor>();
  return out;
}

scoped_ptr<base::DictionaryValue> EndpointDescriptor::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("address", new base::FundamentalValue(this->address));

  value->SetWithoutPathExpansion("type", new base::StringValue(usb::ToString(this->type)));

  value->SetWithoutPathExpansion("direction", new base::StringValue(usb::ToString(this->direction)));

  value->SetWithoutPathExpansion("maximumPacketSize", new base::FundamentalValue(this->maximum_packet_size));

  if (this->synchronization != SYNCHRONIZATION_TYPE_NONE) {
    value->SetWithoutPathExpansion("synchronization", new base::StringValue(usb::ToString(this->synchronization)));

  }
  if (this->usage != USAGE_TYPE_NONE) {
    value->SetWithoutPathExpansion("usage", new base::StringValue(usb::ToString(this->usage)));

  }
  if (this->polling_interval.get()) {
    value->SetWithoutPathExpansion("pollingInterval", new base::FundamentalValue(*this->polling_interval));

  }
  value->SetWithoutPathExpansion("extra_data", base::BinaryValue::CreateWithCopiedBuffer(this->extra_data.data(), this->extra_data.size()));


  return value;
}


InterfaceDescriptor::InterfaceDescriptor()
: interface_number(0), alternate_setting(0), interface_class(0), interface_subclass(0), interface_protocol(0) {}

InterfaceDescriptor::~InterfaceDescriptor() {}

// static
bool InterfaceDescriptor::Populate(
    const base::Value& value, InterfaceDescriptor* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* interface_number_value = NULL;
  if (!dict->GetWithoutPathExpansion("interfaceNumber", &interface_number_value)) {
    return false;
  }
  {
    if (!interface_number_value->GetAsInteger(&out->interface_number)) {
      return false;
    }
  }

  const base::Value* alternate_setting_value = NULL;
  if (!dict->GetWithoutPathExpansion("alternateSetting", &alternate_setting_value)) {
    return false;
  }
  {
    if (!alternate_setting_value->GetAsInteger(&out->alternate_setting)) {
      return false;
    }
  }

  const base::Value* interface_class_value = NULL;
  if (!dict->GetWithoutPathExpansion("interfaceClass", &interface_class_value)) {
    return false;
  }
  {
    if (!interface_class_value->GetAsInteger(&out->interface_class)) {
      return false;
    }
  }

  const base::Value* interface_subclass_value = NULL;
  if (!dict->GetWithoutPathExpansion("interfaceSubclass", &interface_subclass_value)) {
    return false;
  }
  {
    if (!interface_subclass_value->GetAsInteger(&out->interface_subclass)) {
      return false;
    }
  }

  const base::Value* interface_protocol_value = NULL;
  if (!dict->GetWithoutPathExpansion("interfaceProtocol", &interface_protocol_value)) {
    return false;
  }
  {
    if (!interface_protocol_value->GetAsInteger(&out->interface_protocol)) {
      return false;
    }
  }

  const base::Value* description_value = NULL;
  if (dict->GetWithoutPathExpansion("description", &description_value)) {
    {
      std::string temp;
      if (!description_value->GetAsString(&temp)) {
        out->description.reset();
        return false;
      }
      else
        out->description.reset(new std::string(temp));
    }
  }

  const base::Value* endpoints_value = NULL;
  if (!dict->GetWithoutPathExpansion("endpoints", &endpoints_value)) {
    return false;
  }
  {
    const base::ListValue* list = NULL;
    if (!endpoints_value->GetAsList(&list)) {
      return false;
    }
    else {
      if (!json_schema_compiler::util::PopulateArrayFromList(*list, &out->endpoints)) {
        return false;
      }
    }
  }

  const base::Value* extra_data_value = NULL;
  if (!dict->GetWithoutPathExpansion("extra_data", &extra_data_value)) {
    return false;
  }
  {
    const base::BinaryValue* binary_value = NULL;
    if (!extra_data_value->IsType(base::Value::TYPE_BINARY)) {
      return false;
    }
    else {
       binary_value =
         static_cast<const base::BinaryValue*>(extra_data_value);
      out->extra_data.assign(
          binary_value->GetBuffer(),
          binary_value->GetBuffer() + binary_value->GetSize());
    }
  }

  return true;
}

// static
scoped_ptr<InterfaceDescriptor> InterfaceDescriptor::FromValue(const base::Value& value) {
  scoped_ptr<InterfaceDescriptor> out(new InterfaceDescriptor());
  if (!Populate(value, out.get()))
    return scoped_ptr<InterfaceDescriptor>();
  return out;
}

scoped_ptr<base::DictionaryValue> InterfaceDescriptor::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("interfaceNumber", new base::FundamentalValue(this->interface_number));

  value->SetWithoutPathExpansion("alternateSetting", new base::FundamentalValue(this->alternate_setting));

  value->SetWithoutPathExpansion("interfaceClass", new base::FundamentalValue(this->interface_class));

  value->SetWithoutPathExpansion("interfaceSubclass", new base::FundamentalValue(this->interface_subclass));

  value->SetWithoutPathExpansion("interfaceProtocol", new base::FundamentalValue(this->interface_protocol));

  if (this->description.get()) {
    value->SetWithoutPathExpansion("description", new base::StringValue(*this->description));

  }
  value->SetWithoutPathExpansion("endpoints", json_schema_compiler::util::CreateValueFromArray(this->endpoints).release());

  value->SetWithoutPathExpansion("extra_data", base::BinaryValue::CreateWithCopiedBuffer(this->extra_data.data(), this->extra_data.size()));


  return value;
}


ConfigDescriptor::ConfigDescriptor()
: active(false), configuration_value(0), self_powered(false), remote_wakeup(false), max_power(0) {}

ConfigDescriptor::~ConfigDescriptor() {}

// static
bool ConfigDescriptor::Populate(
    const base::Value& value, ConfigDescriptor* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* active_value = NULL;
  if (!dict->GetWithoutPathExpansion("active", &active_value)) {
    return false;
  }
  {
    if (!active_value->GetAsBoolean(&out->active)) {
      return false;
    }
  }

  const base::Value* configuration_value_value = NULL;
  if (!dict->GetWithoutPathExpansion("configurationValue", &configuration_value_value)) {
    return false;
  }
  {
    if (!configuration_value_value->GetAsInteger(&out->configuration_value)) {
      return false;
    }
  }

  const base::Value* description_value = NULL;
  if (dict->GetWithoutPathExpansion("description", &description_value)) {
    {
      std::string temp;
      if (!description_value->GetAsString(&temp)) {
        out->description.reset();
        return false;
      }
      else
        out->description.reset(new std::string(temp));
    }
  }

  const base::Value* self_powered_value = NULL;
  if (!dict->GetWithoutPathExpansion("selfPowered", &self_powered_value)) {
    return false;
  }
  {
    if (!self_powered_value->GetAsBoolean(&out->self_powered)) {
      return false;
    }
  }

  const base::Value* remote_wakeup_value = NULL;
  if (!dict->GetWithoutPathExpansion("remoteWakeup", &remote_wakeup_value)) {
    return false;
  }
  {
    if (!remote_wakeup_value->GetAsBoolean(&out->remote_wakeup)) {
      return false;
    }
  }

  const base::Value* max_power_value = NULL;
  if (!dict->GetWithoutPathExpansion("maxPower", &max_power_value)) {
    return false;
  }
  {
    if (!max_power_value->GetAsInteger(&out->max_power)) {
      return false;
    }
  }

  const base::Value* interfaces_value = NULL;
  if (!dict->GetWithoutPathExpansion("interfaces", &interfaces_value)) {
    return false;
  }
  {
    const base::ListValue* list = NULL;
    if (!interfaces_value->GetAsList(&list)) {
      return false;
    }
    else {
      if (!json_schema_compiler::util::PopulateArrayFromList(*list, &out->interfaces)) {
        return false;
      }
    }
  }

  const base::Value* extra_data_value = NULL;
  if (!dict->GetWithoutPathExpansion("extra_data", &extra_data_value)) {
    return false;
  }
  {
    const base::BinaryValue* binary_value = NULL;
    if (!extra_data_value->IsType(base::Value::TYPE_BINARY)) {
      return false;
    }
    else {
       binary_value =
         static_cast<const base::BinaryValue*>(extra_data_value);
      out->extra_data.assign(
          binary_value->GetBuffer(),
          binary_value->GetBuffer() + binary_value->GetSize());
    }
  }

  return true;
}

// static
scoped_ptr<ConfigDescriptor> ConfigDescriptor::FromValue(const base::Value& value) {
  scoped_ptr<ConfigDescriptor> out(new ConfigDescriptor());
  if (!Populate(value, out.get()))
    return scoped_ptr<ConfigDescriptor>();
  return out;
}

scoped_ptr<base::DictionaryValue> ConfigDescriptor::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("active", new base::FundamentalValue(this->active));

  value->SetWithoutPathExpansion("configurationValue", new base::FundamentalValue(this->configuration_value));

  if (this->description.get()) {
    value->SetWithoutPathExpansion("description", new base::StringValue(*this->description));

  }
  value->SetWithoutPathExpansion("selfPowered", new base::FundamentalValue(this->self_powered));

  value->SetWithoutPathExpansion("remoteWakeup", new base::FundamentalValue(this->remote_wakeup));

  value->SetWithoutPathExpansion("maxPower", new base::FundamentalValue(this->max_power));

  value->SetWithoutPathExpansion("interfaces", json_schema_compiler::util::CreateValueFromArray(this->interfaces).release());

  value->SetWithoutPathExpansion("extra_data", base::BinaryValue::CreateWithCopiedBuffer(this->extra_data.data(), this->extra_data.size()));


  return value;
}


ControlTransferInfo::ControlTransferInfo()
: direction(DIRECTION_NONE), recipient(RECIPIENT_NONE), request_type(REQUEST_TYPE_NONE), request(0), value(0), index(0) {}

ControlTransferInfo::~ControlTransferInfo() {}

// static
bool ControlTransferInfo::Populate(
    const base::Value& value, ControlTransferInfo* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* direction_value = NULL;
  if (!dict->GetWithoutPathExpansion("direction", &direction_value)) {
    return false;
  }
  {
    std::string direction_as_string;
    if (!direction_value->GetAsString(&direction_as_string)) {
      return false;
    }
    out->direction = ParseDirection(direction_as_string);
    if (out->direction == DIRECTION_NONE) {
      return false;
    }
  }

  const base::Value* recipient_value = NULL;
  if (!dict->GetWithoutPathExpansion("recipient", &recipient_value)) {
    return false;
  }
  {
    std::string recipient_as_string;
    if (!recipient_value->GetAsString(&recipient_as_string)) {
      return false;
    }
    out->recipient = ParseRecipient(recipient_as_string);
    if (out->recipient == RECIPIENT_NONE) {
      return false;
    }
  }

  const base::Value* request_type_value = NULL;
  if (!dict->GetWithoutPathExpansion("requestType", &request_type_value)) {
    return false;
  }
  {
    std::string request_type_as_string;
    if (!request_type_value->GetAsString(&request_type_as_string)) {
      return false;
    }
    out->request_type = ParseRequestType(request_type_as_string);
    if (out->request_type == REQUEST_TYPE_NONE) {
      return false;
    }
  }

  const base::Value* request_value = NULL;
  if (!dict->GetWithoutPathExpansion("request", &request_value)) {
    return false;
  }
  {
    if (!request_value->GetAsInteger(&out->request)) {
      return false;
    }
  }

  const base::Value* value_value = NULL;
  if (!dict->GetWithoutPathExpansion("value", &value_value)) {
    return false;
  }
  {
    if (!value_value->GetAsInteger(&out->value)) {
      return false;
    }
  }

  const base::Value* index_value = NULL;
  if (!dict->GetWithoutPathExpansion("index", &index_value)) {
    return false;
  }
  {
    if (!index_value->GetAsInteger(&out->index)) {
      return false;
    }
  }

  const base::Value* length_value = NULL;
  if (dict->GetWithoutPathExpansion("length", &length_value)) {
    {
      int temp;
      if (!length_value->GetAsInteger(&temp)) {
        out->length.reset();
        return false;
      }
      else
        out->length.reset(new int(temp));
    }
  }

  const base::Value* data_value = NULL;
  if (dict->GetWithoutPathExpansion("data", &data_value)) {
    {
      const base::BinaryValue* binary_value = NULL;
      if (!data_value->IsType(base::Value::TYPE_BINARY)) {
        return false;
      }
      else {
         binary_value =
           static_cast<const base::BinaryValue*>(data_value);
        out->data.reset(new std::vector<char>(
            binary_value->GetBuffer(),
            binary_value->GetBuffer() + binary_value->GetSize()));
      }
    }
  }

  const base::Value* timeout_value = NULL;
  if (dict->GetWithoutPathExpansion("timeout", &timeout_value)) {
    {
      int temp;
      if (!timeout_value->GetAsInteger(&temp)) {
        out->timeout.reset();
        return false;
      }
      else
        out->timeout.reset(new int(temp));
    }
  }

  return true;
}

// static
scoped_ptr<ControlTransferInfo> ControlTransferInfo::FromValue(const base::Value& value) {
  scoped_ptr<ControlTransferInfo> out(new ControlTransferInfo());
  if (!Populate(value, out.get()))
    return scoped_ptr<ControlTransferInfo>();
  return out;
}

scoped_ptr<base::DictionaryValue> ControlTransferInfo::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("direction", new base::StringValue(usb::ToString(this->direction)));

  value->SetWithoutPathExpansion("recipient", new base::StringValue(usb::ToString(this->recipient)));

  value->SetWithoutPathExpansion("requestType", new base::StringValue(usb::ToString(this->request_type)));

  value->SetWithoutPathExpansion("request", new base::FundamentalValue(this->request));

  value->SetWithoutPathExpansion("value", new base::FundamentalValue(this->value));

  value->SetWithoutPathExpansion("index", new base::FundamentalValue(this->index));

  if (this->length.get()) {
    value->SetWithoutPathExpansion("length", new base::FundamentalValue(*this->length));

  }
  if (this->data.get()) {
    value->SetWithoutPathExpansion("data", base::BinaryValue::CreateWithCopiedBuffer(this->data->data(), this->data->size()));

  }
  if (this->timeout.get()) {
    value->SetWithoutPathExpansion("timeout", new base::FundamentalValue(*this->timeout));

  }

  return value;
}


GenericTransferInfo::GenericTransferInfo()
: direction(DIRECTION_NONE), endpoint(0) {}

GenericTransferInfo::~GenericTransferInfo() {}

// static
bool GenericTransferInfo::Populate(
    const base::Value& value, GenericTransferInfo* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* direction_value = NULL;
  if (!dict->GetWithoutPathExpansion("direction", &direction_value)) {
    return false;
  }
  {
    std::string direction_as_string;
    if (!direction_value->GetAsString(&direction_as_string)) {
      return false;
    }
    out->direction = ParseDirection(direction_as_string);
    if (out->direction == DIRECTION_NONE) {
      return false;
    }
  }

  const base::Value* endpoint_value = NULL;
  if (!dict->GetWithoutPathExpansion("endpoint", &endpoint_value)) {
    return false;
  }
  {
    if (!endpoint_value->GetAsInteger(&out->endpoint)) {
      return false;
    }
  }

  const base::Value* length_value = NULL;
  if (dict->GetWithoutPathExpansion("length", &length_value)) {
    {
      int temp;
      if (!length_value->GetAsInteger(&temp)) {
        out->length.reset();
        return false;
      }
      else
        out->length.reset(new int(temp));
    }
  }

  const base::Value* data_value = NULL;
  if (dict->GetWithoutPathExpansion("data", &data_value)) {
    {
      const base::BinaryValue* binary_value = NULL;
      if (!data_value->IsType(base::Value::TYPE_BINARY)) {
        return false;
      }
      else {
         binary_value =
           static_cast<const base::BinaryValue*>(data_value);
        out->data.reset(new std::vector<char>(
            binary_value->GetBuffer(),
            binary_value->GetBuffer() + binary_value->GetSize()));
      }
    }
  }

  const base::Value* timeout_value = NULL;
  if (dict->GetWithoutPathExpansion("timeout", &timeout_value)) {
    {
      int temp;
      if (!timeout_value->GetAsInteger(&temp)) {
        out->timeout.reset();
        return false;
      }
      else
        out->timeout.reset(new int(temp));
    }
  }

  return true;
}

// static
scoped_ptr<GenericTransferInfo> GenericTransferInfo::FromValue(const base::Value& value) {
  scoped_ptr<GenericTransferInfo> out(new GenericTransferInfo());
  if (!Populate(value, out.get()))
    return scoped_ptr<GenericTransferInfo>();
  return out;
}

scoped_ptr<base::DictionaryValue> GenericTransferInfo::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("direction", new base::StringValue(usb::ToString(this->direction)));

  value->SetWithoutPathExpansion("endpoint", new base::FundamentalValue(this->endpoint));

  if (this->length.get()) {
    value->SetWithoutPathExpansion("length", new base::FundamentalValue(*this->length));

  }
  if (this->data.get()) {
    value->SetWithoutPathExpansion("data", base::BinaryValue::CreateWithCopiedBuffer(this->data->data(), this->data->size()));

  }
  if (this->timeout.get()) {
    value->SetWithoutPathExpansion("timeout", new base::FundamentalValue(*this->timeout));

  }

  return value;
}


IsochronousTransferInfo::IsochronousTransferInfo()
: packets(0), packet_length(0) {}

IsochronousTransferInfo::~IsochronousTransferInfo() {}

// static
bool IsochronousTransferInfo::Populate(
    const base::Value& value, IsochronousTransferInfo* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* transfer_info_value = NULL;
  if (!dict->GetWithoutPathExpansion("transferInfo", &transfer_info_value)) {
    return false;
  }
  {
    const base::DictionaryValue* dictionary = NULL;
    if (!transfer_info_value->GetAsDictionary(&dictionary)) {
      return false;
    }
    if (!GenericTransferInfo::Populate(*dictionary, &out->transfer_info)) {
      return false;
    }
  }

  const base::Value* packets_value = NULL;
  if (!dict->GetWithoutPathExpansion("packets", &packets_value)) {
    return false;
  }
  {
    if (!packets_value->GetAsInteger(&out->packets)) {
      return false;
    }
  }

  const base::Value* packet_length_value = NULL;
  if (!dict->GetWithoutPathExpansion("packetLength", &packet_length_value)) {
    return false;
  }
  {
    if (!packet_length_value->GetAsInteger(&out->packet_length)) {
      return false;
    }
  }

  return true;
}

// static
scoped_ptr<IsochronousTransferInfo> IsochronousTransferInfo::FromValue(const base::Value& value) {
  scoped_ptr<IsochronousTransferInfo> out(new IsochronousTransferInfo());
  if (!Populate(value, out.get()))
    return scoped_ptr<IsochronousTransferInfo>();
  return out;
}

scoped_ptr<base::DictionaryValue> IsochronousTransferInfo::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("transferInfo", (this->transfer_info).ToValue().release());

  value->SetWithoutPathExpansion("packets", new base::FundamentalValue(this->packets));

  value->SetWithoutPathExpansion("packetLength", new base::FundamentalValue(this->packet_length));


  return value;
}


TransferResultInfo::TransferResultInfo()
 {}

TransferResultInfo::~TransferResultInfo() {}

// static
bool TransferResultInfo::Populate(
    const base::Value& value, TransferResultInfo* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* result_code_value = NULL;
  if (dict->GetWithoutPathExpansion("resultCode", &result_code_value)) {
    {
      int temp;
      if (!result_code_value->GetAsInteger(&temp)) {
        out->result_code.reset();
        return false;
      }
      else
        out->result_code.reset(new int(temp));
    }
  }

  const base::Value* data_value = NULL;
  if (dict->GetWithoutPathExpansion("data", &data_value)) {
    {
      const base::BinaryValue* binary_value = NULL;
      if (!data_value->IsType(base::Value::TYPE_BINARY)) {
        return false;
      }
      else {
         binary_value =
           static_cast<const base::BinaryValue*>(data_value);
        out->data.reset(new std::vector<char>(
            binary_value->GetBuffer(),
            binary_value->GetBuffer() + binary_value->GetSize()));
      }
    }
  }

  return true;
}

// static
scoped_ptr<TransferResultInfo> TransferResultInfo::FromValue(const base::Value& value) {
  scoped_ptr<TransferResultInfo> out(new TransferResultInfo());
  if (!Populate(value, out.get()))
    return scoped_ptr<TransferResultInfo>();
  return out;
}

scoped_ptr<base::DictionaryValue> TransferResultInfo::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->result_code.get()) {
    value->SetWithoutPathExpansion("resultCode", new base::FundamentalValue(*this->result_code));

  }
  if (this->data.get()) {
    value->SetWithoutPathExpansion("data", base::BinaryValue::CreateWithCopiedBuffer(this->data->data(), this->data->size()));

  }

  return value;
}


DeviceFilter::DeviceFilter()
 {}

DeviceFilter::~DeviceFilter() {}

// static
bool DeviceFilter::Populate(
    const base::Value& value, DeviceFilter* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* vendor_id_value = NULL;
  if (dict->GetWithoutPathExpansion("vendorId", &vendor_id_value)) {
    {
      int temp;
      if (!vendor_id_value->GetAsInteger(&temp)) {
        out->vendor_id.reset();
        return false;
      }
      else
        out->vendor_id.reset(new int(temp));
    }
  }

  const base::Value* product_id_value = NULL;
  if (dict->GetWithoutPathExpansion("productId", &product_id_value)) {
    {
      int temp;
      if (!product_id_value->GetAsInteger(&temp)) {
        out->product_id.reset();
        return false;
      }
      else
        out->product_id.reset(new int(temp));
    }
  }

  const base::Value* interface_class_value = NULL;
  if (dict->GetWithoutPathExpansion("interfaceClass", &interface_class_value)) {
    {
      int temp;
      if (!interface_class_value->GetAsInteger(&temp)) {
        out->interface_class.reset();
        return false;
      }
      else
        out->interface_class.reset(new int(temp));
    }
  }

  const base::Value* interface_subclass_value = NULL;
  if (dict->GetWithoutPathExpansion("interfaceSubclass", &interface_subclass_value)) {
    {
      int temp;
      if (!interface_subclass_value->GetAsInteger(&temp)) {
        out->interface_subclass.reset();
        return false;
      }
      else
        out->interface_subclass.reset(new int(temp));
    }
  }

  const base::Value* interface_protocol_value = NULL;
  if (dict->GetWithoutPathExpansion("interfaceProtocol", &interface_protocol_value)) {
    {
      int temp;
      if (!interface_protocol_value->GetAsInteger(&temp)) {
        out->interface_protocol.reset();
        return false;
      }
      else
        out->interface_protocol.reset(new int(temp));
    }
  }

  return true;
}

// static
scoped_ptr<DeviceFilter> DeviceFilter::FromValue(const base::Value& value) {
  scoped_ptr<DeviceFilter> out(new DeviceFilter());
  if (!Populate(value, out.get()))
    return scoped_ptr<DeviceFilter>();
  return out;
}

scoped_ptr<base::DictionaryValue> DeviceFilter::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->vendor_id.get()) {
    value->SetWithoutPathExpansion("vendorId", new base::FundamentalValue(*this->vendor_id));

  }
  if (this->product_id.get()) {
    value->SetWithoutPathExpansion("productId", new base::FundamentalValue(*this->product_id));

  }
  if (this->interface_class.get()) {
    value->SetWithoutPathExpansion("interfaceClass", new base::FundamentalValue(*this->interface_class));

  }
  if (this->interface_subclass.get()) {
    value->SetWithoutPathExpansion("interfaceSubclass", new base::FundamentalValue(*this->interface_subclass));

  }
  if (this->interface_protocol.get()) {
    value->SetWithoutPathExpansion("interfaceProtocol", new base::FundamentalValue(*this->interface_protocol));

  }

  return value;
}


EnumerateDevicesOptions::EnumerateDevicesOptions()
 {}

EnumerateDevicesOptions::~EnumerateDevicesOptions() {}

// static
bool EnumerateDevicesOptions::Populate(
    const base::Value& value, EnumerateDevicesOptions* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* vendor_id_value = NULL;
  if (dict->GetWithoutPathExpansion("vendorId", &vendor_id_value)) {
    {
      int temp;
      if (!vendor_id_value->GetAsInteger(&temp)) {
        out->vendor_id.reset();
        return false;
      }
      else
        out->vendor_id.reset(new int(temp));
    }
  }

  const base::Value* product_id_value = NULL;
  if (dict->GetWithoutPathExpansion("productId", &product_id_value)) {
    {
      int temp;
      if (!product_id_value->GetAsInteger(&temp)) {
        out->product_id.reset();
        return false;
      }
      else
        out->product_id.reset(new int(temp));
    }
  }

  const base::Value* filters_value = NULL;
  if (dict->GetWithoutPathExpansion("filters", &filters_value)) {
    {
      const base::ListValue* list = NULL;
      if (!filters_value->GetAsList(&list)) {
        return false;
      }
      else {
        if (!json_schema_compiler::util::PopulateOptionalArrayFromList(*list, &out->filters)) {
          return false;
        }
      }
    }
  }

  return true;
}

// static
scoped_ptr<EnumerateDevicesOptions> EnumerateDevicesOptions::FromValue(const base::Value& value) {
  scoped_ptr<EnumerateDevicesOptions> out(new EnumerateDevicesOptions());
  if (!Populate(value, out.get()))
    return scoped_ptr<EnumerateDevicesOptions>();
  return out;
}

scoped_ptr<base::DictionaryValue> EnumerateDevicesOptions::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->vendor_id.get()) {
    value->SetWithoutPathExpansion("vendorId", new base::FundamentalValue(*this->vendor_id));

  }
  if (this->product_id.get()) {
    value->SetWithoutPathExpansion("productId", new base::FundamentalValue(*this->product_id));

  }
  if (this->filters.get()) {
    value->SetWithoutPathExpansion("filters", json_schema_compiler::util::CreateValueFromOptionalArray(this->filters).release());

  }

  return value;
}


EnumerateDevicesAndRequestAccessOptions::EnumerateDevicesAndRequestAccessOptions()
: vendor_id(0), product_id(0) {}

EnumerateDevicesAndRequestAccessOptions::~EnumerateDevicesAndRequestAccessOptions() {}

// static
bool EnumerateDevicesAndRequestAccessOptions::Populate(
    const base::Value& value, EnumerateDevicesAndRequestAccessOptions* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* vendor_id_value = NULL;
  if (!dict->GetWithoutPathExpansion("vendorId", &vendor_id_value)) {
    return false;
  }
  {
    if (!vendor_id_value->GetAsInteger(&out->vendor_id)) {
      return false;
    }
  }

  const base::Value* product_id_value = NULL;
  if (!dict->GetWithoutPathExpansion("productId", &product_id_value)) {
    return false;
  }
  {
    if (!product_id_value->GetAsInteger(&out->product_id)) {
      return false;
    }
  }

  const base::Value* interface_id_value = NULL;
  if (dict->GetWithoutPathExpansion("interfaceId", &interface_id_value)) {
    {
      int temp;
      if (!interface_id_value->GetAsInteger(&temp)) {
        out->interface_id.reset();
        return false;
      }
      else
        out->interface_id.reset(new int(temp));
    }
  }

  return true;
}

// static
scoped_ptr<EnumerateDevicesAndRequestAccessOptions> EnumerateDevicesAndRequestAccessOptions::FromValue(const base::Value& value) {
  scoped_ptr<EnumerateDevicesAndRequestAccessOptions> out(new EnumerateDevicesAndRequestAccessOptions());
  if (!Populate(value, out.get()))
    return scoped_ptr<EnumerateDevicesAndRequestAccessOptions>();
  return out;
}

scoped_ptr<base::DictionaryValue> EnumerateDevicesAndRequestAccessOptions::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("vendorId", new base::FundamentalValue(this->vendor_id));

  value->SetWithoutPathExpansion("productId", new base::FundamentalValue(this->product_id));

  if (this->interface_id.get()) {
    value->SetWithoutPathExpansion("interfaceId", new base::FundamentalValue(*this->interface_id));

  }

  return value;
}


DevicePromptOptions::DevicePromptOptions()
 {}

DevicePromptOptions::~DevicePromptOptions() {}

// static
bool DevicePromptOptions::Populate(
    const base::Value& value, DevicePromptOptions* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* multiple_value = NULL;
  if (dict->GetWithoutPathExpansion("multiple", &multiple_value)) {
    {
      bool temp;
      if (!multiple_value->GetAsBoolean(&temp)) {
        out->multiple.reset();
        return false;
      }
      else
        out->multiple.reset(new bool(temp));
    }
  }

  const base::Value* filters_value = NULL;
  if (dict->GetWithoutPathExpansion("filters", &filters_value)) {
    {
      const base::ListValue* list = NULL;
      if (!filters_value->GetAsList(&list)) {
        return false;
      }
      else {
        if (!json_schema_compiler::util::PopulateOptionalArrayFromList(*list, &out->filters)) {
          return false;
        }
      }
    }
  }

  return true;
}

// static
scoped_ptr<DevicePromptOptions> DevicePromptOptions::FromValue(const base::Value& value) {
  scoped_ptr<DevicePromptOptions> out(new DevicePromptOptions());
  if (!Populate(value, out.get()))
    return scoped_ptr<DevicePromptOptions>();
  return out;
}

scoped_ptr<base::DictionaryValue> DevicePromptOptions::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->multiple.get()) {
    value->SetWithoutPathExpansion("multiple", new base::FundamentalValue(*this->multiple));

  }
  if (this->filters.get()) {
    value->SetWithoutPathExpansion("filters", json_schema_compiler::util::CreateValueFromOptionalArray(this->filters).release());

  }

  return value;
}



//
// Functions
//

namespace GetDevices {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* options_value = NULL;
  if (args.Get(0, &options_value) &&
      !options_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!options_value->GetAsDictionary(&dictionary)) {
        return scoped_ptr<Params>();
      }
      if (!EnumerateDevicesOptions::Populate(*dictionary, &params->options)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(const std::vector<linked_ptr<Device> >& devices) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(json_schema_compiler::util::CreateValueFromArray(devices).release());

  return create_results;
}
}  // namespace GetDevices

namespace GetUserSelectedDevices {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* options_value = NULL;
  if (args.Get(0, &options_value) &&
      !options_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!options_value->GetAsDictionary(&dictionary)) {
        return scoped_ptr<Params>();
      }
      if (!DevicePromptOptions::Populate(*dictionary, &params->options)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(const std::vector<linked_ptr<Device> >& devices) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(json_schema_compiler::util::CreateValueFromArray(devices).release());

  return create_results;
}
}  // namespace GetUserSelectedDevices

namespace GetConfigurations {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* device_value = NULL;
  if (args.Get(0, &device_value) &&
      !device_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!device_value->GetAsDictionary(&dictionary)) {
        return scoped_ptr<Params>();
      }
      if (!Device::Populate(*dictionary, &params->device)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(const std::vector<linked_ptr<ConfigDescriptor> >& configs) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(json_schema_compiler::util::CreateValueFromArray(configs).release());

  return create_results;
}
}  // namespace GetConfigurations

namespace RequestAccess {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 2) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* device_value = NULL;
  if (args.Get(0, &device_value) &&
      !device_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!device_value->GetAsDictionary(&dictionary)) {
        return scoped_ptr<Params>();
      }
      if (!Device::Populate(*dictionary, &params->device)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* interface_id_value = NULL;
  if (args.Get(1, &interface_id_value) &&
      !interface_id_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!interface_id_value->GetAsInteger(&params->interface_id)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(bool success) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(new base::FundamentalValue(success));

  return create_results;
}
}  // namespace RequestAccess

namespace OpenDevice {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* device_value = NULL;
  if (args.Get(0, &device_value) &&
      !device_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!device_value->GetAsDictionary(&dictionary)) {
        return scoped_ptr<Params>();
      }
      if (!Device::Populate(*dictionary, &params->device)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(const ConnectionHandle& handle) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((handle).ToValue().release());

  return create_results;
}
}  // namespace OpenDevice

namespace FindDevices {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* options_value = NULL;
  if (args.Get(0, &options_value) &&
      !options_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!options_value->GetAsDictionary(&dictionary)) {
        return scoped_ptr<Params>();
      }
      if (!EnumerateDevicesAndRequestAccessOptions::Populate(*dictionary, &params->options)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(const std::vector<linked_ptr<ConnectionHandle> >& handles) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(json_schema_compiler::util::CreateValueFromArray(handles).release());

  return create_results;
}
}  // namespace FindDevices

namespace CloseDevice {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* handle_value = NULL;
  if (args.Get(0, &handle_value) &&
      !handle_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!handle_value->GetAsDictionary(&dictionary)) {
        return scoped_ptr<Params>();
      }
      if (!ConnectionHandle::Populate(*dictionary, &params->handle)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create() {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}
}  // namespace CloseDevice

namespace SetConfiguration {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 2) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* handle_value = NULL;
  if (args.Get(0, &handle_value) &&
      !handle_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!handle_value->GetAsDictionary(&dictionary)) {
        return scoped_ptr<Params>();
      }
      if (!ConnectionHandle::Populate(*dictionary, &params->handle)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* configuration_value_value = NULL;
  if (args.Get(1, &configuration_value_value) &&
      !configuration_value_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!configuration_value_value->GetAsInteger(&params->configuration_value)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create() {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}
}  // namespace SetConfiguration

namespace GetConfiguration {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* handle_value = NULL;
  if (args.Get(0, &handle_value) &&
      !handle_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!handle_value->GetAsDictionary(&dictionary)) {
        return scoped_ptr<Params>();
      }
      if (!ConnectionHandle::Populate(*dictionary, &params->handle)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(const ConfigDescriptor& config) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((config).ToValue().release());

  return create_results;
}
}  // namespace GetConfiguration

namespace ListInterfaces {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* handle_value = NULL;
  if (args.Get(0, &handle_value) &&
      !handle_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!handle_value->GetAsDictionary(&dictionary)) {
        return scoped_ptr<Params>();
      }
      if (!ConnectionHandle::Populate(*dictionary, &params->handle)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(const std::vector<linked_ptr<InterfaceDescriptor> >& descriptors) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(json_schema_compiler::util::CreateValueFromArray(descriptors).release());

  return create_results;
}
}  // namespace ListInterfaces

namespace ClaimInterface {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 2) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* handle_value = NULL;
  if (args.Get(0, &handle_value) &&
      !handle_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!handle_value->GetAsDictionary(&dictionary)) {
        return scoped_ptr<Params>();
      }
      if (!ConnectionHandle::Populate(*dictionary, &params->handle)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* interface_number_value = NULL;
  if (args.Get(1, &interface_number_value) &&
      !interface_number_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!interface_number_value->GetAsInteger(&params->interface_number)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create() {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}
}  // namespace ClaimInterface

namespace ReleaseInterface {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 2) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* handle_value = NULL;
  if (args.Get(0, &handle_value) &&
      !handle_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!handle_value->GetAsDictionary(&dictionary)) {
        return scoped_ptr<Params>();
      }
      if (!ConnectionHandle::Populate(*dictionary, &params->handle)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* interface_number_value = NULL;
  if (args.Get(1, &interface_number_value) &&
      !interface_number_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!interface_number_value->GetAsInteger(&params->interface_number)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create() {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}
}  // namespace ReleaseInterface

namespace SetInterfaceAlternateSetting {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 3) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* handle_value = NULL;
  if (args.Get(0, &handle_value) &&
      !handle_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!handle_value->GetAsDictionary(&dictionary)) {
        return scoped_ptr<Params>();
      }
      if (!ConnectionHandle::Populate(*dictionary, &params->handle)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* interface_number_value = NULL;
  if (args.Get(1, &interface_number_value) &&
      !interface_number_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!interface_number_value->GetAsInteger(&params->interface_number)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* alternate_setting_value = NULL;
  if (args.Get(2, &alternate_setting_value) &&
      !alternate_setting_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!alternate_setting_value->GetAsInteger(&params->alternate_setting)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create() {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}
}  // namespace SetInterfaceAlternateSetting

namespace ControlTransfer {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 2) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* handle_value = NULL;
  if (args.Get(0, &handle_value) &&
      !handle_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!handle_value->GetAsDictionary(&dictionary)) {
        return scoped_ptr<Params>();
      }
      if (!ConnectionHandle::Populate(*dictionary, &params->handle)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* transfer_info_value = NULL;
  if (args.Get(1, &transfer_info_value) &&
      !transfer_info_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!transfer_info_value->GetAsDictionary(&dictionary)) {
        return scoped_ptr<Params>();
      }
      if (!ControlTransferInfo::Populate(*dictionary, &params->transfer_info)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(const TransferResultInfo& info) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((info).ToValue().release());

  return create_results;
}
}  // namespace ControlTransfer

namespace BulkTransfer {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 2) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* handle_value = NULL;
  if (args.Get(0, &handle_value) &&
      !handle_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!handle_value->GetAsDictionary(&dictionary)) {
        return scoped_ptr<Params>();
      }
      if (!ConnectionHandle::Populate(*dictionary, &params->handle)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* transfer_info_value = NULL;
  if (args.Get(1, &transfer_info_value) &&
      !transfer_info_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!transfer_info_value->GetAsDictionary(&dictionary)) {
        return scoped_ptr<Params>();
      }
      if (!GenericTransferInfo::Populate(*dictionary, &params->transfer_info)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(const TransferResultInfo& info) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((info).ToValue().release());

  return create_results;
}
}  // namespace BulkTransfer

namespace InterruptTransfer {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 2) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* handle_value = NULL;
  if (args.Get(0, &handle_value) &&
      !handle_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!handle_value->GetAsDictionary(&dictionary)) {
        return scoped_ptr<Params>();
      }
      if (!ConnectionHandle::Populate(*dictionary, &params->handle)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* transfer_info_value = NULL;
  if (args.Get(1, &transfer_info_value) &&
      !transfer_info_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!transfer_info_value->GetAsDictionary(&dictionary)) {
        return scoped_ptr<Params>();
      }
      if (!GenericTransferInfo::Populate(*dictionary, &params->transfer_info)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(const TransferResultInfo& info) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((info).ToValue().release());

  return create_results;
}
}  // namespace InterruptTransfer

namespace IsochronousTransfer {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 2) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* handle_value = NULL;
  if (args.Get(0, &handle_value) &&
      !handle_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!handle_value->GetAsDictionary(&dictionary)) {
        return scoped_ptr<Params>();
      }
      if (!ConnectionHandle::Populate(*dictionary, &params->handle)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* transfer_info_value = NULL;
  if (args.Get(1, &transfer_info_value) &&
      !transfer_info_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!transfer_info_value->GetAsDictionary(&dictionary)) {
        return scoped_ptr<Params>();
      }
      if (!IsochronousTransferInfo::Populate(*dictionary, &params->transfer_info)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(const TransferResultInfo& info) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((info).ToValue().release());

  return create_results;
}
}  // namespace IsochronousTransfer

namespace ResetDevice {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* handle_value = NULL;
  if (args.Get(0, &handle_value) &&
      !handle_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!handle_value->GetAsDictionary(&dictionary)) {
        return scoped_ptr<Params>();
      }
      if (!ConnectionHandle::Populate(*dictionary, &params->handle)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(bool success) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(new base::FundamentalValue(success));

  return create_results;
}
}  // namespace ResetDevice

//
// Events
//

namespace OnDeviceAdded {

const char kEventName[] = "usb.onDeviceAdded";

scoped_ptr<base::ListValue> Create(const Device& device) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((device).ToValue().release());

  return create_results;
}

}  // namespace OnDeviceAdded

namespace OnDeviceRemoved {

const char kEventName[] = "usb.onDeviceRemoved";

scoped_ptr<base::ListValue> Create(const Device& device) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((device).ToValue().release());

  return create_results;
}

}  // namespace OnDeviceRemoved

}  // namespace usb
}  // namespace api
}  // namespace extensions


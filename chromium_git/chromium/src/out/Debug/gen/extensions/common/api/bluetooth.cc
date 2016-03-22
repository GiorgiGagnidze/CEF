// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/bluetooth.idl
// DO NOT EDIT.

#include "tools/json_schema_compiler/util.h"
#include "base/logging.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/utf_string_conversions.h"
#include "extensions/common/api/bluetooth.h"
#include <set>
#include <utility>

using base::UTF8ToUTF16;

namespace extensions {
namespace api {
namespace bluetooth {
//
// Types
//

std::string ToString(VendorIdSource enum_param) {
  switch (enum_param) {
    case VENDOR_ID_SOURCE_BLUETOOTH:
      return "bluetooth";
    case VENDOR_ID_SOURCE_USB:
      return "usb";
    case VENDOR_ID_SOURCE_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

VendorIdSource ParseVendorIdSource(const std::string& enum_string) {
  if (enum_string == "bluetooth")
    return VENDOR_ID_SOURCE_BLUETOOTH;
  if (enum_string == "usb")
    return VENDOR_ID_SOURCE_USB;
  return VENDOR_ID_SOURCE_NONE;
}


std::string ToString(DeviceType enum_param) {
  switch (enum_param) {
    case DEVICE_TYPE_COMPUTER:
      return "computer";
    case DEVICE_TYPE_PHONE:
      return "phone";
    case DEVICE_TYPE_MODEM:
      return "modem";
    case DEVICE_TYPE_AUDIO:
      return "audio";
    case DEVICE_TYPE_CARAUDIO:
      return "carAudio";
    case DEVICE_TYPE_VIDEO:
      return "video";
    case DEVICE_TYPE_PERIPHERAL:
      return "peripheral";
    case DEVICE_TYPE_JOYSTICK:
      return "joystick";
    case DEVICE_TYPE_GAMEPAD:
      return "gamepad";
    case DEVICE_TYPE_KEYBOARD:
      return "keyboard";
    case DEVICE_TYPE_MOUSE:
      return "mouse";
    case DEVICE_TYPE_TABLET:
      return "tablet";
    case DEVICE_TYPE_KEYBOARDMOUSECOMBO:
      return "keyboardMouseCombo";
    case DEVICE_TYPE_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

DeviceType ParseDeviceType(const std::string& enum_string) {
  if (enum_string == "computer")
    return DEVICE_TYPE_COMPUTER;
  if (enum_string == "phone")
    return DEVICE_TYPE_PHONE;
  if (enum_string == "modem")
    return DEVICE_TYPE_MODEM;
  if (enum_string == "audio")
    return DEVICE_TYPE_AUDIO;
  if (enum_string == "carAudio")
    return DEVICE_TYPE_CARAUDIO;
  if (enum_string == "video")
    return DEVICE_TYPE_VIDEO;
  if (enum_string == "peripheral")
    return DEVICE_TYPE_PERIPHERAL;
  if (enum_string == "joystick")
    return DEVICE_TYPE_JOYSTICK;
  if (enum_string == "gamepad")
    return DEVICE_TYPE_GAMEPAD;
  if (enum_string == "keyboard")
    return DEVICE_TYPE_KEYBOARD;
  if (enum_string == "mouse")
    return DEVICE_TYPE_MOUSE;
  if (enum_string == "tablet")
    return DEVICE_TYPE_TABLET;
  if (enum_string == "keyboardMouseCombo")
    return DEVICE_TYPE_KEYBOARDMOUSECOMBO;
  return DEVICE_TYPE_NONE;
}


AdapterState::AdapterState()
: powered(false), available(false), discovering(false) {}

AdapterState::~AdapterState() {}

// static
bool AdapterState::Populate(
    const base::Value& value, AdapterState* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* address_value = NULL;
  if (!dict->GetWithoutPathExpansion("address", &address_value)) {
    return false;
  }
  {
    if (!address_value->GetAsString(&out->address)) {
      return false;
    }
  }

  const base::Value* name_value = NULL;
  if (!dict->GetWithoutPathExpansion("name", &name_value)) {
    return false;
  }
  {
    if (!name_value->GetAsString(&out->name)) {
      return false;
    }
  }

  const base::Value* powered_value = NULL;
  if (!dict->GetWithoutPathExpansion("powered", &powered_value)) {
    return false;
  }
  {
    if (!powered_value->GetAsBoolean(&out->powered)) {
      return false;
    }
  }

  const base::Value* available_value = NULL;
  if (!dict->GetWithoutPathExpansion("available", &available_value)) {
    return false;
  }
  {
    if (!available_value->GetAsBoolean(&out->available)) {
      return false;
    }
  }

  const base::Value* discovering_value = NULL;
  if (!dict->GetWithoutPathExpansion("discovering", &discovering_value)) {
    return false;
  }
  {
    if (!discovering_value->GetAsBoolean(&out->discovering)) {
      return false;
    }
  }

  return true;
}

// static
scoped_ptr<AdapterState> AdapterState::FromValue(const base::Value& value) {
  scoped_ptr<AdapterState> out(new AdapterState());
  if (!Populate(value, out.get()))
    return scoped_ptr<AdapterState>();
  return out;
}

scoped_ptr<base::DictionaryValue> AdapterState::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("address", new base::StringValue(this->address));

  value->SetWithoutPathExpansion("name", new base::StringValue(this->name));

  value->SetWithoutPathExpansion("powered", new base::FundamentalValue(this->powered));

  value->SetWithoutPathExpansion("available", new base::FundamentalValue(this->available));

  value->SetWithoutPathExpansion("discovering", new base::FundamentalValue(this->discovering));


  return value;
}


Device::Device()
: vendor_id_source(VENDOR_ID_SOURCE_NONE), type(DEVICE_TYPE_NONE) {}

Device::~Device() {}

// static
bool Device::Populate(
    const base::Value& value, Device* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  out->vendor_id_source = VENDOR_ID_SOURCE_NONE;
  out->type = DEVICE_TYPE_NONE;
  const base::Value* address_value = NULL;
  if (!dict->GetWithoutPathExpansion("address", &address_value)) {
    return false;
  }
  {
    if (!address_value->GetAsString(&out->address)) {
      return false;
    }
  }

  const base::Value* name_value = NULL;
  if (dict->GetWithoutPathExpansion("name", &name_value)) {
    {
      std::string temp;
      if (!name_value->GetAsString(&temp)) {
        out->name.reset();
        return false;
      }
      else
        out->name.reset(new std::string(temp));
    }
  }

  const base::Value* device_class_value = NULL;
  if (dict->GetWithoutPathExpansion("deviceClass", &device_class_value)) {
    {
      int temp;
      if (!device_class_value->GetAsInteger(&temp)) {
        out->device_class.reset();
        return false;
      }
      else
        out->device_class.reset(new int(temp));
    }
  }

  const base::Value* vendor_id_source_value = NULL;
  if (dict->GetWithoutPathExpansion("vendorIdSource", &vendor_id_source_value)) {
    {
      std::string vendor_id_source_as_string;
      if (!vendor_id_source_value->GetAsString(&vendor_id_source_as_string)) {
        return false;
      }
      out->vendor_id_source = ParseVendorIdSource(vendor_id_source_as_string);
      if (out->vendor_id_source == VENDOR_ID_SOURCE_NONE) {
        return false;
      }
    }
    } else {
    out->vendor_id_source = VENDOR_ID_SOURCE_NONE;
  }

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

  const base::Value* device_id_value = NULL;
  if (dict->GetWithoutPathExpansion("deviceId", &device_id_value)) {
    {
      int temp;
      if (!device_id_value->GetAsInteger(&temp)) {
        out->device_id.reset();
        return false;
      }
      else
        out->device_id.reset(new int(temp));
    }
  }

  const base::Value* type_value = NULL;
  if (dict->GetWithoutPathExpansion("type", &type_value)) {
    {
      std::string device_type_as_string;
      if (!type_value->GetAsString(&device_type_as_string)) {
        return false;
      }
      out->type = ParseDeviceType(device_type_as_string);
      if (out->type == DEVICE_TYPE_NONE) {
        return false;
      }
    }
    } else {
    out->type = DEVICE_TYPE_NONE;
  }

  const base::Value* paired_value = NULL;
  if (dict->GetWithoutPathExpansion("paired", &paired_value)) {
    {
      bool temp;
      if (!paired_value->GetAsBoolean(&temp)) {
        out->paired.reset();
        return false;
      }
      else
        out->paired.reset(new bool(temp));
    }
  }

  const base::Value* connected_value = NULL;
  if (dict->GetWithoutPathExpansion("connected", &connected_value)) {
    {
      bool temp;
      if (!connected_value->GetAsBoolean(&temp)) {
        out->connected.reset();
        return false;
      }
      else
        out->connected.reset(new bool(temp));
    }
  }

  const base::Value* connecting_value = NULL;
  if (dict->GetWithoutPathExpansion("connecting", &connecting_value)) {
    {
      bool temp;
      if (!connecting_value->GetAsBoolean(&temp)) {
        out->connecting.reset();
        return false;
      }
      else
        out->connecting.reset(new bool(temp));
    }
  }

  const base::Value* connectable_value = NULL;
  if (dict->GetWithoutPathExpansion("connectable", &connectable_value)) {
    {
      bool temp;
      if (!connectable_value->GetAsBoolean(&temp)) {
        out->connectable.reset();
        return false;
      }
      else
        out->connectable.reset(new bool(temp));
    }
  }

  const base::Value* uuids_value = NULL;
  if (dict->GetWithoutPathExpansion("uuids", &uuids_value)) {
    {
      const base::ListValue* list = NULL;
      if (!uuids_value->GetAsList(&list)) {
        return false;
      }
      else {
        if (!json_schema_compiler::util::PopulateOptionalArrayFromList(*list, &out->uuids)) {
          return false;
        }
      }
    }
  }

  const base::Value* inquiry_rssi_value = NULL;
  if (dict->GetWithoutPathExpansion("inquiryRssi", &inquiry_rssi_value)) {
    {
      int temp;
      if (!inquiry_rssi_value->GetAsInteger(&temp)) {
        out->inquiry_rssi.reset();
        return false;
      }
      else
        out->inquiry_rssi.reset(new int(temp));
    }
  }

  const base::Value* inquiry_tx_power_value = NULL;
  if (dict->GetWithoutPathExpansion("inquiryTxPower", &inquiry_tx_power_value)) {
    {
      int temp;
      if (!inquiry_tx_power_value->GetAsInteger(&temp)) {
        out->inquiry_tx_power.reset();
        return false;
      }
      else
        out->inquiry_tx_power.reset(new int(temp));
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

  value->SetWithoutPathExpansion("address", new base::StringValue(this->address));

  if (this->name.get()) {
    value->SetWithoutPathExpansion("name", new base::StringValue(*this->name));

  }
  if (this->device_class.get()) {
    value->SetWithoutPathExpansion("deviceClass", new base::FundamentalValue(*this->device_class));

  }
  if (this->vendor_id_source != VENDOR_ID_SOURCE_NONE) {
    value->SetWithoutPathExpansion("vendorIdSource", new base::StringValue(bluetooth::ToString(this->vendor_id_source)));

  }
  if (this->vendor_id.get()) {
    value->SetWithoutPathExpansion("vendorId", new base::FundamentalValue(*this->vendor_id));

  }
  if (this->product_id.get()) {
    value->SetWithoutPathExpansion("productId", new base::FundamentalValue(*this->product_id));

  }
  if (this->device_id.get()) {
    value->SetWithoutPathExpansion("deviceId", new base::FundamentalValue(*this->device_id));

  }
  if (this->type != DEVICE_TYPE_NONE) {
    value->SetWithoutPathExpansion("type", new base::StringValue(bluetooth::ToString(this->type)));

  }
  if (this->paired.get()) {
    value->SetWithoutPathExpansion("paired", new base::FundamentalValue(*this->paired));

  }
  if (this->connected.get()) {
    value->SetWithoutPathExpansion("connected", new base::FundamentalValue(*this->connected));

  }
  if (this->connecting.get()) {
    value->SetWithoutPathExpansion("connecting", new base::FundamentalValue(*this->connecting));

  }
  if (this->connectable.get()) {
    value->SetWithoutPathExpansion("connectable", new base::FundamentalValue(*this->connectable));

  }
  if (this->uuids.get()) {
    value->SetWithoutPathExpansion("uuids", json_schema_compiler::util::CreateValueFromOptionalArray(this->uuids).release());

  }
  if (this->inquiry_rssi.get()) {
    value->SetWithoutPathExpansion("inquiryRssi", new base::FundamentalValue(*this->inquiry_rssi));

  }
  if (this->inquiry_tx_power.get()) {
    value->SetWithoutPathExpansion("inquiryTxPower", new base::FundamentalValue(*this->inquiry_tx_power));

  }

  return value;
}



//
// Functions
//

namespace GetAdapterState {

scoped_ptr<base::ListValue> Results::Create(const AdapterState& adapter_info) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((adapter_info).ToValue().release());

  return create_results;
}
}  // namespace GetAdapterState

namespace GetDevice {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* device_address_value = NULL;
  if (args.Get(0, &device_address_value) &&
      !device_address_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!device_address_value->GetAsString(&params->device_address)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(const Device& device_info) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((device_info).ToValue().release());

  return create_results;
}
}  // namespace GetDevice

namespace GetDevices {

scoped_ptr<base::ListValue> Results::Create(const std::vector<linked_ptr<Device> >& device_infos) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(json_schema_compiler::util::CreateValueFromArray(device_infos).release());

  return create_results;
}
}  // namespace GetDevices

namespace StartDiscovery {

scoped_ptr<base::ListValue> Results::Create() {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}
}  // namespace StartDiscovery

namespace StopDiscovery {

scoped_ptr<base::ListValue> Results::Create() {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}
}  // namespace StopDiscovery

//
// Events
//

namespace OnAdapterStateChanged {

const char kEventName[] = "bluetooth.onAdapterStateChanged";

scoped_ptr<base::ListValue> Create(const AdapterState& state) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((state).ToValue().release());

  return create_results;
}

}  // namespace OnAdapterStateChanged

namespace OnDeviceAdded {

const char kEventName[] = "bluetooth.onDeviceAdded";

scoped_ptr<base::ListValue> Create(const Device& device) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((device).ToValue().release());

  return create_results;
}

}  // namespace OnDeviceAdded

namespace OnDeviceChanged {

const char kEventName[] = "bluetooth.onDeviceChanged";

scoped_ptr<base::ListValue> Create(const Device& device) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((device).ToValue().release());

  return create_results;
}

}  // namespace OnDeviceChanged

namespace OnDeviceRemoved {

const char kEventName[] = "bluetooth.onDeviceRemoved";

scoped_ptr<base::ListValue> Create(const Device& device) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((device).ToValue().release());

  return create_results;
}

}  // namespace OnDeviceRemoved

}  // namespace bluetooth
}  // namespace api
}  // namespace extensions


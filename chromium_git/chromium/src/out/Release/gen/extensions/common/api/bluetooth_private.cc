// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/bluetooth_private.idl
// DO NOT EDIT.

#include "tools/json_schema_compiler/util.h"
#include "base/logging.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/utf_string_conversions.h"
#include "extensions/common/api/bluetooth_private.h"
#include <set>
#include <utility>
#include "extensions/common/api/bluetooth.h"
#include "extensions/common/api/bluetooth.h"


using base::UTF8ToUTF16;

namespace extensions {
namespace api {
namespace bluetooth_private {
//
// Types
//

std::string ToString(PairingEventType enum_param) {
  switch (enum_param) {
    case PAIRING_EVENT_TYPE_REQUESTPINCODE:
      return "requestPincode";
    case PAIRING_EVENT_TYPE_DISPLAYPINCODE:
      return "displayPincode";
    case PAIRING_EVENT_TYPE_REQUESTPASSKEY:
      return "requestPasskey";
    case PAIRING_EVENT_TYPE_DISPLAYPASSKEY:
      return "displayPasskey";
    case PAIRING_EVENT_TYPE_KEYSENTERED:
      return "keysEntered";
    case PAIRING_EVENT_TYPE_CONFIRMPASSKEY:
      return "confirmPasskey";
    case PAIRING_EVENT_TYPE_REQUESTAUTHORIZATION:
      return "requestAuthorization";
    case PAIRING_EVENT_TYPE_COMPLETE:
      return "complete";
    case PAIRING_EVENT_TYPE_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

PairingEventType ParsePairingEventType(const std::string& enum_string) {
  if (enum_string == "requestPincode")
    return PAIRING_EVENT_TYPE_REQUESTPINCODE;
  if (enum_string == "displayPincode")
    return PAIRING_EVENT_TYPE_DISPLAYPINCODE;
  if (enum_string == "requestPasskey")
    return PAIRING_EVENT_TYPE_REQUESTPASSKEY;
  if (enum_string == "displayPasskey")
    return PAIRING_EVENT_TYPE_DISPLAYPASSKEY;
  if (enum_string == "keysEntered")
    return PAIRING_EVENT_TYPE_KEYSENTERED;
  if (enum_string == "confirmPasskey")
    return PAIRING_EVENT_TYPE_CONFIRMPASSKEY;
  if (enum_string == "requestAuthorization")
    return PAIRING_EVENT_TYPE_REQUESTAUTHORIZATION;
  if (enum_string == "complete")
    return PAIRING_EVENT_TYPE_COMPLETE;
  return PAIRING_EVENT_TYPE_NONE;
}


std::string ToString(ConnectResultType enum_param) {
  switch (enum_param) {
    case CONNECT_RESULT_TYPE_ALREADYCONNECTED:
      return "alreadyConnected";
    case CONNECT_RESULT_TYPE_ATTRIBUTELENGTHINVALID:
      return "attributeLengthInvalid";
    case CONNECT_RESULT_TYPE_AUTHCANCELED:
      return "authCanceled";
    case CONNECT_RESULT_TYPE_AUTHFAILED:
      return "authFailed";
    case CONNECT_RESULT_TYPE_AUTHREJECTED:
      return "authRejected";
    case CONNECT_RESULT_TYPE_AUTHTIMEOUT:
      return "authTimeout";
    case CONNECT_RESULT_TYPE_CONNECTIONCONGESTED:
      return "connectionCongested";
    case CONNECT_RESULT_TYPE_FAILED:
      return "failed";
    case CONNECT_RESULT_TYPE_INPROGRESS:
      return "inProgress";
    case CONNECT_RESULT_TYPE_INSUFFICIENTENCRYPTION:
      return "insufficientEncryption";
    case CONNECT_RESULT_TYPE_OFFSETINVALID:
      return "offsetInvalid";
    case CONNECT_RESULT_TYPE_READNOTPERMITTED:
      return "readNotPermitted";
    case CONNECT_RESULT_TYPE_REQUESTNOTSUPPORTED:
      return "requestNotSupported";
    case CONNECT_RESULT_TYPE_SUCCESS:
      return "success";
    case CONNECT_RESULT_TYPE_UNKNOWNERROR:
      return "unknownError";
    case CONNECT_RESULT_TYPE_UNSUPPORTEDDEVICE:
      return "unsupportedDevice";
    case CONNECT_RESULT_TYPE_WRITENOTPERMITTED:
      return "writeNotPermitted";
    case CONNECT_RESULT_TYPE_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

ConnectResultType ParseConnectResultType(const std::string& enum_string) {
  if (enum_string == "alreadyConnected")
    return CONNECT_RESULT_TYPE_ALREADYCONNECTED;
  if (enum_string == "attributeLengthInvalid")
    return CONNECT_RESULT_TYPE_ATTRIBUTELENGTHINVALID;
  if (enum_string == "authCanceled")
    return CONNECT_RESULT_TYPE_AUTHCANCELED;
  if (enum_string == "authFailed")
    return CONNECT_RESULT_TYPE_AUTHFAILED;
  if (enum_string == "authRejected")
    return CONNECT_RESULT_TYPE_AUTHREJECTED;
  if (enum_string == "authTimeout")
    return CONNECT_RESULT_TYPE_AUTHTIMEOUT;
  if (enum_string == "connectionCongested")
    return CONNECT_RESULT_TYPE_CONNECTIONCONGESTED;
  if (enum_string == "failed")
    return CONNECT_RESULT_TYPE_FAILED;
  if (enum_string == "inProgress")
    return CONNECT_RESULT_TYPE_INPROGRESS;
  if (enum_string == "insufficientEncryption")
    return CONNECT_RESULT_TYPE_INSUFFICIENTENCRYPTION;
  if (enum_string == "offsetInvalid")
    return CONNECT_RESULT_TYPE_OFFSETINVALID;
  if (enum_string == "readNotPermitted")
    return CONNECT_RESULT_TYPE_READNOTPERMITTED;
  if (enum_string == "requestNotSupported")
    return CONNECT_RESULT_TYPE_REQUESTNOTSUPPORTED;
  if (enum_string == "success")
    return CONNECT_RESULT_TYPE_SUCCESS;
  if (enum_string == "unknownError")
    return CONNECT_RESULT_TYPE_UNKNOWNERROR;
  if (enum_string == "unsupportedDevice")
    return CONNECT_RESULT_TYPE_UNSUPPORTEDDEVICE;
  if (enum_string == "writeNotPermitted")
    return CONNECT_RESULT_TYPE_WRITENOTPERMITTED;
  return CONNECT_RESULT_TYPE_NONE;
}


std::string ToString(PairingResponse enum_param) {
  switch (enum_param) {
    case PAIRING_RESPONSE_CONFIRM:
      return "confirm";
    case PAIRING_RESPONSE_REJECT:
      return "reject";
    case PAIRING_RESPONSE_CANCEL:
      return "cancel";
    case PAIRING_RESPONSE_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

PairingResponse ParsePairingResponse(const std::string& enum_string) {
  if (enum_string == "confirm")
    return PAIRING_RESPONSE_CONFIRM;
  if (enum_string == "reject")
    return PAIRING_RESPONSE_REJECT;
  if (enum_string == "cancel")
    return PAIRING_RESPONSE_CANCEL;
  return PAIRING_RESPONSE_NONE;
}


std::string ToString(TransportType enum_param) {
  switch (enum_param) {
    case TRANSPORT_TYPE_LE:
      return "le";
    case TRANSPORT_TYPE_BREDR:
      return "bredr";
    case TRANSPORT_TYPE_DUAL:
      return "dual";
    case TRANSPORT_TYPE_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

TransportType ParseTransportType(const std::string& enum_string) {
  if (enum_string == "le")
    return TRANSPORT_TYPE_LE;
  if (enum_string == "bredr")
    return TRANSPORT_TYPE_BREDR;
  if (enum_string == "dual")
    return TRANSPORT_TYPE_DUAL;
  return TRANSPORT_TYPE_NONE;
}


PairingEvent::PairingEvent()
: pairing(PAIRING_EVENT_TYPE_NONE) {}

PairingEvent::~PairingEvent() {}

// static
bool PairingEvent::Populate(
    const base::Value& value, PairingEvent* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* pairing_value = NULL;
  if (!dict->GetWithoutPathExpansion("pairing", &pairing_value)) {
    return false;
  }
  {
    std::string pairing_event_type_as_string;
    if (!pairing_value->GetAsString(&pairing_event_type_as_string)) {
      return false;
    }
    out->pairing = ParsePairingEventType(pairing_event_type_as_string);
    if (out->pairing == PAIRING_EVENT_TYPE_NONE) {
      return false;
    }
  }

  const base::Value* device_value = NULL;
  if (!dict->GetWithoutPathExpansion("device", &device_value)) {
    return false;
  }
  {
    const base::DictionaryValue* dictionary = NULL;
    if (!device_value->GetAsDictionary(&dictionary)) {
      return false;
    }
    if (!extensions::api::bluetooth::Device::Populate(*dictionary, &out->device)) {
      return false;
    }
  }

  const base::Value* pincode_value = NULL;
  if (dict->GetWithoutPathExpansion("pincode", &pincode_value)) {
    {
      std::string temp;
      if (!pincode_value->GetAsString(&temp)) {
        out->pincode.reset();
        return false;
      }
      else
        out->pincode.reset(new std::string(temp));
    }
  }

  const base::Value* passkey_value = NULL;
  if (dict->GetWithoutPathExpansion("passkey", &passkey_value)) {
    {
      int temp;
      if (!passkey_value->GetAsInteger(&temp)) {
        out->passkey.reset();
        return false;
      }
      else
        out->passkey.reset(new int(temp));
    }
  }

  const base::Value* entered_key_value = NULL;
  if (dict->GetWithoutPathExpansion("enteredKey", &entered_key_value)) {
    {
      int temp;
      if (!entered_key_value->GetAsInteger(&temp)) {
        out->entered_key.reset();
        return false;
      }
      else
        out->entered_key.reset(new int(temp));
    }
  }

  return true;
}

// static
scoped_ptr<PairingEvent> PairingEvent::FromValue(const base::Value& value) {
  scoped_ptr<PairingEvent> out(new PairingEvent());
  if (!Populate(value, out.get()))
    return scoped_ptr<PairingEvent>();
  return out;
}

scoped_ptr<base::DictionaryValue> PairingEvent::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("pairing", new base::StringValue(bluetooth_private::ToString(this->pairing)));

  value->SetWithoutPathExpansion("device", (this->device).ToValue().release());

  if (this->pincode.get()) {
    value->SetWithoutPathExpansion("pincode", new base::StringValue(*this->pincode));

  }
  if (this->passkey.get()) {
    value->SetWithoutPathExpansion("passkey", new base::FundamentalValue(*this->passkey));

  }
  if (this->entered_key.get()) {
    value->SetWithoutPathExpansion("enteredKey", new base::FundamentalValue(*this->entered_key));

  }

  return value;
}


NewAdapterState::NewAdapterState()
 {}

NewAdapterState::~NewAdapterState() {}

// static
bool NewAdapterState::Populate(
    const base::Value& value, NewAdapterState* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
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

  const base::Value* powered_value = NULL;
  if (dict->GetWithoutPathExpansion("powered", &powered_value)) {
    {
      bool temp;
      if (!powered_value->GetAsBoolean(&temp)) {
        out->powered.reset();
        return false;
      }
      else
        out->powered.reset(new bool(temp));
    }
  }

  const base::Value* discoverable_value = NULL;
  if (dict->GetWithoutPathExpansion("discoverable", &discoverable_value)) {
    {
      bool temp;
      if (!discoverable_value->GetAsBoolean(&temp)) {
        out->discoverable.reset();
        return false;
      }
      else
        out->discoverable.reset(new bool(temp));
    }
  }

  return true;
}

// static
scoped_ptr<NewAdapterState> NewAdapterState::FromValue(const base::Value& value) {
  scoped_ptr<NewAdapterState> out(new NewAdapterState());
  if (!Populate(value, out.get()))
    return scoped_ptr<NewAdapterState>();
  return out;
}

scoped_ptr<base::DictionaryValue> NewAdapterState::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->name.get()) {
    value->SetWithoutPathExpansion("name", new base::StringValue(*this->name));

  }
  if (this->powered.get()) {
    value->SetWithoutPathExpansion("powered", new base::FundamentalValue(*this->powered));

  }
  if (this->discoverable.get()) {
    value->SetWithoutPathExpansion("discoverable", new base::FundamentalValue(*this->discoverable));

  }

  return value;
}


SetPairingResponseOptions::SetPairingResponseOptions()
: response(PAIRING_RESPONSE_NONE) {}

SetPairingResponseOptions::~SetPairingResponseOptions() {}

// static
bool SetPairingResponseOptions::Populate(
    const base::Value& value, SetPairingResponseOptions* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* device_value = NULL;
  if (!dict->GetWithoutPathExpansion("device", &device_value)) {
    return false;
  }
  {
    const base::DictionaryValue* dictionary = NULL;
    if (!device_value->GetAsDictionary(&dictionary)) {
      return false;
    }
    if (!extensions::api::bluetooth::Device::Populate(*dictionary, &out->device)) {
      return false;
    }
  }

  const base::Value* response_value = NULL;
  if (!dict->GetWithoutPathExpansion("response", &response_value)) {
    return false;
  }
  {
    std::string pairing_response_as_string;
    if (!response_value->GetAsString(&pairing_response_as_string)) {
      return false;
    }
    out->response = ParsePairingResponse(pairing_response_as_string);
    if (out->response == PAIRING_RESPONSE_NONE) {
      return false;
    }
  }

  const base::Value* pincode_value = NULL;
  if (dict->GetWithoutPathExpansion("pincode", &pincode_value)) {
    {
      std::string temp;
      if (!pincode_value->GetAsString(&temp)) {
        out->pincode.reset();
        return false;
      }
      else
        out->pincode.reset(new std::string(temp));
    }
  }

  const base::Value* passkey_value = NULL;
  if (dict->GetWithoutPathExpansion("passkey", &passkey_value)) {
    {
      int temp;
      if (!passkey_value->GetAsInteger(&temp)) {
        out->passkey.reset();
        return false;
      }
      else
        out->passkey.reset(new int(temp));
    }
  }

  return true;
}

// static
scoped_ptr<SetPairingResponseOptions> SetPairingResponseOptions::FromValue(const base::Value& value) {
  scoped_ptr<SetPairingResponseOptions> out(new SetPairingResponseOptions());
  if (!Populate(value, out.get()))
    return scoped_ptr<SetPairingResponseOptions>();
  return out;
}

scoped_ptr<base::DictionaryValue> SetPairingResponseOptions::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("device", (this->device).ToValue().release());

  value->SetWithoutPathExpansion("response", new base::StringValue(bluetooth_private::ToString(this->response)));

  if (this->pincode.get()) {
    value->SetWithoutPathExpansion("pincode", new base::StringValue(*this->pincode));

  }
  if (this->passkey.get()) {
    value->SetWithoutPathExpansion("passkey", new base::FundamentalValue(*this->passkey));

  }

  return value;
}


DiscoveryFilter::Uuids::Uuids()
 {}

DiscoveryFilter::Uuids::~Uuids() {}

// static
bool DiscoveryFilter::Uuids::Populate(
    const base::Value& value, Uuids* out) {
  if (value.IsType(base::Value::TYPE_STRING)) {
    {
      std::string temp;
      if (!(&value)->GetAsString(&temp)) {
        out->as_string.reset();
        return false;
      }
      else
        out->as_string.reset(new std::string(temp));
    }
    return true;
  }
  if (value.IsType(base::Value::TYPE_LIST)) {
    {
      const base::ListValue* list = NULL;
      if (!(&value)->GetAsList(&list)) {
        return false;
      }
      else {
        if (!json_schema_compiler::util::PopulateOptionalArrayFromList(*list, &out->as_strings)) {
          return false;
        }
      }
    }
    return true;
  }
  return false;
}

scoped_ptr<base::Value> DiscoveryFilter::Uuids::ToValue() const {
  scoped_ptr<base::Value> result;
  if (as_string) {
    DCHECK(!result) << "Cannot set multiple choices for uuids";
    result.reset(new base::StringValue(*as_string));

  }
  if (as_strings) {
    DCHECK(!result) << "Cannot set multiple choices for uuids";
    result.reset(json_schema_compiler::util::CreateValueFromOptionalArray(as_strings).release());

  }
  DCHECK(result) << "Must set at least one choice for uuids";
  return result;
}



DiscoveryFilter::DiscoveryFilter()
: transport(TRANSPORT_TYPE_NONE) {}

DiscoveryFilter::~DiscoveryFilter() {}

// static
bool DiscoveryFilter::Populate(
    const base::Value& value, DiscoveryFilter* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  out->transport = TRANSPORT_TYPE_NONE;
  const base::Value* transport_value = NULL;
  if (dict->GetWithoutPathExpansion("transport", &transport_value)) {
    {
      std::string transport_type_as_string;
      if (!transport_value->GetAsString(&transport_type_as_string)) {
        return false;
      }
      out->transport = ParseTransportType(transport_type_as_string);
      if (out->transport == TRANSPORT_TYPE_NONE) {
        return false;
      }
    }
    } else {
    out->transport = TRANSPORT_TYPE_NONE;
  }

  const base::Value* uuids_value = NULL;
  if (dict->GetWithoutPathExpansion("uuids", &uuids_value)) {
    {
      scoped_ptr<Uuids> temp(new Uuids());
      if (!Uuids::Populate(*uuids_value, temp.get()))
        return false;
      out->uuids = std::move(temp);
    }
  }

  const base::Value* rssi_value = NULL;
  if (dict->GetWithoutPathExpansion("rssi", &rssi_value)) {
    {
      int temp;
      if (!rssi_value->GetAsInteger(&temp)) {
        out->rssi.reset();
        return false;
      }
      else
        out->rssi.reset(new int(temp));
    }
  }

  const base::Value* pathloss_value = NULL;
  if (dict->GetWithoutPathExpansion("pathloss", &pathloss_value)) {
    {
      int temp;
      if (!pathloss_value->GetAsInteger(&temp)) {
        out->pathloss.reset();
        return false;
      }
      else
        out->pathloss.reset(new int(temp));
    }
  }

  return true;
}

// static
scoped_ptr<DiscoveryFilter> DiscoveryFilter::FromValue(const base::Value& value) {
  scoped_ptr<DiscoveryFilter> out(new DiscoveryFilter());
  if (!Populate(value, out.get()))
    return scoped_ptr<DiscoveryFilter>();
  return out;
}

scoped_ptr<base::DictionaryValue> DiscoveryFilter::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->transport != TRANSPORT_TYPE_NONE) {
    value->SetWithoutPathExpansion("transport", new base::StringValue(bluetooth_private::ToString(this->transport)));

  }
  if (this->uuids.get()) {
    value->SetWithoutPathExpansion("uuids", (this->uuids)->ToValue().release());

  }
  if (this->rssi.get()) {
    value->SetWithoutPathExpansion("rssi", new base::FundamentalValue(*this->rssi));

  }
  if (this->pathloss.get()) {
    value->SetWithoutPathExpansion("pathloss", new base::FundamentalValue(*this->pathloss));

  }

  return value;
}



//
// Functions
//

namespace SetAdapterState {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* adapter_state_value = NULL;
  if (args.Get(0, &adapter_state_value) &&
      !adapter_state_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!adapter_state_value->GetAsDictionary(&dictionary)) {
        return scoped_ptr<Params>();
      }
      if (!NewAdapterState::Populate(*dictionary, &params->adapter_state)) {
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
}  // namespace SetAdapterState

namespace SetPairingResponse {

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
      if (!SetPairingResponseOptions::Populate(*dictionary, &params->options)) {
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
}  // namespace SetPairingResponse

namespace DisconnectAll {

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


scoped_ptr<base::ListValue> Results::Create() {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}
}  // namespace DisconnectAll

namespace ForgetDevice {

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


scoped_ptr<base::ListValue> Results::Create() {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}
}  // namespace ForgetDevice

namespace SetDiscoveryFilter {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* discovery_filter_value = NULL;
  if (args.Get(0, &discovery_filter_value) &&
      !discovery_filter_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!discovery_filter_value->GetAsDictionary(&dictionary)) {
        return scoped_ptr<Params>();
      }
      if (!DiscoveryFilter::Populate(*dictionary, &params->discovery_filter)) {
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
}  // namespace SetDiscoveryFilter

namespace Connect {

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


scoped_ptr<base::ListValue> Results::Create(const ConnectResultType& result) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(new base::StringValue(bluetooth_private::ToString(result)));

  return create_results;
}
}  // namespace Connect

namespace Pair {

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


scoped_ptr<base::ListValue> Results::Create() {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}
}  // namespace Pair

//
// Events
//

namespace OnPairing {

const char kEventName[] = "bluetoothPrivate.onPairing";

scoped_ptr<base::ListValue> Create(const PairingEvent& pairing_event) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((pairing_event).ToValue().release());

  return create_results;
}

}  // namespace OnPairing

}  // namespace bluetooth_private
}  // namespace api
}  // namespace extensions


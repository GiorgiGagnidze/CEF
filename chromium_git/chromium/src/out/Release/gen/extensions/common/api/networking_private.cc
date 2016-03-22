// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/networking_private.idl
// DO NOT EDIT.

#include "tools/json_schema_compiler/util.h"
#include "base/logging.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/utf_string_conversions.h"
#include "extensions/common/api/networking_private.h"
#include <set>
#include <utility>

using base::UTF8ToUTF16;

namespace extensions {
namespace api {
namespace networking_private {
//
// Types
//

std::string ToString(ActivationStateType enum_param) {
  switch (enum_param) {
    case ACTIVATION_STATE_TYPE_ACTIVATED:
      return "Activated";
    case ACTIVATION_STATE_TYPE_ACTIVATING:
      return "Activating";
    case ACTIVATION_STATE_TYPE_NOTACTIVATED:
      return "NotActivated";
    case ACTIVATION_STATE_TYPE_PARTIALLYACTIVATED:
      return "PartiallyActivated";
    case ACTIVATION_STATE_TYPE_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

ActivationStateType ParseActivationStateType(const std::string& enum_string) {
  if (enum_string == "Activated")
    return ACTIVATION_STATE_TYPE_ACTIVATED;
  if (enum_string == "Activating")
    return ACTIVATION_STATE_TYPE_ACTIVATING;
  if (enum_string == "NotActivated")
    return ACTIVATION_STATE_TYPE_NOTACTIVATED;
  if (enum_string == "PartiallyActivated")
    return ACTIVATION_STATE_TYPE_PARTIALLYACTIVATED;
  return ACTIVATION_STATE_TYPE_NONE;
}


std::string ToString(CaptivePortalStatus enum_param) {
  switch (enum_param) {
    case CAPTIVE_PORTAL_STATUS_UNKNOWN:
      return "Unknown";
    case CAPTIVE_PORTAL_STATUS_OFFLINE:
      return "Offline";
    case CAPTIVE_PORTAL_STATUS_ONLINE:
      return "Online";
    case CAPTIVE_PORTAL_STATUS_PORTAL:
      return "Portal";
    case CAPTIVE_PORTAL_STATUS_PROXYAUTHREQUIRED:
      return "ProxyAuthRequired";
    case CAPTIVE_PORTAL_STATUS_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

CaptivePortalStatus ParseCaptivePortalStatus(const std::string& enum_string) {
  if (enum_string == "Unknown")
    return CAPTIVE_PORTAL_STATUS_UNKNOWN;
  if (enum_string == "Offline")
    return CAPTIVE_PORTAL_STATUS_OFFLINE;
  if (enum_string == "Online")
    return CAPTIVE_PORTAL_STATUS_ONLINE;
  if (enum_string == "Portal")
    return CAPTIVE_PORTAL_STATUS_PORTAL;
  if (enum_string == "ProxyAuthRequired")
    return CAPTIVE_PORTAL_STATUS_PROXYAUTHREQUIRED;
  return CAPTIVE_PORTAL_STATUS_NONE;
}


std::string ToString(ConnectionStateType enum_param) {
  switch (enum_param) {
    case CONNECTION_STATE_TYPE_CONNECTED:
      return "Connected";
    case CONNECTION_STATE_TYPE_CONNECTING:
      return "Connecting";
    case CONNECTION_STATE_TYPE_NOTCONNECTED:
      return "NotConnected";
    case CONNECTION_STATE_TYPE_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

ConnectionStateType ParseConnectionStateType(const std::string& enum_string) {
  if (enum_string == "Connected")
    return CONNECTION_STATE_TYPE_CONNECTED;
  if (enum_string == "Connecting")
    return CONNECTION_STATE_TYPE_CONNECTING;
  if (enum_string == "NotConnected")
    return CONNECTION_STATE_TYPE_NOTCONNECTED;
  return CONNECTION_STATE_TYPE_NONE;
}


std::string ToString(DeviceStateType enum_param) {
  switch (enum_param) {
    case DEVICE_STATE_TYPE_UNINITIALIZED:
      return "Uninitialized";
    case DEVICE_STATE_TYPE_DISABLED:
      return "Disabled";
    case DEVICE_STATE_TYPE_ENABLING:
      return "Enabling";
    case DEVICE_STATE_TYPE_ENABLED:
      return "Enabled";
    case DEVICE_STATE_TYPE_PROHIBITED:
      return "Prohibited";
    case DEVICE_STATE_TYPE_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

DeviceStateType ParseDeviceStateType(const std::string& enum_string) {
  if (enum_string == "Uninitialized")
    return DEVICE_STATE_TYPE_UNINITIALIZED;
  if (enum_string == "Disabled")
    return DEVICE_STATE_TYPE_DISABLED;
  if (enum_string == "Enabling")
    return DEVICE_STATE_TYPE_ENABLING;
  if (enum_string == "Enabled")
    return DEVICE_STATE_TYPE_ENABLED;
  if (enum_string == "Prohibited")
    return DEVICE_STATE_TYPE_PROHIBITED;
  return DEVICE_STATE_TYPE_NONE;
}


std::string ToString(IPConfigType enum_param) {
  switch (enum_param) {
    case IP_CONFIG_TYPE_DHCP:
      return "DHCP";
    case IP_CONFIG_TYPE_STATIC:
      return "Static";
    case IP_CONFIG_TYPE_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

IPConfigType ParseIPConfigType(const std::string& enum_string) {
  if (enum_string == "DHCP")
    return IP_CONFIG_TYPE_DHCP;
  if (enum_string == "Static")
    return IP_CONFIG_TYPE_STATIC;
  return IP_CONFIG_TYPE_NONE;
}


std::string ToString(NetworkType enum_param) {
  switch (enum_param) {
    case NETWORK_TYPE_ALL:
      return "All";
    case NETWORK_TYPE_CELLULAR:
      return "Cellular";
    case NETWORK_TYPE_ETHERNET:
      return "Ethernet";
    case NETWORK_TYPE_VPN:
      return "VPN";
    case NETWORK_TYPE_WIRELESS:
      return "Wireless";
    case NETWORK_TYPE_WIFI:
      return "WiFi";
    case NETWORK_TYPE_WIMAX:
      return "WiMAX";
    case NETWORK_TYPE_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

NetworkType ParseNetworkType(const std::string& enum_string) {
  if (enum_string == "All")
    return NETWORK_TYPE_ALL;
  if (enum_string == "Cellular")
    return NETWORK_TYPE_CELLULAR;
  if (enum_string == "Ethernet")
    return NETWORK_TYPE_ETHERNET;
  if (enum_string == "VPN")
    return NETWORK_TYPE_VPN;
  if (enum_string == "Wireless")
    return NETWORK_TYPE_WIRELESS;
  if (enum_string == "WiFi")
    return NETWORK_TYPE_WIFI;
  if (enum_string == "WiMAX")
    return NETWORK_TYPE_WIMAX;
  return NETWORK_TYPE_NONE;
}


std::string ToString(ProxySettingsType enum_param) {
  switch (enum_param) {
    case PROXY_SETTINGS_TYPE_DIRECT:
      return "Direct";
    case PROXY_SETTINGS_TYPE_MANUAL:
      return "Manual";
    case PROXY_SETTINGS_TYPE_PAC:
      return "PAC";
    case PROXY_SETTINGS_TYPE_WPAD:
      return "WPAD";
    case PROXY_SETTINGS_TYPE_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

ProxySettingsType ParseProxySettingsType(const std::string& enum_string) {
  if (enum_string == "Direct")
    return PROXY_SETTINGS_TYPE_DIRECT;
  if (enum_string == "Manual")
    return PROXY_SETTINGS_TYPE_MANUAL;
  if (enum_string == "PAC")
    return PROXY_SETTINGS_TYPE_PAC;
  if (enum_string == "WPAD")
    return PROXY_SETTINGS_TYPE_WPAD;
  return PROXY_SETTINGS_TYPE_NONE;
}


ManagedBoolean::ManagedBoolean()
 {}

ManagedBoolean::~ManagedBoolean() {}

// static
bool ManagedBoolean::Populate(
    const base::Value& value, ManagedBoolean* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* active_value = NULL;
  if (dict->GetWithoutPathExpansion("Active", &active_value)) {
    {
      bool temp;
      if (!active_value->GetAsBoolean(&temp)) {
        out->active.reset();
        return false;
      }
      else
        out->active.reset(new bool(temp));
    }
  }

  const base::Value* effective_value = NULL;
  if (dict->GetWithoutPathExpansion("Effective", &effective_value)) {
    {
      std::string temp;
      if (!effective_value->GetAsString(&temp)) {
        out->effective.reset();
        return false;
      }
      else
        out->effective.reset(new std::string(temp));
    }
  }

  const base::Value* user_policy_value = NULL;
  if (dict->GetWithoutPathExpansion("UserPolicy", &user_policy_value)) {
    {
      bool temp;
      if (!user_policy_value->GetAsBoolean(&temp)) {
        out->user_policy.reset();
        return false;
      }
      else
        out->user_policy.reset(new bool(temp));
    }
  }

  const base::Value* device_policy_value = NULL;
  if (dict->GetWithoutPathExpansion("DevicePolicy", &device_policy_value)) {
    {
      bool temp;
      if (!device_policy_value->GetAsBoolean(&temp)) {
        out->device_policy.reset();
        return false;
      }
      else
        out->device_policy.reset(new bool(temp));
    }
  }

  const base::Value* user_setting_value = NULL;
  if (dict->GetWithoutPathExpansion("UserSetting", &user_setting_value)) {
    {
      bool temp;
      if (!user_setting_value->GetAsBoolean(&temp)) {
        out->user_setting.reset();
        return false;
      }
      else
        out->user_setting.reset(new bool(temp));
    }
  }

  const base::Value* shared_setting_value = NULL;
  if (dict->GetWithoutPathExpansion("SharedSetting", &shared_setting_value)) {
    {
      bool temp;
      if (!shared_setting_value->GetAsBoolean(&temp)) {
        out->shared_setting.reset();
        return false;
      }
      else
        out->shared_setting.reset(new bool(temp));
    }
  }

  const base::Value* user_editable_value = NULL;
  if (dict->GetWithoutPathExpansion("UserEditable", &user_editable_value)) {
    {
      bool temp;
      if (!user_editable_value->GetAsBoolean(&temp)) {
        out->user_editable.reset();
        return false;
      }
      else
        out->user_editable.reset(new bool(temp));
    }
  }

  const base::Value* device_editable_value = NULL;
  if (dict->GetWithoutPathExpansion("DeviceEditable", &device_editable_value)) {
    {
      bool temp;
      if (!device_editable_value->GetAsBoolean(&temp)) {
        out->device_editable.reset();
        return false;
      }
      else
        out->device_editable.reset(new bool(temp));
    }
  }

  return true;
}

// static
scoped_ptr<ManagedBoolean> ManagedBoolean::FromValue(const base::Value& value) {
  scoped_ptr<ManagedBoolean> out(new ManagedBoolean());
  if (!Populate(value, out.get()))
    return scoped_ptr<ManagedBoolean>();
  return out;
}

scoped_ptr<base::DictionaryValue> ManagedBoolean::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->active.get()) {
    value->SetWithoutPathExpansion("Active", new base::FundamentalValue(*this->active));

  }
  if (this->effective.get()) {
    value->SetWithoutPathExpansion("Effective", new base::StringValue(*this->effective));

  }
  if (this->user_policy.get()) {
    value->SetWithoutPathExpansion("UserPolicy", new base::FundamentalValue(*this->user_policy));

  }
  if (this->device_policy.get()) {
    value->SetWithoutPathExpansion("DevicePolicy", new base::FundamentalValue(*this->device_policy));

  }
  if (this->user_setting.get()) {
    value->SetWithoutPathExpansion("UserSetting", new base::FundamentalValue(*this->user_setting));

  }
  if (this->shared_setting.get()) {
    value->SetWithoutPathExpansion("SharedSetting", new base::FundamentalValue(*this->shared_setting));

  }
  if (this->user_editable.get()) {
    value->SetWithoutPathExpansion("UserEditable", new base::FundamentalValue(*this->user_editable));

  }
  if (this->device_editable.get()) {
    value->SetWithoutPathExpansion("DeviceEditable", new base::FundamentalValue(*this->device_editable));

  }

  return value;
}


ManagedLong::ManagedLong()
 {}

ManagedLong::~ManagedLong() {}

// static
bool ManagedLong::Populate(
    const base::Value& value, ManagedLong* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* active_value = NULL;
  if (dict->GetWithoutPathExpansion("Active", &active_value)) {
    {
      int temp;
      if (!active_value->GetAsInteger(&temp)) {
        out->active.reset();
        return false;
      }
      else
        out->active.reset(new int(temp));
    }
  }

  const base::Value* effective_value = NULL;
  if (dict->GetWithoutPathExpansion("Effective", &effective_value)) {
    {
      std::string temp;
      if (!effective_value->GetAsString(&temp)) {
        out->effective.reset();
        return false;
      }
      else
        out->effective.reset(new std::string(temp));
    }
  }

  const base::Value* user_policy_value = NULL;
  if (dict->GetWithoutPathExpansion("UserPolicy", &user_policy_value)) {
    {
      int temp;
      if (!user_policy_value->GetAsInteger(&temp)) {
        out->user_policy.reset();
        return false;
      }
      else
        out->user_policy.reset(new int(temp));
    }
  }

  const base::Value* device_policy_value = NULL;
  if (dict->GetWithoutPathExpansion("DevicePolicy", &device_policy_value)) {
    {
      int temp;
      if (!device_policy_value->GetAsInteger(&temp)) {
        out->device_policy.reset();
        return false;
      }
      else
        out->device_policy.reset(new int(temp));
    }
  }

  const base::Value* user_setting_value = NULL;
  if (dict->GetWithoutPathExpansion("UserSetting", &user_setting_value)) {
    {
      int temp;
      if (!user_setting_value->GetAsInteger(&temp)) {
        out->user_setting.reset();
        return false;
      }
      else
        out->user_setting.reset(new int(temp));
    }
  }

  const base::Value* shared_setting_value = NULL;
  if (dict->GetWithoutPathExpansion("SharedSetting", &shared_setting_value)) {
    {
      int temp;
      if (!shared_setting_value->GetAsInteger(&temp)) {
        out->shared_setting.reset();
        return false;
      }
      else
        out->shared_setting.reset(new int(temp));
    }
  }

  const base::Value* user_editable_value = NULL;
  if (dict->GetWithoutPathExpansion("UserEditable", &user_editable_value)) {
    {
      bool temp;
      if (!user_editable_value->GetAsBoolean(&temp)) {
        out->user_editable.reset();
        return false;
      }
      else
        out->user_editable.reset(new bool(temp));
    }
  }

  const base::Value* device_editable_value = NULL;
  if (dict->GetWithoutPathExpansion("DeviceEditable", &device_editable_value)) {
    {
      bool temp;
      if (!device_editable_value->GetAsBoolean(&temp)) {
        out->device_editable.reset();
        return false;
      }
      else
        out->device_editable.reset(new bool(temp));
    }
  }

  return true;
}

// static
scoped_ptr<ManagedLong> ManagedLong::FromValue(const base::Value& value) {
  scoped_ptr<ManagedLong> out(new ManagedLong());
  if (!Populate(value, out.get()))
    return scoped_ptr<ManagedLong>();
  return out;
}

scoped_ptr<base::DictionaryValue> ManagedLong::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->active.get()) {
    value->SetWithoutPathExpansion("Active", new base::FundamentalValue(*this->active));

  }
  if (this->effective.get()) {
    value->SetWithoutPathExpansion("Effective", new base::StringValue(*this->effective));

  }
  if (this->user_policy.get()) {
    value->SetWithoutPathExpansion("UserPolicy", new base::FundamentalValue(*this->user_policy));

  }
  if (this->device_policy.get()) {
    value->SetWithoutPathExpansion("DevicePolicy", new base::FundamentalValue(*this->device_policy));

  }
  if (this->user_setting.get()) {
    value->SetWithoutPathExpansion("UserSetting", new base::FundamentalValue(*this->user_setting));

  }
  if (this->shared_setting.get()) {
    value->SetWithoutPathExpansion("SharedSetting", new base::FundamentalValue(*this->shared_setting));

  }
  if (this->user_editable.get()) {
    value->SetWithoutPathExpansion("UserEditable", new base::FundamentalValue(*this->user_editable));

  }
  if (this->device_editable.get()) {
    value->SetWithoutPathExpansion("DeviceEditable", new base::FundamentalValue(*this->device_editable));

  }

  return value;
}


ManagedDOMString::ManagedDOMString()
 {}

ManagedDOMString::~ManagedDOMString() {}

// static
bool ManagedDOMString::Populate(
    const base::Value& value, ManagedDOMString* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* active_value = NULL;
  if (dict->GetWithoutPathExpansion("Active", &active_value)) {
    {
      std::string temp;
      if (!active_value->GetAsString(&temp)) {
        out->active.reset();
        return false;
      }
      else
        out->active.reset(new std::string(temp));
    }
  }

  const base::Value* effective_value = NULL;
  if (dict->GetWithoutPathExpansion("Effective", &effective_value)) {
    {
      std::string temp;
      if (!effective_value->GetAsString(&temp)) {
        out->effective.reset();
        return false;
      }
      else
        out->effective.reset(new std::string(temp));
    }
  }

  const base::Value* user_policy_value = NULL;
  if (dict->GetWithoutPathExpansion("UserPolicy", &user_policy_value)) {
    {
      std::string temp;
      if (!user_policy_value->GetAsString(&temp)) {
        out->user_policy.reset();
        return false;
      }
      else
        out->user_policy.reset(new std::string(temp));
    }
  }

  const base::Value* device_policy_value = NULL;
  if (dict->GetWithoutPathExpansion("DevicePolicy", &device_policy_value)) {
    {
      std::string temp;
      if (!device_policy_value->GetAsString(&temp)) {
        out->device_policy.reset();
        return false;
      }
      else
        out->device_policy.reset(new std::string(temp));
    }
  }

  const base::Value* user_setting_value = NULL;
  if (dict->GetWithoutPathExpansion("UserSetting", &user_setting_value)) {
    {
      std::string temp;
      if (!user_setting_value->GetAsString(&temp)) {
        out->user_setting.reset();
        return false;
      }
      else
        out->user_setting.reset(new std::string(temp));
    }
  }

  const base::Value* shared_setting_value = NULL;
  if (dict->GetWithoutPathExpansion("SharedSetting", &shared_setting_value)) {
    {
      std::string temp;
      if (!shared_setting_value->GetAsString(&temp)) {
        out->shared_setting.reset();
        return false;
      }
      else
        out->shared_setting.reset(new std::string(temp));
    }
  }

  const base::Value* user_editable_value = NULL;
  if (dict->GetWithoutPathExpansion("UserEditable", &user_editable_value)) {
    {
      bool temp;
      if (!user_editable_value->GetAsBoolean(&temp)) {
        out->user_editable.reset();
        return false;
      }
      else
        out->user_editable.reset(new bool(temp));
    }
  }

  const base::Value* device_editable_value = NULL;
  if (dict->GetWithoutPathExpansion("DeviceEditable", &device_editable_value)) {
    {
      bool temp;
      if (!device_editable_value->GetAsBoolean(&temp)) {
        out->device_editable.reset();
        return false;
      }
      else
        out->device_editable.reset(new bool(temp));
    }
  }

  return true;
}

// static
scoped_ptr<ManagedDOMString> ManagedDOMString::FromValue(const base::Value& value) {
  scoped_ptr<ManagedDOMString> out(new ManagedDOMString());
  if (!Populate(value, out.get()))
    return scoped_ptr<ManagedDOMString>();
  return out;
}

scoped_ptr<base::DictionaryValue> ManagedDOMString::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->active.get()) {
    value->SetWithoutPathExpansion("Active", new base::StringValue(*this->active));

  }
  if (this->effective.get()) {
    value->SetWithoutPathExpansion("Effective", new base::StringValue(*this->effective));

  }
  if (this->user_policy.get()) {
    value->SetWithoutPathExpansion("UserPolicy", new base::StringValue(*this->user_policy));

  }
  if (this->device_policy.get()) {
    value->SetWithoutPathExpansion("DevicePolicy", new base::StringValue(*this->device_policy));

  }
  if (this->user_setting.get()) {
    value->SetWithoutPathExpansion("UserSetting", new base::StringValue(*this->user_setting));

  }
  if (this->shared_setting.get()) {
    value->SetWithoutPathExpansion("SharedSetting", new base::StringValue(*this->shared_setting));

  }
  if (this->user_editable.get()) {
    value->SetWithoutPathExpansion("UserEditable", new base::FundamentalValue(*this->user_editable));

  }
  if (this->device_editable.get()) {
    value->SetWithoutPathExpansion("DeviceEditable", new base::FundamentalValue(*this->device_editable));

  }

  return value;
}


ManagedDOMStringList::ManagedDOMStringList()
 {}

ManagedDOMStringList::~ManagedDOMStringList() {}

// static
bool ManagedDOMStringList::Populate(
    const base::Value& value, ManagedDOMStringList* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* active_value = NULL;
  if (dict->GetWithoutPathExpansion("Active", &active_value)) {
    {
      const base::ListValue* list = NULL;
      if (!active_value->GetAsList(&list)) {
        return false;
      }
      else {
        if (!json_schema_compiler::util::PopulateOptionalArrayFromList(*list, &out->active)) {
          return false;
        }
      }
    }
  }

  const base::Value* effective_value = NULL;
  if (dict->GetWithoutPathExpansion("Effective", &effective_value)) {
    {
      std::string temp;
      if (!effective_value->GetAsString(&temp)) {
        out->effective.reset();
        return false;
      }
      else
        out->effective.reset(new std::string(temp));
    }
  }

  const base::Value* user_policy_value = NULL;
  if (dict->GetWithoutPathExpansion("UserPolicy", &user_policy_value)) {
    {
      const base::ListValue* list = NULL;
      if (!user_policy_value->GetAsList(&list)) {
        return false;
      }
      else {
        if (!json_schema_compiler::util::PopulateOptionalArrayFromList(*list, &out->user_policy)) {
          return false;
        }
      }
    }
  }

  const base::Value* device_policy_value = NULL;
  if (dict->GetWithoutPathExpansion("DevicePolicy", &device_policy_value)) {
    {
      const base::ListValue* list = NULL;
      if (!device_policy_value->GetAsList(&list)) {
        return false;
      }
      else {
        if (!json_schema_compiler::util::PopulateOptionalArrayFromList(*list, &out->device_policy)) {
          return false;
        }
      }
    }
  }

  const base::Value* user_setting_value = NULL;
  if (dict->GetWithoutPathExpansion("UserSetting", &user_setting_value)) {
    {
      const base::ListValue* list = NULL;
      if (!user_setting_value->GetAsList(&list)) {
        return false;
      }
      else {
        if (!json_schema_compiler::util::PopulateOptionalArrayFromList(*list, &out->user_setting)) {
          return false;
        }
      }
    }
  }

  const base::Value* shared_setting_value = NULL;
  if (dict->GetWithoutPathExpansion("SharedSetting", &shared_setting_value)) {
    {
      const base::ListValue* list = NULL;
      if (!shared_setting_value->GetAsList(&list)) {
        return false;
      }
      else {
        if (!json_schema_compiler::util::PopulateOptionalArrayFromList(*list, &out->shared_setting)) {
          return false;
        }
      }
    }
  }

  const base::Value* user_editable_value = NULL;
  if (dict->GetWithoutPathExpansion("UserEditable", &user_editable_value)) {
    {
      bool temp;
      if (!user_editable_value->GetAsBoolean(&temp)) {
        out->user_editable.reset();
        return false;
      }
      else
        out->user_editable.reset(new bool(temp));
    }
  }

  const base::Value* device_editable_value = NULL;
  if (dict->GetWithoutPathExpansion("DeviceEditable", &device_editable_value)) {
    {
      bool temp;
      if (!device_editable_value->GetAsBoolean(&temp)) {
        out->device_editable.reset();
        return false;
      }
      else
        out->device_editable.reset(new bool(temp));
    }
  }

  return true;
}

// static
scoped_ptr<ManagedDOMStringList> ManagedDOMStringList::FromValue(const base::Value& value) {
  scoped_ptr<ManagedDOMStringList> out(new ManagedDOMStringList());
  if (!Populate(value, out.get()))
    return scoped_ptr<ManagedDOMStringList>();
  return out;
}

scoped_ptr<base::DictionaryValue> ManagedDOMStringList::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->active.get()) {
    value->SetWithoutPathExpansion("Active", json_schema_compiler::util::CreateValueFromOptionalArray(this->active).release());

  }
  if (this->effective.get()) {
    value->SetWithoutPathExpansion("Effective", new base::StringValue(*this->effective));

  }
  if (this->user_policy.get()) {
    value->SetWithoutPathExpansion("UserPolicy", json_schema_compiler::util::CreateValueFromOptionalArray(this->user_policy).release());

  }
  if (this->device_policy.get()) {
    value->SetWithoutPathExpansion("DevicePolicy", json_schema_compiler::util::CreateValueFromOptionalArray(this->device_policy).release());

  }
  if (this->user_setting.get()) {
    value->SetWithoutPathExpansion("UserSetting", json_schema_compiler::util::CreateValueFromOptionalArray(this->user_setting).release());

  }
  if (this->shared_setting.get()) {
    value->SetWithoutPathExpansion("SharedSetting", json_schema_compiler::util::CreateValueFromOptionalArray(this->shared_setting).release());

  }
  if (this->user_editable.get()) {
    value->SetWithoutPathExpansion("UserEditable", new base::FundamentalValue(*this->user_editable));

  }
  if (this->device_editable.get()) {
    value->SetWithoutPathExpansion("DeviceEditable", new base::FundamentalValue(*this->device_editable));

  }

  return value;
}


ManagedIPConfigType::ManagedIPConfigType()
: active(IP_CONFIG_TYPE_NONE), user_policy(IP_CONFIG_TYPE_NONE), device_policy(IP_CONFIG_TYPE_NONE), user_setting(IP_CONFIG_TYPE_NONE), shared_setting(IP_CONFIG_TYPE_NONE) {}

ManagedIPConfigType::~ManagedIPConfigType() {}

// static
bool ManagedIPConfigType::Populate(
    const base::Value& value, ManagedIPConfigType* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  out->active = IP_CONFIG_TYPE_NONE;
  out->user_policy = IP_CONFIG_TYPE_NONE;
  out->device_policy = IP_CONFIG_TYPE_NONE;
  out->user_setting = IP_CONFIG_TYPE_NONE;
  out->shared_setting = IP_CONFIG_TYPE_NONE;
  const base::Value* active_value = NULL;
  if (dict->GetWithoutPathExpansion("Active", &active_value)) {
    {
      std::string ip_config_type_as_string;
      if (!active_value->GetAsString(&ip_config_type_as_string)) {
        return false;
      }
      out->active = ParseIPConfigType(ip_config_type_as_string);
      if (out->active == IP_CONFIG_TYPE_NONE) {
        return false;
      }
    }
    } else {
    out->active = IP_CONFIG_TYPE_NONE;
  }

  const base::Value* effective_value = NULL;
  if (dict->GetWithoutPathExpansion("Effective", &effective_value)) {
    {
      std::string temp;
      if (!effective_value->GetAsString(&temp)) {
        out->effective.reset();
        return false;
      }
      else
        out->effective.reset(new std::string(temp));
    }
  }

  const base::Value* user_policy_value = NULL;
  if (dict->GetWithoutPathExpansion("UserPolicy", &user_policy_value)) {
    {
      std::string ip_config_type_as_string;
      if (!user_policy_value->GetAsString(&ip_config_type_as_string)) {
        return false;
      }
      out->user_policy = ParseIPConfigType(ip_config_type_as_string);
      if (out->user_policy == IP_CONFIG_TYPE_NONE) {
        return false;
      }
    }
    } else {
    out->user_policy = IP_CONFIG_TYPE_NONE;
  }

  const base::Value* device_policy_value = NULL;
  if (dict->GetWithoutPathExpansion("DevicePolicy", &device_policy_value)) {
    {
      std::string ip_config_type_as_string;
      if (!device_policy_value->GetAsString(&ip_config_type_as_string)) {
        return false;
      }
      out->device_policy = ParseIPConfigType(ip_config_type_as_string);
      if (out->device_policy == IP_CONFIG_TYPE_NONE) {
        return false;
      }
    }
    } else {
    out->device_policy = IP_CONFIG_TYPE_NONE;
  }

  const base::Value* user_setting_value = NULL;
  if (dict->GetWithoutPathExpansion("UserSetting", &user_setting_value)) {
    {
      std::string ip_config_type_as_string;
      if (!user_setting_value->GetAsString(&ip_config_type_as_string)) {
        return false;
      }
      out->user_setting = ParseIPConfigType(ip_config_type_as_string);
      if (out->user_setting == IP_CONFIG_TYPE_NONE) {
        return false;
      }
    }
    } else {
    out->user_setting = IP_CONFIG_TYPE_NONE;
  }

  const base::Value* shared_setting_value = NULL;
  if (dict->GetWithoutPathExpansion("SharedSetting", &shared_setting_value)) {
    {
      std::string ip_config_type_as_string;
      if (!shared_setting_value->GetAsString(&ip_config_type_as_string)) {
        return false;
      }
      out->shared_setting = ParseIPConfigType(ip_config_type_as_string);
      if (out->shared_setting == IP_CONFIG_TYPE_NONE) {
        return false;
      }
    }
    } else {
    out->shared_setting = IP_CONFIG_TYPE_NONE;
  }

  const base::Value* user_editable_value = NULL;
  if (dict->GetWithoutPathExpansion("UserEditable", &user_editable_value)) {
    {
      bool temp;
      if (!user_editable_value->GetAsBoolean(&temp)) {
        out->user_editable.reset();
        return false;
      }
      else
        out->user_editable.reset(new bool(temp));
    }
  }

  const base::Value* device_editable_value = NULL;
  if (dict->GetWithoutPathExpansion("DeviceEditable", &device_editable_value)) {
    {
      bool temp;
      if (!device_editable_value->GetAsBoolean(&temp)) {
        out->device_editable.reset();
        return false;
      }
      else
        out->device_editable.reset(new bool(temp));
    }
  }

  return true;
}

// static
scoped_ptr<ManagedIPConfigType> ManagedIPConfigType::FromValue(const base::Value& value) {
  scoped_ptr<ManagedIPConfigType> out(new ManagedIPConfigType());
  if (!Populate(value, out.get()))
    return scoped_ptr<ManagedIPConfigType>();
  return out;
}

scoped_ptr<base::DictionaryValue> ManagedIPConfigType::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->active != IP_CONFIG_TYPE_NONE) {
    value->SetWithoutPathExpansion("Active", new base::StringValue(networking_private::ToString(this->active)));

  }
  if (this->effective.get()) {
    value->SetWithoutPathExpansion("Effective", new base::StringValue(*this->effective));

  }
  if (this->user_policy != IP_CONFIG_TYPE_NONE) {
    value->SetWithoutPathExpansion("UserPolicy", new base::StringValue(networking_private::ToString(this->user_policy)));

  }
  if (this->device_policy != IP_CONFIG_TYPE_NONE) {
    value->SetWithoutPathExpansion("DevicePolicy", new base::StringValue(networking_private::ToString(this->device_policy)));

  }
  if (this->user_setting != IP_CONFIG_TYPE_NONE) {
    value->SetWithoutPathExpansion("UserSetting", new base::StringValue(networking_private::ToString(this->user_setting)));

  }
  if (this->shared_setting != IP_CONFIG_TYPE_NONE) {
    value->SetWithoutPathExpansion("SharedSetting", new base::StringValue(networking_private::ToString(this->shared_setting)));

  }
  if (this->user_editable.get()) {
    value->SetWithoutPathExpansion("UserEditable", new base::FundamentalValue(*this->user_editable));

  }
  if (this->device_editable.get()) {
    value->SetWithoutPathExpansion("DeviceEditable", new base::FundamentalValue(*this->device_editable));

  }

  return value;
}


ManagedProxySettingsType::ManagedProxySettingsType()
: active(PROXY_SETTINGS_TYPE_NONE), user_policy(PROXY_SETTINGS_TYPE_NONE), device_policy(PROXY_SETTINGS_TYPE_NONE), user_setting(PROXY_SETTINGS_TYPE_NONE), shared_setting(PROXY_SETTINGS_TYPE_NONE) {}

ManagedProxySettingsType::~ManagedProxySettingsType() {}

// static
bool ManagedProxySettingsType::Populate(
    const base::Value& value, ManagedProxySettingsType* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  out->active = PROXY_SETTINGS_TYPE_NONE;
  out->user_policy = PROXY_SETTINGS_TYPE_NONE;
  out->device_policy = PROXY_SETTINGS_TYPE_NONE;
  out->user_setting = PROXY_SETTINGS_TYPE_NONE;
  out->shared_setting = PROXY_SETTINGS_TYPE_NONE;
  const base::Value* active_value = NULL;
  if (dict->GetWithoutPathExpansion("Active", &active_value)) {
    {
      std::string proxy_settings_type_as_string;
      if (!active_value->GetAsString(&proxy_settings_type_as_string)) {
        return false;
      }
      out->active = ParseProxySettingsType(proxy_settings_type_as_string);
      if (out->active == PROXY_SETTINGS_TYPE_NONE) {
        return false;
      }
    }
    } else {
    out->active = PROXY_SETTINGS_TYPE_NONE;
  }

  const base::Value* effective_value = NULL;
  if (dict->GetWithoutPathExpansion("Effective", &effective_value)) {
    {
      std::string temp;
      if (!effective_value->GetAsString(&temp)) {
        out->effective.reset();
        return false;
      }
      else
        out->effective.reset(new std::string(temp));
    }
  }

  const base::Value* user_policy_value = NULL;
  if (dict->GetWithoutPathExpansion("UserPolicy", &user_policy_value)) {
    {
      std::string proxy_settings_type_as_string;
      if (!user_policy_value->GetAsString(&proxy_settings_type_as_string)) {
        return false;
      }
      out->user_policy = ParseProxySettingsType(proxy_settings_type_as_string);
      if (out->user_policy == PROXY_SETTINGS_TYPE_NONE) {
        return false;
      }
    }
    } else {
    out->user_policy = PROXY_SETTINGS_TYPE_NONE;
  }

  const base::Value* device_policy_value = NULL;
  if (dict->GetWithoutPathExpansion("DevicePolicy", &device_policy_value)) {
    {
      std::string proxy_settings_type_as_string;
      if (!device_policy_value->GetAsString(&proxy_settings_type_as_string)) {
        return false;
      }
      out->device_policy = ParseProxySettingsType(proxy_settings_type_as_string);
      if (out->device_policy == PROXY_SETTINGS_TYPE_NONE) {
        return false;
      }
    }
    } else {
    out->device_policy = PROXY_SETTINGS_TYPE_NONE;
  }

  const base::Value* user_setting_value = NULL;
  if (dict->GetWithoutPathExpansion("UserSetting", &user_setting_value)) {
    {
      std::string proxy_settings_type_as_string;
      if (!user_setting_value->GetAsString(&proxy_settings_type_as_string)) {
        return false;
      }
      out->user_setting = ParseProxySettingsType(proxy_settings_type_as_string);
      if (out->user_setting == PROXY_SETTINGS_TYPE_NONE) {
        return false;
      }
    }
    } else {
    out->user_setting = PROXY_SETTINGS_TYPE_NONE;
  }

  const base::Value* shared_setting_value = NULL;
  if (dict->GetWithoutPathExpansion("SharedSetting", &shared_setting_value)) {
    {
      std::string proxy_settings_type_as_string;
      if (!shared_setting_value->GetAsString(&proxy_settings_type_as_string)) {
        return false;
      }
      out->shared_setting = ParseProxySettingsType(proxy_settings_type_as_string);
      if (out->shared_setting == PROXY_SETTINGS_TYPE_NONE) {
        return false;
      }
    }
    } else {
    out->shared_setting = PROXY_SETTINGS_TYPE_NONE;
  }

  const base::Value* user_editable_value = NULL;
  if (dict->GetWithoutPathExpansion("UserEditable", &user_editable_value)) {
    {
      bool temp;
      if (!user_editable_value->GetAsBoolean(&temp)) {
        out->user_editable.reset();
        return false;
      }
      else
        out->user_editable.reset(new bool(temp));
    }
  }

  const base::Value* device_editable_value = NULL;
  if (dict->GetWithoutPathExpansion("DeviceEditable", &device_editable_value)) {
    {
      bool temp;
      if (!device_editable_value->GetAsBoolean(&temp)) {
        out->device_editable.reset();
        return false;
      }
      else
        out->device_editable.reset(new bool(temp));
    }
  }

  return true;
}

// static
scoped_ptr<ManagedProxySettingsType> ManagedProxySettingsType::FromValue(const base::Value& value) {
  scoped_ptr<ManagedProxySettingsType> out(new ManagedProxySettingsType());
  if (!Populate(value, out.get()))
    return scoped_ptr<ManagedProxySettingsType>();
  return out;
}

scoped_ptr<base::DictionaryValue> ManagedProxySettingsType::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->active != PROXY_SETTINGS_TYPE_NONE) {
    value->SetWithoutPathExpansion("Active", new base::StringValue(networking_private::ToString(this->active)));

  }
  if (this->effective.get()) {
    value->SetWithoutPathExpansion("Effective", new base::StringValue(*this->effective));

  }
  if (this->user_policy != PROXY_SETTINGS_TYPE_NONE) {
    value->SetWithoutPathExpansion("UserPolicy", new base::StringValue(networking_private::ToString(this->user_policy)));

  }
  if (this->device_policy != PROXY_SETTINGS_TYPE_NONE) {
    value->SetWithoutPathExpansion("DevicePolicy", new base::StringValue(networking_private::ToString(this->device_policy)));

  }
  if (this->user_setting != PROXY_SETTINGS_TYPE_NONE) {
    value->SetWithoutPathExpansion("UserSetting", new base::StringValue(networking_private::ToString(this->user_setting)));

  }
  if (this->shared_setting != PROXY_SETTINGS_TYPE_NONE) {
    value->SetWithoutPathExpansion("SharedSetting", new base::StringValue(networking_private::ToString(this->shared_setting)));

  }
  if (this->user_editable.get()) {
    value->SetWithoutPathExpansion("UserEditable", new base::FundamentalValue(*this->user_editable));

  }
  if (this->device_editable.get()) {
    value->SetWithoutPathExpansion("DeviceEditable", new base::FundamentalValue(*this->device_editable));

  }

  return value;
}


APNProperties::APNProperties()
 {}

APNProperties::~APNProperties() {}

// static
bool APNProperties::Populate(
    const base::Value& value, APNProperties* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* access_point_name_value = NULL;
  if (!dict->GetWithoutPathExpansion("AccessPointName", &access_point_name_value)) {
    return false;
  }
  {
    if (!access_point_name_value->GetAsString(&out->access_point_name)) {
      return false;
    }
  }

  const base::Value* language_value = NULL;
  if (dict->GetWithoutPathExpansion("Language", &language_value)) {
    {
      std::string temp;
      if (!language_value->GetAsString(&temp)) {
        out->language.reset();
        return false;
      }
      else
        out->language.reset(new std::string(temp));
    }
  }

  const base::Value* localized_name_value = NULL;
  if (dict->GetWithoutPathExpansion("LocalizedName", &localized_name_value)) {
    {
      std::string temp;
      if (!localized_name_value->GetAsString(&temp)) {
        out->localized_name.reset();
        return false;
      }
      else
        out->localized_name.reset(new std::string(temp));
    }
  }

  const base::Value* name_value = NULL;
  if (dict->GetWithoutPathExpansion("Name", &name_value)) {
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

  const base::Value* password_value = NULL;
  if (dict->GetWithoutPathExpansion("Password", &password_value)) {
    {
      std::string temp;
      if (!password_value->GetAsString(&temp)) {
        out->password.reset();
        return false;
      }
      else
        out->password.reset(new std::string(temp));
    }
  }

  const base::Value* username_value = NULL;
  if (dict->GetWithoutPathExpansion("Username", &username_value)) {
    {
      std::string temp;
      if (!username_value->GetAsString(&temp)) {
        out->username.reset();
        return false;
      }
      else
        out->username.reset(new std::string(temp));
    }
  }

  return true;
}

// static
scoped_ptr<APNProperties> APNProperties::FromValue(const base::Value& value) {
  scoped_ptr<APNProperties> out(new APNProperties());
  if (!Populate(value, out.get()))
    return scoped_ptr<APNProperties>();
  return out;
}

scoped_ptr<base::DictionaryValue> APNProperties::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("AccessPointName", new base::StringValue(this->access_point_name));

  if (this->language.get()) {
    value->SetWithoutPathExpansion("Language", new base::StringValue(*this->language));

  }
  if (this->localized_name.get()) {
    value->SetWithoutPathExpansion("LocalizedName", new base::StringValue(*this->localized_name));

  }
  if (this->name.get()) {
    value->SetWithoutPathExpansion("Name", new base::StringValue(*this->name));

  }
  if (this->password.get()) {
    value->SetWithoutPathExpansion("Password", new base::StringValue(*this->password));

  }
  if (this->username.get()) {
    value->SetWithoutPathExpansion("Username", new base::StringValue(*this->username));

  }

  return value;
}


ManagedAPNProperties::ManagedAPNProperties()
 {}

ManagedAPNProperties::~ManagedAPNProperties() {}

// static
bool ManagedAPNProperties::Populate(
    const base::Value& value, ManagedAPNProperties* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* access_point_name_value = NULL;
  if (!dict->GetWithoutPathExpansion("AccessPointName", &access_point_name_value)) {
    return false;
  }
  {
    const base::DictionaryValue* dictionary = NULL;
    if (!access_point_name_value->GetAsDictionary(&dictionary)) {
      return false;
    }
    if (!ManagedDOMString::Populate(*dictionary, &out->access_point_name)) {
      return false;
    }
  }

  const base::Value* language_value = NULL;
  if (dict->GetWithoutPathExpansion("Language", &language_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!language_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMString> temp(new ManagedDOMString());
        if (!ManagedDOMString::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->language = std::move(temp);
      }
    }
  }

  const base::Value* localized_name_value = NULL;
  if (dict->GetWithoutPathExpansion("LocalizedName", &localized_name_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!localized_name_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMString> temp(new ManagedDOMString());
        if (!ManagedDOMString::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->localized_name = std::move(temp);
      }
    }
  }

  const base::Value* name_value = NULL;
  if (dict->GetWithoutPathExpansion("Name", &name_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!name_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMString> temp(new ManagedDOMString());
        if (!ManagedDOMString::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->name = std::move(temp);
      }
    }
  }

  const base::Value* password_value = NULL;
  if (dict->GetWithoutPathExpansion("Password", &password_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!password_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMString> temp(new ManagedDOMString());
        if (!ManagedDOMString::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->password = std::move(temp);
      }
    }
  }

  const base::Value* username_value = NULL;
  if (dict->GetWithoutPathExpansion("Username", &username_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!username_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMString> temp(new ManagedDOMString());
        if (!ManagedDOMString::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->username = std::move(temp);
      }
    }
  }

  return true;
}

// static
scoped_ptr<ManagedAPNProperties> ManagedAPNProperties::FromValue(const base::Value& value) {
  scoped_ptr<ManagedAPNProperties> out(new ManagedAPNProperties());
  if (!Populate(value, out.get()))
    return scoped_ptr<ManagedAPNProperties>();
  return out;
}

scoped_ptr<base::DictionaryValue> ManagedAPNProperties::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("AccessPointName", (this->access_point_name).ToValue().release());

  if (this->language.get()) {
    value->SetWithoutPathExpansion("Language", (this->language)->ToValue().release());

  }
  if (this->localized_name.get()) {
    value->SetWithoutPathExpansion("LocalizedName", (this->localized_name)->ToValue().release());

  }
  if (this->name.get()) {
    value->SetWithoutPathExpansion("Name", (this->name)->ToValue().release());

  }
  if (this->password.get()) {
    value->SetWithoutPathExpansion("Password", (this->password)->ToValue().release());

  }
  if (this->username.get()) {
    value->SetWithoutPathExpansion("Username", (this->username)->ToValue().release());

  }

  return value;
}


ManagedAPNList::ManagedAPNList()
 {}

ManagedAPNList::~ManagedAPNList() {}

// static
bool ManagedAPNList::Populate(
    const base::Value& value, ManagedAPNList* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* active_value = NULL;
  if (dict->GetWithoutPathExpansion("Active", &active_value)) {
    {
      const base::ListValue* list = NULL;
      if (!active_value->GetAsList(&list)) {
        return false;
      }
      else {
        if (!json_schema_compiler::util::PopulateOptionalArrayFromList(*list, &out->active)) {
          return false;
        }
      }
    }
  }

  const base::Value* effective_value = NULL;
  if (dict->GetWithoutPathExpansion("Effective", &effective_value)) {
    {
      std::string temp;
      if (!effective_value->GetAsString(&temp)) {
        out->effective.reset();
        return false;
      }
      else
        out->effective.reset(new std::string(temp));
    }
  }

  const base::Value* user_policy_value = NULL;
  if (dict->GetWithoutPathExpansion("UserPolicy", &user_policy_value)) {
    {
      const base::ListValue* list = NULL;
      if (!user_policy_value->GetAsList(&list)) {
        return false;
      }
      else {
        if (!json_schema_compiler::util::PopulateOptionalArrayFromList(*list, &out->user_policy)) {
          return false;
        }
      }
    }
  }

  const base::Value* device_policy_value = NULL;
  if (dict->GetWithoutPathExpansion("DevicePolicy", &device_policy_value)) {
    {
      const base::ListValue* list = NULL;
      if (!device_policy_value->GetAsList(&list)) {
        return false;
      }
      else {
        if (!json_schema_compiler::util::PopulateOptionalArrayFromList(*list, &out->device_policy)) {
          return false;
        }
      }
    }
  }

  const base::Value* user_setting_value = NULL;
  if (dict->GetWithoutPathExpansion("UserSetting", &user_setting_value)) {
    {
      const base::ListValue* list = NULL;
      if (!user_setting_value->GetAsList(&list)) {
        return false;
      }
      else {
        if (!json_schema_compiler::util::PopulateOptionalArrayFromList(*list, &out->user_setting)) {
          return false;
        }
      }
    }
  }

  const base::Value* shared_setting_value = NULL;
  if (dict->GetWithoutPathExpansion("SharedSetting", &shared_setting_value)) {
    {
      const base::ListValue* list = NULL;
      if (!shared_setting_value->GetAsList(&list)) {
        return false;
      }
      else {
        if (!json_schema_compiler::util::PopulateOptionalArrayFromList(*list, &out->shared_setting)) {
          return false;
        }
      }
    }
  }

  const base::Value* user_editable_value = NULL;
  if (dict->GetWithoutPathExpansion("UserEditable", &user_editable_value)) {
    {
      bool temp;
      if (!user_editable_value->GetAsBoolean(&temp)) {
        out->user_editable.reset();
        return false;
      }
      else
        out->user_editable.reset(new bool(temp));
    }
  }

  const base::Value* device_editable_value = NULL;
  if (dict->GetWithoutPathExpansion("DeviceEditable", &device_editable_value)) {
    {
      bool temp;
      if (!device_editable_value->GetAsBoolean(&temp)) {
        out->device_editable.reset();
        return false;
      }
      else
        out->device_editable.reset(new bool(temp));
    }
  }

  return true;
}

// static
scoped_ptr<ManagedAPNList> ManagedAPNList::FromValue(const base::Value& value) {
  scoped_ptr<ManagedAPNList> out(new ManagedAPNList());
  if (!Populate(value, out.get()))
    return scoped_ptr<ManagedAPNList>();
  return out;
}

scoped_ptr<base::DictionaryValue> ManagedAPNList::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->active.get()) {
    value->SetWithoutPathExpansion("Active", json_schema_compiler::util::CreateValueFromOptionalArray(this->active).release());

  }
  if (this->effective.get()) {
    value->SetWithoutPathExpansion("Effective", new base::StringValue(*this->effective));

  }
  if (this->user_policy.get()) {
    value->SetWithoutPathExpansion("UserPolicy", json_schema_compiler::util::CreateValueFromOptionalArray(this->user_policy).release());

  }
  if (this->device_policy.get()) {
    value->SetWithoutPathExpansion("DevicePolicy", json_schema_compiler::util::CreateValueFromOptionalArray(this->device_policy).release());

  }
  if (this->user_setting.get()) {
    value->SetWithoutPathExpansion("UserSetting", json_schema_compiler::util::CreateValueFromOptionalArray(this->user_setting).release());

  }
  if (this->shared_setting.get()) {
    value->SetWithoutPathExpansion("SharedSetting", json_schema_compiler::util::CreateValueFromOptionalArray(this->shared_setting).release());

  }
  if (this->user_editable.get()) {
    value->SetWithoutPathExpansion("UserEditable", new base::FundamentalValue(*this->user_editable));

  }
  if (this->device_editable.get()) {
    value->SetWithoutPathExpansion("DeviceEditable", new base::FundamentalValue(*this->device_editable));

  }

  return value;
}


CellularProviderProperties::CellularProviderProperties()
 {}

CellularProviderProperties::~CellularProviderProperties() {}

// static
bool CellularProviderProperties::Populate(
    const base::Value& value, CellularProviderProperties* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* name_value = NULL;
  if (!dict->GetWithoutPathExpansion("Name", &name_value)) {
    return false;
  }
  {
    if (!name_value->GetAsString(&out->name)) {
      return false;
    }
  }

  const base::Value* code_value = NULL;
  if (!dict->GetWithoutPathExpansion("Code", &code_value)) {
    return false;
  }
  {
    if (!code_value->GetAsString(&out->code)) {
      return false;
    }
  }

  const base::Value* country_value = NULL;
  if (dict->GetWithoutPathExpansion("Country", &country_value)) {
    {
      std::string temp;
      if (!country_value->GetAsString(&temp)) {
        out->country.reset();
        return false;
      }
      else
        out->country.reset(new std::string(temp));
    }
  }

  return true;
}

// static
scoped_ptr<CellularProviderProperties> CellularProviderProperties::FromValue(const base::Value& value) {
  scoped_ptr<CellularProviderProperties> out(new CellularProviderProperties());
  if (!Populate(value, out.get()))
    return scoped_ptr<CellularProviderProperties>();
  return out;
}

scoped_ptr<base::DictionaryValue> CellularProviderProperties::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("Name", new base::StringValue(this->name));

  value->SetWithoutPathExpansion("Code", new base::StringValue(this->code));

  if (this->country.get()) {
    value->SetWithoutPathExpansion("Country", new base::StringValue(*this->country));

  }

  return value;
}


CellularSimState::CellularSimState()
: require_pin(false) {}

CellularSimState::~CellularSimState() {}

// static
bool CellularSimState::Populate(
    const base::Value& value, CellularSimState* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* require_pin_value = NULL;
  if (!dict->GetWithoutPathExpansion("requirePin", &require_pin_value)) {
    return false;
  }
  {
    if (!require_pin_value->GetAsBoolean(&out->require_pin)) {
      return false;
    }
  }

  const base::Value* current_pin_value = NULL;
  if (!dict->GetWithoutPathExpansion("currentPin", &current_pin_value)) {
    return false;
  }
  {
    if (!current_pin_value->GetAsString(&out->current_pin)) {
      return false;
    }
  }

  const base::Value* new_pin_value = NULL;
  if (dict->GetWithoutPathExpansion("newPin", &new_pin_value)) {
    {
      std::string temp;
      if (!new_pin_value->GetAsString(&temp)) {
        out->new_pin.reset();
        return false;
      }
      else
        out->new_pin.reset(new std::string(temp));
    }
  }

  return true;
}

// static
scoped_ptr<CellularSimState> CellularSimState::FromValue(const base::Value& value) {
  scoped_ptr<CellularSimState> out(new CellularSimState());
  if (!Populate(value, out.get()))
    return scoped_ptr<CellularSimState>();
  return out;
}

scoped_ptr<base::DictionaryValue> CellularSimState::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("requirePin", new base::FundamentalValue(this->require_pin));

  value->SetWithoutPathExpansion("currentPin", new base::StringValue(this->current_pin));

  if (this->new_pin.get()) {
    value->SetWithoutPathExpansion("newPin", new base::StringValue(*this->new_pin));

  }

  return value;
}


IssuerSubjectPattern::IssuerSubjectPattern()
 {}

IssuerSubjectPattern::~IssuerSubjectPattern() {}

// static
bool IssuerSubjectPattern::Populate(
    const base::Value& value, IssuerSubjectPattern* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* common_name_value = NULL;
  if (dict->GetWithoutPathExpansion("CommonName", &common_name_value)) {
    {
      std::string temp;
      if (!common_name_value->GetAsString(&temp)) {
        out->common_name.reset();
        return false;
      }
      else
        out->common_name.reset(new std::string(temp));
    }
  }

  const base::Value* locality_value = NULL;
  if (dict->GetWithoutPathExpansion("Locality", &locality_value)) {
    {
      std::string temp;
      if (!locality_value->GetAsString(&temp)) {
        out->locality.reset();
        return false;
      }
      else
        out->locality.reset(new std::string(temp));
    }
  }

  const base::Value* organization_value = NULL;
  if (dict->GetWithoutPathExpansion("Organization", &organization_value)) {
    {
      std::string temp;
      if (!organization_value->GetAsString(&temp)) {
        out->organization.reset();
        return false;
      }
      else
        out->organization.reset(new std::string(temp));
    }
  }

  const base::Value* organizational_unit_value = NULL;
  if (dict->GetWithoutPathExpansion("OrganizationalUnit", &organizational_unit_value)) {
    {
      std::string temp;
      if (!organizational_unit_value->GetAsString(&temp)) {
        out->organizational_unit.reset();
        return false;
      }
      else
        out->organizational_unit.reset(new std::string(temp));
    }
  }

  return true;
}

// static
scoped_ptr<IssuerSubjectPattern> IssuerSubjectPattern::FromValue(const base::Value& value) {
  scoped_ptr<IssuerSubjectPattern> out(new IssuerSubjectPattern());
  if (!Populate(value, out.get()))
    return scoped_ptr<IssuerSubjectPattern>();
  return out;
}

scoped_ptr<base::DictionaryValue> IssuerSubjectPattern::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->common_name.get()) {
    value->SetWithoutPathExpansion("CommonName", new base::StringValue(*this->common_name));

  }
  if (this->locality.get()) {
    value->SetWithoutPathExpansion("Locality", new base::StringValue(*this->locality));

  }
  if (this->organization.get()) {
    value->SetWithoutPathExpansion("Organization", new base::StringValue(*this->organization));

  }
  if (this->organizational_unit.get()) {
    value->SetWithoutPathExpansion("OrganizationalUnit", new base::StringValue(*this->organizational_unit));

  }

  return value;
}


ManagedIssuerSubjectPattern::ManagedIssuerSubjectPattern()
 {}

ManagedIssuerSubjectPattern::~ManagedIssuerSubjectPattern() {}

// static
bool ManagedIssuerSubjectPattern::Populate(
    const base::Value& value, ManagedIssuerSubjectPattern* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* common_name_value = NULL;
  if (dict->GetWithoutPathExpansion("CommonName", &common_name_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!common_name_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMString> temp(new ManagedDOMString());
        if (!ManagedDOMString::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->common_name = std::move(temp);
      }
    }
  }

  const base::Value* locality_value = NULL;
  if (dict->GetWithoutPathExpansion("Locality", &locality_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!locality_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMString> temp(new ManagedDOMString());
        if (!ManagedDOMString::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->locality = std::move(temp);
      }
    }
  }

  const base::Value* organization_value = NULL;
  if (dict->GetWithoutPathExpansion("Organization", &organization_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!organization_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMString> temp(new ManagedDOMString());
        if (!ManagedDOMString::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->organization = std::move(temp);
      }
    }
  }

  const base::Value* organizational_unit_value = NULL;
  if (dict->GetWithoutPathExpansion("OrganizationalUnit", &organizational_unit_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!organizational_unit_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMString> temp(new ManagedDOMString());
        if (!ManagedDOMString::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->organizational_unit = std::move(temp);
      }
    }
  }

  return true;
}

// static
scoped_ptr<ManagedIssuerSubjectPattern> ManagedIssuerSubjectPattern::FromValue(const base::Value& value) {
  scoped_ptr<ManagedIssuerSubjectPattern> out(new ManagedIssuerSubjectPattern());
  if (!Populate(value, out.get()))
    return scoped_ptr<ManagedIssuerSubjectPattern>();
  return out;
}

scoped_ptr<base::DictionaryValue> ManagedIssuerSubjectPattern::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->common_name.get()) {
    value->SetWithoutPathExpansion("CommonName", (this->common_name)->ToValue().release());

  }
  if (this->locality.get()) {
    value->SetWithoutPathExpansion("Locality", (this->locality)->ToValue().release());

  }
  if (this->organization.get()) {
    value->SetWithoutPathExpansion("Organization", (this->organization)->ToValue().release());

  }
  if (this->organizational_unit.get()) {
    value->SetWithoutPathExpansion("OrganizationalUnit", (this->organizational_unit)->ToValue().release());

  }

  return value;
}


CertificatePattern::CertificatePattern()
 {}

CertificatePattern::~CertificatePattern() {}

// static
bool CertificatePattern::Populate(
    const base::Value& value, CertificatePattern* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* enrollment_uri_value = NULL;
  if (dict->GetWithoutPathExpansion("EnrollmentURI", &enrollment_uri_value)) {
    {
      const base::ListValue* list = NULL;
      if (!enrollment_uri_value->GetAsList(&list)) {
        return false;
      }
      else {
        if (!json_schema_compiler::util::PopulateOptionalArrayFromList(*list, &out->enrollment_uri)) {
          return false;
        }
      }
    }
  }

  const base::Value* issuer_value = NULL;
  if (dict->GetWithoutPathExpansion("Issuer", &issuer_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!issuer_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<IssuerSubjectPattern> temp(new IssuerSubjectPattern());
        if (!IssuerSubjectPattern::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->issuer = std::move(temp);
      }
    }
  }

  const base::Value* issuer_ca_ref_value = NULL;
  if (dict->GetWithoutPathExpansion("IssuerCARef", &issuer_ca_ref_value)) {
    {
      const base::ListValue* list = NULL;
      if (!issuer_ca_ref_value->GetAsList(&list)) {
        return false;
      }
      else {
        if (!json_schema_compiler::util::PopulateOptionalArrayFromList(*list, &out->issuer_ca_ref)) {
          return false;
        }
      }
    }
  }

  const base::Value* subject_value = NULL;
  if (dict->GetWithoutPathExpansion("Subject", &subject_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!subject_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<IssuerSubjectPattern> temp(new IssuerSubjectPattern());
        if (!IssuerSubjectPattern::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->subject = std::move(temp);
      }
    }
  }

  return true;
}

// static
scoped_ptr<CertificatePattern> CertificatePattern::FromValue(const base::Value& value) {
  scoped_ptr<CertificatePattern> out(new CertificatePattern());
  if (!Populate(value, out.get()))
    return scoped_ptr<CertificatePattern>();
  return out;
}

scoped_ptr<base::DictionaryValue> CertificatePattern::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->enrollment_uri.get()) {
    value->SetWithoutPathExpansion("EnrollmentURI", json_schema_compiler::util::CreateValueFromOptionalArray(this->enrollment_uri).release());

  }
  if (this->issuer.get()) {
    value->SetWithoutPathExpansion("Issuer", (this->issuer)->ToValue().release());

  }
  if (this->issuer_ca_ref.get()) {
    value->SetWithoutPathExpansion("IssuerCARef", json_schema_compiler::util::CreateValueFromOptionalArray(this->issuer_ca_ref).release());

  }
  if (this->subject.get()) {
    value->SetWithoutPathExpansion("Subject", (this->subject)->ToValue().release());

  }

  return value;
}


ManagedCertificatePattern::ManagedCertificatePattern()
 {}

ManagedCertificatePattern::~ManagedCertificatePattern() {}

// static
bool ManagedCertificatePattern::Populate(
    const base::Value& value, ManagedCertificatePattern* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* enrollment_uri_value = NULL;
  if (dict->GetWithoutPathExpansion("EnrollmentURI", &enrollment_uri_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!enrollment_uri_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMStringList> temp(new ManagedDOMStringList());
        if (!ManagedDOMStringList::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->enrollment_uri = std::move(temp);
      }
    }
  }

  const base::Value* issuer_value = NULL;
  if (dict->GetWithoutPathExpansion("Issuer", &issuer_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!issuer_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedIssuerSubjectPattern> temp(new ManagedIssuerSubjectPattern());
        if (!ManagedIssuerSubjectPattern::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->issuer = std::move(temp);
      }
    }
  }

  const base::Value* issuer_ca_ref_value = NULL;
  if (dict->GetWithoutPathExpansion("IssuerCARef", &issuer_ca_ref_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!issuer_ca_ref_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMStringList> temp(new ManagedDOMStringList());
        if (!ManagedDOMStringList::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->issuer_ca_ref = std::move(temp);
      }
    }
  }

  const base::Value* subject_value = NULL;
  if (dict->GetWithoutPathExpansion("Subject", &subject_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!subject_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedIssuerSubjectPattern> temp(new ManagedIssuerSubjectPattern());
        if (!ManagedIssuerSubjectPattern::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->subject = std::move(temp);
      }
    }
  }

  return true;
}

// static
scoped_ptr<ManagedCertificatePattern> ManagedCertificatePattern::FromValue(const base::Value& value) {
  scoped_ptr<ManagedCertificatePattern> out(new ManagedCertificatePattern());
  if (!Populate(value, out.get()))
    return scoped_ptr<ManagedCertificatePattern>();
  return out;
}

scoped_ptr<base::DictionaryValue> ManagedCertificatePattern::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->enrollment_uri.get()) {
    value->SetWithoutPathExpansion("EnrollmentURI", (this->enrollment_uri)->ToValue().release());

  }
  if (this->issuer.get()) {
    value->SetWithoutPathExpansion("Issuer", (this->issuer)->ToValue().release());

  }
  if (this->issuer_ca_ref.get()) {
    value->SetWithoutPathExpansion("IssuerCARef", (this->issuer_ca_ref)->ToValue().release());

  }
  if (this->subject.get()) {
    value->SetWithoutPathExpansion("Subject", (this->subject)->ToValue().release());

  }

  return value;
}


EAPProperties::EAPProperties()
 {}

EAPProperties::~EAPProperties() {}

// static
bool EAPProperties::Populate(
    const base::Value& value, EAPProperties* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* anonymous_identity_value = NULL;
  if (dict->GetWithoutPathExpansion("AnonymousIdentity", &anonymous_identity_value)) {
    {
      std::string temp;
      if (!anonymous_identity_value->GetAsString(&temp)) {
        out->anonymous_identity.reset();
        return false;
      }
      else
        out->anonymous_identity.reset(new std::string(temp));
    }
  }

  const base::Value* client_cert_pattern_value = NULL;
  if (dict->GetWithoutPathExpansion("ClientCertPattern", &client_cert_pattern_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!client_cert_pattern_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<CertificatePattern> temp(new CertificatePattern());
        if (!CertificatePattern::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->client_cert_pattern = std::move(temp);
      }
    }
  }

  const base::Value* client_cert_ref_value = NULL;
  if (dict->GetWithoutPathExpansion("ClientCertRef", &client_cert_ref_value)) {
    {
      std::string temp;
      if (!client_cert_ref_value->GetAsString(&temp)) {
        out->client_cert_ref.reset();
        return false;
      }
      else
        out->client_cert_ref.reset(new std::string(temp));
    }
  }

  const base::Value* client_cert_type_value = NULL;
  if (dict->GetWithoutPathExpansion("ClientCertType", &client_cert_type_value)) {
    {
      std::string temp;
      if (!client_cert_type_value->GetAsString(&temp)) {
        out->client_cert_type.reset();
        return false;
      }
      else
        out->client_cert_type.reset(new std::string(temp));
    }
  }

  const base::Value* identity_value = NULL;
  if (dict->GetWithoutPathExpansion("Identity", &identity_value)) {
    {
      std::string temp;
      if (!identity_value->GetAsString(&temp)) {
        out->identity.reset();
        return false;
      }
      else
        out->identity.reset(new std::string(temp));
    }
  }

  const base::Value* inner_value = NULL;
  if (dict->GetWithoutPathExpansion("Inner", &inner_value)) {
    {
      std::string temp;
      if (!inner_value->GetAsString(&temp)) {
        out->inner.reset();
        return false;
      }
      else
        out->inner.reset(new std::string(temp));
    }
  }

  const base::Value* outer_value = NULL;
  if (!dict->GetWithoutPathExpansion("Outer", &outer_value)) {
    return false;
  }
  {
    if (!outer_value->GetAsString(&out->outer)) {
      return false;
    }
  }

  const base::Value* password_value = NULL;
  if (dict->GetWithoutPathExpansion("Password", &password_value)) {
    {
      std::string temp;
      if (!password_value->GetAsString(&temp)) {
        out->password.reset();
        return false;
      }
      else
        out->password.reset(new std::string(temp));
    }
  }

  const base::Value* save_credentials_value = NULL;
  if (dict->GetWithoutPathExpansion("SaveCredentials", &save_credentials_value)) {
    {
      bool temp;
      if (!save_credentials_value->GetAsBoolean(&temp)) {
        out->save_credentials.reset();
        return false;
      }
      else
        out->save_credentials.reset(new bool(temp));
    }
  }

  const base::Value* server_ca_refs_value = NULL;
  if (dict->GetWithoutPathExpansion("ServerCARefs", &server_ca_refs_value)) {
    {
      const base::ListValue* list = NULL;
      if (!server_ca_refs_value->GetAsList(&list)) {
        return false;
      }
      else {
        if (!json_schema_compiler::util::PopulateOptionalArrayFromList(*list, &out->server_ca_refs)) {
          return false;
        }
      }
    }
  }

  const base::Value* use_proactive_key_caching_value = NULL;
  if (dict->GetWithoutPathExpansion("UseProactiveKeyCaching", &use_proactive_key_caching_value)) {
    {
      bool temp;
      if (!use_proactive_key_caching_value->GetAsBoolean(&temp)) {
        out->use_proactive_key_caching.reset();
        return false;
      }
      else
        out->use_proactive_key_caching.reset(new bool(temp));
    }
  }

  const base::Value* use_system_c_as_value = NULL;
  if (dict->GetWithoutPathExpansion("UseSystemCAs", &use_system_c_as_value)) {
    {
      bool temp;
      if (!use_system_c_as_value->GetAsBoolean(&temp)) {
        out->use_system_c_as.reset();
        return false;
      }
      else
        out->use_system_c_as.reset(new bool(temp));
    }
  }

  return true;
}

// static
scoped_ptr<EAPProperties> EAPProperties::FromValue(const base::Value& value) {
  scoped_ptr<EAPProperties> out(new EAPProperties());
  if (!Populate(value, out.get()))
    return scoped_ptr<EAPProperties>();
  return out;
}

scoped_ptr<base::DictionaryValue> EAPProperties::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->anonymous_identity.get()) {
    value->SetWithoutPathExpansion("AnonymousIdentity", new base::StringValue(*this->anonymous_identity));

  }
  if (this->client_cert_pattern.get()) {
    value->SetWithoutPathExpansion("ClientCertPattern", (this->client_cert_pattern)->ToValue().release());

  }
  if (this->client_cert_ref.get()) {
    value->SetWithoutPathExpansion("ClientCertRef", new base::StringValue(*this->client_cert_ref));

  }
  if (this->client_cert_type.get()) {
    value->SetWithoutPathExpansion("ClientCertType", new base::StringValue(*this->client_cert_type));

  }
  if (this->identity.get()) {
    value->SetWithoutPathExpansion("Identity", new base::StringValue(*this->identity));

  }
  if (this->inner.get()) {
    value->SetWithoutPathExpansion("Inner", new base::StringValue(*this->inner));

  }
  value->SetWithoutPathExpansion("Outer", new base::StringValue(this->outer));

  if (this->password.get()) {
    value->SetWithoutPathExpansion("Password", new base::StringValue(*this->password));

  }
  if (this->save_credentials.get()) {
    value->SetWithoutPathExpansion("SaveCredentials", new base::FundamentalValue(*this->save_credentials));

  }
  if (this->server_ca_refs.get()) {
    value->SetWithoutPathExpansion("ServerCARefs", json_schema_compiler::util::CreateValueFromOptionalArray(this->server_ca_refs).release());

  }
  if (this->use_proactive_key_caching.get()) {
    value->SetWithoutPathExpansion("UseProactiveKeyCaching", new base::FundamentalValue(*this->use_proactive_key_caching));

  }
  if (this->use_system_c_as.get()) {
    value->SetWithoutPathExpansion("UseSystemCAs", new base::FundamentalValue(*this->use_system_c_as));

  }

  return value;
}


ManagedEAPProperties::ManagedEAPProperties()
 {}

ManagedEAPProperties::~ManagedEAPProperties() {}

// static
bool ManagedEAPProperties::Populate(
    const base::Value& value, ManagedEAPProperties* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* anonymous_identity_value = NULL;
  if (dict->GetWithoutPathExpansion("AnonymousIdentity", &anonymous_identity_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!anonymous_identity_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMString> temp(new ManagedDOMString());
        if (!ManagedDOMString::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->anonymous_identity = std::move(temp);
      }
    }
  }

  const base::Value* client_cert_pattern_value = NULL;
  if (dict->GetWithoutPathExpansion("ClientCertPattern", &client_cert_pattern_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!client_cert_pattern_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedCertificatePattern> temp(new ManagedCertificatePattern());
        if (!ManagedCertificatePattern::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->client_cert_pattern = std::move(temp);
      }
    }
  }

  const base::Value* client_cert_ref_value = NULL;
  if (dict->GetWithoutPathExpansion("ClientCertRef", &client_cert_ref_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!client_cert_ref_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMString> temp(new ManagedDOMString());
        if (!ManagedDOMString::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->client_cert_ref = std::move(temp);
      }
    }
  }

  const base::Value* client_cert_type_value = NULL;
  if (dict->GetWithoutPathExpansion("ClientCertType", &client_cert_type_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!client_cert_type_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMString> temp(new ManagedDOMString());
        if (!ManagedDOMString::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->client_cert_type = std::move(temp);
      }
    }
  }

  const base::Value* identity_value = NULL;
  if (dict->GetWithoutPathExpansion("Identity", &identity_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!identity_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMString> temp(new ManagedDOMString());
        if (!ManagedDOMString::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->identity = std::move(temp);
      }
    }
  }

  const base::Value* inner_value = NULL;
  if (dict->GetWithoutPathExpansion("Inner", &inner_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!inner_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMString> temp(new ManagedDOMString());
        if (!ManagedDOMString::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->inner = std::move(temp);
      }
    }
  }

  const base::Value* outer_value = NULL;
  if (!dict->GetWithoutPathExpansion("Outer", &outer_value)) {
    return false;
  }
  {
    const base::DictionaryValue* dictionary = NULL;
    if (!outer_value->GetAsDictionary(&dictionary)) {
      return false;
    }
    if (!ManagedDOMString::Populate(*dictionary, &out->outer)) {
      return false;
    }
  }

  const base::Value* password_value = NULL;
  if (dict->GetWithoutPathExpansion("Password", &password_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!password_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMString> temp(new ManagedDOMString());
        if (!ManagedDOMString::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->password = std::move(temp);
      }
    }
  }

  const base::Value* save_credentials_value = NULL;
  if (dict->GetWithoutPathExpansion("SaveCredentials", &save_credentials_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!save_credentials_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedBoolean> temp(new ManagedBoolean());
        if (!ManagedBoolean::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->save_credentials = std::move(temp);
      }
    }
  }

  const base::Value* server_ca_refs_value = NULL;
  if (dict->GetWithoutPathExpansion("ServerCARefs", &server_ca_refs_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!server_ca_refs_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMStringList> temp(new ManagedDOMStringList());
        if (!ManagedDOMStringList::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->server_ca_refs = std::move(temp);
      }
    }
  }

  const base::Value* use_proactive_key_caching_value = NULL;
  if (dict->GetWithoutPathExpansion("UseProactiveKeyCaching", &use_proactive_key_caching_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!use_proactive_key_caching_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedBoolean> temp(new ManagedBoolean());
        if (!ManagedBoolean::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->use_proactive_key_caching = std::move(temp);
      }
    }
  }

  const base::Value* use_system_c_as_value = NULL;
  if (dict->GetWithoutPathExpansion("UseSystemCAs", &use_system_c_as_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!use_system_c_as_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedBoolean> temp(new ManagedBoolean());
        if (!ManagedBoolean::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->use_system_c_as = std::move(temp);
      }
    }
  }

  return true;
}

// static
scoped_ptr<ManagedEAPProperties> ManagedEAPProperties::FromValue(const base::Value& value) {
  scoped_ptr<ManagedEAPProperties> out(new ManagedEAPProperties());
  if (!Populate(value, out.get()))
    return scoped_ptr<ManagedEAPProperties>();
  return out;
}

scoped_ptr<base::DictionaryValue> ManagedEAPProperties::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->anonymous_identity.get()) {
    value->SetWithoutPathExpansion("AnonymousIdentity", (this->anonymous_identity)->ToValue().release());

  }
  if (this->client_cert_pattern.get()) {
    value->SetWithoutPathExpansion("ClientCertPattern", (this->client_cert_pattern)->ToValue().release());

  }
  if (this->client_cert_ref.get()) {
    value->SetWithoutPathExpansion("ClientCertRef", (this->client_cert_ref)->ToValue().release());

  }
  if (this->client_cert_type.get()) {
    value->SetWithoutPathExpansion("ClientCertType", (this->client_cert_type)->ToValue().release());

  }
  if (this->identity.get()) {
    value->SetWithoutPathExpansion("Identity", (this->identity)->ToValue().release());

  }
  if (this->inner.get()) {
    value->SetWithoutPathExpansion("Inner", (this->inner)->ToValue().release());

  }
  value->SetWithoutPathExpansion("Outer", (this->outer).ToValue().release());

  if (this->password.get()) {
    value->SetWithoutPathExpansion("Password", (this->password)->ToValue().release());

  }
  if (this->save_credentials.get()) {
    value->SetWithoutPathExpansion("SaveCredentials", (this->save_credentials)->ToValue().release());

  }
  if (this->server_ca_refs.get()) {
    value->SetWithoutPathExpansion("ServerCARefs", (this->server_ca_refs)->ToValue().release());

  }
  if (this->use_proactive_key_caching.get()) {
    value->SetWithoutPathExpansion("UseProactiveKeyCaching", (this->use_proactive_key_caching)->ToValue().release());

  }
  if (this->use_system_c_as.get()) {
    value->SetWithoutPathExpansion("UseSystemCAs", (this->use_system_c_as)->ToValue().release());

  }

  return value;
}


FoundNetworkProperties::FoundNetworkProperties()
 {}

FoundNetworkProperties::~FoundNetworkProperties() {}

// static
bool FoundNetworkProperties::Populate(
    const base::Value& value, FoundNetworkProperties* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* status_value = NULL;
  if (!dict->GetWithoutPathExpansion("Status", &status_value)) {
    return false;
  }
  {
    if (!status_value->GetAsString(&out->status)) {
      return false;
    }
  }

  const base::Value* network_id_value = NULL;
  if (!dict->GetWithoutPathExpansion("NetworkId", &network_id_value)) {
    return false;
  }
  {
    if (!network_id_value->GetAsString(&out->network_id)) {
      return false;
    }
  }

  const base::Value* technology_value = NULL;
  if (!dict->GetWithoutPathExpansion("Technology", &technology_value)) {
    return false;
  }
  {
    if (!technology_value->GetAsString(&out->technology)) {
      return false;
    }
  }

  const base::Value* short_name_value = NULL;
  if (dict->GetWithoutPathExpansion("ShortName", &short_name_value)) {
    {
      std::string temp;
      if (!short_name_value->GetAsString(&temp)) {
        out->short_name.reset();
        return false;
      }
      else
        out->short_name.reset(new std::string(temp));
    }
  }

  const base::Value* long_name_value = NULL;
  if (dict->GetWithoutPathExpansion("LongName", &long_name_value)) {
    {
      std::string temp;
      if (!long_name_value->GetAsString(&temp)) {
        out->long_name.reset();
        return false;
      }
      else
        out->long_name.reset(new std::string(temp));
    }
  }

  return true;
}

// static
scoped_ptr<FoundNetworkProperties> FoundNetworkProperties::FromValue(const base::Value& value) {
  scoped_ptr<FoundNetworkProperties> out(new FoundNetworkProperties());
  if (!Populate(value, out.get()))
    return scoped_ptr<FoundNetworkProperties>();
  return out;
}

scoped_ptr<base::DictionaryValue> FoundNetworkProperties::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("Status", new base::StringValue(this->status));

  value->SetWithoutPathExpansion("NetworkId", new base::StringValue(this->network_id));

  value->SetWithoutPathExpansion("Technology", new base::StringValue(this->technology));

  if (this->short_name.get()) {
    value->SetWithoutPathExpansion("ShortName", new base::StringValue(*this->short_name));

  }
  if (this->long_name.get()) {
    value->SetWithoutPathExpansion("LongName", new base::StringValue(*this->long_name));

  }

  return value;
}


IPConfigProperties::IPConfigProperties()
 {}

IPConfigProperties::~IPConfigProperties() {}

// static
bool IPConfigProperties::Populate(
    const base::Value& value, IPConfigProperties* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* gateway_value = NULL;
  if (dict->GetWithoutPathExpansion("Gateway", &gateway_value)) {
    {
      std::string temp;
      if (!gateway_value->GetAsString(&temp)) {
        out->gateway.reset();
        return false;
      }
      else
        out->gateway.reset(new std::string(temp));
    }
  }

  const base::Value* ip_address_value = NULL;
  if (dict->GetWithoutPathExpansion("IPAddress", &ip_address_value)) {
    {
      std::string temp;
      if (!ip_address_value->GetAsString(&temp)) {
        out->ip_address.reset();
        return false;
      }
      else
        out->ip_address.reset(new std::string(temp));
    }
  }

  const base::Value* name_servers_value = NULL;
  if (dict->GetWithoutPathExpansion("NameServers", &name_servers_value)) {
    {
      const base::ListValue* list = NULL;
      if (!name_servers_value->GetAsList(&list)) {
        return false;
      }
      else {
        if (!json_schema_compiler::util::PopulateOptionalArrayFromList(*list, &out->name_servers)) {
          return false;
        }
      }
    }
  }

  const base::Value* routing_prefix_value = NULL;
  if (dict->GetWithoutPathExpansion("RoutingPrefix", &routing_prefix_value)) {
    {
      int temp;
      if (!routing_prefix_value->GetAsInteger(&temp)) {
        out->routing_prefix.reset();
        return false;
      }
      else
        out->routing_prefix.reset(new int(temp));
    }
  }

  const base::Value* type_value = NULL;
  if (dict->GetWithoutPathExpansion("Type", &type_value)) {
    {
      std::string temp;
      if (!type_value->GetAsString(&temp)) {
        out->type.reset();
        return false;
      }
      else
        out->type.reset(new std::string(temp));
    }
  }

  const base::Value* web_proxy_auto_discovery_url_value = NULL;
  if (dict->GetWithoutPathExpansion("WebProxyAutoDiscoveryUrl", &web_proxy_auto_discovery_url_value)) {
    {
      std::string temp;
      if (!web_proxy_auto_discovery_url_value->GetAsString(&temp)) {
        out->web_proxy_auto_discovery_url.reset();
        return false;
      }
      else
        out->web_proxy_auto_discovery_url.reset(new std::string(temp));
    }
  }

  return true;
}

// static
scoped_ptr<IPConfigProperties> IPConfigProperties::FromValue(const base::Value& value) {
  scoped_ptr<IPConfigProperties> out(new IPConfigProperties());
  if (!Populate(value, out.get()))
    return scoped_ptr<IPConfigProperties>();
  return out;
}

scoped_ptr<base::DictionaryValue> IPConfigProperties::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->gateway.get()) {
    value->SetWithoutPathExpansion("Gateway", new base::StringValue(*this->gateway));

  }
  if (this->ip_address.get()) {
    value->SetWithoutPathExpansion("IPAddress", new base::StringValue(*this->ip_address));

  }
  if (this->name_servers.get()) {
    value->SetWithoutPathExpansion("NameServers", json_schema_compiler::util::CreateValueFromOptionalArray(this->name_servers).release());

  }
  if (this->routing_prefix.get()) {
    value->SetWithoutPathExpansion("RoutingPrefix", new base::FundamentalValue(*this->routing_prefix));

  }
  if (this->type.get()) {
    value->SetWithoutPathExpansion("Type", new base::StringValue(*this->type));

  }
  if (this->web_proxy_auto_discovery_url.get()) {
    value->SetWithoutPathExpansion("WebProxyAutoDiscoveryUrl", new base::StringValue(*this->web_proxy_auto_discovery_url));

  }

  return value;
}


ManagedIPConfigProperties::ManagedIPConfigProperties()
 {}

ManagedIPConfigProperties::~ManagedIPConfigProperties() {}

// static
bool ManagedIPConfigProperties::Populate(
    const base::Value& value, ManagedIPConfigProperties* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* gateway_value = NULL;
  if (dict->GetWithoutPathExpansion("Gateway", &gateway_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!gateway_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMString> temp(new ManagedDOMString());
        if (!ManagedDOMString::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->gateway = std::move(temp);
      }
    }
  }

  const base::Value* ip_address_value = NULL;
  if (dict->GetWithoutPathExpansion("IPAddress", &ip_address_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!ip_address_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMString> temp(new ManagedDOMString());
        if (!ManagedDOMString::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->ip_address = std::move(temp);
      }
    }
  }

  const base::Value* name_servers_value = NULL;
  if (dict->GetWithoutPathExpansion("NameServers", &name_servers_value)) {
    {
      const base::ListValue* list = NULL;
      if (!name_servers_value->GetAsList(&list)) {
        return false;
      }
      else {
        if (!json_schema_compiler::util::PopulateOptionalArrayFromList(*list, &out->name_servers)) {
          return false;
        }
      }
    }
  }

  const base::Value* routing_prefix_value = NULL;
  if (dict->GetWithoutPathExpansion("RoutingPrefix", &routing_prefix_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!routing_prefix_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedLong> temp(new ManagedLong());
        if (!ManagedLong::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->routing_prefix = std::move(temp);
      }
    }
  }

  const base::Value* type_value = NULL;
  if (dict->GetWithoutPathExpansion("Type", &type_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!type_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMString> temp(new ManagedDOMString());
        if (!ManagedDOMString::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->type = std::move(temp);
      }
    }
  }

  const base::Value* web_proxy_auto_discovery_url_value = NULL;
  if (dict->GetWithoutPathExpansion("WebProxyAutoDiscoveryUrl", &web_proxy_auto_discovery_url_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!web_proxy_auto_discovery_url_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMString> temp(new ManagedDOMString());
        if (!ManagedDOMString::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->web_proxy_auto_discovery_url = std::move(temp);
      }
    }
  }

  return true;
}

// static
scoped_ptr<ManagedIPConfigProperties> ManagedIPConfigProperties::FromValue(const base::Value& value) {
  scoped_ptr<ManagedIPConfigProperties> out(new ManagedIPConfigProperties());
  if (!Populate(value, out.get()))
    return scoped_ptr<ManagedIPConfigProperties>();
  return out;
}

scoped_ptr<base::DictionaryValue> ManagedIPConfigProperties::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->gateway.get()) {
    value->SetWithoutPathExpansion("Gateway", (this->gateway)->ToValue().release());

  }
  if (this->ip_address.get()) {
    value->SetWithoutPathExpansion("IPAddress", (this->ip_address)->ToValue().release());

  }
  if (this->name_servers.get()) {
    value->SetWithoutPathExpansion("NameServers", json_schema_compiler::util::CreateValueFromOptionalArray(this->name_servers).release());

  }
  if (this->routing_prefix.get()) {
    value->SetWithoutPathExpansion("RoutingPrefix", (this->routing_prefix)->ToValue().release());

  }
  if (this->type.get()) {
    value->SetWithoutPathExpansion("Type", (this->type)->ToValue().release());

  }
  if (this->web_proxy_auto_discovery_url.get()) {
    value->SetWithoutPathExpansion("WebProxyAutoDiscoveryUrl", (this->web_proxy_auto_discovery_url)->ToValue().release());

  }

  return value;
}


XAUTHProperties::XAUTHProperties()
 {}

XAUTHProperties::~XAUTHProperties() {}

// static
bool XAUTHProperties::Populate(
    const base::Value& value, XAUTHProperties* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* password_value = NULL;
  if (dict->GetWithoutPathExpansion("Password", &password_value)) {
    {
      std::string temp;
      if (!password_value->GetAsString(&temp)) {
        out->password.reset();
        return false;
      }
      else
        out->password.reset(new std::string(temp));
    }
  }

  const base::Value* save_credentials_value = NULL;
  if (dict->GetWithoutPathExpansion("SaveCredentials", &save_credentials_value)) {
    {
      bool temp;
      if (!save_credentials_value->GetAsBoolean(&temp)) {
        out->save_credentials.reset();
        return false;
      }
      else
        out->save_credentials.reset(new bool(temp));
    }
  }

  const base::Value* username_value = NULL;
  if (dict->GetWithoutPathExpansion("Username", &username_value)) {
    {
      std::string temp;
      if (!username_value->GetAsString(&temp)) {
        out->username.reset();
        return false;
      }
      else
        out->username.reset(new std::string(temp));
    }
  }

  return true;
}

// static
scoped_ptr<XAUTHProperties> XAUTHProperties::FromValue(const base::Value& value) {
  scoped_ptr<XAUTHProperties> out(new XAUTHProperties());
  if (!Populate(value, out.get()))
    return scoped_ptr<XAUTHProperties>();
  return out;
}

scoped_ptr<base::DictionaryValue> XAUTHProperties::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->password.get()) {
    value->SetWithoutPathExpansion("Password", new base::StringValue(*this->password));

  }
  if (this->save_credentials.get()) {
    value->SetWithoutPathExpansion("SaveCredentials", new base::FundamentalValue(*this->save_credentials));

  }
  if (this->username.get()) {
    value->SetWithoutPathExpansion("Username", new base::StringValue(*this->username));

  }

  return value;
}


ManagedXAUTHProperties::ManagedXAUTHProperties()
 {}

ManagedXAUTHProperties::~ManagedXAUTHProperties() {}

// static
bool ManagedXAUTHProperties::Populate(
    const base::Value& value, ManagedXAUTHProperties* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* password_value = NULL;
  if (dict->GetWithoutPathExpansion("Password", &password_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!password_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMString> temp(new ManagedDOMString());
        if (!ManagedDOMString::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->password = std::move(temp);
      }
    }
  }

  const base::Value* save_credentials_value = NULL;
  if (dict->GetWithoutPathExpansion("SaveCredentials", &save_credentials_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!save_credentials_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedBoolean> temp(new ManagedBoolean());
        if (!ManagedBoolean::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->save_credentials = std::move(temp);
      }
    }
  }

  const base::Value* username_value = NULL;
  if (dict->GetWithoutPathExpansion("Username", &username_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!username_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMString> temp(new ManagedDOMString());
        if (!ManagedDOMString::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->username = std::move(temp);
      }
    }
  }

  return true;
}

// static
scoped_ptr<ManagedXAUTHProperties> ManagedXAUTHProperties::FromValue(const base::Value& value) {
  scoped_ptr<ManagedXAUTHProperties> out(new ManagedXAUTHProperties());
  if (!Populate(value, out.get()))
    return scoped_ptr<ManagedXAUTHProperties>();
  return out;
}

scoped_ptr<base::DictionaryValue> ManagedXAUTHProperties::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->password.get()) {
    value->SetWithoutPathExpansion("Password", (this->password)->ToValue().release());

  }
  if (this->save_credentials.get()) {
    value->SetWithoutPathExpansion("SaveCredentials", (this->save_credentials)->ToValue().release());

  }
  if (this->username.get()) {
    value->SetWithoutPathExpansion("Username", (this->username)->ToValue().release());

  }

  return value;
}


IPSecProperties::IPSecProperties()
 {}

IPSecProperties::~IPSecProperties() {}

// static
bool IPSecProperties::Populate(
    const base::Value& value, IPSecProperties* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* authentication_type_value = NULL;
  if (!dict->GetWithoutPathExpansion("AuthenticationType", &authentication_type_value)) {
    return false;
  }
  {
    if (!authentication_type_value->GetAsString(&out->authentication_type)) {
      return false;
    }
  }

  const base::Value* client_cert_pattern_value = NULL;
  if (dict->GetWithoutPathExpansion("ClientCertPattern", &client_cert_pattern_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!client_cert_pattern_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<CertificatePattern> temp(new CertificatePattern());
        if (!CertificatePattern::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->client_cert_pattern = std::move(temp);
      }
    }
  }

  const base::Value* client_cert_ref_value = NULL;
  if (dict->GetWithoutPathExpansion("ClientCertRef", &client_cert_ref_value)) {
    {
      std::string temp;
      if (!client_cert_ref_value->GetAsString(&temp)) {
        out->client_cert_ref.reset();
        return false;
      }
      else
        out->client_cert_ref.reset(new std::string(temp));
    }
  }

  const base::Value* client_cert_type_value = NULL;
  if (dict->GetWithoutPathExpansion("ClientCertType", &client_cert_type_value)) {
    {
      std::string temp;
      if (!client_cert_type_value->GetAsString(&temp)) {
        out->client_cert_type.reset();
        return false;
      }
      else
        out->client_cert_type.reset(new std::string(temp));
    }
  }

  const base::Value* eap_value = NULL;
  if (dict->GetWithoutPathExpansion("EAP", &eap_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!eap_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<EAPProperties> temp(new EAPProperties());
        if (!EAPProperties::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->eap = std::move(temp);
      }
    }
  }

  const base::Value* group_value = NULL;
  if (dict->GetWithoutPathExpansion("Group", &group_value)) {
    {
      std::string temp;
      if (!group_value->GetAsString(&temp)) {
        out->group.reset();
        return false;
      }
      else
        out->group.reset(new std::string(temp));
    }
  }

  const base::Value* ike_version_value = NULL;
  if (dict->GetWithoutPathExpansion("IKEVersion", &ike_version_value)) {
    {
      int temp;
      if (!ike_version_value->GetAsInteger(&temp)) {
        out->ike_version.reset();
        return false;
      }
      else
        out->ike_version.reset(new int(temp));
    }
  }

  const base::Value* psk_value = NULL;
  if (dict->GetWithoutPathExpansion("PSK", &psk_value)) {
    {
      std::string temp;
      if (!psk_value->GetAsString(&temp)) {
        out->psk.reset();
        return false;
      }
      else
        out->psk.reset(new std::string(temp));
    }
  }

  const base::Value* save_credentials_value = NULL;
  if (dict->GetWithoutPathExpansion("SaveCredentials", &save_credentials_value)) {
    {
      bool temp;
      if (!save_credentials_value->GetAsBoolean(&temp)) {
        out->save_credentials.reset();
        return false;
      }
      else
        out->save_credentials.reset(new bool(temp));
    }
  }

  const base::Value* server_ca_refs_value = NULL;
  if (dict->GetWithoutPathExpansion("ServerCARefs", &server_ca_refs_value)) {
    {
      const base::ListValue* list = NULL;
      if (!server_ca_refs_value->GetAsList(&list)) {
        return false;
      }
      else {
        if (!json_schema_compiler::util::PopulateOptionalArrayFromList(*list, &out->server_ca_refs)) {
          return false;
        }
      }
    }
  }

  const base::Value* xauth_value = NULL;
  if (dict->GetWithoutPathExpansion("XAUTH", &xauth_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!xauth_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<XAUTHProperties> temp(new XAUTHProperties());
        if (!XAUTHProperties::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->xauth = std::move(temp);
      }
    }
  }

  return true;
}

// static
scoped_ptr<IPSecProperties> IPSecProperties::FromValue(const base::Value& value) {
  scoped_ptr<IPSecProperties> out(new IPSecProperties());
  if (!Populate(value, out.get()))
    return scoped_ptr<IPSecProperties>();
  return out;
}

scoped_ptr<base::DictionaryValue> IPSecProperties::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("AuthenticationType", new base::StringValue(this->authentication_type));

  if (this->client_cert_pattern.get()) {
    value->SetWithoutPathExpansion("ClientCertPattern", (this->client_cert_pattern)->ToValue().release());

  }
  if (this->client_cert_ref.get()) {
    value->SetWithoutPathExpansion("ClientCertRef", new base::StringValue(*this->client_cert_ref));

  }
  if (this->client_cert_type.get()) {
    value->SetWithoutPathExpansion("ClientCertType", new base::StringValue(*this->client_cert_type));

  }
  if (this->eap.get()) {
    value->SetWithoutPathExpansion("EAP", (this->eap)->ToValue().release());

  }
  if (this->group.get()) {
    value->SetWithoutPathExpansion("Group", new base::StringValue(*this->group));

  }
  if (this->ike_version.get()) {
    value->SetWithoutPathExpansion("IKEVersion", new base::FundamentalValue(*this->ike_version));

  }
  if (this->psk.get()) {
    value->SetWithoutPathExpansion("PSK", new base::StringValue(*this->psk));

  }
  if (this->save_credentials.get()) {
    value->SetWithoutPathExpansion("SaveCredentials", new base::FundamentalValue(*this->save_credentials));

  }
  if (this->server_ca_refs.get()) {
    value->SetWithoutPathExpansion("ServerCARefs", json_schema_compiler::util::CreateValueFromOptionalArray(this->server_ca_refs).release());

  }
  if (this->xauth.get()) {
    value->SetWithoutPathExpansion("XAUTH", (this->xauth)->ToValue().release());

  }

  return value;
}


ManagedIPSecProperties::ManagedIPSecProperties()
 {}

ManagedIPSecProperties::~ManagedIPSecProperties() {}

// static
bool ManagedIPSecProperties::Populate(
    const base::Value& value, ManagedIPSecProperties* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* authentication_type_value = NULL;
  if (!dict->GetWithoutPathExpansion("AuthenticationType", &authentication_type_value)) {
    return false;
  }
  {
    const base::DictionaryValue* dictionary = NULL;
    if (!authentication_type_value->GetAsDictionary(&dictionary)) {
      return false;
    }
    if (!ManagedDOMString::Populate(*dictionary, &out->authentication_type)) {
      return false;
    }
  }

  const base::Value* client_cert_pattern_value = NULL;
  if (dict->GetWithoutPathExpansion("ClientCertPattern", &client_cert_pattern_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!client_cert_pattern_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedCertificatePattern> temp(new ManagedCertificatePattern());
        if (!ManagedCertificatePattern::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->client_cert_pattern = std::move(temp);
      }
    }
  }

  const base::Value* client_cert_ref_value = NULL;
  if (dict->GetWithoutPathExpansion("ClientCertRef", &client_cert_ref_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!client_cert_ref_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMString> temp(new ManagedDOMString());
        if (!ManagedDOMString::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->client_cert_ref = std::move(temp);
      }
    }
  }

  const base::Value* client_cert_type_value = NULL;
  if (dict->GetWithoutPathExpansion("ClientCertType", &client_cert_type_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!client_cert_type_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMString> temp(new ManagedDOMString());
        if (!ManagedDOMString::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->client_cert_type = std::move(temp);
      }
    }
  }

  const base::Value* eap_value = NULL;
  if (dict->GetWithoutPathExpansion("EAP", &eap_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!eap_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedEAPProperties> temp(new ManagedEAPProperties());
        if (!ManagedEAPProperties::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->eap = std::move(temp);
      }
    }
  }

  const base::Value* group_value = NULL;
  if (dict->GetWithoutPathExpansion("Group", &group_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!group_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMString> temp(new ManagedDOMString());
        if (!ManagedDOMString::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->group = std::move(temp);
      }
    }
  }

  const base::Value* ike_version_value = NULL;
  if (!dict->GetWithoutPathExpansion("IKEVersion", &ike_version_value)) {
    return false;
  }
  {
    const base::DictionaryValue* dictionary = NULL;
    if (!ike_version_value->GetAsDictionary(&dictionary)) {
      return false;
    }
    if (!ManagedLong::Populate(*dictionary, &out->ike_version)) {
      return false;
    }
  }

  const base::Value* psk_value = NULL;
  if (dict->GetWithoutPathExpansion("PSK", &psk_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!psk_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMString> temp(new ManagedDOMString());
        if (!ManagedDOMString::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->psk = std::move(temp);
      }
    }
  }

  const base::Value* save_credentials_value = NULL;
  if (dict->GetWithoutPathExpansion("SaveCredentials", &save_credentials_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!save_credentials_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedBoolean> temp(new ManagedBoolean());
        if (!ManagedBoolean::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->save_credentials = std::move(temp);
      }
    }
  }

  const base::Value* server_ca_refs_value = NULL;
  if (dict->GetWithoutPathExpansion("ServerCARefs", &server_ca_refs_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!server_ca_refs_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMStringList> temp(new ManagedDOMStringList());
        if (!ManagedDOMStringList::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->server_ca_refs = std::move(temp);
      }
    }
  }

  const base::Value* xauth_value = NULL;
  if (dict->GetWithoutPathExpansion("XAUTH", &xauth_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!xauth_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedXAUTHProperties> temp(new ManagedXAUTHProperties());
        if (!ManagedXAUTHProperties::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->xauth = std::move(temp);
      }
    }
  }

  return true;
}

// static
scoped_ptr<ManagedIPSecProperties> ManagedIPSecProperties::FromValue(const base::Value& value) {
  scoped_ptr<ManagedIPSecProperties> out(new ManagedIPSecProperties());
  if (!Populate(value, out.get()))
    return scoped_ptr<ManagedIPSecProperties>();
  return out;
}

scoped_ptr<base::DictionaryValue> ManagedIPSecProperties::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("AuthenticationType", (this->authentication_type).ToValue().release());

  if (this->client_cert_pattern.get()) {
    value->SetWithoutPathExpansion("ClientCertPattern", (this->client_cert_pattern)->ToValue().release());

  }
  if (this->client_cert_ref.get()) {
    value->SetWithoutPathExpansion("ClientCertRef", (this->client_cert_ref)->ToValue().release());

  }
  if (this->client_cert_type.get()) {
    value->SetWithoutPathExpansion("ClientCertType", (this->client_cert_type)->ToValue().release());

  }
  if (this->eap.get()) {
    value->SetWithoutPathExpansion("EAP", (this->eap)->ToValue().release());

  }
  if (this->group.get()) {
    value->SetWithoutPathExpansion("Group", (this->group)->ToValue().release());

  }
  value->SetWithoutPathExpansion("IKEVersion", (this->ike_version).ToValue().release());

  if (this->psk.get()) {
    value->SetWithoutPathExpansion("PSK", (this->psk)->ToValue().release());

  }
  if (this->save_credentials.get()) {
    value->SetWithoutPathExpansion("SaveCredentials", (this->save_credentials)->ToValue().release());

  }
  if (this->server_ca_refs.get()) {
    value->SetWithoutPathExpansion("ServerCARefs", (this->server_ca_refs)->ToValue().release());

  }
  if (this->xauth.get()) {
    value->SetWithoutPathExpansion("XAUTH", (this->xauth)->ToValue().release());

  }

  return value;
}


L2TPProperties::L2TPProperties()
 {}

L2TPProperties::~L2TPProperties() {}

// static
bool L2TPProperties::Populate(
    const base::Value& value, L2TPProperties* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* lcp_echo_disabled_value = NULL;
  if (dict->GetWithoutPathExpansion("LcpEchoDisabled", &lcp_echo_disabled_value)) {
    {
      bool temp;
      if (!lcp_echo_disabled_value->GetAsBoolean(&temp)) {
        out->lcp_echo_disabled.reset();
        return false;
      }
      else
        out->lcp_echo_disabled.reset(new bool(temp));
    }
  }

  const base::Value* password_value = NULL;
  if (dict->GetWithoutPathExpansion("Password", &password_value)) {
    {
      std::string temp;
      if (!password_value->GetAsString(&temp)) {
        out->password.reset();
        return false;
      }
      else
        out->password.reset(new std::string(temp));
    }
  }

  const base::Value* save_credentials_value = NULL;
  if (dict->GetWithoutPathExpansion("SaveCredentials", &save_credentials_value)) {
    {
      bool temp;
      if (!save_credentials_value->GetAsBoolean(&temp)) {
        out->save_credentials.reset();
        return false;
      }
      else
        out->save_credentials.reset(new bool(temp));
    }
  }

  const base::Value* username_value = NULL;
  if (dict->GetWithoutPathExpansion("Username", &username_value)) {
    {
      std::string temp;
      if (!username_value->GetAsString(&temp)) {
        out->username.reset();
        return false;
      }
      else
        out->username.reset(new std::string(temp));
    }
  }

  return true;
}

// static
scoped_ptr<L2TPProperties> L2TPProperties::FromValue(const base::Value& value) {
  scoped_ptr<L2TPProperties> out(new L2TPProperties());
  if (!Populate(value, out.get()))
    return scoped_ptr<L2TPProperties>();
  return out;
}

scoped_ptr<base::DictionaryValue> L2TPProperties::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->lcp_echo_disabled.get()) {
    value->SetWithoutPathExpansion("LcpEchoDisabled", new base::FundamentalValue(*this->lcp_echo_disabled));

  }
  if (this->password.get()) {
    value->SetWithoutPathExpansion("Password", new base::StringValue(*this->password));

  }
  if (this->save_credentials.get()) {
    value->SetWithoutPathExpansion("SaveCredentials", new base::FundamentalValue(*this->save_credentials));

  }
  if (this->username.get()) {
    value->SetWithoutPathExpansion("Username", new base::StringValue(*this->username));

  }

  return value;
}


ManagedL2TPProperties::ManagedL2TPProperties()
 {}

ManagedL2TPProperties::~ManagedL2TPProperties() {}

// static
bool ManagedL2TPProperties::Populate(
    const base::Value& value, ManagedL2TPProperties* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* lcp_echo_disabled_value = NULL;
  if (dict->GetWithoutPathExpansion("LcpEchoDisabled", &lcp_echo_disabled_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!lcp_echo_disabled_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedBoolean> temp(new ManagedBoolean());
        if (!ManagedBoolean::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->lcp_echo_disabled = std::move(temp);
      }
    }
  }

  const base::Value* password_value = NULL;
  if (dict->GetWithoutPathExpansion("Password", &password_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!password_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMString> temp(new ManagedDOMString());
        if (!ManagedDOMString::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->password = std::move(temp);
      }
    }
  }

  const base::Value* save_credentials_value = NULL;
  if (dict->GetWithoutPathExpansion("SaveCredentials", &save_credentials_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!save_credentials_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedBoolean> temp(new ManagedBoolean());
        if (!ManagedBoolean::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->save_credentials = std::move(temp);
      }
    }
  }

  const base::Value* username_value = NULL;
  if (dict->GetWithoutPathExpansion("Username", &username_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!username_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMString> temp(new ManagedDOMString());
        if (!ManagedDOMString::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->username = std::move(temp);
      }
    }
  }

  return true;
}

// static
scoped_ptr<ManagedL2TPProperties> ManagedL2TPProperties::FromValue(const base::Value& value) {
  scoped_ptr<ManagedL2TPProperties> out(new ManagedL2TPProperties());
  if (!Populate(value, out.get()))
    return scoped_ptr<ManagedL2TPProperties>();
  return out;
}

scoped_ptr<base::DictionaryValue> ManagedL2TPProperties::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->lcp_echo_disabled.get()) {
    value->SetWithoutPathExpansion("LcpEchoDisabled", (this->lcp_echo_disabled)->ToValue().release());

  }
  if (this->password.get()) {
    value->SetWithoutPathExpansion("Password", (this->password)->ToValue().release());

  }
  if (this->save_credentials.get()) {
    value->SetWithoutPathExpansion("SaveCredentials", (this->save_credentials)->ToValue().release());

  }
  if (this->username.get()) {
    value->SetWithoutPathExpansion("Username", (this->username)->ToValue().release());

  }

  return value;
}


PaymentPortal::PaymentPortal()
 {}

PaymentPortal::~PaymentPortal() {}

// static
bool PaymentPortal::Populate(
    const base::Value& value, PaymentPortal* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* method_value = NULL;
  if (!dict->GetWithoutPathExpansion("Method", &method_value)) {
    return false;
  }
  {
    if (!method_value->GetAsString(&out->method)) {
      return false;
    }
  }

  const base::Value* post_data_value = NULL;
  if (dict->GetWithoutPathExpansion("PostData", &post_data_value)) {
    {
      std::string temp;
      if (!post_data_value->GetAsString(&temp)) {
        out->post_data.reset();
        return false;
      }
      else
        out->post_data.reset(new std::string(temp));
    }
  }

  const base::Value* url_value = NULL;
  if (dict->GetWithoutPathExpansion("Url", &url_value)) {
    {
      std::string temp;
      if (!url_value->GetAsString(&temp)) {
        out->url.reset();
        return false;
      }
      else
        out->url.reset(new std::string(temp));
    }
  }

  return true;
}

// static
scoped_ptr<PaymentPortal> PaymentPortal::FromValue(const base::Value& value) {
  scoped_ptr<PaymentPortal> out(new PaymentPortal());
  if (!Populate(value, out.get()))
    return scoped_ptr<PaymentPortal>();
  return out;
}

scoped_ptr<base::DictionaryValue> PaymentPortal::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("Method", new base::StringValue(this->method));

  if (this->post_data.get()) {
    value->SetWithoutPathExpansion("PostData", new base::StringValue(*this->post_data));

  }
  if (this->url.get()) {
    value->SetWithoutPathExpansion("Url", new base::StringValue(*this->url));

  }

  return value;
}


ProxyLocation::ProxyLocation()
: port(0) {}

ProxyLocation::~ProxyLocation() {}

// static
bool ProxyLocation::Populate(
    const base::Value& value, ProxyLocation* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* host_value = NULL;
  if (!dict->GetWithoutPathExpansion("Host", &host_value)) {
    return false;
  }
  {
    if (!host_value->GetAsString(&out->host)) {
      return false;
    }
  }

  const base::Value* port_value = NULL;
  if (!dict->GetWithoutPathExpansion("Port", &port_value)) {
    return false;
  }
  {
    if (!port_value->GetAsInteger(&out->port)) {
      return false;
    }
  }

  return true;
}

// static
scoped_ptr<ProxyLocation> ProxyLocation::FromValue(const base::Value& value) {
  scoped_ptr<ProxyLocation> out(new ProxyLocation());
  if (!Populate(value, out.get()))
    return scoped_ptr<ProxyLocation>();
  return out;
}

scoped_ptr<base::DictionaryValue> ProxyLocation::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("Host", new base::StringValue(this->host));

  value->SetWithoutPathExpansion("Port", new base::FundamentalValue(this->port));


  return value;
}


ManagedProxyLocation::ManagedProxyLocation()
 {}

ManagedProxyLocation::~ManagedProxyLocation() {}

// static
bool ManagedProxyLocation::Populate(
    const base::Value& value, ManagedProxyLocation* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* host_value = NULL;
  if (!dict->GetWithoutPathExpansion("Host", &host_value)) {
    return false;
  }
  {
    const base::DictionaryValue* dictionary = NULL;
    if (!host_value->GetAsDictionary(&dictionary)) {
      return false;
    }
    if (!ManagedDOMString::Populate(*dictionary, &out->host)) {
      return false;
    }
  }

  const base::Value* port_value = NULL;
  if (!dict->GetWithoutPathExpansion("Port", &port_value)) {
    return false;
  }
  {
    const base::DictionaryValue* dictionary = NULL;
    if (!port_value->GetAsDictionary(&dictionary)) {
      return false;
    }
    if (!ManagedLong::Populate(*dictionary, &out->port)) {
      return false;
    }
  }

  return true;
}

// static
scoped_ptr<ManagedProxyLocation> ManagedProxyLocation::FromValue(const base::Value& value) {
  scoped_ptr<ManagedProxyLocation> out(new ManagedProxyLocation());
  if (!Populate(value, out.get()))
    return scoped_ptr<ManagedProxyLocation>();
  return out;
}

scoped_ptr<base::DictionaryValue> ManagedProxyLocation::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("Host", (this->host).ToValue().release());

  value->SetWithoutPathExpansion("Port", (this->port).ToValue().release());


  return value;
}


ManualProxySettings::ManualProxySettings()
 {}

ManualProxySettings::~ManualProxySettings() {}

// static
bool ManualProxySettings::Populate(
    const base::Value& value, ManualProxySettings* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* http_proxy_value = NULL;
  if (dict->GetWithoutPathExpansion("HTTPProxy", &http_proxy_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!http_proxy_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ProxyLocation> temp(new ProxyLocation());
        if (!ProxyLocation::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->http_proxy = std::move(temp);
      }
    }
  }

  const base::Value* secure_http_proxy_value = NULL;
  if (dict->GetWithoutPathExpansion("SecureHTTPProxy", &secure_http_proxy_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!secure_http_proxy_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ProxyLocation> temp(new ProxyLocation());
        if (!ProxyLocation::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->secure_http_proxy = std::move(temp);
      }
    }
  }

  const base::Value* ftp_proxy_value = NULL;
  if (dict->GetWithoutPathExpansion("FTPProxy", &ftp_proxy_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!ftp_proxy_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ProxyLocation> temp(new ProxyLocation());
        if (!ProxyLocation::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->ftp_proxy = std::move(temp);
      }
    }
  }

  const base::Value* socks_value = NULL;
  if (dict->GetWithoutPathExpansion("SOCKS", &socks_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!socks_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ProxyLocation> temp(new ProxyLocation());
        if (!ProxyLocation::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->socks = std::move(temp);
      }
    }
  }

  return true;
}

// static
scoped_ptr<ManualProxySettings> ManualProxySettings::FromValue(const base::Value& value) {
  scoped_ptr<ManualProxySettings> out(new ManualProxySettings());
  if (!Populate(value, out.get()))
    return scoped_ptr<ManualProxySettings>();
  return out;
}

scoped_ptr<base::DictionaryValue> ManualProxySettings::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->http_proxy.get()) {
    value->SetWithoutPathExpansion("HTTPProxy", (this->http_proxy)->ToValue().release());

  }
  if (this->secure_http_proxy.get()) {
    value->SetWithoutPathExpansion("SecureHTTPProxy", (this->secure_http_proxy)->ToValue().release());

  }
  if (this->ftp_proxy.get()) {
    value->SetWithoutPathExpansion("FTPProxy", (this->ftp_proxy)->ToValue().release());

  }
  if (this->socks.get()) {
    value->SetWithoutPathExpansion("SOCKS", (this->socks)->ToValue().release());

  }

  return value;
}


ManagedManualProxySettings::ManagedManualProxySettings()
 {}

ManagedManualProxySettings::~ManagedManualProxySettings() {}

// static
bool ManagedManualProxySettings::Populate(
    const base::Value& value, ManagedManualProxySettings* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* http_proxy_value = NULL;
  if (dict->GetWithoutPathExpansion("HTTPProxy", &http_proxy_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!http_proxy_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedProxyLocation> temp(new ManagedProxyLocation());
        if (!ManagedProxyLocation::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->http_proxy = std::move(temp);
      }
    }
  }

  const base::Value* secure_http_proxy_value = NULL;
  if (dict->GetWithoutPathExpansion("SecureHTTPProxy", &secure_http_proxy_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!secure_http_proxy_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedProxyLocation> temp(new ManagedProxyLocation());
        if (!ManagedProxyLocation::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->secure_http_proxy = std::move(temp);
      }
    }
  }

  const base::Value* ftp_proxy_value = NULL;
  if (dict->GetWithoutPathExpansion("FTPProxy", &ftp_proxy_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!ftp_proxy_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedProxyLocation> temp(new ManagedProxyLocation());
        if (!ManagedProxyLocation::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->ftp_proxy = std::move(temp);
      }
    }
  }

  const base::Value* socks_value = NULL;
  if (dict->GetWithoutPathExpansion("SOCKS", &socks_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!socks_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedProxyLocation> temp(new ManagedProxyLocation());
        if (!ManagedProxyLocation::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->socks = std::move(temp);
      }
    }
  }

  return true;
}

// static
scoped_ptr<ManagedManualProxySettings> ManagedManualProxySettings::FromValue(const base::Value& value) {
  scoped_ptr<ManagedManualProxySettings> out(new ManagedManualProxySettings());
  if (!Populate(value, out.get()))
    return scoped_ptr<ManagedManualProxySettings>();
  return out;
}

scoped_ptr<base::DictionaryValue> ManagedManualProxySettings::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->http_proxy.get()) {
    value->SetWithoutPathExpansion("HTTPProxy", (this->http_proxy)->ToValue().release());

  }
  if (this->secure_http_proxy.get()) {
    value->SetWithoutPathExpansion("SecureHTTPProxy", (this->secure_http_proxy)->ToValue().release());

  }
  if (this->ftp_proxy.get()) {
    value->SetWithoutPathExpansion("FTPProxy", (this->ftp_proxy)->ToValue().release());

  }
  if (this->socks.get()) {
    value->SetWithoutPathExpansion("SOCKS", (this->socks)->ToValue().release());

  }

  return value;
}


ProxySettings::ProxySettings()
: type(PROXY_SETTINGS_TYPE_NONE) {}

ProxySettings::~ProxySettings() {}

// static
bool ProxySettings::Populate(
    const base::Value& value, ProxySettings* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* type_value = NULL;
  if (!dict->GetWithoutPathExpansion("Type", &type_value)) {
    return false;
  }
  {
    std::string proxy_settings_type_as_string;
    if (!type_value->GetAsString(&proxy_settings_type_as_string)) {
      return false;
    }
    out->type = ParseProxySettingsType(proxy_settings_type_as_string);
    if (out->type == PROXY_SETTINGS_TYPE_NONE) {
      return false;
    }
  }

  const base::Value* manual_value = NULL;
  if (dict->GetWithoutPathExpansion("Manual", &manual_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!manual_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManualProxySettings> temp(new ManualProxySettings());
        if (!ManualProxySettings::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->manual = std::move(temp);
      }
    }
  }

  const base::Value* exclude_domains_value = NULL;
  if (dict->GetWithoutPathExpansion("ExcludeDomains", &exclude_domains_value)) {
    {
      const base::ListValue* list = NULL;
      if (!exclude_domains_value->GetAsList(&list)) {
        return false;
      }
      else {
        if (!json_schema_compiler::util::PopulateOptionalArrayFromList(*list, &out->exclude_domains)) {
          return false;
        }
      }
    }
  }

  const base::Value* pac_value = NULL;
  if (dict->GetWithoutPathExpansion("PAC", &pac_value)) {
    {
      std::string temp;
      if (!pac_value->GetAsString(&temp)) {
        out->pac.reset();
        return false;
      }
      else
        out->pac.reset(new std::string(temp));
    }
  }

  return true;
}

// static
scoped_ptr<ProxySettings> ProxySettings::FromValue(const base::Value& value) {
  scoped_ptr<ProxySettings> out(new ProxySettings());
  if (!Populate(value, out.get()))
    return scoped_ptr<ProxySettings>();
  return out;
}

scoped_ptr<base::DictionaryValue> ProxySettings::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("Type", new base::StringValue(networking_private::ToString(this->type)));

  if (this->manual.get()) {
    value->SetWithoutPathExpansion("Manual", (this->manual)->ToValue().release());

  }
  if (this->exclude_domains.get()) {
    value->SetWithoutPathExpansion("ExcludeDomains", json_schema_compiler::util::CreateValueFromOptionalArray(this->exclude_domains).release());

  }
  if (this->pac.get()) {
    value->SetWithoutPathExpansion("PAC", new base::StringValue(*this->pac));

  }

  return value;
}


ManagedProxySettings::ManagedProxySettings()
 {}

ManagedProxySettings::~ManagedProxySettings() {}

// static
bool ManagedProxySettings::Populate(
    const base::Value& value, ManagedProxySettings* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* type_value = NULL;
  if (!dict->GetWithoutPathExpansion("Type", &type_value)) {
    return false;
  }
  {
    const base::DictionaryValue* dictionary = NULL;
    if (!type_value->GetAsDictionary(&dictionary)) {
      return false;
    }
    if (!ManagedProxySettingsType::Populate(*dictionary, &out->type)) {
      return false;
    }
  }

  const base::Value* manual_value = NULL;
  if (dict->GetWithoutPathExpansion("Manual", &manual_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!manual_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedManualProxySettings> temp(new ManagedManualProxySettings());
        if (!ManagedManualProxySettings::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->manual = std::move(temp);
      }
    }
  }

  const base::Value* exclude_domains_value = NULL;
  if (dict->GetWithoutPathExpansion("ExcludeDomains", &exclude_domains_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!exclude_domains_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMStringList> temp(new ManagedDOMStringList());
        if (!ManagedDOMStringList::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->exclude_domains = std::move(temp);
      }
    }
  }

  const base::Value* pac_value = NULL;
  if (dict->GetWithoutPathExpansion("PAC", &pac_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!pac_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMString> temp(new ManagedDOMString());
        if (!ManagedDOMString::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->pac = std::move(temp);
      }
    }
  }

  return true;
}

// static
scoped_ptr<ManagedProxySettings> ManagedProxySettings::FromValue(const base::Value& value) {
  scoped_ptr<ManagedProxySettings> out(new ManagedProxySettings());
  if (!Populate(value, out.get()))
    return scoped_ptr<ManagedProxySettings>();
  return out;
}

scoped_ptr<base::DictionaryValue> ManagedProxySettings::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("Type", (this->type).ToValue().release());

  if (this->manual.get()) {
    value->SetWithoutPathExpansion("Manual", (this->manual)->ToValue().release());

  }
  if (this->exclude_domains.get()) {
    value->SetWithoutPathExpansion("ExcludeDomains", (this->exclude_domains)->ToValue().release());

  }
  if (this->pac.get()) {
    value->SetWithoutPathExpansion("PAC", (this->pac)->ToValue().release());

  }

  return value;
}


VerifyX509::VerifyX509()
 {}

VerifyX509::~VerifyX509() {}

// static
bool VerifyX509::Populate(
    const base::Value& value, VerifyX509* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* name_value = NULL;
  if (dict->GetWithoutPathExpansion("Name", &name_value)) {
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

  const base::Value* type_value = NULL;
  if (dict->GetWithoutPathExpansion("Type", &type_value)) {
    {
      std::string temp;
      if (!type_value->GetAsString(&temp)) {
        out->type.reset();
        return false;
      }
      else
        out->type.reset(new std::string(temp));
    }
  }

  return true;
}

// static
scoped_ptr<VerifyX509> VerifyX509::FromValue(const base::Value& value) {
  scoped_ptr<VerifyX509> out(new VerifyX509());
  if (!Populate(value, out.get()))
    return scoped_ptr<VerifyX509>();
  return out;
}

scoped_ptr<base::DictionaryValue> VerifyX509::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->name.get()) {
    value->SetWithoutPathExpansion("Name", new base::StringValue(*this->name));

  }
  if (this->type.get()) {
    value->SetWithoutPathExpansion("Type", new base::StringValue(*this->type));

  }

  return value;
}


ManagedVerifyX509::ManagedVerifyX509()
 {}

ManagedVerifyX509::~ManagedVerifyX509() {}

// static
bool ManagedVerifyX509::Populate(
    const base::Value& value, ManagedVerifyX509* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* name_value = NULL;
  if (dict->GetWithoutPathExpansion("Name", &name_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!name_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMString> temp(new ManagedDOMString());
        if (!ManagedDOMString::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->name = std::move(temp);
      }
    }
  }

  const base::Value* type_value = NULL;
  if (dict->GetWithoutPathExpansion("Type", &type_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!type_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMString> temp(new ManagedDOMString());
        if (!ManagedDOMString::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->type = std::move(temp);
      }
    }
  }

  return true;
}

// static
scoped_ptr<ManagedVerifyX509> ManagedVerifyX509::FromValue(const base::Value& value) {
  scoped_ptr<ManagedVerifyX509> out(new ManagedVerifyX509());
  if (!Populate(value, out.get()))
    return scoped_ptr<ManagedVerifyX509>();
  return out;
}

scoped_ptr<base::DictionaryValue> ManagedVerifyX509::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->name.get()) {
    value->SetWithoutPathExpansion("Name", (this->name)->ToValue().release());

  }
  if (this->type.get()) {
    value->SetWithoutPathExpansion("Type", (this->type)->ToValue().release());

  }

  return value;
}


OpenVPNProperties::OpenVPNProperties()
 {}

OpenVPNProperties::~OpenVPNProperties() {}

// static
bool OpenVPNProperties::Populate(
    const base::Value& value, OpenVPNProperties* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* auth_value = NULL;
  if (dict->GetWithoutPathExpansion("Auth", &auth_value)) {
    {
      std::string temp;
      if (!auth_value->GetAsString(&temp)) {
        out->auth.reset();
        return false;
      }
      else
        out->auth.reset(new std::string(temp));
    }
  }

  const base::Value* auth_retry_value = NULL;
  if (dict->GetWithoutPathExpansion("AuthRetry", &auth_retry_value)) {
    {
      std::string temp;
      if (!auth_retry_value->GetAsString(&temp)) {
        out->auth_retry.reset();
        return false;
      }
      else
        out->auth_retry.reset(new std::string(temp));
    }
  }

  const base::Value* auth_no_cache_value = NULL;
  if (dict->GetWithoutPathExpansion("AuthNoCache", &auth_no_cache_value)) {
    {
      bool temp;
      if (!auth_no_cache_value->GetAsBoolean(&temp)) {
        out->auth_no_cache.reset();
        return false;
      }
      else
        out->auth_no_cache.reset(new bool(temp));
    }
  }

  const base::Value* cipher_value = NULL;
  if (dict->GetWithoutPathExpansion("Cipher", &cipher_value)) {
    {
      std::string temp;
      if (!cipher_value->GetAsString(&temp)) {
        out->cipher.reset();
        return false;
      }
      else
        out->cipher.reset(new std::string(temp));
    }
  }

  const base::Value* client_cert_ref_value = NULL;
  if (dict->GetWithoutPathExpansion("ClientCertRef", &client_cert_ref_value)) {
    {
      std::string temp;
      if (!client_cert_ref_value->GetAsString(&temp)) {
        out->client_cert_ref.reset();
        return false;
      }
      else
        out->client_cert_ref.reset(new std::string(temp));
    }
  }

  const base::Value* client_cert_pattern_value = NULL;
  if (dict->GetWithoutPathExpansion("ClientCertPattern", &client_cert_pattern_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!client_cert_pattern_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<CertificatePattern> temp(new CertificatePattern());
        if (!CertificatePattern::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->client_cert_pattern = std::move(temp);
      }
    }
  }

  const base::Value* client_cert_type_value = NULL;
  if (dict->GetWithoutPathExpansion("ClientCertType", &client_cert_type_value)) {
    {
      std::string temp;
      if (!client_cert_type_value->GetAsString(&temp)) {
        out->client_cert_type.reset();
        return false;
      }
      else
        out->client_cert_type.reset(new std::string(temp));
    }
  }

  const base::Value* comp_lzo_value = NULL;
  if (dict->GetWithoutPathExpansion("CompLZO", &comp_lzo_value)) {
    {
      std::string temp;
      if (!comp_lzo_value->GetAsString(&temp)) {
        out->comp_lzo.reset();
        return false;
      }
      else
        out->comp_lzo.reset(new std::string(temp));
    }
  }

  const base::Value* comp_no_adapt_value = NULL;
  if (dict->GetWithoutPathExpansion("CompNoAdapt", &comp_no_adapt_value)) {
    {
      bool temp;
      if (!comp_no_adapt_value->GetAsBoolean(&temp)) {
        out->comp_no_adapt.reset();
        return false;
      }
      else
        out->comp_no_adapt.reset(new bool(temp));
    }
  }

  const base::Value* ignore_default_route_value = NULL;
  if (dict->GetWithoutPathExpansion("IgnoreDefaultRoute", &ignore_default_route_value)) {
    {
      bool temp;
      if (!ignore_default_route_value->GetAsBoolean(&temp)) {
        out->ignore_default_route.reset();
        return false;
      }
      else
        out->ignore_default_route.reset(new bool(temp));
    }
  }

  const base::Value* key_direction_value = NULL;
  if (dict->GetWithoutPathExpansion("KeyDirection", &key_direction_value)) {
    {
      std::string temp;
      if (!key_direction_value->GetAsString(&temp)) {
        out->key_direction.reset();
        return false;
      }
      else
        out->key_direction.reset(new std::string(temp));
    }
  }

  const base::Value* ns_cert_type_value = NULL;
  if (dict->GetWithoutPathExpansion("NsCertType", &ns_cert_type_value)) {
    {
      std::string temp;
      if (!ns_cert_type_value->GetAsString(&temp)) {
        out->ns_cert_type.reset();
        return false;
      }
      else
        out->ns_cert_type.reset(new std::string(temp));
    }
  }

  const base::Value* otp_value = NULL;
  if (dict->GetWithoutPathExpansion("OTP", &otp_value)) {
    {
      std::string temp;
      if (!otp_value->GetAsString(&temp)) {
        out->otp.reset();
        return false;
      }
      else
        out->otp.reset(new std::string(temp));
    }
  }

  const base::Value* password_value = NULL;
  if (dict->GetWithoutPathExpansion("Password", &password_value)) {
    {
      std::string temp;
      if (!password_value->GetAsString(&temp)) {
        out->password.reset();
        return false;
      }
      else
        out->password.reset(new std::string(temp));
    }
  }

  const base::Value* port_value = NULL;
  if (dict->GetWithoutPathExpansion("Port", &port_value)) {
    {
      int temp;
      if (!port_value->GetAsInteger(&temp)) {
        out->port.reset();
        return false;
      }
      else
        out->port.reset(new int(temp));
    }
  }

  const base::Value* proto_value = NULL;
  if (dict->GetWithoutPathExpansion("Proto", &proto_value)) {
    {
      std::string temp;
      if (!proto_value->GetAsString(&temp)) {
        out->proto.reset();
        return false;
      }
      else
        out->proto.reset(new std::string(temp));
    }
  }

  const base::Value* push_peer_info_value = NULL;
  if (dict->GetWithoutPathExpansion("PushPeerInfo", &push_peer_info_value)) {
    {
      std::string temp;
      if (!push_peer_info_value->GetAsString(&temp)) {
        out->push_peer_info.reset();
        return false;
      }
      else
        out->push_peer_info.reset(new std::string(temp));
    }
  }

  const base::Value* remote_cert_eku_value = NULL;
  if (dict->GetWithoutPathExpansion("RemoteCertEKU", &remote_cert_eku_value)) {
    {
      std::string temp;
      if (!remote_cert_eku_value->GetAsString(&temp)) {
        out->remote_cert_eku.reset();
        return false;
      }
      else
        out->remote_cert_eku.reset(new std::string(temp));
    }
  }

  const base::Value* remote_cert_ku_value = NULL;
  if (dict->GetWithoutPathExpansion("RemoteCertKU", &remote_cert_ku_value)) {
    {
      const base::ListValue* list = NULL;
      if (!remote_cert_ku_value->GetAsList(&list)) {
        return false;
      }
      else {
        if (!json_schema_compiler::util::PopulateOptionalArrayFromList(*list, &out->remote_cert_ku)) {
          return false;
        }
      }
    }
  }

  const base::Value* remote_cert_tls_value = NULL;
  if (dict->GetWithoutPathExpansion("RemoteCertTLS", &remote_cert_tls_value)) {
    {
      std::string temp;
      if (!remote_cert_tls_value->GetAsString(&temp)) {
        out->remote_cert_tls.reset();
        return false;
      }
      else
        out->remote_cert_tls.reset(new std::string(temp));
    }
  }

  const base::Value* reneg_sec_value = NULL;
  if (dict->GetWithoutPathExpansion("RenegSec", &reneg_sec_value)) {
    {
      int temp;
      if (!reneg_sec_value->GetAsInteger(&temp)) {
        out->reneg_sec.reset();
        return false;
      }
      else
        out->reneg_sec.reset(new int(temp));
    }
  }

  const base::Value* save_credentials_value = NULL;
  if (dict->GetWithoutPathExpansion("SaveCredentials", &save_credentials_value)) {
    {
      bool temp;
      if (!save_credentials_value->GetAsBoolean(&temp)) {
        out->save_credentials.reset();
        return false;
      }
      else
        out->save_credentials.reset(new bool(temp));
    }
  }

  const base::Value* server_ca_refs_value = NULL;
  if (dict->GetWithoutPathExpansion("ServerCARefs", &server_ca_refs_value)) {
    {
      const base::ListValue* list = NULL;
      if (!server_ca_refs_value->GetAsList(&list)) {
        return false;
      }
      else {
        if (!json_schema_compiler::util::PopulateOptionalArrayFromList(*list, &out->server_ca_refs)) {
          return false;
        }
      }
    }
  }

  const base::Value* server_cert_ref_value = NULL;
  if (dict->GetWithoutPathExpansion("ServerCertRef", &server_cert_ref_value)) {
    {
      std::string temp;
      if (!server_cert_ref_value->GetAsString(&temp)) {
        out->server_cert_ref.reset();
        return false;
      }
      else
        out->server_cert_ref.reset(new std::string(temp));
    }
  }

  const base::Value* server_poll_timeout_value = NULL;
  if (dict->GetWithoutPathExpansion("ServerPollTimeout", &server_poll_timeout_value)) {
    {
      int temp;
      if (!server_poll_timeout_value->GetAsInteger(&temp)) {
        out->server_poll_timeout.reset();
        return false;
      }
      else
        out->server_poll_timeout.reset(new int(temp));
    }
  }

  const base::Value* shaper_value = NULL;
  if (dict->GetWithoutPathExpansion("Shaper", &shaper_value)) {
    {
      int temp;
      if (!shaper_value->GetAsInteger(&temp)) {
        out->shaper.reset();
        return false;
      }
      else
        out->shaper.reset(new int(temp));
    }
  }

  const base::Value* static_challenge_value = NULL;
  if (dict->GetWithoutPathExpansion("StaticChallenge", &static_challenge_value)) {
    {
      std::string temp;
      if (!static_challenge_value->GetAsString(&temp)) {
        out->static_challenge.reset();
        return false;
      }
      else
        out->static_challenge.reset(new std::string(temp));
    }
  }

  const base::Value* tls_auth_contents_value = NULL;
  if (dict->GetWithoutPathExpansion("TLSAuthContents", &tls_auth_contents_value)) {
    {
      std::string temp;
      if (!tls_auth_contents_value->GetAsString(&temp)) {
        out->tls_auth_contents.reset();
        return false;
      }
      else
        out->tls_auth_contents.reset(new std::string(temp));
    }
  }

  const base::Value* tls_remote_value = NULL;
  if (dict->GetWithoutPathExpansion("TLSRemote", &tls_remote_value)) {
    {
      std::string temp;
      if (!tls_remote_value->GetAsString(&temp)) {
        out->tls_remote.reset();
        return false;
      }
      else
        out->tls_remote.reset(new std::string(temp));
    }
  }

  const base::Value* user_authentication_type_value = NULL;
  if (dict->GetWithoutPathExpansion("UserAuthenticationType", &user_authentication_type_value)) {
    {
      std::string temp;
      if (!user_authentication_type_value->GetAsString(&temp)) {
        out->user_authentication_type.reset();
        return false;
      }
      else
        out->user_authentication_type.reset(new std::string(temp));
    }
  }

  const base::Value* username_value = NULL;
  if (dict->GetWithoutPathExpansion("Username", &username_value)) {
    {
      std::string temp;
      if (!username_value->GetAsString(&temp)) {
        out->username.reset();
        return false;
      }
      else
        out->username.reset(new std::string(temp));
    }
  }

  const base::Value* verb_value = NULL;
  if (dict->GetWithoutPathExpansion("Verb", &verb_value)) {
    {
      std::string temp;
      if (!verb_value->GetAsString(&temp)) {
        out->verb.reset();
        return false;
      }
      else
        out->verb.reset(new std::string(temp));
    }
  }

  const base::Value* verify_hash_value = NULL;
  if (dict->GetWithoutPathExpansion("VerifyHash", &verify_hash_value)) {
    {
      std::string temp;
      if (!verify_hash_value->GetAsString(&temp)) {
        out->verify_hash.reset();
        return false;
      }
      else
        out->verify_hash.reset(new std::string(temp));
    }
  }

  const base::Value* verify_x509_value = NULL;
  if (dict->GetWithoutPathExpansion("VerifyX509", &verify_x509_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!verify_x509_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<VerifyX509> temp(new VerifyX509());
        if (!VerifyX509::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->verify_x509 = std::move(temp);
      }
    }
  }

  return true;
}

// static
scoped_ptr<OpenVPNProperties> OpenVPNProperties::FromValue(const base::Value& value) {
  scoped_ptr<OpenVPNProperties> out(new OpenVPNProperties());
  if (!Populate(value, out.get()))
    return scoped_ptr<OpenVPNProperties>();
  return out;
}

scoped_ptr<base::DictionaryValue> OpenVPNProperties::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->auth.get()) {
    value->SetWithoutPathExpansion("Auth", new base::StringValue(*this->auth));

  }
  if (this->auth_retry.get()) {
    value->SetWithoutPathExpansion("AuthRetry", new base::StringValue(*this->auth_retry));

  }
  if (this->auth_no_cache.get()) {
    value->SetWithoutPathExpansion("AuthNoCache", new base::FundamentalValue(*this->auth_no_cache));

  }
  if (this->cipher.get()) {
    value->SetWithoutPathExpansion("Cipher", new base::StringValue(*this->cipher));

  }
  if (this->client_cert_ref.get()) {
    value->SetWithoutPathExpansion("ClientCertRef", new base::StringValue(*this->client_cert_ref));

  }
  if (this->client_cert_pattern.get()) {
    value->SetWithoutPathExpansion("ClientCertPattern", (this->client_cert_pattern)->ToValue().release());

  }
  if (this->client_cert_type.get()) {
    value->SetWithoutPathExpansion("ClientCertType", new base::StringValue(*this->client_cert_type));

  }
  if (this->comp_lzo.get()) {
    value->SetWithoutPathExpansion("CompLZO", new base::StringValue(*this->comp_lzo));

  }
  if (this->comp_no_adapt.get()) {
    value->SetWithoutPathExpansion("CompNoAdapt", new base::FundamentalValue(*this->comp_no_adapt));

  }
  if (this->ignore_default_route.get()) {
    value->SetWithoutPathExpansion("IgnoreDefaultRoute", new base::FundamentalValue(*this->ignore_default_route));

  }
  if (this->key_direction.get()) {
    value->SetWithoutPathExpansion("KeyDirection", new base::StringValue(*this->key_direction));

  }
  if (this->ns_cert_type.get()) {
    value->SetWithoutPathExpansion("NsCertType", new base::StringValue(*this->ns_cert_type));

  }
  if (this->otp.get()) {
    value->SetWithoutPathExpansion("OTP", new base::StringValue(*this->otp));

  }
  if (this->password.get()) {
    value->SetWithoutPathExpansion("Password", new base::StringValue(*this->password));

  }
  if (this->port.get()) {
    value->SetWithoutPathExpansion("Port", new base::FundamentalValue(*this->port));

  }
  if (this->proto.get()) {
    value->SetWithoutPathExpansion("Proto", new base::StringValue(*this->proto));

  }
  if (this->push_peer_info.get()) {
    value->SetWithoutPathExpansion("PushPeerInfo", new base::StringValue(*this->push_peer_info));

  }
  if (this->remote_cert_eku.get()) {
    value->SetWithoutPathExpansion("RemoteCertEKU", new base::StringValue(*this->remote_cert_eku));

  }
  if (this->remote_cert_ku.get()) {
    value->SetWithoutPathExpansion("RemoteCertKU", json_schema_compiler::util::CreateValueFromOptionalArray(this->remote_cert_ku).release());

  }
  if (this->remote_cert_tls.get()) {
    value->SetWithoutPathExpansion("RemoteCertTLS", new base::StringValue(*this->remote_cert_tls));

  }
  if (this->reneg_sec.get()) {
    value->SetWithoutPathExpansion("RenegSec", new base::FundamentalValue(*this->reneg_sec));

  }
  if (this->save_credentials.get()) {
    value->SetWithoutPathExpansion("SaveCredentials", new base::FundamentalValue(*this->save_credentials));

  }
  if (this->server_ca_refs.get()) {
    value->SetWithoutPathExpansion("ServerCARefs", json_schema_compiler::util::CreateValueFromOptionalArray(this->server_ca_refs).release());

  }
  if (this->server_cert_ref.get()) {
    value->SetWithoutPathExpansion("ServerCertRef", new base::StringValue(*this->server_cert_ref));

  }
  if (this->server_poll_timeout.get()) {
    value->SetWithoutPathExpansion("ServerPollTimeout", new base::FundamentalValue(*this->server_poll_timeout));

  }
  if (this->shaper.get()) {
    value->SetWithoutPathExpansion("Shaper", new base::FundamentalValue(*this->shaper));

  }
  if (this->static_challenge.get()) {
    value->SetWithoutPathExpansion("StaticChallenge", new base::StringValue(*this->static_challenge));

  }
  if (this->tls_auth_contents.get()) {
    value->SetWithoutPathExpansion("TLSAuthContents", new base::StringValue(*this->tls_auth_contents));

  }
  if (this->tls_remote.get()) {
    value->SetWithoutPathExpansion("TLSRemote", new base::StringValue(*this->tls_remote));

  }
  if (this->user_authentication_type.get()) {
    value->SetWithoutPathExpansion("UserAuthenticationType", new base::StringValue(*this->user_authentication_type));

  }
  if (this->username.get()) {
    value->SetWithoutPathExpansion("Username", new base::StringValue(*this->username));

  }
  if (this->verb.get()) {
    value->SetWithoutPathExpansion("Verb", new base::StringValue(*this->verb));

  }
  if (this->verify_hash.get()) {
    value->SetWithoutPathExpansion("VerifyHash", new base::StringValue(*this->verify_hash));

  }
  if (this->verify_x509.get()) {
    value->SetWithoutPathExpansion("VerifyX509", (this->verify_x509)->ToValue().release());

  }

  return value;
}


ManagedOpenVPNProperties::ManagedOpenVPNProperties()
 {}

ManagedOpenVPNProperties::~ManagedOpenVPNProperties() {}

// static
bool ManagedOpenVPNProperties::Populate(
    const base::Value& value, ManagedOpenVPNProperties* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* auth_value = NULL;
  if (dict->GetWithoutPathExpansion("Auth", &auth_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!auth_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMString> temp(new ManagedDOMString());
        if (!ManagedDOMString::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->auth = std::move(temp);
      }
    }
  }

  const base::Value* auth_retry_value = NULL;
  if (dict->GetWithoutPathExpansion("AuthRetry", &auth_retry_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!auth_retry_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMString> temp(new ManagedDOMString());
        if (!ManagedDOMString::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->auth_retry = std::move(temp);
      }
    }
  }

  const base::Value* auth_no_cache_value = NULL;
  if (dict->GetWithoutPathExpansion("AuthNoCache", &auth_no_cache_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!auth_no_cache_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedBoolean> temp(new ManagedBoolean());
        if (!ManagedBoolean::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->auth_no_cache = std::move(temp);
      }
    }
  }

  const base::Value* cipher_value = NULL;
  if (dict->GetWithoutPathExpansion("Cipher", &cipher_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!cipher_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMString> temp(new ManagedDOMString());
        if (!ManagedDOMString::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->cipher = std::move(temp);
      }
    }
  }

  const base::Value* client_cert_ref_value = NULL;
  if (dict->GetWithoutPathExpansion("ClientCertRef", &client_cert_ref_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!client_cert_ref_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMString> temp(new ManagedDOMString());
        if (!ManagedDOMString::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->client_cert_ref = std::move(temp);
      }
    }
  }

  const base::Value* client_cert_pattern_value = NULL;
  if (dict->GetWithoutPathExpansion("ClientCertPattern", &client_cert_pattern_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!client_cert_pattern_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedCertificatePattern> temp(new ManagedCertificatePattern());
        if (!ManagedCertificatePattern::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->client_cert_pattern = std::move(temp);
      }
    }
  }

  const base::Value* client_cert_type_value = NULL;
  if (dict->GetWithoutPathExpansion("ClientCertType", &client_cert_type_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!client_cert_type_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMString> temp(new ManagedDOMString());
        if (!ManagedDOMString::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->client_cert_type = std::move(temp);
      }
    }
  }

  const base::Value* comp_lzo_value = NULL;
  if (dict->GetWithoutPathExpansion("CompLZO", &comp_lzo_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!comp_lzo_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMString> temp(new ManagedDOMString());
        if (!ManagedDOMString::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->comp_lzo = std::move(temp);
      }
    }
  }

  const base::Value* comp_no_adapt_value = NULL;
  if (dict->GetWithoutPathExpansion("CompNoAdapt", &comp_no_adapt_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!comp_no_adapt_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedBoolean> temp(new ManagedBoolean());
        if (!ManagedBoolean::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->comp_no_adapt = std::move(temp);
      }
    }
  }

  const base::Value* ignore_default_route_value = NULL;
  if (dict->GetWithoutPathExpansion("IgnoreDefaultRoute", &ignore_default_route_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!ignore_default_route_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedBoolean> temp(new ManagedBoolean());
        if (!ManagedBoolean::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->ignore_default_route = std::move(temp);
      }
    }
  }

  const base::Value* key_direction_value = NULL;
  if (dict->GetWithoutPathExpansion("KeyDirection", &key_direction_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!key_direction_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMString> temp(new ManagedDOMString());
        if (!ManagedDOMString::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->key_direction = std::move(temp);
      }
    }
  }

  const base::Value* ns_cert_type_value = NULL;
  if (dict->GetWithoutPathExpansion("NsCertType", &ns_cert_type_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!ns_cert_type_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMString> temp(new ManagedDOMString());
        if (!ManagedDOMString::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->ns_cert_type = std::move(temp);
      }
    }
  }

  const base::Value* otp_value = NULL;
  if (dict->GetWithoutPathExpansion("OTP", &otp_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!otp_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMString> temp(new ManagedDOMString());
        if (!ManagedDOMString::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->otp = std::move(temp);
      }
    }
  }

  const base::Value* password_value = NULL;
  if (dict->GetWithoutPathExpansion("Password", &password_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!password_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMString> temp(new ManagedDOMString());
        if (!ManagedDOMString::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->password = std::move(temp);
      }
    }
  }

  const base::Value* port_value = NULL;
  if (dict->GetWithoutPathExpansion("Port", &port_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!port_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedLong> temp(new ManagedLong());
        if (!ManagedLong::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->port = std::move(temp);
      }
    }
  }

  const base::Value* proto_value = NULL;
  if (dict->GetWithoutPathExpansion("Proto", &proto_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!proto_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMString> temp(new ManagedDOMString());
        if (!ManagedDOMString::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->proto = std::move(temp);
      }
    }
  }

  const base::Value* push_peer_info_value = NULL;
  if (dict->GetWithoutPathExpansion("PushPeerInfo", &push_peer_info_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!push_peer_info_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMString> temp(new ManagedDOMString());
        if (!ManagedDOMString::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->push_peer_info = std::move(temp);
      }
    }
  }

  const base::Value* remote_cert_eku_value = NULL;
  if (dict->GetWithoutPathExpansion("RemoteCertEKU", &remote_cert_eku_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!remote_cert_eku_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMString> temp(new ManagedDOMString());
        if (!ManagedDOMString::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->remote_cert_eku = std::move(temp);
      }
    }
  }

  const base::Value* remote_cert_ku_value = NULL;
  if (dict->GetWithoutPathExpansion("RemoteCertKU", &remote_cert_ku_value)) {
    {
      const base::ListValue* list = NULL;
      if (!remote_cert_ku_value->GetAsList(&list)) {
        return false;
      }
      else {
        if (!json_schema_compiler::util::PopulateOptionalArrayFromList(*list, &out->remote_cert_ku)) {
          return false;
        }
      }
    }
  }

  const base::Value* remote_cert_tls_value = NULL;
  if (dict->GetWithoutPathExpansion("RemoteCertTLS", &remote_cert_tls_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!remote_cert_tls_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMString> temp(new ManagedDOMString());
        if (!ManagedDOMString::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->remote_cert_tls = std::move(temp);
      }
    }
  }

  const base::Value* reneg_sec_value = NULL;
  if (dict->GetWithoutPathExpansion("RenegSec", &reneg_sec_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!reneg_sec_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedLong> temp(new ManagedLong());
        if (!ManagedLong::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->reneg_sec = std::move(temp);
      }
    }
  }

  const base::Value* save_credentials_value = NULL;
  if (dict->GetWithoutPathExpansion("SaveCredentials", &save_credentials_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!save_credentials_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedBoolean> temp(new ManagedBoolean());
        if (!ManagedBoolean::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->save_credentials = std::move(temp);
      }
    }
  }

  const base::Value* server_ca_refs_value = NULL;
  if (dict->GetWithoutPathExpansion("ServerCARefs", &server_ca_refs_value)) {
    {
      const base::ListValue* list = NULL;
      if (!server_ca_refs_value->GetAsList(&list)) {
        return false;
      }
      else {
        if (!json_schema_compiler::util::PopulateOptionalArrayFromList(*list, &out->server_ca_refs)) {
          return false;
        }
      }
    }
  }

  const base::Value* server_cert_ref_value = NULL;
  if (dict->GetWithoutPathExpansion("ServerCertRef", &server_cert_ref_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!server_cert_ref_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMString> temp(new ManagedDOMString());
        if (!ManagedDOMString::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->server_cert_ref = std::move(temp);
      }
    }
  }

  const base::Value* server_poll_timeout_value = NULL;
  if (dict->GetWithoutPathExpansion("ServerPollTimeout", &server_poll_timeout_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!server_poll_timeout_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedLong> temp(new ManagedLong());
        if (!ManagedLong::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->server_poll_timeout = std::move(temp);
      }
    }
  }

  const base::Value* shaper_value = NULL;
  if (dict->GetWithoutPathExpansion("Shaper", &shaper_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!shaper_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedLong> temp(new ManagedLong());
        if (!ManagedLong::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->shaper = std::move(temp);
      }
    }
  }

  const base::Value* static_challenge_value = NULL;
  if (dict->GetWithoutPathExpansion("StaticChallenge", &static_challenge_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!static_challenge_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMString> temp(new ManagedDOMString());
        if (!ManagedDOMString::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->static_challenge = std::move(temp);
      }
    }
  }

  const base::Value* tls_auth_contents_value = NULL;
  if (dict->GetWithoutPathExpansion("TLSAuthContents", &tls_auth_contents_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!tls_auth_contents_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMString> temp(new ManagedDOMString());
        if (!ManagedDOMString::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->tls_auth_contents = std::move(temp);
      }
    }
  }

  const base::Value* tls_remote_value = NULL;
  if (dict->GetWithoutPathExpansion("TLSRemote", &tls_remote_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!tls_remote_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMString> temp(new ManagedDOMString());
        if (!ManagedDOMString::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->tls_remote = std::move(temp);
      }
    }
  }

  const base::Value* user_authentication_type_value = NULL;
  if (dict->GetWithoutPathExpansion("UserAuthenticationType", &user_authentication_type_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!user_authentication_type_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMString> temp(new ManagedDOMString());
        if (!ManagedDOMString::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->user_authentication_type = std::move(temp);
      }
    }
  }

  const base::Value* username_value = NULL;
  if (dict->GetWithoutPathExpansion("Username", &username_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!username_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMString> temp(new ManagedDOMString());
        if (!ManagedDOMString::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->username = std::move(temp);
      }
    }
  }

  const base::Value* verb_value = NULL;
  if (dict->GetWithoutPathExpansion("Verb", &verb_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!verb_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMString> temp(new ManagedDOMString());
        if (!ManagedDOMString::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->verb = std::move(temp);
      }
    }
  }

  const base::Value* verify_hash_value = NULL;
  if (dict->GetWithoutPathExpansion("VerifyHash", &verify_hash_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!verify_hash_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMString> temp(new ManagedDOMString());
        if (!ManagedDOMString::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->verify_hash = std::move(temp);
      }
    }
  }

  const base::Value* verify_x509_value = NULL;
  if (dict->GetWithoutPathExpansion("VerifyX509", &verify_x509_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!verify_x509_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedVerifyX509> temp(new ManagedVerifyX509());
        if (!ManagedVerifyX509::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->verify_x509 = std::move(temp);
      }
    }
  }

  return true;
}

// static
scoped_ptr<ManagedOpenVPNProperties> ManagedOpenVPNProperties::FromValue(const base::Value& value) {
  scoped_ptr<ManagedOpenVPNProperties> out(new ManagedOpenVPNProperties());
  if (!Populate(value, out.get()))
    return scoped_ptr<ManagedOpenVPNProperties>();
  return out;
}

scoped_ptr<base::DictionaryValue> ManagedOpenVPNProperties::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->auth.get()) {
    value->SetWithoutPathExpansion("Auth", (this->auth)->ToValue().release());

  }
  if (this->auth_retry.get()) {
    value->SetWithoutPathExpansion("AuthRetry", (this->auth_retry)->ToValue().release());

  }
  if (this->auth_no_cache.get()) {
    value->SetWithoutPathExpansion("AuthNoCache", (this->auth_no_cache)->ToValue().release());

  }
  if (this->cipher.get()) {
    value->SetWithoutPathExpansion("Cipher", (this->cipher)->ToValue().release());

  }
  if (this->client_cert_ref.get()) {
    value->SetWithoutPathExpansion("ClientCertRef", (this->client_cert_ref)->ToValue().release());

  }
  if (this->client_cert_pattern.get()) {
    value->SetWithoutPathExpansion("ClientCertPattern", (this->client_cert_pattern)->ToValue().release());

  }
  if (this->client_cert_type.get()) {
    value->SetWithoutPathExpansion("ClientCertType", (this->client_cert_type)->ToValue().release());

  }
  if (this->comp_lzo.get()) {
    value->SetWithoutPathExpansion("CompLZO", (this->comp_lzo)->ToValue().release());

  }
  if (this->comp_no_adapt.get()) {
    value->SetWithoutPathExpansion("CompNoAdapt", (this->comp_no_adapt)->ToValue().release());

  }
  if (this->ignore_default_route.get()) {
    value->SetWithoutPathExpansion("IgnoreDefaultRoute", (this->ignore_default_route)->ToValue().release());

  }
  if (this->key_direction.get()) {
    value->SetWithoutPathExpansion("KeyDirection", (this->key_direction)->ToValue().release());

  }
  if (this->ns_cert_type.get()) {
    value->SetWithoutPathExpansion("NsCertType", (this->ns_cert_type)->ToValue().release());

  }
  if (this->otp.get()) {
    value->SetWithoutPathExpansion("OTP", (this->otp)->ToValue().release());

  }
  if (this->password.get()) {
    value->SetWithoutPathExpansion("Password", (this->password)->ToValue().release());

  }
  if (this->port.get()) {
    value->SetWithoutPathExpansion("Port", (this->port)->ToValue().release());

  }
  if (this->proto.get()) {
    value->SetWithoutPathExpansion("Proto", (this->proto)->ToValue().release());

  }
  if (this->push_peer_info.get()) {
    value->SetWithoutPathExpansion("PushPeerInfo", (this->push_peer_info)->ToValue().release());

  }
  if (this->remote_cert_eku.get()) {
    value->SetWithoutPathExpansion("RemoteCertEKU", (this->remote_cert_eku)->ToValue().release());

  }
  if (this->remote_cert_ku.get()) {
    value->SetWithoutPathExpansion("RemoteCertKU", json_schema_compiler::util::CreateValueFromOptionalArray(this->remote_cert_ku).release());

  }
  if (this->remote_cert_tls.get()) {
    value->SetWithoutPathExpansion("RemoteCertTLS", (this->remote_cert_tls)->ToValue().release());

  }
  if (this->reneg_sec.get()) {
    value->SetWithoutPathExpansion("RenegSec", (this->reneg_sec)->ToValue().release());

  }
  if (this->save_credentials.get()) {
    value->SetWithoutPathExpansion("SaveCredentials", (this->save_credentials)->ToValue().release());

  }
  if (this->server_ca_refs.get()) {
    value->SetWithoutPathExpansion("ServerCARefs", json_schema_compiler::util::CreateValueFromOptionalArray(this->server_ca_refs).release());

  }
  if (this->server_cert_ref.get()) {
    value->SetWithoutPathExpansion("ServerCertRef", (this->server_cert_ref)->ToValue().release());

  }
  if (this->server_poll_timeout.get()) {
    value->SetWithoutPathExpansion("ServerPollTimeout", (this->server_poll_timeout)->ToValue().release());

  }
  if (this->shaper.get()) {
    value->SetWithoutPathExpansion("Shaper", (this->shaper)->ToValue().release());

  }
  if (this->static_challenge.get()) {
    value->SetWithoutPathExpansion("StaticChallenge", (this->static_challenge)->ToValue().release());

  }
  if (this->tls_auth_contents.get()) {
    value->SetWithoutPathExpansion("TLSAuthContents", (this->tls_auth_contents)->ToValue().release());

  }
  if (this->tls_remote.get()) {
    value->SetWithoutPathExpansion("TLSRemote", (this->tls_remote)->ToValue().release());

  }
  if (this->user_authentication_type.get()) {
    value->SetWithoutPathExpansion("UserAuthenticationType", (this->user_authentication_type)->ToValue().release());

  }
  if (this->username.get()) {
    value->SetWithoutPathExpansion("Username", (this->username)->ToValue().release());

  }
  if (this->verb.get()) {
    value->SetWithoutPathExpansion("Verb", (this->verb)->ToValue().release());

  }
  if (this->verify_hash.get()) {
    value->SetWithoutPathExpansion("VerifyHash", (this->verify_hash)->ToValue().release());

  }
  if (this->verify_x509.get()) {
    value->SetWithoutPathExpansion("VerifyX509", (this->verify_x509)->ToValue().release());

  }

  return value;
}


SIMLockStatus::SIMLockStatus()
: lock_enabled(false) {}

SIMLockStatus::~SIMLockStatus() {}

// static
bool SIMLockStatus::Populate(
    const base::Value& value, SIMLockStatus* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* lock_type_value = NULL;
  if (!dict->GetWithoutPathExpansion("LockType", &lock_type_value)) {
    return false;
  }
  {
    if (!lock_type_value->GetAsString(&out->lock_type)) {
      return false;
    }
  }

  const base::Value* lock_enabled_value = NULL;
  if (!dict->GetWithoutPathExpansion("LockEnabled", &lock_enabled_value)) {
    return false;
  }
  {
    if (!lock_enabled_value->GetAsBoolean(&out->lock_enabled)) {
      return false;
    }
  }

  const base::Value* retries_left_value = NULL;
  if (dict->GetWithoutPathExpansion("RetriesLeft", &retries_left_value)) {
    {
      int temp;
      if (!retries_left_value->GetAsInteger(&temp)) {
        out->retries_left.reset();
        return false;
      }
      else
        out->retries_left.reset(new int(temp));
    }
  }

  return true;
}

// static
scoped_ptr<SIMLockStatus> SIMLockStatus::FromValue(const base::Value& value) {
  scoped_ptr<SIMLockStatus> out(new SIMLockStatus());
  if (!Populate(value, out.get()))
    return scoped_ptr<SIMLockStatus>();
  return out;
}

scoped_ptr<base::DictionaryValue> SIMLockStatus::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("LockType", new base::StringValue(this->lock_type));

  value->SetWithoutPathExpansion("LockEnabled", new base::FundamentalValue(this->lock_enabled));

  if (this->retries_left.get()) {
    value->SetWithoutPathExpansion("RetriesLeft", new base::FundamentalValue(*this->retries_left));

  }

  return value;
}


ThirdPartyVPNProperties::ThirdPartyVPNProperties()
 {}

ThirdPartyVPNProperties::~ThirdPartyVPNProperties() {}

// static
bool ThirdPartyVPNProperties::Populate(
    const base::Value& value, ThirdPartyVPNProperties* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* extension_id_value = NULL;
  if (!dict->GetWithoutPathExpansion("ExtensionID", &extension_id_value)) {
    return false;
  }
  {
    if (!extension_id_value->GetAsString(&out->extension_id)) {
      return false;
    }
  }

  const base::Value* provider_name_value = NULL;
  if (dict->GetWithoutPathExpansion("ProviderName", &provider_name_value)) {
    {
      std::string temp;
      if (!provider_name_value->GetAsString(&temp)) {
        out->provider_name.reset();
        return false;
      }
      else
        out->provider_name.reset(new std::string(temp));
    }
  }

  return true;
}

// static
scoped_ptr<ThirdPartyVPNProperties> ThirdPartyVPNProperties::FromValue(const base::Value& value) {
  scoped_ptr<ThirdPartyVPNProperties> out(new ThirdPartyVPNProperties());
  if (!Populate(value, out.get()))
    return scoped_ptr<ThirdPartyVPNProperties>();
  return out;
}

scoped_ptr<base::DictionaryValue> ThirdPartyVPNProperties::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("ExtensionID", new base::StringValue(this->extension_id));

  if (this->provider_name.get()) {
    value->SetWithoutPathExpansion("ProviderName", new base::StringValue(*this->provider_name));

  }

  return value;
}


ManagedThirdPartyVPNProperties::ManagedThirdPartyVPNProperties()
 {}

ManagedThirdPartyVPNProperties::~ManagedThirdPartyVPNProperties() {}

// static
bool ManagedThirdPartyVPNProperties::Populate(
    const base::Value& value, ManagedThirdPartyVPNProperties* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* extension_id_value = NULL;
  if (!dict->GetWithoutPathExpansion("ExtensionID", &extension_id_value)) {
    return false;
  }
  {
    const base::DictionaryValue* dictionary = NULL;
    if (!extension_id_value->GetAsDictionary(&dictionary)) {
      return false;
    }
    if (!ManagedDOMString::Populate(*dictionary, &out->extension_id)) {
      return false;
    }
  }

  const base::Value* provider_name_value = NULL;
  if (dict->GetWithoutPathExpansion("ProviderName", &provider_name_value)) {
    {
      std::string temp;
      if (!provider_name_value->GetAsString(&temp)) {
        out->provider_name.reset();
        return false;
      }
      else
        out->provider_name.reset(new std::string(temp));
    }
  }

  return true;
}

// static
scoped_ptr<ManagedThirdPartyVPNProperties> ManagedThirdPartyVPNProperties::FromValue(const base::Value& value) {
  scoped_ptr<ManagedThirdPartyVPNProperties> out(new ManagedThirdPartyVPNProperties());
  if (!Populate(value, out.get()))
    return scoped_ptr<ManagedThirdPartyVPNProperties>();
  return out;
}

scoped_ptr<base::DictionaryValue> ManagedThirdPartyVPNProperties::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("ExtensionID", (this->extension_id).ToValue().release());

  if (this->provider_name.get()) {
    value->SetWithoutPathExpansion("ProviderName", new base::StringValue(*this->provider_name));

  }

  return value;
}


CellularProperties::CellularProperties()
: activation_state(ACTIVATION_STATE_TYPE_NONE) {}

CellularProperties::~CellularProperties() {}

// static
bool CellularProperties::Populate(
    const base::Value& value, CellularProperties* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  out->activation_state = ACTIVATION_STATE_TYPE_NONE;
  const base::Value* auto_connect_value = NULL;
  if (dict->GetWithoutPathExpansion("AutoConnect", &auto_connect_value)) {
    {
      bool temp;
      if (!auto_connect_value->GetAsBoolean(&temp)) {
        out->auto_connect.reset();
        return false;
      }
      else
        out->auto_connect.reset(new bool(temp));
    }
  }

  const base::Value* apn_value = NULL;
  if (dict->GetWithoutPathExpansion("APN", &apn_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!apn_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<APNProperties> temp(new APNProperties());
        if (!APNProperties::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->apn = std::move(temp);
      }
    }
  }

  const base::Value* apn_list_value = NULL;
  if (dict->GetWithoutPathExpansion("APNList", &apn_list_value)) {
    {
      const base::ListValue* list = NULL;
      if (!apn_list_value->GetAsList(&list)) {
        return false;
      }
      else {
        if (!json_schema_compiler::util::PopulateOptionalArrayFromList(*list, &out->apn_list)) {
          return false;
        }
      }
    }
  }

  const base::Value* activation_type_value = NULL;
  if (dict->GetWithoutPathExpansion("ActivationType", &activation_type_value)) {
    {
      std::string temp;
      if (!activation_type_value->GetAsString(&temp)) {
        out->activation_type.reset();
        return false;
      }
      else
        out->activation_type.reset(new std::string(temp));
    }
  }

  const base::Value* activation_state_value = NULL;
  if (dict->GetWithoutPathExpansion("ActivationState", &activation_state_value)) {
    {
      std::string activation_state_type_as_string;
      if (!activation_state_value->GetAsString(&activation_state_type_as_string)) {
        return false;
      }
      out->activation_state = ParseActivationStateType(activation_state_type_as_string);
      if (out->activation_state == ACTIVATION_STATE_TYPE_NONE) {
        return false;
      }
    }
    } else {
    out->activation_state = ACTIVATION_STATE_TYPE_NONE;
  }

  const base::Value* allow_roaming_value = NULL;
  if (dict->GetWithoutPathExpansion("AllowRoaming", &allow_roaming_value)) {
    {
      bool temp;
      if (!allow_roaming_value->GetAsBoolean(&temp)) {
        out->allow_roaming.reset();
        return false;
      }
      else
        out->allow_roaming.reset(new bool(temp));
    }
  }

  const base::Value* carrier_value = NULL;
  if (dict->GetWithoutPathExpansion("Carrier", &carrier_value)) {
    {
      std::string temp;
      if (!carrier_value->GetAsString(&temp)) {
        out->carrier.reset();
        return false;
      }
      else
        out->carrier.reset(new std::string(temp));
    }
  }

  const base::Value* esn_value = NULL;
  if (dict->GetWithoutPathExpansion("ESN", &esn_value)) {
    {
      std::string temp;
      if (!esn_value->GetAsString(&temp)) {
        out->esn.reset();
        return false;
      }
      else
        out->esn.reset(new std::string(temp));
    }
  }

  const base::Value* family_value = NULL;
  if (dict->GetWithoutPathExpansion("Family", &family_value)) {
    {
      std::string temp;
      if (!family_value->GetAsString(&temp)) {
        out->family.reset();
        return false;
      }
      else
        out->family.reset(new std::string(temp));
    }
  }

  const base::Value* firmware_revision_value = NULL;
  if (dict->GetWithoutPathExpansion("FirmwareRevision", &firmware_revision_value)) {
    {
      std::string temp;
      if (!firmware_revision_value->GetAsString(&temp)) {
        out->firmware_revision.reset();
        return false;
      }
      else
        out->firmware_revision.reset(new std::string(temp));
    }
  }

  const base::Value* found_networks_value = NULL;
  if (dict->GetWithoutPathExpansion("FoundNetworks", &found_networks_value)) {
    {
      const base::ListValue* list = NULL;
      if (!found_networks_value->GetAsList(&list)) {
        return false;
      }
      else {
        if (!json_schema_compiler::util::PopulateOptionalArrayFromList(*list, &out->found_networks)) {
          return false;
        }
      }
    }
  }

  const base::Value* hardware_revision_value = NULL;
  if (dict->GetWithoutPathExpansion("HardwareRevision", &hardware_revision_value)) {
    {
      std::string temp;
      if (!hardware_revision_value->GetAsString(&temp)) {
        out->hardware_revision.reset();
        return false;
      }
      else
        out->hardware_revision.reset(new std::string(temp));
    }
  }

  const base::Value* home_provider_value = NULL;
  if (dict->GetWithoutPathExpansion("HomeProvider", &home_provider_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!home_provider_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<CellularProviderProperties> temp(new CellularProviderProperties());
        if (!CellularProviderProperties::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->home_provider = std::move(temp);
      }
    }
  }

  const base::Value* iccid_value = NULL;
  if (dict->GetWithoutPathExpansion("ICCID", &iccid_value)) {
    {
      std::string temp;
      if (!iccid_value->GetAsString(&temp)) {
        out->iccid.reset();
        return false;
      }
      else
        out->iccid.reset(new std::string(temp));
    }
  }

  const base::Value* imei_value = NULL;
  if (dict->GetWithoutPathExpansion("IMEI", &imei_value)) {
    {
      std::string temp;
      if (!imei_value->GetAsString(&temp)) {
        out->imei.reset();
        return false;
      }
      else
        out->imei.reset(new std::string(temp));
    }
  }

  const base::Value* last_good_apn_value = NULL;
  if (dict->GetWithoutPathExpansion("LastGoodAPN", &last_good_apn_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!last_good_apn_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<APNProperties> temp(new APNProperties());
        if (!APNProperties::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->last_good_apn = std::move(temp);
      }
    }
  }

  const base::Value* manufacturer_value = NULL;
  if (dict->GetWithoutPathExpansion("Manufacturer", &manufacturer_value)) {
    {
      std::string temp;
      if (!manufacturer_value->GetAsString(&temp)) {
        out->manufacturer.reset();
        return false;
      }
      else
        out->manufacturer.reset(new std::string(temp));
    }
  }

  const base::Value* mdn_value = NULL;
  if (dict->GetWithoutPathExpansion("MDN", &mdn_value)) {
    {
      std::string temp;
      if (!mdn_value->GetAsString(&temp)) {
        out->mdn.reset();
        return false;
      }
      else
        out->mdn.reset(new std::string(temp));
    }
  }

  const base::Value* meid_value = NULL;
  if (dict->GetWithoutPathExpansion("MEID", &meid_value)) {
    {
      std::string temp;
      if (!meid_value->GetAsString(&temp)) {
        out->meid.reset();
        return false;
      }
      else
        out->meid.reset(new std::string(temp));
    }
  }

  const base::Value* min_value = NULL;
  if (dict->GetWithoutPathExpansion("MIN", &min_value)) {
    {
      std::string temp;
      if (!min_value->GetAsString(&temp)) {
        out->min.reset();
        return false;
      }
      else
        out->min.reset(new std::string(temp));
    }
  }

  const base::Value* model_id_value = NULL;
  if (dict->GetWithoutPathExpansion("ModelID", &model_id_value)) {
    {
      std::string temp;
      if (!model_id_value->GetAsString(&temp)) {
        out->model_id.reset();
        return false;
      }
      else
        out->model_id.reset(new std::string(temp));
    }
  }

  const base::Value* network_technology_value = NULL;
  if (dict->GetWithoutPathExpansion("NetworkTechnology", &network_technology_value)) {
    {
      std::string temp;
      if (!network_technology_value->GetAsString(&temp)) {
        out->network_technology.reset();
        return false;
      }
      else
        out->network_technology.reset(new std::string(temp));
    }
  }

  const base::Value* payment_portal_value = NULL;
  if (dict->GetWithoutPathExpansion("PaymentPortal", &payment_portal_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!payment_portal_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<PaymentPortal> temp(new PaymentPortal());
        if (!PaymentPortal::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->payment_portal = std::move(temp);
      }
    }
  }

  const base::Value* prl_version_value = NULL;
  if (dict->GetWithoutPathExpansion("PRLVersion", &prl_version_value)) {
    {
      int temp;
      if (!prl_version_value->GetAsInteger(&temp)) {
        out->prl_version.reset();
        return false;
      }
      else
        out->prl_version.reset(new int(temp));
    }
  }

  const base::Value* roaming_state_value = NULL;
  if (dict->GetWithoutPathExpansion("RoamingState", &roaming_state_value)) {
    {
      std::string temp;
      if (!roaming_state_value->GetAsString(&temp)) {
        out->roaming_state.reset();
        return false;
      }
      else
        out->roaming_state.reset(new std::string(temp));
    }
  }

  const base::Value* serving_operator_value = NULL;
  if (dict->GetWithoutPathExpansion("ServingOperator", &serving_operator_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!serving_operator_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<CellularProviderProperties> temp(new CellularProviderProperties());
        if (!CellularProviderProperties::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->serving_operator = std::move(temp);
      }
    }
  }

  const base::Value* sim_lock_status_value = NULL;
  if (dict->GetWithoutPathExpansion("SIMLockStatus", &sim_lock_status_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!sim_lock_status_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<SIMLockStatus> temp(new SIMLockStatus());
        if (!SIMLockStatus::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->sim_lock_status = std::move(temp);
      }
    }
  }

  const base::Value* sim_present_value = NULL;
  if (dict->GetWithoutPathExpansion("SIMPresent", &sim_present_value)) {
    {
      bool temp;
      if (!sim_present_value->GetAsBoolean(&temp)) {
        out->sim_present.reset();
        return false;
      }
      else
        out->sim_present.reset(new bool(temp));
    }
  }

  const base::Value* support_network_scan_value = NULL;
  if (dict->GetWithoutPathExpansion("SupportNetworkScan", &support_network_scan_value)) {
    {
      bool temp;
      if (!support_network_scan_value->GetAsBoolean(&temp)) {
        out->support_network_scan.reset();
        return false;
      }
      else
        out->support_network_scan.reset(new bool(temp));
    }
  }

  const base::Value* supported_carriers_value = NULL;
  if (dict->GetWithoutPathExpansion("SupportedCarriers", &supported_carriers_value)) {
    {
      const base::ListValue* list = NULL;
      if (!supported_carriers_value->GetAsList(&list)) {
        return false;
      }
      else {
        if (!json_schema_compiler::util::PopulateOptionalArrayFromList(*list, &out->supported_carriers)) {
          return false;
        }
      }
    }
  }

  return true;
}

// static
scoped_ptr<CellularProperties> CellularProperties::FromValue(const base::Value& value) {
  scoped_ptr<CellularProperties> out(new CellularProperties());
  if (!Populate(value, out.get()))
    return scoped_ptr<CellularProperties>();
  return out;
}

scoped_ptr<base::DictionaryValue> CellularProperties::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->auto_connect.get()) {
    value->SetWithoutPathExpansion("AutoConnect", new base::FundamentalValue(*this->auto_connect));

  }
  if (this->apn.get()) {
    value->SetWithoutPathExpansion("APN", (this->apn)->ToValue().release());

  }
  if (this->apn_list.get()) {
    value->SetWithoutPathExpansion("APNList", json_schema_compiler::util::CreateValueFromOptionalArray(this->apn_list).release());

  }
  if (this->activation_type.get()) {
    value->SetWithoutPathExpansion("ActivationType", new base::StringValue(*this->activation_type));

  }
  if (this->activation_state != ACTIVATION_STATE_TYPE_NONE) {
    value->SetWithoutPathExpansion("ActivationState", new base::StringValue(networking_private::ToString(this->activation_state)));

  }
  if (this->allow_roaming.get()) {
    value->SetWithoutPathExpansion("AllowRoaming", new base::FundamentalValue(*this->allow_roaming));

  }
  if (this->carrier.get()) {
    value->SetWithoutPathExpansion("Carrier", new base::StringValue(*this->carrier));

  }
  if (this->esn.get()) {
    value->SetWithoutPathExpansion("ESN", new base::StringValue(*this->esn));

  }
  if (this->family.get()) {
    value->SetWithoutPathExpansion("Family", new base::StringValue(*this->family));

  }
  if (this->firmware_revision.get()) {
    value->SetWithoutPathExpansion("FirmwareRevision", new base::StringValue(*this->firmware_revision));

  }
  if (this->found_networks.get()) {
    value->SetWithoutPathExpansion("FoundNetworks", json_schema_compiler::util::CreateValueFromOptionalArray(this->found_networks).release());

  }
  if (this->hardware_revision.get()) {
    value->SetWithoutPathExpansion("HardwareRevision", new base::StringValue(*this->hardware_revision));

  }
  if (this->home_provider.get()) {
    value->SetWithoutPathExpansion("HomeProvider", (this->home_provider)->ToValue().release());

  }
  if (this->iccid.get()) {
    value->SetWithoutPathExpansion("ICCID", new base::StringValue(*this->iccid));

  }
  if (this->imei.get()) {
    value->SetWithoutPathExpansion("IMEI", new base::StringValue(*this->imei));

  }
  if (this->last_good_apn.get()) {
    value->SetWithoutPathExpansion("LastGoodAPN", (this->last_good_apn)->ToValue().release());

  }
  if (this->manufacturer.get()) {
    value->SetWithoutPathExpansion("Manufacturer", new base::StringValue(*this->manufacturer));

  }
  if (this->mdn.get()) {
    value->SetWithoutPathExpansion("MDN", new base::StringValue(*this->mdn));

  }
  if (this->meid.get()) {
    value->SetWithoutPathExpansion("MEID", new base::StringValue(*this->meid));

  }
  if (this->min.get()) {
    value->SetWithoutPathExpansion("MIN", new base::StringValue(*this->min));

  }
  if (this->model_id.get()) {
    value->SetWithoutPathExpansion("ModelID", new base::StringValue(*this->model_id));

  }
  if (this->network_technology.get()) {
    value->SetWithoutPathExpansion("NetworkTechnology", new base::StringValue(*this->network_technology));

  }
  if (this->payment_portal.get()) {
    value->SetWithoutPathExpansion("PaymentPortal", (this->payment_portal)->ToValue().release());

  }
  if (this->prl_version.get()) {
    value->SetWithoutPathExpansion("PRLVersion", new base::FundamentalValue(*this->prl_version));

  }
  if (this->roaming_state.get()) {
    value->SetWithoutPathExpansion("RoamingState", new base::StringValue(*this->roaming_state));

  }
  if (this->serving_operator.get()) {
    value->SetWithoutPathExpansion("ServingOperator", (this->serving_operator)->ToValue().release());

  }
  if (this->sim_lock_status.get()) {
    value->SetWithoutPathExpansion("SIMLockStatus", (this->sim_lock_status)->ToValue().release());

  }
  if (this->sim_present.get()) {
    value->SetWithoutPathExpansion("SIMPresent", new base::FundamentalValue(*this->sim_present));

  }
  if (this->support_network_scan.get()) {
    value->SetWithoutPathExpansion("SupportNetworkScan", new base::FundamentalValue(*this->support_network_scan));

  }
  if (this->supported_carriers.get()) {
    value->SetWithoutPathExpansion("SupportedCarriers", json_schema_compiler::util::CreateValueFromOptionalArray(this->supported_carriers).release());

  }

  return value;
}


ManagedCellularProperties::ManagedCellularProperties()
: activation_state(ACTIVATION_STATE_TYPE_NONE) {}

ManagedCellularProperties::~ManagedCellularProperties() {}

// static
bool ManagedCellularProperties::Populate(
    const base::Value& value, ManagedCellularProperties* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  out->activation_state = ACTIVATION_STATE_TYPE_NONE;
  const base::Value* auto_connect_value = NULL;
  if (dict->GetWithoutPathExpansion("AutoConnect", &auto_connect_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!auto_connect_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedBoolean> temp(new ManagedBoolean());
        if (!ManagedBoolean::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->auto_connect = std::move(temp);
      }
    }
  }

  const base::Value* apn_value = NULL;
  if (dict->GetWithoutPathExpansion("APN", &apn_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!apn_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedAPNProperties> temp(new ManagedAPNProperties());
        if (!ManagedAPNProperties::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->apn = std::move(temp);
      }
    }
  }

  const base::Value* apn_list_value = NULL;
  if (dict->GetWithoutPathExpansion("APNList", &apn_list_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!apn_list_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedAPNList> temp(new ManagedAPNList());
        if (!ManagedAPNList::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->apn_list = std::move(temp);
      }
    }
  }

  const base::Value* activation_type_value = NULL;
  if (dict->GetWithoutPathExpansion("ActivationType", &activation_type_value)) {
    {
      std::string temp;
      if (!activation_type_value->GetAsString(&temp)) {
        out->activation_type.reset();
        return false;
      }
      else
        out->activation_type.reset(new std::string(temp));
    }
  }

  const base::Value* activation_state_value = NULL;
  if (dict->GetWithoutPathExpansion("ActivationState", &activation_state_value)) {
    {
      std::string activation_state_type_as_string;
      if (!activation_state_value->GetAsString(&activation_state_type_as_string)) {
        return false;
      }
      out->activation_state = ParseActivationStateType(activation_state_type_as_string);
      if (out->activation_state == ACTIVATION_STATE_TYPE_NONE) {
        return false;
      }
    }
    } else {
    out->activation_state = ACTIVATION_STATE_TYPE_NONE;
  }

  const base::Value* allow_roaming_value = NULL;
  if (dict->GetWithoutPathExpansion("AllowRoaming", &allow_roaming_value)) {
    {
      bool temp;
      if (!allow_roaming_value->GetAsBoolean(&temp)) {
        out->allow_roaming.reset();
        return false;
      }
      else
        out->allow_roaming.reset(new bool(temp));
    }
  }

  const base::Value* carrier_value = NULL;
  if (dict->GetWithoutPathExpansion("Carrier", &carrier_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!carrier_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMString> temp(new ManagedDOMString());
        if (!ManagedDOMString::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->carrier = std::move(temp);
      }
    }
  }

  const base::Value* esn_value = NULL;
  if (dict->GetWithoutPathExpansion("ESN", &esn_value)) {
    {
      std::string temp;
      if (!esn_value->GetAsString(&temp)) {
        out->esn.reset();
        return false;
      }
      else
        out->esn.reset(new std::string(temp));
    }
  }

  const base::Value* family_value = NULL;
  if (dict->GetWithoutPathExpansion("Family", &family_value)) {
    {
      std::string temp;
      if (!family_value->GetAsString(&temp)) {
        out->family.reset();
        return false;
      }
      else
        out->family.reset(new std::string(temp));
    }
  }

  const base::Value* firmware_revision_value = NULL;
  if (dict->GetWithoutPathExpansion("FirmwareRevision", &firmware_revision_value)) {
    {
      std::string temp;
      if (!firmware_revision_value->GetAsString(&temp)) {
        out->firmware_revision.reset();
        return false;
      }
      else
        out->firmware_revision.reset(new std::string(temp));
    }
  }

  const base::Value* found_networks_value = NULL;
  if (dict->GetWithoutPathExpansion("FoundNetworks", &found_networks_value)) {
    {
      const base::ListValue* list = NULL;
      if (!found_networks_value->GetAsList(&list)) {
        return false;
      }
      else {
        if (!json_schema_compiler::util::PopulateOptionalArrayFromList(*list, &out->found_networks)) {
          return false;
        }
      }
    }
  }

  const base::Value* hardware_revision_value = NULL;
  if (dict->GetWithoutPathExpansion("HardwareRevision", &hardware_revision_value)) {
    {
      std::string temp;
      if (!hardware_revision_value->GetAsString(&temp)) {
        out->hardware_revision.reset();
        return false;
      }
      else
        out->hardware_revision.reset(new std::string(temp));
    }
  }

  const base::Value* home_provider_value = NULL;
  if (dict->GetWithoutPathExpansion("HomeProvider", &home_provider_value)) {
    {
      const base::ListValue* list = NULL;
      if (!home_provider_value->GetAsList(&list)) {
        return false;
      }
      else {
        if (!json_schema_compiler::util::PopulateOptionalArrayFromList(*list, &out->home_provider)) {
          return false;
        }
      }
    }
  }

  const base::Value* iccid_value = NULL;
  if (dict->GetWithoutPathExpansion("ICCID", &iccid_value)) {
    {
      std::string temp;
      if (!iccid_value->GetAsString(&temp)) {
        out->iccid.reset();
        return false;
      }
      else
        out->iccid.reset(new std::string(temp));
    }
  }

  const base::Value* imei_value = NULL;
  if (dict->GetWithoutPathExpansion("IMEI", &imei_value)) {
    {
      std::string temp;
      if (!imei_value->GetAsString(&temp)) {
        out->imei.reset();
        return false;
      }
      else
        out->imei.reset(new std::string(temp));
    }
  }

  const base::Value* last_good_apn_value = NULL;
  if (dict->GetWithoutPathExpansion("LastGoodAPN", &last_good_apn_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!last_good_apn_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<APNProperties> temp(new APNProperties());
        if (!APNProperties::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->last_good_apn = std::move(temp);
      }
    }
  }

  const base::Value* manufacturer_value = NULL;
  if (dict->GetWithoutPathExpansion("Manufacturer", &manufacturer_value)) {
    {
      std::string temp;
      if (!manufacturer_value->GetAsString(&temp)) {
        out->manufacturer.reset();
        return false;
      }
      else
        out->manufacturer.reset(new std::string(temp));
    }
  }

  const base::Value* mdn_value = NULL;
  if (dict->GetWithoutPathExpansion("MDN", &mdn_value)) {
    {
      std::string temp;
      if (!mdn_value->GetAsString(&temp)) {
        out->mdn.reset();
        return false;
      }
      else
        out->mdn.reset(new std::string(temp));
    }
  }

  const base::Value* meid_value = NULL;
  if (dict->GetWithoutPathExpansion("MEID", &meid_value)) {
    {
      std::string temp;
      if (!meid_value->GetAsString(&temp)) {
        out->meid.reset();
        return false;
      }
      else
        out->meid.reset(new std::string(temp));
    }
  }

  const base::Value* min_value = NULL;
  if (dict->GetWithoutPathExpansion("MIN", &min_value)) {
    {
      std::string temp;
      if (!min_value->GetAsString(&temp)) {
        out->min.reset();
        return false;
      }
      else
        out->min.reset(new std::string(temp));
    }
  }

  const base::Value* model_id_value = NULL;
  if (dict->GetWithoutPathExpansion("ModelID", &model_id_value)) {
    {
      std::string temp;
      if (!model_id_value->GetAsString(&temp)) {
        out->model_id.reset();
        return false;
      }
      else
        out->model_id.reset(new std::string(temp));
    }
  }

  const base::Value* network_technology_value = NULL;
  if (dict->GetWithoutPathExpansion("NetworkTechnology", &network_technology_value)) {
    {
      std::string temp;
      if (!network_technology_value->GetAsString(&temp)) {
        out->network_technology.reset();
        return false;
      }
      else
        out->network_technology.reset(new std::string(temp));
    }
  }

  const base::Value* payment_portal_value = NULL;
  if (dict->GetWithoutPathExpansion("PaymentPortal", &payment_portal_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!payment_portal_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<PaymentPortal> temp(new PaymentPortal());
        if (!PaymentPortal::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->payment_portal = std::move(temp);
      }
    }
  }

  const base::Value* prl_version_value = NULL;
  if (dict->GetWithoutPathExpansion("PRLVersion", &prl_version_value)) {
    {
      int temp;
      if (!prl_version_value->GetAsInteger(&temp)) {
        out->prl_version.reset();
        return false;
      }
      else
        out->prl_version.reset(new int(temp));
    }
  }

  const base::Value* roaming_state_value = NULL;
  if (dict->GetWithoutPathExpansion("RoamingState", &roaming_state_value)) {
    {
      std::string temp;
      if (!roaming_state_value->GetAsString(&temp)) {
        out->roaming_state.reset();
        return false;
      }
      else
        out->roaming_state.reset(new std::string(temp));
    }
  }

  const base::Value* serving_operator_value = NULL;
  if (dict->GetWithoutPathExpansion("ServingOperator", &serving_operator_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!serving_operator_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<CellularProviderProperties> temp(new CellularProviderProperties());
        if (!CellularProviderProperties::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->serving_operator = std::move(temp);
      }
    }
  }

  const base::Value* sim_lock_status_value = NULL;
  if (dict->GetWithoutPathExpansion("SIMLockStatus", &sim_lock_status_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!sim_lock_status_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<SIMLockStatus> temp(new SIMLockStatus());
        if (!SIMLockStatus::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->sim_lock_status = std::move(temp);
      }
    }
  }

  const base::Value* sim_present_value = NULL;
  if (dict->GetWithoutPathExpansion("SIMPresent", &sim_present_value)) {
    {
      bool temp;
      if (!sim_present_value->GetAsBoolean(&temp)) {
        out->sim_present.reset();
        return false;
      }
      else
        out->sim_present.reset(new bool(temp));
    }
  }

  const base::Value* support_network_scan_value = NULL;
  if (dict->GetWithoutPathExpansion("SupportNetworkScan", &support_network_scan_value)) {
    {
      bool temp;
      if (!support_network_scan_value->GetAsBoolean(&temp)) {
        out->support_network_scan.reset();
        return false;
      }
      else
        out->support_network_scan.reset(new bool(temp));
    }
  }

  const base::Value* supported_carriers_value = NULL;
  if (dict->GetWithoutPathExpansion("SupportedCarriers", &supported_carriers_value)) {
    {
      const base::ListValue* list = NULL;
      if (!supported_carriers_value->GetAsList(&list)) {
        return false;
      }
      else {
        if (!json_schema_compiler::util::PopulateOptionalArrayFromList(*list, &out->supported_carriers)) {
          return false;
        }
      }
    }
  }

  return true;
}

// static
scoped_ptr<ManagedCellularProperties> ManagedCellularProperties::FromValue(const base::Value& value) {
  scoped_ptr<ManagedCellularProperties> out(new ManagedCellularProperties());
  if (!Populate(value, out.get()))
    return scoped_ptr<ManagedCellularProperties>();
  return out;
}

scoped_ptr<base::DictionaryValue> ManagedCellularProperties::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->auto_connect.get()) {
    value->SetWithoutPathExpansion("AutoConnect", (this->auto_connect)->ToValue().release());

  }
  if (this->apn.get()) {
    value->SetWithoutPathExpansion("APN", (this->apn)->ToValue().release());

  }
  if (this->apn_list.get()) {
    value->SetWithoutPathExpansion("APNList", (this->apn_list)->ToValue().release());

  }
  if (this->activation_type.get()) {
    value->SetWithoutPathExpansion("ActivationType", new base::StringValue(*this->activation_type));

  }
  if (this->activation_state != ACTIVATION_STATE_TYPE_NONE) {
    value->SetWithoutPathExpansion("ActivationState", new base::StringValue(networking_private::ToString(this->activation_state)));

  }
  if (this->allow_roaming.get()) {
    value->SetWithoutPathExpansion("AllowRoaming", new base::FundamentalValue(*this->allow_roaming));

  }
  if (this->carrier.get()) {
    value->SetWithoutPathExpansion("Carrier", (this->carrier)->ToValue().release());

  }
  if (this->esn.get()) {
    value->SetWithoutPathExpansion("ESN", new base::StringValue(*this->esn));

  }
  if (this->family.get()) {
    value->SetWithoutPathExpansion("Family", new base::StringValue(*this->family));

  }
  if (this->firmware_revision.get()) {
    value->SetWithoutPathExpansion("FirmwareRevision", new base::StringValue(*this->firmware_revision));

  }
  if (this->found_networks.get()) {
    value->SetWithoutPathExpansion("FoundNetworks", json_schema_compiler::util::CreateValueFromOptionalArray(this->found_networks).release());

  }
  if (this->hardware_revision.get()) {
    value->SetWithoutPathExpansion("HardwareRevision", new base::StringValue(*this->hardware_revision));

  }
  if (this->home_provider.get()) {
    value->SetWithoutPathExpansion("HomeProvider", json_schema_compiler::util::CreateValueFromOptionalArray(this->home_provider).release());

  }
  if (this->iccid.get()) {
    value->SetWithoutPathExpansion("ICCID", new base::StringValue(*this->iccid));

  }
  if (this->imei.get()) {
    value->SetWithoutPathExpansion("IMEI", new base::StringValue(*this->imei));

  }
  if (this->last_good_apn.get()) {
    value->SetWithoutPathExpansion("LastGoodAPN", (this->last_good_apn)->ToValue().release());

  }
  if (this->manufacturer.get()) {
    value->SetWithoutPathExpansion("Manufacturer", new base::StringValue(*this->manufacturer));

  }
  if (this->mdn.get()) {
    value->SetWithoutPathExpansion("MDN", new base::StringValue(*this->mdn));

  }
  if (this->meid.get()) {
    value->SetWithoutPathExpansion("MEID", new base::StringValue(*this->meid));

  }
  if (this->min.get()) {
    value->SetWithoutPathExpansion("MIN", new base::StringValue(*this->min));

  }
  if (this->model_id.get()) {
    value->SetWithoutPathExpansion("ModelID", new base::StringValue(*this->model_id));

  }
  if (this->network_technology.get()) {
    value->SetWithoutPathExpansion("NetworkTechnology", new base::StringValue(*this->network_technology));

  }
  if (this->payment_portal.get()) {
    value->SetWithoutPathExpansion("PaymentPortal", (this->payment_portal)->ToValue().release());

  }
  if (this->prl_version.get()) {
    value->SetWithoutPathExpansion("PRLVersion", new base::FundamentalValue(*this->prl_version));

  }
  if (this->roaming_state.get()) {
    value->SetWithoutPathExpansion("RoamingState", new base::StringValue(*this->roaming_state));

  }
  if (this->serving_operator.get()) {
    value->SetWithoutPathExpansion("ServingOperator", (this->serving_operator)->ToValue().release());

  }
  if (this->sim_lock_status.get()) {
    value->SetWithoutPathExpansion("SIMLockStatus", (this->sim_lock_status)->ToValue().release());

  }
  if (this->sim_present.get()) {
    value->SetWithoutPathExpansion("SIMPresent", new base::FundamentalValue(*this->sim_present));

  }
  if (this->support_network_scan.get()) {
    value->SetWithoutPathExpansion("SupportNetworkScan", new base::FundamentalValue(*this->support_network_scan));

  }
  if (this->supported_carriers.get()) {
    value->SetWithoutPathExpansion("SupportedCarriers", json_schema_compiler::util::CreateValueFromOptionalArray(this->supported_carriers).release());

  }

  return value;
}


CellularStateProperties::CellularStateProperties()
: activation_state(ACTIVATION_STATE_TYPE_NONE) {}

CellularStateProperties::~CellularStateProperties() {}

// static
bool CellularStateProperties::Populate(
    const base::Value& value, CellularStateProperties* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  out->activation_state = ACTIVATION_STATE_TYPE_NONE;
  const base::Value* activation_state_value = NULL;
  if (dict->GetWithoutPathExpansion("ActivationState", &activation_state_value)) {
    {
      std::string activation_state_type_as_string;
      if (!activation_state_value->GetAsString(&activation_state_type_as_string)) {
        return false;
      }
      out->activation_state = ParseActivationStateType(activation_state_type_as_string);
      if (out->activation_state == ACTIVATION_STATE_TYPE_NONE) {
        return false;
      }
    }
    } else {
    out->activation_state = ACTIVATION_STATE_TYPE_NONE;
  }

  const base::Value* network_technology_value = NULL;
  if (dict->GetWithoutPathExpansion("NetworkTechnology", &network_technology_value)) {
    {
      std::string temp;
      if (!network_technology_value->GetAsString(&temp)) {
        out->network_technology.reset();
        return false;
      }
      else
        out->network_technology.reset(new std::string(temp));
    }
  }

  const base::Value* roaming_state_value = NULL;
  if (dict->GetWithoutPathExpansion("RoamingState", &roaming_state_value)) {
    {
      std::string temp;
      if (!roaming_state_value->GetAsString(&temp)) {
        out->roaming_state.reset();
        return false;
      }
      else
        out->roaming_state.reset(new std::string(temp));
    }
  }

  const base::Value* sim_present_value = NULL;
  if (dict->GetWithoutPathExpansion("SIMPresent", &sim_present_value)) {
    {
      bool temp;
      if (!sim_present_value->GetAsBoolean(&temp)) {
        out->sim_present.reset();
        return false;
      }
      else
        out->sim_present.reset(new bool(temp));
    }
  }

  const base::Value* signal_strength_value = NULL;
  if (dict->GetWithoutPathExpansion("SignalStrength", &signal_strength_value)) {
    {
      int temp;
      if (!signal_strength_value->GetAsInteger(&temp)) {
        out->signal_strength.reset();
        return false;
      }
      else
        out->signal_strength.reset(new int(temp));
    }
  }

  return true;
}

// static
scoped_ptr<CellularStateProperties> CellularStateProperties::FromValue(const base::Value& value) {
  scoped_ptr<CellularStateProperties> out(new CellularStateProperties());
  if (!Populate(value, out.get()))
    return scoped_ptr<CellularStateProperties>();
  return out;
}

scoped_ptr<base::DictionaryValue> CellularStateProperties::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->activation_state != ACTIVATION_STATE_TYPE_NONE) {
    value->SetWithoutPathExpansion("ActivationState", new base::StringValue(networking_private::ToString(this->activation_state)));

  }
  if (this->network_technology.get()) {
    value->SetWithoutPathExpansion("NetworkTechnology", new base::StringValue(*this->network_technology));

  }
  if (this->roaming_state.get()) {
    value->SetWithoutPathExpansion("RoamingState", new base::StringValue(*this->roaming_state));

  }
  if (this->sim_present.get()) {
    value->SetWithoutPathExpansion("SIMPresent", new base::FundamentalValue(*this->sim_present));

  }
  if (this->signal_strength.get()) {
    value->SetWithoutPathExpansion("SignalStrength", new base::FundamentalValue(*this->signal_strength));

  }

  return value;
}


EthernetProperties::EthernetProperties()
 {}

EthernetProperties::~EthernetProperties() {}

// static
bool EthernetProperties::Populate(
    const base::Value& value, EthernetProperties* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* auto_connect_value = NULL;
  if (dict->GetWithoutPathExpansion("AutoConnect", &auto_connect_value)) {
    {
      bool temp;
      if (!auto_connect_value->GetAsBoolean(&temp)) {
        out->auto_connect.reset();
        return false;
      }
      else
        out->auto_connect.reset(new bool(temp));
    }
  }

  const base::Value* authentication_value = NULL;
  if (dict->GetWithoutPathExpansion("Authentication", &authentication_value)) {
    {
      std::string temp;
      if (!authentication_value->GetAsString(&temp)) {
        out->authentication.reset();
        return false;
      }
      else
        out->authentication.reset(new std::string(temp));
    }
  }

  const base::Value* eap_value = NULL;
  if (dict->GetWithoutPathExpansion("EAP", &eap_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!eap_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<EAPProperties> temp(new EAPProperties());
        if (!EAPProperties::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->eap = std::move(temp);
      }
    }
  }

  return true;
}

// static
scoped_ptr<EthernetProperties> EthernetProperties::FromValue(const base::Value& value) {
  scoped_ptr<EthernetProperties> out(new EthernetProperties());
  if (!Populate(value, out.get()))
    return scoped_ptr<EthernetProperties>();
  return out;
}

scoped_ptr<base::DictionaryValue> EthernetProperties::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->auto_connect.get()) {
    value->SetWithoutPathExpansion("AutoConnect", new base::FundamentalValue(*this->auto_connect));

  }
  if (this->authentication.get()) {
    value->SetWithoutPathExpansion("Authentication", new base::StringValue(*this->authentication));

  }
  if (this->eap.get()) {
    value->SetWithoutPathExpansion("EAP", (this->eap)->ToValue().release());

  }

  return value;
}


ManagedEthernetProperties::ManagedEthernetProperties()
 {}

ManagedEthernetProperties::~ManagedEthernetProperties() {}

// static
bool ManagedEthernetProperties::Populate(
    const base::Value& value, ManagedEthernetProperties* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* auto_connect_value = NULL;
  if (dict->GetWithoutPathExpansion("AutoConnect", &auto_connect_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!auto_connect_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedBoolean> temp(new ManagedBoolean());
        if (!ManagedBoolean::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->auto_connect = std::move(temp);
      }
    }
  }

  const base::Value* authentication_value = NULL;
  if (dict->GetWithoutPathExpansion("Authentication", &authentication_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!authentication_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMString> temp(new ManagedDOMString());
        if (!ManagedDOMString::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->authentication = std::move(temp);
      }
    }
  }

  const base::Value* eap_value = NULL;
  if (dict->GetWithoutPathExpansion("EAP", &eap_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!eap_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedEAPProperties> temp(new ManagedEAPProperties());
        if (!ManagedEAPProperties::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->eap = std::move(temp);
      }
    }
  }

  return true;
}

// static
scoped_ptr<ManagedEthernetProperties> ManagedEthernetProperties::FromValue(const base::Value& value) {
  scoped_ptr<ManagedEthernetProperties> out(new ManagedEthernetProperties());
  if (!Populate(value, out.get()))
    return scoped_ptr<ManagedEthernetProperties>();
  return out;
}

scoped_ptr<base::DictionaryValue> ManagedEthernetProperties::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->auto_connect.get()) {
    value->SetWithoutPathExpansion("AutoConnect", (this->auto_connect)->ToValue().release());

  }
  if (this->authentication.get()) {
    value->SetWithoutPathExpansion("Authentication", (this->authentication)->ToValue().release());

  }
  if (this->eap.get()) {
    value->SetWithoutPathExpansion("EAP", (this->eap)->ToValue().release());

  }

  return value;
}


EthernetStateProperties::EthernetStateProperties()
 {}

EthernetStateProperties::~EthernetStateProperties() {}

// static
bool EthernetStateProperties::Populate(
    const base::Value& value, EthernetStateProperties* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* authentication_value = NULL;
  if (!dict->GetWithoutPathExpansion("Authentication", &authentication_value)) {
    return false;
  }
  {
    if (!authentication_value->GetAsString(&out->authentication)) {
      return false;
    }
  }

  return true;
}

// static
scoped_ptr<EthernetStateProperties> EthernetStateProperties::FromValue(const base::Value& value) {
  scoped_ptr<EthernetStateProperties> out(new EthernetStateProperties());
  if (!Populate(value, out.get()))
    return scoped_ptr<EthernetStateProperties>();
  return out;
}

scoped_ptr<base::DictionaryValue> EthernetStateProperties::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("Authentication", new base::StringValue(this->authentication));


  return value;
}


VPNProperties::VPNProperties()
 {}

VPNProperties::~VPNProperties() {}

// static
bool VPNProperties::Populate(
    const base::Value& value, VPNProperties* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* auto_connect_value = NULL;
  if (dict->GetWithoutPathExpansion("AutoConnect", &auto_connect_value)) {
    {
      bool temp;
      if (!auto_connect_value->GetAsBoolean(&temp)) {
        out->auto_connect.reset();
        return false;
      }
      else
        out->auto_connect.reset(new bool(temp));
    }
  }

  const base::Value* host_value = NULL;
  if (dict->GetWithoutPathExpansion("Host", &host_value)) {
    {
      std::string temp;
      if (!host_value->GetAsString(&temp)) {
        out->host.reset();
        return false;
      }
      else
        out->host.reset(new std::string(temp));
    }
  }

  const base::Value* i_psec_value = NULL;
  if (dict->GetWithoutPathExpansion("IPsec", &i_psec_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!i_psec_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<IPSecProperties> temp(new IPSecProperties());
        if (!IPSecProperties::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->i_psec = std::move(temp);
      }
    }
  }

  const base::Value* l2tp_value = NULL;
  if (dict->GetWithoutPathExpansion("L2TP", &l2tp_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!l2tp_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<L2TPProperties> temp(new L2TPProperties());
        if (!L2TPProperties::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->l2tp = std::move(temp);
      }
    }
  }

  const base::Value* open_vpn_value = NULL;
  if (dict->GetWithoutPathExpansion("OpenVPN", &open_vpn_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!open_vpn_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<OpenVPNProperties> temp(new OpenVPNProperties());
        if (!OpenVPNProperties::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->open_vpn = std::move(temp);
      }
    }
  }

  const base::Value* third_party_vpn_value = NULL;
  if (dict->GetWithoutPathExpansion("ThirdPartyVPN", &third_party_vpn_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!third_party_vpn_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ThirdPartyVPNProperties> temp(new ThirdPartyVPNProperties());
        if (!ThirdPartyVPNProperties::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->third_party_vpn = std::move(temp);
      }
    }
  }

  const base::Value* type_value = NULL;
  if (dict->GetWithoutPathExpansion("Type", &type_value)) {
    {
      std::string temp;
      if (!type_value->GetAsString(&temp)) {
        out->type.reset();
        return false;
      }
      else
        out->type.reset(new std::string(temp));
    }
  }

  return true;
}

// static
scoped_ptr<VPNProperties> VPNProperties::FromValue(const base::Value& value) {
  scoped_ptr<VPNProperties> out(new VPNProperties());
  if (!Populate(value, out.get()))
    return scoped_ptr<VPNProperties>();
  return out;
}

scoped_ptr<base::DictionaryValue> VPNProperties::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->auto_connect.get()) {
    value->SetWithoutPathExpansion("AutoConnect", new base::FundamentalValue(*this->auto_connect));

  }
  if (this->host.get()) {
    value->SetWithoutPathExpansion("Host", new base::StringValue(*this->host));

  }
  if (this->i_psec.get()) {
    value->SetWithoutPathExpansion("IPsec", (this->i_psec)->ToValue().release());

  }
  if (this->l2tp.get()) {
    value->SetWithoutPathExpansion("L2TP", (this->l2tp)->ToValue().release());

  }
  if (this->open_vpn.get()) {
    value->SetWithoutPathExpansion("OpenVPN", (this->open_vpn)->ToValue().release());

  }
  if (this->third_party_vpn.get()) {
    value->SetWithoutPathExpansion("ThirdPartyVPN", (this->third_party_vpn)->ToValue().release());

  }
  if (this->type.get()) {
    value->SetWithoutPathExpansion("Type", new base::StringValue(*this->type));

  }

  return value;
}


ManagedVPNProperties::ManagedVPNProperties()
 {}

ManagedVPNProperties::~ManagedVPNProperties() {}

// static
bool ManagedVPNProperties::Populate(
    const base::Value& value, ManagedVPNProperties* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* auto_connect_value = NULL;
  if (dict->GetWithoutPathExpansion("AutoConnect", &auto_connect_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!auto_connect_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedBoolean> temp(new ManagedBoolean());
        if (!ManagedBoolean::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->auto_connect = std::move(temp);
      }
    }
  }

  const base::Value* host_value = NULL;
  if (dict->GetWithoutPathExpansion("Host", &host_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!host_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMString> temp(new ManagedDOMString());
        if (!ManagedDOMString::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->host = std::move(temp);
      }
    }
  }

  const base::Value* i_psec_value = NULL;
  if (dict->GetWithoutPathExpansion("IPsec", &i_psec_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!i_psec_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedIPSecProperties> temp(new ManagedIPSecProperties());
        if (!ManagedIPSecProperties::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->i_psec = std::move(temp);
      }
    }
  }

  const base::Value* l2tp_value = NULL;
  if (dict->GetWithoutPathExpansion("L2TP", &l2tp_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!l2tp_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedL2TPProperties> temp(new ManagedL2TPProperties());
        if (!ManagedL2TPProperties::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->l2tp = std::move(temp);
      }
    }
  }

  const base::Value* open_vpn_value = NULL;
  if (dict->GetWithoutPathExpansion("OpenVPN", &open_vpn_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!open_vpn_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedOpenVPNProperties> temp(new ManagedOpenVPNProperties());
        if (!ManagedOpenVPNProperties::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->open_vpn = std::move(temp);
      }
    }
  }

  const base::Value* third_party_vpn_value = NULL;
  if (dict->GetWithoutPathExpansion("ThirdPartyVPN", &third_party_vpn_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!third_party_vpn_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedThirdPartyVPNProperties> temp(new ManagedThirdPartyVPNProperties());
        if (!ManagedThirdPartyVPNProperties::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->third_party_vpn = std::move(temp);
      }
    }
  }

  const base::Value* type_value = NULL;
  if (!dict->GetWithoutPathExpansion("Type", &type_value)) {
    return false;
  }
  {
    const base::DictionaryValue* dictionary = NULL;
    if (!type_value->GetAsDictionary(&dictionary)) {
      return false;
    }
    if (!ManagedDOMString::Populate(*dictionary, &out->type)) {
      return false;
    }
  }

  return true;
}

// static
scoped_ptr<ManagedVPNProperties> ManagedVPNProperties::FromValue(const base::Value& value) {
  scoped_ptr<ManagedVPNProperties> out(new ManagedVPNProperties());
  if (!Populate(value, out.get()))
    return scoped_ptr<ManagedVPNProperties>();
  return out;
}

scoped_ptr<base::DictionaryValue> ManagedVPNProperties::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->auto_connect.get()) {
    value->SetWithoutPathExpansion("AutoConnect", (this->auto_connect)->ToValue().release());

  }
  if (this->host.get()) {
    value->SetWithoutPathExpansion("Host", (this->host)->ToValue().release());

  }
  if (this->i_psec.get()) {
    value->SetWithoutPathExpansion("IPsec", (this->i_psec)->ToValue().release());

  }
  if (this->l2tp.get()) {
    value->SetWithoutPathExpansion("L2TP", (this->l2tp)->ToValue().release());

  }
  if (this->open_vpn.get()) {
    value->SetWithoutPathExpansion("OpenVPN", (this->open_vpn)->ToValue().release());

  }
  if (this->third_party_vpn.get()) {
    value->SetWithoutPathExpansion("ThirdPartyVPN", (this->third_party_vpn)->ToValue().release());

  }
  value->SetWithoutPathExpansion("Type", (this->type).ToValue().release());


  return value;
}


VPNStateProperties::VPNStateProperties()
 {}

VPNStateProperties::~VPNStateProperties() {}

// static
bool VPNStateProperties::Populate(
    const base::Value& value, VPNStateProperties* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* type_value = NULL;
  if (!dict->GetWithoutPathExpansion("Type", &type_value)) {
    return false;
  }
  {
    if (!type_value->GetAsString(&out->type)) {
      return false;
    }
  }

  const base::Value* i_psec_value = NULL;
  if (dict->GetWithoutPathExpansion("IPsec", &i_psec_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!i_psec_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<IPSecProperties> temp(new IPSecProperties());
        if (!IPSecProperties::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->i_psec = std::move(temp);
      }
    }
  }

  const base::Value* third_party_vpn_value = NULL;
  if (dict->GetWithoutPathExpansion("ThirdPartyVPN", &third_party_vpn_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!third_party_vpn_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ThirdPartyVPNProperties> temp(new ThirdPartyVPNProperties());
        if (!ThirdPartyVPNProperties::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->third_party_vpn = std::move(temp);
      }
    }
  }

  return true;
}

// static
scoped_ptr<VPNStateProperties> VPNStateProperties::FromValue(const base::Value& value) {
  scoped_ptr<VPNStateProperties> out(new VPNStateProperties());
  if (!Populate(value, out.get()))
    return scoped_ptr<VPNStateProperties>();
  return out;
}

scoped_ptr<base::DictionaryValue> VPNStateProperties::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("Type", new base::StringValue(this->type));

  if (this->i_psec.get()) {
    value->SetWithoutPathExpansion("IPsec", (this->i_psec)->ToValue().release());

  }
  if (this->third_party_vpn.get()) {
    value->SetWithoutPathExpansion("ThirdPartyVPN", (this->third_party_vpn)->ToValue().release());

  }

  return value;
}


WiFiProperties::WiFiProperties()
 {}

WiFiProperties::~WiFiProperties() {}

// static
bool WiFiProperties::Populate(
    const base::Value& value, WiFiProperties* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* allow_gateway_arp_polling_value = NULL;
  if (dict->GetWithoutPathExpansion("AllowGatewayARPPolling", &allow_gateway_arp_polling_value)) {
    {
      bool temp;
      if (!allow_gateway_arp_polling_value->GetAsBoolean(&temp)) {
        out->allow_gateway_arp_polling.reset();
        return false;
      }
      else
        out->allow_gateway_arp_polling.reset(new bool(temp));
    }
  }

  const base::Value* auto_connect_value = NULL;
  if (dict->GetWithoutPathExpansion("AutoConnect", &auto_connect_value)) {
    {
      bool temp;
      if (!auto_connect_value->GetAsBoolean(&temp)) {
        out->auto_connect.reset();
        return false;
      }
      else
        out->auto_connect.reset(new bool(temp));
    }
  }

  const base::Value* bssid_value = NULL;
  if (dict->GetWithoutPathExpansion("BSSID", &bssid_value)) {
    {
      std::string temp;
      if (!bssid_value->GetAsString(&temp)) {
        out->bssid.reset();
        return false;
      }
      else
        out->bssid.reset(new std::string(temp));
    }
  }

  const base::Value* eap_value = NULL;
  if (dict->GetWithoutPathExpansion("EAP", &eap_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!eap_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<EAPProperties> temp(new EAPProperties());
        if (!EAPProperties::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->eap = std::move(temp);
      }
    }
  }

  const base::Value* frequency_value = NULL;
  if (dict->GetWithoutPathExpansion("Frequency", &frequency_value)) {
    {
      int temp;
      if (!frequency_value->GetAsInteger(&temp)) {
        out->frequency.reset();
        return false;
      }
      else
        out->frequency.reset(new int(temp));
    }
  }

  const base::Value* frequency_list_value = NULL;
  if (dict->GetWithoutPathExpansion("FrequencyList", &frequency_list_value)) {
    {
      const base::ListValue* list = NULL;
      if (!frequency_list_value->GetAsList(&list)) {
        return false;
      }
      else {
        if (!json_schema_compiler::util::PopulateOptionalArrayFromList(*list, &out->frequency_list)) {
          return false;
        }
      }
    }
  }

  const base::Value* hex_ssid_value = NULL;
  if (dict->GetWithoutPathExpansion("HexSSID", &hex_ssid_value)) {
    {
      std::string temp;
      if (!hex_ssid_value->GetAsString(&temp)) {
        out->hex_ssid.reset();
        return false;
      }
      else
        out->hex_ssid.reset(new std::string(temp));
    }
  }

  const base::Value* hidden_ssid_value = NULL;
  if (dict->GetWithoutPathExpansion("HiddenSSID", &hidden_ssid_value)) {
    {
      bool temp;
      if (!hidden_ssid_value->GetAsBoolean(&temp)) {
        out->hidden_ssid.reset();
        return false;
      }
      else
        out->hidden_ssid.reset(new bool(temp));
    }
  }

  const base::Value* passphrase_value = NULL;
  if (dict->GetWithoutPathExpansion("Passphrase", &passphrase_value)) {
    {
      std::string temp;
      if (!passphrase_value->GetAsString(&temp)) {
        out->passphrase.reset();
        return false;
      }
      else
        out->passphrase.reset(new std::string(temp));
    }
  }

  const base::Value* roam_threshold_value = NULL;
  if (dict->GetWithoutPathExpansion("RoamThreshold", &roam_threshold_value)) {
    {
      int temp;
      if (!roam_threshold_value->GetAsInteger(&temp)) {
        out->roam_threshold.reset();
        return false;
      }
      else
        out->roam_threshold.reset(new int(temp));
    }
  }

  const base::Value* ssid_value = NULL;
  if (dict->GetWithoutPathExpansion("SSID", &ssid_value)) {
    {
      std::string temp;
      if (!ssid_value->GetAsString(&temp)) {
        out->ssid.reset();
        return false;
      }
      else
        out->ssid.reset(new std::string(temp));
    }
  }

  const base::Value* security_value = NULL;
  if (dict->GetWithoutPathExpansion("Security", &security_value)) {
    {
      std::string temp;
      if (!security_value->GetAsString(&temp)) {
        out->security.reset();
        return false;
      }
      else
        out->security.reset(new std::string(temp));
    }
  }

  const base::Value* signal_strength_value = NULL;
  if (dict->GetWithoutPathExpansion("SignalStrength", &signal_strength_value)) {
    {
      int temp;
      if (!signal_strength_value->GetAsInteger(&temp)) {
        out->signal_strength.reset();
        return false;
      }
      else
        out->signal_strength.reset(new int(temp));
    }
  }

  return true;
}

// static
scoped_ptr<WiFiProperties> WiFiProperties::FromValue(const base::Value& value) {
  scoped_ptr<WiFiProperties> out(new WiFiProperties());
  if (!Populate(value, out.get()))
    return scoped_ptr<WiFiProperties>();
  return out;
}

scoped_ptr<base::DictionaryValue> WiFiProperties::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->allow_gateway_arp_polling.get()) {
    value->SetWithoutPathExpansion("AllowGatewayARPPolling", new base::FundamentalValue(*this->allow_gateway_arp_polling));

  }
  if (this->auto_connect.get()) {
    value->SetWithoutPathExpansion("AutoConnect", new base::FundamentalValue(*this->auto_connect));

  }
  if (this->bssid.get()) {
    value->SetWithoutPathExpansion("BSSID", new base::StringValue(*this->bssid));

  }
  if (this->eap.get()) {
    value->SetWithoutPathExpansion("EAP", (this->eap)->ToValue().release());

  }
  if (this->frequency.get()) {
    value->SetWithoutPathExpansion("Frequency", new base::FundamentalValue(*this->frequency));

  }
  if (this->frequency_list.get()) {
    value->SetWithoutPathExpansion("FrequencyList", json_schema_compiler::util::CreateValueFromOptionalArray(this->frequency_list).release());

  }
  if (this->hex_ssid.get()) {
    value->SetWithoutPathExpansion("HexSSID", new base::StringValue(*this->hex_ssid));

  }
  if (this->hidden_ssid.get()) {
    value->SetWithoutPathExpansion("HiddenSSID", new base::FundamentalValue(*this->hidden_ssid));

  }
  if (this->passphrase.get()) {
    value->SetWithoutPathExpansion("Passphrase", new base::StringValue(*this->passphrase));

  }
  if (this->roam_threshold.get()) {
    value->SetWithoutPathExpansion("RoamThreshold", new base::FundamentalValue(*this->roam_threshold));

  }
  if (this->ssid.get()) {
    value->SetWithoutPathExpansion("SSID", new base::StringValue(*this->ssid));

  }
  if (this->security.get()) {
    value->SetWithoutPathExpansion("Security", new base::StringValue(*this->security));

  }
  if (this->signal_strength.get()) {
    value->SetWithoutPathExpansion("SignalStrength", new base::FundamentalValue(*this->signal_strength));

  }

  return value;
}


ManagedWiFiProperties::ManagedWiFiProperties()
 {}

ManagedWiFiProperties::~ManagedWiFiProperties() {}

// static
bool ManagedWiFiProperties::Populate(
    const base::Value& value, ManagedWiFiProperties* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* allow_gateway_arp_polling_value = NULL;
  if (dict->GetWithoutPathExpansion("AllowGatewayARPPolling", &allow_gateway_arp_polling_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!allow_gateway_arp_polling_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedBoolean> temp(new ManagedBoolean());
        if (!ManagedBoolean::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->allow_gateway_arp_polling = std::move(temp);
      }
    }
  }

  const base::Value* auto_connect_value = NULL;
  if (dict->GetWithoutPathExpansion("AutoConnect", &auto_connect_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!auto_connect_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedBoolean> temp(new ManagedBoolean());
        if (!ManagedBoolean::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->auto_connect = std::move(temp);
      }
    }
  }

  const base::Value* bssid_value = NULL;
  if (dict->GetWithoutPathExpansion("BSSID", &bssid_value)) {
    {
      std::string temp;
      if (!bssid_value->GetAsString(&temp)) {
        out->bssid.reset();
        return false;
      }
      else
        out->bssid.reset(new std::string(temp));
    }
  }

  const base::Value* eap_value = NULL;
  if (dict->GetWithoutPathExpansion("EAP", &eap_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!eap_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedEAPProperties> temp(new ManagedEAPProperties());
        if (!ManagedEAPProperties::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->eap = std::move(temp);
      }
    }
  }

  const base::Value* frequency_value = NULL;
  if (dict->GetWithoutPathExpansion("Frequency", &frequency_value)) {
    {
      int temp;
      if (!frequency_value->GetAsInteger(&temp)) {
        out->frequency.reset();
        return false;
      }
      else
        out->frequency.reset(new int(temp));
    }
  }

  const base::Value* frequency_list_value = NULL;
  if (dict->GetWithoutPathExpansion("FrequencyList", &frequency_list_value)) {
    {
      const base::ListValue* list = NULL;
      if (!frequency_list_value->GetAsList(&list)) {
        return false;
      }
      else {
        if (!json_schema_compiler::util::PopulateOptionalArrayFromList(*list, &out->frequency_list)) {
          return false;
        }
      }
    }
  }

  const base::Value* hex_ssid_value = NULL;
  if (dict->GetWithoutPathExpansion("HexSSID", &hex_ssid_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!hex_ssid_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMString> temp(new ManagedDOMString());
        if (!ManagedDOMString::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->hex_ssid = std::move(temp);
      }
    }
  }

  const base::Value* hidden_ssid_value = NULL;
  if (dict->GetWithoutPathExpansion("HiddenSSID", &hidden_ssid_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!hidden_ssid_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedBoolean> temp(new ManagedBoolean());
        if (!ManagedBoolean::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->hidden_ssid = std::move(temp);
      }
    }
  }

  const base::Value* passphrase_value = NULL;
  if (dict->GetWithoutPathExpansion("Passphrase", &passphrase_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!passphrase_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMString> temp(new ManagedDOMString());
        if (!ManagedDOMString::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->passphrase = std::move(temp);
      }
    }
  }

  const base::Value* roam_threshold_value = NULL;
  if (dict->GetWithoutPathExpansion("RoamThreshold", &roam_threshold_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!roam_threshold_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedLong> temp(new ManagedLong());
        if (!ManagedLong::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->roam_threshold = std::move(temp);
      }
    }
  }

  const base::Value* ssid_value = NULL;
  if (dict->GetWithoutPathExpansion("SSID", &ssid_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!ssid_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMString> temp(new ManagedDOMString());
        if (!ManagedDOMString::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->ssid = std::move(temp);
      }
    }
  }

  const base::Value* security_value = NULL;
  if (!dict->GetWithoutPathExpansion("Security", &security_value)) {
    return false;
  }
  {
    const base::DictionaryValue* dictionary = NULL;
    if (!security_value->GetAsDictionary(&dictionary)) {
      return false;
    }
    if (!ManagedDOMString::Populate(*dictionary, &out->security)) {
      return false;
    }
  }

  const base::Value* signal_strength_value = NULL;
  if (dict->GetWithoutPathExpansion("SignalStrength", &signal_strength_value)) {
    {
      int temp;
      if (!signal_strength_value->GetAsInteger(&temp)) {
        out->signal_strength.reset();
        return false;
      }
      else
        out->signal_strength.reset(new int(temp));
    }
  }

  return true;
}

// static
scoped_ptr<ManagedWiFiProperties> ManagedWiFiProperties::FromValue(const base::Value& value) {
  scoped_ptr<ManagedWiFiProperties> out(new ManagedWiFiProperties());
  if (!Populate(value, out.get()))
    return scoped_ptr<ManagedWiFiProperties>();
  return out;
}

scoped_ptr<base::DictionaryValue> ManagedWiFiProperties::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->allow_gateway_arp_polling.get()) {
    value->SetWithoutPathExpansion("AllowGatewayARPPolling", (this->allow_gateway_arp_polling)->ToValue().release());

  }
  if (this->auto_connect.get()) {
    value->SetWithoutPathExpansion("AutoConnect", (this->auto_connect)->ToValue().release());

  }
  if (this->bssid.get()) {
    value->SetWithoutPathExpansion("BSSID", new base::StringValue(*this->bssid));

  }
  if (this->eap.get()) {
    value->SetWithoutPathExpansion("EAP", (this->eap)->ToValue().release());

  }
  if (this->frequency.get()) {
    value->SetWithoutPathExpansion("Frequency", new base::FundamentalValue(*this->frequency));

  }
  if (this->frequency_list.get()) {
    value->SetWithoutPathExpansion("FrequencyList", json_schema_compiler::util::CreateValueFromOptionalArray(this->frequency_list).release());

  }
  if (this->hex_ssid.get()) {
    value->SetWithoutPathExpansion("HexSSID", (this->hex_ssid)->ToValue().release());

  }
  if (this->hidden_ssid.get()) {
    value->SetWithoutPathExpansion("HiddenSSID", (this->hidden_ssid)->ToValue().release());

  }
  if (this->passphrase.get()) {
    value->SetWithoutPathExpansion("Passphrase", (this->passphrase)->ToValue().release());

  }
  if (this->roam_threshold.get()) {
    value->SetWithoutPathExpansion("RoamThreshold", (this->roam_threshold)->ToValue().release());

  }
  if (this->ssid.get()) {
    value->SetWithoutPathExpansion("SSID", (this->ssid)->ToValue().release());

  }
  value->SetWithoutPathExpansion("Security", (this->security).ToValue().release());

  if (this->signal_strength.get()) {
    value->SetWithoutPathExpansion("SignalStrength", new base::FundamentalValue(*this->signal_strength));

  }

  return value;
}


WiFiStateProperties::WiFiStateProperties()
 {}

WiFiStateProperties::~WiFiStateProperties() {}

// static
bool WiFiStateProperties::Populate(
    const base::Value& value, WiFiStateProperties* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* bssid_value = NULL;
  if (dict->GetWithoutPathExpansion("BSSID", &bssid_value)) {
    {
      std::string temp;
      if (!bssid_value->GetAsString(&temp)) {
        out->bssid.reset();
        return false;
      }
      else
        out->bssid.reset(new std::string(temp));
    }
  }

  const base::Value* frequency_value = NULL;
  if (dict->GetWithoutPathExpansion("Frequency", &frequency_value)) {
    {
      int temp;
      if (!frequency_value->GetAsInteger(&temp)) {
        out->frequency.reset();
        return false;
      }
      else
        out->frequency.reset(new int(temp));
    }
  }

  const base::Value* security_value = NULL;
  if (!dict->GetWithoutPathExpansion("Security", &security_value)) {
    return false;
  }
  {
    if (!security_value->GetAsString(&out->security)) {
      return false;
    }
  }

  const base::Value* signal_strength_value = NULL;
  if (dict->GetWithoutPathExpansion("SignalStrength", &signal_strength_value)) {
    {
      int temp;
      if (!signal_strength_value->GetAsInteger(&temp)) {
        out->signal_strength.reset();
        return false;
      }
      else
        out->signal_strength.reset(new int(temp));
    }
  }

  return true;
}

// static
scoped_ptr<WiFiStateProperties> WiFiStateProperties::FromValue(const base::Value& value) {
  scoped_ptr<WiFiStateProperties> out(new WiFiStateProperties());
  if (!Populate(value, out.get()))
    return scoped_ptr<WiFiStateProperties>();
  return out;
}

scoped_ptr<base::DictionaryValue> WiFiStateProperties::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->bssid.get()) {
    value->SetWithoutPathExpansion("BSSID", new base::StringValue(*this->bssid));

  }
  if (this->frequency.get()) {
    value->SetWithoutPathExpansion("Frequency", new base::FundamentalValue(*this->frequency));

  }
  value->SetWithoutPathExpansion("Security", new base::StringValue(this->security));

  if (this->signal_strength.get()) {
    value->SetWithoutPathExpansion("SignalStrength", new base::FundamentalValue(*this->signal_strength));

  }

  return value;
}


WiMAXProperties::WiMAXProperties()
 {}

WiMAXProperties::~WiMAXProperties() {}

// static
bool WiMAXProperties::Populate(
    const base::Value& value, WiMAXProperties* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* auto_connect_value = NULL;
  if (dict->GetWithoutPathExpansion("AutoConnect", &auto_connect_value)) {
    {
      bool temp;
      if (!auto_connect_value->GetAsBoolean(&temp)) {
        out->auto_connect.reset();
        return false;
      }
      else
        out->auto_connect.reset(new bool(temp));
    }
  }

  const base::Value* eap_value = NULL;
  if (dict->GetWithoutPathExpansion("EAP", &eap_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!eap_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<EAPProperties> temp(new EAPProperties());
        if (!EAPProperties::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->eap = std::move(temp);
      }
    }
  }

  const base::Value* signal_strength_value = NULL;
  if (dict->GetWithoutPathExpansion("SignalStrength", &signal_strength_value)) {
    {
      int temp;
      if (!signal_strength_value->GetAsInteger(&temp)) {
        out->signal_strength.reset();
        return false;
      }
      else
        out->signal_strength.reset(new int(temp));
    }
  }

  return true;
}

// static
scoped_ptr<WiMAXProperties> WiMAXProperties::FromValue(const base::Value& value) {
  scoped_ptr<WiMAXProperties> out(new WiMAXProperties());
  if (!Populate(value, out.get()))
    return scoped_ptr<WiMAXProperties>();
  return out;
}

scoped_ptr<base::DictionaryValue> WiMAXProperties::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->auto_connect.get()) {
    value->SetWithoutPathExpansion("AutoConnect", new base::FundamentalValue(*this->auto_connect));

  }
  if (this->eap.get()) {
    value->SetWithoutPathExpansion("EAP", (this->eap)->ToValue().release());

  }
  if (this->signal_strength.get()) {
    value->SetWithoutPathExpansion("SignalStrength", new base::FundamentalValue(*this->signal_strength));

  }

  return value;
}


ManagedWiMAXProperties::ManagedWiMAXProperties()
 {}

ManagedWiMAXProperties::~ManagedWiMAXProperties() {}

// static
bool ManagedWiMAXProperties::Populate(
    const base::Value& value, ManagedWiMAXProperties* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* auto_connect_value = NULL;
  if (dict->GetWithoutPathExpansion("AutoConnect", &auto_connect_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!auto_connect_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedBoolean> temp(new ManagedBoolean());
        if (!ManagedBoolean::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->auto_connect = std::move(temp);
      }
    }
  }

  const base::Value* eap_value = NULL;
  if (dict->GetWithoutPathExpansion("EAP", &eap_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!eap_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedEAPProperties> temp(new ManagedEAPProperties());
        if (!ManagedEAPProperties::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->eap = std::move(temp);
      }
    }
  }

  const base::Value* signal_strength_value = NULL;
  if (dict->GetWithoutPathExpansion("SignalStrength", &signal_strength_value)) {
    {
      int temp;
      if (!signal_strength_value->GetAsInteger(&temp)) {
        out->signal_strength.reset();
        return false;
      }
      else
        out->signal_strength.reset(new int(temp));
    }
  }

  return true;
}

// static
scoped_ptr<ManagedWiMAXProperties> ManagedWiMAXProperties::FromValue(const base::Value& value) {
  scoped_ptr<ManagedWiMAXProperties> out(new ManagedWiMAXProperties());
  if (!Populate(value, out.get()))
    return scoped_ptr<ManagedWiMAXProperties>();
  return out;
}

scoped_ptr<base::DictionaryValue> ManagedWiMAXProperties::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->auto_connect.get()) {
    value->SetWithoutPathExpansion("AutoConnect", (this->auto_connect)->ToValue().release());

  }
  if (this->eap.get()) {
    value->SetWithoutPathExpansion("EAP", (this->eap)->ToValue().release());

  }
  if (this->signal_strength.get()) {
    value->SetWithoutPathExpansion("SignalStrength", new base::FundamentalValue(*this->signal_strength));

  }

  return value;
}


WiMAXStateProperties::WiMAXStateProperties()
 {}

WiMAXStateProperties::~WiMAXStateProperties() {}

// static
bool WiMAXStateProperties::Populate(
    const base::Value& value, WiMAXStateProperties* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* signal_strength_value = NULL;
  if (dict->GetWithoutPathExpansion("SignalStrength", &signal_strength_value)) {
    {
      int temp;
      if (!signal_strength_value->GetAsInteger(&temp)) {
        out->signal_strength.reset();
        return false;
      }
      else
        out->signal_strength.reset(new int(temp));
    }
  }

  return true;
}

// static
scoped_ptr<WiMAXStateProperties> WiMAXStateProperties::FromValue(const base::Value& value) {
  scoped_ptr<WiMAXStateProperties> out(new WiMAXStateProperties());
  if (!Populate(value, out.get()))
    return scoped_ptr<WiMAXStateProperties>();
  return out;
}

scoped_ptr<base::DictionaryValue> WiMAXStateProperties::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->signal_strength.get()) {
    value->SetWithoutPathExpansion("SignalStrength", new base::FundamentalValue(*this->signal_strength));

  }

  return value;
}


NetworkConfigProperties::NetworkConfigProperties()
: ip_address_config_type(IP_CONFIG_TYPE_NONE), name_servers_config_type(IP_CONFIG_TYPE_NONE), type(NETWORK_TYPE_NONE) {}

NetworkConfigProperties::~NetworkConfigProperties() {}

// static
bool NetworkConfigProperties::Populate(
    const base::Value& value, NetworkConfigProperties* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  out->ip_address_config_type = IP_CONFIG_TYPE_NONE;
  out->name_servers_config_type = IP_CONFIG_TYPE_NONE;
  out->type = NETWORK_TYPE_NONE;
  const base::Value* cellular_value = NULL;
  if (dict->GetWithoutPathExpansion("Cellular", &cellular_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!cellular_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<CellularProperties> temp(new CellularProperties());
        if (!CellularProperties::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->cellular = std::move(temp);
      }
    }
  }

  const base::Value* ethernet_value = NULL;
  if (dict->GetWithoutPathExpansion("Ethernet", &ethernet_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!ethernet_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<EthernetProperties> temp(new EthernetProperties());
        if (!EthernetProperties::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->ethernet = std::move(temp);
      }
    }
  }

  const base::Value* guid_value = NULL;
  if (dict->GetWithoutPathExpansion("GUID", &guid_value)) {
    {
      std::string temp;
      if (!guid_value->GetAsString(&temp)) {
        out->guid.reset();
        return false;
      }
      else
        out->guid.reset(new std::string(temp));
    }
  }

  const base::Value* ip_address_config_type_value = NULL;
  if (dict->GetWithoutPathExpansion("IPAddressConfigType", &ip_address_config_type_value)) {
    {
      std::string ip_config_type_as_string;
      if (!ip_address_config_type_value->GetAsString(&ip_config_type_as_string)) {
        return false;
      }
      out->ip_address_config_type = ParseIPConfigType(ip_config_type_as_string);
      if (out->ip_address_config_type == IP_CONFIG_TYPE_NONE) {
        return false;
      }
    }
    } else {
    out->ip_address_config_type = IP_CONFIG_TYPE_NONE;
  }

  const base::Value* name_value = NULL;
  if (dict->GetWithoutPathExpansion("Name", &name_value)) {
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

  const base::Value* name_servers_config_type_value = NULL;
  if (dict->GetWithoutPathExpansion("NameServersConfigType", &name_servers_config_type_value)) {
    {
      std::string ip_config_type_as_string;
      if (!name_servers_config_type_value->GetAsString(&ip_config_type_as_string)) {
        return false;
      }
      out->name_servers_config_type = ParseIPConfigType(ip_config_type_as_string);
      if (out->name_servers_config_type == IP_CONFIG_TYPE_NONE) {
        return false;
      }
    }
    } else {
    out->name_servers_config_type = IP_CONFIG_TYPE_NONE;
  }

  const base::Value* priority_value = NULL;
  if (dict->GetWithoutPathExpansion("Priority", &priority_value)) {
    {
      int temp;
      if (!priority_value->GetAsInteger(&temp)) {
        out->priority.reset();
        return false;
      }
      else
        out->priority.reset(new int(temp));
    }
  }

  const base::Value* proxy_settings_value = NULL;
  if (dict->GetWithoutPathExpansion("ProxySettings", &proxy_settings_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!proxy_settings_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ProxySettings> temp(new ProxySettings());
        if (!ProxySettings::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->proxy_settings = std::move(temp);
      }
    }
  }

  const base::Value* static_ip_config_value = NULL;
  if (dict->GetWithoutPathExpansion("StaticIPConfig", &static_ip_config_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!static_ip_config_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<IPConfigProperties> temp(new IPConfigProperties());
        if (!IPConfigProperties::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->static_ip_config = std::move(temp);
      }
    }
  }

  const base::Value* type_value = NULL;
  if (dict->GetWithoutPathExpansion("Type", &type_value)) {
    {
      std::string network_type_as_string;
      if (!type_value->GetAsString(&network_type_as_string)) {
        return false;
      }
      out->type = ParseNetworkType(network_type_as_string);
      if (out->type == NETWORK_TYPE_NONE) {
        return false;
      }
    }
    } else {
    out->type = NETWORK_TYPE_NONE;
  }

  const base::Value* vpn_value = NULL;
  if (dict->GetWithoutPathExpansion("VPN", &vpn_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!vpn_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<VPNProperties> temp(new VPNProperties());
        if (!VPNProperties::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->vpn = std::move(temp);
      }
    }
  }

  const base::Value* wi_fi_value = NULL;
  if (dict->GetWithoutPathExpansion("WiFi", &wi_fi_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!wi_fi_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<WiFiProperties> temp(new WiFiProperties());
        if (!WiFiProperties::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->wi_fi = std::move(temp);
      }
    }
  }

  const base::Value* wi_max_value = NULL;
  if (dict->GetWithoutPathExpansion("WiMAX", &wi_max_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!wi_max_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<WiMAXProperties> temp(new WiMAXProperties());
        if (!WiMAXProperties::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->wi_max = std::move(temp);
      }
    }
  }

  return true;
}

// static
scoped_ptr<NetworkConfigProperties> NetworkConfigProperties::FromValue(const base::Value& value) {
  scoped_ptr<NetworkConfigProperties> out(new NetworkConfigProperties());
  if (!Populate(value, out.get()))
    return scoped_ptr<NetworkConfigProperties>();
  return out;
}

scoped_ptr<base::DictionaryValue> NetworkConfigProperties::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->cellular.get()) {
    value->SetWithoutPathExpansion("Cellular", (this->cellular)->ToValue().release());

  }
  if (this->ethernet.get()) {
    value->SetWithoutPathExpansion("Ethernet", (this->ethernet)->ToValue().release());

  }
  if (this->guid.get()) {
    value->SetWithoutPathExpansion("GUID", new base::StringValue(*this->guid));

  }
  if (this->ip_address_config_type != IP_CONFIG_TYPE_NONE) {
    value->SetWithoutPathExpansion("IPAddressConfigType", new base::StringValue(networking_private::ToString(this->ip_address_config_type)));

  }
  if (this->name.get()) {
    value->SetWithoutPathExpansion("Name", new base::StringValue(*this->name));

  }
  if (this->name_servers_config_type != IP_CONFIG_TYPE_NONE) {
    value->SetWithoutPathExpansion("NameServersConfigType", new base::StringValue(networking_private::ToString(this->name_servers_config_type)));

  }
  if (this->priority.get()) {
    value->SetWithoutPathExpansion("Priority", new base::FundamentalValue(*this->priority));

  }
  if (this->proxy_settings.get()) {
    value->SetWithoutPathExpansion("ProxySettings", (this->proxy_settings)->ToValue().release());

  }
  if (this->static_ip_config.get()) {
    value->SetWithoutPathExpansion("StaticIPConfig", (this->static_ip_config)->ToValue().release());

  }
  if (this->type != NETWORK_TYPE_NONE) {
    value->SetWithoutPathExpansion("Type", new base::StringValue(networking_private::ToString(this->type)));

  }
  if (this->vpn.get()) {
    value->SetWithoutPathExpansion("VPN", (this->vpn)->ToValue().release());

  }
  if (this->wi_fi.get()) {
    value->SetWithoutPathExpansion("WiFi", (this->wi_fi)->ToValue().release());

  }
  if (this->wi_max.get()) {
    value->SetWithoutPathExpansion("WiMAX", (this->wi_max)->ToValue().release());

  }

  return value;
}


NetworkProperties::NetworkProperties()
: connection_state(CONNECTION_STATE_TYPE_NONE), ip_address_config_type(IP_CONFIG_TYPE_NONE), name_servers_config_type(IP_CONFIG_TYPE_NONE), type(NETWORK_TYPE_NONE) {}

NetworkProperties::~NetworkProperties() {}

// static
bool NetworkProperties::Populate(
    const base::Value& value, NetworkProperties* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  out->connection_state = CONNECTION_STATE_TYPE_NONE;
  out->ip_address_config_type = IP_CONFIG_TYPE_NONE;
  out->name_servers_config_type = IP_CONFIG_TYPE_NONE;
  const base::Value* cellular_value = NULL;
  if (dict->GetWithoutPathExpansion("Cellular", &cellular_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!cellular_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<CellularProperties> temp(new CellularProperties());
        if (!CellularProperties::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->cellular = std::move(temp);
      }
    }
  }

  const base::Value* connectable_value = NULL;
  if (dict->GetWithoutPathExpansion("Connectable", &connectable_value)) {
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

  const base::Value* connection_state_value = NULL;
  if (dict->GetWithoutPathExpansion("ConnectionState", &connection_state_value)) {
    {
      std::string connection_state_type_as_string;
      if (!connection_state_value->GetAsString(&connection_state_type_as_string)) {
        return false;
      }
      out->connection_state = ParseConnectionStateType(connection_state_type_as_string);
      if (out->connection_state == CONNECTION_STATE_TYPE_NONE) {
        return false;
      }
    }
    } else {
    out->connection_state = CONNECTION_STATE_TYPE_NONE;
  }

  const base::Value* error_state_value = NULL;
  if (dict->GetWithoutPathExpansion("ErrorState", &error_state_value)) {
    {
      std::string temp;
      if (!error_state_value->GetAsString(&temp)) {
        out->error_state.reset();
        return false;
      }
      else
        out->error_state.reset(new std::string(temp));
    }
  }

  const base::Value* ethernet_value = NULL;
  if (dict->GetWithoutPathExpansion("Ethernet", &ethernet_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!ethernet_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<EthernetProperties> temp(new EthernetProperties());
        if (!EthernetProperties::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->ethernet = std::move(temp);
      }
    }
  }

  const base::Value* guid_value = NULL;
  if (!dict->GetWithoutPathExpansion("GUID", &guid_value)) {
    return false;
  }
  {
    if (!guid_value->GetAsString(&out->guid)) {
      return false;
    }
  }

  const base::Value* ip_address_config_type_value = NULL;
  if (dict->GetWithoutPathExpansion("IPAddressConfigType", &ip_address_config_type_value)) {
    {
      std::string ip_config_type_as_string;
      if (!ip_address_config_type_value->GetAsString(&ip_config_type_as_string)) {
        return false;
      }
      out->ip_address_config_type = ParseIPConfigType(ip_config_type_as_string);
      if (out->ip_address_config_type == IP_CONFIG_TYPE_NONE) {
        return false;
      }
    }
    } else {
    out->ip_address_config_type = IP_CONFIG_TYPE_NONE;
  }

  const base::Value* ip_configs_value = NULL;
  if (dict->GetWithoutPathExpansion("IPConfigs", &ip_configs_value)) {
    {
      const base::ListValue* list = NULL;
      if (!ip_configs_value->GetAsList(&list)) {
        return false;
      }
      else {
        if (!json_schema_compiler::util::PopulateOptionalArrayFromList(*list, &out->ip_configs)) {
          return false;
        }
      }
    }
  }

  const base::Value* mac_address_value = NULL;
  if (dict->GetWithoutPathExpansion("MacAddress", &mac_address_value)) {
    {
      std::string temp;
      if (!mac_address_value->GetAsString(&temp)) {
        out->mac_address.reset();
        return false;
      }
      else
        out->mac_address.reset(new std::string(temp));
    }
  }

  const base::Value* name_value = NULL;
  if (dict->GetWithoutPathExpansion("Name", &name_value)) {
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

  const base::Value* name_servers_config_type_value = NULL;
  if (dict->GetWithoutPathExpansion("NameServersConfigType", &name_servers_config_type_value)) {
    {
      std::string ip_config_type_as_string;
      if (!name_servers_config_type_value->GetAsString(&ip_config_type_as_string)) {
        return false;
      }
      out->name_servers_config_type = ParseIPConfigType(ip_config_type_as_string);
      if (out->name_servers_config_type == IP_CONFIG_TYPE_NONE) {
        return false;
      }
    }
    } else {
    out->name_servers_config_type = IP_CONFIG_TYPE_NONE;
  }

  const base::Value* priority_value = NULL;
  if (dict->GetWithoutPathExpansion("Priority", &priority_value)) {
    {
      int temp;
      if (!priority_value->GetAsInteger(&temp)) {
        out->priority.reset();
        return false;
      }
      else
        out->priority.reset(new int(temp));
    }
  }

  const base::Value* proxy_settings_value = NULL;
  if (dict->GetWithoutPathExpansion("ProxySettings", &proxy_settings_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!proxy_settings_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ProxySettings> temp(new ProxySettings());
        if (!ProxySettings::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->proxy_settings = std::move(temp);
      }
    }
  }

  const base::Value* restricted_connectivity_value = NULL;
  if (dict->GetWithoutPathExpansion("RestrictedConnectivity", &restricted_connectivity_value)) {
    {
      bool temp;
      if (!restricted_connectivity_value->GetAsBoolean(&temp)) {
        out->restricted_connectivity.reset();
        return false;
      }
      else
        out->restricted_connectivity.reset(new bool(temp));
    }
  }

  const base::Value* static_ip_config_value = NULL;
  if (dict->GetWithoutPathExpansion("StaticIPConfig", &static_ip_config_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!static_ip_config_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<IPConfigProperties> temp(new IPConfigProperties());
        if (!IPConfigProperties::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->static_ip_config = std::move(temp);
      }
    }
  }

  const base::Value* saved_ip_config_value = NULL;
  if (dict->GetWithoutPathExpansion("SavedIPConfig", &saved_ip_config_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!saved_ip_config_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<IPConfigProperties> temp(new IPConfigProperties());
        if (!IPConfigProperties::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->saved_ip_config = std::move(temp);
      }
    }
  }

  const base::Value* source_value = NULL;
  if (dict->GetWithoutPathExpansion("Source", &source_value)) {
    {
      std::string temp;
      if (!source_value->GetAsString(&temp)) {
        out->source.reset();
        return false;
      }
      else
        out->source.reset(new std::string(temp));
    }
  }

  const base::Value* type_value = NULL;
  if (!dict->GetWithoutPathExpansion("Type", &type_value)) {
    return false;
  }
  {
    std::string network_type_as_string;
    if (!type_value->GetAsString(&network_type_as_string)) {
      return false;
    }
    out->type = ParseNetworkType(network_type_as_string);
    if (out->type == NETWORK_TYPE_NONE) {
      return false;
    }
  }

  const base::Value* vpn_value = NULL;
  if (dict->GetWithoutPathExpansion("VPN", &vpn_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!vpn_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<VPNProperties> temp(new VPNProperties());
        if (!VPNProperties::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->vpn = std::move(temp);
      }
    }
  }

  const base::Value* wi_fi_value = NULL;
  if (dict->GetWithoutPathExpansion("WiFi", &wi_fi_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!wi_fi_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<WiFiProperties> temp(new WiFiProperties());
        if (!WiFiProperties::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->wi_fi = std::move(temp);
      }
    }
  }

  const base::Value* wi_max_value = NULL;
  if (dict->GetWithoutPathExpansion("WiMAX", &wi_max_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!wi_max_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<WiMAXProperties> temp(new WiMAXProperties());
        if (!WiMAXProperties::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->wi_max = std::move(temp);
      }
    }
  }

  return true;
}

// static
scoped_ptr<NetworkProperties> NetworkProperties::FromValue(const base::Value& value) {
  scoped_ptr<NetworkProperties> out(new NetworkProperties());
  if (!Populate(value, out.get()))
    return scoped_ptr<NetworkProperties>();
  return out;
}

scoped_ptr<base::DictionaryValue> NetworkProperties::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->cellular.get()) {
    value->SetWithoutPathExpansion("Cellular", (this->cellular)->ToValue().release());

  }
  if (this->connectable.get()) {
    value->SetWithoutPathExpansion("Connectable", new base::FundamentalValue(*this->connectable));

  }
  if (this->connection_state != CONNECTION_STATE_TYPE_NONE) {
    value->SetWithoutPathExpansion("ConnectionState", new base::StringValue(networking_private::ToString(this->connection_state)));

  }
  if (this->error_state.get()) {
    value->SetWithoutPathExpansion("ErrorState", new base::StringValue(*this->error_state));

  }
  if (this->ethernet.get()) {
    value->SetWithoutPathExpansion("Ethernet", (this->ethernet)->ToValue().release());

  }
  value->SetWithoutPathExpansion("GUID", new base::StringValue(this->guid));

  if (this->ip_address_config_type != IP_CONFIG_TYPE_NONE) {
    value->SetWithoutPathExpansion("IPAddressConfigType", new base::StringValue(networking_private::ToString(this->ip_address_config_type)));

  }
  if (this->ip_configs.get()) {
    value->SetWithoutPathExpansion("IPConfigs", json_schema_compiler::util::CreateValueFromOptionalArray(this->ip_configs).release());

  }
  if (this->mac_address.get()) {
    value->SetWithoutPathExpansion("MacAddress", new base::StringValue(*this->mac_address));

  }
  if (this->name.get()) {
    value->SetWithoutPathExpansion("Name", new base::StringValue(*this->name));

  }
  if (this->name_servers_config_type != IP_CONFIG_TYPE_NONE) {
    value->SetWithoutPathExpansion("NameServersConfigType", new base::StringValue(networking_private::ToString(this->name_servers_config_type)));

  }
  if (this->priority.get()) {
    value->SetWithoutPathExpansion("Priority", new base::FundamentalValue(*this->priority));

  }
  if (this->proxy_settings.get()) {
    value->SetWithoutPathExpansion("ProxySettings", (this->proxy_settings)->ToValue().release());

  }
  if (this->restricted_connectivity.get()) {
    value->SetWithoutPathExpansion("RestrictedConnectivity", new base::FundamentalValue(*this->restricted_connectivity));

  }
  if (this->static_ip_config.get()) {
    value->SetWithoutPathExpansion("StaticIPConfig", (this->static_ip_config)->ToValue().release());

  }
  if (this->saved_ip_config.get()) {
    value->SetWithoutPathExpansion("SavedIPConfig", (this->saved_ip_config)->ToValue().release());

  }
  if (this->source.get()) {
    value->SetWithoutPathExpansion("Source", new base::StringValue(*this->source));

  }
  value->SetWithoutPathExpansion("Type", new base::StringValue(networking_private::ToString(this->type)));

  if (this->vpn.get()) {
    value->SetWithoutPathExpansion("VPN", (this->vpn)->ToValue().release());

  }
  if (this->wi_fi.get()) {
    value->SetWithoutPathExpansion("WiFi", (this->wi_fi)->ToValue().release());

  }
  if (this->wi_max.get()) {
    value->SetWithoutPathExpansion("WiMAX", (this->wi_max)->ToValue().release());

  }

  return value;
}


ManagedProperties::ManagedProperties()
: connection_state(CONNECTION_STATE_TYPE_NONE), type(NETWORK_TYPE_NONE) {}

ManagedProperties::~ManagedProperties() {}

// static
bool ManagedProperties::Populate(
    const base::Value& value, ManagedProperties* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  out->connection_state = CONNECTION_STATE_TYPE_NONE;
  const base::Value* cellular_value = NULL;
  if (dict->GetWithoutPathExpansion("Cellular", &cellular_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!cellular_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedCellularProperties> temp(new ManagedCellularProperties());
        if (!ManagedCellularProperties::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->cellular = std::move(temp);
      }
    }
  }

  const base::Value* connectable_value = NULL;
  if (dict->GetWithoutPathExpansion("Connectable", &connectable_value)) {
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

  const base::Value* connection_state_value = NULL;
  if (dict->GetWithoutPathExpansion("ConnectionState", &connection_state_value)) {
    {
      std::string connection_state_type_as_string;
      if (!connection_state_value->GetAsString(&connection_state_type_as_string)) {
        return false;
      }
      out->connection_state = ParseConnectionStateType(connection_state_type_as_string);
      if (out->connection_state == CONNECTION_STATE_TYPE_NONE) {
        return false;
      }
    }
    } else {
    out->connection_state = CONNECTION_STATE_TYPE_NONE;
  }

  const base::Value* error_state_value = NULL;
  if (dict->GetWithoutPathExpansion("ErrorState", &error_state_value)) {
    {
      std::string temp;
      if (!error_state_value->GetAsString(&temp)) {
        out->error_state.reset();
        return false;
      }
      else
        out->error_state.reset(new std::string(temp));
    }
  }

  const base::Value* ethernet_value = NULL;
  if (dict->GetWithoutPathExpansion("Ethernet", &ethernet_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!ethernet_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedEthernetProperties> temp(new ManagedEthernetProperties());
        if (!ManagedEthernetProperties::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->ethernet = std::move(temp);
      }
    }
  }

  const base::Value* guid_value = NULL;
  if (!dict->GetWithoutPathExpansion("GUID", &guid_value)) {
    return false;
  }
  {
    if (!guid_value->GetAsString(&out->guid)) {
      return false;
    }
  }

  const base::Value* ip_address_config_type_value = NULL;
  if (dict->GetWithoutPathExpansion("IPAddressConfigType", &ip_address_config_type_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!ip_address_config_type_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedIPConfigType> temp(new ManagedIPConfigType());
        if (!ManagedIPConfigType::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->ip_address_config_type = std::move(temp);
      }
    }
  }

  const base::Value* ip_configs_value = NULL;
  if (dict->GetWithoutPathExpansion("IPConfigs", &ip_configs_value)) {
    {
      const base::ListValue* list = NULL;
      if (!ip_configs_value->GetAsList(&list)) {
        return false;
      }
      else {
        if (!json_schema_compiler::util::PopulateOptionalArrayFromList(*list, &out->ip_configs)) {
          return false;
        }
      }
    }
  }

  const base::Value* mac_address_value = NULL;
  if (dict->GetWithoutPathExpansion("MacAddress", &mac_address_value)) {
    {
      std::string temp;
      if (!mac_address_value->GetAsString(&temp)) {
        out->mac_address.reset();
        return false;
      }
      else
        out->mac_address.reset(new std::string(temp));
    }
  }

  const base::Value* name_value = NULL;
  if (dict->GetWithoutPathExpansion("Name", &name_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!name_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedDOMString> temp(new ManagedDOMString());
        if (!ManagedDOMString::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->name = std::move(temp);
      }
    }
  }

  const base::Value* name_servers_config_type_value = NULL;
  if (dict->GetWithoutPathExpansion("NameServersConfigType", &name_servers_config_type_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!name_servers_config_type_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedIPConfigType> temp(new ManagedIPConfigType());
        if (!ManagedIPConfigType::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->name_servers_config_type = std::move(temp);
      }
    }
  }

  const base::Value* priority_value = NULL;
  if (dict->GetWithoutPathExpansion("Priority", &priority_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!priority_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedLong> temp(new ManagedLong());
        if (!ManagedLong::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->priority = std::move(temp);
      }
    }
  }

  const base::Value* proxy_settings_value = NULL;
  if (dict->GetWithoutPathExpansion("ProxySettings", &proxy_settings_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!proxy_settings_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedProxySettings> temp(new ManagedProxySettings());
        if (!ManagedProxySettings::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->proxy_settings = std::move(temp);
      }
    }
  }

  const base::Value* restricted_connectivity_value = NULL;
  if (dict->GetWithoutPathExpansion("RestrictedConnectivity", &restricted_connectivity_value)) {
    {
      bool temp;
      if (!restricted_connectivity_value->GetAsBoolean(&temp)) {
        out->restricted_connectivity.reset();
        return false;
      }
      else
        out->restricted_connectivity.reset(new bool(temp));
    }
  }

  const base::Value* static_ip_config_value = NULL;
  if (dict->GetWithoutPathExpansion("StaticIPConfig", &static_ip_config_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!static_ip_config_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedIPConfigProperties> temp(new ManagedIPConfigProperties());
        if (!ManagedIPConfigProperties::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->static_ip_config = std::move(temp);
      }
    }
  }

  const base::Value* saved_ip_config_value = NULL;
  if (dict->GetWithoutPathExpansion("SavedIPConfig", &saved_ip_config_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!saved_ip_config_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<IPConfigProperties> temp(new IPConfigProperties());
        if (!IPConfigProperties::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->saved_ip_config = std::move(temp);
      }
    }
  }

  const base::Value* source_value = NULL;
  if (dict->GetWithoutPathExpansion("Source", &source_value)) {
    {
      std::string temp;
      if (!source_value->GetAsString(&temp)) {
        out->source.reset();
        return false;
      }
      else
        out->source.reset(new std::string(temp));
    }
  }

  const base::Value* type_value = NULL;
  if (!dict->GetWithoutPathExpansion("Type", &type_value)) {
    return false;
  }
  {
    std::string network_type_as_string;
    if (!type_value->GetAsString(&network_type_as_string)) {
      return false;
    }
    out->type = ParseNetworkType(network_type_as_string);
    if (out->type == NETWORK_TYPE_NONE) {
      return false;
    }
  }

  const base::Value* vpn_value = NULL;
  if (dict->GetWithoutPathExpansion("VPN", &vpn_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!vpn_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedVPNProperties> temp(new ManagedVPNProperties());
        if (!ManagedVPNProperties::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->vpn = std::move(temp);
      }
    }
  }

  const base::Value* wi_fi_value = NULL;
  if (dict->GetWithoutPathExpansion("WiFi", &wi_fi_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!wi_fi_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedWiFiProperties> temp(new ManagedWiFiProperties());
        if (!ManagedWiFiProperties::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->wi_fi = std::move(temp);
      }
    }
  }

  const base::Value* wi_max_value = NULL;
  if (dict->GetWithoutPathExpansion("WiMAX", &wi_max_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!wi_max_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ManagedWiMAXProperties> temp(new ManagedWiMAXProperties());
        if (!ManagedWiMAXProperties::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->wi_max = std::move(temp);
      }
    }
  }

  return true;
}

// static
scoped_ptr<ManagedProperties> ManagedProperties::FromValue(const base::Value& value) {
  scoped_ptr<ManagedProperties> out(new ManagedProperties());
  if (!Populate(value, out.get()))
    return scoped_ptr<ManagedProperties>();
  return out;
}

scoped_ptr<base::DictionaryValue> ManagedProperties::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->cellular.get()) {
    value->SetWithoutPathExpansion("Cellular", (this->cellular)->ToValue().release());

  }
  if (this->connectable.get()) {
    value->SetWithoutPathExpansion("Connectable", new base::FundamentalValue(*this->connectable));

  }
  if (this->connection_state != CONNECTION_STATE_TYPE_NONE) {
    value->SetWithoutPathExpansion("ConnectionState", new base::StringValue(networking_private::ToString(this->connection_state)));

  }
  if (this->error_state.get()) {
    value->SetWithoutPathExpansion("ErrorState", new base::StringValue(*this->error_state));

  }
  if (this->ethernet.get()) {
    value->SetWithoutPathExpansion("Ethernet", (this->ethernet)->ToValue().release());

  }
  value->SetWithoutPathExpansion("GUID", new base::StringValue(this->guid));

  if (this->ip_address_config_type.get()) {
    value->SetWithoutPathExpansion("IPAddressConfigType", (this->ip_address_config_type)->ToValue().release());

  }
  if (this->ip_configs.get()) {
    value->SetWithoutPathExpansion("IPConfigs", json_schema_compiler::util::CreateValueFromOptionalArray(this->ip_configs).release());

  }
  if (this->mac_address.get()) {
    value->SetWithoutPathExpansion("MacAddress", new base::StringValue(*this->mac_address));

  }
  if (this->name.get()) {
    value->SetWithoutPathExpansion("Name", (this->name)->ToValue().release());

  }
  if (this->name_servers_config_type.get()) {
    value->SetWithoutPathExpansion("NameServersConfigType", (this->name_servers_config_type)->ToValue().release());

  }
  if (this->priority.get()) {
    value->SetWithoutPathExpansion("Priority", (this->priority)->ToValue().release());

  }
  if (this->proxy_settings.get()) {
    value->SetWithoutPathExpansion("ProxySettings", (this->proxy_settings)->ToValue().release());

  }
  if (this->restricted_connectivity.get()) {
    value->SetWithoutPathExpansion("RestrictedConnectivity", new base::FundamentalValue(*this->restricted_connectivity));

  }
  if (this->static_ip_config.get()) {
    value->SetWithoutPathExpansion("StaticIPConfig", (this->static_ip_config)->ToValue().release());

  }
  if (this->saved_ip_config.get()) {
    value->SetWithoutPathExpansion("SavedIPConfig", (this->saved_ip_config)->ToValue().release());

  }
  if (this->source.get()) {
    value->SetWithoutPathExpansion("Source", new base::StringValue(*this->source));

  }
  value->SetWithoutPathExpansion("Type", new base::StringValue(networking_private::ToString(this->type)));

  if (this->vpn.get()) {
    value->SetWithoutPathExpansion("VPN", (this->vpn)->ToValue().release());

  }
  if (this->wi_fi.get()) {
    value->SetWithoutPathExpansion("WiFi", (this->wi_fi)->ToValue().release());

  }
  if (this->wi_max.get()) {
    value->SetWithoutPathExpansion("WiMAX", (this->wi_max)->ToValue().release());

  }

  return value;
}


NetworkStateProperties::NetworkStateProperties()
: connection_state(CONNECTION_STATE_TYPE_NONE), type(NETWORK_TYPE_NONE) {}

NetworkStateProperties::~NetworkStateProperties() {}

// static
bool NetworkStateProperties::Populate(
    const base::Value& value, NetworkStateProperties* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  out->connection_state = CONNECTION_STATE_TYPE_NONE;
  const base::Value* cellular_value = NULL;
  if (dict->GetWithoutPathExpansion("Cellular", &cellular_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!cellular_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<CellularStateProperties> temp(new CellularStateProperties());
        if (!CellularStateProperties::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->cellular = std::move(temp);
      }
    }
  }

  const base::Value* connectable_value = NULL;
  if (dict->GetWithoutPathExpansion("Connectable", &connectable_value)) {
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

  const base::Value* connection_state_value = NULL;
  if (dict->GetWithoutPathExpansion("ConnectionState", &connection_state_value)) {
    {
      std::string connection_state_type_as_string;
      if (!connection_state_value->GetAsString(&connection_state_type_as_string)) {
        return false;
      }
      out->connection_state = ParseConnectionStateType(connection_state_type_as_string);
      if (out->connection_state == CONNECTION_STATE_TYPE_NONE) {
        return false;
      }
    }
    } else {
    out->connection_state = CONNECTION_STATE_TYPE_NONE;
  }

  const base::Value* ethernet_value = NULL;
  if (dict->GetWithoutPathExpansion("Ethernet", &ethernet_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!ethernet_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<EthernetStateProperties> temp(new EthernetStateProperties());
        if (!EthernetStateProperties::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->ethernet = std::move(temp);
      }
    }
  }

  const base::Value* error_state_value = NULL;
  if (dict->GetWithoutPathExpansion("ErrorState", &error_state_value)) {
    {
      std::string temp;
      if (!error_state_value->GetAsString(&temp)) {
        out->error_state.reset();
        return false;
      }
      else
        out->error_state.reset(new std::string(temp));
    }
  }

  const base::Value* guid_value = NULL;
  if (!dict->GetWithoutPathExpansion("GUID", &guid_value)) {
    return false;
  }
  {
    if (!guid_value->GetAsString(&out->guid)) {
      return false;
    }
  }

  const base::Value* name_value = NULL;
  if (dict->GetWithoutPathExpansion("Name", &name_value)) {
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

  const base::Value* priority_value = NULL;
  if (dict->GetWithoutPathExpansion("Priority", &priority_value)) {
    {
      int temp;
      if (!priority_value->GetAsInteger(&temp)) {
        out->priority.reset();
        return false;
      }
      else
        out->priority.reset(new int(temp));
    }
  }

  const base::Value* source_value = NULL;
  if (dict->GetWithoutPathExpansion("Source", &source_value)) {
    {
      std::string temp;
      if (!source_value->GetAsString(&temp)) {
        out->source.reset();
        return false;
      }
      else
        out->source.reset(new std::string(temp));
    }
  }

  const base::Value* type_value = NULL;
  if (!dict->GetWithoutPathExpansion("Type", &type_value)) {
    return false;
  }
  {
    std::string network_type_as_string;
    if (!type_value->GetAsString(&network_type_as_string)) {
      return false;
    }
    out->type = ParseNetworkType(network_type_as_string);
    if (out->type == NETWORK_TYPE_NONE) {
      return false;
    }
  }

  const base::Value* vpn_value = NULL;
  if (dict->GetWithoutPathExpansion("VPN", &vpn_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!vpn_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<VPNStateProperties> temp(new VPNStateProperties());
        if (!VPNStateProperties::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->vpn = std::move(temp);
      }
    }
  }

  const base::Value* wi_fi_value = NULL;
  if (dict->GetWithoutPathExpansion("WiFi", &wi_fi_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!wi_fi_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<WiFiStateProperties> temp(new WiFiStateProperties());
        if (!WiFiStateProperties::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->wi_fi = std::move(temp);
      }
    }
  }

  const base::Value* wi_max_value = NULL;
  if (dict->GetWithoutPathExpansion("WiMAX", &wi_max_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!wi_max_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<WiMAXStateProperties> temp(new WiMAXStateProperties());
        if (!WiMAXStateProperties::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->wi_max = std::move(temp);
      }
    }
  }

  return true;
}

// static
scoped_ptr<NetworkStateProperties> NetworkStateProperties::FromValue(const base::Value& value) {
  scoped_ptr<NetworkStateProperties> out(new NetworkStateProperties());
  if (!Populate(value, out.get()))
    return scoped_ptr<NetworkStateProperties>();
  return out;
}

scoped_ptr<base::DictionaryValue> NetworkStateProperties::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->cellular.get()) {
    value->SetWithoutPathExpansion("Cellular", (this->cellular)->ToValue().release());

  }
  if (this->connectable.get()) {
    value->SetWithoutPathExpansion("Connectable", new base::FundamentalValue(*this->connectable));

  }
  if (this->connection_state != CONNECTION_STATE_TYPE_NONE) {
    value->SetWithoutPathExpansion("ConnectionState", new base::StringValue(networking_private::ToString(this->connection_state)));

  }
  if (this->ethernet.get()) {
    value->SetWithoutPathExpansion("Ethernet", (this->ethernet)->ToValue().release());

  }
  if (this->error_state.get()) {
    value->SetWithoutPathExpansion("ErrorState", new base::StringValue(*this->error_state));

  }
  value->SetWithoutPathExpansion("GUID", new base::StringValue(this->guid));

  if (this->name.get()) {
    value->SetWithoutPathExpansion("Name", new base::StringValue(*this->name));

  }
  if (this->priority.get()) {
    value->SetWithoutPathExpansion("Priority", new base::FundamentalValue(*this->priority));

  }
  if (this->source.get()) {
    value->SetWithoutPathExpansion("Source", new base::StringValue(*this->source));

  }
  value->SetWithoutPathExpansion("Type", new base::StringValue(networking_private::ToString(this->type)));

  if (this->vpn.get()) {
    value->SetWithoutPathExpansion("VPN", (this->vpn)->ToValue().release());

  }
  if (this->wi_fi.get()) {
    value->SetWithoutPathExpansion("WiFi", (this->wi_fi)->ToValue().release());

  }
  if (this->wi_max.get()) {
    value->SetWithoutPathExpansion("WiMAX", (this->wi_max)->ToValue().release());

  }

  return value;
}


DeviceStateProperties::DeviceStateProperties()
: state(DEVICE_STATE_TYPE_NONE), type(NETWORK_TYPE_NONE) {}

DeviceStateProperties::~DeviceStateProperties() {}

// static
bool DeviceStateProperties::Populate(
    const base::Value& value, DeviceStateProperties* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* scanning_value = NULL;
  if (dict->GetWithoutPathExpansion("Scanning", &scanning_value)) {
    {
      bool temp;
      if (!scanning_value->GetAsBoolean(&temp)) {
        out->scanning.reset();
        return false;
      }
      else
        out->scanning.reset(new bool(temp));
    }
  }

  const base::Value* sim_lock_type_value = NULL;
  if (dict->GetWithoutPathExpansion("SimLockType", &sim_lock_type_value)) {
    {
      std::string temp;
      if (!sim_lock_type_value->GetAsString(&temp)) {
        out->sim_lock_type.reset();
        return false;
      }
      else
        out->sim_lock_type.reset(new std::string(temp));
    }
  }

  const base::Value* sim_present_value = NULL;
  if (dict->GetWithoutPathExpansion("SimPresent", &sim_present_value)) {
    {
      bool temp;
      if (!sim_present_value->GetAsBoolean(&temp)) {
        out->sim_present.reset();
        return false;
      }
      else
        out->sim_present.reset(new bool(temp));
    }
  }

  const base::Value* state_value = NULL;
  if (!dict->GetWithoutPathExpansion("State", &state_value)) {
    return false;
  }
  {
    std::string device_state_type_as_string;
    if (!state_value->GetAsString(&device_state_type_as_string)) {
      return false;
    }
    out->state = ParseDeviceStateType(device_state_type_as_string);
    if (out->state == DEVICE_STATE_TYPE_NONE) {
      return false;
    }
  }

  const base::Value* type_value = NULL;
  if (!dict->GetWithoutPathExpansion("Type", &type_value)) {
    return false;
  }
  {
    std::string network_type_as_string;
    if (!type_value->GetAsString(&network_type_as_string)) {
      return false;
    }
    out->type = ParseNetworkType(network_type_as_string);
    if (out->type == NETWORK_TYPE_NONE) {
      return false;
    }
  }

  return true;
}

// static
scoped_ptr<DeviceStateProperties> DeviceStateProperties::FromValue(const base::Value& value) {
  scoped_ptr<DeviceStateProperties> out(new DeviceStateProperties());
  if (!Populate(value, out.get()))
    return scoped_ptr<DeviceStateProperties>();
  return out;
}

scoped_ptr<base::DictionaryValue> DeviceStateProperties::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->scanning.get()) {
    value->SetWithoutPathExpansion("Scanning", new base::FundamentalValue(*this->scanning));

  }
  if (this->sim_lock_type.get()) {
    value->SetWithoutPathExpansion("SimLockType", new base::StringValue(*this->sim_lock_type));

  }
  if (this->sim_present.get()) {
    value->SetWithoutPathExpansion("SimPresent", new base::FundamentalValue(*this->sim_present));

  }
  value->SetWithoutPathExpansion("State", new base::StringValue(networking_private::ToString(this->state)));

  value->SetWithoutPathExpansion("Type", new base::StringValue(networking_private::ToString(this->type)));


  return value;
}


VerificationProperties::VerificationProperties()
 {}

VerificationProperties::~VerificationProperties() {}

// static
bool VerificationProperties::Populate(
    const base::Value& value, VerificationProperties* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* certificate_value = NULL;
  if (!dict->GetWithoutPathExpansion("certificate", &certificate_value)) {
    return false;
  }
  {
    if (!certificate_value->GetAsString(&out->certificate)) {
      return false;
    }
  }

  const base::Value* intermediate_certificates_value = NULL;
  if (dict->GetWithoutPathExpansion("intermediateCertificates", &intermediate_certificates_value)) {
    {
      const base::ListValue* list = NULL;
      if (!intermediate_certificates_value->GetAsList(&list)) {
        return false;
      }
      else {
        if (!json_schema_compiler::util::PopulateOptionalArrayFromList(*list, &out->intermediate_certificates)) {
          return false;
        }
      }
    }
  }

  const base::Value* public_key_value = NULL;
  if (!dict->GetWithoutPathExpansion("publicKey", &public_key_value)) {
    return false;
  }
  {
    if (!public_key_value->GetAsString(&out->public_key)) {
      return false;
    }
  }

  const base::Value* nonce_value = NULL;
  if (!dict->GetWithoutPathExpansion("nonce", &nonce_value)) {
    return false;
  }
  {
    if (!nonce_value->GetAsString(&out->nonce)) {
      return false;
    }
  }

  const base::Value* signed_data_value = NULL;
  if (!dict->GetWithoutPathExpansion("signedData", &signed_data_value)) {
    return false;
  }
  {
    if (!signed_data_value->GetAsString(&out->signed_data)) {
      return false;
    }
  }

  const base::Value* device_serial_value = NULL;
  if (!dict->GetWithoutPathExpansion("deviceSerial", &device_serial_value)) {
    return false;
  }
  {
    if (!device_serial_value->GetAsString(&out->device_serial)) {
      return false;
    }
  }

  const base::Value* device_ssid_value = NULL;
  if (!dict->GetWithoutPathExpansion("deviceSsid", &device_ssid_value)) {
    return false;
  }
  {
    if (!device_ssid_value->GetAsString(&out->device_ssid)) {
      return false;
    }
  }

  const base::Value* device_bssid_value = NULL;
  if (!dict->GetWithoutPathExpansion("deviceBssid", &device_bssid_value)) {
    return false;
  }
  {
    if (!device_bssid_value->GetAsString(&out->device_bssid)) {
      return false;
    }
  }

  return true;
}

// static
scoped_ptr<VerificationProperties> VerificationProperties::FromValue(const base::Value& value) {
  scoped_ptr<VerificationProperties> out(new VerificationProperties());
  if (!Populate(value, out.get()))
    return scoped_ptr<VerificationProperties>();
  return out;
}

scoped_ptr<base::DictionaryValue> VerificationProperties::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("certificate", new base::StringValue(this->certificate));

  if (this->intermediate_certificates.get()) {
    value->SetWithoutPathExpansion("intermediateCertificates", json_schema_compiler::util::CreateValueFromOptionalArray(this->intermediate_certificates).release());

  }
  value->SetWithoutPathExpansion("publicKey", new base::StringValue(this->public_key));

  value->SetWithoutPathExpansion("nonce", new base::StringValue(this->nonce));

  value->SetWithoutPathExpansion("signedData", new base::StringValue(this->signed_data));

  value->SetWithoutPathExpansion("deviceSerial", new base::StringValue(this->device_serial));

  value->SetWithoutPathExpansion("deviceSsid", new base::StringValue(this->device_ssid));

  value->SetWithoutPathExpansion("deviceBssid", new base::StringValue(this->device_bssid));


  return value;
}


NetworkFilter::NetworkFilter()
: network_type(NETWORK_TYPE_NONE) {}

NetworkFilter::~NetworkFilter() {}

// static
bool NetworkFilter::Populate(
    const base::Value& value, NetworkFilter* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* network_type_value = NULL;
  if (!dict->GetWithoutPathExpansion("networkType", &network_type_value)) {
    return false;
  }
  {
    std::string network_type_as_string;
    if (!network_type_value->GetAsString(&network_type_as_string)) {
      return false;
    }
    out->network_type = ParseNetworkType(network_type_as_string);
    if (out->network_type == NETWORK_TYPE_NONE) {
      return false;
    }
  }

  const base::Value* visible_value = NULL;
  if (dict->GetWithoutPathExpansion("visible", &visible_value)) {
    {
      bool temp;
      if (!visible_value->GetAsBoolean(&temp)) {
        out->visible.reset();
        return false;
      }
      else
        out->visible.reset(new bool(temp));
    }
  }

  const base::Value* configured_value = NULL;
  if (dict->GetWithoutPathExpansion("configured", &configured_value)) {
    {
      bool temp;
      if (!configured_value->GetAsBoolean(&temp)) {
        out->configured.reset();
        return false;
      }
      else
        out->configured.reset(new bool(temp));
    }
  }

  const base::Value* limit_value = NULL;
  if (dict->GetWithoutPathExpansion("limit", &limit_value)) {
    {
      int temp;
      if (!limit_value->GetAsInteger(&temp)) {
        out->limit.reset();
        return false;
      }
      else
        out->limit.reset(new int(temp));
    }
  }

  return true;
}

// static
scoped_ptr<NetworkFilter> NetworkFilter::FromValue(const base::Value& value) {
  scoped_ptr<NetworkFilter> out(new NetworkFilter());
  if (!Populate(value, out.get()))
    return scoped_ptr<NetworkFilter>();
  return out;
}

scoped_ptr<base::DictionaryValue> NetworkFilter::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("networkType", new base::StringValue(networking_private::ToString(this->network_type)));

  if (this->visible.get()) {
    value->SetWithoutPathExpansion("visible", new base::FundamentalValue(*this->visible));

  }
  if (this->configured.get()) {
    value->SetWithoutPathExpansion("configured", new base::FundamentalValue(*this->configured));

  }
  if (this->limit.get()) {
    value->SetWithoutPathExpansion("limit", new base::FundamentalValue(*this->limit));

  }

  return value;
}



//
// Functions
//

namespace GetProperties {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* network_guid_value = NULL;
  if (args.Get(0, &network_guid_value) &&
      !network_guid_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!network_guid_value->GetAsString(&params->network_guid)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(const NetworkProperties& result) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((result).ToValue().release());

  return create_results;
}
}  // namespace GetProperties

namespace GetManagedProperties {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* network_guid_value = NULL;
  if (args.Get(0, &network_guid_value) &&
      !network_guid_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!network_guid_value->GetAsString(&params->network_guid)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(const ManagedProperties& result) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((result).ToValue().release());

  return create_results;
}
}  // namespace GetManagedProperties

namespace GetState {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* network_guid_value = NULL;
  if (args.Get(0, &network_guid_value) &&
      !network_guid_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!network_guid_value->GetAsString(&params->network_guid)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(const NetworkStateProperties& result) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((result).ToValue().release());

  return create_results;
}
}  // namespace GetState

namespace SetProperties {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 2) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* network_guid_value = NULL;
  if (args.Get(0, &network_guid_value) &&
      !network_guid_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!network_guid_value->GetAsString(&params->network_guid)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* properties_value = NULL;
  if (args.Get(1, &properties_value) &&
      !properties_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!properties_value->GetAsDictionary(&dictionary)) {
        return scoped_ptr<Params>();
      }
      if (!NetworkConfigProperties::Populate(*dictionary, &params->properties)) {
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
}  // namespace SetProperties

namespace CreateNetwork {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 2) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* shared_value = NULL;
  if (args.Get(0, &shared_value) &&
      !shared_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!shared_value->GetAsBoolean(&params->shared)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* properties_value = NULL;
  if (args.Get(1, &properties_value) &&
      !properties_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!properties_value->GetAsDictionary(&dictionary)) {
        return scoped_ptr<Params>();
      }
      if (!NetworkConfigProperties::Populate(*dictionary, &params->properties)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(const std::string& result) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(new base::StringValue(result));

  return create_results;
}
}  // namespace CreateNetwork

namespace ForgetNetwork {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* network_guid_value = NULL;
  if (args.Get(0, &network_guid_value) &&
      !network_guid_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!network_guid_value->GetAsString(&params->network_guid)) {
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
}  // namespace ForgetNetwork

namespace GetNetworks {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* filter_value = NULL;
  if (args.Get(0, &filter_value) &&
      !filter_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!filter_value->GetAsDictionary(&dictionary)) {
        return scoped_ptr<Params>();
      }
      if (!NetworkFilter::Populate(*dictionary, &params->filter)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(const std::vector<linked_ptr<NetworkStateProperties> >& result) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(json_schema_compiler::util::CreateValueFromArray(result).release());

  return create_results;
}
}  // namespace GetNetworks

namespace GetVisibleNetworks {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* network_type_value = NULL;
  if (args.Get(0, &network_type_value) &&
      !network_type_value->IsType(base::Value::TYPE_NULL)) {
    {
      std::string network_type_as_string;
      if (!network_type_value->GetAsString(&network_type_as_string)) {
        return scoped_ptr<Params>();
      }
      params->network_type = ParseNetworkType(network_type_as_string);
      if (params->network_type == NETWORK_TYPE_NONE) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(const std::vector<linked_ptr<NetworkStateProperties> >& result) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(json_schema_compiler::util::CreateValueFromArray(result).release());

  return create_results;
}
}  // namespace GetVisibleNetworks

namespace GetEnabledNetworkTypes {

scoped_ptr<base::ListValue> Results::Create(const std::vector<NetworkType>& result) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  {
    std::vector<std::string> result_list;
    for (const auto& it : (result)) {
    result_list.push_back(networking_private::ToString(it));
  }
  create_results->Append(json_schema_compiler::util::CreateValueFromArray(result_list).release());
  }

  return create_results;
}
}  // namespace GetEnabledNetworkTypes

namespace GetDeviceStates {

scoped_ptr<base::ListValue> Results::Create(const std::vector<linked_ptr<DeviceStateProperties> >& result) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(json_schema_compiler::util::CreateValueFromArray(result).release());

  return create_results;
}
}  // namespace GetDeviceStates

namespace EnableNetworkType {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* network_type_value = NULL;
  if (args.Get(0, &network_type_value) &&
      !network_type_value->IsType(base::Value::TYPE_NULL)) {
    {
      std::string network_type_as_string;
      if (!network_type_value->GetAsString(&network_type_as_string)) {
        return scoped_ptr<Params>();
      }
      params->network_type = ParseNetworkType(network_type_as_string);
      if (params->network_type == NETWORK_TYPE_NONE) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


}  // namespace EnableNetworkType

namespace DisableNetworkType {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* network_type_value = NULL;
  if (args.Get(0, &network_type_value) &&
      !network_type_value->IsType(base::Value::TYPE_NULL)) {
    {
      std::string network_type_as_string;
      if (!network_type_value->GetAsString(&network_type_as_string)) {
        return scoped_ptr<Params>();
      }
      params->network_type = ParseNetworkType(network_type_as_string);
      if (params->network_type == NETWORK_TYPE_NONE) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


}  // namespace DisableNetworkType

namespace RequestNetworkScan {

}  // namespace RequestNetworkScan

namespace StartConnect {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* network_guid_value = NULL;
  if (args.Get(0, &network_guid_value) &&
      !network_guid_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!network_guid_value->GetAsString(&params->network_guid)) {
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
}  // namespace StartConnect

namespace StartDisconnect {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* network_guid_value = NULL;
  if (args.Get(0, &network_guid_value) &&
      !network_guid_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!network_guid_value->GetAsString(&params->network_guid)) {
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
}  // namespace StartDisconnect

namespace StartActivate {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() < 1 || args.GetSize() > 2) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* network_guid_value = NULL;
  if (args.Get(0, &network_guid_value) &&
      !network_guid_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!network_guid_value->GetAsString(&params->network_guid)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* carrier_value = NULL;
  if (args.Get(1, &carrier_value) &&
      !carrier_value->IsType(base::Value::TYPE_NULL)) {
    {
      std::string temp;
      if (!carrier_value->GetAsString(&temp)) {
        params->carrier.reset();
        return scoped_ptr<Params>();
      }
      else
        params->carrier.reset(new std::string(temp));
    }
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create() {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}
}  // namespace StartActivate

namespace VerifyDestination {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* properties_value = NULL;
  if (args.Get(0, &properties_value) &&
      !properties_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!properties_value->GetAsDictionary(&dictionary)) {
        return scoped_ptr<Params>();
      }
      if (!VerificationProperties::Populate(*dictionary, &params->properties)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(bool result) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(new base::FundamentalValue(result));

  return create_results;
}
}  // namespace VerifyDestination

namespace VerifyAndEncryptCredentials {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 2) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* properties_value = NULL;
  if (args.Get(0, &properties_value) &&
      !properties_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!properties_value->GetAsDictionary(&dictionary)) {
        return scoped_ptr<Params>();
      }
      if (!VerificationProperties::Populate(*dictionary, &params->properties)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* network_guid_value = NULL;
  if (args.Get(1, &network_guid_value) &&
      !network_guid_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!network_guid_value->GetAsString(&params->network_guid)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(const std::string& result) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(new base::StringValue(result));

  return create_results;
}
}  // namespace VerifyAndEncryptCredentials

namespace VerifyAndEncryptData {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 2) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* properties_value = NULL;
  if (args.Get(0, &properties_value) &&
      !properties_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!properties_value->GetAsDictionary(&dictionary)) {
        return scoped_ptr<Params>();
      }
      if (!VerificationProperties::Populate(*dictionary, &params->properties)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* data_value = NULL;
  if (args.Get(1, &data_value) &&
      !data_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!data_value->GetAsString(&params->data)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(const std::string& result) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(new base::StringValue(result));

  return create_results;
}
}  // namespace VerifyAndEncryptData

namespace SetWifiTDLSEnabledState {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 2) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* ip_or_mac_address_value = NULL;
  if (args.Get(0, &ip_or_mac_address_value) &&
      !ip_or_mac_address_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!ip_or_mac_address_value->GetAsString(&params->ip_or_mac_address)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* enabled_value = NULL;
  if (args.Get(1, &enabled_value) &&
      !enabled_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!enabled_value->GetAsBoolean(&params->enabled)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(const std::string& result) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(new base::StringValue(result));

  return create_results;
}
}  // namespace SetWifiTDLSEnabledState

namespace GetWifiTDLSStatus {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* ip_or_mac_address_value = NULL;
  if (args.Get(0, &ip_or_mac_address_value) &&
      !ip_or_mac_address_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!ip_or_mac_address_value->GetAsString(&params->ip_or_mac_address)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(const std::string& result) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(new base::StringValue(result));

  return create_results;
}
}  // namespace GetWifiTDLSStatus

namespace GetCaptivePortalStatus {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* network_guid_value = NULL;
  if (args.Get(0, &network_guid_value) &&
      !network_guid_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!network_guid_value->GetAsString(&params->network_guid)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(const CaptivePortalStatus& result) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(new base::StringValue(networking_private::ToString(result)));

  return create_results;
}
}  // namespace GetCaptivePortalStatus

namespace UnlockCellularSim {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() < 2 || args.GetSize() > 3) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* network_guid_value = NULL;
  if (args.Get(0, &network_guid_value) &&
      !network_guid_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!network_guid_value->GetAsString(&params->network_guid)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* pin_value = NULL;
  if (args.Get(1, &pin_value) &&
      !pin_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!pin_value->GetAsString(&params->pin)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* puk_value = NULL;
  if (args.Get(2, &puk_value) &&
      !puk_value->IsType(base::Value::TYPE_NULL)) {
    {
      std::string temp;
      if (!puk_value->GetAsString(&temp)) {
        params->puk.reset();
        return scoped_ptr<Params>();
      }
      else
        params->puk.reset(new std::string(temp));
    }
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create() {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}
}  // namespace UnlockCellularSim

namespace SetCellularSimState {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 2) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* network_guid_value = NULL;
  if (args.Get(0, &network_guid_value) &&
      !network_guid_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!network_guid_value->GetAsString(&params->network_guid)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* sim_state_value = NULL;
  if (args.Get(1, &sim_state_value) &&
      !sim_state_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!sim_state_value->GetAsDictionary(&dictionary)) {
        return scoped_ptr<Params>();
      }
      if (!CellularSimState::Populate(*dictionary, &params->sim_state)) {
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
}  // namespace SetCellularSimState

//
// Events
//

namespace OnNetworksChanged {

const char kEventName[] = "networkingPrivate.onNetworksChanged";

scoped_ptr<base::ListValue> Create(const std::vector<std::string>& changes) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(json_schema_compiler::util::CreateValueFromArray(changes).release());

  return create_results;
}

}  // namespace OnNetworksChanged

namespace OnNetworkListChanged {

const char kEventName[] = "networkingPrivate.onNetworkListChanged";

scoped_ptr<base::ListValue> Create(const std::vector<std::string>& changes) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(json_schema_compiler::util::CreateValueFromArray(changes).release());

  return create_results;
}

}  // namespace OnNetworkListChanged

namespace OnDeviceStateListChanged {

const char kEventName[] = "networkingPrivate.onDeviceStateListChanged";

scoped_ptr<base::ListValue> Create() {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}

}  // namespace OnDeviceStateListChanged

namespace OnPortalDetectionCompleted {

const char kEventName[] = "networkingPrivate.onPortalDetectionCompleted";

scoped_ptr<base::ListValue> Create(const std::string& network_guid, const CaptivePortalStatus& status) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(new base::StringValue(network_guid));

  create_results->Append(new base::StringValue(networking_private::ToString(status)));

  return create_results;
}

}  // namespace OnPortalDetectionCompleted

}  // namespace networking_private
}  // namespace api
}  // namespace extensions


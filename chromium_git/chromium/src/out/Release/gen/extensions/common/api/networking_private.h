// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/networking_private.idl
// DO NOT EDIT.

#ifndef EXTENSIONS_COMMON_API_NETWORKING_PRIVATE_H__
#define EXTENSIONS_COMMON_API_NETWORKING_PRIVATE_H__

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
namespace networking_private {

//
// Types
//

enum ActivationStateType {
  ACTIVATION_STATE_TYPE_NONE,
  ACTIVATION_STATE_TYPE_ACTIVATED,
  ACTIVATION_STATE_TYPE_ACTIVATING,
  ACTIVATION_STATE_TYPE_NOTACTIVATED,
  ACTIVATION_STATE_TYPE_PARTIALLYACTIVATED,
  ACTIVATION_STATE_TYPE_LAST = ACTIVATION_STATE_TYPE_PARTIALLYACTIVATED,
};


std::string ToString(ActivationStateType as_enum);
ActivationStateType ParseActivationStateType(const std::string& as_string);

enum CaptivePortalStatus {
  CAPTIVE_PORTAL_STATUS_NONE,
  CAPTIVE_PORTAL_STATUS_UNKNOWN,
  CAPTIVE_PORTAL_STATUS_OFFLINE,
  CAPTIVE_PORTAL_STATUS_ONLINE,
  CAPTIVE_PORTAL_STATUS_PORTAL,
  CAPTIVE_PORTAL_STATUS_PROXYAUTHREQUIRED,
  CAPTIVE_PORTAL_STATUS_LAST = CAPTIVE_PORTAL_STATUS_PROXYAUTHREQUIRED,
};


std::string ToString(CaptivePortalStatus as_enum);
CaptivePortalStatus ParseCaptivePortalStatus(const std::string& as_string);

enum ConnectionStateType {
  CONNECTION_STATE_TYPE_NONE,
  CONNECTION_STATE_TYPE_CONNECTED,
  CONNECTION_STATE_TYPE_CONNECTING,
  CONNECTION_STATE_TYPE_NOTCONNECTED,
  CONNECTION_STATE_TYPE_LAST = CONNECTION_STATE_TYPE_NOTCONNECTED,
};


std::string ToString(ConnectionStateType as_enum);
ConnectionStateType ParseConnectionStateType(const std::string& as_string);

enum DeviceStateType {
  DEVICE_STATE_TYPE_NONE,
  DEVICE_STATE_TYPE_UNINITIALIZED,
  DEVICE_STATE_TYPE_DISABLED,
  DEVICE_STATE_TYPE_ENABLING,
  DEVICE_STATE_TYPE_ENABLED,
  DEVICE_STATE_TYPE_PROHIBITED,
  DEVICE_STATE_TYPE_LAST = DEVICE_STATE_TYPE_PROHIBITED,
};


std::string ToString(DeviceStateType as_enum);
DeviceStateType ParseDeviceStateType(const std::string& as_string);

enum IPConfigType {
  IP_CONFIG_TYPE_NONE,
  IP_CONFIG_TYPE_DHCP,
  IP_CONFIG_TYPE_STATIC,
  IP_CONFIG_TYPE_LAST = IP_CONFIG_TYPE_STATIC,
};


std::string ToString(IPConfigType as_enum);
IPConfigType ParseIPConfigType(const std::string& as_string);

enum NetworkType {
  NETWORK_TYPE_NONE,
  NETWORK_TYPE_ALL,
  NETWORK_TYPE_CELLULAR,
  NETWORK_TYPE_ETHERNET,
  NETWORK_TYPE_VPN,
  NETWORK_TYPE_WIRELESS,
  NETWORK_TYPE_WIFI,
  NETWORK_TYPE_WIMAX,
  NETWORK_TYPE_LAST = NETWORK_TYPE_WIMAX,
};


std::string ToString(NetworkType as_enum);
NetworkType ParseNetworkType(const std::string& as_string);

enum ProxySettingsType {
  PROXY_SETTINGS_TYPE_NONE,
  PROXY_SETTINGS_TYPE_DIRECT,
  PROXY_SETTINGS_TYPE_MANUAL,
  PROXY_SETTINGS_TYPE_PAC,
  PROXY_SETTINGS_TYPE_WPAD,
  PROXY_SETTINGS_TYPE_LAST = PROXY_SETTINGS_TYPE_WPAD,
};


std::string ToString(ProxySettingsType as_enum);
ProxySettingsType ParseProxySettingsType(const std::string& as_string);

struct ManagedBoolean {
  ManagedBoolean();
  ~ManagedBoolean();

  // Populates a ManagedBoolean object from a base::Value. Returns whether |out|
  // was successfully populated.
  static bool Populate(const base::Value& value, ManagedBoolean* out);

  // Creates a ManagedBoolean object from a base::Value, or NULL on failure.
  static scoped_ptr<ManagedBoolean> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this ManagedBoolean object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  scoped_ptr<bool> active;

  scoped_ptr<std::string> effective;

  scoped_ptr<bool> user_policy;

  scoped_ptr<bool> device_policy;

  scoped_ptr<bool> user_setting;

  scoped_ptr<bool> shared_setting;

  scoped_ptr<bool> user_editable;

  scoped_ptr<bool> device_editable;


 private:
  DISALLOW_COPY_AND_ASSIGN(ManagedBoolean);
};

struct ManagedLong {
  ManagedLong();
  ~ManagedLong();

  // Populates a ManagedLong object from a base::Value. Returns whether |out|
  // was successfully populated.
  static bool Populate(const base::Value& value, ManagedLong* out);

  // Creates a ManagedLong object from a base::Value, or NULL on failure.
  static scoped_ptr<ManagedLong> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this ManagedLong object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  scoped_ptr<int> active;

  scoped_ptr<std::string> effective;

  scoped_ptr<int> user_policy;

  scoped_ptr<int> device_policy;

  scoped_ptr<int> user_setting;

  scoped_ptr<int> shared_setting;

  scoped_ptr<bool> user_editable;

  scoped_ptr<bool> device_editable;


 private:
  DISALLOW_COPY_AND_ASSIGN(ManagedLong);
};

struct ManagedDOMString {
  ManagedDOMString();
  ~ManagedDOMString();

  // Populates a ManagedDOMString object from a base::Value. Returns whether
  // |out| was successfully populated.
  static bool Populate(const base::Value& value, ManagedDOMString* out);

  // Creates a ManagedDOMString object from a base::Value, or NULL on failure.
  static scoped_ptr<ManagedDOMString> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this ManagedDOMString object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  scoped_ptr<std::string> active;

  scoped_ptr<std::string> effective;

  scoped_ptr<std::string> user_policy;

  scoped_ptr<std::string> device_policy;

  scoped_ptr<std::string> user_setting;

  scoped_ptr<std::string> shared_setting;

  scoped_ptr<bool> user_editable;

  scoped_ptr<bool> device_editable;


 private:
  DISALLOW_COPY_AND_ASSIGN(ManagedDOMString);
};

struct ManagedDOMStringList {
  ManagedDOMStringList();
  ~ManagedDOMStringList();

  // Populates a ManagedDOMStringList object from a base::Value. Returns whether
  // |out| was successfully populated.
  static bool Populate(const base::Value& value, ManagedDOMStringList* out);

  // Creates a ManagedDOMStringList object from a base::Value, or NULL on
  // failure.
  static scoped_ptr<ManagedDOMStringList> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this ManagedDOMStringList object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  scoped_ptr<std::vector<std::string> > active;

  scoped_ptr<std::string> effective;

  scoped_ptr<std::vector<std::string> > user_policy;

  scoped_ptr<std::vector<std::string> > device_policy;

  scoped_ptr<std::vector<std::string> > user_setting;

  scoped_ptr<std::vector<std::string> > shared_setting;

  scoped_ptr<bool> user_editable;

  scoped_ptr<bool> device_editable;


 private:
  DISALLOW_COPY_AND_ASSIGN(ManagedDOMStringList);
};

struct ManagedIPConfigType {
  ManagedIPConfigType();
  ~ManagedIPConfigType();

  // Populates a ManagedIPConfigType object from a base::Value. Returns whether
  // |out| was successfully populated.
  static bool Populate(const base::Value& value, ManagedIPConfigType* out);

  // Creates a ManagedIPConfigType object from a base::Value, or NULL on
  // failure.
  static scoped_ptr<ManagedIPConfigType> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this ManagedIPConfigType object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  IPConfigType active;

  scoped_ptr<std::string> effective;

  IPConfigType user_policy;

  IPConfigType device_policy;

  IPConfigType user_setting;

  IPConfigType shared_setting;

  scoped_ptr<bool> user_editable;

  scoped_ptr<bool> device_editable;


 private:
  DISALLOW_COPY_AND_ASSIGN(ManagedIPConfigType);
};

struct ManagedProxySettingsType {
  ManagedProxySettingsType();
  ~ManagedProxySettingsType();

  // Populates a ManagedProxySettingsType object from a base::Value. Returns
  // whether |out| was successfully populated.
  static bool Populate(const base::Value& value, ManagedProxySettingsType* out);

  // Creates a ManagedProxySettingsType object from a base::Value, or NULL on
  // failure.
  static scoped_ptr<ManagedProxySettingsType> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this ManagedProxySettingsType object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  ProxySettingsType active;

  scoped_ptr<std::string> effective;

  ProxySettingsType user_policy;

  ProxySettingsType device_policy;

  ProxySettingsType user_setting;

  ProxySettingsType shared_setting;

  scoped_ptr<bool> user_editable;

  scoped_ptr<bool> device_editable;


 private:
  DISALLOW_COPY_AND_ASSIGN(ManagedProxySettingsType);
};

struct APNProperties {
  APNProperties();
  ~APNProperties();

  // Populates a APNProperties object from a base::Value. Returns whether |out|
  // was successfully populated.
  static bool Populate(const base::Value& value, APNProperties* out);

  // Creates a APNProperties object from a base::Value, or NULL on failure.
  static scoped_ptr<APNProperties> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this APNProperties object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  std::string access_point_name;

  scoped_ptr<std::string> language;

  scoped_ptr<std::string> localized_name;

  scoped_ptr<std::string> name;

  scoped_ptr<std::string> password;

  scoped_ptr<std::string> username;


 private:
  DISALLOW_COPY_AND_ASSIGN(APNProperties);
};

struct ManagedAPNProperties {
  ManagedAPNProperties();
  ~ManagedAPNProperties();

  // Populates a ManagedAPNProperties object from a base::Value. Returns whether
  // |out| was successfully populated.
  static bool Populate(const base::Value& value, ManagedAPNProperties* out);

  // Creates a ManagedAPNProperties object from a base::Value, or NULL on
  // failure.
  static scoped_ptr<ManagedAPNProperties> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this ManagedAPNProperties object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  ManagedDOMString access_point_name;

  scoped_ptr<ManagedDOMString> language;

  scoped_ptr<ManagedDOMString> localized_name;

  scoped_ptr<ManagedDOMString> name;

  scoped_ptr<ManagedDOMString> password;

  scoped_ptr<ManagedDOMString> username;


 private:
  DISALLOW_COPY_AND_ASSIGN(ManagedAPNProperties);
};

struct ManagedAPNList {
  ManagedAPNList();
  ~ManagedAPNList();

  // Populates a ManagedAPNList object from a base::Value. Returns whether |out|
  // was successfully populated.
  static bool Populate(const base::Value& value, ManagedAPNList* out);

  // Creates a ManagedAPNList object from a base::Value, or NULL on failure.
  static scoped_ptr<ManagedAPNList> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this ManagedAPNList object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  scoped_ptr<std::vector<linked_ptr<APNProperties> > > active;

  scoped_ptr<std::string> effective;

  scoped_ptr<std::vector<linked_ptr<APNProperties> > > user_policy;

  scoped_ptr<std::vector<linked_ptr<APNProperties> > > device_policy;

  scoped_ptr<std::vector<linked_ptr<APNProperties> > > user_setting;

  scoped_ptr<std::vector<linked_ptr<APNProperties> > > shared_setting;

  scoped_ptr<bool> user_editable;

  scoped_ptr<bool> device_editable;


 private:
  DISALLOW_COPY_AND_ASSIGN(ManagedAPNList);
};

struct CellularProviderProperties {
  CellularProviderProperties();
  ~CellularProviderProperties();

  // Populates a CellularProviderProperties object from a base::Value. Returns
  // whether |out| was successfully populated.
  static bool Populate(const base::Value& value, CellularProviderProperties* out);

  // Creates a CellularProviderProperties object from a base::Value, or NULL on
  // failure.
  static scoped_ptr<CellularProviderProperties> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this CellularProviderProperties object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  std::string name;

  std::string code;

  scoped_ptr<std::string> country;


 private:
  DISALLOW_COPY_AND_ASSIGN(CellularProviderProperties);
};

struct CellularSimState {
  CellularSimState();
  ~CellularSimState();

  // Populates a CellularSimState object from a base::Value. Returns whether
  // |out| was successfully populated.
  static bool Populate(const base::Value& value, CellularSimState* out);

  // Creates a CellularSimState object from a base::Value, or NULL on failure.
  static scoped_ptr<CellularSimState> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this CellularSimState object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // Whether or not a PIN should be required.
  bool require_pin;

  // The current PIN (required for any change, even when the SIM is unlocked).
  std::string current_pin;

  // If provided, change the PIN to |newPin|. |requirePin| must be true.
  scoped_ptr<std::string> new_pin;


 private:
  DISALLOW_COPY_AND_ASSIGN(CellularSimState);
};

struct IssuerSubjectPattern {
  IssuerSubjectPattern();
  ~IssuerSubjectPattern();

  // Populates a IssuerSubjectPattern object from a base::Value. Returns whether
  // |out| was successfully populated.
  static bool Populate(const base::Value& value, IssuerSubjectPattern* out);

  // Creates a IssuerSubjectPattern object from a base::Value, or NULL on
  // failure.
  static scoped_ptr<IssuerSubjectPattern> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this IssuerSubjectPattern object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  scoped_ptr<std::string> common_name;

  scoped_ptr<std::string> locality;

  scoped_ptr<std::string> organization;

  scoped_ptr<std::string> organizational_unit;


 private:
  DISALLOW_COPY_AND_ASSIGN(IssuerSubjectPattern);
};

struct ManagedIssuerSubjectPattern {
  ManagedIssuerSubjectPattern();
  ~ManagedIssuerSubjectPattern();

  // Populates a ManagedIssuerSubjectPattern object from a base::Value. Returns
  // whether |out| was successfully populated.
  static bool Populate(const base::Value& value, ManagedIssuerSubjectPattern* out);

  // Creates a ManagedIssuerSubjectPattern object from a base::Value, or NULL on
  // failure.
  static scoped_ptr<ManagedIssuerSubjectPattern> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this ManagedIssuerSubjectPattern object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  scoped_ptr<ManagedDOMString> common_name;

  scoped_ptr<ManagedDOMString> locality;

  scoped_ptr<ManagedDOMString> organization;

  scoped_ptr<ManagedDOMString> organizational_unit;


 private:
  DISALLOW_COPY_AND_ASSIGN(ManagedIssuerSubjectPattern);
};

struct CertificatePattern {
  CertificatePattern();
  ~CertificatePattern();

  // Populates a CertificatePattern object from a base::Value. Returns whether
  // |out| was successfully populated.
  static bool Populate(const base::Value& value, CertificatePattern* out);

  // Creates a CertificatePattern object from a base::Value, or NULL on failure.
  static scoped_ptr<CertificatePattern> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this CertificatePattern object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  scoped_ptr<std::vector<std::string> > enrollment_uri;

  scoped_ptr<IssuerSubjectPattern> issuer;

  scoped_ptr<std::vector<std::string> > issuer_ca_ref;

  scoped_ptr<IssuerSubjectPattern> subject;


 private:
  DISALLOW_COPY_AND_ASSIGN(CertificatePattern);
};

struct ManagedCertificatePattern {
  ManagedCertificatePattern();
  ~ManagedCertificatePattern();

  // Populates a ManagedCertificatePattern object from a base::Value. Returns
  // whether |out| was successfully populated.
  static bool Populate(const base::Value& value, ManagedCertificatePattern* out);

  // Creates a ManagedCertificatePattern object from a base::Value, or NULL on
  // failure.
  static scoped_ptr<ManagedCertificatePattern> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this ManagedCertificatePattern object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  scoped_ptr<ManagedDOMStringList> enrollment_uri;

  scoped_ptr<ManagedIssuerSubjectPattern> issuer;

  scoped_ptr<ManagedDOMStringList> issuer_ca_ref;

  scoped_ptr<ManagedIssuerSubjectPattern> subject;


 private:
  DISALLOW_COPY_AND_ASSIGN(ManagedCertificatePattern);
};

struct EAPProperties {
  EAPProperties();
  ~EAPProperties();

  // Populates a EAPProperties object from a base::Value. Returns whether |out|
  // was successfully populated.
  static bool Populate(const base::Value& value, EAPProperties* out);

  // Creates a EAPProperties object from a base::Value, or NULL on failure.
  static scoped_ptr<EAPProperties> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this EAPProperties object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  scoped_ptr<std::string> anonymous_identity;

  scoped_ptr<CertificatePattern> client_cert_pattern;

  scoped_ptr<std::string> client_cert_ref;

  scoped_ptr<std::string> client_cert_type;

  scoped_ptr<std::string> identity;

  scoped_ptr<std::string> inner;

  std::string outer;

  scoped_ptr<std::string> password;

  scoped_ptr<bool> save_credentials;

  scoped_ptr<std::vector<std::string> > server_ca_refs;

  scoped_ptr<bool> use_proactive_key_caching;

  scoped_ptr<bool> use_system_c_as;


 private:
  DISALLOW_COPY_AND_ASSIGN(EAPProperties);
};

struct ManagedEAPProperties {
  ManagedEAPProperties();
  ~ManagedEAPProperties();

  // Populates a ManagedEAPProperties object from a base::Value. Returns whether
  // |out| was successfully populated.
  static bool Populate(const base::Value& value, ManagedEAPProperties* out);

  // Creates a ManagedEAPProperties object from a base::Value, or NULL on
  // failure.
  static scoped_ptr<ManagedEAPProperties> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this ManagedEAPProperties object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  scoped_ptr<ManagedDOMString> anonymous_identity;

  scoped_ptr<ManagedCertificatePattern> client_cert_pattern;

  scoped_ptr<ManagedDOMString> client_cert_ref;

  scoped_ptr<ManagedDOMString> client_cert_type;

  scoped_ptr<ManagedDOMString> identity;

  scoped_ptr<ManagedDOMString> inner;

  ManagedDOMString outer;

  scoped_ptr<ManagedDOMString> password;

  scoped_ptr<ManagedBoolean> save_credentials;

  scoped_ptr<ManagedDOMStringList> server_ca_refs;

  scoped_ptr<ManagedBoolean> use_proactive_key_caching;

  scoped_ptr<ManagedBoolean> use_system_c_as;


 private:
  DISALLOW_COPY_AND_ASSIGN(ManagedEAPProperties);
};

struct FoundNetworkProperties {
  FoundNetworkProperties();
  ~FoundNetworkProperties();

  // Populates a FoundNetworkProperties object from a base::Value. Returns
  // whether |out| was successfully populated.
  static bool Populate(const base::Value& value, FoundNetworkProperties* out);

  // Creates a FoundNetworkProperties object from a base::Value, or NULL on
  // failure.
  static scoped_ptr<FoundNetworkProperties> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this FoundNetworkProperties object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  std::string status;

  std::string network_id;

  std::string technology;

  scoped_ptr<std::string> short_name;

  scoped_ptr<std::string> long_name;


 private:
  DISALLOW_COPY_AND_ASSIGN(FoundNetworkProperties);
};

struct IPConfigProperties {
  IPConfigProperties();
  ~IPConfigProperties();

  // Populates a IPConfigProperties object from a base::Value. Returns whether
  // |out| was successfully populated.
  static bool Populate(const base::Value& value, IPConfigProperties* out);

  // Creates a IPConfigProperties object from a base::Value, or NULL on failure.
  static scoped_ptr<IPConfigProperties> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this IPConfigProperties object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  scoped_ptr<std::string> gateway;

  scoped_ptr<std::string> ip_address;

  scoped_ptr<std::vector<std::string> > name_servers;

  scoped_ptr<int> routing_prefix;

  scoped_ptr<std::string> type;

  scoped_ptr<std::string> web_proxy_auto_discovery_url;


 private:
  DISALLOW_COPY_AND_ASSIGN(IPConfigProperties);
};

struct ManagedIPConfigProperties {
  ManagedIPConfigProperties();
  ~ManagedIPConfigProperties();

  // Populates a ManagedIPConfigProperties object from a base::Value. Returns
  // whether |out| was successfully populated.
  static bool Populate(const base::Value& value, ManagedIPConfigProperties* out);

  // Creates a ManagedIPConfigProperties object from a base::Value, or NULL on
  // failure.
  static scoped_ptr<ManagedIPConfigProperties> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this ManagedIPConfigProperties object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  scoped_ptr<ManagedDOMString> gateway;

  scoped_ptr<ManagedDOMString> ip_address;

  scoped_ptr<std::vector<linked_ptr<ManagedDOMString> > > name_servers;

  scoped_ptr<ManagedLong> routing_prefix;

  scoped_ptr<ManagedDOMString> type;

  scoped_ptr<ManagedDOMString> web_proxy_auto_discovery_url;


 private:
  DISALLOW_COPY_AND_ASSIGN(ManagedIPConfigProperties);
};

struct XAUTHProperties {
  XAUTHProperties();
  ~XAUTHProperties();

  // Populates a XAUTHProperties object from a base::Value. Returns whether
  // |out| was successfully populated.
  static bool Populate(const base::Value& value, XAUTHProperties* out);

  // Creates a XAUTHProperties object from a base::Value, or NULL on failure.
  static scoped_ptr<XAUTHProperties> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this XAUTHProperties object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  scoped_ptr<std::string> password;

  scoped_ptr<bool> save_credentials;

  scoped_ptr<std::string> username;


 private:
  DISALLOW_COPY_AND_ASSIGN(XAUTHProperties);
};

struct ManagedXAUTHProperties {
  ManagedXAUTHProperties();
  ~ManagedXAUTHProperties();

  // Populates a ManagedXAUTHProperties object from a base::Value. Returns
  // whether |out| was successfully populated.
  static bool Populate(const base::Value& value, ManagedXAUTHProperties* out);

  // Creates a ManagedXAUTHProperties object from a base::Value, or NULL on
  // failure.
  static scoped_ptr<ManagedXAUTHProperties> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this ManagedXAUTHProperties object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  scoped_ptr<ManagedDOMString> password;

  scoped_ptr<ManagedBoolean> save_credentials;

  scoped_ptr<ManagedDOMString> username;


 private:
  DISALLOW_COPY_AND_ASSIGN(ManagedXAUTHProperties);
};

struct IPSecProperties {
  IPSecProperties();
  ~IPSecProperties();

  // Populates a IPSecProperties object from a base::Value. Returns whether
  // |out| was successfully populated.
  static bool Populate(const base::Value& value, IPSecProperties* out);

  // Creates a IPSecProperties object from a base::Value, or NULL on failure.
  static scoped_ptr<IPSecProperties> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this IPSecProperties object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  std::string authentication_type;

  scoped_ptr<CertificatePattern> client_cert_pattern;

  scoped_ptr<std::string> client_cert_ref;

  scoped_ptr<std::string> client_cert_type;

  scoped_ptr<EAPProperties> eap;

  scoped_ptr<std::string> group;

  scoped_ptr<int> ike_version;

  scoped_ptr<std::string> psk;

  scoped_ptr<bool> save_credentials;

  scoped_ptr<std::vector<std::string> > server_ca_refs;

  scoped_ptr<XAUTHProperties> xauth;


 private:
  DISALLOW_COPY_AND_ASSIGN(IPSecProperties);
};

struct ManagedIPSecProperties {
  ManagedIPSecProperties();
  ~ManagedIPSecProperties();

  // Populates a ManagedIPSecProperties object from a base::Value. Returns
  // whether |out| was successfully populated.
  static bool Populate(const base::Value& value, ManagedIPSecProperties* out);

  // Creates a ManagedIPSecProperties object from a base::Value, or NULL on
  // failure.
  static scoped_ptr<ManagedIPSecProperties> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this ManagedIPSecProperties object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  ManagedDOMString authentication_type;

  scoped_ptr<ManagedCertificatePattern> client_cert_pattern;

  scoped_ptr<ManagedDOMString> client_cert_ref;

  scoped_ptr<ManagedDOMString> client_cert_type;

  scoped_ptr<ManagedEAPProperties> eap;

  scoped_ptr<ManagedDOMString> group;

  ManagedLong ike_version;

  scoped_ptr<ManagedDOMString> psk;

  scoped_ptr<ManagedBoolean> save_credentials;

  scoped_ptr<ManagedDOMStringList> server_ca_refs;

  scoped_ptr<ManagedXAUTHProperties> xauth;


 private:
  DISALLOW_COPY_AND_ASSIGN(ManagedIPSecProperties);
};

struct L2TPProperties {
  L2TPProperties();
  ~L2TPProperties();

  // Populates a L2TPProperties object from a base::Value. Returns whether |out|
  // was successfully populated.
  static bool Populate(const base::Value& value, L2TPProperties* out);

  // Creates a L2TPProperties object from a base::Value, or NULL on failure.
  static scoped_ptr<L2TPProperties> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this L2TPProperties object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  scoped_ptr<bool> lcp_echo_disabled;

  scoped_ptr<std::string> password;

  scoped_ptr<bool> save_credentials;

  scoped_ptr<std::string> username;


 private:
  DISALLOW_COPY_AND_ASSIGN(L2TPProperties);
};

struct ManagedL2TPProperties {
  ManagedL2TPProperties();
  ~ManagedL2TPProperties();

  // Populates a ManagedL2TPProperties object from a base::Value. Returns
  // whether |out| was successfully populated.
  static bool Populate(const base::Value& value, ManagedL2TPProperties* out);

  // Creates a ManagedL2TPProperties object from a base::Value, or NULL on
  // failure.
  static scoped_ptr<ManagedL2TPProperties> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this ManagedL2TPProperties object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  scoped_ptr<ManagedBoolean> lcp_echo_disabled;

  scoped_ptr<ManagedDOMString> password;

  scoped_ptr<ManagedBoolean> save_credentials;

  scoped_ptr<ManagedDOMString> username;


 private:
  DISALLOW_COPY_AND_ASSIGN(ManagedL2TPProperties);
};

struct PaymentPortal {
  PaymentPortal();
  ~PaymentPortal();

  // Populates a PaymentPortal object from a base::Value. Returns whether |out|
  // was successfully populated.
  static bool Populate(const base::Value& value, PaymentPortal* out);

  // Creates a PaymentPortal object from a base::Value, or NULL on failure.
  static scoped_ptr<PaymentPortal> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this PaymentPortal object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  std::string method;

  scoped_ptr<std::string> post_data;

  scoped_ptr<std::string> url;


 private:
  DISALLOW_COPY_AND_ASSIGN(PaymentPortal);
};

struct ProxyLocation {
  ProxyLocation();
  ~ProxyLocation();

  // Populates a ProxyLocation object from a base::Value. Returns whether |out|
  // was successfully populated.
  static bool Populate(const base::Value& value, ProxyLocation* out);

  // Creates a ProxyLocation object from a base::Value, or NULL on failure.
  static scoped_ptr<ProxyLocation> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this ProxyLocation object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  std::string host;

  int port;


 private:
  DISALLOW_COPY_AND_ASSIGN(ProxyLocation);
};

struct ManagedProxyLocation {
  ManagedProxyLocation();
  ~ManagedProxyLocation();

  // Populates a ManagedProxyLocation object from a base::Value. Returns whether
  // |out| was successfully populated.
  static bool Populate(const base::Value& value, ManagedProxyLocation* out);

  // Creates a ManagedProxyLocation object from a base::Value, or NULL on
  // failure.
  static scoped_ptr<ManagedProxyLocation> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this ManagedProxyLocation object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  ManagedDOMString host;

  ManagedLong port;


 private:
  DISALLOW_COPY_AND_ASSIGN(ManagedProxyLocation);
};

struct ManualProxySettings {
  ManualProxySettings();
  ~ManualProxySettings();

  // Populates a ManualProxySettings object from a base::Value. Returns whether
  // |out| was successfully populated.
  static bool Populate(const base::Value& value, ManualProxySettings* out);

  // Creates a ManualProxySettings object from a base::Value, or NULL on
  // failure.
  static scoped_ptr<ManualProxySettings> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this ManualProxySettings object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  scoped_ptr<ProxyLocation> http_proxy;

  scoped_ptr<ProxyLocation> secure_http_proxy;

  scoped_ptr<ProxyLocation> ftp_proxy;

  scoped_ptr<ProxyLocation> socks;


 private:
  DISALLOW_COPY_AND_ASSIGN(ManualProxySettings);
};

struct ManagedManualProxySettings {
  ManagedManualProxySettings();
  ~ManagedManualProxySettings();

  // Populates a ManagedManualProxySettings object from a base::Value. Returns
  // whether |out| was successfully populated.
  static bool Populate(const base::Value& value, ManagedManualProxySettings* out);

  // Creates a ManagedManualProxySettings object from a base::Value, or NULL on
  // failure.
  static scoped_ptr<ManagedManualProxySettings> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this ManagedManualProxySettings object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  scoped_ptr<ManagedProxyLocation> http_proxy;

  scoped_ptr<ManagedProxyLocation> secure_http_proxy;

  scoped_ptr<ManagedProxyLocation> ftp_proxy;

  scoped_ptr<ManagedProxyLocation> socks;


 private:
  DISALLOW_COPY_AND_ASSIGN(ManagedManualProxySettings);
};

struct ProxySettings {
  ProxySettings();
  ~ProxySettings();

  // Populates a ProxySettings object from a base::Value. Returns whether |out|
  // was successfully populated.
  static bool Populate(const base::Value& value, ProxySettings* out);

  // Creates a ProxySettings object from a base::Value, or NULL on failure.
  static scoped_ptr<ProxySettings> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this ProxySettings object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  ProxySettingsType type;

  scoped_ptr<ManualProxySettings> manual;

  scoped_ptr<std::vector<std::string> > exclude_domains;

  scoped_ptr<std::string> pac;


 private:
  DISALLOW_COPY_AND_ASSIGN(ProxySettings);
};

struct ManagedProxySettings {
  ManagedProxySettings();
  ~ManagedProxySettings();

  // Populates a ManagedProxySettings object from a base::Value. Returns whether
  // |out| was successfully populated.
  static bool Populate(const base::Value& value, ManagedProxySettings* out);

  // Creates a ManagedProxySettings object from a base::Value, or NULL on
  // failure.
  static scoped_ptr<ManagedProxySettings> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this ManagedProxySettings object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  ManagedProxySettingsType type;

  scoped_ptr<ManagedManualProxySettings> manual;

  scoped_ptr<ManagedDOMStringList> exclude_domains;

  scoped_ptr<ManagedDOMString> pac;


 private:
  DISALLOW_COPY_AND_ASSIGN(ManagedProxySettings);
};

struct VerifyX509 {
  VerifyX509();
  ~VerifyX509();

  // Populates a VerifyX509 object from a base::Value. Returns whether |out| was
  // successfully populated.
  static bool Populate(const base::Value& value, VerifyX509* out);

  // Creates a VerifyX509 object from a base::Value, or NULL on failure.
  static scoped_ptr<VerifyX509> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this VerifyX509 object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  scoped_ptr<std::string> name;

  scoped_ptr<std::string> type;


 private:
  DISALLOW_COPY_AND_ASSIGN(VerifyX509);
};

struct ManagedVerifyX509 {
  ManagedVerifyX509();
  ~ManagedVerifyX509();

  // Populates a ManagedVerifyX509 object from a base::Value. Returns whether
  // |out| was successfully populated.
  static bool Populate(const base::Value& value, ManagedVerifyX509* out);

  // Creates a ManagedVerifyX509 object from a base::Value, or NULL on failure.
  static scoped_ptr<ManagedVerifyX509> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this ManagedVerifyX509 object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  scoped_ptr<ManagedDOMString> name;

  scoped_ptr<ManagedDOMString> type;


 private:
  DISALLOW_COPY_AND_ASSIGN(ManagedVerifyX509);
};

struct OpenVPNProperties {
  OpenVPNProperties();
  ~OpenVPNProperties();

  // Populates a OpenVPNProperties object from a base::Value. Returns whether
  // |out| was successfully populated.
  static bool Populate(const base::Value& value, OpenVPNProperties* out);

  // Creates a OpenVPNProperties object from a base::Value, or NULL on failure.
  static scoped_ptr<OpenVPNProperties> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this OpenVPNProperties object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  scoped_ptr<std::string> auth;

  scoped_ptr<std::string> auth_retry;

  scoped_ptr<bool> auth_no_cache;

  scoped_ptr<std::string> cipher;

  scoped_ptr<std::string> client_cert_ref;

  scoped_ptr<CertificatePattern> client_cert_pattern;

  scoped_ptr<std::string> client_cert_type;

  scoped_ptr<std::string> comp_lzo;

  scoped_ptr<bool> comp_no_adapt;

  scoped_ptr<bool> ignore_default_route;

  scoped_ptr<std::string> key_direction;

  scoped_ptr<std::string> ns_cert_type;

  scoped_ptr<std::string> otp;

  scoped_ptr<std::string> password;

  scoped_ptr<int> port;

  scoped_ptr<std::string> proto;

  scoped_ptr<std::string> push_peer_info;

  scoped_ptr<std::string> remote_cert_eku;

  scoped_ptr<std::vector<std::string> > remote_cert_ku;

  scoped_ptr<std::string> remote_cert_tls;

  scoped_ptr<int> reneg_sec;

  scoped_ptr<bool> save_credentials;

  scoped_ptr<std::vector<std::string> > server_ca_refs;

  scoped_ptr<std::string> server_cert_ref;

  scoped_ptr<int> server_poll_timeout;

  scoped_ptr<int> shaper;

  scoped_ptr<std::string> static_challenge;

  scoped_ptr<std::string> tls_auth_contents;

  scoped_ptr<std::string> tls_remote;

  scoped_ptr<std::string> user_authentication_type;

  scoped_ptr<std::string> username;

  scoped_ptr<std::string> verb;

  scoped_ptr<std::string> verify_hash;

  scoped_ptr<VerifyX509> verify_x509;


 private:
  DISALLOW_COPY_AND_ASSIGN(OpenVPNProperties);
};

struct ManagedOpenVPNProperties {
  ManagedOpenVPNProperties();
  ~ManagedOpenVPNProperties();

  // Populates a ManagedOpenVPNProperties object from a base::Value. Returns
  // whether |out| was successfully populated.
  static bool Populate(const base::Value& value, ManagedOpenVPNProperties* out);

  // Creates a ManagedOpenVPNProperties object from a base::Value, or NULL on
  // failure.
  static scoped_ptr<ManagedOpenVPNProperties> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this ManagedOpenVPNProperties object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  scoped_ptr<ManagedDOMString> auth;

  scoped_ptr<ManagedDOMString> auth_retry;

  scoped_ptr<ManagedBoolean> auth_no_cache;

  scoped_ptr<ManagedDOMString> cipher;

  scoped_ptr<ManagedDOMString> client_cert_ref;

  scoped_ptr<ManagedCertificatePattern> client_cert_pattern;

  scoped_ptr<ManagedDOMString> client_cert_type;

  scoped_ptr<ManagedDOMString> comp_lzo;

  scoped_ptr<ManagedBoolean> comp_no_adapt;

  scoped_ptr<ManagedBoolean> ignore_default_route;

  scoped_ptr<ManagedDOMString> key_direction;

  scoped_ptr<ManagedDOMString> ns_cert_type;

  scoped_ptr<ManagedDOMString> otp;

  scoped_ptr<ManagedDOMString> password;

  scoped_ptr<ManagedLong> port;

  scoped_ptr<ManagedDOMString> proto;

  scoped_ptr<ManagedDOMString> push_peer_info;

  scoped_ptr<ManagedDOMString> remote_cert_eku;

  scoped_ptr<std::vector<linked_ptr<ManagedDOMString> > > remote_cert_ku;

  scoped_ptr<ManagedDOMString> remote_cert_tls;

  scoped_ptr<ManagedLong> reneg_sec;

  scoped_ptr<ManagedBoolean> save_credentials;

  scoped_ptr<std::vector<linked_ptr<ManagedDOMString> > > server_ca_refs;

  scoped_ptr<ManagedDOMString> server_cert_ref;

  scoped_ptr<ManagedLong> server_poll_timeout;

  scoped_ptr<ManagedLong> shaper;

  scoped_ptr<ManagedDOMString> static_challenge;

  scoped_ptr<ManagedDOMString> tls_auth_contents;

  scoped_ptr<ManagedDOMString> tls_remote;

  scoped_ptr<ManagedDOMString> user_authentication_type;

  scoped_ptr<ManagedDOMString> username;

  scoped_ptr<ManagedDOMString> verb;

  scoped_ptr<ManagedDOMString> verify_hash;

  scoped_ptr<ManagedVerifyX509> verify_x509;


 private:
  DISALLOW_COPY_AND_ASSIGN(ManagedOpenVPNProperties);
};

struct SIMLockStatus {
  SIMLockStatus();
  ~SIMLockStatus();

  // Populates a SIMLockStatus object from a base::Value. Returns whether |out|
  // was successfully populated.
  static bool Populate(const base::Value& value, SIMLockStatus* out);

  // Creates a SIMLockStatus object from a base::Value, or NULL on failure.
  static scoped_ptr<SIMLockStatus> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this SIMLockStatus object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  std::string lock_type;

  // sim-pin, sim-puk, or ''
  bool lock_enabled;

  scoped_ptr<int> retries_left;


 private:
  DISALLOW_COPY_AND_ASSIGN(SIMLockStatus);
};

struct ThirdPartyVPNProperties {
  ThirdPartyVPNProperties();
  ~ThirdPartyVPNProperties();

  // Populates a ThirdPartyVPNProperties object from a base::Value. Returns
  // whether |out| was successfully populated.
  static bool Populate(const base::Value& value, ThirdPartyVPNProperties* out);

  // Creates a ThirdPartyVPNProperties object from a base::Value, or NULL on
  // failure.
  static scoped_ptr<ThirdPartyVPNProperties> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this ThirdPartyVPNProperties object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  std::string extension_id;

  scoped_ptr<std::string> provider_name;


 private:
  DISALLOW_COPY_AND_ASSIGN(ThirdPartyVPNProperties);
};

struct ManagedThirdPartyVPNProperties {
  ManagedThirdPartyVPNProperties();
  ~ManagedThirdPartyVPNProperties();

  // Populates a ManagedThirdPartyVPNProperties object from a base::Value.
  // Returns whether |out| was successfully populated.
  static bool Populate(const base::Value& value, ManagedThirdPartyVPNProperties* out);

  // Creates a ManagedThirdPartyVPNProperties object from a base::Value, or NULL
  // on failure.
  static scoped_ptr<ManagedThirdPartyVPNProperties> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this ManagedThirdPartyVPNProperties object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  ManagedDOMString extension_id;

  scoped_ptr<std::string> provider_name;


 private:
  DISALLOW_COPY_AND_ASSIGN(ManagedThirdPartyVPNProperties);
};

struct CellularProperties {
  CellularProperties();
  ~CellularProperties();

  // Populates a CellularProperties object from a base::Value. Returns whether
  // |out| was successfully populated.
  static bool Populate(const base::Value& value, CellularProperties* out);

  // Creates a CellularProperties object from a base::Value, or NULL on failure.
  static scoped_ptr<CellularProperties> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this CellularProperties object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  scoped_ptr<bool> auto_connect;

  scoped_ptr<APNProperties> apn;

  scoped_ptr<std::vector<linked_ptr<APNProperties> > > apn_list;

  scoped_ptr<std::string> activation_type;

  ActivationStateType activation_state;

  scoped_ptr<bool> allow_roaming;

  scoped_ptr<std::string> carrier;

  scoped_ptr<std::string> esn;

  scoped_ptr<std::string> family;

  scoped_ptr<std::string> firmware_revision;

  scoped_ptr<std::vector<linked_ptr<FoundNetworkProperties> > > found_networks;

  scoped_ptr<std::string> hardware_revision;

  scoped_ptr<CellularProviderProperties> home_provider;

  scoped_ptr<std::string> iccid;

  scoped_ptr<std::string> imei;

  scoped_ptr<APNProperties> last_good_apn;

  scoped_ptr<std::string> manufacturer;

  scoped_ptr<std::string> mdn;

  scoped_ptr<std::string> meid;

  scoped_ptr<std::string> min;

  scoped_ptr<std::string> model_id;

  scoped_ptr<std::string> network_technology;

  scoped_ptr<PaymentPortal> payment_portal;

  scoped_ptr<int> prl_version;

  scoped_ptr<std::string> roaming_state;

  scoped_ptr<CellularProviderProperties> serving_operator;

  scoped_ptr<SIMLockStatus> sim_lock_status;

  scoped_ptr<bool> sim_present;

  scoped_ptr<bool> support_network_scan;

  scoped_ptr<std::vector<std::string> > supported_carriers;


 private:
  DISALLOW_COPY_AND_ASSIGN(CellularProperties);
};

struct ManagedCellularProperties {
  ManagedCellularProperties();
  ~ManagedCellularProperties();

  // Populates a ManagedCellularProperties object from a base::Value. Returns
  // whether |out| was successfully populated.
  static bool Populate(const base::Value& value, ManagedCellularProperties* out);

  // Creates a ManagedCellularProperties object from a base::Value, or NULL on
  // failure.
  static scoped_ptr<ManagedCellularProperties> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this ManagedCellularProperties object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  scoped_ptr<ManagedBoolean> auto_connect;

  scoped_ptr<ManagedAPNProperties> apn;

  scoped_ptr<ManagedAPNList> apn_list;

  scoped_ptr<std::string> activation_type;

  ActivationStateType activation_state;

  scoped_ptr<bool> allow_roaming;

  scoped_ptr<ManagedDOMString> carrier;

  scoped_ptr<std::string> esn;

  scoped_ptr<std::string> family;

  scoped_ptr<std::string> firmware_revision;

  scoped_ptr<std::vector<linked_ptr<FoundNetworkProperties> > > found_networks;

  scoped_ptr<std::string> hardware_revision;

  scoped_ptr<std::vector<linked_ptr<CellularProviderProperties> > > home_provider;

  scoped_ptr<std::string> iccid;

  scoped_ptr<std::string> imei;

  scoped_ptr<APNProperties> last_good_apn;

  scoped_ptr<std::string> manufacturer;

  scoped_ptr<std::string> mdn;

  scoped_ptr<std::string> meid;

  scoped_ptr<std::string> min;

  scoped_ptr<std::string> model_id;

  scoped_ptr<std::string> network_technology;

  scoped_ptr<PaymentPortal> payment_portal;

  scoped_ptr<int> prl_version;

  scoped_ptr<std::string> roaming_state;

  scoped_ptr<CellularProviderProperties> serving_operator;

  scoped_ptr<SIMLockStatus> sim_lock_status;

  scoped_ptr<bool> sim_present;

  scoped_ptr<bool> support_network_scan;

  scoped_ptr<std::vector<std::string> > supported_carriers;


 private:
  DISALLOW_COPY_AND_ASSIGN(ManagedCellularProperties);
};

struct CellularStateProperties {
  CellularStateProperties();
  ~CellularStateProperties();

  // Populates a CellularStateProperties object from a base::Value. Returns
  // whether |out| was successfully populated.
  static bool Populate(const base::Value& value, CellularStateProperties* out);

  // Creates a CellularStateProperties object from a base::Value, or NULL on
  // failure.
  static scoped_ptr<CellularStateProperties> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this CellularStateProperties object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  ActivationStateType activation_state;

  scoped_ptr<std::string> network_technology;

  scoped_ptr<std::string> roaming_state;

  scoped_ptr<bool> sim_present;

  scoped_ptr<int> signal_strength;


 private:
  DISALLOW_COPY_AND_ASSIGN(CellularStateProperties);
};

struct EthernetProperties {
  EthernetProperties();
  ~EthernetProperties();

  // Populates a EthernetProperties object from a base::Value. Returns whether
  // |out| was successfully populated.
  static bool Populate(const base::Value& value, EthernetProperties* out);

  // Creates a EthernetProperties object from a base::Value, or NULL on failure.
  static scoped_ptr<EthernetProperties> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this EthernetProperties object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  scoped_ptr<bool> auto_connect;

  scoped_ptr<std::string> authentication;

  scoped_ptr<EAPProperties> eap;


 private:
  DISALLOW_COPY_AND_ASSIGN(EthernetProperties);
};

struct ManagedEthernetProperties {
  ManagedEthernetProperties();
  ~ManagedEthernetProperties();

  // Populates a ManagedEthernetProperties object from a base::Value. Returns
  // whether |out| was successfully populated.
  static bool Populate(const base::Value& value, ManagedEthernetProperties* out);

  // Creates a ManagedEthernetProperties object from a base::Value, or NULL on
  // failure.
  static scoped_ptr<ManagedEthernetProperties> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this ManagedEthernetProperties object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  scoped_ptr<ManagedBoolean> auto_connect;

  scoped_ptr<ManagedDOMString> authentication;

  scoped_ptr<ManagedEAPProperties> eap;


 private:
  DISALLOW_COPY_AND_ASSIGN(ManagedEthernetProperties);
};

struct EthernetStateProperties {
  EthernetStateProperties();
  ~EthernetStateProperties();

  // Populates a EthernetStateProperties object from a base::Value. Returns
  // whether |out| was successfully populated.
  static bool Populate(const base::Value& value, EthernetStateProperties* out);

  // Creates a EthernetStateProperties object from a base::Value, or NULL on
  // failure.
  static scoped_ptr<EthernetStateProperties> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this EthernetStateProperties object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  std::string authentication;


 private:
  DISALLOW_COPY_AND_ASSIGN(EthernetStateProperties);
};

struct VPNProperties {
  VPNProperties();
  ~VPNProperties();

  // Populates a VPNProperties object from a base::Value. Returns whether |out|
  // was successfully populated.
  static bool Populate(const base::Value& value, VPNProperties* out);

  // Creates a VPNProperties object from a base::Value, or NULL on failure.
  static scoped_ptr<VPNProperties> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this VPNProperties object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  scoped_ptr<bool> auto_connect;

  scoped_ptr<std::string> host;

  scoped_ptr<IPSecProperties> i_psec;

  scoped_ptr<L2TPProperties> l2tp;

  scoped_ptr<OpenVPNProperties> open_vpn;

  scoped_ptr<ThirdPartyVPNProperties> third_party_vpn;

  scoped_ptr<std::string> type;


 private:
  DISALLOW_COPY_AND_ASSIGN(VPNProperties);
};

struct ManagedVPNProperties {
  ManagedVPNProperties();
  ~ManagedVPNProperties();

  // Populates a ManagedVPNProperties object from a base::Value. Returns whether
  // |out| was successfully populated.
  static bool Populate(const base::Value& value, ManagedVPNProperties* out);

  // Creates a ManagedVPNProperties object from a base::Value, or NULL on
  // failure.
  static scoped_ptr<ManagedVPNProperties> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this ManagedVPNProperties object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  scoped_ptr<ManagedBoolean> auto_connect;

  scoped_ptr<ManagedDOMString> host;

  scoped_ptr<ManagedIPSecProperties> i_psec;

  scoped_ptr<ManagedL2TPProperties> l2tp;

  scoped_ptr<ManagedOpenVPNProperties> open_vpn;

  scoped_ptr<ManagedThirdPartyVPNProperties> third_party_vpn;

  ManagedDOMString type;


 private:
  DISALLOW_COPY_AND_ASSIGN(ManagedVPNProperties);
};

struct VPNStateProperties {
  VPNStateProperties();
  ~VPNStateProperties();

  // Populates a VPNStateProperties object from a base::Value. Returns whether
  // |out| was successfully populated.
  static bool Populate(const base::Value& value, VPNStateProperties* out);

  // Creates a VPNStateProperties object from a base::Value, or NULL on failure.
  static scoped_ptr<VPNStateProperties> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this VPNStateProperties object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  std::string type;

  scoped_ptr<IPSecProperties> i_psec;

  scoped_ptr<ThirdPartyVPNProperties> third_party_vpn;


 private:
  DISALLOW_COPY_AND_ASSIGN(VPNStateProperties);
};

struct WiFiProperties {
  WiFiProperties();
  ~WiFiProperties();

  // Populates a WiFiProperties object from a base::Value. Returns whether |out|
  // was successfully populated.
  static bool Populate(const base::Value& value, WiFiProperties* out);

  // Creates a WiFiProperties object from a base::Value, or NULL on failure.
  static scoped_ptr<WiFiProperties> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this WiFiProperties object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  scoped_ptr<bool> allow_gateway_arp_polling;

  scoped_ptr<bool> auto_connect;

  scoped_ptr<std::string> bssid;

  scoped_ptr<EAPProperties> eap;

  scoped_ptr<int> frequency;

  scoped_ptr<std::vector<int> > frequency_list;

  scoped_ptr<std::string> hex_ssid;

  scoped_ptr<bool> hidden_ssid;

  scoped_ptr<std::string> passphrase;

  scoped_ptr<int> roam_threshold;

  scoped_ptr<std::string> ssid;

  scoped_ptr<std::string> security;

  scoped_ptr<int> signal_strength;


 private:
  DISALLOW_COPY_AND_ASSIGN(WiFiProperties);
};

struct ManagedWiFiProperties {
  ManagedWiFiProperties();
  ~ManagedWiFiProperties();

  // Populates a ManagedWiFiProperties object from a base::Value. Returns
  // whether |out| was successfully populated.
  static bool Populate(const base::Value& value, ManagedWiFiProperties* out);

  // Creates a ManagedWiFiProperties object from a base::Value, or NULL on
  // failure.
  static scoped_ptr<ManagedWiFiProperties> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this ManagedWiFiProperties object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  scoped_ptr<ManagedBoolean> allow_gateway_arp_polling;

  scoped_ptr<ManagedBoolean> auto_connect;

  scoped_ptr<std::string> bssid;

  scoped_ptr<ManagedEAPProperties> eap;

  scoped_ptr<int> frequency;

  scoped_ptr<std::vector<int> > frequency_list;

  scoped_ptr<ManagedDOMString> hex_ssid;

  scoped_ptr<ManagedBoolean> hidden_ssid;

  scoped_ptr<ManagedDOMString> passphrase;

  scoped_ptr<ManagedLong> roam_threshold;

  scoped_ptr<ManagedDOMString> ssid;

  ManagedDOMString security;

  scoped_ptr<int> signal_strength;


 private:
  DISALLOW_COPY_AND_ASSIGN(ManagedWiFiProperties);
};

struct WiFiStateProperties {
  WiFiStateProperties();
  ~WiFiStateProperties();

  // Populates a WiFiStateProperties object from a base::Value. Returns whether
  // |out| was successfully populated.
  static bool Populate(const base::Value& value, WiFiStateProperties* out);

  // Creates a WiFiStateProperties object from a base::Value, or NULL on
  // failure.
  static scoped_ptr<WiFiStateProperties> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this WiFiStateProperties object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  scoped_ptr<std::string> bssid;

  scoped_ptr<int> frequency;

  std::string security;

  scoped_ptr<int> signal_strength;


 private:
  DISALLOW_COPY_AND_ASSIGN(WiFiStateProperties);
};

struct WiMAXProperties {
  WiMAXProperties();
  ~WiMAXProperties();

  // Populates a WiMAXProperties object from a base::Value. Returns whether
  // |out| was successfully populated.
  static bool Populate(const base::Value& value, WiMAXProperties* out);

  // Creates a WiMAXProperties object from a base::Value, or NULL on failure.
  static scoped_ptr<WiMAXProperties> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this WiMAXProperties object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  scoped_ptr<bool> auto_connect;

  scoped_ptr<EAPProperties> eap;

  scoped_ptr<int> signal_strength;


 private:
  DISALLOW_COPY_AND_ASSIGN(WiMAXProperties);
};

struct ManagedWiMAXProperties {
  ManagedWiMAXProperties();
  ~ManagedWiMAXProperties();

  // Populates a ManagedWiMAXProperties object from a base::Value. Returns
  // whether |out| was successfully populated.
  static bool Populate(const base::Value& value, ManagedWiMAXProperties* out);

  // Creates a ManagedWiMAXProperties object from a base::Value, or NULL on
  // failure.
  static scoped_ptr<ManagedWiMAXProperties> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this ManagedWiMAXProperties object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  scoped_ptr<ManagedBoolean> auto_connect;

  scoped_ptr<ManagedEAPProperties> eap;

  scoped_ptr<int> signal_strength;


 private:
  DISALLOW_COPY_AND_ASSIGN(ManagedWiMAXProperties);
};

struct WiMAXStateProperties {
  WiMAXStateProperties();
  ~WiMAXStateProperties();

  // Populates a WiMAXStateProperties object from a base::Value. Returns whether
  // |out| was successfully populated.
  static bool Populate(const base::Value& value, WiMAXStateProperties* out);

  // Creates a WiMAXStateProperties object from a base::Value, or NULL on
  // failure.
  static scoped_ptr<WiMAXStateProperties> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this WiMAXStateProperties object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  scoped_ptr<int> signal_strength;


 private:
  DISALLOW_COPY_AND_ASSIGN(WiMAXStateProperties);
};

struct NetworkConfigProperties {
  NetworkConfigProperties();
  ~NetworkConfigProperties();

  // Populates a NetworkConfigProperties object from a base::Value. Returns
  // whether |out| was successfully populated.
  static bool Populate(const base::Value& value, NetworkConfigProperties* out);

  // Creates a NetworkConfigProperties object from a base::Value, or NULL on
  // failure.
  static scoped_ptr<NetworkConfigProperties> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this NetworkConfigProperties object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  scoped_ptr<CellularProperties> cellular;

  scoped_ptr<EthernetProperties> ethernet;

  scoped_ptr<std::string> guid;

  IPConfigType ip_address_config_type;

  scoped_ptr<std::string> name;

  IPConfigType name_servers_config_type;

  scoped_ptr<int> priority;

  scoped_ptr<ProxySettings> proxy_settings;

  scoped_ptr<IPConfigProperties> static_ip_config;

  NetworkType type;

  scoped_ptr<VPNProperties> vpn;

  scoped_ptr<WiFiProperties> wi_fi;

  scoped_ptr<WiMAXProperties> wi_max;


 private:
  DISALLOW_COPY_AND_ASSIGN(NetworkConfigProperties);
};

struct NetworkProperties {
  NetworkProperties();
  ~NetworkProperties();

  // Populates a NetworkProperties object from a base::Value. Returns whether
  // |out| was successfully populated.
  static bool Populate(const base::Value& value, NetworkProperties* out);

  // Creates a NetworkProperties object from a base::Value, or NULL on failure.
  static scoped_ptr<NetworkProperties> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this NetworkProperties object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  scoped_ptr<CellularProperties> cellular;

  scoped_ptr<bool> connectable;

  ConnectionStateType connection_state;

  scoped_ptr<std::string> error_state;

  scoped_ptr<EthernetProperties> ethernet;

  std::string guid;

  IPConfigType ip_address_config_type;

  scoped_ptr<std::vector<linked_ptr<IPConfigProperties> > > ip_configs;

  scoped_ptr<std::string> mac_address;

  scoped_ptr<std::string> name;

  IPConfigType name_servers_config_type;

  scoped_ptr<int> priority;

  scoped_ptr<ProxySettings> proxy_settings;

  scoped_ptr<bool> restricted_connectivity;

  scoped_ptr<IPConfigProperties> static_ip_config;

  scoped_ptr<IPConfigProperties> saved_ip_config;

  scoped_ptr<std::string> source;

  NetworkType type;

  scoped_ptr<VPNProperties> vpn;

  scoped_ptr<WiFiProperties> wi_fi;

  scoped_ptr<WiMAXProperties> wi_max;


 private:
  DISALLOW_COPY_AND_ASSIGN(NetworkProperties);
};

struct ManagedProperties {
  ManagedProperties();
  ~ManagedProperties();

  // Populates a ManagedProperties object from a base::Value. Returns whether
  // |out| was successfully populated.
  static bool Populate(const base::Value& value, ManagedProperties* out);

  // Creates a ManagedProperties object from a base::Value, or NULL on failure.
  static scoped_ptr<ManagedProperties> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this ManagedProperties object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  scoped_ptr<ManagedCellularProperties> cellular;

  scoped_ptr<bool> connectable;

  ConnectionStateType connection_state;

  scoped_ptr<std::string> error_state;

  scoped_ptr<ManagedEthernetProperties> ethernet;

  std::string guid;

  scoped_ptr<ManagedIPConfigType> ip_address_config_type;

  scoped_ptr<std::vector<linked_ptr<IPConfigProperties> > > ip_configs;

  scoped_ptr<std::string> mac_address;

  scoped_ptr<ManagedDOMString> name;

  scoped_ptr<ManagedIPConfigType> name_servers_config_type;

  scoped_ptr<ManagedLong> priority;

  scoped_ptr<ManagedProxySettings> proxy_settings;

  scoped_ptr<bool> restricted_connectivity;

  scoped_ptr<ManagedIPConfigProperties> static_ip_config;

  scoped_ptr<IPConfigProperties> saved_ip_config;

  scoped_ptr<std::string> source;

  NetworkType type;

  scoped_ptr<ManagedVPNProperties> vpn;

  scoped_ptr<ManagedWiFiProperties> wi_fi;

  scoped_ptr<ManagedWiMAXProperties> wi_max;


 private:
  DISALLOW_COPY_AND_ASSIGN(ManagedProperties);
};

struct NetworkStateProperties {
  NetworkStateProperties();
  ~NetworkStateProperties();

  // Populates a NetworkStateProperties object from a base::Value. Returns
  // whether |out| was successfully populated.
  static bool Populate(const base::Value& value, NetworkStateProperties* out);

  // Creates a NetworkStateProperties object from a base::Value, or NULL on
  // failure.
  static scoped_ptr<NetworkStateProperties> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this NetworkStateProperties object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  scoped_ptr<CellularStateProperties> cellular;

  scoped_ptr<bool> connectable;

  ConnectionStateType connection_state;

  scoped_ptr<EthernetStateProperties> ethernet;

  scoped_ptr<std::string> error_state;

  std::string guid;

  scoped_ptr<std::string> name;

  scoped_ptr<int> priority;

  scoped_ptr<std::string> source;

  NetworkType type;

  scoped_ptr<VPNStateProperties> vpn;

  scoped_ptr<WiFiStateProperties> wi_fi;

  scoped_ptr<WiMAXStateProperties> wi_max;


 private:
  DISALLOW_COPY_AND_ASSIGN(NetworkStateProperties);
};

struct DeviceStateProperties {
  DeviceStateProperties();
  ~DeviceStateProperties();

  // Populates a DeviceStateProperties object from a base::Value. Returns
  // whether |out| was successfully populated.
  static bool Populate(const base::Value& value, DeviceStateProperties* out);

  // Creates a DeviceStateProperties object from a base::Value, or NULL on
  // failure.
  static scoped_ptr<DeviceStateProperties> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this DeviceStateProperties object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // Set if the device is enabled. True if the device is currently scanning.
  scoped_ptr<bool> scanning;

  // Set to the SIM lock type if the device type is Cellular and the device is
  // locked.
  scoped_ptr<std::string> sim_lock_type;

  // Set to the SIM present state if the device type is Cellular.
  scoped_ptr<bool> sim_present;

  // The current state of the device.
  DeviceStateType state;

  // The network type associated with the device (Cellular, Ethernet, WiFi, or
  // WiMAX).
  NetworkType type;


 private:
  DISALLOW_COPY_AND_ASSIGN(DeviceStateProperties);
};

struct VerificationProperties {
  VerificationProperties();
  ~VerificationProperties();

  // Populates a VerificationProperties object from a base::Value. Returns
  // whether |out| was successfully populated.
  static bool Populate(const base::Value& value, VerificationProperties* out);

  // Creates a VerificationProperties object from a base::Value, or NULL on
  // failure.
  static scoped_ptr<VerificationProperties> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this VerificationProperties object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // A string containing a PEM-encoded (including the 'BEGIN CERTIFICATE' header
  // and 'END CERTIFICATE' footer) X.509 certificate for use in verifying the
  // signed data.
  std::string certificate;

  // An array of PEM-encoded X.509 intermediate certificate authority
  // certificates. Each PEM-encoded certificate is expected to have the 'BEGIN
  // CERTIFICATE' header and 'END CERTIFICATE' footer.
  scoped_ptr<std::vector<std::string> > intermediate_certificates;

  // A string containing a base64-encoded RSAPublicKey ASN.1 structure,
  // representing the public key to be used by $(ref:verifyAndEncryptCredentials)
  // and $(ref:verifyAndEncryptData) methods.
  std::string public_key;

  // A string containing a base64-encoded random binary data for use in verifying
  // the signed data.
  std::string nonce;

  // A string containing the identifying data string signed by the device.
  std::string signed_data;

  // A string containing the serial number of the device.
  std::string device_serial;

  // A string containing the SSID of the device. Should be empty for new
  // configurations.
  std::string device_ssid;

  // A string containing the BSSID of the device. Should be empty for new
  // configurations.
  std::string device_bssid;


 private:
  DISALLOW_COPY_AND_ASSIGN(VerificationProperties);
};

struct NetworkFilter {
  NetworkFilter();
  ~NetworkFilter();

  // Populates a NetworkFilter object from a base::Value. Returns whether |out|
  // was successfully populated.
  static bool Populate(const base::Value& value, NetworkFilter* out);

  // Creates a NetworkFilter object from a base::Value, or NULL on failure.
  static scoped_ptr<NetworkFilter> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this NetworkFilter object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // The type of networks to return.
  NetworkType network_type;

  // If true, only include visible (physically connected or in-range) networks.
  // Defaults to 'false'.
  scoped_ptr<bool> visible;

  // If true, only include configured (saved) networks. Defaults to 'false'.
  scoped_ptr<bool> configured;

  // Maximum number of networks to return. Defaults to 1000 if unspecified. Use 0
  // for no limit.
  scoped_ptr<int> limit;


 private:
  DISALLOW_COPY_AND_ASSIGN(NetworkFilter);
};


//
// Functions
//

namespace GetProperties {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // The GUID of the network to get properties for.
  std::string network_guid;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create(const NetworkProperties& result);
}  // namespace Results

}  // namespace GetProperties

namespace GetManagedProperties {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // The GUID of the network to get properties for.
  std::string network_guid;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create(const ManagedProperties& result);
}  // namespace Results

}  // namespace GetManagedProperties

namespace GetState {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // The GUID of the network to get properties for.
  std::string network_guid;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create(const NetworkStateProperties& result);
}  // namespace Results

}  // namespace GetState

namespace SetProperties {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // The GUID of the network to set properties for.
  std::string network_guid;

  // The properties to set.
  NetworkConfigProperties properties;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create();
}  // namespace Results

}  // namespace SetProperties

namespace CreateNetwork {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // If true, share this network configuration with other users.
  bool shared;

  // The properties to configure the new network with.
  NetworkConfigProperties properties;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create(const std::string& result);
}  // namespace Results

}  // namespace CreateNetwork

namespace ForgetNetwork {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // The GUID of the network to forget.
  std::string network_guid;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create();
}  // namespace Results

}  // namespace ForgetNetwork

namespace GetNetworks {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // Describes which networks to return.
  NetworkFilter filter;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create(const std::vector<linked_ptr<NetworkStateProperties> >& result);
}  // namespace Results

}  // namespace GetNetworks

namespace GetVisibleNetworks {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  NetworkType network_type;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create(const std::vector<linked_ptr<NetworkStateProperties> >& result);
}  // namespace Results

}  // namespace GetVisibleNetworks

namespace GetEnabledNetworkTypes {

namespace Results {

scoped_ptr<base::ListValue> Create(const std::vector<NetworkType>& result);
}  // namespace Results

}  // namespace GetEnabledNetworkTypes

namespace GetDeviceStates {

namespace Results {

scoped_ptr<base::ListValue> Create(const std::vector<linked_ptr<DeviceStateProperties> >& result);
}  // namespace Results

}  // namespace GetDeviceStates

namespace EnableNetworkType {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // The type of network to enable.
  NetworkType network_type;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

}  // namespace EnableNetworkType

namespace DisableNetworkType {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // The type of network to disable.
  NetworkType network_type;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

}  // namespace DisableNetworkType

namespace RequestNetworkScan {

}  // namespace RequestNetworkScan

namespace StartConnect {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // The GUID of the network to connect to.
  std::string network_guid;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create();
}  // namespace Results

}  // namespace StartConnect

namespace StartDisconnect {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // The GUID of the network to disconnect from.
  std::string network_guid;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create();
}  // namespace Results

}  // namespace StartDisconnect

namespace StartActivate {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // The GUID of the Cellular network to activate.
  std::string network_guid;

  // Optional name of carrier to activate.
  scoped_ptr<std::string> carrier;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create();
}  // namespace Results

}  // namespace StartActivate

namespace VerifyDestination {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // Properties of the destination to use in verifying that it     is a trusted
  // device.
  VerificationProperties properties;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create(bool result);
}  // namespace Results

}  // namespace VerifyDestination

namespace VerifyAndEncryptCredentials {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // Properties of the destination to use in verifying that it     is a trusted
  // device.
  VerificationProperties properties;

  // The GUID of the Cellular network to activate.
  std::string network_guid;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create(const std::string& result);
}  // namespace Results

}  // namespace VerifyAndEncryptCredentials

namespace VerifyAndEncryptData {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // Properties of the destination to use in verifying that it     is a trusted
  // device.
  VerificationProperties properties;

  // A string containing the base64-encoded data to encrypt.
  std::string data;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create(const std::string& result);
}  // namespace Results

}  // namespace VerifyAndEncryptData

namespace SetWifiTDLSEnabledState {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // The IP or MAC address of the peer with which to     enable a TDLS connection.
  // |enabled| If true, enable TDLS, otherwise disable TDLS.
  std::string ip_or_mac_address;

  bool enabled;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create(const std::string& result);
}  // namespace Results

}  // namespace SetWifiTDLSEnabledState

namespace GetWifiTDLSStatus {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // The IP or MAC address of the peer.
  std::string ip_or_mac_address;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create(const std::string& result);
}  // namespace Results

}  // namespace GetWifiTDLSStatus

namespace GetCaptivePortalStatus {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // The GUID of the network to get captive portal status for.
  std::string network_guid;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create(const CaptivePortalStatus& result);
}  // namespace Results

}  // namespace GetCaptivePortalStatus

namespace UnlockCellularSim {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // The GUID of the cellular network to unlock.
  std::string network_guid;

  // The current SIM PIN, or the new PIN if PUK is provided.
  std::string pin;

  // The operator provided PUK for unblocking a blocked SIM.
  scoped_ptr<std::string> puk;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create();
}  // namespace Results

}  // namespace UnlockCellularSim

namespace SetCellularSimState {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // The GUID of the cellular network to set the SIM state of.
  std::string network_guid;

  // The SIM state to set.
  CellularSimState sim_state;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create();
}  // namespace Results

}  // namespace SetCellularSimState

//
// Events
//

namespace OnNetworksChanged {

extern const char kEventName[];  // "networkingPrivate.onNetworksChanged"

scoped_ptr<base::ListValue> Create(const std::vector<std::string>& changes);
}  // namespace OnNetworksChanged

namespace OnNetworkListChanged {

extern const char kEventName[];  // "networkingPrivate.onNetworkListChanged"

scoped_ptr<base::ListValue> Create(const std::vector<std::string>& changes);
}  // namespace OnNetworkListChanged

namespace OnDeviceStateListChanged {

extern const char kEventName[];  // "networkingPrivate.onDeviceStateListChanged"

scoped_ptr<base::ListValue> Create();
}  // namespace OnDeviceStateListChanged

namespace OnPortalDetectionCompleted {

extern const char kEventName[];  // "networkingPrivate.onPortalDetectionCompleted"

scoped_ptr<base::ListValue> Create(const std::string& network_guid, const CaptivePortalStatus& status);
}  // namespace OnPortalDetectionCompleted

}  // namespace networking_private
}  // namespace api
}  // namespace extensions
#endif  // EXTENSIONS_COMMON_API_NETWORKING_PRIVATE_H__

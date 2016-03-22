// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/extensions_manifest_types.json
// DO NOT EDIT.

#ifndef EXTENSIONS_COMMON_API_EXTENSIONS_MANIFEST_TYPES_H__
#define EXTENSIONS_COMMON_API_EXTENSIONS_MANIFEST_TYPES_H__

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
namespace extensions_manifest_types {

//
// Types
//

// The <code>content_capabilities</code> manifest entry allows an extension to
// grant certain additional capabilities to web contents whose locations match a
// given set of URL patterns.
struct ContentCapabilities {
  ContentCapabilities();
  ~ContentCapabilities();

  // Populates a ContentCapabilities object from a base::Value. Returns whether
  // |out| was successfully populated.
  static bool Populate(const base::Value& value, ContentCapabilities* out, base::string16* error);

  // Creates a ContentCapabilities object from a base::Value, or NULL on
  // failure.
  static scoped_ptr<ContentCapabilities> FromValue(const base::Value& value, base::string16* error);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this ContentCapabilities object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // The set of URL patterns to match against. If any of the given patterns match
  // a URL, its contents will be granted the specified capabilities.
  std::vector<std::string> matches;

  // The set of capabilities to grant matched contents. This is currently limited
  // to <code>clipboardRead</code>, <code>clipboardWrite</code>, and
  // <code>unlimitedStorage</code>.
  std::vector<std::string> permissions;


 private:
  DISALLOW_COPY_AND_ASSIGN(ContentCapabilities);
};

struct ExternallyConnectable {
  ExternallyConnectable();
  ~ExternallyConnectable();

  // Populates a ExternallyConnectable object from a base::Value. Returns
  // whether |out| was successfully populated.
  static bool Populate(const base::Value& value, ExternallyConnectable* out, base::string16* error);

  // Creates a ExternallyConnectable object from a base::Value, or NULL on
  // failure.
  static scoped_ptr<ExternallyConnectable> FromValue(const base::Value& value, base::string16* error);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this ExternallyConnectable object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // <p>The IDs of extensions or apps that are allowed to connect. If left empty
  // or unspecified, no extensions or apps can connect.</p><p>The wildcard
  // <code>"*"</code> will allow all extensions and apps to connect.</p>
  scoped_ptr<std::vector<std::string> > ids;

  // <p>The URL patterns for <em>web pages</em> that are allowed to connect.
  // <em>This does not affect content scripts.</em> If left empty or unspecified,
  // no web pages can connect.</p><p>Patterns cannot include wildcard domains nor
  // subdomains of <a href="http://publicsuffix.org/list/">(effective) top level
  // domains</a>; <code>*://google.com/*</code> and
  // <code>http://*.chromium.org/*</code> are valid, while
  // <code>&lt;all_urls&gt;</code>, <code>http://*/*</code>,
  // <code>*://*.com/*</code>, and even <code>http://*.appspot.com/*</code> are
  // not.</p>
  scoped_ptr<std::vector<std::string> > matches;

  // If <code>true</code>, messages sent via $(ref:runtime.connect) or
  // $(ref:runtime.sendMessage) will set $(ref:runtime.MessageSender.tlsChannelId)
  // if those methods request it to be. If <code>false</code>,
  // $(ref:runtime.MessageSender.tlsChannelId) will never be set under any
  // circumstance.
  scoped_ptr<bool> accepts_tls_channel_id;


 private:
  DISALLOW_COPY_AND_ASSIGN(ExternallyConnectable);
};

// The <code>options_ui</code> manifest property declares how the options page
// should be displayed.
struct OptionsUI {
  OptionsUI();
  ~OptionsUI();

  // Populates a OptionsUI object from a base::Value. Returns whether |out| was
  // successfully populated.
  static bool Populate(const base::Value& value, OptionsUI* out, base::string16* error);

  // Creates a OptionsUI object from a base::Value, or NULL on failure.
  static scoped_ptr<OptionsUI> FromValue(const base::Value& value, base::string16* error);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this OptionsUI object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // The path to your options page, relative to your extension's root.
  std::string page;

  // If <code>true</code>, a Chrome user agent stylesheet will be applied to your
  // options page. The default value is <code>false</code>, but we recommend you
  // enable it for a consistent UI with Chrome.
  scoped_ptr<bool> chrome_style;

  // <p>If <code>true</code>, your extension's options page will be opened in a
  // new tab rather than embedded in <em>chrome://extensions</em>. The default is
  // <code>false</code>, and we recommend that you don't change
  // it.</p><p><strong>This is only useful to delay the inevitable deprecation of
  // the old options UI!</strong> It will be removed soon, so try not to use it.
  // It will break.</p>
  scoped_ptr<bool> open_in_tab;


 private:
  DISALLOW_COPY_AND_ASSIGN(OptionsUI);
};

// <p>A single string or a list of strings representing host:port patterns.</p>
struct SocketHostPatterns {
  SocketHostPatterns();
  ~SocketHostPatterns();

  // Populates a SocketHostPatterns object from a base::Value. Returns whether
  // |out| was successfully populated.
  static bool Populate(const base::Value& value, SocketHostPatterns* out, base::string16* error);

  // Creates a SocketHostPatterns object from a base::Value, or NULL on failure.
  static scoped_ptr<SocketHostPatterns> FromValue(const base::Value& value, base::string16* error);

  // Returns a new base::Value representing the serialized form of this
  // SocketHostPatterns object.
  scoped_ptr<base::Value> ToValue() const;
  // Choices:
  scoped_ptr<std::string> as_string;
  scoped_ptr<std::vector<std::string> > as_strings;

 private:
  DISALLOW_COPY_AND_ASSIGN(SocketHostPatterns);
};

// The <code>sockets</code> manifest property declares which sockets operations
// an app can issue.
struct Sockets {
  Sockets();
  ~Sockets();

  // Populates a Sockets object from a base::Value. Returns whether |out| was
  // successfully populated.
  static bool Populate(const base::Value& value, Sockets* out, base::string16* error);

  // Creates a Sockets object from a base::Value, or NULL on failure.
  static scoped_ptr<Sockets> FromValue(const base::Value& value, base::string16* error);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this Sockets object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // The <code>udp</code> manifest property declares which sockets.udp operations
  // an app can issue.
  struct Udp {
    Udp();
    ~Udp();

    // Populates a Udp object from a base::Value. Returns whether |out| was
    // successfully populated.
    static bool Populate(const base::Value& value, Udp* out, base::string16* error);

    // Returns a new base::DictionaryValue representing the serialized form of
    // this Udp object.
    scoped_ptr<base::DictionaryValue> ToValue() const;

    // <p>The host:port pattern for <code>bind</code> operations.</p>
    scoped_ptr<SocketHostPatterns> bind;

    // <p>The host:port pattern for <code>send</code> operations.</p>
    scoped_ptr<SocketHostPatterns> send;

    // <p>The host:port pattern for <code>joinGroup</code> operations.</p>
    scoped_ptr<SocketHostPatterns> multicast_membership;


   private:
    DISALLOW_COPY_AND_ASSIGN(Udp);
  };

  // The <code>tcp</code> manifest property declares which sockets.tcp operations
  // an app can issue.
  struct Tcp {
    Tcp();
    ~Tcp();

    // Populates a Tcp object from a base::Value. Returns whether |out| was
    // successfully populated.
    static bool Populate(const base::Value& value, Tcp* out, base::string16* error);

    // Returns a new base::DictionaryValue representing the serialized form of
    // this Tcp object.
    scoped_ptr<base::DictionaryValue> ToValue() const;

    // <p>The host:port pattern for <code>connect</code> operations.</p>
    scoped_ptr<SocketHostPatterns> connect;


   private:
    DISALLOW_COPY_AND_ASSIGN(Tcp);
  };

  // The <code>tcpServer</code> manifest property declares which sockets.tcpServer
  // operations an app can issue.
  struct TcpServer {
    TcpServer();
    ~TcpServer();

    // Populates a TcpServer object from a base::Value. Returns whether |out| was
    // successfully populated.
    static bool Populate(const base::Value& value, TcpServer* out, base::string16* error);

    // Returns a new base::DictionaryValue representing the serialized form of
    // this TcpServer object.
    scoped_ptr<base::DictionaryValue> ToValue() const;

    // <p>The host:port pattern for <code>listen</code> operations.</p>
    scoped_ptr<SocketHostPatterns> listen;


   private:
    DISALLOW_COPY_AND_ASSIGN(TcpServer);
  };


  // The <code>udp</code> manifest property declares which sockets.udp operations
  // an app can issue.
  scoped_ptr<Udp> udp;

  // The <code>tcp</code> manifest property declares which sockets.tcp operations
  // an app can issue.
  scoped_ptr<Tcp> tcp;

  // The <code>tcpServer</code> manifest property declares which sockets.tcpServer
  // operations an app can issue.
  scoped_ptr<TcpServer> tcp_server;


 private:
  DISALLOW_COPY_AND_ASSIGN(Sockets);
};

// The <code>bluetooth</code> manifest property give permission to an app to use
// the $(ref:bluetooth) API. A list of UUIDs can be optionally specified to
// enable communication with devices.
struct Bluetooth {
  Bluetooth();
  ~Bluetooth();

  // Populates a Bluetooth object from a base::Value. Returns whether |out| was
  // successfully populated.
  static bool Populate(const base::Value& value, Bluetooth* out, base::string16* error);

  // Creates a Bluetooth object from a base::Value, or NULL on failure.
  static scoped_ptr<Bluetooth> FromValue(const base::Value& value, base::string16* error);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this Bluetooth object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // The <code>uuids</code> manifest property declares the list of protocols,
  // profiles and services that an app can communicate using.
  scoped_ptr<std::vector<std::string> > uuids;

  // If <code>true</code>, gives permission to an app to use the
  // $(ref:bluetoothSocket) API
  scoped_ptr<bool> socket;

  // If <code>true</code>, gives permission to an app to use the
  // $(ref:bluetoothLowEnergy) API
  scoped_ptr<bool> low_energy;

  // If <code>true</code>, gives permission to an app to use the advertisement
  // functions in the $(ref:bluetoothLowEnergy) API
  scoped_ptr<bool> peripheral;


 private:
  DISALLOW_COPY_AND_ASSIGN(Bluetooth);
};

// The <code>usb_printers</code> manifest property lists the USB printers
// supported by an app implementing the $(ref:printerProvider) API.
struct UsbPrinters {
  UsbPrinters();
  ~UsbPrinters();

  // Populates a UsbPrinters object from a base::Value. Returns whether |out|
  // was successfully populated.
  static bool Populate(const base::Value& value, UsbPrinters* out, base::string16* error);

  // Creates a UsbPrinters object from a base::Value, or NULL on failure.
  static scoped_ptr<UsbPrinters> FromValue(const base::Value& value, base::string16* error);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this UsbPrinters object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  struct FiltersType {
    FiltersType();
    ~FiltersType();

    // Populates a FiltersType object from a base::Value. Returns whether |out|
    // was successfully populated.
    static bool Populate(const base::Value& value, FiltersType* out, base::string16* error);

    // Returns a new base::DictionaryValue representing the serialized form of
    // this FiltersType object.
    scoped_ptr<base::DictionaryValue> ToValue() const;

    // USB vendor ID of matching devices
    int vendor_id;

    // USB product ID of matching devices
    scoped_ptr<int> product_id;

    // USB interface class implemented by any interface of a matching device.
    scoped_ptr<int> interface_class;

    // USB interface sub-class implemented by the interface matching
    // $(ref:interfaceClass).
    scoped_ptr<int> interface_subclass;

    // USB interface protocol implemented by the interface matching
    // $(ref:interfaceClass) and $(ref:interfaceSubclass).
    scoped_ptr<int> interface_protocol;


   private:
    DISALLOW_COPY_AND_ASSIGN(FiltersType);
  };



  // A list of $(ref:usb.DeviceFilter USB device filters) matching supported
  // devices. A device only needs to match one of the provided filters. A
  // <code>vendorId</code> is required and only one of <code>productId</code> or
  // <code>interfaceClass</code> may be provided.
  std::vector<linked_ptr<FiltersType> > filters;


 private:
  DISALLOW_COPY_AND_ASSIGN(UsbPrinters);
};

// The <code>kiosk_secondary_apps</code> manifest property lists the secondary
// kiosk apps to be deployed by the primary kiosk app.
struct KioskSecondaryAppsType {
  KioskSecondaryAppsType();
  ~KioskSecondaryAppsType();

  // Populates a KioskSecondaryAppsType object from a base::Value. Returns
  // whether |out| was successfully populated.
  static bool Populate(const base::Value& value, KioskSecondaryAppsType* out, base::string16* error);

  // Creates a KioskSecondaryAppsType object from a base::Value, or NULL on
  // failure.
  static scoped_ptr<KioskSecondaryAppsType> FromValue(const base::Value& value, base::string16* error);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this KioskSecondaryAppsType object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // ID of secondary kiosk app
  std::string id;


 private:
  DISALLOW_COPY_AND_ASSIGN(KioskSecondaryAppsType);
};

typedef std::vector<KioskSecondaryAppsType > KioskSecondaryApps;


}  // namespace extensions_manifest_types
}  // namespace api
}  // namespace extensions
#endif  // EXTENSIONS_COMMON_API_EXTENSIONS_MANIFEST_TYPES_H__

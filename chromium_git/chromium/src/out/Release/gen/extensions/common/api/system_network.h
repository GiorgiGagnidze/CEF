// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/system_network.idl
// DO NOT EDIT.

#ifndef EXTENSIONS_COMMON_API_SYSTEM_NETWORK_H__
#define EXTENSIONS_COMMON_API_SYSTEM_NETWORK_H__

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
namespace system_network {

//
// Types
//

struct NetworkInterface {
  NetworkInterface();
  ~NetworkInterface();

  // Populates a NetworkInterface object from a base::Value. Returns whether
  // |out| was successfully populated.
  static bool Populate(const base::Value& value, NetworkInterface* out);

  // Creates a NetworkInterface object from a base::Value, or NULL on failure.
  static scoped_ptr<NetworkInterface> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this NetworkInterface object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // The underlying name of the adapter. On *nix, this will typically be "eth0",
  // "wlan0", etc.
  std::string name;

  // The available IPv4/6 address.
  std::string address;

  // The prefix length
  int prefix_length;


 private:
  DISALLOW_COPY_AND_ASSIGN(NetworkInterface);
};


//
// Functions
//

namespace GetNetworkInterfaces {

namespace Results {

// Array of object containing network interfaces information.
scoped_ptr<base::ListValue> Create(const std::vector<linked_ptr<NetworkInterface> >& network_interfaces);
}  // namespace Results

}  // namespace GetNetworkInterfaces

}  // namespace system_network
}  // namespace api
}  // namespace extensions
#endif  // EXTENSIONS_COMMON_API_SYSTEM_NETWORK_H__

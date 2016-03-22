// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/system_network.idl
// DO NOT EDIT.

#include "tools/json_schema_compiler/util.h"
#include "base/logging.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/utf_string_conversions.h"
#include "extensions/common/api/system_network.h"
#include <set>
#include <utility>

using base::UTF8ToUTF16;

namespace extensions {
namespace api {
namespace system_network {
//
// Types
//

NetworkInterface::NetworkInterface()
: prefix_length(0) {}

NetworkInterface::~NetworkInterface() {}

// static
bool NetworkInterface::Populate(
    const base::Value& value, NetworkInterface* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* name_value = NULL;
  if (!dict->GetWithoutPathExpansion("name", &name_value)) {
    return false;
  }
  {
    if (!name_value->GetAsString(&out->name)) {
      return false;
    }
  }

  const base::Value* address_value = NULL;
  if (!dict->GetWithoutPathExpansion("address", &address_value)) {
    return false;
  }
  {
    if (!address_value->GetAsString(&out->address)) {
      return false;
    }
  }

  const base::Value* prefix_length_value = NULL;
  if (!dict->GetWithoutPathExpansion("prefixLength", &prefix_length_value)) {
    return false;
  }
  {
    if (!prefix_length_value->GetAsInteger(&out->prefix_length)) {
      return false;
    }
  }

  return true;
}

// static
scoped_ptr<NetworkInterface> NetworkInterface::FromValue(const base::Value& value) {
  scoped_ptr<NetworkInterface> out(new NetworkInterface());
  if (!Populate(value, out.get()))
    return scoped_ptr<NetworkInterface>();
  return out;
}

scoped_ptr<base::DictionaryValue> NetworkInterface::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("name", new base::StringValue(this->name));

  value->SetWithoutPathExpansion("address", new base::StringValue(this->address));

  value->SetWithoutPathExpansion("prefixLength", new base::FundamentalValue(this->prefix_length));


  return value;
}



//
// Functions
//

namespace GetNetworkInterfaces {

scoped_ptr<base::ListValue> Results::Create(const std::vector<linked_ptr<NetworkInterface> >& network_interfaces) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(json_schema_compiler::util::CreateValueFromArray(network_interfaces).release());

  return create_results;
}
}  // namespace GetNetworkInterfaces

}  // namespace system_network
}  // namespace api
}  // namespace extensions


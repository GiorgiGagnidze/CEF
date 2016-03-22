// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/system_memory.idl
// DO NOT EDIT.

#include "tools/json_schema_compiler/util.h"
#include "base/logging.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/utf_string_conversions.h"
#include "extensions/common/api/system_memory.h"
#include <set>
#include <utility>

using base::UTF8ToUTF16;

namespace extensions {
namespace api {
namespace system_memory {
//
// Types
//

MemoryInfo::MemoryInfo()
: capacity(0.0), available_capacity(0.0) {}

MemoryInfo::~MemoryInfo() {}

// static
bool MemoryInfo::Populate(
    const base::Value& value, MemoryInfo* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* capacity_value = NULL;
  if (!dict->GetWithoutPathExpansion("capacity", &capacity_value)) {
    return false;
  }
  {
    if (!capacity_value->GetAsDouble(&out->capacity)) {
      return false;
    }
  }

  const base::Value* available_capacity_value = NULL;
  if (!dict->GetWithoutPathExpansion("availableCapacity", &available_capacity_value)) {
    return false;
  }
  {
    if (!available_capacity_value->GetAsDouble(&out->available_capacity)) {
      return false;
    }
  }

  return true;
}

// static
scoped_ptr<MemoryInfo> MemoryInfo::FromValue(const base::Value& value) {
  scoped_ptr<MemoryInfo> out(new MemoryInfo());
  if (!Populate(value, out.get()))
    return scoped_ptr<MemoryInfo>();
  return out;
}

scoped_ptr<base::DictionaryValue> MemoryInfo::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("capacity", new base::FundamentalValue(this->capacity));

  value->SetWithoutPathExpansion("availableCapacity", new base::FundamentalValue(this->available_capacity));


  return value;
}



//
// Functions
//

namespace GetInfo {

scoped_ptr<base::ListValue> Results::Create(const MemoryInfo& info) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((info).ToValue().release());

  return create_results;
}
}  // namespace GetInfo

}  // namespace system_memory
}  // namespace api
}  // namespace extensions


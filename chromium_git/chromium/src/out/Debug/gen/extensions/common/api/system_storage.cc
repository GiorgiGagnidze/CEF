// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/system_storage.idl
// DO NOT EDIT.

#include "tools/json_schema_compiler/util.h"
#include "base/logging.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/utf_string_conversions.h"
#include "extensions/common/api/system_storage.h"
#include <set>
#include <utility>

using base::UTF8ToUTF16;

namespace extensions {
namespace api {
namespace system_storage {
//
// Types
//

std::string ToString(StorageUnitType enum_param) {
  switch (enum_param) {
    case STORAGE_UNIT_TYPE_FIXED:
      return "fixed";
    case STORAGE_UNIT_TYPE_REMOVABLE:
      return "removable";
    case STORAGE_UNIT_TYPE_UNKNOWN:
      return "unknown";
    case STORAGE_UNIT_TYPE_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

StorageUnitType ParseStorageUnitType(const std::string& enum_string) {
  if (enum_string == "fixed")
    return STORAGE_UNIT_TYPE_FIXED;
  if (enum_string == "removable")
    return STORAGE_UNIT_TYPE_REMOVABLE;
  if (enum_string == "unknown")
    return STORAGE_UNIT_TYPE_UNKNOWN;
  return STORAGE_UNIT_TYPE_NONE;
}


StorageUnitInfo::StorageUnitInfo()
: type(STORAGE_UNIT_TYPE_NONE), capacity(0.0) {}

StorageUnitInfo::~StorageUnitInfo() {}

// static
bool StorageUnitInfo::Populate(
    const base::Value& value, StorageUnitInfo* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* id_value = NULL;
  if (!dict->GetWithoutPathExpansion("id", &id_value)) {
    return false;
  }
  {
    if (!id_value->GetAsString(&out->id)) {
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

  const base::Value* type_value = NULL;
  if (!dict->GetWithoutPathExpansion("type", &type_value)) {
    return false;
  }
  {
    std::string storage_unit_type_as_string;
    if (!type_value->GetAsString(&storage_unit_type_as_string)) {
      return false;
    }
    out->type = ParseStorageUnitType(storage_unit_type_as_string);
    if (out->type == STORAGE_UNIT_TYPE_NONE) {
      return false;
    }
  }

  const base::Value* capacity_value = NULL;
  if (!dict->GetWithoutPathExpansion("capacity", &capacity_value)) {
    return false;
  }
  {
    if (!capacity_value->GetAsDouble(&out->capacity)) {
      return false;
    }
  }

  return true;
}

// static
scoped_ptr<StorageUnitInfo> StorageUnitInfo::FromValue(const base::Value& value) {
  scoped_ptr<StorageUnitInfo> out(new StorageUnitInfo());
  if (!Populate(value, out.get()))
    return scoped_ptr<StorageUnitInfo>();
  return out;
}

scoped_ptr<base::DictionaryValue> StorageUnitInfo::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("id", new base::StringValue(this->id));

  value->SetWithoutPathExpansion("name", new base::StringValue(this->name));

  value->SetWithoutPathExpansion("type", new base::StringValue(system_storage::ToString(this->type)));

  value->SetWithoutPathExpansion("capacity", new base::FundamentalValue(this->capacity));


  return value;
}


StorageAvailableCapacityInfo::StorageAvailableCapacityInfo()
: available_capacity(0.0) {}

StorageAvailableCapacityInfo::~StorageAvailableCapacityInfo() {}

// static
bool StorageAvailableCapacityInfo::Populate(
    const base::Value& value, StorageAvailableCapacityInfo* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* id_value = NULL;
  if (!dict->GetWithoutPathExpansion("id", &id_value)) {
    return false;
  }
  {
    if (!id_value->GetAsString(&out->id)) {
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
scoped_ptr<StorageAvailableCapacityInfo> StorageAvailableCapacityInfo::FromValue(const base::Value& value) {
  scoped_ptr<StorageAvailableCapacityInfo> out(new StorageAvailableCapacityInfo());
  if (!Populate(value, out.get()))
    return scoped_ptr<StorageAvailableCapacityInfo>();
  return out;
}

scoped_ptr<base::DictionaryValue> StorageAvailableCapacityInfo::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("id", new base::StringValue(this->id));

  value->SetWithoutPathExpansion("availableCapacity", new base::FundamentalValue(this->available_capacity));


  return value;
}


std::string ToString(EjectDeviceResultCode enum_param) {
  switch (enum_param) {
    case EJECT_DEVICE_RESULT_CODE_SUCCESS:
      return "success";
    case EJECT_DEVICE_RESULT_CODE_IN_USE:
      return "in_use";
    case EJECT_DEVICE_RESULT_CODE_NO_SUCH_DEVICE:
      return "no_such_device";
    case EJECT_DEVICE_RESULT_CODE_FAILURE:
      return "failure";
    case EJECT_DEVICE_RESULT_CODE_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

EjectDeviceResultCode ParseEjectDeviceResultCode(const std::string& enum_string) {
  if (enum_string == "success")
    return EJECT_DEVICE_RESULT_CODE_SUCCESS;
  if (enum_string == "in_use")
    return EJECT_DEVICE_RESULT_CODE_IN_USE;
  if (enum_string == "no_such_device")
    return EJECT_DEVICE_RESULT_CODE_NO_SUCH_DEVICE;
  if (enum_string == "failure")
    return EJECT_DEVICE_RESULT_CODE_FAILURE;
  return EJECT_DEVICE_RESULT_CODE_NONE;
}



//
// Functions
//

namespace GetInfo {

scoped_ptr<base::ListValue> Results::Create(const std::vector<linked_ptr<StorageUnitInfo> >& info) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(json_schema_compiler::util::CreateValueFromArray(info).release());

  return create_results;
}
}  // namespace GetInfo

namespace EjectDevice {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* id_value = NULL;
  if (args.Get(0, &id_value) &&
      !id_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!id_value->GetAsString(&params->id)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(const EjectDeviceResultCode& result) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(new base::StringValue(system_storage::ToString(result)));

  return create_results;
}
}  // namespace EjectDevice

namespace GetAvailableCapacity {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* id_value = NULL;
  if (args.Get(0, &id_value) &&
      !id_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!id_value->GetAsString(&params->id)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(const StorageAvailableCapacityInfo& info) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((info).ToValue().release());

  return create_results;
}
}  // namespace GetAvailableCapacity

//
// Events
//

namespace OnAttached {

const char kEventName[] = "system.storage.onAttached";

scoped_ptr<base::ListValue> Create(const StorageUnitInfo& info) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((info).ToValue().release());

  return create_results;
}

}  // namespace OnAttached

namespace OnDetached {

const char kEventName[] = "system.storage.onDetached";

scoped_ptr<base::ListValue> Create(const std::string& id) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(new base::StringValue(id));

  return create_results;
}

}  // namespace OnDetached

}  // namespace system_storage
}  // namespace api
}  // namespace extensions


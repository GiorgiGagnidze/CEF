// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/system_cpu.idl
// DO NOT EDIT.

#include "tools/json_schema_compiler/util.h"
#include "base/logging.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/utf_string_conversions.h"
#include "extensions/common/api/system_cpu.h"
#include <set>
#include <utility>

using base::UTF8ToUTF16;

namespace extensions {
namespace api {
namespace system_cpu {
//
// Types
//

CpuTime::CpuTime()
: user(0.0), kernel(0.0), idle(0.0), total(0.0) {}

CpuTime::~CpuTime() {}

// static
bool CpuTime::Populate(
    const base::Value& value, CpuTime* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* user_value = NULL;
  if (!dict->GetWithoutPathExpansion("user", &user_value)) {
    return false;
  }
  {
    if (!user_value->GetAsDouble(&out->user)) {
      return false;
    }
  }

  const base::Value* kernel_value = NULL;
  if (!dict->GetWithoutPathExpansion("kernel", &kernel_value)) {
    return false;
  }
  {
    if (!kernel_value->GetAsDouble(&out->kernel)) {
      return false;
    }
  }

  const base::Value* idle_value = NULL;
  if (!dict->GetWithoutPathExpansion("idle", &idle_value)) {
    return false;
  }
  {
    if (!idle_value->GetAsDouble(&out->idle)) {
      return false;
    }
  }

  const base::Value* total_value = NULL;
  if (!dict->GetWithoutPathExpansion("total", &total_value)) {
    return false;
  }
  {
    if (!total_value->GetAsDouble(&out->total)) {
      return false;
    }
  }

  return true;
}

// static
scoped_ptr<CpuTime> CpuTime::FromValue(const base::Value& value) {
  scoped_ptr<CpuTime> out(new CpuTime());
  if (!Populate(value, out.get()))
    return scoped_ptr<CpuTime>();
  return out;
}

scoped_ptr<base::DictionaryValue> CpuTime::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("user", new base::FundamentalValue(this->user));

  value->SetWithoutPathExpansion("kernel", new base::FundamentalValue(this->kernel));

  value->SetWithoutPathExpansion("idle", new base::FundamentalValue(this->idle));

  value->SetWithoutPathExpansion("total", new base::FundamentalValue(this->total));


  return value;
}


ProcessorInfo::ProcessorInfo()
 {}

ProcessorInfo::~ProcessorInfo() {}

// static
bool ProcessorInfo::Populate(
    const base::Value& value, ProcessorInfo* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* usage_value = NULL;
  if (!dict->GetWithoutPathExpansion("usage", &usage_value)) {
    return false;
  }
  {
    const base::DictionaryValue* dictionary = NULL;
    if (!usage_value->GetAsDictionary(&dictionary)) {
      return false;
    }
    if (!CpuTime::Populate(*dictionary, &out->usage)) {
      return false;
    }
  }

  return true;
}

// static
scoped_ptr<ProcessorInfo> ProcessorInfo::FromValue(const base::Value& value) {
  scoped_ptr<ProcessorInfo> out(new ProcessorInfo());
  if (!Populate(value, out.get()))
    return scoped_ptr<ProcessorInfo>();
  return out;
}

scoped_ptr<base::DictionaryValue> ProcessorInfo::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("usage", (this->usage).ToValue().release());


  return value;
}


CpuInfo::CpuInfo()
: num_of_processors(0) {}

CpuInfo::~CpuInfo() {}

// static
bool CpuInfo::Populate(
    const base::Value& value, CpuInfo* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* num_of_processors_value = NULL;
  if (!dict->GetWithoutPathExpansion("numOfProcessors", &num_of_processors_value)) {
    return false;
  }
  {
    if (!num_of_processors_value->GetAsInteger(&out->num_of_processors)) {
      return false;
    }
  }

  const base::Value* arch_name_value = NULL;
  if (!dict->GetWithoutPathExpansion("archName", &arch_name_value)) {
    return false;
  }
  {
    if (!arch_name_value->GetAsString(&out->arch_name)) {
      return false;
    }
  }

  const base::Value* model_name_value = NULL;
  if (!dict->GetWithoutPathExpansion("modelName", &model_name_value)) {
    return false;
  }
  {
    if (!model_name_value->GetAsString(&out->model_name)) {
      return false;
    }
  }

  const base::Value* features_value = NULL;
  if (!dict->GetWithoutPathExpansion("features", &features_value)) {
    return false;
  }
  {
    const base::ListValue* list = NULL;
    if (!features_value->GetAsList(&list)) {
      return false;
    }
    else {
      if (!json_schema_compiler::util::PopulateArrayFromList(*list, &out->features)) {
        return false;
      }
    }
  }

  const base::Value* processors_value = NULL;
  if (!dict->GetWithoutPathExpansion("processors", &processors_value)) {
    return false;
  }
  {
    const base::ListValue* list = NULL;
    if (!processors_value->GetAsList(&list)) {
      return false;
    }
    else {
      if (!json_schema_compiler::util::PopulateArrayFromList(*list, &out->processors)) {
        return false;
      }
    }
  }

  return true;
}

// static
scoped_ptr<CpuInfo> CpuInfo::FromValue(const base::Value& value) {
  scoped_ptr<CpuInfo> out(new CpuInfo());
  if (!Populate(value, out.get()))
    return scoped_ptr<CpuInfo>();
  return out;
}

scoped_ptr<base::DictionaryValue> CpuInfo::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("numOfProcessors", new base::FundamentalValue(this->num_of_processors));

  value->SetWithoutPathExpansion("archName", new base::StringValue(this->arch_name));

  value->SetWithoutPathExpansion("modelName", new base::StringValue(this->model_name));

  value->SetWithoutPathExpansion("features", json_schema_compiler::util::CreateValueFromArray(this->features).release());

  value->SetWithoutPathExpansion("processors", json_schema_compiler::util::CreateValueFromArray(this->processors).release());


  return value;
}



//
// Functions
//

namespace GetInfo {

scoped_ptr<base::ListValue> Results::Create(const CpuInfo& info) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((info).ToValue().release());

  return create_results;
}
}  // namespace GetInfo

}  // namespace system_cpu
}  // namespace api
}  // namespace extensions


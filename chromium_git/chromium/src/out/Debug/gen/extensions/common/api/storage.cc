// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/storage.json
// DO NOT EDIT.

#include "tools/json_schema_compiler/util.h"
#include "base/logging.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/utf_string_conversions.h"
#include "extensions/common/api/storage.h"
#include <set>
#include <utility>

using base::UTF8ToUTF16;

namespace extensions {
namespace api {
namespace storage {
//
// Properties
//

namespace sync {
  const int QUOTA_BYTES = 102400;
  const int QUOTA_BYTES_PER_ITEM = 8192;
  const int MAX_ITEMS = 512;
  const int MAX_WRITE_OPERATIONS_PER_HOUR = 1800;
  const int MAX_WRITE_OPERATIONS_PER_MINUTE = 120;
  const int MAX_SUSTAINED_WRITE_OPERATIONS_PER_MINUTE = 1000000;
}  // namespace sync

namespace local {
  const int QUOTA_BYTES = 5242880;
}  // namespace local

//
// Types
//

StorageChange::StorageChange()
 {}

StorageChange::~StorageChange() {}

// static
bool StorageChange::Populate(
    const base::Value& value, StorageChange* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* old_value_value = NULL;
  if (dict->GetWithoutPathExpansion("oldValue", &old_value_value)) {
    {
      out->old_value.reset(old_value_value->DeepCopy());
    }
  }

  const base::Value* new_value_value = NULL;
  if (dict->GetWithoutPathExpansion("newValue", &new_value_value)) {
    {
      out->new_value.reset(new_value_value->DeepCopy());
    }
  }

  return true;
}

// static
scoped_ptr<StorageChange> StorageChange::FromValue(const base::Value& value) {
  scoped_ptr<StorageChange> out(new StorageChange());
  if (!Populate(value, out.get()))
    return scoped_ptr<StorageChange>();
  return out;
}

scoped_ptr<base::DictionaryValue> StorageChange::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->old_value.get()) {
    value->SetWithoutPathExpansion("oldValue", (this->old_value)->DeepCopy());

  }
  if (this->new_value.get()) {
    value->SetWithoutPathExpansion("newValue", (this->new_value)->DeepCopy());

  }

  return value;
}


namespace StorageArea {

namespace Get {

Params::Keys::Object::Object()
 {}

Params::Keys::Object::~Object() {}

// static
bool Params::Keys::Object::Populate(
    const base::Value& value, Object* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  out->additional_properties.MergeDictionary(dict);
  return true;
}



Params::Keys::Keys()
 {}

Params::Keys::~Keys() {}

// static
bool Params::Keys::Populate(
    const base::Value& value, Keys* out) {
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
  if (value.IsType(base::Value::TYPE_DICTIONARY)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!(&value)->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<Object> temp(new Object());
        if (!Object::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->as_object = std::move(temp);
      }
    }
    return true;
  }
  return false;
}


Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() > 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* keys_value = NULL;
  if (args.Get(0, &keys_value) &&
      !keys_value->IsType(base::Value::TYPE_NULL)) {
    {
      scoped_ptr<Keys> temp(new Keys());
      if (!Keys::Populate(*keys_value, temp.get()))
        return scoped_ptr<Params>();
      params->keys = std::move(temp);
    }
  }

  return params;
}


Results::Items::Items()
 {}

Results::Items::~Items() {}

scoped_ptr<base::DictionaryValue> Results::Items::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->MergeDictionary(&additional_properties);

  return value;
}


scoped_ptr<base::ListValue> Results::Create(const Items& items) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((items).ToValue().release());

  return create_results;
}
}  // namespace Get

namespace GetBytesInUse {

Params::Keys::Keys()
 {}

Params::Keys::~Keys() {}

// static
bool Params::Keys::Populate(
    const base::Value& value, Keys* out) {
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


Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() > 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* keys_value = NULL;
  if (args.Get(0, &keys_value) &&
      !keys_value->IsType(base::Value::TYPE_NULL)) {
    {
      scoped_ptr<Keys> temp(new Keys());
      if (!Keys::Populate(*keys_value, temp.get()))
        return scoped_ptr<Params>();
      params->keys = std::move(temp);
    }
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(int bytes_in_use) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(new base::FundamentalValue(bytes_in_use));

  return create_results;
}
}  // namespace GetBytesInUse

namespace Set {

Params::Items::Items()
 {}

Params::Items::~Items() {}

// static
bool Params::Items::Populate(
    const base::Value& value, Items* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  out->additional_properties.MergeDictionary(dict);
  return true;
}


Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* items_value = NULL;
  if (args.Get(0, &items_value) &&
      !items_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!items_value->GetAsDictionary(&dictionary)) {
        return scoped_ptr<Params>();
      }
      if (!Items::Populate(*dictionary, &params->items)) {
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
}  // namespace Set

namespace Remove {

Params::Keys::Keys()
 {}

Params::Keys::~Keys() {}

// static
bool Params::Keys::Populate(
    const base::Value& value, Keys* out) {
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


Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* keys_value = NULL;
  if (args.Get(0, &keys_value) &&
      !keys_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!Keys::Populate(*keys_value, &params->keys))
        return scoped_ptr<Params>();
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
}  // namespace Remove

namespace Clear {

scoped_ptr<base::ListValue> Results::Create() {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}
}  // namespace Clear

}  // namespace StorageArea


//
// Events
//

namespace OnChanged {

const char kEventName[] = "storage.onChanged";

Changes::Changes()
 {}

Changes::~Changes() {}

scoped_ptr<base::DictionaryValue> Changes::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  for (const auto& it : additional_properties) {
    value->SetWithoutPathExpansion(it.first, (*it.second).ToValue().release());

  }

  return value;
}


scoped_ptr<base::ListValue> Create(const Changes& changes, const std::string& area_name) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((changes).ToValue().release());

  create_results->Append(new base::StringValue(area_name));

  return create_results;
}

}  // namespace OnChanged

}  // namespace storage
}  // namespace api
}  // namespace extensions


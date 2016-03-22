// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/guest_view_internal.json
// DO NOT EDIT.

#include "tools/json_schema_compiler/util.h"
#include "base/logging.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/utf_string_conversions.h"
#include "extensions/common/api/guest_view_internal.h"
#include <set>
#include <utility>

using base::UTF8ToUTF16;

namespace extensions {
namespace api {
namespace guest_view_internal {
//
// Types
//

Size::Size()
: width(0), height(0) {}

Size::~Size() {}

// static
bool Size::Populate(
    const base::Value& value, Size* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* width_value = NULL;
  if (!dict->GetWithoutPathExpansion("width", &width_value)) {
    return false;
  }
  {
    if (!width_value->GetAsInteger(&out->width)) {
      return false;
    }
  }

  const base::Value* height_value = NULL;
  if (!dict->GetWithoutPathExpansion("height", &height_value)) {
    return false;
  }
  {
    if (!height_value->GetAsInteger(&out->height)) {
      return false;
    }
  }

  return true;
}

// static
scoped_ptr<Size> Size::FromValue(const base::Value& value) {
  scoped_ptr<Size> out(new Size());
  if (!Populate(value, out.get()))
    return scoped_ptr<Size>();
  return out;
}

scoped_ptr<base::DictionaryValue> Size::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("width", new base::FundamentalValue(this->width));

  value->SetWithoutPathExpansion("height", new base::FundamentalValue(this->height));


  return value;
}


SizeParams::SizeParams()
 {}

SizeParams::~SizeParams() {}

// static
bool SizeParams::Populate(
    const base::Value& value, SizeParams* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* enable_auto_size_value = NULL;
  if (dict->GetWithoutPathExpansion("enableAutoSize", &enable_auto_size_value)) {
    {
      bool temp;
      if (!enable_auto_size_value->GetAsBoolean(&temp)) {
        out->enable_auto_size.reset();
        return false;
      }
      else
        out->enable_auto_size.reset(new bool(temp));
    }
  }

  const base::Value* min_value = NULL;
  if (dict->GetWithoutPathExpansion("min", &min_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!min_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<Size> temp(new Size());
        if (!Size::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->min = std::move(temp);
      }
    }
  }

  const base::Value* max_value = NULL;
  if (dict->GetWithoutPathExpansion("max", &max_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!max_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<Size> temp(new Size());
        if (!Size::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->max = std::move(temp);
      }
    }
  }

  const base::Value* normal_value = NULL;
  if (dict->GetWithoutPathExpansion("normal", &normal_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!normal_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<Size> temp(new Size());
        if (!Size::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->normal = std::move(temp);
      }
    }
  }

  return true;
}

// static
scoped_ptr<SizeParams> SizeParams::FromValue(const base::Value& value) {
  scoped_ptr<SizeParams> out(new SizeParams());
  if (!Populate(value, out.get()))
    return scoped_ptr<SizeParams>();
  return out;
}

scoped_ptr<base::DictionaryValue> SizeParams::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->enable_auto_size.get()) {
    value->SetWithoutPathExpansion("enableAutoSize", new base::FundamentalValue(*this->enable_auto_size));

  }
  if (this->min.get()) {
    value->SetWithoutPathExpansion("min", (this->min)->ToValue().release());

  }
  if (this->max.get()) {
    value->SetWithoutPathExpansion("max", (this->max)->ToValue().release());

  }
  if (this->normal.get()) {
    value->SetWithoutPathExpansion("normal", (this->normal)->ToValue().release());

  }

  return value;
}



//
// Functions
//

namespace CreateGuest {

Params::CreateParams::CreateParams()
 {}

Params::CreateParams::~CreateParams() {}

// static
bool Params::CreateParams::Populate(
    const base::Value& value, CreateParams* out) {
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
  if (args.GetSize() != 2) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* view_type_value = NULL;
  if (args.Get(0, &view_type_value) &&
      !view_type_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!view_type_value->GetAsString(&params->view_type)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* create_params_value = NULL;
  if (args.Get(1, &create_params_value) &&
      !create_params_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!create_params_value->GetAsDictionary(&dictionary)) {
        return scoped_ptr<Params>();
      }
      if (!CreateParams::Populate(*dictionary, &params->create_params)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


Results::ReturnParams::ReturnParams()
 {}

Results::ReturnParams::~ReturnParams() {}

scoped_ptr<base::DictionaryValue> Results::ReturnParams::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->MergeDictionary(&additional_properties);

  return value;
}


scoped_ptr<base::ListValue> Results::Create(const ReturnParams& return_params) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((return_params).ToValue().release());

  return create_results;
}
}  // namespace CreateGuest

namespace DestroyGuest {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* instance_id_value = NULL;
  if (args.Get(0, &instance_id_value) &&
      !instance_id_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!instance_id_value->GetAsInteger(&params->instance_id)) {
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
}  // namespace DestroyGuest

namespace SetSize {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 2) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* instance_id_value = NULL;
  if (args.Get(0, &instance_id_value) &&
      !instance_id_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!instance_id_value->GetAsInteger(&params->instance_id)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* params_value = NULL;
  if (args.Get(1, &params_value) &&
      !params_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!params_value->GetAsDictionary(&dictionary)) {
        return scoped_ptr<Params>();
      }
      if (!SizeParams::Populate(*dictionary, &params->params)) {
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
}  // namespace SetSize

}  // namespace guest_view_internal
}  // namespace api
}  // namespace extensions


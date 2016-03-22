// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/extension_options_internal.idl
// DO NOT EDIT.

#include "tools/json_schema_compiler/util.h"
#include "base/logging.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/utf_string_conversions.h"
#include "extensions/common/api/extension_options_internal.h"
#include <set>
#include <utility>

using base::UTF8ToUTF16;

namespace extensions {
namespace api {
namespace extension_options_internal {
//
// Types
//

SizeChangedOptions::SizeChangedOptions()
: old_width(0), old_height(0), new_width(0), new_height(0) {}

SizeChangedOptions::~SizeChangedOptions() {}

// static
bool SizeChangedOptions::Populate(
    const base::Value& value, SizeChangedOptions* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* old_width_value = NULL;
  if (!dict->GetWithoutPathExpansion("oldWidth", &old_width_value)) {
    return false;
  }
  {
    if (!old_width_value->GetAsInteger(&out->old_width)) {
      return false;
    }
  }

  const base::Value* old_height_value = NULL;
  if (!dict->GetWithoutPathExpansion("oldHeight", &old_height_value)) {
    return false;
  }
  {
    if (!old_height_value->GetAsInteger(&out->old_height)) {
      return false;
    }
  }

  const base::Value* new_width_value = NULL;
  if (!dict->GetWithoutPathExpansion("newWidth", &new_width_value)) {
    return false;
  }
  {
    if (!new_width_value->GetAsInteger(&out->new_width)) {
      return false;
    }
  }

  const base::Value* new_height_value = NULL;
  if (!dict->GetWithoutPathExpansion("newHeight", &new_height_value)) {
    return false;
  }
  {
    if (!new_height_value->GetAsInteger(&out->new_height)) {
      return false;
    }
  }

  return true;
}

// static
scoped_ptr<SizeChangedOptions> SizeChangedOptions::FromValue(const base::Value& value) {
  scoped_ptr<SizeChangedOptions> out(new SizeChangedOptions());
  if (!Populate(value, out.get()))
    return scoped_ptr<SizeChangedOptions>();
  return out;
}

scoped_ptr<base::DictionaryValue> SizeChangedOptions::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("oldWidth", new base::FundamentalValue(this->old_width));

  value->SetWithoutPathExpansion("oldHeight", new base::FundamentalValue(this->old_height));

  value->SetWithoutPathExpansion("newWidth", new base::FundamentalValue(this->new_width));

  value->SetWithoutPathExpansion("newHeight", new base::FundamentalValue(this->new_height));


  return value;
}


PreferredSizeChangedOptions::PreferredSizeChangedOptions()
: width(0.0), height(0.0) {}

PreferredSizeChangedOptions::~PreferredSizeChangedOptions() {}

// static
bool PreferredSizeChangedOptions::Populate(
    const base::Value& value, PreferredSizeChangedOptions* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* width_value = NULL;
  if (!dict->GetWithoutPathExpansion("width", &width_value)) {
    return false;
  }
  {
    if (!width_value->GetAsDouble(&out->width)) {
      return false;
    }
  }

  const base::Value* height_value = NULL;
  if (!dict->GetWithoutPathExpansion("height", &height_value)) {
    return false;
  }
  {
    if (!height_value->GetAsDouble(&out->height)) {
      return false;
    }
  }

  return true;
}

// static
scoped_ptr<PreferredSizeChangedOptions> PreferredSizeChangedOptions::FromValue(const base::Value& value) {
  scoped_ptr<PreferredSizeChangedOptions> out(new PreferredSizeChangedOptions());
  if (!Populate(value, out.get()))
    return scoped_ptr<PreferredSizeChangedOptions>();
  return out;
}

scoped_ptr<base::DictionaryValue> PreferredSizeChangedOptions::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("width", new base::FundamentalValue(this->width));

  value->SetWithoutPathExpansion("height", new base::FundamentalValue(this->height));


  return value;
}



//
// Events
//

namespace OnClose {

const char kEventName[] = "extensionOptionsInternal.onClose";

scoped_ptr<base::ListValue> Create() {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}

}  // namespace OnClose

namespace OnLoad {

const char kEventName[] = "extensionOptionsInternal.onLoad";

scoped_ptr<base::ListValue> Create() {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}

}  // namespace OnLoad

namespace OnPreferredSizeChanged {

const char kEventName[] = "extensionOptionsInternal.onPreferredSizeChanged";

scoped_ptr<base::ListValue> Create(const PreferredSizeChangedOptions& options) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((options).ToValue().release());

  return create_results;
}

}  // namespace OnPreferredSizeChanged

}  // namespace extension_options_internal
}  // namespace api
}  // namespace extensions


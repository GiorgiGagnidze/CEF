// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/document_scan.idl
// DO NOT EDIT.

#include "tools/json_schema_compiler/util.h"
#include "base/logging.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/utf_string_conversions.h"
#include "extensions/common/api/document_scan.h"
#include <set>
#include <utility>

using base::UTF8ToUTF16;

namespace extensions {
namespace api {
namespace document_scan {
//
// Types
//

ScanOptions::ScanOptions()
 {}

ScanOptions::~ScanOptions() {}

// static
bool ScanOptions::Populate(
    const base::Value& value, ScanOptions* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* mime_types_value = NULL;
  if (dict->GetWithoutPathExpansion("mimeTypes", &mime_types_value)) {
    {
      const base::ListValue* list = NULL;
      if (!mime_types_value->GetAsList(&list)) {
        return false;
      }
      else {
        if (!json_schema_compiler::util::PopulateOptionalArrayFromList(*list, &out->mime_types)) {
          return false;
        }
      }
    }
  }

  const base::Value* max_images_value = NULL;
  if (dict->GetWithoutPathExpansion("maxImages", &max_images_value)) {
    {
      int temp;
      if (!max_images_value->GetAsInteger(&temp)) {
        out->max_images.reset();
        return false;
      }
      else
        out->max_images.reset(new int(temp));
    }
  }

  return true;
}

// static
scoped_ptr<ScanOptions> ScanOptions::FromValue(const base::Value& value) {
  scoped_ptr<ScanOptions> out(new ScanOptions());
  if (!Populate(value, out.get()))
    return scoped_ptr<ScanOptions>();
  return out;
}

scoped_ptr<base::DictionaryValue> ScanOptions::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->mime_types.get()) {
    value->SetWithoutPathExpansion("mimeTypes", json_schema_compiler::util::CreateValueFromOptionalArray(this->mime_types).release());

  }
  if (this->max_images.get()) {
    value->SetWithoutPathExpansion("maxImages", new base::FundamentalValue(*this->max_images));

  }

  return value;
}


ScanResults::ScanResults()
 {}

ScanResults::~ScanResults() {}

// static
bool ScanResults::Populate(
    const base::Value& value, ScanResults* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* data_urls_value = NULL;
  if (!dict->GetWithoutPathExpansion("dataUrls", &data_urls_value)) {
    return false;
  }
  {
    const base::ListValue* list = NULL;
    if (!data_urls_value->GetAsList(&list)) {
      return false;
    }
    else {
      if (!json_schema_compiler::util::PopulateArrayFromList(*list, &out->data_urls)) {
        return false;
      }
    }
  }

  const base::Value* mime_type_value = NULL;
  if (!dict->GetWithoutPathExpansion("mimeType", &mime_type_value)) {
    return false;
  }
  {
    if (!mime_type_value->GetAsString(&out->mime_type)) {
      return false;
    }
  }

  return true;
}

// static
scoped_ptr<ScanResults> ScanResults::FromValue(const base::Value& value) {
  scoped_ptr<ScanResults> out(new ScanResults());
  if (!Populate(value, out.get()))
    return scoped_ptr<ScanResults>();
  return out;
}

scoped_ptr<base::DictionaryValue> ScanResults::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("dataUrls", json_schema_compiler::util::CreateValueFromArray(this->data_urls).release());

  value->SetWithoutPathExpansion("mimeType", new base::StringValue(this->mime_type));


  return value;
}



//
// Functions
//

namespace Scan {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* options_value = NULL;
  if (args.Get(0, &options_value) &&
      !options_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!options_value->GetAsDictionary(&dictionary)) {
        return scoped_ptr<Params>();
      }
      if (!ScanOptions::Populate(*dictionary, &params->options)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(const ScanResults& result) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((result).ToValue().release());

  return create_results;
}
}  // namespace Scan

}  // namespace document_scan
}  // namespace api
}  // namespace extensions


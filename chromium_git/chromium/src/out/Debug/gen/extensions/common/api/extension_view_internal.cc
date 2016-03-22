// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/extension_view_internal.json
// DO NOT EDIT.

#include "tools/json_schema_compiler/util.h"
#include "base/logging.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/utf_string_conversions.h"
#include "extensions/common/api/extension_view_internal.h"
#include <set>
#include <utility>

using base::UTF8ToUTF16;

namespace extensions {
namespace api {
namespace extension_view_internal {
//
// Functions
//

namespace LoadSrc {

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

  const base::Value* src_value = NULL;
  if (args.Get(1, &src_value) &&
      !src_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!src_value->GetAsString(&params->src)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(bool has_load_succeeded) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(new base::FundamentalValue(has_load_succeeded));

  return create_results;
}
}  // namespace LoadSrc

namespace ParseSrc {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* src_value = NULL;
  if (args.Get(0, &src_value) &&
      !src_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!src_value->GetAsString(&params->src)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(bool is_src_valid, const std::string& extension_id) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(new base::FundamentalValue(is_src_valid));

  create_results->Append(new base::StringValue(extension_id));

  return create_results;
}
}  // namespace ParseSrc

}  // namespace extension_view_internal
}  // namespace api
}  // namespace extensions


// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/power.idl
// DO NOT EDIT.

#include "tools/json_schema_compiler/util.h"
#include "base/logging.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/utf_string_conversions.h"
#include "extensions/common/api/power.h"
#include <set>
#include <utility>

using base::UTF8ToUTF16;

namespace extensions {
namespace api {
namespace power {
//
// Types
//

std::string ToString(Level enum_param) {
  switch (enum_param) {
    case LEVEL_SYSTEM:
      return "system";
    case LEVEL_DISPLAY:
      return "display";
    case LEVEL_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

Level ParseLevel(const std::string& enum_string) {
  if (enum_string == "system")
    return LEVEL_SYSTEM;
  if (enum_string == "display")
    return LEVEL_DISPLAY;
  return LEVEL_NONE;
}



//
// Functions
//

namespace RequestKeepAwake {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* level_value = NULL;
  if (args.Get(0, &level_value) &&
      !level_value->IsType(base::Value::TYPE_NULL)) {
    {
      std::string level_as_string;
      if (!level_value->GetAsString(&level_as_string)) {
        return scoped_ptr<Params>();
      }
      params->level = ParseLevel(level_as_string);
      if (params->level == LEVEL_NONE) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


}  // namespace RequestKeepAwake

namespace ReleaseKeepAwake {

}  // namespace ReleaseKeepAwake

}  // namespace power
}  // namespace api
}  // namespace extensions


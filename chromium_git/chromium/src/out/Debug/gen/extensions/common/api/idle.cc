// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/idle.json
// DO NOT EDIT.

#include "tools/json_schema_compiler/util.h"
#include "base/logging.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/utf_string_conversions.h"
#include "extensions/common/api/idle.h"
#include <set>
#include <utility>

using base::UTF8ToUTF16;

namespace extensions {
namespace api {
namespace idle {
//
// Types
//

std::string ToString(IdleState enum_param) {
  switch (enum_param) {
    case IDLE_STATE_ACTIVE:
      return "active";
    case IDLE_STATE_IDLE:
      return "idle";
    case IDLE_STATE_LOCKED:
      return "locked";
    case IDLE_STATE_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

IdleState ParseIdleState(const std::string& enum_string) {
  if (enum_string == "active")
    return IDLE_STATE_ACTIVE;
  if (enum_string == "idle")
    return IDLE_STATE_IDLE;
  if (enum_string == "locked")
    return IDLE_STATE_LOCKED;
  return IDLE_STATE_NONE;
}



//
// Functions
//

namespace QueryState {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* detection_interval_in_seconds_value = NULL;
  if (args.Get(0, &detection_interval_in_seconds_value) &&
      !detection_interval_in_seconds_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!detection_interval_in_seconds_value->GetAsInteger(&params->detection_interval_in_seconds)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(const IdleState& new_state) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(new base::StringValue(idle::ToString(new_state)));

  return create_results;
}
}  // namespace QueryState

namespace SetDetectionInterval {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* interval_in_seconds_value = NULL;
  if (args.Get(0, &interval_in_seconds_value) &&
      !interval_in_seconds_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!interval_in_seconds_value->GetAsInteger(&params->interval_in_seconds)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


}  // namespace SetDetectionInterval

//
// Events
//

namespace OnStateChanged {

const char kEventName[] = "idle.onStateChanged";

scoped_ptr<base::ListValue> Create(const IdleState& new_state) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(new base::StringValue(idle::ToString(new_state)));

  return create_results;
}

}  // namespace OnStateChanged

}  // namespace idle
}  // namespace api
}  // namespace extensions


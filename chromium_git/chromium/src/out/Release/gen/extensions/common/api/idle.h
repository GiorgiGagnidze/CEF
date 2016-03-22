// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/idle.json
// DO NOT EDIT.

#ifndef EXTENSIONS_COMMON_API_IDLE_H__
#define EXTENSIONS_COMMON_API_IDLE_H__

#include <stdint.h>

#include <map>
#include <string>
#include <vector>

#include "base/logging.h"
#include "base/memory/linked_ptr.h"
#include "base/memory/scoped_ptr.h"
#include "base/values.h"

namespace extensions {
namespace api {
namespace idle {

//
// Types
//

enum IdleState {
  IDLE_STATE_NONE,
  IDLE_STATE_ACTIVE,
  IDLE_STATE_IDLE,
  IDLE_STATE_LOCKED,
  IDLE_STATE_LAST = IDLE_STATE_LOCKED,
};


std::string ToString(IdleState as_enum);
IdleState ParseIdleState(const std::string& as_string);


//
// Functions
//

namespace QueryState {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // The system is considered idle if detectionIntervalInSeconds seconds have
  // elapsed since the last user input detected.
  int detection_interval_in_seconds;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create(const IdleState& new_state);
}  // namespace Results

}  // namespace QueryState

namespace SetDetectionInterval {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // Threshold, in seconds, used to determine when the system is in an idle state.
  int interval_in_seconds;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

}  // namespace SetDetectionInterval

//
// Events
//

namespace OnStateChanged {

extern const char kEventName[];  // "idle.onStateChanged"

scoped_ptr<base::ListValue> Create(const IdleState& new_state);
}  // namespace OnStateChanged

}  // namespace idle
}  // namespace api
}  // namespace extensions
#endif  // EXTENSIONS_COMMON_API_IDLE_H__

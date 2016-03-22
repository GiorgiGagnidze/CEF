// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/extension_view_internal.json
// DO NOT EDIT.

#ifndef EXTENSIONS_COMMON_API_EXTENSION_VIEW_INTERNAL_H__
#define EXTENSIONS_COMMON_API_EXTENSION_VIEW_INTERNAL_H__

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
namespace extension_view_internal {

//
// Functions
//

namespace LoadSrc {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  int instance_id;

  std::string src;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

// Whether or not loading the src has succeeded.
scoped_ptr<base::ListValue> Create(bool has_load_succeeded);
}  // namespace Results

}  // namespace LoadSrc

namespace ParseSrc {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  std::string src;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

// Whether or not the src is valid.
// The extension ID of the src.
scoped_ptr<base::ListValue> Create(bool is_src_valid, const std::string& extension_id);
}  // namespace Results

}  // namespace ParseSrc

}  // namespace extension_view_internal
}  // namespace api
}  // namespace extensions
#endif  // EXTENSIONS_COMMON_API_EXTENSION_VIEW_INTERNAL_H__

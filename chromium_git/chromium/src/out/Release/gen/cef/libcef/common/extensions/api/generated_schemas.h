// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITIONS IN
//   cef/libcef/common/extensions/api
// DO NOT EDIT.

#ifndef CEF_LIBCEF_COMMON_EXTENSIONS_API_GENERATED_SCHEMAS_H__
#define CEF_LIBCEF_COMMON_EXTENSIONS_API_GENERATED_SCHEMAS_H__

#include <map>
#include <string>

#include "base/strings/string_piece.h"

namespace extensions {
namespace api {

class ChromeGeneratedSchemas {
 public:
  // Determines if schema named |name| is generated.
  static bool IsGenerated(std::string name);

  // Gets the API schema named |name|.
  static base::StringPiece Get(const std::string& name);
};

}  // namespace api
}  // namespace extensions

#endif  // CEF_LIBCEF_COMMON_EXTENSIONS_API_GENERATED_SCHEMAS_H__

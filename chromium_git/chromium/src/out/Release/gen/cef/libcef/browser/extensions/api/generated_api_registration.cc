// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "cef/libcef/browser/extensions/api/generated_api_registration.h"

#include "cef/libcef/browser/extensions/api/streams_private/streams_private_api.h"

#include "extensions/browser/extension_function_registry.h"

namespace extensions {
namespace api {

// static
void ChromeGeneratedFunctionRegistry::RegisterAll(ExtensionFunctionRegistry* registry) {
  registry->RegisterFunction<StreamsPrivateAbortFunction>();
}

}  // namespace api
}  // namespace extensions

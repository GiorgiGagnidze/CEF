// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "cef/libcef/common/extensions/api/generated_schemas.h"

#include "base/lazy_instance.h"

namespace {
const char kStreamsPrivate[] = "[{\"compiler_options\":{},\"functions\":[{\"type\":\"function\",\"name\":\"abort\",\"parameters\":[{\"type\":\"string\",\"name\":\"streamUrl\"},{\"optional\":true,\"type\":\"function\",\"name\":\"callback\",\"parameters\":[]}]}],\"documentation_options\":{},\"deprecated\":null,\"nodoc\":false,\"events\":[{\"type\":\"function\",\"name\":\"onExecuteMimeTypeHandler\",\"parameters\":[{\"name\":\"streamInfo\",\"$ref\":\"StreamInfo\"}]}],\"platforms\":null,\"internal\":false,\"namespace\":\"streamsPrivate\",\"properties\":{},\"types\":[{\"type\":\"object\",\"id\":\"StreamInfo\",\"properties\":{\"mimeType\":{\"type\":\"string\",\"name\":\"mimeType\"},\"streamUrl\":{\"type\":\"string\",\"name\":\"streamUrl\"},\"originalUrl\":{\"type\":\"string\",\"name\":\"originalUrl\"},\"embedded\":{\"type\":\"boolean\",\"name\":\"embedded\"},\"viewId\":{\"type\":\"string\",\"optional\":true,\"name\":\"viewId\"},\"tabId\":{\"type\":\"integer\",\"name\":\"tabId\"},\"expectedContentSize\":{\"type\":\"integer\",\"name\":\"expectedContentSize\"},\"responseHeaders\":{\"additionalProperties\":{\"type\":\"any\"},\"type\":\"object\",\"name\":\"responseHeaders\"}}}]}]";

struct Static {
  Static() {
    schemas["streamsPrivate"] = kStreamsPrivate;
  }

  std::map<std::string, const char*> schemas;
};

base::LazyInstance<Static> g_lazy_instance;

}  // namespace

namespace extensions {
namespace api {

// static
base::StringPiece ChromeGeneratedSchemas::Get(const std::string& name) {
  return IsGenerated(name) ? g_lazy_instance.Get().schemas[name] : "";
}

// static
bool ChromeGeneratedSchemas::IsGenerated(std::string name) {
  return g_lazy_instance.Get().schemas.count(name) > 0;
}

}  // namespace api
}  // namespace extensions

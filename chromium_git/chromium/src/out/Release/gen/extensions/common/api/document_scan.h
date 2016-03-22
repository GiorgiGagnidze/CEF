// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/document_scan.idl
// DO NOT EDIT.

#ifndef EXTENSIONS_COMMON_API_DOCUMENT_SCAN_H__
#define EXTENSIONS_COMMON_API_DOCUMENT_SCAN_H__

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
namespace document_scan {

//
// Types
//

struct ScanOptions {
  ScanOptions();
  ~ScanOptions();

  // Populates a ScanOptions object from a base::Value. Returns whether |out|
  // was successfully populated.
  static bool Populate(const base::Value& value, ScanOptions* out);

  // Creates a ScanOptions object from a base::Value, or NULL on failure.
  static scoped_ptr<ScanOptions> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this ScanOptions object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // The MIME types that are accepted by the caller.
  scoped_ptr<std::vector<std::string> > mime_types;

  // The number of scanned images allowed (defaults to 1).
  scoped_ptr<int> max_images;


 private:
  DISALLOW_COPY_AND_ASSIGN(ScanOptions);
};

struct ScanResults {
  ScanResults();
  ~ScanResults();

  // Populates a ScanResults object from a base::Value. Returns whether |out|
  // was successfully populated.
  static bool Populate(const base::Value& value, ScanResults* out);

  // Creates a ScanResults object from a base::Value, or NULL on failure.
  static scoped_ptr<ScanResults> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this ScanResults object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // The data image URLs in a form that can be passed as the "src" value to an
  // image tag.
  std::vector<std::string> data_urls;

  // The MIME type of <code>dataUrls</code>.
  std::string mime_type;


 private:
  DISALLOW_COPY_AND_ASSIGN(ScanResults);
};


//
// Functions
//

namespace Scan {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // Object containing scan parameters.
  ScanOptions options;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create(const ScanResults& result);
}  // namespace Results

}  // namespace Scan

}  // namespace document_scan
}  // namespace api
}  // namespace extensions
#endif  // EXTENSIONS_COMMON_API_DOCUMENT_SCAN_H__

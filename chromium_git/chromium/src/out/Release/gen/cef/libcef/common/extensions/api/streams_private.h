// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   cef/libcef/common/extensions/api/streams_private.idl
// DO NOT EDIT.

#ifndef CEF_LIBCEF_COMMON_EXTENSIONS_API_STREAMS_PRIVATE_H__
#define CEF_LIBCEF_COMMON_EXTENSIONS_API_STREAMS_PRIVATE_H__

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
namespace streams_private {

//
// Types
//

struct StreamInfo {
  StreamInfo();
  ~StreamInfo();

  // Populates a StreamInfo object from a base::Value. Returns whether |out| was
  // successfully populated.
  static bool Populate(const base::Value& value, StreamInfo* out);

  // Creates a StreamInfo object from a base::Value, or NULL on failure.
  static scoped_ptr<StreamInfo> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this StreamInfo object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // The HTTP response headers of the intercepted request stored as a dictionary
  // mapping header name to header value. If a header name appears multiple times,
  // the header values are merged in the dictionary and separated by a ", ".
  struct ResponseHeaders {
    ResponseHeaders();
    ~ResponseHeaders();

    // Populates a ResponseHeaders object from a base::Value. Returns whether
    // |out| was successfully populated.
    static bool Populate(const base::Value& value, ResponseHeaders* out);

    // Returns a new base::DictionaryValue representing the serialized form of
    // this ResponseHeaders object.
    scoped_ptr<base::DictionaryValue> ToValue() const;

    base::DictionaryValue additional_properties;

   private:
    DISALLOW_COPY_AND_ASSIGN(ResponseHeaders);
  };


  // The MIME type of the intercepted URL request.
  std::string mime_type;

  // The original URL that was intercepted.
  std::string original_url;

  // The URL that the stream can be read from.
  std::string stream_url;

  // The ID of the tab that opened the stream. If the stream is not opened in a
  // tab, it will be -1.
  int tab_id;

  // The ID of the view that will render the stream, if the viewer was opened in a
  // plugin.
  scoped_ptr<std::string> view_id;

  // The amount of data the Stream should contain, if known.  If there is no
  // information on the size it will be -1.
  int expected_content_size;

  // The HTTP response headers of the intercepted request stored as a dictionary
  // mapping header name to header value. If a header name appears multiple times,
  // the header values are merged in the dictionary and separated by a ", ".
  ResponseHeaders response_headers;

  // Whether the stream is embedded within another document.
  bool embedded;


 private:
  DISALLOW_COPY_AND_ASSIGN(StreamInfo);
};


//
// Functions
//

namespace Abort {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // The URL of the stream to abort.
  std::string stream_url;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create();
}  // namespace Results

}  // namespace Abort

//
// Events
//

namespace OnExecuteMimeTypeHandler {

extern const char kEventName[];  // "streamsPrivate.onExecuteMimeTypeHandler"

scoped_ptr<base::ListValue> Create(const StreamInfo& stream_info);
}  // namespace OnExecuteMimeTypeHandler

}  // namespace streams_private
}  // namespace api
}  // namespace extensions
#endif  // CEF_LIBCEF_COMMON_EXTENSIONS_API_STREAMS_PRIVATE_H__

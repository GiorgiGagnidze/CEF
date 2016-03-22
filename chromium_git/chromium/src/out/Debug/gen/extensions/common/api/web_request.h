// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/web_request.json
// DO NOT EDIT.

#ifndef EXTENSIONS_COMMON_API_WEB_REQUEST_H__
#define EXTENSIONS_COMMON_API_WEB_REQUEST_H__

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
namespace web_request {

//
// Properties
//

// The maximum number of times that <code>handlerBehaviorChanged</code> can be
// called per 10 minute sustained interval. <code>handlerBehaviorChanged</code>
// is an expensive function call that shouldn't be called often.
extern const int MAX_HANDLER_BEHAVIOR_CHANGED_CALLS_PER_10_MINUTES;

//
// Types
//

enum ResourceType {
  RESOURCE_TYPE_NONE,
  RESOURCE_TYPE_MAIN_FRAME,
  RESOURCE_TYPE_SUB_FRAME,
  RESOURCE_TYPE_STYLESHEET,
  RESOURCE_TYPE_SCRIPT,
  RESOURCE_TYPE_IMAGE,
  RESOURCE_TYPE_FONT,
  RESOURCE_TYPE_OBJECT,
  RESOURCE_TYPE_XMLHTTPREQUEST,
  RESOURCE_TYPE_PING,
  RESOURCE_TYPE_OTHER,
  RESOURCE_TYPE_LAST = RESOURCE_TYPE_OTHER,
};


std::string ToString(ResourceType as_enum);
ResourceType ParseResourceType(const std::string& as_string);

enum OnBeforeRequestOptions {
  ON_BEFORE_REQUEST_OPTIONS_NONE,
  ON_BEFORE_REQUEST_OPTIONS_BLOCKING,
  ON_BEFORE_REQUEST_OPTIONS_REQUESTBODY,
  ON_BEFORE_REQUEST_OPTIONS_LAST = ON_BEFORE_REQUEST_OPTIONS_REQUESTBODY,
};


std::string ToString(OnBeforeRequestOptions as_enum);
OnBeforeRequestOptions ParseOnBeforeRequestOptions(const std::string& as_string);

enum OnBeforeSendHeadersOptions {
  ON_BEFORE_SEND_HEADERS_OPTIONS_NONE,
  ON_BEFORE_SEND_HEADERS_OPTIONS_REQUESTHEADERS,
  ON_BEFORE_SEND_HEADERS_OPTIONS_BLOCKING,
  ON_BEFORE_SEND_HEADERS_OPTIONS_LAST = ON_BEFORE_SEND_HEADERS_OPTIONS_BLOCKING,
};


std::string ToString(OnBeforeSendHeadersOptions as_enum);
OnBeforeSendHeadersOptions ParseOnBeforeSendHeadersOptions(const std::string& as_string);

enum OnSendHeadersOptions {
  ON_SEND_HEADERS_OPTIONS_NONE,
  ON_SEND_HEADERS_OPTIONS_REQUESTHEADERS,
  ON_SEND_HEADERS_OPTIONS_LAST = ON_SEND_HEADERS_OPTIONS_REQUESTHEADERS,
};


std::string ToString(OnSendHeadersOptions as_enum);
OnSendHeadersOptions ParseOnSendHeadersOptions(const std::string& as_string);

enum OnHeadersReceivedOptions {
  ON_HEADERS_RECEIVED_OPTIONS_NONE,
  ON_HEADERS_RECEIVED_OPTIONS_BLOCKING,
  ON_HEADERS_RECEIVED_OPTIONS_RESPONSEHEADERS,
  ON_HEADERS_RECEIVED_OPTIONS_LAST = ON_HEADERS_RECEIVED_OPTIONS_RESPONSEHEADERS,
};


std::string ToString(OnHeadersReceivedOptions as_enum);
OnHeadersReceivedOptions ParseOnHeadersReceivedOptions(const std::string& as_string);

enum OnAuthRequiredOptions {
  ON_AUTH_REQUIRED_OPTIONS_NONE,
  ON_AUTH_REQUIRED_OPTIONS_RESPONSEHEADERS,
  ON_AUTH_REQUIRED_OPTIONS_BLOCKING,
  ON_AUTH_REQUIRED_OPTIONS_ASYNCBLOCKING,
  ON_AUTH_REQUIRED_OPTIONS_LAST = ON_AUTH_REQUIRED_OPTIONS_ASYNCBLOCKING,
};


std::string ToString(OnAuthRequiredOptions as_enum);
OnAuthRequiredOptions ParseOnAuthRequiredOptions(const std::string& as_string);

enum OnResponseStartedOptions {
  ON_RESPONSE_STARTED_OPTIONS_NONE,
  ON_RESPONSE_STARTED_OPTIONS_RESPONSEHEADERS,
  ON_RESPONSE_STARTED_OPTIONS_LAST = ON_RESPONSE_STARTED_OPTIONS_RESPONSEHEADERS,
};


std::string ToString(OnResponseStartedOptions as_enum);
OnResponseStartedOptions ParseOnResponseStartedOptions(const std::string& as_string);

enum OnBeforeRedirectOptions {
  ON_BEFORE_REDIRECT_OPTIONS_NONE,
  ON_BEFORE_REDIRECT_OPTIONS_RESPONSEHEADERS,
  ON_BEFORE_REDIRECT_OPTIONS_LAST = ON_BEFORE_REDIRECT_OPTIONS_RESPONSEHEADERS,
};


std::string ToString(OnBeforeRedirectOptions as_enum);
OnBeforeRedirectOptions ParseOnBeforeRedirectOptions(const std::string& as_string);

enum OnCompletedOptions {
  ON_COMPLETED_OPTIONS_NONE,
  ON_COMPLETED_OPTIONS_RESPONSEHEADERS,
  ON_COMPLETED_OPTIONS_LAST = ON_COMPLETED_OPTIONS_RESPONSEHEADERS,
};


std::string ToString(OnCompletedOptions as_enum);
OnCompletedOptions ParseOnCompletedOptions(const std::string& as_string);

// An object describing filters to apply to webRequest events.
struct RequestFilter {
  RequestFilter();
  ~RequestFilter();

  // Populates a RequestFilter object from a base::Value. Returns whether |out|
  // was successfully populated.
  static bool Populate(const base::Value& value, RequestFilter* out);

  // Creates a RequestFilter object from a base::Value, or NULL on failure.
  static scoped_ptr<RequestFilter> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this RequestFilter object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // A list of URLs or URL patterns. Requests that cannot match any of the URLs
  // will be filtered out.
  std::vector<std::string> urls;

  // A list of request types. Requests that cannot match any of the types will be
  // filtered out.
  scoped_ptr<std::vector<ResourceType> > types;

  scoped_ptr<int> tab_id;

  scoped_ptr<int> window_id;


 private:
  DISALLOW_COPY_AND_ASSIGN(RequestFilter);
};

// Contains data uploaded in a URL request.
struct UploadData {
  UploadData();
  ~UploadData();

  // Populates a UploadData object from a base::Value. Returns whether |out| was
  // successfully populated.
  static bool Populate(const base::Value& value, UploadData* out);

  // Creates a UploadData object from a base::Value, or NULL on failure.
  static scoped_ptr<UploadData> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this UploadData object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // An ArrayBuffer with a copy of the data.
  scoped_ptr<base::Value> bytes;

  // A string with the file's path and name.
  scoped_ptr<std::string> file;


 private:
  DISALLOW_COPY_AND_ASSIGN(UploadData);
};


//
// Functions
//

namespace HandlerBehaviorChanged {

namespace Results {

scoped_ptr<base::ListValue> Create();
}  // namespace Results

}  // namespace HandlerBehaviorChanged

//
// Events
//

namespace OnBeforeRequest {

extern const char kEventName[];  // "webRequest.onBeforeRequest"

struct Details {
  Details();
  ~Details();

  // Returns a new base::DictionaryValue representing the serialized form of
  // this Details object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // Contains the HTTP request body data. Only provided if extraInfoSpec contains
  // 'requestBody'.
  struct RequestBody {
    RequestBody();
    ~RequestBody();

    // Returns a new base::DictionaryValue representing the serialized form of
    // this RequestBody object.
    scoped_ptr<base::DictionaryValue> ToValue() const;

    // If the request method is POST and the body is a sequence of key-value pairs
    // encoded in UTF8, encoded as either multipart/form-data, or
    // application/x-www-form-urlencoded, this dictionary is present and for each
    // key contains the list of all values for that key. If the data is of another
    // media type, or if it is malformed, the dictionary is not present. An example
    // value of this dictionary is {'key': ['value1', 'value2']}.
    struct FormData {
      FormData();
      ~FormData();

      // Returns a new base::DictionaryValue representing the serialized form of
      // this FormData object.
      scoped_ptr<base::DictionaryValue> ToValue() const;

      std::map<std::string, linked_ptr<std::vector<std::string> > > additional_properties;

     private:
      DISALLOW_COPY_AND_ASSIGN(FormData);
    };


    // Errors when obtaining request body data.
    scoped_ptr<std::string> error;

    // If the request method is POST and the body is a sequence of key-value pairs
    // encoded in UTF8, encoded as either multipart/form-data, or
    // application/x-www-form-urlencoded, this dictionary is present and for each
    // key contains the list of all values for that key. If the data is of another
    // media type, or if it is malformed, the dictionary is not present. An example
    // value of this dictionary is {'key': ['value1', 'value2']}.
    scoped_ptr<FormData> form_data;

    // If the request method is PUT or POST, and the body is not already parsed in
    // formData, then the unparsed request body elements are contained in this
    // array.
    scoped_ptr<std::vector<linked_ptr<UploadData> > > raw;


   private:
    DISALLOW_COPY_AND_ASSIGN(RequestBody);
  };


  // The ID of the request. Request IDs are unique within a browser session. As a
  // result, they could be used to relate different events of the same request.
  std::string request_id;

  std::string url;

  // Standard HTTP method.
  std::string method;

  // The value 0 indicates that the request happens in the main frame; a positive
  // value indicates the ID of a subframe in which the request happens. If the
  // document of a (sub-)frame is loaded (<code>type</code> is
  // <code>main_frame</code> or <code>sub_frame</code>), <code>frameId</code>
  // indicates the ID of this frame, not the ID of the outer frame. Frame IDs are
  // unique within a tab.
  int frame_id;

  // ID of frame that wraps the frame which sent the request. Set to -1 if no
  // parent frame exists.
  int parent_frame_id;

  // Contains the HTTP request body data. Only provided if extraInfoSpec contains
  // 'requestBody'.
  scoped_ptr<RequestBody> request_body;

  // The ID of the tab in which the request takes place. Set to -1 if the request
  // isn't related to a tab.
  int tab_id;

  // How the requested resource will be used.
  ResourceType type;

  // The time when this signal is triggered, in milliseconds since the epoch.
  double time_stamp;


 private:
  DISALLOW_COPY_AND_ASSIGN(Details);
};


scoped_ptr<base::ListValue> Create(const Details& details);
}  // namespace OnBeforeRequest

namespace OnErrorOccurred {

extern const char kEventName[];  // "webRequest.onErrorOccurred"

struct Details {
  Details();
  ~Details();

  // Returns a new base::DictionaryValue representing the serialized form of
  // this Details object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // The ID of the request. Request IDs are unique within a browser session. As a
  // result, they could be used to relate different events of the same request.
  std::string request_id;

  std::string url;

  // Standard HTTP method.
  std::string method;

  // The value 0 indicates that the request happens in the main frame; a positive
  // value indicates the ID of a subframe in which the request happens. If the
  // document of a (sub-)frame is loaded (<code>type</code> is
  // <code>main_frame</code> or <code>sub_frame</code>), <code>frameId</code>
  // indicates the ID of this frame, not the ID of the outer frame. Frame IDs are
  // unique within a tab.
  int frame_id;

  // ID of frame that wraps the frame which sent the request. Set to -1 if no
  // parent frame exists.
  int parent_frame_id;

  // The ID of the tab in which the request takes place. Set to -1 if the request
  // isn't related to a tab.
  int tab_id;

  // How the requested resource will be used.
  ResourceType type;

  // The time when this signal is triggered, in milliseconds since the epoch.
  double time_stamp;

  // The server IP address that the request was actually sent to. Note that it may
  // be a literal IPv6 address.
  scoped_ptr<std::string> ip;

  // Indicates if this response was fetched from disk cache.
  bool from_cache;

  // The error description. This string is <em>not</em> guaranteed to remain
  // backwards compatible between releases. You must not parse and act based upon
  // its content.
  std::string error;


 private:
  DISALLOW_COPY_AND_ASSIGN(Details);
};


scoped_ptr<base::ListValue> Create(const Details& details);
}  // namespace OnErrorOccurred

}  // namespace web_request
}  // namespace api
}  // namespace extensions
#endif  // EXTENSIONS_COMMON_API_WEB_REQUEST_H__

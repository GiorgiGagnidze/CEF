// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/web_request.json
// DO NOT EDIT.

#include "tools/json_schema_compiler/util.h"
#include "base/logging.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/utf_string_conversions.h"
#include "extensions/common/api/web_request.h"
#include <set>
#include <utility>

using base::UTF8ToUTF16;

namespace extensions {
namespace api {
namespace web_request {
//
// Properties
//

const int MAX_HANDLER_BEHAVIOR_CHANGED_CALLS_PER_10_MINUTES = 20;

//
// Types
//

std::string ToString(ResourceType enum_param) {
  switch (enum_param) {
    case RESOURCE_TYPE_MAIN_FRAME:
      return "main_frame";
    case RESOURCE_TYPE_SUB_FRAME:
      return "sub_frame";
    case RESOURCE_TYPE_STYLESHEET:
      return "stylesheet";
    case RESOURCE_TYPE_SCRIPT:
      return "script";
    case RESOURCE_TYPE_IMAGE:
      return "image";
    case RESOURCE_TYPE_FONT:
      return "font";
    case RESOURCE_TYPE_OBJECT:
      return "object";
    case RESOURCE_TYPE_XMLHTTPREQUEST:
      return "xmlhttprequest";
    case RESOURCE_TYPE_PING:
      return "ping";
    case RESOURCE_TYPE_OTHER:
      return "other";
    case RESOURCE_TYPE_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

ResourceType ParseResourceType(const std::string& enum_string) {
  if (enum_string == "main_frame")
    return RESOURCE_TYPE_MAIN_FRAME;
  if (enum_string == "sub_frame")
    return RESOURCE_TYPE_SUB_FRAME;
  if (enum_string == "stylesheet")
    return RESOURCE_TYPE_STYLESHEET;
  if (enum_string == "script")
    return RESOURCE_TYPE_SCRIPT;
  if (enum_string == "image")
    return RESOURCE_TYPE_IMAGE;
  if (enum_string == "font")
    return RESOURCE_TYPE_FONT;
  if (enum_string == "object")
    return RESOURCE_TYPE_OBJECT;
  if (enum_string == "xmlhttprequest")
    return RESOURCE_TYPE_XMLHTTPREQUEST;
  if (enum_string == "ping")
    return RESOURCE_TYPE_PING;
  if (enum_string == "other")
    return RESOURCE_TYPE_OTHER;
  return RESOURCE_TYPE_NONE;
}


std::string ToString(OnBeforeRequestOptions enum_param) {
  switch (enum_param) {
    case ON_BEFORE_REQUEST_OPTIONS_BLOCKING:
      return "blocking";
    case ON_BEFORE_REQUEST_OPTIONS_REQUESTBODY:
      return "requestBody";
    case ON_BEFORE_REQUEST_OPTIONS_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

OnBeforeRequestOptions ParseOnBeforeRequestOptions(const std::string& enum_string) {
  if (enum_string == "blocking")
    return ON_BEFORE_REQUEST_OPTIONS_BLOCKING;
  if (enum_string == "requestBody")
    return ON_BEFORE_REQUEST_OPTIONS_REQUESTBODY;
  return ON_BEFORE_REQUEST_OPTIONS_NONE;
}


std::string ToString(OnBeforeSendHeadersOptions enum_param) {
  switch (enum_param) {
    case ON_BEFORE_SEND_HEADERS_OPTIONS_REQUESTHEADERS:
      return "requestHeaders";
    case ON_BEFORE_SEND_HEADERS_OPTIONS_BLOCKING:
      return "blocking";
    case ON_BEFORE_SEND_HEADERS_OPTIONS_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

OnBeforeSendHeadersOptions ParseOnBeforeSendHeadersOptions(const std::string& enum_string) {
  if (enum_string == "requestHeaders")
    return ON_BEFORE_SEND_HEADERS_OPTIONS_REQUESTHEADERS;
  if (enum_string == "blocking")
    return ON_BEFORE_SEND_HEADERS_OPTIONS_BLOCKING;
  return ON_BEFORE_SEND_HEADERS_OPTIONS_NONE;
}


std::string ToString(OnSendHeadersOptions enum_param) {
  switch (enum_param) {
    case ON_SEND_HEADERS_OPTIONS_REQUESTHEADERS:
      return "requestHeaders";
    case ON_SEND_HEADERS_OPTIONS_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

OnSendHeadersOptions ParseOnSendHeadersOptions(const std::string& enum_string) {
  if (enum_string == "requestHeaders")
    return ON_SEND_HEADERS_OPTIONS_REQUESTHEADERS;
  return ON_SEND_HEADERS_OPTIONS_NONE;
}


std::string ToString(OnHeadersReceivedOptions enum_param) {
  switch (enum_param) {
    case ON_HEADERS_RECEIVED_OPTIONS_BLOCKING:
      return "blocking";
    case ON_HEADERS_RECEIVED_OPTIONS_RESPONSEHEADERS:
      return "responseHeaders";
    case ON_HEADERS_RECEIVED_OPTIONS_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

OnHeadersReceivedOptions ParseOnHeadersReceivedOptions(const std::string& enum_string) {
  if (enum_string == "blocking")
    return ON_HEADERS_RECEIVED_OPTIONS_BLOCKING;
  if (enum_string == "responseHeaders")
    return ON_HEADERS_RECEIVED_OPTIONS_RESPONSEHEADERS;
  return ON_HEADERS_RECEIVED_OPTIONS_NONE;
}


std::string ToString(OnAuthRequiredOptions enum_param) {
  switch (enum_param) {
    case ON_AUTH_REQUIRED_OPTIONS_RESPONSEHEADERS:
      return "responseHeaders";
    case ON_AUTH_REQUIRED_OPTIONS_BLOCKING:
      return "blocking";
    case ON_AUTH_REQUIRED_OPTIONS_ASYNCBLOCKING:
      return "asyncBlocking";
    case ON_AUTH_REQUIRED_OPTIONS_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

OnAuthRequiredOptions ParseOnAuthRequiredOptions(const std::string& enum_string) {
  if (enum_string == "responseHeaders")
    return ON_AUTH_REQUIRED_OPTIONS_RESPONSEHEADERS;
  if (enum_string == "blocking")
    return ON_AUTH_REQUIRED_OPTIONS_BLOCKING;
  if (enum_string == "asyncBlocking")
    return ON_AUTH_REQUIRED_OPTIONS_ASYNCBLOCKING;
  return ON_AUTH_REQUIRED_OPTIONS_NONE;
}


std::string ToString(OnResponseStartedOptions enum_param) {
  switch (enum_param) {
    case ON_RESPONSE_STARTED_OPTIONS_RESPONSEHEADERS:
      return "responseHeaders";
    case ON_RESPONSE_STARTED_OPTIONS_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

OnResponseStartedOptions ParseOnResponseStartedOptions(const std::string& enum_string) {
  if (enum_string == "responseHeaders")
    return ON_RESPONSE_STARTED_OPTIONS_RESPONSEHEADERS;
  return ON_RESPONSE_STARTED_OPTIONS_NONE;
}


std::string ToString(OnBeforeRedirectOptions enum_param) {
  switch (enum_param) {
    case ON_BEFORE_REDIRECT_OPTIONS_RESPONSEHEADERS:
      return "responseHeaders";
    case ON_BEFORE_REDIRECT_OPTIONS_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

OnBeforeRedirectOptions ParseOnBeforeRedirectOptions(const std::string& enum_string) {
  if (enum_string == "responseHeaders")
    return ON_BEFORE_REDIRECT_OPTIONS_RESPONSEHEADERS;
  return ON_BEFORE_REDIRECT_OPTIONS_NONE;
}


std::string ToString(OnCompletedOptions enum_param) {
  switch (enum_param) {
    case ON_COMPLETED_OPTIONS_RESPONSEHEADERS:
      return "responseHeaders";
    case ON_COMPLETED_OPTIONS_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

OnCompletedOptions ParseOnCompletedOptions(const std::string& enum_string) {
  if (enum_string == "responseHeaders")
    return ON_COMPLETED_OPTIONS_RESPONSEHEADERS;
  return ON_COMPLETED_OPTIONS_NONE;
}


RequestFilter::RequestFilter()
 {}

RequestFilter::~RequestFilter() {}

// static
bool RequestFilter::Populate(
    const base::Value& value, RequestFilter* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* urls_value = NULL;
  if (!dict->GetWithoutPathExpansion("urls", &urls_value)) {
    return false;
  }
  {
    const base::ListValue* list = NULL;
    if (!urls_value->GetAsList(&list)) {
      return false;
    }
    else {
      if (!json_schema_compiler::util::PopulateArrayFromList(*list, &out->urls)) {
        return false;
      }
    }
  }

  const base::Value* types_value = NULL;
  if (dict->GetWithoutPathExpansion("types", &types_value)) {
    {
      const base::ListValue* list = NULL;
      if (!types_value->GetAsList(&list)) {
        return false;
      }
      else {
        out->types.reset(new std::vector<ResourceType>);
        for (const auto& it : *(list)) {
          ResourceType tmp;
          std::string resource_type_as_string;
          if (!(it)->GetAsString(&resource_type_as_string)) {
            return false;
          }
          tmp = ParseResourceType(resource_type_as_string);
          if (tmp == RESOURCE_TYPE_NONE) {
            return false;
          }
          out->types->push_back(tmp);
        }
      }
    }
  }

  const base::Value* tab_id_value = NULL;
  if (dict->GetWithoutPathExpansion("tabId", &tab_id_value)) {
    {
      int temp;
      if (!tab_id_value->GetAsInteger(&temp)) {
        out->tab_id.reset();
        return false;
      }
      else
        out->tab_id.reset(new int(temp));
    }
  }

  const base::Value* window_id_value = NULL;
  if (dict->GetWithoutPathExpansion("windowId", &window_id_value)) {
    {
      int temp;
      if (!window_id_value->GetAsInteger(&temp)) {
        out->window_id.reset();
        return false;
      }
      else
        out->window_id.reset(new int(temp));
    }
  }

  return true;
}

// static
scoped_ptr<RequestFilter> RequestFilter::FromValue(const base::Value& value) {
  scoped_ptr<RequestFilter> out(new RequestFilter());
  if (!Populate(value, out.get()))
    return scoped_ptr<RequestFilter>();
  return out;
}

scoped_ptr<base::DictionaryValue> RequestFilter::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("urls", json_schema_compiler::util::CreateValueFromArray(this->urls).release());

  if (this->types.get()) {
    {
      std::vector<std::string> types_list;
      for (const auto& it : *(this->types)) {
      types_list.push_back(web_request::ToString(it));
    }
    value->SetWithoutPathExpansion("types", json_schema_compiler::util::CreateValueFromArray(types_list).release());
    }

  }
  if (this->tab_id.get()) {
    value->SetWithoutPathExpansion("tabId", new base::FundamentalValue(*this->tab_id));

  }
  if (this->window_id.get()) {
    value->SetWithoutPathExpansion("windowId", new base::FundamentalValue(*this->window_id));

  }

  return value;
}


UploadData::UploadData()
 {}

UploadData::~UploadData() {}

// static
bool UploadData::Populate(
    const base::Value& value, UploadData* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* bytes_value = NULL;
  if (dict->GetWithoutPathExpansion("bytes", &bytes_value)) {
    {
      out->bytes.reset(bytes_value->DeepCopy());
    }
  }

  const base::Value* file_value = NULL;
  if (dict->GetWithoutPathExpansion("file", &file_value)) {
    {
      std::string temp;
      if (!file_value->GetAsString(&temp)) {
        out->file.reset();
        return false;
      }
      else
        out->file.reset(new std::string(temp));
    }
  }

  return true;
}

// static
scoped_ptr<UploadData> UploadData::FromValue(const base::Value& value) {
  scoped_ptr<UploadData> out(new UploadData());
  if (!Populate(value, out.get()))
    return scoped_ptr<UploadData>();
  return out;
}

scoped_ptr<base::DictionaryValue> UploadData::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->bytes.get()) {
    value->SetWithoutPathExpansion("bytes", (this->bytes)->DeepCopy());

  }
  if (this->file.get()) {
    value->SetWithoutPathExpansion("file", new base::StringValue(*this->file));

  }

  return value;
}



//
// Functions
//

namespace HandlerBehaviorChanged {

scoped_ptr<base::ListValue> Results::Create() {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}
}  // namespace HandlerBehaviorChanged

//
// Events
//

namespace OnBeforeRequest {

const char kEventName[] = "webRequest.onBeforeRequest";

Details::RequestBody::FormData::FormData()
 {}

Details::RequestBody::FormData::~FormData() {}

scoped_ptr<base::DictionaryValue> Details::RequestBody::FormData::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  for (const auto& it : additional_properties) {
    value->SetWithoutPathExpansion(it.first, json_schema_compiler::util::CreateValueFromArray(*it.second).release());

  }

  return value;
}



Details::RequestBody::RequestBody()
 {}

Details::RequestBody::~RequestBody() {}

scoped_ptr<base::DictionaryValue> Details::RequestBody::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->error.get()) {
    value->SetWithoutPathExpansion("error", new base::StringValue(*this->error));

  }
  if (this->form_data.get()) {
    value->SetWithoutPathExpansion("formData", (this->form_data)->ToValue().release());

  }
  if (this->raw.get()) {
    value->SetWithoutPathExpansion("raw", json_schema_compiler::util::CreateValueFromOptionalArray(this->raw).release());

  }

  return value;
}



Details::Details()
: frame_id(0), parent_frame_id(0), tab_id(0), type(RESOURCE_TYPE_NONE), time_stamp(0.0) {}

Details::~Details() {}

scoped_ptr<base::DictionaryValue> Details::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("requestId", new base::StringValue(this->request_id));

  value->SetWithoutPathExpansion("url", new base::StringValue(this->url));

  value->SetWithoutPathExpansion("method", new base::StringValue(this->method));

  value->SetWithoutPathExpansion("frameId", new base::FundamentalValue(this->frame_id));

  value->SetWithoutPathExpansion("parentFrameId", new base::FundamentalValue(this->parent_frame_id));

  if (this->request_body.get()) {
    value->SetWithoutPathExpansion("requestBody", (this->request_body)->ToValue().release());

  }
  value->SetWithoutPathExpansion("tabId", new base::FundamentalValue(this->tab_id));

  value->SetWithoutPathExpansion("type", new base::StringValue(web_request::ToString(this->type)));

  value->SetWithoutPathExpansion("timeStamp", new base::FundamentalValue(this->time_stamp));


  return value;
}


scoped_ptr<base::ListValue> Create(const Details& details) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((details).ToValue().release());

  return create_results;
}

}  // namespace OnBeforeRequest

namespace OnErrorOccurred {

const char kEventName[] = "webRequest.onErrorOccurred";

Details::Details()
: frame_id(0), parent_frame_id(0), tab_id(0), type(RESOURCE_TYPE_NONE), time_stamp(0.0), from_cache(false) {}

Details::~Details() {}

scoped_ptr<base::DictionaryValue> Details::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("requestId", new base::StringValue(this->request_id));

  value->SetWithoutPathExpansion("url", new base::StringValue(this->url));

  value->SetWithoutPathExpansion("method", new base::StringValue(this->method));

  value->SetWithoutPathExpansion("frameId", new base::FundamentalValue(this->frame_id));

  value->SetWithoutPathExpansion("parentFrameId", new base::FundamentalValue(this->parent_frame_id));

  value->SetWithoutPathExpansion("tabId", new base::FundamentalValue(this->tab_id));

  value->SetWithoutPathExpansion("type", new base::StringValue(web_request::ToString(this->type)));

  value->SetWithoutPathExpansion("timeStamp", new base::FundamentalValue(this->time_stamp));

  if (this->ip.get()) {
    value->SetWithoutPathExpansion("ip", new base::StringValue(*this->ip));

  }
  value->SetWithoutPathExpansion("fromCache", new base::FundamentalValue(this->from_cache));

  value->SetWithoutPathExpansion("error", new base::StringValue(this->error));


  return value;
}


scoped_ptr<base::ListValue> Create(const Details& details) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((details).ToValue().release());

  return create_results;
}

}  // namespace OnErrorOccurred

}  // namespace web_request
}  // namespace api
}  // namespace extensions


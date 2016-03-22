// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "mojo/services/network/public/interfaces/http_message.mojom.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/trace_event/trace_event.h"
#include "mojo/public/cpp/bindings/lib/array_serialization.h"
#include "mojo/public/cpp/bindings/lib/bindings_serialization.h"
#include "mojo/public/cpp/bindings/lib/bounds_checker.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/map_serialization.h"
#include "mojo/public/cpp/bindings/lib/message_builder.h"
#include "mojo/public/cpp/bindings/lib/native_serialization.h"
#include "mojo/public/cpp/bindings/lib/string_serialization.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "mojo/public/cpp/environment/lib/scoped_task_tracking.h"
#include "mojo/public/cpp/environment/logging.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"
namespace mojo {

namespace internal {
namespace {

#pragma pack(push, 1)

#pragma pack(pop)

}  // namespace


// static
HttpHeader_Data* HttpHeader_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(HttpHeader_Data))) HttpHeader_Data();
}

// static
bool HttpHeader_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const HttpHeader_Data* object = static_cast<const HttpHeader_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 24 }};

  if (object->header_.version <=
          kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = MOJO_ARRAYSIZE(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->name, "null name field in HttpHeader struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->name, bounds_checker,
                                     &name_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->value, "null value field in HttpHeader struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams value_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->value, bounds_checker,
                                     &value_validate_params)) {
    return false;
  }

  return true;
}

void HttpHeader_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&name, handles);
  mojo::internal::Encode(&value, handles);
}

void HttpHeader_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&name, handles);
  mojo::internal::Decode(&value, handles);
}

HttpHeader_Data::HttpHeader_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

// static
HttpRequest_Data* HttpRequest_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(HttpRequest_Data))) HttpRequest_Data();
}

// static
bool HttpRequest_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const HttpRequest_Data* object = static_cast<const HttpRequest_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 40 }};

  if (object->header_.version <=
          kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = MOJO_ARRAYSIZE(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->method, "null method field in HttpRequest struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams method_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->method, bounds_checker,
                                     &method_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->url, "null url field in HttpRequest struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams url_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->url, bounds_checker,
                                     &url_validate_params)) {
    return false;
  }

  const mojo::internal::ArrayValidateParams headers_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->headers, bounds_checker,
                                     &headers_validate_params)) {
    return false;
  }

  const mojo::Handle body_handle = object->body;
  if (!mojo::internal::ValidateHandle(body_handle, bounds_checker))
    return false;

  return true;
}

void HttpRequest_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&method, handles);
  mojo::internal::Encode(&url, handles);
  mojo::internal::Encode(&headers, handles);
  mojo::internal::EncodeHandle(&body, handles);
}

void HttpRequest_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&method, handles);
  mojo::internal::Decode(&url, handles);
  mojo::internal::Decode(&headers, handles);
  mojo::internal::DecodeHandle(&body, handles);
}

HttpRequest_Data::HttpRequest_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

// static
HttpResponse_Data* HttpResponse_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(HttpResponse_Data))) HttpResponse_Data();
}

// static
bool HttpResponse_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const HttpResponse_Data* object = static_cast<const HttpResponse_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 24 }};

  if (object->header_.version <=
          kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = MOJO_ARRAYSIZE(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  const mojo::internal::ArrayValidateParams headers_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->headers, bounds_checker,
                                     &headers_validate_params)) {
    return false;
  }

  const mojo::Handle body_handle = object->body;
  if (!mojo::internal::ValidateHandle(body_handle, bounds_checker))
    return false;

  return true;
}

void HttpResponse_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&headers, handles);
  mojo::internal::EncodeHandle(&body, handles);
}

void HttpResponse_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&headers, handles);
  mojo::internal::DecodeHandle(&body, handles);
}

HttpResponse_Data::HttpResponse_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}


}  // namespace internal// static
HttpHeaderPtr HttpHeader::New() {
  HttpHeaderPtr rv;
  mojo::internal::StructHelper<HttpHeader>::Initialize(&rv);
  return rv;
}

HttpHeader::HttpHeader()
    : name(),
      value() {
}

HttpHeader::~HttpHeader() {
}


HttpHeaderPtr HttpHeader::Clone() const {
  HttpHeaderPtr rv(New());
  rv->name = name;
  rv->value = value;
  return rv;
}


bool HttpHeader::Equals(const HttpHeader& other) const {
  if (!mojo::internal::ValueTraits<mojo::String>::Equals(this->name, other.name))
    return false;
  if (!mojo::internal::ValueTraits<mojo::String>::Equals(this->value, other.value))
    return false;
  return true;
}// static
HttpRequestPtr HttpRequest::New() {
  HttpRequestPtr rv;
  mojo::internal::StructHelper<HttpRequest>::Initialize(&rv);
  return rv;
}

HttpRequest::HttpRequest()
    : method("GET"),
      url(),
      headers(),
      body() {
}

HttpRequest::~HttpRequest() {
}



bool HttpRequest::Equals(const HttpRequest& other) const {
  if (!mojo::internal::ValueTraits<mojo::String>::Equals(this->method, other.method))
    return false;
  if (!mojo::internal::ValueTraits<mojo::String>::Equals(this->url, other.url))
    return false;
  if (!mojo::internal::ValueTraits<mojo::Array<HttpHeaderPtr>>::Equals(this->headers, other.headers))
    return false;
  if (!mojo::internal::ValueTraits<mojo::ScopedDataPipeConsumerHandle>::Equals(this->body, other.body))
    return false;
  return true;
}// static
HttpResponsePtr HttpResponse::New() {
  HttpResponsePtr rv;
  mojo::internal::StructHelper<HttpResponse>::Initialize(&rv);
  return rv;
}

HttpResponse::HttpResponse()
    : status_code(200U),
      headers(),
      body() {
}

HttpResponse::~HttpResponse() {
}



bool HttpResponse::Equals(const HttpResponse& other) const {
  if (!mojo::internal::ValueTraits<uint32_t>::Equals(this->status_code, other.status_code))
    return false;
  if (!mojo::internal::ValueTraits<mojo::Array<HttpHeaderPtr>>::Equals(this->headers, other.headers))
    return false;
  if (!mojo::internal::ValueTraits<mojo::ScopedDataPipeConsumerHandle>::Equals(this->body, other.body))
    return false;
  return true;
}
size_t GetSerializedSize_(const HttpHeaderPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::HttpHeader_Data);
  size += GetSerializedSize_(input->name);
  size += GetSerializedSize_(input->value);
  return size;
}

void Serialize_(HttpHeaderPtr input, mojo::internal::Buffer* buf,
                internal::HttpHeader_Data** output) {
  if (input) {
    internal::HttpHeader_Data* result =
        internal::HttpHeader_Data::New(buf);
    Serialize_(std::move(input->name), buf, &result->name.ptr);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->name.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null name in HttpHeader struct");
    Serialize_(std::move(input->value), buf, &result->value.ptr);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->value.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null value in HttpHeader struct");
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::HttpHeader_Data* input,
                  HttpHeaderPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    HttpHeaderPtr result(HttpHeader::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      if (!Deserialize_(input->name.ptr, &result->name, context))
        success = false;
      if (!Deserialize_(input->value.ptr, &result->value, context))
        success = false;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

HttpHeader_Reader::HttpHeader_Reader(
    internal::HttpHeader_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
size_t GetSerializedSize_(const HttpRequestPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::HttpRequest_Data);
  size += GetSerializedSize_(input->method);
  size += GetSerializedSize_(input->url);
  size += GetSerializedSize_(input->headers);
  return size;
}

void Serialize_(HttpRequestPtr input, mojo::internal::Buffer* buf,
                internal::HttpRequest_Data** output) {
  if (input) {
    internal::HttpRequest_Data* result =
        internal::HttpRequest_Data::New(buf);
    Serialize_(std::move(input->method), buf, &result->method.ptr);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->method.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null method in HttpRequest struct");
    Serialize_(std::move(input->url), buf, &result->url.ptr);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->url.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null url in HttpRequest struct");
    const mojo::internal::ArrayValidateParams headers_validate_params(
        0, false, nullptr);
    mojo::SerializeArray_(std::move(input->headers), buf,
        &result->headers.ptr, &headers_validate_params);
    result->body = input->body.release();
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::HttpRequest_Data* input,
                  HttpRequestPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    HttpRequestPtr result(HttpRequest::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      if (!Deserialize_(input->method.ptr, &result->method, context))
        success = false;
      if (!Deserialize_(input->url.ptr, &result->url, context))
        success = false;
      if (!Deserialize_(input->headers.ptr, &result->headers, context))
        success = false;
      result->body.reset(mojo::internal::FetchAndReset(&input->body));
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

HttpRequest_Reader::HttpRequest_Reader(
    internal::HttpRequest_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
size_t GetSerializedSize_(const HttpResponsePtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::HttpResponse_Data);
  size += GetSerializedSize_(input->headers);
  return size;
}

void Serialize_(HttpResponsePtr input, mojo::internal::Buffer* buf,
                internal::HttpResponse_Data** output) {
  if (input) {
    internal::HttpResponse_Data* result =
        internal::HttpResponse_Data::New(buf);
    result->status_code = input->status_code;
    const mojo::internal::ArrayValidateParams headers_validate_params(
        0, false, nullptr);
    mojo::SerializeArray_(std::move(input->headers), buf,
        &result->headers.ptr, &headers_validate_params);
    result->body = input->body.release();
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::HttpResponse_Data* input,
                  HttpResponsePtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    HttpResponsePtr result(HttpResponse::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->status_code = input->status_code;
      if (!Deserialize_(input->headers.ptr, &result->headers, context))
        success = false;
      result->body.reset(mojo::internal::FetchAndReset(&input->body));
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

HttpResponse_Reader::HttpResponse_Reader(
    internal::HttpResponse_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
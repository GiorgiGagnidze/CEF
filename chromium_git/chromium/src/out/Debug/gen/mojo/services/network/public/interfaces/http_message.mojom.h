// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_SERVICES_NETWORK_PUBLIC_INTERFACES_HTTP_MESSAGE_MOJOM_H_
#define MOJO_SERVICES_NETWORK_PUBLIC_INTERFACES_HTTP_MESSAGE_MOJOM_H_

#include <stdint.h>
#include <ostream>

#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/callback.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/lib/control_message_proxy.h"
#include "mojo/public/cpp/bindings/lib/native_serialization.h"
#include "mojo/public/cpp/bindings/map.h"
#include "mojo/public/cpp/bindings/message_filter.h"
#include "mojo/public/cpp/bindings/no_interface.h"
#include "mojo/public/cpp/bindings/string.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/services/network/public/interfaces/http_message.mojom-internal.h"
namespace mojo {

class HttpHeader;
class HttpHeader_Reader;

using HttpHeaderPtr = mojo::InlinedStructPtr<HttpHeader>;


class HttpRequest;
class HttpRequest_Reader;

using HttpRequestPtr = mojo::StructPtr<HttpRequest>;


class HttpResponse;
class HttpResponse_Reader;

using HttpResponsePtr = mojo::StructPtr<HttpResponse>;





class HttpHeader_Reader;

class HttpHeader {
 public:
  using Data_ = internal::HttpHeader_Data;
  using Reader = HttpHeader_Reader;

  static HttpHeaderPtr New();

  template <typename U>
  static HttpHeaderPtr From(const U& u) {
    return mojo::TypeConverter<HttpHeaderPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, HttpHeader>::Convert(*this);
  }

  HttpHeader();
  ~HttpHeader();


  HttpHeaderPtr Clone() const;
  bool Equals(const HttpHeader& other) const;

  mojo::String name;
  mojo::String value;
};






class HttpRequest_Reader;

class HttpRequest {
 public:
  using Data_ = internal::HttpRequest_Data;
  using Reader = HttpRequest_Reader;

  static HttpRequestPtr New();

  template <typename U>
  static HttpRequestPtr From(const U& u) {
    return mojo::TypeConverter<HttpRequestPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, HttpRequest>::Convert(*this);
  }

  HttpRequest();
  ~HttpRequest();


  bool Equals(const HttpRequest& other) const;

  mojo::String method;
  mojo::String url;
  mojo::Array<HttpHeaderPtr> headers;
  mojo::ScopedDataPipeConsumerHandle body;
};


class HttpResponse_Reader;

class HttpResponse {
 public:
  using Data_ = internal::HttpResponse_Data;
  using Reader = HttpResponse_Reader;

  static HttpResponsePtr New();

  template <typename U>
  static HttpResponsePtr From(const U& u) {
    return mojo::TypeConverter<HttpResponsePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, HttpResponse>::Convert(*this);
  }

  HttpResponse();
  ~HttpResponse();


  bool Equals(const HttpResponse& other) const;

  uint32_t status_code;
  mojo::Array<HttpHeaderPtr> headers;
  mojo::ScopedDataPipeConsumerHandle body;
};


size_t GetSerializedSize_(const HttpHeaderPtr& input);
void Serialize_(HttpHeaderPtr input, mojo::internal::Buffer* buffer,
                internal::HttpHeader_Data** output);
bool Deserialize_(internal::HttpHeader_Data* input,
                  HttpHeaderPtr* output,
                  mojo::internal::SerializationContext* context);


class HttpHeader_Reader {
 public:
  HttpHeader_Reader(internal::HttpHeader_Data* data,
                         mojo::internal::SerializationContext* context);
  // TODO(rockot): Support reading other object kinds. (name() omitted)
  // TODO(rockot): Support reading other object kinds. (value() omitted)

 private:
  internal::HttpHeader_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct HttpHeader_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::HttpHeader_Data);
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field name";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field value";
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::HttpHeader_Data** output) {
    internal::HttpHeader_Data* result =
        internal::HttpHeader_Data::New(buffer);
    result->name = mojo::StructTraits<HttpHeader, NativeType>
        ::name(input);
    result->value = mojo::StructTraits<HttpHeader, NativeType>
        ::value(input);
    *output = result;
  }

  static bool Deserialize(internal::HttpHeader_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<HttpHeader, NativeType>::Read(
        HttpHeader_Reader(input, context), output);
  }
};  
size_t GetSerializedSize_(const HttpRequestPtr& input);
void Serialize_(HttpRequestPtr input, mojo::internal::Buffer* buffer,
                internal::HttpRequest_Data** output);
bool Deserialize_(internal::HttpRequest_Data* input,
                  HttpRequestPtr* output,
                  mojo::internal::SerializationContext* context);


class HttpRequest_Reader {
 public:
  HttpRequest_Reader(internal::HttpRequest_Data* data,
                         mojo::internal::SerializationContext* context);
  // TODO(rockot): Support reading other object kinds. (method() omitted)
  // TODO(rockot): Support reading other object kinds. (url() omitted)
  // TODO(rockot): Support reading other object kinds. (headers() omitted)
  // TODO(rockot): Support reading handles. (body() omitted)

 private:
  internal::HttpRequest_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct HttpRequest_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::HttpRequest_Data);
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field method";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field url";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field headers";
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::HttpRequest_Data** output) {
    internal::HttpRequest_Data* result =
        internal::HttpRequest_Data::New(buffer);
    result->method = mojo::StructTraits<HttpRequest, NativeType>
        ::method(input);
    result->url = mojo::StructTraits<HttpRequest, NativeType>
        ::url(input);
    result->headers = mojo::StructTraits<HttpRequest, NativeType>
        ::headers(input);
    result->body = mojo::StructTraits<HttpRequest, NativeType>
        ::body(input);
    *output = result;
  }

  static bool Deserialize(internal::HttpRequest_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<HttpRequest, NativeType>::Read(
        HttpRequest_Reader(input, context), output);
  }
};  
size_t GetSerializedSize_(const HttpResponsePtr& input);
void Serialize_(HttpResponsePtr input, mojo::internal::Buffer* buffer,
                internal::HttpResponse_Data** output);
bool Deserialize_(internal::HttpResponse_Data* input,
                  HttpResponsePtr* output,
                  mojo::internal::SerializationContext* context);


class HttpResponse_Reader {
 public:
  HttpResponse_Reader(internal::HttpResponse_Data* data,
                         mojo::internal::SerializationContext* context);
  uint32_t status_code() const { return data_->status_code; }
  // TODO(rockot): Support reading other object kinds. (headers() omitted)
  // TODO(rockot): Support reading handles. (body() omitted)

 private:
  internal::HttpResponse_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct HttpResponse_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::HttpResponse_Data);
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field headers";
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::HttpResponse_Data** output) {
    internal::HttpResponse_Data* result =
        internal::HttpResponse_Data::New(buffer);
    result->status_code = mojo::StructTraits<HttpResponse, NativeType>
        ::status_code(input);
    result->headers = mojo::StructTraits<HttpResponse, NativeType>
        ::headers(input);
    result->body = mojo::StructTraits<HttpResponse, NativeType>
        ::body(input);
    *output = result;
  }

  static bool Deserialize(internal::HttpResponse_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<HttpResponse, NativeType>::Read(
        HttpResponse_Reader(input, context), output);
  }
};  
}  // namespace mojo

#endif  // MOJO_SERVICES_NETWORK_PUBLIC_INTERFACES_HTTP_MESSAGE_MOJOM_H_
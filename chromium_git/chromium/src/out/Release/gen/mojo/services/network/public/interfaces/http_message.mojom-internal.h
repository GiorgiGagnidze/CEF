// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_SERVICES_NETWORK_PUBLIC_INTERFACES_HTTP_MESSAGE_MOJOM_INTERNAL_H_
#define MOJO_SERVICES_NETWORK_PUBLIC_INTERFACES_HTTP_MESSAGE_MOJOM_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/native_serialization.h"
#include "mojo/public/cpp/bindings/lib/union_accessor.h"
#include "mojo/public/cpp/bindings/lib/value_traits.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"

namespace mojo {
namespace internal {
class BoundsChecker;
}
}
namespace mojo {

class HttpHeader;
class HttpRequest;
class HttpResponse;


namespace internal {

class HttpHeader_Data;
class HttpRequest_Data;
class HttpResponse_Data;




#pragma pack(push, 1)


class HttpHeader_Data {
 public:
  static HttpHeader_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer name;
  mojo::internal::StringPointer value;

 private:
  HttpHeader_Data();
  ~HttpHeader_Data() = delete;
};
static_assert(sizeof(HttpHeader_Data) == 24,
              "Bad sizeof(HttpHeader_Data)");
class HttpRequest_Data {
 public:
  static HttpRequest_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer method;
  mojo::internal::StringPointer url;
  mojo::internal::ArrayPointer<internal::HttpHeader_Data*> headers;
  mojo::DataPipeConsumerHandle body;
  uint8_t padfinal_[4];

 private:
  HttpRequest_Data();
  ~HttpRequest_Data() = delete;
};
static_assert(sizeof(HttpRequest_Data) == 40,
              "Bad sizeof(HttpRequest_Data)");
class HttpResponse_Data {
 public:
  static HttpResponse_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint32_t status_code;
  mojo::DataPipeConsumerHandle body;
  mojo::internal::ArrayPointer<internal::HttpHeader_Data*> headers;

 private:
  HttpResponse_Data();
  ~HttpResponse_Data() = delete;
};
static_assert(sizeof(HttpResponse_Data) == 24,
              "Bad sizeof(HttpResponse_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojo

#endif  // MOJO_SERVICES_NETWORK_PUBLIC_INTERFACES_HTTP_MESSAGE_MOJOM_INTERNAL_H_
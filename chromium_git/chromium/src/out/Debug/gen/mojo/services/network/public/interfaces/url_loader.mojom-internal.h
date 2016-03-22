// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_SERVICES_NETWORK_PUBLIC_INTERFACES_URL_LOADER_MOJOM_INTERNAL_H_
#define MOJO_SERVICES_NETWORK_PUBLIC_INTERFACES_URL_LOADER_MOJOM_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/native_serialization.h"
#include "mojo/public/cpp/bindings/lib/union_accessor.h"
#include "mojo/public/cpp/bindings/lib/value_traits.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/services/network/public/interfaces/http_message.mojom-internal.h"
#include "mojo/services/network/public/interfaces/network_error.mojom-internal.h"

namespace mojo {
namespace internal {
class BoundsChecker;
}
}
namespace mojo {

class URLRequest;
class URLResponse;
class URLLoaderStatus;


namespace internal {

class URLRequest_Data;
class URLResponse_Data;
class URLLoaderStatus_Data;




#pragma pack(push, 1)


class URLRequest_Data {
 public:
  static URLRequest_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer url;
  mojo::internal::StringPointer method;
  mojo::internal::ArrayPointer<mojo::internal::HttpHeader_Data*> headers;
  mojo::internal::ArrayPointer<mojo::DataPipeConsumerHandle> body;
  uint32_t response_body_buffer_size;
  uint8_t auto_follow_redirects : 1;
  uint8_t bypass_cache : 1;
  uint8_t pad6_[3];
  int64_t originating_time_ticks;

 private:
  URLRequest_Data();
  ~URLRequest_Data() = delete;
};
static_assert(sizeof(URLRequest_Data) == 56,
              "Bad sizeof(URLRequest_Data)");
class URLResponse_Data {
 public:
  static URLResponse_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<mojo::internal::NetworkError_Data> error;
  mojo::DataPipeConsumerHandle body;
  uint32_t status_code;
  mojo::internal::StringPointer url;
  mojo::internal::StringPointer site;
  mojo::internal::StringPointer status_line;
  mojo::internal::ArrayPointer<mojo::internal::HttpHeader_Data*> headers;
  mojo::internal::StringPointer mime_type;
  mojo::internal::StringPointer charset;
  mojo::internal::StringPointer redirect_method;
  mojo::internal::StringPointer redirect_url;
  mojo::internal::StringPointer redirect_referrer;

 private:
  URLResponse_Data();
  ~URLResponse_Data() = delete;
};
static_assert(sizeof(URLResponse_Data) == 96,
              "Bad sizeof(URLResponse_Data)");
class URLLoaderStatus_Data {
 public:
  static URLLoaderStatus_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<mojo::internal::NetworkError_Data> error;
  uint8_t is_loading : 1;
  uint8_t pad1_[7];
  int64_t content_length;
  int64_t bytes_read;

 private:
  URLLoaderStatus_Data();
  ~URLLoaderStatus_Data() = delete;
};
static_assert(sizeof(URLLoaderStatus_Data) == 40,
              "Bad sizeof(URLLoaderStatus_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojo

#endif  // MOJO_SERVICES_NETWORK_PUBLIC_INTERFACES_URL_LOADER_MOJOM_INTERNAL_H_
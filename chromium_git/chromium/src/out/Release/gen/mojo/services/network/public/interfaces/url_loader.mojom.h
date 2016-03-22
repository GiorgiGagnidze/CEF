// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_SERVICES_NETWORK_PUBLIC_INTERFACES_URL_LOADER_MOJOM_H_
#define MOJO_SERVICES_NETWORK_PUBLIC_INTERFACES_URL_LOADER_MOJOM_H_

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
#include "mojo/services/network/public/interfaces/url_loader.mojom-internal.h"
#include "mojo/services/network/public/interfaces/http_message.mojom.h"
#include "mojo/services/network/public/interfaces/network_error.mojom.h"
namespace mojo {

class URLLoader;
using URLLoaderPtr = mojo::InterfacePtr<URLLoader>;
using URLLoaderPtrInfo = mojo::InterfacePtrInfo<URLLoader>;
using URLLoaderAssociatedPtr =
    mojo::AssociatedInterfacePtr<URLLoader>;
using URLLoaderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<URLLoader>;

class URLRequest;
class URLRequest_Reader;

using URLRequestPtr = mojo::StructPtr<URLRequest>;


class URLResponse;
class URLResponse_Reader;

using URLResponsePtr = mojo::StructPtr<URLResponse>;


class URLLoaderStatus;
class URLLoaderStatus_Reader;

using URLLoaderStatusPtr = mojo::StructPtr<URLLoaderStatus>;



class URLLoaderProxy;
class URLLoaderStub;

class URLLoaderRequestValidator;
class URLLoaderResponseValidator;

class URLLoader {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::mojo::URLLoader;

  using Proxy_ = URLLoaderProxy;
  using Stub_ = URLLoaderStub;

  using RequestValidator_ = URLLoaderRequestValidator;
  using ResponseValidator_ = URLLoaderResponseValidator;

  virtual ~URLLoader() {}

  using StartCallback = mojo::Callback<void(URLResponsePtr)>;
  virtual void Start(URLRequestPtr request, const StartCallback& callback) = 0;

  using FollowRedirectCallback = mojo::Callback<void(URLResponsePtr)>;
  virtual void FollowRedirect(const FollowRedirectCallback& callback) = 0;

  using QueryStatusCallback = mojo::Callback<void(URLLoaderStatusPtr)>;
  virtual void QueryStatus(const QueryStatusCallback& callback) = 0;
};

class URLLoaderProxy
    : public URLLoader,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit URLLoaderProxy(mojo::MessageReceiverWithResponder* receiver);
  void Start(
      URLRequestPtr request, const StartCallback& callback
  ) override;
  void FollowRedirect(
      const FollowRedirectCallback& callback
  ) override;
  void QueryStatus(
      const QueryStatusCallback& callback
  ) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class URLLoaderStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  URLLoaderStub();
  ~URLLoaderStub() override;
  void set_sink(URLLoader* sink) { sink_ = sink; }
  URLLoader* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  URLLoader* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class URLLoaderRequestValidator : public mojo::MessageFilter {
 public:
  explicit URLLoaderRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class URLLoaderResponseValidator : public mojo::MessageFilter {
 public:
  explicit URLLoaderResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};







class URLRequest_Reader;

class URLRequest {
 public:
  using Data_ = internal::URLRequest_Data;
  using Reader = URLRequest_Reader;

  static URLRequestPtr New();

  template <typename U>
  static URLRequestPtr From(const U& u) {
    return mojo::TypeConverter<URLRequestPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, URLRequest>::Convert(*this);
  }

  URLRequest();
  ~URLRequest();


  bool Equals(const URLRequest& other) const;

  mojo::String url;
  mojo::String method;
  mojo::Array<mojo::HttpHeaderPtr> headers;
  mojo::Array<mojo::ScopedDataPipeConsumerHandle> body;
  uint32_t response_body_buffer_size;
  bool auto_follow_redirects;
  bool bypass_cache;
  int64_t originating_time_ticks;
};


class URLResponse_Reader;

class URLResponse {
 public:
  using Data_ = internal::URLResponse_Data;
  using Reader = URLResponse_Reader;

  static URLResponsePtr New();

  template <typename U>
  static URLResponsePtr From(const U& u) {
    return mojo::TypeConverter<URLResponsePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, URLResponse>::Convert(*this);
  }

  URLResponse();
  ~URLResponse();


  bool Equals(const URLResponse& other) const;

  mojo::NetworkErrorPtr error;
  mojo::ScopedDataPipeConsumerHandle body;
  mojo::String url;
  mojo::String site;
  uint32_t status_code;
  mojo::String status_line;
  mojo::Array<mojo::HttpHeaderPtr> headers;
  mojo::String mime_type;
  mojo::String charset;
  mojo::String redirect_method;
  mojo::String redirect_url;
  mojo::String redirect_referrer;
};


class URLLoaderStatus_Reader;

class URLLoaderStatus {
 public:
  using Data_ = internal::URLLoaderStatus_Data;
  using Reader = URLLoaderStatus_Reader;

  static URLLoaderStatusPtr New();

  template <typename U>
  static URLLoaderStatusPtr From(const U& u) {
    return mojo::TypeConverter<URLLoaderStatusPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, URLLoaderStatus>::Convert(*this);
  }

  URLLoaderStatus();
  ~URLLoaderStatus();


  URLLoaderStatusPtr Clone() const;
  bool Equals(const URLLoaderStatus& other) const;

  mojo::NetworkErrorPtr error;
  bool is_loading;
  int64_t content_length;
  int64_t bytes_read;
};


size_t GetSerializedSize_(const URLRequestPtr& input);
void Serialize_(URLRequestPtr input, mojo::internal::Buffer* buffer,
                internal::URLRequest_Data** output);
bool Deserialize_(internal::URLRequest_Data* input,
                  URLRequestPtr* output,
                  mojo::internal::SerializationContext* context);


class URLRequest_Reader {
 public:
  URLRequest_Reader(internal::URLRequest_Data* data,
                         mojo::internal::SerializationContext* context);
  // TODO(rockot): Support reading other object kinds. (url() omitted)
  // TODO(rockot): Support reading other object kinds. (method() omitted)
  // TODO(rockot): Support reading other object kinds. (headers() omitted)
  // TODO(rockot): Support reading other object kinds. (body() omitted)
  uint32_t response_body_buffer_size() const { return data_->response_body_buffer_size; }
  bool auto_follow_redirects() const { return data_->auto_follow_redirects; }
  bool bypass_cache() const { return data_->bypass_cache; }
  int64_t originating_time_ticks() const { return data_->originating_time_ticks; }

 private:
  internal::URLRequest_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct URLRequest_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::URLRequest_Data);
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field url";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field method";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field headers";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field body";
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::URLRequest_Data** output) {
    internal::URLRequest_Data* result =
        internal::URLRequest_Data::New(buffer);
    result->url = mojo::StructTraits<URLRequest, NativeType>
        ::url(input);
    result->method = mojo::StructTraits<URLRequest, NativeType>
        ::method(input);
    result->headers = mojo::StructTraits<URLRequest, NativeType>
        ::headers(input);
    result->body = mojo::StructTraits<URLRequest, NativeType>
        ::body(input);
    result->response_body_buffer_size = mojo::StructTraits<URLRequest, NativeType>
        ::response_body_buffer_size(input);
    result->auto_follow_redirects = mojo::StructTraits<URLRequest, NativeType>
        ::auto_follow_redirects(input);
    result->bypass_cache = mojo::StructTraits<URLRequest, NativeType>
        ::bypass_cache(input);
    result->originating_time_ticks = mojo::StructTraits<URLRequest, NativeType>
        ::originating_time_ticks(input);
    *output = result;
  }

  static bool Deserialize(internal::URLRequest_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<URLRequest, NativeType>::Read(
        URLRequest_Reader(input, context), output);
  }
};  
size_t GetSerializedSize_(const URLResponsePtr& input);
void Serialize_(URLResponsePtr input, mojo::internal::Buffer* buffer,
                internal::URLResponse_Data** output);
bool Deserialize_(internal::URLResponse_Data* input,
                  URLResponsePtr* output,
                  mojo::internal::SerializationContext* context);


class URLResponse_Reader {
 public:
  URLResponse_Reader(internal::URLResponse_Data* data,
                         mojo::internal::SerializationContext* context);
  mojo::NetworkError::Reader error() const;
  // TODO(rockot): Support reading handles. (body() omitted)
  // TODO(rockot): Support reading other object kinds. (url() omitted)
  // TODO(rockot): Support reading other object kinds. (site() omitted)
  uint32_t status_code() const { return data_->status_code; }
  // TODO(rockot): Support reading other object kinds. (status_line() omitted)
  // TODO(rockot): Support reading other object kinds. (headers() omitted)
  // TODO(rockot): Support reading other object kinds. (mime_type() omitted)
  // TODO(rockot): Support reading other object kinds. (charset() omitted)
  // TODO(rockot): Support reading other object kinds. (redirect_method() omitted)
  // TODO(rockot): Support reading other object kinds. (redirect_url() omitted)
  // TODO(rockot): Support reading other object kinds. (redirect_referrer() omitted)

 private:
  internal::URLResponse_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct URLResponse_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::URLResponse_Data);
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field error";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field url";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field site";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field status_line";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field headers";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field mime_type";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field charset";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field redirect_method";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field redirect_url";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field redirect_referrer";
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::URLResponse_Data** output) {
    internal::URLResponse_Data* result =
        internal::URLResponse_Data::New(buffer);
    result->error = mojo::StructTraits<URLResponse, NativeType>
        ::error(input);
    result->body = mojo::StructTraits<URLResponse, NativeType>
        ::body(input);
    result->url = mojo::StructTraits<URLResponse, NativeType>
        ::url(input);
    result->site = mojo::StructTraits<URLResponse, NativeType>
        ::site(input);
    result->status_code = mojo::StructTraits<URLResponse, NativeType>
        ::status_code(input);
    result->status_line = mojo::StructTraits<URLResponse, NativeType>
        ::status_line(input);
    result->headers = mojo::StructTraits<URLResponse, NativeType>
        ::headers(input);
    result->mime_type = mojo::StructTraits<URLResponse, NativeType>
        ::mime_type(input);
    result->charset = mojo::StructTraits<URLResponse, NativeType>
        ::charset(input);
    result->redirect_method = mojo::StructTraits<URLResponse, NativeType>
        ::redirect_method(input);
    result->redirect_url = mojo::StructTraits<URLResponse, NativeType>
        ::redirect_url(input);
    result->redirect_referrer = mojo::StructTraits<URLResponse, NativeType>
        ::redirect_referrer(input);
    *output = result;
  }

  static bool Deserialize(internal::URLResponse_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<URLResponse, NativeType>::Read(
        URLResponse_Reader(input, context), output);
  }
};  
size_t GetSerializedSize_(const URLLoaderStatusPtr& input);
void Serialize_(URLLoaderStatusPtr input, mojo::internal::Buffer* buffer,
                internal::URLLoaderStatus_Data** output);
bool Deserialize_(internal::URLLoaderStatus_Data* input,
                  URLLoaderStatusPtr* output,
                  mojo::internal::SerializationContext* context);


class URLLoaderStatus_Reader {
 public:
  URLLoaderStatus_Reader(internal::URLLoaderStatus_Data* data,
                         mojo::internal::SerializationContext* context);
  mojo::NetworkError::Reader error() const;
  bool is_loading() const { return data_->is_loading; }
  int64_t content_length() const { return data_->content_length; }
  int64_t bytes_read() const { return data_->bytes_read; }

 private:
  internal::URLLoaderStatus_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct URLLoaderStatus_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::URLLoaderStatus_Data);
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field error";
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::URLLoaderStatus_Data** output) {
    internal::URLLoaderStatus_Data* result =
        internal::URLLoaderStatus_Data::New(buffer);
    result->error = mojo::StructTraits<URLLoaderStatus, NativeType>
        ::error(input);
    result->is_loading = mojo::StructTraits<URLLoaderStatus, NativeType>
        ::is_loading(input);
    result->content_length = mojo::StructTraits<URLLoaderStatus, NativeType>
        ::content_length(input);
    result->bytes_read = mojo::StructTraits<URLLoaderStatus, NativeType>
        ::bytes_read(input);
    *output = result;
  }

  static bool Deserialize(internal::URLLoaderStatus_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<URLLoaderStatus, NativeType>::Read(
        URLLoaderStatus_Reader(input, context), output);
  }
};  
}  // namespace mojo

#endif  // MOJO_SERVICES_NETWORK_PUBLIC_INTERFACES_URL_LOADER_MOJOM_H_
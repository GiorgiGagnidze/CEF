// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef EXTENSIONS_COMMON_API_MIME_HANDLER_MOJOM_H_
#define EXTENSIONS_COMMON_API_MIME_HANDLER_MOJOM_H_

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
#include "extensions/common/api/mime_handler.mojom-internal.h"
namespace extensions {
namespace mime_handler {

class MimeHandlerService;
using MimeHandlerServicePtr = mojo::InterfacePtr<MimeHandlerService>;
using MimeHandlerServicePtrInfo = mojo::InterfacePtrInfo<MimeHandlerService>;
using MimeHandlerServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<MimeHandlerService>;
using MimeHandlerServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<MimeHandlerService>;

class StreamInfo;
class StreamInfo_Reader;

using StreamInfoPtr = mojo::StructPtr<StreamInfo>;



class MimeHandlerServiceProxy;
class MimeHandlerServiceStub;

class MimeHandlerServiceRequestValidator;
class MimeHandlerServiceResponseValidator;

class MimeHandlerService {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::extensions::mime_handler::MimeHandlerService;

  using Proxy_ = MimeHandlerServiceProxy;
  using Stub_ = MimeHandlerServiceStub;

  using RequestValidator_ = MimeHandlerServiceRequestValidator;
  using ResponseValidator_ = MimeHandlerServiceResponseValidator;

  virtual ~MimeHandlerService() {}

  using GetStreamInfoCallback = mojo::Callback<void(StreamInfoPtr)>;
  virtual void GetStreamInfo(const GetStreamInfoCallback& callback) = 0;

  using AbortStreamCallback = mojo::Callback<void()>;
  virtual void AbortStream(const AbortStreamCallback& callback) = 0;
};

class MimeHandlerServiceProxy
    : public MimeHandlerService,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit MimeHandlerServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetStreamInfo(
      const GetStreamInfoCallback& callback
  ) override;
  void AbortStream(
      const AbortStreamCallback& callback
  ) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class MimeHandlerServiceStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  MimeHandlerServiceStub();
  ~MimeHandlerServiceStub() override;
  void set_sink(MimeHandlerService* sink) { sink_ = sink; }
  MimeHandlerService* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  MimeHandlerService* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class MimeHandlerServiceRequestValidator : public mojo::MessageFilter {
 public:
  explicit MimeHandlerServiceRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class MimeHandlerServiceResponseValidator : public mojo::MessageFilter {
 public:
  explicit MimeHandlerServiceResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





class StreamInfo_Reader;

class StreamInfo {
 public:
  using Data_ = internal::StreamInfo_Data;
  using Reader = StreamInfo_Reader;

  static StreamInfoPtr New();

  template <typename U>
  static StreamInfoPtr From(const U& u) {
    return mojo::TypeConverter<StreamInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, StreamInfo>::Convert(*this);
  }

  StreamInfo();
  ~StreamInfo();


  StreamInfoPtr Clone() const;
  bool Equals(const StreamInfo& other) const;

  mojo::String mime_type;
  mojo::String original_url;
  mojo::String stream_url;
  int32_t tab_id;
  mojo::Map<mojo::String, mojo::String> response_headers;
  bool embedded;
};


size_t GetSerializedSize_(const StreamInfoPtr& input);
void Serialize_(StreamInfoPtr input, mojo::internal::Buffer* buffer,
                internal::StreamInfo_Data** output);
bool Deserialize_(internal::StreamInfo_Data* input,
                  StreamInfoPtr* output,
                  mojo::internal::SerializationContext* context);


class StreamInfo_Reader {
 public:
  StreamInfo_Reader(internal::StreamInfo_Data* data,
                         mojo::internal::SerializationContext* context);
  // TODO(rockot): Support reading other object kinds. (mime_type() omitted)
  // TODO(rockot): Support reading other object kinds. (original_url() omitted)
  // TODO(rockot): Support reading other object kinds. (stream_url() omitted)
  int32_t tab_id() const { return data_->tab_id; }
  // TODO(rockot): Support reading other object kinds. (response_headers() omitted)
  bool embedded() const { return data_->embedded; }

 private:
  internal::StreamInfo_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct StreamInfo_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::StreamInfo_Data);
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field mime_type";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field original_url";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field stream_url";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field response_headers";
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::StreamInfo_Data** output) {
    internal::StreamInfo_Data* result =
        internal::StreamInfo_Data::New(buffer);
    result->mime_type = mojo::StructTraits<StreamInfo, NativeType>
        ::mime_type(input);
    result->original_url = mojo::StructTraits<StreamInfo, NativeType>
        ::original_url(input);
    result->stream_url = mojo::StructTraits<StreamInfo, NativeType>
        ::stream_url(input);
    result->tab_id = mojo::StructTraits<StreamInfo, NativeType>
        ::tab_id(input);
    result->response_headers = mojo::StructTraits<StreamInfo, NativeType>
        ::response_headers(input);
    result->embedded = mojo::StructTraits<StreamInfo, NativeType>
        ::embedded(input);
    *output = result;
  }

  static bool Deserialize(internal::StreamInfo_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<StreamInfo, NativeType>::Read(
        StreamInfo_Reader(input, context), output);
  }
};  
}  // namespace mime_handler
}  // namespace extensions

#endif  // EXTENSIONS_COMMON_API_MIME_HANDLER_MOJOM_H_
// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef EXTENSIONS_COMMON_MOJO_STASH_MOJOM_H_
#define EXTENSIONS_COMMON_MOJO_STASH_MOJOM_H_

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
#include "extensions/common/mojo/stash.mojom-internal.h"
namespace extensions {

class StashService;
using StashServicePtr = mojo::InterfacePtr<StashService>;
using StashServicePtrInfo = mojo::InterfacePtrInfo<StashService>;
using StashServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<StashService>;
using StashServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<StashService>;

class StashedObject;
class StashedObject_Reader;

using StashedObjectPtr = mojo::StructPtr<StashedObject>;



class StashServiceProxy;
class StashServiceStub;

class StashServiceRequestValidator;
class StashServiceResponseValidator;

class StashService {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::extensions::StashService;

  using Proxy_ = StashServiceProxy;
  using Stub_ = StashServiceStub;

  using RequestValidator_ = StashServiceRequestValidator;
  using ResponseValidator_ = StashServiceResponseValidator;

  virtual ~StashService() {}

  virtual void AddToStash(mojo::Array<StashedObjectPtr> stashed_objects) = 0;

  using RetrieveStashCallback = mojo::Callback<void(mojo::Array<StashedObjectPtr>)>;
  virtual void RetrieveStash(const RetrieveStashCallback& callback) = 0;
};

class StashServiceProxy
    : public StashService,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit StashServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void AddToStash(
      mojo::Array<StashedObjectPtr> stashed_objects
  ) override;
  void RetrieveStash(
      const RetrieveStashCallback& callback
  ) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class StashServiceStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  StashServiceStub();
  ~StashServiceStub() override;
  void set_sink(StashService* sink) { sink_ = sink; }
  StashService* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  StashService* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class StashServiceRequestValidator : public mojo::MessageFilter {
 public:
  explicit StashServiceRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class StashServiceResponseValidator : public mojo::MessageFilter {
 public:
  explicit StashServiceResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





class StashedObject_Reader;

class StashedObject {
 public:
  using Data_ = internal::StashedObject_Data;
  using Reader = StashedObject_Reader;

  static StashedObjectPtr New();

  template <typename U>
  static StashedObjectPtr From(const U& u) {
    return mojo::TypeConverter<StashedObjectPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, StashedObject>::Convert(*this);
  }

  StashedObject();
  ~StashedObject();


  bool Equals(const StashedObject& other) const;

  mojo::String id;
  mojo::Array<uint8_t> data;
  mojo::Array<mojo::ScopedHandle> stashed_handles;
  bool monitor_handles;
};


size_t GetSerializedSize_(const StashedObjectPtr& input);
void Serialize_(StashedObjectPtr input, mojo::internal::Buffer* buffer,
                internal::StashedObject_Data** output);
bool Deserialize_(internal::StashedObject_Data* input,
                  StashedObjectPtr* output,
                  mojo::internal::SerializationContext* context);


class StashedObject_Reader {
 public:
  StashedObject_Reader(internal::StashedObject_Data* data,
                         mojo::internal::SerializationContext* context);
  // TODO(rockot): Support reading other object kinds. (id() omitted)
  // TODO(rockot): Support reading other object kinds. (data() omitted)
  // TODO(rockot): Support reading other object kinds. (stashed_handles() omitted)
  bool monitor_handles() const { return data_->monitor_handles; }

 private:
  internal::StashedObject_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct StashedObject_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::StashedObject_Data);
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field id";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field data";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field stashed_handles";
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::StashedObject_Data** output) {
    internal::StashedObject_Data* result =
        internal::StashedObject_Data::New(buffer);
    result->id = mojo::StructTraits<StashedObject, NativeType>
        ::id(input);
    result->data = mojo::StructTraits<StashedObject, NativeType>
        ::data(input);
    result->stashed_handles = mojo::StructTraits<StashedObject, NativeType>
        ::stashed_handles(input);
    result->monitor_handles = mojo::StructTraits<StashedObject, NativeType>
        ::monitor_handles(input);
    *output = result;
  }

  static bool Deserialize(internal::StashedObject_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<StashedObject, NativeType>::Read(
        StashedObject_Reader(input, context), output);
  }
};  
}  // namespace extensions

#endif  // EXTENSIONS_COMMON_MOJO_STASH_MOJOM_H_
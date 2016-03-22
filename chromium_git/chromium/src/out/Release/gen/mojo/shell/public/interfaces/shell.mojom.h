// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_SHELL_PUBLIC_INTERFACES_SHELL_MOJOM_H_
#define MOJO_SHELL_PUBLIC_INTERFACES_SHELL_MOJOM_H_

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
#include "mojo/shell/public/interfaces/shell.mojom-internal.h"
#include "mojo/shell/public/interfaces/service_provider.mojom.h"
#include "mojo/services/network/public/interfaces/url_loader.mojom.h"
namespace mojo {

class Shell;
using ShellPtr = mojo::InterfacePtr<Shell>;
using ShellPtrInfo = mojo::InterfacePtrInfo<Shell>;
using ShellAssociatedPtr =
    mojo::AssociatedInterfacePtr<Shell>;
using ShellAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Shell>;

class CapabilityFilter;
class CapabilityFilter_Reader;

using CapabilityFilterPtr = mojo::StructPtr<CapabilityFilter>;



class ShellProxy;
class ShellStub;

class ShellRequestValidator;
class ShellResponseValidator;

class Shell {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::mojo::Shell;

  using Proxy_ = ShellProxy;
  using Stub_ = ShellStub;

  using RequestValidator_ = ShellRequestValidator;
  using ResponseValidator_ = ShellResponseValidator;

  static const uint32_t kInvalidApplicationID = 0U;
  virtual ~Shell() {}

  using ConnectToApplicationCallback = mojo::Callback<void(uint32_t, uint32_t)>;
  virtual void ConnectToApplication(mojo::URLRequestPtr application_url, mojo::InterfaceRequest<mojo::ServiceProvider> services, mojo::ServiceProviderPtr exposed_services, CapabilityFilterPtr filter, const ConnectToApplicationCallback& callback) = 0;

  virtual void QuitApplication() = 0;
};

class ShellProxy
    : public Shell,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit ShellProxy(mojo::MessageReceiverWithResponder* receiver);
  void ConnectToApplication(
      mojo::URLRequestPtr application_url, mojo::InterfaceRequest<mojo::ServiceProvider> services, mojo::ServiceProviderPtr exposed_services, CapabilityFilterPtr filter, const ConnectToApplicationCallback& callback
  ) override;
  void QuitApplication(
      
  ) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class ShellStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  ShellStub();
  ~ShellStub() override;
  void set_sink(Shell* sink) { sink_ = sink; }
  Shell* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  Shell* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class ShellRequestValidator : public mojo::MessageFilter {
 public:
  explicit ShellRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class ShellResponseValidator : public mojo::MessageFilter {
 public:
  explicit ShellResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





class CapabilityFilter_Reader;

class CapabilityFilter {
 public:
  using Data_ = internal::CapabilityFilter_Data;
  using Reader = CapabilityFilter_Reader;

  static CapabilityFilterPtr New();

  template <typename U>
  static CapabilityFilterPtr From(const U& u) {
    return mojo::TypeConverter<CapabilityFilterPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CapabilityFilter>::Convert(*this);
  }

  CapabilityFilter();
  ~CapabilityFilter();


  CapabilityFilterPtr Clone() const;
  bool Equals(const CapabilityFilter& other) const;

  mojo::Map<mojo::String, mojo::Array<mojo::String> > filter;
};


size_t GetSerializedSize_(const CapabilityFilterPtr& input);
void Serialize_(CapabilityFilterPtr input, mojo::internal::Buffer* buffer,
                internal::CapabilityFilter_Data** output);
bool Deserialize_(internal::CapabilityFilter_Data* input,
                  CapabilityFilterPtr* output,
                  mojo::internal::SerializationContext* context);


class CapabilityFilter_Reader {
 public:
  CapabilityFilter_Reader(internal::CapabilityFilter_Data* data,
                         mojo::internal::SerializationContext* context);
  // TODO(rockot): Support reading other object kinds. (filter() omitted)

 private:
  internal::CapabilityFilter_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct CapabilityFilter_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::CapabilityFilter_Data);
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field filter";
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::CapabilityFilter_Data** output) {
    internal::CapabilityFilter_Data* result =
        internal::CapabilityFilter_Data::New(buffer);
    result->filter = mojo::StructTraits<CapabilityFilter, NativeType>
        ::filter(input);
    *output = result;
  }

  static bool Deserialize(internal::CapabilityFilter_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<CapabilityFilter, NativeType>::Read(
        CapabilityFilter_Reader(input, context), output);
  }
};  
}  // namespace mojo

#endif  // MOJO_SHELL_PUBLIC_INTERFACES_SHELL_MOJOM_H_
// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_SHELL_PUBLIC_INTERFACES_SERVICE_PROVIDER_MOJOM_H_
#define MOJO_SHELL_PUBLIC_INTERFACES_SERVICE_PROVIDER_MOJOM_H_

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
#include "mojo/shell/public/interfaces/service_provider.mojom-internal.h"
namespace mojo {

class ServiceProvider;
using ServiceProviderPtr = mojo::InterfacePtr<ServiceProvider>;
using ServiceProviderPtrInfo = mojo::InterfacePtrInfo<ServiceProvider>;
using ServiceProviderAssociatedPtr =
    mojo::AssociatedInterfacePtr<ServiceProvider>;
using ServiceProviderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ServiceProvider>;


class ServiceProviderProxy;
class ServiceProviderStub;

class ServiceProviderRequestValidator;

class ServiceProvider {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::mojo::ServiceProvider;

  using Proxy_ = ServiceProviderProxy;
  using Stub_ = ServiceProviderStub;

  using RequestValidator_ = ServiceProviderRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;

  virtual ~ServiceProvider() {}

  virtual void ConnectToService(const mojo::String& interface_name, mojo::ScopedMessagePipeHandle pipe) = 0;
};

class ServiceProviderProxy
    : public ServiceProvider,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit ServiceProviderProxy(mojo::MessageReceiverWithResponder* receiver);
  void ConnectToService(
      const mojo::String& interface_name, mojo::ScopedMessagePipeHandle pipe
  ) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class ServiceProviderStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  ServiceProviderStub();
  ~ServiceProviderStub() override;
  void set_sink(ServiceProvider* sink) { sink_ = sink; }
  ServiceProvider* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  ServiceProvider* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class ServiceProviderRequestValidator : public mojo::MessageFilter {
 public:
  explicit ServiceProviderRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};



}  // namespace mojo

#endif  // MOJO_SHELL_PUBLIC_INTERFACES_SERVICE_PROVIDER_MOJOM_H_
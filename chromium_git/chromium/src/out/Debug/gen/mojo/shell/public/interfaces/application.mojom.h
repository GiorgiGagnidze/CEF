// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_SHELL_PUBLIC_INTERFACES_APPLICATION_MOJOM_H_
#define MOJO_SHELL_PUBLIC_INTERFACES_APPLICATION_MOJOM_H_

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
#include "mojo/shell/public/interfaces/application.mojom-internal.h"
#include "mojo/shell/public/interfaces/service_provider.mojom.h"
#include "mojo/shell/public/interfaces/shell.mojom.h"
namespace mojo {

class Application;
using ApplicationPtr = mojo::InterfacePtr<Application>;
using ApplicationPtrInfo = mojo::InterfacePtrInfo<Application>;
using ApplicationAssociatedPtr =
    mojo::AssociatedInterfacePtr<Application>;
using ApplicationAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Application>;


class ApplicationProxy;
class ApplicationStub;

class ApplicationRequestValidator;
class ApplicationResponseValidator;

class Application {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::mojo::Application;

  using Proxy_ = ApplicationProxy;
  using Stub_ = ApplicationStub;

  using RequestValidator_ = ApplicationRequestValidator;
  using ResponseValidator_ = ApplicationResponseValidator;

  virtual ~Application() {}

  virtual void Initialize(mojo::ShellPtr shell, const mojo::String& url, uint32_t id) = 0;

  virtual void AcceptConnection(const mojo::String& requestor_url, uint32_t requestor_id, mojo::InterfaceRequest<mojo::ServiceProvider> services, mojo::ServiceProviderPtr exposed_services, mojo::Array<mojo::String> allowed_interfaces, const mojo::String& resolved_url) = 0;

  using OnQuitRequestedCallback = mojo::Callback<void(bool)>;
  virtual void OnQuitRequested(const OnQuitRequestedCallback& callback) = 0;
};

class ApplicationProxy
    : public Application,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit ApplicationProxy(mojo::MessageReceiverWithResponder* receiver);
  void Initialize(
      mojo::ShellPtr shell, const mojo::String& url, uint32_t id
  ) override;
  void AcceptConnection(
      const mojo::String& requestor_url, uint32_t requestor_id, mojo::InterfaceRequest<mojo::ServiceProvider> services, mojo::ServiceProviderPtr exposed_services, mojo::Array<mojo::String> allowed_interfaces, const mojo::String& resolved_url
  ) override;
  void OnQuitRequested(
      const OnQuitRequestedCallback& callback
  ) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class ApplicationStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  ApplicationStub();
  ~ApplicationStub() override;
  void set_sink(Application* sink) { sink_ = sink; }
  Application* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  Application* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class ApplicationRequestValidator : public mojo::MessageFilter {
 public:
  explicit ApplicationRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class ApplicationResponseValidator : public mojo::MessageFilter {
 public:
  explicit ApplicationResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};



}  // namespace mojo

#endif  // MOJO_SHELL_PUBLIC_INTERFACES_APPLICATION_MOJOM_H_
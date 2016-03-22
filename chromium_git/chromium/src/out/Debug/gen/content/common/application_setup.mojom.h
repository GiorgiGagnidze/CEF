// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_APPLICATION_SETUP_MOJOM_H_
#define CONTENT_COMMON_APPLICATION_SETUP_MOJOM_H_

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
#include "content/common/application_setup.mojom-internal.h"
#include "mojo/shell/public/interfaces/service_provider.mojom.h"
namespace content {

class ApplicationSetup;
using ApplicationSetupPtr = mojo::InterfacePtr<ApplicationSetup>;
using ApplicationSetupPtrInfo = mojo::InterfacePtrInfo<ApplicationSetup>;
using ApplicationSetupAssociatedPtr =
    mojo::AssociatedInterfacePtr<ApplicationSetup>;
using ApplicationSetupAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ApplicationSetup>;


class ApplicationSetupProxy;
class ApplicationSetupStub;

class ApplicationSetupRequestValidator;

class ApplicationSetup {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::content::ApplicationSetup;

  using Proxy_ = ApplicationSetupProxy;
  using Stub_ = ApplicationSetupStub;

  using RequestValidator_ = ApplicationSetupRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;

  virtual ~ApplicationSetup() {}

  virtual void ExchangeServiceProviders(mojo::InterfaceRequest<mojo::ServiceProvider> services, mojo::ServiceProviderPtr exposed_services) = 0;
};

class ApplicationSetupProxy
    : public ApplicationSetup,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit ApplicationSetupProxy(mojo::MessageReceiverWithResponder* receiver);
  void ExchangeServiceProviders(
      mojo::InterfaceRequest<mojo::ServiceProvider> services, mojo::ServiceProviderPtr exposed_services
  ) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class ApplicationSetupStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  ApplicationSetupStub();
  ~ApplicationSetupStub() override;
  void set_sink(ApplicationSetup* sink) { sink_ = sink; }
  ApplicationSetup* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  ApplicationSetup* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class ApplicationSetupRequestValidator : public mojo::MessageFilter {
 public:
  explicit ApplicationSetupRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};



}  // namespace content

#endif  // CONTENT_COMMON_APPLICATION_SETUP_MOJOM_H_
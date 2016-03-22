// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_SERVICE_WORKER_EMBEDDED_WORKER_SETUP_MOJOM_H_
#define CONTENT_COMMON_SERVICE_WORKER_EMBEDDED_WORKER_SETUP_MOJOM_H_

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
#include "content/common/service_worker/embedded_worker_setup.mojom-internal.h"
#include "mojo/shell/public/interfaces/service_provider.mojom.h"
namespace content {

class EmbeddedWorkerSetup;
using EmbeddedWorkerSetupPtr = mojo::InterfacePtr<EmbeddedWorkerSetup>;
using EmbeddedWorkerSetupPtrInfo = mojo::InterfacePtrInfo<EmbeddedWorkerSetup>;
using EmbeddedWorkerSetupAssociatedPtr =
    mojo::AssociatedInterfacePtr<EmbeddedWorkerSetup>;
using EmbeddedWorkerSetupAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<EmbeddedWorkerSetup>;


class EmbeddedWorkerSetupProxy;
class EmbeddedWorkerSetupStub;

class EmbeddedWorkerSetupRequestValidator;

class EmbeddedWorkerSetup {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::content::EmbeddedWorkerSetup;

  using Proxy_ = EmbeddedWorkerSetupProxy;
  using Stub_ = EmbeddedWorkerSetupStub;

  using RequestValidator_ = EmbeddedWorkerSetupRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;

  virtual ~EmbeddedWorkerSetup() {}

  virtual void ExchangeServiceProviders(int32_t thread_id, mojo::InterfaceRequest<mojo::ServiceProvider> services, mojo::ServiceProviderPtr exposed_services) = 0;
};

class EmbeddedWorkerSetupProxy
    : public EmbeddedWorkerSetup,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit EmbeddedWorkerSetupProxy(mojo::MessageReceiverWithResponder* receiver);
  void ExchangeServiceProviders(
      int32_t thread_id, mojo::InterfaceRequest<mojo::ServiceProvider> services, mojo::ServiceProviderPtr exposed_services
  ) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class EmbeddedWorkerSetupStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  EmbeddedWorkerSetupStub();
  ~EmbeddedWorkerSetupStub() override;
  void set_sink(EmbeddedWorkerSetup* sink) { sink_ = sink; }
  EmbeddedWorkerSetup* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  EmbeddedWorkerSetup* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class EmbeddedWorkerSetupRequestValidator : public mojo::MessageFilter {
 public:
  explicit EmbeddedWorkerSetupRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};



}  // namespace content

#endif  // CONTENT_COMMON_SERVICE_WORKER_EMBEDDED_WORKER_SETUP_MOJOM_H_
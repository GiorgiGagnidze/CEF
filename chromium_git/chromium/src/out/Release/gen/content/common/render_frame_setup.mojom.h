// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_RENDER_FRAME_SETUP_MOJOM_H_
#define CONTENT_COMMON_RENDER_FRAME_SETUP_MOJOM_H_

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
#include "content/common/render_frame_setup.mojom-internal.h"
#include "mojo/shell/public/interfaces/service_provider.mojom.h"
namespace content {

class RenderFrameSetup;
using RenderFrameSetupPtr = mojo::InterfacePtr<RenderFrameSetup>;
using RenderFrameSetupPtrInfo = mojo::InterfacePtrInfo<RenderFrameSetup>;
using RenderFrameSetupAssociatedPtr =
    mojo::AssociatedInterfacePtr<RenderFrameSetup>;
using RenderFrameSetupAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<RenderFrameSetup>;


class RenderFrameSetupProxy;
class RenderFrameSetupStub;

class RenderFrameSetupRequestValidator;

class RenderFrameSetup {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::content::RenderFrameSetup;

  using Proxy_ = RenderFrameSetupProxy;
  using Stub_ = RenderFrameSetupStub;

  using RequestValidator_ = RenderFrameSetupRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;

  virtual ~RenderFrameSetup() {}

  virtual void ExchangeServiceProviders(int32_t frame_routing_id, mojo::InterfaceRequest<mojo::ServiceProvider> services, mojo::ServiceProviderPtr exposed_services) = 0;
};

class RenderFrameSetupProxy
    : public RenderFrameSetup,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit RenderFrameSetupProxy(mojo::MessageReceiverWithResponder* receiver);
  void ExchangeServiceProviders(
      int32_t frame_routing_id, mojo::InterfaceRequest<mojo::ServiceProvider> services, mojo::ServiceProviderPtr exposed_services
  ) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class RenderFrameSetupStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  RenderFrameSetupStub();
  ~RenderFrameSetupStub() override;
  void set_sink(RenderFrameSetup* sink) { sink_ = sink; }
  RenderFrameSetup* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  RenderFrameSetup* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class RenderFrameSetupRequestValidator : public mojo::MessageFilter {
 public:
  explicit RenderFrameSetupRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};



}  // namespace content

#endif  // CONTENT_COMMON_RENDER_FRAME_SETUP_MOJOM_H_
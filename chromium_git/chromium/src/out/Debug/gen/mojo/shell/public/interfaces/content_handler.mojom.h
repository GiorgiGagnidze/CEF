// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_SHELL_PUBLIC_INTERFACES_CONTENT_HANDLER_MOJOM_H_
#define MOJO_SHELL_PUBLIC_INTERFACES_CONTENT_HANDLER_MOJOM_H_

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
#include "mojo/shell/public/interfaces/content_handler.mojom-internal.h"
#include "mojo/shell/public/interfaces/application.mojom.h"
#include "mojo/services/network/public/interfaces/url_loader.mojom.h"
namespace mojo {

class ContentHandler;
using ContentHandlerPtr = mojo::InterfacePtr<ContentHandler>;
using ContentHandlerPtrInfo = mojo::InterfacePtrInfo<ContentHandler>;
using ContentHandlerAssociatedPtr =
    mojo::AssociatedInterfacePtr<ContentHandler>;
using ContentHandlerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ContentHandler>;


class ContentHandlerProxy;
class ContentHandlerStub;

class ContentHandlerRequestValidator;
class ContentHandlerResponseValidator;

class ContentHandler {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::mojo::ContentHandler;

  using Proxy_ = ContentHandlerProxy;
  using Stub_ = ContentHandlerStub;

  using RequestValidator_ = ContentHandlerRequestValidator;
  using ResponseValidator_ = ContentHandlerResponseValidator;

  virtual ~ContentHandler() {}

  using StartApplicationCallback = mojo::Callback<void()>;
  virtual void StartApplication(mojo::InterfaceRequest<mojo::Application> application, mojo::URLResponsePtr response, const StartApplicationCallback& callback) = 0;
};

class ContentHandlerProxy
    : public ContentHandler,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit ContentHandlerProxy(mojo::MessageReceiverWithResponder* receiver);
  void StartApplication(
      mojo::InterfaceRequest<mojo::Application> application, mojo::URLResponsePtr response, const StartApplicationCallback& callback
  ) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class ContentHandlerStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  ContentHandlerStub();
  ~ContentHandlerStub() override;
  void set_sink(ContentHandler* sink) { sink_ = sink; }
  ContentHandler* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  ContentHandler* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class ContentHandlerRequestValidator : public mojo::MessageFilter {
 public:
  explicit ContentHandlerRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class ContentHandlerResponseValidator : public mojo::MessageFilter {
 public:
  explicit ContentHandlerResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};



}  // namespace mojo

#endif  // MOJO_SHELL_PUBLIC_INTERFACES_CONTENT_HANDLER_MOJOM_H_
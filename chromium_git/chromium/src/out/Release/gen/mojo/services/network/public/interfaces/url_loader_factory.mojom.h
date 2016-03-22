// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_SERVICES_NETWORK_PUBLIC_INTERFACES_URL_LOADER_FACTORY_MOJOM_H_
#define MOJO_SERVICES_NETWORK_PUBLIC_INTERFACES_URL_LOADER_FACTORY_MOJOM_H_

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
#include "mojo/services/network/public/interfaces/url_loader_factory.mojom-internal.h"
#include "mojo/services/network/public/interfaces/url_loader.mojom.h"
namespace mojo {

class URLLoaderFactory;
using URLLoaderFactoryPtr = mojo::InterfacePtr<URLLoaderFactory>;
using URLLoaderFactoryPtrInfo = mojo::InterfacePtrInfo<URLLoaderFactory>;
using URLLoaderFactoryAssociatedPtr =
    mojo::AssociatedInterfacePtr<URLLoaderFactory>;
using URLLoaderFactoryAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<URLLoaderFactory>;


class URLLoaderFactoryProxy;
class URLLoaderFactoryStub;

class URLLoaderFactoryRequestValidator;

class URLLoaderFactory {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::mojo::URLLoaderFactory;

  using Proxy_ = URLLoaderFactoryProxy;
  using Stub_ = URLLoaderFactoryStub;

  using RequestValidator_ = URLLoaderFactoryRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;

  virtual ~URLLoaderFactory() {}

  virtual void CreateURLLoader(mojo::InterfaceRequest<mojo::URLLoader> loader) = 0;
};

class URLLoaderFactoryProxy
    : public URLLoaderFactory,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit URLLoaderFactoryProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateURLLoader(
      mojo::InterfaceRequest<mojo::URLLoader> loader
  ) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class URLLoaderFactoryStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  URLLoaderFactoryStub();
  ~URLLoaderFactoryStub() override;
  void set_sink(URLLoaderFactory* sink) { sink_ = sink; }
  URLLoaderFactory* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  URLLoaderFactory* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class URLLoaderFactoryRequestValidator : public mojo::MessageFilter {
 public:
  explicit URLLoaderFactoryRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};



}  // namespace mojo

#endif  // MOJO_SERVICES_NETWORK_PUBLIC_INTERFACES_URL_LOADER_FACTORY_MOJOM_H_
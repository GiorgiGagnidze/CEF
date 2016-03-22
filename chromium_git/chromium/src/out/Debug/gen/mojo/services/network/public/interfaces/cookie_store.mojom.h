// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_SERVICES_NETWORK_PUBLIC_INTERFACES_COOKIE_STORE_MOJOM_H_
#define MOJO_SERVICES_NETWORK_PUBLIC_INTERFACES_COOKIE_STORE_MOJOM_H_

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
#include "mojo/services/network/public/interfaces/cookie_store.mojom-internal.h"
namespace mojo {

class CookieStore;
using CookieStorePtr = mojo::InterfacePtr<CookieStore>;
using CookieStorePtrInfo = mojo::InterfacePtrInfo<CookieStore>;
using CookieStoreAssociatedPtr =
    mojo::AssociatedInterfacePtr<CookieStore>;
using CookieStoreAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<CookieStore>;


class CookieStoreProxy;
class CookieStoreStub;

class CookieStoreRequestValidator;
class CookieStoreResponseValidator;

class CookieStore {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::mojo::CookieStore;

  using Proxy_ = CookieStoreProxy;
  using Stub_ = CookieStoreStub;

  using RequestValidator_ = CookieStoreRequestValidator;
  using ResponseValidator_ = CookieStoreResponseValidator;

  virtual ~CookieStore() {}

  using GetCallback = mojo::Callback<void(mojo::String)>;
  virtual void Get(const mojo::String& url, const GetCallback& callback) = 0;

  using SetCallback = mojo::Callback<void(bool)>;
  virtual void Set(const mojo::String& url, const mojo::String& cookie, const SetCallback& callback) = 0;
};

class CookieStoreProxy
    : public CookieStore,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit CookieStoreProxy(mojo::MessageReceiverWithResponder* receiver);
  void Get(
      const mojo::String& url, const GetCallback& callback
  ) override;
  void Set(
      const mojo::String& url, const mojo::String& cookie, const SetCallback& callback
  ) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class CookieStoreStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  CookieStoreStub();
  ~CookieStoreStub() override;
  void set_sink(CookieStore* sink) { sink_ = sink; }
  CookieStore* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  CookieStore* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class CookieStoreRequestValidator : public mojo::MessageFilter {
 public:
  explicit CookieStoreRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class CookieStoreResponseValidator : public mojo::MessageFilter {
 public:
  explicit CookieStoreResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};



}  // namespace mojo

#endif  // MOJO_SERVICES_NETWORK_PUBLIC_INTERFACES_COOKIE_STORE_MOJOM_H_
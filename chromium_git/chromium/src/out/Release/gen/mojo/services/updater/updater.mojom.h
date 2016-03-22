// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_SERVICES_UPDATER_UPDATER_MOJOM_H_
#define MOJO_SERVICES_UPDATER_UPDATER_MOJOM_H_

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
#include "mojo/services/updater/updater.mojom-internal.h"
namespace updater {

class Updater;
using UpdaterPtr = mojo::InterfacePtr<Updater>;
using UpdaterPtrInfo = mojo::InterfacePtrInfo<Updater>;
using UpdaterAssociatedPtr =
    mojo::AssociatedInterfacePtr<Updater>;
using UpdaterAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Updater>;


class UpdaterProxy;
class UpdaterStub;

class UpdaterRequestValidator;
class UpdaterResponseValidator;

class Updater {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::updater::Updater;

  using Proxy_ = UpdaterProxy;
  using Stub_ = UpdaterStub;

  using RequestValidator_ = UpdaterRequestValidator;
  using ResponseValidator_ = UpdaterResponseValidator;

  virtual ~Updater() {}

  using GetPathForAppCallback = mojo::Callback<void(mojo::String)>;
  virtual void GetPathForApp(const mojo::String& url, const GetPathForAppCallback& callback) = 0;
};

class UpdaterProxy
    : public Updater,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit UpdaterProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetPathForApp(
      const mojo::String& url, const GetPathForAppCallback& callback
  ) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class UpdaterStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  UpdaterStub();
  ~UpdaterStub() override;
  void set_sink(Updater* sink) { sink_ = sink; }
  Updater* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  Updater* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class UpdaterRequestValidator : public mojo::MessageFilter {
 public:
  explicit UpdaterRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class UpdaterResponseValidator : public mojo::MessageFilter {
 public:
  explicit UpdaterResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};



}  // namespace updater

#endif  // MOJO_SERVICES_UPDATER_UPDATER_MOJOM_H_
// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_PROCESS_CONTROL_MOJOM_H_
#define CONTENT_COMMON_PROCESS_CONTROL_MOJOM_H_

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
#include "content/common/process_control.mojom-internal.h"
#include "mojo/shell/public/interfaces/application.mojom.h"
namespace content {

class ProcessControl;
using ProcessControlPtr = mojo::InterfacePtr<ProcessControl>;
using ProcessControlPtrInfo = mojo::InterfacePtrInfo<ProcessControl>;
using ProcessControlAssociatedPtr =
    mojo::AssociatedInterfacePtr<ProcessControl>;
using ProcessControlAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ProcessControl>;


class ProcessControlProxy;
class ProcessControlStub;

class ProcessControlRequestValidator;
class ProcessControlResponseValidator;

class ProcessControl {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::content::ProcessControl;

  using Proxy_ = ProcessControlProxy;
  using Stub_ = ProcessControlStub;

  using RequestValidator_ = ProcessControlRequestValidator;
  using ResponseValidator_ = ProcessControlResponseValidator;

  virtual ~ProcessControl() {}

  using LoadApplicationCallback = mojo::Callback<void(bool)>;
  virtual void LoadApplication(const mojo::String& url, mojo::InterfaceRequest<mojo::Application> request, const LoadApplicationCallback& callback) = 0;
};

class ProcessControlProxy
    : public ProcessControl,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit ProcessControlProxy(mojo::MessageReceiverWithResponder* receiver);
  void LoadApplication(
      const mojo::String& url, mojo::InterfaceRequest<mojo::Application> request, const LoadApplicationCallback& callback
  ) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class ProcessControlStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  ProcessControlStub();
  ~ProcessControlStub() override;
  void set_sink(ProcessControl* sink) { sink_ = sink; }
  ProcessControl* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  ProcessControl* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class ProcessControlRequestValidator : public mojo::MessageFilter {
 public:
  explicit ProcessControlRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class ProcessControlResponseValidator : public mojo::MessageFilter {
 public:
  explicit ProcessControlResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};



}  // namespace content

#endif  // CONTENT_COMMON_PROCESS_CONTROL_MOJOM_H_
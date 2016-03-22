// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "extensions/common/mojo/keep_alive.mojom.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/trace_event/trace_event.h"
#include "mojo/public/cpp/bindings/lib/array_serialization.h"
#include "mojo/public/cpp/bindings/lib/bindings_serialization.h"
#include "mojo/public/cpp/bindings/lib/bounds_checker.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/map_serialization.h"
#include "mojo/public/cpp/bindings/lib/message_builder.h"
#include "mojo/public/cpp/bindings/lib/native_serialization.h"
#include "mojo/public/cpp/bindings/lib/string_serialization.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "mojo/public/cpp/environment/lib/scoped_task_tracking.h"
#include "mojo/public/cpp/environment/logging.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"
namespace extensions {

namespace internal {
namespace {

#pragma pack(push, 1)

#pragma pack(pop)

}  // namespace



}  // namespace internal
MOJO_STATIC_CONST_MEMBER_DEFINITION const char KeepAlive::Name_[] = "extensions::KeepAlive";
MOJO_STATIC_CONST_MEMBER_DEFINITION const uint32_t KeepAlive::Version_;

KeepAliveProxy::KeepAliveProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

KeepAliveStub::KeepAliveStub()
    : sink_(nullptr),
      control_message_handler_(KeepAlive::Version_) {
}

KeepAliveStub::~KeepAliveStub() {}

bool KeepAliveStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  return false;
}

bool KeepAliveStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  return false;
}

KeepAliveRequestValidator::KeepAliveRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool KeepAliveRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

}  // namespace extensions

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
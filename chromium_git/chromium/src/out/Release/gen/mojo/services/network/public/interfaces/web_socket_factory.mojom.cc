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

#include "mojo/services/network/public/interfaces/web_socket_factory.mojom.h"

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
namespace mojo {

namespace internal {
namespace {

#pragma pack(push, 1)
const uint32_t kWebSocketFactory_CreateWebSocket_Name = 0;

class WebSocketFactory_CreateWebSocket_Params_Data {
 public:
  static WebSocketFactory_CreateWebSocket_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::MessagePipeHandle socket;
  uint8_t padfinal_[4];

 private:
  WebSocketFactory_CreateWebSocket_Params_Data();
  ~WebSocketFactory_CreateWebSocket_Params_Data() = delete;
};
static_assert(sizeof(WebSocketFactory_CreateWebSocket_Params_Data) == 16,
              "Bad sizeof(WebSocketFactory_CreateWebSocket_Params_Data)");

// static
WebSocketFactory_CreateWebSocket_Params_Data* WebSocketFactory_CreateWebSocket_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(WebSocketFactory_CreateWebSocket_Params_Data))) WebSocketFactory_CreateWebSocket_Params_Data();
}

// static
bool WebSocketFactory_CreateWebSocket_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const WebSocketFactory_CreateWebSocket_Params_Data* object = static_cast<const WebSocketFactory_CreateWebSocket_Params_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 16 }};

  if (object->header_.version <=
          kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = MOJO_ARRAYSIZE(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  const mojo::Handle socket_handle = object->socket;
  if (!mojo::internal::ValidateHandleNonNullable(
          socket_handle,
          "invalid socket field in WebSocketFactory_CreateWebSocket_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateHandle(socket_handle, bounds_checker))
    return false;

  return true;
}

void WebSocketFactory_CreateWebSocket_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::EncodeHandle(&socket, handles);
}

void WebSocketFactory_CreateWebSocket_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::DecodeHandle(&socket, handles);
}

WebSocketFactory_CreateWebSocket_Params_Data::WebSocketFactory_CreateWebSocket_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

#pragma pack(pop)

}  // namespace



}  // namespace internal
MOJO_STATIC_CONST_MEMBER_DEFINITION const char WebSocketFactory::Name_[] = "mojo::WebSocketFactory";
MOJO_STATIC_CONST_MEMBER_DEFINITION const uint32_t WebSocketFactory::Version_;

WebSocketFactoryProxy::WebSocketFactoryProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void WebSocketFactoryProxy::CreateWebSocket(
    mojo::InterfaceRequest<mojo::WebSocket> in_socket) {
  size_t size = sizeof(internal::WebSocketFactory_CreateWebSocket_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kWebSocketFactory_CreateWebSocket_Name, size);

  internal::WebSocketFactory_CreateWebSocket_Params_Data* params =
      internal::WebSocketFactory_CreateWebSocket_Params_Data::New(builder.buffer());
  params->socket = in_socket.PassMessagePipe().release();
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->socket.is_valid(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid socket in WebSocketFactory.CreateWebSocket request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}

WebSocketFactoryStub::WebSocketFactoryStub()
    : sink_(nullptr),
      control_message_handler_(WebSocketFactory::Version_) {
}

WebSocketFactoryStub::~WebSocketFactoryStub() {}

bool WebSocketFactoryStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kWebSocketFactory_CreateWebSocket_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.mojo.WebSocketFactory.CreateWebSocket", __FILE__, __LINE__);
      internal::WebSocketFactory_CreateWebSocket_Params_Data* params =
          reinterpret_cast<internal::WebSocketFactory_CreateWebSocket_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::InterfaceRequest<mojo::WebSocket> p_socket{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_socket.Bind(mojo::MakeScopedHandle(mojo::internal::FetchAndReset(&params->socket)));
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WebSocketFactory::CreateWebSocket");
      sink_->CreateWebSocket(std::move(p_socket));
      return true;
    }
  }
  return false;
}

bool WebSocketFactoryStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kWebSocketFactory_CreateWebSocket_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::mojo::WebSocketFactory::CreateWebSocket", __FILE__, __LINE__);
      break;
    }
  }
  return false;
}

WebSocketFactoryRequestValidator::WebSocketFactoryRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool WebSocketFactoryRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kWebSocketFactory_CreateWebSocket_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebSocketFactory_CreateWebSocket_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
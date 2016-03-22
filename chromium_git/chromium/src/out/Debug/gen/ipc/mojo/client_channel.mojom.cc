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

#include "ipc/mojo/client_channel.mojom.h"

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
namespace IPC {

namespace internal {
namespace {

#pragma pack(push, 1)
const uint32_t kClientChannel_Init_Name = 0;

class ClientChannel_Init_Params_Data {
 public:
  static ClientChannel_Init_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::MessagePipeHandle pipe;
  int32_t peer_pid;

 private:
  ClientChannel_Init_Params_Data();
  ~ClientChannel_Init_Params_Data() = delete;
};
static_assert(sizeof(ClientChannel_Init_Params_Data) == 16,
              "Bad sizeof(ClientChannel_Init_Params_Data)");

// static
ClientChannel_Init_Params_Data* ClientChannel_Init_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(ClientChannel_Init_Params_Data))) ClientChannel_Init_Params_Data();
}

// static
bool ClientChannel_Init_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ClientChannel_Init_Params_Data* object = static_cast<const ClientChannel_Init_Params_Data*>(data);

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

  const mojo::Handle pipe_handle = object->pipe;
  if (!mojo::internal::ValidateHandleNonNullable(
          pipe_handle,
          "invalid pipe field in ClientChannel_Init_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateHandle(pipe_handle, bounds_checker))
    return false;

  return true;
}

void ClientChannel_Init_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::EncodeHandle(&pipe, handles);
}

void ClientChannel_Init_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::DecodeHandle(&pipe, handles);
}

ClientChannel_Init_Params_Data::ClientChannel_Init_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class ClientChannel_Init_ResponseParams_Data {
 public:
  static ClientChannel_Init_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  int32_t pid;
  uint8_t padfinal_[4];

 private:
  ClientChannel_Init_ResponseParams_Data();
  ~ClientChannel_Init_ResponseParams_Data() = delete;
};
static_assert(sizeof(ClientChannel_Init_ResponseParams_Data) == 16,
              "Bad sizeof(ClientChannel_Init_ResponseParams_Data)");

// static
ClientChannel_Init_ResponseParams_Data* ClientChannel_Init_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(ClientChannel_Init_ResponseParams_Data))) ClientChannel_Init_ResponseParams_Data();
}

// static
bool ClientChannel_Init_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ClientChannel_Init_ResponseParams_Data* object = static_cast<const ClientChannel_Init_ResponseParams_Data*>(data);

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

  return true;
}

void ClientChannel_Init_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void ClientChannel_Init_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

ClientChannel_Init_ResponseParams_Data::ClientChannel_Init_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

#pragma pack(pop)

}  // namespace



}  // namespace internal
MOJO_STATIC_CONST_MEMBER_DEFINITION const char ClientChannel::Name_[] = "IPC::ClientChannel";
MOJO_STATIC_CONST_MEMBER_DEFINITION const uint32_t ClientChannel::Version_;
class ClientChannel_Init_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ClientChannel_Init_ForwardToCallback(
      const ClientChannel::InitCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ClientChannel::InitCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(ClientChannel_Init_ForwardToCallback);
};
bool ClientChannel_Init_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::ClientChannel_Init_ResponseParams_Data* params =
      reinterpret_cast<internal::ClientChannel_Init_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  int32_t p_pid{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    p_pid = params->pid;
  } while (false);
  if (!success)
    return false;
  callback_.Run(p_pid);
  return true;
}

ClientChannelProxy::ClientChannelProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void ClientChannelProxy::Init(
    mojo::ScopedMessagePipeHandle in_pipe, int32_t in_peer_pid, const InitCallback& callback) {
  size_t size = sizeof(internal::ClientChannel_Init_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kClientChannel_Init_Name, size);

  internal::ClientChannel_Init_Params_Data* params =
      internal::ClientChannel_Init_Params_Data::New(builder.buffer());
  params->pipe = in_pipe.release();
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->pipe.is_valid(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid pipe in ClientChannel.Init request");
  params->peer_pid = in_peer_pid;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new ClientChannel_Init_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
class ClientChannel_Init_ProxyToResponder
    : public ClientChannel::InitCallback::Runnable {
 public:
  ~ClientChannel_Init_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "ClientChannel::Init(std::move(p_pipe), p_peer_pid, callback) "
        "was never run.";
  }

  ClientChannel_Init_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(int32_t in_pid) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(ClientChannel_Init_ProxyToResponder);
};
void ClientChannel_Init_ProxyToResponder::Run(
    int32_t in_pid) const {
  size_t size = sizeof(internal::ClientChannel_Init_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kClientChannel_Init_Name, size, request_id_);
  internal::ClientChannel_Init_ResponseParams_Data* params =
      internal::ClientChannel_Init_ResponseParams_Data::New(builder.buffer());
  params->pid = in_pid;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}

ClientChannelStub::ClientChannelStub()
    : sink_(nullptr),
      control_message_handler_(ClientChannel::Version_) {
}

ClientChannelStub::~ClientChannelStub() {}

bool ClientChannelStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kClientChannel_Init_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.IPC.ClientChannel.Init", __FILE__, __LINE__);
      break;
    }
  }
  return false;
}

bool ClientChannelStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kClientChannel_Init_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::IPC::ClientChannel::Init", __FILE__, __LINE__);
      internal::ClientChannel_Init_Params_Data* params =
          reinterpret_cast<internal::ClientChannel_Init_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::ScopedMessagePipeHandle p_pipe{};
      int32_t p_peer_pid{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_pipe.reset(mojo::internal::FetchAndReset(&params->pipe));
        p_peer_pid = params->peer_pid;
      } while (false);
      if (!success)
        return false;
      ClientChannel::InitCallback::Runnable* runnable =
          new ClientChannel_Init_ProxyToResponder(
              message->request_id(), responder);
      ClientChannel::InitCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ClientChannel::Init");
      sink_->Init(std::move(p_pipe), p_peer_pid, callback);
      return true;
    }
  }
  return false;
}

ClientChannelRequestValidator::ClientChannelRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool ClientChannelRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kClientChannel_Init_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::ClientChannel_Init_Params_Data>(message)) {
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

ClientChannelResponseValidator::ClientChannelResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool ClientChannelResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message))
    return false;
  switch (message->header()->name) {
    case internal::kClientChannel_Init_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ClientChannel_Init_ResponseParams_Data>(message)) {
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
}  // namespace IPC

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
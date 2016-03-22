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

#include "mojo/services/network/public/interfaces/tcp_server_socket.mojom.h"

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
const uint32_t kTCPServerSocket_Accept_Name = 0;

class TCPServerSocket_Accept_Params_Data {
 public:
  static TCPServerSocket_Accept_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::DataPipeConsumerHandle send_stream;
  mojo::DataPipeProducerHandle receive_stream;
  mojo::MessagePipeHandle client_socket;
  uint8_t padfinal_[4];

 private:
  TCPServerSocket_Accept_Params_Data();
  ~TCPServerSocket_Accept_Params_Data() = delete;
};
static_assert(sizeof(TCPServerSocket_Accept_Params_Data) == 24,
              "Bad sizeof(TCPServerSocket_Accept_Params_Data)");

// static
TCPServerSocket_Accept_Params_Data* TCPServerSocket_Accept_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(TCPServerSocket_Accept_Params_Data))) TCPServerSocket_Accept_Params_Data();
}

// static
bool TCPServerSocket_Accept_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const TCPServerSocket_Accept_Params_Data* object = static_cast<const TCPServerSocket_Accept_Params_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 24 }};

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

  const mojo::Handle send_stream_handle = object->send_stream;
  if (!mojo::internal::ValidateHandleNonNullable(
          send_stream_handle,
          "invalid send_stream field in TCPServerSocket_Accept_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateHandle(send_stream_handle, bounds_checker))
    return false;

  const mojo::Handle receive_stream_handle = object->receive_stream;
  if (!mojo::internal::ValidateHandleNonNullable(
          receive_stream_handle,
          "invalid receive_stream field in TCPServerSocket_Accept_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateHandle(receive_stream_handle, bounds_checker))
    return false;

  const mojo::Handle client_socket_handle = object->client_socket;
  if (!mojo::internal::ValidateHandleNonNullable(
          client_socket_handle,
          "invalid client_socket field in TCPServerSocket_Accept_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateHandle(client_socket_handle, bounds_checker))
    return false;

  return true;
}

void TCPServerSocket_Accept_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::EncodeHandle(&send_stream, handles);
  mojo::internal::EncodeHandle(&receive_stream, handles);
  mojo::internal::EncodeHandle(&client_socket, handles);
}

void TCPServerSocket_Accept_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::DecodeHandle(&send_stream, handles);
  mojo::internal::DecodeHandle(&receive_stream, handles);
  mojo::internal::DecodeHandle(&client_socket, handles);
}

TCPServerSocket_Accept_Params_Data::TCPServerSocket_Accept_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class TCPServerSocket_Accept_ResponseParams_Data {
 public:
  static TCPServerSocket_Accept_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<mojo::internal::NetworkError_Data> result;
  mojo::internal::StructPointer<mojo::internal::NetAddress_Data> remote_address;

 private:
  TCPServerSocket_Accept_ResponseParams_Data();
  ~TCPServerSocket_Accept_ResponseParams_Data() = delete;
};
static_assert(sizeof(TCPServerSocket_Accept_ResponseParams_Data) == 24,
              "Bad sizeof(TCPServerSocket_Accept_ResponseParams_Data)");

// static
TCPServerSocket_Accept_ResponseParams_Data* TCPServerSocket_Accept_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(TCPServerSocket_Accept_ResponseParams_Data))) TCPServerSocket_Accept_ResponseParams_Data();
}

// static
bool TCPServerSocket_Accept_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const TCPServerSocket_Accept_ResponseParams_Data* object = static_cast<const TCPServerSocket_Accept_ResponseParams_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 24 }};

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

  if (!mojo::internal::ValidatePointerNonNullable(
          object->result, "null result field in TCPServerSocket_Accept_ResponseParams struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->result, bounds_checker))
    return false;

  if (!mojo::internal::ValidateStruct(object->remote_address, bounds_checker))
    return false;

  return true;
}

void TCPServerSocket_Accept_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&result, handles);
  mojo::internal::Encode(&remote_address, handles);
}

void TCPServerSocket_Accept_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&result, handles);
  mojo::internal::Decode(&remote_address, handles);
}

TCPServerSocket_Accept_ResponseParams_Data::TCPServerSocket_Accept_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

#pragma pack(pop)

}  // namespace



}  // namespace internal
MOJO_STATIC_CONST_MEMBER_DEFINITION const char TCPServerSocket::Name_[] = "mojo::TCPServerSocket";
MOJO_STATIC_CONST_MEMBER_DEFINITION const uint32_t TCPServerSocket::Version_;
class TCPServerSocket_Accept_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  TCPServerSocket_Accept_ForwardToCallback(
      const TCPServerSocket::AcceptCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  TCPServerSocket::AcceptCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(TCPServerSocket_Accept_ForwardToCallback);
};
bool TCPServerSocket_Accept_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::TCPServerSocket_Accept_ResponseParams_Data* params =
      reinterpret_cast<internal::TCPServerSocket_Accept_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  mojo::NetworkErrorPtr p_result{};
  mojo::NetAddressPtr p_remote_address{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    if (!Deserialize_(params->result.ptr, &p_result, &serialization_context_))
      success = false;
    if (!Deserialize_(params->remote_address.ptr, &p_remote_address, &serialization_context_))
      success = false;
  } while (false);
  if (!success)
    return false;
  callback_.Run(std::move(p_result), std::move(p_remote_address));
  return true;
}

TCPServerSocketProxy::TCPServerSocketProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void TCPServerSocketProxy::Accept(
    mojo::ScopedDataPipeConsumerHandle in_send_stream, mojo::ScopedDataPipeProducerHandle in_receive_stream, mojo::InterfaceRequest<mojo::TCPConnectedSocket> in_client_socket, const AcceptCallback& callback) {
  size_t size = sizeof(internal::TCPServerSocket_Accept_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kTCPServerSocket_Accept_Name, size);

  internal::TCPServerSocket_Accept_Params_Data* params =
      internal::TCPServerSocket_Accept_Params_Data::New(builder.buffer());
  params->send_stream = in_send_stream.release();
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->send_stream.is_valid(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid send_stream in TCPServerSocket.Accept request");
  params->receive_stream = in_receive_stream.release();
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->receive_stream.is_valid(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid receive_stream in TCPServerSocket.Accept request");
  params->client_socket = in_client_socket.PassMessagePipe().release();
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->client_socket.is_valid(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client_socket in TCPServerSocket.Accept request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new TCPServerSocket_Accept_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
class TCPServerSocket_Accept_ProxyToResponder
    : public TCPServerSocket::AcceptCallback::Runnable {
 public:
  ~TCPServerSocket_Accept_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "TCPServerSocket::Accept(std::move(p_send_stream), std::move(p_receive_stream), std::move(p_client_socket), callback) "
        "was never run.";
  }

  TCPServerSocket_Accept_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(mojo::NetworkErrorPtr in_result, mojo::NetAddressPtr in_remote_address) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(TCPServerSocket_Accept_ProxyToResponder);
};
void TCPServerSocket_Accept_ProxyToResponder::Run(
    mojo::NetworkErrorPtr in_result, mojo::NetAddressPtr in_remote_address) const {
  size_t size = sizeof(internal::TCPServerSocket_Accept_ResponseParams_Data);
  size += GetSerializedSize_(in_result);
  size += GetSerializedSize_(in_remote_address);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kTCPServerSocket_Accept_Name, size, request_id_);
  internal::TCPServerSocket_Accept_ResponseParams_Data* params =
      internal::TCPServerSocket_Accept_ResponseParams_Data::New(builder.buffer());
  Serialize_(std::move(in_result), builder.buffer(), &params->result.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->result.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in TCPServerSocket.Accept response");
  Serialize_(std::move(in_remote_address), builder.buffer(), &params->remote_address.ptr);
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}

TCPServerSocketStub::TCPServerSocketStub()
    : sink_(nullptr),
      control_message_handler_(TCPServerSocket::Version_) {
}

TCPServerSocketStub::~TCPServerSocketStub() {}

bool TCPServerSocketStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kTCPServerSocket_Accept_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.mojo.TCPServerSocket.Accept", __FILE__, __LINE__);
      break;
    }
  }
  return false;
}

bool TCPServerSocketStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kTCPServerSocket_Accept_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::mojo::TCPServerSocket::Accept", __FILE__, __LINE__);
      internal::TCPServerSocket_Accept_Params_Data* params =
          reinterpret_cast<internal::TCPServerSocket_Accept_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::ScopedDataPipeConsumerHandle p_send_stream{};
      mojo::ScopedDataPipeProducerHandle p_receive_stream{};
      mojo::InterfaceRequest<mojo::TCPConnectedSocket> p_client_socket{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_send_stream.reset(mojo::internal::FetchAndReset(&params->send_stream));
        p_receive_stream.reset(mojo::internal::FetchAndReset(&params->receive_stream));
        p_client_socket.Bind(mojo::MakeScopedHandle(mojo::internal::FetchAndReset(&params->client_socket)));
      } while (false);
      if (!success)
        return false;
      TCPServerSocket::AcceptCallback::Runnable* runnable =
          new TCPServerSocket_Accept_ProxyToResponder(
              message->request_id(), responder);
      TCPServerSocket::AcceptCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "TCPServerSocket::Accept");
      sink_->Accept(std::move(p_send_stream), std::move(p_receive_stream), std::move(p_client_socket), callback);
      return true;
    }
  }
  return false;
}

TCPServerSocketRequestValidator::TCPServerSocketRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool TCPServerSocketRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kTCPServerSocket_Accept_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::TCPServerSocket_Accept_Params_Data>(message)) {
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

TCPServerSocketResponseValidator::TCPServerSocketResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool TCPServerSocketResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message))
    return false;
  switch (message->header()->name) {
    case internal::kTCPServerSocket_Accept_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::TCPServerSocket_Accept_ResponseParams_Data>(message)) {
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
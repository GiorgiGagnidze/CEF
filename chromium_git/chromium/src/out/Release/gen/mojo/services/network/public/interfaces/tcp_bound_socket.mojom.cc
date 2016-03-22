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

#include "mojo/services/network/public/interfaces/tcp_bound_socket.mojom.h"

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
const uint32_t kTCPBoundSocket_StartListening_Name = 0;

class TCPBoundSocket_StartListening_Params_Data {
 public:
  static TCPBoundSocket_StartListening_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::MessagePipeHandle server;
  uint8_t padfinal_[4];

 private:
  TCPBoundSocket_StartListening_Params_Data();
  ~TCPBoundSocket_StartListening_Params_Data() = delete;
};
static_assert(sizeof(TCPBoundSocket_StartListening_Params_Data) == 16,
              "Bad sizeof(TCPBoundSocket_StartListening_Params_Data)");

// static
TCPBoundSocket_StartListening_Params_Data* TCPBoundSocket_StartListening_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(TCPBoundSocket_StartListening_Params_Data))) TCPBoundSocket_StartListening_Params_Data();
}

// static
bool TCPBoundSocket_StartListening_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const TCPBoundSocket_StartListening_Params_Data* object = static_cast<const TCPBoundSocket_StartListening_Params_Data*>(data);

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

  const mojo::Handle server_handle = object->server;
  if (!mojo::internal::ValidateHandleNonNullable(
          server_handle,
          "invalid server field in TCPBoundSocket_StartListening_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateHandle(server_handle, bounds_checker))
    return false;

  return true;
}

void TCPBoundSocket_StartListening_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::EncodeHandle(&server, handles);
}

void TCPBoundSocket_StartListening_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::DecodeHandle(&server, handles);
}

TCPBoundSocket_StartListening_Params_Data::TCPBoundSocket_StartListening_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class TCPBoundSocket_StartListening_ResponseParams_Data {
 public:
  static TCPBoundSocket_StartListening_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<mojo::internal::NetworkError_Data> result;

 private:
  TCPBoundSocket_StartListening_ResponseParams_Data();
  ~TCPBoundSocket_StartListening_ResponseParams_Data() = delete;
};
static_assert(sizeof(TCPBoundSocket_StartListening_ResponseParams_Data) == 16,
              "Bad sizeof(TCPBoundSocket_StartListening_ResponseParams_Data)");

// static
TCPBoundSocket_StartListening_ResponseParams_Data* TCPBoundSocket_StartListening_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(TCPBoundSocket_StartListening_ResponseParams_Data))) TCPBoundSocket_StartListening_ResponseParams_Data();
}

// static
bool TCPBoundSocket_StartListening_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const TCPBoundSocket_StartListening_ResponseParams_Data* object = static_cast<const TCPBoundSocket_StartListening_ResponseParams_Data*>(data);

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

  if (!mojo::internal::ValidatePointerNonNullable(
          object->result, "null result field in TCPBoundSocket_StartListening_ResponseParams struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->result, bounds_checker))
    return false;

  return true;
}

void TCPBoundSocket_StartListening_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&result, handles);
}

void TCPBoundSocket_StartListening_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&result, handles);
}

TCPBoundSocket_StartListening_ResponseParams_Data::TCPBoundSocket_StartListening_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kTCPBoundSocket_Connect_Name = 1;

class TCPBoundSocket_Connect_Params_Data {
 public:
  static TCPBoundSocket_Connect_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<mojo::internal::NetAddress_Data> remote_address;
  mojo::DataPipeConsumerHandle send_stream;
  mojo::DataPipeProducerHandle receive_stream;
  mojo::MessagePipeHandle client_socket;
  uint8_t padfinal_[4];

 private:
  TCPBoundSocket_Connect_Params_Data();
  ~TCPBoundSocket_Connect_Params_Data() = delete;
};
static_assert(sizeof(TCPBoundSocket_Connect_Params_Data) == 32,
              "Bad sizeof(TCPBoundSocket_Connect_Params_Data)");

// static
TCPBoundSocket_Connect_Params_Data* TCPBoundSocket_Connect_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(TCPBoundSocket_Connect_Params_Data))) TCPBoundSocket_Connect_Params_Data();
}

// static
bool TCPBoundSocket_Connect_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const TCPBoundSocket_Connect_Params_Data* object = static_cast<const TCPBoundSocket_Connect_Params_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 32 }};

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
          object->remote_address, "null remote_address field in TCPBoundSocket_Connect_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->remote_address, bounds_checker))
    return false;

  const mojo::Handle send_stream_handle = object->send_stream;
  if (!mojo::internal::ValidateHandleNonNullable(
          send_stream_handle,
          "invalid send_stream field in TCPBoundSocket_Connect_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateHandle(send_stream_handle, bounds_checker))
    return false;

  const mojo::Handle receive_stream_handle = object->receive_stream;
  if (!mojo::internal::ValidateHandleNonNullable(
          receive_stream_handle,
          "invalid receive_stream field in TCPBoundSocket_Connect_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateHandle(receive_stream_handle, bounds_checker))
    return false;

  const mojo::Handle client_socket_handle = object->client_socket;
  if (!mojo::internal::ValidateHandleNonNullable(
          client_socket_handle,
          "invalid client_socket field in TCPBoundSocket_Connect_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateHandle(client_socket_handle, bounds_checker))
    return false;

  return true;
}

void TCPBoundSocket_Connect_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&remote_address, handles);
  mojo::internal::EncodeHandle(&send_stream, handles);
  mojo::internal::EncodeHandle(&receive_stream, handles);
  mojo::internal::EncodeHandle(&client_socket, handles);
}

void TCPBoundSocket_Connect_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&remote_address, handles);
  mojo::internal::DecodeHandle(&send_stream, handles);
  mojo::internal::DecodeHandle(&receive_stream, handles);
  mojo::internal::DecodeHandle(&client_socket, handles);
}

TCPBoundSocket_Connect_Params_Data::TCPBoundSocket_Connect_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class TCPBoundSocket_Connect_ResponseParams_Data {
 public:
  static TCPBoundSocket_Connect_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<mojo::internal::NetworkError_Data> result;

 private:
  TCPBoundSocket_Connect_ResponseParams_Data();
  ~TCPBoundSocket_Connect_ResponseParams_Data() = delete;
};
static_assert(sizeof(TCPBoundSocket_Connect_ResponseParams_Data) == 16,
              "Bad sizeof(TCPBoundSocket_Connect_ResponseParams_Data)");

// static
TCPBoundSocket_Connect_ResponseParams_Data* TCPBoundSocket_Connect_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(TCPBoundSocket_Connect_ResponseParams_Data))) TCPBoundSocket_Connect_ResponseParams_Data();
}

// static
bool TCPBoundSocket_Connect_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const TCPBoundSocket_Connect_ResponseParams_Data* object = static_cast<const TCPBoundSocket_Connect_ResponseParams_Data*>(data);

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

  if (!mojo::internal::ValidatePointerNonNullable(
          object->result, "null result field in TCPBoundSocket_Connect_ResponseParams struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->result, bounds_checker))
    return false;

  return true;
}

void TCPBoundSocket_Connect_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&result, handles);
}

void TCPBoundSocket_Connect_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&result, handles);
}

TCPBoundSocket_Connect_ResponseParams_Data::TCPBoundSocket_Connect_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

#pragma pack(pop)

}  // namespace



}  // namespace internal
MOJO_STATIC_CONST_MEMBER_DEFINITION const char TCPBoundSocket::Name_[] = "mojo::TCPBoundSocket";
MOJO_STATIC_CONST_MEMBER_DEFINITION const uint32_t TCPBoundSocket::Version_;
class TCPBoundSocket_StartListening_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  TCPBoundSocket_StartListening_ForwardToCallback(
      const TCPBoundSocket::StartListeningCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  TCPBoundSocket::StartListeningCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(TCPBoundSocket_StartListening_ForwardToCallback);
};
bool TCPBoundSocket_StartListening_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::TCPBoundSocket_StartListening_ResponseParams_Data* params =
      reinterpret_cast<internal::TCPBoundSocket_StartListening_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  mojo::NetworkErrorPtr p_result{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    if (!Deserialize_(params->result.ptr, &p_result, &serialization_context_))
      success = false;
  } while (false);
  if (!success)
    return false;
  callback_.Run(std::move(p_result));
  return true;
}
class TCPBoundSocket_Connect_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  TCPBoundSocket_Connect_ForwardToCallback(
      const TCPBoundSocket::ConnectCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  TCPBoundSocket::ConnectCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(TCPBoundSocket_Connect_ForwardToCallback);
};
bool TCPBoundSocket_Connect_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::TCPBoundSocket_Connect_ResponseParams_Data* params =
      reinterpret_cast<internal::TCPBoundSocket_Connect_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  mojo::NetworkErrorPtr p_result{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    if (!Deserialize_(params->result.ptr, &p_result, &serialization_context_))
      success = false;
  } while (false);
  if (!success)
    return false;
  callback_.Run(std::move(p_result));
  return true;
}

TCPBoundSocketProxy::TCPBoundSocketProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void TCPBoundSocketProxy::StartListening(
    mojo::InterfaceRequest<mojo::TCPServerSocket> in_server, const StartListeningCallback& callback) {
  size_t size = sizeof(internal::TCPBoundSocket_StartListening_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kTCPBoundSocket_StartListening_Name, size);

  internal::TCPBoundSocket_StartListening_Params_Data* params =
      internal::TCPBoundSocket_StartListening_Params_Data::New(builder.buffer());
  params->server = in_server.PassMessagePipe().release();
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->server.is_valid(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid server in TCPBoundSocket.StartListening request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new TCPBoundSocket_StartListening_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void TCPBoundSocketProxy::Connect(
    mojo::NetAddressPtr in_remote_address, mojo::ScopedDataPipeConsumerHandle in_send_stream, mojo::ScopedDataPipeProducerHandle in_receive_stream, mojo::InterfaceRequest<mojo::TCPConnectedSocket> in_client_socket, const ConnectCallback& callback) {
  size_t size = sizeof(internal::TCPBoundSocket_Connect_Params_Data);
  size += GetSerializedSize_(in_remote_address);
  mojo::internal::RequestMessageBuilder builder(internal::kTCPBoundSocket_Connect_Name, size);

  internal::TCPBoundSocket_Connect_Params_Data* params =
      internal::TCPBoundSocket_Connect_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_remote_address), builder.buffer(), &params->remote_address.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->remote_address.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null remote_address in TCPBoundSocket.Connect request");
  params->send_stream = in_send_stream.release();
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->send_stream.is_valid(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid send_stream in TCPBoundSocket.Connect request");
  params->receive_stream = in_receive_stream.release();
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->receive_stream.is_valid(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid receive_stream in TCPBoundSocket.Connect request");
  params->client_socket = in_client_socket.PassMessagePipe().release();
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->client_socket.is_valid(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client_socket in TCPBoundSocket.Connect request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new TCPBoundSocket_Connect_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
class TCPBoundSocket_StartListening_ProxyToResponder
    : public TCPBoundSocket::StartListeningCallback::Runnable {
 public:
  ~TCPBoundSocket_StartListening_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "TCPBoundSocket::StartListening(std::move(p_server), callback) "
        "was never run.";
  }

  TCPBoundSocket_StartListening_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(mojo::NetworkErrorPtr in_result) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(TCPBoundSocket_StartListening_ProxyToResponder);
};
void TCPBoundSocket_StartListening_ProxyToResponder::Run(
    mojo::NetworkErrorPtr in_result) const {
  size_t size = sizeof(internal::TCPBoundSocket_StartListening_ResponseParams_Data);
  size += GetSerializedSize_(in_result);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kTCPBoundSocket_StartListening_Name, size, request_id_);
  internal::TCPBoundSocket_StartListening_ResponseParams_Data* params =
      internal::TCPBoundSocket_StartListening_ResponseParams_Data::New(builder.buffer());
  Serialize_(std::move(in_result), builder.buffer(), &params->result.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->result.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in TCPBoundSocket.StartListening response");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class TCPBoundSocket_Connect_ProxyToResponder
    : public TCPBoundSocket::ConnectCallback::Runnable {
 public:
  ~TCPBoundSocket_Connect_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "TCPBoundSocket::Connect(std::move(p_remote_address), std::move(p_send_stream), std::move(p_receive_stream), std::move(p_client_socket), callback) "
        "was never run.";
  }

  TCPBoundSocket_Connect_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(mojo::NetworkErrorPtr in_result) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(TCPBoundSocket_Connect_ProxyToResponder);
};
void TCPBoundSocket_Connect_ProxyToResponder::Run(
    mojo::NetworkErrorPtr in_result) const {
  size_t size = sizeof(internal::TCPBoundSocket_Connect_ResponseParams_Data);
  size += GetSerializedSize_(in_result);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kTCPBoundSocket_Connect_Name, size, request_id_);
  internal::TCPBoundSocket_Connect_ResponseParams_Data* params =
      internal::TCPBoundSocket_Connect_ResponseParams_Data::New(builder.buffer());
  Serialize_(std::move(in_result), builder.buffer(), &params->result.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->result.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in TCPBoundSocket.Connect response");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}

TCPBoundSocketStub::TCPBoundSocketStub()
    : sink_(nullptr),
      control_message_handler_(TCPBoundSocket::Version_) {
}

TCPBoundSocketStub::~TCPBoundSocketStub() {}

bool TCPBoundSocketStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kTCPBoundSocket_StartListening_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.mojo.TCPBoundSocket.StartListening", __FILE__, __LINE__);
      break;
    }
    case internal::kTCPBoundSocket_Connect_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.mojo.TCPBoundSocket.Connect", __FILE__, __LINE__);
      break;
    }
  }
  return false;
}

bool TCPBoundSocketStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kTCPBoundSocket_StartListening_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::mojo::TCPBoundSocket::StartListening", __FILE__, __LINE__);
      internal::TCPBoundSocket_StartListening_Params_Data* params =
          reinterpret_cast<internal::TCPBoundSocket_StartListening_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::InterfaceRequest<mojo::TCPServerSocket> p_server{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_server.Bind(mojo::MakeScopedHandle(mojo::internal::FetchAndReset(&params->server)));
      } while (false);
      if (!success)
        return false;
      TCPBoundSocket::StartListeningCallback::Runnable* runnable =
          new TCPBoundSocket_StartListening_ProxyToResponder(
              message->request_id(), responder);
      TCPBoundSocket::StartListeningCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "TCPBoundSocket::StartListening");
      sink_->StartListening(std::move(p_server), callback);
      return true;
    }
    case internal::kTCPBoundSocket_Connect_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::mojo::TCPBoundSocket::Connect", __FILE__, __LINE__);
      internal::TCPBoundSocket_Connect_Params_Data* params =
          reinterpret_cast<internal::TCPBoundSocket_Connect_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::NetAddressPtr p_remote_address{};
      mojo::ScopedDataPipeConsumerHandle p_send_stream{};
      mojo::ScopedDataPipeProducerHandle p_receive_stream{};
      mojo::InterfaceRequest<mojo::TCPConnectedSocket> p_client_socket{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->remote_address.ptr, &p_remote_address, &serialization_context_))
          success = false;
        p_send_stream.reset(mojo::internal::FetchAndReset(&params->send_stream));
        p_receive_stream.reset(mojo::internal::FetchAndReset(&params->receive_stream));
        p_client_socket.Bind(mojo::MakeScopedHandle(mojo::internal::FetchAndReset(&params->client_socket)));
      } while (false);
      if (!success)
        return false;
      TCPBoundSocket::ConnectCallback::Runnable* runnable =
          new TCPBoundSocket_Connect_ProxyToResponder(
              message->request_id(), responder);
      TCPBoundSocket::ConnectCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "TCPBoundSocket::Connect");
      sink_->Connect(std::move(p_remote_address), std::move(p_send_stream), std::move(p_receive_stream), std::move(p_client_socket), callback);
      return true;
    }
  }
  return false;
}

TCPBoundSocketRequestValidator::TCPBoundSocketRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool TCPBoundSocketRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kTCPBoundSocket_StartListening_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::TCPBoundSocket_StartListening_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kTCPBoundSocket_Connect_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::TCPBoundSocket_Connect_Params_Data>(message)) {
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

TCPBoundSocketResponseValidator::TCPBoundSocketResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool TCPBoundSocketResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message))
    return false;
  switch (message->header()->name) {
    case internal::kTCPBoundSocket_StartListening_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::TCPBoundSocket_StartListening_ResponseParams_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kTCPBoundSocket_Connect_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::TCPBoundSocket_Connect_ResponseParams_Data>(message)) {
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
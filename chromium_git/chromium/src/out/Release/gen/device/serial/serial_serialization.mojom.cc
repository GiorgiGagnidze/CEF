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

#include "device/serial/serial_serialization.mojom.h"

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
namespace device {
namespace serial {

namespace internal {
namespace {

#pragma pack(push, 1)

#pragma pack(pop)

}  // namespace


// static
ConnectionState_Data* ConnectionState_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(ConnectionState_Data))) ConnectionState_Data();
}

// static
bool ConnectionState_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ConnectionState_Data* object = static_cast<const ConnectionState_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 40 }};

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
          object->name, "null name field in ConnectionState struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->name, bounds_checker,
                                     &name_validate_params)) {
    return false;
  }

  return true;
}

void ConnectionState_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&name, handles);
}

void ConnectionState_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&name, handles);
}

ConnectionState_Data::ConnectionState_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

// static
SerializedConnection_Data* SerializedConnection_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(SerializedConnection_Data))) SerializedConnection_Data();
}

// static
bool SerializedConnection_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const SerializedConnection_Data* object = static_cast<const SerializedConnection_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 56 }};

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
          object->state, "null state field in SerializedConnection struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->state, bounds_checker))
    return false;

  if (!mojo::internal::ValidateEnum(object->queuedReceiveError))
    return false;

  const mojo::internal::ArrayValidateParams queuedReceiveData_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->queuedReceiveData, bounds_checker,
                                     &queuedReceiveData_validate_params)) {
    return false;
  }

  const mojo::Handle connection_handle = object->connection.handle;
  if (!mojo::internal::ValidateHandleNonNullable(
          connection_handle,
          "invalid connection field in SerializedConnection struct")) {
    return false;
  }
  if (!mojo::internal::ValidateHandle(connection_handle, bounds_checker))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->sender, "null sender field in SerializedConnection struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->sender, bounds_checker))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->receiver, "null receiver field in SerializedConnection struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->receiver, bounds_checker))
    return false;

  return true;
}

void SerializedConnection_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&state, handles);
  mojo::internal::Encode(&queuedReceiveData, handles);
  mojo::internal::EncodeHandle(&connection, handles);
  mojo::internal::Encode(&sender, handles);
  mojo::internal::Encode(&receiver, handles);
}

void SerializedConnection_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&state, handles);
  mojo::internal::Decode(&queuedReceiveData, handles);
  mojo::internal::DecodeHandle(&connection, handles);
  mojo::internal::Decode(&sender, handles);
  mojo::internal::Decode(&receiver, handles);
}

SerializedConnection_Data::SerializedConnection_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}


}  // namespace internal// static
ConnectionStatePtr ConnectionState::New() {
  ConnectionStatePtr rv;
  mojo::internal::StructHelper<ConnectionState>::Initialize(&rv);
  return rv;
}

ConnectionState::ConnectionState()
    : connectionId(),
      paused(false),
      persistent(false),
      name(""),
      receiveTimeout(0U),
      sendTimeout(0U),
      bufferSize(4096U) {
}

ConnectionState::~ConnectionState() {
}


ConnectionStatePtr ConnectionState::Clone() const {
  ConnectionStatePtr rv(New());
  rv->connectionId = connectionId;
  rv->paused = paused;
  rv->persistent = persistent;
  rv->name = name;
  rv->receiveTimeout = receiveTimeout;
  rv->sendTimeout = sendTimeout;
  rv->bufferSize = bufferSize;
  return rv;
}


bool ConnectionState::Equals(const ConnectionState& other) const {
  if (!mojo::internal::ValueTraits<uint32_t>::Equals(this->connectionId, other.connectionId))
    return false;
  if (!mojo::internal::ValueTraits<bool>::Equals(this->paused, other.paused))
    return false;
  if (!mojo::internal::ValueTraits<bool>::Equals(this->persistent, other.persistent))
    return false;
  if (!mojo::internal::ValueTraits<mojo::String>::Equals(this->name, other.name))
    return false;
  if (!mojo::internal::ValueTraits<uint32_t>::Equals(this->receiveTimeout, other.receiveTimeout))
    return false;
  if (!mojo::internal::ValueTraits<uint32_t>::Equals(this->sendTimeout, other.sendTimeout))
    return false;
  if (!mojo::internal::ValueTraits<uint32_t>::Equals(this->bufferSize, other.bufferSize))
    return false;
  return true;
}// static
SerializedConnectionPtr SerializedConnection::New() {
  SerializedConnectionPtr rv;
  mojo::internal::StructHelper<SerializedConnection>::Initialize(&rv);
  return rv;
}

SerializedConnection::SerializedConnection()
    : state(),
      queuedReceiveError(device::serial::ReceiveError::NONE),
      queuedReceiveData(),
      connection(),
      sender(),
      receiver() {
}

SerializedConnection::~SerializedConnection() {
}



bool SerializedConnection::Equals(const SerializedConnection& other) const {
  if (!mojo::internal::ValueTraits<ConnectionStatePtr>::Equals(this->state, other.state))
    return false;
  if (!mojo::internal::ValueTraits<device::serial::ReceiveError>::Equals(this->queuedReceiveError, other.queuedReceiveError))
    return false;
  if (!mojo::internal::ValueTraits<mojo::Array<int8_t>>::Equals(this->queuedReceiveData, other.queuedReceiveData))
    return false;
  if (!mojo::internal::ValueTraits<device::serial::ConnectionPtr>::Equals(this->connection, other.connection))
    return false;
  if (!mojo::internal::ValueTraits<device::serial::SerializedDataSenderPtr>::Equals(this->sender, other.sender))
    return false;
  if (!mojo::internal::ValueTraits<device::serial::SerializedDataReceiverPtr>::Equals(this->receiver, other.receiver))
    return false;
  return true;
}
size_t GetSerializedSize_(const ConnectionStatePtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::ConnectionState_Data);
  size += GetSerializedSize_(input->name);
  return size;
}

void Serialize_(ConnectionStatePtr input, mojo::internal::Buffer* buf,
                internal::ConnectionState_Data** output) {
  if (input) {
    internal::ConnectionState_Data* result =
        internal::ConnectionState_Data::New(buf);
    result->connectionId = input->connectionId;
    result->paused = input->paused;
    result->persistent = input->persistent;
    Serialize_(std::move(input->name), buf, &result->name.ptr);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->name.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null name in ConnectionState struct");
    result->receiveTimeout = input->receiveTimeout;
    result->sendTimeout = input->sendTimeout;
    result->bufferSize = input->bufferSize;
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::ConnectionState_Data* input,
                  ConnectionStatePtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    ConnectionStatePtr result(ConnectionState::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->connectionId = input->connectionId;
      result->paused = input->paused;
      result->persistent = input->persistent;
      if (!Deserialize_(input->name.ptr, &result->name, context))
        success = false;
      result->receiveTimeout = input->receiveTimeout;
      result->sendTimeout = input->sendTimeout;
      result->bufferSize = input->bufferSize;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

ConnectionState_Reader::ConnectionState_Reader(
    internal::ConnectionState_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
size_t GetSerializedSize_(const SerializedConnectionPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::SerializedConnection_Data);
  size += GetSerializedSize_(input->state);
  size += GetSerializedSize_(input->queuedReceiveData);
  size += GetSerializedSize_(input->sender);
  size += GetSerializedSize_(input->receiver);
  return size;
}

void Serialize_(SerializedConnectionPtr input, mojo::internal::Buffer* buf,
                internal::SerializedConnection_Data** output) {
  if (input) {
    internal::SerializedConnection_Data* result =
        internal::SerializedConnection_Data::New(buf);
    Serialize_(std::move(input->state), buf, &result->state.ptr);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->state.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null state in SerializedConnection struct");
    result->queuedReceiveError.value = static_cast<int32_t>(input->queuedReceiveError);
    const mojo::internal::ArrayValidateParams queuedReceiveData_validate_params(
        0, false, nullptr);
    mojo::SerializeArray_(std::move(input->queuedReceiveData), buf,
        &result->queuedReceiveData.ptr, &queuedReceiveData_validate_params);
    mojo::internal::InterfacePointerToData(std::move(input->connection), &result->connection);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->connection.handle.is_valid(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid connection in SerializedConnection struct");
    Serialize_(std::move(input->sender), buf, &result->sender.ptr);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->sender.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null sender in SerializedConnection struct");
    Serialize_(std::move(input->receiver), buf, &result->receiver.ptr);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->receiver.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null receiver in SerializedConnection struct");
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::SerializedConnection_Data* input,
                  SerializedConnectionPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    SerializedConnectionPtr result(SerializedConnection::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      if (!Deserialize_(input->state.ptr, &result->state, context))
        success = false;
      result->queuedReceiveError = static_cast<device::serial::ReceiveError>(input->queuedReceiveError.value);
      if (!Deserialize_(input->queuedReceiveData.ptr, &result->queuedReceiveData, context))
        success = false;
      mojo::internal::InterfaceDataToPointer(&input->connection, &result->connection);
      if (!Deserialize_(input->sender.ptr, &result->sender, context))
        success = false;
      if (!Deserialize_(input->receiver.ptr, &result->receiver, context))
        success = false;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

SerializedConnection_Reader::SerializedConnection_Reader(
    internal::SerializedConnection_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
ConnectionState_Reader SerializedConnection_Reader::state() const {
  return ConnectionState_Reader(data_->state.ptr, context_);
}
device::serial::SerializedDataSender_Reader SerializedConnection_Reader::sender() const {
  return device::serial::SerializedDataSender_Reader(data_->sender.ptr, context_);
}
device::serial::SerializedDataReceiver_Reader SerializedConnection_Reader::receiver() const {
  return device::serial::SerializedDataReceiver_Reader(data_->receiver.ptr, context_);
}
}  // namespace serial
}  // namespace device

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
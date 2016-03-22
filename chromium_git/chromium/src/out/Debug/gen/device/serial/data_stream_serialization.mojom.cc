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

#include "device/serial/data_stream_serialization.mojom.h"

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
SerializedDataSender_Data* SerializedDataSender_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(SerializedDataSender_Data))) SerializedDataSender_Data();
}

// static
bool SerializedDataSender_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const SerializedDataSender_Data* object = static_cast<const SerializedDataSender_Data*>(data);

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

  const mojo::Handle sink_handle = object->sink.handle;
  if (!mojo::internal::ValidateHandleNonNullable(
          sink_handle,
          "invalid sink field in SerializedDataSender struct")) {
    return false;
  }
  if (!mojo::internal::ValidateHandle(sink_handle, bounds_checker))
    return false;

  return true;
}

void SerializedDataSender_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::EncodeHandle(&sink, handles);
}

void SerializedDataSender_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::DecodeHandle(&sink, handles);
}

SerializedDataSender_Data::SerializedDataSender_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

// static
PendingReceiveError_Data* PendingReceiveError_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(PendingReceiveError_Data))) PendingReceiveError_Data();
}

// static
bool PendingReceiveError_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PendingReceiveError_Data* object = static_cast<const PendingReceiveError_Data*>(data);

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

void PendingReceiveError_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void PendingReceiveError_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

PendingReceiveError_Data::PendingReceiveError_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

// static
SerializedDataReceiver_Data* SerializedDataReceiver_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(SerializedDataReceiver_Data))) SerializedDataReceiver_Data();
}

// static
bool SerializedDataReceiver_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const SerializedDataReceiver_Data* object = static_cast<const SerializedDataReceiver_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 48 }};

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

  const mojo::Handle source_handle = object->source.handle;
  if (!mojo::internal::ValidateHandleNonNullable(
          source_handle,
          "invalid source field in SerializedDataReceiver struct")) {
    return false;
  }
  if (!mojo::internal::ValidateHandle(source_handle, bounds_checker))
    return false;

  const mojo::Handle client_handle = object->client;
  if (!mojo::internal::ValidateHandleNonNullable(
          client_handle,
          "invalid client field in SerializedDataReceiver struct")) {
    return false;
  }
  if (!mojo::internal::ValidateHandle(client_handle, bounds_checker))
    return false;

  if (!mojo::internal::ValidateStruct(object->pending_error, bounds_checker))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->pending_data, "null pending_data field in SerializedDataReceiver struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams pending_data_validate_params(
      0, false, new mojo::internal::ArrayValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateArray(object->pending_data, bounds_checker,
                                     &pending_data_validate_params)) {
    return false;
  }

  return true;
}

void SerializedDataReceiver_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::EncodeHandle(&source, handles);
  mojo::internal::EncodeHandle(&client, handles);
  mojo::internal::Encode(&pending_error, handles);
  mojo::internal::Encode(&pending_data, handles);
}

void SerializedDataReceiver_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::DecodeHandle(&source, handles);
  mojo::internal::DecodeHandle(&client, handles);
  mojo::internal::Decode(&pending_error, handles);
  mojo::internal::Decode(&pending_data, handles);
}

SerializedDataReceiver_Data::SerializedDataReceiver_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}


}  // namespace internal// static
SerializedDataSenderPtr SerializedDataSender::New() {
  SerializedDataSenderPtr rv;
  mojo::internal::StructHelper<SerializedDataSender>::Initialize(&rv);
  return rv;
}

SerializedDataSender::SerializedDataSender()
    : sink(),
      fatal_error_value() {
}

SerializedDataSender::~SerializedDataSender() {
}



bool SerializedDataSender::Equals(const SerializedDataSender& other) const {
  if (!mojo::internal::ValueTraits<device::serial::DataSinkPtr>::Equals(this->sink, other.sink))
    return false;
  if (!mojo::internal::ValueTraits<int32_t>::Equals(this->fatal_error_value, other.fatal_error_value))
    return false;
  return true;
}// static
PendingReceiveErrorPtr PendingReceiveError::New() {
  PendingReceiveErrorPtr rv;
  mojo::internal::StructHelper<PendingReceiveError>::Initialize(&rv);
  return rv;
}

PendingReceiveError::PendingReceiveError()
    : error(),
      offset() {
}

PendingReceiveError::~PendingReceiveError() {
}


PendingReceiveErrorPtr PendingReceiveError::Clone() const {
  PendingReceiveErrorPtr rv(New());
  rv->error = error;
  rv->offset = offset;
  return rv;
}


bool PendingReceiveError::Equals(const PendingReceiveError& other) const {
  if (!mojo::internal::ValueTraits<int32_t>::Equals(this->error, other.error))
    return false;
  if (!mojo::internal::ValueTraits<uint32_t>::Equals(this->offset, other.offset))
    return false;
  return true;
}// static
SerializedDataReceiverPtr SerializedDataReceiver::New() {
  SerializedDataReceiverPtr rv;
  mojo::internal::StructHelper<SerializedDataReceiver>::Initialize(&rv);
  return rv;
}

SerializedDataReceiver::SerializedDataReceiver()
    : source(),
      client(),
      fatal_error_value(),
      bytes_received(),
      paused(),
      pending_error(),
      pending_data() {
}

SerializedDataReceiver::~SerializedDataReceiver() {
}



bool SerializedDataReceiver::Equals(const SerializedDataReceiver& other) const {
  if (!mojo::internal::ValueTraits<device::serial::DataSourcePtr>::Equals(this->source, other.source))
    return false;
  if (!mojo::internal::ValueTraits<mojo::ScopedMessagePipeHandle>::Equals(this->client, other.client))
    return false;
  if (!mojo::internal::ValueTraits<int32_t>::Equals(this->fatal_error_value, other.fatal_error_value))
    return false;
  if (!mojo::internal::ValueTraits<uint32_t>::Equals(this->bytes_received, other.bytes_received))
    return false;
  if (!mojo::internal::ValueTraits<bool>::Equals(this->paused, other.paused))
    return false;
  if (!mojo::internal::ValueTraits<PendingReceiveErrorPtr>::Equals(this->pending_error, other.pending_error))
    return false;
  if (!mojo::internal::ValueTraits<mojo::Array<mojo::Array<uint8_t> >>::Equals(this->pending_data, other.pending_data))
    return false;
  return true;
}
size_t GetSerializedSize_(const SerializedDataSenderPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::SerializedDataSender_Data);
  return size;
}

void Serialize_(SerializedDataSenderPtr input, mojo::internal::Buffer* buf,
                internal::SerializedDataSender_Data** output) {
  if (input) {
    internal::SerializedDataSender_Data* result =
        internal::SerializedDataSender_Data::New(buf);
    mojo::internal::InterfacePointerToData(std::move(input->sink), &result->sink);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->sink.handle.is_valid(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid sink in SerializedDataSender struct");
    result->fatal_error_value = input->fatal_error_value;
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::SerializedDataSender_Data* input,
                  SerializedDataSenderPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    SerializedDataSenderPtr result(SerializedDataSender::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      mojo::internal::InterfaceDataToPointer(&input->sink, &result->sink);
      result->fatal_error_value = input->fatal_error_value;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

SerializedDataSender_Reader::SerializedDataSender_Reader(
    internal::SerializedDataSender_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
size_t GetSerializedSize_(const PendingReceiveErrorPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::PendingReceiveError_Data);
  return size;
}

void Serialize_(PendingReceiveErrorPtr input, mojo::internal::Buffer* buf,
                internal::PendingReceiveError_Data** output) {
  if (input) {
    internal::PendingReceiveError_Data* result =
        internal::PendingReceiveError_Data::New(buf);
    result->error = input->error;
    result->offset = input->offset;
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::PendingReceiveError_Data* input,
                  PendingReceiveErrorPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    PendingReceiveErrorPtr result(PendingReceiveError::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->error = input->error;
      result->offset = input->offset;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

PendingReceiveError_Reader::PendingReceiveError_Reader(
    internal::PendingReceiveError_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
size_t GetSerializedSize_(const SerializedDataReceiverPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::SerializedDataReceiver_Data);
  size += GetSerializedSize_(input->pending_error);
  size += GetSerializedSize_(input->pending_data);
  return size;
}

void Serialize_(SerializedDataReceiverPtr input, mojo::internal::Buffer* buf,
                internal::SerializedDataReceiver_Data** output) {
  if (input) {
    internal::SerializedDataReceiver_Data* result =
        internal::SerializedDataReceiver_Data::New(buf);
    mojo::internal::InterfacePointerToData(std::move(input->source), &result->source);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->source.handle.is_valid(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid source in SerializedDataReceiver struct");
    result->client = input->client.release();
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->client.is_valid(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid client in SerializedDataReceiver struct");
    result->fatal_error_value = input->fatal_error_value;
    result->bytes_received = input->bytes_received;
    result->paused = input->paused;
    Serialize_(std::move(input->pending_error), buf, &result->pending_error.ptr);
    const mojo::internal::ArrayValidateParams pending_data_validate_params(
        0, false, new mojo::internal::ArrayValidateParams(0, false, nullptr));
    mojo::SerializeArray_(std::move(input->pending_data), buf,
        &result->pending_data.ptr, &pending_data_validate_params);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->pending_data.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null pending_data in SerializedDataReceiver struct");
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::SerializedDataReceiver_Data* input,
                  SerializedDataReceiverPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    SerializedDataReceiverPtr result(SerializedDataReceiver::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      mojo::internal::InterfaceDataToPointer(&input->source, &result->source);
      result->client.reset(mojo::internal::FetchAndReset(&input->client));
      result->fatal_error_value = input->fatal_error_value;
      result->bytes_received = input->bytes_received;
      result->paused = input->paused;
      if (!Deserialize_(input->pending_error.ptr, &result->pending_error, context))
        success = false;
      if (!Deserialize_(input->pending_data.ptr, &result->pending_data, context))
        success = false;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

SerializedDataReceiver_Reader::SerializedDataReceiver_Reader(
    internal::SerializedDataReceiver_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
PendingReceiveError_Reader SerializedDataReceiver_Reader::pending_error() const {
  return PendingReceiveError_Reader(data_->pending_error.ptr, context_);
}
}  // namespace serial
}  // namespace device

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
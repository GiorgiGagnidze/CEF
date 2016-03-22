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

#include "content/public/common/mojo_geoposition.mojom.h"

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
namespace content {

namespace internal {
namespace {

#pragma pack(push, 1)

#pragma pack(pop)

}  // namespace


// static
MojoGeoposition_Data* MojoGeoposition_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(MojoGeoposition_Data))) MojoGeoposition_Data();
}

// static
bool MojoGeoposition_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MojoGeoposition_Data* object = static_cast<const MojoGeoposition_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 88 }};

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

  if (!mojo::internal::ValidateEnum(object->error_code))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->error_message, "null error_message field in MojoGeoposition struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams error_message_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->error_message, bounds_checker,
                                     &error_message_validate_params)) {
    return false;
  }

  return true;
}

void MojoGeoposition_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&error_message, handles);
}

void MojoGeoposition_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&error_message, handles);
}

MojoGeoposition_Data::MojoGeoposition_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}


}  // namespace internal// static
MojoGeopositionPtr MojoGeoposition::New() {
  MojoGeopositionPtr rv;
  mojo::internal::StructHelper<MojoGeoposition>::Initialize(&rv);
  return rv;
}

MojoGeoposition::MojoGeoposition()
    : valid(),
      latitude(),
      longitude(),
      altitude(),
      accuracy(),
      altitude_accuracy(),
      heading(),
      speed(),
      timestamp(),
      error_code(),
      error_message() {
}

MojoGeoposition::~MojoGeoposition() {
}


MojoGeopositionPtr MojoGeoposition::Clone() const {
  MojoGeopositionPtr rv(New());
  rv->valid = valid;
  rv->latitude = latitude;
  rv->longitude = longitude;
  rv->altitude = altitude;
  rv->accuracy = accuracy;
  rv->altitude_accuracy = altitude_accuracy;
  rv->heading = heading;
  rv->speed = speed;
  rv->timestamp = timestamp;
  rv->error_code = error_code;
  rv->error_message = error_message;
  return rv;
}


bool MojoGeoposition::Equals(const MojoGeoposition& other) const {
  if (!mojo::internal::ValueTraits<bool>::Equals(this->valid, other.valid))
    return false;
  if (!mojo::internal::ValueTraits<double>::Equals(this->latitude, other.latitude))
    return false;
  if (!mojo::internal::ValueTraits<double>::Equals(this->longitude, other.longitude))
    return false;
  if (!mojo::internal::ValueTraits<double>::Equals(this->altitude, other.altitude))
    return false;
  if (!mojo::internal::ValueTraits<double>::Equals(this->accuracy, other.accuracy))
    return false;
  if (!mojo::internal::ValueTraits<double>::Equals(this->altitude_accuracy, other.altitude_accuracy))
    return false;
  if (!mojo::internal::ValueTraits<double>::Equals(this->heading, other.heading))
    return false;
  if (!mojo::internal::ValueTraits<double>::Equals(this->speed, other.speed))
    return false;
  if (!mojo::internal::ValueTraits<double>::Equals(this->timestamp, other.timestamp))
    return false;
  if (!mojo::internal::ValueTraits<MojoGeoposition::ErrorCode>::Equals(this->error_code, other.error_code))
    return false;
  if (!mojo::internal::ValueTraits<mojo::String>::Equals(this->error_message, other.error_message))
    return false;
  return true;
}
size_t GetSerializedSize_(const MojoGeopositionPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::MojoGeoposition_Data);
  size += GetSerializedSize_(input->error_message);
  return size;
}

void Serialize_(MojoGeopositionPtr input, mojo::internal::Buffer* buf,
                internal::MojoGeoposition_Data** output) {
  if (input) {
    internal::MojoGeoposition_Data* result =
        internal::MojoGeoposition_Data::New(buf);
    result->valid = input->valid;
    result->latitude = input->latitude;
    result->longitude = input->longitude;
    result->altitude = input->altitude;
    result->accuracy = input->accuracy;
    result->altitude_accuracy = input->altitude_accuracy;
    result->heading = input->heading;
    result->speed = input->speed;
    result->timestamp = input->timestamp;
    result->error_code.value = static_cast<int32_t>(input->error_code);
    Serialize_(std::move(input->error_message), buf, &result->error_message.ptr);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->error_message.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null error_message in MojoGeoposition struct");
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::MojoGeoposition_Data* input,
                  MojoGeopositionPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    MojoGeopositionPtr result(MojoGeoposition::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->valid = input->valid;
      result->latitude = input->latitude;
      result->longitude = input->longitude;
      result->altitude = input->altitude;
      result->accuracy = input->accuracy;
      result->altitude_accuracy = input->altitude_accuracy;
      result->heading = input->heading;
      result->speed = input->speed;
      result->timestamp = input->timestamp;
      result->error_code = static_cast<MojoGeoposition::ErrorCode>(input->error_code.value);
      if (!Deserialize_(input->error_message.ptr, &result->error_message, context))
        success = false;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

MojoGeoposition_Reader::MojoGeoposition_Reader(
    internal::MojoGeoposition_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
}  // namespace content

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
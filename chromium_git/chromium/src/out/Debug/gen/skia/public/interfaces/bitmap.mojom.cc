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

#include "skia/public/interfaces/bitmap.mojom.h"

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
namespace skia {

namespace internal {
namespace {

#pragma pack(push, 1)

#pragma pack(pop)

}  // namespace


// static
Bitmap_Data* Bitmap_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Bitmap_Data))) Bitmap_Data();
}

// static
bool Bitmap_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Bitmap_Data* object = static_cast<const Bitmap_Data*>(data);

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

  if (!mojo::internal::ValidateEnum(object->color_type))
    return false;

  if (!mojo::internal::ValidateEnum(object->alpha_type))
    return false;

  if (!mojo::internal::ValidateEnum(object->profile_type))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->pixel_data, "null pixel_data field in Bitmap struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams pixel_data_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->pixel_data, bounds_checker,
                                     &pixel_data_validate_params)) {
    return false;
  }

  return true;
}

void Bitmap_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&pixel_data, handles);
}

void Bitmap_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&pixel_data, handles);
}

Bitmap_Data::Bitmap_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}


}  // namespace internal// static
BitmapPtr Bitmap::New() {
  BitmapPtr rv;
  mojo::internal::StructHelper<Bitmap>::Initialize(&rv);
  return rv;
}

Bitmap::Bitmap()
    : color_type(),
      alpha_type(),
      profile_type(),
      width(),
      height(),
      pixel_data() {
}

Bitmap::~Bitmap() {
}


BitmapPtr Bitmap::Clone() const {
  BitmapPtr rv(New());
  rv->color_type = color_type;
  rv->alpha_type = alpha_type;
  rv->profile_type = profile_type;
  rv->width = width;
  rv->height = height;
  rv->pixel_data = pixel_data.Clone();
  return rv;
}


bool Bitmap::Equals(const Bitmap& other) const {
  if (!mojo::internal::ValueTraits<ColorType>::Equals(this->color_type, other.color_type))
    return false;
  if (!mojo::internal::ValueTraits<AlphaType>::Equals(this->alpha_type, other.alpha_type))
    return false;
  if (!mojo::internal::ValueTraits<ColorProfileType>::Equals(this->profile_type, other.profile_type))
    return false;
  if (!mojo::internal::ValueTraits<uint32_t>::Equals(this->width, other.width))
    return false;
  if (!mojo::internal::ValueTraits<uint32_t>::Equals(this->height, other.height))
    return false;
  if (!mojo::internal::ValueTraits<mojo::Array<uint8_t>>::Equals(this->pixel_data, other.pixel_data))
    return false;
  return true;
}
size_t GetSerializedSize_(const BitmapPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::Bitmap_Data);
  size += GetSerializedSize_(input->pixel_data);
  return size;
}

void Serialize_(BitmapPtr input, mojo::internal::Buffer* buf,
                internal::Bitmap_Data** output) {
  if (input) {
    internal::Bitmap_Data* result =
        internal::Bitmap_Data::New(buf);
    result->color_type.value = static_cast<int32_t>(input->color_type);
    result->alpha_type.value = static_cast<int32_t>(input->alpha_type);
    result->profile_type.value = static_cast<int32_t>(input->profile_type);
    result->width = input->width;
    result->height = input->height;
    const mojo::internal::ArrayValidateParams pixel_data_validate_params(
        0, false, nullptr);
    mojo::SerializeArray_(std::move(input->pixel_data), buf,
        &result->pixel_data.ptr, &pixel_data_validate_params);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->pixel_data.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null pixel_data in Bitmap struct");
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::Bitmap_Data* input,
                  BitmapPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    BitmapPtr result(Bitmap::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->color_type = static_cast<ColorType>(input->color_type.value);
      result->alpha_type = static_cast<AlphaType>(input->alpha_type.value);
      result->profile_type = static_cast<ColorProfileType>(input->profile_type.value);
      result->width = input->width;
      result->height = input->height;
      if (!Deserialize_(input->pixel_data.ptr, &result->pixel_data, context))
        success = false;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

Bitmap_Reader::Bitmap_Reader(
    internal::Bitmap_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
}  // namespace skia

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
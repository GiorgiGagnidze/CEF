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

#include "ui/mojo/geometry/geometry.mojom.h"

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

#pragma pack(pop)

}  // namespace


// static
Point_Data* Point_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Point_Data))) Point_Data();
}

// static
bool Point_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Point_Data* object = static_cast<const Point_Data*>(data);

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

void Point_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void Point_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

Point_Data::Point_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

// static
PointF_Data* PointF_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(PointF_Data))) PointF_Data();
}

// static
bool PointF_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PointF_Data* object = static_cast<const PointF_Data*>(data);

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

void PointF_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void PointF_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

PointF_Data::PointF_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

// static
Size_Data* Size_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Size_Data))) Size_Data();
}

// static
bool Size_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Size_Data* object = static_cast<const Size_Data*>(data);

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

void Size_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void Size_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

Size_Data::Size_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

// static
Rect_Data* Rect_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Rect_Data))) Rect_Data();
}

// static
bool Rect_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Rect_Data* object = static_cast<const Rect_Data*>(data);

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

  return true;
}

void Rect_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void Rect_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

Rect_Data::Rect_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

// static
RectF_Data* RectF_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(RectF_Data))) RectF_Data();
}

// static
bool RectF_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const RectF_Data* object = static_cast<const RectF_Data*>(data);

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

  return true;
}

void RectF_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void RectF_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

RectF_Data::RectF_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

// static
Transform_Data* Transform_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Transform_Data))) Transform_Data();
}

// static
bool Transform_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Transform_Data* object = static_cast<const Transform_Data*>(data);

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
          object->matrix, "null matrix field in Transform struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams matrix_validate_params(
      16, false, nullptr);
  if (!mojo::internal::ValidateArray(object->matrix, bounds_checker,
                                     &matrix_validate_params)) {
    return false;
  }

  return true;
}

void Transform_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&matrix, handles);
}

void Transform_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&matrix, handles);
}

Transform_Data::Transform_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

// static
Insets_Data* Insets_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Insets_Data))) Insets_Data();
}

// static
bool Insets_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Insets_Data* object = static_cast<const Insets_Data*>(data);

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

  return true;
}

void Insets_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void Insets_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

Insets_Data::Insets_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}


}  // namespace internal// static
PointPtr Point::New() {
  PointPtr rv;
  mojo::internal::StructHelper<Point>::Initialize(&rv);
  return rv;
}

Point::Point()
    : x(),
      y() {
}

Point::~Point() {
}


PointPtr Point::Clone() const {
  PointPtr rv(New());
  rv->x = x;
  rv->y = y;
  return rv;
}


bool Point::Equals(const Point& other) const {
  if (!mojo::internal::ValueTraits<int32_t>::Equals(this->x, other.x))
    return false;
  if (!mojo::internal::ValueTraits<int32_t>::Equals(this->y, other.y))
    return false;
  return true;
}// static
PointFPtr PointF::New() {
  PointFPtr rv;
  mojo::internal::StructHelper<PointF>::Initialize(&rv);
  return rv;
}

PointF::PointF()
    : x(),
      y() {
}

PointF::~PointF() {
}


PointFPtr PointF::Clone() const {
  PointFPtr rv(New());
  rv->x = x;
  rv->y = y;
  return rv;
}


bool PointF::Equals(const PointF& other) const {
  if (!mojo::internal::ValueTraits<float>::Equals(this->x, other.x))
    return false;
  if (!mojo::internal::ValueTraits<float>::Equals(this->y, other.y))
    return false;
  return true;
}// static
SizePtr Size::New() {
  SizePtr rv;
  mojo::internal::StructHelper<Size>::Initialize(&rv);
  return rv;
}

Size::Size()
    : width(),
      height() {
}

Size::~Size() {
}


SizePtr Size::Clone() const {
  SizePtr rv(New());
  rv->width = width;
  rv->height = height;
  return rv;
}


bool Size::Equals(const Size& other) const {
  if (!mojo::internal::ValueTraits<int32_t>::Equals(this->width, other.width))
    return false;
  if (!mojo::internal::ValueTraits<int32_t>::Equals(this->height, other.height))
    return false;
  return true;
}// static
RectPtr Rect::New() {
  RectPtr rv;
  mojo::internal::StructHelper<Rect>::Initialize(&rv);
  return rv;
}

Rect::Rect()
    : x(),
      y(),
      width(),
      height() {
}

Rect::~Rect() {
}


RectPtr Rect::Clone() const {
  RectPtr rv(New());
  rv->x = x;
  rv->y = y;
  rv->width = width;
  rv->height = height;
  return rv;
}


bool Rect::Equals(const Rect& other) const {
  if (!mojo::internal::ValueTraits<int32_t>::Equals(this->x, other.x))
    return false;
  if (!mojo::internal::ValueTraits<int32_t>::Equals(this->y, other.y))
    return false;
  if (!mojo::internal::ValueTraits<int32_t>::Equals(this->width, other.width))
    return false;
  if (!mojo::internal::ValueTraits<int32_t>::Equals(this->height, other.height))
    return false;
  return true;
}// static
RectFPtr RectF::New() {
  RectFPtr rv;
  mojo::internal::StructHelper<RectF>::Initialize(&rv);
  return rv;
}

RectF::RectF()
    : x(),
      y(),
      width(),
      height() {
}

RectF::~RectF() {
}


RectFPtr RectF::Clone() const {
  RectFPtr rv(New());
  rv->x = x;
  rv->y = y;
  rv->width = width;
  rv->height = height;
  return rv;
}


bool RectF::Equals(const RectF& other) const {
  if (!mojo::internal::ValueTraits<float>::Equals(this->x, other.x))
    return false;
  if (!mojo::internal::ValueTraits<float>::Equals(this->y, other.y))
    return false;
  if (!mojo::internal::ValueTraits<float>::Equals(this->width, other.width))
    return false;
  if (!mojo::internal::ValueTraits<float>::Equals(this->height, other.height))
    return false;
  return true;
}// static
TransformPtr Transform::New() {
  TransformPtr rv;
  mojo::internal::StructHelper<Transform>::Initialize(&rv);
  return rv;
}

Transform::Transform()
    : matrix() {
}

Transform::~Transform() {
}


TransformPtr Transform::Clone() const {
  TransformPtr rv(New());
  rv->matrix = matrix.Clone();
  return rv;
}


bool Transform::Equals(const Transform& other) const {
  if (!mojo::internal::ValueTraits<mojo::Array<float>>::Equals(this->matrix, other.matrix))
    return false;
  return true;
}// static
InsetsPtr Insets::New() {
  InsetsPtr rv;
  mojo::internal::StructHelper<Insets>::Initialize(&rv);
  return rv;
}

Insets::Insets()
    : top(),
      left(),
      bottom(),
      right() {
}

Insets::~Insets() {
}


InsetsPtr Insets::Clone() const {
  InsetsPtr rv(New());
  rv->top = top;
  rv->left = left;
  rv->bottom = bottom;
  rv->right = right;
  return rv;
}


bool Insets::Equals(const Insets& other) const {
  if (!mojo::internal::ValueTraits<int32_t>::Equals(this->top, other.top))
    return false;
  if (!mojo::internal::ValueTraits<int32_t>::Equals(this->left, other.left))
    return false;
  if (!mojo::internal::ValueTraits<int32_t>::Equals(this->bottom, other.bottom))
    return false;
  if (!mojo::internal::ValueTraits<int32_t>::Equals(this->right, other.right))
    return false;
  return true;
}
size_t GetSerializedSize_(const PointPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::Point_Data);
  return size;
}

void Serialize_(PointPtr input, mojo::internal::Buffer* buf,
                internal::Point_Data** output) {
  if (input) {
    internal::Point_Data* result =
        internal::Point_Data::New(buf);
    result->x = input->x;
    result->y = input->y;
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::Point_Data* input,
                  PointPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    PointPtr result(Point::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->x = input->x;
      result->y = input->y;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

Point_Reader::Point_Reader(
    internal::Point_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
size_t GetSerializedSize_(const PointFPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::PointF_Data);
  return size;
}

void Serialize_(PointFPtr input, mojo::internal::Buffer* buf,
                internal::PointF_Data** output) {
  if (input) {
    internal::PointF_Data* result =
        internal::PointF_Data::New(buf);
    result->x = input->x;
    result->y = input->y;
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::PointF_Data* input,
                  PointFPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    PointFPtr result(PointF::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->x = input->x;
      result->y = input->y;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

PointF_Reader::PointF_Reader(
    internal::PointF_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
size_t GetSerializedSize_(const SizePtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::Size_Data);
  return size;
}

void Serialize_(SizePtr input, mojo::internal::Buffer* buf,
                internal::Size_Data** output) {
  if (input) {
    internal::Size_Data* result =
        internal::Size_Data::New(buf);
    result->width = input->width;
    result->height = input->height;
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::Size_Data* input,
                  SizePtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    SizePtr result(Size::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->width = input->width;
      result->height = input->height;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

Size_Reader::Size_Reader(
    internal::Size_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
size_t GetSerializedSize_(const RectPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::Rect_Data);
  return size;
}

void Serialize_(RectPtr input, mojo::internal::Buffer* buf,
                internal::Rect_Data** output) {
  if (input) {
    internal::Rect_Data* result =
        internal::Rect_Data::New(buf);
    result->x = input->x;
    result->y = input->y;
    result->width = input->width;
    result->height = input->height;
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::Rect_Data* input,
                  RectPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    RectPtr result(Rect::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->x = input->x;
      result->y = input->y;
      result->width = input->width;
      result->height = input->height;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

Rect_Reader::Rect_Reader(
    internal::Rect_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
size_t GetSerializedSize_(const RectFPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::RectF_Data);
  return size;
}

void Serialize_(RectFPtr input, mojo::internal::Buffer* buf,
                internal::RectF_Data** output) {
  if (input) {
    internal::RectF_Data* result =
        internal::RectF_Data::New(buf);
    result->x = input->x;
    result->y = input->y;
    result->width = input->width;
    result->height = input->height;
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::RectF_Data* input,
                  RectFPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    RectFPtr result(RectF::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->x = input->x;
      result->y = input->y;
      result->width = input->width;
      result->height = input->height;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

RectF_Reader::RectF_Reader(
    internal::RectF_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
size_t GetSerializedSize_(const TransformPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::Transform_Data);
  size += GetSerializedSize_(input->matrix);
  return size;
}

void Serialize_(TransformPtr input, mojo::internal::Buffer* buf,
                internal::Transform_Data** output) {
  if (input) {
    internal::Transform_Data* result =
        internal::Transform_Data::New(buf);
    const mojo::internal::ArrayValidateParams matrix_validate_params(
        16, false, nullptr);
    mojo::SerializeArray_(std::move(input->matrix), buf,
        &result->matrix.ptr, &matrix_validate_params);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->matrix.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null matrix in Transform struct");
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::Transform_Data* input,
                  TransformPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    TransformPtr result(Transform::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      if (!Deserialize_(input->matrix.ptr, &result->matrix, context))
        success = false;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

Transform_Reader::Transform_Reader(
    internal::Transform_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
size_t GetSerializedSize_(const InsetsPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::Insets_Data);
  return size;
}

void Serialize_(InsetsPtr input, mojo::internal::Buffer* buf,
                internal::Insets_Data** output) {
  if (input) {
    internal::Insets_Data* result =
        internal::Insets_Data::New(buf);
    result->top = input->top;
    result->left = input->left;
    result->bottom = input->bottom;
    result->right = input->right;
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::Insets_Data* input,
                  InsetsPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    InsetsPtr result(Insets::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->top = input->top;
      result->left = input->left;
      result->bottom = input->bottom;
      result->right = input->right;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

Insets_Reader::Insets_Reader(
    internal::Insets_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
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

#include "device/battery/battery_status.mojom.h"

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

namespace internal {
namespace {

#pragma pack(push, 1)

#pragma pack(pop)

}  // namespace


// static
BatteryStatus_Data* BatteryStatus_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(BatteryStatus_Data))) BatteryStatus_Data();
}

// static
bool BatteryStatus_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BatteryStatus_Data* object = static_cast<const BatteryStatus_Data*>(data);

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

  return true;
}

void BatteryStatus_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void BatteryStatus_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

BatteryStatus_Data::BatteryStatus_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}


}  // namespace internal// static
BatteryStatusPtr BatteryStatus::New() {
  BatteryStatusPtr rv;
  mojo::internal::StructHelper<BatteryStatus>::Initialize(&rv);
  return rv;
}

BatteryStatus::BatteryStatus()
    : charging(true),
      charging_time(0.0),
      discharging_time(INFINITY),
      level(1.0) {
}

BatteryStatus::~BatteryStatus() {
}


BatteryStatusPtr BatteryStatus::Clone() const {
  BatteryStatusPtr rv(New());
  rv->charging = charging;
  rv->charging_time = charging_time;
  rv->discharging_time = discharging_time;
  rv->level = level;
  return rv;
}


bool BatteryStatus::Equals(const BatteryStatus& other) const {
  if (!mojo::internal::ValueTraits<bool>::Equals(this->charging, other.charging))
    return false;
  if (!mojo::internal::ValueTraits<double>::Equals(this->charging_time, other.charging_time))
    return false;
  if (!mojo::internal::ValueTraits<double>::Equals(this->discharging_time, other.discharging_time))
    return false;
  if (!mojo::internal::ValueTraits<double>::Equals(this->level, other.level))
    return false;
  return true;
}
size_t GetSerializedSize_(const BatteryStatusPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::BatteryStatus_Data);
  return size;
}

void Serialize_(BatteryStatusPtr input, mojo::internal::Buffer* buf,
                internal::BatteryStatus_Data** output) {
  if (input) {
    internal::BatteryStatus_Data* result =
        internal::BatteryStatus_Data::New(buf);
    result->charging = input->charging;
    result->charging_time = input->charging_time;
    result->discharging_time = input->discharging_time;
    result->level = input->level;
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::BatteryStatus_Data* input,
                  BatteryStatusPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    BatteryStatusPtr result(BatteryStatus::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->charging = input->charging;
      result->charging_time = input->charging_time;
      result->discharging_time = input->discharging_time;
      result->level = input->level;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

BatteryStatus_Reader::BatteryStatus_Reader(
    internal::BatteryStatus_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
}  // namespace device

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
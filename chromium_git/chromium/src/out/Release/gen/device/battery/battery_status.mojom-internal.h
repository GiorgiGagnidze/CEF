// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_BATTERY_BATTERY_STATUS_MOJOM_INTERNAL_H_
#define DEVICE_BATTERY_BATTERY_STATUS_MOJOM_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/native_serialization.h"
#include "mojo/public/cpp/bindings/lib/union_accessor.h"
#include "mojo/public/cpp/bindings/lib/value_traits.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"

namespace mojo {
namespace internal {
class BoundsChecker;
}
}
namespace device {

class BatteryStatus;


namespace internal {

class BatteryStatus_Data;




#pragma pack(push, 1)


class BatteryStatus_Data {
 public:
  static BatteryStatus_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint8_t charging : 1;
  uint8_t pad0_[7];
  double charging_time;
  double discharging_time;
  double level;

 private:
  BatteryStatus_Data();
  ~BatteryStatus_Data() = delete;
};
static_assert(sizeof(BatteryStatus_Data) == 40,
              "Bad sizeof(BatteryStatus_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace device

#endif  // DEVICE_BATTERY_BATTERY_STATUS_MOJOM_INTERNAL_H_
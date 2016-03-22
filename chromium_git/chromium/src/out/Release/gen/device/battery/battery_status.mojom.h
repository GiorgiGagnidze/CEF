// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_BATTERY_BATTERY_STATUS_MOJOM_H_
#define DEVICE_BATTERY_BATTERY_STATUS_MOJOM_H_

#include <stdint.h>
#include <ostream>

#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/callback.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/lib/control_message_proxy.h"
#include "mojo/public/cpp/bindings/lib/native_serialization.h"
#include "mojo/public/cpp/bindings/map.h"
#include "mojo/public/cpp/bindings/message_filter.h"
#include "mojo/public/cpp/bindings/no_interface.h"
#include "mojo/public/cpp/bindings/string.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "device/battery/battery_status.mojom-internal.h"
namespace device {

class BatteryStatus;
class BatteryStatus_Reader;

using BatteryStatusPtr = mojo::InlinedStructPtr<BatteryStatus>;





class BatteryStatus_Reader;

class BatteryStatus {
 public:
  using Data_ = internal::BatteryStatus_Data;
  using Reader = BatteryStatus_Reader;

  static BatteryStatusPtr New();

  template <typename U>
  static BatteryStatusPtr From(const U& u) {
    return mojo::TypeConverter<BatteryStatusPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, BatteryStatus>::Convert(*this);
  }

  BatteryStatus();
  ~BatteryStatus();


  BatteryStatusPtr Clone() const;
  bool Equals(const BatteryStatus& other) const;

  bool charging;
  double charging_time;
  double discharging_time;
  double level;
};




size_t GetSerializedSize_(const BatteryStatusPtr& input);
void Serialize_(BatteryStatusPtr input, mojo::internal::Buffer* buffer,
                internal::BatteryStatus_Data** output);
bool Deserialize_(internal::BatteryStatus_Data* input,
                  BatteryStatusPtr* output,
                  mojo::internal::SerializationContext* context);


class BatteryStatus_Reader {
 public:
  BatteryStatus_Reader(internal::BatteryStatus_Data* data,
                         mojo::internal::SerializationContext* context);
  bool charging() const { return data_->charging; }
  double charging_time() const { return data_->charging_time; }
  double discharging_time() const { return data_->discharging_time; }
  double level() const { return data_->level; }

 private:
  internal::BatteryStatus_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct BatteryStatus_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::BatteryStatus_Data);
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::BatteryStatus_Data** output) {
    internal::BatteryStatus_Data* result =
        internal::BatteryStatus_Data::New(buffer);
    result->charging = mojo::StructTraits<BatteryStatus, NativeType>
        ::charging(input);
    result->charging_time = mojo::StructTraits<BatteryStatus, NativeType>
        ::charging_time(input);
    result->discharging_time = mojo::StructTraits<BatteryStatus, NativeType>
        ::discharging_time(input);
    result->level = mojo::StructTraits<BatteryStatus, NativeType>
        ::level(input);
    *output = result;
  }

  static bool Deserialize(internal::BatteryStatus_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<BatteryStatus, NativeType>::Read(
        BatteryStatus_Reader(input, context), output);
  }
};  
}  // namespace device

#endif  // DEVICE_BATTERY_BATTERY_STATUS_MOJOM_H_
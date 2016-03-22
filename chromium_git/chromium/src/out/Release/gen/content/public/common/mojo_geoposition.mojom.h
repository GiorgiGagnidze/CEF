// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_PUBLIC_COMMON_MOJO_GEOPOSITION_MOJOM_H_
#define CONTENT_PUBLIC_COMMON_MOJO_GEOPOSITION_MOJOM_H_

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
#include "content/public/common/mojo_geoposition.mojom-internal.h"
namespace content {

class MojoGeoposition;
class MojoGeoposition_Reader;

using MojoGeopositionPtr = mojo::StructPtr<MojoGeoposition>;







class MojoGeoposition_Reader;

class MojoGeoposition {
 public:
  using Data_ = internal::MojoGeoposition_Data;
  using Reader = MojoGeoposition_Reader;
  enum class ErrorCode : int32_t {
    NONE = 0,
    PERMISSION_DENIED = 1,
    POSITION_UNAVAILABLE = 2,
    TIMEOUT = 3,
    LAST = MojoGeoposition::ErrorCode::TIMEOUT,
  };

  static MojoGeopositionPtr New();

  template <typename U>
  static MojoGeopositionPtr From(const U& u) {
    return mojo::TypeConverter<MojoGeopositionPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, MojoGeoposition>::Convert(*this);
  }

  MojoGeoposition();
  ~MojoGeoposition();


  MojoGeopositionPtr Clone() const;
  bool Equals(const MojoGeoposition& other) const;

  bool valid;
  double latitude;
  double longitude;
  double altitude;
  double accuracy;
  double altitude_accuracy;
  double heading;
  double speed;
  double timestamp;
  MojoGeoposition::ErrorCode error_code;
  mojo::String error_message;
};


size_t GetSerializedSize_(const MojoGeopositionPtr& input);
void Serialize_(MojoGeopositionPtr input, mojo::internal::Buffer* buffer,
                internal::MojoGeoposition_Data** output);
bool Deserialize_(internal::MojoGeoposition_Data* input,
                  MojoGeopositionPtr* output,
                  mojo::internal::SerializationContext* context);


class MojoGeoposition_Reader {
 public:
  MojoGeoposition_Reader(internal::MojoGeoposition_Data* data,
                         mojo::internal::SerializationContext* context);
  bool valid() const { return data_->valid; }
  double latitude() const { return data_->latitude; }
  double longitude() const { return data_->longitude; }
  double altitude() const { return data_->altitude; }
  double accuracy() const { return data_->accuracy; }
  double altitude_accuracy() const { return data_->altitude_accuracy; }
  double heading() const { return data_->heading; }
  double speed() const { return data_->speed; }
  double timestamp() const { return data_->timestamp; }
  MojoGeoposition::ErrorCode error_code() const {
    return static_cast<MojoGeoposition::ErrorCode>(data_->error_code.value);
  }
  // TODO(rockot): Support reading other object kinds. (error_message() omitted)

 private:
  internal::MojoGeoposition_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct MojoGeoposition_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::MojoGeoposition_Data);
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field error_message";
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::MojoGeoposition_Data** output) {
    internal::MojoGeoposition_Data* result =
        internal::MojoGeoposition_Data::New(buffer);
    result->valid = mojo::StructTraits<MojoGeoposition, NativeType>
        ::valid(input);
    result->latitude = mojo::StructTraits<MojoGeoposition, NativeType>
        ::latitude(input);
    result->longitude = mojo::StructTraits<MojoGeoposition, NativeType>
        ::longitude(input);
    result->altitude = mojo::StructTraits<MojoGeoposition, NativeType>
        ::altitude(input);
    result->accuracy = mojo::StructTraits<MojoGeoposition, NativeType>
        ::accuracy(input);
    result->altitude_accuracy = mojo::StructTraits<MojoGeoposition, NativeType>
        ::altitude_accuracy(input);
    result->heading = mojo::StructTraits<MojoGeoposition, NativeType>
        ::heading(input);
    result->speed = mojo::StructTraits<MojoGeoposition, NativeType>
        ::speed(input);
    result->timestamp = mojo::StructTraits<MojoGeoposition, NativeType>
        ::timestamp(input);
    result->error_code = mojo::StructTraits<MojoGeoposition, NativeType>
        ::error_code(input);
    result->error_message = mojo::StructTraits<MojoGeoposition, NativeType>
        ::error_message(input);
    *output = result;
  }

  static bool Deserialize(internal::MojoGeoposition_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<MojoGeoposition, NativeType>::Read(
        MojoGeoposition_Reader(input, context), output);
  }
};  

inline std::ostream& operator<<(std::ostream& os, MojoGeoposition::ErrorCode value) {
  switch(value) {
    case MojoGeoposition::ErrorCode::NONE:
      return os << "MojoGeoposition::ErrorCode::NONE";
    case MojoGeoposition::ErrorCode::PERMISSION_DENIED:
      return os << "MojoGeoposition::ErrorCode::PERMISSION_DENIED";
    case MojoGeoposition::ErrorCode::POSITION_UNAVAILABLE:
      return os << "MojoGeoposition::ErrorCode::POSITION_UNAVAILABLE";
    case MojoGeoposition::ErrorCode::TIMEOUT:
      return os << "MojoGeoposition::ErrorCode::{TIMEOUT, LAST}";
    default:
      return os << "Unknown MojoGeoposition::ErrorCode value: " << static_cast<int32_t>(value);
  }
}

inline bool IsKnownEnumValue(MojoGeoposition::ErrorCode value) {
  return ::content::internal::MojoGeoposition_Data::ErrorCode_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
}  // namespace content

#endif  // CONTENT_PUBLIC_COMMON_MOJO_GEOPOSITION_MOJOM_H_
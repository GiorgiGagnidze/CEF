// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_PUBLIC_COMMON_MOJO_GEOPOSITION_MOJOM_INTERNAL_H_
#define CONTENT_PUBLIC_COMMON_MOJO_GEOPOSITION_MOJOM_INTERNAL_H_

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
namespace content {

class MojoGeoposition;


namespace internal {

class MojoGeoposition_Data;




#pragma pack(push, 1)


class MojoGeoposition_Data {
 public:
  static MojoGeoposition_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);


  struct ErrorCode_Data {
   public:
    // Used to identify Mojom Enum Data Classes.
    typedef void MojomEnumDataType;
  
    static bool const kIsExtensible = false;
  
    static bool IsKnownValue(int32_t value) {
      switch (value) {
        case 0:
        case 1:
        case 2:
        case 3:
          return true;
      }
      return false;
    }
  
    int32_t value;
  };

  mojo::internal::StructHeader header_;
  uint8_t valid : 1;
  uint8_t pad0_[3];
  internal::MojoGeoposition_Data::ErrorCode_Data error_code;
  double latitude;
  double longitude;
  double altitude;
  double accuracy;
  double altitude_accuracy;
  double heading;
  double speed;
  double timestamp;
  mojo::internal::StringPointer error_message;

 private:
  MojoGeoposition_Data();
  ~MojoGeoposition_Data() = delete;
};
static_assert(sizeof(MojoGeoposition_Data) == 88,
              "Bad sizeof(MojoGeoposition_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace content

#endif  // CONTENT_PUBLIC_COMMON_MOJO_GEOPOSITION_MOJOM_INTERNAL_H_
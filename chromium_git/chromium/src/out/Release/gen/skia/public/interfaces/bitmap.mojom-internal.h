// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SKIA_PUBLIC_INTERFACES_BITMAP_MOJOM_INTERNAL_H_
#define SKIA_PUBLIC_INTERFACES_BITMAP_MOJOM_INTERNAL_H_

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
namespace skia {

class Bitmap;


namespace internal {

class Bitmap_Data;



  
struct ColorType_Data {
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
      case 4:
      case 5:
      case 6:
      case 7:
        return true;
    }
    return false;
  }

  int32_t value;
};
  
struct AlphaType_Data {
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
  
struct ColorProfileType_Data {
 public:
  // Used to identify Mojom Enum Data Classes.
  typedef void MojomEnumDataType;

  static bool const kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
        return true;
    }
    return false;
  }

  int32_t value;
};

#pragma pack(push, 1)


class Bitmap_Data {
 public:
  static Bitmap_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  internal::ColorType_Data color_type;
  internal::AlphaType_Data alpha_type;
  internal::ColorProfileType_Data profile_type;
  uint32_t width;
  uint32_t height;
  uint8_t pad4_[4];
  mojo::internal::ArrayPointer<uint8_t> pixel_data;

 private:
  Bitmap_Data();
  ~Bitmap_Data() = delete;
};
static_assert(sizeof(Bitmap_Data) == 40,
              "Bad sizeof(Bitmap_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace skia

#endif  // SKIA_PUBLIC_INTERFACES_BITMAP_MOJOM_INTERNAL_H_
// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SKIA_PUBLIC_INTERFACES_BITMAP_MOJOM_H_
#define SKIA_PUBLIC_INTERFACES_BITMAP_MOJOM_H_

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
#include "skia/public/interfaces/bitmap.mojom-internal.h"
namespace skia {

  
enum class ColorType : int32_t {
  UNKNOWN,
  ALPHA_8,
  RGB_565,
  ARGB_4444,
  RGBA_8888,
  BGRA_8888,
  INDEX_8,
  GRAY_8,
};
  
inline std::ostream& operator<<(std::ostream& os, ColorType value) {
  switch(value) {
    case ColorType::UNKNOWN:
      return os << "ColorType::UNKNOWN";
    case ColorType::ALPHA_8:
      return os << "ColorType::ALPHA_8";
    case ColorType::RGB_565:
      return os << "ColorType::RGB_565";
    case ColorType::ARGB_4444:
      return os << "ColorType::ARGB_4444";
    case ColorType::RGBA_8888:
      return os << "ColorType::RGBA_8888";
    case ColorType::BGRA_8888:
      return os << "ColorType::BGRA_8888";
    case ColorType::INDEX_8:
      return os << "ColorType::INDEX_8";
    case ColorType::GRAY_8:
      return os << "ColorType::GRAY_8";
    default:
      return os << "Unknown ColorType value: " << static_cast<int32_t>(value);
  }
}
  
inline bool IsKnownEnumValue(ColorType value) {
  return ::skia::internal::ColorType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
  
enum class AlphaType : int32_t {
  UNKNOWN,
  ALPHA_TYPE_OPAQUE,
  PREMUL,
  UNPREMUL,
};
  
inline std::ostream& operator<<(std::ostream& os, AlphaType value) {
  switch(value) {
    case AlphaType::UNKNOWN:
      return os << "AlphaType::UNKNOWN";
    case AlphaType::ALPHA_TYPE_OPAQUE:
      return os << "AlphaType::ALPHA_TYPE_OPAQUE";
    case AlphaType::PREMUL:
      return os << "AlphaType::PREMUL";
    case AlphaType::UNPREMUL:
      return os << "AlphaType::UNPREMUL";
    default:
      return os << "Unknown AlphaType value: " << static_cast<int32_t>(value);
  }
}
  
inline bool IsKnownEnumValue(AlphaType value) {
  return ::skia::internal::AlphaType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
  
enum class ColorProfileType : int32_t {
  LINEAR,
  SRGB,
};
  
inline std::ostream& operator<<(std::ostream& os, ColorProfileType value) {
  switch(value) {
    case ColorProfileType::LINEAR:
      return os << "ColorProfileType::LINEAR";
    case ColorProfileType::SRGB:
      return os << "ColorProfileType::SRGB";
    default:
      return os << "Unknown ColorProfileType value: " << static_cast<int32_t>(value);
  }
}
  
inline bool IsKnownEnumValue(ColorProfileType value) {
  return ::skia::internal::ColorProfileType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class Bitmap;
class Bitmap_Reader;

using BitmapPtr = mojo::StructPtr<Bitmap>;







class Bitmap_Reader;

class Bitmap {
 public:
  using Data_ = internal::Bitmap_Data;
  using Reader = Bitmap_Reader;

  static BitmapPtr New();

  template <typename U>
  static BitmapPtr From(const U& u) {
    return mojo::TypeConverter<BitmapPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Bitmap>::Convert(*this);
  }

  Bitmap();
  ~Bitmap();


  BitmapPtr Clone() const;
  bool Equals(const Bitmap& other) const;

  ColorType color_type;
  AlphaType alpha_type;
  ColorProfileType profile_type;
  uint32_t width;
  uint32_t height;
  mojo::Array<uint8_t> pixel_data;
};


size_t GetSerializedSize_(const BitmapPtr& input);
void Serialize_(BitmapPtr input, mojo::internal::Buffer* buffer,
                internal::Bitmap_Data** output);
bool Deserialize_(internal::Bitmap_Data* input,
                  BitmapPtr* output,
                  mojo::internal::SerializationContext* context);


class Bitmap_Reader {
 public:
  Bitmap_Reader(internal::Bitmap_Data* data,
                         mojo::internal::SerializationContext* context);
  ColorType color_type() const {
    return static_cast<ColorType>(data_->color_type.value);
  }
  AlphaType alpha_type() const {
    return static_cast<AlphaType>(data_->alpha_type.value);
  }
  ColorProfileType profile_type() const {
    return static_cast<ColorProfileType>(data_->profile_type.value);
  }
  uint32_t width() const { return data_->width; }
  uint32_t height() const { return data_->height; }
  // TODO(rockot): Support reading other object kinds. (pixel_data() omitted)

 private:
  internal::Bitmap_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct Bitmap_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::Bitmap_Data);
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field pixel_data";
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::Bitmap_Data** output) {
    internal::Bitmap_Data* result =
        internal::Bitmap_Data::New(buffer);
    result->color_type = mojo::StructTraits<Bitmap, NativeType>
        ::color_type(input);
    result->alpha_type = mojo::StructTraits<Bitmap, NativeType>
        ::alpha_type(input);
    result->profile_type = mojo::StructTraits<Bitmap, NativeType>
        ::profile_type(input);
    result->width = mojo::StructTraits<Bitmap, NativeType>
        ::width(input);
    result->height = mojo::StructTraits<Bitmap, NativeType>
        ::height(input);
    result->pixel_data = mojo::StructTraits<Bitmap, NativeType>
        ::pixel_data(input);
    *output = result;
  }

  static bool Deserialize(internal::Bitmap_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<Bitmap, NativeType>::Read(
        Bitmap_Reader(input, context), output);
  }
};  
}  // namespace skia

#endif  // SKIA_PUBLIC_INTERFACES_BITMAP_MOJOM_H_
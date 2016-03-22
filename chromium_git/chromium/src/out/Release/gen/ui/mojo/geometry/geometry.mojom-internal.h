// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_MOJO_GEOMETRY_GEOMETRY_MOJOM_INTERNAL_H_
#define UI_MOJO_GEOMETRY_GEOMETRY_MOJOM_INTERNAL_H_

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
namespace mojo {

class Point;
class PointF;
class Size;
class Rect;
class RectF;
class Transform;
class Insets;


namespace internal {

class Point_Data;
class PointF_Data;
class Size_Data;
class Rect_Data;
class RectF_Data;
class Transform_Data;
class Insets_Data;




#pragma pack(push, 1)


class Point_Data {
 public:
  static Point_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  int32_t x;
  int32_t y;

 private:
  Point_Data();
  ~Point_Data() = delete;
};
static_assert(sizeof(Point_Data) == 16,
              "Bad sizeof(Point_Data)");
class PointF_Data {
 public:
  static PointF_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  float x;
  float y;

 private:
  PointF_Data();
  ~PointF_Data() = delete;
};
static_assert(sizeof(PointF_Data) == 16,
              "Bad sizeof(PointF_Data)");
class Size_Data {
 public:
  static Size_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  int32_t width;
  int32_t height;

 private:
  Size_Data();
  ~Size_Data() = delete;
};
static_assert(sizeof(Size_Data) == 16,
              "Bad sizeof(Size_Data)");
class Rect_Data {
 public:
  static Rect_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  int32_t x;
  int32_t y;
  int32_t width;
  int32_t height;

 private:
  Rect_Data();
  ~Rect_Data() = delete;
};
static_assert(sizeof(Rect_Data) == 24,
              "Bad sizeof(Rect_Data)");
class RectF_Data {
 public:
  static RectF_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  float x;
  float y;
  float width;
  float height;

 private:
  RectF_Data();
  ~RectF_Data() = delete;
};
static_assert(sizeof(RectF_Data) == 24,
              "Bad sizeof(RectF_Data)");
class Transform_Data {
 public:
  static Transform_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::ArrayPointer<float> matrix;

 private:
  Transform_Data();
  ~Transform_Data() = delete;
};
static_assert(sizeof(Transform_Data) == 16,
              "Bad sizeof(Transform_Data)");
class Insets_Data {
 public:
  static Insets_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  int32_t top;
  int32_t left;
  int32_t bottom;
  int32_t right;

 private:
  Insets_Data();
  ~Insets_Data() = delete;
};
static_assert(sizeof(Insets_Data) == 24,
              "Bad sizeof(Insets_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojo

#endif  // UI_MOJO_GEOMETRY_GEOMETRY_MOJOM_INTERNAL_H_
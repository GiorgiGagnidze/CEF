// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_MOJO_GEOMETRY_GEOMETRY_MOJOM_H_
#define UI_MOJO_GEOMETRY_GEOMETRY_MOJOM_H_

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
#include "ui/mojo/geometry/geometry.mojom-internal.h"
namespace mojo {

class Point;
class Point_Reader;

using PointPtr = mojo::InlinedStructPtr<Point>;


class PointF;
class PointF_Reader;

using PointFPtr = mojo::InlinedStructPtr<PointF>;


class Size;
class Size_Reader;

using SizePtr = mojo::InlinedStructPtr<Size>;


class Rect;
class Rect_Reader;

using RectPtr = mojo::InlinedStructPtr<Rect>;


class RectF;
class RectF_Reader;

using RectFPtr = mojo::InlinedStructPtr<RectF>;


class Transform;
class Transform_Reader;

using TransformPtr = mojo::StructPtr<Transform>;


class Insets;
class Insets_Reader;

using InsetsPtr = mojo::InlinedStructPtr<Insets>;





class Point_Reader;

class Point {
 public:
  using Data_ = internal::Point_Data;
  using Reader = Point_Reader;

  static PointPtr New();

  template <typename U>
  static PointPtr From(const U& u) {
    return mojo::TypeConverter<PointPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Point>::Convert(*this);
  }

  Point();
  ~Point();


  PointPtr Clone() const;
  bool Equals(const Point& other) const;

  int32_t x;
  int32_t y;
};


class PointF_Reader;

class PointF {
 public:
  using Data_ = internal::PointF_Data;
  using Reader = PointF_Reader;

  static PointFPtr New();

  template <typename U>
  static PointFPtr From(const U& u) {
    return mojo::TypeConverter<PointFPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PointF>::Convert(*this);
  }

  PointF();
  ~PointF();


  PointFPtr Clone() const;
  bool Equals(const PointF& other) const;

  float x;
  float y;
};


class Size_Reader;

class Size {
 public:
  using Data_ = internal::Size_Data;
  using Reader = Size_Reader;

  static SizePtr New();

  template <typename U>
  static SizePtr From(const U& u) {
    return mojo::TypeConverter<SizePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Size>::Convert(*this);
  }

  Size();
  ~Size();


  SizePtr Clone() const;
  bool Equals(const Size& other) const;

  int32_t width;
  int32_t height;
};


class Rect_Reader;

class Rect {
 public:
  using Data_ = internal::Rect_Data;
  using Reader = Rect_Reader;

  static RectPtr New();

  template <typename U>
  static RectPtr From(const U& u) {
    return mojo::TypeConverter<RectPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Rect>::Convert(*this);
  }

  Rect();
  ~Rect();


  RectPtr Clone() const;
  bool Equals(const Rect& other) const;

  int32_t x;
  int32_t y;
  int32_t width;
  int32_t height;
};


class RectF_Reader;

class RectF {
 public:
  using Data_ = internal::RectF_Data;
  using Reader = RectF_Reader;

  static RectFPtr New();

  template <typename U>
  static RectFPtr From(const U& u) {
    return mojo::TypeConverter<RectFPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RectF>::Convert(*this);
  }

  RectF();
  ~RectF();


  RectFPtr Clone() const;
  bool Equals(const RectF& other) const;

  float x;
  float y;
  float width;
  float height;
};



class Insets_Reader;

class Insets {
 public:
  using Data_ = internal::Insets_Data;
  using Reader = Insets_Reader;

  static InsetsPtr New();

  template <typename U>
  static InsetsPtr From(const U& u) {
    return mojo::TypeConverter<InsetsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Insets>::Convert(*this);
  }

  Insets();
  ~Insets();


  InsetsPtr Clone() const;
  bool Equals(const Insets& other) const;

  int32_t top;
  int32_t left;
  int32_t bottom;
  int32_t right;
};








class Transform_Reader;

class Transform {
 public:
  using Data_ = internal::Transform_Data;
  using Reader = Transform_Reader;

  static TransformPtr New();

  template <typename U>
  static TransformPtr From(const U& u) {
    return mojo::TypeConverter<TransformPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Transform>::Convert(*this);
  }

  Transform();
  ~Transform();


  TransformPtr Clone() const;
  bool Equals(const Transform& other) const;

  mojo::Array<float> matrix;
};



size_t GetSerializedSize_(const PointPtr& input);
void Serialize_(PointPtr input, mojo::internal::Buffer* buffer,
                internal::Point_Data** output);
bool Deserialize_(internal::Point_Data* input,
                  PointPtr* output,
                  mojo::internal::SerializationContext* context);


class Point_Reader {
 public:
  Point_Reader(internal::Point_Data* data,
                         mojo::internal::SerializationContext* context);
  int32_t x() const { return data_->x; }
  int32_t y() const { return data_->y; }

 private:
  internal::Point_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct Point_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::Point_Data);
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::Point_Data** output) {
    internal::Point_Data* result =
        internal::Point_Data::New(buffer);
    result->x = mojo::StructTraits<Point, NativeType>
        ::x(input);
    result->y = mojo::StructTraits<Point, NativeType>
        ::y(input);
    *output = result;
  }

  static bool Deserialize(internal::Point_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<Point, NativeType>::Read(
        Point_Reader(input, context), output);
  }
};  
size_t GetSerializedSize_(const PointFPtr& input);
void Serialize_(PointFPtr input, mojo::internal::Buffer* buffer,
                internal::PointF_Data** output);
bool Deserialize_(internal::PointF_Data* input,
                  PointFPtr* output,
                  mojo::internal::SerializationContext* context);


class PointF_Reader {
 public:
  PointF_Reader(internal::PointF_Data* data,
                         mojo::internal::SerializationContext* context);
  float x() const { return data_->x; }
  float y() const { return data_->y; }

 private:
  internal::PointF_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct PointF_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::PointF_Data);
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::PointF_Data** output) {
    internal::PointF_Data* result =
        internal::PointF_Data::New(buffer);
    result->x = mojo::StructTraits<PointF, NativeType>
        ::x(input);
    result->y = mojo::StructTraits<PointF, NativeType>
        ::y(input);
    *output = result;
  }

  static bool Deserialize(internal::PointF_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<PointF, NativeType>::Read(
        PointF_Reader(input, context), output);
  }
};  
size_t GetSerializedSize_(const SizePtr& input);
void Serialize_(SizePtr input, mojo::internal::Buffer* buffer,
                internal::Size_Data** output);
bool Deserialize_(internal::Size_Data* input,
                  SizePtr* output,
                  mojo::internal::SerializationContext* context);


class Size_Reader {
 public:
  Size_Reader(internal::Size_Data* data,
                         mojo::internal::SerializationContext* context);
  int32_t width() const { return data_->width; }
  int32_t height() const { return data_->height; }

 private:
  internal::Size_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct Size_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::Size_Data);
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::Size_Data** output) {
    internal::Size_Data* result =
        internal::Size_Data::New(buffer);
    result->width = mojo::StructTraits<Size, NativeType>
        ::width(input);
    result->height = mojo::StructTraits<Size, NativeType>
        ::height(input);
    *output = result;
  }

  static bool Deserialize(internal::Size_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<Size, NativeType>::Read(
        Size_Reader(input, context), output);
  }
};  
size_t GetSerializedSize_(const RectPtr& input);
void Serialize_(RectPtr input, mojo::internal::Buffer* buffer,
                internal::Rect_Data** output);
bool Deserialize_(internal::Rect_Data* input,
                  RectPtr* output,
                  mojo::internal::SerializationContext* context);


class Rect_Reader {
 public:
  Rect_Reader(internal::Rect_Data* data,
                         mojo::internal::SerializationContext* context);
  int32_t x() const { return data_->x; }
  int32_t y() const { return data_->y; }
  int32_t width() const { return data_->width; }
  int32_t height() const { return data_->height; }

 private:
  internal::Rect_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct Rect_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::Rect_Data);
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::Rect_Data** output) {
    internal::Rect_Data* result =
        internal::Rect_Data::New(buffer);
    result->x = mojo::StructTraits<Rect, NativeType>
        ::x(input);
    result->y = mojo::StructTraits<Rect, NativeType>
        ::y(input);
    result->width = mojo::StructTraits<Rect, NativeType>
        ::width(input);
    result->height = mojo::StructTraits<Rect, NativeType>
        ::height(input);
    *output = result;
  }

  static bool Deserialize(internal::Rect_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<Rect, NativeType>::Read(
        Rect_Reader(input, context), output);
  }
};  
size_t GetSerializedSize_(const RectFPtr& input);
void Serialize_(RectFPtr input, mojo::internal::Buffer* buffer,
                internal::RectF_Data** output);
bool Deserialize_(internal::RectF_Data* input,
                  RectFPtr* output,
                  mojo::internal::SerializationContext* context);


class RectF_Reader {
 public:
  RectF_Reader(internal::RectF_Data* data,
                         mojo::internal::SerializationContext* context);
  float x() const { return data_->x; }
  float y() const { return data_->y; }
  float width() const { return data_->width; }
  float height() const { return data_->height; }

 private:
  internal::RectF_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct RectF_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::RectF_Data);
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::RectF_Data** output) {
    internal::RectF_Data* result =
        internal::RectF_Data::New(buffer);
    result->x = mojo::StructTraits<RectF, NativeType>
        ::x(input);
    result->y = mojo::StructTraits<RectF, NativeType>
        ::y(input);
    result->width = mojo::StructTraits<RectF, NativeType>
        ::width(input);
    result->height = mojo::StructTraits<RectF, NativeType>
        ::height(input);
    *output = result;
  }

  static bool Deserialize(internal::RectF_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<RectF, NativeType>::Read(
        RectF_Reader(input, context), output);
  }
};  
size_t GetSerializedSize_(const TransformPtr& input);
void Serialize_(TransformPtr input, mojo::internal::Buffer* buffer,
                internal::Transform_Data** output);
bool Deserialize_(internal::Transform_Data* input,
                  TransformPtr* output,
                  mojo::internal::SerializationContext* context);


class Transform_Reader {
 public:
  Transform_Reader(internal::Transform_Data* data,
                         mojo::internal::SerializationContext* context);
  // TODO(rockot): Support reading other object kinds. (matrix() omitted)

 private:
  internal::Transform_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct Transform_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::Transform_Data);
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field matrix";
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::Transform_Data** output) {
    internal::Transform_Data* result =
        internal::Transform_Data::New(buffer);
    result->matrix = mojo::StructTraits<Transform, NativeType>
        ::matrix(input);
    *output = result;
  }

  static bool Deserialize(internal::Transform_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<Transform, NativeType>::Read(
        Transform_Reader(input, context), output);
  }
};  
size_t GetSerializedSize_(const InsetsPtr& input);
void Serialize_(InsetsPtr input, mojo::internal::Buffer* buffer,
                internal::Insets_Data** output);
bool Deserialize_(internal::Insets_Data* input,
                  InsetsPtr* output,
                  mojo::internal::SerializationContext* context);


class Insets_Reader {
 public:
  Insets_Reader(internal::Insets_Data* data,
                         mojo::internal::SerializationContext* context);
  int32_t top() const { return data_->top; }
  int32_t left() const { return data_->left; }
  int32_t bottom() const { return data_->bottom; }
  int32_t right() const { return data_->right; }

 private:
  internal::Insets_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct Insets_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::Insets_Data);
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::Insets_Data** output) {
    internal::Insets_Data* result =
        internal::Insets_Data::New(buffer);
    result->top = mojo::StructTraits<Insets, NativeType>
        ::top(input);
    result->left = mojo::StructTraits<Insets, NativeType>
        ::left(input);
    result->bottom = mojo::StructTraits<Insets, NativeType>
        ::bottom(input);
    result->right = mojo::StructTraits<Insets, NativeType>
        ::right(input);
    *output = result;
  }

  static bool Deserialize(internal::Insets_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<Insets, NativeType>::Read(
        Insets_Reader(input, context), output);
  }
};  
}  // namespace mojo

#endif  // UI_MOJO_GEOMETRY_GEOMETRY_MOJOM_H_
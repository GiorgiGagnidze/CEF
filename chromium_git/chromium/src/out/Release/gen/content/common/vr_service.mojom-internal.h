// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_VR_SERVICE_MOJOM_INTERNAL_H_
#define CONTENT_COMMON_VR_SERVICE_MOJOM_INTERNAL_H_

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

class VRVector3;
class VRVector4;
class VRRect;
class VRFieldOfView;
class VRSensorState;
class VREyeParameters;
class VRHMDInfo;
class VRDeviceInfo;


namespace internal {

class VRVector3_Data;
class VRVector4_Data;
class VRRect_Data;
class VRFieldOfView_Data;
class VRSensorState_Data;
class VREyeParameters_Data;
class VRHMDInfo_Data;
class VRDeviceInfo_Data;




#pragma pack(push, 1)


class VRVector3_Data {
 public:
  static VRVector3_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  float x;
  float y;
  float z;
  uint8_t padfinal_[4];

 private:
  VRVector3_Data();
  ~VRVector3_Data() = delete;
};
static_assert(sizeof(VRVector3_Data) == 24,
              "Bad sizeof(VRVector3_Data)");
class VRVector4_Data {
 public:
  static VRVector4_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  float x;
  float y;
  float z;
  float w;

 private:
  VRVector4_Data();
  ~VRVector4_Data() = delete;
};
static_assert(sizeof(VRVector4_Data) == 24,
              "Bad sizeof(VRVector4_Data)");
class VRRect_Data {
 public:
  static VRRect_Data* New(mojo::internal::Buffer* buf);

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
  VRRect_Data();
  ~VRRect_Data() = delete;
};
static_assert(sizeof(VRRect_Data) == 24,
              "Bad sizeof(VRRect_Data)");
class VRFieldOfView_Data {
 public:
  static VRFieldOfView_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  float upDegrees;
  float downDegrees;
  float leftDegrees;
  float rightDegrees;

 private:
  VRFieldOfView_Data();
  ~VRFieldOfView_Data() = delete;
};
static_assert(sizeof(VRFieldOfView_Data) == 24,
              "Bad sizeof(VRFieldOfView_Data)");
class VRSensorState_Data {
 public:
  static VRSensorState_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  double timestamp;
  uint32_t frameIndex;
  uint8_t pad1_[4];
  mojo::internal::StructPointer<internal::VRVector4_Data> orientation;
  mojo::internal::StructPointer<internal::VRVector3_Data> position;
  mojo::internal::StructPointer<internal::VRVector3_Data> angularVelocity;
  mojo::internal::StructPointer<internal::VRVector3_Data> linearVelocity;
  mojo::internal::StructPointer<internal::VRVector3_Data> angularAcceleration;
  mojo::internal::StructPointer<internal::VRVector3_Data> linearAcceleration;

 private:
  VRSensorState_Data();
  ~VRSensorState_Data() = delete;
};
static_assert(sizeof(VRSensorState_Data) == 72,
              "Bad sizeof(VRSensorState_Data)");
class VREyeParameters_Data {
 public:
  static VREyeParameters_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::VRFieldOfView_Data> minimumFieldOfView;
  mojo::internal::StructPointer<internal::VRFieldOfView_Data> maximumFieldOfView;
  mojo::internal::StructPointer<internal::VRFieldOfView_Data> recommendedFieldOfView;
  mojo::internal::StructPointer<internal::VRVector3_Data> eyeTranslation;
  mojo::internal::StructPointer<internal::VRRect_Data> renderRect;

 private:
  VREyeParameters_Data();
  ~VREyeParameters_Data() = delete;
};
static_assert(sizeof(VREyeParameters_Data) == 48,
              "Bad sizeof(VREyeParameters_Data)");
class VRHMDInfo_Data {
 public:
  static VRHMDInfo_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::VREyeParameters_Data> leftEye;
  mojo::internal::StructPointer<internal::VREyeParameters_Data> rightEye;

 private:
  VRHMDInfo_Data();
  ~VRHMDInfo_Data() = delete;
};
static_assert(sizeof(VRHMDInfo_Data) == 24,
              "Bad sizeof(VRHMDInfo_Data)");
class VRDeviceInfo_Data {
 public:
  static VRDeviceInfo_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint32_t index;
  uint8_t pad0_[4];
  mojo::internal::StringPointer deviceName;
  mojo::internal::StructPointer<internal::VRHMDInfo_Data> hmdInfo;

 private:
  VRDeviceInfo_Data();
  ~VRDeviceInfo_Data() = delete;
};
static_assert(sizeof(VRDeviceInfo_Data) == 32,
              "Bad sizeof(VRDeviceInfo_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace content

#endif  // CONTENT_COMMON_VR_SERVICE_MOJOM_INTERNAL_H_
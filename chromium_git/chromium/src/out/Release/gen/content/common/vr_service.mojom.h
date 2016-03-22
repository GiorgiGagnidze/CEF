// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_VR_SERVICE_MOJOM_H_
#define CONTENT_COMMON_VR_SERVICE_MOJOM_H_

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
#include "content/common/vr_service.mojom-internal.h"
namespace content {

class VRService;
using VRServicePtr = mojo::InterfacePtr<VRService>;
using VRServicePtrInfo = mojo::InterfacePtrInfo<VRService>;
using VRServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<VRService>;
using VRServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<VRService>;

class VRVector3;
class VRVector3_Reader;

using VRVector3Ptr = mojo::InlinedStructPtr<VRVector3>;


class VRVector4;
class VRVector4_Reader;

using VRVector4Ptr = mojo::InlinedStructPtr<VRVector4>;


class VRRect;
class VRRect_Reader;

using VRRectPtr = mojo::InlinedStructPtr<VRRect>;


class VRFieldOfView;
class VRFieldOfView_Reader;

using VRFieldOfViewPtr = mojo::InlinedStructPtr<VRFieldOfView>;


class VRSensorState;
class VRSensorState_Reader;

using VRSensorStatePtr = mojo::StructPtr<VRSensorState>;


class VREyeParameters;
class VREyeParameters_Reader;

using VREyeParametersPtr = mojo::StructPtr<VREyeParameters>;


class VRHMDInfo;
class VRHMDInfo_Reader;

using VRHMDInfoPtr = mojo::StructPtr<VRHMDInfo>;


class VRDeviceInfo;
class VRDeviceInfo_Reader;

using VRDeviceInfoPtr = mojo::StructPtr<VRDeviceInfo>;



class VRServiceProxy;
class VRServiceStub;

class VRServiceRequestValidator;
class VRServiceResponseValidator;

class VRService {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::content::VRService;

  using Proxy_ = VRServiceProxy;
  using Stub_ = VRServiceStub;

  using RequestValidator_ = VRServiceRequestValidator;
  using ResponseValidator_ = VRServiceResponseValidator;

  virtual ~VRService() {}

  using GetDevicesCallback = mojo::Callback<void(mojo::Array<VRDeviceInfoPtr>)>;
  virtual void GetDevices(const GetDevicesCallback& callback) = 0;

  using GetSensorStateCallback = mojo::Callback<void(VRSensorStatePtr)>;
  virtual void GetSensorState(uint32_t index, const GetSensorStateCallback& callback) = 0;

  virtual void ResetSensor(uint32_t index) = 0;
};

class VRServiceProxy
    : public VRService,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit VRServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetDevices(
      const GetDevicesCallback& callback
  ) override;
  void GetSensorState(
      uint32_t index, const GetSensorStateCallback& callback
  ) override;
  void ResetSensor(
      uint32_t index
  ) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class VRServiceStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  VRServiceStub();
  ~VRServiceStub() override;
  void set_sink(VRService* sink) { sink_ = sink; }
  VRService* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  VRService* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class VRServiceRequestValidator : public mojo::MessageFilter {
 public:
  explicit VRServiceRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class VRServiceResponseValidator : public mojo::MessageFilter {
 public:
  explicit VRServiceResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};



class VRVector3_Reader;

class VRVector3 {
 public:
  using Data_ = internal::VRVector3_Data;
  using Reader = VRVector3_Reader;

  static VRVector3Ptr New();

  template <typename U>
  static VRVector3Ptr From(const U& u) {
    return mojo::TypeConverter<VRVector3Ptr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VRVector3>::Convert(*this);
  }

  VRVector3();
  ~VRVector3();


  VRVector3Ptr Clone() const;
  bool Equals(const VRVector3& other) const;

  float x;
  float y;
  float z;
};


class VRVector4_Reader;

class VRVector4 {
 public:
  using Data_ = internal::VRVector4_Data;
  using Reader = VRVector4_Reader;

  static VRVector4Ptr New();

  template <typename U>
  static VRVector4Ptr From(const U& u) {
    return mojo::TypeConverter<VRVector4Ptr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VRVector4>::Convert(*this);
  }

  VRVector4();
  ~VRVector4();


  VRVector4Ptr Clone() const;
  bool Equals(const VRVector4& other) const;

  float x;
  float y;
  float z;
  float w;
};


class VRRect_Reader;

class VRRect {
 public:
  using Data_ = internal::VRRect_Data;
  using Reader = VRRect_Reader;

  static VRRectPtr New();

  template <typename U>
  static VRRectPtr From(const U& u) {
    return mojo::TypeConverter<VRRectPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VRRect>::Convert(*this);
  }

  VRRect();
  ~VRRect();


  VRRectPtr Clone() const;
  bool Equals(const VRRect& other) const;

  int32_t x;
  int32_t y;
  int32_t width;
  int32_t height;
};


class VRFieldOfView_Reader;

class VRFieldOfView {
 public:
  using Data_ = internal::VRFieldOfView_Data;
  using Reader = VRFieldOfView_Reader;

  static VRFieldOfViewPtr New();

  template <typename U>
  static VRFieldOfViewPtr From(const U& u) {
    return mojo::TypeConverter<VRFieldOfViewPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VRFieldOfView>::Convert(*this);
  }

  VRFieldOfView();
  ~VRFieldOfView();


  VRFieldOfViewPtr Clone() const;
  bool Equals(const VRFieldOfView& other) const;

  float upDegrees;
  float downDegrees;
  float leftDegrees;
  float rightDegrees;
};











class VRSensorState_Reader;

class VRSensorState {
 public:
  using Data_ = internal::VRSensorState_Data;
  using Reader = VRSensorState_Reader;

  static VRSensorStatePtr New();

  template <typename U>
  static VRSensorStatePtr From(const U& u) {
    return mojo::TypeConverter<VRSensorStatePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VRSensorState>::Convert(*this);
  }

  VRSensorState();
  ~VRSensorState();


  VRSensorStatePtr Clone() const;
  bool Equals(const VRSensorState& other) const;

  double timestamp;
  uint32_t frameIndex;
  VRVector4Ptr orientation;
  VRVector3Ptr position;
  VRVector3Ptr angularVelocity;
  VRVector3Ptr linearVelocity;
  VRVector3Ptr angularAcceleration;
  VRVector3Ptr linearAcceleration;
};


class VREyeParameters_Reader;

class VREyeParameters {
 public:
  using Data_ = internal::VREyeParameters_Data;
  using Reader = VREyeParameters_Reader;

  static VREyeParametersPtr New();

  template <typename U>
  static VREyeParametersPtr From(const U& u) {
    return mojo::TypeConverter<VREyeParametersPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VREyeParameters>::Convert(*this);
  }

  VREyeParameters();
  ~VREyeParameters();


  VREyeParametersPtr Clone() const;
  bool Equals(const VREyeParameters& other) const;

  VRFieldOfViewPtr minimumFieldOfView;
  VRFieldOfViewPtr maximumFieldOfView;
  VRFieldOfViewPtr recommendedFieldOfView;
  VRVector3Ptr eyeTranslation;
  VRRectPtr renderRect;
};


class VRHMDInfo_Reader;

class VRHMDInfo {
 public:
  using Data_ = internal::VRHMDInfo_Data;
  using Reader = VRHMDInfo_Reader;

  static VRHMDInfoPtr New();

  template <typename U>
  static VRHMDInfoPtr From(const U& u) {
    return mojo::TypeConverter<VRHMDInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VRHMDInfo>::Convert(*this);
  }

  VRHMDInfo();
  ~VRHMDInfo();


  VRHMDInfoPtr Clone() const;
  bool Equals(const VRHMDInfo& other) const;

  VREyeParametersPtr leftEye;
  VREyeParametersPtr rightEye;
};


class VRDeviceInfo_Reader;

class VRDeviceInfo {
 public:
  using Data_ = internal::VRDeviceInfo_Data;
  using Reader = VRDeviceInfo_Reader;

  static VRDeviceInfoPtr New();

  template <typename U>
  static VRDeviceInfoPtr From(const U& u) {
    return mojo::TypeConverter<VRDeviceInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VRDeviceInfo>::Convert(*this);
  }

  VRDeviceInfo();
  ~VRDeviceInfo();


  VRDeviceInfoPtr Clone() const;
  bool Equals(const VRDeviceInfo& other) const;

  uint32_t index;
  mojo::String deviceName;
  VRHMDInfoPtr hmdInfo;
};


size_t GetSerializedSize_(const VRVector3Ptr& input);
void Serialize_(VRVector3Ptr input, mojo::internal::Buffer* buffer,
                internal::VRVector3_Data** output);
bool Deserialize_(internal::VRVector3_Data* input,
                  VRVector3Ptr* output,
                  mojo::internal::SerializationContext* context);


class VRVector3_Reader {
 public:
  VRVector3_Reader(internal::VRVector3_Data* data,
                         mojo::internal::SerializationContext* context);
  float x() const { return data_->x; }
  float y() const { return data_->y; }
  float z() const { return data_->z; }

 private:
  internal::VRVector3_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct VRVector3_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::VRVector3_Data);
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::VRVector3_Data** output) {
    internal::VRVector3_Data* result =
        internal::VRVector3_Data::New(buffer);
    result->x = mojo::StructTraits<VRVector3, NativeType>
        ::x(input);
    result->y = mojo::StructTraits<VRVector3, NativeType>
        ::y(input);
    result->z = mojo::StructTraits<VRVector3, NativeType>
        ::z(input);
    *output = result;
  }

  static bool Deserialize(internal::VRVector3_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<VRVector3, NativeType>::Read(
        VRVector3_Reader(input, context), output);
  }
};  
size_t GetSerializedSize_(const VRVector4Ptr& input);
void Serialize_(VRVector4Ptr input, mojo::internal::Buffer* buffer,
                internal::VRVector4_Data** output);
bool Deserialize_(internal::VRVector4_Data* input,
                  VRVector4Ptr* output,
                  mojo::internal::SerializationContext* context);


class VRVector4_Reader {
 public:
  VRVector4_Reader(internal::VRVector4_Data* data,
                         mojo::internal::SerializationContext* context);
  float x() const { return data_->x; }
  float y() const { return data_->y; }
  float z() const { return data_->z; }
  float w() const { return data_->w; }

 private:
  internal::VRVector4_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct VRVector4_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::VRVector4_Data);
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::VRVector4_Data** output) {
    internal::VRVector4_Data* result =
        internal::VRVector4_Data::New(buffer);
    result->x = mojo::StructTraits<VRVector4, NativeType>
        ::x(input);
    result->y = mojo::StructTraits<VRVector4, NativeType>
        ::y(input);
    result->z = mojo::StructTraits<VRVector4, NativeType>
        ::z(input);
    result->w = mojo::StructTraits<VRVector4, NativeType>
        ::w(input);
    *output = result;
  }

  static bool Deserialize(internal::VRVector4_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<VRVector4, NativeType>::Read(
        VRVector4_Reader(input, context), output);
  }
};  
size_t GetSerializedSize_(const VRRectPtr& input);
void Serialize_(VRRectPtr input, mojo::internal::Buffer* buffer,
                internal::VRRect_Data** output);
bool Deserialize_(internal::VRRect_Data* input,
                  VRRectPtr* output,
                  mojo::internal::SerializationContext* context);


class VRRect_Reader {
 public:
  VRRect_Reader(internal::VRRect_Data* data,
                         mojo::internal::SerializationContext* context);
  int32_t x() const { return data_->x; }
  int32_t y() const { return data_->y; }
  int32_t width() const { return data_->width; }
  int32_t height() const { return data_->height; }

 private:
  internal::VRRect_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct VRRect_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::VRRect_Data);
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::VRRect_Data** output) {
    internal::VRRect_Data* result =
        internal::VRRect_Data::New(buffer);
    result->x = mojo::StructTraits<VRRect, NativeType>
        ::x(input);
    result->y = mojo::StructTraits<VRRect, NativeType>
        ::y(input);
    result->width = mojo::StructTraits<VRRect, NativeType>
        ::width(input);
    result->height = mojo::StructTraits<VRRect, NativeType>
        ::height(input);
    *output = result;
  }

  static bool Deserialize(internal::VRRect_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<VRRect, NativeType>::Read(
        VRRect_Reader(input, context), output);
  }
};  
size_t GetSerializedSize_(const VRFieldOfViewPtr& input);
void Serialize_(VRFieldOfViewPtr input, mojo::internal::Buffer* buffer,
                internal::VRFieldOfView_Data** output);
bool Deserialize_(internal::VRFieldOfView_Data* input,
                  VRFieldOfViewPtr* output,
                  mojo::internal::SerializationContext* context);


class VRFieldOfView_Reader {
 public:
  VRFieldOfView_Reader(internal::VRFieldOfView_Data* data,
                         mojo::internal::SerializationContext* context);
  float upDegrees() const { return data_->upDegrees; }
  float downDegrees() const { return data_->downDegrees; }
  float leftDegrees() const { return data_->leftDegrees; }
  float rightDegrees() const { return data_->rightDegrees; }

 private:
  internal::VRFieldOfView_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct VRFieldOfView_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::VRFieldOfView_Data);
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::VRFieldOfView_Data** output) {
    internal::VRFieldOfView_Data* result =
        internal::VRFieldOfView_Data::New(buffer);
    result->upDegrees = mojo::StructTraits<VRFieldOfView, NativeType>
        ::upDegrees(input);
    result->downDegrees = mojo::StructTraits<VRFieldOfView, NativeType>
        ::downDegrees(input);
    result->leftDegrees = mojo::StructTraits<VRFieldOfView, NativeType>
        ::leftDegrees(input);
    result->rightDegrees = mojo::StructTraits<VRFieldOfView, NativeType>
        ::rightDegrees(input);
    *output = result;
  }

  static bool Deserialize(internal::VRFieldOfView_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<VRFieldOfView, NativeType>::Read(
        VRFieldOfView_Reader(input, context), output);
  }
};  
size_t GetSerializedSize_(const VRSensorStatePtr& input);
void Serialize_(VRSensorStatePtr input, mojo::internal::Buffer* buffer,
                internal::VRSensorState_Data** output);
bool Deserialize_(internal::VRSensorState_Data* input,
                  VRSensorStatePtr* output,
                  mojo::internal::SerializationContext* context);


class VRSensorState_Reader {
 public:
  VRSensorState_Reader(internal::VRSensorState_Data* data,
                         mojo::internal::SerializationContext* context);
  double timestamp() const { return data_->timestamp; }
  uint32_t frameIndex() const { return data_->frameIndex; }
  VRVector4::Reader orientation() const;
  VRVector3::Reader position() const;
  VRVector3::Reader angularVelocity() const;
  VRVector3::Reader linearVelocity() const;
  VRVector3::Reader angularAcceleration() const;
  VRVector3::Reader linearAcceleration() const;

 private:
  internal::VRSensorState_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct VRSensorState_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::VRSensorState_Data);
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field orientation";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field position";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field angularVelocity";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field linearVelocity";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field angularAcceleration";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field linearAcceleration";
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::VRSensorState_Data** output) {
    internal::VRSensorState_Data* result =
        internal::VRSensorState_Data::New(buffer);
    result->timestamp = mojo::StructTraits<VRSensorState, NativeType>
        ::timestamp(input);
    result->frameIndex = mojo::StructTraits<VRSensorState, NativeType>
        ::frameIndex(input);
    result->orientation = mojo::StructTraits<VRSensorState, NativeType>
        ::orientation(input);
    result->position = mojo::StructTraits<VRSensorState, NativeType>
        ::position(input);
    result->angularVelocity = mojo::StructTraits<VRSensorState, NativeType>
        ::angularVelocity(input);
    result->linearVelocity = mojo::StructTraits<VRSensorState, NativeType>
        ::linearVelocity(input);
    result->angularAcceleration = mojo::StructTraits<VRSensorState, NativeType>
        ::angularAcceleration(input);
    result->linearAcceleration = mojo::StructTraits<VRSensorState, NativeType>
        ::linearAcceleration(input);
    *output = result;
  }

  static bool Deserialize(internal::VRSensorState_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<VRSensorState, NativeType>::Read(
        VRSensorState_Reader(input, context), output);
  }
};  
size_t GetSerializedSize_(const VREyeParametersPtr& input);
void Serialize_(VREyeParametersPtr input, mojo::internal::Buffer* buffer,
                internal::VREyeParameters_Data** output);
bool Deserialize_(internal::VREyeParameters_Data* input,
                  VREyeParametersPtr* output,
                  mojo::internal::SerializationContext* context);


class VREyeParameters_Reader {
 public:
  VREyeParameters_Reader(internal::VREyeParameters_Data* data,
                         mojo::internal::SerializationContext* context);
  VRFieldOfView::Reader minimumFieldOfView() const;
  VRFieldOfView::Reader maximumFieldOfView() const;
  VRFieldOfView::Reader recommendedFieldOfView() const;
  VRVector3::Reader eyeTranslation() const;
  VRRect::Reader renderRect() const;

 private:
  internal::VREyeParameters_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct VREyeParameters_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::VREyeParameters_Data);
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field minimumFieldOfView";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field maximumFieldOfView";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field recommendedFieldOfView";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field eyeTranslation";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field renderRect";
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::VREyeParameters_Data** output) {
    internal::VREyeParameters_Data* result =
        internal::VREyeParameters_Data::New(buffer);
    result->minimumFieldOfView = mojo::StructTraits<VREyeParameters, NativeType>
        ::minimumFieldOfView(input);
    result->maximumFieldOfView = mojo::StructTraits<VREyeParameters, NativeType>
        ::maximumFieldOfView(input);
    result->recommendedFieldOfView = mojo::StructTraits<VREyeParameters, NativeType>
        ::recommendedFieldOfView(input);
    result->eyeTranslation = mojo::StructTraits<VREyeParameters, NativeType>
        ::eyeTranslation(input);
    result->renderRect = mojo::StructTraits<VREyeParameters, NativeType>
        ::renderRect(input);
    *output = result;
  }

  static bool Deserialize(internal::VREyeParameters_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<VREyeParameters, NativeType>::Read(
        VREyeParameters_Reader(input, context), output);
  }
};  
size_t GetSerializedSize_(const VRHMDInfoPtr& input);
void Serialize_(VRHMDInfoPtr input, mojo::internal::Buffer* buffer,
                internal::VRHMDInfo_Data** output);
bool Deserialize_(internal::VRHMDInfo_Data* input,
                  VRHMDInfoPtr* output,
                  mojo::internal::SerializationContext* context);


class VRHMDInfo_Reader {
 public:
  VRHMDInfo_Reader(internal::VRHMDInfo_Data* data,
                         mojo::internal::SerializationContext* context);
  VREyeParameters::Reader leftEye() const;
  VREyeParameters::Reader rightEye() const;

 private:
  internal::VRHMDInfo_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct VRHMDInfo_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::VRHMDInfo_Data);
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field leftEye";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field rightEye";
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::VRHMDInfo_Data** output) {
    internal::VRHMDInfo_Data* result =
        internal::VRHMDInfo_Data::New(buffer);
    result->leftEye = mojo::StructTraits<VRHMDInfo, NativeType>
        ::leftEye(input);
    result->rightEye = mojo::StructTraits<VRHMDInfo, NativeType>
        ::rightEye(input);
    *output = result;
  }

  static bool Deserialize(internal::VRHMDInfo_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<VRHMDInfo, NativeType>::Read(
        VRHMDInfo_Reader(input, context), output);
  }
};  
size_t GetSerializedSize_(const VRDeviceInfoPtr& input);
void Serialize_(VRDeviceInfoPtr input, mojo::internal::Buffer* buffer,
                internal::VRDeviceInfo_Data** output);
bool Deserialize_(internal::VRDeviceInfo_Data* input,
                  VRDeviceInfoPtr* output,
                  mojo::internal::SerializationContext* context);


class VRDeviceInfo_Reader {
 public:
  VRDeviceInfo_Reader(internal::VRDeviceInfo_Data* data,
                         mojo::internal::SerializationContext* context);
  uint32_t index() const { return data_->index; }
  // TODO(rockot): Support reading other object kinds. (deviceName() omitted)
  VRHMDInfo::Reader hmdInfo() const;

 private:
  internal::VRDeviceInfo_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct VRDeviceInfo_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::VRDeviceInfo_Data);
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field deviceName";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field hmdInfo";
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::VRDeviceInfo_Data** output) {
    internal::VRDeviceInfo_Data* result =
        internal::VRDeviceInfo_Data::New(buffer);
    result->index = mojo::StructTraits<VRDeviceInfo, NativeType>
        ::index(input);
    result->deviceName = mojo::StructTraits<VRDeviceInfo, NativeType>
        ::deviceName(input);
    result->hmdInfo = mojo::StructTraits<VRDeviceInfo, NativeType>
        ::hmdInfo(input);
    *output = result;
  }

  static bool Deserialize(internal::VRDeviceInfo_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<VRDeviceInfo, NativeType>::Read(
        VRDeviceInfo_Reader(input, context), output);
  }
};  
}  // namespace content

#endif  // CONTENT_COMMON_VR_SERVICE_MOJOM_H_
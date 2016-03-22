// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_PRESENTATION_PRESENTATION_SERVICE_MOJOM_INTERNAL_H_
#define CONTENT_COMMON_PRESENTATION_PRESENTATION_SERVICE_MOJOM_INTERNAL_H_

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
namespace presentation {

class PresentationSessionInfo;
class PresentationError;
class SessionMessage;


namespace internal {

class PresentationSessionInfo_Data;
class PresentationError_Data;
class SessionMessage_Data;



  
struct PresentationConnectionState_Data {
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
  
struct PresentationErrorType_Data {
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
  
struct PresentationMessageType_Data {
 public:
  // Used to identify Mojom Enum Data Classes.
  typedef void MojomEnumDataType;

  static bool const kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
        return true;
    }
    return false;
  }

  int32_t value;
};

#pragma pack(push, 1)


class PresentationSessionInfo_Data {
 public:
  static PresentationSessionInfo_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer url;
  mojo::internal::StringPointer id;

 private:
  PresentationSessionInfo_Data();
  ~PresentationSessionInfo_Data() = delete;
};
static_assert(sizeof(PresentationSessionInfo_Data) == 24,
              "Bad sizeof(PresentationSessionInfo_Data)");
class PresentationError_Data {
 public:
  static PresentationError_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  internal::PresentationErrorType_Data error_type;
  uint8_t pad0_[4];
  mojo::internal::StringPointer message;

 private:
  PresentationError_Data();
  ~PresentationError_Data() = delete;
};
static_assert(sizeof(PresentationError_Data) == 24,
              "Bad sizeof(PresentationError_Data)");
class SessionMessage_Data {
 public:
  static SessionMessage_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  internal::PresentationMessageType_Data type;
  uint8_t pad0_[4];
  mojo::internal::StringPointer message;
  mojo::internal::ArrayPointer<uint8_t> data;

 private:
  SessionMessage_Data();
  ~SessionMessage_Data() = delete;
};
static_assert(sizeof(SessionMessage_Data) == 32,
              "Bad sizeof(SessionMessage_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace presentation

#endif  // CONTENT_COMMON_PRESENTATION_PRESENTATION_SERVICE_MOJOM_INTERNAL_H_
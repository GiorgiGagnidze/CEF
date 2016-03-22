// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_MEDIA_ROUTER_MEDIA_ROUTER_MOJOM_INTERNAL_H_
#define CHROME_BROWSER_MEDIA_ROUTER_MEDIA_ROUTER_MOJOM_INTERNAL_H_

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
namespace media_router {
namespace interfaces {

class MediaSink;
class MediaRoute;
class Issue;
class RouteMessage;


namespace internal {

class MediaSink_Data;
class MediaRoute_Data;
class Issue_Data;
class RouteMessage_Data;




#pragma pack(push, 1)


class MediaSink_Data {
 public:
  static MediaSink_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);


  struct IconType_Data {
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
          return true;
      }
      return false;
    }
  
    int32_t value;
  };

  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer sink_id;
  mojo::internal::StringPointer name;
  mojo::internal::StringPointer description;
  mojo::internal::StringPointer domain;
  internal::MediaSink_Data::IconType_Data icon_type;
  uint8_t padfinal_[4];

 private:
  MediaSink_Data();
  ~MediaSink_Data() = delete;
};
static_assert(sizeof(MediaSink_Data) == 48,
              "Bad sizeof(MediaSink_Data)");
class MediaRoute_Data {
 public:
  static MediaRoute_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer media_route_id;
  mojo::internal::StringPointer media_source;
  mojo::internal::StringPointer media_sink_id;
  mojo::internal::StringPointer description;
  uint8_t is_local : 1;
  uint8_t for_display : 1;
  uint8_t pad5_[7];
  mojo::internal::StringPointer custom_controller_path;

 private:
  MediaRoute_Data();
  ~MediaRoute_Data() = delete;
};
static_assert(sizeof(MediaRoute_Data) == 56,
              "Bad sizeof(MediaRoute_Data)");
class Issue_Data {
 public:
  static Issue_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);


  struct Severity_Data {
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
  struct ActionType_Data {
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

  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer route_id;
  internal::Issue_Data::Severity_Data severity;
  uint8_t is_blocking : 1;
  uint8_t pad2_[3];
  mojo::internal::StringPointer title;
  mojo::internal::StringPointer message;
  internal::Issue_Data::ActionType_Data default_action;
  uint8_t pad5_[4];
  mojo::internal::ArrayPointer<internal::Issue_Data::ActionType_Data> secondary_actions;
  mojo::internal::StringPointer help_url;

 private:
  Issue_Data();
  ~Issue_Data() = delete;
};
static_assert(sizeof(Issue_Data) == 64,
              "Bad sizeof(Issue_Data)");
class RouteMessage_Data {
 public:
  static RouteMessage_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);


  struct Type_Data {
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

  mojo::internal::StructHeader header_;
  internal::RouteMessage_Data::Type_Data type;
  uint8_t pad0_[4];
  mojo::internal::StringPointer message;
  mojo::internal::ArrayPointer<uint8_t> data;

 private:
  RouteMessage_Data();
  ~RouteMessage_Data() = delete;
};
static_assert(sizeof(RouteMessage_Data) == 32,
              "Bad sizeof(RouteMessage_Data)");
class MediaRouter_Data {
 public:
  
  struct SinkAvailability_Data {
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
};

#pragma pack(pop)

}  // namespace internal
}  // namespace interfaces
}  // namespace media_router

#endif  // CHROME_BROWSER_MEDIA_ROUTER_MEDIA_ROUTER_MOJOM_INTERNAL_H_
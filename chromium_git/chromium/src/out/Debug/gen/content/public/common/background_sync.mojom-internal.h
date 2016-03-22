// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_PUBLIC_COMMON_BACKGROUND_SYNC_MOJOM_INTERNAL_H_
#define CONTENT_PUBLIC_COMMON_BACKGROUND_SYNC_MOJOM_INTERNAL_H_

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

class SyncRegistration;


namespace internal {

class SyncRegistration_Data;



  
struct BackgroundSyncNetworkState_Data {
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


class SyncRegistration_Data {
 public:
  static SyncRegistration_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  int64_t handle_id;
  mojo::internal::StringPointer tag;
  internal::BackgroundSyncNetworkState_Data network_state;
  uint8_t padfinal_[4];

 private:
  SyncRegistration_Data();
  ~SyncRegistration_Data() = delete;
};
static_assert(sizeof(SyncRegistration_Data) == 32,
              "Bad sizeof(SyncRegistration_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace content

#endif  // CONTENT_PUBLIC_COMMON_BACKGROUND_SYNC_MOJOM_INTERNAL_H_
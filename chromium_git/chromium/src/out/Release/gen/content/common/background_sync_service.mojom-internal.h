// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_BACKGROUND_SYNC_SERVICE_MOJOM_INTERNAL_H_
#define CONTENT_COMMON_BACKGROUND_SYNC_SERVICE_MOJOM_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/native_serialization.h"
#include "mojo/public/cpp/bindings/lib/union_accessor.h"
#include "mojo/public/cpp/bindings/lib/value_traits.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "content/public/common/background_sync.mojom-internal.h"
#include "content/public/common/service_worker_event_status.mojom-internal.h"

namespace mojo {
namespace internal {
class BoundsChecker;
}
}
namespace content {



namespace internal {




  
struct BackgroundSyncError_Data {
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
  
struct BackgroundSyncState_Data {
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
        return true;
    }
    return false;
  }

  int32_t value;
};
  
struct BackgroundSyncEventLastChance_Data {
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



#pragma pack(pop)

}  // namespace internal
}  // namespace content

#endif  // CONTENT_COMMON_BACKGROUND_SYNC_SERVICE_MOJOM_INTERNAL_H_
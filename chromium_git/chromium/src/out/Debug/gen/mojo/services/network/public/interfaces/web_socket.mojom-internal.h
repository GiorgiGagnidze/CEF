// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_SERVICES_NETWORK_PUBLIC_INTERFACES_WEB_SOCKET_MOJOM_INTERNAL_H_
#define MOJO_SERVICES_NETWORK_PUBLIC_INTERFACES_WEB_SOCKET_MOJOM_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/native_serialization.h"
#include "mojo/public/cpp/bindings/lib/union_accessor.h"
#include "mojo/public/cpp/bindings/lib/value_traits.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/services/network/public/interfaces/network_error.mojom-internal.h"

namespace mojo {
namespace internal {
class BoundsChecker;
}
}
namespace mojo {



namespace internal {





#pragma pack(push, 1)


class WebSocket_Data {
 public:
  
  struct MessageType_Data {
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
};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojo

#endif  // MOJO_SERVICES_NETWORK_PUBLIC_INTERFACES_WEB_SOCKET_MOJOM_INTERNAL_H_
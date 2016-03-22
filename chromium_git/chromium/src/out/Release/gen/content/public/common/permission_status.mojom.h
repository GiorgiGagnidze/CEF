// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_PUBLIC_COMMON_PERMISSION_STATUS_MOJOM_H_
#define CONTENT_PUBLIC_COMMON_PERMISSION_STATUS_MOJOM_H_

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
#include "content/public/common/permission_status.mojom-internal.h"
namespace content {

  
enum class PermissionStatus : int32_t {
  GRANTED,
  DENIED,
  ASK,
  LAST = PermissionStatus::ASK,
};
  
inline std::ostream& operator<<(std::ostream& os, PermissionStatus value) {
  switch(value) {
    case PermissionStatus::GRANTED:
      return os << "PermissionStatus::GRANTED";
    case PermissionStatus::DENIED:
      return os << "PermissionStatus::DENIED";
    case PermissionStatus::ASK:
      return os << "PermissionStatus::{ASK, LAST}";
    default:
      return os << "Unknown PermissionStatus value: " << static_cast<int32_t>(value);
  }
}
  
inline bool IsKnownEnumValue(PermissionStatus value) {
  return ::content::internal::PermissionStatus_Data::IsKnownValue(
      static_cast<int32_t>(value));
}



}  // namespace content

#endif  // CONTENT_PUBLIC_COMMON_PERMISSION_STATUS_MOJOM_H_
// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_SERVICE_PORT_SERVICE_MOJOM_INTERNAL_H_
#define CONTENT_COMMON_SERVICE_PORT_SERVICE_MOJOM_INTERNAL_H_

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

class MojoTransferredMessagePort;


namespace internal {

class MojoTransferredMessagePort_Data;



  
struct ServicePortConnectResult_Data {
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


class MojoTransferredMessagePort_Data {
 public:
  static MojoTransferredMessagePort_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  int32_t id;
  uint8_t send_messages_as_values : 1;
  uint8_t padfinal_[3];

 private:
  MojoTransferredMessagePort_Data();
  ~MojoTransferredMessagePort_Data() = delete;
};
static_assert(sizeof(MojoTransferredMessagePort_Data) == 16,
              "Bad sizeof(MojoTransferredMessagePort_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace content

#endif  // CONTENT_COMMON_SERVICE_PORT_SERVICE_MOJOM_INTERNAL_H_
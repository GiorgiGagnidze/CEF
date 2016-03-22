// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_SERVICES_NETWORK_PUBLIC_INTERFACES_NETWORK_ERROR_MOJOM_INTERNAL_H_
#define MOJO_SERVICES_NETWORK_PUBLIC_INTERFACES_NETWORK_ERROR_MOJOM_INTERNAL_H_

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
namespace mojo {

class NetworkError;


namespace internal {

class NetworkError_Data;




#pragma pack(push, 1)


class NetworkError_Data {
 public:
  static NetworkError_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  int32_t code;
  uint8_t pad0_[4];
  mojo::internal::StringPointer description;

 private:
  NetworkError_Data();
  ~NetworkError_Data() = delete;
};
static_assert(sizeof(NetworkError_Data) == 24,
              "Bad sizeof(NetworkError_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojo

#endif  // MOJO_SERVICES_NETWORK_PUBLIC_INTERFACES_NETWORK_ERROR_MOJOM_INTERNAL_H_
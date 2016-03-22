// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_SHELL_PUBLIC_INTERFACES_SHELL_MOJOM_INTERNAL_H_
#define MOJO_SHELL_PUBLIC_INTERFACES_SHELL_MOJOM_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/native_serialization.h"
#include "mojo/public/cpp/bindings/lib/union_accessor.h"
#include "mojo/public/cpp/bindings/lib/value_traits.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/shell/public/interfaces/service_provider.mojom-internal.h"
#include "mojo/services/network/public/interfaces/url_loader.mojom-internal.h"

namespace mojo {
namespace internal {
class BoundsChecker;
}
}
namespace mojo {

class CapabilityFilter;


namespace internal {

class CapabilityFilter_Data;




#pragma pack(push, 1)


class CapabilityFilter_Data {
 public:
  static CapabilityFilter_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<mojo::internal::Map_Data<mojo::internal::String_Data*, mojo::internal::Array_Data<mojo::internal::String_Data*>*>> filter;

 private:
  CapabilityFilter_Data();
  ~CapabilityFilter_Data() = delete;
};
static_assert(sizeof(CapabilityFilter_Data) == 16,
              "Bad sizeof(CapabilityFilter_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojo

#endif  // MOJO_SHELL_PUBLIC_INTERFACES_SHELL_MOJOM_INTERNAL_H_
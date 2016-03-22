// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef EXTENSIONS_COMMON_MOJO_STASH_MOJOM_INTERNAL_H_
#define EXTENSIONS_COMMON_MOJO_STASH_MOJOM_INTERNAL_H_

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
namespace extensions {

class StashedObject;


namespace internal {

class StashedObject_Data;




#pragma pack(push, 1)


class StashedObject_Data {
 public:
  static StashedObject_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer id;
  mojo::internal::ArrayPointer<uint8_t> data;
  mojo::internal::ArrayPointer<mojo::Handle> stashed_handles;
  uint8_t monitor_handles : 1;
  uint8_t padfinal_[7];

 private:
  StashedObject_Data();
  ~StashedObject_Data() = delete;
};
static_assert(sizeof(StashedObject_Data) == 40,
              "Bad sizeof(StashedObject_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace extensions

#endif  // EXTENSIONS_COMMON_MOJO_STASH_MOJOM_INTERNAL_H_
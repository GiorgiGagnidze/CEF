// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_SHELL_PUBLIC_INTERFACES_APPLICATION_MANAGER_MOJOM_INTERNAL_H_
#define MOJO_SHELL_PUBLIC_INTERFACES_APPLICATION_MANAGER_MOJOM_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/native_serialization.h"
#include "mojo/public/cpp/bindings/lib/union_accessor.h"
#include "mojo/public/cpp/bindings/lib/value_traits.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/shell/public/interfaces/shell.mojom-internal.h"

namespace mojo {
namespace internal {
class BoundsChecker;
}
}
namespace mojo {
namespace shell {
namespace mojom {

class ApplicationInfo;


namespace internal {

class ApplicationInfo_Data;




#pragma pack(push, 1)


class ApplicationInfo_Data {
 public:
  static ApplicationInfo_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint32_t id;
  uint32_t pid;
  mojo::internal::StringPointer url;
  mojo::internal::StringPointer qualifier;
  mojo::internal::StringPointer name;

 private:
  ApplicationInfo_Data();
  ~ApplicationInfo_Data() = delete;
};
static_assert(sizeof(ApplicationInfo_Data) == 40,
              "Bad sizeof(ApplicationInfo_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace shell
}  // namespace mojo

#endif  // MOJO_SHELL_PUBLIC_INTERFACES_APPLICATION_MANAGER_MOJOM_INTERNAL_H_
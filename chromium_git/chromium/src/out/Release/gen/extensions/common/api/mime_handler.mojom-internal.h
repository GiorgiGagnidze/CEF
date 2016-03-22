// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef EXTENSIONS_COMMON_API_MIME_HANDLER_MOJOM_INTERNAL_H_
#define EXTENSIONS_COMMON_API_MIME_HANDLER_MOJOM_INTERNAL_H_

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
namespace mime_handler {

class StreamInfo;


namespace internal {

class StreamInfo_Data;




#pragma pack(push, 1)


class StreamInfo_Data {
 public:
  static StreamInfo_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer mime_type;
  mojo::internal::StringPointer original_url;
  mojo::internal::StringPointer stream_url;
  int32_t tab_id;
  uint8_t embedded : 1;
  uint8_t pad4_[3];
  mojo::internal::StructPointer<mojo::internal::Map_Data<mojo::internal::String_Data*, mojo::internal::String_Data*>> response_headers;

 private:
  StreamInfo_Data();
  ~StreamInfo_Data() = delete;
};
static_assert(sizeof(StreamInfo_Data) == 48,
              "Bad sizeof(StreamInfo_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mime_handler
}  // namespace extensions

#endif  // EXTENSIONS_COMMON_API_MIME_HANDLER_MOJOM_INTERNAL_H_
// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_IMAGE_DOWNLOADER_IMAGE_DOWNLOADER_MOJOM_INTERNAL_H_
#define CONTENT_COMMON_IMAGE_DOWNLOADER_IMAGE_DOWNLOADER_MOJOM_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/native_serialization.h"
#include "mojo/public/cpp/bindings/lib/union_accessor.h"
#include "mojo/public/cpp/bindings/lib/value_traits.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "skia/public/interfaces/bitmap.mojom-internal.h"
#include "ui/mojo/geometry/geometry.mojom-internal.h"

namespace mojo {
namespace internal {
class BoundsChecker;
}
}
namespace image_downloader {

class DownloadRequest;
class DownloadResult;


namespace internal {

class DownloadRequest_Data;
class DownloadResult_Data;




#pragma pack(push, 1)


class DownloadRequest_Data {
 public:
  static DownloadRequest_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer url;
  uint8_t is_favicon : 1;
  uint8_t bypass_cache : 1;
  uint8_t pad2_[3];
  uint32_t max_bitmap_size;

 private:
  DownloadRequest_Data();
  ~DownloadRequest_Data() = delete;
};
static_assert(sizeof(DownloadRequest_Data) == 24,
              "Bad sizeof(DownloadRequest_Data)");
class DownloadResult_Data {
 public:
  static DownloadResult_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  int32_t http_status_code;
  uint8_t pad0_[4];
  mojo::internal::ArrayPointer<skia::internal::Bitmap_Data*> images;
  mojo::internal::ArrayPointer<mojo::internal::Size_Data*> original_image_sizes;

 private:
  DownloadResult_Data();
  ~DownloadResult_Data() = delete;
};
static_assert(sizeof(DownloadResult_Data) == 32,
              "Bad sizeof(DownloadResult_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace image_downloader

#endif  // CONTENT_COMMON_IMAGE_DOWNLOADER_IMAGE_DOWNLOADER_MOJOM_INTERNAL_H_
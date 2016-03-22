// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_IMAGE_DOWNLOADER_IMAGE_DOWNLOADER_MOJOM_H_
#define CONTENT_COMMON_IMAGE_DOWNLOADER_IMAGE_DOWNLOADER_MOJOM_H_

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
#include "content/common/image_downloader/image_downloader.mojom-internal.h"
#include "skia/public/interfaces/bitmap.mojom.h"
#include "ui/mojo/geometry/geometry.mojom.h"
namespace image_downloader {

class ImageDownloader;
using ImageDownloaderPtr = mojo::InterfacePtr<ImageDownloader>;
using ImageDownloaderPtrInfo = mojo::InterfacePtrInfo<ImageDownloader>;
using ImageDownloaderAssociatedPtr =
    mojo::AssociatedInterfacePtr<ImageDownloader>;
using ImageDownloaderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ImageDownloader>;

class DownloadRequest;
class DownloadRequest_Reader;

using DownloadRequestPtr = mojo::InlinedStructPtr<DownloadRequest>;


class DownloadResult;
class DownloadResult_Reader;

using DownloadResultPtr = mojo::StructPtr<DownloadResult>;



class ImageDownloaderProxy;
class ImageDownloaderStub;

class ImageDownloaderRequestValidator;
class ImageDownloaderResponseValidator;

class ImageDownloader {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::image_downloader::ImageDownloader;

  using Proxy_ = ImageDownloaderProxy;
  using Stub_ = ImageDownloaderStub;

  using RequestValidator_ = ImageDownloaderRequestValidator;
  using ResponseValidator_ = ImageDownloaderResponseValidator;

  virtual ~ImageDownloader() {}

  using DownloadImageCallback = mojo::Callback<void(DownloadResultPtr)>;
  virtual void DownloadImage(DownloadRequestPtr request, const DownloadImageCallback& callback) = 0;
};

class ImageDownloaderProxy
    : public ImageDownloader,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit ImageDownloaderProxy(mojo::MessageReceiverWithResponder* receiver);
  void DownloadImage(
      DownloadRequestPtr request, const DownloadImageCallback& callback
  ) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class ImageDownloaderStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  ImageDownloaderStub();
  ~ImageDownloaderStub() override;
  void set_sink(ImageDownloader* sink) { sink_ = sink; }
  ImageDownloader* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  ImageDownloader* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class ImageDownloaderRequestValidator : public mojo::MessageFilter {
 public:
  explicit ImageDownloaderRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class ImageDownloaderResponseValidator : public mojo::MessageFilter {
 public:
  explicit ImageDownloaderResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};



class DownloadRequest_Reader;

class DownloadRequest {
 public:
  using Data_ = internal::DownloadRequest_Data;
  using Reader = DownloadRequest_Reader;

  static DownloadRequestPtr New();

  template <typename U>
  static DownloadRequestPtr From(const U& u) {
    return mojo::TypeConverter<DownloadRequestPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DownloadRequest>::Convert(*this);
  }

  DownloadRequest();
  ~DownloadRequest();


  DownloadRequestPtr Clone() const;
  bool Equals(const DownloadRequest& other) const;

  mojo::String url;
  bool is_favicon;
  uint32_t max_bitmap_size;
  bool bypass_cache;
};





class DownloadResult_Reader;

class DownloadResult {
 public:
  using Data_ = internal::DownloadResult_Data;
  using Reader = DownloadResult_Reader;

  static DownloadResultPtr New();

  template <typename U>
  static DownloadResultPtr From(const U& u) {
    return mojo::TypeConverter<DownloadResultPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DownloadResult>::Convert(*this);
  }

  DownloadResult();
  ~DownloadResult();


  DownloadResultPtr Clone() const;
  bool Equals(const DownloadResult& other) const;

  int32_t http_status_code;
  mojo::Array<skia::BitmapPtr> images;
  mojo::Array<mojo::SizePtr> original_image_sizes;
};


size_t GetSerializedSize_(const DownloadRequestPtr& input);
void Serialize_(DownloadRequestPtr input, mojo::internal::Buffer* buffer,
                internal::DownloadRequest_Data** output);
bool Deserialize_(internal::DownloadRequest_Data* input,
                  DownloadRequestPtr* output,
                  mojo::internal::SerializationContext* context);


class DownloadRequest_Reader {
 public:
  DownloadRequest_Reader(internal::DownloadRequest_Data* data,
                         mojo::internal::SerializationContext* context);
  // TODO(rockot): Support reading other object kinds. (url() omitted)
  bool is_favicon() const { return data_->is_favicon; }
  uint32_t max_bitmap_size() const { return data_->max_bitmap_size; }
  bool bypass_cache() const { return data_->bypass_cache; }

 private:
  internal::DownloadRequest_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct DownloadRequest_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::DownloadRequest_Data);
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field url";
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::DownloadRequest_Data** output) {
    internal::DownloadRequest_Data* result =
        internal::DownloadRequest_Data::New(buffer);
    result->url = mojo::StructTraits<DownloadRequest, NativeType>
        ::url(input);
    result->is_favicon = mojo::StructTraits<DownloadRequest, NativeType>
        ::is_favicon(input);
    result->max_bitmap_size = mojo::StructTraits<DownloadRequest, NativeType>
        ::max_bitmap_size(input);
    result->bypass_cache = mojo::StructTraits<DownloadRequest, NativeType>
        ::bypass_cache(input);
    *output = result;
  }

  static bool Deserialize(internal::DownloadRequest_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<DownloadRequest, NativeType>::Read(
        DownloadRequest_Reader(input, context), output);
  }
};  
size_t GetSerializedSize_(const DownloadResultPtr& input);
void Serialize_(DownloadResultPtr input, mojo::internal::Buffer* buffer,
                internal::DownloadResult_Data** output);
bool Deserialize_(internal::DownloadResult_Data* input,
                  DownloadResultPtr* output,
                  mojo::internal::SerializationContext* context);


class DownloadResult_Reader {
 public:
  DownloadResult_Reader(internal::DownloadResult_Data* data,
                         mojo::internal::SerializationContext* context);
  int32_t http_status_code() const { return data_->http_status_code; }
  // TODO(rockot): Support reading other object kinds. (images() omitted)
  // TODO(rockot): Support reading other object kinds. (original_image_sizes() omitted)

 private:
  internal::DownloadResult_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct DownloadResult_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::DownloadResult_Data);
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field images";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field original_image_sizes";
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::DownloadResult_Data** output) {
    internal::DownloadResult_Data* result =
        internal::DownloadResult_Data::New(buffer);
    result->http_status_code = mojo::StructTraits<DownloadResult, NativeType>
        ::http_status_code(input);
    result->images = mojo::StructTraits<DownloadResult, NativeType>
        ::images(input);
    result->original_image_sizes = mojo::StructTraits<DownloadResult, NativeType>
        ::original_image_sizes(input);
    *output = result;
  }

  static bool Deserialize(internal::DownloadResult_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<DownloadResult, NativeType>::Read(
        DownloadResult_Reader(input, context), output);
  }
};  
}  // namespace image_downloader

#endif  // CONTENT_COMMON_IMAGE_DOWNLOADER_IMAGE_DOWNLOADER_MOJOM_H_
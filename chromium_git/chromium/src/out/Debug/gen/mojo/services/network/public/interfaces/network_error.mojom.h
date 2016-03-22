// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_SERVICES_NETWORK_PUBLIC_INTERFACES_NETWORK_ERROR_MOJOM_H_
#define MOJO_SERVICES_NETWORK_PUBLIC_INTERFACES_NETWORK_ERROR_MOJOM_H_

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
#include "mojo/services/network/public/interfaces/network_error.mojom-internal.h"
namespace mojo {

class NetworkError;
class NetworkError_Reader;

using NetworkErrorPtr = mojo::InlinedStructPtr<NetworkError>;





class NetworkError_Reader;

class NetworkError {
 public:
  using Data_ = internal::NetworkError_Data;
  using Reader = NetworkError_Reader;

  static NetworkErrorPtr New();

  template <typename U>
  static NetworkErrorPtr From(const U& u) {
    return mojo::TypeConverter<NetworkErrorPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, NetworkError>::Convert(*this);
  }

  NetworkError();
  ~NetworkError();


  NetworkErrorPtr Clone() const;
  bool Equals(const NetworkError& other) const;

  int32_t code;
  mojo::String description;
};




size_t GetSerializedSize_(const NetworkErrorPtr& input);
void Serialize_(NetworkErrorPtr input, mojo::internal::Buffer* buffer,
                internal::NetworkError_Data** output);
bool Deserialize_(internal::NetworkError_Data* input,
                  NetworkErrorPtr* output,
                  mojo::internal::SerializationContext* context);


class NetworkError_Reader {
 public:
  NetworkError_Reader(internal::NetworkError_Data* data,
                         mojo::internal::SerializationContext* context);
  int32_t code() const { return data_->code; }
  // TODO(rockot): Support reading other object kinds. (description() omitted)

 private:
  internal::NetworkError_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct NetworkError_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::NetworkError_Data);
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field description";
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::NetworkError_Data** output) {
    internal::NetworkError_Data* result =
        internal::NetworkError_Data::New(buffer);
    result->code = mojo::StructTraits<NetworkError, NativeType>
        ::code(input);
    result->description = mojo::StructTraits<NetworkError, NativeType>
        ::description(input);
    *output = result;
  }

  static bool Deserialize(internal::NetworkError_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<NetworkError, NativeType>::Read(
        NetworkError_Reader(input, context), output);
  }
};  
}  // namespace mojo

#endif  // MOJO_SERVICES_NETWORK_PUBLIC_INTERFACES_NETWORK_ERROR_MOJOM_H_
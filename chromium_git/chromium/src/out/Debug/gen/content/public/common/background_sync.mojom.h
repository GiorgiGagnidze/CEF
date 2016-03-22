// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_PUBLIC_COMMON_BACKGROUND_SYNC_MOJOM_H_
#define CONTENT_PUBLIC_COMMON_BACKGROUND_SYNC_MOJOM_H_

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
#include "content/public/common/background_sync.mojom-internal.h"
namespace content {

  
enum class BackgroundSyncNetworkState : int32_t {
  ANY,
  AVOID_CELLULAR,
  ONLINE,
  MAX = BackgroundSyncNetworkState::ONLINE,
};
  
inline std::ostream& operator<<(std::ostream& os, BackgroundSyncNetworkState value) {
  switch(value) {
    case BackgroundSyncNetworkState::ANY:
      return os << "BackgroundSyncNetworkState::ANY";
    case BackgroundSyncNetworkState::AVOID_CELLULAR:
      return os << "BackgroundSyncNetworkState::AVOID_CELLULAR";
    case BackgroundSyncNetworkState::ONLINE:
      return os << "BackgroundSyncNetworkState::{ONLINE, MAX}";
    default:
      return os << "Unknown BackgroundSyncNetworkState value: " << static_cast<int32_t>(value);
  }
}
  
inline bool IsKnownEnumValue(BackgroundSyncNetworkState value) {
  return ::content::internal::BackgroundSyncNetworkState_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class SyncRegistration;
class SyncRegistration_Reader;

using SyncRegistrationPtr = mojo::InlinedStructPtr<SyncRegistration>;





class SyncRegistration_Reader;

class SyncRegistration {
 public:
  using Data_ = internal::SyncRegistration_Data;
  using Reader = SyncRegistration_Reader;

  static SyncRegistrationPtr New();

  template <typename U>
  static SyncRegistrationPtr From(const U& u) {
    return mojo::TypeConverter<SyncRegistrationPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SyncRegistration>::Convert(*this);
  }

  SyncRegistration();
  ~SyncRegistration();


  SyncRegistrationPtr Clone() const;
  bool Equals(const SyncRegistration& other) const;

  int64_t handle_id;
  mojo::String tag;
  BackgroundSyncNetworkState network_state;
};




size_t GetSerializedSize_(const SyncRegistrationPtr& input);
void Serialize_(SyncRegistrationPtr input, mojo::internal::Buffer* buffer,
                internal::SyncRegistration_Data** output);
bool Deserialize_(internal::SyncRegistration_Data* input,
                  SyncRegistrationPtr* output,
                  mojo::internal::SerializationContext* context);


class SyncRegistration_Reader {
 public:
  SyncRegistration_Reader(internal::SyncRegistration_Data* data,
                         mojo::internal::SerializationContext* context);
  int64_t handle_id() const { return data_->handle_id; }
  // TODO(rockot): Support reading other object kinds. (tag() omitted)
  BackgroundSyncNetworkState network_state() const {
    return static_cast<BackgroundSyncNetworkState>(data_->network_state.value);
  }

 private:
  internal::SyncRegistration_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct SyncRegistration_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::SyncRegistration_Data);
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field tag";
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::SyncRegistration_Data** output) {
    internal::SyncRegistration_Data* result =
        internal::SyncRegistration_Data::New(buffer);
    result->handle_id = mojo::StructTraits<SyncRegistration, NativeType>
        ::handle_id(input);
    result->tag = mojo::StructTraits<SyncRegistration, NativeType>
        ::tag(input);
    result->network_state = mojo::StructTraits<SyncRegistration, NativeType>
        ::network_state(input);
    *output = result;
  }

  static bool Deserialize(internal::SyncRegistration_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<SyncRegistration, NativeType>::Read(
        SyncRegistration_Reader(input, context), output);
  }
};  
}  // namespace content

#endif  // CONTENT_PUBLIC_COMMON_BACKGROUND_SYNC_MOJOM_H_
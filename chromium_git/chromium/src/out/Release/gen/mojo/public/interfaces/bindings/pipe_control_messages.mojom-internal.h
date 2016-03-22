// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_PIPE_CONTROL_MESSAGES_MOJOM_INTERNAL_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_PIPE_CONTROL_MESSAGES_MOJOM_INTERNAL_H_

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
namespace pipe_control {

class RunOrClosePipeMessageParams;
class PeerAssociatedEndpointClosedEvent;
class AssociatedEndpointClosedBeforeSentEvent;

class RunOrClosePipeInput;

namespace internal {

class RunOrClosePipeMessageParams_Data;
class PeerAssociatedEndpointClosedEvent_Data;
class AssociatedEndpointClosedBeforeSentEvent_Data;


class RunOrClosePipeInput_Data;


#pragma pack(push, 1)



class RunOrClosePipeInput_Data {
 public:
  // Used to identify Mojom Union Data Classes.
  typedef void MojomUnionDataType;
  static RunOrClosePipeInput_Data* New(mojo::internal::Buffer* buf);
  RunOrClosePipeInput_Data();
  // Do nothing in the destructor since it won't be called.
  ~RunOrClosePipeInput_Data() {}

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker,
                       bool inlined);

  bool is_null() const {
    return size == 0;
  }

  void set_null();

  enum class RunOrClosePipeInput_Tag : uint32_t {

    PEER_ASSOCIATED_ENDPOINT_CLOSED_EVENT,
    ASSOCIATED_ENDPOINT_CLOSED_BEFORE_SENT_EVENT,
  };

  // A note on layout:
  // "Each non-static data member is allocated as if it were the sole member of
  // a struct." - Section 9.5.2 ISO/IEC 14882:2011 (The C++ Spec)
  union MOJO_ALIGNAS(8) Union_ {
    mojo::internal::StructPointer<internal::PeerAssociatedEndpointClosedEvent_Data> f_peer_associated_endpoint_closed_event;
    mojo::internal::StructPointer<internal::AssociatedEndpointClosedBeforeSentEvent_Data> f_associated_endpoint_closed_before_sent_event;
    uint64_t unknown;
  };

  uint32_t size;
  RunOrClosePipeInput_Tag tag;
  Union_ data;

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);
};
static_assert(sizeof(RunOrClosePipeInput_Data) == 16,
              "Bad sizeof(RunOrClosePipeInput_Data)");
static_assert(sizeof(RunOrClosePipeInput_Data::Union_) == 8,
              "Bad sizeof(RunOrClosePipeInput_Data::Union_)");

class RunOrClosePipeMessageParams_Data {
 public:
  static RunOrClosePipeMessageParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  internal::RunOrClosePipeInput_Data input;

 private:
  RunOrClosePipeMessageParams_Data();
  ~RunOrClosePipeMessageParams_Data() = delete;
};
static_assert(sizeof(RunOrClosePipeMessageParams_Data) == 24,
              "Bad sizeof(RunOrClosePipeMessageParams_Data)");
class PeerAssociatedEndpointClosedEvent_Data {
 public:
  static PeerAssociatedEndpointClosedEvent_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint32_t id;
  uint8_t padfinal_[4];

 private:
  PeerAssociatedEndpointClosedEvent_Data();
  ~PeerAssociatedEndpointClosedEvent_Data() = delete;
};
static_assert(sizeof(PeerAssociatedEndpointClosedEvent_Data) == 16,
              "Bad sizeof(PeerAssociatedEndpointClosedEvent_Data)");
class AssociatedEndpointClosedBeforeSentEvent_Data {
 public:
  static AssociatedEndpointClosedBeforeSentEvent_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint32_t id;
  uint8_t padfinal_[4];

 private:
  AssociatedEndpointClosedBeforeSentEvent_Data();
  ~AssociatedEndpointClosedBeforeSentEvent_Data() = delete;
};
static_assert(sizeof(AssociatedEndpointClosedBeforeSentEvent_Data) == 16,
              "Bad sizeof(AssociatedEndpointClosedBeforeSentEvent_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace pipe_control
}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_PIPE_CONTROL_MESSAGES_MOJOM_INTERNAL_H_
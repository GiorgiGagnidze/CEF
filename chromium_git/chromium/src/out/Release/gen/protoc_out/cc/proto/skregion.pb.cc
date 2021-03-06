// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: skregion.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "skregion.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace cc {
namespace proto {

void protobuf_ShutdownFile_skregion_2eproto() {
  delete SkRegion::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_skregion_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_skregion_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  SkRegion::default_instance_ = new SkRegion();
  SkRegion::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_skregion_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_skregion_2eproto_once_);
void protobuf_AddDesc_skregion_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_skregion_2eproto_once_,
                 &protobuf_AddDesc_skregion_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_skregion_2eproto {
  StaticDescriptorInitializer_skregion_2eproto() {
    protobuf_AddDesc_skregion_2eproto();
  }
} static_descriptor_initializer_skregion_2eproto_;
#endif

// ===================================================================

bool SkRegion_Op_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const SkRegion_Op SkRegion::Op_Difference;
const SkRegion_Op SkRegion::Op_Intersect;
const SkRegion_Op SkRegion::Op_Union;
const SkRegion_Op SkRegion::Op_XOR;
const SkRegion_Op SkRegion::Op_ReverseDifference;
const SkRegion_Op SkRegion::Op_Replace;
const SkRegion_Op SkRegion::Op_MIN;
const SkRegion_Op SkRegion::Op_MAX;
const int SkRegion::Op_ARRAYSIZE;
#endif  // _MSC_VER
#if !defined(_MSC_VER) || _MSC_VER >= 1900
#endif  // !_MSC_VER

SkRegion::SkRegion()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void SkRegion::InitAsDefaultInstance() {
}

SkRegion::SkRegion(const SkRegion& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void SkRegion::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SkRegion::~SkRegion() {
  SharedDtor();
}

void SkRegion::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void SkRegion::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const SkRegion& SkRegion::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_skregion_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_skregion_2eproto();
#endif
  return *default_instance_;
}

SkRegion* SkRegion::default_instance_ = NULL;

SkRegion* SkRegion::New() const {
  return new SkRegion;
}

void SkRegion::Clear() {
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool SkRegion::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
        ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
      return true;
    }
    DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag, NULL));
  }
  return true;
#undef DO_
}

void SkRegion::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
}

int SkRegion::ByteSize() const {
  int total_size = 0;

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SkRegion::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const SkRegion*>(&from));
}

void SkRegion::MergeFrom(const SkRegion& from) {
  GOOGLE_CHECK_NE(&from, this);
}

void SkRegion::CopyFrom(const SkRegion& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SkRegion::IsInitialized() const {

  return true;
}

void SkRegion::Swap(SkRegion* other) {
  if (other != this) {
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string SkRegion::GetTypeName() const {
  return "cc.proto.SkRegion";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace cc

// @@protoc_insertion_point(global_scope)

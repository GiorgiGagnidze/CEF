// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: commit_earlyout_reason.proto

#ifndef PROTOBUF_commit_5fearlyout_5freason_2eproto__INCLUDED
#define PROTOBUF_commit_5fearlyout_5freason_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
// @@protoc_insertion_point(includes)
#include "cc/proto/cc_proto_export.h"

namespace cc {
namespace proto {

// Internal implementation detail -- do not call these.
void CC_PROTO_EXPORT protobuf_AddDesc_commit_5fearlyout_5freason_2eproto();
void protobuf_AssignDesc_commit_5fearlyout_5freason_2eproto();
void protobuf_ShutdownFile_commit_5fearlyout_5freason_2eproto();

class CommitEarlyOutReason;

enum CommitEarlyOutReason_Reason {
  CommitEarlyOutReason_Reason_ABORTED_OUTPUT_SURFACE_LOST = 1,
  CommitEarlyOutReason_Reason_ABORTED_NOT_VISIBLE = 2,
  CommitEarlyOutReason_Reason_ABORTED_DEFERRED_COMMIT = 3,
  CommitEarlyOutReason_Reason_FINISHED_NO_UPDATES = 4
};
CC_PROTO_EXPORT bool CommitEarlyOutReason_Reason_IsValid(int value);
const CommitEarlyOutReason_Reason CommitEarlyOutReason_Reason_Reason_MIN = CommitEarlyOutReason_Reason_ABORTED_OUTPUT_SURFACE_LOST;
const CommitEarlyOutReason_Reason CommitEarlyOutReason_Reason_Reason_MAX = CommitEarlyOutReason_Reason_FINISHED_NO_UPDATES;
const int CommitEarlyOutReason_Reason_Reason_ARRAYSIZE = CommitEarlyOutReason_Reason_Reason_MAX + 1;

// ===================================================================

class CC_PROTO_EXPORT CommitEarlyOutReason : public ::google::protobuf::MessageLite {
 public:
  CommitEarlyOutReason();
  virtual ~CommitEarlyOutReason();

  CommitEarlyOutReason(const CommitEarlyOutReason& from);

  inline CommitEarlyOutReason& operator=(const CommitEarlyOutReason& from) {
    CopyFrom(from);
    return *this;
  }

  static const CommitEarlyOutReason& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const CommitEarlyOutReason* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(CommitEarlyOutReason* other);

  // implements Message ----------------------------------------------

  CommitEarlyOutReason* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const CommitEarlyOutReason& from);
  void MergeFrom(const CommitEarlyOutReason& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  typedef CommitEarlyOutReason_Reason Reason;
  static const Reason ABORTED_OUTPUT_SURFACE_LOST = CommitEarlyOutReason_Reason_ABORTED_OUTPUT_SURFACE_LOST;
  static const Reason ABORTED_NOT_VISIBLE = CommitEarlyOutReason_Reason_ABORTED_NOT_VISIBLE;
  static const Reason ABORTED_DEFERRED_COMMIT = CommitEarlyOutReason_Reason_ABORTED_DEFERRED_COMMIT;
  static const Reason FINISHED_NO_UPDATES = CommitEarlyOutReason_Reason_FINISHED_NO_UPDATES;
  static inline bool Reason_IsValid(int value) {
    return CommitEarlyOutReason_Reason_IsValid(value);
  }
  static const Reason Reason_MIN =
    CommitEarlyOutReason_Reason_Reason_MIN;
  static const Reason Reason_MAX =
    CommitEarlyOutReason_Reason_Reason_MAX;
  static const int Reason_ARRAYSIZE =
    CommitEarlyOutReason_Reason_Reason_ARRAYSIZE;

  // accessors -------------------------------------------------------

  // optional .cc.proto.CommitEarlyOutReason.Reason reason = 1;
  inline bool has_reason() const;
  inline void clear_reason();
  static const int kReasonFieldNumber = 1;
  inline ::cc::proto::CommitEarlyOutReason_Reason reason() const;
  inline void set_reason(::cc::proto::CommitEarlyOutReason_Reason value);

  // @@protoc_insertion_point(class_scope:cc.proto.CommitEarlyOutReason)
 private:
  inline void set_has_reason();
  inline void clear_has_reason();

  int reason_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void CC_PROTO_EXPORT protobuf_AddDesc_commit_5fearlyout_5freason_2eproto_impl();
  #else
  friend void CC_PROTO_EXPORT protobuf_AddDesc_commit_5fearlyout_5freason_2eproto();
  #endif
  friend void protobuf_AssignDesc_commit_5fearlyout_5freason_2eproto();
  friend void protobuf_ShutdownFile_commit_5fearlyout_5freason_2eproto();

  void InitAsDefaultInstance();
  static CommitEarlyOutReason* default_instance_;
};
// ===================================================================


// ===================================================================

// CommitEarlyOutReason

// optional .cc.proto.CommitEarlyOutReason.Reason reason = 1;
inline bool CommitEarlyOutReason::has_reason() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CommitEarlyOutReason::set_has_reason() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CommitEarlyOutReason::clear_has_reason() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CommitEarlyOutReason::clear_reason() {
  reason_ = 1;
  clear_has_reason();
}
inline ::cc::proto::CommitEarlyOutReason_Reason CommitEarlyOutReason::reason() const {
  return static_cast< ::cc::proto::CommitEarlyOutReason_Reason >(reason_);
}
inline void CommitEarlyOutReason::set_reason(::cc::proto::CommitEarlyOutReason_Reason value) {
  assert(::cc::proto::CommitEarlyOutReason_Reason_IsValid(value));
  set_has_reason();
  reason_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace cc

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_commit_5fearlyout_5freason_2eproto__INCLUDED

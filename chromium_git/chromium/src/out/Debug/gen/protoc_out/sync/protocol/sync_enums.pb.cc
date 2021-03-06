// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sync_enums.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "sync_enums.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace sync_pb {

void protobuf_ShutdownFile_sync_5fenums_2eproto() {
  delete SyncEnums::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_sync_5fenums_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_sync_5fenums_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  SyncEnums::default_instance_ = new SyncEnums();
  SyncEnums::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_sync_5fenums_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_sync_5fenums_2eproto_once_);
void protobuf_AddDesc_sync_5fenums_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_sync_5fenums_2eproto_once_,
                 &protobuf_AddDesc_sync_5fenums_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_sync_5fenums_2eproto {
  StaticDescriptorInitializer_sync_5fenums_2eproto() {
    protobuf_AddDesc_sync_5fenums_2eproto();
  }
} static_descriptor_initializer_sync_5fenums_2eproto_;
#endif

// ===================================================================

bool SyncEnums_SingletonDebugEventType_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const SyncEnums_SingletonDebugEventType SyncEnums::CONNECTION_STATUS_CHANGE;
const SyncEnums_SingletonDebugEventType SyncEnums::UPDATED_TOKEN;
const SyncEnums_SingletonDebugEventType SyncEnums::PASSPHRASE_REQUIRED;
const SyncEnums_SingletonDebugEventType SyncEnums::PASSPHRASE_ACCEPTED;
const SyncEnums_SingletonDebugEventType SyncEnums::INITIALIZATION_COMPLETE;
const SyncEnums_SingletonDebugEventType SyncEnums::STOP_SYNCING_PERMANENTLY;
const SyncEnums_SingletonDebugEventType SyncEnums::ENCRYPTION_COMPLETE;
const SyncEnums_SingletonDebugEventType SyncEnums::ACTIONABLE_ERROR;
const SyncEnums_SingletonDebugEventType SyncEnums::ENCRYPTED_TYPES_CHANGED;
const SyncEnums_SingletonDebugEventType SyncEnums::PASSPHRASE_TYPE_CHANGED;
const SyncEnums_SingletonDebugEventType SyncEnums::KEYSTORE_TOKEN_UPDATED;
const SyncEnums_SingletonDebugEventType SyncEnums::CONFIGURE_COMPLETE;
const SyncEnums_SingletonDebugEventType SyncEnums::BOOTSTRAP_TOKEN_UPDATED;
const SyncEnums_SingletonDebugEventType SyncEnums::SingletonDebugEventType_MIN;
const SyncEnums_SingletonDebugEventType SyncEnums::SingletonDebugEventType_MAX;
const int SyncEnums::SingletonDebugEventType_ARRAYSIZE;
#endif  // _MSC_VER
bool SyncEnums_PageTransition_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const SyncEnums_PageTransition SyncEnums::LINK;
const SyncEnums_PageTransition SyncEnums::TYPED;
const SyncEnums_PageTransition SyncEnums::AUTO_BOOKMARK;
const SyncEnums_PageTransition SyncEnums::AUTO_SUBFRAME;
const SyncEnums_PageTransition SyncEnums::MANUAL_SUBFRAME;
const SyncEnums_PageTransition SyncEnums::GENERATED;
const SyncEnums_PageTransition SyncEnums::AUTO_TOPLEVEL;
const SyncEnums_PageTransition SyncEnums::FORM_SUBMIT;
const SyncEnums_PageTransition SyncEnums::RELOAD;
const SyncEnums_PageTransition SyncEnums::KEYWORD;
const SyncEnums_PageTransition SyncEnums::KEYWORD_GENERATED;
const SyncEnums_PageTransition SyncEnums::PageTransition_MIN;
const SyncEnums_PageTransition SyncEnums::PageTransition_MAX;
const int SyncEnums::PageTransition_ARRAYSIZE;
#endif  // _MSC_VER
bool SyncEnums_PageTransitionRedirectType_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const SyncEnums_PageTransitionRedirectType SyncEnums::CLIENT_REDIRECT;
const SyncEnums_PageTransitionRedirectType SyncEnums::SERVER_REDIRECT;
const SyncEnums_PageTransitionRedirectType SyncEnums::PageTransitionRedirectType_MIN;
const SyncEnums_PageTransitionRedirectType SyncEnums::PageTransitionRedirectType_MAX;
const int SyncEnums::PageTransitionRedirectType_ARRAYSIZE;
#endif  // _MSC_VER
bool SyncEnums_ErrorType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 100:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const SyncEnums_ErrorType SyncEnums::SUCCESS;
const SyncEnums_ErrorType SyncEnums::DEPRECATED_ACCESS_DENIED;
const SyncEnums_ErrorType SyncEnums::NOT_MY_BIRTHDAY;
const SyncEnums_ErrorType SyncEnums::THROTTLED;
const SyncEnums_ErrorType SyncEnums::DEPRECATED_AUTH_EXPIRED;
const SyncEnums_ErrorType SyncEnums::DEPRECATED_USER_NOT_ACTIVATED;
const SyncEnums_ErrorType SyncEnums::DEPRECATED_AUTH_INVALID;
const SyncEnums_ErrorType SyncEnums::CLEAR_PENDING;
const SyncEnums_ErrorType SyncEnums::TRANSIENT_ERROR;
const SyncEnums_ErrorType SyncEnums::MIGRATION_DONE;
const SyncEnums_ErrorType SyncEnums::DISABLED_BY_ADMIN;
const SyncEnums_ErrorType SyncEnums::USER_ROLLBACK;
const SyncEnums_ErrorType SyncEnums::PARTIAL_FAILURE;
const SyncEnums_ErrorType SyncEnums::CLIENT_DATA_OBSOLETE;
const SyncEnums_ErrorType SyncEnums::UNKNOWN;
const SyncEnums_ErrorType SyncEnums::ErrorType_MIN;
const SyncEnums_ErrorType SyncEnums::ErrorType_MAX;
const int SyncEnums::ErrorType_ARRAYSIZE;
#endif  // _MSC_VER
bool SyncEnums_Action_IsValid(int value) {
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
const SyncEnums_Action SyncEnums::UPGRADE_CLIENT;
const SyncEnums_Action SyncEnums::CLEAR_USER_DATA_AND_RESYNC;
const SyncEnums_Action SyncEnums::ENABLE_SYNC_ON_ACCOUNT;
const SyncEnums_Action SyncEnums::STOP_AND_RESTART_SYNC;
const SyncEnums_Action SyncEnums::DISABLE_SYNC_ON_CLIENT;
const SyncEnums_Action SyncEnums::UNKNOWN_ACTION;
const SyncEnums_Action SyncEnums::Action_MIN;
const SyncEnums_Action SyncEnums::Action_MAX;
const int SyncEnums::Action_ARRAYSIZE;
#endif  // _MSC_VER
bool SyncEnums_DeviceType_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const SyncEnums_DeviceType SyncEnums::TYPE_WIN;
const SyncEnums_DeviceType SyncEnums::TYPE_MAC;
const SyncEnums_DeviceType SyncEnums::TYPE_LINUX;
const SyncEnums_DeviceType SyncEnums::TYPE_CROS;
const SyncEnums_DeviceType SyncEnums::TYPE_OTHER;
const SyncEnums_DeviceType SyncEnums::TYPE_PHONE;
const SyncEnums_DeviceType SyncEnums::TYPE_TABLET;
const SyncEnums_DeviceType SyncEnums::DeviceType_MIN;
const SyncEnums_DeviceType SyncEnums::DeviceType_MAX;
const int SyncEnums::DeviceType_ARRAYSIZE;
#endif  // _MSC_VER
bool SyncEnums_GetUpdatesOrigin_IsValid(int value) {
  switch(value) {
    case 0:
    case 4:
    case 7:
    case 8:
    case 9:
    case 10:
    case 12:
    case 13:
    case 14:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const SyncEnums_GetUpdatesOrigin SyncEnums::UNKNOWN_ORIGIN;
const SyncEnums_GetUpdatesOrigin SyncEnums::PERIODIC;
const SyncEnums_GetUpdatesOrigin SyncEnums::NEWLY_SUPPORTED_DATATYPE;
const SyncEnums_GetUpdatesOrigin SyncEnums::MIGRATION;
const SyncEnums_GetUpdatesOrigin SyncEnums::NEW_CLIENT;
const SyncEnums_GetUpdatesOrigin SyncEnums::RECONFIGURATION;
const SyncEnums_GetUpdatesOrigin SyncEnums::GU_TRIGGER;
const SyncEnums_GetUpdatesOrigin SyncEnums::RETRY;
const SyncEnums_GetUpdatesOrigin SyncEnums::PROGRAMMATIC;
const SyncEnums_GetUpdatesOrigin SyncEnums::GetUpdatesOrigin_MIN;
const SyncEnums_GetUpdatesOrigin SyncEnums::GetUpdatesOrigin_MAX;
const int SyncEnums::GetUpdatesOrigin_ARRAYSIZE;
#endif  // _MSC_VER
#if !defined(_MSC_VER) || _MSC_VER >= 1900
#endif  // !_MSC_VER

SyncEnums::SyncEnums()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void SyncEnums::InitAsDefaultInstance() {
}

SyncEnums::SyncEnums(const SyncEnums& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void SyncEnums::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SyncEnums::~SyncEnums() {
  SharedDtor();
}

void SyncEnums::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void SyncEnums::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const SyncEnums& SyncEnums::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_sync_5fenums_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_sync_5fenums_2eproto();
#endif
  return *default_instance_;
}

SyncEnums* SyncEnums::default_instance_ = NULL;

SyncEnums* SyncEnums::New() const {
  return new SyncEnums;
}

void SyncEnums::Clear() {
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool SyncEnums::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
        ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
      return true;
    }
    DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag, mutable_unknown_fields()));
  }
  return true;
#undef DO_
}

void SyncEnums::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormatLite::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

int SyncEnums::ByteSize() const {
  int total_size = 0;

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SyncEnums::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const SyncEnums*>(&from));
}

void SyncEnums::MergeFrom(const SyncEnums& from) {
  GOOGLE_CHECK_NE(&from, this);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void SyncEnums::CopyFrom(const SyncEnums& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SyncEnums::IsInitialized() const {

  return true;
}

void SyncEnums::Swap(SyncEnums* other) {
  if (other != this) {
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string SyncEnums::GetTypeName() const {
  return "sync_pb.SyncEnums";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sync_pb

// @@protoc_insertion_point(global_scope)

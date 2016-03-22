// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: layer_tree_debug_state.proto

#ifndef PROTOBUF_layer_5ftree_5fdebug_5fstate_2eproto__INCLUDED
#define PROTOBUF_layer_5ftree_5fdebug_5fstate_2eproto__INCLUDED

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
void CC_PROTO_EXPORT protobuf_AddDesc_layer_5ftree_5fdebug_5fstate_2eproto();
void protobuf_AssignDesc_layer_5ftree_5fdebug_5fstate_2eproto();
void protobuf_ShutdownFile_layer_5ftree_5fdebug_5fstate_2eproto();

class LayerTreeDebugState;

// ===================================================================

class CC_PROTO_EXPORT LayerTreeDebugState : public ::google::protobuf::MessageLite {
 public:
  LayerTreeDebugState();
  virtual ~LayerTreeDebugState();

  LayerTreeDebugState(const LayerTreeDebugState& from);

  inline LayerTreeDebugState& operator=(const LayerTreeDebugState& from) {
    CopyFrom(from);
    return *this;
  }

  static const LayerTreeDebugState& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const LayerTreeDebugState* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(LayerTreeDebugState* other);

  // implements Message ----------------------------------------------

  LayerTreeDebugState* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const LayerTreeDebugState& from);
  void MergeFrom(const LayerTreeDebugState& from);
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

  // accessors -------------------------------------------------------

  // optional bool show_fps_counter = 1;
  inline bool has_show_fps_counter() const;
  inline void clear_show_fps_counter();
  static const int kShowFpsCounterFieldNumber = 1;
  inline bool show_fps_counter() const;
  inline void set_show_fps_counter(bool value);

  // optional bool show_debug_borders = 2;
  inline bool has_show_debug_borders() const;
  inline void clear_show_debug_borders();
  static const int kShowDebugBordersFieldNumber = 2;
  inline bool show_debug_borders() const;
  inline void set_show_debug_borders(bool value);

  // optional bool show_paint_rects = 3;
  inline bool has_show_paint_rects() const;
  inline void clear_show_paint_rects();
  static const int kShowPaintRectsFieldNumber = 3;
  inline bool show_paint_rects() const;
  inline void set_show_paint_rects(bool value);

  // optional bool show_property_changed_rects = 4;
  inline bool has_show_property_changed_rects() const;
  inline void clear_show_property_changed_rects();
  static const int kShowPropertyChangedRectsFieldNumber = 4;
  inline bool show_property_changed_rects() const;
  inline void set_show_property_changed_rects(bool value);

  // optional bool show_surface_damage_rects = 5;
  inline bool has_show_surface_damage_rects() const;
  inline void clear_show_surface_damage_rects();
  static const int kShowSurfaceDamageRectsFieldNumber = 5;
  inline bool show_surface_damage_rects() const;
  inline void set_show_surface_damage_rects(bool value);

  // optional bool show_screen_space_rects = 6;
  inline bool has_show_screen_space_rects() const;
  inline void clear_show_screen_space_rects();
  static const int kShowScreenSpaceRectsFieldNumber = 6;
  inline bool show_screen_space_rects() const;
  inline void set_show_screen_space_rects(bool value);

  // optional bool show_replica_screen_space_rects = 7;
  inline bool has_show_replica_screen_space_rects() const;
  inline void clear_show_replica_screen_space_rects();
  static const int kShowReplicaScreenSpaceRectsFieldNumber = 7;
  inline bool show_replica_screen_space_rects() const;
  inline void set_show_replica_screen_space_rects(bool value);

  // optional bool show_touch_event_handler_rects = 8;
  inline bool has_show_touch_event_handler_rects() const;
  inline void clear_show_touch_event_handler_rects();
  static const int kShowTouchEventHandlerRectsFieldNumber = 8;
  inline bool show_touch_event_handler_rects() const;
  inline void set_show_touch_event_handler_rects(bool value);

  // optional bool show_wheel_event_handler_rects = 9;
  inline bool has_show_wheel_event_handler_rects() const;
  inline void clear_show_wheel_event_handler_rects();
  static const int kShowWheelEventHandlerRectsFieldNumber = 9;
  inline bool show_wheel_event_handler_rects() const;
  inline void set_show_wheel_event_handler_rects(bool value);

  // optional bool show_scroll_event_handler_rects = 10;
  inline bool has_show_scroll_event_handler_rects() const;
  inline void clear_show_scroll_event_handler_rects();
  static const int kShowScrollEventHandlerRectsFieldNumber = 10;
  inline bool show_scroll_event_handler_rects() const;
  inline void set_show_scroll_event_handler_rects(bool value);

  // optional bool show_non_fast_scrollable_rects = 11;
  inline bool has_show_non_fast_scrollable_rects() const;
  inline void clear_show_non_fast_scrollable_rects();
  static const int kShowNonFastScrollableRectsFieldNumber = 11;
  inline bool show_non_fast_scrollable_rects() const;
  inline void set_show_non_fast_scrollable_rects(bool value);

  // optional bool show_layer_animation_bounds_rects = 12;
  inline bool has_show_layer_animation_bounds_rects() const;
  inline void clear_show_layer_animation_bounds_rects();
  static const int kShowLayerAnimationBoundsRectsFieldNumber = 12;
  inline bool show_layer_animation_bounds_rects() const;
  inline void set_show_layer_animation_bounds_rects(bool value);

  // optional int32 slow_down_raster_scale_factor = 13;
  inline bool has_slow_down_raster_scale_factor() const;
  inline void clear_slow_down_raster_scale_factor();
  static const int kSlowDownRasterScaleFactorFieldNumber = 13;
  inline ::google::protobuf::int32 slow_down_raster_scale_factor() const;
  inline void set_slow_down_raster_scale_factor(::google::protobuf::int32 value);

  // optional bool rasterize_only_visible_content = 14;
  inline bool has_rasterize_only_visible_content() const;
  inline void clear_rasterize_only_visible_content();
  static const int kRasterizeOnlyVisibleContentFieldNumber = 14;
  inline bool rasterize_only_visible_content() const;
  inline void set_rasterize_only_visible_content(bool value);

  // optional bool show_picture_borders = 15;
  inline bool has_show_picture_borders() const;
  inline void clear_show_picture_borders();
  static const int kShowPictureBordersFieldNumber = 15;
  inline bool show_picture_borders() const;
  inline void set_show_picture_borders(bool value);

  // optional bool record_rendering_stats = 16;
  inline bool has_record_rendering_stats() const;
  inline void clear_record_rendering_stats();
  static const int kRecordRenderingStatsFieldNumber = 16;
  inline bool record_rendering_stats() const;
  inline void set_record_rendering_stats(bool value);

  // @@protoc_insertion_point(class_scope:cc.proto.LayerTreeDebugState)
 private:
  inline void set_has_show_fps_counter();
  inline void clear_has_show_fps_counter();
  inline void set_has_show_debug_borders();
  inline void clear_has_show_debug_borders();
  inline void set_has_show_paint_rects();
  inline void clear_has_show_paint_rects();
  inline void set_has_show_property_changed_rects();
  inline void clear_has_show_property_changed_rects();
  inline void set_has_show_surface_damage_rects();
  inline void clear_has_show_surface_damage_rects();
  inline void set_has_show_screen_space_rects();
  inline void clear_has_show_screen_space_rects();
  inline void set_has_show_replica_screen_space_rects();
  inline void clear_has_show_replica_screen_space_rects();
  inline void set_has_show_touch_event_handler_rects();
  inline void clear_has_show_touch_event_handler_rects();
  inline void set_has_show_wheel_event_handler_rects();
  inline void clear_has_show_wheel_event_handler_rects();
  inline void set_has_show_scroll_event_handler_rects();
  inline void clear_has_show_scroll_event_handler_rects();
  inline void set_has_show_non_fast_scrollable_rects();
  inline void clear_has_show_non_fast_scrollable_rects();
  inline void set_has_show_layer_animation_bounds_rects();
  inline void clear_has_show_layer_animation_bounds_rects();
  inline void set_has_slow_down_raster_scale_factor();
  inline void clear_has_slow_down_raster_scale_factor();
  inline void set_has_rasterize_only_visible_content();
  inline void clear_has_rasterize_only_visible_content();
  inline void set_has_show_picture_borders();
  inline void clear_has_show_picture_borders();
  inline void set_has_record_rendering_stats();
  inline void clear_has_record_rendering_stats();

  bool show_fps_counter_;
  bool show_debug_borders_;
  bool show_paint_rects_;
  bool show_property_changed_rects_;
  bool show_surface_damage_rects_;
  bool show_screen_space_rects_;
  bool show_replica_screen_space_rects_;
  bool show_touch_event_handler_rects_;
  bool show_wheel_event_handler_rects_;
  bool show_scroll_event_handler_rects_;
  bool show_non_fast_scrollable_rects_;
  bool show_layer_animation_bounds_rects_;
  ::google::protobuf::int32 slow_down_raster_scale_factor_;
  bool rasterize_only_visible_content_;
  bool show_picture_borders_;
  bool record_rendering_stats_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(16 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void CC_PROTO_EXPORT protobuf_AddDesc_layer_5ftree_5fdebug_5fstate_2eproto_impl();
  #else
  friend void CC_PROTO_EXPORT protobuf_AddDesc_layer_5ftree_5fdebug_5fstate_2eproto();
  #endif
  friend void protobuf_AssignDesc_layer_5ftree_5fdebug_5fstate_2eproto();
  friend void protobuf_ShutdownFile_layer_5ftree_5fdebug_5fstate_2eproto();

  void InitAsDefaultInstance();
  static LayerTreeDebugState* default_instance_;
};
// ===================================================================


// ===================================================================

// LayerTreeDebugState

// optional bool show_fps_counter = 1;
inline bool LayerTreeDebugState::has_show_fps_counter() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void LayerTreeDebugState::set_has_show_fps_counter() {
  _has_bits_[0] |= 0x00000001u;
}
inline void LayerTreeDebugState::clear_has_show_fps_counter() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void LayerTreeDebugState::clear_show_fps_counter() {
  show_fps_counter_ = false;
  clear_has_show_fps_counter();
}
inline bool LayerTreeDebugState::show_fps_counter() const {
  return show_fps_counter_;
}
inline void LayerTreeDebugState::set_show_fps_counter(bool value) {
  set_has_show_fps_counter();
  show_fps_counter_ = value;
}

// optional bool show_debug_borders = 2;
inline bool LayerTreeDebugState::has_show_debug_borders() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void LayerTreeDebugState::set_has_show_debug_borders() {
  _has_bits_[0] |= 0x00000002u;
}
inline void LayerTreeDebugState::clear_has_show_debug_borders() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void LayerTreeDebugState::clear_show_debug_borders() {
  show_debug_borders_ = false;
  clear_has_show_debug_borders();
}
inline bool LayerTreeDebugState::show_debug_borders() const {
  return show_debug_borders_;
}
inline void LayerTreeDebugState::set_show_debug_borders(bool value) {
  set_has_show_debug_borders();
  show_debug_borders_ = value;
}

// optional bool show_paint_rects = 3;
inline bool LayerTreeDebugState::has_show_paint_rects() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void LayerTreeDebugState::set_has_show_paint_rects() {
  _has_bits_[0] |= 0x00000004u;
}
inline void LayerTreeDebugState::clear_has_show_paint_rects() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void LayerTreeDebugState::clear_show_paint_rects() {
  show_paint_rects_ = false;
  clear_has_show_paint_rects();
}
inline bool LayerTreeDebugState::show_paint_rects() const {
  return show_paint_rects_;
}
inline void LayerTreeDebugState::set_show_paint_rects(bool value) {
  set_has_show_paint_rects();
  show_paint_rects_ = value;
}

// optional bool show_property_changed_rects = 4;
inline bool LayerTreeDebugState::has_show_property_changed_rects() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void LayerTreeDebugState::set_has_show_property_changed_rects() {
  _has_bits_[0] |= 0x00000008u;
}
inline void LayerTreeDebugState::clear_has_show_property_changed_rects() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void LayerTreeDebugState::clear_show_property_changed_rects() {
  show_property_changed_rects_ = false;
  clear_has_show_property_changed_rects();
}
inline bool LayerTreeDebugState::show_property_changed_rects() const {
  return show_property_changed_rects_;
}
inline void LayerTreeDebugState::set_show_property_changed_rects(bool value) {
  set_has_show_property_changed_rects();
  show_property_changed_rects_ = value;
}

// optional bool show_surface_damage_rects = 5;
inline bool LayerTreeDebugState::has_show_surface_damage_rects() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void LayerTreeDebugState::set_has_show_surface_damage_rects() {
  _has_bits_[0] |= 0x00000010u;
}
inline void LayerTreeDebugState::clear_has_show_surface_damage_rects() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void LayerTreeDebugState::clear_show_surface_damage_rects() {
  show_surface_damage_rects_ = false;
  clear_has_show_surface_damage_rects();
}
inline bool LayerTreeDebugState::show_surface_damage_rects() const {
  return show_surface_damage_rects_;
}
inline void LayerTreeDebugState::set_show_surface_damage_rects(bool value) {
  set_has_show_surface_damage_rects();
  show_surface_damage_rects_ = value;
}

// optional bool show_screen_space_rects = 6;
inline bool LayerTreeDebugState::has_show_screen_space_rects() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void LayerTreeDebugState::set_has_show_screen_space_rects() {
  _has_bits_[0] |= 0x00000020u;
}
inline void LayerTreeDebugState::clear_has_show_screen_space_rects() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void LayerTreeDebugState::clear_show_screen_space_rects() {
  show_screen_space_rects_ = false;
  clear_has_show_screen_space_rects();
}
inline bool LayerTreeDebugState::show_screen_space_rects() const {
  return show_screen_space_rects_;
}
inline void LayerTreeDebugState::set_show_screen_space_rects(bool value) {
  set_has_show_screen_space_rects();
  show_screen_space_rects_ = value;
}

// optional bool show_replica_screen_space_rects = 7;
inline bool LayerTreeDebugState::has_show_replica_screen_space_rects() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void LayerTreeDebugState::set_has_show_replica_screen_space_rects() {
  _has_bits_[0] |= 0x00000040u;
}
inline void LayerTreeDebugState::clear_has_show_replica_screen_space_rects() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void LayerTreeDebugState::clear_show_replica_screen_space_rects() {
  show_replica_screen_space_rects_ = false;
  clear_has_show_replica_screen_space_rects();
}
inline bool LayerTreeDebugState::show_replica_screen_space_rects() const {
  return show_replica_screen_space_rects_;
}
inline void LayerTreeDebugState::set_show_replica_screen_space_rects(bool value) {
  set_has_show_replica_screen_space_rects();
  show_replica_screen_space_rects_ = value;
}

// optional bool show_touch_event_handler_rects = 8;
inline bool LayerTreeDebugState::has_show_touch_event_handler_rects() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void LayerTreeDebugState::set_has_show_touch_event_handler_rects() {
  _has_bits_[0] |= 0x00000080u;
}
inline void LayerTreeDebugState::clear_has_show_touch_event_handler_rects() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void LayerTreeDebugState::clear_show_touch_event_handler_rects() {
  show_touch_event_handler_rects_ = false;
  clear_has_show_touch_event_handler_rects();
}
inline bool LayerTreeDebugState::show_touch_event_handler_rects() const {
  return show_touch_event_handler_rects_;
}
inline void LayerTreeDebugState::set_show_touch_event_handler_rects(bool value) {
  set_has_show_touch_event_handler_rects();
  show_touch_event_handler_rects_ = value;
}

// optional bool show_wheel_event_handler_rects = 9;
inline bool LayerTreeDebugState::has_show_wheel_event_handler_rects() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void LayerTreeDebugState::set_has_show_wheel_event_handler_rects() {
  _has_bits_[0] |= 0x00000100u;
}
inline void LayerTreeDebugState::clear_has_show_wheel_event_handler_rects() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void LayerTreeDebugState::clear_show_wheel_event_handler_rects() {
  show_wheel_event_handler_rects_ = false;
  clear_has_show_wheel_event_handler_rects();
}
inline bool LayerTreeDebugState::show_wheel_event_handler_rects() const {
  return show_wheel_event_handler_rects_;
}
inline void LayerTreeDebugState::set_show_wheel_event_handler_rects(bool value) {
  set_has_show_wheel_event_handler_rects();
  show_wheel_event_handler_rects_ = value;
}

// optional bool show_scroll_event_handler_rects = 10;
inline bool LayerTreeDebugState::has_show_scroll_event_handler_rects() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void LayerTreeDebugState::set_has_show_scroll_event_handler_rects() {
  _has_bits_[0] |= 0x00000200u;
}
inline void LayerTreeDebugState::clear_has_show_scroll_event_handler_rects() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void LayerTreeDebugState::clear_show_scroll_event_handler_rects() {
  show_scroll_event_handler_rects_ = false;
  clear_has_show_scroll_event_handler_rects();
}
inline bool LayerTreeDebugState::show_scroll_event_handler_rects() const {
  return show_scroll_event_handler_rects_;
}
inline void LayerTreeDebugState::set_show_scroll_event_handler_rects(bool value) {
  set_has_show_scroll_event_handler_rects();
  show_scroll_event_handler_rects_ = value;
}

// optional bool show_non_fast_scrollable_rects = 11;
inline bool LayerTreeDebugState::has_show_non_fast_scrollable_rects() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void LayerTreeDebugState::set_has_show_non_fast_scrollable_rects() {
  _has_bits_[0] |= 0x00000400u;
}
inline void LayerTreeDebugState::clear_has_show_non_fast_scrollable_rects() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void LayerTreeDebugState::clear_show_non_fast_scrollable_rects() {
  show_non_fast_scrollable_rects_ = false;
  clear_has_show_non_fast_scrollable_rects();
}
inline bool LayerTreeDebugState::show_non_fast_scrollable_rects() const {
  return show_non_fast_scrollable_rects_;
}
inline void LayerTreeDebugState::set_show_non_fast_scrollable_rects(bool value) {
  set_has_show_non_fast_scrollable_rects();
  show_non_fast_scrollable_rects_ = value;
}

// optional bool show_layer_animation_bounds_rects = 12;
inline bool LayerTreeDebugState::has_show_layer_animation_bounds_rects() const {
  return (_has_bits_[0] & 0x00000800u) != 0;
}
inline void LayerTreeDebugState::set_has_show_layer_animation_bounds_rects() {
  _has_bits_[0] |= 0x00000800u;
}
inline void LayerTreeDebugState::clear_has_show_layer_animation_bounds_rects() {
  _has_bits_[0] &= ~0x00000800u;
}
inline void LayerTreeDebugState::clear_show_layer_animation_bounds_rects() {
  show_layer_animation_bounds_rects_ = false;
  clear_has_show_layer_animation_bounds_rects();
}
inline bool LayerTreeDebugState::show_layer_animation_bounds_rects() const {
  return show_layer_animation_bounds_rects_;
}
inline void LayerTreeDebugState::set_show_layer_animation_bounds_rects(bool value) {
  set_has_show_layer_animation_bounds_rects();
  show_layer_animation_bounds_rects_ = value;
}

// optional int32 slow_down_raster_scale_factor = 13;
inline bool LayerTreeDebugState::has_slow_down_raster_scale_factor() const {
  return (_has_bits_[0] & 0x00001000u) != 0;
}
inline void LayerTreeDebugState::set_has_slow_down_raster_scale_factor() {
  _has_bits_[0] |= 0x00001000u;
}
inline void LayerTreeDebugState::clear_has_slow_down_raster_scale_factor() {
  _has_bits_[0] &= ~0x00001000u;
}
inline void LayerTreeDebugState::clear_slow_down_raster_scale_factor() {
  slow_down_raster_scale_factor_ = 0;
  clear_has_slow_down_raster_scale_factor();
}
inline ::google::protobuf::int32 LayerTreeDebugState::slow_down_raster_scale_factor() const {
  return slow_down_raster_scale_factor_;
}
inline void LayerTreeDebugState::set_slow_down_raster_scale_factor(::google::protobuf::int32 value) {
  set_has_slow_down_raster_scale_factor();
  slow_down_raster_scale_factor_ = value;
}

// optional bool rasterize_only_visible_content = 14;
inline bool LayerTreeDebugState::has_rasterize_only_visible_content() const {
  return (_has_bits_[0] & 0x00002000u) != 0;
}
inline void LayerTreeDebugState::set_has_rasterize_only_visible_content() {
  _has_bits_[0] |= 0x00002000u;
}
inline void LayerTreeDebugState::clear_has_rasterize_only_visible_content() {
  _has_bits_[0] &= ~0x00002000u;
}
inline void LayerTreeDebugState::clear_rasterize_only_visible_content() {
  rasterize_only_visible_content_ = false;
  clear_has_rasterize_only_visible_content();
}
inline bool LayerTreeDebugState::rasterize_only_visible_content() const {
  return rasterize_only_visible_content_;
}
inline void LayerTreeDebugState::set_rasterize_only_visible_content(bool value) {
  set_has_rasterize_only_visible_content();
  rasterize_only_visible_content_ = value;
}

// optional bool show_picture_borders = 15;
inline bool LayerTreeDebugState::has_show_picture_borders() const {
  return (_has_bits_[0] & 0x00004000u) != 0;
}
inline void LayerTreeDebugState::set_has_show_picture_borders() {
  _has_bits_[0] |= 0x00004000u;
}
inline void LayerTreeDebugState::clear_has_show_picture_borders() {
  _has_bits_[0] &= ~0x00004000u;
}
inline void LayerTreeDebugState::clear_show_picture_borders() {
  show_picture_borders_ = false;
  clear_has_show_picture_borders();
}
inline bool LayerTreeDebugState::show_picture_borders() const {
  return show_picture_borders_;
}
inline void LayerTreeDebugState::set_show_picture_borders(bool value) {
  set_has_show_picture_borders();
  show_picture_borders_ = value;
}

// optional bool record_rendering_stats = 16;
inline bool LayerTreeDebugState::has_record_rendering_stats() const {
  return (_has_bits_[0] & 0x00008000u) != 0;
}
inline void LayerTreeDebugState::set_has_record_rendering_stats() {
  _has_bits_[0] |= 0x00008000u;
}
inline void LayerTreeDebugState::clear_has_record_rendering_stats() {
  _has_bits_[0] &= ~0x00008000u;
}
inline void LayerTreeDebugState::clear_record_rendering_stats() {
  record_rendering_stats_ = false;
  clear_has_record_rendering_stats();
}
inline bool LayerTreeDebugState::record_rendering_stats() const {
  return record_rendering_stats_;
}
inline void LayerTreeDebugState::set_record_rendering_stats(bool value) {
  set_has_record_rendering_stats();
  record_rendering_stats_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace cc

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_layer_5ftree_5fdebug_5fstate_2eproto__INCLUDED

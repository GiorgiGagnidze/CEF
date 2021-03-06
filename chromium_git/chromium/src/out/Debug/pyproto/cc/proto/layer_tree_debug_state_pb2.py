# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: layer_tree_debug_state.proto

from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)




DESCRIPTOR = _descriptor.FileDescriptor(
  name='layer_tree_debug_state.proto',
  package='cc.proto',
  serialized_pb='\n\x1clayer_tree_debug_state.proto\x12\x08\x63\x63.proto\"\xd0\x04\n\x13LayerTreeDebugState\x12\x18\n\x10show_fps_counter\x18\x01 \x01(\x08\x12\x1a\n\x12show_debug_borders\x18\x02 \x01(\x08\x12\x18\n\x10show_paint_rects\x18\x03 \x01(\x08\x12#\n\x1bshow_property_changed_rects\x18\x04 \x01(\x08\x12!\n\x19show_surface_damage_rects\x18\x05 \x01(\x08\x12\x1f\n\x17show_screen_space_rects\x18\x06 \x01(\x08\x12\'\n\x1fshow_replica_screen_space_rects\x18\x07 \x01(\x08\x12&\n\x1eshow_touch_event_handler_rects\x18\x08 \x01(\x08\x12&\n\x1eshow_wheel_event_handler_rects\x18\t \x01(\x08\x12\'\n\x1fshow_scroll_event_handler_rects\x18\n \x01(\x08\x12&\n\x1eshow_non_fast_scrollable_rects\x18\x0b \x01(\x08\x12)\n!show_layer_animation_bounds_rects\x18\x0c \x01(\x08\x12%\n\x1dslow_down_raster_scale_factor\x18\r \x01(\x05\x12&\n\x1erasterize_only_visible_content\x18\x0e \x01(\x08\x12\x1c\n\x14show_picture_borders\x18\x0f \x01(\x08\x12\x1e\n\x16record_rendering_stats\x18\x10 \x01(\x08\x42\x02H\x03')




_LAYERTREEDEBUGSTATE = _descriptor.Descriptor(
  name='LayerTreeDebugState',
  full_name='cc.proto.LayerTreeDebugState',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='show_fps_counter', full_name='cc.proto.LayerTreeDebugState.show_fps_counter', index=0,
      number=1, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='show_debug_borders', full_name='cc.proto.LayerTreeDebugState.show_debug_borders', index=1,
      number=2, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='show_paint_rects', full_name='cc.proto.LayerTreeDebugState.show_paint_rects', index=2,
      number=3, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='show_property_changed_rects', full_name='cc.proto.LayerTreeDebugState.show_property_changed_rects', index=3,
      number=4, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='show_surface_damage_rects', full_name='cc.proto.LayerTreeDebugState.show_surface_damage_rects', index=4,
      number=5, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='show_screen_space_rects', full_name='cc.proto.LayerTreeDebugState.show_screen_space_rects', index=5,
      number=6, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='show_replica_screen_space_rects', full_name='cc.proto.LayerTreeDebugState.show_replica_screen_space_rects', index=6,
      number=7, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='show_touch_event_handler_rects', full_name='cc.proto.LayerTreeDebugState.show_touch_event_handler_rects', index=7,
      number=8, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='show_wheel_event_handler_rects', full_name='cc.proto.LayerTreeDebugState.show_wheel_event_handler_rects', index=8,
      number=9, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='show_scroll_event_handler_rects', full_name='cc.proto.LayerTreeDebugState.show_scroll_event_handler_rects', index=9,
      number=10, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='show_non_fast_scrollable_rects', full_name='cc.proto.LayerTreeDebugState.show_non_fast_scrollable_rects', index=10,
      number=11, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='show_layer_animation_bounds_rects', full_name='cc.proto.LayerTreeDebugState.show_layer_animation_bounds_rects', index=11,
      number=12, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='slow_down_raster_scale_factor', full_name='cc.proto.LayerTreeDebugState.slow_down_raster_scale_factor', index=12,
      number=13, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='rasterize_only_visible_content', full_name='cc.proto.LayerTreeDebugState.rasterize_only_visible_content', index=13,
      number=14, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='show_picture_borders', full_name='cc.proto.LayerTreeDebugState.show_picture_borders', index=14,
      number=15, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='record_rendering_stats', full_name='cc.proto.LayerTreeDebugState.record_rendering_stats', index=15,
      number=16, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=43,
  serialized_end=635,
)

DESCRIPTOR.message_types_by_name['LayerTreeDebugState'] = _LAYERTREEDEBUGSTATE

class LayerTreeDebugState(_message.Message):
  __metaclass__ = _reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _LAYERTREEDEBUGSTATE

  # @@protoc_insertion_point(class_scope:cc.proto.LayerTreeDebugState)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), 'H\003')
# @@protoc_insertion_point(module_scope)

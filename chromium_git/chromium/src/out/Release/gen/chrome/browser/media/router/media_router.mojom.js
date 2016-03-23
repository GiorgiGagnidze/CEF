// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("chrome/browser/media/router/media_router.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {

  function MediaSink(values) {
    this.initDefaults_();
    this.initFields_(values);
  }

  MediaSink.IconType = {};
  MediaSink.IconType.CAST = 0;
  MediaSink.IconType.CAST_AUDIO = MediaSink.IconType.CAST + 1;
  MediaSink.IconType.CAST_AUDIO_GROUP = MediaSink.IconType.CAST_AUDIO + 1;
  MediaSink.IconType.GENERIC = MediaSink.IconType.CAST_AUDIO_GROUP + 1;
  MediaSink.IconType.HANGOUT = MediaSink.IconType.GENERIC + 1;

  MediaSink.prototype.initDefaults_ = function() {
    this.sink_id = null;
    this.name = null;
    this.description = null;
    this.domain = null;
    this.icon_type = 0;
  };
  MediaSink.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  MediaSink.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, MediaSink.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate MediaSink.sink_id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate MediaSink.name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate MediaSink.description
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, true)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate MediaSink.domain
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 24, true)
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  MediaSink.encodedSize = codec.kStructHeaderSize + 40;

  MediaSink.decode = function(decoder) {
    var packed;
    var val = new MediaSink();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.sink_id = decoder.decodeStruct(codec.String);
    val.name = decoder.decodeStruct(codec.String);
    val.description = decoder.decodeStruct(codec.NullableString);
    val.domain = decoder.decodeStruct(codec.NullableString);
    val.icon_type = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  MediaSink.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaSink.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.sink_id);
    encoder.encodeStruct(codec.String, val.name);
    encoder.encodeStruct(codec.NullableString, val.description);
    encoder.encodeStruct(codec.NullableString, val.domain);
    encoder.encodeStruct(codec.Int32, val.icon_type);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function MediaRoute(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRoute.prototype.initDefaults_ = function() {
    this.media_route_id = null;
    this.media_source = null;
    this.media_sink_id = null;
    this.description = null;
    this.is_local = false;
    this.for_display = false;
    this.custom_controller_path = null;
  };
  MediaRoute.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  MediaRoute.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, MediaRoute.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate MediaRoute.media_route_id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate MediaRoute.media_source
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, true)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate MediaRoute.media_sink_id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate MediaRoute.description
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 24, false)
    if (err !== validator.validationError.NONE)
        return err;



    
    // validate MediaRoute.custom_controller_path
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 40, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaRoute.encodedSize = codec.kStructHeaderSize + 48;

  MediaRoute.decode = function(decoder) {
    var packed;
    var val = new MediaRoute();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.media_route_id = decoder.decodeStruct(codec.String);
    val.media_source = decoder.decodeStruct(codec.NullableString);
    val.media_sink_id = decoder.decodeStruct(codec.String);
    val.description = decoder.decodeStruct(codec.String);
    packed = decoder.readUint8();
    val.is_local = (packed >> 0) & 1 ? true : false;
    val.for_display = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.custom_controller_path = decoder.decodeStruct(codec.NullableString);
    return val;
  };

  MediaRoute.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRoute.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.media_route_id);
    encoder.encodeStruct(codec.NullableString, val.media_source);
    encoder.encodeStruct(codec.String, val.media_sink_id);
    encoder.encodeStruct(codec.String, val.description);
    packed = 0;
    packed |= (val.is_local & 1) << 0
    packed |= (val.for_display & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.NullableString, val.custom_controller_path);
  };
  function Issue(values) {
    this.initDefaults_();
    this.initFields_(values);
  }

  Issue.Severity = {};
  Issue.Severity.FATAL = 0;
  Issue.Severity.WARNING = Issue.Severity.FATAL + 1;
  Issue.Severity.NOTIFICATION = Issue.Severity.WARNING + 1;
  Issue.ActionType = {};
  Issue.ActionType.DISMISS = 0;
  Issue.ActionType.LEARN_MORE = Issue.ActionType.DISMISS + 1;

  Issue.prototype.initDefaults_ = function() {
    this.route_id = null;
    this.severity = 0;
    this.is_blocking = false;
    this.title = null;
    this.message = null;
    this.default_action = 0;
    this.secondary_actions = null;
    this.help_url = null;
  };
  Issue.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Issue.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Issue.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Issue.route_id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, true)
    if (err !== validator.validationError.NONE)
        return err;



    
    // validate Issue.title
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Issue.message
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 24, true)
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate Issue.secondary_actions
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 40, 4, codec.Int32, true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Issue.help_url
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 48, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Issue.encodedSize = codec.kStructHeaderSize + 56;

  Issue.decode = function(decoder) {
    var packed;
    var val = new Issue();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.route_id = decoder.decodeStruct(codec.NullableString);
    val.severity = decoder.decodeStruct(codec.Int32);
    val.is_blocking = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.title = decoder.decodeStruct(codec.String);
    val.message = decoder.decodeStruct(codec.NullableString);
    val.default_action = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.secondary_actions = decoder.decodeArrayPointer(codec.Int32);
    val.help_url = decoder.decodeStruct(codec.NullableString);
    return val;
  };

  Issue.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Issue.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.NullableString, val.route_id);
    encoder.encodeStruct(codec.Int32, val.severity);
    encoder.encodeStruct(codec.Uint8, val.is_blocking);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.title);
    encoder.encodeStruct(codec.NullableString, val.message);
    encoder.encodeStruct(codec.Int32, val.default_action);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(codec.Int32, val.secondary_actions);
    encoder.encodeStruct(codec.NullableString, val.help_url);
  };
  function RouteMessage(values) {
    this.initDefaults_();
    this.initFields_(values);
  }

  RouteMessage.Type = {};
  RouteMessage.Type.TEXT = 0;
  RouteMessage.Type.BINARY = RouteMessage.Type.TEXT + 1;

  RouteMessage.prototype.initDefaults_ = function() {
    this.type = 0;
    this.message = null;
    this.data = null;
  };
  RouteMessage.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  RouteMessage.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, RouteMessage.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate RouteMessage.message
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, true)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate RouteMessage.data
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 1, codec.Uint8, true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RouteMessage.encodedSize = codec.kStructHeaderSize + 24;

  RouteMessage.decode = function(decoder) {
    var packed;
    var val = new RouteMessage();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.type = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.message = decoder.decodeStruct(codec.NullableString);
    val.data = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  RouteMessage.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RouteMessage.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.type);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.NullableString, val.message);
    encoder.encodeArrayPointer(codec.Uint8, val.data);
  };
  function MediaRouteProvider_CreateRoute_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouteProvider_CreateRoute_Params.prototype.initDefaults_ = function() {
    this.media_source = null;
    this.sink_id = null;
    this.original_presentation_id = null;
    this.origin = null;
    this.tab_id = 0;
  };
  MediaRouteProvider_CreateRoute_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  MediaRouteProvider_CreateRoute_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, MediaRouteProvider_CreateRoute_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate MediaRouteProvider_CreateRoute_Params.media_source
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate MediaRouteProvider_CreateRoute_Params.sink_id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate MediaRouteProvider_CreateRoute_Params.original_presentation_id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate MediaRouteProvider_CreateRoute_Params.origin
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 24, false)
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  MediaRouteProvider_CreateRoute_Params.encodedSize = codec.kStructHeaderSize + 40;

  MediaRouteProvider_CreateRoute_Params.decode = function(decoder) {
    var packed;
    var val = new MediaRouteProvider_CreateRoute_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.media_source = decoder.decodeStruct(codec.String);
    val.sink_id = decoder.decodeStruct(codec.String);
    val.original_presentation_id = decoder.decodeStruct(codec.String);
    val.origin = decoder.decodeStruct(codec.String);
    val.tab_id = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  MediaRouteProvider_CreateRoute_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouteProvider_CreateRoute_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.media_source);
    encoder.encodeStruct(codec.String, val.sink_id);
    encoder.encodeStruct(codec.String, val.original_presentation_id);
    encoder.encodeStruct(codec.String, val.origin);
    encoder.encodeStruct(codec.Int32, val.tab_id);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function MediaRouteProvider_CreateRoute_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouteProvider_CreateRoute_ResponseParams.prototype.initDefaults_ = function() {
    this.route = null;
    this.error_text = null;
  };
  MediaRouteProvider_CreateRoute_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  MediaRouteProvider_CreateRoute_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, MediaRouteProvider_CreateRoute_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate MediaRouteProvider_CreateRoute_ResponseParams.route
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, MediaRoute, true);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate MediaRouteProvider_CreateRoute_ResponseParams.error_text
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaRouteProvider_CreateRoute_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  MediaRouteProvider_CreateRoute_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new MediaRouteProvider_CreateRoute_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.route = decoder.decodeStructPointer(MediaRoute);
    val.error_text = decoder.decodeStruct(codec.NullableString);
    return val;
  };

  MediaRouteProvider_CreateRoute_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouteProvider_CreateRoute_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(MediaRoute, val.route);
    encoder.encodeStruct(codec.NullableString, val.error_text);
  };
  function MediaRouteProvider_JoinRoute_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouteProvider_JoinRoute_Params.prototype.initDefaults_ = function() {
    this.media_source = null;
    this.presentation_id = null;
    this.origin = null;
    this.tab_id = 0;
  };
  MediaRouteProvider_JoinRoute_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  MediaRouteProvider_JoinRoute_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, MediaRouteProvider_JoinRoute_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate MediaRouteProvider_JoinRoute_Params.media_source
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate MediaRouteProvider_JoinRoute_Params.presentation_id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate MediaRouteProvider_JoinRoute_Params.origin
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  MediaRouteProvider_JoinRoute_Params.encodedSize = codec.kStructHeaderSize + 32;

  MediaRouteProvider_JoinRoute_Params.decode = function(decoder) {
    var packed;
    var val = new MediaRouteProvider_JoinRoute_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.media_source = decoder.decodeStruct(codec.String);
    val.presentation_id = decoder.decodeStruct(codec.String);
    val.origin = decoder.decodeStruct(codec.String);
    val.tab_id = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  MediaRouteProvider_JoinRoute_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouteProvider_JoinRoute_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.media_source);
    encoder.encodeStruct(codec.String, val.presentation_id);
    encoder.encodeStruct(codec.String, val.origin);
    encoder.encodeStruct(codec.Int32, val.tab_id);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function MediaRouteProvider_JoinRoute_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouteProvider_JoinRoute_ResponseParams.prototype.initDefaults_ = function() {
    this.route = null;
    this.error_text = null;
  };
  MediaRouteProvider_JoinRoute_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  MediaRouteProvider_JoinRoute_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, MediaRouteProvider_JoinRoute_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate MediaRouteProvider_JoinRoute_ResponseParams.route
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, MediaRoute, true);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate MediaRouteProvider_JoinRoute_ResponseParams.error_text
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaRouteProvider_JoinRoute_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  MediaRouteProvider_JoinRoute_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new MediaRouteProvider_JoinRoute_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.route = decoder.decodeStructPointer(MediaRoute);
    val.error_text = decoder.decodeStruct(codec.NullableString);
    return val;
  };

  MediaRouteProvider_JoinRoute_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouteProvider_JoinRoute_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(MediaRoute, val.route);
    encoder.encodeStruct(codec.NullableString, val.error_text);
  };
  function MediaRouteProvider_ConnectRouteByRouteId_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouteProvider_ConnectRouteByRouteId_Params.prototype.initDefaults_ = function() {
    this.media_source = null;
    this.route_id = null;
    this.presentation_id = null;
    this.origin = null;
    this.tab_id = 0;
  };
  MediaRouteProvider_ConnectRouteByRouteId_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  MediaRouteProvider_ConnectRouteByRouteId_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, MediaRouteProvider_ConnectRouteByRouteId_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate MediaRouteProvider_ConnectRouteByRouteId_Params.media_source
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate MediaRouteProvider_ConnectRouteByRouteId_Params.route_id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate MediaRouteProvider_ConnectRouteByRouteId_Params.presentation_id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate MediaRouteProvider_ConnectRouteByRouteId_Params.origin
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 24, false)
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  MediaRouteProvider_ConnectRouteByRouteId_Params.encodedSize = codec.kStructHeaderSize + 40;

  MediaRouteProvider_ConnectRouteByRouteId_Params.decode = function(decoder) {
    var packed;
    var val = new MediaRouteProvider_ConnectRouteByRouteId_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.media_source = decoder.decodeStruct(codec.String);
    val.route_id = decoder.decodeStruct(codec.String);
    val.presentation_id = decoder.decodeStruct(codec.String);
    val.origin = decoder.decodeStruct(codec.String);
    val.tab_id = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  MediaRouteProvider_ConnectRouteByRouteId_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouteProvider_ConnectRouteByRouteId_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.media_source);
    encoder.encodeStruct(codec.String, val.route_id);
    encoder.encodeStruct(codec.String, val.presentation_id);
    encoder.encodeStruct(codec.String, val.origin);
    encoder.encodeStruct(codec.Int32, val.tab_id);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function MediaRouteProvider_ConnectRouteByRouteId_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouteProvider_ConnectRouteByRouteId_ResponseParams.prototype.initDefaults_ = function() {
    this.route = null;
    this.error_text = null;
  };
  MediaRouteProvider_ConnectRouteByRouteId_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  MediaRouteProvider_ConnectRouteByRouteId_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, MediaRouteProvider_ConnectRouteByRouteId_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate MediaRouteProvider_ConnectRouteByRouteId_ResponseParams.route
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, MediaRoute, true);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate MediaRouteProvider_ConnectRouteByRouteId_ResponseParams.error_text
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaRouteProvider_ConnectRouteByRouteId_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  MediaRouteProvider_ConnectRouteByRouteId_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new MediaRouteProvider_ConnectRouteByRouteId_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.route = decoder.decodeStructPointer(MediaRoute);
    val.error_text = decoder.decodeStruct(codec.NullableString);
    return val;
  };

  MediaRouteProvider_ConnectRouteByRouteId_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouteProvider_ConnectRouteByRouteId_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(MediaRoute, val.route);
    encoder.encodeStruct(codec.NullableString, val.error_text);
  };
  function MediaRouteProvider_TerminateRoute_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouteProvider_TerminateRoute_Params.prototype.initDefaults_ = function() {
    this.route_id = null;
  };
  MediaRouteProvider_TerminateRoute_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  MediaRouteProvider_TerminateRoute_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, MediaRouteProvider_TerminateRoute_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate MediaRouteProvider_TerminateRoute_Params.route_id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaRouteProvider_TerminateRoute_Params.encodedSize = codec.kStructHeaderSize + 8;

  MediaRouteProvider_TerminateRoute_Params.decode = function(decoder) {
    var packed;
    var val = new MediaRouteProvider_TerminateRoute_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.route_id = decoder.decodeStruct(codec.String);
    return val;
  };

  MediaRouteProvider_TerminateRoute_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouteProvider_TerminateRoute_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.route_id);
  };
  function MediaRouteProvider_SendRouteMessage_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouteProvider_SendRouteMessage_Params.prototype.initDefaults_ = function() {
    this.media_route_id = null;
    this.message = null;
  };
  MediaRouteProvider_SendRouteMessage_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  MediaRouteProvider_SendRouteMessage_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, MediaRouteProvider_SendRouteMessage_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate MediaRouteProvider_SendRouteMessage_Params.media_route_id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate MediaRouteProvider_SendRouteMessage_Params.message
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaRouteProvider_SendRouteMessage_Params.encodedSize = codec.kStructHeaderSize + 16;

  MediaRouteProvider_SendRouteMessage_Params.decode = function(decoder) {
    var packed;
    var val = new MediaRouteProvider_SendRouteMessage_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.media_route_id = decoder.decodeStruct(codec.String);
    val.message = decoder.decodeStruct(codec.String);
    return val;
  };

  MediaRouteProvider_SendRouteMessage_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouteProvider_SendRouteMessage_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.media_route_id);
    encoder.encodeStruct(codec.String, val.message);
  };
  function MediaRouteProvider_SendRouteMessage_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouteProvider_SendRouteMessage_ResponseParams.prototype.initDefaults_ = function() {
    this.sent = false;
  };
  MediaRouteProvider_SendRouteMessage_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  MediaRouteProvider_SendRouteMessage_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, MediaRouteProvider_SendRouteMessage_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  MediaRouteProvider_SendRouteMessage_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  MediaRouteProvider_SendRouteMessage_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new MediaRouteProvider_SendRouteMessage_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.sent = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  MediaRouteProvider_SendRouteMessage_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouteProvider_SendRouteMessage_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint8, val.sent);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function MediaRouteProvider_SendRouteBinaryMessage_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouteProvider_SendRouteBinaryMessage_Params.prototype.initDefaults_ = function() {
    this.media_route_id = null;
    this.data = null;
  };
  MediaRouteProvider_SendRouteBinaryMessage_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  MediaRouteProvider_SendRouteBinaryMessage_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, MediaRouteProvider_SendRouteBinaryMessage_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate MediaRouteProvider_SendRouteBinaryMessage_Params.media_route_id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate MediaRouteProvider_SendRouteBinaryMessage_Params.data
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaRouteProvider_SendRouteBinaryMessage_Params.encodedSize = codec.kStructHeaderSize + 16;

  MediaRouteProvider_SendRouteBinaryMessage_Params.decode = function(decoder) {
    var packed;
    var val = new MediaRouteProvider_SendRouteBinaryMessage_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.media_route_id = decoder.decodeStruct(codec.String);
    val.data = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  MediaRouteProvider_SendRouteBinaryMessage_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouteProvider_SendRouteBinaryMessage_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.media_route_id);
    encoder.encodeArrayPointer(codec.Uint8, val.data);
  };
  function MediaRouteProvider_SendRouteBinaryMessage_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouteProvider_SendRouteBinaryMessage_ResponseParams.prototype.initDefaults_ = function() {
    this.sent = false;
  };
  MediaRouteProvider_SendRouteBinaryMessage_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  MediaRouteProvider_SendRouteBinaryMessage_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, MediaRouteProvider_SendRouteBinaryMessage_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  MediaRouteProvider_SendRouteBinaryMessage_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  MediaRouteProvider_SendRouteBinaryMessage_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new MediaRouteProvider_SendRouteBinaryMessage_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.sent = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  MediaRouteProvider_SendRouteBinaryMessage_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouteProvider_SendRouteBinaryMessage_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint8, val.sent);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function MediaRouteProvider_StartObservingMediaSinks_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouteProvider_StartObservingMediaSinks_Params.prototype.initDefaults_ = function() {
    this.media_source = null;
  };
  MediaRouteProvider_StartObservingMediaSinks_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  MediaRouteProvider_StartObservingMediaSinks_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, MediaRouteProvider_StartObservingMediaSinks_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate MediaRouteProvider_StartObservingMediaSinks_Params.media_source
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaRouteProvider_StartObservingMediaSinks_Params.encodedSize = codec.kStructHeaderSize + 8;

  MediaRouteProvider_StartObservingMediaSinks_Params.decode = function(decoder) {
    var packed;
    var val = new MediaRouteProvider_StartObservingMediaSinks_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.media_source = decoder.decodeStruct(codec.String);
    return val;
  };

  MediaRouteProvider_StartObservingMediaSinks_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouteProvider_StartObservingMediaSinks_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.media_source);
  };
  function MediaRouteProvider_StopObservingMediaSinks_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouteProvider_StopObservingMediaSinks_Params.prototype.initDefaults_ = function() {
    this.media_source = null;
  };
  MediaRouteProvider_StopObservingMediaSinks_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  MediaRouteProvider_StopObservingMediaSinks_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, MediaRouteProvider_StopObservingMediaSinks_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate MediaRouteProvider_StopObservingMediaSinks_Params.media_source
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaRouteProvider_StopObservingMediaSinks_Params.encodedSize = codec.kStructHeaderSize + 8;

  MediaRouteProvider_StopObservingMediaSinks_Params.decode = function(decoder) {
    var packed;
    var val = new MediaRouteProvider_StopObservingMediaSinks_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.media_source = decoder.decodeStruct(codec.String);
    return val;
  };

  MediaRouteProvider_StopObservingMediaSinks_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouteProvider_StopObservingMediaSinks_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.media_source);
  };
  function MediaRouteProvider_StartObservingMediaRoutes_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouteProvider_StartObservingMediaRoutes_Params.prototype.initDefaults_ = function() {
    this.media_source = null;
  };
  MediaRouteProvider_StartObservingMediaRoutes_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  MediaRouteProvider_StartObservingMediaRoutes_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, MediaRouteProvider_StartObservingMediaRoutes_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate MediaRouteProvider_StartObservingMediaRoutes_Params.media_source
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaRouteProvider_StartObservingMediaRoutes_Params.encodedSize = codec.kStructHeaderSize + 8;

  MediaRouteProvider_StartObservingMediaRoutes_Params.decode = function(decoder) {
    var packed;
    var val = new MediaRouteProvider_StartObservingMediaRoutes_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.media_source = decoder.decodeStruct(codec.String);
    return val;
  };

  MediaRouteProvider_StartObservingMediaRoutes_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouteProvider_StartObservingMediaRoutes_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.media_source);
  };
  function MediaRouteProvider_StopObservingMediaRoutes_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouteProvider_StopObservingMediaRoutes_Params.prototype.initDefaults_ = function() {
    this.media_source = null;
  };
  MediaRouteProvider_StopObservingMediaRoutes_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  MediaRouteProvider_StopObservingMediaRoutes_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, MediaRouteProvider_StopObservingMediaRoutes_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate MediaRouteProvider_StopObservingMediaRoutes_Params.media_source
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaRouteProvider_StopObservingMediaRoutes_Params.encodedSize = codec.kStructHeaderSize + 8;

  MediaRouteProvider_StopObservingMediaRoutes_Params.decode = function(decoder) {
    var packed;
    var val = new MediaRouteProvider_StopObservingMediaRoutes_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.media_source = decoder.decodeStruct(codec.String);
    return val;
  };

  MediaRouteProvider_StopObservingMediaRoutes_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouteProvider_StopObservingMediaRoutes_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.media_source);
  };
  function MediaRouteProvider_ListenForRouteMessages_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouteProvider_ListenForRouteMessages_Params.prototype.initDefaults_ = function() {
    this.route_id = null;
  };
  MediaRouteProvider_ListenForRouteMessages_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  MediaRouteProvider_ListenForRouteMessages_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, MediaRouteProvider_ListenForRouteMessages_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate MediaRouteProvider_ListenForRouteMessages_Params.route_id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaRouteProvider_ListenForRouteMessages_Params.encodedSize = codec.kStructHeaderSize + 8;

  MediaRouteProvider_ListenForRouteMessages_Params.decode = function(decoder) {
    var packed;
    var val = new MediaRouteProvider_ListenForRouteMessages_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.route_id = decoder.decodeStruct(codec.String);
    return val;
  };

  MediaRouteProvider_ListenForRouteMessages_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouteProvider_ListenForRouteMessages_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.route_id);
  };
  function MediaRouteProvider_ListenForRouteMessages_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouteProvider_ListenForRouteMessages_ResponseParams.prototype.initDefaults_ = function() {
    this.messages = null;
    this.error = false;
  };
  MediaRouteProvider_ListenForRouteMessages_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  MediaRouteProvider_ListenForRouteMessages_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, MediaRouteProvider_ListenForRouteMessages_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate MediaRouteProvider_ListenForRouteMessages_ResponseParams.messages
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(RouteMessage), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  MediaRouteProvider_ListenForRouteMessages_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  MediaRouteProvider_ListenForRouteMessages_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new MediaRouteProvider_ListenForRouteMessages_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.messages = decoder.decodeArrayPointer(new codec.PointerTo(RouteMessage));
    val.error = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  MediaRouteProvider_ListenForRouteMessages_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouteProvider_ListenForRouteMessages_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(RouteMessage), val.messages);
    encoder.encodeStruct(codec.Uint8, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function MediaRouteProvider_StopListeningForRouteMessages_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouteProvider_StopListeningForRouteMessages_Params.prototype.initDefaults_ = function() {
    this.route_id = null;
  };
  MediaRouteProvider_StopListeningForRouteMessages_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  MediaRouteProvider_StopListeningForRouteMessages_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, MediaRouteProvider_StopListeningForRouteMessages_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate MediaRouteProvider_StopListeningForRouteMessages_Params.route_id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaRouteProvider_StopListeningForRouteMessages_Params.encodedSize = codec.kStructHeaderSize + 8;

  MediaRouteProvider_StopListeningForRouteMessages_Params.decode = function(decoder) {
    var packed;
    var val = new MediaRouteProvider_StopListeningForRouteMessages_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.route_id = decoder.decodeStruct(codec.String);
    return val;
  };

  MediaRouteProvider_StopListeningForRouteMessages_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouteProvider_StopListeningForRouteMessages_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.route_id);
  };
  function MediaRouteProvider_DetachRoute_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouteProvider_DetachRoute_Params.prototype.initDefaults_ = function() {
    this.route_id = null;
  };
  MediaRouteProvider_DetachRoute_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  MediaRouteProvider_DetachRoute_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, MediaRouteProvider_DetachRoute_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate MediaRouteProvider_DetachRoute_Params.route_id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaRouteProvider_DetachRoute_Params.encodedSize = codec.kStructHeaderSize + 8;

  MediaRouteProvider_DetachRoute_Params.decode = function(decoder) {
    var packed;
    var val = new MediaRouteProvider_DetachRoute_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.route_id = decoder.decodeStruct(codec.String);
    return val;
  };

  MediaRouteProvider_DetachRoute_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouteProvider_DetachRoute_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.route_id);
  };
  function MediaRouter_RegisterMediaRouteProvider_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouter_RegisterMediaRouteProvider_Params.prototype.initDefaults_ = function() {
    this.media_router_provider = null;
  };
  MediaRouter_RegisterMediaRouteProvider_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  MediaRouter_RegisterMediaRouteProvider_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, MediaRouter_RegisterMediaRouteProvider_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate MediaRouter_RegisterMediaRouteProvider_Params.media_router_provider
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaRouter_RegisterMediaRouteProvider_Params.encodedSize = codec.kStructHeaderSize + 8;

  MediaRouter_RegisterMediaRouteProvider_Params.decode = function(decoder) {
    var packed;
    var val = new MediaRouter_RegisterMediaRouteProvider_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.media_router_provider = decoder.decodeStruct(codec.Interface);
    return val;
  };

  MediaRouter_RegisterMediaRouteProvider_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouter_RegisterMediaRouteProvider_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Interface, val.media_router_provider);
  };
  function MediaRouter_RegisterMediaRouteProvider_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouter_RegisterMediaRouteProvider_ResponseParams.prototype.initDefaults_ = function() {
    this.instance_id = null;
  };
  MediaRouter_RegisterMediaRouteProvider_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  MediaRouter_RegisterMediaRouteProvider_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, MediaRouter_RegisterMediaRouteProvider_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate MediaRouter_RegisterMediaRouteProvider_ResponseParams.instance_id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaRouter_RegisterMediaRouteProvider_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  MediaRouter_RegisterMediaRouteProvider_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new MediaRouter_RegisterMediaRouteProvider_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.instance_id = decoder.decodeStruct(codec.String);
    return val;
  };

  MediaRouter_RegisterMediaRouteProvider_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouter_RegisterMediaRouteProvider_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.instance_id);
  };
  function MediaRouter_OnSinksReceived_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouter_OnSinksReceived_Params.prototype.initDefaults_ = function() {
    this.media_source = null;
    this.sinks = null;
  };
  MediaRouter_OnSinksReceived_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  MediaRouter_OnSinksReceived_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, MediaRouter_OnSinksReceived_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate MediaRouter_OnSinksReceived_Params.media_source
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate MediaRouter_OnSinksReceived_Params.sinks
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(MediaSink), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaRouter_OnSinksReceived_Params.encodedSize = codec.kStructHeaderSize + 16;

  MediaRouter_OnSinksReceived_Params.decode = function(decoder) {
    var packed;
    var val = new MediaRouter_OnSinksReceived_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.media_source = decoder.decodeStruct(codec.String);
    val.sinks = decoder.decodeArrayPointer(new codec.PointerTo(MediaSink));
    return val;
  };

  MediaRouter_OnSinksReceived_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouter_OnSinksReceived_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.media_source);
    encoder.encodeArrayPointer(new codec.PointerTo(MediaSink), val.sinks);
  };
  function MediaRouter_OnIssue_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouter_OnIssue_Params.prototype.initDefaults_ = function() {
    this.issue = null;
  };
  MediaRouter_OnIssue_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  MediaRouter_OnIssue_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, MediaRouter_OnIssue_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate MediaRouter_OnIssue_Params.issue
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, Issue, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaRouter_OnIssue_Params.encodedSize = codec.kStructHeaderSize + 8;

  MediaRouter_OnIssue_Params.decode = function(decoder) {
    var packed;
    var val = new MediaRouter_OnIssue_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.issue = decoder.decodeStructPointer(Issue);
    return val;
  };

  MediaRouter_OnIssue_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouter_OnIssue_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(Issue, val.issue);
  };
  function MediaRouter_OnRoutesUpdated_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouter_OnRoutesUpdated_Params.prototype.initDefaults_ = function() {
    this.routes = null;
    this.media_source = null;
    this.joinable_route_ids = null;
  };
  MediaRouter_OnRoutesUpdated_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  MediaRouter_OnRoutesUpdated_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, MediaRouter_OnRoutesUpdated_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate MediaRouter_OnRoutesUpdated_Params.routes
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(MediaRoute), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate MediaRouter_OnRoutesUpdated_Params.media_source
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate MediaRouter_OnRoutesUpdated_Params.joinable_route_ids
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, codec.String, false, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaRouter_OnRoutesUpdated_Params.encodedSize = codec.kStructHeaderSize + 24;

  MediaRouter_OnRoutesUpdated_Params.decode = function(decoder) {
    var packed;
    var val = new MediaRouter_OnRoutesUpdated_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.routes = decoder.decodeArrayPointer(new codec.PointerTo(MediaRoute));
    val.media_source = decoder.decodeStruct(codec.String);
    val.joinable_route_ids = decoder.decodeArrayPointer(codec.String);
    return val;
  };

  MediaRouter_OnRoutesUpdated_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouter_OnRoutesUpdated_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(MediaRoute), val.routes);
    encoder.encodeStruct(codec.String, val.media_source);
    encoder.encodeArrayPointer(codec.String, val.joinable_route_ids);
  };
  function MediaRouter_OnSinkAvailabilityUpdated_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouter_OnSinkAvailabilityUpdated_Params.prototype.initDefaults_ = function() {
    this.availability = 0;
  };
  MediaRouter_OnSinkAvailabilityUpdated_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  MediaRouter_OnSinkAvailabilityUpdated_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, MediaRouter_OnSinkAvailabilityUpdated_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  MediaRouter_OnSinkAvailabilityUpdated_Params.encodedSize = codec.kStructHeaderSize + 8;

  MediaRouter_OnSinkAvailabilityUpdated_Params.decode = function(decoder) {
    var packed;
    var val = new MediaRouter_OnSinkAvailabilityUpdated_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.availability = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  MediaRouter_OnSinkAvailabilityUpdated_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouter_OnSinkAvailabilityUpdated_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.availability);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function MediaRouter_OnPresentationConnectionStateChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouter_OnPresentationConnectionStateChanged_Params.prototype.initDefaults_ = function() {
    this.route_id = null;
    this.state = 0;
  };
  MediaRouter_OnPresentationConnectionStateChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  MediaRouter_OnPresentationConnectionStateChanged_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, MediaRouter_OnPresentationConnectionStateChanged_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate MediaRouter_OnPresentationConnectionStateChanged_Params.route_id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  MediaRouter_OnPresentationConnectionStateChanged_Params.encodedSize = codec.kStructHeaderSize + 16;

  MediaRouter_OnPresentationConnectionStateChanged_Params.decode = function(decoder) {
    var packed;
    var val = new MediaRouter_OnPresentationConnectionStateChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.route_id = decoder.decodeStruct(codec.String);
    val.state = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  MediaRouter_OnPresentationConnectionStateChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouter_OnPresentationConnectionStateChanged_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.route_id);
    encoder.encodeStruct(codec.Int32, val.state);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kMediaRouteProvider_CreateRoute_Name = 0;
  var kMediaRouteProvider_JoinRoute_Name = 1;
  var kMediaRouteProvider_ConnectRouteByRouteId_Name = 2;
  var kMediaRouteProvider_TerminateRoute_Name = 3;
  var kMediaRouteProvider_SendRouteMessage_Name = 4;
  var kMediaRouteProvider_SendRouteBinaryMessage_Name = 5;
  var kMediaRouteProvider_StartObservingMediaSinks_Name = 6;
  var kMediaRouteProvider_StopObservingMediaSinks_Name = 7;
  var kMediaRouteProvider_StartObservingMediaRoutes_Name = 8;
  var kMediaRouteProvider_StopObservingMediaRoutes_Name = 9;
  var kMediaRouteProvider_ListenForRouteMessages_Name = 10;
  var kMediaRouteProvider_StopListeningForRouteMessages_Name = 11;
  var kMediaRouteProvider_DetachRoute_Name = 12;

  function MediaRouteProviderProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  MediaRouteProviderProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  MediaRouteProviderProxy.prototype.createRoute = function(media_source, sink_id, original_presentation_id, origin, tab_id) {
    var params = new MediaRouteProvider_CreateRoute_Params();
    params.media_source = media_source;
    params.sink_id = sink_id;
    params.original_presentation_id = original_presentation_id;
    params.origin = origin;
    params.tab_id = tab_id;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kMediaRouteProvider_CreateRoute_Name,
          codec.align(MediaRouteProvider_CreateRoute_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(MediaRouteProvider_CreateRoute_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(MediaRouteProvider_CreateRoute_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  MediaRouteProviderProxy.prototype.joinRoute = function(media_source, presentation_id, origin, tab_id) {
    var params = new MediaRouteProvider_JoinRoute_Params();
    params.media_source = media_source;
    params.presentation_id = presentation_id;
    params.origin = origin;
    params.tab_id = tab_id;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kMediaRouteProvider_JoinRoute_Name,
          codec.align(MediaRouteProvider_JoinRoute_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(MediaRouteProvider_JoinRoute_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(MediaRouteProvider_JoinRoute_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  MediaRouteProviderProxy.prototype.connectRouteByRouteId = function(media_source, route_id, presentation_id, origin, tab_id) {
    var params = new MediaRouteProvider_ConnectRouteByRouteId_Params();
    params.media_source = media_source;
    params.route_id = route_id;
    params.presentation_id = presentation_id;
    params.origin = origin;
    params.tab_id = tab_id;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kMediaRouteProvider_ConnectRouteByRouteId_Name,
          codec.align(MediaRouteProvider_ConnectRouteByRouteId_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(MediaRouteProvider_ConnectRouteByRouteId_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(MediaRouteProvider_ConnectRouteByRouteId_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  MediaRouteProviderProxy.prototype.terminateRoute = function(route_id) {
    var params = new MediaRouteProvider_TerminateRoute_Params();
    params.route_id = route_id;
    var builder = new codec.MessageBuilder(
        kMediaRouteProvider_TerminateRoute_Name,
        codec.align(MediaRouteProvider_TerminateRoute_Params.encodedSize));
    builder.encodeStruct(MediaRouteProvider_TerminateRoute_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  MediaRouteProviderProxy.prototype.sendRouteMessage = function(media_route_id, message) {
    var params = new MediaRouteProvider_SendRouteMessage_Params();
    params.media_route_id = media_route_id;
    params.message = message;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kMediaRouteProvider_SendRouteMessage_Name,
          codec.align(MediaRouteProvider_SendRouteMessage_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(MediaRouteProvider_SendRouteMessage_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(MediaRouteProvider_SendRouteMessage_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  MediaRouteProviderProxy.prototype.sendRouteBinaryMessage = function(media_route_id, data) {
    var params = new MediaRouteProvider_SendRouteBinaryMessage_Params();
    params.media_route_id = media_route_id;
    params.data = data;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kMediaRouteProvider_SendRouteBinaryMessage_Name,
          codec.align(MediaRouteProvider_SendRouteBinaryMessage_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(MediaRouteProvider_SendRouteBinaryMessage_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(MediaRouteProvider_SendRouteBinaryMessage_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  MediaRouteProviderProxy.prototype.startObservingMediaSinks = function(media_source) {
    var params = new MediaRouteProvider_StartObservingMediaSinks_Params();
    params.media_source = media_source;
    var builder = new codec.MessageBuilder(
        kMediaRouteProvider_StartObservingMediaSinks_Name,
        codec.align(MediaRouteProvider_StartObservingMediaSinks_Params.encodedSize));
    builder.encodeStruct(MediaRouteProvider_StartObservingMediaSinks_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  MediaRouteProviderProxy.prototype.stopObservingMediaSinks = function(media_source) {
    var params = new MediaRouteProvider_StopObservingMediaSinks_Params();
    params.media_source = media_source;
    var builder = new codec.MessageBuilder(
        kMediaRouteProvider_StopObservingMediaSinks_Name,
        codec.align(MediaRouteProvider_StopObservingMediaSinks_Params.encodedSize));
    builder.encodeStruct(MediaRouteProvider_StopObservingMediaSinks_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  MediaRouteProviderProxy.prototype.startObservingMediaRoutes = function(media_source) {
    var params = new MediaRouteProvider_StartObservingMediaRoutes_Params();
    params.media_source = media_source;
    var builder = new codec.MessageBuilder(
        kMediaRouteProvider_StartObservingMediaRoutes_Name,
        codec.align(MediaRouteProvider_StartObservingMediaRoutes_Params.encodedSize));
    builder.encodeStruct(MediaRouteProvider_StartObservingMediaRoutes_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  MediaRouteProviderProxy.prototype.stopObservingMediaRoutes = function(media_source) {
    var params = new MediaRouteProvider_StopObservingMediaRoutes_Params();
    params.media_source = media_source;
    var builder = new codec.MessageBuilder(
        kMediaRouteProvider_StopObservingMediaRoutes_Name,
        codec.align(MediaRouteProvider_StopObservingMediaRoutes_Params.encodedSize));
    builder.encodeStruct(MediaRouteProvider_StopObservingMediaRoutes_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  MediaRouteProviderProxy.prototype.listenForRouteMessages = function(route_id) {
    var params = new MediaRouteProvider_ListenForRouteMessages_Params();
    params.route_id = route_id;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kMediaRouteProvider_ListenForRouteMessages_Name,
          codec.align(MediaRouteProvider_ListenForRouteMessages_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(MediaRouteProvider_ListenForRouteMessages_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(MediaRouteProvider_ListenForRouteMessages_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  MediaRouteProviderProxy.prototype.stopListeningForRouteMessages = function(route_id) {
    var params = new MediaRouteProvider_StopListeningForRouteMessages_Params();
    params.route_id = route_id;
    var builder = new codec.MessageBuilder(
        kMediaRouteProvider_StopListeningForRouteMessages_Name,
        codec.align(MediaRouteProvider_StopListeningForRouteMessages_Params.encodedSize));
    builder.encodeStruct(MediaRouteProvider_StopListeningForRouteMessages_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  MediaRouteProviderProxy.prototype.detachRoute = function(route_id) {
    var params = new MediaRouteProvider_DetachRoute_Params();
    params.route_id = route_id;
    var builder = new codec.MessageBuilder(
        kMediaRouteProvider_DetachRoute_Name,
        codec.align(MediaRouteProvider_DetachRoute_Params.encodedSize));
    builder.encodeStruct(MediaRouteProvider_DetachRoute_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function MediaRouteProviderStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  MediaRouteProviderStub.prototype = Object.create(bindings.StubBase.prototype);
  MediaRouteProviderStub.prototype.createRoute = function(media_source, sink_id, original_presentation_id, origin, tab_id) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.createRoute && bindings.StubBindings(this).delegate.createRoute(media_source, sink_id, original_presentation_id, origin, tab_id);
  }
  MediaRouteProviderStub.prototype.joinRoute = function(media_source, presentation_id, origin, tab_id) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.joinRoute && bindings.StubBindings(this).delegate.joinRoute(media_source, presentation_id, origin, tab_id);
  }
  MediaRouteProviderStub.prototype.connectRouteByRouteId = function(media_source, route_id, presentation_id, origin, tab_id) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.connectRouteByRouteId && bindings.StubBindings(this).delegate.connectRouteByRouteId(media_source, route_id, presentation_id, origin, tab_id);
  }
  MediaRouteProviderStub.prototype.terminateRoute = function(route_id) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.terminateRoute && bindings.StubBindings(this).delegate.terminateRoute(route_id);
  }
  MediaRouteProviderStub.prototype.sendRouteMessage = function(media_route_id, message) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.sendRouteMessage && bindings.StubBindings(this).delegate.sendRouteMessage(media_route_id, message);
  }
  MediaRouteProviderStub.prototype.sendRouteBinaryMessage = function(media_route_id, data) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.sendRouteBinaryMessage && bindings.StubBindings(this).delegate.sendRouteBinaryMessage(media_route_id, data);
  }
  MediaRouteProviderStub.prototype.startObservingMediaSinks = function(media_source) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.startObservingMediaSinks && bindings.StubBindings(this).delegate.startObservingMediaSinks(media_source);
  }
  MediaRouteProviderStub.prototype.stopObservingMediaSinks = function(media_source) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.stopObservingMediaSinks && bindings.StubBindings(this).delegate.stopObservingMediaSinks(media_source);
  }
  MediaRouteProviderStub.prototype.startObservingMediaRoutes = function(media_source) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.startObservingMediaRoutes && bindings.StubBindings(this).delegate.startObservingMediaRoutes(media_source);
  }
  MediaRouteProviderStub.prototype.stopObservingMediaRoutes = function(media_source) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.stopObservingMediaRoutes && bindings.StubBindings(this).delegate.stopObservingMediaRoutes(media_source);
  }
  MediaRouteProviderStub.prototype.listenForRouteMessages = function(route_id) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.listenForRouteMessages && bindings.StubBindings(this).delegate.listenForRouteMessages(route_id);
  }
  MediaRouteProviderStub.prototype.stopListeningForRouteMessages = function(route_id) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.stopListeningForRouteMessages && bindings.StubBindings(this).delegate.stopListeningForRouteMessages(route_id);
  }
  MediaRouteProviderStub.prototype.detachRoute = function(route_id) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.detachRoute && bindings.StubBindings(this).delegate.detachRoute(route_id);
  }

  MediaRouteProviderStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kMediaRouteProvider_TerminateRoute_Name:
      var params = reader.decodeStruct(MediaRouteProvider_TerminateRoute_Params);
      this.terminateRoute(params.route_id);
      return true;
    case kMediaRouteProvider_StartObservingMediaSinks_Name:
      var params = reader.decodeStruct(MediaRouteProvider_StartObservingMediaSinks_Params);
      this.startObservingMediaSinks(params.media_source);
      return true;
    case kMediaRouteProvider_StopObservingMediaSinks_Name:
      var params = reader.decodeStruct(MediaRouteProvider_StopObservingMediaSinks_Params);
      this.stopObservingMediaSinks(params.media_source);
      return true;
    case kMediaRouteProvider_StartObservingMediaRoutes_Name:
      var params = reader.decodeStruct(MediaRouteProvider_StartObservingMediaRoutes_Params);
      this.startObservingMediaRoutes(params.media_source);
      return true;
    case kMediaRouteProvider_StopObservingMediaRoutes_Name:
      var params = reader.decodeStruct(MediaRouteProvider_StopObservingMediaRoutes_Params);
      this.stopObservingMediaRoutes(params.media_source);
      return true;
    case kMediaRouteProvider_StopListeningForRouteMessages_Name:
      var params = reader.decodeStruct(MediaRouteProvider_StopListeningForRouteMessages_Params);
      this.stopListeningForRouteMessages(params.route_id);
      return true;
    case kMediaRouteProvider_DetachRoute_Name:
      var params = reader.decodeStruct(MediaRouteProvider_DetachRoute_Params);
      this.detachRoute(params.route_id);
      return true;
    default:
      return false;
    }
  };

  MediaRouteProviderStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kMediaRouteProvider_CreateRoute_Name:
      var params = reader.decodeStruct(MediaRouteProvider_CreateRoute_Params);
      return this.createRoute(params.media_source, params.sink_id, params.original_presentation_id, params.origin, params.tab_id).then(function(response) {
        var responseParams =
            new MediaRouteProvider_CreateRoute_ResponseParams();
        responseParams.route = response.route;
        responseParams.error_text = response.error_text;
        var builder = new codec.MessageWithRequestIDBuilder(
            kMediaRouteProvider_CreateRoute_Name,
            codec.align(MediaRouteProvider_CreateRoute_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(MediaRouteProvider_CreateRoute_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kMediaRouteProvider_JoinRoute_Name:
      var params = reader.decodeStruct(MediaRouteProvider_JoinRoute_Params);
      return this.joinRoute(params.media_source, params.presentation_id, params.origin, params.tab_id).then(function(response) {
        var responseParams =
            new MediaRouteProvider_JoinRoute_ResponseParams();
        responseParams.route = response.route;
        responseParams.error_text = response.error_text;
        var builder = new codec.MessageWithRequestIDBuilder(
            kMediaRouteProvider_JoinRoute_Name,
            codec.align(MediaRouteProvider_JoinRoute_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(MediaRouteProvider_JoinRoute_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kMediaRouteProvider_ConnectRouteByRouteId_Name:
      var params = reader.decodeStruct(MediaRouteProvider_ConnectRouteByRouteId_Params);
      return this.connectRouteByRouteId(params.media_source, params.route_id, params.presentation_id, params.origin, params.tab_id).then(function(response) {
        var responseParams =
            new MediaRouteProvider_ConnectRouteByRouteId_ResponseParams();
        responseParams.route = response.route;
        responseParams.error_text = response.error_text;
        var builder = new codec.MessageWithRequestIDBuilder(
            kMediaRouteProvider_ConnectRouteByRouteId_Name,
            codec.align(MediaRouteProvider_ConnectRouteByRouteId_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(MediaRouteProvider_ConnectRouteByRouteId_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kMediaRouteProvider_SendRouteMessage_Name:
      var params = reader.decodeStruct(MediaRouteProvider_SendRouteMessage_Params);
      return this.sendRouteMessage(params.media_route_id, params.message).then(function(response) {
        var responseParams =
            new MediaRouteProvider_SendRouteMessage_ResponseParams();
        responseParams.sent = response.sent;
        var builder = new codec.MessageWithRequestIDBuilder(
            kMediaRouteProvider_SendRouteMessage_Name,
            codec.align(MediaRouteProvider_SendRouteMessage_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(MediaRouteProvider_SendRouteMessage_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kMediaRouteProvider_SendRouteBinaryMessage_Name:
      var params = reader.decodeStruct(MediaRouteProvider_SendRouteBinaryMessage_Params);
      return this.sendRouteBinaryMessage(params.media_route_id, params.data).then(function(response) {
        var responseParams =
            new MediaRouteProvider_SendRouteBinaryMessage_ResponseParams();
        responseParams.sent = response.sent;
        var builder = new codec.MessageWithRequestIDBuilder(
            kMediaRouteProvider_SendRouteBinaryMessage_Name,
            codec.align(MediaRouteProvider_SendRouteBinaryMessage_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(MediaRouteProvider_SendRouteBinaryMessage_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kMediaRouteProvider_ListenForRouteMessages_Name:
      var params = reader.decodeStruct(MediaRouteProvider_ListenForRouteMessages_Params);
      return this.listenForRouteMessages(params.route_id).then(function(response) {
        var responseParams =
            new MediaRouteProvider_ListenForRouteMessages_ResponseParams();
        responseParams.messages = response.messages;
        responseParams.error = response.error;
        var builder = new codec.MessageWithRequestIDBuilder(
            kMediaRouteProvider_ListenForRouteMessages_Name,
            codec.align(MediaRouteProvider_ListenForRouteMessages_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(MediaRouteProvider_ListenForRouteMessages_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateMediaRouteProviderRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kMediaRouteProvider_CreateRoute_Name:
        if (message.expectsResponse())
          paramsClass = MediaRouteProvider_CreateRoute_Params;
      break;
      case kMediaRouteProvider_JoinRoute_Name:
        if (message.expectsResponse())
          paramsClass = MediaRouteProvider_JoinRoute_Params;
      break;
      case kMediaRouteProvider_ConnectRouteByRouteId_Name:
        if (message.expectsResponse())
          paramsClass = MediaRouteProvider_ConnectRouteByRouteId_Params;
      break;
      case kMediaRouteProvider_TerminateRoute_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MediaRouteProvider_TerminateRoute_Params;
      break;
      case kMediaRouteProvider_SendRouteMessage_Name:
        if (message.expectsResponse())
          paramsClass = MediaRouteProvider_SendRouteMessage_Params;
      break;
      case kMediaRouteProvider_SendRouteBinaryMessage_Name:
        if (message.expectsResponse())
          paramsClass = MediaRouteProvider_SendRouteBinaryMessage_Params;
      break;
      case kMediaRouteProvider_StartObservingMediaSinks_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MediaRouteProvider_StartObservingMediaSinks_Params;
      break;
      case kMediaRouteProvider_StopObservingMediaSinks_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MediaRouteProvider_StopObservingMediaSinks_Params;
      break;
      case kMediaRouteProvider_StartObservingMediaRoutes_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MediaRouteProvider_StartObservingMediaRoutes_Params;
      break;
      case kMediaRouteProvider_StopObservingMediaRoutes_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MediaRouteProvider_StopObservingMediaRoutes_Params;
      break;
      case kMediaRouteProvider_ListenForRouteMessages_Name:
        if (message.expectsResponse())
          paramsClass = MediaRouteProvider_ListenForRouteMessages_Params;
      break;
      case kMediaRouteProvider_StopListeningForRouteMessages_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MediaRouteProvider_StopListeningForRouteMessages_Params;
      break;
      case kMediaRouteProvider_DetachRoute_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MediaRouteProvider_DetachRoute_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateMediaRouteProviderResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kMediaRouteProvider_CreateRoute_Name:
        if (message.isResponse())
          paramsClass = MediaRouteProvider_CreateRoute_ResponseParams;
        break;
      case kMediaRouteProvider_JoinRoute_Name:
        if (message.isResponse())
          paramsClass = MediaRouteProvider_JoinRoute_ResponseParams;
        break;
      case kMediaRouteProvider_ConnectRouteByRouteId_Name:
        if (message.isResponse())
          paramsClass = MediaRouteProvider_ConnectRouteByRouteId_ResponseParams;
        break;
      case kMediaRouteProvider_SendRouteMessage_Name:
        if (message.isResponse())
          paramsClass = MediaRouteProvider_SendRouteMessage_ResponseParams;
        break;
      case kMediaRouteProvider_SendRouteBinaryMessage_Name:
        if (message.isResponse())
          paramsClass = MediaRouteProvider_SendRouteBinaryMessage_ResponseParams;
        break;
      case kMediaRouteProvider_ListenForRouteMessages_Name:
        if (message.isResponse())
          paramsClass = MediaRouteProvider_ListenForRouteMessages_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var MediaRouteProvider = {
    name: 'media_router::interfaces::MediaRouteProvider',
    proxyClass: MediaRouteProviderProxy,
    stubClass: MediaRouteProviderStub,
    validateRequest: validateMediaRouteProviderRequest,
    validateResponse: validateMediaRouteProviderResponse,
  };
  MediaRouteProviderStub.prototype.validator = validateMediaRouteProviderRequest;
  MediaRouteProviderProxy.prototype.validator = validateMediaRouteProviderResponse;
  var kMediaRouter_RegisterMediaRouteProvider_Name = 0;
  var kMediaRouter_OnSinksReceived_Name = 1;
  var kMediaRouter_OnIssue_Name = 2;
  var kMediaRouter_OnRoutesUpdated_Name = 3;
  var kMediaRouter_OnSinkAvailabilityUpdated_Name = 4;
  var kMediaRouter_OnPresentationConnectionStateChanged_Name = 5;

  function MediaRouterProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  MediaRouterProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  MediaRouterProxy.prototype.registerMediaRouteProvider = function(media_router_provider) {
    var params = new MediaRouter_RegisterMediaRouteProvider_Params();
    params.media_router_provider = core.isHandle(media_router_provider) ? media_router_provider : connection.bindImpl(media_router_provider, MediaRouteProvider);
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kMediaRouter_RegisterMediaRouteProvider_Name,
          codec.align(MediaRouter_RegisterMediaRouteProvider_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(MediaRouter_RegisterMediaRouteProvider_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(MediaRouter_RegisterMediaRouteProvider_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  MediaRouterProxy.prototype.onSinksReceived = function(media_source, sinks) {
    var params = new MediaRouter_OnSinksReceived_Params();
    params.media_source = media_source;
    params.sinks = sinks;
    var builder = new codec.MessageBuilder(
        kMediaRouter_OnSinksReceived_Name,
        codec.align(MediaRouter_OnSinksReceived_Params.encodedSize));
    builder.encodeStruct(MediaRouter_OnSinksReceived_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  MediaRouterProxy.prototype.onIssue = function(issue) {
    var params = new MediaRouter_OnIssue_Params();
    params.issue = issue;
    var builder = new codec.MessageBuilder(
        kMediaRouter_OnIssue_Name,
        codec.align(MediaRouter_OnIssue_Params.encodedSize));
    builder.encodeStruct(MediaRouter_OnIssue_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  MediaRouterProxy.prototype.onRoutesUpdated = function(routes, media_source, joinable_route_ids) {
    var params = new MediaRouter_OnRoutesUpdated_Params();
    params.routes = routes;
    params.media_source = media_source;
    params.joinable_route_ids = joinable_route_ids;
    var builder = new codec.MessageBuilder(
        kMediaRouter_OnRoutesUpdated_Name,
        codec.align(MediaRouter_OnRoutesUpdated_Params.encodedSize));
    builder.encodeStruct(MediaRouter_OnRoutesUpdated_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  MediaRouterProxy.prototype.onSinkAvailabilityUpdated = function(availability) {
    var params = new MediaRouter_OnSinkAvailabilityUpdated_Params();
    params.availability = availability;
    var builder = new codec.MessageBuilder(
        kMediaRouter_OnSinkAvailabilityUpdated_Name,
        codec.align(MediaRouter_OnSinkAvailabilityUpdated_Params.encodedSize));
    builder.encodeStruct(MediaRouter_OnSinkAvailabilityUpdated_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  MediaRouterProxy.prototype.onPresentationConnectionStateChanged = function(route_id, state) {
    var params = new MediaRouter_OnPresentationConnectionStateChanged_Params();
    params.route_id = route_id;
    params.state = state;
    var builder = new codec.MessageBuilder(
        kMediaRouter_OnPresentationConnectionStateChanged_Name,
        codec.align(MediaRouter_OnPresentationConnectionStateChanged_Params.encodedSize));
    builder.encodeStruct(MediaRouter_OnPresentationConnectionStateChanged_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function MediaRouterStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  MediaRouterStub.prototype = Object.create(bindings.StubBase.prototype);
  MediaRouterStub.prototype.registerMediaRouteProvider = function(media_router_provider) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.registerMediaRouteProvider && bindings.StubBindings(this).delegate.registerMediaRouteProvider(connection.bindHandleToProxy(media_router_provider, MediaRouteProvider));
  }
  MediaRouterStub.prototype.onSinksReceived = function(media_source, sinks) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onSinksReceived && bindings.StubBindings(this).delegate.onSinksReceived(media_source, sinks);
  }
  MediaRouterStub.prototype.onIssue = function(issue) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onIssue && bindings.StubBindings(this).delegate.onIssue(issue);
  }
  MediaRouterStub.prototype.onRoutesUpdated = function(routes, media_source, joinable_route_ids) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onRoutesUpdated && bindings.StubBindings(this).delegate.onRoutesUpdated(routes, media_source, joinable_route_ids);
  }
  MediaRouterStub.prototype.onSinkAvailabilityUpdated = function(availability) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onSinkAvailabilityUpdated && bindings.StubBindings(this).delegate.onSinkAvailabilityUpdated(availability);
  }
  MediaRouterStub.prototype.onPresentationConnectionStateChanged = function(route_id, state) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onPresentationConnectionStateChanged && bindings.StubBindings(this).delegate.onPresentationConnectionStateChanged(route_id, state);
  }

  MediaRouterStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kMediaRouter_OnSinksReceived_Name:
      var params = reader.decodeStruct(MediaRouter_OnSinksReceived_Params);
      this.onSinksReceived(params.media_source, params.sinks);
      return true;
    case kMediaRouter_OnIssue_Name:
      var params = reader.decodeStruct(MediaRouter_OnIssue_Params);
      this.onIssue(params.issue);
      return true;
    case kMediaRouter_OnRoutesUpdated_Name:
      var params = reader.decodeStruct(MediaRouter_OnRoutesUpdated_Params);
      this.onRoutesUpdated(params.routes, params.media_source, params.joinable_route_ids);
      return true;
    case kMediaRouter_OnSinkAvailabilityUpdated_Name:
      var params = reader.decodeStruct(MediaRouter_OnSinkAvailabilityUpdated_Params);
      this.onSinkAvailabilityUpdated(params.availability);
      return true;
    case kMediaRouter_OnPresentationConnectionStateChanged_Name:
      var params = reader.decodeStruct(MediaRouter_OnPresentationConnectionStateChanged_Params);
      this.onPresentationConnectionStateChanged(params.route_id, params.state);
      return true;
    default:
      return false;
    }
  };

  MediaRouterStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kMediaRouter_RegisterMediaRouteProvider_Name:
      var params = reader.decodeStruct(MediaRouter_RegisterMediaRouteProvider_Params);
      return this.registerMediaRouteProvider(params.media_router_provider).then(function(response) {
        var responseParams =
            new MediaRouter_RegisterMediaRouteProvider_ResponseParams();
        responseParams.instance_id = response.instance_id;
        var builder = new codec.MessageWithRequestIDBuilder(
            kMediaRouter_RegisterMediaRouteProvider_Name,
            codec.align(MediaRouter_RegisterMediaRouteProvider_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(MediaRouter_RegisterMediaRouteProvider_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateMediaRouterRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kMediaRouter_RegisterMediaRouteProvider_Name:
        if (message.expectsResponse())
          paramsClass = MediaRouter_RegisterMediaRouteProvider_Params;
      break;
      case kMediaRouter_OnSinksReceived_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MediaRouter_OnSinksReceived_Params;
      break;
      case kMediaRouter_OnIssue_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MediaRouter_OnIssue_Params;
      break;
      case kMediaRouter_OnRoutesUpdated_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MediaRouter_OnRoutesUpdated_Params;
      break;
      case kMediaRouter_OnSinkAvailabilityUpdated_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MediaRouter_OnSinkAvailabilityUpdated_Params;
      break;
      case kMediaRouter_OnPresentationConnectionStateChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MediaRouter_OnPresentationConnectionStateChanged_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateMediaRouterResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kMediaRouter_RegisterMediaRouteProvider_Name:
        if (message.isResponse())
          paramsClass = MediaRouter_RegisterMediaRouteProvider_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var MediaRouter = {
    name: 'media_router::interfaces::MediaRouter',
    proxyClass: MediaRouterProxy,
    stubClass: MediaRouterStub,
    validateRequest: validateMediaRouterRequest,
    validateResponse: validateMediaRouterResponse,
  };
  MediaRouter.SinkAvailability = {};
  MediaRouter.SinkAvailability.UNAVAILABLE = 0;
  MediaRouter.SinkAvailability.PER_SOURCE = MediaRouter.SinkAvailability.UNAVAILABLE + 1;
  MediaRouter.SinkAvailability.AVAILABLE = MediaRouter.SinkAvailability.PER_SOURCE + 1;
  MediaRouter.PresentationConnectionState = {};
  MediaRouter.PresentationConnectionState.CONNECTING = 0;
  MediaRouter.PresentationConnectionState.CONNECTED = MediaRouter.PresentationConnectionState.CONNECTING + 1;
  MediaRouter.PresentationConnectionState.CLOSED = MediaRouter.PresentationConnectionState.CONNECTED + 1;
  MediaRouter.PresentationConnectionState.TERMINATED = MediaRouter.PresentationConnectionState.CLOSED + 1;
  MediaRouterStub.prototype.validator = validateMediaRouterRequest;
  MediaRouterProxy.prototype.validator = validateMediaRouterResponse;

  var exports = {};
  exports.MediaSink = MediaSink;
  exports.MediaRoute = MediaRoute;
  exports.Issue = Issue;
  exports.RouteMessage = RouteMessage;
  exports.MediaRouteProvider = MediaRouteProvider;
  exports.MediaRouter = MediaRouter;

  return exports;
});
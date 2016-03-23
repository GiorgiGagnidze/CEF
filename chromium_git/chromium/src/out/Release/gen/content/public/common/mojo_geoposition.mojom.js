// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("content/public/common/mojo_geoposition.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {

  function MojoGeoposition(values) {
    this.initDefaults_();
    this.initFields_(values);
  }

  MojoGeoposition.ErrorCode = {};
  MojoGeoposition.ErrorCode.NONE = 0;
  MojoGeoposition.ErrorCode.PERMISSION_DENIED = 1;
  MojoGeoposition.ErrorCode.POSITION_UNAVAILABLE = 2;
  MojoGeoposition.ErrorCode.TIMEOUT = 3;
  MojoGeoposition.ErrorCode.LAST = MojoGeoposition.ErrorCode.TIMEOUT;

  MojoGeoposition.prototype.initDefaults_ = function() {
    this.valid = false;
    this.error_code = 0;
    this.latitude = 0;
    this.longitude = 0;
    this.altitude = 0;
    this.accuracy = 0;
    this.altitude_accuracy = 0;
    this.heading = 0;
    this.speed = 0;
    this.timestamp = 0;
    this.error_message = null;
  };
  MojoGeoposition.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  MojoGeoposition.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, MojoGeoposition.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;











    
    // validate MojoGeoposition.error_message
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 72, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MojoGeoposition.encodedSize = codec.kStructHeaderSize + 80;

  MojoGeoposition.decode = function(decoder) {
    var packed;
    var val = new MojoGeoposition();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.valid = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.error_code = decoder.decodeStruct(codec.Int32);
    val.latitude = decoder.decodeStruct(codec.Double);
    val.longitude = decoder.decodeStruct(codec.Double);
    val.altitude = decoder.decodeStruct(codec.Double);
    val.accuracy = decoder.decodeStruct(codec.Double);
    val.altitude_accuracy = decoder.decodeStruct(codec.Double);
    val.heading = decoder.decodeStruct(codec.Double);
    val.speed = decoder.decodeStruct(codec.Double);
    val.timestamp = decoder.decodeStruct(codec.Double);
    val.error_message = decoder.decodeStruct(codec.String);
    return val;
  };

  MojoGeoposition.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MojoGeoposition.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint8, val.valid);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.error_code);
    encoder.encodeStruct(codec.Double, val.latitude);
    encoder.encodeStruct(codec.Double, val.longitude);
    encoder.encodeStruct(codec.Double, val.altitude);
    encoder.encodeStruct(codec.Double, val.accuracy);
    encoder.encodeStruct(codec.Double, val.altitude_accuracy);
    encoder.encodeStruct(codec.Double, val.heading);
    encoder.encodeStruct(codec.Double, val.speed);
    encoder.encodeStruct(codec.Double, val.timestamp);
    encoder.encodeStruct(codec.String, val.error_message);
  };

  var exports = {};
  exports.MojoGeoposition = MojoGeoposition;

  return exports;
});
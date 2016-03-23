// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("device/serial/data_stream_serialization.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "device/serial/data_stream.mojom",
], function(bindings, codec, connection, core, validator, data_stream$) {

  function SerializedDataSender(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SerializedDataSender.prototype.initDefaults_ = function() {
    this.sink = null;
    this.fatal_error_value = 0;
  };
  SerializedDataSender.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  SerializedDataSender.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, SerializedDataSender.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate SerializedDataSender.sink
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  SerializedDataSender.encodedSize = codec.kStructHeaderSize + 16;

  SerializedDataSender.decode = function(decoder) {
    var packed;
    var val = new SerializedDataSender();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.sink = decoder.decodeStruct(codec.Interface);
    val.fatal_error_value = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  SerializedDataSender.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SerializedDataSender.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Interface, val.sink);
    encoder.encodeStruct(codec.Int32, val.fatal_error_value);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PendingReceiveError(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PendingReceiveError.prototype.initDefaults_ = function() {
    this.error = 0;
    this.offset = 0;
  };
  PendingReceiveError.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PendingReceiveError.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PendingReceiveError.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  PendingReceiveError.encodedSize = codec.kStructHeaderSize + 8;

  PendingReceiveError.decode = function(decoder) {
    var packed;
    var val = new PendingReceiveError();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    val.offset = decoder.decodeStruct(codec.Uint32);
    return val;
  };

  PendingReceiveError.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PendingReceiveError.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.encodeStruct(codec.Uint32, val.offset);
  };
  function SerializedDataReceiver(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SerializedDataReceiver.prototype.initDefaults_ = function() {
    this.source = null;
    this.client = null;
    this.fatal_error_value = 0;
    this.bytes_received = 0;
    this.paused = false;
    this.pending_error = null;
    this.pending_data = null;
  };
  SerializedDataReceiver.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  SerializedDataReceiver.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, SerializedDataReceiver.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate SerializedDataReceiver.source
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate SerializedDataReceiver.client
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;




    
    // validate SerializedDataReceiver.pending_error
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, PendingReceiveError, true);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate SerializedDataReceiver.pending_data
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 32, 8, new codec.ArrayOf(codec.Uint8), false, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SerializedDataReceiver.encodedSize = codec.kStructHeaderSize + 40;

  SerializedDataReceiver.decode = function(decoder) {
    var packed;
    var val = new SerializedDataReceiver();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.source = decoder.decodeStruct(codec.Interface);
    val.client = decoder.decodeStruct(codec.Handle);
    val.fatal_error_value = decoder.decodeStruct(codec.Int32);
    val.bytes_received = decoder.decodeStruct(codec.Uint32);
    val.paused = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.pending_error = decoder.decodeStructPointer(PendingReceiveError);
    val.pending_data = decoder.decodeArrayPointer(new codec.ArrayOf(codec.Uint8));
    return val;
  };

  SerializedDataReceiver.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SerializedDataReceiver.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Interface, val.source);
    encoder.encodeStruct(codec.Handle, val.client);
    encoder.encodeStruct(codec.Int32, val.fatal_error_value);
    encoder.encodeStruct(codec.Uint32, val.bytes_received);
    encoder.encodeStruct(codec.Uint8, val.paused);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(PendingReceiveError, val.pending_error);
    encoder.encodeArrayPointer(new codec.ArrayOf(codec.Uint8), val.pending_data);
  };

  var exports = {};
  exports.SerializedDataSender = SerializedDataSender;
  exports.PendingReceiveError = PendingReceiveError;
  exports.SerializedDataReceiver = SerializedDataReceiver;

  return exports;
});
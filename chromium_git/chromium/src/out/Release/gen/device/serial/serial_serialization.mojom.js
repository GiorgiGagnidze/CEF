// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("device/serial/serial_serialization.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "device/serial/serial.mojom",
    "device/serial/data_stream_serialization.mojom",
], function(bindings, codec, connection, core, validator, serial$, data_stream_serialization$) {

  function ConnectionState(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ConnectionState.prototype.initDefaults_ = function() {
    this.connectionId = 0;
    this.paused = false;
    this.persistent = false;
    this.name = "";
    this.receiveTimeout = 0;
    this.sendTimeout = 0;
    this.bufferSize = 4096;
  };
  ConnectionState.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ConnectionState.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ConnectionState.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;




    
    // validate ConnectionState.name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;




    return validator.validationError.NONE;
  };

  ConnectionState.encodedSize = codec.kStructHeaderSize + 32;

  ConnectionState.decode = function(decoder) {
    var packed;
    var val = new ConnectionState();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.connectionId = decoder.decodeStruct(codec.Uint32);
    packed = decoder.readUint8();
    val.paused = (packed >> 0) & 1 ? true : false;
    val.persistent = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.name = decoder.decodeStruct(codec.String);
    val.receiveTimeout = decoder.decodeStruct(codec.Uint32);
    val.sendTimeout = decoder.decodeStruct(codec.Uint32);
    val.bufferSize = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ConnectionState.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ConnectionState.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.connectionId);
    packed = 0;
    packed |= (val.paused & 1) << 0
    packed |= (val.persistent & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.name);
    encoder.encodeStruct(codec.Uint32, val.receiveTimeout);
    encoder.encodeStruct(codec.Uint32, val.sendTimeout);
    encoder.encodeStruct(codec.Uint32, val.bufferSize);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function SerializedConnection(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SerializedConnection.prototype.initDefaults_ = function() {
    this.state = null;
    this.queuedReceiveError = serial$.ReceiveError.NONE;
    this.queuedReceiveData = null;
    this.connection = null;
    this.sender = null;
    this.receiver = null;
  };
  SerializedConnection.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  SerializedConnection.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, SerializedConnection.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate SerializedConnection.state
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, ConnectionState, false);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate SerializedConnection.queuedReceiveData
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 1, codec.Int8, true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate SerializedConnection.connection
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 24, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate SerializedConnection.sender
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, data_stream_serialization$.SerializedDataSender, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate SerializedConnection.receiver
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 40, data_stream_serialization$.SerializedDataReceiver, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SerializedConnection.encodedSize = codec.kStructHeaderSize + 48;

  SerializedConnection.decode = function(decoder) {
    var packed;
    var val = new SerializedConnection();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.state = decoder.decodeStructPointer(ConnectionState);
    val.queuedReceiveError = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.queuedReceiveData = decoder.decodeArrayPointer(codec.Int8);
    val.connection = decoder.decodeStruct(codec.Interface);
    val.sender = decoder.decodeStructPointer(data_stream_serialization$.SerializedDataSender);
    val.receiver = decoder.decodeStructPointer(data_stream_serialization$.SerializedDataReceiver);
    return val;
  };

  SerializedConnection.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SerializedConnection.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(ConnectionState, val.state);
    encoder.encodeStruct(codec.Int32, val.queuedReceiveError);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(codec.Int8, val.queuedReceiveData);
    encoder.encodeStruct(codec.Interface, val.connection);
    encoder.encodeStructPointer(data_stream_serialization$.SerializedDataSender, val.sender);
    encoder.encodeStructPointer(data_stream_serialization$.SerializedDataReceiver, val.receiver);
  };

  var exports = {};
  exports.ConnectionState = ConnectionState;
  exports.SerializedConnection = SerializedConnection;

  return exports;
});
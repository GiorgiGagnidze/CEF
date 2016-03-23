// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("content/public/common/background_sync.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {
  var BackgroundSyncNetworkState = {};
  BackgroundSyncNetworkState.ANY = 0;
  BackgroundSyncNetworkState.AVOID_CELLULAR = BackgroundSyncNetworkState.ANY + 1;
  BackgroundSyncNetworkState.ONLINE = BackgroundSyncNetworkState.AVOID_CELLULAR + 1;
  BackgroundSyncNetworkState.MAX = BackgroundSyncNetworkState.ONLINE;

  function SyncRegistration(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SyncRegistration.prototype.initDefaults_ = function() {
    this.handle_id = -1;
    this.tag = "";
    this.network_state = BackgroundSyncNetworkState.ONLINE;
  };
  SyncRegistration.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  SyncRegistration.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, SyncRegistration.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate SyncRegistration.tag
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  SyncRegistration.encodedSize = codec.kStructHeaderSize + 24;

  SyncRegistration.decode = function(decoder) {
    var packed;
    var val = new SyncRegistration();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.handle_id = decoder.decodeStruct(codec.Int64);
    val.tag = decoder.decodeStruct(codec.String);
    val.network_state = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  SyncRegistration.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SyncRegistration.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.handle_id);
    encoder.encodeStruct(codec.String, val.tag);
    encoder.encodeStruct(codec.Int32, val.network_state);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  var exports = {};
  exports.BackgroundSyncNetworkState = BackgroundSyncNetworkState;
  exports.SyncRegistration = SyncRegistration;

  return exports;
});
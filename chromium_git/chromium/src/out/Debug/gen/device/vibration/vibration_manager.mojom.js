// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("device/vibration/vibration_manager.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {

  function VibrationManager_Vibrate_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VibrationManager_Vibrate_Params.prototype.initDefaults_ = function() {
    this.milliseconds = 0;
  };
  VibrationManager_Vibrate_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  VibrationManager_Vibrate_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, VibrationManager_Vibrate_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  VibrationManager_Vibrate_Params.encodedSize = codec.kStructHeaderSize + 8;

  VibrationManager_Vibrate_Params.decode = function(decoder) {
    var packed;
    var val = new VibrationManager_Vibrate_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.milliseconds = decoder.decodeStruct(codec.Int64);
    return val;
  };

  VibrationManager_Vibrate_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VibrationManager_Vibrate_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.milliseconds);
  };
  function VibrationManager_Cancel_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VibrationManager_Cancel_Params.prototype.initDefaults_ = function() {
  };
  VibrationManager_Cancel_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  VibrationManager_Cancel_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, VibrationManager_Cancel_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VibrationManager_Cancel_Params.encodedSize = codec.kStructHeaderSize + 0;

  VibrationManager_Cancel_Params.decode = function(decoder) {
    var packed;
    var val = new VibrationManager_Cancel_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  VibrationManager_Cancel_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VibrationManager_Cancel_Params.encodedSize);
    encoder.writeUint32(0);
  };
  var kVibrationManager_Vibrate_Name = 0;
  var kVibrationManager_Cancel_Name = 1;

  function VibrationManagerProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  VibrationManagerProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  VibrationManagerProxy.prototype.vibrate = function(milliseconds) {
    var params = new VibrationManager_Vibrate_Params();
    params.milliseconds = milliseconds;
    var builder = new codec.MessageBuilder(
        kVibrationManager_Vibrate_Name,
        codec.align(VibrationManager_Vibrate_Params.encodedSize));
    builder.encodeStruct(VibrationManager_Vibrate_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  VibrationManagerProxy.prototype.cancel = function() {
    var params = new VibrationManager_Cancel_Params();
    var builder = new codec.MessageBuilder(
        kVibrationManager_Cancel_Name,
        codec.align(VibrationManager_Cancel_Params.encodedSize));
    builder.encodeStruct(VibrationManager_Cancel_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function VibrationManagerStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  VibrationManagerStub.prototype = Object.create(bindings.StubBase.prototype);
  VibrationManagerStub.prototype.vibrate = function(milliseconds) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.vibrate && bindings.StubBindings(this).delegate.vibrate(milliseconds);
  }
  VibrationManagerStub.prototype.cancel = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.cancel && bindings.StubBindings(this).delegate.cancel();
  }

  VibrationManagerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kVibrationManager_Vibrate_Name:
      var params = reader.decodeStruct(VibrationManager_Vibrate_Params);
      this.vibrate(params.milliseconds);
      return true;
    case kVibrationManager_Cancel_Name:
      var params = reader.decodeStruct(VibrationManager_Cancel_Params);
      this.cancel();
      return true;
    default:
      return false;
    }
  };

  VibrationManagerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateVibrationManagerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kVibrationManager_Vibrate_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = VibrationManager_Vibrate_Params;
      break;
      case kVibrationManager_Cancel_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = VibrationManager_Cancel_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateVibrationManagerResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var VibrationManager = {
    name: 'device::VibrationManager',
    proxyClass: VibrationManagerProxy,
    stubClass: VibrationManagerStub,
    validateRequest: validateVibrationManagerRequest,
    validateResponse: null,
  };
  VibrationManagerStub.prototype.validator = validateVibrationManagerRequest;
  VibrationManagerProxy.prototype.validator = null;

  var exports = {};
  exports.VibrationManager = VibrationManager;

  return exports;
});
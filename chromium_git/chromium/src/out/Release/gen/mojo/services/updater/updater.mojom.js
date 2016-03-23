// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("mojo/services/updater/updater.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {

  function Updater_GetPathForApp_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Updater_GetPathForApp_Params.prototype.initDefaults_ = function() {
    this.url = null;
  };
  Updater_GetPathForApp_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Updater_GetPathForApp_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Updater_GetPathForApp_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Updater_GetPathForApp_Params.url
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Updater_GetPathForApp_Params.encodedSize = codec.kStructHeaderSize + 8;

  Updater_GetPathForApp_Params.decode = function(decoder) {
    var packed;
    var val = new Updater_GetPathForApp_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.url = decoder.decodeStruct(codec.String);
    return val;
  };

  Updater_GetPathForApp_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Updater_GetPathForApp_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.url);
  };
  function Updater_GetPathForApp_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Updater_GetPathForApp_ResponseParams.prototype.initDefaults_ = function() {
    this.path = null;
  };
  Updater_GetPathForApp_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Updater_GetPathForApp_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Updater_GetPathForApp_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Updater_GetPathForApp_ResponseParams.path
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Updater_GetPathForApp_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Updater_GetPathForApp_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Updater_GetPathForApp_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.path = decoder.decodeStruct(codec.String);
    return val;
  };

  Updater_GetPathForApp_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Updater_GetPathForApp_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.path);
  };
  var kUpdater_GetPathForApp_Name = 0;

  function UpdaterProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  UpdaterProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  UpdaterProxy.prototype.getPathForApp = function(url) {
    var params = new Updater_GetPathForApp_Params();
    params.url = url;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kUpdater_GetPathForApp_Name,
          codec.align(Updater_GetPathForApp_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Updater_GetPathForApp_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Updater_GetPathForApp_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function UpdaterStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  UpdaterStub.prototype = Object.create(bindings.StubBase.prototype);
  UpdaterStub.prototype.getPathForApp = function(url) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.getPathForApp && bindings.StubBindings(this).delegate.getPathForApp(url);
  }

  UpdaterStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  UpdaterStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kUpdater_GetPathForApp_Name:
      var params = reader.decodeStruct(Updater_GetPathForApp_Params);
      return this.getPathForApp(params.url).then(function(response) {
        var responseParams =
            new Updater_GetPathForApp_ResponseParams();
        responseParams.path = response.path;
        var builder = new codec.MessageWithRequestIDBuilder(
            kUpdater_GetPathForApp_Name,
            codec.align(Updater_GetPathForApp_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Updater_GetPathForApp_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateUpdaterRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kUpdater_GetPathForApp_Name:
        if (message.expectsResponse())
          paramsClass = Updater_GetPathForApp_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateUpdaterResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kUpdater_GetPathForApp_Name:
        if (message.isResponse())
          paramsClass = Updater_GetPathForApp_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var Updater = {
    name: 'updater::Updater',
    proxyClass: UpdaterProxy,
    stubClass: UpdaterStub,
    validateRequest: validateUpdaterRequest,
    validateResponse: validateUpdaterResponse,
  };
  UpdaterStub.prototype.validator = validateUpdaterRequest;
  UpdaterProxy.prototype.validator = validateUpdaterResponse;

  var exports = {};
  exports.Updater = Updater;

  return exports;
});
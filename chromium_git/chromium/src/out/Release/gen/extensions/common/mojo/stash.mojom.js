// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("extensions/common/mojo/stash.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {

  function StashedObject(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  StashedObject.prototype.initDefaults_ = function() {
    this.id = null;
    this.data = null;
    this.stashed_handles = null;
    this.monitor_handles = false;
  };
  StashedObject.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  StashedObject.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, StashedObject.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate StashedObject.id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate StashedObject.data
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate StashedObject.stashed_handles
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 4, codec.Handle, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  StashedObject.encodedSize = codec.kStructHeaderSize + 32;

  StashedObject.decode = function(decoder) {
    var packed;
    var val = new StashedObject();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.String);
    val.data = decoder.decodeArrayPointer(codec.Uint8);
    val.stashed_handles = decoder.decodeArrayPointer(codec.Handle);
    val.monitor_handles = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  StashedObject.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(StashedObject.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.id);
    encoder.encodeArrayPointer(codec.Uint8, val.data);
    encoder.encodeArrayPointer(codec.Handle, val.stashed_handles);
    encoder.encodeStruct(codec.Uint8, val.monitor_handles);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function StashService_AddToStash_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  StashService_AddToStash_Params.prototype.initDefaults_ = function() {
    this.stashed_objects = null;
  };
  StashService_AddToStash_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  StashService_AddToStash_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, StashService_AddToStash_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate StashService_AddToStash_Params.stashed_objects
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(StashedObject), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  StashService_AddToStash_Params.encodedSize = codec.kStructHeaderSize + 8;

  StashService_AddToStash_Params.decode = function(decoder) {
    var packed;
    var val = new StashService_AddToStash_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.stashed_objects = decoder.decodeArrayPointer(new codec.PointerTo(StashedObject));
    return val;
  };

  StashService_AddToStash_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(StashService_AddToStash_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(StashedObject), val.stashed_objects);
  };
  function StashService_RetrieveStash_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  StashService_RetrieveStash_Params.prototype.initDefaults_ = function() {
  };
  StashService_RetrieveStash_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  StashService_RetrieveStash_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, StashService_RetrieveStash_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  StashService_RetrieveStash_Params.encodedSize = codec.kStructHeaderSize + 0;

  StashService_RetrieveStash_Params.decode = function(decoder) {
    var packed;
    var val = new StashService_RetrieveStash_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  StashService_RetrieveStash_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(StashService_RetrieveStash_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function StashService_RetrieveStash_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  StashService_RetrieveStash_ResponseParams.prototype.initDefaults_ = function() {
    this.stash = null;
  };
  StashService_RetrieveStash_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  StashService_RetrieveStash_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, StashService_RetrieveStash_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate StashService_RetrieveStash_ResponseParams.stash
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(StashedObject), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  StashService_RetrieveStash_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  StashService_RetrieveStash_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new StashService_RetrieveStash_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.stash = decoder.decodeArrayPointer(new codec.PointerTo(StashedObject));
    return val;
  };

  StashService_RetrieveStash_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(StashService_RetrieveStash_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(StashedObject), val.stash);
  };
  var kStashService_AddToStash_Name = 0;
  var kStashService_RetrieveStash_Name = 1;

  function StashServiceProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  StashServiceProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  StashServiceProxy.prototype.addToStash = function(stashed_objects) {
    var params = new StashService_AddToStash_Params();
    params.stashed_objects = stashed_objects;
    var builder = new codec.MessageBuilder(
        kStashService_AddToStash_Name,
        codec.align(StashService_AddToStash_Params.encodedSize));
    builder.encodeStruct(StashService_AddToStash_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  StashServiceProxy.prototype.retrieveStash = function() {
    var params = new StashService_RetrieveStash_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kStashService_RetrieveStash_Name,
          codec.align(StashService_RetrieveStash_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(StashService_RetrieveStash_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(StashService_RetrieveStash_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function StashServiceStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  StashServiceStub.prototype = Object.create(bindings.StubBase.prototype);
  StashServiceStub.prototype.addToStash = function(stashed_objects) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.addToStash && bindings.StubBindings(this).delegate.addToStash(stashed_objects);
  }
  StashServiceStub.prototype.retrieveStash = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.retrieveStash && bindings.StubBindings(this).delegate.retrieveStash();
  }

  StashServiceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kStashService_AddToStash_Name:
      var params = reader.decodeStruct(StashService_AddToStash_Params);
      this.addToStash(params.stashed_objects);
      return true;
    default:
      return false;
    }
  };

  StashServiceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kStashService_RetrieveStash_Name:
      var params = reader.decodeStruct(StashService_RetrieveStash_Params);
      return this.retrieveStash().then(function(response) {
        var responseParams =
            new StashService_RetrieveStash_ResponseParams();
        responseParams.stash = response.stash;
        var builder = new codec.MessageWithRequestIDBuilder(
            kStashService_RetrieveStash_Name,
            codec.align(StashService_RetrieveStash_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(StashService_RetrieveStash_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateStashServiceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kStashService_AddToStash_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = StashService_AddToStash_Params;
      break;
      case kStashService_RetrieveStash_Name:
        if (message.expectsResponse())
          paramsClass = StashService_RetrieveStash_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateStashServiceResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kStashService_RetrieveStash_Name:
        if (message.isResponse())
          paramsClass = StashService_RetrieveStash_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var StashService = {
    name: 'extensions::StashService',
    proxyClass: StashServiceProxy,
    stubClass: StashServiceStub,
    validateRequest: validateStashServiceRequest,
    validateResponse: validateStashServiceResponse,
  };
  StashServiceStub.prototype.validator = validateStashServiceRequest;
  StashServiceProxy.prototype.validator = validateStashServiceResponse;

  var exports = {};
  exports.StashedObject = StashedObject;
  exports.StashService = StashService;

  return exports;
});
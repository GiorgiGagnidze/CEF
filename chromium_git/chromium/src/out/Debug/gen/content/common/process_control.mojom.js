// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("content/common/process_control.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "mojo/shell/public/interfaces/application.mojom",
], function(bindings, codec, connection, core, validator, application$) {

  function ProcessControl_LoadApplication_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProcessControl_LoadApplication_Params.prototype.initDefaults_ = function() {
    this.url = null;
    this.request = null;
  };
  ProcessControl_LoadApplication_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ProcessControl_LoadApplication_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ProcessControl_LoadApplication_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ProcessControl_LoadApplication_Params.url
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ProcessControl_LoadApplication_Params.request
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProcessControl_LoadApplication_Params.encodedSize = codec.kStructHeaderSize + 16;

  ProcessControl_LoadApplication_Params.decode = function(decoder) {
    var packed;
    var val = new ProcessControl_LoadApplication_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.url = decoder.decodeStruct(codec.String);
    val.request = decoder.decodeStruct(codec.Handle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ProcessControl_LoadApplication_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProcessControl_LoadApplication_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.url);
    encoder.encodeStruct(codec.Handle, val.request);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ProcessControl_LoadApplication_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProcessControl_LoadApplication_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  ProcessControl_LoadApplication_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ProcessControl_LoadApplication_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ProcessControl_LoadApplication_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  ProcessControl_LoadApplication_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  ProcessControl_LoadApplication_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ProcessControl_LoadApplication_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.success = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ProcessControl_LoadApplication_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProcessControl_LoadApplication_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint8, val.success);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kProcessControl_LoadApplication_Name = 0;

  function ProcessControlProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  ProcessControlProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  ProcessControlProxy.prototype.loadApplication = function(url, request) {
    var params = new ProcessControl_LoadApplication_Params();
    params.url = url;
    params.request = core.isHandle(request) ? request : connection.bindProxy(request, application$.Application);
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kProcessControl_LoadApplication_Name,
          codec.align(ProcessControl_LoadApplication_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ProcessControl_LoadApplication_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ProcessControl_LoadApplication_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function ProcessControlStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  ProcessControlStub.prototype = Object.create(bindings.StubBase.prototype);
  ProcessControlStub.prototype.loadApplication = function(url, request) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.loadApplication && bindings.StubBindings(this).delegate.loadApplication(url, connection.bindHandleToStub(request, application$.Application));
  }

  ProcessControlStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  ProcessControlStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kProcessControl_LoadApplication_Name:
      var params = reader.decodeStruct(ProcessControl_LoadApplication_Params);
      return this.loadApplication(params.url, params.request).then(function(response) {
        var responseParams =
            new ProcessControl_LoadApplication_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageWithRequestIDBuilder(
            kProcessControl_LoadApplication_Name,
            codec.align(ProcessControl_LoadApplication_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ProcessControl_LoadApplication_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateProcessControlRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kProcessControl_LoadApplication_Name:
        if (message.expectsResponse())
          paramsClass = ProcessControl_LoadApplication_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateProcessControlResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kProcessControl_LoadApplication_Name:
        if (message.isResponse())
          paramsClass = ProcessControl_LoadApplication_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var ProcessControl = {
    name: 'content::ProcessControl',
    proxyClass: ProcessControlProxy,
    stubClass: ProcessControlStub,
    validateRequest: validateProcessControlRequest,
    validateResponse: validateProcessControlResponse,
  };
  ProcessControlStub.prototype.validator = validateProcessControlRequest;
  ProcessControlProxy.prototype.validator = validateProcessControlResponse;

  var exports = {};
  exports.ProcessControl = ProcessControl;

  return exports;
});
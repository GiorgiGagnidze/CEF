// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("ipc/mojo/client_channel.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {

  function ClientChannel_Init_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ClientChannel_Init_Params.prototype.initDefaults_ = function() {
    this.pipe = null;
    this.peer_pid = 0;
  };
  ClientChannel_Init_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ClientChannel_Init_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ClientChannel_Init_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ClientChannel_Init_Params.pipe
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  ClientChannel_Init_Params.encodedSize = codec.kStructHeaderSize + 8;

  ClientChannel_Init_Params.decode = function(decoder) {
    var packed;
    var val = new ClientChannel_Init_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.pipe = decoder.decodeStruct(codec.Handle);
    val.peer_pid = decoder.decodeStruct(codec.Int32);
    return val;
  };

  ClientChannel_Init_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ClientChannel_Init_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.pipe);
    encoder.encodeStruct(codec.Int32, val.peer_pid);
  };
  function ClientChannel_Init_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ClientChannel_Init_ResponseParams.prototype.initDefaults_ = function() {
    this.pid = 0;
  };
  ClientChannel_Init_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ClientChannel_Init_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ClientChannel_Init_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  ClientChannel_Init_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  ClientChannel_Init_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ClientChannel_Init_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.pid = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ClientChannel_Init_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ClientChannel_Init_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.pid);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kClientChannel_Init_Name = 0;

  function ClientChannelProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  ClientChannelProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  ClientChannelProxy.prototype.init = function(pipe, peer_pid) {
    var params = new ClientChannel_Init_Params();
    params.pipe = pipe;
    params.peer_pid = peer_pid;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kClientChannel_Init_Name,
          codec.align(ClientChannel_Init_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ClientChannel_Init_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ClientChannel_Init_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function ClientChannelStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  ClientChannelStub.prototype = Object.create(bindings.StubBase.prototype);
  ClientChannelStub.prototype.init = function(pipe, peer_pid) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.init && bindings.StubBindings(this).delegate.init(pipe, peer_pid);
  }

  ClientChannelStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  ClientChannelStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kClientChannel_Init_Name:
      var params = reader.decodeStruct(ClientChannel_Init_Params);
      return this.init(params.pipe, params.peer_pid).then(function(response) {
        var responseParams =
            new ClientChannel_Init_ResponseParams();
        responseParams.pid = response.pid;
        var builder = new codec.MessageWithRequestIDBuilder(
            kClientChannel_Init_Name,
            codec.align(ClientChannel_Init_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ClientChannel_Init_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateClientChannelRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kClientChannel_Init_Name:
        if (message.expectsResponse())
          paramsClass = ClientChannel_Init_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateClientChannelResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kClientChannel_Init_Name:
        if (message.isResponse())
          paramsClass = ClientChannel_Init_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var ClientChannel = {
    name: 'IPC::ClientChannel',
    proxyClass: ClientChannelProxy,
    stubClass: ClientChannelStub,
    validateRequest: validateClientChannelRequest,
    validateResponse: validateClientChannelResponse,
  };
  ClientChannelStub.prototype.validator = validateClientChannelRequest;
  ClientChannelProxy.prototype.validator = validateClientChannelResponse;

  var exports = {};
  exports.ClientChannel = ClientChannel;

  return exports;
});
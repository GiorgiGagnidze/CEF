// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("mojo/services/network/public/interfaces/web_socket_factory.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "mojo/services/network/public/interfaces/web_socket.mojom",
], function(bindings, codec, connection, core, validator, web_socket$) {

  function WebSocketFactory_CreateWebSocket_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebSocketFactory_CreateWebSocket_Params.prototype.initDefaults_ = function() {
    this.socket = null;
  };
  WebSocketFactory_CreateWebSocket_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WebSocketFactory_CreateWebSocket_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WebSocketFactory_CreateWebSocket_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WebSocketFactory_CreateWebSocket_Params.socket
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebSocketFactory_CreateWebSocket_Params.encodedSize = codec.kStructHeaderSize + 8;

  WebSocketFactory_CreateWebSocket_Params.decode = function(decoder) {
    var packed;
    var val = new WebSocketFactory_CreateWebSocket_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.socket = decoder.decodeStruct(codec.Handle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WebSocketFactory_CreateWebSocket_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebSocketFactory_CreateWebSocket_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.socket);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kWebSocketFactory_CreateWebSocket_Name = 0;

  function WebSocketFactoryProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  WebSocketFactoryProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  WebSocketFactoryProxy.prototype.createWebSocket = function(socket) {
    var params = new WebSocketFactory_CreateWebSocket_Params();
    params.socket = core.isHandle(socket) ? socket : connection.bindProxy(socket, web_socket$.WebSocket);
    var builder = new codec.MessageBuilder(
        kWebSocketFactory_CreateWebSocket_Name,
        codec.align(WebSocketFactory_CreateWebSocket_Params.encodedSize));
    builder.encodeStruct(WebSocketFactory_CreateWebSocket_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function WebSocketFactoryStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  WebSocketFactoryStub.prototype = Object.create(bindings.StubBase.prototype);
  WebSocketFactoryStub.prototype.createWebSocket = function(socket) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.createWebSocket && bindings.StubBindings(this).delegate.createWebSocket(connection.bindHandleToStub(socket, web_socket$.WebSocket));
  }

  WebSocketFactoryStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kWebSocketFactory_CreateWebSocket_Name:
      var params = reader.decodeStruct(WebSocketFactory_CreateWebSocket_Params);
      this.createWebSocket(params.socket);
      return true;
    default:
      return false;
    }
  };

  WebSocketFactoryStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateWebSocketFactoryRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kWebSocketFactory_CreateWebSocket_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WebSocketFactory_CreateWebSocket_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateWebSocketFactoryResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var WebSocketFactory = {
    name: 'mojo::WebSocketFactory',
    proxyClass: WebSocketFactoryProxy,
    stubClass: WebSocketFactoryStub,
    validateRequest: validateWebSocketFactoryRequest,
    validateResponse: null,
  };
  WebSocketFactoryStub.prototype.validator = validateWebSocketFactoryRequest;
  WebSocketFactoryProxy.prototype.validator = null;

  var exports = {};
  exports.WebSocketFactory = WebSocketFactory;

  return exports;
});
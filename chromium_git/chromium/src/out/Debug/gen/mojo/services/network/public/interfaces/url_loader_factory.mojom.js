// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("mojo/services/network/public/interfaces/url_loader_factory.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "mojo/services/network/public/interfaces/url_loader.mojom",
], function(bindings, codec, connection, core, validator, url_loader$) {

  function URLLoaderFactory_CreateURLLoader_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  URLLoaderFactory_CreateURLLoader_Params.prototype.initDefaults_ = function() {
    this.loader = null;
  };
  URLLoaderFactory_CreateURLLoader_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  URLLoaderFactory_CreateURLLoader_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, URLLoaderFactory_CreateURLLoader_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate URLLoaderFactory_CreateURLLoader_Params.loader
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  URLLoaderFactory_CreateURLLoader_Params.encodedSize = codec.kStructHeaderSize + 8;

  URLLoaderFactory_CreateURLLoader_Params.decode = function(decoder) {
    var packed;
    var val = new URLLoaderFactory_CreateURLLoader_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.loader = decoder.decodeStruct(codec.Handle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  URLLoaderFactory_CreateURLLoader_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(URLLoaderFactory_CreateURLLoader_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.loader);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kURLLoaderFactory_CreateURLLoader_Name = 0;

  function URLLoaderFactoryProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  URLLoaderFactoryProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  URLLoaderFactoryProxy.prototype.createURLLoader = function(loader) {
    var params = new URLLoaderFactory_CreateURLLoader_Params();
    params.loader = core.isHandle(loader) ? loader : connection.bindProxy(loader, url_loader$.URLLoader);
    var builder = new codec.MessageBuilder(
        kURLLoaderFactory_CreateURLLoader_Name,
        codec.align(URLLoaderFactory_CreateURLLoader_Params.encodedSize));
    builder.encodeStruct(URLLoaderFactory_CreateURLLoader_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function URLLoaderFactoryStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  URLLoaderFactoryStub.prototype = Object.create(bindings.StubBase.prototype);
  URLLoaderFactoryStub.prototype.createURLLoader = function(loader) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.createURLLoader && bindings.StubBindings(this).delegate.createURLLoader(connection.bindHandleToStub(loader, url_loader$.URLLoader));
  }

  URLLoaderFactoryStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kURLLoaderFactory_CreateURLLoader_Name:
      var params = reader.decodeStruct(URLLoaderFactory_CreateURLLoader_Params);
      this.createURLLoader(params.loader);
      return true;
    default:
      return false;
    }
  };

  URLLoaderFactoryStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateURLLoaderFactoryRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kURLLoaderFactory_CreateURLLoader_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = URLLoaderFactory_CreateURLLoader_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateURLLoaderFactoryResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var URLLoaderFactory = {
    name: 'mojo::URLLoaderFactory',
    proxyClass: URLLoaderFactoryProxy,
    stubClass: URLLoaderFactoryStub,
    validateRequest: validateURLLoaderFactoryRequest,
    validateResponse: null,
  };
  URLLoaderFactoryStub.prototype.validator = validateURLLoaderFactoryRequest;
  URLLoaderFactoryProxy.prototype.validator = null;

  var exports = {};
  exports.URLLoaderFactory = URLLoaderFactory;

  return exports;
});
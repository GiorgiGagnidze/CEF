// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("mojo/shell/public/interfaces/application.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "mojo/shell/public/interfaces/service_provider.mojom",
    "mojo/shell/public/interfaces/shell.mojom",
], function(bindings, codec, connection, core, validator, service_provider$, shell$) {

  function Application_Initialize_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Application_Initialize_Params.prototype.initDefaults_ = function() {
    this.shell = null;
    this.url = null;
    this.id = 0;
  };
  Application_Initialize_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Application_Initialize_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Application_Initialize_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Application_Initialize_Params.shell
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Application_Initialize_Params.url
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  Application_Initialize_Params.encodedSize = codec.kStructHeaderSize + 24;

  Application_Initialize_Params.decode = function(decoder) {
    var packed;
    var val = new Application_Initialize_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.shell = decoder.decodeStruct(codec.Interface);
    val.url = decoder.decodeStruct(codec.String);
    val.id = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Application_Initialize_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Application_Initialize_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Interface, val.shell);
    encoder.encodeStruct(codec.String, val.url);
    encoder.encodeStruct(codec.Uint32, val.id);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Application_AcceptConnection_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Application_AcceptConnection_Params.prototype.initDefaults_ = function() {
    this.requestor_url = null;
    this.requestor_id = 0;
    this.services = null;
    this.exposed_services = null;
    this.allowed_interfaces = null;
    this.resolved_url = null;
  };
  Application_AcceptConnection_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Application_AcceptConnection_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Application_AcceptConnection_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Application_AcceptConnection_Params.requestor_url
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate Application_AcceptConnection_Params.services
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 12, true)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Application_AcceptConnection_Params.exposed_services
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 16, true);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Application_AcceptConnection_Params.allowed_interfaces
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 24, 8, codec.String, false, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Application_AcceptConnection_Params.resolved_url
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 32, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Application_AcceptConnection_Params.encodedSize = codec.kStructHeaderSize + 40;

  Application_AcceptConnection_Params.decode = function(decoder) {
    var packed;
    var val = new Application_AcceptConnection_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.requestor_url = decoder.decodeStruct(codec.String);
    val.requestor_id = decoder.decodeStruct(codec.Uint32);
    val.services = decoder.decodeStruct(codec.Handle);
    val.exposed_services = decoder.decodeStruct(codec.NullableInterface);
    val.allowed_interfaces = decoder.decodeArrayPointer(codec.String);
    val.resolved_url = decoder.decodeStruct(codec.String);
    return val;
  };

  Application_AcceptConnection_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Application_AcceptConnection_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.requestor_url);
    encoder.encodeStruct(codec.Uint32, val.requestor_id);
    encoder.encodeStruct(codec.Handle, val.services);
    encoder.encodeStruct(codec.NullableInterface, val.exposed_services);
    encoder.encodeArrayPointer(codec.String, val.allowed_interfaces);
    encoder.encodeStruct(codec.String, val.resolved_url);
  };
  function Application_OnQuitRequested_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Application_OnQuitRequested_Params.prototype.initDefaults_ = function() {
  };
  Application_OnQuitRequested_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Application_OnQuitRequested_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Application_OnQuitRequested_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Application_OnQuitRequested_Params.encodedSize = codec.kStructHeaderSize + 0;

  Application_OnQuitRequested_Params.decode = function(decoder) {
    var packed;
    var val = new Application_OnQuitRequested_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Application_OnQuitRequested_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Application_OnQuitRequested_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function Application_OnQuitRequested_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Application_OnQuitRequested_ResponseParams.prototype.initDefaults_ = function() {
    this.can_quit = false;
  };
  Application_OnQuitRequested_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Application_OnQuitRequested_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Application_OnQuitRequested_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  Application_OnQuitRequested_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Application_OnQuitRequested_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Application_OnQuitRequested_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.can_quit = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Application_OnQuitRequested_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Application_OnQuitRequested_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint8, val.can_quit);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kApplication_Initialize_Name = 0;
  var kApplication_AcceptConnection_Name = 1;
  var kApplication_OnQuitRequested_Name = 2;

  function ApplicationProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  ApplicationProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  ApplicationProxy.prototype.initialize = function(shell, url, id) {
    var params = new Application_Initialize_Params();
    params.shell = core.isHandle(shell) ? shell : connection.bindImpl(shell, shell$.Shell);
    params.url = url;
    params.id = id;
    var builder = new codec.MessageBuilder(
        kApplication_Initialize_Name,
        codec.align(Application_Initialize_Params.encodedSize));
    builder.encodeStruct(Application_Initialize_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ApplicationProxy.prototype.acceptConnection = function(requestor_url, requestor_id, services, exposed_services, allowed_interfaces, resolved_url) {
    var params = new Application_AcceptConnection_Params();
    params.requestor_url = requestor_url;
    params.requestor_id = requestor_id;
    params.services = core.isHandle(services) ? services : connection.bindProxy(services, service_provider$.ServiceProvider);
    params.exposed_services = core.isHandle(exposed_services) ? exposed_services : connection.bindImpl(exposed_services, service_provider$.ServiceProvider);
    params.allowed_interfaces = allowed_interfaces;
    params.resolved_url = resolved_url;
    var builder = new codec.MessageBuilder(
        kApplication_AcceptConnection_Name,
        codec.align(Application_AcceptConnection_Params.encodedSize));
    builder.encodeStruct(Application_AcceptConnection_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ApplicationProxy.prototype.onQuitRequested = function() {
    var params = new Application_OnQuitRequested_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kApplication_OnQuitRequested_Name,
          codec.align(Application_OnQuitRequested_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Application_OnQuitRequested_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Application_OnQuitRequested_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function ApplicationStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  ApplicationStub.prototype = Object.create(bindings.StubBase.prototype);
  ApplicationStub.prototype.initialize = function(shell, url, id) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.initialize && bindings.StubBindings(this).delegate.initialize(connection.bindHandleToProxy(shell, shell$.Shell), url, id);
  }
  ApplicationStub.prototype.acceptConnection = function(requestor_url, requestor_id, services, exposed_services, allowed_interfaces, resolved_url) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.acceptConnection && bindings.StubBindings(this).delegate.acceptConnection(requestor_url, requestor_id, connection.bindHandleToStub(services, service_provider$.ServiceProvider), connection.bindHandleToProxy(exposed_services, service_provider$.ServiceProvider), allowed_interfaces, resolved_url);
  }
  ApplicationStub.prototype.onQuitRequested = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onQuitRequested && bindings.StubBindings(this).delegate.onQuitRequested();
  }

  ApplicationStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kApplication_Initialize_Name:
      var params = reader.decodeStruct(Application_Initialize_Params);
      this.initialize(params.shell, params.url, params.id);
      return true;
    case kApplication_AcceptConnection_Name:
      var params = reader.decodeStruct(Application_AcceptConnection_Params);
      this.acceptConnection(params.requestor_url, params.requestor_id, params.services, params.exposed_services, params.allowed_interfaces, params.resolved_url);
      return true;
    default:
      return false;
    }
  };

  ApplicationStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kApplication_OnQuitRequested_Name:
      var params = reader.decodeStruct(Application_OnQuitRequested_Params);
      return this.onQuitRequested().then(function(response) {
        var responseParams =
            new Application_OnQuitRequested_ResponseParams();
        responseParams.can_quit = response.can_quit;
        var builder = new codec.MessageWithRequestIDBuilder(
            kApplication_OnQuitRequested_Name,
            codec.align(Application_OnQuitRequested_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Application_OnQuitRequested_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateApplicationRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kApplication_Initialize_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Application_Initialize_Params;
      break;
      case kApplication_AcceptConnection_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Application_AcceptConnection_Params;
      break;
      case kApplication_OnQuitRequested_Name:
        if (message.expectsResponse())
          paramsClass = Application_OnQuitRequested_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateApplicationResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kApplication_OnQuitRequested_Name:
        if (message.isResponse())
          paramsClass = Application_OnQuitRequested_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var Application = {
    name: 'mojo::Application',
    proxyClass: ApplicationProxy,
    stubClass: ApplicationStub,
    validateRequest: validateApplicationRequest,
    validateResponse: validateApplicationResponse,
  };
  ApplicationStub.prototype.validator = validateApplicationRequest;
  ApplicationProxy.prototype.validator = validateApplicationResponse;

  var exports = {};
  exports.Application = Application;

  return exports;
});
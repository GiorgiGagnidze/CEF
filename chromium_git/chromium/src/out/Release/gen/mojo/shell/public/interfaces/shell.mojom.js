// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("mojo/shell/public/interfaces/shell.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "mojo/shell/public/interfaces/service_provider.mojom",
    "mojo/services/network/public/interfaces/url_loader.mojom",
], function(bindings, codec, connection, core, validator, service_provider$, url_loader$) {

  function CapabilityFilter(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CapabilityFilter.prototype.initDefaults_ = function() {
    this.filter = null;
  };
  CapabilityFilter.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  CapabilityFilter.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, CapabilityFilter.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate CapabilityFilter.filter
    err = messageValidator.validateMapPointer(offset + codec.kStructHeaderSize + 0, false, codec.String, new codec.ArrayOf(codec.String), false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CapabilityFilter.encodedSize = codec.kStructHeaderSize + 8;

  CapabilityFilter.decode = function(decoder) {
    var packed;
    var val = new CapabilityFilter();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.filter = decoder.decodeMapPointer(codec.String, new codec.ArrayOf(codec.String));
    return val;
  };

  CapabilityFilter.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CapabilityFilter.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeMapPointer(codec.String, new codec.ArrayOf(codec.String), val.filter);
  };
  function Shell_ConnectToApplication_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Shell_ConnectToApplication_Params.prototype.initDefaults_ = function() {
    this.application_url = null;
    this.services = null;
    this.exposed_services = null;
    this.filter = null;
  };
  Shell_ConnectToApplication_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Shell_ConnectToApplication_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Shell_ConnectToApplication_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Shell_ConnectToApplication_Params.application_url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url_loader$.URLRequest, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Shell_ConnectToApplication_Params.services
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 8, true)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Shell_ConnectToApplication_Params.exposed_services
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 12, true);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Shell_ConnectToApplication_Params.filter
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, CapabilityFilter, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Shell_ConnectToApplication_Params.encodedSize = codec.kStructHeaderSize + 32;

  Shell_ConnectToApplication_Params.decode = function(decoder) {
    var packed;
    var val = new Shell_ConnectToApplication_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.application_url = decoder.decodeStructPointer(url_loader$.URLRequest);
    val.services = decoder.decodeStruct(codec.Handle);
    val.exposed_services = decoder.decodeStruct(codec.NullableInterface);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.filter = decoder.decodeStructPointer(CapabilityFilter);
    return val;
  };

  Shell_ConnectToApplication_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Shell_ConnectToApplication_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url_loader$.URLRequest, val.application_url);
    encoder.encodeStruct(codec.Handle, val.services);
    encoder.encodeStruct(codec.NullableInterface, val.exposed_services);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(CapabilityFilter, val.filter);
  };
  function Shell_ConnectToApplication_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Shell_ConnectToApplication_ResponseParams.prototype.initDefaults_ = function() {
    this.application_id = 0;
    this.content_handler_id = 0;
  };
  Shell_ConnectToApplication_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Shell_ConnectToApplication_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Shell_ConnectToApplication_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  Shell_ConnectToApplication_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Shell_ConnectToApplication_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Shell_ConnectToApplication_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.application_id = decoder.decodeStruct(codec.Uint32);
    val.content_handler_id = decoder.decodeStruct(codec.Uint32);
    return val;
  };

  Shell_ConnectToApplication_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Shell_ConnectToApplication_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.application_id);
    encoder.encodeStruct(codec.Uint32, val.content_handler_id);
  };
  function Shell_QuitApplication_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Shell_QuitApplication_Params.prototype.initDefaults_ = function() {
  };
  Shell_QuitApplication_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Shell_QuitApplication_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Shell_QuitApplication_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Shell_QuitApplication_Params.encodedSize = codec.kStructHeaderSize + 0;

  Shell_QuitApplication_Params.decode = function(decoder) {
    var packed;
    var val = new Shell_QuitApplication_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Shell_QuitApplication_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Shell_QuitApplication_Params.encodedSize);
    encoder.writeUint32(0);
  };
  var kShell_ConnectToApplication_Name = 0;
  var kShell_QuitApplication_Name = 1;

  function ShellProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  ShellProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  ShellProxy.prototype.connectToApplication = function(application_url, services, exposed_services, filter) {
    var params = new Shell_ConnectToApplication_Params();
    params.application_url = application_url;
    params.services = core.isHandle(services) ? services : connection.bindProxy(services, service_provider$.ServiceProvider);
    params.exposed_services = core.isHandle(exposed_services) ? exposed_services : connection.bindImpl(exposed_services, service_provider$.ServiceProvider);
    params.filter = filter;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kShell_ConnectToApplication_Name,
          codec.align(Shell_ConnectToApplication_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Shell_ConnectToApplication_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Shell_ConnectToApplication_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ShellProxy.prototype.quitApplication = function() {
    var params = new Shell_QuitApplication_Params();
    var builder = new codec.MessageBuilder(
        kShell_QuitApplication_Name,
        codec.align(Shell_QuitApplication_Params.encodedSize));
    builder.encodeStruct(Shell_QuitApplication_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ShellStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  ShellStub.prototype = Object.create(bindings.StubBase.prototype);
  ShellStub.prototype.connectToApplication = function(application_url, services, exposed_services, filter) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.connectToApplication && bindings.StubBindings(this).delegate.connectToApplication(application_url, connection.bindHandleToStub(services, service_provider$.ServiceProvider), connection.bindHandleToProxy(exposed_services, service_provider$.ServiceProvider), filter);
  }
  ShellStub.prototype.quitApplication = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.quitApplication && bindings.StubBindings(this).delegate.quitApplication();
  }

  ShellStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kShell_QuitApplication_Name:
      var params = reader.decodeStruct(Shell_QuitApplication_Params);
      this.quitApplication();
      return true;
    default:
      return false;
    }
  };

  ShellStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kShell_ConnectToApplication_Name:
      var params = reader.decodeStruct(Shell_ConnectToApplication_Params);
      return this.connectToApplication(params.application_url, params.services, params.exposed_services, params.filter).then(function(response) {
        var responseParams =
            new Shell_ConnectToApplication_ResponseParams();
        responseParams.application_id = response.application_id;
        responseParams.content_handler_id = response.content_handler_id;
        var builder = new codec.MessageWithRequestIDBuilder(
            kShell_ConnectToApplication_Name,
            codec.align(Shell_ConnectToApplication_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Shell_ConnectToApplication_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateShellRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kShell_ConnectToApplication_Name:
        if (message.expectsResponse())
          paramsClass = Shell_ConnectToApplication_Params;
      break;
      case kShell_QuitApplication_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Shell_QuitApplication_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateShellResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kShell_ConnectToApplication_Name:
        if (message.isResponse())
          paramsClass = Shell_ConnectToApplication_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var Shell = {
    name: 'mojo::Shell',
    proxyClass: ShellProxy,
    stubClass: ShellStub,
    validateRequest: validateShellRequest,
    validateResponse: validateShellResponse,
  };
  Shell.kInvalidApplicationID = 0,
  ShellStub.prototype.validator = validateShellRequest;
  ShellProxy.prototype.validator = validateShellResponse;

  var exports = {};
  exports.CapabilityFilter = CapabilityFilter;
  exports.Shell = Shell;

  return exports;
});
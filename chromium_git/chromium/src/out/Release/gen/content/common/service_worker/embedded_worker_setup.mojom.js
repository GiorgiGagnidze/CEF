// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("content/common/service_worker/embedded_worker_setup.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "mojo/shell/public/interfaces/service_provider.mojom",
], function(bindings, codec, connection, core, validator, service_provider$) {

  function EmbeddedWorkerSetup_ExchangeServiceProviders_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  EmbeddedWorkerSetup_ExchangeServiceProviders_Params.prototype.initDefaults_ = function() {
    this.thread_id = 0;
    this.services = null;
    this.exposed_services = null;
  };
  EmbeddedWorkerSetup_ExchangeServiceProviders_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  EmbeddedWorkerSetup_ExchangeServiceProviders_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, EmbeddedWorkerSetup_ExchangeServiceProviders_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate EmbeddedWorkerSetup_ExchangeServiceProviders_Params.services
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 4, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate EmbeddedWorkerSetup_ExchangeServiceProviders_Params.exposed_services
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 8, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  EmbeddedWorkerSetup_ExchangeServiceProviders_Params.encodedSize = codec.kStructHeaderSize + 16;

  EmbeddedWorkerSetup_ExchangeServiceProviders_Params.decode = function(decoder) {
    var packed;
    var val = new EmbeddedWorkerSetup_ExchangeServiceProviders_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.thread_id = decoder.decodeStruct(codec.Int32);
    val.services = decoder.decodeStruct(codec.Handle);
    val.exposed_services = decoder.decodeStruct(codec.Interface);
    return val;
  };

  EmbeddedWorkerSetup_ExchangeServiceProviders_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(EmbeddedWorkerSetup_ExchangeServiceProviders_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.thread_id);
    encoder.encodeStruct(codec.Handle, val.services);
    encoder.encodeStruct(codec.Interface, val.exposed_services);
  };
  var kEmbeddedWorkerSetup_ExchangeServiceProviders_Name = 0;

  function EmbeddedWorkerSetupProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  EmbeddedWorkerSetupProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  EmbeddedWorkerSetupProxy.prototype.exchangeServiceProviders = function(thread_id, services, exposed_services) {
    var params = new EmbeddedWorkerSetup_ExchangeServiceProviders_Params();
    params.thread_id = thread_id;
    params.services = core.isHandle(services) ? services : connection.bindProxy(services, service_provider$.ServiceProvider);
    params.exposed_services = core.isHandle(exposed_services) ? exposed_services : connection.bindImpl(exposed_services, service_provider$.ServiceProvider);
    var builder = new codec.MessageBuilder(
        kEmbeddedWorkerSetup_ExchangeServiceProviders_Name,
        codec.align(EmbeddedWorkerSetup_ExchangeServiceProviders_Params.encodedSize));
    builder.encodeStruct(EmbeddedWorkerSetup_ExchangeServiceProviders_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function EmbeddedWorkerSetupStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  EmbeddedWorkerSetupStub.prototype = Object.create(bindings.StubBase.prototype);
  EmbeddedWorkerSetupStub.prototype.exchangeServiceProviders = function(thread_id, services, exposed_services) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.exchangeServiceProviders && bindings.StubBindings(this).delegate.exchangeServiceProviders(thread_id, connection.bindHandleToStub(services, service_provider$.ServiceProvider), connection.bindHandleToProxy(exposed_services, service_provider$.ServiceProvider));
  }

  EmbeddedWorkerSetupStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kEmbeddedWorkerSetup_ExchangeServiceProviders_Name:
      var params = reader.decodeStruct(EmbeddedWorkerSetup_ExchangeServiceProviders_Params);
      this.exchangeServiceProviders(params.thread_id, params.services, params.exposed_services);
      return true;
    default:
      return false;
    }
  };

  EmbeddedWorkerSetupStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateEmbeddedWorkerSetupRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kEmbeddedWorkerSetup_ExchangeServiceProviders_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = EmbeddedWorkerSetup_ExchangeServiceProviders_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateEmbeddedWorkerSetupResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var EmbeddedWorkerSetup = {
    name: 'content::EmbeddedWorkerSetup',
    proxyClass: EmbeddedWorkerSetupProxy,
    stubClass: EmbeddedWorkerSetupStub,
    validateRequest: validateEmbeddedWorkerSetupRequest,
    validateResponse: null,
  };
  EmbeddedWorkerSetupStub.prototype.validator = validateEmbeddedWorkerSetupRequest;
  EmbeddedWorkerSetupProxy.prototype.validator = null;

  var exports = {};
  exports.EmbeddedWorkerSetup = EmbeddedWorkerSetup;

  return exports;
});
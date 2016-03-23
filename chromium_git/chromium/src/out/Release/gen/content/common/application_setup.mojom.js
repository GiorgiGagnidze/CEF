// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("content/common/application_setup.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "mojo/shell/public/interfaces/service_provider.mojom",
], function(bindings, codec, connection, core, validator, service_provider$) {

  function ApplicationSetup_ExchangeServiceProviders_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ApplicationSetup_ExchangeServiceProviders_Params.prototype.initDefaults_ = function() {
    this.services = null;
    this.exposed_services = null;
  };
  ApplicationSetup_ExchangeServiceProviders_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ApplicationSetup_ExchangeServiceProviders_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ApplicationSetup_ExchangeServiceProviders_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ApplicationSetup_ExchangeServiceProviders_Params.services
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ApplicationSetup_ExchangeServiceProviders_Params.exposed_services
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 4, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ApplicationSetup_ExchangeServiceProviders_Params.encodedSize = codec.kStructHeaderSize + 16;

  ApplicationSetup_ExchangeServiceProviders_Params.decode = function(decoder) {
    var packed;
    var val = new ApplicationSetup_ExchangeServiceProviders_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.services = decoder.decodeStruct(codec.Handle);
    val.exposed_services = decoder.decodeStruct(codec.Interface);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ApplicationSetup_ExchangeServiceProviders_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ApplicationSetup_ExchangeServiceProviders_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.services);
    encoder.encodeStruct(codec.Interface, val.exposed_services);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kApplicationSetup_ExchangeServiceProviders_Name = 0;

  function ApplicationSetupProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  ApplicationSetupProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  ApplicationSetupProxy.prototype.exchangeServiceProviders = function(services, exposed_services) {
    var params = new ApplicationSetup_ExchangeServiceProviders_Params();
    params.services = core.isHandle(services) ? services : connection.bindProxy(services, service_provider$.ServiceProvider);
    params.exposed_services = core.isHandle(exposed_services) ? exposed_services : connection.bindImpl(exposed_services, service_provider$.ServiceProvider);
    var builder = new codec.MessageBuilder(
        kApplicationSetup_ExchangeServiceProviders_Name,
        codec.align(ApplicationSetup_ExchangeServiceProviders_Params.encodedSize));
    builder.encodeStruct(ApplicationSetup_ExchangeServiceProviders_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ApplicationSetupStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  ApplicationSetupStub.prototype = Object.create(bindings.StubBase.prototype);
  ApplicationSetupStub.prototype.exchangeServiceProviders = function(services, exposed_services) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.exchangeServiceProviders && bindings.StubBindings(this).delegate.exchangeServiceProviders(connection.bindHandleToStub(services, service_provider$.ServiceProvider), connection.bindHandleToProxy(exposed_services, service_provider$.ServiceProvider));
  }

  ApplicationSetupStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kApplicationSetup_ExchangeServiceProviders_Name:
      var params = reader.decodeStruct(ApplicationSetup_ExchangeServiceProviders_Params);
      this.exchangeServiceProviders(params.services, params.exposed_services);
      return true;
    default:
      return false;
    }
  };

  ApplicationSetupStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateApplicationSetupRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kApplicationSetup_ExchangeServiceProviders_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ApplicationSetup_ExchangeServiceProviders_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateApplicationSetupResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ApplicationSetup = {
    name: 'content::ApplicationSetup',
    proxyClass: ApplicationSetupProxy,
    stubClass: ApplicationSetupStub,
    validateRequest: validateApplicationSetupRequest,
    validateResponse: null,
  };
  ApplicationSetupStub.prototype.validator = validateApplicationSetupRequest;
  ApplicationSetupProxy.prototype.validator = null;

  var exports = {};
  exports.ApplicationSetup = ApplicationSetup;

  return exports;
});
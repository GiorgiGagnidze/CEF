// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("content/common/render_frame_setup.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "mojo/shell/public/interfaces/service_provider.mojom",
], function(bindings, codec, connection, core, validator, service_provider$) {

  function RenderFrameSetup_ExchangeServiceProviders_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RenderFrameSetup_ExchangeServiceProviders_Params.prototype.initDefaults_ = function() {
    this.frame_routing_id = 0;
    this.services = null;
    this.exposed_services = null;
  };
  RenderFrameSetup_ExchangeServiceProviders_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  RenderFrameSetup_ExchangeServiceProviders_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, RenderFrameSetup_ExchangeServiceProviders_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate RenderFrameSetup_ExchangeServiceProviders_Params.services
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 4, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate RenderFrameSetup_ExchangeServiceProviders_Params.exposed_services
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 8, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RenderFrameSetup_ExchangeServiceProviders_Params.encodedSize = codec.kStructHeaderSize + 16;

  RenderFrameSetup_ExchangeServiceProviders_Params.decode = function(decoder) {
    var packed;
    var val = new RenderFrameSetup_ExchangeServiceProviders_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.frame_routing_id = decoder.decodeStruct(codec.Int32);
    val.services = decoder.decodeStruct(codec.Handle);
    val.exposed_services = decoder.decodeStruct(codec.Interface);
    return val;
  };

  RenderFrameSetup_ExchangeServiceProviders_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RenderFrameSetup_ExchangeServiceProviders_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.frame_routing_id);
    encoder.encodeStruct(codec.Handle, val.services);
    encoder.encodeStruct(codec.Interface, val.exposed_services);
  };
  var kRenderFrameSetup_ExchangeServiceProviders_Name = 0;

  function RenderFrameSetupProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  RenderFrameSetupProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  RenderFrameSetupProxy.prototype.exchangeServiceProviders = function(frame_routing_id, services, exposed_services) {
    var params = new RenderFrameSetup_ExchangeServiceProviders_Params();
    params.frame_routing_id = frame_routing_id;
    params.services = core.isHandle(services) ? services : connection.bindProxy(services, service_provider$.ServiceProvider);
    params.exposed_services = core.isHandle(exposed_services) ? exposed_services : connection.bindImpl(exposed_services, service_provider$.ServiceProvider);
    var builder = new codec.MessageBuilder(
        kRenderFrameSetup_ExchangeServiceProviders_Name,
        codec.align(RenderFrameSetup_ExchangeServiceProviders_Params.encodedSize));
    builder.encodeStruct(RenderFrameSetup_ExchangeServiceProviders_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function RenderFrameSetupStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  RenderFrameSetupStub.prototype = Object.create(bindings.StubBase.prototype);
  RenderFrameSetupStub.prototype.exchangeServiceProviders = function(frame_routing_id, services, exposed_services) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.exchangeServiceProviders && bindings.StubBindings(this).delegate.exchangeServiceProviders(frame_routing_id, connection.bindHandleToStub(services, service_provider$.ServiceProvider), connection.bindHandleToProxy(exposed_services, service_provider$.ServiceProvider));
  }

  RenderFrameSetupStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kRenderFrameSetup_ExchangeServiceProviders_Name:
      var params = reader.decodeStruct(RenderFrameSetup_ExchangeServiceProviders_Params);
      this.exchangeServiceProviders(params.frame_routing_id, params.services, params.exposed_services);
      return true;
    default:
      return false;
    }
  };

  RenderFrameSetupStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateRenderFrameSetupRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kRenderFrameSetup_ExchangeServiceProviders_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = RenderFrameSetup_ExchangeServiceProviders_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateRenderFrameSetupResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var RenderFrameSetup = {
    name: 'content::RenderFrameSetup',
    proxyClass: RenderFrameSetupProxy,
    stubClass: RenderFrameSetupStub,
    validateRequest: validateRenderFrameSetupRequest,
    validateResponse: null,
  };
  RenderFrameSetupStub.prototype.validator = validateRenderFrameSetupRequest;
  RenderFrameSetupProxy.prototype.validator = null;

  var exports = {};
  exports.RenderFrameSetup = RenderFrameSetup;

  return exports;
});
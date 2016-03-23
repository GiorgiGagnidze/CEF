// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("content/common/service_port_service.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {
  var ServicePortConnectResult = {};
  ServicePortConnectResult.ACCEPT = 0;
  ServicePortConnectResult.REJECT = ServicePortConnectResult.ACCEPT + 1;

  function MojoTransferredMessagePort(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MojoTransferredMessagePort.prototype.initDefaults_ = function() {
    this.id = 0;
    this.send_messages_as_values = false;
  };
  MojoTransferredMessagePort.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  MojoTransferredMessagePort.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, MojoTransferredMessagePort.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  MojoTransferredMessagePort.encodedSize = codec.kStructHeaderSize + 8;

  MojoTransferredMessagePort.decode = function(decoder) {
    var packed;
    var val = new MojoTransferredMessagePort();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.Int32);
    val.send_messages_as_values = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  MojoTransferredMessagePort.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MojoTransferredMessagePort.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.id);
    encoder.encodeStruct(codec.Uint8, val.send_messages_as_values);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ServicePortService_SetClient_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServicePortService_SetClient_Params.prototype.initDefaults_ = function() {
    this.client = null;
  };
  ServicePortService_SetClient_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ServicePortService_SetClient_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ServicePortService_SetClient_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ServicePortService_SetClient_Params.client
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServicePortService_SetClient_Params.encodedSize = codec.kStructHeaderSize + 8;

  ServicePortService_SetClient_Params.decode = function(decoder) {
    var packed;
    var val = new ServicePortService_SetClient_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.client = decoder.decodeStruct(codec.Interface);
    return val;
  };

  ServicePortService_SetClient_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServicePortService_SetClient_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Interface, val.client);
  };
  function ServicePortService_Connect_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServicePortService_Connect_Params.prototype.initDefaults_ = function() {
    this.target_url = null;
    this.origin = null;
  };
  ServicePortService_Connect_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ServicePortService_Connect_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ServicePortService_Connect_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ServicePortService_Connect_Params.target_url
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ServicePortService_Connect_Params.origin
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServicePortService_Connect_Params.encodedSize = codec.kStructHeaderSize + 16;

  ServicePortService_Connect_Params.decode = function(decoder) {
    var packed;
    var val = new ServicePortService_Connect_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.target_url = decoder.decodeStruct(codec.String);
    val.origin = decoder.decodeStruct(codec.String);
    return val;
  };

  ServicePortService_Connect_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServicePortService_Connect_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.target_url);
    encoder.encodeStruct(codec.String, val.origin);
  };
  function ServicePortService_Connect_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServicePortService_Connect_ResponseParams.prototype.initDefaults_ = function() {
    this.result = 0;
    this.port_id = 0;
  };
  ServicePortService_Connect_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ServicePortService_Connect_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ServicePortService_Connect_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  ServicePortService_Connect_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  ServicePortService_Connect_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ServicePortService_Connect_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStruct(codec.Int32);
    val.port_id = decoder.decodeStruct(codec.Int32);
    return val;
  };

  ServicePortService_Connect_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServicePortService_Connect_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.result);
    encoder.encodeStruct(codec.Int32, val.port_id);
  };
  function ServicePortService_PostMessageToPort_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServicePortService_PostMessageToPort_Params.prototype.initDefaults_ = function() {
    this.port_id = 0;
    this.message = null;
    this.ports = null;
  };
  ServicePortService_PostMessageToPort_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ServicePortService_PostMessageToPort_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ServicePortService_PostMessageToPort_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate ServicePortService_PostMessageToPort_Params.message
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ServicePortService_PostMessageToPort_Params.ports
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, new codec.PointerTo(MojoTransferredMessagePort), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServicePortService_PostMessageToPort_Params.encodedSize = codec.kStructHeaderSize + 24;

  ServicePortService_PostMessageToPort_Params.decode = function(decoder) {
    var packed;
    var val = new ServicePortService_PostMessageToPort_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.port_id = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.message = decoder.decodeStruct(codec.String);
    val.ports = decoder.decodeArrayPointer(new codec.PointerTo(MojoTransferredMessagePort));
    return val;
  };

  ServicePortService_PostMessageToPort_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServicePortService_PostMessageToPort_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.port_id);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.message);
    encoder.encodeArrayPointer(new codec.PointerTo(MojoTransferredMessagePort), val.ports);
  };
  function ServicePortService_ClosePort_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServicePortService_ClosePort_Params.prototype.initDefaults_ = function() {
    this.port_id = 0;
  };
  ServicePortService_ClosePort_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ServicePortService_ClosePort_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ServicePortService_ClosePort_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  ServicePortService_ClosePort_Params.encodedSize = codec.kStructHeaderSize + 8;

  ServicePortService_ClosePort_Params.decode = function(decoder) {
    var packed;
    var val = new ServicePortService_ClosePort_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.port_id = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ServicePortService_ClosePort_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServicePortService_ClosePort_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.port_id);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ServicePortServiceClient_PostMessageToPort_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServicePortServiceClient_PostMessageToPort_Params.prototype.initDefaults_ = function() {
    this.port_id = 0;
    this.message = null;
    this.ports = null;
    this.new_routing_ids = null;
  };
  ServicePortServiceClient_PostMessageToPort_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ServicePortServiceClient_PostMessageToPort_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ServicePortServiceClient_PostMessageToPort_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate ServicePortServiceClient_PostMessageToPort_Params.message
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ServicePortServiceClient_PostMessageToPort_Params.ports
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, new codec.PointerTo(MojoTransferredMessagePort), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ServicePortServiceClient_PostMessageToPort_Params.new_routing_ids
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 24, 4, codec.Int32, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServicePortServiceClient_PostMessageToPort_Params.encodedSize = codec.kStructHeaderSize + 32;

  ServicePortServiceClient_PostMessageToPort_Params.decode = function(decoder) {
    var packed;
    var val = new ServicePortServiceClient_PostMessageToPort_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.port_id = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.message = decoder.decodeStruct(codec.String);
    val.ports = decoder.decodeArrayPointer(new codec.PointerTo(MojoTransferredMessagePort));
    val.new_routing_ids = decoder.decodeArrayPointer(codec.Int32);
    return val;
  };

  ServicePortServiceClient_PostMessageToPort_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServicePortServiceClient_PostMessageToPort_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.port_id);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.message);
    encoder.encodeArrayPointer(new codec.PointerTo(MojoTransferredMessagePort), val.ports);
    encoder.encodeArrayPointer(codec.Int32, val.new_routing_ids);
  };
  function ServicePortDispatcher_Connect_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServicePortDispatcher_Connect_Params.prototype.initDefaults_ = function() {
    this.target_url = null;
    this.origin = null;
    this.port_id = 0;
  };
  ServicePortDispatcher_Connect_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ServicePortDispatcher_Connect_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ServicePortDispatcher_Connect_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ServicePortDispatcher_Connect_Params.target_url
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ServicePortDispatcher_Connect_Params.origin
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  ServicePortDispatcher_Connect_Params.encodedSize = codec.kStructHeaderSize + 24;

  ServicePortDispatcher_Connect_Params.decode = function(decoder) {
    var packed;
    var val = new ServicePortDispatcher_Connect_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.target_url = decoder.decodeStruct(codec.String);
    val.origin = decoder.decodeStruct(codec.String);
    val.port_id = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ServicePortDispatcher_Connect_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServicePortDispatcher_Connect_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.target_url);
    encoder.encodeStruct(codec.String, val.origin);
    encoder.encodeStruct(codec.Int32, val.port_id);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ServicePortDispatcher_Connect_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServicePortDispatcher_Connect_ResponseParams.prototype.initDefaults_ = function() {
    this.result = 0;
    this.name = null;
    this.data = null;
  };
  ServicePortDispatcher_Connect_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ServicePortDispatcher_Connect_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ServicePortDispatcher_Connect_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate ServicePortDispatcher_Connect_ResponseParams.name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ServicePortDispatcher_Connect_ResponseParams.data
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServicePortDispatcher_Connect_ResponseParams.encodedSize = codec.kStructHeaderSize + 24;

  ServicePortDispatcher_Connect_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ServicePortDispatcher_Connect_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.name = decoder.decodeStruct(codec.String);
    val.data = decoder.decodeStruct(codec.String);
    return val;
  };

  ServicePortDispatcher_Connect_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServicePortDispatcher_Connect_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.result);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.name);
    encoder.encodeStruct(codec.String, val.data);
  };
  var kServicePortService_SetClient_Name = 0;
  var kServicePortService_Connect_Name = 1;
  var kServicePortService_PostMessageToPort_Name = 2;
  var kServicePortService_ClosePort_Name = 3;

  function ServicePortServiceProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  ServicePortServiceProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  ServicePortServiceProxy.prototype.setClient = function(client) {
    var params = new ServicePortService_SetClient_Params();
    params.client = core.isHandle(client) ? client : connection.bindImpl(client, ServicePortServiceClient);
    var builder = new codec.MessageBuilder(
        kServicePortService_SetClient_Name,
        codec.align(ServicePortService_SetClient_Params.encodedSize));
    builder.encodeStruct(ServicePortService_SetClient_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ServicePortServiceProxy.prototype.connect = function(target_url, origin) {
    var params = new ServicePortService_Connect_Params();
    params.target_url = target_url;
    params.origin = origin;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kServicePortService_Connect_Name,
          codec.align(ServicePortService_Connect_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ServicePortService_Connect_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ServicePortService_Connect_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ServicePortServiceProxy.prototype.postMessageToPort = function(port_id, message, ports) {
    var params = new ServicePortService_PostMessageToPort_Params();
    params.port_id = port_id;
    params.message = message;
    params.ports = ports;
    var builder = new codec.MessageBuilder(
        kServicePortService_PostMessageToPort_Name,
        codec.align(ServicePortService_PostMessageToPort_Params.encodedSize));
    builder.encodeStruct(ServicePortService_PostMessageToPort_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ServicePortServiceProxy.prototype.closePort = function(port_id) {
    var params = new ServicePortService_ClosePort_Params();
    params.port_id = port_id;
    var builder = new codec.MessageBuilder(
        kServicePortService_ClosePort_Name,
        codec.align(ServicePortService_ClosePort_Params.encodedSize));
    builder.encodeStruct(ServicePortService_ClosePort_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ServicePortServiceStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  ServicePortServiceStub.prototype = Object.create(bindings.StubBase.prototype);
  ServicePortServiceStub.prototype.setClient = function(client) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.setClient && bindings.StubBindings(this).delegate.setClient(connection.bindHandleToProxy(client, ServicePortServiceClient));
  }
  ServicePortServiceStub.prototype.connect = function(target_url, origin) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.connect && bindings.StubBindings(this).delegate.connect(target_url, origin);
  }
  ServicePortServiceStub.prototype.postMessageToPort = function(port_id, message, ports) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.postMessageToPort && bindings.StubBindings(this).delegate.postMessageToPort(port_id, message, ports);
  }
  ServicePortServiceStub.prototype.closePort = function(port_id) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.closePort && bindings.StubBindings(this).delegate.closePort(port_id);
  }

  ServicePortServiceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kServicePortService_SetClient_Name:
      var params = reader.decodeStruct(ServicePortService_SetClient_Params);
      this.setClient(params.client);
      return true;
    case kServicePortService_PostMessageToPort_Name:
      var params = reader.decodeStruct(ServicePortService_PostMessageToPort_Params);
      this.postMessageToPort(params.port_id, params.message, params.ports);
      return true;
    case kServicePortService_ClosePort_Name:
      var params = reader.decodeStruct(ServicePortService_ClosePort_Params);
      this.closePort(params.port_id);
      return true;
    default:
      return false;
    }
  };

  ServicePortServiceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kServicePortService_Connect_Name:
      var params = reader.decodeStruct(ServicePortService_Connect_Params);
      return this.connect(params.target_url, params.origin).then(function(response) {
        var responseParams =
            new ServicePortService_Connect_ResponseParams();
        responseParams.result = response.result;
        responseParams.port_id = response.port_id;
        var builder = new codec.MessageWithRequestIDBuilder(
            kServicePortService_Connect_Name,
            codec.align(ServicePortService_Connect_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ServicePortService_Connect_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateServicePortServiceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kServicePortService_SetClient_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ServicePortService_SetClient_Params;
      break;
      case kServicePortService_Connect_Name:
        if (message.expectsResponse())
          paramsClass = ServicePortService_Connect_Params;
      break;
      case kServicePortService_PostMessageToPort_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ServicePortService_PostMessageToPort_Params;
      break;
      case kServicePortService_ClosePort_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ServicePortService_ClosePort_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateServicePortServiceResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kServicePortService_Connect_Name:
        if (message.isResponse())
          paramsClass = ServicePortService_Connect_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var ServicePortService = {
    name: 'content::ServicePortService',
    proxyClass: ServicePortServiceProxy,
    stubClass: ServicePortServiceStub,
    validateRequest: validateServicePortServiceRequest,
    validateResponse: validateServicePortServiceResponse,
  };
  ServicePortServiceStub.prototype.validator = validateServicePortServiceRequest;
  ServicePortServiceProxy.prototype.validator = validateServicePortServiceResponse;
  var kServicePortServiceClient_PostMessageToPort_Name = 0;

  function ServicePortServiceClientProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  ServicePortServiceClientProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  ServicePortServiceClientProxy.prototype.postMessageToPort = function(port_id, message, ports, new_routing_ids) {
    var params = new ServicePortServiceClient_PostMessageToPort_Params();
    params.port_id = port_id;
    params.message = message;
    params.ports = ports;
    params.new_routing_ids = new_routing_ids;
    var builder = new codec.MessageBuilder(
        kServicePortServiceClient_PostMessageToPort_Name,
        codec.align(ServicePortServiceClient_PostMessageToPort_Params.encodedSize));
    builder.encodeStruct(ServicePortServiceClient_PostMessageToPort_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ServicePortServiceClientStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  ServicePortServiceClientStub.prototype = Object.create(bindings.StubBase.prototype);
  ServicePortServiceClientStub.prototype.postMessageToPort = function(port_id, message, ports, new_routing_ids) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.postMessageToPort && bindings.StubBindings(this).delegate.postMessageToPort(port_id, message, ports, new_routing_ids);
  }

  ServicePortServiceClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kServicePortServiceClient_PostMessageToPort_Name:
      var params = reader.decodeStruct(ServicePortServiceClient_PostMessageToPort_Params);
      this.postMessageToPort(params.port_id, params.message, params.ports, params.new_routing_ids);
      return true;
    default:
      return false;
    }
  };

  ServicePortServiceClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateServicePortServiceClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kServicePortServiceClient_PostMessageToPort_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ServicePortServiceClient_PostMessageToPort_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateServicePortServiceClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ServicePortServiceClient = {
    name: 'content::ServicePortServiceClient',
    proxyClass: ServicePortServiceClientProxy,
    stubClass: ServicePortServiceClientStub,
    validateRequest: validateServicePortServiceClientRequest,
    validateResponse: null,
  };
  ServicePortServiceClientStub.prototype.validator = validateServicePortServiceClientRequest;
  ServicePortServiceClientProxy.prototype.validator = null;
  var kServicePortDispatcher_Connect_Name = 0;

  function ServicePortDispatcherProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  ServicePortDispatcherProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  ServicePortDispatcherProxy.prototype.connect = function(target_url, origin, port_id) {
    var params = new ServicePortDispatcher_Connect_Params();
    params.target_url = target_url;
    params.origin = origin;
    params.port_id = port_id;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kServicePortDispatcher_Connect_Name,
          codec.align(ServicePortDispatcher_Connect_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ServicePortDispatcher_Connect_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ServicePortDispatcher_Connect_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function ServicePortDispatcherStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  ServicePortDispatcherStub.prototype = Object.create(bindings.StubBase.prototype);
  ServicePortDispatcherStub.prototype.connect = function(target_url, origin, port_id) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.connect && bindings.StubBindings(this).delegate.connect(target_url, origin, port_id);
  }

  ServicePortDispatcherStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  ServicePortDispatcherStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kServicePortDispatcher_Connect_Name:
      var params = reader.decodeStruct(ServicePortDispatcher_Connect_Params);
      return this.connect(params.target_url, params.origin, params.port_id).then(function(response) {
        var responseParams =
            new ServicePortDispatcher_Connect_ResponseParams();
        responseParams.result = response.result;
        responseParams.name = response.name;
        responseParams.data = response.data;
        var builder = new codec.MessageWithRequestIDBuilder(
            kServicePortDispatcher_Connect_Name,
            codec.align(ServicePortDispatcher_Connect_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ServicePortDispatcher_Connect_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateServicePortDispatcherRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kServicePortDispatcher_Connect_Name:
        if (message.expectsResponse())
          paramsClass = ServicePortDispatcher_Connect_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateServicePortDispatcherResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kServicePortDispatcher_Connect_Name:
        if (message.isResponse())
          paramsClass = ServicePortDispatcher_Connect_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var ServicePortDispatcher = {
    name: 'content::ServicePortDispatcher',
    proxyClass: ServicePortDispatcherProxy,
    stubClass: ServicePortDispatcherStub,
    validateRequest: validateServicePortDispatcherRequest,
    validateResponse: validateServicePortDispatcherResponse,
  };
  ServicePortDispatcherStub.prototype.validator = validateServicePortDispatcherRequest;
  ServicePortDispatcherProxy.prototype.validator = validateServicePortDispatcherResponse;

  var exports = {};
  exports.ServicePortConnectResult = ServicePortConnectResult;
  exports.MojoTransferredMessagePort = MojoTransferredMessagePort;
  exports.ServicePortService = ServicePortService;
  exports.ServicePortServiceClient = ServicePortServiceClient;
  exports.ServicePortDispatcher = ServicePortDispatcher;

  return exports;
});
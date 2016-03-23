// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("device/devices_app/usb/public/interfaces/permission_provider.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "device/devices_app/usb/public/interfaces/device.mojom",
], function(bindings, codec, connection, core, validator, device$) {

  function PermissionProvider_HasDevicePermission_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PermissionProvider_HasDevicePermission_Params.prototype.initDefaults_ = function() {
    this.requested_devices = null;
  };
  PermissionProvider_HasDevicePermission_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PermissionProvider_HasDevicePermission_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PermissionProvider_HasDevicePermission_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PermissionProvider_HasDevicePermission_Params.requested_devices
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(device$.DeviceInfo), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PermissionProvider_HasDevicePermission_Params.encodedSize = codec.kStructHeaderSize + 8;

  PermissionProvider_HasDevicePermission_Params.decode = function(decoder) {
    var packed;
    var val = new PermissionProvider_HasDevicePermission_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.requested_devices = decoder.decodeArrayPointer(new codec.PointerTo(device$.DeviceInfo));
    return val;
  };

  PermissionProvider_HasDevicePermission_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PermissionProvider_HasDevicePermission_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(device$.DeviceInfo), val.requested_devices);
  };
  function PermissionProvider_HasDevicePermission_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PermissionProvider_HasDevicePermission_ResponseParams.prototype.initDefaults_ = function() {
    this.allowed_guids = null;
  };
  PermissionProvider_HasDevicePermission_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PermissionProvider_HasDevicePermission_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PermissionProvider_HasDevicePermission_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PermissionProvider_HasDevicePermission_ResponseParams.allowed_guids
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, codec.String, false, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PermissionProvider_HasDevicePermission_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  PermissionProvider_HasDevicePermission_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new PermissionProvider_HasDevicePermission_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.allowed_guids = decoder.decodeArrayPointer(codec.String);
    return val;
  };

  PermissionProvider_HasDevicePermission_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PermissionProvider_HasDevicePermission_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.String, val.allowed_guids);
  };
  function PermissionProvider_HasConfigurationPermission_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PermissionProvider_HasConfigurationPermission_Params.prototype.initDefaults_ = function() {
    this.requested_configuration = 0;
    this.device = null;
  };
  PermissionProvider_HasConfigurationPermission_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PermissionProvider_HasConfigurationPermission_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PermissionProvider_HasConfigurationPermission_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate PermissionProvider_HasConfigurationPermission_Params.device
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, device$.DeviceInfo, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PermissionProvider_HasConfigurationPermission_Params.encodedSize = codec.kStructHeaderSize + 16;

  PermissionProvider_HasConfigurationPermission_Params.decode = function(decoder) {
    var packed;
    var val = new PermissionProvider_HasConfigurationPermission_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.requested_configuration = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.device = decoder.decodeStructPointer(device$.DeviceInfo);
    return val;
  };

  PermissionProvider_HasConfigurationPermission_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PermissionProvider_HasConfigurationPermission_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint8, val.requested_configuration);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(device$.DeviceInfo, val.device);
  };
  function PermissionProvider_HasConfigurationPermission_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PermissionProvider_HasConfigurationPermission_ResponseParams.prototype.initDefaults_ = function() {
    this.allowed = false;
  };
  PermissionProvider_HasConfigurationPermission_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PermissionProvider_HasConfigurationPermission_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PermissionProvider_HasConfigurationPermission_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  PermissionProvider_HasConfigurationPermission_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  PermissionProvider_HasConfigurationPermission_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new PermissionProvider_HasConfigurationPermission_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.allowed = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PermissionProvider_HasConfigurationPermission_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PermissionProvider_HasConfigurationPermission_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint8, val.allowed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PermissionProvider_HasInterfacePermission_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PermissionProvider_HasInterfacePermission_Params.prototype.initDefaults_ = function() {
    this.requested_interface = 0;
    this.configuration_value = 0;
    this.device = null;
  };
  PermissionProvider_HasInterfacePermission_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PermissionProvider_HasInterfacePermission_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PermissionProvider_HasInterfacePermission_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



    
    // validate PermissionProvider_HasInterfacePermission_Params.device
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, device$.DeviceInfo, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PermissionProvider_HasInterfacePermission_Params.encodedSize = codec.kStructHeaderSize + 16;

  PermissionProvider_HasInterfacePermission_Params.decode = function(decoder) {
    var packed;
    var val = new PermissionProvider_HasInterfacePermission_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.requested_interface = decoder.decodeStruct(codec.Uint8);
    val.configuration_value = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.device = decoder.decodeStructPointer(device$.DeviceInfo);
    return val;
  };

  PermissionProvider_HasInterfacePermission_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PermissionProvider_HasInterfacePermission_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint8, val.requested_interface);
    encoder.encodeStruct(codec.Uint8, val.configuration_value);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(device$.DeviceInfo, val.device);
  };
  function PermissionProvider_HasInterfacePermission_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PermissionProvider_HasInterfacePermission_ResponseParams.prototype.initDefaults_ = function() {
    this.allowed = false;
  };
  PermissionProvider_HasInterfacePermission_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PermissionProvider_HasInterfacePermission_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PermissionProvider_HasInterfacePermission_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  PermissionProvider_HasInterfacePermission_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  PermissionProvider_HasInterfacePermission_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new PermissionProvider_HasInterfacePermission_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.allowed = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PermissionProvider_HasInterfacePermission_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PermissionProvider_HasInterfacePermission_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint8, val.allowed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PermissionProvider_Bind_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PermissionProvider_Bind_Params.prototype.initDefaults_ = function() {
    this.request = null;
  };
  PermissionProvider_Bind_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PermissionProvider_Bind_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PermissionProvider_Bind_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PermissionProvider_Bind_Params.request
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PermissionProvider_Bind_Params.encodedSize = codec.kStructHeaderSize + 8;

  PermissionProvider_Bind_Params.decode = function(decoder) {
    var packed;
    var val = new PermissionProvider_Bind_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.request = decoder.decodeStruct(codec.Handle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PermissionProvider_Bind_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PermissionProvider_Bind_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.request);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kPermissionProvider_HasDevicePermission_Name = 0;
  var kPermissionProvider_HasConfigurationPermission_Name = 1;
  var kPermissionProvider_HasInterfacePermission_Name = 2;
  var kPermissionProvider_Bind_Name = 3;

  function PermissionProviderProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  PermissionProviderProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  PermissionProviderProxy.prototype.hasDevicePermission = function(requested_devices) {
    var params = new PermissionProvider_HasDevicePermission_Params();
    params.requested_devices = requested_devices;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kPermissionProvider_HasDevicePermission_Name,
          codec.align(PermissionProvider_HasDevicePermission_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(PermissionProvider_HasDevicePermission_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(PermissionProvider_HasDevicePermission_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  PermissionProviderProxy.prototype.hasConfigurationPermission = function(requested_configuration, device) {
    var params = new PermissionProvider_HasConfigurationPermission_Params();
    params.requested_configuration = requested_configuration;
    params.device = device;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kPermissionProvider_HasConfigurationPermission_Name,
          codec.align(PermissionProvider_HasConfigurationPermission_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(PermissionProvider_HasConfigurationPermission_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(PermissionProvider_HasConfigurationPermission_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  PermissionProviderProxy.prototype.hasInterfacePermission = function(requested_interface, configuration_value, device) {
    var params = new PermissionProvider_HasInterfacePermission_Params();
    params.requested_interface = requested_interface;
    params.configuration_value = configuration_value;
    params.device = device;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kPermissionProvider_HasInterfacePermission_Name,
          codec.align(PermissionProvider_HasInterfacePermission_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(PermissionProvider_HasInterfacePermission_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(PermissionProvider_HasInterfacePermission_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  PermissionProviderProxy.prototype.bind = function(request) {
    var params = new PermissionProvider_Bind_Params();
    params.request = core.isHandle(request) ? request : connection.bindProxy(request, PermissionProvider);
    var builder = new codec.MessageBuilder(
        kPermissionProvider_Bind_Name,
        codec.align(PermissionProvider_Bind_Params.encodedSize));
    builder.encodeStruct(PermissionProvider_Bind_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function PermissionProviderStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  PermissionProviderStub.prototype = Object.create(bindings.StubBase.prototype);
  PermissionProviderStub.prototype.hasDevicePermission = function(requested_devices) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.hasDevicePermission && bindings.StubBindings(this).delegate.hasDevicePermission(requested_devices);
  }
  PermissionProviderStub.prototype.hasConfigurationPermission = function(requested_configuration, device) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.hasConfigurationPermission && bindings.StubBindings(this).delegate.hasConfigurationPermission(requested_configuration, device);
  }
  PermissionProviderStub.prototype.hasInterfacePermission = function(requested_interface, configuration_value, device) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.hasInterfacePermission && bindings.StubBindings(this).delegate.hasInterfacePermission(requested_interface, configuration_value, device);
  }
  PermissionProviderStub.prototype.bind = function(request) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.bind && bindings.StubBindings(this).delegate.bind(connection.bindHandleToStub(request, PermissionProvider));
  }

  PermissionProviderStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPermissionProvider_Bind_Name:
      var params = reader.decodeStruct(PermissionProvider_Bind_Params);
      this.bind(params.request);
      return true;
    default:
      return false;
    }
  };

  PermissionProviderStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPermissionProvider_HasDevicePermission_Name:
      var params = reader.decodeStruct(PermissionProvider_HasDevicePermission_Params);
      return this.hasDevicePermission(params.requested_devices).then(function(response) {
        var responseParams =
            new PermissionProvider_HasDevicePermission_ResponseParams();
        responseParams.allowed_guids = response.allowed_guids;
        var builder = new codec.MessageWithRequestIDBuilder(
            kPermissionProvider_HasDevicePermission_Name,
            codec.align(PermissionProvider_HasDevicePermission_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(PermissionProvider_HasDevicePermission_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kPermissionProvider_HasConfigurationPermission_Name:
      var params = reader.decodeStruct(PermissionProvider_HasConfigurationPermission_Params);
      return this.hasConfigurationPermission(params.requested_configuration, params.device).then(function(response) {
        var responseParams =
            new PermissionProvider_HasConfigurationPermission_ResponseParams();
        responseParams.allowed = response.allowed;
        var builder = new codec.MessageWithRequestIDBuilder(
            kPermissionProvider_HasConfigurationPermission_Name,
            codec.align(PermissionProvider_HasConfigurationPermission_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(PermissionProvider_HasConfigurationPermission_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kPermissionProvider_HasInterfacePermission_Name:
      var params = reader.decodeStruct(PermissionProvider_HasInterfacePermission_Params);
      return this.hasInterfacePermission(params.requested_interface, params.configuration_value, params.device).then(function(response) {
        var responseParams =
            new PermissionProvider_HasInterfacePermission_ResponseParams();
        responseParams.allowed = response.allowed;
        var builder = new codec.MessageWithRequestIDBuilder(
            kPermissionProvider_HasInterfacePermission_Name,
            codec.align(PermissionProvider_HasInterfacePermission_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(PermissionProvider_HasInterfacePermission_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validatePermissionProviderRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kPermissionProvider_HasDevicePermission_Name:
        if (message.expectsResponse())
          paramsClass = PermissionProvider_HasDevicePermission_Params;
      break;
      case kPermissionProvider_HasConfigurationPermission_Name:
        if (message.expectsResponse())
          paramsClass = PermissionProvider_HasConfigurationPermission_Params;
      break;
      case kPermissionProvider_HasInterfacePermission_Name:
        if (message.expectsResponse())
          paramsClass = PermissionProvider_HasInterfacePermission_Params;
      break;
      case kPermissionProvider_Bind_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PermissionProvider_Bind_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validatePermissionProviderResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kPermissionProvider_HasDevicePermission_Name:
        if (message.isResponse())
          paramsClass = PermissionProvider_HasDevicePermission_ResponseParams;
        break;
      case kPermissionProvider_HasConfigurationPermission_Name:
        if (message.isResponse())
          paramsClass = PermissionProvider_HasConfigurationPermission_ResponseParams;
        break;
      case kPermissionProvider_HasInterfacePermission_Name:
        if (message.isResponse())
          paramsClass = PermissionProvider_HasInterfacePermission_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var PermissionProvider = {
    name: 'device::usb::PermissionProvider',
    proxyClass: PermissionProviderProxy,
    stubClass: PermissionProviderStub,
    validateRequest: validatePermissionProviderRequest,
    validateResponse: validatePermissionProviderResponse,
  };
  PermissionProviderStub.prototype.validator = validatePermissionProviderRequest;
  PermissionProviderProxy.prototype.validator = validatePermissionProviderResponse;

  var exports = {};
  exports.PermissionProvider = PermissionProvider;

  return exports;
});
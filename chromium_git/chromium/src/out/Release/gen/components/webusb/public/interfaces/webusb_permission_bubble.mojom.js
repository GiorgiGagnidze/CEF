// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("components/webusb/public/interfaces/webusb_permission_bubble.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "device/devices_app/usb/public/interfaces/device.mojom",
    "device/devices_app/usb/public/interfaces/device_manager.mojom",
], function(bindings, codec, connection, core, validator, device$, device_manager$) {

  function WebUsbPermissionBubble_GetPermission_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebUsbPermissionBubble_GetPermission_Params.prototype.initDefaults_ = function() {
    this.device_filters = null;
  };
  WebUsbPermissionBubble_GetPermission_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WebUsbPermissionBubble_GetPermission_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WebUsbPermissionBubble_GetPermission_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WebUsbPermissionBubble_GetPermission_Params.device_filters
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(device_manager$.DeviceFilter), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebUsbPermissionBubble_GetPermission_Params.encodedSize = codec.kStructHeaderSize + 8;

  WebUsbPermissionBubble_GetPermission_Params.decode = function(decoder) {
    var packed;
    var val = new WebUsbPermissionBubble_GetPermission_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.device_filters = decoder.decodeArrayPointer(new codec.PointerTo(device_manager$.DeviceFilter));
    return val;
  };

  WebUsbPermissionBubble_GetPermission_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebUsbPermissionBubble_GetPermission_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(device_manager$.DeviceFilter), val.device_filters);
  };
  function WebUsbPermissionBubble_GetPermission_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebUsbPermissionBubble_GetPermission_ResponseParams.prototype.initDefaults_ = function() {
    this.result = null;
  };
  WebUsbPermissionBubble_GetPermission_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WebUsbPermissionBubble_GetPermission_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WebUsbPermissionBubble_GetPermission_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WebUsbPermissionBubble_GetPermission_ResponseParams.result
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, device$.DeviceInfo, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebUsbPermissionBubble_GetPermission_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  WebUsbPermissionBubble_GetPermission_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new WebUsbPermissionBubble_GetPermission_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStructPointer(device$.DeviceInfo);
    return val;
  };

  WebUsbPermissionBubble_GetPermission_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebUsbPermissionBubble_GetPermission_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(device$.DeviceInfo, val.result);
  };
  var kWebUsbPermissionBubble_GetPermission_Name = 0;

  function WebUsbPermissionBubbleProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  WebUsbPermissionBubbleProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  WebUsbPermissionBubbleProxy.prototype.getPermission = function(device_filters) {
    var params = new WebUsbPermissionBubble_GetPermission_Params();
    params.device_filters = device_filters;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kWebUsbPermissionBubble_GetPermission_Name,
          codec.align(WebUsbPermissionBubble_GetPermission_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(WebUsbPermissionBubble_GetPermission_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(WebUsbPermissionBubble_GetPermission_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function WebUsbPermissionBubbleStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  WebUsbPermissionBubbleStub.prototype = Object.create(bindings.StubBase.prototype);
  WebUsbPermissionBubbleStub.prototype.getPermission = function(device_filters) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.getPermission && bindings.StubBindings(this).delegate.getPermission(device_filters);
  }

  WebUsbPermissionBubbleStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  WebUsbPermissionBubbleStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kWebUsbPermissionBubble_GetPermission_Name:
      var params = reader.decodeStruct(WebUsbPermissionBubble_GetPermission_Params);
      return this.getPermission(params.device_filters).then(function(response) {
        var responseParams =
            new WebUsbPermissionBubble_GetPermission_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageWithRequestIDBuilder(
            kWebUsbPermissionBubble_GetPermission_Name,
            codec.align(WebUsbPermissionBubble_GetPermission_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(WebUsbPermissionBubble_GetPermission_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateWebUsbPermissionBubbleRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kWebUsbPermissionBubble_GetPermission_Name:
        if (message.expectsResponse())
          paramsClass = WebUsbPermissionBubble_GetPermission_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateWebUsbPermissionBubbleResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kWebUsbPermissionBubble_GetPermission_Name:
        if (message.isResponse())
          paramsClass = WebUsbPermissionBubble_GetPermission_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var WebUsbPermissionBubble = {
    name: 'webusb::WebUsbPermissionBubble',
    proxyClass: WebUsbPermissionBubbleProxy,
    stubClass: WebUsbPermissionBubbleStub,
    validateRequest: validateWebUsbPermissionBubbleRequest,
    validateResponse: validateWebUsbPermissionBubbleResponse,
  };
  WebUsbPermissionBubbleStub.prototype.validator = validateWebUsbPermissionBubbleRequest;
  WebUsbPermissionBubbleProxy.prototype.validator = validateWebUsbPermissionBubbleResponse;

  var exports = {};
  exports.WebUsbPermissionBubble = WebUsbPermissionBubble;

  return exports;
});
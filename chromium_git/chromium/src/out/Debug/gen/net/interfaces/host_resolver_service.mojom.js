// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("net/interfaces/host_resolver_service.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {
  var AddressFamily = {};
  AddressFamily.UNSPECIFIED = 0;
  AddressFamily.IPV4 = AddressFamily.UNSPECIFIED + 1;
  AddressFamily.IPV6 = AddressFamily.IPV4 + 1;

  function HostResolverRequestInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  HostResolverRequestInfo.prototype.initDefaults_ = function() {
    this.host = null;
    this.port = 0;
    this.is_my_ip_address = false;
    this.address_family = 0;
  };
  HostResolverRequestInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  HostResolverRequestInfo.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, HostResolverRequestInfo.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate HostResolverRequestInfo.host
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;




    return validator.validationError.NONE;
  };

  HostResolverRequestInfo.encodedSize = codec.kStructHeaderSize + 16;

  HostResolverRequestInfo.decode = function(decoder) {
    var packed;
    var val = new HostResolverRequestInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.host = decoder.decodeStruct(codec.String);
    val.port = decoder.decodeStruct(codec.Uint16);
    val.is_my_ip_address = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    val.address_family = decoder.decodeStruct(codec.Int32);
    return val;
  };

  HostResolverRequestInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(HostResolverRequestInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.host);
    encoder.encodeStruct(codec.Uint16, val.port);
    encoder.encodeStruct(codec.Uint8, val.is_my_ip_address);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.address_family);
  };
  function IPEndPoint(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  IPEndPoint.prototype.initDefaults_ = function() {
    this.address = null;
    this.port = 0;
  };
  IPEndPoint.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  IPEndPoint.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, IPEndPoint.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate IPEndPoint.address
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  IPEndPoint.encodedSize = codec.kStructHeaderSize + 16;

  IPEndPoint.decode = function(decoder) {
    var packed;
    var val = new IPEndPoint();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.address = decoder.decodeArrayPointer(codec.Uint8);
    val.port = decoder.decodeStruct(codec.Uint16);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  IPEndPoint.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(IPEndPoint.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Uint8, val.address);
    encoder.encodeStruct(codec.Uint16, val.port);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function AddressList(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AddressList.prototype.initDefaults_ = function() {
    this.addresses = null;
  };
  AddressList.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  AddressList.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, AddressList.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate AddressList.addresses
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(IPEndPoint), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AddressList.encodedSize = codec.kStructHeaderSize + 8;

  AddressList.decode = function(decoder) {
    var packed;
    var val = new AddressList();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.addresses = decoder.decodeArrayPointer(new codec.PointerTo(IPEndPoint));
    return val;
  };

  AddressList.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AddressList.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(IPEndPoint), val.addresses);
  };
  function HostResolverRequestClient_ReportResult_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  HostResolverRequestClient_ReportResult_Params.prototype.initDefaults_ = function() {
    this.error = 0;
    this.result = null;
  };
  HostResolverRequestClient_ReportResult_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  HostResolverRequestClient_ReportResult_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, HostResolverRequestClient_ReportResult_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate HostResolverRequestClient_ReportResult_Params.result
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, AddressList, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  HostResolverRequestClient_ReportResult_Params.encodedSize = codec.kStructHeaderSize + 16;

  HostResolverRequestClient_ReportResult_Params.decode = function(decoder) {
    var packed;
    var val = new HostResolverRequestClient_ReportResult_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.result = decoder.decodeStructPointer(AddressList);
    return val;
  };

  HostResolverRequestClient_ReportResult_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(HostResolverRequestClient_ReportResult_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(AddressList, val.result);
  };
  var kHostResolverRequestClient_ReportResult_Name = 0;

  function HostResolverRequestClientProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  HostResolverRequestClientProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  HostResolverRequestClientProxy.prototype.reportResult = function(error, result) {
    var params = new HostResolverRequestClient_ReportResult_Params();
    params.error = error;
    params.result = result;
    var builder = new codec.MessageBuilder(
        kHostResolverRequestClient_ReportResult_Name,
        codec.align(HostResolverRequestClient_ReportResult_Params.encodedSize));
    builder.encodeStruct(HostResolverRequestClient_ReportResult_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function HostResolverRequestClientStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  HostResolverRequestClientStub.prototype = Object.create(bindings.StubBase.prototype);
  HostResolverRequestClientStub.prototype.reportResult = function(error, result) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.reportResult && bindings.StubBindings(this).delegate.reportResult(error, result);
  }

  HostResolverRequestClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kHostResolverRequestClient_ReportResult_Name:
      var params = reader.decodeStruct(HostResolverRequestClient_ReportResult_Params);
      this.reportResult(params.error, params.result);
      return true;
    default:
      return false;
    }
  };

  HostResolverRequestClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateHostResolverRequestClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kHostResolverRequestClient_ReportResult_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = HostResolverRequestClient_ReportResult_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateHostResolverRequestClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var HostResolverRequestClient = {
    name: 'net::interfaces::HostResolverRequestClient',
    proxyClass: HostResolverRequestClientProxy,
    stubClass: HostResolverRequestClientStub,
    validateRequest: validateHostResolverRequestClientRequest,
    validateResponse: null,
  };
  HostResolverRequestClientStub.prototype.validator = validateHostResolverRequestClientRequest;
  HostResolverRequestClientProxy.prototype.validator = null;

  var exports = {};
  exports.AddressFamily = AddressFamily;
  exports.HostResolverRequestInfo = HostResolverRequestInfo;
  exports.IPEndPoint = IPEndPoint;
  exports.AddressList = AddressList;
  exports.HostResolverRequestClient = HostResolverRequestClient;

  return exports;
});
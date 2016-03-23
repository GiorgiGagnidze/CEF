// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("extensions/common/api/mime_handler.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {

  function StreamInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  StreamInfo.prototype.initDefaults_ = function() {
    this.mime_type = null;
    this.original_url = null;
    this.stream_url = null;
    this.tab_id = 0;
    this.embedded = false;
    this.response_headers = null;
  };
  StreamInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  StreamInfo.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, StreamInfo.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate StreamInfo.mime_type
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate StreamInfo.original_url
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate StreamInfo.stream_url
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;



    
    // validate StreamInfo.response_headers
    err = messageValidator.validateMapPointer(offset + codec.kStructHeaderSize + 32, false, codec.String, codec.String, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  StreamInfo.encodedSize = codec.kStructHeaderSize + 40;

  StreamInfo.decode = function(decoder) {
    var packed;
    var val = new StreamInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.mime_type = decoder.decodeStruct(codec.String);
    val.original_url = decoder.decodeStruct(codec.String);
    val.stream_url = decoder.decodeStruct(codec.String);
    val.tab_id = decoder.decodeStruct(codec.Int32);
    val.embedded = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.response_headers = decoder.decodeMapPointer(codec.String, codec.String);
    return val;
  };

  StreamInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(StreamInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.mime_type);
    encoder.encodeStruct(codec.String, val.original_url);
    encoder.encodeStruct(codec.String, val.stream_url);
    encoder.encodeStruct(codec.Int32, val.tab_id);
    encoder.encodeStruct(codec.Uint8, val.embedded);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeMapPointer(codec.String, codec.String, val.response_headers);
  };
  function MimeHandlerService_GetStreamInfo_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MimeHandlerService_GetStreamInfo_Params.prototype.initDefaults_ = function() {
  };
  MimeHandlerService_GetStreamInfo_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  MimeHandlerService_GetStreamInfo_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, MimeHandlerService_GetStreamInfo_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MimeHandlerService_GetStreamInfo_Params.encodedSize = codec.kStructHeaderSize + 0;

  MimeHandlerService_GetStreamInfo_Params.decode = function(decoder) {
    var packed;
    var val = new MimeHandlerService_GetStreamInfo_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  MimeHandlerService_GetStreamInfo_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MimeHandlerService_GetStreamInfo_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function MimeHandlerService_GetStreamInfo_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MimeHandlerService_GetStreamInfo_ResponseParams.prototype.initDefaults_ = function() {
    this.stream_info = null;
  };
  MimeHandlerService_GetStreamInfo_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  MimeHandlerService_GetStreamInfo_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, MimeHandlerService_GetStreamInfo_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate MimeHandlerService_GetStreamInfo_ResponseParams.stream_info
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, StreamInfo, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MimeHandlerService_GetStreamInfo_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  MimeHandlerService_GetStreamInfo_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new MimeHandlerService_GetStreamInfo_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.stream_info = decoder.decodeStructPointer(StreamInfo);
    return val;
  };

  MimeHandlerService_GetStreamInfo_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MimeHandlerService_GetStreamInfo_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(StreamInfo, val.stream_info);
  };
  function MimeHandlerService_AbortStream_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MimeHandlerService_AbortStream_Params.prototype.initDefaults_ = function() {
  };
  MimeHandlerService_AbortStream_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  MimeHandlerService_AbortStream_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, MimeHandlerService_AbortStream_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MimeHandlerService_AbortStream_Params.encodedSize = codec.kStructHeaderSize + 0;

  MimeHandlerService_AbortStream_Params.decode = function(decoder) {
    var packed;
    var val = new MimeHandlerService_AbortStream_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  MimeHandlerService_AbortStream_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MimeHandlerService_AbortStream_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function MimeHandlerService_AbortStream_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MimeHandlerService_AbortStream_ResponseParams.prototype.initDefaults_ = function() {
  };
  MimeHandlerService_AbortStream_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  MimeHandlerService_AbortStream_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, MimeHandlerService_AbortStream_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MimeHandlerService_AbortStream_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  MimeHandlerService_AbortStream_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new MimeHandlerService_AbortStream_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  MimeHandlerService_AbortStream_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MimeHandlerService_AbortStream_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  var kMimeHandlerService_GetStreamInfo_Name = 0;
  var kMimeHandlerService_AbortStream_Name = 1;

  function MimeHandlerServiceProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  MimeHandlerServiceProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  MimeHandlerServiceProxy.prototype.getStreamInfo = function() {
    var params = new MimeHandlerService_GetStreamInfo_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kMimeHandlerService_GetStreamInfo_Name,
          codec.align(MimeHandlerService_GetStreamInfo_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(MimeHandlerService_GetStreamInfo_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(MimeHandlerService_GetStreamInfo_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  MimeHandlerServiceProxy.prototype.abortStream = function() {
    var params = new MimeHandlerService_AbortStream_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kMimeHandlerService_AbortStream_Name,
          codec.align(MimeHandlerService_AbortStream_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(MimeHandlerService_AbortStream_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(MimeHandlerService_AbortStream_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function MimeHandlerServiceStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  MimeHandlerServiceStub.prototype = Object.create(bindings.StubBase.prototype);
  MimeHandlerServiceStub.prototype.getStreamInfo = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.getStreamInfo && bindings.StubBindings(this).delegate.getStreamInfo();
  }
  MimeHandlerServiceStub.prototype.abortStream = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.abortStream && bindings.StubBindings(this).delegate.abortStream();
  }

  MimeHandlerServiceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  MimeHandlerServiceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kMimeHandlerService_GetStreamInfo_Name:
      var params = reader.decodeStruct(MimeHandlerService_GetStreamInfo_Params);
      return this.getStreamInfo().then(function(response) {
        var responseParams =
            new MimeHandlerService_GetStreamInfo_ResponseParams();
        responseParams.stream_info = response.stream_info;
        var builder = new codec.MessageWithRequestIDBuilder(
            kMimeHandlerService_GetStreamInfo_Name,
            codec.align(MimeHandlerService_GetStreamInfo_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(MimeHandlerService_GetStreamInfo_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kMimeHandlerService_AbortStream_Name:
      var params = reader.decodeStruct(MimeHandlerService_AbortStream_Params);
      return this.abortStream().then(function(response) {
        var responseParams =
            new MimeHandlerService_AbortStream_ResponseParams();
        var builder = new codec.MessageWithRequestIDBuilder(
            kMimeHandlerService_AbortStream_Name,
            codec.align(MimeHandlerService_AbortStream_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(MimeHandlerService_AbortStream_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateMimeHandlerServiceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kMimeHandlerService_GetStreamInfo_Name:
        if (message.expectsResponse())
          paramsClass = MimeHandlerService_GetStreamInfo_Params;
      break;
      case kMimeHandlerService_AbortStream_Name:
        if (message.expectsResponse())
          paramsClass = MimeHandlerService_AbortStream_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateMimeHandlerServiceResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kMimeHandlerService_GetStreamInfo_Name:
        if (message.isResponse())
          paramsClass = MimeHandlerService_GetStreamInfo_ResponseParams;
        break;
      case kMimeHandlerService_AbortStream_Name:
        if (message.isResponse())
          paramsClass = MimeHandlerService_AbortStream_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var MimeHandlerService = {
    name: 'extensions::mime_handler::MimeHandlerService',
    proxyClass: MimeHandlerServiceProxy,
    stubClass: MimeHandlerServiceStub,
    validateRequest: validateMimeHandlerServiceRequest,
    validateResponse: validateMimeHandlerServiceResponse,
  };
  MimeHandlerServiceStub.prototype.validator = validateMimeHandlerServiceRequest;
  MimeHandlerServiceProxy.prototype.validator = validateMimeHandlerServiceResponse;

  var exports = {};
  exports.StreamInfo = StreamInfo;
  exports.MimeHandlerService = MimeHandlerService;

  return exports;
});
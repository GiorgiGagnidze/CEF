// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("mojo/services/network/public/interfaces/url_loader.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "mojo/services/network/public/interfaces/http_message.mojom",
    "mojo/services/network/public/interfaces/network_error.mojom",
], function(bindings, codec, connection, core, validator, http_message$, network_error$) {

  function URLRequest(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  URLRequest.prototype.initDefaults_ = function() {
    this.url = null;
    this.method = "GET";
    this.headers = null;
    this.body = null;
    this.response_body_buffer_size = 0;
    this.auto_follow_redirects = false;
    this.bypass_cache = false;
    this.originating_time_ticks = 0;
  };
  URLRequest.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  URLRequest.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, URLRequest.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate URLRequest.url
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate URLRequest.method
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate URLRequest.headers
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, new codec.PointerTo(http_message$.HttpHeader), true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate URLRequest.body
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 24, 4, codec.Handle, true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;





    return validator.validationError.NONE;
  };

  URLRequest.encodedSize = codec.kStructHeaderSize + 48;

  URLRequest.decode = function(decoder) {
    var packed;
    var val = new URLRequest();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.url = decoder.decodeStruct(codec.String);
    val.method = decoder.decodeStruct(codec.String);
    val.headers = decoder.decodeArrayPointer(new codec.PointerTo(http_message$.HttpHeader));
    val.body = decoder.decodeArrayPointer(codec.Handle);
    val.response_body_buffer_size = decoder.decodeStruct(codec.Uint32);
    packed = decoder.readUint8();
    val.auto_follow_redirects = (packed >> 0) & 1 ? true : false;
    val.bypass_cache = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.originating_time_ticks = decoder.decodeStruct(codec.Int64);
    return val;
  };

  URLRequest.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(URLRequest.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.url);
    encoder.encodeStruct(codec.String, val.method);
    encoder.encodeArrayPointer(new codec.PointerTo(http_message$.HttpHeader), val.headers);
    encoder.encodeArrayPointer(codec.Handle, val.body);
    encoder.encodeStruct(codec.Uint32, val.response_body_buffer_size);
    packed = 0;
    packed |= (val.auto_follow_redirects & 1) << 0
    packed |= (val.bypass_cache & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int64, val.originating_time_ticks);
  };
  function URLResponse(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  URLResponse.prototype.initDefaults_ = function() {
    this.error = null;
    this.body = null;
    this.status_code = 0;
    this.url = null;
    this.site = null;
    this.status_line = null;
    this.headers = null;
    this.mime_type = null;
    this.charset = null;
    this.redirect_method = null;
    this.redirect_url = null;
    this.redirect_referrer = null;
  };
  URLResponse.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  URLResponse.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, URLResponse.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate URLResponse.error
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, network_error$.NetworkError, true);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate URLResponse.body
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 8, true)
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate URLResponse.url
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, true)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate URLResponse.site
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 24, true)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate URLResponse.status_line
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 32, true)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate URLResponse.headers
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 40, 8, new codec.PointerTo(http_message$.HttpHeader), true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate URLResponse.mime_type
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 48, true)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate URLResponse.charset
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 56, true)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate URLResponse.redirect_method
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 64, true)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate URLResponse.redirect_url
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 72, true)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate URLResponse.redirect_referrer
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 80, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  URLResponse.encodedSize = codec.kStructHeaderSize + 88;

  URLResponse.decode = function(decoder) {
    var packed;
    var val = new URLResponse();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStructPointer(network_error$.NetworkError);
    val.body = decoder.decodeStruct(codec.NullableHandle);
    val.status_code = decoder.decodeStruct(codec.Uint32);
    val.url = decoder.decodeStruct(codec.NullableString);
    val.site = decoder.decodeStruct(codec.NullableString);
    val.status_line = decoder.decodeStruct(codec.NullableString);
    val.headers = decoder.decodeArrayPointer(new codec.PointerTo(http_message$.HttpHeader));
    val.mime_type = decoder.decodeStruct(codec.NullableString);
    val.charset = decoder.decodeStruct(codec.NullableString);
    val.redirect_method = decoder.decodeStruct(codec.NullableString);
    val.redirect_url = decoder.decodeStruct(codec.NullableString);
    val.redirect_referrer = decoder.decodeStruct(codec.NullableString);
    return val;
  };

  URLResponse.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(URLResponse.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(network_error$.NetworkError, val.error);
    encoder.encodeStruct(codec.NullableHandle, val.body);
    encoder.encodeStruct(codec.Uint32, val.status_code);
    encoder.encodeStruct(codec.NullableString, val.url);
    encoder.encodeStruct(codec.NullableString, val.site);
    encoder.encodeStruct(codec.NullableString, val.status_line);
    encoder.encodeArrayPointer(new codec.PointerTo(http_message$.HttpHeader), val.headers);
    encoder.encodeStruct(codec.NullableString, val.mime_type);
    encoder.encodeStruct(codec.NullableString, val.charset);
    encoder.encodeStruct(codec.NullableString, val.redirect_method);
    encoder.encodeStruct(codec.NullableString, val.redirect_url);
    encoder.encodeStruct(codec.NullableString, val.redirect_referrer);
  };
  function URLLoaderStatus(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  URLLoaderStatus.prototype.initDefaults_ = function() {
    this.error = null;
    this.is_loading = false;
    this.content_length = 0;
    this.bytes_read = 0;
  };
  URLLoaderStatus.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  URLLoaderStatus.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, URLLoaderStatus.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate URLLoaderStatus.error
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, network_error$.NetworkError, true);
    if (err !== validator.validationError.NONE)
        return err;




    return validator.validationError.NONE;
  };

  URLLoaderStatus.encodedSize = codec.kStructHeaderSize + 32;

  URLLoaderStatus.decode = function(decoder) {
    var packed;
    var val = new URLLoaderStatus();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStructPointer(network_error$.NetworkError);
    val.is_loading = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.content_length = decoder.decodeStruct(codec.Int64);
    val.bytes_read = decoder.decodeStruct(codec.Int64);
    return val;
  };

  URLLoaderStatus.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(URLLoaderStatus.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(network_error$.NetworkError, val.error);
    encoder.encodeStruct(codec.Uint8, val.is_loading);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int64, val.content_length);
    encoder.encodeStruct(codec.Int64, val.bytes_read);
  };
  function URLLoader_Start_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  URLLoader_Start_Params.prototype.initDefaults_ = function() {
    this.request = null;
  };
  URLLoader_Start_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  URLLoader_Start_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, URLLoader_Start_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate URLLoader_Start_Params.request
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, URLRequest, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  URLLoader_Start_Params.encodedSize = codec.kStructHeaderSize + 8;

  URLLoader_Start_Params.decode = function(decoder) {
    var packed;
    var val = new URLLoader_Start_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.request = decoder.decodeStructPointer(URLRequest);
    return val;
  };

  URLLoader_Start_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(URLLoader_Start_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(URLRequest, val.request);
  };
  function URLLoader_Start_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  URLLoader_Start_ResponseParams.prototype.initDefaults_ = function() {
    this.response = null;
  };
  URLLoader_Start_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  URLLoader_Start_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, URLLoader_Start_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate URLLoader_Start_ResponseParams.response
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, URLResponse, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  URLLoader_Start_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  URLLoader_Start_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new URLLoader_Start_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.response = decoder.decodeStructPointer(URLResponse);
    return val;
  };

  URLLoader_Start_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(URLLoader_Start_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(URLResponse, val.response);
  };
  function URLLoader_FollowRedirect_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  URLLoader_FollowRedirect_Params.prototype.initDefaults_ = function() {
  };
  URLLoader_FollowRedirect_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  URLLoader_FollowRedirect_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, URLLoader_FollowRedirect_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  URLLoader_FollowRedirect_Params.encodedSize = codec.kStructHeaderSize + 0;

  URLLoader_FollowRedirect_Params.decode = function(decoder) {
    var packed;
    var val = new URLLoader_FollowRedirect_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  URLLoader_FollowRedirect_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(URLLoader_FollowRedirect_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function URLLoader_FollowRedirect_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  URLLoader_FollowRedirect_ResponseParams.prototype.initDefaults_ = function() {
    this.response = null;
  };
  URLLoader_FollowRedirect_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  URLLoader_FollowRedirect_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, URLLoader_FollowRedirect_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate URLLoader_FollowRedirect_ResponseParams.response
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, URLResponse, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  URLLoader_FollowRedirect_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  URLLoader_FollowRedirect_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new URLLoader_FollowRedirect_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.response = decoder.decodeStructPointer(URLResponse);
    return val;
  };

  URLLoader_FollowRedirect_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(URLLoader_FollowRedirect_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(URLResponse, val.response);
  };
  function URLLoader_QueryStatus_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  URLLoader_QueryStatus_Params.prototype.initDefaults_ = function() {
  };
  URLLoader_QueryStatus_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  URLLoader_QueryStatus_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, URLLoader_QueryStatus_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  URLLoader_QueryStatus_Params.encodedSize = codec.kStructHeaderSize + 0;

  URLLoader_QueryStatus_Params.decode = function(decoder) {
    var packed;
    var val = new URLLoader_QueryStatus_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  URLLoader_QueryStatus_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(URLLoader_QueryStatus_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function URLLoader_QueryStatus_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  URLLoader_QueryStatus_ResponseParams.prototype.initDefaults_ = function() {
    this.status = null;
  };
  URLLoader_QueryStatus_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  URLLoader_QueryStatus_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, URLLoader_QueryStatus_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate URLLoader_QueryStatus_ResponseParams.status
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, URLLoaderStatus, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  URLLoader_QueryStatus_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  URLLoader_QueryStatus_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new URLLoader_QueryStatus_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStructPointer(URLLoaderStatus);
    return val;
  };

  URLLoader_QueryStatus_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(URLLoader_QueryStatus_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(URLLoaderStatus, val.status);
  };
  var kURLLoader_Start_Name = 0;
  var kURLLoader_FollowRedirect_Name = 1;
  var kURLLoader_QueryStatus_Name = 2;

  function URLLoaderProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  URLLoaderProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  URLLoaderProxy.prototype.start = function(request) {
    var params = new URLLoader_Start_Params();
    params.request = request;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kURLLoader_Start_Name,
          codec.align(URLLoader_Start_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(URLLoader_Start_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(URLLoader_Start_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  URLLoaderProxy.prototype.followRedirect = function() {
    var params = new URLLoader_FollowRedirect_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kURLLoader_FollowRedirect_Name,
          codec.align(URLLoader_FollowRedirect_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(URLLoader_FollowRedirect_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(URLLoader_FollowRedirect_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  URLLoaderProxy.prototype.queryStatus = function() {
    var params = new URLLoader_QueryStatus_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kURLLoader_QueryStatus_Name,
          codec.align(URLLoader_QueryStatus_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(URLLoader_QueryStatus_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(URLLoader_QueryStatus_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function URLLoaderStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  URLLoaderStub.prototype = Object.create(bindings.StubBase.prototype);
  URLLoaderStub.prototype.start = function(request) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.start && bindings.StubBindings(this).delegate.start(request);
  }
  URLLoaderStub.prototype.followRedirect = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.followRedirect && bindings.StubBindings(this).delegate.followRedirect();
  }
  URLLoaderStub.prototype.queryStatus = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.queryStatus && bindings.StubBindings(this).delegate.queryStatus();
  }

  URLLoaderStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  URLLoaderStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kURLLoader_Start_Name:
      var params = reader.decodeStruct(URLLoader_Start_Params);
      return this.start(params.request).then(function(response) {
        var responseParams =
            new URLLoader_Start_ResponseParams();
        responseParams.response = response.response;
        var builder = new codec.MessageWithRequestIDBuilder(
            kURLLoader_Start_Name,
            codec.align(URLLoader_Start_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(URLLoader_Start_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kURLLoader_FollowRedirect_Name:
      var params = reader.decodeStruct(URLLoader_FollowRedirect_Params);
      return this.followRedirect().then(function(response) {
        var responseParams =
            new URLLoader_FollowRedirect_ResponseParams();
        responseParams.response = response.response;
        var builder = new codec.MessageWithRequestIDBuilder(
            kURLLoader_FollowRedirect_Name,
            codec.align(URLLoader_FollowRedirect_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(URLLoader_FollowRedirect_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kURLLoader_QueryStatus_Name:
      var params = reader.decodeStruct(URLLoader_QueryStatus_Params);
      return this.queryStatus().then(function(response) {
        var responseParams =
            new URLLoader_QueryStatus_ResponseParams();
        responseParams.status = response.status;
        var builder = new codec.MessageWithRequestIDBuilder(
            kURLLoader_QueryStatus_Name,
            codec.align(URLLoader_QueryStatus_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(URLLoader_QueryStatus_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateURLLoaderRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kURLLoader_Start_Name:
        if (message.expectsResponse())
          paramsClass = URLLoader_Start_Params;
      break;
      case kURLLoader_FollowRedirect_Name:
        if (message.expectsResponse())
          paramsClass = URLLoader_FollowRedirect_Params;
      break;
      case kURLLoader_QueryStatus_Name:
        if (message.expectsResponse())
          paramsClass = URLLoader_QueryStatus_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateURLLoaderResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kURLLoader_Start_Name:
        if (message.isResponse())
          paramsClass = URLLoader_Start_ResponseParams;
        break;
      case kURLLoader_FollowRedirect_Name:
        if (message.isResponse())
          paramsClass = URLLoader_FollowRedirect_ResponseParams;
        break;
      case kURLLoader_QueryStatus_Name:
        if (message.isResponse())
          paramsClass = URLLoader_QueryStatus_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var URLLoader = {
    name: 'mojo::URLLoader',
    proxyClass: URLLoaderProxy,
    stubClass: URLLoaderStub,
    validateRequest: validateURLLoaderRequest,
    validateResponse: validateURLLoaderResponse,
  };
  URLLoaderStub.prototype.validator = validateURLLoaderRequest;
  URLLoaderProxy.prototype.validator = validateURLLoaderResponse;

  var exports = {};
  exports.URLRequest = URLRequest;
  exports.URLResponse = URLResponse;
  exports.URLLoaderStatus = URLLoaderStatus;
  exports.URLLoader = URLLoader;

  return exports;
});
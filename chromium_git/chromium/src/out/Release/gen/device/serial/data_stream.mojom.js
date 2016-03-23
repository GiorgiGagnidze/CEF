// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("device/serial/data_stream.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {

  function DataSource_Init_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DataSource_Init_Params.prototype.initDefaults_ = function() {
    this.buffer_size = 0;
  };
  DataSource_Init_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  DataSource_Init_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, DataSource_Init_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  DataSource_Init_Params.encodedSize = codec.kStructHeaderSize + 8;

  DataSource_Init_Params.decode = function(decoder) {
    var packed;
    var val = new DataSource_Init_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.buffer_size = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  DataSource_Init_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DataSource_Init_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.buffer_size);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function DataSource_Resume_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DataSource_Resume_Params.prototype.initDefaults_ = function() {
  };
  DataSource_Resume_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  DataSource_Resume_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, DataSource_Resume_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DataSource_Resume_Params.encodedSize = codec.kStructHeaderSize + 0;

  DataSource_Resume_Params.decode = function(decoder) {
    var packed;
    var val = new DataSource_Resume_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  DataSource_Resume_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DataSource_Resume_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function DataSource_ReportBytesReceived_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DataSource_ReportBytesReceived_Params.prototype.initDefaults_ = function() {
    this.bytes_sent = 0;
  };
  DataSource_ReportBytesReceived_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  DataSource_ReportBytesReceived_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, DataSource_ReportBytesReceived_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  DataSource_ReportBytesReceived_Params.encodedSize = codec.kStructHeaderSize + 8;

  DataSource_ReportBytesReceived_Params.decode = function(decoder) {
    var packed;
    var val = new DataSource_ReportBytesReceived_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.bytes_sent = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  DataSource_ReportBytesReceived_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DataSource_ReportBytesReceived_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.bytes_sent);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function DataSourceClient_OnError_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DataSourceClient_OnError_Params.prototype.initDefaults_ = function() {
    this.error = 0;
  };
  DataSourceClient_OnError_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  DataSourceClient_OnError_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, DataSourceClient_OnError_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  DataSourceClient_OnError_Params.encodedSize = codec.kStructHeaderSize + 8;

  DataSourceClient_OnError_Params.decode = function(decoder) {
    var packed;
    var val = new DataSourceClient_OnError_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  DataSourceClient_OnError_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DataSourceClient_OnError_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function DataSourceClient_OnData_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DataSourceClient_OnData_Params.prototype.initDefaults_ = function() {
    this.data = null;
  };
  DataSourceClient_OnData_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  DataSourceClient_OnData_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, DataSourceClient_OnData_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate DataSourceClient_OnData_Params.data
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DataSourceClient_OnData_Params.encodedSize = codec.kStructHeaderSize + 8;

  DataSourceClient_OnData_Params.decode = function(decoder) {
    var packed;
    var val = new DataSourceClient_OnData_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.data = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  DataSourceClient_OnData_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DataSourceClient_OnData_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Uint8, val.data);
  };
  function DataSink_Cancel_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DataSink_Cancel_Params.prototype.initDefaults_ = function() {
    this.error = 0;
  };
  DataSink_Cancel_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  DataSink_Cancel_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, DataSink_Cancel_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  DataSink_Cancel_Params.encodedSize = codec.kStructHeaderSize + 8;

  DataSink_Cancel_Params.decode = function(decoder) {
    var packed;
    var val = new DataSink_Cancel_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  DataSink_Cancel_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DataSink_Cancel_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function DataSink_OnData_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DataSink_OnData_Params.prototype.initDefaults_ = function() {
    this.data = null;
  };
  DataSink_OnData_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  DataSink_OnData_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, DataSink_OnData_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate DataSink_OnData_Params.data
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DataSink_OnData_Params.encodedSize = codec.kStructHeaderSize + 8;

  DataSink_OnData_Params.decode = function(decoder) {
    var packed;
    var val = new DataSink_OnData_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.data = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  DataSink_OnData_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DataSink_OnData_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Uint8, val.data);
  };
  function DataSink_OnData_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DataSink_OnData_ResponseParams.prototype.initDefaults_ = function() {
    this.bytes_sent = 0;
    this.error = 0;
  };
  DataSink_OnData_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  DataSink_OnData_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, DataSink_OnData_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  DataSink_OnData_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  DataSink_OnData_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new DataSink_OnData_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.bytes_sent = decoder.decodeStruct(codec.Uint32);
    val.error = decoder.decodeStruct(codec.Int32);
    return val;
  };

  DataSink_OnData_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DataSink_OnData_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.bytes_sent);
    encoder.encodeStruct(codec.Int32, val.error);
  };
  function DataSink_ClearError_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DataSink_ClearError_Params.prototype.initDefaults_ = function() {
  };
  DataSink_ClearError_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  DataSink_ClearError_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, DataSink_ClearError_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DataSink_ClearError_Params.encodedSize = codec.kStructHeaderSize + 0;

  DataSink_ClearError_Params.decode = function(decoder) {
    var packed;
    var val = new DataSink_ClearError_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  DataSink_ClearError_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DataSink_ClearError_Params.encodedSize);
    encoder.writeUint32(0);
  };
  var kDataSource_Init_Name = 0;
  var kDataSource_Resume_Name = 1;
  var kDataSource_ReportBytesReceived_Name = 2;

  function DataSourceProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  DataSourceProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  DataSourceProxy.prototype.init = function(buffer_size) {
    var params = new DataSource_Init_Params();
    params.buffer_size = buffer_size;
    var builder = new codec.MessageBuilder(
        kDataSource_Init_Name,
        codec.align(DataSource_Init_Params.encodedSize));
    builder.encodeStruct(DataSource_Init_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DataSourceProxy.prototype.resume = function() {
    var params = new DataSource_Resume_Params();
    var builder = new codec.MessageBuilder(
        kDataSource_Resume_Name,
        codec.align(DataSource_Resume_Params.encodedSize));
    builder.encodeStruct(DataSource_Resume_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DataSourceProxy.prototype.reportBytesReceived = function(bytes_sent) {
    var params = new DataSource_ReportBytesReceived_Params();
    params.bytes_sent = bytes_sent;
    var builder = new codec.MessageBuilder(
        kDataSource_ReportBytesReceived_Name,
        codec.align(DataSource_ReportBytesReceived_Params.encodedSize));
    builder.encodeStruct(DataSource_ReportBytesReceived_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function DataSourceStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  DataSourceStub.prototype = Object.create(bindings.StubBase.prototype);
  DataSourceStub.prototype.init = function(buffer_size) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.init && bindings.StubBindings(this).delegate.init(buffer_size);
  }
  DataSourceStub.prototype.resume = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.resume && bindings.StubBindings(this).delegate.resume();
  }
  DataSourceStub.prototype.reportBytesReceived = function(bytes_sent) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.reportBytesReceived && bindings.StubBindings(this).delegate.reportBytesReceived(bytes_sent);
  }

  DataSourceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kDataSource_Init_Name:
      var params = reader.decodeStruct(DataSource_Init_Params);
      this.init(params.buffer_size);
      return true;
    case kDataSource_Resume_Name:
      var params = reader.decodeStruct(DataSource_Resume_Params);
      this.resume();
      return true;
    case kDataSource_ReportBytesReceived_Name:
      var params = reader.decodeStruct(DataSource_ReportBytesReceived_Params);
      this.reportBytesReceived(params.bytes_sent);
      return true;
    default:
      return false;
    }
  };

  DataSourceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateDataSourceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kDataSource_Init_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DataSource_Init_Params;
      break;
      case kDataSource_Resume_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DataSource_Resume_Params;
      break;
      case kDataSource_ReportBytesReceived_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DataSource_ReportBytesReceived_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateDataSourceResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var DataSource = {
    name: 'device::serial::DataSource',
    proxyClass: DataSourceProxy,
    stubClass: DataSourceStub,
    validateRequest: validateDataSourceRequest,
    validateResponse: null,
  };
  DataSourceStub.prototype.validator = validateDataSourceRequest;
  DataSourceProxy.prototype.validator = null;
  var kDataSourceClient_OnError_Name = 0;
  var kDataSourceClient_OnData_Name = 1;

  function DataSourceClientProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  DataSourceClientProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  DataSourceClientProxy.prototype.onError = function(error) {
    var params = new DataSourceClient_OnError_Params();
    params.error = error;
    var builder = new codec.MessageBuilder(
        kDataSourceClient_OnError_Name,
        codec.align(DataSourceClient_OnError_Params.encodedSize));
    builder.encodeStruct(DataSourceClient_OnError_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DataSourceClientProxy.prototype.onData = function(data) {
    var params = new DataSourceClient_OnData_Params();
    params.data = data;
    var builder = new codec.MessageBuilder(
        kDataSourceClient_OnData_Name,
        codec.align(DataSourceClient_OnData_Params.encodedSize));
    builder.encodeStruct(DataSourceClient_OnData_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function DataSourceClientStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  DataSourceClientStub.prototype = Object.create(bindings.StubBase.prototype);
  DataSourceClientStub.prototype.onError = function(error) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onError && bindings.StubBindings(this).delegate.onError(error);
  }
  DataSourceClientStub.prototype.onData = function(data) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onData && bindings.StubBindings(this).delegate.onData(data);
  }

  DataSourceClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kDataSourceClient_OnError_Name:
      var params = reader.decodeStruct(DataSourceClient_OnError_Params);
      this.onError(params.error);
      return true;
    case kDataSourceClient_OnData_Name:
      var params = reader.decodeStruct(DataSourceClient_OnData_Params);
      this.onData(params.data);
      return true;
    default:
      return false;
    }
  };

  DataSourceClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateDataSourceClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kDataSourceClient_OnError_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DataSourceClient_OnError_Params;
      break;
      case kDataSourceClient_OnData_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DataSourceClient_OnData_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateDataSourceClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var DataSourceClient = {
    name: 'device::serial::DataSourceClient',
    proxyClass: DataSourceClientProxy,
    stubClass: DataSourceClientStub,
    validateRequest: validateDataSourceClientRequest,
    validateResponse: null,
  };
  DataSourceClientStub.prototype.validator = validateDataSourceClientRequest;
  DataSourceClientProxy.prototype.validator = null;
  var kDataSink_Cancel_Name = 0;
  var kDataSink_OnData_Name = 1;
  var kDataSink_ClearError_Name = 2;

  function DataSinkProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  DataSinkProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  DataSinkProxy.prototype.cancel = function(error) {
    var params = new DataSink_Cancel_Params();
    params.error = error;
    var builder = new codec.MessageBuilder(
        kDataSink_Cancel_Name,
        codec.align(DataSink_Cancel_Params.encodedSize));
    builder.encodeStruct(DataSink_Cancel_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DataSinkProxy.prototype.onData = function(data) {
    var params = new DataSink_OnData_Params();
    params.data = data;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kDataSink_OnData_Name,
          codec.align(DataSink_OnData_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(DataSink_OnData_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(DataSink_OnData_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  DataSinkProxy.prototype.clearError = function() {
    var params = new DataSink_ClearError_Params();
    var builder = new codec.MessageBuilder(
        kDataSink_ClearError_Name,
        codec.align(DataSink_ClearError_Params.encodedSize));
    builder.encodeStruct(DataSink_ClearError_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function DataSinkStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  DataSinkStub.prototype = Object.create(bindings.StubBase.prototype);
  DataSinkStub.prototype.cancel = function(error) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.cancel && bindings.StubBindings(this).delegate.cancel(error);
  }
  DataSinkStub.prototype.onData = function(data) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onData && bindings.StubBindings(this).delegate.onData(data);
  }
  DataSinkStub.prototype.clearError = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.clearError && bindings.StubBindings(this).delegate.clearError();
  }

  DataSinkStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kDataSink_Cancel_Name:
      var params = reader.decodeStruct(DataSink_Cancel_Params);
      this.cancel(params.error);
      return true;
    case kDataSink_ClearError_Name:
      var params = reader.decodeStruct(DataSink_ClearError_Params);
      this.clearError();
      return true;
    default:
      return false;
    }
  };

  DataSinkStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kDataSink_OnData_Name:
      var params = reader.decodeStruct(DataSink_OnData_Params);
      return this.onData(params.data).then(function(response) {
        var responseParams =
            new DataSink_OnData_ResponseParams();
        responseParams.bytes_sent = response.bytes_sent;
        responseParams.error = response.error;
        var builder = new codec.MessageWithRequestIDBuilder(
            kDataSink_OnData_Name,
            codec.align(DataSink_OnData_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(DataSink_OnData_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateDataSinkRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kDataSink_Cancel_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DataSink_Cancel_Params;
      break;
      case kDataSink_OnData_Name:
        if (message.expectsResponse())
          paramsClass = DataSink_OnData_Params;
      break;
      case kDataSink_ClearError_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DataSink_ClearError_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateDataSinkResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kDataSink_OnData_Name:
        if (message.isResponse())
          paramsClass = DataSink_OnData_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var DataSink = {
    name: 'device::serial::DataSink',
    proxyClass: DataSinkProxy,
    stubClass: DataSinkStub,
    validateRequest: validateDataSinkRequest,
    validateResponse: validateDataSinkResponse,
  };
  DataSinkStub.prototype.validator = validateDataSinkRequest;
  DataSinkProxy.prototype.validator = validateDataSinkResponse;

  var exports = {};
  exports.DataSource = DataSource;
  exports.DataSourceClient = DataSourceClient;
  exports.DataSink = DataSink;

  return exports;
});
// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("net/interfaces/proxy_resolver_service.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "net/interfaces/host_resolver_service.mojom",
], function(bindings, codec, connection, core, validator, host_resolver_service$) {
  var ProxyScheme = {};
  ProxyScheme.INVALID = 0;
  ProxyScheme.DIRECT = ProxyScheme.INVALID + 1;
  ProxyScheme.HTTP = ProxyScheme.DIRECT + 1;
  ProxyScheme.SOCKS4 = ProxyScheme.HTTP + 1;
  ProxyScheme.SOCKS5 = ProxyScheme.SOCKS4 + 1;
  ProxyScheme.HTTPS = ProxyScheme.SOCKS5 + 1;
  ProxyScheme.QUIC = ProxyScheme.HTTPS + 1;

  function ProxyServer(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProxyServer.prototype.initDefaults_ = function() {
    this.scheme = 0;
    this.port = 0;
    this.host = null;
  };
  ProxyServer.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ProxyServer.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ProxyServer.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



    
    // validate ProxyServer.host
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProxyServer.encodedSize = codec.kStructHeaderSize + 16;

  ProxyServer.decode = function(decoder) {
    var packed;
    var val = new ProxyServer();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.scheme = decoder.decodeStruct(codec.Int32);
    val.port = decoder.decodeStruct(codec.Uint16);
    decoder.skip(1);
    decoder.skip(1);
    val.host = decoder.decodeStruct(codec.NullableString);
    return val;
  };

  ProxyServer.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProxyServer.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.scheme);
    encoder.encodeStruct(codec.Uint16, val.port);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.NullableString, val.host);
  };
  function ProxyResolver_GetProxyForUrl_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProxyResolver_GetProxyForUrl_Params.prototype.initDefaults_ = function() {
    this.url = null;
    this.client = null;
  };
  ProxyResolver_GetProxyForUrl_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ProxyResolver_GetProxyForUrl_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ProxyResolver_GetProxyForUrl_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ProxyResolver_GetProxyForUrl_Params.url
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ProxyResolver_GetProxyForUrl_Params.client
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 8, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProxyResolver_GetProxyForUrl_Params.encodedSize = codec.kStructHeaderSize + 16;

  ProxyResolver_GetProxyForUrl_Params.decode = function(decoder) {
    var packed;
    var val = new ProxyResolver_GetProxyForUrl_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.url = decoder.decodeStruct(codec.String);
    val.client = decoder.decodeStruct(codec.Interface);
    return val;
  };

  ProxyResolver_GetProxyForUrl_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProxyResolver_GetProxyForUrl_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.url);
    encoder.encodeStruct(codec.Interface, val.client);
  };
  function ProxyResolverRequestClient_ReportResult_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProxyResolverRequestClient_ReportResult_Params.prototype.initDefaults_ = function() {
    this.error = 0;
    this.proxy_servers = null;
  };
  ProxyResolverRequestClient_ReportResult_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ProxyResolverRequestClient_ReportResult_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ProxyResolverRequestClient_ReportResult_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate ProxyResolverRequestClient_ReportResult_Params.proxy_servers
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(ProxyServer), true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProxyResolverRequestClient_ReportResult_Params.encodedSize = codec.kStructHeaderSize + 16;

  ProxyResolverRequestClient_ReportResult_Params.decode = function(decoder) {
    var packed;
    var val = new ProxyResolverRequestClient_ReportResult_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.proxy_servers = decoder.decodeArrayPointer(new codec.PointerTo(ProxyServer));
    return val;
  };

  ProxyResolverRequestClient_ReportResult_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProxyResolverRequestClient_ReportResult_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(new codec.PointerTo(ProxyServer), val.proxy_servers);
  };
  function ProxyResolverRequestClient_Alert_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProxyResolverRequestClient_Alert_Params.prototype.initDefaults_ = function() {
    this.error = null;
  };
  ProxyResolverRequestClient_Alert_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ProxyResolverRequestClient_Alert_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ProxyResolverRequestClient_Alert_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ProxyResolverRequestClient_Alert_Params.error
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProxyResolverRequestClient_Alert_Params.encodedSize = codec.kStructHeaderSize + 8;

  ProxyResolverRequestClient_Alert_Params.decode = function(decoder) {
    var packed;
    var val = new ProxyResolverRequestClient_Alert_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.String);
    return val;
  };

  ProxyResolverRequestClient_Alert_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProxyResolverRequestClient_Alert_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.error);
  };
  function ProxyResolverRequestClient_OnError_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProxyResolverRequestClient_OnError_Params.prototype.initDefaults_ = function() {
    this.line_number = 0;
    this.error = null;
  };
  ProxyResolverRequestClient_OnError_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ProxyResolverRequestClient_OnError_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ProxyResolverRequestClient_OnError_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate ProxyResolverRequestClient_OnError_Params.error
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProxyResolverRequestClient_OnError_Params.encodedSize = codec.kStructHeaderSize + 16;

  ProxyResolverRequestClient_OnError_Params.decode = function(decoder) {
    var packed;
    var val = new ProxyResolverRequestClient_OnError_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.line_number = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.error = decoder.decodeStruct(codec.String);
    return val;
  };

  ProxyResolverRequestClient_OnError_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProxyResolverRequestClient_OnError_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.line_number);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.error);
  };
  function ProxyResolverRequestClient_ResolveDns_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProxyResolverRequestClient_ResolveDns_Params.prototype.initDefaults_ = function() {
    this.request_info = null;
    this.client = null;
  };
  ProxyResolverRequestClient_ResolveDns_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ProxyResolverRequestClient_ResolveDns_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ProxyResolverRequestClient_ResolveDns_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ProxyResolverRequestClient_ResolveDns_Params.request_info
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, host_resolver_service$.HostResolverRequestInfo, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ProxyResolverRequestClient_ResolveDns_Params.client
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 8, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProxyResolverRequestClient_ResolveDns_Params.encodedSize = codec.kStructHeaderSize + 16;

  ProxyResolverRequestClient_ResolveDns_Params.decode = function(decoder) {
    var packed;
    var val = new ProxyResolverRequestClient_ResolveDns_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.request_info = decoder.decodeStructPointer(host_resolver_service$.HostResolverRequestInfo);
    val.client = decoder.decodeStruct(codec.Interface);
    return val;
  };

  ProxyResolverRequestClient_ResolveDns_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProxyResolverRequestClient_ResolveDns_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(host_resolver_service$.HostResolverRequestInfo, val.request_info);
    encoder.encodeStruct(codec.Interface, val.client);
  };
  function ProxyResolverFactory_CreateResolver_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProxyResolverFactory_CreateResolver_Params.prototype.initDefaults_ = function() {
    this.pac_script = null;
    this.resolver = null;
    this.client = null;
  };
  ProxyResolverFactory_CreateResolver_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ProxyResolverFactory_CreateResolver_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ProxyResolverFactory_CreateResolver_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ProxyResolverFactory_CreateResolver_Params.pac_script
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ProxyResolverFactory_CreateResolver_Params.resolver
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ProxyResolverFactory_CreateResolver_Params.client
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 12, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProxyResolverFactory_CreateResolver_Params.encodedSize = codec.kStructHeaderSize + 24;

  ProxyResolverFactory_CreateResolver_Params.decode = function(decoder) {
    var packed;
    var val = new ProxyResolverFactory_CreateResolver_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.pac_script = decoder.decodeStruct(codec.String);
    val.resolver = decoder.decodeStruct(codec.Handle);
    val.client = decoder.decodeStruct(codec.Interface);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ProxyResolverFactory_CreateResolver_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProxyResolverFactory_CreateResolver_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.pac_script);
    encoder.encodeStruct(codec.Handle, val.resolver);
    encoder.encodeStruct(codec.Interface, val.client);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ProxyResolverFactoryRequestClient_ReportResult_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProxyResolverFactoryRequestClient_ReportResult_Params.prototype.initDefaults_ = function() {
    this.error = 0;
  };
  ProxyResolverFactoryRequestClient_ReportResult_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ProxyResolverFactoryRequestClient_ReportResult_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ProxyResolverFactoryRequestClient_ReportResult_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  ProxyResolverFactoryRequestClient_ReportResult_Params.encodedSize = codec.kStructHeaderSize + 8;

  ProxyResolverFactoryRequestClient_ReportResult_Params.decode = function(decoder) {
    var packed;
    var val = new ProxyResolverFactoryRequestClient_ReportResult_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ProxyResolverFactoryRequestClient_ReportResult_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProxyResolverFactoryRequestClient_ReportResult_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ProxyResolverFactoryRequestClient_Alert_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProxyResolverFactoryRequestClient_Alert_Params.prototype.initDefaults_ = function() {
    this.error = null;
  };
  ProxyResolverFactoryRequestClient_Alert_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ProxyResolverFactoryRequestClient_Alert_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ProxyResolverFactoryRequestClient_Alert_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ProxyResolverFactoryRequestClient_Alert_Params.error
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProxyResolverFactoryRequestClient_Alert_Params.encodedSize = codec.kStructHeaderSize + 8;

  ProxyResolverFactoryRequestClient_Alert_Params.decode = function(decoder) {
    var packed;
    var val = new ProxyResolverFactoryRequestClient_Alert_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.String);
    return val;
  };

  ProxyResolverFactoryRequestClient_Alert_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProxyResolverFactoryRequestClient_Alert_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.error);
  };
  function ProxyResolverFactoryRequestClient_OnError_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProxyResolverFactoryRequestClient_OnError_Params.prototype.initDefaults_ = function() {
    this.line_number = 0;
    this.error = null;
  };
  ProxyResolverFactoryRequestClient_OnError_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ProxyResolverFactoryRequestClient_OnError_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ProxyResolverFactoryRequestClient_OnError_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate ProxyResolverFactoryRequestClient_OnError_Params.error
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProxyResolverFactoryRequestClient_OnError_Params.encodedSize = codec.kStructHeaderSize + 16;

  ProxyResolverFactoryRequestClient_OnError_Params.decode = function(decoder) {
    var packed;
    var val = new ProxyResolverFactoryRequestClient_OnError_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.line_number = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.error = decoder.decodeStruct(codec.String);
    return val;
  };

  ProxyResolverFactoryRequestClient_OnError_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProxyResolverFactoryRequestClient_OnError_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.line_number);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.error);
  };
  function ProxyResolverFactoryRequestClient_ResolveDns_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProxyResolverFactoryRequestClient_ResolveDns_Params.prototype.initDefaults_ = function() {
    this.request_info = null;
    this.client = null;
  };
  ProxyResolverFactoryRequestClient_ResolveDns_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ProxyResolverFactoryRequestClient_ResolveDns_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ProxyResolverFactoryRequestClient_ResolveDns_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ProxyResolverFactoryRequestClient_ResolveDns_Params.request_info
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, host_resolver_service$.HostResolverRequestInfo, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ProxyResolverFactoryRequestClient_ResolveDns_Params.client
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 8, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProxyResolverFactoryRequestClient_ResolveDns_Params.encodedSize = codec.kStructHeaderSize + 16;

  ProxyResolverFactoryRequestClient_ResolveDns_Params.decode = function(decoder) {
    var packed;
    var val = new ProxyResolverFactoryRequestClient_ResolveDns_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.request_info = decoder.decodeStructPointer(host_resolver_service$.HostResolverRequestInfo);
    val.client = decoder.decodeStruct(codec.Interface);
    return val;
  };

  ProxyResolverFactoryRequestClient_ResolveDns_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProxyResolverFactoryRequestClient_ResolveDns_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(host_resolver_service$.HostResolverRequestInfo, val.request_info);
    encoder.encodeStruct(codec.Interface, val.client);
  };
  var kProxyResolver_GetProxyForUrl_Name = 0;

  function ProxyResolverProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  ProxyResolverProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  ProxyResolverProxy.prototype.getProxyForUrl = function(url, client) {
    var params = new ProxyResolver_GetProxyForUrl_Params();
    params.url = url;
    params.client = core.isHandle(client) ? client : connection.bindImpl(client, ProxyResolverRequestClient);
    var builder = new codec.MessageBuilder(
        kProxyResolver_GetProxyForUrl_Name,
        codec.align(ProxyResolver_GetProxyForUrl_Params.encodedSize));
    builder.encodeStruct(ProxyResolver_GetProxyForUrl_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ProxyResolverStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  ProxyResolverStub.prototype = Object.create(bindings.StubBase.prototype);
  ProxyResolverStub.prototype.getProxyForUrl = function(url, client) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.getProxyForUrl && bindings.StubBindings(this).delegate.getProxyForUrl(url, connection.bindHandleToProxy(client, ProxyResolverRequestClient));
  }

  ProxyResolverStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kProxyResolver_GetProxyForUrl_Name:
      var params = reader.decodeStruct(ProxyResolver_GetProxyForUrl_Params);
      this.getProxyForUrl(params.url, params.client);
      return true;
    default:
      return false;
    }
  };

  ProxyResolverStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateProxyResolverRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kProxyResolver_GetProxyForUrl_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProxyResolver_GetProxyForUrl_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateProxyResolverResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ProxyResolver = {
    name: 'net::interfaces::ProxyResolver',
    proxyClass: ProxyResolverProxy,
    stubClass: ProxyResolverStub,
    validateRequest: validateProxyResolverRequest,
    validateResponse: null,
  };
  ProxyResolverStub.prototype.validator = validateProxyResolverRequest;
  ProxyResolverProxy.prototype.validator = null;
  var kProxyResolverRequestClient_ReportResult_Name = 0;
  var kProxyResolverRequestClient_Alert_Name = 1;
  var kProxyResolverRequestClient_OnError_Name = 2;
  var kProxyResolverRequestClient_ResolveDns_Name = 3;

  function ProxyResolverRequestClientProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  ProxyResolverRequestClientProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  ProxyResolverRequestClientProxy.prototype.reportResult = function(error, proxy_servers) {
    var params = new ProxyResolverRequestClient_ReportResult_Params();
    params.error = error;
    params.proxy_servers = proxy_servers;
    var builder = new codec.MessageBuilder(
        kProxyResolverRequestClient_ReportResult_Name,
        codec.align(ProxyResolverRequestClient_ReportResult_Params.encodedSize));
    builder.encodeStruct(ProxyResolverRequestClient_ReportResult_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ProxyResolverRequestClientProxy.prototype.alert = function(error) {
    var params = new ProxyResolverRequestClient_Alert_Params();
    params.error = error;
    var builder = new codec.MessageBuilder(
        kProxyResolverRequestClient_Alert_Name,
        codec.align(ProxyResolverRequestClient_Alert_Params.encodedSize));
    builder.encodeStruct(ProxyResolverRequestClient_Alert_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ProxyResolverRequestClientProxy.prototype.onError = function(line_number, error) {
    var params = new ProxyResolverRequestClient_OnError_Params();
    params.line_number = line_number;
    params.error = error;
    var builder = new codec.MessageBuilder(
        kProxyResolverRequestClient_OnError_Name,
        codec.align(ProxyResolverRequestClient_OnError_Params.encodedSize));
    builder.encodeStruct(ProxyResolverRequestClient_OnError_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ProxyResolverRequestClientProxy.prototype.resolveDns = function(request_info, client) {
    var params = new ProxyResolverRequestClient_ResolveDns_Params();
    params.request_info = request_info;
    params.client = core.isHandle(client) ? client : connection.bindImpl(client, host_resolver_service$.HostResolverRequestClient);
    var builder = new codec.MessageBuilder(
        kProxyResolverRequestClient_ResolveDns_Name,
        codec.align(ProxyResolverRequestClient_ResolveDns_Params.encodedSize));
    builder.encodeStruct(ProxyResolverRequestClient_ResolveDns_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ProxyResolverRequestClientStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  ProxyResolverRequestClientStub.prototype = Object.create(bindings.StubBase.prototype);
  ProxyResolverRequestClientStub.prototype.reportResult = function(error, proxy_servers) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.reportResult && bindings.StubBindings(this).delegate.reportResult(error, proxy_servers);
  }
  ProxyResolverRequestClientStub.prototype.alert = function(error) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.alert && bindings.StubBindings(this).delegate.alert(error);
  }
  ProxyResolverRequestClientStub.prototype.onError = function(line_number, error) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onError && bindings.StubBindings(this).delegate.onError(line_number, error);
  }
  ProxyResolverRequestClientStub.prototype.resolveDns = function(request_info, client) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.resolveDns && bindings.StubBindings(this).delegate.resolveDns(request_info, connection.bindHandleToProxy(client, host_resolver_service$.HostResolverRequestClient));
  }

  ProxyResolverRequestClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kProxyResolverRequestClient_ReportResult_Name:
      var params = reader.decodeStruct(ProxyResolverRequestClient_ReportResult_Params);
      this.reportResult(params.error, params.proxy_servers);
      return true;
    case kProxyResolverRequestClient_Alert_Name:
      var params = reader.decodeStruct(ProxyResolverRequestClient_Alert_Params);
      this.alert(params.error);
      return true;
    case kProxyResolverRequestClient_OnError_Name:
      var params = reader.decodeStruct(ProxyResolverRequestClient_OnError_Params);
      this.onError(params.line_number, params.error);
      return true;
    case kProxyResolverRequestClient_ResolveDns_Name:
      var params = reader.decodeStruct(ProxyResolverRequestClient_ResolveDns_Params);
      this.resolveDns(params.request_info, params.client);
      return true;
    default:
      return false;
    }
  };

  ProxyResolverRequestClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateProxyResolverRequestClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kProxyResolverRequestClient_ReportResult_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProxyResolverRequestClient_ReportResult_Params;
      break;
      case kProxyResolverRequestClient_Alert_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProxyResolverRequestClient_Alert_Params;
      break;
      case kProxyResolverRequestClient_OnError_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProxyResolverRequestClient_OnError_Params;
      break;
      case kProxyResolverRequestClient_ResolveDns_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProxyResolverRequestClient_ResolveDns_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateProxyResolverRequestClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ProxyResolverRequestClient = {
    name: 'net::interfaces::ProxyResolverRequestClient',
    proxyClass: ProxyResolverRequestClientProxy,
    stubClass: ProxyResolverRequestClientStub,
    validateRequest: validateProxyResolverRequestClientRequest,
    validateResponse: null,
  };
  ProxyResolverRequestClientStub.prototype.validator = validateProxyResolverRequestClientRequest;
  ProxyResolverRequestClientProxy.prototype.validator = null;
  var kProxyResolverFactory_CreateResolver_Name = 0;

  function ProxyResolverFactoryProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  ProxyResolverFactoryProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  ProxyResolverFactoryProxy.prototype.createResolver = function(pac_script, resolver, client) {
    var params = new ProxyResolverFactory_CreateResolver_Params();
    params.pac_script = pac_script;
    params.resolver = core.isHandle(resolver) ? resolver : connection.bindProxy(resolver, ProxyResolver);
    params.client = core.isHandle(client) ? client : connection.bindImpl(client, ProxyResolverFactoryRequestClient);
    var builder = new codec.MessageBuilder(
        kProxyResolverFactory_CreateResolver_Name,
        codec.align(ProxyResolverFactory_CreateResolver_Params.encodedSize));
    builder.encodeStruct(ProxyResolverFactory_CreateResolver_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ProxyResolverFactoryStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  ProxyResolverFactoryStub.prototype = Object.create(bindings.StubBase.prototype);
  ProxyResolverFactoryStub.prototype.createResolver = function(pac_script, resolver, client) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.createResolver && bindings.StubBindings(this).delegate.createResolver(pac_script, connection.bindHandleToStub(resolver, ProxyResolver), connection.bindHandleToProxy(client, ProxyResolverFactoryRequestClient));
  }

  ProxyResolverFactoryStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kProxyResolverFactory_CreateResolver_Name:
      var params = reader.decodeStruct(ProxyResolverFactory_CreateResolver_Params);
      this.createResolver(params.pac_script, params.resolver, params.client);
      return true;
    default:
      return false;
    }
  };

  ProxyResolverFactoryStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateProxyResolverFactoryRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kProxyResolverFactory_CreateResolver_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProxyResolverFactory_CreateResolver_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateProxyResolverFactoryResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ProxyResolverFactory = {
    name: 'net::interfaces::ProxyResolverFactory',
    proxyClass: ProxyResolverFactoryProxy,
    stubClass: ProxyResolverFactoryStub,
    validateRequest: validateProxyResolverFactoryRequest,
    validateResponse: null,
  };
  ProxyResolverFactoryStub.prototype.validator = validateProxyResolverFactoryRequest;
  ProxyResolverFactoryProxy.prototype.validator = null;
  var kProxyResolverFactoryRequestClient_ReportResult_Name = 0;
  var kProxyResolverFactoryRequestClient_Alert_Name = 1;
  var kProxyResolverFactoryRequestClient_OnError_Name = 2;
  var kProxyResolverFactoryRequestClient_ResolveDns_Name = 3;

  function ProxyResolverFactoryRequestClientProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  ProxyResolverFactoryRequestClientProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  ProxyResolverFactoryRequestClientProxy.prototype.reportResult = function(error) {
    var params = new ProxyResolverFactoryRequestClient_ReportResult_Params();
    params.error = error;
    var builder = new codec.MessageBuilder(
        kProxyResolverFactoryRequestClient_ReportResult_Name,
        codec.align(ProxyResolverFactoryRequestClient_ReportResult_Params.encodedSize));
    builder.encodeStruct(ProxyResolverFactoryRequestClient_ReportResult_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ProxyResolverFactoryRequestClientProxy.prototype.alert = function(error) {
    var params = new ProxyResolverFactoryRequestClient_Alert_Params();
    params.error = error;
    var builder = new codec.MessageBuilder(
        kProxyResolverFactoryRequestClient_Alert_Name,
        codec.align(ProxyResolverFactoryRequestClient_Alert_Params.encodedSize));
    builder.encodeStruct(ProxyResolverFactoryRequestClient_Alert_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ProxyResolverFactoryRequestClientProxy.prototype.onError = function(line_number, error) {
    var params = new ProxyResolverFactoryRequestClient_OnError_Params();
    params.line_number = line_number;
    params.error = error;
    var builder = new codec.MessageBuilder(
        kProxyResolverFactoryRequestClient_OnError_Name,
        codec.align(ProxyResolverFactoryRequestClient_OnError_Params.encodedSize));
    builder.encodeStruct(ProxyResolverFactoryRequestClient_OnError_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ProxyResolverFactoryRequestClientProxy.prototype.resolveDns = function(request_info, client) {
    var params = new ProxyResolverFactoryRequestClient_ResolveDns_Params();
    params.request_info = request_info;
    params.client = core.isHandle(client) ? client : connection.bindImpl(client, host_resolver_service$.HostResolverRequestClient);
    var builder = new codec.MessageBuilder(
        kProxyResolverFactoryRequestClient_ResolveDns_Name,
        codec.align(ProxyResolverFactoryRequestClient_ResolveDns_Params.encodedSize));
    builder.encodeStruct(ProxyResolverFactoryRequestClient_ResolveDns_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ProxyResolverFactoryRequestClientStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  ProxyResolverFactoryRequestClientStub.prototype = Object.create(bindings.StubBase.prototype);
  ProxyResolverFactoryRequestClientStub.prototype.reportResult = function(error) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.reportResult && bindings.StubBindings(this).delegate.reportResult(error);
  }
  ProxyResolverFactoryRequestClientStub.prototype.alert = function(error) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.alert && bindings.StubBindings(this).delegate.alert(error);
  }
  ProxyResolverFactoryRequestClientStub.prototype.onError = function(line_number, error) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onError && bindings.StubBindings(this).delegate.onError(line_number, error);
  }
  ProxyResolverFactoryRequestClientStub.prototype.resolveDns = function(request_info, client) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.resolveDns && bindings.StubBindings(this).delegate.resolveDns(request_info, connection.bindHandleToProxy(client, host_resolver_service$.HostResolverRequestClient));
  }

  ProxyResolverFactoryRequestClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kProxyResolverFactoryRequestClient_ReportResult_Name:
      var params = reader.decodeStruct(ProxyResolverFactoryRequestClient_ReportResult_Params);
      this.reportResult(params.error);
      return true;
    case kProxyResolverFactoryRequestClient_Alert_Name:
      var params = reader.decodeStruct(ProxyResolverFactoryRequestClient_Alert_Params);
      this.alert(params.error);
      return true;
    case kProxyResolverFactoryRequestClient_OnError_Name:
      var params = reader.decodeStruct(ProxyResolverFactoryRequestClient_OnError_Params);
      this.onError(params.line_number, params.error);
      return true;
    case kProxyResolverFactoryRequestClient_ResolveDns_Name:
      var params = reader.decodeStruct(ProxyResolverFactoryRequestClient_ResolveDns_Params);
      this.resolveDns(params.request_info, params.client);
      return true;
    default:
      return false;
    }
  };

  ProxyResolverFactoryRequestClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateProxyResolverFactoryRequestClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kProxyResolverFactoryRequestClient_ReportResult_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProxyResolverFactoryRequestClient_ReportResult_Params;
      break;
      case kProxyResolverFactoryRequestClient_Alert_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProxyResolverFactoryRequestClient_Alert_Params;
      break;
      case kProxyResolverFactoryRequestClient_OnError_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProxyResolverFactoryRequestClient_OnError_Params;
      break;
      case kProxyResolverFactoryRequestClient_ResolveDns_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProxyResolverFactoryRequestClient_ResolveDns_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateProxyResolverFactoryRequestClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ProxyResolverFactoryRequestClient = {
    name: 'net::interfaces::ProxyResolverFactoryRequestClient',
    proxyClass: ProxyResolverFactoryRequestClientProxy,
    stubClass: ProxyResolverFactoryRequestClientStub,
    validateRequest: validateProxyResolverFactoryRequestClientRequest,
    validateResponse: null,
  };
  ProxyResolverFactoryRequestClientStub.prototype.validator = validateProxyResolverFactoryRequestClientRequest;
  ProxyResolverFactoryRequestClientProxy.prototype.validator = null;

  var exports = {};
  exports.ProxyScheme = ProxyScheme;
  exports.ProxyServer = ProxyServer;
  exports.ProxyResolver = ProxyResolver;
  exports.ProxyResolverRequestClient = ProxyResolverRequestClient;
  exports.ProxyResolverFactory = ProxyResolverFactory;
  exports.ProxyResolverFactoryRequestClient = ProxyResolverFactoryRequestClient;

  return exports;
});
// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("mojo/shell/public/interfaces/application_manager.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "mojo/shell/public/interfaces/shell.mojom",
], function(bindings, codec, connection, core, validator, shell$) {

  function ApplicationInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ApplicationInfo.prototype.initDefaults_ = function() {
    this.id = 0;
    this.pid = 0;
    this.url = null;
    this.qualifier = null;
    this.name = null;
  };
  ApplicationInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ApplicationInfo.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ApplicationInfo.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



    
    // validate ApplicationInfo.url
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ApplicationInfo.qualifier
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ApplicationInfo.name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 24, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ApplicationInfo.encodedSize = codec.kStructHeaderSize + 32;

  ApplicationInfo.decode = function(decoder) {
    var packed;
    var val = new ApplicationInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.Uint32);
    val.pid = decoder.decodeStruct(codec.Uint32);
    val.url = decoder.decodeStruct(codec.String);
    val.qualifier = decoder.decodeStruct(codec.String);
    val.name = decoder.decodeStruct(codec.String);
    return val;
  };

  ApplicationInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ApplicationInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.id);
    encoder.encodeStruct(codec.Uint32, val.pid);
    encoder.encodeStruct(codec.String, val.url);
    encoder.encodeStruct(codec.String, val.qualifier);
    encoder.encodeStruct(codec.String, val.name);
  };
  function ApplicationManagerListener_SetRunningApplications_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ApplicationManagerListener_SetRunningApplications_Params.prototype.initDefaults_ = function() {
    this.applications = null;
  };
  ApplicationManagerListener_SetRunningApplications_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ApplicationManagerListener_SetRunningApplications_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ApplicationManagerListener_SetRunningApplications_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ApplicationManagerListener_SetRunningApplications_Params.applications
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(ApplicationInfo), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ApplicationManagerListener_SetRunningApplications_Params.encodedSize = codec.kStructHeaderSize + 8;

  ApplicationManagerListener_SetRunningApplications_Params.decode = function(decoder) {
    var packed;
    var val = new ApplicationManagerListener_SetRunningApplications_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.applications = decoder.decodeArrayPointer(new codec.PointerTo(ApplicationInfo));
    return val;
  };

  ApplicationManagerListener_SetRunningApplications_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ApplicationManagerListener_SetRunningApplications_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(ApplicationInfo), val.applications);
  };
  function ApplicationManagerListener_ApplicationInstanceCreated_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ApplicationManagerListener_ApplicationInstanceCreated_Params.prototype.initDefaults_ = function() {
    this.application = null;
  };
  ApplicationManagerListener_ApplicationInstanceCreated_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ApplicationManagerListener_ApplicationInstanceCreated_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ApplicationManagerListener_ApplicationInstanceCreated_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ApplicationManagerListener_ApplicationInstanceCreated_Params.application
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, ApplicationInfo, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ApplicationManagerListener_ApplicationInstanceCreated_Params.encodedSize = codec.kStructHeaderSize + 8;

  ApplicationManagerListener_ApplicationInstanceCreated_Params.decode = function(decoder) {
    var packed;
    var val = new ApplicationManagerListener_ApplicationInstanceCreated_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.application = decoder.decodeStructPointer(ApplicationInfo);
    return val;
  };

  ApplicationManagerListener_ApplicationInstanceCreated_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ApplicationManagerListener_ApplicationInstanceCreated_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(ApplicationInfo, val.application);
  };
  function ApplicationManagerListener_ApplicationInstanceDestroyed_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ApplicationManagerListener_ApplicationInstanceDestroyed_Params.prototype.initDefaults_ = function() {
    this.id = 0;
  };
  ApplicationManagerListener_ApplicationInstanceDestroyed_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ApplicationManagerListener_ApplicationInstanceDestroyed_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ApplicationManagerListener_ApplicationInstanceDestroyed_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  ApplicationManagerListener_ApplicationInstanceDestroyed_Params.encodedSize = codec.kStructHeaderSize + 8;

  ApplicationManagerListener_ApplicationInstanceDestroyed_Params.decode = function(decoder) {
    var packed;
    var val = new ApplicationManagerListener_ApplicationInstanceDestroyed_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ApplicationManagerListener_ApplicationInstanceDestroyed_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ApplicationManagerListener_ApplicationInstanceDestroyed_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.id);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ApplicationManagerListener_ApplicationPIDAvailable_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ApplicationManagerListener_ApplicationPIDAvailable_Params.prototype.initDefaults_ = function() {
    this.id = 0;
    this.pid = 0;
  };
  ApplicationManagerListener_ApplicationPIDAvailable_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ApplicationManagerListener_ApplicationPIDAvailable_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ApplicationManagerListener_ApplicationPIDAvailable_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  ApplicationManagerListener_ApplicationPIDAvailable_Params.encodedSize = codec.kStructHeaderSize + 8;

  ApplicationManagerListener_ApplicationPIDAvailable_Params.decode = function(decoder) {
    var packed;
    var val = new ApplicationManagerListener_ApplicationPIDAvailable_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.Uint32);
    val.pid = decoder.decodeStruct(codec.Uint32);
    return val;
  };

  ApplicationManagerListener_ApplicationPIDAvailable_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ApplicationManagerListener_ApplicationPIDAvailable_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.id);
    encoder.encodeStruct(codec.Uint32, val.pid);
  };
  function PIDReceiver_SetPID_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PIDReceiver_SetPID_Params.prototype.initDefaults_ = function() {
    this.pid = 0;
  };
  PIDReceiver_SetPID_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PIDReceiver_SetPID_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PIDReceiver_SetPID_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  PIDReceiver_SetPID_Params.encodedSize = codec.kStructHeaderSize + 8;

  PIDReceiver_SetPID_Params.decode = function(decoder) {
    var packed;
    var val = new PIDReceiver_SetPID_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.pid = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PIDReceiver_SetPID_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PIDReceiver_SetPID_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.pid);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ApplicationManager_CreateInstanceForHandle_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ApplicationManager_CreateInstanceForHandle_Params.prototype.initDefaults_ = function() {
    this.channel = null;
    this.pid_receiver = null;
    this.url = null;
    this.filter = null;
  };
  ApplicationManager_CreateInstanceForHandle_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ApplicationManager_CreateInstanceForHandle_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ApplicationManager_CreateInstanceForHandle_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ApplicationManager_CreateInstanceForHandle_Params.channel
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ApplicationManager_CreateInstanceForHandle_Params.pid_receiver
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 4, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ApplicationManager_CreateInstanceForHandle_Params.url
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ApplicationManager_CreateInstanceForHandle_Params.filter
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, shell$.CapabilityFilter, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ApplicationManager_CreateInstanceForHandle_Params.encodedSize = codec.kStructHeaderSize + 24;

  ApplicationManager_CreateInstanceForHandle_Params.decode = function(decoder) {
    var packed;
    var val = new ApplicationManager_CreateInstanceForHandle_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.channel = decoder.decodeStruct(codec.Handle);
    val.pid_receiver = decoder.decodeStruct(codec.Handle);
    val.url = decoder.decodeStruct(codec.String);
    val.filter = decoder.decodeStructPointer(shell$.CapabilityFilter);
    return val;
  };

  ApplicationManager_CreateInstanceForHandle_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ApplicationManager_CreateInstanceForHandle_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.channel);
    encoder.encodeStruct(codec.Handle, val.pid_receiver);
    encoder.encodeStruct(codec.String, val.url);
    encoder.encodeStructPointer(shell$.CapabilityFilter, val.filter);
  };
  function ApplicationManager_AddListener_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ApplicationManager_AddListener_Params.prototype.initDefaults_ = function() {
    this.listener = null;
  };
  ApplicationManager_AddListener_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ApplicationManager_AddListener_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ApplicationManager_AddListener_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ApplicationManager_AddListener_Params.listener
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ApplicationManager_AddListener_Params.encodedSize = codec.kStructHeaderSize + 8;

  ApplicationManager_AddListener_Params.decode = function(decoder) {
    var packed;
    var val = new ApplicationManager_AddListener_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.listener = decoder.decodeStruct(codec.Interface);
    return val;
  };

  ApplicationManager_AddListener_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ApplicationManager_AddListener_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Interface, val.listener);
  };
  var kApplicationManagerListener_SetRunningApplications_Name = 0;
  var kApplicationManagerListener_ApplicationInstanceCreated_Name = 1;
  var kApplicationManagerListener_ApplicationInstanceDestroyed_Name = 2;
  var kApplicationManagerListener_ApplicationPIDAvailable_Name = 3;

  function ApplicationManagerListenerProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  ApplicationManagerListenerProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  ApplicationManagerListenerProxy.prototype.setRunningApplications = function(applications) {
    var params = new ApplicationManagerListener_SetRunningApplications_Params();
    params.applications = applications;
    var builder = new codec.MessageBuilder(
        kApplicationManagerListener_SetRunningApplications_Name,
        codec.align(ApplicationManagerListener_SetRunningApplications_Params.encodedSize));
    builder.encodeStruct(ApplicationManagerListener_SetRunningApplications_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ApplicationManagerListenerProxy.prototype.applicationInstanceCreated = function(application) {
    var params = new ApplicationManagerListener_ApplicationInstanceCreated_Params();
    params.application = application;
    var builder = new codec.MessageBuilder(
        kApplicationManagerListener_ApplicationInstanceCreated_Name,
        codec.align(ApplicationManagerListener_ApplicationInstanceCreated_Params.encodedSize));
    builder.encodeStruct(ApplicationManagerListener_ApplicationInstanceCreated_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ApplicationManagerListenerProxy.prototype.applicationInstanceDestroyed = function(id) {
    var params = new ApplicationManagerListener_ApplicationInstanceDestroyed_Params();
    params.id = id;
    var builder = new codec.MessageBuilder(
        kApplicationManagerListener_ApplicationInstanceDestroyed_Name,
        codec.align(ApplicationManagerListener_ApplicationInstanceDestroyed_Params.encodedSize));
    builder.encodeStruct(ApplicationManagerListener_ApplicationInstanceDestroyed_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ApplicationManagerListenerProxy.prototype.applicationPIDAvailable = function(id, pid) {
    var params = new ApplicationManagerListener_ApplicationPIDAvailable_Params();
    params.id = id;
    params.pid = pid;
    var builder = new codec.MessageBuilder(
        kApplicationManagerListener_ApplicationPIDAvailable_Name,
        codec.align(ApplicationManagerListener_ApplicationPIDAvailable_Params.encodedSize));
    builder.encodeStruct(ApplicationManagerListener_ApplicationPIDAvailable_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ApplicationManagerListenerStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  ApplicationManagerListenerStub.prototype = Object.create(bindings.StubBase.prototype);
  ApplicationManagerListenerStub.prototype.setRunningApplications = function(applications) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.setRunningApplications && bindings.StubBindings(this).delegate.setRunningApplications(applications);
  }
  ApplicationManagerListenerStub.prototype.applicationInstanceCreated = function(application) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.applicationInstanceCreated && bindings.StubBindings(this).delegate.applicationInstanceCreated(application);
  }
  ApplicationManagerListenerStub.prototype.applicationInstanceDestroyed = function(id) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.applicationInstanceDestroyed && bindings.StubBindings(this).delegate.applicationInstanceDestroyed(id);
  }
  ApplicationManagerListenerStub.prototype.applicationPIDAvailable = function(id, pid) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.applicationPIDAvailable && bindings.StubBindings(this).delegate.applicationPIDAvailable(id, pid);
  }

  ApplicationManagerListenerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kApplicationManagerListener_SetRunningApplications_Name:
      var params = reader.decodeStruct(ApplicationManagerListener_SetRunningApplications_Params);
      this.setRunningApplications(params.applications);
      return true;
    case kApplicationManagerListener_ApplicationInstanceCreated_Name:
      var params = reader.decodeStruct(ApplicationManagerListener_ApplicationInstanceCreated_Params);
      this.applicationInstanceCreated(params.application);
      return true;
    case kApplicationManagerListener_ApplicationInstanceDestroyed_Name:
      var params = reader.decodeStruct(ApplicationManagerListener_ApplicationInstanceDestroyed_Params);
      this.applicationInstanceDestroyed(params.id);
      return true;
    case kApplicationManagerListener_ApplicationPIDAvailable_Name:
      var params = reader.decodeStruct(ApplicationManagerListener_ApplicationPIDAvailable_Params);
      this.applicationPIDAvailable(params.id, params.pid);
      return true;
    default:
      return false;
    }
  };

  ApplicationManagerListenerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateApplicationManagerListenerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kApplicationManagerListener_SetRunningApplications_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ApplicationManagerListener_SetRunningApplications_Params;
      break;
      case kApplicationManagerListener_ApplicationInstanceCreated_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ApplicationManagerListener_ApplicationInstanceCreated_Params;
      break;
      case kApplicationManagerListener_ApplicationInstanceDestroyed_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ApplicationManagerListener_ApplicationInstanceDestroyed_Params;
      break;
      case kApplicationManagerListener_ApplicationPIDAvailable_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ApplicationManagerListener_ApplicationPIDAvailable_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateApplicationManagerListenerResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ApplicationManagerListener = {
    name: 'mojo::shell::mojom::ApplicationManagerListener',
    proxyClass: ApplicationManagerListenerProxy,
    stubClass: ApplicationManagerListenerStub,
    validateRequest: validateApplicationManagerListenerRequest,
    validateResponse: null,
  };
  ApplicationManagerListenerStub.prototype.validator = validateApplicationManagerListenerRequest;
  ApplicationManagerListenerProxy.prototype.validator = null;
  var kPIDReceiver_SetPID_Name = 0;

  function PIDReceiverProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  PIDReceiverProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  PIDReceiverProxy.prototype.setPID = function(pid) {
    var params = new PIDReceiver_SetPID_Params();
    params.pid = pid;
    var builder = new codec.MessageBuilder(
        kPIDReceiver_SetPID_Name,
        codec.align(PIDReceiver_SetPID_Params.encodedSize));
    builder.encodeStruct(PIDReceiver_SetPID_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function PIDReceiverStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  PIDReceiverStub.prototype = Object.create(bindings.StubBase.prototype);
  PIDReceiverStub.prototype.setPID = function(pid) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.setPID && bindings.StubBindings(this).delegate.setPID(pid);
  }

  PIDReceiverStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPIDReceiver_SetPID_Name:
      var params = reader.decodeStruct(PIDReceiver_SetPID_Params);
      this.setPID(params.pid);
      return true;
    default:
      return false;
    }
  };

  PIDReceiverStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validatePIDReceiverRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kPIDReceiver_SetPID_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PIDReceiver_SetPID_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validatePIDReceiverResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var PIDReceiver = {
    name: 'mojo::shell::mojom::PIDReceiver',
    proxyClass: PIDReceiverProxy,
    stubClass: PIDReceiverStub,
    validateRequest: validatePIDReceiverRequest,
    validateResponse: null,
  };
  PIDReceiverStub.prototype.validator = validatePIDReceiverRequest;
  PIDReceiverProxy.prototype.validator = null;
  var kApplicationManager_CreateInstanceForHandle_Name = 0;
  var kApplicationManager_AddListener_Name = 1;

  function ApplicationManagerProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  ApplicationManagerProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  ApplicationManagerProxy.prototype.createInstanceForHandle = function(channel, url, filter, pid_receiver) {
    var params = new ApplicationManager_CreateInstanceForHandle_Params();
    params.channel = channel;
    params.url = url;
    params.filter = filter;
    params.pid_receiver = core.isHandle(pid_receiver) ? pid_receiver : connection.bindProxy(pid_receiver, PIDReceiver);
    var builder = new codec.MessageBuilder(
        kApplicationManager_CreateInstanceForHandle_Name,
        codec.align(ApplicationManager_CreateInstanceForHandle_Params.encodedSize));
    builder.encodeStruct(ApplicationManager_CreateInstanceForHandle_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ApplicationManagerProxy.prototype.addListener = function(listener) {
    var params = new ApplicationManager_AddListener_Params();
    params.listener = core.isHandle(listener) ? listener : connection.bindImpl(listener, ApplicationManagerListener);
    var builder = new codec.MessageBuilder(
        kApplicationManager_AddListener_Name,
        codec.align(ApplicationManager_AddListener_Params.encodedSize));
    builder.encodeStruct(ApplicationManager_AddListener_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ApplicationManagerStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  ApplicationManagerStub.prototype = Object.create(bindings.StubBase.prototype);
  ApplicationManagerStub.prototype.createInstanceForHandle = function(channel, url, filter, pid_receiver) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.createInstanceForHandle && bindings.StubBindings(this).delegate.createInstanceForHandle(channel, url, filter, connection.bindHandleToStub(pid_receiver, PIDReceiver));
  }
  ApplicationManagerStub.prototype.addListener = function(listener) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.addListener && bindings.StubBindings(this).delegate.addListener(connection.bindHandleToProxy(listener, ApplicationManagerListener));
  }

  ApplicationManagerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kApplicationManager_CreateInstanceForHandle_Name:
      var params = reader.decodeStruct(ApplicationManager_CreateInstanceForHandle_Params);
      this.createInstanceForHandle(params.channel, params.url, params.filter, params.pid_receiver);
      return true;
    case kApplicationManager_AddListener_Name:
      var params = reader.decodeStruct(ApplicationManager_AddListener_Params);
      this.addListener(params.listener);
      return true;
    default:
      return false;
    }
  };

  ApplicationManagerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateApplicationManagerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kApplicationManager_CreateInstanceForHandle_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ApplicationManager_CreateInstanceForHandle_Params;
      break;
      case kApplicationManager_AddListener_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ApplicationManager_AddListener_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateApplicationManagerResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ApplicationManager = {
    name: 'mojo::shell::mojom::ApplicationManager',
    proxyClass: ApplicationManagerProxy,
    stubClass: ApplicationManagerStub,
    validateRequest: validateApplicationManagerRequest,
    validateResponse: null,
  };
  ApplicationManagerStub.prototype.validator = validateApplicationManagerRequest;
  ApplicationManagerProxy.prototype.validator = null;

  var exports = {};
  exports.ApplicationInfo = ApplicationInfo;
  exports.ApplicationManagerListener = ApplicationManagerListener;
  exports.PIDReceiver = PIDReceiver;
  exports.ApplicationManager = ApplicationManager;

  return exports;
});
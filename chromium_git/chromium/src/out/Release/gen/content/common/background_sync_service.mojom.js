// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("content/common/background_sync_service.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "content/public/common/background_sync.mojom",
    "content/public/common/service_worker_event_status.mojom",
], function(bindings, codec, connection, core, validator, background_sync$, service_worker_event_status$) {
  var BackgroundSyncError = {};
  BackgroundSyncError.NONE = 0;
  BackgroundSyncError.STORAGE = BackgroundSyncError.NONE + 1;
  BackgroundSyncError.NOT_FOUND = BackgroundSyncError.STORAGE + 1;
  BackgroundSyncError.NO_SERVICE_WORKER = BackgroundSyncError.NOT_FOUND + 1;
  BackgroundSyncError.NOT_ALLOWED = BackgroundSyncError.NO_SERVICE_WORKER + 1;
  BackgroundSyncError.MAX = BackgroundSyncError.NOT_ALLOWED;
  var BackgroundSyncState = {};
  BackgroundSyncState.PENDING = 0;
  BackgroundSyncState.FIRING = BackgroundSyncState.PENDING + 1;
  BackgroundSyncState.UNREGISTERED_WHILE_FIRING = BackgroundSyncState.FIRING + 1;
  BackgroundSyncState.REREGISTERED_WHILE_FIRING = BackgroundSyncState.UNREGISTERED_WHILE_FIRING + 1;
  BackgroundSyncState.FAILED = BackgroundSyncState.REREGISTERED_WHILE_FIRING + 1;
  BackgroundSyncState.SUCCESS = BackgroundSyncState.FAILED + 1;
  BackgroundSyncState.UNREGISTERED = BackgroundSyncState.SUCCESS + 1;
  var BackgroundSyncEventLastChance = {};
  BackgroundSyncEventLastChance.IS_NOT_LAST_CHANCE = 0;
  BackgroundSyncEventLastChance.IS_LAST_CHANCE = BackgroundSyncEventLastChance.IS_NOT_LAST_CHANCE + 1;

  function BackgroundSyncService_Register_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BackgroundSyncService_Register_Params.prototype.initDefaults_ = function() {
    this.options = null;
    this.service_worker_registration_id = 0;
    this.requested_from_service_worker = false;
  };
  BackgroundSyncService_Register_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  BackgroundSyncService_Register_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, BackgroundSyncService_Register_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate BackgroundSyncService_Register_Params.options
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, background_sync$.SyncRegistration, false);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  BackgroundSyncService_Register_Params.encodedSize = codec.kStructHeaderSize + 24;

  BackgroundSyncService_Register_Params.decode = function(decoder) {
    var packed;
    var val = new BackgroundSyncService_Register_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.options = decoder.decodeStructPointer(background_sync$.SyncRegistration);
    val.service_worker_registration_id = decoder.decodeStruct(codec.Int64);
    val.requested_from_service_worker = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  BackgroundSyncService_Register_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BackgroundSyncService_Register_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(background_sync$.SyncRegistration, val.options);
    encoder.encodeStruct(codec.Int64, val.service_worker_registration_id);
    encoder.encodeStruct(codec.Uint8, val.requested_from_service_worker);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function BackgroundSyncService_Register_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BackgroundSyncService_Register_ResponseParams.prototype.initDefaults_ = function() {
    this.err = 0;
    this.options = null;
  };
  BackgroundSyncService_Register_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  BackgroundSyncService_Register_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, BackgroundSyncService_Register_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate BackgroundSyncService_Register_ResponseParams.options
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, background_sync$.SyncRegistration, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  BackgroundSyncService_Register_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  BackgroundSyncService_Register_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new BackgroundSyncService_Register_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.err = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.options = decoder.decodeStructPointer(background_sync$.SyncRegistration);
    return val;
  };

  BackgroundSyncService_Register_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BackgroundSyncService_Register_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.err);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(background_sync$.SyncRegistration, val.options);
  };
  function BackgroundSyncService_GetRegistration_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BackgroundSyncService_GetRegistration_Params.prototype.initDefaults_ = function() {
    this.tag = null;
    this.service_worker_registration_id = 0;
  };
  BackgroundSyncService_GetRegistration_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  BackgroundSyncService_GetRegistration_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, BackgroundSyncService_GetRegistration_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate BackgroundSyncService_GetRegistration_Params.tag
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  BackgroundSyncService_GetRegistration_Params.encodedSize = codec.kStructHeaderSize + 16;

  BackgroundSyncService_GetRegistration_Params.decode = function(decoder) {
    var packed;
    var val = new BackgroundSyncService_GetRegistration_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.tag = decoder.decodeStruct(codec.String);
    val.service_worker_registration_id = decoder.decodeStruct(codec.Int64);
    return val;
  };

  BackgroundSyncService_GetRegistration_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BackgroundSyncService_GetRegistration_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.tag);
    encoder.encodeStruct(codec.Int64, val.service_worker_registration_id);
  };
  function BackgroundSyncService_GetRegistration_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BackgroundSyncService_GetRegistration_ResponseParams.prototype.initDefaults_ = function() {
    this.err = 0;
    this.registration = null;
  };
  BackgroundSyncService_GetRegistration_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  BackgroundSyncService_GetRegistration_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, BackgroundSyncService_GetRegistration_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate BackgroundSyncService_GetRegistration_ResponseParams.registration
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, background_sync$.SyncRegistration, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  BackgroundSyncService_GetRegistration_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  BackgroundSyncService_GetRegistration_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new BackgroundSyncService_GetRegistration_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.err = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.registration = decoder.decodeStructPointer(background_sync$.SyncRegistration);
    return val;
  };

  BackgroundSyncService_GetRegistration_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BackgroundSyncService_GetRegistration_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.err);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(background_sync$.SyncRegistration, val.registration);
  };
  function BackgroundSyncService_GetRegistrations_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BackgroundSyncService_GetRegistrations_Params.prototype.initDefaults_ = function() {
    this.service_worker_registration_id = 0;
  };
  BackgroundSyncService_GetRegistrations_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  BackgroundSyncService_GetRegistrations_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, BackgroundSyncService_GetRegistrations_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  BackgroundSyncService_GetRegistrations_Params.encodedSize = codec.kStructHeaderSize + 8;

  BackgroundSyncService_GetRegistrations_Params.decode = function(decoder) {
    var packed;
    var val = new BackgroundSyncService_GetRegistrations_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.service_worker_registration_id = decoder.decodeStruct(codec.Int64);
    return val;
  };

  BackgroundSyncService_GetRegistrations_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BackgroundSyncService_GetRegistrations_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.service_worker_registration_id);
  };
  function BackgroundSyncService_GetRegistrations_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BackgroundSyncService_GetRegistrations_ResponseParams.prototype.initDefaults_ = function() {
    this.err = 0;
    this.registrations = null;
  };
  BackgroundSyncService_GetRegistrations_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  BackgroundSyncService_GetRegistrations_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, BackgroundSyncService_GetRegistrations_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate BackgroundSyncService_GetRegistrations_ResponseParams.registrations
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(background_sync$.SyncRegistration), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  BackgroundSyncService_GetRegistrations_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  BackgroundSyncService_GetRegistrations_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new BackgroundSyncService_GetRegistrations_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.err = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.registrations = decoder.decodeArrayPointer(new codec.PointerTo(background_sync$.SyncRegistration));
    return val;
  };

  BackgroundSyncService_GetRegistrations_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BackgroundSyncService_GetRegistrations_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.err);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(new codec.PointerTo(background_sync$.SyncRegistration), val.registrations);
  };
  function BackgroundSyncService_Unregister_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BackgroundSyncService_Unregister_Params.prototype.initDefaults_ = function() {
    this.handle_id = 0;
    this.service_worker_registration_id = 0;
  };
  BackgroundSyncService_Unregister_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  BackgroundSyncService_Unregister_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, BackgroundSyncService_Unregister_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  BackgroundSyncService_Unregister_Params.encodedSize = codec.kStructHeaderSize + 16;

  BackgroundSyncService_Unregister_Params.decode = function(decoder) {
    var packed;
    var val = new BackgroundSyncService_Unregister_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.handle_id = decoder.decodeStruct(codec.Int64);
    val.service_worker_registration_id = decoder.decodeStruct(codec.Int64);
    return val;
  };

  BackgroundSyncService_Unregister_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BackgroundSyncService_Unregister_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.handle_id);
    encoder.encodeStruct(codec.Int64, val.service_worker_registration_id);
  };
  function BackgroundSyncService_Unregister_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BackgroundSyncService_Unregister_ResponseParams.prototype.initDefaults_ = function() {
    this.err = 0;
  };
  BackgroundSyncService_Unregister_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  BackgroundSyncService_Unregister_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, BackgroundSyncService_Unregister_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  BackgroundSyncService_Unregister_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  BackgroundSyncService_Unregister_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new BackgroundSyncService_Unregister_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.err = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  BackgroundSyncService_Unregister_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BackgroundSyncService_Unregister_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.err);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function BackgroundSyncService_DuplicateRegistrationHandle_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BackgroundSyncService_DuplicateRegistrationHandle_Params.prototype.initDefaults_ = function() {
    this.handle_id = 0;
  };
  BackgroundSyncService_DuplicateRegistrationHandle_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  BackgroundSyncService_DuplicateRegistrationHandle_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, BackgroundSyncService_DuplicateRegistrationHandle_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  BackgroundSyncService_DuplicateRegistrationHandle_Params.encodedSize = codec.kStructHeaderSize + 8;

  BackgroundSyncService_DuplicateRegistrationHandle_Params.decode = function(decoder) {
    var packed;
    var val = new BackgroundSyncService_DuplicateRegistrationHandle_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.handle_id = decoder.decodeStruct(codec.Int64);
    return val;
  };

  BackgroundSyncService_DuplicateRegistrationHandle_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BackgroundSyncService_DuplicateRegistrationHandle_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.handle_id);
  };
  function BackgroundSyncService_DuplicateRegistrationHandle_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BackgroundSyncService_DuplicateRegistrationHandle_ResponseParams.prototype.initDefaults_ = function() {
    this.err = 0;
    this.registration = null;
  };
  BackgroundSyncService_DuplicateRegistrationHandle_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  BackgroundSyncService_DuplicateRegistrationHandle_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, BackgroundSyncService_DuplicateRegistrationHandle_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate BackgroundSyncService_DuplicateRegistrationHandle_ResponseParams.registration
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, background_sync$.SyncRegistration, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  BackgroundSyncService_DuplicateRegistrationHandle_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  BackgroundSyncService_DuplicateRegistrationHandle_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new BackgroundSyncService_DuplicateRegistrationHandle_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.err = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.registration = decoder.decodeStructPointer(background_sync$.SyncRegistration);
    return val;
  };

  BackgroundSyncService_DuplicateRegistrationHandle_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BackgroundSyncService_DuplicateRegistrationHandle_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.err);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(background_sync$.SyncRegistration, val.registration);
  };
  function BackgroundSyncService_ReleaseRegistration_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BackgroundSyncService_ReleaseRegistration_Params.prototype.initDefaults_ = function() {
    this.handle_id = 0;
  };
  BackgroundSyncService_ReleaseRegistration_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  BackgroundSyncService_ReleaseRegistration_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, BackgroundSyncService_ReleaseRegistration_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  BackgroundSyncService_ReleaseRegistration_Params.encodedSize = codec.kStructHeaderSize + 8;

  BackgroundSyncService_ReleaseRegistration_Params.decode = function(decoder) {
    var packed;
    var val = new BackgroundSyncService_ReleaseRegistration_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.handle_id = decoder.decodeStruct(codec.Int64);
    return val;
  };

  BackgroundSyncService_ReleaseRegistration_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BackgroundSyncService_ReleaseRegistration_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.handle_id);
  };
  function BackgroundSyncService_NotifyWhenFinished_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BackgroundSyncService_NotifyWhenFinished_Params.prototype.initDefaults_ = function() {
    this.handle_id = 0;
  };
  BackgroundSyncService_NotifyWhenFinished_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  BackgroundSyncService_NotifyWhenFinished_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, BackgroundSyncService_NotifyWhenFinished_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  BackgroundSyncService_NotifyWhenFinished_Params.encodedSize = codec.kStructHeaderSize + 8;

  BackgroundSyncService_NotifyWhenFinished_Params.decode = function(decoder) {
    var packed;
    var val = new BackgroundSyncService_NotifyWhenFinished_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.handle_id = decoder.decodeStruct(codec.Int64);
    return val;
  };

  BackgroundSyncService_NotifyWhenFinished_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BackgroundSyncService_NotifyWhenFinished_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.handle_id);
  };
  function BackgroundSyncService_NotifyWhenFinished_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BackgroundSyncService_NotifyWhenFinished_ResponseParams.prototype.initDefaults_ = function() {
    this.err = 0;
    this.final_status = 0;
  };
  BackgroundSyncService_NotifyWhenFinished_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  BackgroundSyncService_NotifyWhenFinished_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, BackgroundSyncService_NotifyWhenFinished_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  BackgroundSyncService_NotifyWhenFinished_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  BackgroundSyncService_NotifyWhenFinished_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new BackgroundSyncService_NotifyWhenFinished_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.err = decoder.decodeStruct(codec.Int32);
    val.final_status = decoder.decodeStruct(codec.Int32);
    return val;
  };

  BackgroundSyncService_NotifyWhenFinished_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BackgroundSyncService_NotifyWhenFinished_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.err);
    encoder.encodeStruct(codec.Int32, val.final_status);
  };
  function BackgroundSyncServiceClient_Sync_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BackgroundSyncServiceClient_Sync_Params.prototype.initDefaults_ = function() {
    this.handle_id = 0;
    this.last_chance = 0;
  };
  BackgroundSyncServiceClient_Sync_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  BackgroundSyncServiceClient_Sync_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, BackgroundSyncServiceClient_Sync_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  BackgroundSyncServiceClient_Sync_Params.encodedSize = codec.kStructHeaderSize + 16;

  BackgroundSyncServiceClient_Sync_Params.decode = function(decoder) {
    var packed;
    var val = new BackgroundSyncServiceClient_Sync_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.handle_id = decoder.decodeStruct(codec.Int64);
    val.last_chance = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  BackgroundSyncServiceClient_Sync_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BackgroundSyncServiceClient_Sync_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.handle_id);
    encoder.encodeStruct(codec.Int32, val.last_chance);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function BackgroundSyncServiceClient_Sync_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BackgroundSyncServiceClient_Sync_ResponseParams.prototype.initDefaults_ = function() {
    this.status = 0;
  };
  BackgroundSyncServiceClient_Sync_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  BackgroundSyncServiceClient_Sync_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, BackgroundSyncServiceClient_Sync_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  BackgroundSyncServiceClient_Sync_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  BackgroundSyncServiceClient_Sync_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new BackgroundSyncServiceClient_Sync_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  BackgroundSyncServiceClient_Sync_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BackgroundSyncServiceClient_Sync_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kBackgroundSyncService_Register_Name = 0;
  var kBackgroundSyncService_GetRegistration_Name = 1;
  var kBackgroundSyncService_GetRegistrations_Name = 2;
  var kBackgroundSyncService_Unregister_Name = 3;
  var kBackgroundSyncService_DuplicateRegistrationHandle_Name = 4;
  var kBackgroundSyncService_ReleaseRegistration_Name = 5;
  var kBackgroundSyncService_NotifyWhenFinished_Name = 6;

  function BackgroundSyncServiceProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  BackgroundSyncServiceProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  BackgroundSyncServiceProxy.prototype.register = function(options, service_worker_registration_id, requested_from_service_worker) {
    var params = new BackgroundSyncService_Register_Params();
    params.options = options;
    params.service_worker_registration_id = service_worker_registration_id;
    params.requested_from_service_worker = requested_from_service_worker;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kBackgroundSyncService_Register_Name,
          codec.align(BackgroundSyncService_Register_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(BackgroundSyncService_Register_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(BackgroundSyncService_Register_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  BackgroundSyncServiceProxy.prototype.getRegistration = function(tag, service_worker_registration_id) {
    var params = new BackgroundSyncService_GetRegistration_Params();
    params.tag = tag;
    params.service_worker_registration_id = service_worker_registration_id;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kBackgroundSyncService_GetRegistration_Name,
          codec.align(BackgroundSyncService_GetRegistration_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(BackgroundSyncService_GetRegistration_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(BackgroundSyncService_GetRegistration_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  BackgroundSyncServiceProxy.prototype.getRegistrations = function(service_worker_registration_id) {
    var params = new BackgroundSyncService_GetRegistrations_Params();
    params.service_worker_registration_id = service_worker_registration_id;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kBackgroundSyncService_GetRegistrations_Name,
          codec.align(BackgroundSyncService_GetRegistrations_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(BackgroundSyncService_GetRegistrations_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(BackgroundSyncService_GetRegistrations_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  BackgroundSyncServiceProxy.prototype.unregister = function(handle_id, service_worker_registration_id) {
    var params = new BackgroundSyncService_Unregister_Params();
    params.handle_id = handle_id;
    params.service_worker_registration_id = service_worker_registration_id;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kBackgroundSyncService_Unregister_Name,
          codec.align(BackgroundSyncService_Unregister_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(BackgroundSyncService_Unregister_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(BackgroundSyncService_Unregister_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  BackgroundSyncServiceProxy.prototype.duplicateRegistrationHandle = function(handle_id) {
    var params = new BackgroundSyncService_DuplicateRegistrationHandle_Params();
    params.handle_id = handle_id;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kBackgroundSyncService_DuplicateRegistrationHandle_Name,
          codec.align(BackgroundSyncService_DuplicateRegistrationHandle_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(BackgroundSyncService_DuplicateRegistrationHandle_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(BackgroundSyncService_DuplicateRegistrationHandle_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  BackgroundSyncServiceProxy.prototype.releaseRegistration = function(handle_id) {
    var params = new BackgroundSyncService_ReleaseRegistration_Params();
    params.handle_id = handle_id;
    var builder = new codec.MessageBuilder(
        kBackgroundSyncService_ReleaseRegistration_Name,
        codec.align(BackgroundSyncService_ReleaseRegistration_Params.encodedSize));
    builder.encodeStruct(BackgroundSyncService_ReleaseRegistration_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  BackgroundSyncServiceProxy.prototype.notifyWhenFinished = function(handle_id) {
    var params = new BackgroundSyncService_NotifyWhenFinished_Params();
    params.handle_id = handle_id;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kBackgroundSyncService_NotifyWhenFinished_Name,
          codec.align(BackgroundSyncService_NotifyWhenFinished_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(BackgroundSyncService_NotifyWhenFinished_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(BackgroundSyncService_NotifyWhenFinished_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function BackgroundSyncServiceStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  BackgroundSyncServiceStub.prototype = Object.create(bindings.StubBase.prototype);
  BackgroundSyncServiceStub.prototype.register = function(options, service_worker_registration_id, requested_from_service_worker) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.register && bindings.StubBindings(this).delegate.register(options, service_worker_registration_id, requested_from_service_worker);
  }
  BackgroundSyncServiceStub.prototype.getRegistration = function(tag, service_worker_registration_id) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.getRegistration && bindings.StubBindings(this).delegate.getRegistration(tag, service_worker_registration_id);
  }
  BackgroundSyncServiceStub.prototype.getRegistrations = function(service_worker_registration_id) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.getRegistrations && bindings.StubBindings(this).delegate.getRegistrations(service_worker_registration_id);
  }
  BackgroundSyncServiceStub.prototype.unregister = function(handle_id, service_worker_registration_id) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.unregister && bindings.StubBindings(this).delegate.unregister(handle_id, service_worker_registration_id);
  }
  BackgroundSyncServiceStub.prototype.duplicateRegistrationHandle = function(handle_id) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.duplicateRegistrationHandle && bindings.StubBindings(this).delegate.duplicateRegistrationHandle(handle_id);
  }
  BackgroundSyncServiceStub.prototype.releaseRegistration = function(handle_id) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.releaseRegistration && bindings.StubBindings(this).delegate.releaseRegistration(handle_id);
  }
  BackgroundSyncServiceStub.prototype.notifyWhenFinished = function(handle_id) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.notifyWhenFinished && bindings.StubBindings(this).delegate.notifyWhenFinished(handle_id);
  }

  BackgroundSyncServiceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kBackgroundSyncService_ReleaseRegistration_Name:
      var params = reader.decodeStruct(BackgroundSyncService_ReleaseRegistration_Params);
      this.releaseRegistration(params.handle_id);
      return true;
    default:
      return false;
    }
  };

  BackgroundSyncServiceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kBackgroundSyncService_Register_Name:
      var params = reader.decodeStruct(BackgroundSyncService_Register_Params);
      return this.register(params.options, params.service_worker_registration_id, params.requested_from_service_worker).then(function(response) {
        var responseParams =
            new BackgroundSyncService_Register_ResponseParams();
        responseParams.err = response.err;
        responseParams.options = response.options;
        var builder = new codec.MessageWithRequestIDBuilder(
            kBackgroundSyncService_Register_Name,
            codec.align(BackgroundSyncService_Register_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(BackgroundSyncService_Register_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kBackgroundSyncService_GetRegistration_Name:
      var params = reader.decodeStruct(BackgroundSyncService_GetRegistration_Params);
      return this.getRegistration(params.tag, params.service_worker_registration_id).then(function(response) {
        var responseParams =
            new BackgroundSyncService_GetRegistration_ResponseParams();
        responseParams.err = response.err;
        responseParams.registration = response.registration;
        var builder = new codec.MessageWithRequestIDBuilder(
            kBackgroundSyncService_GetRegistration_Name,
            codec.align(BackgroundSyncService_GetRegistration_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(BackgroundSyncService_GetRegistration_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kBackgroundSyncService_GetRegistrations_Name:
      var params = reader.decodeStruct(BackgroundSyncService_GetRegistrations_Params);
      return this.getRegistrations(params.service_worker_registration_id).then(function(response) {
        var responseParams =
            new BackgroundSyncService_GetRegistrations_ResponseParams();
        responseParams.err = response.err;
        responseParams.registrations = response.registrations;
        var builder = new codec.MessageWithRequestIDBuilder(
            kBackgroundSyncService_GetRegistrations_Name,
            codec.align(BackgroundSyncService_GetRegistrations_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(BackgroundSyncService_GetRegistrations_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kBackgroundSyncService_Unregister_Name:
      var params = reader.decodeStruct(BackgroundSyncService_Unregister_Params);
      return this.unregister(params.handle_id, params.service_worker_registration_id).then(function(response) {
        var responseParams =
            new BackgroundSyncService_Unregister_ResponseParams();
        responseParams.err = response.err;
        var builder = new codec.MessageWithRequestIDBuilder(
            kBackgroundSyncService_Unregister_Name,
            codec.align(BackgroundSyncService_Unregister_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(BackgroundSyncService_Unregister_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kBackgroundSyncService_DuplicateRegistrationHandle_Name:
      var params = reader.decodeStruct(BackgroundSyncService_DuplicateRegistrationHandle_Params);
      return this.duplicateRegistrationHandle(params.handle_id).then(function(response) {
        var responseParams =
            new BackgroundSyncService_DuplicateRegistrationHandle_ResponseParams();
        responseParams.err = response.err;
        responseParams.registration = response.registration;
        var builder = new codec.MessageWithRequestIDBuilder(
            kBackgroundSyncService_DuplicateRegistrationHandle_Name,
            codec.align(BackgroundSyncService_DuplicateRegistrationHandle_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(BackgroundSyncService_DuplicateRegistrationHandle_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kBackgroundSyncService_NotifyWhenFinished_Name:
      var params = reader.decodeStruct(BackgroundSyncService_NotifyWhenFinished_Params);
      return this.notifyWhenFinished(params.handle_id).then(function(response) {
        var responseParams =
            new BackgroundSyncService_NotifyWhenFinished_ResponseParams();
        responseParams.err = response.err;
        responseParams.final_status = response.final_status;
        var builder = new codec.MessageWithRequestIDBuilder(
            kBackgroundSyncService_NotifyWhenFinished_Name,
            codec.align(BackgroundSyncService_NotifyWhenFinished_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(BackgroundSyncService_NotifyWhenFinished_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateBackgroundSyncServiceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kBackgroundSyncService_Register_Name:
        if (message.expectsResponse())
          paramsClass = BackgroundSyncService_Register_Params;
      break;
      case kBackgroundSyncService_GetRegistration_Name:
        if (message.expectsResponse())
          paramsClass = BackgroundSyncService_GetRegistration_Params;
      break;
      case kBackgroundSyncService_GetRegistrations_Name:
        if (message.expectsResponse())
          paramsClass = BackgroundSyncService_GetRegistrations_Params;
      break;
      case kBackgroundSyncService_Unregister_Name:
        if (message.expectsResponse())
          paramsClass = BackgroundSyncService_Unregister_Params;
      break;
      case kBackgroundSyncService_DuplicateRegistrationHandle_Name:
        if (message.expectsResponse())
          paramsClass = BackgroundSyncService_DuplicateRegistrationHandle_Params;
      break;
      case kBackgroundSyncService_ReleaseRegistration_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = BackgroundSyncService_ReleaseRegistration_Params;
      break;
      case kBackgroundSyncService_NotifyWhenFinished_Name:
        if (message.expectsResponse())
          paramsClass = BackgroundSyncService_NotifyWhenFinished_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateBackgroundSyncServiceResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kBackgroundSyncService_Register_Name:
        if (message.isResponse())
          paramsClass = BackgroundSyncService_Register_ResponseParams;
        break;
      case kBackgroundSyncService_GetRegistration_Name:
        if (message.isResponse())
          paramsClass = BackgroundSyncService_GetRegistration_ResponseParams;
        break;
      case kBackgroundSyncService_GetRegistrations_Name:
        if (message.isResponse())
          paramsClass = BackgroundSyncService_GetRegistrations_ResponseParams;
        break;
      case kBackgroundSyncService_Unregister_Name:
        if (message.isResponse())
          paramsClass = BackgroundSyncService_Unregister_ResponseParams;
        break;
      case kBackgroundSyncService_DuplicateRegistrationHandle_Name:
        if (message.isResponse())
          paramsClass = BackgroundSyncService_DuplicateRegistrationHandle_ResponseParams;
        break;
      case kBackgroundSyncService_NotifyWhenFinished_Name:
        if (message.isResponse())
          paramsClass = BackgroundSyncService_NotifyWhenFinished_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var BackgroundSyncService = {
    name: 'content::BackgroundSyncService',
    proxyClass: BackgroundSyncServiceProxy,
    stubClass: BackgroundSyncServiceStub,
    validateRequest: validateBackgroundSyncServiceRequest,
    validateResponse: validateBackgroundSyncServiceResponse,
  };
  BackgroundSyncServiceStub.prototype.validator = validateBackgroundSyncServiceRequest;
  BackgroundSyncServiceProxy.prototype.validator = validateBackgroundSyncServiceResponse;
  var kBackgroundSyncServiceClient_Sync_Name = 0;

  function BackgroundSyncServiceClientProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  BackgroundSyncServiceClientProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  BackgroundSyncServiceClientProxy.prototype.sync = function(handle_id, last_chance) {
    var params = new BackgroundSyncServiceClient_Sync_Params();
    params.handle_id = handle_id;
    params.last_chance = last_chance;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kBackgroundSyncServiceClient_Sync_Name,
          codec.align(BackgroundSyncServiceClient_Sync_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(BackgroundSyncServiceClient_Sync_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(BackgroundSyncServiceClient_Sync_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function BackgroundSyncServiceClientStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  BackgroundSyncServiceClientStub.prototype = Object.create(bindings.StubBase.prototype);
  BackgroundSyncServiceClientStub.prototype.sync = function(handle_id, last_chance) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.sync && bindings.StubBindings(this).delegate.sync(handle_id, last_chance);
  }

  BackgroundSyncServiceClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  BackgroundSyncServiceClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kBackgroundSyncServiceClient_Sync_Name:
      var params = reader.decodeStruct(BackgroundSyncServiceClient_Sync_Params);
      return this.sync(params.handle_id, params.last_chance).then(function(response) {
        var responseParams =
            new BackgroundSyncServiceClient_Sync_ResponseParams();
        responseParams.status = response.status;
        var builder = new codec.MessageWithRequestIDBuilder(
            kBackgroundSyncServiceClient_Sync_Name,
            codec.align(BackgroundSyncServiceClient_Sync_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(BackgroundSyncServiceClient_Sync_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateBackgroundSyncServiceClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kBackgroundSyncServiceClient_Sync_Name:
        if (message.expectsResponse())
          paramsClass = BackgroundSyncServiceClient_Sync_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateBackgroundSyncServiceClientResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kBackgroundSyncServiceClient_Sync_Name:
        if (message.isResponse())
          paramsClass = BackgroundSyncServiceClient_Sync_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var BackgroundSyncServiceClient = {
    name: 'content::BackgroundSyncServiceClient',
    proxyClass: BackgroundSyncServiceClientProxy,
    stubClass: BackgroundSyncServiceClientStub,
    validateRequest: validateBackgroundSyncServiceClientRequest,
    validateResponse: validateBackgroundSyncServiceClientResponse,
  };
  BackgroundSyncServiceClientStub.prototype.validator = validateBackgroundSyncServiceClientRequest;
  BackgroundSyncServiceClientProxy.prototype.validator = validateBackgroundSyncServiceClientResponse;

  var exports = {};
  exports.BackgroundSyncError = BackgroundSyncError;
  exports.BackgroundSyncState = BackgroundSyncState;
  exports.BackgroundSyncEventLastChance = BackgroundSyncEventLastChance;
  exports.BackgroundSyncService = BackgroundSyncService;
  exports.BackgroundSyncServiceClient = BackgroundSyncServiceClient;

  return exports;
});
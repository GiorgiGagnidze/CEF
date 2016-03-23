// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("content/common/vr_service.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {

  function VRVector3(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VRVector3.prototype.initDefaults_ = function() {
    this.x = 0;
    this.y = 0;
    this.z = 0;
  };
  VRVector3.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  VRVector3.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, VRVector3.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;




    return validator.validationError.NONE;
  };

  VRVector3.encodedSize = codec.kStructHeaderSize + 16;

  VRVector3.decode = function(decoder) {
    var packed;
    var val = new VRVector3();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.x = decoder.decodeStruct(codec.Float);
    val.y = decoder.decodeStruct(codec.Float);
    val.z = decoder.decodeStruct(codec.Float);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  VRVector3.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VRVector3.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Float, val.x);
    encoder.encodeStruct(codec.Float, val.y);
    encoder.encodeStruct(codec.Float, val.z);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function VRVector4(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VRVector4.prototype.initDefaults_ = function() {
    this.x = 0;
    this.y = 0;
    this.z = 0;
    this.w = 0;
  };
  VRVector4.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  VRVector4.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, VRVector4.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;





    return validator.validationError.NONE;
  };

  VRVector4.encodedSize = codec.kStructHeaderSize + 16;

  VRVector4.decode = function(decoder) {
    var packed;
    var val = new VRVector4();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.x = decoder.decodeStruct(codec.Float);
    val.y = decoder.decodeStruct(codec.Float);
    val.z = decoder.decodeStruct(codec.Float);
    val.w = decoder.decodeStruct(codec.Float);
    return val;
  };

  VRVector4.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VRVector4.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Float, val.x);
    encoder.encodeStruct(codec.Float, val.y);
    encoder.encodeStruct(codec.Float, val.z);
    encoder.encodeStruct(codec.Float, val.w);
  };
  function VRRect(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VRRect.prototype.initDefaults_ = function() {
    this.x = 0;
    this.y = 0;
    this.width = 0;
    this.height = 0;
  };
  VRRect.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  VRRect.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, VRRect.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;





    return validator.validationError.NONE;
  };

  VRRect.encodedSize = codec.kStructHeaderSize + 16;

  VRRect.decode = function(decoder) {
    var packed;
    var val = new VRRect();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.x = decoder.decodeStruct(codec.Int32);
    val.y = decoder.decodeStruct(codec.Int32);
    val.width = decoder.decodeStruct(codec.Int32);
    val.height = decoder.decodeStruct(codec.Int32);
    return val;
  };

  VRRect.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VRRect.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.x);
    encoder.encodeStruct(codec.Int32, val.y);
    encoder.encodeStruct(codec.Int32, val.width);
    encoder.encodeStruct(codec.Int32, val.height);
  };
  function VRFieldOfView(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VRFieldOfView.prototype.initDefaults_ = function() {
    this.upDegrees = 0;
    this.downDegrees = 0;
    this.leftDegrees = 0;
    this.rightDegrees = 0;
  };
  VRFieldOfView.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  VRFieldOfView.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, VRFieldOfView.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;





    return validator.validationError.NONE;
  };

  VRFieldOfView.encodedSize = codec.kStructHeaderSize + 16;

  VRFieldOfView.decode = function(decoder) {
    var packed;
    var val = new VRFieldOfView();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.upDegrees = decoder.decodeStruct(codec.Float);
    val.downDegrees = decoder.decodeStruct(codec.Float);
    val.leftDegrees = decoder.decodeStruct(codec.Float);
    val.rightDegrees = decoder.decodeStruct(codec.Float);
    return val;
  };

  VRFieldOfView.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VRFieldOfView.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Float, val.upDegrees);
    encoder.encodeStruct(codec.Float, val.downDegrees);
    encoder.encodeStruct(codec.Float, val.leftDegrees);
    encoder.encodeStruct(codec.Float, val.rightDegrees);
  };
  function VRSensorState(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VRSensorState.prototype.initDefaults_ = function() {
    this.timestamp = 0;
    this.frameIndex = 0;
    this.orientation = null;
    this.position = null;
    this.angularVelocity = null;
    this.linearVelocity = null;
    this.angularAcceleration = null;
    this.linearAcceleration = null;
  };
  VRSensorState.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  VRSensorState.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, VRSensorState.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



    
    // validate VRSensorState.orientation
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, VRVector4, true);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate VRSensorState.position
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, VRVector3, true);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate VRSensorState.angularVelocity
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, VRVector3, true);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate VRSensorState.linearVelocity
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 40, VRVector3, true);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate VRSensorState.angularAcceleration
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 48, VRVector3, true);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate VRSensorState.linearAcceleration
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 56, VRVector3, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VRSensorState.encodedSize = codec.kStructHeaderSize + 64;

  VRSensorState.decode = function(decoder) {
    var packed;
    var val = new VRSensorState();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.timestamp = decoder.decodeStruct(codec.Double);
    val.frameIndex = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.orientation = decoder.decodeStructPointer(VRVector4);
    val.position = decoder.decodeStructPointer(VRVector3);
    val.angularVelocity = decoder.decodeStructPointer(VRVector3);
    val.linearVelocity = decoder.decodeStructPointer(VRVector3);
    val.angularAcceleration = decoder.decodeStructPointer(VRVector3);
    val.linearAcceleration = decoder.decodeStructPointer(VRVector3);
    return val;
  };

  VRSensorState.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VRSensorState.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Double, val.timestamp);
    encoder.encodeStruct(codec.Uint32, val.frameIndex);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(VRVector4, val.orientation);
    encoder.encodeStructPointer(VRVector3, val.position);
    encoder.encodeStructPointer(VRVector3, val.angularVelocity);
    encoder.encodeStructPointer(VRVector3, val.linearVelocity);
    encoder.encodeStructPointer(VRVector3, val.angularAcceleration);
    encoder.encodeStructPointer(VRVector3, val.linearAcceleration);
  };
  function VREyeParameters(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VREyeParameters.prototype.initDefaults_ = function() {
    this.minimumFieldOfView = null;
    this.maximumFieldOfView = null;
    this.recommendedFieldOfView = null;
    this.eyeTranslation = null;
    this.renderRect = null;
  };
  VREyeParameters.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  VREyeParameters.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, VREyeParameters.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate VREyeParameters.minimumFieldOfView
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, VRFieldOfView, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate VREyeParameters.maximumFieldOfView
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, VRFieldOfView, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate VREyeParameters.recommendedFieldOfView
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, VRFieldOfView, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate VREyeParameters.eyeTranslation
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, VRVector3, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate VREyeParameters.renderRect
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, VRRect, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VREyeParameters.encodedSize = codec.kStructHeaderSize + 40;

  VREyeParameters.decode = function(decoder) {
    var packed;
    var val = new VREyeParameters();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.minimumFieldOfView = decoder.decodeStructPointer(VRFieldOfView);
    val.maximumFieldOfView = decoder.decodeStructPointer(VRFieldOfView);
    val.recommendedFieldOfView = decoder.decodeStructPointer(VRFieldOfView);
    val.eyeTranslation = decoder.decodeStructPointer(VRVector3);
    val.renderRect = decoder.decodeStructPointer(VRRect);
    return val;
  };

  VREyeParameters.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VREyeParameters.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(VRFieldOfView, val.minimumFieldOfView);
    encoder.encodeStructPointer(VRFieldOfView, val.maximumFieldOfView);
    encoder.encodeStructPointer(VRFieldOfView, val.recommendedFieldOfView);
    encoder.encodeStructPointer(VRVector3, val.eyeTranslation);
    encoder.encodeStructPointer(VRRect, val.renderRect);
  };
  function VRHMDInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VRHMDInfo.prototype.initDefaults_ = function() {
    this.leftEye = null;
    this.rightEye = null;
  };
  VRHMDInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  VRHMDInfo.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, VRHMDInfo.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate VRHMDInfo.leftEye
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, VREyeParameters, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate VRHMDInfo.rightEye
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, VREyeParameters, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VRHMDInfo.encodedSize = codec.kStructHeaderSize + 16;

  VRHMDInfo.decode = function(decoder) {
    var packed;
    var val = new VRHMDInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.leftEye = decoder.decodeStructPointer(VREyeParameters);
    val.rightEye = decoder.decodeStructPointer(VREyeParameters);
    return val;
  };

  VRHMDInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VRHMDInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(VREyeParameters, val.leftEye);
    encoder.encodeStructPointer(VREyeParameters, val.rightEye);
  };
  function VRDeviceInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VRDeviceInfo.prototype.initDefaults_ = function() {
    this.index = 0;
    this.deviceName = null;
    this.hmdInfo = null;
  };
  VRDeviceInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  VRDeviceInfo.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, VRDeviceInfo.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate VRDeviceInfo.deviceName
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate VRDeviceInfo.hmdInfo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, VRHMDInfo, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VRDeviceInfo.encodedSize = codec.kStructHeaderSize + 24;

  VRDeviceInfo.decode = function(decoder) {
    var packed;
    var val = new VRDeviceInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.index = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.deviceName = decoder.decodeStruct(codec.String);
    val.hmdInfo = decoder.decodeStructPointer(VRHMDInfo);
    return val;
  };

  VRDeviceInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VRDeviceInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.index);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.deviceName);
    encoder.encodeStructPointer(VRHMDInfo, val.hmdInfo);
  };
  function VRService_GetDevices_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VRService_GetDevices_Params.prototype.initDefaults_ = function() {
  };
  VRService_GetDevices_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  VRService_GetDevices_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, VRService_GetDevices_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VRService_GetDevices_Params.encodedSize = codec.kStructHeaderSize + 0;

  VRService_GetDevices_Params.decode = function(decoder) {
    var packed;
    var val = new VRService_GetDevices_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  VRService_GetDevices_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VRService_GetDevices_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function VRService_GetDevices_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VRService_GetDevices_ResponseParams.prototype.initDefaults_ = function() {
    this.devices = null;
  };
  VRService_GetDevices_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  VRService_GetDevices_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, VRService_GetDevices_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate VRService_GetDevices_ResponseParams.devices
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(VRDeviceInfo), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VRService_GetDevices_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  VRService_GetDevices_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new VRService_GetDevices_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.devices = decoder.decodeArrayPointer(new codec.PointerTo(VRDeviceInfo));
    return val;
  };

  VRService_GetDevices_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VRService_GetDevices_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(VRDeviceInfo), val.devices);
  };
  function VRService_GetSensorState_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VRService_GetSensorState_Params.prototype.initDefaults_ = function() {
    this.index = 0;
  };
  VRService_GetSensorState_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  VRService_GetSensorState_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, VRService_GetSensorState_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  VRService_GetSensorState_Params.encodedSize = codec.kStructHeaderSize + 8;

  VRService_GetSensorState_Params.decode = function(decoder) {
    var packed;
    var val = new VRService_GetSensorState_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.index = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  VRService_GetSensorState_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VRService_GetSensorState_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.index);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function VRService_GetSensorState_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VRService_GetSensorState_ResponseParams.prototype.initDefaults_ = function() {
    this.state = null;
  };
  VRService_GetSensorState_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  VRService_GetSensorState_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, VRService_GetSensorState_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate VRService_GetSensorState_ResponseParams.state
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, VRSensorState, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VRService_GetSensorState_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  VRService_GetSensorState_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new VRService_GetSensorState_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.state = decoder.decodeStructPointer(VRSensorState);
    return val;
  };

  VRService_GetSensorState_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VRService_GetSensorState_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(VRSensorState, val.state);
  };
  function VRService_ResetSensor_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VRService_ResetSensor_Params.prototype.initDefaults_ = function() {
    this.index = 0;
  };
  VRService_ResetSensor_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  VRService_ResetSensor_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, VRService_ResetSensor_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  VRService_ResetSensor_Params.encodedSize = codec.kStructHeaderSize + 8;

  VRService_ResetSensor_Params.decode = function(decoder) {
    var packed;
    var val = new VRService_ResetSensor_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.index = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  VRService_ResetSensor_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VRService_ResetSensor_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.index);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kVRService_GetDevices_Name = 0;
  var kVRService_GetSensorState_Name = 1;
  var kVRService_ResetSensor_Name = 2;

  function VRServiceProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  VRServiceProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  VRServiceProxy.prototype.getDevices = function() {
    var params = new VRService_GetDevices_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kVRService_GetDevices_Name,
          codec.align(VRService_GetDevices_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(VRService_GetDevices_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(VRService_GetDevices_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  VRServiceProxy.prototype.getSensorState = function(index) {
    var params = new VRService_GetSensorState_Params();
    params.index = index;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kVRService_GetSensorState_Name,
          codec.align(VRService_GetSensorState_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(VRService_GetSensorState_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(VRService_GetSensorState_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  VRServiceProxy.prototype.resetSensor = function(index) {
    var params = new VRService_ResetSensor_Params();
    params.index = index;
    var builder = new codec.MessageBuilder(
        kVRService_ResetSensor_Name,
        codec.align(VRService_ResetSensor_Params.encodedSize));
    builder.encodeStruct(VRService_ResetSensor_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function VRServiceStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  VRServiceStub.prototype = Object.create(bindings.StubBase.prototype);
  VRServiceStub.prototype.getDevices = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.getDevices && bindings.StubBindings(this).delegate.getDevices();
  }
  VRServiceStub.prototype.getSensorState = function(index) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.getSensorState && bindings.StubBindings(this).delegate.getSensorState(index);
  }
  VRServiceStub.prototype.resetSensor = function(index) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.resetSensor && bindings.StubBindings(this).delegate.resetSensor(index);
  }

  VRServiceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kVRService_ResetSensor_Name:
      var params = reader.decodeStruct(VRService_ResetSensor_Params);
      this.resetSensor(params.index);
      return true;
    default:
      return false;
    }
  };

  VRServiceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kVRService_GetDevices_Name:
      var params = reader.decodeStruct(VRService_GetDevices_Params);
      return this.getDevices().then(function(response) {
        var responseParams =
            new VRService_GetDevices_ResponseParams();
        responseParams.devices = response.devices;
        var builder = new codec.MessageWithRequestIDBuilder(
            kVRService_GetDevices_Name,
            codec.align(VRService_GetDevices_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(VRService_GetDevices_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kVRService_GetSensorState_Name:
      var params = reader.decodeStruct(VRService_GetSensorState_Params);
      return this.getSensorState(params.index).then(function(response) {
        var responseParams =
            new VRService_GetSensorState_ResponseParams();
        responseParams.state = response.state;
        var builder = new codec.MessageWithRequestIDBuilder(
            kVRService_GetSensorState_Name,
            codec.align(VRService_GetSensorState_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(VRService_GetSensorState_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateVRServiceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kVRService_GetDevices_Name:
        if (message.expectsResponse())
          paramsClass = VRService_GetDevices_Params;
      break;
      case kVRService_GetSensorState_Name:
        if (message.expectsResponse())
          paramsClass = VRService_GetSensorState_Params;
      break;
      case kVRService_ResetSensor_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = VRService_ResetSensor_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateVRServiceResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kVRService_GetDevices_Name:
        if (message.isResponse())
          paramsClass = VRService_GetDevices_ResponseParams;
        break;
      case kVRService_GetSensorState_Name:
        if (message.isResponse())
          paramsClass = VRService_GetSensorState_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var VRService = {
    name: 'content::VRService',
    proxyClass: VRServiceProxy,
    stubClass: VRServiceStub,
    validateRequest: validateVRServiceRequest,
    validateResponse: validateVRServiceResponse,
  };
  VRServiceStub.prototype.validator = validateVRServiceRequest;
  VRServiceProxy.prototype.validator = validateVRServiceResponse;

  var exports = {};
  exports.VRVector3 = VRVector3;
  exports.VRVector4 = VRVector4;
  exports.VRRect = VRRect;
  exports.VRFieldOfView = VRFieldOfView;
  exports.VRSensorState = VRSensorState;
  exports.VREyeParameters = VREyeParameters;
  exports.VRHMDInfo = VRHMDInfo;
  exports.VRDeviceInfo = VRDeviceInfo;
  exports.VRService = VRService;

  return exports;
});
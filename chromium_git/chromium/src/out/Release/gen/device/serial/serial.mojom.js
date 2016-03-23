// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("device/serial/serial.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "device/serial/data_stream.mojom",
], function(bindings, codec, connection, core, validator, data_stream$) {
  var SendError = {};
  SendError.NONE = 0;
  SendError.DISCONNECTED = SendError.NONE + 1;
  SendError.PENDING = SendError.DISCONNECTED + 1;
  SendError.TIMEOUT = SendError.PENDING + 1;
  SendError.SYSTEM_ERROR = SendError.TIMEOUT + 1;
  var ReceiveError = {};
  ReceiveError.NONE = 0;
  ReceiveError.DISCONNECTED = ReceiveError.NONE + 1;
  ReceiveError.TIMEOUT = ReceiveError.DISCONNECTED + 1;
  ReceiveError.DEVICE_LOST = ReceiveError.TIMEOUT + 1;
  ReceiveError.BREAK = ReceiveError.DEVICE_LOST + 1;
  ReceiveError.FRAME_ERROR = ReceiveError.BREAK + 1;
  ReceiveError.OVERRUN = ReceiveError.FRAME_ERROR + 1;
  ReceiveError.BUFFER_OVERFLOW = ReceiveError.OVERRUN + 1;
  ReceiveError.PARITY_ERROR = ReceiveError.BUFFER_OVERFLOW + 1;
  ReceiveError.SYSTEM_ERROR = ReceiveError.PARITY_ERROR + 1;
  var DataBits = {};
  DataBits.NONE = 0;
  DataBits.SEVEN = DataBits.NONE + 1;
  DataBits.EIGHT = DataBits.SEVEN + 1;
  var ParityBit = {};
  ParityBit.NONE = 0;
  ParityBit.NO = ParityBit.NONE + 1;
  ParityBit.ODD = ParityBit.NO + 1;
  ParityBit.EVEN = ParityBit.ODD + 1;
  var StopBits = {};
  StopBits.NONE = 0;
  StopBits.ONE = StopBits.NONE + 1;
  StopBits.TWO = StopBits.ONE + 1;

  function DeviceInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DeviceInfo.prototype.initDefaults_ = function() {
    this.path = null;
    this.vendor_id = 0;
    this.has_vendor_id = false;
    this.has_product_id = false;
    this.product_id = 0;
    this.display_name = null;
  };
  DeviceInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  DeviceInfo.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, DeviceInfo.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate DeviceInfo.path
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;





    
    // validate DeviceInfo.display_name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DeviceInfo.encodedSize = codec.kStructHeaderSize + 24;

  DeviceInfo.decode = function(decoder) {
    var packed;
    var val = new DeviceInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.path = decoder.decodeStruct(codec.String);
    val.vendor_id = decoder.decodeStruct(codec.Uint16);
    packed = decoder.readUint8();
    val.has_vendor_id = (packed >> 0) & 1 ? true : false;
    val.has_product_id = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    val.product_id = decoder.decodeStruct(codec.Uint16);
    decoder.skip(1);
    decoder.skip(1);
    val.display_name = decoder.decodeStruct(codec.NullableString);
    return val;
  };

  DeviceInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DeviceInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.path);
    encoder.encodeStruct(codec.Uint16, val.vendor_id);
    packed = 0;
    packed |= (val.has_vendor_id & 1) << 0
    packed |= (val.has_product_id & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint16, val.product_id);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.NullableString, val.display_name);
  };
  function ConnectionOptions(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ConnectionOptions.prototype.initDefaults_ = function() {
    this.bitrate = 0;
    this.data_bits = DataBits.NONE;
    this.parity_bit = ParityBit.NONE;
    this.stop_bits = StopBits.NONE;
    this.cts_flow_control = false;
    this.has_cts_flow_control = false;
  };
  ConnectionOptions.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ConnectionOptions.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ConnectionOptions.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;







    return validator.validationError.NONE;
  };

  ConnectionOptions.encodedSize = codec.kStructHeaderSize + 24;

  ConnectionOptions.decode = function(decoder) {
    var packed;
    var val = new ConnectionOptions();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.bitrate = decoder.decodeStruct(codec.Uint32);
    val.data_bits = decoder.decodeStruct(codec.Int32);
    val.parity_bit = decoder.decodeStruct(codec.Int32);
    val.stop_bits = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.cts_flow_control = (packed >> 0) & 1 ? true : false;
    val.has_cts_flow_control = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ConnectionOptions.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ConnectionOptions.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.bitrate);
    encoder.encodeStruct(codec.Int32, val.data_bits);
    encoder.encodeStruct(codec.Int32, val.parity_bit);
    encoder.encodeStruct(codec.Int32, val.stop_bits);
    packed = 0;
    packed |= (val.cts_flow_control & 1) << 0
    packed |= (val.has_cts_flow_control & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ConnectionInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ConnectionInfo.prototype.initDefaults_ = function() {
    this.bitrate = 0;
    this.data_bits = DataBits.NONE;
    this.parity_bit = ParityBit.NONE;
    this.stop_bits = StopBits.NONE;
    this.cts_flow_control = false;
  };
  ConnectionInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ConnectionInfo.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ConnectionInfo.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;






    return validator.validationError.NONE;
  };

  ConnectionInfo.encodedSize = codec.kStructHeaderSize + 24;

  ConnectionInfo.decode = function(decoder) {
    var packed;
    var val = new ConnectionInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.bitrate = decoder.decodeStruct(codec.Uint32);
    val.data_bits = decoder.decodeStruct(codec.Int32);
    val.parity_bit = decoder.decodeStruct(codec.Int32);
    val.stop_bits = decoder.decodeStruct(codec.Int32);
    val.cts_flow_control = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ConnectionInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ConnectionInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.bitrate);
    encoder.encodeStruct(codec.Int32, val.data_bits);
    encoder.encodeStruct(codec.Int32, val.parity_bit);
    encoder.encodeStruct(codec.Int32, val.stop_bits);
    encoder.encodeStruct(codec.Uint8, val.cts_flow_control);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function HostControlSignals(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  HostControlSignals.prototype.initDefaults_ = function() {
    this.dtr = false;
    this.has_dtr = false;
    this.rts = false;
    this.has_rts = false;
  };
  HostControlSignals.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  HostControlSignals.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, HostControlSignals.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;





    return validator.validationError.NONE;
  };

  HostControlSignals.encodedSize = codec.kStructHeaderSize + 8;

  HostControlSignals.decode = function(decoder) {
    var packed;
    var val = new HostControlSignals();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.dtr = (packed >> 0) & 1 ? true : false;
    val.has_dtr = (packed >> 1) & 1 ? true : false;
    val.rts = (packed >> 2) & 1 ? true : false;
    val.has_rts = (packed >> 3) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  HostControlSignals.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(HostControlSignals.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.dtr & 1) << 0
    packed |= (val.has_dtr & 1) << 1
    packed |= (val.rts & 1) << 2
    packed |= (val.has_rts & 1) << 3
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function DeviceControlSignals(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DeviceControlSignals.prototype.initDefaults_ = function() {
    this.dcd = false;
    this.cts = false;
    this.ri = false;
    this.dsr = false;
  };
  DeviceControlSignals.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  DeviceControlSignals.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, DeviceControlSignals.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;





    return validator.validationError.NONE;
  };

  DeviceControlSignals.encodedSize = codec.kStructHeaderSize + 8;

  DeviceControlSignals.decode = function(decoder) {
    var packed;
    var val = new DeviceControlSignals();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.dcd = (packed >> 0) & 1 ? true : false;
    val.cts = (packed >> 1) & 1 ? true : false;
    val.ri = (packed >> 2) & 1 ? true : false;
    val.dsr = (packed >> 3) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  DeviceControlSignals.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DeviceControlSignals.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.dcd & 1) << 0
    packed |= (val.cts & 1) << 1
    packed |= (val.ri & 1) << 2
    packed |= (val.dsr & 1) << 3
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function SerialService_GetDevices_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SerialService_GetDevices_Params.prototype.initDefaults_ = function() {
  };
  SerialService_GetDevices_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  SerialService_GetDevices_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, SerialService_GetDevices_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SerialService_GetDevices_Params.encodedSize = codec.kStructHeaderSize + 0;

  SerialService_GetDevices_Params.decode = function(decoder) {
    var packed;
    var val = new SerialService_GetDevices_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  SerialService_GetDevices_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SerialService_GetDevices_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function SerialService_GetDevices_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SerialService_GetDevices_ResponseParams.prototype.initDefaults_ = function() {
    this.devices = null;
  };
  SerialService_GetDevices_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  SerialService_GetDevices_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, SerialService_GetDevices_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate SerialService_GetDevices_ResponseParams.devices
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(DeviceInfo), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SerialService_GetDevices_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  SerialService_GetDevices_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new SerialService_GetDevices_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.devices = decoder.decodeArrayPointer(new codec.PointerTo(DeviceInfo));
    return val;
  };

  SerialService_GetDevices_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SerialService_GetDevices_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(DeviceInfo), val.devices);
  };
  function SerialService_Connect_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SerialService_Connect_Params.prototype.initDefaults_ = function() {
    this.path = null;
    this.options = null;
    this.connection = null;
    this.sink = null;
    this.source = null;
    this.source_client = null;
  };
  SerialService_Connect_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  SerialService_Connect_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, SerialService_Connect_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate SerialService_Connect_Params.path
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate SerialService_Connect_Params.options
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, ConnectionOptions, true);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate SerialService_Connect_Params.connection
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate SerialService_Connect_Params.sink
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 20, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate SerialService_Connect_Params.source
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 24, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate SerialService_Connect_Params.source_client
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 28, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SerialService_Connect_Params.encodedSize = codec.kStructHeaderSize + 40;

  SerialService_Connect_Params.decode = function(decoder) {
    var packed;
    var val = new SerialService_Connect_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.path = decoder.decodeStruct(codec.String);
    val.options = decoder.decodeStructPointer(ConnectionOptions);
    val.connection = decoder.decodeStruct(codec.Handle);
    val.sink = decoder.decodeStruct(codec.Handle);
    val.source = decoder.decodeStruct(codec.Handle);
    val.source_client = decoder.decodeStruct(codec.Interface);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  SerialService_Connect_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SerialService_Connect_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.path);
    encoder.encodeStructPointer(ConnectionOptions, val.options);
    encoder.encodeStruct(codec.Handle, val.connection);
    encoder.encodeStruct(codec.Handle, val.sink);
    encoder.encodeStruct(codec.Handle, val.source);
    encoder.encodeStruct(codec.Interface, val.source_client);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Connection_GetInfo_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Connection_GetInfo_Params.prototype.initDefaults_ = function() {
  };
  Connection_GetInfo_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Connection_GetInfo_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Connection_GetInfo_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Connection_GetInfo_Params.encodedSize = codec.kStructHeaderSize + 0;

  Connection_GetInfo_Params.decode = function(decoder) {
    var packed;
    var val = new Connection_GetInfo_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Connection_GetInfo_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Connection_GetInfo_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function Connection_GetInfo_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Connection_GetInfo_ResponseParams.prototype.initDefaults_ = function() {
    this.info = null;
  };
  Connection_GetInfo_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Connection_GetInfo_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Connection_GetInfo_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Connection_GetInfo_ResponseParams.info
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, ConnectionInfo, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Connection_GetInfo_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Connection_GetInfo_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Connection_GetInfo_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.info = decoder.decodeStructPointer(ConnectionInfo);
    return val;
  };

  Connection_GetInfo_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Connection_GetInfo_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(ConnectionInfo, val.info);
  };
  function Connection_SetOptions_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Connection_SetOptions_Params.prototype.initDefaults_ = function() {
    this.options = null;
  };
  Connection_SetOptions_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Connection_SetOptions_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Connection_SetOptions_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Connection_SetOptions_Params.options
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, ConnectionOptions, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Connection_SetOptions_Params.encodedSize = codec.kStructHeaderSize + 8;

  Connection_SetOptions_Params.decode = function(decoder) {
    var packed;
    var val = new Connection_SetOptions_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.options = decoder.decodeStructPointer(ConnectionOptions);
    return val;
  };

  Connection_SetOptions_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Connection_SetOptions_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(ConnectionOptions, val.options);
  };
  function Connection_SetOptions_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Connection_SetOptions_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  Connection_SetOptions_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Connection_SetOptions_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Connection_SetOptions_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  Connection_SetOptions_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Connection_SetOptions_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Connection_SetOptions_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.success = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Connection_SetOptions_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Connection_SetOptions_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint8, val.success);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Connection_SetControlSignals_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Connection_SetControlSignals_Params.prototype.initDefaults_ = function() {
    this.signals = null;
  };
  Connection_SetControlSignals_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Connection_SetControlSignals_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Connection_SetControlSignals_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Connection_SetControlSignals_Params.signals
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, HostControlSignals, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Connection_SetControlSignals_Params.encodedSize = codec.kStructHeaderSize + 8;

  Connection_SetControlSignals_Params.decode = function(decoder) {
    var packed;
    var val = new Connection_SetControlSignals_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.signals = decoder.decodeStructPointer(HostControlSignals);
    return val;
  };

  Connection_SetControlSignals_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Connection_SetControlSignals_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(HostControlSignals, val.signals);
  };
  function Connection_SetControlSignals_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Connection_SetControlSignals_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  Connection_SetControlSignals_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Connection_SetControlSignals_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Connection_SetControlSignals_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  Connection_SetControlSignals_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Connection_SetControlSignals_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Connection_SetControlSignals_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.success = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Connection_SetControlSignals_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Connection_SetControlSignals_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint8, val.success);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Connection_GetControlSignals_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Connection_GetControlSignals_Params.prototype.initDefaults_ = function() {
  };
  Connection_GetControlSignals_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Connection_GetControlSignals_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Connection_GetControlSignals_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Connection_GetControlSignals_Params.encodedSize = codec.kStructHeaderSize + 0;

  Connection_GetControlSignals_Params.decode = function(decoder) {
    var packed;
    var val = new Connection_GetControlSignals_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Connection_GetControlSignals_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Connection_GetControlSignals_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function Connection_GetControlSignals_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Connection_GetControlSignals_ResponseParams.prototype.initDefaults_ = function() {
    this.signals = null;
  };
  Connection_GetControlSignals_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Connection_GetControlSignals_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Connection_GetControlSignals_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Connection_GetControlSignals_ResponseParams.signals
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, DeviceControlSignals, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Connection_GetControlSignals_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Connection_GetControlSignals_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Connection_GetControlSignals_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.signals = decoder.decodeStructPointer(DeviceControlSignals);
    return val;
  };

  Connection_GetControlSignals_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Connection_GetControlSignals_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(DeviceControlSignals, val.signals);
  };
  function Connection_Flush_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Connection_Flush_Params.prototype.initDefaults_ = function() {
  };
  Connection_Flush_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Connection_Flush_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Connection_Flush_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Connection_Flush_Params.encodedSize = codec.kStructHeaderSize + 0;

  Connection_Flush_Params.decode = function(decoder) {
    var packed;
    var val = new Connection_Flush_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Connection_Flush_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Connection_Flush_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function Connection_Flush_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Connection_Flush_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  Connection_Flush_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Connection_Flush_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Connection_Flush_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  Connection_Flush_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Connection_Flush_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Connection_Flush_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.success = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Connection_Flush_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Connection_Flush_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint8, val.success);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kSerialService_GetDevices_Name = 0;
  var kSerialService_Connect_Name = 1;

  function SerialServiceProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  SerialServiceProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  SerialServiceProxy.prototype.getDevices = function() {
    var params = new SerialService_GetDevices_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kSerialService_GetDevices_Name,
          codec.align(SerialService_GetDevices_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(SerialService_GetDevices_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(SerialService_GetDevices_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  SerialServiceProxy.prototype.connect = function(path, options, connection, sink, source, source_client) {
    var params = new SerialService_Connect_Params();
    params.path = path;
    params.options = options;
    params.connection = core.isHandle(connection) ? connection : connection.bindProxy(connection, Connection);
    params.sink = core.isHandle(sink) ? sink : connection.bindProxy(sink, data_stream$.DataSink);
    params.source = core.isHandle(source) ? source : connection.bindProxy(source, data_stream$.DataSource);
    params.source_client = core.isHandle(source_client) ? source_client : connection.bindImpl(source_client, data_stream$.DataSourceClient);
    var builder = new codec.MessageBuilder(
        kSerialService_Connect_Name,
        codec.align(SerialService_Connect_Params.encodedSize));
    builder.encodeStruct(SerialService_Connect_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function SerialServiceStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  SerialServiceStub.prototype = Object.create(bindings.StubBase.prototype);
  SerialServiceStub.prototype.getDevices = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.getDevices && bindings.StubBindings(this).delegate.getDevices();
  }
  SerialServiceStub.prototype.connect = function(path, options, connection, sink, source, source_client) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.connect && bindings.StubBindings(this).delegate.connect(path, options, connection.bindHandleToStub(connection, Connection), connection.bindHandleToStub(sink, data_stream$.DataSink), connection.bindHandleToStub(source, data_stream$.DataSource), connection.bindHandleToProxy(source_client, data_stream$.DataSourceClient));
  }

  SerialServiceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kSerialService_Connect_Name:
      var params = reader.decodeStruct(SerialService_Connect_Params);
      this.connect(params.path, params.options, params.connection, params.sink, params.source, params.source_client);
      return true;
    default:
      return false;
    }
  };

  SerialServiceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kSerialService_GetDevices_Name:
      var params = reader.decodeStruct(SerialService_GetDevices_Params);
      return this.getDevices().then(function(response) {
        var responseParams =
            new SerialService_GetDevices_ResponseParams();
        responseParams.devices = response.devices;
        var builder = new codec.MessageWithRequestIDBuilder(
            kSerialService_GetDevices_Name,
            codec.align(SerialService_GetDevices_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(SerialService_GetDevices_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateSerialServiceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kSerialService_GetDevices_Name:
        if (message.expectsResponse())
          paramsClass = SerialService_GetDevices_Params;
      break;
      case kSerialService_Connect_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SerialService_Connect_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateSerialServiceResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kSerialService_GetDevices_Name:
        if (message.isResponse())
          paramsClass = SerialService_GetDevices_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var SerialService = {
    name: 'device::serial::SerialService',
    proxyClass: SerialServiceProxy,
    stubClass: SerialServiceStub,
    validateRequest: validateSerialServiceRequest,
    validateResponse: validateSerialServiceResponse,
  };
  SerialServiceStub.prototype.validator = validateSerialServiceRequest;
  SerialServiceProxy.prototype.validator = validateSerialServiceResponse;
  var kConnection_GetInfo_Name = 0;
  var kConnection_SetOptions_Name = 1;
  var kConnection_SetControlSignals_Name = 2;
  var kConnection_GetControlSignals_Name = 3;
  var kConnection_Flush_Name = 4;

  function ConnectionProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  ConnectionProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  ConnectionProxy.prototype.getInfo = function() {
    var params = new Connection_GetInfo_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kConnection_GetInfo_Name,
          codec.align(Connection_GetInfo_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Connection_GetInfo_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Connection_GetInfo_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ConnectionProxy.prototype.setOptions = function(options) {
    var params = new Connection_SetOptions_Params();
    params.options = options;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kConnection_SetOptions_Name,
          codec.align(Connection_SetOptions_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Connection_SetOptions_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Connection_SetOptions_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ConnectionProxy.prototype.setControlSignals = function(signals) {
    var params = new Connection_SetControlSignals_Params();
    params.signals = signals;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kConnection_SetControlSignals_Name,
          codec.align(Connection_SetControlSignals_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Connection_SetControlSignals_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Connection_SetControlSignals_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ConnectionProxy.prototype.getControlSignals = function() {
    var params = new Connection_GetControlSignals_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kConnection_GetControlSignals_Name,
          codec.align(Connection_GetControlSignals_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Connection_GetControlSignals_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Connection_GetControlSignals_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ConnectionProxy.prototype.flush = function() {
    var params = new Connection_Flush_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kConnection_Flush_Name,
          codec.align(Connection_Flush_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Connection_Flush_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Connection_Flush_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function ConnectionStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  ConnectionStub.prototype = Object.create(bindings.StubBase.prototype);
  ConnectionStub.prototype.getInfo = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.getInfo && bindings.StubBindings(this).delegate.getInfo();
  }
  ConnectionStub.prototype.setOptions = function(options) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.setOptions && bindings.StubBindings(this).delegate.setOptions(options);
  }
  ConnectionStub.prototype.setControlSignals = function(signals) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.setControlSignals && bindings.StubBindings(this).delegate.setControlSignals(signals);
  }
  ConnectionStub.prototype.getControlSignals = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.getControlSignals && bindings.StubBindings(this).delegate.getControlSignals();
  }
  ConnectionStub.prototype.flush = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.flush && bindings.StubBindings(this).delegate.flush();
  }

  ConnectionStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  ConnectionStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kConnection_GetInfo_Name:
      var params = reader.decodeStruct(Connection_GetInfo_Params);
      return this.getInfo().then(function(response) {
        var responseParams =
            new Connection_GetInfo_ResponseParams();
        responseParams.info = response.info;
        var builder = new codec.MessageWithRequestIDBuilder(
            kConnection_GetInfo_Name,
            codec.align(Connection_GetInfo_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Connection_GetInfo_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kConnection_SetOptions_Name:
      var params = reader.decodeStruct(Connection_SetOptions_Params);
      return this.setOptions(params.options).then(function(response) {
        var responseParams =
            new Connection_SetOptions_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageWithRequestIDBuilder(
            kConnection_SetOptions_Name,
            codec.align(Connection_SetOptions_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Connection_SetOptions_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kConnection_SetControlSignals_Name:
      var params = reader.decodeStruct(Connection_SetControlSignals_Params);
      return this.setControlSignals(params.signals).then(function(response) {
        var responseParams =
            new Connection_SetControlSignals_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageWithRequestIDBuilder(
            kConnection_SetControlSignals_Name,
            codec.align(Connection_SetControlSignals_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Connection_SetControlSignals_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kConnection_GetControlSignals_Name:
      var params = reader.decodeStruct(Connection_GetControlSignals_Params);
      return this.getControlSignals().then(function(response) {
        var responseParams =
            new Connection_GetControlSignals_ResponseParams();
        responseParams.signals = response.signals;
        var builder = new codec.MessageWithRequestIDBuilder(
            kConnection_GetControlSignals_Name,
            codec.align(Connection_GetControlSignals_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Connection_GetControlSignals_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kConnection_Flush_Name:
      var params = reader.decodeStruct(Connection_Flush_Params);
      return this.flush().then(function(response) {
        var responseParams =
            new Connection_Flush_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageWithRequestIDBuilder(
            kConnection_Flush_Name,
            codec.align(Connection_Flush_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Connection_Flush_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateConnectionRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kConnection_GetInfo_Name:
        if (message.expectsResponse())
          paramsClass = Connection_GetInfo_Params;
      break;
      case kConnection_SetOptions_Name:
        if (message.expectsResponse())
          paramsClass = Connection_SetOptions_Params;
      break;
      case kConnection_SetControlSignals_Name:
        if (message.expectsResponse())
          paramsClass = Connection_SetControlSignals_Params;
      break;
      case kConnection_GetControlSignals_Name:
        if (message.expectsResponse())
          paramsClass = Connection_GetControlSignals_Params;
      break;
      case kConnection_Flush_Name:
        if (message.expectsResponse())
          paramsClass = Connection_Flush_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateConnectionResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kConnection_GetInfo_Name:
        if (message.isResponse())
          paramsClass = Connection_GetInfo_ResponseParams;
        break;
      case kConnection_SetOptions_Name:
        if (message.isResponse())
          paramsClass = Connection_SetOptions_ResponseParams;
        break;
      case kConnection_SetControlSignals_Name:
        if (message.isResponse())
          paramsClass = Connection_SetControlSignals_ResponseParams;
        break;
      case kConnection_GetControlSignals_Name:
        if (message.isResponse())
          paramsClass = Connection_GetControlSignals_ResponseParams;
        break;
      case kConnection_Flush_Name:
        if (message.isResponse())
          paramsClass = Connection_Flush_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var Connection = {
    name: 'device::serial::Connection',
    proxyClass: ConnectionProxy,
    stubClass: ConnectionStub,
    validateRequest: validateConnectionRequest,
    validateResponse: validateConnectionResponse,
  };
  ConnectionStub.prototype.validator = validateConnectionRequest;
  ConnectionProxy.prototype.validator = validateConnectionResponse;

  var exports = {};
  exports.SendError = SendError;
  exports.ReceiveError = ReceiveError;
  exports.DataBits = DataBits;
  exports.ParityBit = ParityBit;
  exports.StopBits = StopBits;
  exports.DeviceInfo = DeviceInfo;
  exports.ConnectionOptions = ConnectionOptions;
  exports.ConnectionInfo = ConnectionInfo;
  exports.HostControlSignals = HostControlSignals;
  exports.DeviceControlSignals = DeviceControlSignals;
  exports.SerialService = SerialService;
  exports.Connection = Connection;

  return exports;
});
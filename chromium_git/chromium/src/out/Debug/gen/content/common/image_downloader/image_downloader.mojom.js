// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("content/common/image_downloader/image_downloader.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "skia/public/interfaces/bitmap.mojom",
    "ui/mojo/geometry/geometry.mojom",
], function(bindings, codec, connection, core, validator, bitmap$, geometry$) {

  function DownloadRequest(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DownloadRequest.prototype.initDefaults_ = function() {
    this.url = null;
    this.is_favicon = false;
    this.bypass_cache = false;
    this.max_bitmap_size = 0;
  };
  DownloadRequest.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  DownloadRequest.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, DownloadRequest.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate DownloadRequest.url
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;




    return validator.validationError.NONE;
  };

  DownloadRequest.encodedSize = codec.kStructHeaderSize + 16;

  DownloadRequest.decode = function(decoder) {
    var packed;
    var val = new DownloadRequest();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.url = decoder.decodeStruct(codec.String);
    packed = decoder.readUint8();
    val.is_favicon = (packed >> 0) & 1 ? true : false;
    val.bypass_cache = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.max_bitmap_size = decoder.decodeStruct(codec.Uint32);
    return val;
  };

  DownloadRequest.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DownloadRequest.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.url);
    packed = 0;
    packed |= (val.is_favicon & 1) << 0
    packed |= (val.bypass_cache & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint32, val.max_bitmap_size);
  };
  function DownloadResult(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DownloadResult.prototype.initDefaults_ = function() {
    this.http_status_code = 0;
    this.images = null;
    this.original_image_sizes = null;
  };
  DownloadResult.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  DownloadResult.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, DownloadResult.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate DownloadResult.images
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(bitmap$.Bitmap), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate DownloadResult.original_image_sizes
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, new codec.PointerTo(geometry$.Size), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DownloadResult.encodedSize = codec.kStructHeaderSize + 24;

  DownloadResult.decode = function(decoder) {
    var packed;
    var val = new DownloadResult();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.http_status_code = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.images = decoder.decodeArrayPointer(new codec.PointerTo(bitmap$.Bitmap));
    val.original_image_sizes = decoder.decodeArrayPointer(new codec.PointerTo(geometry$.Size));
    return val;
  };

  DownloadResult.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DownloadResult.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.http_status_code);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(new codec.PointerTo(bitmap$.Bitmap), val.images);
    encoder.encodeArrayPointer(new codec.PointerTo(geometry$.Size), val.original_image_sizes);
  };
  function ImageDownloader_DownloadImage_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ImageDownloader_DownloadImage_Params.prototype.initDefaults_ = function() {
    this.request = null;
  };
  ImageDownloader_DownloadImage_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ImageDownloader_DownloadImage_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ImageDownloader_DownloadImage_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ImageDownloader_DownloadImage_Params.request
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, DownloadRequest, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ImageDownloader_DownloadImage_Params.encodedSize = codec.kStructHeaderSize + 8;

  ImageDownloader_DownloadImage_Params.decode = function(decoder) {
    var packed;
    var val = new ImageDownloader_DownloadImage_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.request = decoder.decodeStructPointer(DownloadRequest);
    return val;
  };

  ImageDownloader_DownloadImage_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ImageDownloader_DownloadImage_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(DownloadRequest, val.request);
  };
  function ImageDownloader_DownloadImage_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ImageDownloader_DownloadImage_ResponseParams.prototype.initDefaults_ = function() {
    this.result = null;
  };
  ImageDownloader_DownloadImage_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ImageDownloader_DownloadImage_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ImageDownloader_DownloadImage_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ImageDownloader_DownloadImage_ResponseParams.result
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, DownloadResult, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ImageDownloader_DownloadImage_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  ImageDownloader_DownloadImage_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ImageDownloader_DownloadImage_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStructPointer(DownloadResult);
    return val;
  };

  ImageDownloader_DownloadImage_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ImageDownloader_DownloadImage_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(DownloadResult, val.result);
  };
  var kImageDownloader_DownloadImage_Name = 0;

  function ImageDownloaderProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  ImageDownloaderProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  ImageDownloaderProxy.prototype.downloadImage = function(request) {
    var params = new ImageDownloader_DownloadImage_Params();
    params.request = request;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kImageDownloader_DownloadImage_Name,
          codec.align(ImageDownloader_DownloadImage_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ImageDownloader_DownloadImage_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ImageDownloader_DownloadImage_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function ImageDownloaderStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  ImageDownloaderStub.prototype = Object.create(bindings.StubBase.prototype);
  ImageDownloaderStub.prototype.downloadImage = function(request) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.downloadImage && bindings.StubBindings(this).delegate.downloadImage(request);
  }

  ImageDownloaderStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  ImageDownloaderStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kImageDownloader_DownloadImage_Name:
      var params = reader.decodeStruct(ImageDownloader_DownloadImage_Params);
      return this.downloadImage(params.request).then(function(response) {
        var responseParams =
            new ImageDownloader_DownloadImage_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageWithRequestIDBuilder(
            kImageDownloader_DownloadImage_Name,
            codec.align(ImageDownloader_DownloadImage_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ImageDownloader_DownloadImage_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateImageDownloaderRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kImageDownloader_DownloadImage_Name:
        if (message.expectsResponse())
          paramsClass = ImageDownloader_DownloadImage_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateImageDownloaderResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kImageDownloader_DownloadImage_Name:
        if (message.isResponse())
          paramsClass = ImageDownloader_DownloadImage_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var ImageDownloader = {
    name: 'image_downloader::ImageDownloader',
    proxyClass: ImageDownloaderProxy,
    stubClass: ImageDownloaderStub,
    validateRequest: validateImageDownloaderRequest,
    validateResponse: validateImageDownloaderResponse,
  };
  ImageDownloaderStub.prototype.validator = validateImageDownloaderRequest;
  ImageDownloaderProxy.prototype.validator = validateImageDownloaderResponse;

  var exports = {};
  exports.DownloadRequest = DownloadRequest;
  exports.DownloadResult = DownloadResult;
  exports.ImageDownloader = ImageDownloader;

  return exports;
});
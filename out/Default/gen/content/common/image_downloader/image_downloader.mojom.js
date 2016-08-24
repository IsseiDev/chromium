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
    "ui/gfx/geometry/mojo/geometry.mojom",
    "url/mojo/url.mojom",
], function(bindings, codec, connection, core, validator, bitmap$, geometry$, url$) {

  function ImageDownloader_DownloadImage_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ImageDownloader_DownloadImage_Params.prototype.initDefaults_ = function() {
    this.url = null;
    this.is_favicon = false;
    this.bypass_cache = false;
    this.max_bitmap_size = 0;
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

    
    // validate ImageDownloader_DownloadImage_Params.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;




    return validator.validationError.NONE;
  };

  ImageDownloader_DownloadImage_Params.encodedSize = codec.kStructHeaderSize + 16;

  ImageDownloader_DownloadImage_Params.decode = function(decoder) {
    var packed;
    var val = new ImageDownloader_DownloadImage_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.url = decoder.decodeStructPointer(url$.Url);
    packed = decoder.readUint8();
    val.is_favicon = (packed >> 0) & 1 ? true : false;
    val.bypass_cache = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.max_bitmap_size = decoder.decodeStruct(codec.Uint32);
    return val;
  };

  ImageDownloader_DownloadImage_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ImageDownloader_DownloadImage_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.url);
    packed = 0;
    packed |= (val.is_favicon & 1) << 0
    packed |= (val.bypass_cache & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint32, val.max_bitmap_size);
  };
  function ImageDownloader_DownloadImage_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ImageDownloader_DownloadImage_ResponseParams.prototype.initDefaults_ = function() {
    this.http_status_code = 0;
    this.images = null;
    this.original_image_sizes = null;
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


    
    // validate ImageDownloader_DownloadImage_ResponseParams.images
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(bitmap$.Bitmap), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ImageDownloader_DownloadImage_ResponseParams.original_image_sizes
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, new codec.PointerTo(geometry$.Size), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ImageDownloader_DownloadImage_ResponseParams.encodedSize = codec.kStructHeaderSize + 24;

  ImageDownloader_DownloadImage_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ImageDownloader_DownloadImage_ResponseParams();
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

  ImageDownloader_DownloadImage_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ImageDownloader_DownloadImage_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.http_status_code);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(new codec.PointerTo(bitmap$.Bitmap), val.images);
    encoder.encodeArrayPointer(new codec.PointerTo(geometry$.Size), val.original_image_sizes);
  };
  var kImageDownloader_DownloadImage_Name = 0;

  function ImageDownloaderProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  ImageDownloaderProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  ImageDownloaderProxy.prototype.downloadImage = function(url, is_favicon, max_bitmap_size, bypass_cache) {
    var params = new ImageDownloader_DownloadImage_Params();
    params.url = url;
    params.is_favicon = is_favicon;
    params.max_bitmap_size = max_bitmap_size;
    params.bypass_cache = bypass_cache;
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
  ImageDownloaderStub.prototype.downloadImage = function(url, is_favicon, max_bitmap_size, bypass_cache) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.downloadImage && bindings.StubBindings(this).delegate.downloadImage(url, is_favicon, max_bitmap_size, bypass_cache);
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
      return this.downloadImage(params.url, params.is_favicon, params.max_bitmap_size, params.bypass_cache).then(function(response) {
        var responseParams =
            new ImageDownloader_DownloadImage_ResponseParams();
        responseParams.http_status_code = response.http_status_code;
        responseParams.images = response.images;
        responseParams.original_image_sizes = response.original_image_sizes;
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
    name: 'content::mojom::ImageDownloader',
    proxyClass: ImageDownloaderProxy,
    stubClass: ImageDownloaderStub,
    validateRequest: validateImageDownloaderRequest,
    validateResponse: validateImageDownloaderResponse,
  };
  ImageDownloaderStub.prototype.validator = validateImageDownloaderRequest;
  ImageDownloaderProxy.prototype.validator = validateImageDownloaderResponse;

  var exports = {};
  exports.ImageDownloader = ImageDownloader;

  return exports;
});
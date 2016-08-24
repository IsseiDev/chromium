// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("chrome/common/image_decoder.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "skia/public/interfaces/bitmap.mojom",
], function(bindings, codec, connection, core, validator, bitmap$) {
  var ImageCodec = {};
  ImageCodec.DEFAULT = 0;
  ImageCodec.ROBUST_JPEG = ImageCodec.DEFAULT + 1;
  ImageCodec.ROBUST_PNG = ImageCodec.ROBUST_JPEG + 1;

  function ImageDecoder_DecodeImage_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ImageDecoder_DecodeImage_Params.prototype.initDefaults_ = function() {
    this.encoded_data = null;
    this.codec = 0;
    this.shrink_to_fit = false;
  };
  ImageDecoder_DecodeImage_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ImageDecoder_DecodeImage_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ImageDecoder_DecodeImage_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ImageDecoder_DecodeImage_Params.encoded_data
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  ImageDecoder_DecodeImage_Params.encodedSize = codec.kStructHeaderSize + 16;

  ImageDecoder_DecodeImage_Params.decode = function(decoder) {
    var packed;
    var val = new ImageDecoder_DecodeImage_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.encoded_data = decoder.decodeArrayPointer(codec.Uint8);
    val.codec = decoder.decodeStruct(codec.Int32);
    val.shrink_to_fit = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ImageDecoder_DecodeImage_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ImageDecoder_DecodeImage_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Uint8, val.encoded_data);
    encoder.encodeStruct(codec.Int32, val.codec);
    encoder.encodeStruct(codec.Uint8, val.shrink_to_fit);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ImageDecoder_DecodeImage_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ImageDecoder_DecodeImage_ResponseParams.prototype.initDefaults_ = function() {
    this.decoded_image = null;
  };
  ImageDecoder_DecodeImage_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ImageDecoder_DecodeImage_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ImageDecoder_DecodeImage_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ImageDecoder_DecodeImage_ResponseParams.decoded_image
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, bitmap$.Bitmap, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ImageDecoder_DecodeImage_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  ImageDecoder_DecodeImage_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ImageDecoder_DecodeImage_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.decoded_image = decoder.decodeStructPointer(bitmap$.Bitmap);
    return val;
  };

  ImageDecoder_DecodeImage_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ImageDecoder_DecodeImage_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(bitmap$.Bitmap, val.decoded_image);
  };
  var kImageDecoder_DecodeImage_Name = 0;

  function ImageDecoderProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  ImageDecoderProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  ImageDecoderProxy.prototype.decodeImage = function(encoded_data, codec, shrink_to_fit) {
    var params = new ImageDecoder_DecodeImage_Params();
    params.encoded_data = encoded_data;
    params.codec = codec;
    params.shrink_to_fit = shrink_to_fit;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kImageDecoder_DecodeImage_Name,
          codec.align(ImageDecoder_DecodeImage_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ImageDecoder_DecodeImage_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ImageDecoder_DecodeImage_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function ImageDecoderStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  ImageDecoderStub.prototype = Object.create(bindings.StubBase.prototype);
  ImageDecoderStub.prototype.decodeImage = function(encoded_data, codec, shrink_to_fit) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.decodeImage && bindings.StubBindings(this).delegate.decodeImage(encoded_data, codec, shrink_to_fit);
  }

  ImageDecoderStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  ImageDecoderStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kImageDecoder_DecodeImage_Name:
      var params = reader.decodeStruct(ImageDecoder_DecodeImage_Params);
      return this.decodeImage(params.encoded_data, params.codec, params.shrink_to_fit).then(function(response) {
        var responseParams =
            new ImageDecoder_DecodeImage_ResponseParams();
        responseParams.decoded_image = response.decoded_image;
        var builder = new codec.MessageWithRequestIDBuilder(
            kImageDecoder_DecodeImage_Name,
            codec.align(ImageDecoder_DecodeImage_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ImageDecoder_DecodeImage_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateImageDecoderRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kImageDecoder_DecodeImage_Name:
        if (message.expectsResponse())
          paramsClass = ImageDecoder_DecodeImage_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateImageDecoderResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kImageDecoder_DecodeImage_Name:
        if (message.isResponse())
          paramsClass = ImageDecoder_DecodeImage_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var ImageDecoder = {
    name: 'mojom::ImageDecoder',
    proxyClass: ImageDecoderProxy,
    stubClass: ImageDecoderStub,
    validateRequest: validateImageDecoderRequest,
    validateResponse: validateImageDecoderResponse,
  };
  ImageDecoderStub.prototype.validator = validateImageDecoderRequest;
  ImageDecoderProxy.prototype.validator = validateImageDecoderResponse;

  var exports = {};
  exports.ImageCodec = ImageCodec;
  exports.ImageDecoder = ImageDecoder;

  return exports;
});
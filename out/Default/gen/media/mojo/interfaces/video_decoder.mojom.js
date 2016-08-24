// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("media/mojo/interfaces/video_decoder.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "media/mojo/interfaces/media_types.mojom",
], function(bindings, codec, connection, core, validator, media_types$) {

  function VideoDecoder_Construct_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoDecoder_Construct_Params.prototype.initDefaults_ = function() {
    this.client = null;
    this.decoder_buffer_pipe = null;
  };
  VideoDecoder_Construct_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  VideoDecoder_Construct_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, VideoDecoder_Construct_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate VideoDecoder_Construct_Params.client
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate VideoDecoder_Construct_Params.decoder_buffer_pipe
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VideoDecoder_Construct_Params.encodedSize = codec.kStructHeaderSize + 16;

  VideoDecoder_Construct_Params.decode = function(decoder) {
    var packed;
    var val = new VideoDecoder_Construct_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.client = decoder.decodeStruct(codec.Interface);
    val.decoder_buffer_pipe = decoder.decodeStruct(codec.Handle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  VideoDecoder_Construct_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoDecoder_Construct_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Interface, val.client);
    encoder.encodeStruct(codec.Handle, val.decoder_buffer_pipe);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function VideoDecoder_Initialize_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoDecoder_Initialize_Params.prototype.initDefaults_ = function() {
    this.config = null;
    this.low_delay = false;
  };
  VideoDecoder_Initialize_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  VideoDecoder_Initialize_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, VideoDecoder_Initialize_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate VideoDecoder_Initialize_Params.config
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, media_types$.VideoDecoderConfig, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  VideoDecoder_Initialize_Params.encodedSize = codec.kStructHeaderSize + 16;

  VideoDecoder_Initialize_Params.decode = function(decoder) {
    var packed;
    var val = new VideoDecoder_Initialize_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.config = decoder.decodeStructPointer(media_types$.VideoDecoderConfig);
    val.low_delay = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  VideoDecoder_Initialize_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoDecoder_Initialize_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(media_types$.VideoDecoderConfig, val.config);
    encoder.encodeStruct(codec.Uint8, val.low_delay);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function VideoDecoder_Initialize_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoDecoder_Initialize_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  VideoDecoder_Initialize_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  VideoDecoder_Initialize_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, VideoDecoder_Initialize_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  VideoDecoder_Initialize_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  VideoDecoder_Initialize_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new VideoDecoder_Initialize_ResponseParams();
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

  VideoDecoder_Initialize_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoDecoder_Initialize_ResponseParams.encodedSize);
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
  function VideoDecoder_Decode_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoDecoder_Decode_Params.prototype.initDefaults_ = function() {
    this.buffer = null;
  };
  VideoDecoder_Decode_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  VideoDecoder_Decode_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, VideoDecoder_Decode_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate VideoDecoder_Decode_Params.buffer
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, media_types$.DecoderBuffer, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VideoDecoder_Decode_Params.encodedSize = codec.kStructHeaderSize + 8;

  VideoDecoder_Decode_Params.decode = function(decoder) {
    var packed;
    var val = new VideoDecoder_Decode_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.buffer = decoder.decodeStructPointer(media_types$.DecoderBuffer);
    return val;
  };

  VideoDecoder_Decode_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoDecoder_Decode_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(media_types$.DecoderBuffer, val.buffer);
  };
  function VideoDecoder_Decode_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoDecoder_Decode_ResponseParams.prototype.initDefaults_ = function() {
    this.status = 0;
  };
  VideoDecoder_Decode_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  VideoDecoder_Decode_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, VideoDecoder_Decode_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  VideoDecoder_Decode_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  VideoDecoder_Decode_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new VideoDecoder_Decode_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  VideoDecoder_Decode_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoDecoder_Decode_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function VideoDecoder_Reset_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoDecoder_Reset_Params.prototype.initDefaults_ = function() {
  };
  VideoDecoder_Reset_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  VideoDecoder_Reset_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, VideoDecoder_Reset_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VideoDecoder_Reset_Params.encodedSize = codec.kStructHeaderSize + 0;

  VideoDecoder_Reset_Params.decode = function(decoder) {
    var packed;
    var val = new VideoDecoder_Reset_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  VideoDecoder_Reset_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoDecoder_Reset_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function VideoDecoder_Reset_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoDecoder_Reset_ResponseParams.prototype.initDefaults_ = function() {
  };
  VideoDecoder_Reset_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  VideoDecoder_Reset_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, VideoDecoder_Reset_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VideoDecoder_Reset_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  VideoDecoder_Reset_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new VideoDecoder_Reset_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  VideoDecoder_Reset_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoDecoder_Reset_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  function VideoDecoderClient_OnVideoFrameDecoded_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoDecoderClient_OnVideoFrameDecoded_Params.prototype.initDefaults_ = function() {
    this.frame = null;
  };
  VideoDecoderClient_OnVideoFrameDecoded_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  VideoDecoderClient_OnVideoFrameDecoded_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, VideoDecoderClient_OnVideoFrameDecoded_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate VideoDecoderClient_OnVideoFrameDecoded_Params.frame
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, media_types$.VideoFrame, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VideoDecoderClient_OnVideoFrameDecoded_Params.encodedSize = codec.kStructHeaderSize + 8;

  VideoDecoderClient_OnVideoFrameDecoded_Params.decode = function(decoder) {
    var packed;
    var val = new VideoDecoderClient_OnVideoFrameDecoded_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.frame = decoder.decodeStructPointer(media_types$.VideoFrame);
    return val;
  };

  VideoDecoderClient_OnVideoFrameDecoded_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoDecoderClient_OnVideoFrameDecoded_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(media_types$.VideoFrame, val.frame);
  };
  var kVideoDecoder_Construct_Name = 0;
  var kVideoDecoder_Initialize_Name = 1;
  var kVideoDecoder_Decode_Name = 2;
  var kVideoDecoder_Reset_Name = 3;

  function VideoDecoderProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  VideoDecoderProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  VideoDecoderProxy.prototype.construct = function(client, decoder_buffer_pipe) {
    var params = new VideoDecoder_Construct_Params();
    params.client = core.isHandle(client) ? client : connection.bindImpl(client, VideoDecoderClient);
    params.decoder_buffer_pipe = decoder_buffer_pipe;
    var builder = new codec.MessageBuilder(
        kVideoDecoder_Construct_Name,
        codec.align(VideoDecoder_Construct_Params.encodedSize));
    builder.encodeStruct(VideoDecoder_Construct_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  VideoDecoderProxy.prototype.initialize = function(config, low_delay) {
    var params = new VideoDecoder_Initialize_Params();
    params.config = config;
    params.low_delay = low_delay;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kVideoDecoder_Initialize_Name,
          codec.align(VideoDecoder_Initialize_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(VideoDecoder_Initialize_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(VideoDecoder_Initialize_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  VideoDecoderProxy.prototype.decode = function(buffer) {
    var params = new VideoDecoder_Decode_Params();
    params.buffer = buffer;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kVideoDecoder_Decode_Name,
          codec.align(VideoDecoder_Decode_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(VideoDecoder_Decode_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(VideoDecoder_Decode_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  VideoDecoderProxy.prototype.reset = function() {
    var params = new VideoDecoder_Reset_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kVideoDecoder_Reset_Name,
          codec.align(VideoDecoder_Reset_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(VideoDecoder_Reset_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(VideoDecoder_Reset_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function VideoDecoderStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  VideoDecoderStub.prototype = Object.create(bindings.StubBase.prototype);
  VideoDecoderStub.prototype.construct = function(client, decoder_buffer_pipe) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.construct && bindings.StubBindings(this).delegate.construct(connection.bindHandleToProxy(client, VideoDecoderClient), decoder_buffer_pipe);
  }
  VideoDecoderStub.prototype.initialize = function(config, low_delay) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.initialize && bindings.StubBindings(this).delegate.initialize(config, low_delay);
  }
  VideoDecoderStub.prototype.decode = function(buffer) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.decode && bindings.StubBindings(this).delegate.decode(buffer);
  }
  VideoDecoderStub.prototype.reset = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.reset && bindings.StubBindings(this).delegate.reset();
  }

  VideoDecoderStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kVideoDecoder_Construct_Name:
      var params = reader.decodeStruct(VideoDecoder_Construct_Params);
      this.construct(params.client, params.decoder_buffer_pipe);
      return true;
    default:
      return false;
    }
  };

  VideoDecoderStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kVideoDecoder_Initialize_Name:
      var params = reader.decodeStruct(VideoDecoder_Initialize_Params);
      return this.initialize(params.config, params.low_delay).then(function(response) {
        var responseParams =
            new VideoDecoder_Initialize_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageWithRequestIDBuilder(
            kVideoDecoder_Initialize_Name,
            codec.align(VideoDecoder_Initialize_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(VideoDecoder_Initialize_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kVideoDecoder_Decode_Name:
      var params = reader.decodeStruct(VideoDecoder_Decode_Params);
      return this.decode(params.buffer).then(function(response) {
        var responseParams =
            new VideoDecoder_Decode_ResponseParams();
        responseParams.status = response.status;
        var builder = new codec.MessageWithRequestIDBuilder(
            kVideoDecoder_Decode_Name,
            codec.align(VideoDecoder_Decode_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(VideoDecoder_Decode_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kVideoDecoder_Reset_Name:
      var params = reader.decodeStruct(VideoDecoder_Reset_Params);
      return this.reset().then(function(response) {
        var responseParams =
            new VideoDecoder_Reset_ResponseParams();
        var builder = new codec.MessageWithRequestIDBuilder(
            kVideoDecoder_Reset_Name,
            codec.align(VideoDecoder_Reset_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(VideoDecoder_Reset_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateVideoDecoderRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kVideoDecoder_Construct_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = VideoDecoder_Construct_Params;
      break;
      case kVideoDecoder_Initialize_Name:
        if (message.expectsResponse())
          paramsClass = VideoDecoder_Initialize_Params;
      break;
      case kVideoDecoder_Decode_Name:
        if (message.expectsResponse())
          paramsClass = VideoDecoder_Decode_Params;
      break;
      case kVideoDecoder_Reset_Name:
        if (message.expectsResponse())
          paramsClass = VideoDecoder_Reset_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateVideoDecoderResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kVideoDecoder_Initialize_Name:
        if (message.isResponse())
          paramsClass = VideoDecoder_Initialize_ResponseParams;
        break;
      case kVideoDecoder_Decode_Name:
        if (message.isResponse())
          paramsClass = VideoDecoder_Decode_ResponseParams;
        break;
      case kVideoDecoder_Reset_Name:
        if (message.isResponse())
          paramsClass = VideoDecoder_Reset_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var VideoDecoder = {
    name: 'media::mojom::VideoDecoder',
    proxyClass: VideoDecoderProxy,
    stubClass: VideoDecoderStub,
    validateRequest: validateVideoDecoderRequest,
    validateResponse: validateVideoDecoderResponse,
  };
  VideoDecoderStub.prototype.validator = validateVideoDecoderRequest;
  VideoDecoderProxy.prototype.validator = validateVideoDecoderResponse;
  var kVideoDecoderClient_OnVideoFrameDecoded_Name = 0;

  function VideoDecoderClientProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  VideoDecoderClientProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  VideoDecoderClientProxy.prototype.onVideoFrameDecoded = function(frame) {
    var params = new VideoDecoderClient_OnVideoFrameDecoded_Params();
    params.frame = frame;
    var builder = new codec.MessageBuilder(
        kVideoDecoderClient_OnVideoFrameDecoded_Name,
        codec.align(VideoDecoderClient_OnVideoFrameDecoded_Params.encodedSize));
    builder.encodeStruct(VideoDecoderClient_OnVideoFrameDecoded_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function VideoDecoderClientStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  VideoDecoderClientStub.prototype = Object.create(bindings.StubBase.prototype);
  VideoDecoderClientStub.prototype.onVideoFrameDecoded = function(frame) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onVideoFrameDecoded && bindings.StubBindings(this).delegate.onVideoFrameDecoded(frame);
  }

  VideoDecoderClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kVideoDecoderClient_OnVideoFrameDecoded_Name:
      var params = reader.decodeStruct(VideoDecoderClient_OnVideoFrameDecoded_Params);
      this.onVideoFrameDecoded(params.frame);
      return true;
    default:
      return false;
    }
  };

  VideoDecoderClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateVideoDecoderClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kVideoDecoderClient_OnVideoFrameDecoded_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = VideoDecoderClient_OnVideoFrameDecoded_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateVideoDecoderClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var VideoDecoderClient = {
    name: 'media::mojom::VideoDecoderClient',
    proxyClass: VideoDecoderClientProxy,
    stubClass: VideoDecoderClientStub,
    validateRequest: validateVideoDecoderClientRequest,
    validateResponse: null,
  };
  VideoDecoderClientStub.prototype.validator = validateVideoDecoderClientRequest;
  VideoDecoderClientProxy.prototype.validator = null;

  var exports = {};
  exports.VideoDecoder = VideoDecoder;
  exports.VideoDecoderClient = VideoDecoderClient;

  return exports;
});
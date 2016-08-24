// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("media/mojo/interfaces/service_factory.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "media/mojo/interfaces/audio_decoder.mojom",
    "media/mojo/interfaces/content_decryption_module.mojom",
    "media/mojo/interfaces/renderer.mojom",
    "media/mojo/interfaces/video_decoder.mojom",
], function(bindings, codec, connection, core, validator, audio_decoder$, content_decryption_module$, renderer$, video_decoder$) {

  function ServiceFactory_CreateAudioDecoder_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceFactory_CreateAudioDecoder_Params.prototype.initDefaults_ = function() {
    this.audio_decoder = null;
  };
  ServiceFactory_CreateAudioDecoder_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ServiceFactory_CreateAudioDecoder_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ServiceFactory_CreateAudioDecoder_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ServiceFactory_CreateAudioDecoder_Params.audio_decoder
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceFactory_CreateAudioDecoder_Params.encodedSize = codec.kStructHeaderSize + 8;

  ServiceFactory_CreateAudioDecoder_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceFactory_CreateAudioDecoder_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.audio_decoder = decoder.decodeStruct(codec.Handle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ServiceFactory_CreateAudioDecoder_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceFactory_CreateAudioDecoder_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.audio_decoder);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ServiceFactory_CreateVideoDecoder_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceFactory_CreateVideoDecoder_Params.prototype.initDefaults_ = function() {
    this.video_decoder = null;
  };
  ServiceFactory_CreateVideoDecoder_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ServiceFactory_CreateVideoDecoder_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ServiceFactory_CreateVideoDecoder_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ServiceFactory_CreateVideoDecoder_Params.video_decoder
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceFactory_CreateVideoDecoder_Params.encodedSize = codec.kStructHeaderSize + 8;

  ServiceFactory_CreateVideoDecoder_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceFactory_CreateVideoDecoder_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.video_decoder = decoder.decodeStruct(codec.Handle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ServiceFactory_CreateVideoDecoder_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceFactory_CreateVideoDecoder_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.video_decoder);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ServiceFactory_CreateRenderer_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceFactory_CreateRenderer_Params.prototype.initDefaults_ = function() {
    this.audio_device_id = null;
    this.renderer = null;
  };
  ServiceFactory_CreateRenderer_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ServiceFactory_CreateRenderer_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ServiceFactory_CreateRenderer_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ServiceFactory_CreateRenderer_Params.audio_device_id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ServiceFactory_CreateRenderer_Params.renderer
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceFactory_CreateRenderer_Params.encodedSize = codec.kStructHeaderSize + 16;

  ServiceFactory_CreateRenderer_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceFactory_CreateRenderer_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.audio_device_id = decoder.decodeStruct(codec.String);
    val.renderer = decoder.decodeStruct(codec.Handle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ServiceFactory_CreateRenderer_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceFactory_CreateRenderer_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.audio_device_id);
    encoder.encodeStruct(codec.Handle, val.renderer);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ServiceFactory_CreateCdm_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceFactory_CreateCdm_Params.prototype.initDefaults_ = function() {
    this.cdm = null;
  };
  ServiceFactory_CreateCdm_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ServiceFactory_CreateCdm_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ServiceFactory_CreateCdm_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ServiceFactory_CreateCdm_Params.cdm
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceFactory_CreateCdm_Params.encodedSize = codec.kStructHeaderSize + 8;

  ServiceFactory_CreateCdm_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceFactory_CreateCdm_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.cdm = decoder.decodeStruct(codec.Handle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ServiceFactory_CreateCdm_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceFactory_CreateCdm_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.cdm);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kServiceFactory_CreateAudioDecoder_Name = 0;
  var kServiceFactory_CreateVideoDecoder_Name = 1;
  var kServiceFactory_CreateRenderer_Name = 2;
  var kServiceFactory_CreateCdm_Name = 3;

  function ServiceFactoryProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  ServiceFactoryProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  ServiceFactoryProxy.prototype.createAudioDecoder = function(audio_decoder) {
    var params = new ServiceFactory_CreateAudioDecoder_Params();
    params.audio_decoder = core.isHandle(audio_decoder) ? audio_decoder : connection.bindProxy(audio_decoder, audio_decoder$.AudioDecoder);
    var builder = new codec.MessageBuilder(
        kServiceFactory_CreateAudioDecoder_Name,
        codec.align(ServiceFactory_CreateAudioDecoder_Params.encodedSize));
    builder.encodeStruct(ServiceFactory_CreateAudioDecoder_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ServiceFactoryProxy.prototype.createVideoDecoder = function(video_decoder) {
    var params = new ServiceFactory_CreateVideoDecoder_Params();
    params.video_decoder = core.isHandle(video_decoder) ? video_decoder : connection.bindProxy(video_decoder, video_decoder$.VideoDecoder);
    var builder = new codec.MessageBuilder(
        kServiceFactory_CreateVideoDecoder_Name,
        codec.align(ServiceFactory_CreateVideoDecoder_Params.encodedSize));
    builder.encodeStruct(ServiceFactory_CreateVideoDecoder_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ServiceFactoryProxy.prototype.createRenderer = function(audio_device_id, renderer) {
    var params = new ServiceFactory_CreateRenderer_Params();
    params.audio_device_id = audio_device_id;
    params.renderer = core.isHandle(renderer) ? renderer : connection.bindProxy(renderer, renderer$.Renderer);
    var builder = new codec.MessageBuilder(
        kServiceFactory_CreateRenderer_Name,
        codec.align(ServiceFactory_CreateRenderer_Params.encodedSize));
    builder.encodeStruct(ServiceFactory_CreateRenderer_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ServiceFactoryProxy.prototype.createCdm = function(cdm) {
    var params = new ServiceFactory_CreateCdm_Params();
    params.cdm = core.isHandle(cdm) ? cdm : connection.bindProxy(cdm, content_decryption_module$.ContentDecryptionModule);
    var builder = new codec.MessageBuilder(
        kServiceFactory_CreateCdm_Name,
        codec.align(ServiceFactory_CreateCdm_Params.encodedSize));
    builder.encodeStruct(ServiceFactory_CreateCdm_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ServiceFactoryStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  ServiceFactoryStub.prototype = Object.create(bindings.StubBase.prototype);
  ServiceFactoryStub.prototype.createAudioDecoder = function(audio_decoder) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.createAudioDecoder && bindings.StubBindings(this).delegate.createAudioDecoder(connection.bindHandleToStub(audio_decoder, audio_decoder$.AudioDecoder));
  }
  ServiceFactoryStub.prototype.createVideoDecoder = function(video_decoder) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.createVideoDecoder && bindings.StubBindings(this).delegate.createVideoDecoder(connection.bindHandleToStub(video_decoder, video_decoder$.VideoDecoder));
  }
  ServiceFactoryStub.prototype.createRenderer = function(audio_device_id, renderer) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.createRenderer && bindings.StubBindings(this).delegate.createRenderer(audio_device_id, connection.bindHandleToStub(renderer, renderer$.Renderer));
  }
  ServiceFactoryStub.prototype.createCdm = function(cdm) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.createCdm && bindings.StubBindings(this).delegate.createCdm(connection.bindHandleToStub(cdm, content_decryption_module$.ContentDecryptionModule));
  }

  ServiceFactoryStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kServiceFactory_CreateAudioDecoder_Name:
      var params = reader.decodeStruct(ServiceFactory_CreateAudioDecoder_Params);
      this.createAudioDecoder(params.audio_decoder);
      return true;
    case kServiceFactory_CreateVideoDecoder_Name:
      var params = reader.decodeStruct(ServiceFactory_CreateVideoDecoder_Params);
      this.createVideoDecoder(params.video_decoder);
      return true;
    case kServiceFactory_CreateRenderer_Name:
      var params = reader.decodeStruct(ServiceFactory_CreateRenderer_Params);
      this.createRenderer(params.audio_device_id, params.renderer);
      return true;
    case kServiceFactory_CreateCdm_Name:
      var params = reader.decodeStruct(ServiceFactory_CreateCdm_Params);
      this.createCdm(params.cdm);
      return true;
    default:
      return false;
    }
  };

  ServiceFactoryStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateServiceFactoryRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kServiceFactory_CreateAudioDecoder_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ServiceFactory_CreateAudioDecoder_Params;
      break;
      case kServiceFactory_CreateVideoDecoder_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ServiceFactory_CreateVideoDecoder_Params;
      break;
      case kServiceFactory_CreateRenderer_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ServiceFactory_CreateRenderer_Params;
      break;
      case kServiceFactory_CreateCdm_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ServiceFactory_CreateCdm_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateServiceFactoryResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ServiceFactory = {
    name: 'media::mojom::ServiceFactory',
    proxyClass: ServiceFactoryProxy,
    stubClass: ServiceFactoryStub,
    validateRequest: validateServiceFactoryRequest,
    validateResponse: null,
  };
  ServiceFactoryStub.prototype.validator = validateServiceFactoryRequest;
  ServiceFactoryProxy.prototype.validator = null;

  var exports = {};
  exports.ServiceFactory = ServiceFactory;

  return exports;
});
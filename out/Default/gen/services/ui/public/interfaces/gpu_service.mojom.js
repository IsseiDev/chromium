// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("services/ui/public/interfaces/gpu_service.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "gpu/ipc/common/gpu_info.mojom",
    "gpu/ipc/common/sync_token.mojom",
    "services/ui/public/interfaces/gpu_memory_buffer.mojom",
    "ui/gfx/geometry/mojo/geometry.mojom",
    "ui/gfx/mojo/buffer_types.mojom",
], function(bindings, codec, connection, core, validator, gpu_info$, sync_token$, gpu_memory_buffer$, geometry$, buffer_types$) {

  function GpuService_EstablishGpuChannel_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GpuService_EstablishGpuChannel_Params.prototype.initDefaults_ = function() {
  };
  GpuService_EstablishGpuChannel_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  GpuService_EstablishGpuChannel_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, GpuService_EstablishGpuChannel_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  GpuService_EstablishGpuChannel_Params.encodedSize = codec.kStructHeaderSize + 0;

  GpuService_EstablishGpuChannel_Params.decode = function(decoder) {
    var packed;
    var val = new GpuService_EstablishGpuChannel_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  GpuService_EstablishGpuChannel_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GpuService_EstablishGpuChannel_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function GpuService_EstablishGpuChannel_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GpuService_EstablishGpuChannel_ResponseParams.prototype.initDefaults_ = function() {
    this.client_id = 0;
    this.channel_handle = null;
    this.gpu_info = null;
  };
  GpuService_EstablishGpuChannel_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  GpuService_EstablishGpuChannel_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, GpuService_EstablishGpuChannel_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate GpuService_EstablishGpuChannel_ResponseParams.channel_handle
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 4, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate GpuService_EstablishGpuChannel_ResponseParams.gpu_info
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, gpu_info$.GpuInfo, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  GpuService_EstablishGpuChannel_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  GpuService_EstablishGpuChannel_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new GpuService_EstablishGpuChannel_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.client_id = decoder.decodeStruct(codec.Int32);
    val.channel_handle = decoder.decodeStruct(codec.Handle);
    val.gpu_info = decoder.decodeStructPointer(gpu_info$.GpuInfo);
    return val;
  };

  GpuService_EstablishGpuChannel_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GpuService_EstablishGpuChannel_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.client_id);
    encoder.encodeStruct(codec.Handle, val.channel_handle);
    encoder.encodeStructPointer(gpu_info$.GpuInfo, val.gpu_info);
  };
  function GpuService_CreateGpuMemoryBuffer_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GpuService_CreateGpuMemoryBuffer_Params.prototype.initDefaults_ = function() {
    this.id = null;
    this.size = null;
    this.format = 0;
    this.usage = 0;
    this.surface_id = 0;
  };
  GpuService_CreateGpuMemoryBuffer_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  GpuService_CreateGpuMemoryBuffer_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, GpuService_CreateGpuMemoryBuffer_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate GpuService_CreateGpuMemoryBuffer_Params.id
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, gpu_memory_buffer$.GpuMemoryBufferId, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate GpuService_CreateGpuMemoryBuffer_Params.size
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, geometry$.Size, false);
    if (err !== validator.validationError.NONE)
        return err;




    return validator.validationError.NONE;
  };

  GpuService_CreateGpuMemoryBuffer_Params.encodedSize = codec.kStructHeaderSize + 32;

  GpuService_CreateGpuMemoryBuffer_Params.decode = function(decoder) {
    var packed;
    var val = new GpuService_CreateGpuMemoryBuffer_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStructPointer(gpu_memory_buffer$.GpuMemoryBufferId);
    val.size = decoder.decodeStructPointer(geometry$.Size);
    val.format = decoder.decodeStruct(codec.Int32);
    val.usage = decoder.decodeStruct(codec.Int32);
    val.surface_id = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  GpuService_CreateGpuMemoryBuffer_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GpuService_CreateGpuMemoryBuffer_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(gpu_memory_buffer$.GpuMemoryBufferId, val.id);
    encoder.encodeStructPointer(geometry$.Size, val.size);
    encoder.encodeStruct(codec.Int32, val.format);
    encoder.encodeStruct(codec.Int32, val.usage);
    encoder.encodeStruct(codec.Uint64, val.surface_id);
  };
  function GpuService_CreateGpuMemoryBuffer_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GpuService_CreateGpuMemoryBuffer_ResponseParams.prototype.initDefaults_ = function() {
    this.buffer_handle = null;
  };
  GpuService_CreateGpuMemoryBuffer_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  GpuService_CreateGpuMemoryBuffer_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, GpuService_CreateGpuMemoryBuffer_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate GpuService_CreateGpuMemoryBuffer_ResponseParams.buffer_handle
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, gpu_memory_buffer$.GpuMemoryBufferHandle, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  GpuService_CreateGpuMemoryBuffer_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  GpuService_CreateGpuMemoryBuffer_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new GpuService_CreateGpuMemoryBuffer_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.buffer_handle = decoder.decodeStructPointer(gpu_memory_buffer$.GpuMemoryBufferHandle);
    return val;
  };

  GpuService_CreateGpuMemoryBuffer_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GpuService_CreateGpuMemoryBuffer_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(gpu_memory_buffer$.GpuMemoryBufferHandle, val.buffer_handle);
  };
  function GpuService_DestroyGpuMemoryBuffer_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GpuService_DestroyGpuMemoryBuffer_Params.prototype.initDefaults_ = function() {
    this.id = null;
    this.sync_token = null;
  };
  GpuService_DestroyGpuMemoryBuffer_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  GpuService_DestroyGpuMemoryBuffer_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, GpuService_DestroyGpuMemoryBuffer_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate GpuService_DestroyGpuMemoryBuffer_Params.id
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, gpu_memory_buffer$.GpuMemoryBufferId, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate GpuService_DestroyGpuMemoryBuffer_Params.sync_token
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, sync_token$.SyncToken, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  GpuService_DestroyGpuMemoryBuffer_Params.encodedSize = codec.kStructHeaderSize + 16;

  GpuService_DestroyGpuMemoryBuffer_Params.decode = function(decoder) {
    var packed;
    var val = new GpuService_DestroyGpuMemoryBuffer_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStructPointer(gpu_memory_buffer$.GpuMemoryBufferId);
    val.sync_token = decoder.decodeStructPointer(sync_token$.SyncToken);
    return val;
  };

  GpuService_DestroyGpuMemoryBuffer_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GpuService_DestroyGpuMemoryBuffer_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(gpu_memory_buffer$.GpuMemoryBufferId, val.id);
    encoder.encodeStructPointer(sync_token$.SyncToken, val.sync_token);
  };
  var kGpuService_EstablishGpuChannel_Name = 0;
  var kGpuService_CreateGpuMemoryBuffer_Name = 1;
  var kGpuService_DestroyGpuMemoryBuffer_Name = 2;

  function GpuServiceProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  GpuServiceProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  GpuServiceProxy.prototype.establishGpuChannel = function() {
    var params = new GpuService_EstablishGpuChannel_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kGpuService_EstablishGpuChannel_Name,
          codec.align(GpuService_EstablishGpuChannel_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(GpuService_EstablishGpuChannel_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(GpuService_EstablishGpuChannel_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  GpuServiceProxy.prototype.createGpuMemoryBuffer = function(id, size, format, usage, surface_id) {
    var params = new GpuService_CreateGpuMemoryBuffer_Params();
    params.id = id;
    params.size = size;
    params.format = format;
    params.usage = usage;
    params.surface_id = surface_id;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kGpuService_CreateGpuMemoryBuffer_Name,
          codec.align(GpuService_CreateGpuMemoryBuffer_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(GpuService_CreateGpuMemoryBuffer_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(GpuService_CreateGpuMemoryBuffer_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  GpuServiceProxy.prototype.destroyGpuMemoryBuffer = function(id, sync_token) {
    var params = new GpuService_DestroyGpuMemoryBuffer_Params();
    params.id = id;
    params.sync_token = sync_token;
    var builder = new codec.MessageBuilder(
        kGpuService_DestroyGpuMemoryBuffer_Name,
        codec.align(GpuService_DestroyGpuMemoryBuffer_Params.encodedSize));
    builder.encodeStruct(GpuService_DestroyGpuMemoryBuffer_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function GpuServiceStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  GpuServiceStub.prototype = Object.create(bindings.StubBase.prototype);
  GpuServiceStub.prototype.establishGpuChannel = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.establishGpuChannel && bindings.StubBindings(this).delegate.establishGpuChannel();
  }
  GpuServiceStub.prototype.createGpuMemoryBuffer = function(id, size, format, usage, surface_id) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.createGpuMemoryBuffer && bindings.StubBindings(this).delegate.createGpuMemoryBuffer(id, size, format, usage, surface_id);
  }
  GpuServiceStub.prototype.destroyGpuMemoryBuffer = function(id, sync_token) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.destroyGpuMemoryBuffer && bindings.StubBindings(this).delegate.destroyGpuMemoryBuffer(id, sync_token);
  }

  GpuServiceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kGpuService_DestroyGpuMemoryBuffer_Name:
      var params = reader.decodeStruct(GpuService_DestroyGpuMemoryBuffer_Params);
      this.destroyGpuMemoryBuffer(params.id, params.sync_token);
      return true;
    default:
      return false;
    }
  };

  GpuServiceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kGpuService_EstablishGpuChannel_Name:
      var params = reader.decodeStruct(GpuService_EstablishGpuChannel_Params);
      return this.establishGpuChannel().then(function(response) {
        var responseParams =
            new GpuService_EstablishGpuChannel_ResponseParams();
        responseParams.client_id = response.client_id;
        responseParams.channel_handle = response.channel_handle;
        responseParams.gpu_info = response.gpu_info;
        var builder = new codec.MessageWithRequestIDBuilder(
            kGpuService_EstablishGpuChannel_Name,
            codec.align(GpuService_EstablishGpuChannel_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(GpuService_EstablishGpuChannel_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kGpuService_CreateGpuMemoryBuffer_Name:
      var params = reader.decodeStruct(GpuService_CreateGpuMemoryBuffer_Params);
      return this.createGpuMemoryBuffer(params.id, params.size, params.format, params.usage, params.surface_id).then(function(response) {
        var responseParams =
            new GpuService_CreateGpuMemoryBuffer_ResponseParams();
        responseParams.buffer_handle = response.buffer_handle;
        var builder = new codec.MessageWithRequestIDBuilder(
            kGpuService_CreateGpuMemoryBuffer_Name,
            codec.align(GpuService_CreateGpuMemoryBuffer_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(GpuService_CreateGpuMemoryBuffer_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateGpuServiceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kGpuService_EstablishGpuChannel_Name:
        if (message.expectsResponse())
          paramsClass = GpuService_EstablishGpuChannel_Params;
      break;
      case kGpuService_CreateGpuMemoryBuffer_Name:
        if (message.expectsResponse())
          paramsClass = GpuService_CreateGpuMemoryBuffer_Params;
      break;
      case kGpuService_DestroyGpuMemoryBuffer_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = GpuService_DestroyGpuMemoryBuffer_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateGpuServiceResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kGpuService_EstablishGpuChannel_Name:
        if (message.isResponse())
          paramsClass = GpuService_EstablishGpuChannel_ResponseParams;
        break;
      case kGpuService_CreateGpuMemoryBuffer_Name:
        if (message.isResponse())
          paramsClass = GpuService_CreateGpuMemoryBuffer_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var GpuService = {
    name: 'ui::mojom::GpuService',
    proxyClass: GpuServiceProxy,
    stubClass: GpuServiceStub,
    validateRequest: validateGpuServiceRequest,
    validateResponse: validateGpuServiceResponse,
  };
  GpuServiceStub.prototype.validator = validateGpuServiceRequest;
  GpuServiceProxy.prototype.validator = validateGpuServiceResponse;

  var exports = {};
  exports.GpuService = GpuService;

  return exports;
});
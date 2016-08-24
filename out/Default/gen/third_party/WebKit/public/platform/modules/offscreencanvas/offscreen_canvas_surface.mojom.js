// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("third_party/WebKit/public/platform/modules/offscreencanvas/offscreen_canvas_surface.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "cc/ipc/surface_id.mojom",
    "cc/ipc/surface_sequence.mojom",
], function(bindings, codec, connection, core, validator, surface_id$, surface_sequence$) {

  function OffscreenCanvasSurface_GetSurfaceId_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  OffscreenCanvasSurface_GetSurfaceId_Params.prototype.initDefaults_ = function() {
  };
  OffscreenCanvasSurface_GetSurfaceId_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  OffscreenCanvasSurface_GetSurfaceId_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, OffscreenCanvasSurface_GetSurfaceId_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  OffscreenCanvasSurface_GetSurfaceId_Params.encodedSize = codec.kStructHeaderSize + 0;

  OffscreenCanvasSurface_GetSurfaceId_Params.decode = function(decoder) {
    var packed;
    var val = new OffscreenCanvasSurface_GetSurfaceId_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  OffscreenCanvasSurface_GetSurfaceId_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(OffscreenCanvasSurface_GetSurfaceId_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function OffscreenCanvasSurface_GetSurfaceId_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  OffscreenCanvasSurface_GetSurfaceId_ResponseParams.prototype.initDefaults_ = function() {
    this.surface_id = null;
  };
  OffscreenCanvasSurface_GetSurfaceId_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  OffscreenCanvasSurface_GetSurfaceId_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, OffscreenCanvasSurface_GetSurfaceId_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate OffscreenCanvasSurface_GetSurfaceId_ResponseParams.surface_id
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, surface_id$.SurfaceId, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  OffscreenCanvasSurface_GetSurfaceId_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  OffscreenCanvasSurface_GetSurfaceId_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new OffscreenCanvasSurface_GetSurfaceId_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.surface_id = decoder.decodeStructPointer(surface_id$.SurfaceId);
    return val;
  };

  OffscreenCanvasSurface_GetSurfaceId_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(OffscreenCanvasSurface_GetSurfaceId_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(surface_id$.SurfaceId, val.surface_id);
  };
  function OffscreenCanvasSurface_RequestSurfaceCreation_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  OffscreenCanvasSurface_RequestSurfaceCreation_Params.prototype.initDefaults_ = function() {
    this.surface_id = null;
  };
  OffscreenCanvasSurface_RequestSurfaceCreation_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  OffscreenCanvasSurface_RequestSurfaceCreation_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, OffscreenCanvasSurface_RequestSurfaceCreation_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate OffscreenCanvasSurface_RequestSurfaceCreation_Params.surface_id
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, surface_id$.SurfaceId, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  OffscreenCanvasSurface_RequestSurfaceCreation_Params.encodedSize = codec.kStructHeaderSize + 8;

  OffscreenCanvasSurface_RequestSurfaceCreation_Params.decode = function(decoder) {
    var packed;
    var val = new OffscreenCanvasSurface_RequestSurfaceCreation_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.surface_id = decoder.decodeStructPointer(surface_id$.SurfaceId);
    return val;
  };

  OffscreenCanvasSurface_RequestSurfaceCreation_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(OffscreenCanvasSurface_RequestSurfaceCreation_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(surface_id$.SurfaceId, val.surface_id);
  };
  function OffscreenCanvasSurface_Require_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  OffscreenCanvasSurface_Require_Params.prototype.initDefaults_ = function() {
    this.surface_id = null;
    this.sequence = null;
  };
  OffscreenCanvasSurface_Require_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  OffscreenCanvasSurface_Require_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, OffscreenCanvasSurface_Require_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate OffscreenCanvasSurface_Require_Params.surface_id
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, surface_id$.SurfaceId, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate OffscreenCanvasSurface_Require_Params.sequence
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, surface_sequence$.SurfaceSequence, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  OffscreenCanvasSurface_Require_Params.encodedSize = codec.kStructHeaderSize + 16;

  OffscreenCanvasSurface_Require_Params.decode = function(decoder) {
    var packed;
    var val = new OffscreenCanvasSurface_Require_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.surface_id = decoder.decodeStructPointer(surface_id$.SurfaceId);
    val.sequence = decoder.decodeStructPointer(surface_sequence$.SurfaceSequence);
    return val;
  };

  OffscreenCanvasSurface_Require_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(OffscreenCanvasSurface_Require_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(surface_id$.SurfaceId, val.surface_id);
    encoder.encodeStructPointer(surface_sequence$.SurfaceSequence, val.sequence);
  };
  function OffscreenCanvasSurface_Satisfy_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  OffscreenCanvasSurface_Satisfy_Params.prototype.initDefaults_ = function() {
    this.sequence = null;
  };
  OffscreenCanvasSurface_Satisfy_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  OffscreenCanvasSurface_Satisfy_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, OffscreenCanvasSurface_Satisfy_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate OffscreenCanvasSurface_Satisfy_Params.sequence
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, surface_sequence$.SurfaceSequence, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  OffscreenCanvasSurface_Satisfy_Params.encodedSize = codec.kStructHeaderSize + 8;

  OffscreenCanvasSurface_Satisfy_Params.decode = function(decoder) {
    var packed;
    var val = new OffscreenCanvasSurface_Satisfy_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.sequence = decoder.decodeStructPointer(surface_sequence$.SurfaceSequence);
    return val;
  };

  OffscreenCanvasSurface_Satisfy_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(OffscreenCanvasSurface_Satisfy_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(surface_sequence$.SurfaceSequence, val.sequence);
  };
  var kOffscreenCanvasSurface_GetSurfaceId_Name = 0;
  var kOffscreenCanvasSurface_RequestSurfaceCreation_Name = 1;
  var kOffscreenCanvasSurface_Require_Name = 2;
  var kOffscreenCanvasSurface_Satisfy_Name = 3;

  function OffscreenCanvasSurfaceProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  OffscreenCanvasSurfaceProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  OffscreenCanvasSurfaceProxy.prototype.getSurfaceId = function() {
    var params = new OffscreenCanvasSurface_GetSurfaceId_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kOffscreenCanvasSurface_GetSurfaceId_Name,
          codec.align(OffscreenCanvasSurface_GetSurfaceId_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(OffscreenCanvasSurface_GetSurfaceId_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(OffscreenCanvasSurface_GetSurfaceId_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  OffscreenCanvasSurfaceProxy.prototype.requestSurfaceCreation = function(surface_id) {
    var params = new OffscreenCanvasSurface_RequestSurfaceCreation_Params();
    params.surface_id = surface_id;
    var builder = new codec.MessageBuilder(
        kOffscreenCanvasSurface_RequestSurfaceCreation_Name,
        codec.align(OffscreenCanvasSurface_RequestSurfaceCreation_Params.encodedSize));
    builder.encodeStruct(OffscreenCanvasSurface_RequestSurfaceCreation_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  OffscreenCanvasSurfaceProxy.prototype.require = function(surface_id, sequence) {
    var params = new OffscreenCanvasSurface_Require_Params();
    params.surface_id = surface_id;
    params.sequence = sequence;
    var builder = new codec.MessageBuilder(
        kOffscreenCanvasSurface_Require_Name,
        codec.align(OffscreenCanvasSurface_Require_Params.encodedSize));
    builder.encodeStruct(OffscreenCanvasSurface_Require_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  OffscreenCanvasSurfaceProxy.prototype.satisfy = function(sequence) {
    var params = new OffscreenCanvasSurface_Satisfy_Params();
    params.sequence = sequence;
    var builder = new codec.MessageBuilder(
        kOffscreenCanvasSurface_Satisfy_Name,
        codec.align(OffscreenCanvasSurface_Satisfy_Params.encodedSize));
    builder.encodeStruct(OffscreenCanvasSurface_Satisfy_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function OffscreenCanvasSurfaceStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  OffscreenCanvasSurfaceStub.prototype = Object.create(bindings.StubBase.prototype);
  OffscreenCanvasSurfaceStub.prototype.getSurfaceId = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.getSurfaceId && bindings.StubBindings(this).delegate.getSurfaceId();
  }
  OffscreenCanvasSurfaceStub.prototype.requestSurfaceCreation = function(surface_id) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.requestSurfaceCreation && bindings.StubBindings(this).delegate.requestSurfaceCreation(surface_id);
  }
  OffscreenCanvasSurfaceStub.prototype.require = function(surface_id, sequence) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.require && bindings.StubBindings(this).delegate.require(surface_id, sequence);
  }
  OffscreenCanvasSurfaceStub.prototype.satisfy = function(sequence) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.satisfy && bindings.StubBindings(this).delegate.satisfy(sequence);
  }

  OffscreenCanvasSurfaceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kOffscreenCanvasSurface_RequestSurfaceCreation_Name:
      var params = reader.decodeStruct(OffscreenCanvasSurface_RequestSurfaceCreation_Params);
      this.requestSurfaceCreation(params.surface_id);
      return true;
    case kOffscreenCanvasSurface_Require_Name:
      var params = reader.decodeStruct(OffscreenCanvasSurface_Require_Params);
      this.require(params.surface_id, params.sequence);
      return true;
    case kOffscreenCanvasSurface_Satisfy_Name:
      var params = reader.decodeStruct(OffscreenCanvasSurface_Satisfy_Params);
      this.satisfy(params.sequence);
      return true;
    default:
      return false;
    }
  };

  OffscreenCanvasSurfaceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kOffscreenCanvasSurface_GetSurfaceId_Name:
      var params = reader.decodeStruct(OffscreenCanvasSurface_GetSurfaceId_Params);
      return this.getSurfaceId().then(function(response) {
        var responseParams =
            new OffscreenCanvasSurface_GetSurfaceId_ResponseParams();
        responseParams.surface_id = response.surface_id;
        var builder = new codec.MessageWithRequestIDBuilder(
            kOffscreenCanvasSurface_GetSurfaceId_Name,
            codec.align(OffscreenCanvasSurface_GetSurfaceId_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(OffscreenCanvasSurface_GetSurfaceId_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateOffscreenCanvasSurfaceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kOffscreenCanvasSurface_GetSurfaceId_Name:
        if (message.expectsResponse())
          paramsClass = OffscreenCanvasSurface_GetSurfaceId_Params;
      break;
      case kOffscreenCanvasSurface_RequestSurfaceCreation_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = OffscreenCanvasSurface_RequestSurfaceCreation_Params;
      break;
      case kOffscreenCanvasSurface_Require_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = OffscreenCanvasSurface_Require_Params;
      break;
      case kOffscreenCanvasSurface_Satisfy_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = OffscreenCanvasSurface_Satisfy_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateOffscreenCanvasSurfaceResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kOffscreenCanvasSurface_GetSurfaceId_Name:
        if (message.isResponse())
          paramsClass = OffscreenCanvasSurface_GetSurfaceId_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var OffscreenCanvasSurface = {
    name: 'blink::mojom::OffscreenCanvasSurface',
    proxyClass: OffscreenCanvasSurfaceProxy,
    stubClass: OffscreenCanvasSurfaceStub,
    validateRequest: validateOffscreenCanvasSurfaceRequest,
    validateResponse: validateOffscreenCanvasSurfaceResponse,
  };
  OffscreenCanvasSurfaceStub.prototype.validator = validateOffscreenCanvasSurfaceRequest;
  OffscreenCanvasSurfaceProxy.prototype.validator = validateOffscreenCanvasSurfaceResponse;

  var exports = {};
  exports.OffscreenCanvasSurface = OffscreenCanvasSurface;

  return exports;
});
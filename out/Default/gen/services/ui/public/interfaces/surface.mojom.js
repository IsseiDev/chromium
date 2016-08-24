// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("services/ui/public/interfaces/surface.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "cc/ipc/compositor_frame.mojom",
    "cc/ipc/returned_resource.mojom",
], function(bindings, codec, connection, core, validator, compositor_frame$, returned_resource$) {

  function Surface_SubmitCompositorFrame_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Surface_SubmitCompositorFrame_Params.prototype.initDefaults_ = function() {
    this.frame = null;
  };
  Surface_SubmitCompositorFrame_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Surface_SubmitCompositorFrame_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Surface_SubmitCompositorFrame_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Surface_SubmitCompositorFrame_Params.frame
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, compositor_frame$.CompositorFrame, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Surface_SubmitCompositorFrame_Params.encodedSize = codec.kStructHeaderSize + 8;

  Surface_SubmitCompositorFrame_Params.decode = function(decoder) {
    var packed;
    var val = new Surface_SubmitCompositorFrame_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.frame = decoder.decodeStructPointer(compositor_frame$.CompositorFrame);
    return val;
  };

  Surface_SubmitCompositorFrame_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Surface_SubmitCompositorFrame_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(compositor_frame$.CompositorFrame, val.frame);
  };
  function Surface_SubmitCompositorFrame_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Surface_SubmitCompositorFrame_ResponseParams.prototype.initDefaults_ = function() {
  };
  Surface_SubmitCompositorFrame_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Surface_SubmitCompositorFrame_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Surface_SubmitCompositorFrame_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Surface_SubmitCompositorFrame_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  Surface_SubmitCompositorFrame_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Surface_SubmitCompositorFrame_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Surface_SubmitCompositorFrame_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Surface_SubmitCompositorFrame_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  function SurfaceClient_ReturnResources_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SurfaceClient_ReturnResources_Params.prototype.initDefaults_ = function() {
    this.resources = null;
  };
  SurfaceClient_ReturnResources_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  SurfaceClient_ReturnResources_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, SurfaceClient_ReturnResources_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate SurfaceClient_ReturnResources_Params.resources
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(returned_resource$.ReturnedResource), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SurfaceClient_ReturnResources_Params.encodedSize = codec.kStructHeaderSize + 8;

  SurfaceClient_ReturnResources_Params.decode = function(decoder) {
    var packed;
    var val = new SurfaceClient_ReturnResources_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.resources = decoder.decodeArrayPointer(new codec.PointerTo(returned_resource$.ReturnedResource));
    return val;
  };

  SurfaceClient_ReturnResources_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SurfaceClient_ReturnResources_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(returned_resource$.ReturnedResource), val.resources);
  };
  var kSurface_SubmitCompositorFrame_Name = 0;

  function SurfaceProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  SurfaceProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  SurfaceProxy.prototype.submitCompositorFrame = function(frame) {
    var params = new Surface_SubmitCompositorFrame_Params();
    params.frame = frame;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kSurface_SubmitCompositorFrame_Name,
          codec.align(Surface_SubmitCompositorFrame_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Surface_SubmitCompositorFrame_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Surface_SubmitCompositorFrame_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function SurfaceStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  SurfaceStub.prototype = Object.create(bindings.StubBase.prototype);
  SurfaceStub.prototype.submitCompositorFrame = function(frame) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.submitCompositorFrame && bindings.StubBindings(this).delegate.submitCompositorFrame(frame);
  }

  SurfaceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  SurfaceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kSurface_SubmitCompositorFrame_Name:
      var params = reader.decodeStruct(Surface_SubmitCompositorFrame_Params);
      return this.submitCompositorFrame(params.frame).then(function(response) {
        var responseParams =
            new Surface_SubmitCompositorFrame_ResponseParams();
        var builder = new codec.MessageWithRequestIDBuilder(
            kSurface_SubmitCompositorFrame_Name,
            codec.align(Surface_SubmitCompositorFrame_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Surface_SubmitCompositorFrame_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateSurfaceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kSurface_SubmitCompositorFrame_Name:
        if (message.expectsResponse())
          paramsClass = Surface_SubmitCompositorFrame_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateSurfaceResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kSurface_SubmitCompositorFrame_Name:
        if (message.isResponse())
          paramsClass = Surface_SubmitCompositorFrame_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var Surface = {
    name: 'ui::mojom::Surface',
    proxyClass: SurfaceProxy,
    stubClass: SurfaceStub,
    validateRequest: validateSurfaceRequest,
    validateResponse: validateSurfaceResponse,
  };
  SurfaceStub.prototype.validator = validateSurfaceRequest;
  SurfaceProxy.prototype.validator = validateSurfaceResponse;
  var kSurfaceClient_ReturnResources_Name = 0;

  function SurfaceClientProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  SurfaceClientProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  SurfaceClientProxy.prototype.returnResources = function(resources) {
    var params = new SurfaceClient_ReturnResources_Params();
    params.resources = resources;
    var builder = new codec.MessageBuilder(
        kSurfaceClient_ReturnResources_Name,
        codec.align(SurfaceClient_ReturnResources_Params.encodedSize));
    builder.encodeStruct(SurfaceClient_ReturnResources_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function SurfaceClientStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  SurfaceClientStub.prototype = Object.create(bindings.StubBase.prototype);
  SurfaceClientStub.prototype.returnResources = function(resources) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.returnResources && bindings.StubBindings(this).delegate.returnResources(resources);
  }

  SurfaceClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kSurfaceClient_ReturnResources_Name:
      var params = reader.decodeStruct(SurfaceClient_ReturnResources_Params);
      this.returnResources(params.resources);
      return true;
    default:
      return false;
    }
  };

  SurfaceClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateSurfaceClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kSurfaceClient_ReturnResources_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SurfaceClient_ReturnResources_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateSurfaceClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var SurfaceClient = {
    name: 'ui::mojom::SurfaceClient',
    proxyClass: SurfaceClientProxy,
    stubClass: SurfaceClientStub,
    validateRequest: validateSurfaceClientRequest,
    validateResponse: null,
  };
  SurfaceClientStub.prototype.validator = validateSurfaceClientRequest;
  SurfaceClientProxy.prototype.validator = null;

  var exports = {};
  exports.Surface = Surface;
  exports.SurfaceClient = SurfaceClient;

  return exports;
});
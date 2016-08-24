// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("services/ui/public/interfaces/accelerator_registrar.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "services/ui/public/interfaces/event_matcher.mojom",
    "ui/events/mojo/event.mojom",
], function(bindings, codec, connection, core, validator, event_matcher$, event$) {

  function AcceleratorHandler_OnAccelerator_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AcceleratorHandler_OnAccelerator_Params.prototype.initDefaults_ = function() {
    this.id = 0;
    this.event = null;
  };
  AcceleratorHandler_OnAccelerator_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  AcceleratorHandler_OnAccelerator_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, AcceleratorHandler_OnAccelerator_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate AcceleratorHandler_OnAccelerator_Params.event
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, event$.Event, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AcceleratorHandler_OnAccelerator_Params.encodedSize = codec.kStructHeaderSize + 16;

  AcceleratorHandler_OnAccelerator_Params.decode = function(decoder) {
    var packed;
    var val = new AcceleratorHandler_OnAccelerator_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.event = decoder.decodeStructPointer(event$.Event);
    return val;
  };

  AcceleratorHandler_OnAccelerator_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AcceleratorHandler_OnAccelerator_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.id);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(event$.Event, val.event);
  };
  function AcceleratorRegistrar_SetHandler_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AcceleratorRegistrar_SetHandler_Params.prototype.initDefaults_ = function() {
    this.handler = null;
  };
  AcceleratorRegistrar_SetHandler_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  AcceleratorRegistrar_SetHandler_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, AcceleratorRegistrar_SetHandler_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate AcceleratorRegistrar_SetHandler_Params.handler
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AcceleratorRegistrar_SetHandler_Params.encodedSize = codec.kStructHeaderSize + 8;

  AcceleratorRegistrar_SetHandler_Params.decode = function(decoder) {
    var packed;
    var val = new AcceleratorRegistrar_SetHandler_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.handler = decoder.decodeStruct(codec.Interface);
    return val;
  };

  AcceleratorRegistrar_SetHandler_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AcceleratorRegistrar_SetHandler_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Interface, val.handler);
  };
  function AcceleratorRegistrar_AddAccelerator_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AcceleratorRegistrar_AddAccelerator_Params.prototype.initDefaults_ = function() {
    this.id = 0;
    this.matcher = null;
  };
  AcceleratorRegistrar_AddAccelerator_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  AcceleratorRegistrar_AddAccelerator_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, AcceleratorRegistrar_AddAccelerator_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate AcceleratorRegistrar_AddAccelerator_Params.matcher
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, event_matcher$.EventMatcher, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AcceleratorRegistrar_AddAccelerator_Params.encodedSize = codec.kStructHeaderSize + 16;

  AcceleratorRegistrar_AddAccelerator_Params.decode = function(decoder) {
    var packed;
    var val = new AcceleratorRegistrar_AddAccelerator_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.matcher = decoder.decodeStructPointer(event_matcher$.EventMatcher);
    return val;
  };

  AcceleratorRegistrar_AddAccelerator_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AcceleratorRegistrar_AddAccelerator_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.id);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(event_matcher$.EventMatcher, val.matcher);
  };
  function AcceleratorRegistrar_AddAccelerator_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AcceleratorRegistrar_AddAccelerator_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  AcceleratorRegistrar_AddAccelerator_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  AcceleratorRegistrar_AddAccelerator_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, AcceleratorRegistrar_AddAccelerator_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  AcceleratorRegistrar_AddAccelerator_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  AcceleratorRegistrar_AddAccelerator_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new AcceleratorRegistrar_AddAccelerator_ResponseParams();
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

  AcceleratorRegistrar_AddAccelerator_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AcceleratorRegistrar_AddAccelerator_ResponseParams.encodedSize);
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
  function AcceleratorRegistrar_RemoveAccelerator_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AcceleratorRegistrar_RemoveAccelerator_Params.prototype.initDefaults_ = function() {
    this.id = 0;
  };
  AcceleratorRegistrar_RemoveAccelerator_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  AcceleratorRegistrar_RemoveAccelerator_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, AcceleratorRegistrar_RemoveAccelerator_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  AcceleratorRegistrar_RemoveAccelerator_Params.encodedSize = codec.kStructHeaderSize + 8;

  AcceleratorRegistrar_RemoveAccelerator_Params.decode = function(decoder) {
    var packed;
    var val = new AcceleratorRegistrar_RemoveAccelerator_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  AcceleratorRegistrar_RemoveAccelerator_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AcceleratorRegistrar_RemoveAccelerator_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.id);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kAcceleratorHandler_OnAccelerator_Name = 0;

  function AcceleratorHandlerProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  AcceleratorHandlerProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  AcceleratorHandlerProxy.prototype.onAccelerator = function(id, event) {
    var params = new AcceleratorHandler_OnAccelerator_Params();
    params.id = id;
    params.event = event;
    var builder = new codec.MessageBuilder(
        kAcceleratorHandler_OnAccelerator_Name,
        codec.align(AcceleratorHandler_OnAccelerator_Params.encodedSize));
    builder.encodeStruct(AcceleratorHandler_OnAccelerator_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function AcceleratorHandlerStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  AcceleratorHandlerStub.prototype = Object.create(bindings.StubBase.prototype);
  AcceleratorHandlerStub.prototype.onAccelerator = function(id, event) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onAccelerator && bindings.StubBindings(this).delegate.onAccelerator(id, event);
  }

  AcceleratorHandlerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kAcceleratorHandler_OnAccelerator_Name:
      var params = reader.decodeStruct(AcceleratorHandler_OnAccelerator_Params);
      this.onAccelerator(params.id, params.event);
      return true;
    default:
      return false;
    }
  };

  AcceleratorHandlerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateAcceleratorHandlerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kAcceleratorHandler_OnAccelerator_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AcceleratorHandler_OnAccelerator_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateAcceleratorHandlerResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var AcceleratorHandler = {
    name: 'ui::mojom::AcceleratorHandler',
    proxyClass: AcceleratorHandlerProxy,
    stubClass: AcceleratorHandlerStub,
    validateRequest: validateAcceleratorHandlerRequest,
    validateResponse: null,
  };
  AcceleratorHandlerStub.prototype.validator = validateAcceleratorHandlerRequest;
  AcceleratorHandlerProxy.prototype.validator = null;
  var kAcceleratorRegistrar_SetHandler_Name = 0;
  var kAcceleratorRegistrar_AddAccelerator_Name = 1;
  var kAcceleratorRegistrar_RemoveAccelerator_Name = 2;

  function AcceleratorRegistrarProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  AcceleratorRegistrarProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  AcceleratorRegistrarProxy.prototype.setHandler = function(handler) {
    var params = new AcceleratorRegistrar_SetHandler_Params();
    params.handler = core.isHandle(handler) ? handler : connection.bindImpl(handler, AcceleratorHandler);
    var builder = new codec.MessageBuilder(
        kAcceleratorRegistrar_SetHandler_Name,
        codec.align(AcceleratorRegistrar_SetHandler_Params.encodedSize));
    builder.encodeStruct(AcceleratorRegistrar_SetHandler_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AcceleratorRegistrarProxy.prototype.addAccelerator = function(id, matcher) {
    var params = new AcceleratorRegistrar_AddAccelerator_Params();
    params.id = id;
    params.matcher = matcher;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kAcceleratorRegistrar_AddAccelerator_Name,
          codec.align(AcceleratorRegistrar_AddAccelerator_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(AcceleratorRegistrar_AddAccelerator_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(AcceleratorRegistrar_AddAccelerator_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  AcceleratorRegistrarProxy.prototype.removeAccelerator = function(id) {
    var params = new AcceleratorRegistrar_RemoveAccelerator_Params();
    params.id = id;
    var builder = new codec.MessageBuilder(
        kAcceleratorRegistrar_RemoveAccelerator_Name,
        codec.align(AcceleratorRegistrar_RemoveAccelerator_Params.encodedSize));
    builder.encodeStruct(AcceleratorRegistrar_RemoveAccelerator_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function AcceleratorRegistrarStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  AcceleratorRegistrarStub.prototype = Object.create(bindings.StubBase.prototype);
  AcceleratorRegistrarStub.prototype.setHandler = function(handler) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.setHandler && bindings.StubBindings(this).delegate.setHandler(connection.bindHandleToProxy(handler, AcceleratorHandler));
  }
  AcceleratorRegistrarStub.prototype.addAccelerator = function(id, matcher) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.addAccelerator && bindings.StubBindings(this).delegate.addAccelerator(id, matcher);
  }
  AcceleratorRegistrarStub.prototype.removeAccelerator = function(id) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.removeAccelerator && bindings.StubBindings(this).delegate.removeAccelerator(id);
  }

  AcceleratorRegistrarStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kAcceleratorRegistrar_SetHandler_Name:
      var params = reader.decodeStruct(AcceleratorRegistrar_SetHandler_Params);
      this.setHandler(params.handler);
      return true;
    case kAcceleratorRegistrar_RemoveAccelerator_Name:
      var params = reader.decodeStruct(AcceleratorRegistrar_RemoveAccelerator_Params);
      this.removeAccelerator(params.id);
      return true;
    default:
      return false;
    }
  };

  AcceleratorRegistrarStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kAcceleratorRegistrar_AddAccelerator_Name:
      var params = reader.decodeStruct(AcceleratorRegistrar_AddAccelerator_Params);
      return this.addAccelerator(params.id, params.matcher).then(function(response) {
        var responseParams =
            new AcceleratorRegistrar_AddAccelerator_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageWithRequestIDBuilder(
            kAcceleratorRegistrar_AddAccelerator_Name,
            codec.align(AcceleratorRegistrar_AddAccelerator_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(AcceleratorRegistrar_AddAccelerator_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateAcceleratorRegistrarRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kAcceleratorRegistrar_SetHandler_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AcceleratorRegistrar_SetHandler_Params;
      break;
      case kAcceleratorRegistrar_AddAccelerator_Name:
        if (message.expectsResponse())
          paramsClass = AcceleratorRegistrar_AddAccelerator_Params;
      break;
      case kAcceleratorRegistrar_RemoveAccelerator_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AcceleratorRegistrar_RemoveAccelerator_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateAcceleratorRegistrarResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kAcceleratorRegistrar_AddAccelerator_Name:
        if (message.isResponse())
          paramsClass = AcceleratorRegistrar_AddAccelerator_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var AcceleratorRegistrar = {
    name: 'ui::mojom::AcceleratorRegistrar',
    proxyClass: AcceleratorRegistrarProxy,
    stubClass: AcceleratorRegistrarStub,
    validateRequest: validateAcceleratorRegistrarRequest,
    validateResponse: validateAcceleratorRegistrarResponse,
  };
  AcceleratorRegistrarStub.prototype.validator = validateAcceleratorRegistrarRequest;
  AcceleratorRegistrarProxy.prototype.validator = validateAcceleratorRegistrarResponse;

  var exports = {};
  exports.AcceleratorHandler = AcceleratorHandler;
  exports.AcceleratorRegistrar = AcceleratorRegistrar;

  return exports;
});
// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("services/ui/public/interfaces/display.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "services/ui/public/interfaces/window_manager_constants.mojom",
], function(bindings, codec, connection, core, validator, window_manager_constants$) {

  function DisplayManagerObserver_OnDisplays_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DisplayManagerObserver_OnDisplays_Params.prototype.initDefaults_ = function() {
    this.displays = null;
  };
  DisplayManagerObserver_OnDisplays_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  DisplayManagerObserver_OnDisplays_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, DisplayManagerObserver_OnDisplays_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate DisplayManagerObserver_OnDisplays_Params.displays
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(window_manager_constants$.WsDisplay), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DisplayManagerObserver_OnDisplays_Params.encodedSize = codec.kStructHeaderSize + 8;

  DisplayManagerObserver_OnDisplays_Params.decode = function(decoder) {
    var packed;
    var val = new DisplayManagerObserver_OnDisplays_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.displays = decoder.decodeArrayPointer(new codec.PointerTo(window_manager_constants$.WsDisplay));
    return val;
  };

  DisplayManagerObserver_OnDisplays_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DisplayManagerObserver_OnDisplays_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(window_manager_constants$.WsDisplay), val.displays);
  };
  function DisplayManagerObserver_OnDisplaysChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DisplayManagerObserver_OnDisplaysChanged_Params.prototype.initDefaults_ = function() {
    this.displays = null;
  };
  DisplayManagerObserver_OnDisplaysChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  DisplayManagerObserver_OnDisplaysChanged_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, DisplayManagerObserver_OnDisplaysChanged_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate DisplayManagerObserver_OnDisplaysChanged_Params.displays
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(window_manager_constants$.WsDisplay), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DisplayManagerObserver_OnDisplaysChanged_Params.encodedSize = codec.kStructHeaderSize + 8;

  DisplayManagerObserver_OnDisplaysChanged_Params.decode = function(decoder) {
    var packed;
    var val = new DisplayManagerObserver_OnDisplaysChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.displays = decoder.decodeArrayPointer(new codec.PointerTo(window_manager_constants$.WsDisplay));
    return val;
  };

  DisplayManagerObserver_OnDisplaysChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DisplayManagerObserver_OnDisplaysChanged_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(window_manager_constants$.WsDisplay), val.displays);
  };
  function DisplayManagerObserver_OnDisplayRemoved_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DisplayManagerObserver_OnDisplayRemoved_Params.prototype.initDefaults_ = function() {
    this.id = 0;
  };
  DisplayManagerObserver_OnDisplayRemoved_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  DisplayManagerObserver_OnDisplayRemoved_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, DisplayManagerObserver_OnDisplayRemoved_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  DisplayManagerObserver_OnDisplayRemoved_Params.encodedSize = codec.kStructHeaderSize + 8;

  DisplayManagerObserver_OnDisplayRemoved_Params.decode = function(decoder) {
    var packed;
    var val = new DisplayManagerObserver_OnDisplayRemoved_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.Int64);
    return val;
  };

  DisplayManagerObserver_OnDisplayRemoved_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DisplayManagerObserver_OnDisplayRemoved_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.id);
  };
  function DisplayManager_AddObserver_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DisplayManager_AddObserver_Params.prototype.initDefaults_ = function() {
    this.observer = null;
  };
  DisplayManager_AddObserver_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  DisplayManager_AddObserver_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, DisplayManager_AddObserver_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate DisplayManager_AddObserver_Params.observer
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DisplayManager_AddObserver_Params.encodedSize = codec.kStructHeaderSize + 8;

  DisplayManager_AddObserver_Params.decode = function(decoder) {
    var packed;
    var val = new DisplayManager_AddObserver_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.observer = decoder.decodeStruct(codec.Interface);
    return val;
  };

  DisplayManager_AddObserver_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DisplayManager_AddObserver_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Interface, val.observer);
  };
  var kDisplayManagerObserver_OnDisplays_Name = 0;
  var kDisplayManagerObserver_OnDisplaysChanged_Name = 1;
  var kDisplayManagerObserver_OnDisplayRemoved_Name = 2;

  function DisplayManagerObserverProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  DisplayManagerObserverProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  DisplayManagerObserverProxy.prototype.onDisplays = function(displays) {
    var params = new DisplayManagerObserver_OnDisplays_Params();
    params.displays = displays;
    var builder = new codec.MessageBuilder(
        kDisplayManagerObserver_OnDisplays_Name,
        codec.align(DisplayManagerObserver_OnDisplays_Params.encodedSize));
    builder.encodeStruct(DisplayManagerObserver_OnDisplays_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DisplayManagerObserverProxy.prototype.onDisplaysChanged = function(displays) {
    var params = new DisplayManagerObserver_OnDisplaysChanged_Params();
    params.displays = displays;
    var builder = new codec.MessageBuilder(
        kDisplayManagerObserver_OnDisplaysChanged_Name,
        codec.align(DisplayManagerObserver_OnDisplaysChanged_Params.encodedSize));
    builder.encodeStruct(DisplayManagerObserver_OnDisplaysChanged_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DisplayManagerObserverProxy.prototype.onDisplayRemoved = function(id) {
    var params = new DisplayManagerObserver_OnDisplayRemoved_Params();
    params.id = id;
    var builder = new codec.MessageBuilder(
        kDisplayManagerObserver_OnDisplayRemoved_Name,
        codec.align(DisplayManagerObserver_OnDisplayRemoved_Params.encodedSize));
    builder.encodeStruct(DisplayManagerObserver_OnDisplayRemoved_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function DisplayManagerObserverStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  DisplayManagerObserverStub.prototype = Object.create(bindings.StubBase.prototype);
  DisplayManagerObserverStub.prototype.onDisplays = function(displays) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onDisplays && bindings.StubBindings(this).delegate.onDisplays(displays);
  }
  DisplayManagerObserverStub.prototype.onDisplaysChanged = function(displays) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onDisplaysChanged && bindings.StubBindings(this).delegate.onDisplaysChanged(displays);
  }
  DisplayManagerObserverStub.prototype.onDisplayRemoved = function(id) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onDisplayRemoved && bindings.StubBindings(this).delegate.onDisplayRemoved(id);
  }

  DisplayManagerObserverStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kDisplayManagerObserver_OnDisplays_Name:
      var params = reader.decodeStruct(DisplayManagerObserver_OnDisplays_Params);
      this.onDisplays(params.displays);
      return true;
    case kDisplayManagerObserver_OnDisplaysChanged_Name:
      var params = reader.decodeStruct(DisplayManagerObserver_OnDisplaysChanged_Params);
      this.onDisplaysChanged(params.displays);
      return true;
    case kDisplayManagerObserver_OnDisplayRemoved_Name:
      var params = reader.decodeStruct(DisplayManagerObserver_OnDisplayRemoved_Params);
      this.onDisplayRemoved(params.id);
      return true;
    default:
      return false;
    }
  };

  DisplayManagerObserverStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateDisplayManagerObserverRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kDisplayManagerObserver_OnDisplays_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DisplayManagerObserver_OnDisplays_Params;
      break;
      case kDisplayManagerObserver_OnDisplaysChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DisplayManagerObserver_OnDisplaysChanged_Params;
      break;
      case kDisplayManagerObserver_OnDisplayRemoved_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DisplayManagerObserver_OnDisplayRemoved_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateDisplayManagerObserverResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var DisplayManagerObserver = {
    name: 'ui::mojom::DisplayManagerObserver',
    proxyClass: DisplayManagerObserverProxy,
    stubClass: DisplayManagerObserverStub,
    validateRequest: validateDisplayManagerObserverRequest,
    validateResponse: null,
  };
  DisplayManagerObserverStub.prototype.validator = validateDisplayManagerObserverRequest;
  DisplayManagerObserverProxy.prototype.validator = null;
  var kDisplayManager_AddObserver_Name = 0;

  function DisplayManagerProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  DisplayManagerProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  DisplayManagerProxy.prototype.addObserver = function(observer) {
    var params = new DisplayManager_AddObserver_Params();
    params.observer = core.isHandle(observer) ? observer : connection.bindImpl(observer, DisplayManagerObserver);
    var builder = new codec.MessageBuilder(
        kDisplayManager_AddObserver_Name,
        codec.align(DisplayManager_AddObserver_Params.encodedSize));
    builder.encodeStruct(DisplayManager_AddObserver_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function DisplayManagerStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  DisplayManagerStub.prototype = Object.create(bindings.StubBase.prototype);
  DisplayManagerStub.prototype.addObserver = function(observer) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.addObserver && bindings.StubBindings(this).delegate.addObserver(connection.bindHandleToProxy(observer, DisplayManagerObserver));
  }

  DisplayManagerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kDisplayManager_AddObserver_Name:
      var params = reader.decodeStruct(DisplayManager_AddObserver_Params);
      this.addObserver(params.observer);
      return true;
    default:
      return false;
    }
  };

  DisplayManagerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateDisplayManagerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kDisplayManager_AddObserver_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DisplayManager_AddObserver_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateDisplayManagerResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var DisplayManager = {
    name: 'ui::mojom::DisplayManager',
    proxyClass: DisplayManagerProxy,
    stubClass: DisplayManagerStub,
    validateRequest: validateDisplayManagerRequest,
    validateResponse: null,
  };
  DisplayManagerStub.prototype.validator = validateDisplayManagerRequest;
  DisplayManagerProxy.prototype.validator = null;

  var exports = {};
  exports.DisplayManagerObserver = DisplayManagerObserver;
  exports.DisplayManager = DisplayManager;

  return exports;
});
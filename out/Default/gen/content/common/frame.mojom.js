// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("content/common/frame.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "services/shell/public/interfaces/interface_provider.mojom",
], function(bindings, codec, connection, core, validator, interface_provider$) {

  function Frame_GetInterfaceProvider_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Frame_GetInterfaceProvider_Params.prototype.initDefaults_ = function() {
    this.interfaces = null;
  };
  Frame_GetInterfaceProvider_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Frame_GetInterfaceProvider_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Frame_GetInterfaceProvider_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Frame_GetInterfaceProvider_Params.interfaces
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Frame_GetInterfaceProvider_Params.encodedSize = codec.kStructHeaderSize + 8;

  Frame_GetInterfaceProvider_Params.decode = function(decoder) {
    var packed;
    var val = new Frame_GetInterfaceProvider_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.interfaces = decoder.decodeStruct(codec.Handle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Frame_GetInterfaceProvider_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Frame_GetInterfaceProvider_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.interfaces);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function FrameHost_GetInterfaceProvider_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameHost_GetInterfaceProvider_Params.prototype.initDefaults_ = function() {
    this.interfaces = null;
  };
  FrameHost_GetInterfaceProvider_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  FrameHost_GetInterfaceProvider_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, FrameHost_GetInterfaceProvider_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate FrameHost_GetInterfaceProvider_Params.interfaces
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameHost_GetInterfaceProvider_Params.encodedSize = codec.kStructHeaderSize + 8;

  FrameHost_GetInterfaceProvider_Params.decode = function(decoder) {
    var packed;
    var val = new FrameHost_GetInterfaceProvider_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.interfaces = decoder.decodeStruct(codec.Handle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  FrameHost_GetInterfaceProvider_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameHost_GetInterfaceProvider_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.interfaces);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function FrameFactory_CreateFrame_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameFactory_CreateFrame_Params.prototype.initDefaults_ = function() {
    this.frame_routing_id = 0;
    this.frame = null;
    this.host = null;
  };
  FrameFactory_CreateFrame_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  FrameFactory_CreateFrame_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, FrameFactory_CreateFrame_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate FrameFactory_CreateFrame_Params.frame
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 4, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate FrameFactory_CreateFrame_Params.host
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 8, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameFactory_CreateFrame_Params.encodedSize = codec.kStructHeaderSize + 16;

  FrameFactory_CreateFrame_Params.decode = function(decoder) {
    var packed;
    var val = new FrameFactory_CreateFrame_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.frame_routing_id = decoder.decodeStruct(codec.Int32);
    val.frame = decoder.decodeStruct(codec.Handle);
    val.host = decoder.decodeStruct(codec.Interface);
    return val;
  };

  FrameFactory_CreateFrame_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameFactory_CreateFrame_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.frame_routing_id);
    encoder.encodeStruct(codec.Handle, val.frame);
    encoder.encodeStruct(codec.Interface, val.host);
  };
  var kFrame_GetInterfaceProvider_Name = 0;

  function FrameProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  FrameProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  FrameProxy.prototype.getInterfaceProvider = function(interfaces) {
    var params = new Frame_GetInterfaceProvider_Params();
    params.interfaces = core.isHandle(interfaces) ? interfaces : connection.bindProxy(interfaces, interface_provider$.InterfaceProvider);
    var builder = new codec.MessageBuilder(
        kFrame_GetInterfaceProvider_Name,
        codec.align(Frame_GetInterfaceProvider_Params.encodedSize));
    builder.encodeStruct(Frame_GetInterfaceProvider_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function FrameStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  FrameStub.prototype = Object.create(bindings.StubBase.prototype);
  FrameStub.prototype.getInterfaceProvider = function(interfaces) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.getInterfaceProvider && bindings.StubBindings(this).delegate.getInterfaceProvider(connection.bindHandleToStub(interfaces, interface_provider$.InterfaceProvider));
  }

  FrameStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kFrame_GetInterfaceProvider_Name:
      var params = reader.decodeStruct(Frame_GetInterfaceProvider_Params);
      this.getInterfaceProvider(params.interfaces);
      return true;
    default:
      return false;
    }
  };

  FrameStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateFrameRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kFrame_GetInterfaceProvider_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Frame_GetInterfaceProvider_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateFrameResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var Frame = {
    name: 'content::mojom::Frame',
    proxyClass: FrameProxy,
    stubClass: FrameStub,
    validateRequest: validateFrameRequest,
    validateResponse: null,
  };
  FrameStub.prototype.validator = validateFrameRequest;
  FrameProxy.prototype.validator = null;
  var kFrameHost_GetInterfaceProvider_Name = 0;

  function FrameHostProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  FrameHostProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  FrameHostProxy.prototype.getInterfaceProvider = function(interfaces) {
    var params = new FrameHost_GetInterfaceProvider_Params();
    params.interfaces = core.isHandle(interfaces) ? interfaces : connection.bindProxy(interfaces, interface_provider$.InterfaceProvider);
    var builder = new codec.MessageBuilder(
        kFrameHost_GetInterfaceProvider_Name,
        codec.align(FrameHost_GetInterfaceProvider_Params.encodedSize));
    builder.encodeStruct(FrameHost_GetInterfaceProvider_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function FrameHostStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  FrameHostStub.prototype = Object.create(bindings.StubBase.prototype);
  FrameHostStub.prototype.getInterfaceProvider = function(interfaces) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.getInterfaceProvider && bindings.StubBindings(this).delegate.getInterfaceProvider(connection.bindHandleToStub(interfaces, interface_provider$.InterfaceProvider));
  }

  FrameHostStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kFrameHost_GetInterfaceProvider_Name:
      var params = reader.decodeStruct(FrameHost_GetInterfaceProvider_Params);
      this.getInterfaceProvider(params.interfaces);
      return true;
    default:
      return false;
    }
  };

  FrameHostStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateFrameHostRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kFrameHost_GetInterfaceProvider_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameHost_GetInterfaceProvider_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateFrameHostResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var FrameHost = {
    name: 'content::mojom::FrameHost',
    proxyClass: FrameHostProxy,
    stubClass: FrameHostStub,
    validateRequest: validateFrameHostRequest,
    validateResponse: null,
  };
  FrameHostStub.prototype.validator = validateFrameHostRequest;
  FrameHostProxy.prototype.validator = null;
  var kFrameFactory_CreateFrame_Name = 0;

  function FrameFactoryProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  FrameFactoryProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  FrameFactoryProxy.prototype.createFrame = function(frame_routing_id, frame, host) {
    var params = new FrameFactory_CreateFrame_Params();
    params.frame_routing_id = frame_routing_id;
    params.frame = core.isHandle(frame) ? frame : connection.bindProxy(frame, Frame);
    params.host = core.isHandle(host) ? host : connection.bindImpl(host, FrameHost);
    var builder = new codec.MessageBuilder(
        kFrameFactory_CreateFrame_Name,
        codec.align(FrameFactory_CreateFrame_Params.encodedSize));
    builder.encodeStruct(FrameFactory_CreateFrame_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function FrameFactoryStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  FrameFactoryStub.prototype = Object.create(bindings.StubBase.prototype);
  FrameFactoryStub.prototype.createFrame = function(frame_routing_id, frame, host) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.createFrame && bindings.StubBindings(this).delegate.createFrame(frame_routing_id, connection.bindHandleToStub(frame, Frame), connection.bindHandleToProxy(host, FrameHost));
  }

  FrameFactoryStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kFrameFactory_CreateFrame_Name:
      var params = reader.decodeStruct(FrameFactory_CreateFrame_Params);
      this.createFrame(params.frame_routing_id, params.frame, params.host);
      return true;
    default:
      return false;
    }
  };

  FrameFactoryStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateFrameFactoryRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kFrameFactory_CreateFrame_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameFactory_CreateFrame_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateFrameFactoryResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var FrameFactory = {
    name: 'content::mojom::FrameFactory',
    proxyClass: FrameFactoryProxy,
    stubClass: FrameFactoryStub,
    validateRequest: validateFrameFactoryRequest,
    validateResponse: null,
  };
  FrameFactoryStub.prototype.validator = validateFrameFactoryRequest;
  FrameFactoryProxy.prototype.validator = null;

  var exports = {};
  exports.Frame = Frame;
  exports.FrameHost = FrameHost;
  exports.FrameFactory = FrameFactory;

  return exports;
});
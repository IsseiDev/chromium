// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("services/ui/public/interfaces/window_tree_host.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "services/ui/public/interfaces/window_tree.mojom",
    "ui/gfx/geometry/mojo/geometry.mojom",
], function(bindings, codec, connection, core, validator, window_tree$, geometry$) {

  function WindowTreeHost_SetSize_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTreeHost_SetSize_Params.prototype.initDefaults_ = function() {
    this.size = null;
  };
  WindowTreeHost_SetSize_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WindowTreeHost_SetSize_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WindowTreeHost_SetSize_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WindowTreeHost_SetSize_Params.size
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, geometry$.Size, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowTreeHost_SetSize_Params.encodedSize = codec.kStructHeaderSize + 8;

  WindowTreeHost_SetSize_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTreeHost_SetSize_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.size = decoder.decodeStructPointer(geometry$.Size);
    return val;
  };

  WindowTreeHost_SetSize_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTreeHost_SetSize_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(geometry$.Size, val.size);
  };
  function WindowTreeHost_SetTitle_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTreeHost_SetTitle_Params.prototype.initDefaults_ = function() {
    this.title = null;
  };
  WindowTreeHost_SetTitle_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WindowTreeHost_SetTitle_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WindowTreeHost_SetTitle_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WindowTreeHost_SetTitle_Params.title
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowTreeHost_SetTitle_Params.encodedSize = codec.kStructHeaderSize + 8;

  WindowTreeHost_SetTitle_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTreeHost_SetTitle_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.title = decoder.decodeStruct(codec.String);
    return val;
  };

  WindowTreeHost_SetTitle_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTreeHost_SetTitle_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.title);
  };
  function WindowTreeHostFactory_CreateWindowTreeHost_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTreeHostFactory_CreateWindowTreeHost_Params.prototype.initDefaults_ = function() {
    this.window_tree_host = null;
    this.tree_client = null;
  };
  WindowTreeHostFactory_CreateWindowTreeHost_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WindowTreeHostFactory_CreateWindowTreeHost_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WindowTreeHostFactory_CreateWindowTreeHost_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WindowTreeHostFactory_CreateWindowTreeHost_Params.window_tree_host
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WindowTreeHostFactory_CreateWindowTreeHost_Params.tree_client
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 4, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowTreeHostFactory_CreateWindowTreeHost_Params.encodedSize = codec.kStructHeaderSize + 16;

  WindowTreeHostFactory_CreateWindowTreeHost_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTreeHostFactory_CreateWindowTreeHost_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.window_tree_host = decoder.decodeStruct(codec.Handle);
    val.tree_client = decoder.decodeStruct(codec.Interface);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WindowTreeHostFactory_CreateWindowTreeHost_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTreeHostFactory_CreateWindowTreeHost_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.window_tree_host);
    encoder.encodeStruct(codec.Interface, val.tree_client);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kWindowTreeHost_SetSize_Name = 0;
  var kWindowTreeHost_SetTitle_Name = 1;

  function WindowTreeHostProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  WindowTreeHostProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  WindowTreeHostProxy.prototype.setSize = function(size) {
    var params = new WindowTreeHost_SetSize_Params();
    params.size = size;
    var builder = new codec.MessageBuilder(
        kWindowTreeHost_SetSize_Name,
        codec.align(WindowTreeHost_SetSize_Params.encodedSize));
    builder.encodeStruct(WindowTreeHost_SetSize_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreeHostProxy.prototype.setTitle = function(title) {
    var params = new WindowTreeHost_SetTitle_Params();
    params.title = title;
    var builder = new codec.MessageBuilder(
        kWindowTreeHost_SetTitle_Name,
        codec.align(WindowTreeHost_SetTitle_Params.encodedSize));
    builder.encodeStruct(WindowTreeHost_SetTitle_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function WindowTreeHostStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  WindowTreeHostStub.prototype = Object.create(bindings.StubBase.prototype);
  WindowTreeHostStub.prototype.setSize = function(size) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.setSize && bindings.StubBindings(this).delegate.setSize(size);
  }
  WindowTreeHostStub.prototype.setTitle = function(title) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.setTitle && bindings.StubBindings(this).delegate.setTitle(title);
  }

  WindowTreeHostStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kWindowTreeHost_SetSize_Name:
      var params = reader.decodeStruct(WindowTreeHost_SetSize_Params);
      this.setSize(params.size);
      return true;
    case kWindowTreeHost_SetTitle_Name:
      var params = reader.decodeStruct(WindowTreeHost_SetTitle_Params);
      this.setTitle(params.title);
      return true;
    default:
      return false;
    }
  };

  WindowTreeHostStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateWindowTreeHostRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kWindowTreeHost_SetSize_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTreeHost_SetSize_Params;
      break;
      case kWindowTreeHost_SetTitle_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTreeHost_SetTitle_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateWindowTreeHostResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var WindowTreeHost = {
    name: 'ui::mojom::WindowTreeHost',
    proxyClass: WindowTreeHostProxy,
    stubClass: WindowTreeHostStub,
    validateRequest: validateWindowTreeHostRequest,
    validateResponse: null,
  };
  WindowTreeHostStub.prototype.validator = validateWindowTreeHostRequest;
  WindowTreeHostProxy.prototype.validator = null;
  var kWindowTreeHostFactory_CreateWindowTreeHost_Name = 0;

  function WindowTreeHostFactoryProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  WindowTreeHostFactoryProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  WindowTreeHostFactoryProxy.prototype.createWindowTreeHost = function(window_tree_host, tree_client) {
    var params = new WindowTreeHostFactory_CreateWindowTreeHost_Params();
    params.window_tree_host = core.isHandle(window_tree_host) ? window_tree_host : connection.bindProxy(window_tree_host, WindowTreeHost);
    params.tree_client = core.isHandle(tree_client) ? tree_client : connection.bindImpl(tree_client, window_tree$.WindowTreeClient);
    var builder = new codec.MessageBuilder(
        kWindowTreeHostFactory_CreateWindowTreeHost_Name,
        codec.align(WindowTreeHostFactory_CreateWindowTreeHost_Params.encodedSize));
    builder.encodeStruct(WindowTreeHostFactory_CreateWindowTreeHost_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function WindowTreeHostFactoryStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  WindowTreeHostFactoryStub.prototype = Object.create(bindings.StubBase.prototype);
  WindowTreeHostFactoryStub.prototype.createWindowTreeHost = function(window_tree_host, tree_client) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.createWindowTreeHost && bindings.StubBindings(this).delegate.createWindowTreeHost(connection.bindHandleToStub(window_tree_host, WindowTreeHost), connection.bindHandleToProxy(tree_client, window_tree$.WindowTreeClient));
  }

  WindowTreeHostFactoryStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kWindowTreeHostFactory_CreateWindowTreeHost_Name:
      var params = reader.decodeStruct(WindowTreeHostFactory_CreateWindowTreeHost_Params);
      this.createWindowTreeHost(params.window_tree_host, params.tree_client);
      return true;
    default:
      return false;
    }
  };

  WindowTreeHostFactoryStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateWindowTreeHostFactoryRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kWindowTreeHostFactory_CreateWindowTreeHost_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTreeHostFactory_CreateWindowTreeHost_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateWindowTreeHostFactoryResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var WindowTreeHostFactory = {
    name: 'ui::mojom::WindowTreeHostFactory',
    proxyClass: WindowTreeHostFactoryProxy,
    stubClass: WindowTreeHostFactoryStub,
    validateRequest: validateWindowTreeHostFactoryRequest,
    validateResponse: null,
  };
  WindowTreeHostFactoryStub.prototype.validator = validateWindowTreeHostFactoryRequest;
  WindowTreeHostFactoryProxy.prototype.validator = null;

  var exports = {};
  exports.WindowTreeHost = WindowTreeHost;
  exports.WindowTreeHostFactory = WindowTreeHostFactory;

  return exports;
});
// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("ipc/ipc.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {

  function SerializedHandle(values) {
    this.initDefaults_();
    this.initFields_(values);
  }

  SerializedHandle.Type = {};
  SerializedHandle.Type.MOJO_HANDLE = 0;
  SerializedHandle.Type.PLATFORM_FILE = SerializedHandle.Type.MOJO_HANDLE + 1;
  SerializedHandle.Type.WIN_HANDLE = SerializedHandle.Type.PLATFORM_FILE + 1;
  SerializedHandle.Type.MACH_PORT = SerializedHandle.Type.WIN_HANDLE + 1;

  SerializedHandle.prototype.initDefaults_ = function() {
    this.the_handle = null;
    this.type = 0;
  };
  SerializedHandle.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  SerializedHandle.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, SerializedHandle.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate SerializedHandle.the_handle
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  SerializedHandle.encodedSize = codec.kStructHeaderSize + 8;

  SerializedHandle.decode = function(decoder) {
    var packed;
    var val = new SerializedHandle();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.the_handle = decoder.decodeStruct(codec.Handle);
    val.type = decoder.decodeStruct(codec.Int32);
    return val;
  };

  SerializedHandle.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SerializedHandle.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.the_handle);
    encoder.encodeStruct(codec.Int32, val.type);
  };
  function Channel_SetPeerPid_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Channel_SetPeerPid_Params.prototype.initDefaults_ = function() {
    this.pid = 0;
  };
  Channel_SetPeerPid_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Channel_SetPeerPid_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Channel_SetPeerPid_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  Channel_SetPeerPid_Params.encodedSize = codec.kStructHeaderSize + 8;

  Channel_SetPeerPid_Params.decode = function(decoder) {
    var packed;
    var val = new Channel_SetPeerPid_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.pid = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Channel_SetPeerPid_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Channel_SetPeerPid_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.pid);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Channel_Receive_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Channel_Receive_Params.prototype.initDefaults_ = function() {
    this.data = null;
    this.handles = null;
  };
  Channel_Receive_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Channel_Receive_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Channel_Receive_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Channel_Receive_Params.data
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Channel_Receive_Params.handles
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(SerializedHandle), true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Channel_Receive_Params.encodedSize = codec.kStructHeaderSize + 16;

  Channel_Receive_Params.decode = function(decoder) {
    var packed;
    var val = new Channel_Receive_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.data = decoder.decodeArrayPointer(codec.Uint8);
    val.handles = decoder.decodeArrayPointer(new codec.PointerTo(SerializedHandle));
    return val;
  };

  Channel_Receive_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Channel_Receive_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Uint8, val.data);
    encoder.encodeArrayPointer(new codec.PointerTo(SerializedHandle), val.handles);
  };
  function Channel_GetAssociatedInterface_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Channel_GetAssociatedInterface_Params.prototype.initDefaults_ = function() {
    this.name = null;
    this.request = null;
  };
  Channel_GetAssociatedInterface_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Channel_GetAssociatedInterface_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Channel_GetAssociatedInterface_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Channel_GetAssociatedInterface_Params.name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  Channel_GetAssociatedInterface_Params.encodedSize = codec.kStructHeaderSize + 16;

  Channel_GetAssociatedInterface_Params.decode = function(decoder) {
    var packed;
    var val = new Channel_GetAssociatedInterface_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.name = decoder.decodeStruct(codec.String);
    val.request = decoder.decodeStruct(codec.AssociatedInterfaceRequestNotSupported);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Channel_GetAssociatedInterface_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Channel_GetAssociatedInterface_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.name);
    encoder.encodeStruct(codec.AssociatedInterfaceRequestNotSupported, val.request);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function GenericInterfaceProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  GenericInterfaceProxy.prototype = Object.create(bindings.ProxyBase.prototype);

  function GenericInterfaceStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  GenericInterfaceStub.prototype = Object.create(bindings.StubBase.prototype);

  GenericInterfaceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  GenericInterfaceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateGenericInterfaceRequest(messageValidator) {
    return validator.validationError.NONE;
  }

  function validateGenericInterfaceResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var GenericInterface = {
    name: 'IPC::mojom::GenericInterface',
    proxyClass: GenericInterfaceProxy,
    stubClass: GenericInterfaceStub,
    validateRequest: validateGenericInterfaceRequest,
    validateResponse: null,
  };
  GenericInterfaceStub.prototype.validator = validateGenericInterfaceRequest;
  GenericInterfaceProxy.prototype.validator = null;
  var kChannel_SetPeerPid_Name = 0;
  var kChannel_Receive_Name = 1;
  var kChannel_GetAssociatedInterface_Name = 2;

  function ChannelProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  ChannelProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  ChannelProxy.prototype.setPeerPid = function(pid) {
    var params = new Channel_SetPeerPid_Params();
    params.pid = pid;
    var builder = new codec.MessageBuilder(
        kChannel_SetPeerPid_Name,
        codec.align(Channel_SetPeerPid_Params.encodedSize));
    builder.encodeStruct(Channel_SetPeerPid_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ChannelProxy.prototype.receive = function(data, handles) {
    var params = new Channel_Receive_Params();
    params.data = data;
    params.handles = handles;
    var builder = new codec.MessageBuilder(
        kChannel_Receive_Name,
        codec.align(Channel_Receive_Params.encodedSize));
    builder.encodeStruct(Channel_Receive_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ChannelProxy.prototype.getAssociatedInterface = function(name, request) {
    var params = new Channel_GetAssociatedInterface_Params();
    params.name = name;
    params.request = request;
    var builder = new codec.MessageBuilder(
        kChannel_GetAssociatedInterface_Name,
        codec.align(Channel_GetAssociatedInterface_Params.encodedSize));
    builder.encodeStruct(Channel_GetAssociatedInterface_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ChannelStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  ChannelStub.prototype = Object.create(bindings.StubBase.prototype);
  ChannelStub.prototype.setPeerPid = function(pid) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.setPeerPid && bindings.StubBindings(this).delegate.setPeerPid(pid);
  }
  ChannelStub.prototype.receive = function(data, handles) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.receive && bindings.StubBindings(this).delegate.receive(data, handles);
  }
  ChannelStub.prototype.getAssociatedInterface = function(name, request) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.getAssociatedInterface && bindings.StubBindings(this).delegate.getAssociatedInterface(name, request);
  }

  ChannelStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kChannel_SetPeerPid_Name:
      var params = reader.decodeStruct(Channel_SetPeerPid_Params);
      this.setPeerPid(params.pid);
      return true;
    case kChannel_Receive_Name:
      var params = reader.decodeStruct(Channel_Receive_Params);
      this.receive(params.data, params.handles);
      return true;
    case kChannel_GetAssociatedInterface_Name:
      var params = reader.decodeStruct(Channel_GetAssociatedInterface_Params);
      this.getAssociatedInterface(params.name, params.request);
      return true;
    default:
      return false;
    }
  };

  ChannelStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateChannelRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kChannel_SetPeerPid_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Channel_SetPeerPid_Params;
      break;
      case kChannel_Receive_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Channel_Receive_Params;
      break;
      case kChannel_GetAssociatedInterface_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Channel_GetAssociatedInterface_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateChannelResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var Channel = {
    name: 'IPC::mojom::Channel',
    proxyClass: ChannelProxy,
    stubClass: ChannelStub,
    validateRequest: validateChannelRequest,
    validateResponse: null,
  };
  ChannelStub.prototype.validator = validateChannelRequest;
  ChannelProxy.prototype.validator = null;

  function ChannelBootstrapProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  ChannelBootstrapProxy.prototype = Object.create(bindings.ProxyBase.prototype);

  function ChannelBootstrapStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  ChannelBootstrapStub.prototype = Object.create(bindings.StubBase.prototype);

  ChannelBootstrapStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  ChannelBootstrapStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateChannelBootstrapRequest(messageValidator) {
    return validator.validationError.NONE;
  }

  function validateChannelBootstrapResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ChannelBootstrap = {
    name: 'IPC::mojom::ChannelBootstrap',
    proxyClass: ChannelBootstrapProxy,
    stubClass: ChannelBootstrapStub,
    validateRequest: validateChannelBootstrapRequest,
    validateResponse: null,
  };
  ChannelBootstrapStub.prototype.validator = validateChannelBootstrapRequest;
  ChannelBootstrapProxy.prototype.validator = null;

  var exports = {};
  exports.SerializedHandle = SerializedHandle;
  exports.GenericInterface = GenericInterface;
  exports.Channel = Channel;
  exports.ChannelBootstrap = ChannelBootstrap;

  return exports;
});
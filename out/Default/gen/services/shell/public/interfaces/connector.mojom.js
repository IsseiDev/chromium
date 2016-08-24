// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("services/shell/public/interfaces/connector.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "services/shell/public/interfaces/interface_provider.mojom",
], function(bindings, codec, connection, core, validator, interface_provider$) {
  var kRootUserID = "505C0EE9-3013-43C0-82B0-A84F50CF8D84";
  var kInheritUserID = "D26290E4-4485-4EAE-81A2-66D1EEB40A9D";
  var kInvalidInstanceID = 0;
  var ConnectResult = {};
  ConnectResult.SUCCEEDED = 0;
  ConnectResult.INVALID_ARGUMENT = ConnectResult.SUCCEEDED + 1;
  ConnectResult.ACCESS_DENIED = ConnectResult.INVALID_ARGUMENT + 1;

  function Identity(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Identity.prototype.initDefaults_ = function() {
    this.name = null;
    this.user_id = null;
    this.instance = null;
  };
  Identity.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Identity.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Identity.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Identity.name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Identity.user_id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Identity.instance
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Identity.encodedSize = codec.kStructHeaderSize + 24;

  Identity.decode = function(decoder) {
    var packed;
    var val = new Identity();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.name = decoder.decodeStruct(codec.String);
    val.user_id = decoder.decodeStruct(codec.String);
    val.instance = decoder.decodeStruct(codec.String);
    return val;
  };

  Identity.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Identity.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.name);
    encoder.encodeStruct(codec.String, val.user_id);
    encoder.encodeStruct(codec.String, val.instance);
  };
  function ClientProcessConnection(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ClientProcessConnection.prototype.initDefaults_ = function() {
    this.service = null;
    this.pid_receiver_request = null;
  };
  ClientProcessConnection.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ClientProcessConnection.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ClientProcessConnection.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ClientProcessConnection.service
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ClientProcessConnection.pid_receiver_request
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 4, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ClientProcessConnection.encodedSize = codec.kStructHeaderSize + 8;

  ClientProcessConnection.decode = function(decoder) {
    var packed;
    var val = new ClientProcessConnection();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.service = decoder.decodeStruct(codec.Handle);
    val.pid_receiver_request = decoder.decodeStruct(codec.Handle);
    return val;
  };

  ClientProcessConnection.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ClientProcessConnection.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.service);
    encoder.encodeStruct(codec.Handle, val.pid_receiver_request);
  };
  function PIDReceiver_SetPID_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PIDReceiver_SetPID_Params.prototype.initDefaults_ = function() {
    this.pid = 0;
  };
  PIDReceiver_SetPID_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PIDReceiver_SetPID_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PIDReceiver_SetPID_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  PIDReceiver_SetPID_Params.encodedSize = codec.kStructHeaderSize + 8;

  PIDReceiver_SetPID_Params.decode = function(decoder) {
    var packed;
    var val = new PIDReceiver_SetPID_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.pid = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PIDReceiver_SetPID_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PIDReceiver_SetPID_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.pid);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Connector_Connect_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Connector_Connect_Params.prototype.initDefaults_ = function() {
    this.target = null;
    this.remote_interfaces = null;
    this.client_process_connection = null;
  };
  Connector_Connect_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Connector_Connect_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Connector_Connect_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Connector_Connect_Params.target
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, Identity, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Connector_Connect_Params.remote_interfaces
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 8, true)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Connector_Connect_Params.client_process_connection
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, ClientProcessConnection, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Connector_Connect_Params.encodedSize = codec.kStructHeaderSize + 24;

  Connector_Connect_Params.decode = function(decoder) {
    var packed;
    var val = new Connector_Connect_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.target = decoder.decodeStructPointer(Identity);
    val.remote_interfaces = decoder.decodeStruct(codec.Handle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.client_process_connection = decoder.decodeStructPointer(ClientProcessConnection);
    return val;
  };

  Connector_Connect_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Connector_Connect_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(Identity, val.target);
    encoder.encodeStruct(codec.Handle, val.remote_interfaces);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(ClientProcessConnection, val.client_process_connection);
  };
  function Connector_Connect_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Connector_Connect_ResponseParams.prototype.initDefaults_ = function() {
    this.result = 0;
    this.user_id = null;
  };
  Connector_Connect_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Connector_Connect_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Connector_Connect_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate Connector_Connect_ResponseParams.user_id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Connector_Connect_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  Connector_Connect_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Connector_Connect_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.user_id = decoder.decodeStruct(codec.String);
    return val;
  };

  Connector_Connect_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Connector_Connect_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.result);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.user_id);
  };
  function Connector_Clone_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Connector_Clone_Params.prototype.initDefaults_ = function() {
    this.request = null;
  };
  Connector_Clone_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Connector_Clone_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Connector_Clone_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Connector_Clone_Params.request
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Connector_Clone_Params.encodedSize = codec.kStructHeaderSize + 8;

  Connector_Clone_Params.decode = function(decoder) {
    var packed;
    var val = new Connector_Clone_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.request = decoder.decodeStruct(codec.Handle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Connector_Clone_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Connector_Clone_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.request);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kPIDReceiver_SetPID_Name = 0;

  function PIDReceiverProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  PIDReceiverProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  PIDReceiverProxy.prototype.setPID = function(pid) {
    var params = new PIDReceiver_SetPID_Params();
    params.pid = pid;
    var builder = new codec.MessageBuilder(
        kPIDReceiver_SetPID_Name,
        codec.align(PIDReceiver_SetPID_Params.encodedSize));
    builder.encodeStruct(PIDReceiver_SetPID_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function PIDReceiverStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  PIDReceiverStub.prototype = Object.create(bindings.StubBase.prototype);
  PIDReceiverStub.prototype.setPID = function(pid) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.setPID && bindings.StubBindings(this).delegate.setPID(pid);
  }

  PIDReceiverStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPIDReceiver_SetPID_Name:
      var params = reader.decodeStruct(PIDReceiver_SetPID_Params);
      this.setPID(params.pid);
      return true;
    default:
      return false;
    }
  };

  PIDReceiverStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validatePIDReceiverRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kPIDReceiver_SetPID_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PIDReceiver_SetPID_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validatePIDReceiverResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var PIDReceiver = {
    name: 'shell::mojom::PIDReceiver',
    proxyClass: PIDReceiverProxy,
    stubClass: PIDReceiverStub,
    validateRequest: validatePIDReceiverRequest,
    validateResponse: null,
  };
  PIDReceiverStub.prototype.validator = validatePIDReceiverRequest;
  PIDReceiverProxy.prototype.validator = null;
  var kConnector_Connect_Name = 0;
  var kConnector_Clone_Name = 1;

  function ConnectorProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  ConnectorProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  ConnectorProxy.prototype.connect = function(target, remote_interfaces, client_process_connection) {
    var params = new Connector_Connect_Params();
    params.target = target;
    params.remote_interfaces = core.isHandle(remote_interfaces) ? remote_interfaces : connection.bindProxy(remote_interfaces, interface_provider$.InterfaceProvider);
    params.client_process_connection = client_process_connection;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kConnector_Connect_Name,
          codec.align(Connector_Connect_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Connector_Connect_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Connector_Connect_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ConnectorProxy.prototype.clone = function(request) {
    var params = new Connector_Clone_Params();
    params.request = core.isHandle(request) ? request : connection.bindProxy(request, Connector);
    var builder = new codec.MessageBuilder(
        kConnector_Clone_Name,
        codec.align(Connector_Clone_Params.encodedSize));
    builder.encodeStruct(Connector_Clone_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ConnectorStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  ConnectorStub.prototype = Object.create(bindings.StubBase.prototype);
  ConnectorStub.prototype.connect = function(target, remote_interfaces, client_process_connection) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.connect && bindings.StubBindings(this).delegate.connect(target, connection.bindHandleToStub(remote_interfaces, interface_provider$.InterfaceProvider), client_process_connection);
  }
  ConnectorStub.prototype.clone = function(request) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.clone && bindings.StubBindings(this).delegate.clone(connection.bindHandleToStub(request, Connector));
  }

  ConnectorStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kConnector_Clone_Name:
      var params = reader.decodeStruct(Connector_Clone_Params);
      this.clone(params.request);
      return true;
    default:
      return false;
    }
  };

  ConnectorStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kConnector_Connect_Name:
      var params = reader.decodeStruct(Connector_Connect_Params);
      return this.connect(params.target, params.remote_interfaces, params.client_process_connection).then(function(response) {
        var responseParams =
            new Connector_Connect_ResponseParams();
        responseParams.result = response.result;
        responseParams.user_id = response.user_id;
        var builder = new codec.MessageWithRequestIDBuilder(
            kConnector_Connect_Name,
            codec.align(Connector_Connect_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Connector_Connect_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateConnectorRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kConnector_Connect_Name:
        if (message.expectsResponse())
          paramsClass = Connector_Connect_Params;
      break;
      case kConnector_Clone_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Connector_Clone_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateConnectorResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kConnector_Connect_Name:
        if (message.isResponse())
          paramsClass = Connector_Connect_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var Connector = {
    name: 'shell::mojom::Connector',
    proxyClass: ConnectorProxy,
    stubClass: ConnectorStub,
    validateRequest: validateConnectorRequest,
    validateResponse: validateConnectorResponse,
  };
  ConnectorStub.prototype.validator = validateConnectorRequest;
  ConnectorProxy.prototype.validator = validateConnectorResponse;

  var exports = {};
  exports.kRootUserID = kRootUserID;
  exports.kInheritUserID = kInheritUserID;
  exports.kInvalidInstanceID = kInvalidInstanceID;
  exports.ConnectResult = ConnectResult;
  exports.Identity = Identity;
  exports.ClientProcessConnection = ClientProcessConnection;
  exports.PIDReceiver = PIDReceiver;
  exports.Connector = Connector;

  return exports;
});
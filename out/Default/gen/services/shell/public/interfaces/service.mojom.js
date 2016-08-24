// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("services/shell/public/interfaces/service.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "services/shell/public/interfaces/capabilities.mojom",
    "services/shell/public/interfaces/connector.mojom",
    "services/shell/public/interfaces/interface_provider.mojom",
], function(bindings, codec, connection, core, validator, capabilities$, connector$, interface_provider$) {

  function Service_OnStart_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Service_OnStart_Params.prototype.initDefaults_ = function() {
    this.identity = null;
  };
  Service_OnStart_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Service_OnStart_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Service_OnStart_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Service_OnStart_Params.identity
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, connector$.Identity, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Service_OnStart_Params.encodedSize = codec.kStructHeaderSize + 8;

  Service_OnStart_Params.decode = function(decoder) {
    var packed;
    var val = new Service_OnStart_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.identity = decoder.decodeStructPointer(connector$.Identity);
    return val;
  };

  Service_OnStart_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Service_OnStart_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(connector$.Identity, val.identity);
  };
  function Service_OnStart_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Service_OnStart_ResponseParams.prototype.initDefaults_ = function() {
    this.connector_request = null;
  };
  Service_OnStart_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Service_OnStart_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Service_OnStart_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Service_OnStart_ResponseParams.connector_request
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Service_OnStart_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Service_OnStart_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Service_OnStart_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.connector_request = decoder.decodeStruct(codec.Handle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Service_OnStart_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Service_OnStart_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.connector_request);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Service_OnConnect_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Service_OnConnect_Params.prototype.initDefaults_ = function() {
    this.source = null;
    this.interfaces = null;
    this.allowed_capabilities = null;
  };
  Service_OnConnect_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Service_OnConnect_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Service_OnConnect_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Service_OnConnect_Params.source
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, connector$.Identity, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Service_OnConnect_Params.interfaces
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 8, true)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Service_OnConnect_Params.allowed_capabilities
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, capabilities$.CapabilityRequest, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Service_OnConnect_Params.encodedSize = codec.kStructHeaderSize + 24;

  Service_OnConnect_Params.decode = function(decoder) {
    var packed;
    var val = new Service_OnConnect_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.source = decoder.decodeStructPointer(connector$.Identity);
    val.interfaces = decoder.decodeStruct(codec.Handle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.allowed_capabilities = decoder.decodeStructPointer(capabilities$.CapabilityRequest);
    return val;
  };

  Service_OnConnect_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Service_OnConnect_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(connector$.Identity, val.source);
    encoder.encodeStruct(codec.Handle, val.interfaces);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(capabilities$.CapabilityRequest, val.allowed_capabilities);
  };
  var kService_OnStart_Name = 0;
  var kService_OnConnect_Name = 1;

  function ServiceProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  ServiceProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  ServiceProxy.prototype.onStart = function(identity) {
    var params = new Service_OnStart_Params();
    params.identity = identity;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kService_OnStart_Name,
          codec.align(Service_OnStart_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Service_OnStart_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Service_OnStart_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ServiceProxy.prototype.onConnect = function(source, interfaces, allowed_capabilities) {
    var params = new Service_OnConnect_Params();
    params.source = source;
    params.interfaces = core.isHandle(interfaces) ? interfaces : connection.bindProxy(interfaces, interface_provider$.InterfaceProvider);
    params.allowed_capabilities = allowed_capabilities;
    var builder = new codec.MessageBuilder(
        kService_OnConnect_Name,
        codec.align(Service_OnConnect_Params.encodedSize));
    builder.encodeStruct(Service_OnConnect_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ServiceStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  ServiceStub.prototype = Object.create(bindings.StubBase.prototype);
  ServiceStub.prototype.onStart = function(identity) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onStart && bindings.StubBindings(this).delegate.onStart(identity);
  }
  ServiceStub.prototype.onConnect = function(source, interfaces, allowed_capabilities) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onConnect && bindings.StubBindings(this).delegate.onConnect(source, connection.bindHandleToStub(interfaces, interface_provider$.InterfaceProvider), allowed_capabilities);
  }

  ServiceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kService_OnConnect_Name:
      var params = reader.decodeStruct(Service_OnConnect_Params);
      this.onConnect(params.source, params.interfaces, params.allowed_capabilities);
      return true;
    default:
      return false;
    }
  };

  ServiceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kService_OnStart_Name:
      var params = reader.decodeStruct(Service_OnStart_Params);
      return this.onStart(params.identity).then(function(response) {
        var responseParams =
            new Service_OnStart_ResponseParams();
        responseParams.connector_request = response.connector_request;
        var builder = new codec.MessageWithRequestIDBuilder(
            kService_OnStart_Name,
            codec.align(Service_OnStart_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Service_OnStart_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateServiceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kService_OnStart_Name:
        if (message.expectsResponse())
          paramsClass = Service_OnStart_Params;
      break;
      case kService_OnConnect_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Service_OnConnect_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateServiceResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kService_OnStart_Name:
        if (message.isResponse())
          paramsClass = Service_OnStart_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var Service = {
    name: 'shell::mojom::Service',
    proxyClass: ServiceProxy,
    stubClass: ServiceStub,
    validateRequest: validateServiceRequest,
    validateResponse: validateServiceResponse,
  };
  ServiceStub.prototype.validator = validateServiceRequest;
  ServiceProxy.prototype.validator = validateServiceResponse;

  var exports = {};
  exports.Service = Service;

  return exports;
});
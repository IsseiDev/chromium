// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("services/shell/public/interfaces/service_factory.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "services/shell/public/interfaces/service.mojom",
], function(bindings, codec, connection, core, validator, service$) {

  function ServiceFactory_CreateService_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceFactory_CreateService_Params.prototype.initDefaults_ = function() {
    this.service = null;
    this.name = null;
  };
  ServiceFactory_CreateService_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ServiceFactory_CreateService_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ServiceFactory_CreateService_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ServiceFactory_CreateService_Params.service
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ServiceFactory_CreateService_Params.name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceFactory_CreateService_Params.encodedSize = codec.kStructHeaderSize + 16;

  ServiceFactory_CreateService_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceFactory_CreateService_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.service = decoder.decodeStruct(codec.Handle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.name = decoder.decodeStruct(codec.String);
    return val;
  };

  ServiceFactory_CreateService_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceFactory_CreateService_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.service);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.name);
  };
  var kServiceFactory_CreateService_Name = 0;

  function ServiceFactoryProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  ServiceFactoryProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  ServiceFactoryProxy.prototype.createService = function(service, name) {
    var params = new ServiceFactory_CreateService_Params();
    params.service = core.isHandle(service) ? service : connection.bindProxy(service, service$.Service);
    params.name = name;
    var builder = new codec.MessageBuilder(
        kServiceFactory_CreateService_Name,
        codec.align(ServiceFactory_CreateService_Params.encodedSize));
    builder.encodeStruct(ServiceFactory_CreateService_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ServiceFactoryStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  ServiceFactoryStub.prototype = Object.create(bindings.StubBase.prototype);
  ServiceFactoryStub.prototype.createService = function(service, name) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.createService && bindings.StubBindings(this).delegate.createService(connection.bindHandleToStub(service, service$.Service), name);
  }

  ServiceFactoryStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kServiceFactory_CreateService_Name:
      var params = reader.decodeStruct(ServiceFactory_CreateService_Params);
      this.createService(params.service, params.name);
      return true;
    default:
      return false;
    }
  };

  ServiceFactoryStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateServiceFactoryRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kServiceFactory_CreateService_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ServiceFactory_CreateService_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateServiceFactoryResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ServiceFactory = {
    name: 'shell::mojom::ServiceFactory',
    proxyClass: ServiceFactoryProxy,
    stubClass: ServiceFactoryStub,
    validateRequest: validateServiceFactoryRequest,
    validateResponse: null,
  };
  ServiceFactoryStub.prototype.validator = validateServiceFactoryRequest;
  ServiceFactoryProxy.prototype.validator = null;

  var exports = {};
  exports.ServiceFactory = ServiceFactory;

  return exports;
});
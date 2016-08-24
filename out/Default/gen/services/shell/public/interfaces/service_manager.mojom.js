// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("services/shell/public/interfaces/service_manager.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "services/shell/public/interfaces/connector.mojom",
], function(bindings, codec, connection, core, validator, connector$) {

  function ServiceInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceInfo.prototype.initDefaults_ = function() {
    this.id = 0;
    this.pid = 0;
    this.identity = null;
  };
  ServiceInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ServiceInfo.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ServiceInfo.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



    
    // validate ServiceInfo.identity
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, connector$.Identity, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceInfo.encodedSize = codec.kStructHeaderSize + 16;

  ServiceInfo.decode = function(decoder) {
    var packed;
    var val = new ServiceInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.Uint32);
    val.pid = decoder.decodeStruct(codec.Uint32);
    val.identity = decoder.decodeStructPointer(connector$.Identity);
    return val;
  };

  ServiceInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.id);
    encoder.encodeStruct(codec.Uint32, val.pid);
    encoder.encodeStructPointer(connector$.Identity, val.identity);
  };
  function ServiceManagerListener_OnInit_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceManagerListener_OnInit_Params.prototype.initDefaults_ = function() {
    this.running_services = null;
  };
  ServiceManagerListener_OnInit_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ServiceManagerListener_OnInit_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ServiceManagerListener_OnInit_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ServiceManagerListener_OnInit_Params.running_services
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(ServiceInfo), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceManagerListener_OnInit_Params.encodedSize = codec.kStructHeaderSize + 8;

  ServiceManagerListener_OnInit_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceManagerListener_OnInit_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.running_services = decoder.decodeArrayPointer(new codec.PointerTo(ServiceInfo));
    return val;
  };

  ServiceManagerListener_OnInit_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceManagerListener_OnInit_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(ServiceInfo), val.running_services);
  };
  function ServiceManagerListener_OnServiceCreated_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceManagerListener_OnServiceCreated_Params.prototype.initDefaults_ = function() {
    this.service = null;
  };
  ServiceManagerListener_OnServiceCreated_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ServiceManagerListener_OnServiceCreated_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ServiceManagerListener_OnServiceCreated_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ServiceManagerListener_OnServiceCreated_Params.service
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, ServiceInfo, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceManagerListener_OnServiceCreated_Params.encodedSize = codec.kStructHeaderSize + 8;

  ServiceManagerListener_OnServiceCreated_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceManagerListener_OnServiceCreated_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.service = decoder.decodeStructPointer(ServiceInfo);
    return val;
  };

  ServiceManagerListener_OnServiceCreated_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceManagerListener_OnServiceCreated_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(ServiceInfo, val.service);
  };
  function ServiceManagerListener_OnServiceStarted_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceManagerListener_OnServiceStarted_Params.prototype.initDefaults_ = function() {
    this.identity = null;
    this.pid = 0;
  };
  ServiceManagerListener_OnServiceStarted_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ServiceManagerListener_OnServiceStarted_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ServiceManagerListener_OnServiceStarted_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ServiceManagerListener_OnServiceStarted_Params.identity
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, connector$.Identity, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  ServiceManagerListener_OnServiceStarted_Params.encodedSize = codec.kStructHeaderSize + 16;

  ServiceManagerListener_OnServiceStarted_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceManagerListener_OnServiceStarted_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.identity = decoder.decodeStructPointer(connector$.Identity);
    val.pid = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ServiceManagerListener_OnServiceStarted_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceManagerListener_OnServiceStarted_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(connector$.Identity, val.identity);
    encoder.encodeStruct(codec.Uint32, val.pid);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ServiceManagerListener_OnServiceStopped_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceManagerListener_OnServiceStopped_Params.prototype.initDefaults_ = function() {
    this.identity = null;
  };
  ServiceManagerListener_OnServiceStopped_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ServiceManagerListener_OnServiceStopped_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ServiceManagerListener_OnServiceStopped_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ServiceManagerListener_OnServiceStopped_Params.identity
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, connector$.Identity, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceManagerListener_OnServiceStopped_Params.encodedSize = codec.kStructHeaderSize + 8;

  ServiceManagerListener_OnServiceStopped_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceManagerListener_OnServiceStopped_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.identity = decoder.decodeStructPointer(connector$.Identity);
    return val;
  };

  ServiceManagerListener_OnServiceStopped_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceManagerListener_OnServiceStopped_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(connector$.Identity, val.identity);
  };
  function ServiceManager_AddListener_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceManager_AddListener_Params.prototype.initDefaults_ = function() {
    this.listener = null;
  };
  ServiceManager_AddListener_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ServiceManager_AddListener_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ServiceManager_AddListener_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ServiceManager_AddListener_Params.listener
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceManager_AddListener_Params.encodedSize = codec.kStructHeaderSize + 8;

  ServiceManager_AddListener_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceManager_AddListener_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.listener = decoder.decodeStruct(codec.Interface);
    return val;
  };

  ServiceManager_AddListener_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceManager_AddListener_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Interface, val.listener);
  };
  var kServiceManagerListener_OnInit_Name = 0;
  var kServiceManagerListener_OnServiceCreated_Name = 1;
  var kServiceManagerListener_OnServiceStarted_Name = 2;
  var kServiceManagerListener_OnServiceStopped_Name = 3;

  function ServiceManagerListenerProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  ServiceManagerListenerProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  ServiceManagerListenerProxy.prototype.onInit = function(running_services) {
    var params = new ServiceManagerListener_OnInit_Params();
    params.running_services = running_services;
    var builder = new codec.MessageBuilder(
        kServiceManagerListener_OnInit_Name,
        codec.align(ServiceManagerListener_OnInit_Params.encodedSize));
    builder.encodeStruct(ServiceManagerListener_OnInit_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ServiceManagerListenerProxy.prototype.onServiceCreated = function(service) {
    var params = new ServiceManagerListener_OnServiceCreated_Params();
    params.service = service;
    var builder = new codec.MessageBuilder(
        kServiceManagerListener_OnServiceCreated_Name,
        codec.align(ServiceManagerListener_OnServiceCreated_Params.encodedSize));
    builder.encodeStruct(ServiceManagerListener_OnServiceCreated_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ServiceManagerListenerProxy.prototype.onServiceStarted = function(identity, pid) {
    var params = new ServiceManagerListener_OnServiceStarted_Params();
    params.identity = identity;
    params.pid = pid;
    var builder = new codec.MessageBuilder(
        kServiceManagerListener_OnServiceStarted_Name,
        codec.align(ServiceManagerListener_OnServiceStarted_Params.encodedSize));
    builder.encodeStruct(ServiceManagerListener_OnServiceStarted_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ServiceManagerListenerProxy.prototype.onServiceStopped = function(identity) {
    var params = new ServiceManagerListener_OnServiceStopped_Params();
    params.identity = identity;
    var builder = new codec.MessageBuilder(
        kServiceManagerListener_OnServiceStopped_Name,
        codec.align(ServiceManagerListener_OnServiceStopped_Params.encodedSize));
    builder.encodeStruct(ServiceManagerListener_OnServiceStopped_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ServiceManagerListenerStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  ServiceManagerListenerStub.prototype = Object.create(bindings.StubBase.prototype);
  ServiceManagerListenerStub.prototype.onInit = function(running_services) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onInit && bindings.StubBindings(this).delegate.onInit(running_services);
  }
  ServiceManagerListenerStub.prototype.onServiceCreated = function(service) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onServiceCreated && bindings.StubBindings(this).delegate.onServiceCreated(service);
  }
  ServiceManagerListenerStub.prototype.onServiceStarted = function(identity, pid) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onServiceStarted && bindings.StubBindings(this).delegate.onServiceStarted(identity, pid);
  }
  ServiceManagerListenerStub.prototype.onServiceStopped = function(identity) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onServiceStopped && bindings.StubBindings(this).delegate.onServiceStopped(identity);
  }

  ServiceManagerListenerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kServiceManagerListener_OnInit_Name:
      var params = reader.decodeStruct(ServiceManagerListener_OnInit_Params);
      this.onInit(params.running_services);
      return true;
    case kServiceManagerListener_OnServiceCreated_Name:
      var params = reader.decodeStruct(ServiceManagerListener_OnServiceCreated_Params);
      this.onServiceCreated(params.service);
      return true;
    case kServiceManagerListener_OnServiceStarted_Name:
      var params = reader.decodeStruct(ServiceManagerListener_OnServiceStarted_Params);
      this.onServiceStarted(params.identity, params.pid);
      return true;
    case kServiceManagerListener_OnServiceStopped_Name:
      var params = reader.decodeStruct(ServiceManagerListener_OnServiceStopped_Params);
      this.onServiceStopped(params.identity);
      return true;
    default:
      return false;
    }
  };

  ServiceManagerListenerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateServiceManagerListenerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kServiceManagerListener_OnInit_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ServiceManagerListener_OnInit_Params;
      break;
      case kServiceManagerListener_OnServiceCreated_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ServiceManagerListener_OnServiceCreated_Params;
      break;
      case kServiceManagerListener_OnServiceStarted_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ServiceManagerListener_OnServiceStarted_Params;
      break;
      case kServiceManagerListener_OnServiceStopped_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ServiceManagerListener_OnServiceStopped_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateServiceManagerListenerResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ServiceManagerListener = {
    name: 'shell::mojom::ServiceManagerListener',
    proxyClass: ServiceManagerListenerProxy,
    stubClass: ServiceManagerListenerStub,
    validateRequest: validateServiceManagerListenerRequest,
    validateResponse: null,
  };
  ServiceManagerListenerStub.prototype.validator = validateServiceManagerListenerRequest;
  ServiceManagerListenerProxy.prototype.validator = null;
  var kServiceManager_AddListener_Name = 0;

  function ServiceManagerProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  ServiceManagerProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  ServiceManagerProxy.prototype.addListener = function(listener) {
    var params = new ServiceManager_AddListener_Params();
    params.listener = core.isHandle(listener) ? listener : connection.bindImpl(listener, ServiceManagerListener);
    var builder = new codec.MessageBuilder(
        kServiceManager_AddListener_Name,
        codec.align(ServiceManager_AddListener_Params.encodedSize));
    builder.encodeStruct(ServiceManager_AddListener_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ServiceManagerStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  ServiceManagerStub.prototype = Object.create(bindings.StubBase.prototype);
  ServiceManagerStub.prototype.addListener = function(listener) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.addListener && bindings.StubBindings(this).delegate.addListener(connection.bindHandleToProxy(listener, ServiceManagerListener));
  }

  ServiceManagerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kServiceManager_AddListener_Name:
      var params = reader.decodeStruct(ServiceManager_AddListener_Params);
      this.addListener(params.listener);
      return true;
    default:
      return false;
    }
  };

  ServiceManagerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateServiceManagerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kServiceManager_AddListener_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ServiceManager_AddListener_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateServiceManagerResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ServiceManager = {
    name: 'shell::mojom::ServiceManager',
    proxyClass: ServiceManagerProxy,
    stubClass: ServiceManagerStub,
    validateRequest: validateServiceManagerRequest,
    validateResponse: null,
  };
  ServiceManagerStub.prototype.validator = validateServiceManagerRequest;
  ServiceManagerProxy.prototype.validator = null;

  var exports = {};
  exports.ServiceInfo = ServiceInfo;
  exports.ServiceManagerListener = ServiceManagerListener;
  exports.ServiceManager = ServiceManager;

  return exports;
});
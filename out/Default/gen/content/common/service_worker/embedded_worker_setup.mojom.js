// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("content/common/service_worker/embedded_worker_setup.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "services/shell/public/interfaces/interface_provider.mojom",
], function(bindings, codec, connection, core, validator, interface_provider$) {

  function EmbeddedWorkerSetup_ExchangeInterfaceProviders_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  EmbeddedWorkerSetup_ExchangeInterfaceProviders_Params.prototype.initDefaults_ = function() {
    this.thread_id = 0;
    this.remote_interfaces = null;
    this.local_interfaces = null;
  };
  EmbeddedWorkerSetup_ExchangeInterfaceProviders_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  EmbeddedWorkerSetup_ExchangeInterfaceProviders_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, EmbeddedWorkerSetup_ExchangeInterfaceProviders_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate EmbeddedWorkerSetup_ExchangeInterfaceProviders_Params.remote_interfaces
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 4, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate EmbeddedWorkerSetup_ExchangeInterfaceProviders_Params.local_interfaces
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 8, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  EmbeddedWorkerSetup_ExchangeInterfaceProviders_Params.encodedSize = codec.kStructHeaderSize + 16;

  EmbeddedWorkerSetup_ExchangeInterfaceProviders_Params.decode = function(decoder) {
    var packed;
    var val = new EmbeddedWorkerSetup_ExchangeInterfaceProviders_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.thread_id = decoder.decodeStruct(codec.Int32);
    val.remote_interfaces = decoder.decodeStruct(codec.Handle);
    val.local_interfaces = decoder.decodeStruct(codec.Interface);
    return val;
  };

  EmbeddedWorkerSetup_ExchangeInterfaceProviders_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(EmbeddedWorkerSetup_ExchangeInterfaceProviders_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.thread_id);
    encoder.encodeStruct(codec.Handle, val.remote_interfaces);
    encoder.encodeStruct(codec.Interface, val.local_interfaces);
  };
  var kEmbeddedWorkerSetup_ExchangeInterfaceProviders_Name = 0;

  function EmbeddedWorkerSetupProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  EmbeddedWorkerSetupProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  EmbeddedWorkerSetupProxy.prototype.exchangeInterfaceProviders = function(thread_id, remote_interfaces, local_interfaces) {
    var params = new EmbeddedWorkerSetup_ExchangeInterfaceProviders_Params();
    params.thread_id = thread_id;
    params.remote_interfaces = core.isHandle(remote_interfaces) ? remote_interfaces : connection.bindProxy(remote_interfaces, interface_provider$.InterfaceProvider);
    params.local_interfaces = core.isHandle(local_interfaces) ? local_interfaces : connection.bindImpl(local_interfaces, interface_provider$.InterfaceProvider);
    var builder = new codec.MessageBuilder(
        kEmbeddedWorkerSetup_ExchangeInterfaceProviders_Name,
        codec.align(EmbeddedWorkerSetup_ExchangeInterfaceProviders_Params.encodedSize));
    builder.encodeStruct(EmbeddedWorkerSetup_ExchangeInterfaceProviders_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function EmbeddedWorkerSetupStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  EmbeddedWorkerSetupStub.prototype = Object.create(bindings.StubBase.prototype);
  EmbeddedWorkerSetupStub.prototype.exchangeInterfaceProviders = function(thread_id, remote_interfaces, local_interfaces) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.exchangeInterfaceProviders && bindings.StubBindings(this).delegate.exchangeInterfaceProviders(thread_id, connection.bindHandleToStub(remote_interfaces, interface_provider$.InterfaceProvider), connection.bindHandleToProxy(local_interfaces, interface_provider$.InterfaceProvider));
  }

  EmbeddedWorkerSetupStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kEmbeddedWorkerSetup_ExchangeInterfaceProviders_Name:
      var params = reader.decodeStruct(EmbeddedWorkerSetup_ExchangeInterfaceProviders_Params);
      this.exchangeInterfaceProviders(params.thread_id, params.remote_interfaces, params.local_interfaces);
      return true;
    default:
      return false;
    }
  };

  EmbeddedWorkerSetupStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateEmbeddedWorkerSetupRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kEmbeddedWorkerSetup_ExchangeInterfaceProviders_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = EmbeddedWorkerSetup_ExchangeInterfaceProviders_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateEmbeddedWorkerSetupResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var EmbeddedWorkerSetup = {
    name: 'content::mojom::EmbeddedWorkerSetup',
    proxyClass: EmbeddedWorkerSetupProxy,
    stubClass: EmbeddedWorkerSetupStub,
    validateRequest: validateEmbeddedWorkerSetupRequest,
    validateResponse: null,
  };
  EmbeddedWorkerSetupStub.prototype.validator = validateEmbeddedWorkerSetupRequest;
  EmbeddedWorkerSetupProxy.prototype.validator = null;

  var exports = {};
  exports.EmbeddedWorkerSetup = EmbeddedWorkerSetup;

  return exports;
});
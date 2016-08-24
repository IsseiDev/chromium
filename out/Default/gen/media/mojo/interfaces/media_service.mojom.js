// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("media/mojo/interfaces/media_service.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "media/mojo/interfaces/service_factory.mojom",
    "services/shell/public/interfaces/interface_provider.mojom",
], function(bindings, codec, connection, core, validator, service_factory$, interface_provider$) {

  function MediaService_CreateServiceFactory_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaService_CreateServiceFactory_Params.prototype.initDefaults_ = function() {
    this.factory = null;
    this.frame_interfaces = null;
  };
  MediaService_CreateServiceFactory_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  MediaService_CreateServiceFactory_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, MediaService_CreateServiceFactory_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate MediaService_CreateServiceFactory_Params.factory
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate MediaService_CreateServiceFactory_Params.frame_interfaces
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 4, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaService_CreateServiceFactory_Params.encodedSize = codec.kStructHeaderSize + 16;

  MediaService_CreateServiceFactory_Params.decode = function(decoder) {
    var packed;
    var val = new MediaService_CreateServiceFactory_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.factory = decoder.decodeStruct(codec.Handle);
    val.frame_interfaces = decoder.decodeStruct(codec.Interface);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  MediaService_CreateServiceFactory_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaService_CreateServiceFactory_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.factory);
    encoder.encodeStruct(codec.Interface, val.frame_interfaces);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kMediaService_CreateServiceFactory_Name = 0;

  function MediaServiceProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  MediaServiceProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  MediaServiceProxy.prototype.createServiceFactory = function(factory, frame_interfaces) {
    var params = new MediaService_CreateServiceFactory_Params();
    params.factory = core.isHandle(factory) ? factory : connection.bindProxy(factory, service_factory$.ServiceFactory);
    params.frame_interfaces = core.isHandle(frame_interfaces) ? frame_interfaces : connection.bindImpl(frame_interfaces, interface_provider$.InterfaceProvider);
    var builder = new codec.MessageBuilder(
        kMediaService_CreateServiceFactory_Name,
        codec.align(MediaService_CreateServiceFactory_Params.encodedSize));
    builder.encodeStruct(MediaService_CreateServiceFactory_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function MediaServiceStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  MediaServiceStub.prototype = Object.create(bindings.StubBase.prototype);
  MediaServiceStub.prototype.createServiceFactory = function(factory, frame_interfaces) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.createServiceFactory && bindings.StubBindings(this).delegate.createServiceFactory(connection.bindHandleToStub(factory, service_factory$.ServiceFactory), connection.bindHandleToProxy(frame_interfaces, interface_provider$.InterfaceProvider));
  }

  MediaServiceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kMediaService_CreateServiceFactory_Name:
      var params = reader.decodeStruct(MediaService_CreateServiceFactory_Params);
      this.createServiceFactory(params.factory, params.frame_interfaces);
      return true;
    default:
      return false;
    }
  };

  MediaServiceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateMediaServiceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kMediaService_CreateServiceFactory_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MediaService_CreateServiceFactory_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateMediaServiceResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var MediaService = {
    name: 'media::mojom::MediaService',
    proxyClass: MediaServiceProxy,
    stubClass: MediaServiceStub,
    validateRequest: validateMediaServiceRequest,
    validateResponse: null,
  };
  MediaServiceStub.prototype.validator = validateMediaServiceRequest;
  MediaServiceProxy.prototype.validator = null;

  var exports = {};
  exports.MediaService = MediaService;

  return exports;
});
// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("content/common/url_loader_factory.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "content/common/url_loader.mojom",
], function(bindings, codec, connection, core, validator, url_loader$) {

  function URLLoaderFactory_CreateLoaderAndStart_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  URLLoaderFactory_CreateLoaderAndStart_Params.prototype.initDefaults_ = function() {
    this.loader = null;
    this.request_id = 0;
    this.request = null;
    this.client = null;
  };
  URLLoaderFactory_CreateLoaderAndStart_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  URLLoaderFactory_CreateLoaderAndStart_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, URLLoaderFactory_CreateLoaderAndStart_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate URLLoaderFactory_CreateLoaderAndStart_Params.loader
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate URLLoaderFactory_CreateLoaderAndStart_Params.request
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, url_loader$.URLRequest, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate URLLoaderFactory_CreateLoaderAndStart_Params.client
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 16, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  URLLoaderFactory_CreateLoaderAndStart_Params.encodedSize = codec.kStructHeaderSize + 24;

  URLLoaderFactory_CreateLoaderAndStart_Params.decode = function(decoder) {
    var packed;
    var val = new URLLoaderFactory_CreateLoaderAndStart_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.loader = decoder.decodeStruct(codec.Handle);
    val.request_id = decoder.decodeStruct(codec.Int32);
    val.request = decoder.decodeStructPointer(url_loader$.URLRequest);
    val.client = decoder.decodeStruct(codec.Interface);
    return val;
  };

  URLLoaderFactory_CreateLoaderAndStart_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(URLLoaderFactory_CreateLoaderAndStart_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.loader);
    encoder.encodeStruct(codec.Int32, val.request_id);
    encoder.encodeStructPointer(url_loader$.URLRequest, val.request);
    encoder.encodeStruct(codec.Interface, val.client);
  };
  var kURLLoaderFactory_CreateLoaderAndStart_Name = 0;

  function URLLoaderFactoryProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  URLLoaderFactoryProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  URLLoaderFactoryProxy.prototype.createLoaderAndStart = function(loader, request_id, request, client) {
    var params = new URLLoaderFactory_CreateLoaderAndStart_Params();
    params.loader = core.isHandle(loader) ? loader : connection.bindProxy(loader, url_loader$.URLLoader);
    params.request_id = request_id;
    params.request = request;
    params.client = core.isHandle(client) ? client : connection.bindImpl(client, url_loader$.URLLoaderClient);
    var builder = new codec.MessageBuilder(
        kURLLoaderFactory_CreateLoaderAndStart_Name,
        codec.align(URLLoaderFactory_CreateLoaderAndStart_Params.encodedSize));
    builder.encodeStruct(URLLoaderFactory_CreateLoaderAndStart_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function URLLoaderFactoryStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  URLLoaderFactoryStub.prototype = Object.create(bindings.StubBase.prototype);
  URLLoaderFactoryStub.prototype.createLoaderAndStart = function(loader, request_id, request, client) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.createLoaderAndStart && bindings.StubBindings(this).delegate.createLoaderAndStart(connection.bindHandleToStub(loader, url_loader$.URLLoader), request_id, request, connection.bindHandleToProxy(client, url_loader$.URLLoaderClient));
  }

  URLLoaderFactoryStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kURLLoaderFactory_CreateLoaderAndStart_Name:
      var params = reader.decodeStruct(URLLoaderFactory_CreateLoaderAndStart_Params);
      this.createLoaderAndStart(params.loader, params.request_id, params.request, params.client);
      return true;
    default:
      return false;
    }
  };

  URLLoaderFactoryStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateURLLoaderFactoryRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kURLLoaderFactory_CreateLoaderAndStart_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = URLLoaderFactory_CreateLoaderAndStart_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateURLLoaderFactoryResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var URLLoaderFactory = {
    name: 'content::mojom::URLLoaderFactory',
    proxyClass: URLLoaderFactoryProxy,
    stubClass: URLLoaderFactoryStub,
    validateRequest: validateURLLoaderFactoryRequest,
    validateResponse: null,
  };
  URLLoaderFactoryStub.prototype.validator = validateURLLoaderFactoryRequest;
  URLLoaderFactoryProxy.prototype.validator = null;

  var exports = {};
  exports.URLLoaderFactory = URLLoaderFactory;

  return exports;
});
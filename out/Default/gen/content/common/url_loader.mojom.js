// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("content/common/url_loader.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {

  function URLRequest(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  URLRequest.prototype.initDefaults_ = function() {
  };
  URLRequest.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  URLRequest.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, URLRequest.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  URLRequest.encodedSize = codec.kStructHeaderSize + 0;

  URLRequest.decode = function(decoder) {
    var packed;
    var val = new URLRequest();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  URLRequest.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(URLRequest.encodedSize);
    encoder.writeUint32(0);
  };
  function URLResponseHead(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  URLResponseHead.prototype.initDefaults_ = function() {
  };
  URLResponseHead.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  URLResponseHead.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, URLResponseHead.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  URLResponseHead.encodedSize = codec.kStructHeaderSize + 0;

  URLResponseHead.decode = function(decoder) {
    var packed;
    var val = new URLResponseHead();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  URLResponseHead.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(URLResponseHead.encodedSize);
    encoder.writeUint32(0);
  };
  function URLLoaderStatus(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  URLLoaderStatus.prototype.initDefaults_ = function() {
  };
  URLLoaderStatus.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  URLLoaderStatus.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, URLLoaderStatus.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  URLLoaderStatus.encodedSize = codec.kStructHeaderSize + 0;

  URLLoaderStatus.decode = function(decoder) {
    var packed;
    var val = new URLLoaderStatus();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  URLLoaderStatus.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(URLLoaderStatus.encodedSize);
    encoder.writeUint32(0);
  };
  function URLLoader_FollowRedirect_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  URLLoader_FollowRedirect_Params.prototype.initDefaults_ = function() {
  };
  URLLoader_FollowRedirect_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  URLLoader_FollowRedirect_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, URLLoader_FollowRedirect_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  URLLoader_FollowRedirect_Params.encodedSize = codec.kStructHeaderSize + 0;

  URLLoader_FollowRedirect_Params.decode = function(decoder) {
    var packed;
    var val = new URLLoader_FollowRedirect_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  URLLoader_FollowRedirect_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(URLLoader_FollowRedirect_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function URLLoader_Cancel_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  URLLoader_Cancel_Params.prototype.initDefaults_ = function() {
  };
  URLLoader_Cancel_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  URLLoader_Cancel_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, URLLoader_Cancel_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  URLLoader_Cancel_Params.encodedSize = codec.kStructHeaderSize + 0;

  URLLoader_Cancel_Params.decode = function(decoder) {
    var packed;
    var val = new URLLoader_Cancel_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  URLLoader_Cancel_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(URLLoader_Cancel_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function URLLoaderClient_OnReceiveResponse_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  URLLoaderClient_OnReceiveResponse_Params.prototype.initDefaults_ = function() {
    this.head = null;
  };
  URLLoaderClient_OnReceiveResponse_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  URLLoaderClient_OnReceiveResponse_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, URLLoaderClient_OnReceiveResponse_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate URLLoaderClient_OnReceiveResponse_Params.head
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, URLResponseHead, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  URLLoaderClient_OnReceiveResponse_Params.encodedSize = codec.kStructHeaderSize + 8;

  URLLoaderClient_OnReceiveResponse_Params.decode = function(decoder) {
    var packed;
    var val = new URLLoaderClient_OnReceiveResponse_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.head = decoder.decodeStructPointer(URLResponseHead);
    return val;
  };

  URLLoaderClient_OnReceiveResponse_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(URLLoaderClient_OnReceiveResponse_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(URLResponseHead, val.head);
  };
  function URLLoaderClient_OnStartLoadingResponseBody_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  URLLoaderClient_OnStartLoadingResponseBody_Params.prototype.initDefaults_ = function() {
    this.body = null;
  };
  URLLoaderClient_OnStartLoadingResponseBody_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  URLLoaderClient_OnStartLoadingResponseBody_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, URLLoaderClient_OnStartLoadingResponseBody_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate URLLoaderClient_OnStartLoadingResponseBody_Params.body
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  URLLoaderClient_OnStartLoadingResponseBody_Params.encodedSize = codec.kStructHeaderSize + 8;

  URLLoaderClient_OnStartLoadingResponseBody_Params.decode = function(decoder) {
    var packed;
    var val = new URLLoaderClient_OnStartLoadingResponseBody_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.body = decoder.decodeStruct(codec.Handle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  URLLoaderClient_OnStartLoadingResponseBody_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(URLLoaderClient_OnStartLoadingResponseBody_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.body);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function URLLoaderClient_OnComplete_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  URLLoaderClient_OnComplete_Params.prototype.initDefaults_ = function() {
    this.completion_status = null;
  };
  URLLoaderClient_OnComplete_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  URLLoaderClient_OnComplete_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, URLLoaderClient_OnComplete_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate URLLoaderClient_OnComplete_Params.completion_status
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, URLLoaderStatus, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  URLLoaderClient_OnComplete_Params.encodedSize = codec.kStructHeaderSize + 8;

  URLLoaderClient_OnComplete_Params.decode = function(decoder) {
    var packed;
    var val = new URLLoaderClient_OnComplete_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.completion_status = decoder.decodeStructPointer(URLLoaderStatus);
    return val;
  };

  URLLoaderClient_OnComplete_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(URLLoaderClient_OnComplete_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(URLLoaderStatus, val.completion_status);
  };
  var kURLLoader_FollowRedirect_Name = 0;
  var kURLLoader_Cancel_Name = 1;

  function URLLoaderProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  URLLoaderProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  URLLoaderProxy.prototype.followRedirect = function() {
    var params = new URLLoader_FollowRedirect_Params();
    var builder = new codec.MessageBuilder(
        kURLLoader_FollowRedirect_Name,
        codec.align(URLLoader_FollowRedirect_Params.encodedSize));
    builder.encodeStruct(URLLoader_FollowRedirect_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  URLLoaderProxy.prototype.cancel = function() {
    var params = new URLLoader_Cancel_Params();
    var builder = new codec.MessageBuilder(
        kURLLoader_Cancel_Name,
        codec.align(URLLoader_Cancel_Params.encodedSize));
    builder.encodeStruct(URLLoader_Cancel_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function URLLoaderStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  URLLoaderStub.prototype = Object.create(bindings.StubBase.prototype);
  URLLoaderStub.prototype.followRedirect = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.followRedirect && bindings.StubBindings(this).delegate.followRedirect();
  }
  URLLoaderStub.prototype.cancel = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.cancel && bindings.StubBindings(this).delegate.cancel();
  }

  URLLoaderStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kURLLoader_FollowRedirect_Name:
      var params = reader.decodeStruct(URLLoader_FollowRedirect_Params);
      this.followRedirect();
      return true;
    case kURLLoader_Cancel_Name:
      var params = reader.decodeStruct(URLLoader_Cancel_Params);
      this.cancel();
      return true;
    default:
      return false;
    }
  };

  URLLoaderStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateURLLoaderRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kURLLoader_FollowRedirect_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = URLLoader_FollowRedirect_Params;
      break;
      case kURLLoader_Cancel_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = URLLoader_Cancel_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateURLLoaderResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var URLLoader = {
    name: 'content::mojom::URLLoader',
    proxyClass: URLLoaderProxy,
    stubClass: URLLoaderStub,
    validateRequest: validateURLLoaderRequest,
    validateResponse: null,
  };
  URLLoaderStub.prototype.validator = validateURLLoaderRequest;
  URLLoaderProxy.prototype.validator = null;
  var kURLLoaderClient_OnReceiveResponse_Name = 0;
  var kURLLoaderClient_OnStartLoadingResponseBody_Name = 1;
  var kURLLoaderClient_OnComplete_Name = 2;

  function URLLoaderClientProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  URLLoaderClientProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  URLLoaderClientProxy.prototype.onReceiveResponse = function(head) {
    var params = new URLLoaderClient_OnReceiveResponse_Params();
    params.head = head;
    var builder = new codec.MessageBuilder(
        kURLLoaderClient_OnReceiveResponse_Name,
        codec.align(URLLoaderClient_OnReceiveResponse_Params.encodedSize));
    builder.encodeStruct(URLLoaderClient_OnReceiveResponse_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  URLLoaderClientProxy.prototype.onStartLoadingResponseBody = function(body) {
    var params = new URLLoaderClient_OnStartLoadingResponseBody_Params();
    params.body = body;
    var builder = new codec.MessageBuilder(
        kURLLoaderClient_OnStartLoadingResponseBody_Name,
        codec.align(URLLoaderClient_OnStartLoadingResponseBody_Params.encodedSize));
    builder.encodeStruct(URLLoaderClient_OnStartLoadingResponseBody_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  URLLoaderClientProxy.prototype.onComplete = function(completion_status) {
    var params = new URLLoaderClient_OnComplete_Params();
    params.completion_status = completion_status;
    var builder = new codec.MessageBuilder(
        kURLLoaderClient_OnComplete_Name,
        codec.align(URLLoaderClient_OnComplete_Params.encodedSize));
    builder.encodeStruct(URLLoaderClient_OnComplete_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function URLLoaderClientStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  URLLoaderClientStub.prototype = Object.create(bindings.StubBase.prototype);
  URLLoaderClientStub.prototype.onReceiveResponse = function(head) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onReceiveResponse && bindings.StubBindings(this).delegate.onReceiveResponse(head);
  }
  URLLoaderClientStub.prototype.onStartLoadingResponseBody = function(body) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onStartLoadingResponseBody && bindings.StubBindings(this).delegate.onStartLoadingResponseBody(body);
  }
  URLLoaderClientStub.prototype.onComplete = function(completion_status) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onComplete && bindings.StubBindings(this).delegate.onComplete(completion_status);
  }

  URLLoaderClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kURLLoaderClient_OnReceiveResponse_Name:
      var params = reader.decodeStruct(URLLoaderClient_OnReceiveResponse_Params);
      this.onReceiveResponse(params.head);
      return true;
    case kURLLoaderClient_OnStartLoadingResponseBody_Name:
      var params = reader.decodeStruct(URLLoaderClient_OnStartLoadingResponseBody_Params);
      this.onStartLoadingResponseBody(params.body);
      return true;
    case kURLLoaderClient_OnComplete_Name:
      var params = reader.decodeStruct(URLLoaderClient_OnComplete_Params);
      this.onComplete(params.completion_status);
      return true;
    default:
      return false;
    }
  };

  URLLoaderClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateURLLoaderClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kURLLoaderClient_OnReceiveResponse_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = URLLoaderClient_OnReceiveResponse_Params;
      break;
      case kURLLoaderClient_OnStartLoadingResponseBody_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = URLLoaderClient_OnStartLoadingResponseBody_Params;
      break;
      case kURLLoaderClient_OnComplete_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = URLLoaderClient_OnComplete_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateURLLoaderClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var URLLoaderClient = {
    name: 'content::mojom::URLLoaderClient',
    proxyClass: URLLoaderClientProxy,
    stubClass: URLLoaderClientStub,
    validateRequest: validateURLLoaderClientRequest,
    validateResponse: null,
  };
  URLLoaderClientStub.prototype.validator = validateURLLoaderClientRequest;
  URLLoaderClientProxy.prototype.validator = null;

  var exports = {};
  exports.URLRequest = URLRequest;
  exports.URLResponseHead = URLResponseHead;
  exports.URLLoaderStatus = URLLoaderStatus;
  exports.URLLoader = URLLoader;
  exports.URLLoaderClient = URLLoaderClient;

  return exports;
});
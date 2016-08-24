// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("components/web_cache/public/interfaces/web_cache.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {

  function WebCache_SetCacheCapacities_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebCache_SetCacheCapacities_Params.prototype.initDefaults_ = function() {
    this.min_dead_capacity = 0;
    this.max_dead_capacity = 0;
    this.capacity = 0;
  };
  WebCache_SetCacheCapacities_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WebCache_SetCacheCapacities_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WebCache_SetCacheCapacities_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;




    return validator.validationError.NONE;
  };

  WebCache_SetCacheCapacities_Params.encodedSize = codec.kStructHeaderSize + 24;

  WebCache_SetCacheCapacities_Params.decode = function(decoder) {
    var packed;
    var val = new WebCache_SetCacheCapacities_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.min_dead_capacity = decoder.decodeStruct(codec.Uint64);
    val.max_dead_capacity = decoder.decodeStruct(codec.Uint64);
    val.capacity = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  WebCache_SetCacheCapacities_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebCache_SetCacheCapacities_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.min_dead_capacity);
    encoder.encodeStruct(codec.Uint64, val.max_dead_capacity);
    encoder.encodeStruct(codec.Uint64, val.capacity);
  };
  function WebCache_ClearCache_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebCache_ClearCache_Params.prototype.initDefaults_ = function() {
    this.on_navigation = false;
  };
  WebCache_ClearCache_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WebCache_ClearCache_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WebCache_ClearCache_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  WebCache_ClearCache_Params.encodedSize = codec.kStructHeaderSize + 8;

  WebCache_ClearCache_Params.decode = function(decoder) {
    var packed;
    var val = new WebCache_ClearCache_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.on_navigation = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WebCache_ClearCache_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebCache_ClearCache_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint8, val.on_navigation);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kWebCache_SetCacheCapacities_Name = 0;
  var kWebCache_ClearCache_Name = 1;

  function WebCacheProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  WebCacheProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  WebCacheProxy.prototype.setCacheCapacities = function(min_dead_capacity, max_dead_capacity, capacity) {
    var params = new WebCache_SetCacheCapacities_Params();
    params.min_dead_capacity = min_dead_capacity;
    params.max_dead_capacity = max_dead_capacity;
    params.capacity = capacity;
    var builder = new codec.MessageBuilder(
        kWebCache_SetCacheCapacities_Name,
        codec.align(WebCache_SetCacheCapacities_Params.encodedSize));
    builder.encodeStruct(WebCache_SetCacheCapacities_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WebCacheProxy.prototype.clearCache = function(on_navigation) {
    var params = new WebCache_ClearCache_Params();
    params.on_navigation = on_navigation;
    var builder = new codec.MessageBuilder(
        kWebCache_ClearCache_Name,
        codec.align(WebCache_ClearCache_Params.encodedSize));
    builder.encodeStruct(WebCache_ClearCache_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function WebCacheStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  WebCacheStub.prototype = Object.create(bindings.StubBase.prototype);
  WebCacheStub.prototype.setCacheCapacities = function(min_dead_capacity, max_dead_capacity, capacity) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.setCacheCapacities && bindings.StubBindings(this).delegate.setCacheCapacities(min_dead_capacity, max_dead_capacity, capacity);
  }
  WebCacheStub.prototype.clearCache = function(on_navigation) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.clearCache && bindings.StubBindings(this).delegate.clearCache(on_navigation);
  }

  WebCacheStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kWebCache_SetCacheCapacities_Name:
      var params = reader.decodeStruct(WebCache_SetCacheCapacities_Params);
      this.setCacheCapacities(params.min_dead_capacity, params.max_dead_capacity, params.capacity);
      return true;
    case kWebCache_ClearCache_Name:
      var params = reader.decodeStruct(WebCache_ClearCache_Params);
      this.clearCache(params.on_navigation);
      return true;
    default:
      return false;
    }
  };

  WebCacheStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateWebCacheRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kWebCache_SetCacheCapacities_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WebCache_SetCacheCapacities_Params;
      break;
      case kWebCache_ClearCache_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WebCache_ClearCache_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateWebCacheResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var WebCache = {
    name: 'web_cache::mojom::WebCache',
    proxyClass: WebCacheProxy,
    stubClass: WebCacheStub,
    validateRequest: validateWebCacheRequest,
    validateResponse: null,
  };
  WebCacheStub.prototype.validator = validateWebCacheRequest;
  WebCacheProxy.prototype.validator = null;

  var exports = {};
  exports.WebCache = WebCache;

  return exports;
});
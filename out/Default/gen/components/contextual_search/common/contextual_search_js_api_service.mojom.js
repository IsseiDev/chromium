// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("components/contextual_search/common/contextual_search_js_api_service.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {

  function ContextualSearchJsApiService_HandleSetCaption_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ContextualSearchJsApiService_HandleSetCaption_Params.prototype.initDefaults_ = function() {
    this.message = null;
    this.does_answer = false;
  };
  ContextualSearchJsApiService_HandleSetCaption_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ContextualSearchJsApiService_HandleSetCaption_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ContextualSearchJsApiService_HandleSetCaption_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ContextualSearchJsApiService_HandleSetCaption_Params.message
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  ContextualSearchJsApiService_HandleSetCaption_Params.encodedSize = codec.kStructHeaderSize + 16;

  ContextualSearchJsApiService_HandleSetCaption_Params.decode = function(decoder) {
    var packed;
    var val = new ContextualSearchJsApiService_HandleSetCaption_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.message = decoder.decodeStruct(codec.String);
    val.does_answer = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ContextualSearchJsApiService_HandleSetCaption_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ContextualSearchJsApiService_HandleSetCaption_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.message);
    encoder.encodeStruct(codec.Uint8, val.does_answer);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kContextualSearchJsApiService_HandleSetCaption_Name = 0;

  function ContextualSearchJsApiServiceProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  ContextualSearchJsApiServiceProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  ContextualSearchJsApiServiceProxy.prototype.handleSetCaption = function(message, does_answer) {
    var params = new ContextualSearchJsApiService_HandleSetCaption_Params();
    params.message = message;
    params.does_answer = does_answer;
    var builder = new codec.MessageBuilder(
        kContextualSearchJsApiService_HandleSetCaption_Name,
        codec.align(ContextualSearchJsApiService_HandleSetCaption_Params.encodedSize));
    builder.encodeStruct(ContextualSearchJsApiService_HandleSetCaption_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ContextualSearchJsApiServiceStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  ContextualSearchJsApiServiceStub.prototype = Object.create(bindings.StubBase.prototype);
  ContextualSearchJsApiServiceStub.prototype.handleSetCaption = function(message, does_answer) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.handleSetCaption && bindings.StubBindings(this).delegate.handleSetCaption(message, does_answer);
  }

  ContextualSearchJsApiServiceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kContextualSearchJsApiService_HandleSetCaption_Name:
      var params = reader.decodeStruct(ContextualSearchJsApiService_HandleSetCaption_Params);
      this.handleSetCaption(params.message, params.does_answer);
      return true;
    default:
      return false;
    }
  };

  ContextualSearchJsApiServiceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateContextualSearchJsApiServiceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kContextualSearchJsApiService_HandleSetCaption_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ContextualSearchJsApiService_HandleSetCaption_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateContextualSearchJsApiServiceResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ContextualSearchJsApiService = {
    name: 'contextual_search::mojom::ContextualSearchJsApiService',
    proxyClass: ContextualSearchJsApiServiceProxy,
    stubClass: ContextualSearchJsApiServiceStub,
    validateRequest: validateContextualSearchJsApiServiceRequest,
    validateResponse: null,
  };
  ContextualSearchJsApiServiceStub.prototype.validator = validateContextualSearchJsApiServiceRequest;
  ContextualSearchJsApiServiceProxy.prototype.validator = null;

  var exports = {};
  exports.ContextualSearchJsApiService = ContextualSearchJsApiService;

  return exports;
});
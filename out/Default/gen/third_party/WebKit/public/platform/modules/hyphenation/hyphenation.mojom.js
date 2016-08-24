// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("third_party/WebKit/public/platform/modules/hyphenation/hyphenation.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {

  function Hyphenation_OpenDictionary_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Hyphenation_OpenDictionary_Params.prototype.initDefaults_ = function() {
    this.locale = null;
  };
  Hyphenation_OpenDictionary_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Hyphenation_OpenDictionary_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Hyphenation_OpenDictionary_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Hyphenation_OpenDictionary_Params.locale
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Hyphenation_OpenDictionary_Params.encodedSize = codec.kStructHeaderSize + 8;

  Hyphenation_OpenDictionary_Params.decode = function(decoder) {
    var packed;
    var val = new Hyphenation_OpenDictionary_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.locale = decoder.decodeStruct(codec.String);
    return val;
  };

  Hyphenation_OpenDictionary_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Hyphenation_OpenDictionary_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.locale);
  };
  function Hyphenation_OpenDictionary_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Hyphenation_OpenDictionary_ResponseParams.prototype.initDefaults_ = function() {
    this.hyphenation_dictionary_handle = null;
  };
  Hyphenation_OpenDictionary_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Hyphenation_OpenDictionary_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Hyphenation_OpenDictionary_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Hyphenation_OpenDictionary_ResponseParams.hyphenation_dictionary_handle
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Hyphenation_OpenDictionary_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Hyphenation_OpenDictionary_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Hyphenation_OpenDictionary_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.hyphenation_dictionary_handle = decoder.decodeStruct(codec.NullableHandle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Hyphenation_OpenDictionary_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Hyphenation_OpenDictionary_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.NullableHandle, val.hyphenation_dictionary_handle);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kHyphenation_OpenDictionary_Name = 0;

  function HyphenationProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  HyphenationProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  HyphenationProxy.prototype.openDictionary = function(locale) {
    var params = new Hyphenation_OpenDictionary_Params();
    params.locale = locale;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kHyphenation_OpenDictionary_Name,
          codec.align(Hyphenation_OpenDictionary_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Hyphenation_OpenDictionary_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Hyphenation_OpenDictionary_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function HyphenationStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  HyphenationStub.prototype = Object.create(bindings.StubBase.prototype);
  HyphenationStub.prototype.openDictionary = function(locale) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.openDictionary && bindings.StubBindings(this).delegate.openDictionary(locale);
  }

  HyphenationStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  HyphenationStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kHyphenation_OpenDictionary_Name:
      var params = reader.decodeStruct(Hyphenation_OpenDictionary_Params);
      return this.openDictionary(params.locale).then(function(response) {
        var responseParams =
            new Hyphenation_OpenDictionary_ResponseParams();
        responseParams.hyphenation_dictionary_handle = response.hyphenation_dictionary_handle;
        var builder = new codec.MessageWithRequestIDBuilder(
            kHyphenation_OpenDictionary_Name,
            codec.align(Hyphenation_OpenDictionary_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Hyphenation_OpenDictionary_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateHyphenationRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kHyphenation_OpenDictionary_Name:
        if (message.expectsResponse())
          paramsClass = Hyphenation_OpenDictionary_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateHyphenationResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kHyphenation_OpenDictionary_Name:
        if (message.isResponse())
          paramsClass = Hyphenation_OpenDictionary_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var Hyphenation = {
    name: 'blink::mojom::Hyphenation',
    proxyClass: HyphenationProxy,
    stubClass: HyphenationStub,
    validateRequest: validateHyphenationRequest,
    validateResponse: validateHyphenationResponse,
  };
  HyphenationStub.prototype.validator = validateHyphenationRequest;
  HyphenationProxy.prototype.validator = validateHyphenationResponse;

  var exports = {};
  exports.Hyphenation = Hyphenation;

  return exports;
});
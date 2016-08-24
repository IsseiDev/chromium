// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("components/safe_json/public/interfaces/safe_json.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {

  function ListValue(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ListValue.prototype.initDefaults_ = function() {
  };
  ListValue.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ListValue.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ListValue.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ListValue.encodedSize = codec.kStructHeaderSize + 0;

  ListValue.decode = function(decoder) {
    var packed;
    var val = new ListValue();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  ListValue.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ListValue.encodedSize);
    encoder.writeUint32(0);
  };
  function SafeJsonParser_Parse_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SafeJsonParser_Parse_Params.prototype.initDefaults_ = function() {
    this.json = null;
  };
  SafeJsonParser_Parse_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  SafeJsonParser_Parse_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, SafeJsonParser_Parse_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate SafeJsonParser_Parse_Params.json
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SafeJsonParser_Parse_Params.encodedSize = codec.kStructHeaderSize + 8;

  SafeJsonParser_Parse_Params.decode = function(decoder) {
    var packed;
    var val = new SafeJsonParser_Parse_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.json = decoder.decodeStruct(codec.String);
    return val;
  };

  SafeJsonParser_Parse_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SafeJsonParser_Parse_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.json);
  };
  function SafeJsonParser_Parse_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SafeJsonParser_Parse_ResponseParams.prototype.initDefaults_ = function() {
    this.result = null;
    this.error = null;
  };
  SafeJsonParser_Parse_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  SafeJsonParser_Parse_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, SafeJsonParser_Parse_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate SafeJsonParser_Parse_ResponseParams.result
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, ListValue, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate SafeJsonParser_Parse_ResponseParams.error
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SafeJsonParser_Parse_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  SafeJsonParser_Parse_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new SafeJsonParser_Parse_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStructPointer(ListValue);
    val.error = decoder.decodeStruct(codec.NullableString);
    return val;
  };

  SafeJsonParser_Parse_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SafeJsonParser_Parse_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(ListValue, val.result);
    encoder.encodeStruct(codec.NullableString, val.error);
  };
  var kSafeJsonParser_Parse_Name = 0;

  function SafeJsonParserProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  SafeJsonParserProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  SafeJsonParserProxy.prototype.parse = function(json) {
    var params = new SafeJsonParser_Parse_Params();
    params.json = json;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kSafeJsonParser_Parse_Name,
          codec.align(SafeJsonParser_Parse_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(SafeJsonParser_Parse_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(SafeJsonParser_Parse_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function SafeJsonParserStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  SafeJsonParserStub.prototype = Object.create(bindings.StubBase.prototype);
  SafeJsonParserStub.prototype.parse = function(json) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.parse && bindings.StubBindings(this).delegate.parse(json);
  }

  SafeJsonParserStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  SafeJsonParserStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kSafeJsonParser_Parse_Name:
      var params = reader.decodeStruct(SafeJsonParser_Parse_Params);
      return this.parse(params.json).then(function(response) {
        var responseParams =
            new SafeJsonParser_Parse_ResponseParams();
        responseParams.result = response.result;
        responseParams.error = response.error;
        var builder = new codec.MessageWithRequestIDBuilder(
            kSafeJsonParser_Parse_Name,
            codec.align(SafeJsonParser_Parse_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(SafeJsonParser_Parse_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateSafeJsonParserRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kSafeJsonParser_Parse_Name:
        if (message.expectsResponse())
          paramsClass = SafeJsonParser_Parse_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateSafeJsonParserResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kSafeJsonParser_Parse_Name:
        if (message.isResponse())
          paramsClass = SafeJsonParser_Parse_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var SafeJsonParser = {
    name: 'safe_json::mojom::SafeJsonParser',
    proxyClass: SafeJsonParserProxy,
    stubClass: SafeJsonParserStub,
    validateRequest: validateSafeJsonParserRequest,
    validateResponse: validateSafeJsonParserResponse,
  };
  SafeJsonParserStub.prototype.validator = validateSafeJsonParserRequest;
  SafeJsonParserProxy.prototype.validator = validateSafeJsonParserResponse;

  var exports = {};
  exports.ListValue = ListValue;
  exports.SafeJsonParser = SafeJsonParser;

  return exports;
});
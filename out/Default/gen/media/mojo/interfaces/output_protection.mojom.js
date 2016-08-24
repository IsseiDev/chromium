// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("media/mojo/interfaces/output_protection.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {

  function OutputProtection_QueryStatus_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  OutputProtection_QueryStatus_Params.prototype.initDefaults_ = function() {
  };
  OutputProtection_QueryStatus_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  OutputProtection_QueryStatus_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, OutputProtection_QueryStatus_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  OutputProtection_QueryStatus_Params.encodedSize = codec.kStructHeaderSize + 0;

  OutputProtection_QueryStatus_Params.decode = function(decoder) {
    var packed;
    var val = new OutputProtection_QueryStatus_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  OutputProtection_QueryStatus_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(OutputProtection_QueryStatus_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function OutputProtection_QueryStatus_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  OutputProtection_QueryStatus_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
    this.link_mask = 0;
    this.protection_mask = 0;
  };
  OutputProtection_QueryStatus_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  OutputProtection_QueryStatus_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, OutputProtection_QueryStatus_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;




    return validator.validationError.NONE;
  };

  OutputProtection_QueryStatus_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  OutputProtection_QueryStatus_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new OutputProtection_QueryStatus_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.success = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.link_mask = decoder.decodeStruct(codec.Uint32);
    val.protection_mask = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  OutputProtection_QueryStatus_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(OutputProtection_QueryStatus_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint8, val.success);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint32, val.link_mask);
    encoder.encodeStruct(codec.Uint32, val.protection_mask);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function OutputProtection_EnableProtection_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  OutputProtection_EnableProtection_Params.prototype.initDefaults_ = function() {
    this.desired_protection_mask = 0;
  };
  OutputProtection_EnableProtection_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  OutputProtection_EnableProtection_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, OutputProtection_EnableProtection_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  OutputProtection_EnableProtection_Params.encodedSize = codec.kStructHeaderSize + 8;

  OutputProtection_EnableProtection_Params.decode = function(decoder) {
    var packed;
    var val = new OutputProtection_EnableProtection_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.desired_protection_mask = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  OutputProtection_EnableProtection_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(OutputProtection_EnableProtection_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.desired_protection_mask);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function OutputProtection_EnableProtection_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  OutputProtection_EnableProtection_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  OutputProtection_EnableProtection_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  OutputProtection_EnableProtection_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, OutputProtection_EnableProtection_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  OutputProtection_EnableProtection_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  OutputProtection_EnableProtection_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new OutputProtection_EnableProtection_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.success = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  OutputProtection_EnableProtection_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(OutputProtection_EnableProtection_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint8, val.success);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kOutputProtection_QueryStatus_Name = 0;
  var kOutputProtection_EnableProtection_Name = 1;

  function OutputProtectionProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  OutputProtectionProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  OutputProtectionProxy.prototype.queryStatus = function() {
    var params = new OutputProtection_QueryStatus_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kOutputProtection_QueryStatus_Name,
          codec.align(OutputProtection_QueryStatus_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(OutputProtection_QueryStatus_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(OutputProtection_QueryStatus_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  OutputProtectionProxy.prototype.enableProtection = function(desired_protection_mask) {
    var params = new OutputProtection_EnableProtection_Params();
    params.desired_protection_mask = desired_protection_mask;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kOutputProtection_EnableProtection_Name,
          codec.align(OutputProtection_EnableProtection_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(OutputProtection_EnableProtection_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(OutputProtection_EnableProtection_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function OutputProtectionStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  OutputProtectionStub.prototype = Object.create(bindings.StubBase.prototype);
  OutputProtectionStub.prototype.queryStatus = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.queryStatus && bindings.StubBindings(this).delegate.queryStatus();
  }
  OutputProtectionStub.prototype.enableProtection = function(desired_protection_mask) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.enableProtection && bindings.StubBindings(this).delegate.enableProtection(desired_protection_mask);
  }

  OutputProtectionStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  OutputProtectionStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kOutputProtection_QueryStatus_Name:
      var params = reader.decodeStruct(OutputProtection_QueryStatus_Params);
      return this.queryStatus().then(function(response) {
        var responseParams =
            new OutputProtection_QueryStatus_ResponseParams();
        responseParams.success = response.success;
        responseParams.link_mask = response.link_mask;
        responseParams.protection_mask = response.protection_mask;
        var builder = new codec.MessageWithRequestIDBuilder(
            kOutputProtection_QueryStatus_Name,
            codec.align(OutputProtection_QueryStatus_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(OutputProtection_QueryStatus_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kOutputProtection_EnableProtection_Name:
      var params = reader.decodeStruct(OutputProtection_EnableProtection_Params);
      return this.enableProtection(params.desired_protection_mask).then(function(response) {
        var responseParams =
            new OutputProtection_EnableProtection_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageWithRequestIDBuilder(
            kOutputProtection_EnableProtection_Name,
            codec.align(OutputProtection_EnableProtection_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(OutputProtection_EnableProtection_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateOutputProtectionRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kOutputProtection_QueryStatus_Name:
        if (message.expectsResponse())
          paramsClass = OutputProtection_QueryStatus_Params;
      break;
      case kOutputProtection_EnableProtection_Name:
        if (message.expectsResponse())
          paramsClass = OutputProtection_EnableProtection_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateOutputProtectionResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kOutputProtection_QueryStatus_Name:
        if (message.isResponse())
          paramsClass = OutputProtection_QueryStatus_ResponseParams;
        break;
      case kOutputProtection_EnableProtection_Name:
        if (message.isResponse())
          paramsClass = OutputProtection_EnableProtection_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var OutputProtection = {
    name: 'media::mojom::OutputProtection',
    proxyClass: OutputProtectionProxy,
    stubClass: OutputProtectionStub,
    validateRequest: validateOutputProtectionRequest,
    validateResponse: validateOutputProtectionResponse,
  };
  OutputProtection.ProtectionType = {};
  OutputProtection.ProtectionType.NONE = 0;
  OutputProtection.ProtectionType.HDCP = 1;
  OutputProtection.LinkType = {};
  OutputProtection.LinkType.NONE = 0;
  OutputProtection.LinkType.UNKNOWN = 1;
  OutputProtection.LinkType.INTERNAL = 2;
  OutputProtection.LinkType.VGA = 4;
  OutputProtection.LinkType.HDMI = 8;
  OutputProtection.LinkType.DVI = 16;
  OutputProtection.LinkType.DISPLAYPORT = 32;
  OutputProtection.LinkType.NETWORK = 64;
  OutputProtectionStub.prototype.validator = validateOutputProtectionRequest;
  OutputProtectionProxy.prototype.validator = validateOutputProtectionResponse;

  var exports = {};
  exports.OutputProtection = OutputProtection;

  return exports;
});
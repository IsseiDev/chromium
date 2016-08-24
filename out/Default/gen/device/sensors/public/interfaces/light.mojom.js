// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("device/sensors/public/interfaces/light.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {

  function LightSensor_StartPolling_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LightSensor_StartPolling_Params.prototype.initDefaults_ = function() {
  };
  LightSensor_StartPolling_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  LightSensor_StartPolling_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, LightSensor_StartPolling_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LightSensor_StartPolling_Params.encodedSize = codec.kStructHeaderSize + 0;

  LightSensor_StartPolling_Params.decode = function(decoder) {
    var packed;
    var val = new LightSensor_StartPolling_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  LightSensor_StartPolling_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LightSensor_StartPolling_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function LightSensor_StartPolling_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LightSensor_StartPolling_ResponseParams.prototype.initDefaults_ = function() {
    this.memory_handle = null;
  };
  LightSensor_StartPolling_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  LightSensor_StartPolling_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, LightSensor_StartPolling_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate LightSensor_StartPolling_ResponseParams.memory_handle
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LightSensor_StartPolling_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  LightSensor_StartPolling_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new LightSensor_StartPolling_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.memory_handle = decoder.decodeStruct(codec.Handle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  LightSensor_StartPolling_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LightSensor_StartPolling_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.memory_handle);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function LightSensor_StopPolling_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LightSensor_StopPolling_Params.prototype.initDefaults_ = function() {
  };
  LightSensor_StopPolling_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  LightSensor_StopPolling_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, LightSensor_StopPolling_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LightSensor_StopPolling_Params.encodedSize = codec.kStructHeaderSize + 0;

  LightSensor_StopPolling_Params.decode = function(decoder) {
    var packed;
    var val = new LightSensor_StopPolling_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  LightSensor_StopPolling_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LightSensor_StopPolling_Params.encodedSize);
    encoder.writeUint32(0);
  };
  var kLightSensor_StartPolling_Name = 0;
  var kLightSensor_StopPolling_Name = 1;

  function LightSensorProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  LightSensorProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  LightSensorProxy.prototype.startPolling = function() {
    var params = new LightSensor_StartPolling_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kLightSensor_StartPolling_Name,
          codec.align(LightSensor_StartPolling_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(LightSensor_StartPolling_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(LightSensor_StartPolling_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  LightSensorProxy.prototype.stopPolling = function() {
    var params = new LightSensor_StopPolling_Params();
    var builder = new codec.MessageBuilder(
        kLightSensor_StopPolling_Name,
        codec.align(LightSensor_StopPolling_Params.encodedSize));
    builder.encodeStruct(LightSensor_StopPolling_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function LightSensorStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  LightSensorStub.prototype = Object.create(bindings.StubBase.prototype);
  LightSensorStub.prototype.startPolling = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.startPolling && bindings.StubBindings(this).delegate.startPolling();
  }
  LightSensorStub.prototype.stopPolling = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.stopPolling && bindings.StubBindings(this).delegate.stopPolling();
  }

  LightSensorStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kLightSensor_StopPolling_Name:
      var params = reader.decodeStruct(LightSensor_StopPolling_Params);
      this.stopPolling();
      return true;
    default:
      return false;
    }
  };

  LightSensorStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kLightSensor_StartPolling_Name:
      var params = reader.decodeStruct(LightSensor_StartPolling_Params);
      return this.startPolling().then(function(response) {
        var responseParams =
            new LightSensor_StartPolling_ResponseParams();
        responseParams.memory_handle = response.memory_handle;
        var builder = new codec.MessageWithRequestIDBuilder(
            kLightSensor_StartPolling_Name,
            codec.align(LightSensor_StartPolling_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(LightSensor_StartPolling_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateLightSensorRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kLightSensor_StartPolling_Name:
        if (message.expectsResponse())
          paramsClass = LightSensor_StartPolling_Params;
      break;
      case kLightSensor_StopPolling_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = LightSensor_StopPolling_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateLightSensorResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kLightSensor_StartPolling_Name:
        if (message.isResponse())
          paramsClass = LightSensor_StartPolling_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var LightSensor = {
    name: 'device::mojom::LightSensor',
    proxyClass: LightSensorProxy,
    stubClass: LightSensorStub,
    validateRequest: validateLightSensorRequest,
    validateResponse: validateLightSensorResponse,
  };
  LightSensorStub.prototype.validator = validateLightSensorRequest;
  LightSensorProxy.prototype.validator = validateLightSensorResponse;

  var exports = {};
  exports.LightSensor = LightSensor;

  return exports;
});
// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("chrome/browser/ui/webui/usb_internals/usb_internals.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "url/mojo/origin.mojom",
    "url/mojo/url.mojom",
], function(bindings, codec, connection, core, validator, origin$, url$) {

  function TestDeviceInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TestDeviceInfo.prototype.initDefaults_ = function() {
    this.guid = null;
    this.name = null;
    this.serial_number = null;
    this.landing_page = null;
    this.allowed_origin = null;
  };
  TestDeviceInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  TestDeviceInfo.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, TestDeviceInfo.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate TestDeviceInfo.guid
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate TestDeviceInfo.name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate TestDeviceInfo.serial_number
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate TestDeviceInfo.landing_page
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate TestDeviceInfo.allowed_origin
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, origin$.Origin, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  TestDeviceInfo.encodedSize = codec.kStructHeaderSize + 40;

  TestDeviceInfo.decode = function(decoder) {
    var packed;
    var val = new TestDeviceInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.guid = decoder.decodeStruct(codec.String);
    val.name = decoder.decodeStruct(codec.String);
    val.serial_number = decoder.decodeStruct(codec.String);
    val.landing_page = decoder.decodeStructPointer(url$.Url);
    val.allowed_origin = decoder.decodeStructPointer(origin$.Origin);
    return val;
  };

  TestDeviceInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TestDeviceInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.guid);
    encoder.encodeStruct(codec.String, val.name);
    encoder.encodeStruct(codec.String, val.serial_number);
    encoder.encodeStructPointer(url$.Url, val.landing_page);
    encoder.encodeStructPointer(origin$.Origin, val.allowed_origin);
  };
  function UsbInternalsPageHandler_AddDeviceForTesting_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UsbInternalsPageHandler_AddDeviceForTesting_Params.prototype.initDefaults_ = function() {
    this.name = null;
    this.serial_number = null;
    this.landing_page = null;
    this.allowed_origin = null;
  };
  UsbInternalsPageHandler_AddDeviceForTesting_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  UsbInternalsPageHandler_AddDeviceForTesting_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, UsbInternalsPageHandler_AddDeviceForTesting_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate UsbInternalsPageHandler_AddDeviceForTesting_Params.name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate UsbInternalsPageHandler_AddDeviceForTesting_Params.serial_number
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate UsbInternalsPageHandler_AddDeviceForTesting_Params.landing_page
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate UsbInternalsPageHandler_AddDeviceForTesting_Params.allowed_origin
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 24, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  UsbInternalsPageHandler_AddDeviceForTesting_Params.encodedSize = codec.kStructHeaderSize + 32;

  UsbInternalsPageHandler_AddDeviceForTesting_Params.decode = function(decoder) {
    var packed;
    var val = new UsbInternalsPageHandler_AddDeviceForTesting_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.name = decoder.decodeStruct(codec.String);
    val.serial_number = decoder.decodeStruct(codec.String);
    val.landing_page = decoder.decodeStruct(codec.String);
    val.allowed_origin = decoder.decodeStruct(codec.String);
    return val;
  };

  UsbInternalsPageHandler_AddDeviceForTesting_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UsbInternalsPageHandler_AddDeviceForTesting_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.name);
    encoder.encodeStruct(codec.String, val.serial_number);
    encoder.encodeStruct(codec.String, val.landing_page);
    encoder.encodeStruct(codec.String, val.allowed_origin);
  };
  function UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
    this.message = null;
  };
  UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams.message
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams();
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
    val.message = decoder.decodeStruct(codec.String);
    return val;
  };

  UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint8, val.success);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.message);
  };
  function UsbInternalsPageHandler_RemoveDeviceForTesting_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UsbInternalsPageHandler_RemoveDeviceForTesting_Params.prototype.initDefaults_ = function() {
    this.guid = null;
  };
  UsbInternalsPageHandler_RemoveDeviceForTesting_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  UsbInternalsPageHandler_RemoveDeviceForTesting_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, UsbInternalsPageHandler_RemoveDeviceForTesting_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate UsbInternalsPageHandler_RemoveDeviceForTesting_Params.guid
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  UsbInternalsPageHandler_RemoveDeviceForTesting_Params.encodedSize = codec.kStructHeaderSize + 8;

  UsbInternalsPageHandler_RemoveDeviceForTesting_Params.decode = function(decoder) {
    var packed;
    var val = new UsbInternalsPageHandler_RemoveDeviceForTesting_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.guid = decoder.decodeStruct(codec.String);
    return val;
  };

  UsbInternalsPageHandler_RemoveDeviceForTesting_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UsbInternalsPageHandler_RemoveDeviceForTesting_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.guid);
  };
  function UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams.prototype.initDefaults_ = function() {
  };
  UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  function UsbInternalsPageHandler_GetTestDevices_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UsbInternalsPageHandler_GetTestDevices_Params.prototype.initDefaults_ = function() {
  };
  UsbInternalsPageHandler_GetTestDevices_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  UsbInternalsPageHandler_GetTestDevices_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, UsbInternalsPageHandler_GetTestDevices_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  UsbInternalsPageHandler_GetTestDevices_Params.encodedSize = codec.kStructHeaderSize + 0;

  UsbInternalsPageHandler_GetTestDevices_Params.decode = function(decoder) {
    var packed;
    var val = new UsbInternalsPageHandler_GetTestDevices_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  UsbInternalsPageHandler_GetTestDevices_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UsbInternalsPageHandler_GetTestDevices_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function UsbInternalsPageHandler_GetTestDevices_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UsbInternalsPageHandler_GetTestDevices_ResponseParams.prototype.initDefaults_ = function() {
    this.devices = null;
  };
  UsbInternalsPageHandler_GetTestDevices_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  UsbInternalsPageHandler_GetTestDevices_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, UsbInternalsPageHandler_GetTestDevices_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate UsbInternalsPageHandler_GetTestDevices_ResponseParams.devices
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(TestDeviceInfo), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  UsbInternalsPageHandler_GetTestDevices_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  UsbInternalsPageHandler_GetTestDevices_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new UsbInternalsPageHandler_GetTestDevices_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.devices = decoder.decodeArrayPointer(new codec.PointerTo(TestDeviceInfo));
    return val;
  };

  UsbInternalsPageHandler_GetTestDevices_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UsbInternalsPageHandler_GetTestDevices_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(TestDeviceInfo), val.devices);
  };
  var kUsbInternalsPageHandler_AddDeviceForTesting_Name = 0;
  var kUsbInternalsPageHandler_RemoveDeviceForTesting_Name = 1;
  var kUsbInternalsPageHandler_GetTestDevices_Name = 2;

  function UsbInternalsPageHandlerProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  UsbInternalsPageHandlerProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  UsbInternalsPageHandlerProxy.prototype.addDeviceForTesting = function(name, serial_number, landing_page, allowed_origin) {
    var params = new UsbInternalsPageHandler_AddDeviceForTesting_Params();
    params.name = name;
    params.serial_number = serial_number;
    params.landing_page = landing_page;
    params.allowed_origin = allowed_origin;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kUsbInternalsPageHandler_AddDeviceForTesting_Name,
          codec.align(UsbInternalsPageHandler_AddDeviceForTesting_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(UsbInternalsPageHandler_AddDeviceForTesting_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  UsbInternalsPageHandlerProxy.prototype.removeDeviceForTesting = function(guid) {
    var params = new UsbInternalsPageHandler_RemoveDeviceForTesting_Params();
    params.guid = guid;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kUsbInternalsPageHandler_RemoveDeviceForTesting_Name,
          codec.align(UsbInternalsPageHandler_RemoveDeviceForTesting_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(UsbInternalsPageHandler_RemoveDeviceForTesting_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  UsbInternalsPageHandlerProxy.prototype.getTestDevices = function() {
    var params = new UsbInternalsPageHandler_GetTestDevices_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kUsbInternalsPageHandler_GetTestDevices_Name,
          codec.align(UsbInternalsPageHandler_GetTestDevices_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(UsbInternalsPageHandler_GetTestDevices_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(UsbInternalsPageHandler_GetTestDevices_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function UsbInternalsPageHandlerStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  UsbInternalsPageHandlerStub.prototype = Object.create(bindings.StubBase.prototype);
  UsbInternalsPageHandlerStub.prototype.addDeviceForTesting = function(name, serial_number, landing_page, allowed_origin) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.addDeviceForTesting && bindings.StubBindings(this).delegate.addDeviceForTesting(name, serial_number, landing_page, allowed_origin);
  }
  UsbInternalsPageHandlerStub.prototype.removeDeviceForTesting = function(guid) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.removeDeviceForTesting && bindings.StubBindings(this).delegate.removeDeviceForTesting(guid);
  }
  UsbInternalsPageHandlerStub.prototype.getTestDevices = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.getTestDevices && bindings.StubBindings(this).delegate.getTestDevices();
  }

  UsbInternalsPageHandlerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  UsbInternalsPageHandlerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kUsbInternalsPageHandler_AddDeviceForTesting_Name:
      var params = reader.decodeStruct(UsbInternalsPageHandler_AddDeviceForTesting_Params);
      return this.addDeviceForTesting(params.name, params.serial_number, params.landing_page, params.allowed_origin).then(function(response) {
        var responseParams =
            new UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams();
        responseParams.success = response.success;
        responseParams.message = response.message;
        var builder = new codec.MessageWithRequestIDBuilder(
            kUsbInternalsPageHandler_AddDeviceForTesting_Name,
            codec.align(UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kUsbInternalsPageHandler_RemoveDeviceForTesting_Name:
      var params = reader.decodeStruct(UsbInternalsPageHandler_RemoveDeviceForTesting_Params);
      return this.removeDeviceForTesting(params.guid).then(function(response) {
        var responseParams =
            new UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams();
        var builder = new codec.MessageWithRequestIDBuilder(
            kUsbInternalsPageHandler_RemoveDeviceForTesting_Name,
            codec.align(UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kUsbInternalsPageHandler_GetTestDevices_Name:
      var params = reader.decodeStruct(UsbInternalsPageHandler_GetTestDevices_Params);
      return this.getTestDevices().then(function(response) {
        var responseParams =
            new UsbInternalsPageHandler_GetTestDevices_ResponseParams();
        responseParams.devices = response.devices;
        var builder = new codec.MessageWithRequestIDBuilder(
            kUsbInternalsPageHandler_GetTestDevices_Name,
            codec.align(UsbInternalsPageHandler_GetTestDevices_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(UsbInternalsPageHandler_GetTestDevices_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateUsbInternalsPageHandlerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kUsbInternalsPageHandler_AddDeviceForTesting_Name:
        if (message.expectsResponse())
          paramsClass = UsbInternalsPageHandler_AddDeviceForTesting_Params;
      break;
      case kUsbInternalsPageHandler_RemoveDeviceForTesting_Name:
        if (message.expectsResponse())
          paramsClass = UsbInternalsPageHandler_RemoveDeviceForTesting_Params;
      break;
      case kUsbInternalsPageHandler_GetTestDevices_Name:
        if (message.expectsResponse())
          paramsClass = UsbInternalsPageHandler_GetTestDevices_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateUsbInternalsPageHandlerResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kUsbInternalsPageHandler_AddDeviceForTesting_Name:
        if (message.isResponse())
          paramsClass = UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams;
        break;
      case kUsbInternalsPageHandler_RemoveDeviceForTesting_Name:
        if (message.isResponse())
          paramsClass = UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams;
        break;
      case kUsbInternalsPageHandler_GetTestDevices_Name:
        if (message.isResponse())
          paramsClass = UsbInternalsPageHandler_GetTestDevices_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var UsbInternalsPageHandler = {
    name: 'mojom::UsbInternalsPageHandler',
    proxyClass: UsbInternalsPageHandlerProxy,
    stubClass: UsbInternalsPageHandlerStub,
    validateRequest: validateUsbInternalsPageHandlerRequest,
    validateResponse: validateUsbInternalsPageHandlerResponse,
  };
  UsbInternalsPageHandlerStub.prototype.validator = validateUsbInternalsPageHandlerRequest;
  UsbInternalsPageHandlerProxy.prototype.validator = validateUsbInternalsPageHandlerResponse;

  var exports = {};
  exports.TestDeviceInfo = TestDeviceInfo;
  exports.UsbInternalsPageHandler = UsbInternalsPageHandler;

  return exports;
});
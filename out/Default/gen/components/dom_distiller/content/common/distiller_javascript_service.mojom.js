// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("components/dom_distiller/content/common/distiller_javascript_service.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {

  function DistillerJavaScriptService_HandleDistillerEchoCall_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DistillerJavaScriptService_HandleDistillerEchoCall_Params.prototype.initDefaults_ = function() {
    this.message = null;
  };
  DistillerJavaScriptService_HandleDistillerEchoCall_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  DistillerJavaScriptService_HandleDistillerEchoCall_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, DistillerJavaScriptService_HandleDistillerEchoCall_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate DistillerJavaScriptService_HandleDistillerEchoCall_Params.message
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DistillerJavaScriptService_HandleDistillerEchoCall_Params.encodedSize = codec.kStructHeaderSize + 8;

  DistillerJavaScriptService_HandleDistillerEchoCall_Params.decode = function(decoder) {
    var packed;
    var val = new DistillerJavaScriptService_HandleDistillerEchoCall_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.message = decoder.decodeStruct(codec.String);
    return val;
  };

  DistillerJavaScriptService_HandleDistillerEchoCall_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DistillerJavaScriptService_HandleDistillerEchoCall_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.message);
  };
  function DistillerJavaScriptService_HandleDistillerFeedbackCall_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DistillerJavaScriptService_HandleDistillerFeedbackCall_Params.prototype.initDefaults_ = function() {
    this.good = false;
  };
  DistillerJavaScriptService_HandleDistillerFeedbackCall_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  DistillerJavaScriptService_HandleDistillerFeedbackCall_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, DistillerJavaScriptService_HandleDistillerFeedbackCall_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  DistillerJavaScriptService_HandleDistillerFeedbackCall_Params.encodedSize = codec.kStructHeaderSize + 8;

  DistillerJavaScriptService_HandleDistillerFeedbackCall_Params.decode = function(decoder) {
    var packed;
    var val = new DistillerJavaScriptService_HandleDistillerFeedbackCall_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.good = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  DistillerJavaScriptService_HandleDistillerFeedbackCall_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DistillerJavaScriptService_HandleDistillerFeedbackCall_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint8, val.good);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function DistillerJavaScriptService_HandleDistillerClosePanelCall_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DistillerJavaScriptService_HandleDistillerClosePanelCall_Params.prototype.initDefaults_ = function() {
    this.animate = false;
  };
  DistillerJavaScriptService_HandleDistillerClosePanelCall_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  DistillerJavaScriptService_HandleDistillerClosePanelCall_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, DistillerJavaScriptService_HandleDistillerClosePanelCall_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  DistillerJavaScriptService_HandleDistillerClosePanelCall_Params.encodedSize = codec.kStructHeaderSize + 8;

  DistillerJavaScriptService_HandleDistillerClosePanelCall_Params.decode = function(decoder) {
    var packed;
    var val = new DistillerJavaScriptService_HandleDistillerClosePanelCall_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.animate = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  DistillerJavaScriptService_HandleDistillerClosePanelCall_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DistillerJavaScriptService_HandleDistillerClosePanelCall_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint8, val.animate);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function DistillerJavaScriptService_HandleDistillerOpenSettingsCall_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DistillerJavaScriptService_HandleDistillerOpenSettingsCall_Params.prototype.initDefaults_ = function() {
  };
  DistillerJavaScriptService_HandleDistillerOpenSettingsCall_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  DistillerJavaScriptService_HandleDistillerOpenSettingsCall_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, DistillerJavaScriptService_HandleDistillerOpenSettingsCall_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DistillerJavaScriptService_HandleDistillerOpenSettingsCall_Params.encodedSize = codec.kStructHeaderSize + 0;

  DistillerJavaScriptService_HandleDistillerOpenSettingsCall_Params.decode = function(decoder) {
    var packed;
    var val = new DistillerJavaScriptService_HandleDistillerOpenSettingsCall_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  DistillerJavaScriptService_HandleDistillerOpenSettingsCall_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DistillerJavaScriptService_HandleDistillerOpenSettingsCall_Params.encodedSize);
    encoder.writeUint32(0);
  };
  var kDistillerJavaScriptService_HandleDistillerEchoCall_Name = 0;
  var kDistillerJavaScriptService_HandleDistillerFeedbackCall_Name = 1;
  var kDistillerJavaScriptService_HandleDistillerClosePanelCall_Name = 2;
  var kDistillerJavaScriptService_HandleDistillerOpenSettingsCall_Name = 3;

  function DistillerJavaScriptServiceProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  DistillerJavaScriptServiceProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  DistillerJavaScriptServiceProxy.prototype.handleDistillerEchoCall = function(message) {
    var params = new DistillerJavaScriptService_HandleDistillerEchoCall_Params();
    params.message = message;
    var builder = new codec.MessageBuilder(
        kDistillerJavaScriptService_HandleDistillerEchoCall_Name,
        codec.align(DistillerJavaScriptService_HandleDistillerEchoCall_Params.encodedSize));
    builder.encodeStruct(DistillerJavaScriptService_HandleDistillerEchoCall_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DistillerJavaScriptServiceProxy.prototype.handleDistillerFeedbackCall = function(good) {
    var params = new DistillerJavaScriptService_HandleDistillerFeedbackCall_Params();
    params.good = good;
    var builder = new codec.MessageBuilder(
        kDistillerJavaScriptService_HandleDistillerFeedbackCall_Name,
        codec.align(DistillerJavaScriptService_HandleDistillerFeedbackCall_Params.encodedSize));
    builder.encodeStruct(DistillerJavaScriptService_HandleDistillerFeedbackCall_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DistillerJavaScriptServiceProxy.prototype.handleDistillerClosePanelCall = function(animate) {
    var params = new DistillerJavaScriptService_HandleDistillerClosePanelCall_Params();
    params.animate = animate;
    var builder = new codec.MessageBuilder(
        kDistillerJavaScriptService_HandleDistillerClosePanelCall_Name,
        codec.align(DistillerJavaScriptService_HandleDistillerClosePanelCall_Params.encodedSize));
    builder.encodeStruct(DistillerJavaScriptService_HandleDistillerClosePanelCall_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DistillerJavaScriptServiceProxy.prototype.handleDistillerOpenSettingsCall = function() {
    var params = new DistillerJavaScriptService_HandleDistillerOpenSettingsCall_Params();
    var builder = new codec.MessageBuilder(
        kDistillerJavaScriptService_HandleDistillerOpenSettingsCall_Name,
        codec.align(DistillerJavaScriptService_HandleDistillerOpenSettingsCall_Params.encodedSize));
    builder.encodeStruct(DistillerJavaScriptService_HandleDistillerOpenSettingsCall_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function DistillerJavaScriptServiceStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  DistillerJavaScriptServiceStub.prototype = Object.create(bindings.StubBase.prototype);
  DistillerJavaScriptServiceStub.prototype.handleDistillerEchoCall = function(message) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.handleDistillerEchoCall && bindings.StubBindings(this).delegate.handleDistillerEchoCall(message);
  }
  DistillerJavaScriptServiceStub.prototype.handleDistillerFeedbackCall = function(good) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.handleDistillerFeedbackCall && bindings.StubBindings(this).delegate.handleDistillerFeedbackCall(good);
  }
  DistillerJavaScriptServiceStub.prototype.handleDistillerClosePanelCall = function(animate) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.handleDistillerClosePanelCall && bindings.StubBindings(this).delegate.handleDistillerClosePanelCall(animate);
  }
  DistillerJavaScriptServiceStub.prototype.handleDistillerOpenSettingsCall = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.handleDistillerOpenSettingsCall && bindings.StubBindings(this).delegate.handleDistillerOpenSettingsCall();
  }

  DistillerJavaScriptServiceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kDistillerJavaScriptService_HandleDistillerEchoCall_Name:
      var params = reader.decodeStruct(DistillerJavaScriptService_HandleDistillerEchoCall_Params);
      this.handleDistillerEchoCall(params.message);
      return true;
    case kDistillerJavaScriptService_HandleDistillerFeedbackCall_Name:
      var params = reader.decodeStruct(DistillerJavaScriptService_HandleDistillerFeedbackCall_Params);
      this.handleDistillerFeedbackCall(params.good);
      return true;
    case kDistillerJavaScriptService_HandleDistillerClosePanelCall_Name:
      var params = reader.decodeStruct(DistillerJavaScriptService_HandleDistillerClosePanelCall_Params);
      this.handleDistillerClosePanelCall(params.animate);
      return true;
    case kDistillerJavaScriptService_HandleDistillerOpenSettingsCall_Name:
      var params = reader.decodeStruct(DistillerJavaScriptService_HandleDistillerOpenSettingsCall_Params);
      this.handleDistillerOpenSettingsCall();
      return true;
    default:
      return false;
    }
  };

  DistillerJavaScriptServiceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateDistillerJavaScriptServiceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kDistillerJavaScriptService_HandleDistillerEchoCall_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DistillerJavaScriptService_HandleDistillerEchoCall_Params;
      break;
      case kDistillerJavaScriptService_HandleDistillerFeedbackCall_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DistillerJavaScriptService_HandleDistillerFeedbackCall_Params;
      break;
      case kDistillerJavaScriptService_HandleDistillerClosePanelCall_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DistillerJavaScriptService_HandleDistillerClosePanelCall_Params;
      break;
      case kDistillerJavaScriptService_HandleDistillerOpenSettingsCall_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DistillerJavaScriptService_HandleDistillerOpenSettingsCall_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateDistillerJavaScriptServiceResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var DistillerJavaScriptService = {
    name: 'dom_distiller::mojom::DistillerJavaScriptService',
    proxyClass: DistillerJavaScriptServiceProxy,
    stubClass: DistillerJavaScriptServiceStub,
    validateRequest: validateDistillerJavaScriptServiceRequest,
    validateResponse: null,
  };
  DistillerJavaScriptServiceStub.prototype.validator = validateDistillerJavaScriptServiceRequest;
  DistillerJavaScriptServiceProxy.prototype.validator = null;

  var exports = {};
  exports.DistillerJavaScriptService = DistillerJavaScriptService;

  return exports;
});
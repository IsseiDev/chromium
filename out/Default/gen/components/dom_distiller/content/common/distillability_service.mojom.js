// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("components/dom_distiller/content/common/distillability_service.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {

  function DistillabilityService_NotifyIsDistillable_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DistillabilityService_NotifyIsDistillable_Params.prototype.initDefaults_ = function() {
    this.page_is_distillable = false;
    this.is_last_update = false;
  };
  DistillabilityService_NotifyIsDistillable_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  DistillabilityService_NotifyIsDistillable_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, DistillabilityService_NotifyIsDistillable_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  DistillabilityService_NotifyIsDistillable_Params.encodedSize = codec.kStructHeaderSize + 8;

  DistillabilityService_NotifyIsDistillable_Params.decode = function(decoder) {
    var packed;
    var val = new DistillabilityService_NotifyIsDistillable_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.page_is_distillable = (packed >> 0) & 1 ? true : false;
    val.is_last_update = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  DistillabilityService_NotifyIsDistillable_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DistillabilityService_NotifyIsDistillable_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.page_is_distillable & 1) << 0
    packed |= (val.is_last_update & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kDistillabilityService_NotifyIsDistillable_Name = 0;

  function DistillabilityServiceProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  DistillabilityServiceProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  DistillabilityServiceProxy.prototype.notifyIsDistillable = function(page_is_distillable, is_last_update) {
    var params = new DistillabilityService_NotifyIsDistillable_Params();
    params.page_is_distillable = page_is_distillable;
    params.is_last_update = is_last_update;
    var builder = new codec.MessageBuilder(
        kDistillabilityService_NotifyIsDistillable_Name,
        codec.align(DistillabilityService_NotifyIsDistillable_Params.encodedSize));
    builder.encodeStruct(DistillabilityService_NotifyIsDistillable_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function DistillabilityServiceStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  DistillabilityServiceStub.prototype = Object.create(bindings.StubBase.prototype);
  DistillabilityServiceStub.prototype.notifyIsDistillable = function(page_is_distillable, is_last_update) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.notifyIsDistillable && bindings.StubBindings(this).delegate.notifyIsDistillable(page_is_distillable, is_last_update);
  }

  DistillabilityServiceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kDistillabilityService_NotifyIsDistillable_Name:
      var params = reader.decodeStruct(DistillabilityService_NotifyIsDistillable_Params);
      this.notifyIsDistillable(params.page_is_distillable, params.is_last_update);
      return true;
    default:
      return false;
    }
  };

  DistillabilityServiceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateDistillabilityServiceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kDistillabilityService_NotifyIsDistillable_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DistillabilityService_NotifyIsDistillable_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateDistillabilityServiceResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var DistillabilityService = {
    name: 'dom_distiller::mojom::DistillabilityService',
    proxyClass: DistillabilityServiceProxy,
    stubClass: DistillabilityServiceStub,
    validateRequest: validateDistillabilityServiceRequest,
    validateResponse: null,
  };
  DistillabilityServiceStub.prototype.validator = validateDistillabilityServiceRequest;
  DistillabilityServiceProxy.prototype.validator = null;

  var exports = {};
  exports.DistillabilityService = DistillabilityService;

  return exports;
});
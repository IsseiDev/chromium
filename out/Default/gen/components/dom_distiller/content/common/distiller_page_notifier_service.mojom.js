// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("components/dom_distiller/content/common/distiller_page_notifier_service.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {

  function DistillerPageNotifierService_NotifyIsDistillerPage_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DistillerPageNotifierService_NotifyIsDistillerPage_Params.prototype.initDefaults_ = function() {
  };
  DistillerPageNotifierService_NotifyIsDistillerPage_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  DistillerPageNotifierService_NotifyIsDistillerPage_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, DistillerPageNotifierService_NotifyIsDistillerPage_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DistillerPageNotifierService_NotifyIsDistillerPage_Params.encodedSize = codec.kStructHeaderSize + 0;

  DistillerPageNotifierService_NotifyIsDistillerPage_Params.decode = function(decoder) {
    var packed;
    var val = new DistillerPageNotifierService_NotifyIsDistillerPage_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  DistillerPageNotifierService_NotifyIsDistillerPage_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DistillerPageNotifierService_NotifyIsDistillerPage_Params.encodedSize);
    encoder.writeUint32(0);
  };
  var kDistillerPageNotifierService_NotifyIsDistillerPage_Name = 0;

  function DistillerPageNotifierServiceProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  DistillerPageNotifierServiceProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  DistillerPageNotifierServiceProxy.prototype.notifyIsDistillerPage = function() {
    var params = new DistillerPageNotifierService_NotifyIsDistillerPage_Params();
    var builder = new codec.MessageBuilder(
        kDistillerPageNotifierService_NotifyIsDistillerPage_Name,
        codec.align(DistillerPageNotifierService_NotifyIsDistillerPage_Params.encodedSize));
    builder.encodeStruct(DistillerPageNotifierService_NotifyIsDistillerPage_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function DistillerPageNotifierServiceStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  DistillerPageNotifierServiceStub.prototype = Object.create(bindings.StubBase.prototype);
  DistillerPageNotifierServiceStub.prototype.notifyIsDistillerPage = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.notifyIsDistillerPage && bindings.StubBindings(this).delegate.notifyIsDistillerPage();
  }

  DistillerPageNotifierServiceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kDistillerPageNotifierService_NotifyIsDistillerPage_Name:
      var params = reader.decodeStruct(DistillerPageNotifierService_NotifyIsDistillerPage_Params);
      this.notifyIsDistillerPage();
      return true;
    default:
      return false;
    }
  };

  DistillerPageNotifierServiceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateDistillerPageNotifierServiceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kDistillerPageNotifierService_NotifyIsDistillerPage_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DistillerPageNotifierService_NotifyIsDistillerPage_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateDistillerPageNotifierServiceResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var DistillerPageNotifierService = {
    name: 'dom_distiller::mojom::DistillerPageNotifierService',
    proxyClass: DistillerPageNotifierServiceProxy,
    stubClass: DistillerPageNotifierServiceStub,
    validateRequest: validateDistillerPageNotifierServiceRequest,
    validateResponse: null,
  };
  DistillerPageNotifierServiceStub.prototype.validator = validateDistillerPageNotifierServiceRequest;
  DistillerPageNotifierServiceProxy.prototype.validator = null;

  var exports = {};
  exports.DistillerPageNotifierService = DistillerPageNotifierService;

  return exports;
});
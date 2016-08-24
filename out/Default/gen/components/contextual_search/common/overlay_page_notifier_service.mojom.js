// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("components/contextual_search/common/overlay_page_notifier_service.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {

  function OverlayPageNotifierService_NotifyIsContextualSearchOverlay_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  OverlayPageNotifierService_NotifyIsContextualSearchOverlay_Params.prototype.initDefaults_ = function() {
  };
  OverlayPageNotifierService_NotifyIsContextualSearchOverlay_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  OverlayPageNotifierService_NotifyIsContextualSearchOverlay_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, OverlayPageNotifierService_NotifyIsContextualSearchOverlay_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  OverlayPageNotifierService_NotifyIsContextualSearchOverlay_Params.encodedSize = codec.kStructHeaderSize + 0;

  OverlayPageNotifierService_NotifyIsContextualSearchOverlay_Params.decode = function(decoder) {
    var packed;
    var val = new OverlayPageNotifierService_NotifyIsContextualSearchOverlay_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  OverlayPageNotifierService_NotifyIsContextualSearchOverlay_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(OverlayPageNotifierService_NotifyIsContextualSearchOverlay_Params.encodedSize);
    encoder.writeUint32(0);
  };
  var kOverlayPageNotifierService_NotifyIsContextualSearchOverlay_Name = 0;

  function OverlayPageNotifierServiceProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  OverlayPageNotifierServiceProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  OverlayPageNotifierServiceProxy.prototype.notifyIsContextualSearchOverlay = function() {
    var params = new OverlayPageNotifierService_NotifyIsContextualSearchOverlay_Params();
    var builder = new codec.MessageBuilder(
        kOverlayPageNotifierService_NotifyIsContextualSearchOverlay_Name,
        codec.align(OverlayPageNotifierService_NotifyIsContextualSearchOverlay_Params.encodedSize));
    builder.encodeStruct(OverlayPageNotifierService_NotifyIsContextualSearchOverlay_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function OverlayPageNotifierServiceStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  OverlayPageNotifierServiceStub.prototype = Object.create(bindings.StubBase.prototype);
  OverlayPageNotifierServiceStub.prototype.notifyIsContextualSearchOverlay = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.notifyIsContextualSearchOverlay && bindings.StubBindings(this).delegate.notifyIsContextualSearchOverlay();
  }

  OverlayPageNotifierServiceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kOverlayPageNotifierService_NotifyIsContextualSearchOverlay_Name:
      var params = reader.decodeStruct(OverlayPageNotifierService_NotifyIsContextualSearchOverlay_Params);
      this.notifyIsContextualSearchOverlay();
      return true;
    default:
      return false;
    }
  };

  OverlayPageNotifierServiceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateOverlayPageNotifierServiceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kOverlayPageNotifierService_NotifyIsContextualSearchOverlay_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = OverlayPageNotifierService_NotifyIsContextualSearchOverlay_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateOverlayPageNotifierServiceResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var OverlayPageNotifierService = {
    name: 'contextual_search::mojom::OverlayPageNotifierService',
    proxyClass: OverlayPageNotifierServiceProxy,
    stubClass: OverlayPageNotifierServiceStub,
    validateRequest: validateOverlayPageNotifierServiceRequest,
    validateResponse: null,
  };
  OverlayPageNotifierServiceStub.prototype.validator = validateOverlayPageNotifierServiceRequest;
  OverlayPageNotifierServiceProxy.prototype.validator = null;

  var exports = {};
  exports.OverlayPageNotifierService = OverlayPageNotifierService;

  return exports;
});
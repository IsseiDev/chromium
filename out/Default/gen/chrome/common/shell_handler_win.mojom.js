// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("chrome/common/shell_handler_win.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {

  function ShellHandler_IsPinnedToTaskbar_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ShellHandler_IsPinnedToTaskbar_Params.prototype.initDefaults_ = function() {
  };
  ShellHandler_IsPinnedToTaskbar_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ShellHandler_IsPinnedToTaskbar_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ShellHandler_IsPinnedToTaskbar_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ShellHandler_IsPinnedToTaskbar_Params.encodedSize = codec.kStructHeaderSize + 0;

  ShellHandler_IsPinnedToTaskbar_Params.decode = function(decoder) {
    var packed;
    var val = new ShellHandler_IsPinnedToTaskbar_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  ShellHandler_IsPinnedToTaskbar_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ShellHandler_IsPinnedToTaskbar_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function ShellHandler_IsPinnedToTaskbar_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ShellHandler_IsPinnedToTaskbar_ResponseParams.prototype.initDefaults_ = function() {
    this.succeeded = false;
    this.is_pinned_to_taskbar = false;
  };
  ShellHandler_IsPinnedToTaskbar_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ShellHandler_IsPinnedToTaskbar_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ShellHandler_IsPinnedToTaskbar_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  ShellHandler_IsPinnedToTaskbar_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  ShellHandler_IsPinnedToTaskbar_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ShellHandler_IsPinnedToTaskbar_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.succeeded = (packed >> 0) & 1 ? true : false;
    val.is_pinned_to_taskbar = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ShellHandler_IsPinnedToTaskbar_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ShellHandler_IsPinnedToTaskbar_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.succeeded & 1) << 0
    packed |= (val.is_pinned_to_taskbar & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kShellHandler_IsPinnedToTaskbar_Name = 0;

  function ShellHandlerProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  ShellHandlerProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  ShellHandlerProxy.prototype.isPinnedToTaskbar = function() {
    var params = new ShellHandler_IsPinnedToTaskbar_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kShellHandler_IsPinnedToTaskbar_Name,
          codec.align(ShellHandler_IsPinnedToTaskbar_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ShellHandler_IsPinnedToTaskbar_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ShellHandler_IsPinnedToTaskbar_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function ShellHandlerStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  ShellHandlerStub.prototype = Object.create(bindings.StubBase.prototype);
  ShellHandlerStub.prototype.isPinnedToTaskbar = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.isPinnedToTaskbar && bindings.StubBindings(this).delegate.isPinnedToTaskbar();
  }

  ShellHandlerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  ShellHandlerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kShellHandler_IsPinnedToTaskbar_Name:
      var params = reader.decodeStruct(ShellHandler_IsPinnedToTaskbar_Params);
      return this.isPinnedToTaskbar().then(function(response) {
        var responseParams =
            new ShellHandler_IsPinnedToTaskbar_ResponseParams();
        responseParams.succeeded = response.succeeded;
        responseParams.is_pinned_to_taskbar = response.is_pinned_to_taskbar;
        var builder = new codec.MessageWithRequestIDBuilder(
            kShellHandler_IsPinnedToTaskbar_Name,
            codec.align(ShellHandler_IsPinnedToTaskbar_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ShellHandler_IsPinnedToTaskbar_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateShellHandlerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kShellHandler_IsPinnedToTaskbar_Name:
        if (message.expectsResponse())
          paramsClass = ShellHandler_IsPinnedToTaskbar_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateShellHandlerResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kShellHandler_IsPinnedToTaskbar_Name:
        if (message.isResponse())
          paramsClass = ShellHandler_IsPinnedToTaskbar_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var ShellHandler = {
    name: 'mojom::ShellHandler',
    proxyClass: ShellHandlerProxy,
    stubClass: ShellHandlerStub,
    validateRequest: validateShellHandlerRequest,
    validateResponse: validateShellHandlerResponse,
  };
  ShellHandlerStub.prototype.validator = validateShellHandlerRequest;
  ShellHandlerProxy.prototype.validator = validateShellHandlerResponse;

  var exports = {};
  exports.ShellHandler = ShellHandler;

  return exports;
});
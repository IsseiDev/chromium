// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("components/memory_coordinator/public/interfaces/child_memory_coordinator.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {
  var MemoryState = {};
  MemoryState.UNKNOWN = -1;
  MemoryState.NORMAL = 0;
  MemoryState.THROTTLED = 1;
  MemoryState.SUSPENDED = 2;

  function ChildMemoryCoordinator_OnStateChange_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ChildMemoryCoordinator_OnStateChange_Params.prototype.initDefaults_ = function() {
    this.state = 0;
  };
  ChildMemoryCoordinator_OnStateChange_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ChildMemoryCoordinator_OnStateChange_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ChildMemoryCoordinator_OnStateChange_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  ChildMemoryCoordinator_OnStateChange_Params.encodedSize = codec.kStructHeaderSize + 8;

  ChildMemoryCoordinator_OnStateChange_Params.decode = function(decoder) {
    var packed;
    var val = new ChildMemoryCoordinator_OnStateChange_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.state = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ChildMemoryCoordinator_OnStateChange_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ChildMemoryCoordinator_OnStateChange_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.state);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kChildMemoryCoordinator_OnStateChange_Name = 0;

  function ChildMemoryCoordinatorProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  ChildMemoryCoordinatorProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  ChildMemoryCoordinatorProxy.prototype.onStateChange = function(state) {
    var params = new ChildMemoryCoordinator_OnStateChange_Params();
    params.state = state;
    var builder = new codec.MessageBuilder(
        kChildMemoryCoordinator_OnStateChange_Name,
        codec.align(ChildMemoryCoordinator_OnStateChange_Params.encodedSize));
    builder.encodeStruct(ChildMemoryCoordinator_OnStateChange_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ChildMemoryCoordinatorStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  ChildMemoryCoordinatorStub.prototype = Object.create(bindings.StubBase.prototype);
  ChildMemoryCoordinatorStub.prototype.onStateChange = function(state) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onStateChange && bindings.StubBindings(this).delegate.onStateChange(state);
  }

  ChildMemoryCoordinatorStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kChildMemoryCoordinator_OnStateChange_Name:
      var params = reader.decodeStruct(ChildMemoryCoordinator_OnStateChange_Params);
      this.onStateChange(params.state);
      return true;
    default:
      return false;
    }
  };

  ChildMemoryCoordinatorStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateChildMemoryCoordinatorRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kChildMemoryCoordinator_OnStateChange_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ChildMemoryCoordinator_OnStateChange_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateChildMemoryCoordinatorResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ChildMemoryCoordinator = {
    name: 'memory_coordinator::mojom::ChildMemoryCoordinator',
    proxyClass: ChildMemoryCoordinatorProxy,
    stubClass: ChildMemoryCoordinatorStub,
    validateRequest: validateChildMemoryCoordinatorRequest,
    validateResponse: null,
  };
  ChildMemoryCoordinatorStub.prototype.validator = validateChildMemoryCoordinatorRequest;
  ChildMemoryCoordinatorProxy.prototype.validator = null;

  var exports = {};
  exports.MemoryState = MemoryState;
  exports.ChildMemoryCoordinator = ChildMemoryCoordinator;

  return exports;
});
// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("components/memory_coordinator/public/interfaces/memory_coordinator.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "components/memory_coordinator/public/interfaces/child_memory_coordinator.mojom",
], function(bindings, codec, connection, core, validator, child_memory_coordinator$) {

  function MemoryCoordinatorHandle_AddChild_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MemoryCoordinatorHandle_AddChild_Params.prototype.initDefaults_ = function() {
    this.child = null;
  };
  MemoryCoordinatorHandle_AddChild_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  MemoryCoordinatorHandle_AddChild_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, MemoryCoordinatorHandle_AddChild_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate MemoryCoordinatorHandle_AddChild_Params.child
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MemoryCoordinatorHandle_AddChild_Params.encodedSize = codec.kStructHeaderSize + 8;

  MemoryCoordinatorHandle_AddChild_Params.decode = function(decoder) {
    var packed;
    var val = new MemoryCoordinatorHandle_AddChild_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.child = decoder.decodeStruct(codec.Interface);
    return val;
  };

  MemoryCoordinatorHandle_AddChild_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MemoryCoordinatorHandle_AddChild_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Interface, val.child);
  };
  var kMemoryCoordinatorHandle_AddChild_Name = 0;

  function MemoryCoordinatorHandleProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  MemoryCoordinatorHandleProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  MemoryCoordinatorHandleProxy.prototype.addChild = function(child) {
    var params = new MemoryCoordinatorHandle_AddChild_Params();
    params.child = core.isHandle(child) ? child : connection.bindImpl(child, child_memory_coordinator$.ChildMemoryCoordinator);
    var builder = new codec.MessageBuilder(
        kMemoryCoordinatorHandle_AddChild_Name,
        codec.align(MemoryCoordinatorHandle_AddChild_Params.encodedSize));
    builder.encodeStruct(MemoryCoordinatorHandle_AddChild_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function MemoryCoordinatorHandleStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  MemoryCoordinatorHandleStub.prototype = Object.create(bindings.StubBase.prototype);
  MemoryCoordinatorHandleStub.prototype.addChild = function(child) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.addChild && bindings.StubBindings(this).delegate.addChild(connection.bindHandleToProxy(child, child_memory_coordinator$.ChildMemoryCoordinator));
  }

  MemoryCoordinatorHandleStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kMemoryCoordinatorHandle_AddChild_Name:
      var params = reader.decodeStruct(MemoryCoordinatorHandle_AddChild_Params);
      this.addChild(params.child);
      return true;
    default:
      return false;
    }
  };

  MemoryCoordinatorHandleStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateMemoryCoordinatorHandleRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kMemoryCoordinatorHandle_AddChild_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MemoryCoordinatorHandle_AddChild_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateMemoryCoordinatorHandleResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var MemoryCoordinatorHandle = {
    name: 'memory_coordinator::mojom::MemoryCoordinatorHandle',
    proxyClass: MemoryCoordinatorHandleProxy,
    stubClass: MemoryCoordinatorHandleStub,
    validateRequest: validateMemoryCoordinatorHandleRequest,
    validateResponse: null,
  };
  MemoryCoordinatorHandleStub.prototype.validator = validateMemoryCoordinatorHandleRequest;
  MemoryCoordinatorHandleProxy.prototype.validator = null;

  var exports = {};
  exports.MemoryCoordinatorHandle = MemoryCoordinatorHandle;

  return exports;
});
// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("content/common/storage_partition_service.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "content/common/leveldb_wrapper.mojom",
    "url/mojo/origin.mojom",
], function(bindings, codec, connection, core, validator, leveldb_wrapper$, origin$) {

  function StoragePartitionService_OpenLocalStorage_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  StoragePartitionService_OpenLocalStorage_Params.prototype.initDefaults_ = function() {
    this.origin = null;
    this.observer = null;
    this.database = null;
  };
  StoragePartitionService_OpenLocalStorage_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  StoragePartitionService_OpenLocalStorage_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, StoragePartitionService_OpenLocalStorage_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate StoragePartitionService_OpenLocalStorage_Params.origin
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, origin$.Origin, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate StoragePartitionService_OpenLocalStorage_Params.observer
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 8, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate StoragePartitionService_OpenLocalStorage_Params.database
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  StoragePartitionService_OpenLocalStorage_Params.encodedSize = codec.kStructHeaderSize + 24;

  StoragePartitionService_OpenLocalStorage_Params.decode = function(decoder) {
    var packed;
    var val = new StoragePartitionService_OpenLocalStorage_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.origin = decoder.decodeStructPointer(origin$.Origin);
    val.observer = decoder.decodeStruct(codec.Interface);
    val.database = decoder.decodeStruct(codec.Handle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  StoragePartitionService_OpenLocalStorage_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(StoragePartitionService_OpenLocalStorage_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(origin$.Origin, val.origin);
    encoder.encodeStruct(codec.Interface, val.observer);
    encoder.encodeStruct(codec.Handle, val.database);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kStoragePartitionService_OpenLocalStorage_Name = 0;

  function StoragePartitionServiceProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  StoragePartitionServiceProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  StoragePartitionServiceProxy.prototype.openLocalStorage = function(origin, observer, database) {
    var params = new StoragePartitionService_OpenLocalStorage_Params();
    params.origin = origin;
    params.observer = core.isHandle(observer) ? observer : connection.bindImpl(observer, leveldb_wrapper$.LevelDBObserver);
    params.database = core.isHandle(database) ? database : connection.bindProxy(database, leveldb_wrapper$.LevelDBWrapper);
    var builder = new codec.MessageBuilder(
        kStoragePartitionService_OpenLocalStorage_Name,
        codec.align(StoragePartitionService_OpenLocalStorage_Params.encodedSize));
    builder.encodeStruct(StoragePartitionService_OpenLocalStorage_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function StoragePartitionServiceStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  StoragePartitionServiceStub.prototype = Object.create(bindings.StubBase.prototype);
  StoragePartitionServiceStub.prototype.openLocalStorage = function(origin, observer, database) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.openLocalStorage && bindings.StubBindings(this).delegate.openLocalStorage(origin, connection.bindHandleToProxy(observer, leveldb_wrapper$.LevelDBObserver), connection.bindHandleToStub(database, leveldb_wrapper$.LevelDBWrapper));
  }

  StoragePartitionServiceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kStoragePartitionService_OpenLocalStorage_Name:
      var params = reader.decodeStruct(StoragePartitionService_OpenLocalStorage_Params);
      this.openLocalStorage(params.origin, params.observer, params.database);
      return true;
    default:
      return false;
    }
  };

  StoragePartitionServiceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateStoragePartitionServiceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kStoragePartitionService_OpenLocalStorage_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = StoragePartitionService_OpenLocalStorage_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateStoragePartitionServiceResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var StoragePartitionService = {
    name: 'content::mojom::StoragePartitionService',
    proxyClass: StoragePartitionServiceProxy,
    stubClass: StoragePartitionServiceStub,
    validateRequest: validateStoragePartitionServiceRequest,
    validateResponse: null,
  };
  StoragePartitionServiceStub.prototype.validator = validateStoragePartitionServiceRequest;
  StoragePartitionServiceProxy.prototype.validator = null;

  var exports = {};
  exports.StoragePartitionService = StoragePartitionService;

  return exports;
});
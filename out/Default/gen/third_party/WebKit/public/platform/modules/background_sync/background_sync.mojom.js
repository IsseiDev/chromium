// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("third_party/WebKit/public/platform/modules/background_sync/background_sync.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "third_party/WebKit/public/platform/modules/serviceworker/service_worker_event_status.mojom",
], function(bindings, codec, connection, core, validator, service_worker_event_status$) {
  var BackgroundSyncNetworkState = {};
  BackgroundSyncNetworkState.ANY = 0;
  BackgroundSyncNetworkState.AVOID_CELLULAR = BackgroundSyncNetworkState.ANY + 1;
  BackgroundSyncNetworkState.ONLINE = BackgroundSyncNetworkState.AVOID_CELLULAR + 1;
  BackgroundSyncNetworkState.MAX = BackgroundSyncNetworkState.ONLINE;
  var BackgroundSyncError = {};
  BackgroundSyncError.NONE = 0;
  BackgroundSyncError.STORAGE = BackgroundSyncError.NONE + 1;
  BackgroundSyncError.NOT_FOUND = BackgroundSyncError.STORAGE + 1;
  BackgroundSyncError.NO_SERVICE_WORKER = BackgroundSyncError.NOT_FOUND + 1;
  BackgroundSyncError.NOT_ALLOWED = BackgroundSyncError.NO_SERVICE_WORKER + 1;
  BackgroundSyncError.PERMISSION_DENIED = BackgroundSyncError.NOT_ALLOWED + 1;
  BackgroundSyncError.MAX = BackgroundSyncError.PERMISSION_DENIED;
  var BackgroundSyncState = {};
  BackgroundSyncState.PENDING = 0;
  BackgroundSyncState.FIRING = BackgroundSyncState.PENDING + 1;
  BackgroundSyncState.REREGISTERED_WHILE_FIRING = BackgroundSyncState.FIRING + 1;
  var BackgroundSyncEventLastChance = {};
  BackgroundSyncEventLastChance.IS_NOT_LAST_CHANCE = 0;
  BackgroundSyncEventLastChance.IS_LAST_CHANCE = BackgroundSyncEventLastChance.IS_NOT_LAST_CHANCE + 1;

  function SyncRegistration(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SyncRegistration.prototype.initDefaults_ = function() {
    this.id = -1;
    this.tag = "";
    this.network_state = BackgroundSyncNetworkState.ONLINE;
  };
  SyncRegistration.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  SyncRegistration.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, SyncRegistration.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate SyncRegistration.tag
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  SyncRegistration.encodedSize = codec.kStructHeaderSize + 24;

  SyncRegistration.decode = function(decoder) {
    var packed;
    var val = new SyncRegistration();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.Int64);
    val.tag = decoder.decodeStruct(codec.String);
    val.network_state = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  SyncRegistration.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SyncRegistration.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.id);
    encoder.encodeStruct(codec.String, val.tag);
    encoder.encodeStruct(codec.Int32, val.network_state);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function BackgroundSyncService_Register_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BackgroundSyncService_Register_Params.prototype.initDefaults_ = function() {
    this.options = null;
    this.service_worker_registration_id = 0;
  };
  BackgroundSyncService_Register_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  BackgroundSyncService_Register_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, BackgroundSyncService_Register_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate BackgroundSyncService_Register_Params.options
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, SyncRegistration, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  BackgroundSyncService_Register_Params.encodedSize = codec.kStructHeaderSize + 16;

  BackgroundSyncService_Register_Params.decode = function(decoder) {
    var packed;
    var val = new BackgroundSyncService_Register_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.options = decoder.decodeStructPointer(SyncRegistration);
    val.service_worker_registration_id = decoder.decodeStruct(codec.Int64);
    return val;
  };

  BackgroundSyncService_Register_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BackgroundSyncService_Register_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(SyncRegistration, val.options);
    encoder.encodeStruct(codec.Int64, val.service_worker_registration_id);
  };
  function BackgroundSyncService_Register_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BackgroundSyncService_Register_ResponseParams.prototype.initDefaults_ = function() {
    this.err = 0;
    this.options = null;
  };
  BackgroundSyncService_Register_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  BackgroundSyncService_Register_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, BackgroundSyncService_Register_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate BackgroundSyncService_Register_ResponseParams.options
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, SyncRegistration, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  BackgroundSyncService_Register_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  BackgroundSyncService_Register_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new BackgroundSyncService_Register_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.err = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.options = decoder.decodeStructPointer(SyncRegistration);
    return val;
  };

  BackgroundSyncService_Register_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BackgroundSyncService_Register_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.err);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(SyncRegistration, val.options);
  };
  function BackgroundSyncService_GetRegistrations_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BackgroundSyncService_GetRegistrations_Params.prototype.initDefaults_ = function() {
    this.service_worker_registration_id = 0;
  };
  BackgroundSyncService_GetRegistrations_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  BackgroundSyncService_GetRegistrations_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, BackgroundSyncService_GetRegistrations_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  BackgroundSyncService_GetRegistrations_Params.encodedSize = codec.kStructHeaderSize + 8;

  BackgroundSyncService_GetRegistrations_Params.decode = function(decoder) {
    var packed;
    var val = new BackgroundSyncService_GetRegistrations_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.service_worker_registration_id = decoder.decodeStruct(codec.Int64);
    return val;
  };

  BackgroundSyncService_GetRegistrations_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BackgroundSyncService_GetRegistrations_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.service_worker_registration_id);
  };
  function BackgroundSyncService_GetRegistrations_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BackgroundSyncService_GetRegistrations_ResponseParams.prototype.initDefaults_ = function() {
    this.err = 0;
    this.registrations = null;
  };
  BackgroundSyncService_GetRegistrations_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  BackgroundSyncService_GetRegistrations_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, BackgroundSyncService_GetRegistrations_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate BackgroundSyncService_GetRegistrations_ResponseParams.registrations
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(SyncRegistration), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  BackgroundSyncService_GetRegistrations_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  BackgroundSyncService_GetRegistrations_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new BackgroundSyncService_GetRegistrations_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.err = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.registrations = decoder.decodeArrayPointer(new codec.PointerTo(SyncRegistration));
    return val;
  };

  BackgroundSyncService_GetRegistrations_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BackgroundSyncService_GetRegistrations_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.err);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(new codec.PointerTo(SyncRegistration), val.registrations);
  };
  function BackgroundSyncServiceClient_Sync_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BackgroundSyncServiceClient_Sync_Params.prototype.initDefaults_ = function() {
    this.tag = null;
    this.last_chance = 0;
  };
  BackgroundSyncServiceClient_Sync_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  BackgroundSyncServiceClient_Sync_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, BackgroundSyncServiceClient_Sync_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate BackgroundSyncServiceClient_Sync_Params.tag
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  BackgroundSyncServiceClient_Sync_Params.encodedSize = codec.kStructHeaderSize + 16;

  BackgroundSyncServiceClient_Sync_Params.decode = function(decoder) {
    var packed;
    var val = new BackgroundSyncServiceClient_Sync_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.tag = decoder.decodeStruct(codec.String);
    val.last_chance = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  BackgroundSyncServiceClient_Sync_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BackgroundSyncServiceClient_Sync_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.tag);
    encoder.encodeStruct(codec.Int32, val.last_chance);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function BackgroundSyncServiceClient_Sync_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BackgroundSyncServiceClient_Sync_ResponseParams.prototype.initDefaults_ = function() {
    this.status = 0;
  };
  BackgroundSyncServiceClient_Sync_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  BackgroundSyncServiceClient_Sync_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, BackgroundSyncServiceClient_Sync_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  BackgroundSyncServiceClient_Sync_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  BackgroundSyncServiceClient_Sync_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new BackgroundSyncServiceClient_Sync_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  BackgroundSyncServiceClient_Sync_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BackgroundSyncServiceClient_Sync_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kBackgroundSyncService_Register_Name = 0;
  var kBackgroundSyncService_GetRegistrations_Name = 1;

  function BackgroundSyncServiceProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  BackgroundSyncServiceProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  BackgroundSyncServiceProxy.prototype.register = function(options, service_worker_registration_id) {
    var params = new BackgroundSyncService_Register_Params();
    params.options = options;
    params.service_worker_registration_id = service_worker_registration_id;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kBackgroundSyncService_Register_Name,
          codec.align(BackgroundSyncService_Register_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(BackgroundSyncService_Register_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(BackgroundSyncService_Register_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  BackgroundSyncServiceProxy.prototype.getRegistrations = function(service_worker_registration_id) {
    var params = new BackgroundSyncService_GetRegistrations_Params();
    params.service_worker_registration_id = service_worker_registration_id;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kBackgroundSyncService_GetRegistrations_Name,
          codec.align(BackgroundSyncService_GetRegistrations_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(BackgroundSyncService_GetRegistrations_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(BackgroundSyncService_GetRegistrations_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function BackgroundSyncServiceStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  BackgroundSyncServiceStub.prototype = Object.create(bindings.StubBase.prototype);
  BackgroundSyncServiceStub.prototype.register = function(options, service_worker_registration_id) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.register && bindings.StubBindings(this).delegate.register(options, service_worker_registration_id);
  }
  BackgroundSyncServiceStub.prototype.getRegistrations = function(service_worker_registration_id) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.getRegistrations && bindings.StubBindings(this).delegate.getRegistrations(service_worker_registration_id);
  }

  BackgroundSyncServiceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  BackgroundSyncServiceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kBackgroundSyncService_Register_Name:
      var params = reader.decodeStruct(BackgroundSyncService_Register_Params);
      return this.register(params.options, params.service_worker_registration_id).then(function(response) {
        var responseParams =
            new BackgroundSyncService_Register_ResponseParams();
        responseParams.err = response.err;
        responseParams.options = response.options;
        var builder = new codec.MessageWithRequestIDBuilder(
            kBackgroundSyncService_Register_Name,
            codec.align(BackgroundSyncService_Register_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(BackgroundSyncService_Register_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kBackgroundSyncService_GetRegistrations_Name:
      var params = reader.decodeStruct(BackgroundSyncService_GetRegistrations_Params);
      return this.getRegistrations(params.service_worker_registration_id).then(function(response) {
        var responseParams =
            new BackgroundSyncService_GetRegistrations_ResponseParams();
        responseParams.err = response.err;
        responseParams.registrations = response.registrations;
        var builder = new codec.MessageWithRequestIDBuilder(
            kBackgroundSyncService_GetRegistrations_Name,
            codec.align(BackgroundSyncService_GetRegistrations_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(BackgroundSyncService_GetRegistrations_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateBackgroundSyncServiceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kBackgroundSyncService_Register_Name:
        if (message.expectsResponse())
          paramsClass = BackgroundSyncService_Register_Params;
      break;
      case kBackgroundSyncService_GetRegistrations_Name:
        if (message.expectsResponse())
          paramsClass = BackgroundSyncService_GetRegistrations_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateBackgroundSyncServiceResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kBackgroundSyncService_Register_Name:
        if (message.isResponse())
          paramsClass = BackgroundSyncService_Register_ResponseParams;
        break;
      case kBackgroundSyncService_GetRegistrations_Name:
        if (message.isResponse())
          paramsClass = BackgroundSyncService_GetRegistrations_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var BackgroundSyncService = {
    name: 'blink::mojom::BackgroundSyncService',
    proxyClass: BackgroundSyncServiceProxy,
    stubClass: BackgroundSyncServiceStub,
    validateRequest: validateBackgroundSyncServiceRequest,
    validateResponse: validateBackgroundSyncServiceResponse,
  };
  BackgroundSyncServiceStub.prototype.validator = validateBackgroundSyncServiceRequest;
  BackgroundSyncServiceProxy.prototype.validator = validateBackgroundSyncServiceResponse;
  var kBackgroundSyncServiceClient_Sync_Name = 0;

  function BackgroundSyncServiceClientProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  BackgroundSyncServiceClientProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  BackgroundSyncServiceClientProxy.prototype.sync = function(tag, last_chance) {
    var params = new BackgroundSyncServiceClient_Sync_Params();
    params.tag = tag;
    params.last_chance = last_chance;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kBackgroundSyncServiceClient_Sync_Name,
          codec.align(BackgroundSyncServiceClient_Sync_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(BackgroundSyncServiceClient_Sync_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(BackgroundSyncServiceClient_Sync_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function BackgroundSyncServiceClientStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  BackgroundSyncServiceClientStub.prototype = Object.create(bindings.StubBase.prototype);
  BackgroundSyncServiceClientStub.prototype.sync = function(tag, last_chance) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.sync && bindings.StubBindings(this).delegate.sync(tag, last_chance);
  }

  BackgroundSyncServiceClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  BackgroundSyncServiceClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kBackgroundSyncServiceClient_Sync_Name:
      var params = reader.decodeStruct(BackgroundSyncServiceClient_Sync_Params);
      return this.sync(params.tag, params.last_chance).then(function(response) {
        var responseParams =
            new BackgroundSyncServiceClient_Sync_ResponseParams();
        responseParams.status = response.status;
        var builder = new codec.MessageWithRequestIDBuilder(
            kBackgroundSyncServiceClient_Sync_Name,
            codec.align(BackgroundSyncServiceClient_Sync_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(BackgroundSyncServiceClient_Sync_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateBackgroundSyncServiceClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kBackgroundSyncServiceClient_Sync_Name:
        if (message.expectsResponse())
          paramsClass = BackgroundSyncServiceClient_Sync_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateBackgroundSyncServiceClientResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kBackgroundSyncServiceClient_Sync_Name:
        if (message.isResponse())
          paramsClass = BackgroundSyncServiceClient_Sync_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var BackgroundSyncServiceClient = {
    name: 'blink::mojom::BackgroundSyncServiceClient',
    proxyClass: BackgroundSyncServiceClientProxy,
    stubClass: BackgroundSyncServiceClientStub,
    validateRequest: validateBackgroundSyncServiceClientRequest,
    validateResponse: validateBackgroundSyncServiceClientResponse,
  };
  BackgroundSyncServiceClientStub.prototype.validator = validateBackgroundSyncServiceClientRequest;
  BackgroundSyncServiceClientProxy.prototype.validator = validateBackgroundSyncServiceClientResponse;

  var exports = {};
  exports.BackgroundSyncNetworkState = BackgroundSyncNetworkState;
  exports.BackgroundSyncError = BackgroundSyncError;
  exports.BackgroundSyncState = BackgroundSyncState;
  exports.BackgroundSyncEventLastChance = BackgroundSyncEventLastChance;
  exports.SyncRegistration = SyncRegistration;
  exports.BackgroundSyncService = BackgroundSyncService;
  exports.BackgroundSyncServiceClient = BackgroundSyncServiceClient;

  return exports;
});
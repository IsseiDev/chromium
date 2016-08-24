// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("components/password_manager/content/public/interfaces/credential_manager.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "url/mojo/origin.mojom",
    "url/mojo/url.mojom",
], function(bindings, codec, connection, core, validator, origin$, url$) {
  var CredentialType = {};
  CredentialType.EMPTY = 0;
  CredentialType.PASSWORD = CredentialType.EMPTY + 1;
  CredentialType.FEDERATED = CredentialType.PASSWORD + 1;
  var CredentialManagerError = {};
  CredentialManagerError.SUCCESS = 0;
  CredentialManagerError.DISABLED = CredentialManagerError.SUCCESS + 1;
  CredentialManagerError.PENDINGREQUEST = CredentialManagerError.DISABLED + 1;
  CredentialManagerError.PASSWORDSTOREUNAVAILABLE = CredentialManagerError.PENDINGREQUEST + 1;
  CredentialManagerError.UNKNOWN = CredentialManagerError.PASSWORDSTOREUNAVAILABLE + 1;

  function CredentialInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CredentialInfo.prototype.initDefaults_ = function() {
    this.type = 0;
    this.id = null;
    this.name = null;
    this.icon = null;
    this.password = null;
    this.federation = null;
  };
  CredentialInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  CredentialInfo.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, CredentialInfo.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate CredentialInfo.id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate CredentialInfo.name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate CredentialInfo.icon
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate CredentialInfo.password
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 32, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate CredentialInfo.federation
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 40, origin$.Origin, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CredentialInfo.encodedSize = codec.kStructHeaderSize + 48;

  CredentialInfo.decode = function(decoder) {
    var packed;
    var val = new CredentialInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.type = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.id = decoder.decodeStruct(codec.String);
    val.name = decoder.decodeStruct(codec.String);
    val.icon = decoder.decodeStructPointer(url$.Url);
    val.password = decoder.decodeStruct(codec.String);
    val.federation = decoder.decodeStructPointer(origin$.Origin);
    return val;
  };

  CredentialInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CredentialInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.type);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.id);
    encoder.encodeStruct(codec.String, val.name);
    encoder.encodeStructPointer(url$.Url, val.icon);
    encoder.encodeStruct(codec.String, val.password);
    encoder.encodeStructPointer(origin$.Origin, val.federation);
  };
  function CredentialManager_Store_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CredentialManager_Store_Params.prototype.initDefaults_ = function() {
    this.credential = null;
  };
  CredentialManager_Store_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  CredentialManager_Store_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, CredentialManager_Store_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate CredentialManager_Store_Params.credential
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, CredentialInfo, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CredentialManager_Store_Params.encodedSize = codec.kStructHeaderSize + 8;

  CredentialManager_Store_Params.decode = function(decoder) {
    var packed;
    var val = new CredentialManager_Store_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.credential = decoder.decodeStructPointer(CredentialInfo);
    return val;
  };

  CredentialManager_Store_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CredentialManager_Store_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(CredentialInfo, val.credential);
  };
  function CredentialManager_Store_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CredentialManager_Store_ResponseParams.prototype.initDefaults_ = function() {
  };
  CredentialManager_Store_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  CredentialManager_Store_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, CredentialManager_Store_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CredentialManager_Store_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  CredentialManager_Store_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new CredentialManager_Store_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  CredentialManager_Store_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CredentialManager_Store_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  function CredentialManager_RequireUserMediation_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CredentialManager_RequireUserMediation_Params.prototype.initDefaults_ = function() {
  };
  CredentialManager_RequireUserMediation_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  CredentialManager_RequireUserMediation_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, CredentialManager_RequireUserMediation_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CredentialManager_RequireUserMediation_Params.encodedSize = codec.kStructHeaderSize + 0;

  CredentialManager_RequireUserMediation_Params.decode = function(decoder) {
    var packed;
    var val = new CredentialManager_RequireUserMediation_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  CredentialManager_RequireUserMediation_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CredentialManager_RequireUserMediation_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function CredentialManager_RequireUserMediation_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CredentialManager_RequireUserMediation_ResponseParams.prototype.initDefaults_ = function() {
  };
  CredentialManager_RequireUserMediation_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  CredentialManager_RequireUserMediation_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, CredentialManager_RequireUserMediation_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CredentialManager_RequireUserMediation_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  CredentialManager_RequireUserMediation_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new CredentialManager_RequireUserMediation_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  CredentialManager_RequireUserMediation_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CredentialManager_RequireUserMediation_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  function CredentialManager_Get_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CredentialManager_Get_Params.prototype.initDefaults_ = function() {
    this.zero_click_only = false;
    this.include_passwords = false;
    this.federations = null;
  };
  CredentialManager_Get_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  CredentialManager_Get_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, CredentialManager_Get_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



    
    // validate CredentialManager_Get_Params.federations
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(url$.Url), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CredentialManager_Get_Params.encodedSize = codec.kStructHeaderSize + 16;

  CredentialManager_Get_Params.decode = function(decoder) {
    var packed;
    var val = new CredentialManager_Get_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.zero_click_only = (packed >> 0) & 1 ? true : false;
    val.include_passwords = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.federations = decoder.decodeArrayPointer(new codec.PointerTo(url$.Url));
    return val;
  };

  CredentialManager_Get_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CredentialManager_Get_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.zero_click_only & 1) << 0
    packed |= (val.include_passwords & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(new codec.PointerTo(url$.Url), val.federations);
  };
  function CredentialManager_Get_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CredentialManager_Get_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
    this.credential = null;
  };
  CredentialManager_Get_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  CredentialManager_Get_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, CredentialManager_Get_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate CredentialManager_Get_ResponseParams.credential
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, CredentialInfo, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CredentialManager_Get_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  CredentialManager_Get_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new CredentialManager_Get_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.credential = decoder.decodeStructPointer(CredentialInfo);
    return val;
  };

  CredentialManager_Get_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CredentialManager_Get_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(CredentialInfo, val.credential);
  };
  var kCredentialManager_Store_Name = 0;
  var kCredentialManager_RequireUserMediation_Name = 1;
  var kCredentialManager_Get_Name = 2;

  function CredentialManagerProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  CredentialManagerProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  CredentialManagerProxy.prototype.store = function(credential) {
    var params = new CredentialManager_Store_Params();
    params.credential = credential;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kCredentialManager_Store_Name,
          codec.align(CredentialManager_Store_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(CredentialManager_Store_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(CredentialManager_Store_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  CredentialManagerProxy.prototype.requireUserMediation = function() {
    var params = new CredentialManager_RequireUserMediation_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kCredentialManager_RequireUserMediation_Name,
          codec.align(CredentialManager_RequireUserMediation_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(CredentialManager_RequireUserMediation_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(CredentialManager_RequireUserMediation_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  CredentialManagerProxy.prototype.get = function(zero_click_only, include_passwords, federations) {
    var params = new CredentialManager_Get_Params();
    params.zero_click_only = zero_click_only;
    params.include_passwords = include_passwords;
    params.federations = federations;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kCredentialManager_Get_Name,
          codec.align(CredentialManager_Get_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(CredentialManager_Get_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(CredentialManager_Get_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function CredentialManagerStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  CredentialManagerStub.prototype = Object.create(bindings.StubBase.prototype);
  CredentialManagerStub.prototype.store = function(credential) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.store && bindings.StubBindings(this).delegate.store(credential);
  }
  CredentialManagerStub.prototype.requireUserMediation = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.requireUserMediation && bindings.StubBindings(this).delegate.requireUserMediation();
  }
  CredentialManagerStub.prototype.get = function(zero_click_only, include_passwords, federations) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.get && bindings.StubBindings(this).delegate.get(zero_click_only, include_passwords, federations);
  }

  CredentialManagerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  CredentialManagerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kCredentialManager_Store_Name:
      var params = reader.decodeStruct(CredentialManager_Store_Params);
      return this.store(params.credential).then(function(response) {
        var responseParams =
            new CredentialManager_Store_ResponseParams();
        var builder = new codec.MessageWithRequestIDBuilder(
            kCredentialManager_Store_Name,
            codec.align(CredentialManager_Store_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(CredentialManager_Store_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kCredentialManager_RequireUserMediation_Name:
      var params = reader.decodeStruct(CredentialManager_RequireUserMediation_Params);
      return this.requireUserMediation().then(function(response) {
        var responseParams =
            new CredentialManager_RequireUserMediation_ResponseParams();
        var builder = new codec.MessageWithRequestIDBuilder(
            kCredentialManager_RequireUserMediation_Name,
            codec.align(CredentialManager_RequireUserMediation_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(CredentialManager_RequireUserMediation_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kCredentialManager_Get_Name:
      var params = reader.decodeStruct(CredentialManager_Get_Params);
      return this.get(params.zero_click_only, params.include_passwords, params.federations).then(function(response) {
        var responseParams =
            new CredentialManager_Get_ResponseParams();
        responseParams.error = response.error;
        responseParams.credential = response.credential;
        var builder = new codec.MessageWithRequestIDBuilder(
            kCredentialManager_Get_Name,
            codec.align(CredentialManager_Get_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(CredentialManager_Get_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateCredentialManagerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kCredentialManager_Store_Name:
        if (message.expectsResponse())
          paramsClass = CredentialManager_Store_Params;
      break;
      case kCredentialManager_RequireUserMediation_Name:
        if (message.expectsResponse())
          paramsClass = CredentialManager_RequireUserMediation_Params;
      break;
      case kCredentialManager_Get_Name:
        if (message.expectsResponse())
          paramsClass = CredentialManager_Get_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateCredentialManagerResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kCredentialManager_Store_Name:
        if (message.isResponse())
          paramsClass = CredentialManager_Store_ResponseParams;
        break;
      case kCredentialManager_RequireUserMediation_Name:
        if (message.isResponse())
          paramsClass = CredentialManager_RequireUserMediation_ResponseParams;
        break;
      case kCredentialManager_Get_Name:
        if (message.isResponse())
          paramsClass = CredentialManager_Get_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var CredentialManager = {
    name: 'password_manager::mojom::CredentialManager',
    proxyClass: CredentialManagerProxy,
    stubClass: CredentialManagerStub,
    validateRequest: validateCredentialManagerRequest,
    validateResponse: validateCredentialManagerResponse,
  };
  CredentialManagerStub.prototype.validator = validateCredentialManagerRequest;
  CredentialManagerProxy.prototype.validator = validateCredentialManagerResponse;

  var exports = {};
  exports.CredentialType = CredentialType;
  exports.CredentialManagerError = CredentialManagerError;
  exports.CredentialInfo = CredentialInfo;
  exports.CredentialManager = CredentialManager;

  return exports;
});
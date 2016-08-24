// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("services/shell/public/interfaces/resolver.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "mojo/common/common_custom_types.mojom",
    "services/shell/public/interfaces/capabilities.mojom",
], function(bindings, codec, connection, core, validator, common_custom_types$, capabilities$) {

  function ResolveResult(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ResolveResult.prototype.initDefaults_ = function() {
    this.name = null;
    this.resolved_name = null;
    this.qualifier = null;
    this.capabilities = null;
    this.package_path = null;
  };
  ResolveResult.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ResolveResult.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ResolveResult.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ResolveResult.name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ResolveResult.resolved_name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ResolveResult.qualifier
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ResolveResult.capabilities
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, capabilities$.CapabilitySpec, true);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ResolveResult.package_path
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, common_custom_types$.FilePath, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ResolveResult.encodedSize = codec.kStructHeaderSize + 40;

  ResolveResult.decode = function(decoder) {
    var packed;
    var val = new ResolveResult();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.name = decoder.decodeStruct(codec.String);
    val.resolved_name = decoder.decodeStruct(codec.String);
    val.qualifier = decoder.decodeStruct(codec.String);
    val.capabilities = decoder.decodeStructPointer(capabilities$.CapabilitySpec);
    val.package_path = decoder.decodeStructPointer(common_custom_types$.FilePath);
    return val;
  };

  ResolveResult.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ResolveResult.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.name);
    encoder.encodeStruct(codec.String, val.resolved_name);
    encoder.encodeStruct(codec.String, val.qualifier);
    encoder.encodeStructPointer(capabilities$.CapabilitySpec, val.capabilities);
    encoder.encodeStructPointer(common_custom_types$.FilePath, val.package_path);
  };
  function Resolver_ResolveMojoName_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Resolver_ResolveMojoName_Params.prototype.initDefaults_ = function() {
    this.mojo_name = null;
  };
  Resolver_ResolveMojoName_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Resolver_ResolveMojoName_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Resolver_ResolveMojoName_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Resolver_ResolveMojoName_Params.mojo_name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Resolver_ResolveMojoName_Params.encodedSize = codec.kStructHeaderSize + 8;

  Resolver_ResolveMojoName_Params.decode = function(decoder) {
    var packed;
    var val = new Resolver_ResolveMojoName_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.mojo_name = decoder.decodeStruct(codec.String);
    return val;
  };

  Resolver_ResolveMojoName_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Resolver_ResolveMojoName_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.mojo_name);
  };
  function Resolver_ResolveMojoName_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Resolver_ResolveMojoName_ResponseParams.prototype.initDefaults_ = function() {
    this.result = null;
  };
  Resolver_ResolveMojoName_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Resolver_ResolveMojoName_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Resolver_ResolveMojoName_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Resolver_ResolveMojoName_ResponseParams.result
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, ResolveResult, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Resolver_ResolveMojoName_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Resolver_ResolveMojoName_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Resolver_ResolveMojoName_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStructPointer(ResolveResult);
    return val;
  };

  Resolver_ResolveMojoName_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Resolver_ResolveMojoName_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(ResolveResult, val.result);
  };
  var kResolver_ResolveMojoName_Name = 0;

  function ResolverProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  ResolverProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  ResolverProxy.prototype.resolveMojoName = function(mojo_name) {
    var params = new Resolver_ResolveMojoName_Params();
    params.mojo_name = mojo_name;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kResolver_ResolveMojoName_Name,
          codec.align(Resolver_ResolveMojoName_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Resolver_ResolveMojoName_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Resolver_ResolveMojoName_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function ResolverStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  ResolverStub.prototype = Object.create(bindings.StubBase.prototype);
  ResolverStub.prototype.resolveMojoName = function(mojo_name) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.resolveMojoName && bindings.StubBindings(this).delegate.resolveMojoName(mojo_name);
  }

  ResolverStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  ResolverStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kResolver_ResolveMojoName_Name:
      var params = reader.decodeStruct(Resolver_ResolveMojoName_Params);
      return this.resolveMojoName(params.mojo_name).then(function(response) {
        var responseParams =
            new Resolver_ResolveMojoName_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageWithRequestIDBuilder(
            kResolver_ResolveMojoName_Name,
            codec.align(Resolver_ResolveMojoName_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Resolver_ResolveMojoName_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateResolverRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kResolver_ResolveMojoName_Name:
        if (message.expectsResponse())
          paramsClass = Resolver_ResolveMojoName_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateResolverResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kResolver_ResolveMojoName_Name:
        if (message.isResponse())
          paramsClass = Resolver_ResolveMojoName_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var Resolver = {
    name: 'shell::mojom::Resolver',
    proxyClass: ResolverProxy,
    stubClass: ResolverStub,
    validateRequest: validateResolverRequest,
    validateResponse: validateResolverResponse,
  };
  ResolverStub.prototype.validator = validateResolverRequest;
  ResolverProxy.prototype.validator = validateResolverResponse;

  var exports = {};
  exports.ResolveResult = ResolveResult;
  exports.Resolver = Resolver;

  return exports;
});
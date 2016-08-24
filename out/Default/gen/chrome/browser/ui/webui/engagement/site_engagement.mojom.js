// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("chrome/browser/ui/webui/engagement/site_engagement.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "url/mojo/url.mojom",
], function(bindings, codec, connection, core, validator, url$) {

  function SiteEngagementInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SiteEngagementInfo.prototype.initDefaults_ = function() {
    this.origin = null;
    this.score = 0;
  };
  SiteEngagementInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  SiteEngagementInfo.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, SiteEngagementInfo.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate SiteEngagementInfo.origin
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  SiteEngagementInfo.encodedSize = codec.kStructHeaderSize + 16;

  SiteEngagementInfo.decode = function(decoder) {
    var packed;
    var val = new SiteEngagementInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.origin = decoder.decodeStructPointer(url$.Url);
    val.score = decoder.decodeStruct(codec.Double);
    return val;
  };

  SiteEngagementInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SiteEngagementInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.origin);
    encoder.encodeStruct(codec.Double, val.score);
  };
  function SiteEngagementUIHandler_GetSiteEngagementInfo_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SiteEngagementUIHandler_GetSiteEngagementInfo_Params.prototype.initDefaults_ = function() {
  };
  SiteEngagementUIHandler_GetSiteEngagementInfo_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  SiteEngagementUIHandler_GetSiteEngagementInfo_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, SiteEngagementUIHandler_GetSiteEngagementInfo_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SiteEngagementUIHandler_GetSiteEngagementInfo_Params.encodedSize = codec.kStructHeaderSize + 0;

  SiteEngagementUIHandler_GetSiteEngagementInfo_Params.decode = function(decoder) {
    var packed;
    var val = new SiteEngagementUIHandler_GetSiteEngagementInfo_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  SiteEngagementUIHandler_GetSiteEngagementInfo_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SiteEngagementUIHandler_GetSiteEngagementInfo_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function SiteEngagementUIHandler_GetSiteEngagementInfo_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SiteEngagementUIHandler_GetSiteEngagementInfo_ResponseParams.prototype.initDefaults_ = function() {
    this.info = null;
  };
  SiteEngagementUIHandler_GetSiteEngagementInfo_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  SiteEngagementUIHandler_GetSiteEngagementInfo_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, SiteEngagementUIHandler_GetSiteEngagementInfo_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate SiteEngagementUIHandler_GetSiteEngagementInfo_ResponseParams.info
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(SiteEngagementInfo), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SiteEngagementUIHandler_GetSiteEngagementInfo_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  SiteEngagementUIHandler_GetSiteEngagementInfo_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new SiteEngagementUIHandler_GetSiteEngagementInfo_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.info = decoder.decodeArrayPointer(new codec.PointerTo(SiteEngagementInfo));
    return val;
  };

  SiteEngagementUIHandler_GetSiteEngagementInfo_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SiteEngagementUIHandler_GetSiteEngagementInfo_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(SiteEngagementInfo), val.info);
  };
  function SiteEngagementUIHandler_SetSiteEngagementScoreForOrigin_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SiteEngagementUIHandler_SetSiteEngagementScoreForOrigin_Params.prototype.initDefaults_ = function() {
    this.origin = null;
    this.score = 0;
  };
  SiteEngagementUIHandler_SetSiteEngagementScoreForOrigin_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  SiteEngagementUIHandler_SetSiteEngagementScoreForOrigin_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, SiteEngagementUIHandler_SetSiteEngagementScoreForOrigin_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate SiteEngagementUIHandler_SetSiteEngagementScoreForOrigin_Params.origin
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  SiteEngagementUIHandler_SetSiteEngagementScoreForOrigin_Params.encodedSize = codec.kStructHeaderSize + 16;

  SiteEngagementUIHandler_SetSiteEngagementScoreForOrigin_Params.decode = function(decoder) {
    var packed;
    var val = new SiteEngagementUIHandler_SetSiteEngagementScoreForOrigin_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.origin = decoder.decodeStructPointer(url$.Url);
    val.score = decoder.decodeStruct(codec.Double);
    return val;
  };

  SiteEngagementUIHandler_SetSiteEngagementScoreForOrigin_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SiteEngagementUIHandler_SetSiteEngagementScoreForOrigin_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.origin);
    encoder.encodeStruct(codec.Double, val.score);
  };
  var kSiteEngagementUIHandler_GetSiteEngagementInfo_Name = 0;
  var kSiteEngagementUIHandler_SetSiteEngagementScoreForOrigin_Name = 1;

  function SiteEngagementUIHandlerProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  SiteEngagementUIHandlerProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  SiteEngagementUIHandlerProxy.prototype.getSiteEngagementInfo = function() {
    var params = new SiteEngagementUIHandler_GetSiteEngagementInfo_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kSiteEngagementUIHandler_GetSiteEngagementInfo_Name,
          codec.align(SiteEngagementUIHandler_GetSiteEngagementInfo_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(SiteEngagementUIHandler_GetSiteEngagementInfo_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(SiteEngagementUIHandler_GetSiteEngagementInfo_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  SiteEngagementUIHandlerProxy.prototype.setSiteEngagementScoreForOrigin = function(origin, score) {
    var params = new SiteEngagementUIHandler_SetSiteEngagementScoreForOrigin_Params();
    params.origin = origin;
    params.score = score;
    var builder = new codec.MessageBuilder(
        kSiteEngagementUIHandler_SetSiteEngagementScoreForOrigin_Name,
        codec.align(SiteEngagementUIHandler_SetSiteEngagementScoreForOrigin_Params.encodedSize));
    builder.encodeStruct(SiteEngagementUIHandler_SetSiteEngagementScoreForOrigin_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function SiteEngagementUIHandlerStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  SiteEngagementUIHandlerStub.prototype = Object.create(bindings.StubBase.prototype);
  SiteEngagementUIHandlerStub.prototype.getSiteEngagementInfo = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.getSiteEngagementInfo && bindings.StubBindings(this).delegate.getSiteEngagementInfo();
  }
  SiteEngagementUIHandlerStub.prototype.setSiteEngagementScoreForOrigin = function(origin, score) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.setSiteEngagementScoreForOrigin && bindings.StubBindings(this).delegate.setSiteEngagementScoreForOrigin(origin, score);
  }

  SiteEngagementUIHandlerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kSiteEngagementUIHandler_SetSiteEngagementScoreForOrigin_Name:
      var params = reader.decodeStruct(SiteEngagementUIHandler_SetSiteEngagementScoreForOrigin_Params);
      this.setSiteEngagementScoreForOrigin(params.origin, params.score);
      return true;
    default:
      return false;
    }
  };

  SiteEngagementUIHandlerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kSiteEngagementUIHandler_GetSiteEngagementInfo_Name:
      var params = reader.decodeStruct(SiteEngagementUIHandler_GetSiteEngagementInfo_Params);
      return this.getSiteEngagementInfo().then(function(response) {
        var responseParams =
            new SiteEngagementUIHandler_GetSiteEngagementInfo_ResponseParams();
        responseParams.info = response.info;
        var builder = new codec.MessageWithRequestIDBuilder(
            kSiteEngagementUIHandler_GetSiteEngagementInfo_Name,
            codec.align(SiteEngagementUIHandler_GetSiteEngagementInfo_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(SiteEngagementUIHandler_GetSiteEngagementInfo_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateSiteEngagementUIHandlerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kSiteEngagementUIHandler_GetSiteEngagementInfo_Name:
        if (message.expectsResponse())
          paramsClass = SiteEngagementUIHandler_GetSiteEngagementInfo_Params;
      break;
      case kSiteEngagementUIHandler_SetSiteEngagementScoreForOrigin_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SiteEngagementUIHandler_SetSiteEngagementScoreForOrigin_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateSiteEngagementUIHandlerResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kSiteEngagementUIHandler_GetSiteEngagementInfo_Name:
        if (message.isResponse())
          paramsClass = SiteEngagementUIHandler_GetSiteEngagementInfo_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var SiteEngagementUIHandler = {
    name: 'mojom::SiteEngagementUIHandler',
    proxyClass: SiteEngagementUIHandlerProxy,
    stubClass: SiteEngagementUIHandlerStub,
    validateRequest: validateSiteEngagementUIHandlerRequest,
    validateResponse: validateSiteEngagementUIHandlerResponse,
  };
  SiteEngagementUIHandlerStub.prototype.validator = validateSiteEngagementUIHandlerRequest;
  SiteEngagementUIHandlerProxy.prototype.validator = validateSiteEngagementUIHandlerResponse;

  var exports = {};
  exports.SiteEngagementInfo = SiteEngagementInfo;
  exports.SiteEngagementUIHandler = SiteEngagementUIHandler;

  return exports;
});
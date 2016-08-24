// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("content/common/render_frame_message_filter.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "url/mojo/url.mojom",
], function(bindings, codec, connection, core, validator, url$) {

  function RenderFrameMessageFilter_SetCookie_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RenderFrameMessageFilter_SetCookie_Params.prototype.initDefaults_ = function() {
    this.render_frame_id = 0;
    this.url = null;
    this.first_party_for_cookies = null;
    this.cookie = null;
  };
  RenderFrameMessageFilter_SetCookie_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  RenderFrameMessageFilter_SetCookie_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, RenderFrameMessageFilter_SetCookie_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate RenderFrameMessageFilter_SetCookie_Params.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate RenderFrameMessageFilter_SetCookie_Params.first_party_for_cookies
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate RenderFrameMessageFilter_SetCookie_Params.cookie
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 24, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RenderFrameMessageFilter_SetCookie_Params.encodedSize = codec.kStructHeaderSize + 32;

  RenderFrameMessageFilter_SetCookie_Params.decode = function(decoder) {
    var packed;
    var val = new RenderFrameMessageFilter_SetCookie_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.render_frame_id = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.url = decoder.decodeStructPointer(url$.Url);
    val.first_party_for_cookies = decoder.decodeStructPointer(url$.Url);
    val.cookie = decoder.decodeStruct(codec.String);
    return val;
  };

  RenderFrameMessageFilter_SetCookie_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RenderFrameMessageFilter_SetCookie_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.render_frame_id);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(url$.Url, val.url);
    encoder.encodeStructPointer(url$.Url, val.first_party_for_cookies);
    encoder.encodeStruct(codec.String, val.cookie);
  };
  function RenderFrameMessageFilter_GetCookies_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RenderFrameMessageFilter_GetCookies_Params.prototype.initDefaults_ = function() {
    this.render_frame_id = 0;
    this.url = null;
    this.first_party_for_cookies = null;
  };
  RenderFrameMessageFilter_GetCookies_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  RenderFrameMessageFilter_GetCookies_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, RenderFrameMessageFilter_GetCookies_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate RenderFrameMessageFilter_GetCookies_Params.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate RenderFrameMessageFilter_GetCookies_Params.first_party_for_cookies
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RenderFrameMessageFilter_GetCookies_Params.encodedSize = codec.kStructHeaderSize + 24;

  RenderFrameMessageFilter_GetCookies_Params.decode = function(decoder) {
    var packed;
    var val = new RenderFrameMessageFilter_GetCookies_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.render_frame_id = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.url = decoder.decodeStructPointer(url$.Url);
    val.first_party_for_cookies = decoder.decodeStructPointer(url$.Url);
    return val;
  };

  RenderFrameMessageFilter_GetCookies_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RenderFrameMessageFilter_GetCookies_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.render_frame_id);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(url$.Url, val.url);
    encoder.encodeStructPointer(url$.Url, val.first_party_for_cookies);
  };
  function RenderFrameMessageFilter_GetCookies_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RenderFrameMessageFilter_GetCookies_ResponseParams.prototype.initDefaults_ = function() {
    this.cookies = null;
  };
  RenderFrameMessageFilter_GetCookies_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  RenderFrameMessageFilter_GetCookies_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, RenderFrameMessageFilter_GetCookies_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate RenderFrameMessageFilter_GetCookies_ResponseParams.cookies
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RenderFrameMessageFilter_GetCookies_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  RenderFrameMessageFilter_GetCookies_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new RenderFrameMessageFilter_GetCookies_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.cookies = decoder.decodeStruct(codec.String);
    return val;
  };

  RenderFrameMessageFilter_GetCookies_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RenderFrameMessageFilter_GetCookies_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.cookies);
  };
  var kRenderFrameMessageFilter_SetCookie_Name = 0;
  var kRenderFrameMessageFilter_GetCookies_Name = 1;

  function RenderFrameMessageFilterProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  RenderFrameMessageFilterProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  RenderFrameMessageFilterProxy.prototype.setCookie = function(render_frame_id, url, first_party_for_cookies, cookie) {
    var params = new RenderFrameMessageFilter_SetCookie_Params();
    params.render_frame_id = render_frame_id;
    params.url = url;
    params.first_party_for_cookies = first_party_for_cookies;
    params.cookie = cookie;
    var builder = new codec.MessageBuilder(
        kRenderFrameMessageFilter_SetCookie_Name,
        codec.align(RenderFrameMessageFilter_SetCookie_Params.encodedSize));
    builder.encodeStruct(RenderFrameMessageFilter_SetCookie_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RenderFrameMessageFilterProxy.prototype.getCookies = function(render_frame_id, url, first_party_for_cookies) {
    var params = new RenderFrameMessageFilter_GetCookies_Params();
    params.render_frame_id = render_frame_id;
    params.url = url;
    params.first_party_for_cookies = first_party_for_cookies;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kRenderFrameMessageFilter_GetCookies_Name,
          codec.align(RenderFrameMessageFilter_GetCookies_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(RenderFrameMessageFilter_GetCookies_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(RenderFrameMessageFilter_GetCookies_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function RenderFrameMessageFilterStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  RenderFrameMessageFilterStub.prototype = Object.create(bindings.StubBase.prototype);
  RenderFrameMessageFilterStub.prototype.setCookie = function(render_frame_id, url, first_party_for_cookies, cookie) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.setCookie && bindings.StubBindings(this).delegate.setCookie(render_frame_id, url, first_party_for_cookies, cookie);
  }
  RenderFrameMessageFilterStub.prototype.getCookies = function(render_frame_id, url, first_party_for_cookies) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.getCookies && bindings.StubBindings(this).delegate.getCookies(render_frame_id, url, first_party_for_cookies);
  }

  RenderFrameMessageFilterStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kRenderFrameMessageFilter_SetCookie_Name:
      var params = reader.decodeStruct(RenderFrameMessageFilter_SetCookie_Params);
      this.setCookie(params.render_frame_id, params.url, params.first_party_for_cookies, params.cookie);
      return true;
    default:
      return false;
    }
  };

  RenderFrameMessageFilterStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kRenderFrameMessageFilter_GetCookies_Name:
      var params = reader.decodeStruct(RenderFrameMessageFilter_GetCookies_Params);
      return this.getCookies(params.render_frame_id, params.url, params.first_party_for_cookies).then(function(response) {
        var responseParams =
            new RenderFrameMessageFilter_GetCookies_ResponseParams();
        responseParams.cookies = response.cookies;
        var builder = new codec.MessageWithRequestIDBuilder(
            kRenderFrameMessageFilter_GetCookies_Name,
            codec.align(RenderFrameMessageFilter_GetCookies_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(RenderFrameMessageFilter_GetCookies_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateRenderFrameMessageFilterRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kRenderFrameMessageFilter_SetCookie_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = RenderFrameMessageFilter_SetCookie_Params;
      break;
      case kRenderFrameMessageFilter_GetCookies_Name:
        if (message.expectsResponse())
          paramsClass = RenderFrameMessageFilter_GetCookies_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateRenderFrameMessageFilterResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kRenderFrameMessageFilter_GetCookies_Name:
        if (message.isResponse())
          paramsClass = RenderFrameMessageFilter_GetCookies_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var RenderFrameMessageFilter = {
    name: 'content::mojom::RenderFrameMessageFilter',
    proxyClass: RenderFrameMessageFilterProxy,
    stubClass: RenderFrameMessageFilterStub,
    validateRequest: validateRenderFrameMessageFilterRequest,
    validateResponse: validateRenderFrameMessageFilterResponse,
  };
  RenderFrameMessageFilterStub.prototype.validator = validateRenderFrameMessageFilterRequest;
  RenderFrameMessageFilterProxy.prototype.validator = validateRenderFrameMessageFilterResponse;

  var exports = {};
  exports.RenderFrameMessageFilter = RenderFrameMessageFilter;

  return exports;
});
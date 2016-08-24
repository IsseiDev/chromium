// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("third_party/WebKit/public/platform/modules/webshare/webshare.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {

  function ShareService_Share_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ShareService_Share_Params.prototype.initDefaults_ = function() {
    this.title = null;
    this.text = null;
  };
  ShareService_Share_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ShareService_Share_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ShareService_Share_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ShareService_Share_Params.title
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ShareService_Share_Params.text
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ShareService_Share_Params.encodedSize = codec.kStructHeaderSize + 16;

  ShareService_Share_Params.decode = function(decoder) {
    var packed;
    var val = new ShareService_Share_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.title = decoder.decodeStruct(codec.String);
    val.text = decoder.decodeStruct(codec.String);
    return val;
  };

  ShareService_Share_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ShareService_Share_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.title);
    encoder.encodeStruct(codec.String, val.text);
  };
  function ShareService_Share_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ShareService_Share_ResponseParams.prototype.initDefaults_ = function() {
    this.error = null;
  };
  ShareService_Share_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ShareService_Share_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ShareService_Share_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ShareService_Share_ResponseParams.error
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ShareService_Share_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  ShareService_Share_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ShareService_Share_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.NullableString);
    return val;
  };

  ShareService_Share_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ShareService_Share_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.NullableString, val.error);
  };
  var kShareService_Share_Name = 0;

  function ShareServiceProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  ShareServiceProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  ShareServiceProxy.prototype.share = function(title, text) {
    var params = new ShareService_Share_Params();
    params.title = title;
    params.text = text;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kShareService_Share_Name,
          codec.align(ShareService_Share_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ShareService_Share_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ShareService_Share_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function ShareServiceStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  ShareServiceStub.prototype = Object.create(bindings.StubBase.prototype);
  ShareServiceStub.prototype.share = function(title, text) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.share && bindings.StubBindings(this).delegate.share(title, text);
  }

  ShareServiceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  ShareServiceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kShareService_Share_Name:
      var params = reader.decodeStruct(ShareService_Share_Params);
      return this.share(params.title, params.text).then(function(response) {
        var responseParams =
            new ShareService_Share_ResponseParams();
        responseParams.error = response.error;
        var builder = new codec.MessageWithRequestIDBuilder(
            kShareService_Share_Name,
            codec.align(ShareService_Share_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ShareService_Share_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateShareServiceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kShareService_Share_Name:
        if (message.expectsResponse())
          paramsClass = ShareService_Share_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateShareServiceResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kShareService_Share_Name:
        if (message.isResponse())
          paramsClass = ShareService_Share_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var ShareService = {
    name: 'blink::mojom::ShareService',
    proxyClass: ShareServiceProxy,
    stubClass: ShareServiceStub,
    validateRequest: validateShareServiceRequest,
    validateResponse: validateShareServiceResponse,
  };
  ShareServiceStub.prototype.validator = validateShareServiceRequest;
  ShareServiceProxy.prototype.validator = validateShareServiceResponse;

  var exports = {};
  exports.ShareService = ShareService;

  return exports;
});
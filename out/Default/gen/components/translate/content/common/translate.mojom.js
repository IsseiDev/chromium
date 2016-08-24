// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("components/translate/content/common/translate.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "mojo/common/common_custom_types.mojom",
    "url/mojo/url.mojom",
], function(bindings, codec, connection, core, validator, common_custom_types$, url$) {
  var TranslateError = {};
  TranslateError.NONE = 0;
  TranslateError.NETWORK = TranslateError.NONE + 1;
  TranslateError.INITIALIZATION_ERROR = TranslateError.NETWORK + 1;
  TranslateError.UNKNOWN_LANGUAGE = TranslateError.INITIALIZATION_ERROR + 1;
  TranslateError.UNSUPPORTED_LANGUAGE = TranslateError.UNKNOWN_LANGUAGE + 1;
  TranslateError.IDENTICAL_LANGUAGES = TranslateError.UNSUPPORTED_LANGUAGE + 1;
  TranslateError.TRANSLATION_ERROR = TranslateError.IDENTICAL_LANGUAGES + 1;
  TranslateError.TRANSLATION_TIMEOUT = TranslateError.TRANSLATION_ERROR + 1;
  TranslateError.UNEXPECTED_SCRIPT_ERROR = TranslateError.TRANSLATION_TIMEOUT + 1;
  TranslateError.BAD_ORIGIN = TranslateError.UNEXPECTED_SCRIPT_ERROR + 1;
  TranslateError.SCRIPT_LOAD_ERROR = TranslateError.BAD_ORIGIN + 1;
  TranslateError.TRANSLATE_ERROR_MAX = TranslateError.SCRIPT_LOAD_ERROR + 1;

  function LanguageDetectionDetails(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LanguageDetectionDetails.prototype.initDefaults_ = function() {
    this.time = null;
    this.url = null;
    this.content_language = null;
    this.cld_language = null;
    this.is_cld_reliable = false;
    this.has_notranslate = false;
    this.html_root_language = null;
    this.adopted_language = null;
    this.contents = null;
  };
  LanguageDetectionDetails.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  LanguageDetectionDetails.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, LanguageDetectionDetails.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate LanguageDetectionDetails.time
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, common_custom_types$.Time, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate LanguageDetectionDetails.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate LanguageDetectionDetails.content_language
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate LanguageDetectionDetails.cld_language
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 24, false)
    if (err !== validator.validationError.NONE)
        return err;



    
    // validate LanguageDetectionDetails.html_root_language
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 40, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate LanguageDetectionDetails.adopted_language
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 48, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate LanguageDetectionDetails.contents
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 56, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LanguageDetectionDetails.encodedSize = codec.kStructHeaderSize + 64;

  LanguageDetectionDetails.decode = function(decoder) {
    var packed;
    var val = new LanguageDetectionDetails();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.time = decoder.decodeStructPointer(common_custom_types$.Time);
    val.url = decoder.decodeStructPointer(url$.Url);
    val.content_language = decoder.decodeStruct(codec.String);
    val.cld_language = decoder.decodeStruct(codec.String);
    packed = decoder.readUint8();
    val.is_cld_reliable = (packed >> 0) & 1 ? true : false;
    val.has_notranslate = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.html_root_language = decoder.decodeStruct(codec.String);
    val.adopted_language = decoder.decodeStruct(codec.String);
    val.contents = decoder.decodeStruct(codec.String);
    return val;
  };

  LanguageDetectionDetails.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LanguageDetectionDetails.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(common_custom_types$.Time, val.time);
    encoder.encodeStructPointer(url$.Url, val.url);
    encoder.encodeStruct(codec.String, val.content_language);
    encoder.encodeStruct(codec.String, val.cld_language);
    packed = 0;
    packed |= (val.is_cld_reliable & 1) << 0
    packed |= (val.has_notranslate & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.html_root_language);
    encoder.encodeStruct(codec.String, val.adopted_language);
    encoder.encodeStruct(codec.String, val.contents);
  };
  function Page_Translate_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Page_Translate_Params.prototype.initDefaults_ = function() {
    this.translate_script = null;
    this.source_lang = null;
    this.target_lang = null;
  };
  Page_Translate_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Page_Translate_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Page_Translate_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Page_Translate_Params.translate_script
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Page_Translate_Params.source_lang
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Page_Translate_Params.target_lang
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Page_Translate_Params.encodedSize = codec.kStructHeaderSize + 24;

  Page_Translate_Params.decode = function(decoder) {
    var packed;
    var val = new Page_Translate_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.translate_script = decoder.decodeStruct(codec.String);
    val.source_lang = decoder.decodeStruct(codec.String);
    val.target_lang = decoder.decodeStruct(codec.String);
    return val;
  };

  Page_Translate_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Page_Translate_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.translate_script);
    encoder.encodeStruct(codec.String, val.source_lang);
    encoder.encodeStruct(codec.String, val.target_lang);
  };
  function Page_Translate_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Page_Translate_ResponseParams.prototype.initDefaults_ = function() {
    this.cancelled = false;
    this.error = 0;
    this.original_lang = null;
    this.translated_lang = null;
  };
  Page_Translate_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Page_Translate_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Page_Translate_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



    
    // validate Page_Translate_ResponseParams.original_lang
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Page_Translate_ResponseParams.translated_lang
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Page_Translate_ResponseParams.encodedSize = codec.kStructHeaderSize + 24;

  Page_Translate_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Page_Translate_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.cancelled = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.error = decoder.decodeStruct(codec.Int32);
    val.original_lang = decoder.decodeStruct(codec.String);
    val.translated_lang = decoder.decodeStruct(codec.String);
    return val;
  };

  Page_Translate_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Page_Translate_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint8, val.cancelled);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.encodeStruct(codec.String, val.original_lang);
    encoder.encodeStruct(codec.String, val.translated_lang);
  };
  function Page_RevertTranslation_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Page_RevertTranslation_Params.prototype.initDefaults_ = function() {
  };
  Page_RevertTranslation_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Page_RevertTranslation_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Page_RevertTranslation_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Page_RevertTranslation_Params.encodedSize = codec.kStructHeaderSize + 0;

  Page_RevertTranslation_Params.decode = function(decoder) {
    var packed;
    var val = new Page_RevertTranslation_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Page_RevertTranslation_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Page_RevertTranslation_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function ContentTranslateDriver_RegisterPage_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ContentTranslateDriver_RegisterPage_Params.prototype.initDefaults_ = function() {
    this.page = null;
    this.details = null;
    this.page_needs_translation = false;
  };
  ContentTranslateDriver_RegisterPage_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ContentTranslateDriver_RegisterPage_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ContentTranslateDriver_RegisterPage_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ContentTranslateDriver_RegisterPage_Params.page
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ContentTranslateDriver_RegisterPage_Params.details
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, LanguageDetectionDetails, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  ContentTranslateDriver_RegisterPage_Params.encodedSize = codec.kStructHeaderSize + 24;

  ContentTranslateDriver_RegisterPage_Params.decode = function(decoder) {
    var packed;
    var val = new ContentTranslateDriver_RegisterPage_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.page = decoder.decodeStruct(codec.Interface);
    val.details = decoder.decodeStructPointer(LanguageDetectionDetails);
    val.page_needs_translation = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ContentTranslateDriver_RegisterPage_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ContentTranslateDriver_RegisterPage_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Interface, val.page);
    encoder.encodeStructPointer(LanguageDetectionDetails, val.details);
    encoder.encodeStruct(codec.Uint8, val.page_needs_translation);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kPage_Translate_Name = 0;
  var kPage_RevertTranslation_Name = 1;

  function PageProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  PageProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  PageProxy.prototype.translate = function(translate_script, source_lang, target_lang) {
    var params = new Page_Translate_Params();
    params.translate_script = translate_script;
    params.source_lang = source_lang;
    params.target_lang = target_lang;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kPage_Translate_Name,
          codec.align(Page_Translate_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Page_Translate_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Page_Translate_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  PageProxy.prototype.revertTranslation = function() {
    var params = new Page_RevertTranslation_Params();
    var builder = new codec.MessageBuilder(
        kPage_RevertTranslation_Name,
        codec.align(Page_RevertTranslation_Params.encodedSize));
    builder.encodeStruct(Page_RevertTranslation_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function PageStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  PageStub.prototype = Object.create(bindings.StubBase.prototype);
  PageStub.prototype.translate = function(translate_script, source_lang, target_lang) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.translate && bindings.StubBindings(this).delegate.translate(translate_script, source_lang, target_lang);
  }
  PageStub.prototype.revertTranslation = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.revertTranslation && bindings.StubBindings(this).delegate.revertTranslation();
  }

  PageStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPage_RevertTranslation_Name:
      var params = reader.decodeStruct(Page_RevertTranslation_Params);
      this.revertTranslation();
      return true;
    default:
      return false;
    }
  };

  PageStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPage_Translate_Name:
      var params = reader.decodeStruct(Page_Translate_Params);
      return this.translate(params.translate_script, params.source_lang, params.target_lang).then(function(response) {
        var responseParams =
            new Page_Translate_ResponseParams();
        responseParams.cancelled = response.cancelled;
        responseParams.original_lang = response.original_lang;
        responseParams.translated_lang = response.translated_lang;
        responseParams.error = response.error;
        var builder = new codec.MessageWithRequestIDBuilder(
            kPage_Translate_Name,
            codec.align(Page_Translate_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Page_Translate_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validatePageRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kPage_Translate_Name:
        if (message.expectsResponse())
          paramsClass = Page_Translate_Params;
      break;
      case kPage_RevertTranslation_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Page_RevertTranslation_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validatePageResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kPage_Translate_Name:
        if (message.isResponse())
          paramsClass = Page_Translate_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var Page = {
    name: 'translate::mojom::Page',
    proxyClass: PageProxy,
    stubClass: PageStub,
    validateRequest: validatePageRequest,
    validateResponse: validatePageResponse,
  };
  PageStub.prototype.validator = validatePageRequest;
  PageProxy.prototype.validator = validatePageResponse;
  var kContentTranslateDriver_RegisterPage_Name = 0;

  function ContentTranslateDriverProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  ContentTranslateDriverProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  ContentTranslateDriverProxy.prototype.registerPage = function(page, details, page_needs_translation) {
    var params = new ContentTranslateDriver_RegisterPage_Params();
    params.page = core.isHandle(page) ? page : connection.bindImpl(page, Page);
    params.details = details;
    params.page_needs_translation = page_needs_translation;
    var builder = new codec.MessageBuilder(
        kContentTranslateDriver_RegisterPage_Name,
        codec.align(ContentTranslateDriver_RegisterPage_Params.encodedSize));
    builder.encodeStruct(ContentTranslateDriver_RegisterPage_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ContentTranslateDriverStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  ContentTranslateDriverStub.prototype = Object.create(bindings.StubBase.prototype);
  ContentTranslateDriverStub.prototype.registerPage = function(page, details, page_needs_translation) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.registerPage && bindings.StubBindings(this).delegate.registerPage(connection.bindHandleToProxy(page, Page), details, page_needs_translation);
  }

  ContentTranslateDriverStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kContentTranslateDriver_RegisterPage_Name:
      var params = reader.decodeStruct(ContentTranslateDriver_RegisterPage_Params);
      this.registerPage(params.page, params.details, params.page_needs_translation);
      return true;
    default:
      return false;
    }
  };

  ContentTranslateDriverStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateContentTranslateDriverRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kContentTranslateDriver_RegisterPage_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ContentTranslateDriver_RegisterPage_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateContentTranslateDriverResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ContentTranslateDriver = {
    name: 'translate::mojom::ContentTranslateDriver',
    proxyClass: ContentTranslateDriverProxy,
    stubClass: ContentTranslateDriverStub,
    validateRequest: validateContentTranslateDriverRequest,
    validateResponse: null,
  };
  ContentTranslateDriverStub.prototype.validator = validateContentTranslateDriverRequest;
  ContentTranslateDriverProxy.prototype.validator = null;

  var exports = {};
  exports.TranslateError = TranslateError;
  exports.LanguageDetectionDetails = LanguageDetectionDetails;
  exports.Page = Page;
  exports.ContentTranslateDriver = ContentTranslateDriver;

  return exports;
});
// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("chrome/browser/ui/webui/omnibox/omnibox.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {

  function AutocompleteAdditionalInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AutocompleteAdditionalInfo.prototype.initDefaults_ = function() {
    this.key = null;
    this.value = null;
  };
  AutocompleteAdditionalInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  AutocompleteAdditionalInfo.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, AutocompleteAdditionalInfo.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate AutocompleteAdditionalInfo.key
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate AutocompleteAdditionalInfo.value
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AutocompleteAdditionalInfo.encodedSize = codec.kStructHeaderSize + 16;

  AutocompleteAdditionalInfo.decode = function(decoder) {
    var packed;
    var val = new AutocompleteAdditionalInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.key = decoder.decodeStruct(codec.String);
    val.value = decoder.decodeStruct(codec.String);
    return val;
  };

  AutocompleteAdditionalInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AutocompleteAdditionalInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.key);
    encoder.encodeStruct(codec.String, val.value);
  };
  function AutocompleteMatch(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AutocompleteMatch.prototype.initDefaults_ = function() {
    this.provider_name = null;
    this.provider_done = false;
    this.deletable = false;
    this.allowed_to_be_default_match = false;
    this.starred = false;
    this.from_previous = false;
    this.relevance = 0;
    this.fill_into_edit = null;
    this.inline_autocompletion = null;
    this.destination_url = null;
    this.contents = null;
    this.description = null;
    this.transition = 0;
    this.duplicates = 0;
    this.type = null;
    this.associated_keyword = null;
    this.keyword = null;
    this.additional_info = null;
  };
  AutocompleteMatch.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  AutocompleteMatch.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, AutocompleteMatch.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate AutocompleteMatch.provider_name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, true)
    if (err !== validator.validationError.NONE)
        return err;







    
    // validate AutocompleteMatch.fill_into_edit
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate AutocompleteMatch.inline_autocompletion
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 24, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate AutocompleteMatch.destination_url
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 32, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate AutocompleteMatch.contents
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 40, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate AutocompleteMatch.description
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 48, false)
    if (err !== validator.validationError.NONE)
        return err;



    
    // validate AutocompleteMatch.type
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 64, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate AutocompleteMatch.associated_keyword
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 72, true)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate AutocompleteMatch.keyword
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 80, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate AutocompleteMatch.additional_info
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 88, 8, new codec.PointerTo(AutocompleteAdditionalInfo), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AutocompleteMatch.encodedSize = codec.kStructHeaderSize + 96;

  AutocompleteMatch.decode = function(decoder) {
    var packed;
    var val = new AutocompleteMatch();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.provider_name = decoder.decodeStruct(codec.NullableString);
    packed = decoder.readUint8();
    val.provider_done = (packed >> 0) & 1 ? true : false;
    val.deletable = (packed >> 1) & 1 ? true : false;
    val.allowed_to_be_default_match = (packed >> 2) & 1 ? true : false;
    val.starred = (packed >> 3) & 1 ? true : false;
    val.from_previous = (packed >> 4) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.relevance = decoder.decodeStruct(codec.Int32);
    val.fill_into_edit = decoder.decodeStruct(codec.String);
    val.inline_autocompletion = decoder.decodeStruct(codec.String);
    val.destination_url = decoder.decodeStruct(codec.String);
    val.contents = decoder.decodeStruct(codec.String);
    val.description = decoder.decodeStruct(codec.String);
    val.transition = decoder.decodeStruct(codec.Int32);
    val.duplicates = decoder.decodeStruct(codec.Int32);
    val.type = decoder.decodeStruct(codec.String);
    val.associated_keyword = decoder.decodeStruct(codec.NullableString);
    val.keyword = decoder.decodeStruct(codec.String);
    val.additional_info = decoder.decodeArrayPointer(new codec.PointerTo(AutocompleteAdditionalInfo));
    return val;
  };

  AutocompleteMatch.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AutocompleteMatch.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.NullableString, val.provider_name);
    packed = 0;
    packed |= (val.provider_done & 1) << 0
    packed |= (val.deletable & 1) << 1
    packed |= (val.allowed_to_be_default_match & 1) << 2
    packed |= (val.starred & 1) << 3
    packed |= (val.from_previous & 1) << 4
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.relevance);
    encoder.encodeStruct(codec.String, val.fill_into_edit);
    encoder.encodeStruct(codec.String, val.inline_autocompletion);
    encoder.encodeStruct(codec.String, val.destination_url);
    encoder.encodeStruct(codec.String, val.contents);
    encoder.encodeStruct(codec.String, val.description);
    encoder.encodeStruct(codec.Int32, val.transition);
    encoder.encodeStruct(codec.Int32, val.duplicates);
    encoder.encodeStruct(codec.String, val.type);
    encoder.encodeStruct(codec.NullableString, val.associated_keyword);
    encoder.encodeStruct(codec.String, val.keyword);
    encoder.encodeArrayPointer(new codec.PointerTo(AutocompleteAdditionalInfo), val.additional_info);
  };
  function AutocompleteResultsForProvider(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AutocompleteResultsForProvider.prototype.initDefaults_ = function() {
    this.provider_name = null;
    this.results = null;
  };
  AutocompleteResultsForProvider.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  AutocompleteResultsForProvider.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, AutocompleteResultsForProvider.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate AutocompleteResultsForProvider.provider_name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate AutocompleteResultsForProvider.results
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(AutocompleteMatch), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AutocompleteResultsForProvider.encodedSize = codec.kStructHeaderSize + 16;

  AutocompleteResultsForProvider.decode = function(decoder) {
    var packed;
    var val = new AutocompleteResultsForProvider();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.provider_name = decoder.decodeStruct(codec.String);
    val.results = decoder.decodeArrayPointer(new codec.PointerTo(AutocompleteMatch));
    return val;
  };

  AutocompleteResultsForProvider.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AutocompleteResultsForProvider.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.provider_name);
    encoder.encodeArrayPointer(new codec.PointerTo(AutocompleteMatch), val.results);
  };
  function OmniboxResult(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  OmniboxResult.prototype.initDefaults_ = function() {
    this.done = false;
    this.is_typed_host = false;
    this.time_since_omnibox_started_ms = 0;
    this.host = null;
    this.combined_results = null;
    this.results_by_provider = null;
  };
  OmniboxResult.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  OmniboxResult.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, OmniboxResult.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;




    
    // validate OmniboxResult.host
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate OmniboxResult.combined_results
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, new codec.PointerTo(AutocompleteMatch), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate OmniboxResult.results_by_provider
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 24, 8, new codec.PointerTo(AutocompleteResultsForProvider), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  OmniboxResult.encodedSize = codec.kStructHeaderSize + 32;

  OmniboxResult.decode = function(decoder) {
    var packed;
    var val = new OmniboxResult();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.done = (packed >> 0) & 1 ? true : false;
    val.is_typed_host = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.time_since_omnibox_started_ms = decoder.decodeStruct(codec.Int32);
    val.host = decoder.decodeStruct(codec.String);
    val.combined_results = decoder.decodeArrayPointer(new codec.PointerTo(AutocompleteMatch));
    val.results_by_provider = decoder.decodeArrayPointer(new codec.PointerTo(AutocompleteResultsForProvider));
    return val;
  };

  OmniboxResult.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(OmniboxResult.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.done & 1) << 0
    packed |= (val.is_typed_host & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.time_since_omnibox_started_ms);
    encoder.encodeStruct(codec.String, val.host);
    encoder.encodeArrayPointer(new codec.PointerTo(AutocompleteMatch), val.combined_results);
    encoder.encodeArrayPointer(new codec.PointerTo(AutocompleteResultsForProvider), val.results_by_provider);
  };
  function OmniboxPageHandler_SetClientPage_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  OmniboxPageHandler_SetClientPage_Params.prototype.initDefaults_ = function() {
    this.page = null;
  };
  OmniboxPageHandler_SetClientPage_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  OmniboxPageHandler_SetClientPage_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, OmniboxPageHandler_SetClientPage_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate OmniboxPageHandler_SetClientPage_Params.page
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  OmniboxPageHandler_SetClientPage_Params.encodedSize = codec.kStructHeaderSize + 8;

  OmniboxPageHandler_SetClientPage_Params.decode = function(decoder) {
    var packed;
    var val = new OmniboxPageHandler_SetClientPage_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.page = decoder.decodeStruct(codec.Interface);
    return val;
  };

  OmniboxPageHandler_SetClientPage_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(OmniboxPageHandler_SetClientPage_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Interface, val.page);
  };
  function OmniboxPageHandler_StartOmniboxQuery_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  OmniboxPageHandler_StartOmniboxQuery_Params.prototype.initDefaults_ = function() {
    this.input_string = null;
    this.cursor_position = 0;
    this.prevent_inline_autocomplete = false;
    this.prefer_keyword = false;
    this.page_classification = 0;
  };
  OmniboxPageHandler_StartOmniboxQuery_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  OmniboxPageHandler_StartOmniboxQuery_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, OmniboxPageHandler_StartOmniboxQuery_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate OmniboxPageHandler_StartOmniboxQuery_Params.input_string
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;





    return validator.validationError.NONE;
  };

  OmniboxPageHandler_StartOmniboxQuery_Params.encodedSize = codec.kStructHeaderSize + 24;

  OmniboxPageHandler_StartOmniboxQuery_Params.decode = function(decoder) {
    var packed;
    var val = new OmniboxPageHandler_StartOmniboxQuery_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.input_string = decoder.decodeStruct(codec.String);
    val.cursor_position = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.prevent_inline_autocomplete = (packed >> 0) & 1 ? true : false;
    val.prefer_keyword = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.page_classification = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  OmniboxPageHandler_StartOmniboxQuery_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(OmniboxPageHandler_StartOmniboxQuery_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.input_string);
    encoder.encodeStruct(codec.Int32, val.cursor_position);
    packed = 0;
    packed |= (val.prevent_inline_autocomplete & 1) << 0
    packed |= (val.prefer_keyword & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.page_classification);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function OmniboxPage_HandleNewAutocompleteResult_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  OmniboxPage_HandleNewAutocompleteResult_Params.prototype.initDefaults_ = function() {
    this.result = null;
  };
  OmniboxPage_HandleNewAutocompleteResult_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  OmniboxPage_HandleNewAutocompleteResult_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, OmniboxPage_HandleNewAutocompleteResult_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate OmniboxPage_HandleNewAutocompleteResult_Params.result
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, OmniboxResult, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  OmniboxPage_HandleNewAutocompleteResult_Params.encodedSize = codec.kStructHeaderSize + 8;

  OmniboxPage_HandleNewAutocompleteResult_Params.decode = function(decoder) {
    var packed;
    var val = new OmniboxPage_HandleNewAutocompleteResult_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStructPointer(OmniboxResult);
    return val;
  };

  OmniboxPage_HandleNewAutocompleteResult_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(OmniboxPage_HandleNewAutocompleteResult_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(OmniboxResult, val.result);
  };
  var kOmniboxPageHandler_SetClientPage_Name = 0;
  var kOmniboxPageHandler_StartOmniboxQuery_Name = 1;

  function OmniboxPageHandlerProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  OmniboxPageHandlerProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  OmniboxPageHandlerProxy.prototype.setClientPage = function(page) {
    var params = new OmniboxPageHandler_SetClientPage_Params();
    params.page = core.isHandle(page) ? page : connection.bindImpl(page, OmniboxPage);
    var builder = new codec.MessageBuilder(
        kOmniboxPageHandler_SetClientPage_Name,
        codec.align(OmniboxPageHandler_SetClientPage_Params.encodedSize));
    builder.encodeStruct(OmniboxPageHandler_SetClientPage_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  OmniboxPageHandlerProxy.prototype.startOmniboxQuery = function(input_string, cursor_position, prevent_inline_autocomplete, prefer_keyword, page_classification) {
    var params = new OmniboxPageHandler_StartOmniboxQuery_Params();
    params.input_string = input_string;
    params.cursor_position = cursor_position;
    params.prevent_inline_autocomplete = prevent_inline_autocomplete;
    params.prefer_keyword = prefer_keyword;
    params.page_classification = page_classification;
    var builder = new codec.MessageBuilder(
        kOmniboxPageHandler_StartOmniboxQuery_Name,
        codec.align(OmniboxPageHandler_StartOmniboxQuery_Params.encodedSize));
    builder.encodeStruct(OmniboxPageHandler_StartOmniboxQuery_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function OmniboxPageHandlerStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  OmniboxPageHandlerStub.prototype = Object.create(bindings.StubBase.prototype);
  OmniboxPageHandlerStub.prototype.setClientPage = function(page) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.setClientPage && bindings.StubBindings(this).delegate.setClientPage(connection.bindHandleToProxy(page, OmniboxPage));
  }
  OmniboxPageHandlerStub.prototype.startOmniboxQuery = function(input_string, cursor_position, prevent_inline_autocomplete, prefer_keyword, page_classification) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.startOmniboxQuery && bindings.StubBindings(this).delegate.startOmniboxQuery(input_string, cursor_position, prevent_inline_autocomplete, prefer_keyword, page_classification);
  }

  OmniboxPageHandlerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kOmniboxPageHandler_SetClientPage_Name:
      var params = reader.decodeStruct(OmniboxPageHandler_SetClientPage_Params);
      this.setClientPage(params.page);
      return true;
    case kOmniboxPageHandler_StartOmniboxQuery_Name:
      var params = reader.decodeStruct(OmniboxPageHandler_StartOmniboxQuery_Params);
      this.startOmniboxQuery(params.input_string, params.cursor_position, params.prevent_inline_autocomplete, params.prefer_keyword, params.page_classification);
      return true;
    default:
      return false;
    }
  };

  OmniboxPageHandlerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateOmniboxPageHandlerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kOmniboxPageHandler_SetClientPage_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = OmniboxPageHandler_SetClientPage_Params;
      break;
      case kOmniboxPageHandler_StartOmniboxQuery_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = OmniboxPageHandler_StartOmniboxQuery_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateOmniboxPageHandlerResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var OmniboxPageHandler = {
    name: 'mojom::OmniboxPageHandler',
    proxyClass: OmniboxPageHandlerProxy,
    stubClass: OmniboxPageHandlerStub,
    validateRequest: validateOmniboxPageHandlerRequest,
    validateResponse: null,
  };
  OmniboxPageHandlerStub.prototype.validator = validateOmniboxPageHandlerRequest;
  OmniboxPageHandlerProxy.prototype.validator = null;
  var kOmniboxPage_HandleNewAutocompleteResult_Name = 0;

  function OmniboxPageProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  OmniboxPageProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  OmniboxPageProxy.prototype.handleNewAutocompleteResult = function(result) {
    var params = new OmniboxPage_HandleNewAutocompleteResult_Params();
    params.result = result;
    var builder = new codec.MessageBuilder(
        kOmniboxPage_HandleNewAutocompleteResult_Name,
        codec.align(OmniboxPage_HandleNewAutocompleteResult_Params.encodedSize));
    builder.encodeStruct(OmniboxPage_HandleNewAutocompleteResult_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function OmniboxPageStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  OmniboxPageStub.prototype = Object.create(bindings.StubBase.prototype);
  OmniboxPageStub.prototype.handleNewAutocompleteResult = function(result) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.handleNewAutocompleteResult && bindings.StubBindings(this).delegate.handleNewAutocompleteResult(result);
  }

  OmniboxPageStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kOmniboxPage_HandleNewAutocompleteResult_Name:
      var params = reader.decodeStruct(OmniboxPage_HandleNewAutocompleteResult_Params);
      this.handleNewAutocompleteResult(params.result);
      return true;
    default:
      return false;
    }
  };

  OmniboxPageStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateOmniboxPageRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kOmniboxPage_HandleNewAutocompleteResult_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = OmniboxPage_HandleNewAutocompleteResult_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateOmniboxPageResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var OmniboxPage = {
    name: 'mojom::OmniboxPage',
    proxyClass: OmniboxPageProxy,
    stubClass: OmniboxPageStub,
    validateRequest: validateOmniboxPageRequest,
    validateResponse: null,
  };
  OmniboxPageStub.prototype.validator = validateOmniboxPageRequest;
  OmniboxPageProxy.prototype.validator = null;

  var exports = {};
  exports.AutocompleteAdditionalInfo = AutocompleteAdditionalInfo;
  exports.AutocompleteMatch = AutocompleteMatch;
  exports.AutocompleteResultsForProvider = AutocompleteResultsForProvider;
  exports.OmniboxResult = OmniboxResult;
  exports.OmniboxPageHandler = OmniboxPageHandler;
  exports.OmniboxPage = OmniboxPage;

  return exports;
});
// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("services/ui/public/interfaces/ime.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "ui/events/mojo/event.mojom",
    "ui/gfx/geometry/mojo/geometry.mojom",
], function(bindings, codec, connection, core, validator, event$, geometry$) {
  var CompositionEventType = {};
  CompositionEventType.UPDATE = 0;
  CompositionEventType.CONFIRM = CompositionEventType.UPDATE + 1;
  CompositionEventType.CLEAR = CompositionEventType.CONFIRM + 1;
  CompositionEventType.INSERT_CHAR = CompositionEventType.CLEAR + 1;
  CompositionEventType.INSERT_TEXT = CompositionEventType.INSERT_CHAR + 1;
  var TextInputType = {};
  TextInputType.NONE = 0;
  TextInputType.TEXT = TextInputType.NONE + 1;
  TextInputType.PASSWORD = TextInputType.TEXT + 1;
  TextInputType.SEARCH = TextInputType.PASSWORD + 1;
  TextInputType.EMAIL = TextInputType.SEARCH + 1;
  TextInputType.NUMBER = TextInputType.EMAIL + 1;
  TextInputType.TELEPHONE = TextInputType.NUMBER + 1;
  TextInputType.URL = TextInputType.TELEPHONE + 1;
  TextInputType.DATE = TextInputType.URL + 1;
  TextInputType.TIME = TextInputType.DATE + 1;
  TextInputType.DATETIME = TextInputType.TIME + 1;
  var TextInputMode = {};
  TextInputMode.DEFAULT = 0;
  TextInputMode.VERBATIM = TextInputMode.DEFAULT + 1;
  TextInputMode.LATIN = TextInputMode.VERBATIM + 1;
  TextInputMode.LATIN_NAME = TextInputMode.LATIN + 1;
  TextInputMode.LATIN_PROSE = TextInputMode.LATIN_NAME + 1;
  TextInputMode.FULL_WIDTH_LATIN = TextInputMode.LATIN_PROSE + 1;
  TextInputMode.KANA = TextInputMode.FULL_WIDTH_LATIN + 1;
  TextInputMode.KATAKANA = TextInputMode.KANA + 1;
  TextInputMode.NUMERIC = TextInputMode.KATAKANA + 1;
  TextInputMode.TEL = TextInputMode.NUMERIC + 1;
  TextInputMode.EMAIL = TextInputMode.TEL + 1;
  TextInputMode.URL = TextInputMode.EMAIL + 1;

  function CompositionEvent(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CompositionEvent.prototype.initDefaults_ = function() {
    this.type = 0;
    this.key_event = null;
  };
  CompositionEvent.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  CompositionEvent.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, CompositionEvent.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate CompositionEvent.key_event
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, event$.Event, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CompositionEvent.encodedSize = codec.kStructHeaderSize + 16;

  CompositionEvent.decode = function(decoder) {
    var packed;
    var val = new CompositionEvent();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.type = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.key_event = decoder.decodeStructPointer(event$.Event);
    return val;
  };

  CompositionEvent.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CompositionEvent.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.type);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(event$.Event, val.key_event);
  };
  function IMEDriver_StartSession_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  IMEDriver_StartSession_Params.prototype.initDefaults_ = function() {
    this.session_id = 0;
    this.client = null;
    this.input_method = null;
  };
  IMEDriver_StartSession_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  IMEDriver_StartSession_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, IMEDriver_StartSession_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate IMEDriver_StartSession_Params.client
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 4, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate IMEDriver_StartSession_Params.input_method
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 12, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  IMEDriver_StartSession_Params.encodedSize = codec.kStructHeaderSize + 16;

  IMEDriver_StartSession_Params.decode = function(decoder) {
    var packed;
    var val = new IMEDriver_StartSession_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.session_id = decoder.decodeStruct(codec.Int32);
    val.client = decoder.decodeStruct(codec.Interface);
    val.input_method = decoder.decodeStruct(codec.Handle);
    return val;
  };

  IMEDriver_StartSession_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(IMEDriver_StartSession_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.session_id);
    encoder.encodeStruct(codec.Interface, val.client);
    encoder.encodeStruct(codec.Handle, val.input_method);
  };
  function IMEDriver_CancelSession_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  IMEDriver_CancelSession_Params.prototype.initDefaults_ = function() {
    this.session_id = 0;
  };
  IMEDriver_CancelSession_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  IMEDriver_CancelSession_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, IMEDriver_CancelSession_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  IMEDriver_CancelSession_Params.encodedSize = codec.kStructHeaderSize + 8;

  IMEDriver_CancelSession_Params.decode = function(decoder) {
    var packed;
    var val = new IMEDriver_CancelSession_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.session_id = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  IMEDriver_CancelSession_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(IMEDriver_CancelSession_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.session_id);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function IMEServer_StartSession_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  IMEServer_StartSession_Params.prototype.initDefaults_ = function() {
    this.client = null;
    this.input_method = null;
  };
  IMEServer_StartSession_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  IMEServer_StartSession_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, IMEServer_StartSession_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate IMEServer_StartSession_Params.client
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate IMEServer_StartSession_Params.input_method
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  IMEServer_StartSession_Params.encodedSize = codec.kStructHeaderSize + 16;

  IMEServer_StartSession_Params.decode = function(decoder) {
    var packed;
    var val = new IMEServer_StartSession_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.client = decoder.decodeStruct(codec.Interface);
    val.input_method = decoder.decodeStruct(codec.Handle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  IMEServer_StartSession_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(IMEServer_StartSession_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Interface, val.client);
    encoder.encodeStruct(codec.Handle, val.input_method);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function IMERegistrar_RegisterDriver_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  IMERegistrar_RegisterDriver_Params.prototype.initDefaults_ = function() {
    this.driver = null;
  };
  IMERegistrar_RegisterDriver_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  IMERegistrar_RegisterDriver_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, IMERegistrar_RegisterDriver_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate IMERegistrar_RegisterDriver_Params.driver
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  IMERegistrar_RegisterDriver_Params.encodedSize = codec.kStructHeaderSize + 8;

  IMERegistrar_RegisterDriver_Params.decode = function(decoder) {
    var packed;
    var val = new IMERegistrar_RegisterDriver_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.driver = decoder.decodeStruct(codec.Interface);
    return val;
  };

  IMERegistrar_RegisterDriver_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(IMERegistrar_RegisterDriver_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Interface, val.driver);
  };
  function InputMethod_OnTextInputModeChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InputMethod_OnTextInputModeChanged_Params.prototype.initDefaults_ = function() {
    this.text_input_mode = 0;
  };
  InputMethod_OnTextInputModeChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  InputMethod_OnTextInputModeChanged_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, InputMethod_OnTextInputModeChanged_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  InputMethod_OnTextInputModeChanged_Params.encodedSize = codec.kStructHeaderSize + 8;

  InputMethod_OnTextInputModeChanged_Params.decode = function(decoder) {
    var packed;
    var val = new InputMethod_OnTextInputModeChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.text_input_mode = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  InputMethod_OnTextInputModeChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InputMethod_OnTextInputModeChanged_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.text_input_mode);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function InputMethod_OnTextInputTypeChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InputMethod_OnTextInputTypeChanged_Params.prototype.initDefaults_ = function() {
    this.text_input_type = 0;
  };
  InputMethod_OnTextInputTypeChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  InputMethod_OnTextInputTypeChanged_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, InputMethod_OnTextInputTypeChanged_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  InputMethod_OnTextInputTypeChanged_Params.encodedSize = codec.kStructHeaderSize + 8;

  InputMethod_OnTextInputTypeChanged_Params.decode = function(decoder) {
    var packed;
    var val = new InputMethod_OnTextInputTypeChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.text_input_type = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  InputMethod_OnTextInputTypeChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InputMethod_OnTextInputTypeChanged_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.text_input_type);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function InputMethod_OnCaretBoundsChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InputMethod_OnCaretBoundsChanged_Params.prototype.initDefaults_ = function() {
    this.caret_bounds = null;
  };
  InputMethod_OnCaretBoundsChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  InputMethod_OnCaretBoundsChanged_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, InputMethod_OnCaretBoundsChanged_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate InputMethod_OnCaretBoundsChanged_Params.caret_bounds
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, geometry$.Rect, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  InputMethod_OnCaretBoundsChanged_Params.encodedSize = codec.kStructHeaderSize + 8;

  InputMethod_OnCaretBoundsChanged_Params.decode = function(decoder) {
    var packed;
    var val = new InputMethod_OnCaretBoundsChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.caret_bounds = decoder.decodeStructPointer(geometry$.Rect);
    return val;
  };

  InputMethod_OnCaretBoundsChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InputMethod_OnCaretBoundsChanged_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(geometry$.Rect, val.caret_bounds);
  };
  function InputMethod_ProcessKeyEvent_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InputMethod_ProcessKeyEvent_Params.prototype.initDefaults_ = function() {
    this.key_event = null;
  };
  InputMethod_ProcessKeyEvent_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  InputMethod_ProcessKeyEvent_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, InputMethod_ProcessKeyEvent_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate InputMethod_ProcessKeyEvent_Params.key_event
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, event$.Event, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  InputMethod_ProcessKeyEvent_Params.encodedSize = codec.kStructHeaderSize + 8;

  InputMethod_ProcessKeyEvent_Params.decode = function(decoder) {
    var packed;
    var val = new InputMethod_ProcessKeyEvent_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.key_event = decoder.decodeStructPointer(event$.Event);
    return val;
  };

  InputMethod_ProcessKeyEvent_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InputMethod_ProcessKeyEvent_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(event$.Event, val.key_event);
  };
  function InputMethod_CancelComposition_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InputMethod_CancelComposition_Params.prototype.initDefaults_ = function() {
  };
  InputMethod_CancelComposition_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  InputMethod_CancelComposition_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, InputMethod_CancelComposition_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  InputMethod_CancelComposition_Params.encodedSize = codec.kStructHeaderSize + 0;

  InputMethod_CancelComposition_Params.decode = function(decoder) {
    var packed;
    var val = new InputMethod_CancelComposition_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  InputMethod_CancelComposition_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InputMethod_CancelComposition_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function TextInputClient_OnCompositionEvent_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TextInputClient_OnCompositionEvent_Params.prototype.initDefaults_ = function() {
    this.event = null;
  };
  TextInputClient_OnCompositionEvent_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  TextInputClient_OnCompositionEvent_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, TextInputClient_OnCompositionEvent_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate TextInputClient_OnCompositionEvent_Params.event
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, CompositionEvent, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  TextInputClient_OnCompositionEvent_Params.encodedSize = codec.kStructHeaderSize + 8;

  TextInputClient_OnCompositionEvent_Params.decode = function(decoder) {
    var packed;
    var val = new TextInputClient_OnCompositionEvent_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.event = decoder.decodeStructPointer(CompositionEvent);
    return val;
  };

  TextInputClient_OnCompositionEvent_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TextInputClient_OnCompositionEvent_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(CompositionEvent, val.event);
  };
  var kIMEDriver_StartSession_Name = 0;
  var kIMEDriver_CancelSession_Name = 1;

  function IMEDriverProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  IMEDriverProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  IMEDriverProxy.prototype.startSession = function(session_id, client, input_method) {
    var params = new IMEDriver_StartSession_Params();
    params.session_id = session_id;
    params.client = core.isHandle(client) ? client : connection.bindImpl(client, TextInputClient);
    params.input_method = core.isHandle(input_method) ? input_method : connection.bindProxy(input_method, InputMethod);
    var builder = new codec.MessageBuilder(
        kIMEDriver_StartSession_Name,
        codec.align(IMEDriver_StartSession_Params.encodedSize));
    builder.encodeStruct(IMEDriver_StartSession_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  IMEDriverProxy.prototype.cancelSession = function(session_id) {
    var params = new IMEDriver_CancelSession_Params();
    params.session_id = session_id;
    var builder = new codec.MessageBuilder(
        kIMEDriver_CancelSession_Name,
        codec.align(IMEDriver_CancelSession_Params.encodedSize));
    builder.encodeStruct(IMEDriver_CancelSession_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function IMEDriverStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  IMEDriverStub.prototype = Object.create(bindings.StubBase.prototype);
  IMEDriverStub.prototype.startSession = function(session_id, client, input_method) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.startSession && bindings.StubBindings(this).delegate.startSession(session_id, connection.bindHandleToProxy(client, TextInputClient), connection.bindHandleToStub(input_method, InputMethod));
  }
  IMEDriverStub.prototype.cancelSession = function(session_id) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.cancelSession && bindings.StubBindings(this).delegate.cancelSession(session_id);
  }

  IMEDriverStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kIMEDriver_StartSession_Name:
      var params = reader.decodeStruct(IMEDriver_StartSession_Params);
      this.startSession(params.session_id, params.client, params.input_method);
      return true;
    case kIMEDriver_CancelSession_Name:
      var params = reader.decodeStruct(IMEDriver_CancelSession_Params);
      this.cancelSession(params.session_id);
      return true;
    default:
      return false;
    }
  };

  IMEDriverStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateIMEDriverRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kIMEDriver_StartSession_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = IMEDriver_StartSession_Params;
      break;
      case kIMEDriver_CancelSession_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = IMEDriver_CancelSession_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateIMEDriverResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var IMEDriver = {
    name: 'ui::mojom::IMEDriver',
    proxyClass: IMEDriverProxy,
    stubClass: IMEDriverStub,
    validateRequest: validateIMEDriverRequest,
    validateResponse: null,
  };
  IMEDriverStub.prototype.validator = validateIMEDriverRequest;
  IMEDriverProxy.prototype.validator = null;
  var kIMEServer_StartSession_Name = 0;

  function IMEServerProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  IMEServerProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  IMEServerProxy.prototype.startSession = function(client, input_method) {
    var params = new IMEServer_StartSession_Params();
    params.client = core.isHandle(client) ? client : connection.bindImpl(client, TextInputClient);
    params.input_method = core.isHandle(input_method) ? input_method : connection.bindProxy(input_method, InputMethod);
    var builder = new codec.MessageBuilder(
        kIMEServer_StartSession_Name,
        codec.align(IMEServer_StartSession_Params.encodedSize));
    builder.encodeStruct(IMEServer_StartSession_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function IMEServerStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  IMEServerStub.prototype = Object.create(bindings.StubBase.prototype);
  IMEServerStub.prototype.startSession = function(client, input_method) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.startSession && bindings.StubBindings(this).delegate.startSession(connection.bindHandleToProxy(client, TextInputClient), connection.bindHandleToStub(input_method, InputMethod));
  }

  IMEServerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kIMEServer_StartSession_Name:
      var params = reader.decodeStruct(IMEServer_StartSession_Params);
      this.startSession(params.client, params.input_method);
      return true;
    default:
      return false;
    }
  };

  IMEServerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateIMEServerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kIMEServer_StartSession_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = IMEServer_StartSession_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateIMEServerResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var IMEServer = {
    name: 'ui::mojom::IMEServer',
    proxyClass: IMEServerProxy,
    stubClass: IMEServerStub,
    validateRequest: validateIMEServerRequest,
    validateResponse: null,
  };
  IMEServerStub.prototype.validator = validateIMEServerRequest;
  IMEServerProxy.prototype.validator = null;
  var kIMERegistrar_RegisterDriver_Name = 0;

  function IMERegistrarProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  IMERegistrarProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  IMERegistrarProxy.prototype.registerDriver = function(driver) {
    var params = new IMERegistrar_RegisterDriver_Params();
    params.driver = core.isHandle(driver) ? driver : connection.bindImpl(driver, IMEDriver);
    var builder = new codec.MessageBuilder(
        kIMERegistrar_RegisterDriver_Name,
        codec.align(IMERegistrar_RegisterDriver_Params.encodedSize));
    builder.encodeStruct(IMERegistrar_RegisterDriver_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function IMERegistrarStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  IMERegistrarStub.prototype = Object.create(bindings.StubBase.prototype);
  IMERegistrarStub.prototype.registerDriver = function(driver) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.registerDriver && bindings.StubBindings(this).delegate.registerDriver(connection.bindHandleToProxy(driver, IMEDriver));
  }

  IMERegistrarStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kIMERegistrar_RegisterDriver_Name:
      var params = reader.decodeStruct(IMERegistrar_RegisterDriver_Params);
      this.registerDriver(params.driver);
      return true;
    default:
      return false;
    }
  };

  IMERegistrarStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateIMERegistrarRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kIMERegistrar_RegisterDriver_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = IMERegistrar_RegisterDriver_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateIMERegistrarResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var IMERegistrar = {
    name: 'ui::mojom::IMERegistrar',
    proxyClass: IMERegistrarProxy,
    stubClass: IMERegistrarStub,
    validateRequest: validateIMERegistrarRequest,
    validateResponse: null,
  };
  IMERegistrarStub.prototype.validator = validateIMERegistrarRequest;
  IMERegistrarProxy.prototype.validator = null;
  var kInputMethod_OnTextInputModeChanged_Name = 0;
  var kInputMethod_OnTextInputTypeChanged_Name = 1;
  var kInputMethod_OnCaretBoundsChanged_Name = 2;
  var kInputMethod_ProcessKeyEvent_Name = 3;
  var kInputMethod_CancelComposition_Name = 4;

  function InputMethodProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  InputMethodProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  InputMethodProxy.prototype.onTextInputModeChanged = function(text_input_mode) {
    var params = new InputMethod_OnTextInputModeChanged_Params();
    params.text_input_mode = text_input_mode;
    var builder = new codec.MessageBuilder(
        kInputMethod_OnTextInputModeChanged_Name,
        codec.align(InputMethod_OnTextInputModeChanged_Params.encodedSize));
    builder.encodeStruct(InputMethod_OnTextInputModeChanged_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  InputMethodProxy.prototype.onTextInputTypeChanged = function(text_input_type) {
    var params = new InputMethod_OnTextInputTypeChanged_Params();
    params.text_input_type = text_input_type;
    var builder = new codec.MessageBuilder(
        kInputMethod_OnTextInputTypeChanged_Name,
        codec.align(InputMethod_OnTextInputTypeChanged_Params.encodedSize));
    builder.encodeStruct(InputMethod_OnTextInputTypeChanged_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  InputMethodProxy.prototype.onCaretBoundsChanged = function(caret_bounds) {
    var params = new InputMethod_OnCaretBoundsChanged_Params();
    params.caret_bounds = caret_bounds;
    var builder = new codec.MessageBuilder(
        kInputMethod_OnCaretBoundsChanged_Name,
        codec.align(InputMethod_OnCaretBoundsChanged_Params.encodedSize));
    builder.encodeStruct(InputMethod_OnCaretBoundsChanged_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  InputMethodProxy.prototype.processKeyEvent = function(key_event) {
    var params = new InputMethod_ProcessKeyEvent_Params();
    params.key_event = key_event;
    var builder = new codec.MessageBuilder(
        kInputMethod_ProcessKeyEvent_Name,
        codec.align(InputMethod_ProcessKeyEvent_Params.encodedSize));
    builder.encodeStruct(InputMethod_ProcessKeyEvent_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  InputMethodProxy.prototype.cancelComposition = function() {
    var params = new InputMethod_CancelComposition_Params();
    var builder = new codec.MessageBuilder(
        kInputMethod_CancelComposition_Name,
        codec.align(InputMethod_CancelComposition_Params.encodedSize));
    builder.encodeStruct(InputMethod_CancelComposition_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function InputMethodStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  InputMethodStub.prototype = Object.create(bindings.StubBase.prototype);
  InputMethodStub.prototype.onTextInputModeChanged = function(text_input_mode) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onTextInputModeChanged && bindings.StubBindings(this).delegate.onTextInputModeChanged(text_input_mode);
  }
  InputMethodStub.prototype.onTextInputTypeChanged = function(text_input_type) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onTextInputTypeChanged && bindings.StubBindings(this).delegate.onTextInputTypeChanged(text_input_type);
  }
  InputMethodStub.prototype.onCaretBoundsChanged = function(caret_bounds) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onCaretBoundsChanged && bindings.StubBindings(this).delegate.onCaretBoundsChanged(caret_bounds);
  }
  InputMethodStub.prototype.processKeyEvent = function(key_event) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.processKeyEvent && bindings.StubBindings(this).delegate.processKeyEvent(key_event);
  }
  InputMethodStub.prototype.cancelComposition = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.cancelComposition && bindings.StubBindings(this).delegate.cancelComposition();
  }

  InputMethodStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kInputMethod_OnTextInputModeChanged_Name:
      var params = reader.decodeStruct(InputMethod_OnTextInputModeChanged_Params);
      this.onTextInputModeChanged(params.text_input_mode);
      return true;
    case kInputMethod_OnTextInputTypeChanged_Name:
      var params = reader.decodeStruct(InputMethod_OnTextInputTypeChanged_Params);
      this.onTextInputTypeChanged(params.text_input_type);
      return true;
    case kInputMethod_OnCaretBoundsChanged_Name:
      var params = reader.decodeStruct(InputMethod_OnCaretBoundsChanged_Params);
      this.onCaretBoundsChanged(params.caret_bounds);
      return true;
    case kInputMethod_ProcessKeyEvent_Name:
      var params = reader.decodeStruct(InputMethod_ProcessKeyEvent_Params);
      this.processKeyEvent(params.key_event);
      return true;
    case kInputMethod_CancelComposition_Name:
      var params = reader.decodeStruct(InputMethod_CancelComposition_Params);
      this.cancelComposition();
      return true;
    default:
      return false;
    }
  };

  InputMethodStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateInputMethodRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kInputMethod_OnTextInputModeChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = InputMethod_OnTextInputModeChanged_Params;
      break;
      case kInputMethod_OnTextInputTypeChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = InputMethod_OnTextInputTypeChanged_Params;
      break;
      case kInputMethod_OnCaretBoundsChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = InputMethod_OnCaretBoundsChanged_Params;
      break;
      case kInputMethod_ProcessKeyEvent_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = InputMethod_ProcessKeyEvent_Params;
      break;
      case kInputMethod_CancelComposition_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = InputMethod_CancelComposition_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateInputMethodResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var InputMethod = {
    name: 'ui::mojom::InputMethod',
    proxyClass: InputMethodProxy,
    stubClass: InputMethodStub,
    validateRequest: validateInputMethodRequest,
    validateResponse: null,
  };
  InputMethodStub.prototype.validator = validateInputMethodRequest;
  InputMethodProxy.prototype.validator = null;
  var kTextInputClient_OnCompositionEvent_Name = 0;

  function TextInputClientProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  TextInputClientProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  TextInputClientProxy.prototype.onCompositionEvent = function(event) {
    var params = new TextInputClient_OnCompositionEvent_Params();
    params.event = event;
    var builder = new codec.MessageBuilder(
        kTextInputClient_OnCompositionEvent_Name,
        codec.align(TextInputClient_OnCompositionEvent_Params.encodedSize));
    builder.encodeStruct(TextInputClient_OnCompositionEvent_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function TextInputClientStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  TextInputClientStub.prototype = Object.create(bindings.StubBase.prototype);
  TextInputClientStub.prototype.onCompositionEvent = function(event) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onCompositionEvent && bindings.StubBindings(this).delegate.onCompositionEvent(event);
  }

  TextInputClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kTextInputClient_OnCompositionEvent_Name:
      var params = reader.decodeStruct(TextInputClient_OnCompositionEvent_Params);
      this.onCompositionEvent(params.event);
      return true;
    default:
      return false;
    }
  };

  TextInputClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateTextInputClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kTextInputClient_OnCompositionEvent_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = TextInputClient_OnCompositionEvent_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateTextInputClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var TextInputClient = {
    name: 'ui::mojom::TextInputClient',
    proxyClass: TextInputClientProxy,
    stubClass: TextInputClientStub,
    validateRequest: validateTextInputClientRequest,
    validateResponse: null,
  };
  TextInputClientStub.prototype.validator = validateTextInputClientRequest;
  TextInputClientProxy.prototype.validator = null;

  var exports = {};
  exports.CompositionEventType = CompositionEventType;
  exports.TextInputType = TextInputType;
  exports.TextInputMode = TextInputMode;
  exports.CompositionEvent = CompositionEvent;
  exports.IMEDriver = IMEDriver;
  exports.IMEServer = IMEServer;
  exports.IMERegistrar = IMERegistrar;
  exports.InputMethod = InputMethod;
  exports.TextInputClient = TextInputClient;

  return exports;
});
// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("third_party/WebKit/public/platform/modules/presentation/presentation.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {
  var PresentationConnectionState = {};
  PresentationConnectionState.CONNECTING = 0;
  PresentationConnectionState.CONNECTED = PresentationConnectionState.CONNECTING + 1;
  PresentationConnectionState.CLOSED = PresentationConnectionState.CONNECTED + 1;
  PresentationConnectionState.TERMINATED = PresentationConnectionState.CLOSED + 1;
  var PresentationConnectionCloseReason = {};
  PresentationConnectionCloseReason.CONNECTION_ERROR = 0;
  PresentationConnectionCloseReason.CLOSED = PresentationConnectionCloseReason.CONNECTION_ERROR + 1;
  PresentationConnectionCloseReason.WENT_AWAY = PresentationConnectionCloseReason.CLOSED + 1;
  var PresentationErrorType = {};
  PresentationErrorType.NO_AVAILABLE_SCREENS = 0;
  PresentationErrorType.SESSION_REQUEST_CANCELLED = PresentationErrorType.NO_AVAILABLE_SCREENS + 1;
  PresentationErrorType.NO_PRESENTATION_FOUND = PresentationErrorType.SESSION_REQUEST_CANCELLED + 1;
  PresentationErrorType.UNKNOWN = PresentationErrorType.NO_PRESENTATION_FOUND + 1;
  var PresentationMessageType = {};
  PresentationMessageType.TEXT = 0;
  PresentationMessageType.ARRAY_BUFFER = PresentationMessageType.TEXT + 1;
  PresentationMessageType.BLOB = PresentationMessageType.ARRAY_BUFFER + 1;

  function PresentationSessionInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PresentationSessionInfo.prototype.initDefaults_ = function() {
    this.url = null;
    this.id = null;
  };
  PresentationSessionInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PresentationSessionInfo.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PresentationSessionInfo.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PresentationSessionInfo.url
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PresentationSessionInfo.id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PresentationSessionInfo.encodedSize = codec.kStructHeaderSize + 16;

  PresentationSessionInfo.decode = function(decoder) {
    var packed;
    var val = new PresentationSessionInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.url = decoder.decodeStruct(codec.String);
    val.id = decoder.decodeStruct(codec.String);
    return val;
  };

  PresentationSessionInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PresentationSessionInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.url);
    encoder.encodeStruct(codec.String, val.id);
  };
  function PresentationError(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PresentationError.prototype.initDefaults_ = function() {
    this.error_type = 0;
    this.message = null;
  };
  PresentationError.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PresentationError.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PresentationError.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate PresentationError.message
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PresentationError.encodedSize = codec.kStructHeaderSize + 16;

  PresentationError.decode = function(decoder) {
    var packed;
    var val = new PresentationError();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error_type = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.message = decoder.decodeStruct(codec.String);
    return val;
  };

  PresentationError.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PresentationError.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error_type);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.message);
  };
  function SessionMessage(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SessionMessage.prototype.initDefaults_ = function() {
    this.type = 0;
    this.message = null;
    this.data = null;
  };
  SessionMessage.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  SessionMessage.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, SessionMessage.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate SessionMessage.message
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, true)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate SessionMessage.data
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 1, codec.Uint8, true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SessionMessage.encodedSize = codec.kStructHeaderSize + 24;

  SessionMessage.decode = function(decoder) {
    var packed;
    var val = new SessionMessage();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.type = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.message = decoder.decodeStruct(codec.NullableString);
    val.data = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  SessionMessage.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SessionMessage.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.type);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.NullableString, val.message);
    encoder.encodeArrayPointer(codec.Uint8, val.data);
  };
  function PresentationService_SetClient_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PresentationService_SetClient_Params.prototype.initDefaults_ = function() {
    this.client = null;
  };
  PresentationService_SetClient_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PresentationService_SetClient_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PresentationService_SetClient_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PresentationService_SetClient_Params.client
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PresentationService_SetClient_Params.encodedSize = codec.kStructHeaderSize + 8;

  PresentationService_SetClient_Params.decode = function(decoder) {
    var packed;
    var val = new PresentationService_SetClient_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.client = decoder.decodeStruct(codec.Interface);
    return val;
  };

  PresentationService_SetClient_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PresentationService_SetClient_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Interface, val.client);
  };
  function PresentationService_SetDefaultPresentationURL_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PresentationService_SetDefaultPresentationURL_Params.prototype.initDefaults_ = function() {
    this.url = null;
  };
  PresentationService_SetDefaultPresentationURL_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PresentationService_SetDefaultPresentationURL_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PresentationService_SetDefaultPresentationURL_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PresentationService_SetDefaultPresentationURL_Params.url
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PresentationService_SetDefaultPresentationURL_Params.encodedSize = codec.kStructHeaderSize + 8;

  PresentationService_SetDefaultPresentationURL_Params.decode = function(decoder) {
    var packed;
    var val = new PresentationService_SetDefaultPresentationURL_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.url = decoder.decodeStruct(codec.String);
    return val;
  };

  PresentationService_SetDefaultPresentationURL_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PresentationService_SetDefaultPresentationURL_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.url);
  };
  function PresentationService_ListenForScreenAvailability_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PresentationService_ListenForScreenAvailability_Params.prototype.initDefaults_ = function() {
    this.url = null;
  };
  PresentationService_ListenForScreenAvailability_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PresentationService_ListenForScreenAvailability_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PresentationService_ListenForScreenAvailability_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PresentationService_ListenForScreenAvailability_Params.url
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PresentationService_ListenForScreenAvailability_Params.encodedSize = codec.kStructHeaderSize + 8;

  PresentationService_ListenForScreenAvailability_Params.decode = function(decoder) {
    var packed;
    var val = new PresentationService_ListenForScreenAvailability_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.url = decoder.decodeStruct(codec.String);
    return val;
  };

  PresentationService_ListenForScreenAvailability_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PresentationService_ListenForScreenAvailability_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.url);
  };
  function PresentationService_StopListeningForScreenAvailability_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PresentationService_StopListeningForScreenAvailability_Params.prototype.initDefaults_ = function() {
    this.url = null;
  };
  PresentationService_StopListeningForScreenAvailability_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PresentationService_StopListeningForScreenAvailability_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PresentationService_StopListeningForScreenAvailability_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PresentationService_StopListeningForScreenAvailability_Params.url
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PresentationService_StopListeningForScreenAvailability_Params.encodedSize = codec.kStructHeaderSize + 8;

  PresentationService_StopListeningForScreenAvailability_Params.decode = function(decoder) {
    var packed;
    var val = new PresentationService_StopListeningForScreenAvailability_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.url = decoder.decodeStruct(codec.String);
    return val;
  };

  PresentationService_StopListeningForScreenAvailability_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PresentationService_StopListeningForScreenAvailability_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.url);
  };
  function PresentationService_StartSession_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PresentationService_StartSession_Params.prototype.initDefaults_ = function() {
    this.presentation_url = null;
  };
  PresentationService_StartSession_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PresentationService_StartSession_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PresentationService_StartSession_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PresentationService_StartSession_Params.presentation_url
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PresentationService_StartSession_Params.encodedSize = codec.kStructHeaderSize + 8;

  PresentationService_StartSession_Params.decode = function(decoder) {
    var packed;
    var val = new PresentationService_StartSession_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.presentation_url = decoder.decodeStruct(codec.String);
    return val;
  };

  PresentationService_StartSession_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PresentationService_StartSession_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.presentation_url);
  };
  function PresentationService_StartSession_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PresentationService_StartSession_ResponseParams.prototype.initDefaults_ = function() {
    this.sessionInfo = null;
    this.error = null;
  };
  PresentationService_StartSession_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PresentationService_StartSession_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PresentationService_StartSession_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PresentationService_StartSession_ResponseParams.sessionInfo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, PresentationSessionInfo, true);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PresentationService_StartSession_ResponseParams.error
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, PresentationError, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PresentationService_StartSession_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  PresentationService_StartSession_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new PresentationService_StartSession_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.sessionInfo = decoder.decodeStructPointer(PresentationSessionInfo);
    val.error = decoder.decodeStructPointer(PresentationError);
    return val;
  };

  PresentationService_StartSession_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PresentationService_StartSession_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(PresentationSessionInfo, val.sessionInfo);
    encoder.encodeStructPointer(PresentationError, val.error);
  };
  function PresentationService_JoinSession_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PresentationService_JoinSession_Params.prototype.initDefaults_ = function() {
    this.presentation_url = null;
    this.presentation_id = null;
  };
  PresentationService_JoinSession_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PresentationService_JoinSession_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PresentationService_JoinSession_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PresentationService_JoinSession_Params.presentation_url
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PresentationService_JoinSession_Params.presentation_id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PresentationService_JoinSession_Params.encodedSize = codec.kStructHeaderSize + 16;

  PresentationService_JoinSession_Params.decode = function(decoder) {
    var packed;
    var val = new PresentationService_JoinSession_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.presentation_url = decoder.decodeStruct(codec.String);
    val.presentation_id = decoder.decodeStruct(codec.NullableString);
    return val;
  };

  PresentationService_JoinSession_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PresentationService_JoinSession_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.presentation_url);
    encoder.encodeStruct(codec.NullableString, val.presentation_id);
  };
  function PresentationService_JoinSession_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PresentationService_JoinSession_ResponseParams.prototype.initDefaults_ = function() {
    this.sessionInfo = null;
    this.error = null;
  };
  PresentationService_JoinSession_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PresentationService_JoinSession_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PresentationService_JoinSession_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PresentationService_JoinSession_ResponseParams.sessionInfo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, PresentationSessionInfo, true);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PresentationService_JoinSession_ResponseParams.error
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, PresentationError, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PresentationService_JoinSession_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  PresentationService_JoinSession_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new PresentationService_JoinSession_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.sessionInfo = decoder.decodeStructPointer(PresentationSessionInfo);
    val.error = decoder.decodeStructPointer(PresentationError);
    return val;
  };

  PresentationService_JoinSession_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PresentationService_JoinSession_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(PresentationSessionInfo, val.sessionInfo);
    encoder.encodeStructPointer(PresentationError, val.error);
  };
  function PresentationService_SendSessionMessage_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PresentationService_SendSessionMessage_Params.prototype.initDefaults_ = function() {
    this.sessionInfo = null;
    this.message_request = null;
  };
  PresentationService_SendSessionMessage_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PresentationService_SendSessionMessage_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PresentationService_SendSessionMessage_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PresentationService_SendSessionMessage_Params.sessionInfo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, PresentationSessionInfo, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PresentationService_SendSessionMessage_Params.message_request
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, SessionMessage, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PresentationService_SendSessionMessage_Params.encodedSize = codec.kStructHeaderSize + 16;

  PresentationService_SendSessionMessage_Params.decode = function(decoder) {
    var packed;
    var val = new PresentationService_SendSessionMessage_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.sessionInfo = decoder.decodeStructPointer(PresentationSessionInfo);
    val.message_request = decoder.decodeStructPointer(SessionMessage);
    return val;
  };

  PresentationService_SendSessionMessage_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PresentationService_SendSessionMessage_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(PresentationSessionInfo, val.sessionInfo);
    encoder.encodeStructPointer(SessionMessage, val.message_request);
  };
  function PresentationService_SendSessionMessage_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PresentationService_SendSessionMessage_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  PresentationService_SendSessionMessage_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PresentationService_SendSessionMessage_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PresentationService_SendSessionMessage_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  PresentationService_SendSessionMessage_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  PresentationService_SendSessionMessage_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new PresentationService_SendSessionMessage_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.success = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PresentationService_SendSessionMessage_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PresentationService_SendSessionMessage_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint8, val.success);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PresentationService_CloseConnection_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PresentationService_CloseConnection_Params.prototype.initDefaults_ = function() {
    this.presentation_url = null;
    this.presentation_id = null;
  };
  PresentationService_CloseConnection_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PresentationService_CloseConnection_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PresentationService_CloseConnection_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PresentationService_CloseConnection_Params.presentation_url
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PresentationService_CloseConnection_Params.presentation_id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PresentationService_CloseConnection_Params.encodedSize = codec.kStructHeaderSize + 16;

  PresentationService_CloseConnection_Params.decode = function(decoder) {
    var packed;
    var val = new PresentationService_CloseConnection_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.presentation_url = decoder.decodeStruct(codec.String);
    val.presentation_id = decoder.decodeStruct(codec.String);
    return val;
  };

  PresentationService_CloseConnection_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PresentationService_CloseConnection_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.presentation_url);
    encoder.encodeStruct(codec.String, val.presentation_id);
  };
  function PresentationService_Terminate_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PresentationService_Terminate_Params.prototype.initDefaults_ = function() {
    this.presentation_url = null;
    this.presentation_id = null;
  };
  PresentationService_Terminate_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PresentationService_Terminate_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PresentationService_Terminate_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PresentationService_Terminate_Params.presentation_url
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PresentationService_Terminate_Params.presentation_id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PresentationService_Terminate_Params.encodedSize = codec.kStructHeaderSize + 16;

  PresentationService_Terminate_Params.decode = function(decoder) {
    var packed;
    var val = new PresentationService_Terminate_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.presentation_url = decoder.decodeStruct(codec.String);
    val.presentation_id = decoder.decodeStruct(codec.String);
    return val;
  };

  PresentationService_Terminate_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PresentationService_Terminate_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.presentation_url);
    encoder.encodeStruct(codec.String, val.presentation_id);
  };
  function PresentationService_ListenForSessionMessages_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PresentationService_ListenForSessionMessages_Params.prototype.initDefaults_ = function() {
    this.sessionInfo = null;
  };
  PresentationService_ListenForSessionMessages_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PresentationService_ListenForSessionMessages_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PresentationService_ListenForSessionMessages_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PresentationService_ListenForSessionMessages_Params.sessionInfo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, PresentationSessionInfo, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PresentationService_ListenForSessionMessages_Params.encodedSize = codec.kStructHeaderSize + 8;

  PresentationService_ListenForSessionMessages_Params.decode = function(decoder) {
    var packed;
    var val = new PresentationService_ListenForSessionMessages_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.sessionInfo = decoder.decodeStructPointer(PresentationSessionInfo);
    return val;
  };

  PresentationService_ListenForSessionMessages_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PresentationService_ListenForSessionMessages_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(PresentationSessionInfo, val.sessionInfo);
  };
  function PresentationServiceClient_OnScreenAvailabilityNotSupported_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PresentationServiceClient_OnScreenAvailabilityNotSupported_Params.prototype.initDefaults_ = function() {
    this.url = null;
  };
  PresentationServiceClient_OnScreenAvailabilityNotSupported_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PresentationServiceClient_OnScreenAvailabilityNotSupported_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PresentationServiceClient_OnScreenAvailabilityNotSupported_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PresentationServiceClient_OnScreenAvailabilityNotSupported_Params.url
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PresentationServiceClient_OnScreenAvailabilityNotSupported_Params.encodedSize = codec.kStructHeaderSize + 8;

  PresentationServiceClient_OnScreenAvailabilityNotSupported_Params.decode = function(decoder) {
    var packed;
    var val = new PresentationServiceClient_OnScreenAvailabilityNotSupported_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.url = decoder.decodeStruct(codec.String);
    return val;
  };

  PresentationServiceClient_OnScreenAvailabilityNotSupported_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PresentationServiceClient_OnScreenAvailabilityNotSupported_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.url);
  };
  function PresentationServiceClient_OnScreenAvailabilityUpdated_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PresentationServiceClient_OnScreenAvailabilityUpdated_Params.prototype.initDefaults_ = function() {
    this.url = null;
    this.available = false;
  };
  PresentationServiceClient_OnScreenAvailabilityUpdated_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PresentationServiceClient_OnScreenAvailabilityUpdated_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PresentationServiceClient_OnScreenAvailabilityUpdated_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PresentationServiceClient_OnScreenAvailabilityUpdated_Params.url
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  PresentationServiceClient_OnScreenAvailabilityUpdated_Params.encodedSize = codec.kStructHeaderSize + 16;

  PresentationServiceClient_OnScreenAvailabilityUpdated_Params.decode = function(decoder) {
    var packed;
    var val = new PresentationServiceClient_OnScreenAvailabilityUpdated_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.url = decoder.decodeStruct(codec.String);
    val.available = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PresentationServiceClient_OnScreenAvailabilityUpdated_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PresentationServiceClient_OnScreenAvailabilityUpdated_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.url);
    encoder.encodeStruct(codec.Uint8, val.available);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PresentationServiceClient_OnConnectionStateChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PresentationServiceClient_OnConnectionStateChanged_Params.prototype.initDefaults_ = function() {
    this.connection = null;
    this.newState = 0;
  };
  PresentationServiceClient_OnConnectionStateChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PresentationServiceClient_OnConnectionStateChanged_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PresentationServiceClient_OnConnectionStateChanged_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PresentationServiceClient_OnConnectionStateChanged_Params.connection
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, PresentationSessionInfo, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  PresentationServiceClient_OnConnectionStateChanged_Params.encodedSize = codec.kStructHeaderSize + 16;

  PresentationServiceClient_OnConnectionStateChanged_Params.decode = function(decoder) {
    var packed;
    var val = new PresentationServiceClient_OnConnectionStateChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.connection = decoder.decodeStructPointer(PresentationSessionInfo);
    val.newState = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PresentationServiceClient_OnConnectionStateChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PresentationServiceClient_OnConnectionStateChanged_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(PresentationSessionInfo, val.connection);
    encoder.encodeStruct(codec.Int32, val.newState);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PresentationServiceClient_OnConnectionClosed_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PresentationServiceClient_OnConnectionClosed_Params.prototype.initDefaults_ = function() {
    this.connection = null;
    this.reason = 0;
    this.message = null;
  };
  PresentationServiceClient_OnConnectionClosed_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PresentationServiceClient_OnConnectionClosed_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PresentationServiceClient_OnConnectionClosed_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PresentationServiceClient_OnConnectionClosed_Params.connection
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, PresentationSessionInfo, false);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate PresentationServiceClient_OnConnectionClosed_Params.message
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PresentationServiceClient_OnConnectionClosed_Params.encodedSize = codec.kStructHeaderSize + 24;

  PresentationServiceClient_OnConnectionClosed_Params.decode = function(decoder) {
    var packed;
    var val = new PresentationServiceClient_OnConnectionClosed_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.connection = decoder.decodeStructPointer(PresentationSessionInfo);
    val.reason = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.message = decoder.decodeStruct(codec.String);
    return val;
  };

  PresentationServiceClient_OnConnectionClosed_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PresentationServiceClient_OnConnectionClosed_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(PresentationSessionInfo, val.connection);
    encoder.encodeStruct(codec.Int32, val.reason);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.message);
  };
  function PresentationServiceClient_OnSessionMessagesReceived_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PresentationServiceClient_OnSessionMessagesReceived_Params.prototype.initDefaults_ = function() {
    this.sessionInfo = null;
    this.messages = null;
  };
  PresentationServiceClient_OnSessionMessagesReceived_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PresentationServiceClient_OnSessionMessagesReceived_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PresentationServiceClient_OnSessionMessagesReceived_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PresentationServiceClient_OnSessionMessagesReceived_Params.sessionInfo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, PresentationSessionInfo, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PresentationServiceClient_OnSessionMessagesReceived_Params.messages
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(SessionMessage), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PresentationServiceClient_OnSessionMessagesReceived_Params.encodedSize = codec.kStructHeaderSize + 16;

  PresentationServiceClient_OnSessionMessagesReceived_Params.decode = function(decoder) {
    var packed;
    var val = new PresentationServiceClient_OnSessionMessagesReceived_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.sessionInfo = decoder.decodeStructPointer(PresentationSessionInfo);
    val.messages = decoder.decodeArrayPointer(new codec.PointerTo(SessionMessage));
    return val;
  };

  PresentationServiceClient_OnSessionMessagesReceived_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PresentationServiceClient_OnSessionMessagesReceived_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(PresentationSessionInfo, val.sessionInfo);
    encoder.encodeArrayPointer(new codec.PointerTo(SessionMessage), val.messages);
  };
  function PresentationServiceClient_OnDefaultSessionStarted_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PresentationServiceClient_OnDefaultSessionStarted_Params.prototype.initDefaults_ = function() {
    this.sessionInfo = null;
  };
  PresentationServiceClient_OnDefaultSessionStarted_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PresentationServiceClient_OnDefaultSessionStarted_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PresentationServiceClient_OnDefaultSessionStarted_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PresentationServiceClient_OnDefaultSessionStarted_Params.sessionInfo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, PresentationSessionInfo, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PresentationServiceClient_OnDefaultSessionStarted_Params.encodedSize = codec.kStructHeaderSize + 8;

  PresentationServiceClient_OnDefaultSessionStarted_Params.decode = function(decoder) {
    var packed;
    var val = new PresentationServiceClient_OnDefaultSessionStarted_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.sessionInfo = decoder.decodeStructPointer(PresentationSessionInfo);
    return val;
  };

  PresentationServiceClient_OnDefaultSessionStarted_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PresentationServiceClient_OnDefaultSessionStarted_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(PresentationSessionInfo, val.sessionInfo);
  };
  var kPresentationService_SetClient_Name = 0;
  var kPresentationService_SetDefaultPresentationURL_Name = 1;
  var kPresentationService_ListenForScreenAvailability_Name = 2;
  var kPresentationService_StopListeningForScreenAvailability_Name = 3;
  var kPresentationService_StartSession_Name = 4;
  var kPresentationService_JoinSession_Name = 5;
  var kPresentationService_SendSessionMessage_Name = 6;
  var kPresentationService_CloseConnection_Name = 7;
  var kPresentationService_Terminate_Name = 8;
  var kPresentationService_ListenForSessionMessages_Name = 9;

  function PresentationServiceProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  PresentationServiceProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  PresentationServiceProxy.prototype.setClient = function(client) {
    var params = new PresentationService_SetClient_Params();
    params.client = core.isHandle(client) ? client : connection.bindImpl(client, PresentationServiceClient);
    var builder = new codec.MessageBuilder(
        kPresentationService_SetClient_Name,
        codec.align(PresentationService_SetClient_Params.encodedSize));
    builder.encodeStruct(PresentationService_SetClient_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PresentationServiceProxy.prototype.setDefaultPresentationURL = function(url) {
    var params = new PresentationService_SetDefaultPresentationURL_Params();
    params.url = url;
    var builder = new codec.MessageBuilder(
        kPresentationService_SetDefaultPresentationURL_Name,
        codec.align(PresentationService_SetDefaultPresentationURL_Params.encodedSize));
    builder.encodeStruct(PresentationService_SetDefaultPresentationURL_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PresentationServiceProxy.prototype.listenForScreenAvailability = function(url) {
    var params = new PresentationService_ListenForScreenAvailability_Params();
    params.url = url;
    var builder = new codec.MessageBuilder(
        kPresentationService_ListenForScreenAvailability_Name,
        codec.align(PresentationService_ListenForScreenAvailability_Params.encodedSize));
    builder.encodeStruct(PresentationService_ListenForScreenAvailability_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PresentationServiceProxy.prototype.stopListeningForScreenAvailability = function(url) {
    var params = new PresentationService_StopListeningForScreenAvailability_Params();
    params.url = url;
    var builder = new codec.MessageBuilder(
        kPresentationService_StopListeningForScreenAvailability_Name,
        codec.align(PresentationService_StopListeningForScreenAvailability_Params.encodedSize));
    builder.encodeStruct(PresentationService_StopListeningForScreenAvailability_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PresentationServiceProxy.prototype.startSession = function(presentation_url) {
    var params = new PresentationService_StartSession_Params();
    params.presentation_url = presentation_url;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kPresentationService_StartSession_Name,
          codec.align(PresentationService_StartSession_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(PresentationService_StartSession_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(PresentationService_StartSession_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  PresentationServiceProxy.prototype.joinSession = function(presentation_url, presentation_id) {
    var params = new PresentationService_JoinSession_Params();
    params.presentation_url = presentation_url;
    params.presentation_id = presentation_id;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kPresentationService_JoinSession_Name,
          codec.align(PresentationService_JoinSession_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(PresentationService_JoinSession_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(PresentationService_JoinSession_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  PresentationServiceProxy.prototype.sendSessionMessage = function(sessionInfo, message_request) {
    var params = new PresentationService_SendSessionMessage_Params();
    params.sessionInfo = sessionInfo;
    params.message_request = message_request;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kPresentationService_SendSessionMessage_Name,
          codec.align(PresentationService_SendSessionMessage_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(PresentationService_SendSessionMessage_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(PresentationService_SendSessionMessage_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  PresentationServiceProxy.prototype.closeConnection = function(presentation_url, presentation_id) {
    var params = new PresentationService_CloseConnection_Params();
    params.presentation_url = presentation_url;
    params.presentation_id = presentation_id;
    var builder = new codec.MessageBuilder(
        kPresentationService_CloseConnection_Name,
        codec.align(PresentationService_CloseConnection_Params.encodedSize));
    builder.encodeStruct(PresentationService_CloseConnection_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PresentationServiceProxy.prototype.terminate = function(presentation_url, presentation_id) {
    var params = new PresentationService_Terminate_Params();
    params.presentation_url = presentation_url;
    params.presentation_id = presentation_id;
    var builder = new codec.MessageBuilder(
        kPresentationService_Terminate_Name,
        codec.align(PresentationService_Terminate_Params.encodedSize));
    builder.encodeStruct(PresentationService_Terminate_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PresentationServiceProxy.prototype.listenForSessionMessages = function(sessionInfo) {
    var params = new PresentationService_ListenForSessionMessages_Params();
    params.sessionInfo = sessionInfo;
    var builder = new codec.MessageBuilder(
        kPresentationService_ListenForSessionMessages_Name,
        codec.align(PresentationService_ListenForSessionMessages_Params.encodedSize));
    builder.encodeStruct(PresentationService_ListenForSessionMessages_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function PresentationServiceStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  PresentationServiceStub.prototype = Object.create(bindings.StubBase.prototype);
  PresentationServiceStub.prototype.setClient = function(client) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.setClient && bindings.StubBindings(this).delegate.setClient(connection.bindHandleToProxy(client, PresentationServiceClient));
  }
  PresentationServiceStub.prototype.setDefaultPresentationURL = function(url) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.setDefaultPresentationURL && bindings.StubBindings(this).delegate.setDefaultPresentationURL(url);
  }
  PresentationServiceStub.prototype.listenForScreenAvailability = function(url) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.listenForScreenAvailability && bindings.StubBindings(this).delegate.listenForScreenAvailability(url);
  }
  PresentationServiceStub.prototype.stopListeningForScreenAvailability = function(url) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.stopListeningForScreenAvailability && bindings.StubBindings(this).delegate.stopListeningForScreenAvailability(url);
  }
  PresentationServiceStub.prototype.startSession = function(presentation_url) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.startSession && bindings.StubBindings(this).delegate.startSession(presentation_url);
  }
  PresentationServiceStub.prototype.joinSession = function(presentation_url, presentation_id) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.joinSession && bindings.StubBindings(this).delegate.joinSession(presentation_url, presentation_id);
  }
  PresentationServiceStub.prototype.sendSessionMessage = function(sessionInfo, message_request) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.sendSessionMessage && bindings.StubBindings(this).delegate.sendSessionMessage(sessionInfo, message_request);
  }
  PresentationServiceStub.prototype.closeConnection = function(presentation_url, presentation_id) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.closeConnection && bindings.StubBindings(this).delegate.closeConnection(presentation_url, presentation_id);
  }
  PresentationServiceStub.prototype.terminate = function(presentation_url, presentation_id) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.terminate && bindings.StubBindings(this).delegate.terminate(presentation_url, presentation_id);
  }
  PresentationServiceStub.prototype.listenForSessionMessages = function(sessionInfo) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.listenForSessionMessages && bindings.StubBindings(this).delegate.listenForSessionMessages(sessionInfo);
  }

  PresentationServiceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPresentationService_SetClient_Name:
      var params = reader.decodeStruct(PresentationService_SetClient_Params);
      this.setClient(params.client);
      return true;
    case kPresentationService_SetDefaultPresentationURL_Name:
      var params = reader.decodeStruct(PresentationService_SetDefaultPresentationURL_Params);
      this.setDefaultPresentationURL(params.url);
      return true;
    case kPresentationService_ListenForScreenAvailability_Name:
      var params = reader.decodeStruct(PresentationService_ListenForScreenAvailability_Params);
      this.listenForScreenAvailability(params.url);
      return true;
    case kPresentationService_StopListeningForScreenAvailability_Name:
      var params = reader.decodeStruct(PresentationService_StopListeningForScreenAvailability_Params);
      this.stopListeningForScreenAvailability(params.url);
      return true;
    case kPresentationService_CloseConnection_Name:
      var params = reader.decodeStruct(PresentationService_CloseConnection_Params);
      this.closeConnection(params.presentation_url, params.presentation_id);
      return true;
    case kPresentationService_Terminate_Name:
      var params = reader.decodeStruct(PresentationService_Terminate_Params);
      this.terminate(params.presentation_url, params.presentation_id);
      return true;
    case kPresentationService_ListenForSessionMessages_Name:
      var params = reader.decodeStruct(PresentationService_ListenForSessionMessages_Params);
      this.listenForSessionMessages(params.sessionInfo);
      return true;
    default:
      return false;
    }
  };

  PresentationServiceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPresentationService_StartSession_Name:
      var params = reader.decodeStruct(PresentationService_StartSession_Params);
      return this.startSession(params.presentation_url).then(function(response) {
        var responseParams =
            new PresentationService_StartSession_ResponseParams();
        responseParams.sessionInfo = response.sessionInfo;
        responseParams.error = response.error;
        var builder = new codec.MessageWithRequestIDBuilder(
            kPresentationService_StartSession_Name,
            codec.align(PresentationService_StartSession_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(PresentationService_StartSession_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kPresentationService_JoinSession_Name:
      var params = reader.decodeStruct(PresentationService_JoinSession_Params);
      return this.joinSession(params.presentation_url, params.presentation_id).then(function(response) {
        var responseParams =
            new PresentationService_JoinSession_ResponseParams();
        responseParams.sessionInfo = response.sessionInfo;
        responseParams.error = response.error;
        var builder = new codec.MessageWithRequestIDBuilder(
            kPresentationService_JoinSession_Name,
            codec.align(PresentationService_JoinSession_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(PresentationService_JoinSession_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kPresentationService_SendSessionMessage_Name:
      var params = reader.decodeStruct(PresentationService_SendSessionMessage_Params);
      return this.sendSessionMessage(params.sessionInfo, params.message_request).then(function(response) {
        var responseParams =
            new PresentationService_SendSessionMessage_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageWithRequestIDBuilder(
            kPresentationService_SendSessionMessage_Name,
            codec.align(PresentationService_SendSessionMessage_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(PresentationService_SendSessionMessage_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validatePresentationServiceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kPresentationService_SetClient_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PresentationService_SetClient_Params;
      break;
      case kPresentationService_SetDefaultPresentationURL_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PresentationService_SetDefaultPresentationURL_Params;
      break;
      case kPresentationService_ListenForScreenAvailability_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PresentationService_ListenForScreenAvailability_Params;
      break;
      case kPresentationService_StopListeningForScreenAvailability_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PresentationService_StopListeningForScreenAvailability_Params;
      break;
      case kPresentationService_StartSession_Name:
        if (message.expectsResponse())
          paramsClass = PresentationService_StartSession_Params;
      break;
      case kPresentationService_JoinSession_Name:
        if (message.expectsResponse())
          paramsClass = PresentationService_JoinSession_Params;
      break;
      case kPresentationService_SendSessionMessage_Name:
        if (message.expectsResponse())
          paramsClass = PresentationService_SendSessionMessage_Params;
      break;
      case kPresentationService_CloseConnection_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PresentationService_CloseConnection_Params;
      break;
      case kPresentationService_Terminate_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PresentationService_Terminate_Params;
      break;
      case kPresentationService_ListenForSessionMessages_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PresentationService_ListenForSessionMessages_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validatePresentationServiceResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kPresentationService_StartSession_Name:
        if (message.isResponse())
          paramsClass = PresentationService_StartSession_ResponseParams;
        break;
      case kPresentationService_JoinSession_Name:
        if (message.isResponse())
          paramsClass = PresentationService_JoinSession_ResponseParams;
        break;
      case kPresentationService_SendSessionMessage_Name:
        if (message.isResponse())
          paramsClass = PresentationService_SendSessionMessage_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var PresentationService = {
    name: 'blink::mojom::PresentationService',
    proxyClass: PresentationServiceProxy,
    stubClass: PresentationServiceStub,
    validateRequest: validatePresentationServiceRequest,
    validateResponse: validatePresentationServiceResponse,
  };
  PresentationServiceStub.prototype.validator = validatePresentationServiceRequest;
  PresentationServiceProxy.prototype.validator = validatePresentationServiceResponse;
  var kPresentationServiceClient_OnScreenAvailabilityNotSupported_Name = 0;
  var kPresentationServiceClient_OnScreenAvailabilityUpdated_Name = 1;
  var kPresentationServiceClient_OnConnectionStateChanged_Name = 2;
  var kPresentationServiceClient_OnConnectionClosed_Name = 3;
  var kPresentationServiceClient_OnSessionMessagesReceived_Name = 4;
  var kPresentationServiceClient_OnDefaultSessionStarted_Name = 5;

  function PresentationServiceClientProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  PresentationServiceClientProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  PresentationServiceClientProxy.prototype.onScreenAvailabilityNotSupported = function(url) {
    var params = new PresentationServiceClient_OnScreenAvailabilityNotSupported_Params();
    params.url = url;
    var builder = new codec.MessageBuilder(
        kPresentationServiceClient_OnScreenAvailabilityNotSupported_Name,
        codec.align(PresentationServiceClient_OnScreenAvailabilityNotSupported_Params.encodedSize));
    builder.encodeStruct(PresentationServiceClient_OnScreenAvailabilityNotSupported_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PresentationServiceClientProxy.prototype.onScreenAvailabilityUpdated = function(url, available) {
    var params = new PresentationServiceClient_OnScreenAvailabilityUpdated_Params();
    params.url = url;
    params.available = available;
    var builder = new codec.MessageBuilder(
        kPresentationServiceClient_OnScreenAvailabilityUpdated_Name,
        codec.align(PresentationServiceClient_OnScreenAvailabilityUpdated_Params.encodedSize));
    builder.encodeStruct(PresentationServiceClient_OnScreenAvailabilityUpdated_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PresentationServiceClientProxy.prototype.onConnectionStateChanged = function(connection, newState) {
    var params = new PresentationServiceClient_OnConnectionStateChanged_Params();
    params.connection = connection;
    params.newState = newState;
    var builder = new codec.MessageBuilder(
        kPresentationServiceClient_OnConnectionStateChanged_Name,
        codec.align(PresentationServiceClient_OnConnectionStateChanged_Params.encodedSize));
    builder.encodeStruct(PresentationServiceClient_OnConnectionStateChanged_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PresentationServiceClientProxy.prototype.onConnectionClosed = function(connection, reason, message) {
    var params = new PresentationServiceClient_OnConnectionClosed_Params();
    params.connection = connection;
    params.reason = reason;
    params.message = message;
    var builder = new codec.MessageBuilder(
        kPresentationServiceClient_OnConnectionClosed_Name,
        codec.align(PresentationServiceClient_OnConnectionClosed_Params.encodedSize));
    builder.encodeStruct(PresentationServiceClient_OnConnectionClosed_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PresentationServiceClientProxy.prototype.onSessionMessagesReceived = function(sessionInfo, messages) {
    var params = new PresentationServiceClient_OnSessionMessagesReceived_Params();
    params.sessionInfo = sessionInfo;
    params.messages = messages;
    var builder = new codec.MessageBuilder(
        kPresentationServiceClient_OnSessionMessagesReceived_Name,
        codec.align(PresentationServiceClient_OnSessionMessagesReceived_Params.encodedSize));
    builder.encodeStruct(PresentationServiceClient_OnSessionMessagesReceived_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PresentationServiceClientProxy.prototype.onDefaultSessionStarted = function(sessionInfo) {
    var params = new PresentationServiceClient_OnDefaultSessionStarted_Params();
    params.sessionInfo = sessionInfo;
    var builder = new codec.MessageBuilder(
        kPresentationServiceClient_OnDefaultSessionStarted_Name,
        codec.align(PresentationServiceClient_OnDefaultSessionStarted_Params.encodedSize));
    builder.encodeStruct(PresentationServiceClient_OnDefaultSessionStarted_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function PresentationServiceClientStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  PresentationServiceClientStub.prototype = Object.create(bindings.StubBase.prototype);
  PresentationServiceClientStub.prototype.onScreenAvailabilityNotSupported = function(url) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onScreenAvailabilityNotSupported && bindings.StubBindings(this).delegate.onScreenAvailabilityNotSupported(url);
  }
  PresentationServiceClientStub.prototype.onScreenAvailabilityUpdated = function(url, available) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onScreenAvailabilityUpdated && bindings.StubBindings(this).delegate.onScreenAvailabilityUpdated(url, available);
  }
  PresentationServiceClientStub.prototype.onConnectionStateChanged = function(connection, newState) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onConnectionStateChanged && bindings.StubBindings(this).delegate.onConnectionStateChanged(connection, newState);
  }
  PresentationServiceClientStub.prototype.onConnectionClosed = function(connection, reason, message) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onConnectionClosed && bindings.StubBindings(this).delegate.onConnectionClosed(connection, reason, message);
  }
  PresentationServiceClientStub.prototype.onSessionMessagesReceived = function(sessionInfo, messages) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onSessionMessagesReceived && bindings.StubBindings(this).delegate.onSessionMessagesReceived(sessionInfo, messages);
  }
  PresentationServiceClientStub.prototype.onDefaultSessionStarted = function(sessionInfo) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onDefaultSessionStarted && bindings.StubBindings(this).delegate.onDefaultSessionStarted(sessionInfo);
  }

  PresentationServiceClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPresentationServiceClient_OnScreenAvailabilityNotSupported_Name:
      var params = reader.decodeStruct(PresentationServiceClient_OnScreenAvailabilityNotSupported_Params);
      this.onScreenAvailabilityNotSupported(params.url);
      return true;
    case kPresentationServiceClient_OnScreenAvailabilityUpdated_Name:
      var params = reader.decodeStruct(PresentationServiceClient_OnScreenAvailabilityUpdated_Params);
      this.onScreenAvailabilityUpdated(params.url, params.available);
      return true;
    case kPresentationServiceClient_OnConnectionStateChanged_Name:
      var params = reader.decodeStruct(PresentationServiceClient_OnConnectionStateChanged_Params);
      this.onConnectionStateChanged(params.connection, params.newState);
      return true;
    case kPresentationServiceClient_OnConnectionClosed_Name:
      var params = reader.decodeStruct(PresentationServiceClient_OnConnectionClosed_Params);
      this.onConnectionClosed(params.connection, params.reason, params.message);
      return true;
    case kPresentationServiceClient_OnSessionMessagesReceived_Name:
      var params = reader.decodeStruct(PresentationServiceClient_OnSessionMessagesReceived_Params);
      this.onSessionMessagesReceived(params.sessionInfo, params.messages);
      return true;
    case kPresentationServiceClient_OnDefaultSessionStarted_Name:
      var params = reader.decodeStruct(PresentationServiceClient_OnDefaultSessionStarted_Params);
      this.onDefaultSessionStarted(params.sessionInfo);
      return true;
    default:
      return false;
    }
  };

  PresentationServiceClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validatePresentationServiceClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kPresentationServiceClient_OnScreenAvailabilityNotSupported_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PresentationServiceClient_OnScreenAvailabilityNotSupported_Params;
      break;
      case kPresentationServiceClient_OnScreenAvailabilityUpdated_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PresentationServiceClient_OnScreenAvailabilityUpdated_Params;
      break;
      case kPresentationServiceClient_OnConnectionStateChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PresentationServiceClient_OnConnectionStateChanged_Params;
      break;
      case kPresentationServiceClient_OnConnectionClosed_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PresentationServiceClient_OnConnectionClosed_Params;
      break;
      case kPresentationServiceClient_OnSessionMessagesReceived_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PresentationServiceClient_OnSessionMessagesReceived_Params;
      break;
      case kPresentationServiceClient_OnDefaultSessionStarted_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PresentationServiceClient_OnDefaultSessionStarted_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validatePresentationServiceClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var PresentationServiceClient = {
    name: 'blink::mojom::PresentationServiceClient',
    proxyClass: PresentationServiceClientProxy,
    stubClass: PresentationServiceClientStub,
    validateRequest: validatePresentationServiceClientRequest,
    validateResponse: null,
  };
  PresentationServiceClientStub.prototype.validator = validatePresentationServiceClientRequest;
  PresentationServiceClientProxy.prototype.validator = null;

  var exports = {};
  exports.PresentationConnectionState = PresentationConnectionState;
  exports.PresentationConnectionCloseReason = PresentationConnectionCloseReason;
  exports.PresentationErrorType = PresentationErrorType;
  exports.PresentationMessageType = PresentationMessageType;
  exports.PresentationSessionInfo = PresentationSessionInfo;
  exports.PresentationError = PresentationError;
  exports.SessionMessage = SessionMessage;
  exports.PresentationService = PresentationService;
  exports.PresentationServiceClient = PresentationServiceClient;

  return exports;
});
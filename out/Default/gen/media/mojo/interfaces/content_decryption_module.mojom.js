// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("media/mojo/interfaces/content_decryption_module.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "media/mojo/interfaces/decryptor.mojom",
    "url/mojo/url.mojom",
], function(bindings, codec, connection, core, validator, decryptor$, url$) {
  var CdmException = {};
  CdmException.NOT_SUPPORTED_ERROR = 0;
  CdmException.INVALID_STATE_ERROR = CdmException.NOT_SUPPORTED_ERROR + 1;
  CdmException.INVALID_ACCESS_ERROR = CdmException.INVALID_STATE_ERROR + 1;
  CdmException.QUOTA_EXCEEDED_ERROR = CdmException.INVALID_ACCESS_ERROR + 1;
  CdmException.UNKNOWN_ERROR = CdmException.QUOTA_EXCEEDED_ERROR + 1;
  CdmException.CLIENT_ERROR = CdmException.UNKNOWN_ERROR + 1;
  CdmException.OUTPUT_ERROR = CdmException.CLIENT_ERROR + 1;
  var CdmKeyStatus = {};
  CdmKeyStatus.USABLE = 0;
  CdmKeyStatus.INTERNAL_ERROR = CdmKeyStatus.USABLE + 1;
  CdmKeyStatus.EXPIRED = CdmKeyStatus.INTERNAL_ERROR + 1;
  CdmKeyStatus.OUTPUT_RESTRICTED = CdmKeyStatus.EXPIRED + 1;
  CdmKeyStatus.OUTPUT_DOWNSCALED = CdmKeyStatus.OUTPUT_RESTRICTED + 1;
  CdmKeyStatus.KEY_STATUS_PENDING = CdmKeyStatus.OUTPUT_DOWNSCALED + 1;
  var CdmMessageType = {};
  CdmMessageType.LICENSE_REQUEST = 0;
  CdmMessageType.LICENSE_RENEWAL = CdmMessageType.LICENSE_REQUEST + 1;
  CdmMessageType.LICENSE_RELEASE = CdmMessageType.LICENSE_RENEWAL + 1;

  function CdmConfig(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CdmConfig.prototype.initDefaults_ = function() {
    this.allow_distinctive_identifier = false;
    this.allow_persistent_state = false;
    this.use_hw_secure_codecs = false;
  };
  CdmConfig.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  CdmConfig.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, CdmConfig.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;




    return validator.validationError.NONE;
  };

  CdmConfig.encodedSize = codec.kStructHeaderSize + 8;

  CdmConfig.decode = function(decoder) {
    var packed;
    var val = new CdmConfig();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.allow_distinctive_identifier = (packed >> 0) & 1 ? true : false;
    val.allow_persistent_state = (packed >> 1) & 1 ? true : false;
    val.use_hw_secure_codecs = (packed >> 2) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  CdmConfig.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CdmConfig.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.allow_distinctive_identifier & 1) << 0
    packed |= (val.allow_persistent_state & 1) << 1
    packed |= (val.use_hw_secure_codecs & 1) << 2
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function CdmPromiseResult(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CdmPromiseResult.prototype.initDefaults_ = function() {
    this.success = false;
    this.exception = 0;
    this.system_code = 0;
    this.error_message = null;
  };
  CdmPromiseResult.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  CdmPromiseResult.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, CdmPromiseResult.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;




    
    // validate CdmPromiseResult.error_message
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CdmPromiseResult.encodedSize = codec.kStructHeaderSize + 24;

  CdmPromiseResult.decode = function(decoder) {
    var packed;
    var val = new CdmPromiseResult();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.success = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.exception = decoder.decodeStruct(codec.Int32);
    val.system_code = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.error_message = decoder.decodeStruct(codec.NullableString);
    return val;
  };

  CdmPromiseResult.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CdmPromiseResult.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint8, val.success);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.exception);
    encoder.encodeStruct(codec.Uint32, val.system_code);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.NullableString, val.error_message);
  };
  function CdmKeyInformation(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CdmKeyInformation.prototype.initDefaults_ = function() {
    this.key_id = null;
    this.status = 0;
    this.system_code = 0;
  };
  CdmKeyInformation.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  CdmKeyInformation.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, CdmKeyInformation.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate CdmKeyInformation.key_id
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  CdmKeyInformation.encodedSize = codec.kStructHeaderSize + 16;

  CdmKeyInformation.decode = function(decoder) {
    var packed;
    var val = new CdmKeyInformation();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.key_id = decoder.decodeArrayPointer(codec.Uint8);
    val.status = decoder.decodeStruct(codec.Int32);
    val.system_code = decoder.decodeStruct(codec.Uint32);
    return val;
  };

  CdmKeyInformation.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CdmKeyInformation.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Uint8, val.key_id);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.encodeStruct(codec.Uint32, val.system_code);
  };
  function ContentDecryptionModule_SetClient_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ContentDecryptionModule_SetClient_Params.prototype.initDefaults_ = function() {
    this.client = null;
  };
  ContentDecryptionModule_SetClient_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ContentDecryptionModule_SetClient_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ContentDecryptionModule_SetClient_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ContentDecryptionModule_SetClient_Params.client
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ContentDecryptionModule_SetClient_Params.encodedSize = codec.kStructHeaderSize + 8;

  ContentDecryptionModule_SetClient_Params.decode = function(decoder) {
    var packed;
    var val = new ContentDecryptionModule_SetClient_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.client = decoder.decodeStruct(codec.Interface);
    return val;
  };

  ContentDecryptionModule_SetClient_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ContentDecryptionModule_SetClient_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Interface, val.client);
  };
  function ContentDecryptionModule_Initialize_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ContentDecryptionModule_Initialize_Params.prototype.initDefaults_ = function() {
    this.key_system = null;
    this.security_origin = null;
    this.cdm_config = null;
  };
  ContentDecryptionModule_Initialize_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ContentDecryptionModule_Initialize_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ContentDecryptionModule_Initialize_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ContentDecryptionModule_Initialize_Params.key_system
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ContentDecryptionModule_Initialize_Params.security_origin
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ContentDecryptionModule_Initialize_Params.cdm_config
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, CdmConfig, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ContentDecryptionModule_Initialize_Params.encodedSize = codec.kStructHeaderSize + 24;

  ContentDecryptionModule_Initialize_Params.decode = function(decoder) {
    var packed;
    var val = new ContentDecryptionModule_Initialize_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.key_system = decoder.decodeStruct(codec.String);
    val.security_origin = decoder.decodeStruct(codec.String);
    val.cdm_config = decoder.decodeStructPointer(CdmConfig);
    return val;
  };

  ContentDecryptionModule_Initialize_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ContentDecryptionModule_Initialize_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.key_system);
    encoder.encodeStruct(codec.String, val.security_origin);
    encoder.encodeStructPointer(CdmConfig, val.cdm_config);
  };
  function ContentDecryptionModule_Initialize_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ContentDecryptionModule_Initialize_ResponseParams.prototype.initDefaults_ = function() {
    this.result = null;
    this.cdm_id = 0;
    this.decryptor = null;
  };
  ContentDecryptionModule_Initialize_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ContentDecryptionModule_Initialize_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ContentDecryptionModule_Initialize_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ContentDecryptionModule_Initialize_ResponseParams.result
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, CdmPromiseResult, false);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate ContentDecryptionModule_Initialize_ResponseParams.decryptor
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 12, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ContentDecryptionModule_Initialize_ResponseParams.encodedSize = codec.kStructHeaderSize + 24;

  ContentDecryptionModule_Initialize_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ContentDecryptionModule_Initialize_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStructPointer(CdmPromiseResult);
    val.cdm_id = decoder.decodeStruct(codec.Int32);
    val.decryptor = decoder.decodeStruct(codec.NullableInterface);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ContentDecryptionModule_Initialize_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ContentDecryptionModule_Initialize_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(CdmPromiseResult, val.result);
    encoder.encodeStruct(codec.Int32, val.cdm_id);
    encoder.encodeStruct(codec.NullableInterface, val.decryptor);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ContentDecryptionModule_SetServerCertificate_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ContentDecryptionModule_SetServerCertificate_Params.prototype.initDefaults_ = function() {
    this.certificate_data = null;
  };
  ContentDecryptionModule_SetServerCertificate_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ContentDecryptionModule_SetServerCertificate_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ContentDecryptionModule_SetServerCertificate_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ContentDecryptionModule_SetServerCertificate_Params.certificate_data
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ContentDecryptionModule_SetServerCertificate_Params.encodedSize = codec.kStructHeaderSize + 8;

  ContentDecryptionModule_SetServerCertificate_Params.decode = function(decoder) {
    var packed;
    var val = new ContentDecryptionModule_SetServerCertificate_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.certificate_data = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  ContentDecryptionModule_SetServerCertificate_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ContentDecryptionModule_SetServerCertificate_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Uint8, val.certificate_data);
  };
  function ContentDecryptionModule_SetServerCertificate_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ContentDecryptionModule_SetServerCertificate_ResponseParams.prototype.initDefaults_ = function() {
    this.result = null;
  };
  ContentDecryptionModule_SetServerCertificate_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ContentDecryptionModule_SetServerCertificate_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ContentDecryptionModule_SetServerCertificate_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ContentDecryptionModule_SetServerCertificate_ResponseParams.result
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, CdmPromiseResult, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ContentDecryptionModule_SetServerCertificate_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  ContentDecryptionModule_SetServerCertificate_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ContentDecryptionModule_SetServerCertificate_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStructPointer(CdmPromiseResult);
    return val;
  };

  ContentDecryptionModule_SetServerCertificate_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ContentDecryptionModule_SetServerCertificate_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(CdmPromiseResult, val.result);
  };
  function ContentDecryptionModule_CreateSessionAndGenerateRequest_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ContentDecryptionModule_CreateSessionAndGenerateRequest_Params.prototype.initDefaults_ = function() {
    this.session_type = 0;
    this.init_data_type = 0;
    this.init_data = null;
  };
  ContentDecryptionModule_CreateSessionAndGenerateRequest_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ContentDecryptionModule_CreateSessionAndGenerateRequest_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ContentDecryptionModule_CreateSessionAndGenerateRequest_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



    
    // validate ContentDecryptionModule_CreateSessionAndGenerateRequest_Params.init_data
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ContentDecryptionModule_CreateSessionAndGenerateRequest_Params.encodedSize = codec.kStructHeaderSize + 16;

  ContentDecryptionModule_CreateSessionAndGenerateRequest_Params.decode = function(decoder) {
    var packed;
    var val = new ContentDecryptionModule_CreateSessionAndGenerateRequest_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.session_type = decoder.decodeStruct(codec.Int32);
    val.init_data_type = decoder.decodeStruct(codec.Int32);
    val.init_data = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  ContentDecryptionModule_CreateSessionAndGenerateRequest_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ContentDecryptionModule_CreateSessionAndGenerateRequest_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.session_type);
    encoder.encodeStruct(codec.Int32, val.init_data_type);
    encoder.encodeArrayPointer(codec.Uint8, val.init_data);
  };
  function ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams.prototype.initDefaults_ = function() {
    this.result = null;
    this.session_id = null;
  };
  ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams.result
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, CdmPromiseResult, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams.session_id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStructPointer(CdmPromiseResult);
    val.session_id = decoder.decodeStruct(codec.NullableString);
    return val;
  };

  ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(CdmPromiseResult, val.result);
    encoder.encodeStruct(codec.NullableString, val.session_id);
  };
  function ContentDecryptionModule_LoadSession_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ContentDecryptionModule_LoadSession_Params.prototype.initDefaults_ = function() {
    this.session_type = 0;
    this.session_id = null;
  };
  ContentDecryptionModule_LoadSession_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ContentDecryptionModule_LoadSession_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ContentDecryptionModule_LoadSession_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate ContentDecryptionModule_LoadSession_Params.session_id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ContentDecryptionModule_LoadSession_Params.encodedSize = codec.kStructHeaderSize + 16;

  ContentDecryptionModule_LoadSession_Params.decode = function(decoder) {
    var packed;
    var val = new ContentDecryptionModule_LoadSession_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.session_type = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.session_id = decoder.decodeStruct(codec.String);
    return val;
  };

  ContentDecryptionModule_LoadSession_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ContentDecryptionModule_LoadSession_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.session_type);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.session_id);
  };
  function ContentDecryptionModule_LoadSession_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ContentDecryptionModule_LoadSession_ResponseParams.prototype.initDefaults_ = function() {
    this.result = null;
    this.session_id = null;
  };
  ContentDecryptionModule_LoadSession_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ContentDecryptionModule_LoadSession_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ContentDecryptionModule_LoadSession_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ContentDecryptionModule_LoadSession_ResponseParams.result
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, CdmPromiseResult, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ContentDecryptionModule_LoadSession_ResponseParams.session_id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ContentDecryptionModule_LoadSession_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  ContentDecryptionModule_LoadSession_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ContentDecryptionModule_LoadSession_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStructPointer(CdmPromiseResult);
    val.session_id = decoder.decodeStruct(codec.NullableString);
    return val;
  };

  ContentDecryptionModule_LoadSession_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ContentDecryptionModule_LoadSession_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(CdmPromiseResult, val.result);
    encoder.encodeStruct(codec.NullableString, val.session_id);
  };
  function ContentDecryptionModule_UpdateSession_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ContentDecryptionModule_UpdateSession_Params.prototype.initDefaults_ = function() {
    this.session_id = null;
    this.response = null;
  };
  ContentDecryptionModule_UpdateSession_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ContentDecryptionModule_UpdateSession_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ContentDecryptionModule_UpdateSession_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ContentDecryptionModule_UpdateSession_Params.session_id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ContentDecryptionModule_UpdateSession_Params.response
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ContentDecryptionModule_UpdateSession_Params.encodedSize = codec.kStructHeaderSize + 16;

  ContentDecryptionModule_UpdateSession_Params.decode = function(decoder) {
    var packed;
    var val = new ContentDecryptionModule_UpdateSession_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.session_id = decoder.decodeStruct(codec.String);
    val.response = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  ContentDecryptionModule_UpdateSession_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ContentDecryptionModule_UpdateSession_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.session_id);
    encoder.encodeArrayPointer(codec.Uint8, val.response);
  };
  function ContentDecryptionModule_UpdateSession_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ContentDecryptionModule_UpdateSession_ResponseParams.prototype.initDefaults_ = function() {
    this.result = null;
  };
  ContentDecryptionModule_UpdateSession_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ContentDecryptionModule_UpdateSession_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ContentDecryptionModule_UpdateSession_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ContentDecryptionModule_UpdateSession_ResponseParams.result
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, CdmPromiseResult, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ContentDecryptionModule_UpdateSession_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  ContentDecryptionModule_UpdateSession_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ContentDecryptionModule_UpdateSession_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStructPointer(CdmPromiseResult);
    return val;
  };

  ContentDecryptionModule_UpdateSession_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ContentDecryptionModule_UpdateSession_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(CdmPromiseResult, val.result);
  };
  function ContentDecryptionModule_CloseSession_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ContentDecryptionModule_CloseSession_Params.prototype.initDefaults_ = function() {
    this.session_id = null;
  };
  ContentDecryptionModule_CloseSession_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ContentDecryptionModule_CloseSession_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ContentDecryptionModule_CloseSession_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ContentDecryptionModule_CloseSession_Params.session_id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ContentDecryptionModule_CloseSession_Params.encodedSize = codec.kStructHeaderSize + 8;

  ContentDecryptionModule_CloseSession_Params.decode = function(decoder) {
    var packed;
    var val = new ContentDecryptionModule_CloseSession_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.session_id = decoder.decodeStruct(codec.String);
    return val;
  };

  ContentDecryptionModule_CloseSession_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ContentDecryptionModule_CloseSession_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.session_id);
  };
  function ContentDecryptionModule_CloseSession_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ContentDecryptionModule_CloseSession_ResponseParams.prototype.initDefaults_ = function() {
    this.result = null;
  };
  ContentDecryptionModule_CloseSession_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ContentDecryptionModule_CloseSession_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ContentDecryptionModule_CloseSession_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ContentDecryptionModule_CloseSession_ResponseParams.result
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, CdmPromiseResult, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ContentDecryptionModule_CloseSession_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  ContentDecryptionModule_CloseSession_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ContentDecryptionModule_CloseSession_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStructPointer(CdmPromiseResult);
    return val;
  };

  ContentDecryptionModule_CloseSession_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ContentDecryptionModule_CloseSession_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(CdmPromiseResult, val.result);
  };
  function ContentDecryptionModule_RemoveSession_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ContentDecryptionModule_RemoveSession_Params.prototype.initDefaults_ = function() {
    this.session_id = null;
  };
  ContentDecryptionModule_RemoveSession_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ContentDecryptionModule_RemoveSession_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ContentDecryptionModule_RemoveSession_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ContentDecryptionModule_RemoveSession_Params.session_id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ContentDecryptionModule_RemoveSession_Params.encodedSize = codec.kStructHeaderSize + 8;

  ContentDecryptionModule_RemoveSession_Params.decode = function(decoder) {
    var packed;
    var val = new ContentDecryptionModule_RemoveSession_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.session_id = decoder.decodeStruct(codec.String);
    return val;
  };

  ContentDecryptionModule_RemoveSession_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ContentDecryptionModule_RemoveSession_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.session_id);
  };
  function ContentDecryptionModule_RemoveSession_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ContentDecryptionModule_RemoveSession_ResponseParams.prototype.initDefaults_ = function() {
    this.result = null;
  };
  ContentDecryptionModule_RemoveSession_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ContentDecryptionModule_RemoveSession_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ContentDecryptionModule_RemoveSession_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ContentDecryptionModule_RemoveSession_ResponseParams.result
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, CdmPromiseResult, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ContentDecryptionModule_RemoveSession_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  ContentDecryptionModule_RemoveSession_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ContentDecryptionModule_RemoveSession_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStructPointer(CdmPromiseResult);
    return val;
  };

  ContentDecryptionModule_RemoveSession_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ContentDecryptionModule_RemoveSession_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(CdmPromiseResult, val.result);
  };
  function ContentDecryptionModuleClient_OnSessionMessage_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ContentDecryptionModuleClient_OnSessionMessage_Params.prototype.initDefaults_ = function() {
    this.session_id = null;
    this.message_type = 0;
    this.message = null;
    this.legacy_destination_url = null;
  };
  ContentDecryptionModuleClient_OnSessionMessage_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ContentDecryptionModuleClient_OnSessionMessage_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ContentDecryptionModuleClient_OnSessionMessage_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ContentDecryptionModuleClient_OnSessionMessage_Params.session_id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate ContentDecryptionModuleClient_OnSessionMessage_Params.message
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ContentDecryptionModuleClient_OnSessionMessage_Params.legacy_destination_url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ContentDecryptionModuleClient_OnSessionMessage_Params.encodedSize = codec.kStructHeaderSize + 32;

  ContentDecryptionModuleClient_OnSessionMessage_Params.decode = function(decoder) {
    var packed;
    var val = new ContentDecryptionModuleClient_OnSessionMessage_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.session_id = decoder.decodeStruct(codec.String);
    val.message_type = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.message = decoder.decodeArrayPointer(codec.Uint8);
    val.legacy_destination_url = decoder.decodeStructPointer(url$.Url);
    return val;
  };

  ContentDecryptionModuleClient_OnSessionMessage_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ContentDecryptionModuleClient_OnSessionMessage_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.session_id);
    encoder.encodeStruct(codec.Int32, val.message_type);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(codec.Uint8, val.message);
    encoder.encodeStructPointer(url$.Url, val.legacy_destination_url);
  };
  function ContentDecryptionModuleClient_OnSessionClosed_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ContentDecryptionModuleClient_OnSessionClosed_Params.prototype.initDefaults_ = function() {
    this.session_id = null;
  };
  ContentDecryptionModuleClient_OnSessionClosed_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ContentDecryptionModuleClient_OnSessionClosed_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ContentDecryptionModuleClient_OnSessionClosed_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ContentDecryptionModuleClient_OnSessionClosed_Params.session_id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ContentDecryptionModuleClient_OnSessionClosed_Params.encodedSize = codec.kStructHeaderSize + 8;

  ContentDecryptionModuleClient_OnSessionClosed_Params.decode = function(decoder) {
    var packed;
    var val = new ContentDecryptionModuleClient_OnSessionClosed_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.session_id = decoder.decodeStruct(codec.String);
    return val;
  };

  ContentDecryptionModuleClient_OnSessionClosed_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ContentDecryptionModuleClient_OnSessionClosed_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.session_id);
  };
  function ContentDecryptionModuleClient_OnLegacySessionError_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ContentDecryptionModuleClient_OnLegacySessionError_Params.prototype.initDefaults_ = function() {
    this.session_id = null;
    this.exception = 0;
    this.system_code = 0;
    this.error_message = null;
  };
  ContentDecryptionModuleClient_OnLegacySessionError_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ContentDecryptionModuleClient_OnLegacySessionError_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ContentDecryptionModuleClient_OnLegacySessionError_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ContentDecryptionModuleClient_OnLegacySessionError_Params.session_id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;



    
    // validate ContentDecryptionModuleClient_OnLegacySessionError_Params.error_message
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ContentDecryptionModuleClient_OnLegacySessionError_Params.encodedSize = codec.kStructHeaderSize + 24;

  ContentDecryptionModuleClient_OnLegacySessionError_Params.decode = function(decoder) {
    var packed;
    var val = new ContentDecryptionModuleClient_OnLegacySessionError_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.session_id = decoder.decodeStruct(codec.String);
    val.exception = decoder.decodeStruct(codec.Int32);
    val.system_code = decoder.decodeStruct(codec.Uint32);
    val.error_message = decoder.decodeStruct(codec.String);
    return val;
  };

  ContentDecryptionModuleClient_OnLegacySessionError_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ContentDecryptionModuleClient_OnLegacySessionError_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.session_id);
    encoder.encodeStruct(codec.Int32, val.exception);
    encoder.encodeStruct(codec.Uint32, val.system_code);
    encoder.encodeStruct(codec.String, val.error_message);
  };
  function ContentDecryptionModuleClient_OnSessionKeysChange_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ContentDecryptionModuleClient_OnSessionKeysChange_Params.prototype.initDefaults_ = function() {
    this.session_id = null;
    this.has_additional_usable_key = false;
    this.key_information = null;
  };
  ContentDecryptionModuleClient_OnSessionKeysChange_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ContentDecryptionModuleClient_OnSessionKeysChange_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ContentDecryptionModuleClient_OnSessionKeysChange_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ContentDecryptionModuleClient_OnSessionKeysChange_Params.session_id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate ContentDecryptionModuleClient_OnSessionKeysChange_Params.key_information
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, new codec.PointerTo(CdmKeyInformation), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ContentDecryptionModuleClient_OnSessionKeysChange_Params.encodedSize = codec.kStructHeaderSize + 24;

  ContentDecryptionModuleClient_OnSessionKeysChange_Params.decode = function(decoder) {
    var packed;
    var val = new ContentDecryptionModuleClient_OnSessionKeysChange_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.session_id = decoder.decodeStruct(codec.String);
    val.has_additional_usable_key = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.key_information = decoder.decodeArrayPointer(new codec.PointerTo(CdmKeyInformation));
    return val;
  };

  ContentDecryptionModuleClient_OnSessionKeysChange_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ContentDecryptionModuleClient_OnSessionKeysChange_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.session_id);
    encoder.encodeStruct(codec.Uint8, val.has_additional_usable_key);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(new codec.PointerTo(CdmKeyInformation), val.key_information);
  };
  function ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params.prototype.initDefaults_ = function() {
    this.session_id = null;
    this.new_expiry_time_sec = 0;
  };
  ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params.session_id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params.encodedSize = codec.kStructHeaderSize + 16;

  ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params.decode = function(decoder) {
    var packed;
    var val = new ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.session_id = decoder.decodeStruct(codec.String);
    val.new_expiry_time_sec = decoder.decodeStruct(codec.Double);
    return val;
  };

  ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.session_id);
    encoder.encodeStruct(codec.Double, val.new_expiry_time_sec);
  };
  var kContentDecryptionModule_SetClient_Name = 0;
  var kContentDecryptionModule_Initialize_Name = 1;
  var kContentDecryptionModule_SetServerCertificate_Name = 2;
  var kContentDecryptionModule_CreateSessionAndGenerateRequest_Name = 3;
  var kContentDecryptionModule_LoadSession_Name = 4;
  var kContentDecryptionModule_UpdateSession_Name = 5;
  var kContentDecryptionModule_CloseSession_Name = 6;
  var kContentDecryptionModule_RemoveSession_Name = 7;

  function ContentDecryptionModuleProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  ContentDecryptionModuleProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  ContentDecryptionModuleProxy.prototype.setClient = function(client) {
    var params = new ContentDecryptionModule_SetClient_Params();
    params.client = core.isHandle(client) ? client : connection.bindImpl(client, ContentDecryptionModuleClient);
    var builder = new codec.MessageBuilder(
        kContentDecryptionModule_SetClient_Name,
        codec.align(ContentDecryptionModule_SetClient_Params.encodedSize));
    builder.encodeStruct(ContentDecryptionModule_SetClient_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ContentDecryptionModuleProxy.prototype.initialize = function(key_system, security_origin, cdm_config) {
    var params = new ContentDecryptionModule_Initialize_Params();
    params.key_system = key_system;
    params.security_origin = security_origin;
    params.cdm_config = cdm_config;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kContentDecryptionModule_Initialize_Name,
          codec.align(ContentDecryptionModule_Initialize_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ContentDecryptionModule_Initialize_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ContentDecryptionModule_Initialize_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ContentDecryptionModuleProxy.prototype.setServerCertificate = function(certificate_data) {
    var params = new ContentDecryptionModule_SetServerCertificate_Params();
    params.certificate_data = certificate_data;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kContentDecryptionModule_SetServerCertificate_Name,
          codec.align(ContentDecryptionModule_SetServerCertificate_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ContentDecryptionModule_SetServerCertificate_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ContentDecryptionModule_SetServerCertificate_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ContentDecryptionModuleProxy.prototype.createSessionAndGenerateRequest = function(session_type, init_data_type, init_data) {
    var params = new ContentDecryptionModule_CreateSessionAndGenerateRequest_Params();
    params.session_type = session_type;
    params.init_data_type = init_data_type;
    params.init_data = init_data;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kContentDecryptionModule_CreateSessionAndGenerateRequest_Name,
          codec.align(ContentDecryptionModule_CreateSessionAndGenerateRequest_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ContentDecryptionModule_CreateSessionAndGenerateRequest_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ContentDecryptionModuleProxy.prototype.loadSession = function(session_type, session_id) {
    var params = new ContentDecryptionModule_LoadSession_Params();
    params.session_type = session_type;
    params.session_id = session_id;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kContentDecryptionModule_LoadSession_Name,
          codec.align(ContentDecryptionModule_LoadSession_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ContentDecryptionModule_LoadSession_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ContentDecryptionModule_LoadSession_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ContentDecryptionModuleProxy.prototype.updateSession = function(session_id, response) {
    var params = new ContentDecryptionModule_UpdateSession_Params();
    params.session_id = session_id;
    params.response = response;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kContentDecryptionModule_UpdateSession_Name,
          codec.align(ContentDecryptionModule_UpdateSession_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ContentDecryptionModule_UpdateSession_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ContentDecryptionModule_UpdateSession_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ContentDecryptionModuleProxy.prototype.closeSession = function(session_id) {
    var params = new ContentDecryptionModule_CloseSession_Params();
    params.session_id = session_id;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kContentDecryptionModule_CloseSession_Name,
          codec.align(ContentDecryptionModule_CloseSession_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ContentDecryptionModule_CloseSession_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ContentDecryptionModule_CloseSession_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ContentDecryptionModuleProxy.prototype.removeSession = function(session_id) {
    var params = new ContentDecryptionModule_RemoveSession_Params();
    params.session_id = session_id;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kContentDecryptionModule_RemoveSession_Name,
          codec.align(ContentDecryptionModule_RemoveSession_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ContentDecryptionModule_RemoveSession_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ContentDecryptionModule_RemoveSession_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function ContentDecryptionModuleStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  ContentDecryptionModuleStub.prototype = Object.create(bindings.StubBase.prototype);
  ContentDecryptionModuleStub.prototype.setClient = function(client) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.setClient && bindings.StubBindings(this).delegate.setClient(connection.bindHandleToProxy(client, ContentDecryptionModuleClient));
  }
  ContentDecryptionModuleStub.prototype.initialize = function(key_system, security_origin, cdm_config) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.initialize && bindings.StubBindings(this).delegate.initialize(key_system, security_origin, cdm_config);
  }
  ContentDecryptionModuleStub.prototype.setServerCertificate = function(certificate_data) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.setServerCertificate && bindings.StubBindings(this).delegate.setServerCertificate(certificate_data);
  }
  ContentDecryptionModuleStub.prototype.createSessionAndGenerateRequest = function(session_type, init_data_type, init_data) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.createSessionAndGenerateRequest && bindings.StubBindings(this).delegate.createSessionAndGenerateRequest(session_type, init_data_type, init_data);
  }
  ContentDecryptionModuleStub.prototype.loadSession = function(session_type, session_id) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.loadSession && bindings.StubBindings(this).delegate.loadSession(session_type, session_id);
  }
  ContentDecryptionModuleStub.prototype.updateSession = function(session_id, response) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.updateSession && bindings.StubBindings(this).delegate.updateSession(session_id, response);
  }
  ContentDecryptionModuleStub.prototype.closeSession = function(session_id) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.closeSession && bindings.StubBindings(this).delegate.closeSession(session_id);
  }
  ContentDecryptionModuleStub.prototype.removeSession = function(session_id) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.removeSession && bindings.StubBindings(this).delegate.removeSession(session_id);
  }

  ContentDecryptionModuleStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kContentDecryptionModule_SetClient_Name:
      var params = reader.decodeStruct(ContentDecryptionModule_SetClient_Params);
      this.setClient(params.client);
      return true;
    default:
      return false;
    }
  };

  ContentDecryptionModuleStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kContentDecryptionModule_Initialize_Name:
      var params = reader.decodeStruct(ContentDecryptionModule_Initialize_Params);
      return this.initialize(params.key_system, params.security_origin, params.cdm_config).then(function(response) {
        var responseParams =
            new ContentDecryptionModule_Initialize_ResponseParams();
        responseParams.result = response.result;
        responseParams.cdm_id = response.cdm_id;
        responseParams.decryptor = response.decryptor;
        var builder = new codec.MessageWithRequestIDBuilder(
            kContentDecryptionModule_Initialize_Name,
            codec.align(ContentDecryptionModule_Initialize_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ContentDecryptionModule_Initialize_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kContentDecryptionModule_SetServerCertificate_Name:
      var params = reader.decodeStruct(ContentDecryptionModule_SetServerCertificate_Params);
      return this.setServerCertificate(params.certificate_data).then(function(response) {
        var responseParams =
            new ContentDecryptionModule_SetServerCertificate_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageWithRequestIDBuilder(
            kContentDecryptionModule_SetServerCertificate_Name,
            codec.align(ContentDecryptionModule_SetServerCertificate_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ContentDecryptionModule_SetServerCertificate_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kContentDecryptionModule_CreateSessionAndGenerateRequest_Name:
      var params = reader.decodeStruct(ContentDecryptionModule_CreateSessionAndGenerateRequest_Params);
      return this.createSessionAndGenerateRequest(params.session_type, params.init_data_type, params.init_data).then(function(response) {
        var responseParams =
            new ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams();
        responseParams.result = response.result;
        responseParams.session_id = response.session_id;
        var builder = new codec.MessageWithRequestIDBuilder(
            kContentDecryptionModule_CreateSessionAndGenerateRequest_Name,
            codec.align(ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kContentDecryptionModule_LoadSession_Name:
      var params = reader.decodeStruct(ContentDecryptionModule_LoadSession_Params);
      return this.loadSession(params.session_type, params.session_id).then(function(response) {
        var responseParams =
            new ContentDecryptionModule_LoadSession_ResponseParams();
        responseParams.result = response.result;
        responseParams.session_id = response.session_id;
        var builder = new codec.MessageWithRequestIDBuilder(
            kContentDecryptionModule_LoadSession_Name,
            codec.align(ContentDecryptionModule_LoadSession_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ContentDecryptionModule_LoadSession_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kContentDecryptionModule_UpdateSession_Name:
      var params = reader.decodeStruct(ContentDecryptionModule_UpdateSession_Params);
      return this.updateSession(params.session_id, params.response).then(function(response) {
        var responseParams =
            new ContentDecryptionModule_UpdateSession_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageWithRequestIDBuilder(
            kContentDecryptionModule_UpdateSession_Name,
            codec.align(ContentDecryptionModule_UpdateSession_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ContentDecryptionModule_UpdateSession_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kContentDecryptionModule_CloseSession_Name:
      var params = reader.decodeStruct(ContentDecryptionModule_CloseSession_Params);
      return this.closeSession(params.session_id).then(function(response) {
        var responseParams =
            new ContentDecryptionModule_CloseSession_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageWithRequestIDBuilder(
            kContentDecryptionModule_CloseSession_Name,
            codec.align(ContentDecryptionModule_CloseSession_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ContentDecryptionModule_CloseSession_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kContentDecryptionModule_RemoveSession_Name:
      var params = reader.decodeStruct(ContentDecryptionModule_RemoveSession_Params);
      return this.removeSession(params.session_id).then(function(response) {
        var responseParams =
            new ContentDecryptionModule_RemoveSession_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageWithRequestIDBuilder(
            kContentDecryptionModule_RemoveSession_Name,
            codec.align(ContentDecryptionModule_RemoveSession_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ContentDecryptionModule_RemoveSession_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateContentDecryptionModuleRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kContentDecryptionModule_SetClient_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ContentDecryptionModule_SetClient_Params;
      break;
      case kContentDecryptionModule_Initialize_Name:
        if (message.expectsResponse())
          paramsClass = ContentDecryptionModule_Initialize_Params;
      break;
      case kContentDecryptionModule_SetServerCertificate_Name:
        if (message.expectsResponse())
          paramsClass = ContentDecryptionModule_SetServerCertificate_Params;
      break;
      case kContentDecryptionModule_CreateSessionAndGenerateRequest_Name:
        if (message.expectsResponse())
          paramsClass = ContentDecryptionModule_CreateSessionAndGenerateRequest_Params;
      break;
      case kContentDecryptionModule_LoadSession_Name:
        if (message.expectsResponse())
          paramsClass = ContentDecryptionModule_LoadSession_Params;
      break;
      case kContentDecryptionModule_UpdateSession_Name:
        if (message.expectsResponse())
          paramsClass = ContentDecryptionModule_UpdateSession_Params;
      break;
      case kContentDecryptionModule_CloseSession_Name:
        if (message.expectsResponse())
          paramsClass = ContentDecryptionModule_CloseSession_Params;
      break;
      case kContentDecryptionModule_RemoveSession_Name:
        if (message.expectsResponse())
          paramsClass = ContentDecryptionModule_RemoveSession_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateContentDecryptionModuleResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kContentDecryptionModule_Initialize_Name:
        if (message.isResponse())
          paramsClass = ContentDecryptionModule_Initialize_ResponseParams;
        break;
      case kContentDecryptionModule_SetServerCertificate_Name:
        if (message.isResponse())
          paramsClass = ContentDecryptionModule_SetServerCertificate_ResponseParams;
        break;
      case kContentDecryptionModule_CreateSessionAndGenerateRequest_Name:
        if (message.isResponse())
          paramsClass = ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams;
        break;
      case kContentDecryptionModule_LoadSession_Name:
        if (message.isResponse())
          paramsClass = ContentDecryptionModule_LoadSession_ResponseParams;
        break;
      case kContentDecryptionModule_UpdateSession_Name:
        if (message.isResponse())
          paramsClass = ContentDecryptionModule_UpdateSession_ResponseParams;
        break;
      case kContentDecryptionModule_CloseSession_Name:
        if (message.isResponse())
          paramsClass = ContentDecryptionModule_CloseSession_ResponseParams;
        break;
      case kContentDecryptionModule_RemoveSession_Name:
        if (message.isResponse())
          paramsClass = ContentDecryptionModule_RemoveSession_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var ContentDecryptionModule = {
    name: 'media::mojom::ContentDecryptionModule',
    proxyClass: ContentDecryptionModuleProxy,
    stubClass: ContentDecryptionModuleStub,
    validateRequest: validateContentDecryptionModuleRequest,
    validateResponse: validateContentDecryptionModuleResponse,
  };
  ContentDecryptionModule.SessionType = {};
  ContentDecryptionModule.SessionType.TEMPORARY_SESSION = 0;
  ContentDecryptionModule.SessionType.PERSISTENT_LICENSE_SESSION = ContentDecryptionModule.SessionType.TEMPORARY_SESSION + 1;
  ContentDecryptionModule.SessionType.PERSISTENT_RELEASE_MESSAGE_SESSION = ContentDecryptionModule.SessionType.PERSISTENT_LICENSE_SESSION + 1;
  ContentDecryptionModule.InitDataType = {};
  ContentDecryptionModule.InitDataType.UNKNOWN = 0;
  ContentDecryptionModule.InitDataType.WEBM = ContentDecryptionModule.InitDataType.UNKNOWN + 1;
  ContentDecryptionModule.InitDataType.CENC = ContentDecryptionModule.InitDataType.WEBM + 1;
  ContentDecryptionModule.InitDataType.KEYIDS = ContentDecryptionModule.InitDataType.CENC + 1;
  ContentDecryptionModuleStub.prototype.validator = validateContentDecryptionModuleRequest;
  ContentDecryptionModuleProxy.prototype.validator = validateContentDecryptionModuleResponse;
  var kContentDecryptionModuleClient_OnSessionMessage_Name = 0;
  var kContentDecryptionModuleClient_OnSessionClosed_Name = 1;
  var kContentDecryptionModuleClient_OnLegacySessionError_Name = 2;
  var kContentDecryptionModuleClient_OnSessionKeysChange_Name = 3;
  var kContentDecryptionModuleClient_OnSessionExpirationUpdate_Name = 4;

  function ContentDecryptionModuleClientProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  ContentDecryptionModuleClientProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  ContentDecryptionModuleClientProxy.prototype.onSessionMessage = function(session_id, message_type, message, legacy_destination_url) {
    var params = new ContentDecryptionModuleClient_OnSessionMessage_Params();
    params.session_id = session_id;
    params.message_type = message_type;
    params.message = message;
    params.legacy_destination_url = legacy_destination_url;
    var builder = new codec.MessageBuilder(
        kContentDecryptionModuleClient_OnSessionMessage_Name,
        codec.align(ContentDecryptionModuleClient_OnSessionMessage_Params.encodedSize));
    builder.encodeStruct(ContentDecryptionModuleClient_OnSessionMessage_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ContentDecryptionModuleClientProxy.prototype.onSessionClosed = function(session_id) {
    var params = new ContentDecryptionModuleClient_OnSessionClosed_Params();
    params.session_id = session_id;
    var builder = new codec.MessageBuilder(
        kContentDecryptionModuleClient_OnSessionClosed_Name,
        codec.align(ContentDecryptionModuleClient_OnSessionClosed_Params.encodedSize));
    builder.encodeStruct(ContentDecryptionModuleClient_OnSessionClosed_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ContentDecryptionModuleClientProxy.prototype.onLegacySessionError = function(session_id, exception, system_code, error_message) {
    var params = new ContentDecryptionModuleClient_OnLegacySessionError_Params();
    params.session_id = session_id;
    params.exception = exception;
    params.system_code = system_code;
    params.error_message = error_message;
    var builder = new codec.MessageBuilder(
        kContentDecryptionModuleClient_OnLegacySessionError_Name,
        codec.align(ContentDecryptionModuleClient_OnLegacySessionError_Params.encodedSize));
    builder.encodeStruct(ContentDecryptionModuleClient_OnLegacySessionError_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ContentDecryptionModuleClientProxy.prototype.onSessionKeysChange = function(session_id, has_additional_usable_key, key_information) {
    var params = new ContentDecryptionModuleClient_OnSessionKeysChange_Params();
    params.session_id = session_id;
    params.has_additional_usable_key = has_additional_usable_key;
    params.key_information = key_information;
    var builder = new codec.MessageBuilder(
        kContentDecryptionModuleClient_OnSessionKeysChange_Name,
        codec.align(ContentDecryptionModuleClient_OnSessionKeysChange_Params.encodedSize));
    builder.encodeStruct(ContentDecryptionModuleClient_OnSessionKeysChange_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ContentDecryptionModuleClientProxy.prototype.onSessionExpirationUpdate = function(session_id, new_expiry_time_sec) {
    var params = new ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params();
    params.session_id = session_id;
    params.new_expiry_time_sec = new_expiry_time_sec;
    var builder = new codec.MessageBuilder(
        kContentDecryptionModuleClient_OnSessionExpirationUpdate_Name,
        codec.align(ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params.encodedSize));
    builder.encodeStruct(ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ContentDecryptionModuleClientStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  ContentDecryptionModuleClientStub.prototype = Object.create(bindings.StubBase.prototype);
  ContentDecryptionModuleClientStub.prototype.onSessionMessage = function(session_id, message_type, message, legacy_destination_url) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onSessionMessage && bindings.StubBindings(this).delegate.onSessionMessage(session_id, message_type, message, legacy_destination_url);
  }
  ContentDecryptionModuleClientStub.prototype.onSessionClosed = function(session_id) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onSessionClosed && bindings.StubBindings(this).delegate.onSessionClosed(session_id);
  }
  ContentDecryptionModuleClientStub.prototype.onLegacySessionError = function(session_id, exception, system_code, error_message) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onLegacySessionError && bindings.StubBindings(this).delegate.onLegacySessionError(session_id, exception, system_code, error_message);
  }
  ContentDecryptionModuleClientStub.prototype.onSessionKeysChange = function(session_id, has_additional_usable_key, key_information) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onSessionKeysChange && bindings.StubBindings(this).delegate.onSessionKeysChange(session_id, has_additional_usable_key, key_information);
  }
  ContentDecryptionModuleClientStub.prototype.onSessionExpirationUpdate = function(session_id, new_expiry_time_sec) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onSessionExpirationUpdate && bindings.StubBindings(this).delegate.onSessionExpirationUpdate(session_id, new_expiry_time_sec);
  }

  ContentDecryptionModuleClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kContentDecryptionModuleClient_OnSessionMessage_Name:
      var params = reader.decodeStruct(ContentDecryptionModuleClient_OnSessionMessage_Params);
      this.onSessionMessage(params.session_id, params.message_type, params.message, params.legacy_destination_url);
      return true;
    case kContentDecryptionModuleClient_OnSessionClosed_Name:
      var params = reader.decodeStruct(ContentDecryptionModuleClient_OnSessionClosed_Params);
      this.onSessionClosed(params.session_id);
      return true;
    case kContentDecryptionModuleClient_OnLegacySessionError_Name:
      var params = reader.decodeStruct(ContentDecryptionModuleClient_OnLegacySessionError_Params);
      this.onLegacySessionError(params.session_id, params.exception, params.system_code, params.error_message);
      return true;
    case kContentDecryptionModuleClient_OnSessionKeysChange_Name:
      var params = reader.decodeStruct(ContentDecryptionModuleClient_OnSessionKeysChange_Params);
      this.onSessionKeysChange(params.session_id, params.has_additional_usable_key, params.key_information);
      return true;
    case kContentDecryptionModuleClient_OnSessionExpirationUpdate_Name:
      var params = reader.decodeStruct(ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params);
      this.onSessionExpirationUpdate(params.session_id, params.new_expiry_time_sec);
      return true;
    default:
      return false;
    }
  };

  ContentDecryptionModuleClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateContentDecryptionModuleClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kContentDecryptionModuleClient_OnSessionMessage_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ContentDecryptionModuleClient_OnSessionMessage_Params;
      break;
      case kContentDecryptionModuleClient_OnSessionClosed_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ContentDecryptionModuleClient_OnSessionClosed_Params;
      break;
      case kContentDecryptionModuleClient_OnLegacySessionError_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ContentDecryptionModuleClient_OnLegacySessionError_Params;
      break;
      case kContentDecryptionModuleClient_OnSessionKeysChange_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ContentDecryptionModuleClient_OnSessionKeysChange_Params;
      break;
      case kContentDecryptionModuleClient_OnSessionExpirationUpdate_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateContentDecryptionModuleClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ContentDecryptionModuleClient = {
    name: 'media::mojom::ContentDecryptionModuleClient',
    proxyClass: ContentDecryptionModuleClientProxy,
    stubClass: ContentDecryptionModuleClientStub,
    validateRequest: validateContentDecryptionModuleClientRequest,
    validateResponse: null,
  };
  ContentDecryptionModuleClientStub.prototype.validator = validateContentDecryptionModuleClientRequest;
  ContentDecryptionModuleClientProxy.prototype.validator = null;

  var exports = {};
  exports.CdmException = CdmException;
  exports.CdmKeyStatus = CdmKeyStatus;
  exports.CdmMessageType = CdmMessageType;
  exports.CdmConfig = CdmConfig;
  exports.CdmPromiseResult = CdmPromiseResult;
  exports.CdmKeyInformation = CdmKeyInformation;
  exports.ContentDecryptionModule = ContentDecryptionModule;
  exports.ContentDecryptionModuleClient = ContentDecryptionModuleClient;

  return exports;
});
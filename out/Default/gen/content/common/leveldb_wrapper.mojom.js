// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("content/common/leveldb_wrapper.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "components/leveldb/public/interfaces/leveldb.mojom",
], function(bindings, codec, connection, core, validator, leveldb$) {

  function KeyValue(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  KeyValue.prototype.initDefaults_ = function() {
    this.key = null;
    this.value = null;
  };
  KeyValue.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  KeyValue.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, KeyValue.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate KeyValue.key
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate KeyValue.value
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  KeyValue.encodedSize = codec.kStructHeaderSize + 16;

  KeyValue.decode = function(decoder) {
    var packed;
    var val = new KeyValue();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.key = decoder.decodeArrayPointer(codec.Uint8);
    val.value = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  KeyValue.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(KeyValue.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Uint8, val.key);
    encoder.encodeArrayPointer(codec.Uint8, val.value);
  };
  function LevelDBObserver_KeyAdded_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBObserver_KeyAdded_Params.prototype.initDefaults_ = function() {
    this.key = null;
    this.value = null;
    this.source = null;
  };
  LevelDBObserver_KeyAdded_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  LevelDBObserver_KeyAdded_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, LevelDBObserver_KeyAdded_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate LevelDBObserver_KeyAdded_Params.key
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate LevelDBObserver_KeyAdded_Params.value
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate LevelDBObserver_KeyAdded_Params.source
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBObserver_KeyAdded_Params.encodedSize = codec.kStructHeaderSize + 24;

  LevelDBObserver_KeyAdded_Params.decode = function(decoder) {
    var packed;
    var val = new LevelDBObserver_KeyAdded_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.key = decoder.decodeArrayPointer(codec.Uint8);
    val.value = decoder.decodeArrayPointer(codec.Uint8);
    val.source = decoder.decodeStruct(codec.String);
    return val;
  };

  LevelDBObserver_KeyAdded_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBObserver_KeyAdded_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Uint8, val.key);
    encoder.encodeArrayPointer(codec.Uint8, val.value);
    encoder.encodeStruct(codec.String, val.source);
  };
  function LevelDBObserver_KeyChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBObserver_KeyChanged_Params.prototype.initDefaults_ = function() {
    this.key = null;
    this.new_value = null;
    this.old_value = null;
    this.source = null;
  };
  LevelDBObserver_KeyChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  LevelDBObserver_KeyChanged_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, LevelDBObserver_KeyChanged_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate LevelDBObserver_KeyChanged_Params.key
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate LevelDBObserver_KeyChanged_Params.new_value
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate LevelDBObserver_KeyChanged_Params.old_value
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate LevelDBObserver_KeyChanged_Params.source
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 24, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBObserver_KeyChanged_Params.encodedSize = codec.kStructHeaderSize + 32;

  LevelDBObserver_KeyChanged_Params.decode = function(decoder) {
    var packed;
    var val = new LevelDBObserver_KeyChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.key = decoder.decodeArrayPointer(codec.Uint8);
    val.new_value = decoder.decodeArrayPointer(codec.Uint8);
    val.old_value = decoder.decodeArrayPointer(codec.Uint8);
    val.source = decoder.decodeStruct(codec.String);
    return val;
  };

  LevelDBObserver_KeyChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBObserver_KeyChanged_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Uint8, val.key);
    encoder.encodeArrayPointer(codec.Uint8, val.new_value);
    encoder.encodeArrayPointer(codec.Uint8, val.old_value);
    encoder.encodeStruct(codec.String, val.source);
  };
  function LevelDBObserver_KeyDeleted_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBObserver_KeyDeleted_Params.prototype.initDefaults_ = function() {
    this.key = null;
    this.old_value = null;
    this.source = null;
  };
  LevelDBObserver_KeyDeleted_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  LevelDBObserver_KeyDeleted_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, LevelDBObserver_KeyDeleted_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate LevelDBObserver_KeyDeleted_Params.key
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate LevelDBObserver_KeyDeleted_Params.old_value
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate LevelDBObserver_KeyDeleted_Params.source
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBObserver_KeyDeleted_Params.encodedSize = codec.kStructHeaderSize + 24;

  LevelDBObserver_KeyDeleted_Params.decode = function(decoder) {
    var packed;
    var val = new LevelDBObserver_KeyDeleted_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.key = decoder.decodeArrayPointer(codec.Uint8);
    val.old_value = decoder.decodeArrayPointer(codec.Uint8);
    val.source = decoder.decodeStruct(codec.String);
    return val;
  };

  LevelDBObserver_KeyDeleted_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBObserver_KeyDeleted_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Uint8, val.key);
    encoder.encodeArrayPointer(codec.Uint8, val.old_value);
    encoder.encodeStruct(codec.String, val.source);
  };
  function LevelDBObserver_AllDeleted_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBObserver_AllDeleted_Params.prototype.initDefaults_ = function() {
    this.source = null;
  };
  LevelDBObserver_AllDeleted_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  LevelDBObserver_AllDeleted_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, LevelDBObserver_AllDeleted_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate LevelDBObserver_AllDeleted_Params.source
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBObserver_AllDeleted_Params.encodedSize = codec.kStructHeaderSize + 8;

  LevelDBObserver_AllDeleted_Params.decode = function(decoder) {
    var packed;
    var val = new LevelDBObserver_AllDeleted_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.source = decoder.decodeStruct(codec.String);
    return val;
  };

  LevelDBObserver_AllDeleted_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBObserver_AllDeleted_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.source);
  };
  function LevelDBObserver_GetAllComplete_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBObserver_GetAllComplete_Params.prototype.initDefaults_ = function() {
    this.source = null;
  };
  LevelDBObserver_GetAllComplete_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  LevelDBObserver_GetAllComplete_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, LevelDBObserver_GetAllComplete_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate LevelDBObserver_GetAllComplete_Params.source
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBObserver_GetAllComplete_Params.encodedSize = codec.kStructHeaderSize + 8;

  LevelDBObserver_GetAllComplete_Params.decode = function(decoder) {
    var packed;
    var val = new LevelDBObserver_GetAllComplete_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.source = decoder.decodeStruct(codec.String);
    return val;
  };

  LevelDBObserver_GetAllComplete_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBObserver_GetAllComplete_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.source);
  };
  function LevelDBWrapper_Put_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBWrapper_Put_Params.prototype.initDefaults_ = function() {
    this.key = null;
    this.value = null;
    this.source = null;
  };
  LevelDBWrapper_Put_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  LevelDBWrapper_Put_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, LevelDBWrapper_Put_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate LevelDBWrapper_Put_Params.key
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate LevelDBWrapper_Put_Params.value
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate LevelDBWrapper_Put_Params.source
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBWrapper_Put_Params.encodedSize = codec.kStructHeaderSize + 24;

  LevelDBWrapper_Put_Params.decode = function(decoder) {
    var packed;
    var val = new LevelDBWrapper_Put_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.key = decoder.decodeArrayPointer(codec.Uint8);
    val.value = decoder.decodeArrayPointer(codec.Uint8);
    val.source = decoder.decodeStruct(codec.String);
    return val;
  };

  LevelDBWrapper_Put_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBWrapper_Put_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Uint8, val.key);
    encoder.encodeArrayPointer(codec.Uint8, val.value);
    encoder.encodeStruct(codec.String, val.source);
  };
  function LevelDBWrapper_Put_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBWrapper_Put_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  LevelDBWrapper_Put_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  LevelDBWrapper_Put_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, LevelDBWrapper_Put_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  LevelDBWrapper_Put_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  LevelDBWrapper_Put_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new LevelDBWrapper_Put_ResponseParams();
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

  LevelDBWrapper_Put_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBWrapper_Put_ResponseParams.encodedSize);
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
  function LevelDBWrapper_Delete_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBWrapper_Delete_Params.prototype.initDefaults_ = function() {
    this.key = null;
    this.source = null;
  };
  LevelDBWrapper_Delete_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  LevelDBWrapper_Delete_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, LevelDBWrapper_Delete_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate LevelDBWrapper_Delete_Params.key
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate LevelDBWrapper_Delete_Params.source
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBWrapper_Delete_Params.encodedSize = codec.kStructHeaderSize + 16;

  LevelDBWrapper_Delete_Params.decode = function(decoder) {
    var packed;
    var val = new LevelDBWrapper_Delete_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.key = decoder.decodeArrayPointer(codec.Uint8);
    val.source = decoder.decodeStruct(codec.String);
    return val;
  };

  LevelDBWrapper_Delete_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBWrapper_Delete_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Uint8, val.key);
    encoder.encodeStruct(codec.String, val.source);
  };
  function LevelDBWrapper_Delete_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBWrapper_Delete_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  LevelDBWrapper_Delete_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  LevelDBWrapper_Delete_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, LevelDBWrapper_Delete_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  LevelDBWrapper_Delete_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  LevelDBWrapper_Delete_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new LevelDBWrapper_Delete_ResponseParams();
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

  LevelDBWrapper_Delete_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBWrapper_Delete_ResponseParams.encodedSize);
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
  function LevelDBWrapper_DeleteAll_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBWrapper_DeleteAll_Params.prototype.initDefaults_ = function() {
    this.source = null;
  };
  LevelDBWrapper_DeleteAll_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  LevelDBWrapper_DeleteAll_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, LevelDBWrapper_DeleteAll_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate LevelDBWrapper_DeleteAll_Params.source
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBWrapper_DeleteAll_Params.encodedSize = codec.kStructHeaderSize + 8;

  LevelDBWrapper_DeleteAll_Params.decode = function(decoder) {
    var packed;
    var val = new LevelDBWrapper_DeleteAll_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.source = decoder.decodeStruct(codec.String);
    return val;
  };

  LevelDBWrapper_DeleteAll_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBWrapper_DeleteAll_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.source);
  };
  function LevelDBWrapper_DeleteAll_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBWrapper_DeleteAll_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  LevelDBWrapper_DeleteAll_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  LevelDBWrapper_DeleteAll_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, LevelDBWrapper_DeleteAll_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  LevelDBWrapper_DeleteAll_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  LevelDBWrapper_DeleteAll_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new LevelDBWrapper_DeleteAll_ResponseParams();
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

  LevelDBWrapper_DeleteAll_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBWrapper_DeleteAll_ResponseParams.encodedSize);
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
  function LevelDBWrapper_Get_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBWrapper_Get_Params.prototype.initDefaults_ = function() {
    this.key = null;
  };
  LevelDBWrapper_Get_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  LevelDBWrapper_Get_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, LevelDBWrapper_Get_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate LevelDBWrapper_Get_Params.key
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBWrapper_Get_Params.encodedSize = codec.kStructHeaderSize + 8;

  LevelDBWrapper_Get_Params.decode = function(decoder) {
    var packed;
    var val = new LevelDBWrapper_Get_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.key = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  LevelDBWrapper_Get_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBWrapper_Get_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Uint8, val.key);
  };
  function LevelDBWrapper_Get_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBWrapper_Get_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
    this.value = null;
  };
  LevelDBWrapper_Get_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  LevelDBWrapper_Get_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, LevelDBWrapper_Get_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate LevelDBWrapper_Get_ResponseParams.value
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBWrapper_Get_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  LevelDBWrapper_Get_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new LevelDBWrapper_Get_ResponseParams();
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
    val.value = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  LevelDBWrapper_Get_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBWrapper_Get_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint8, val.success);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(codec.Uint8, val.value);
  };
  function LevelDBWrapper_GetAll_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBWrapper_GetAll_Params.prototype.initDefaults_ = function() {
    this.source = null;
  };
  LevelDBWrapper_GetAll_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  LevelDBWrapper_GetAll_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, LevelDBWrapper_GetAll_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate LevelDBWrapper_GetAll_Params.source
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBWrapper_GetAll_Params.encodedSize = codec.kStructHeaderSize + 8;

  LevelDBWrapper_GetAll_Params.decode = function(decoder) {
    var packed;
    var val = new LevelDBWrapper_GetAll_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.source = decoder.decodeStruct(codec.String);
    return val;
  };

  LevelDBWrapper_GetAll_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBWrapper_GetAll_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.source);
  };
  function LevelDBWrapper_GetAll_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LevelDBWrapper_GetAll_ResponseParams.prototype.initDefaults_ = function() {
    this.status = 0;
    this.data = null;
  };
  LevelDBWrapper_GetAll_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  LevelDBWrapper_GetAll_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, LevelDBWrapper_GetAll_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate LevelDBWrapper_GetAll_ResponseParams.data
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(KeyValue), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LevelDBWrapper_GetAll_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  LevelDBWrapper_GetAll_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new LevelDBWrapper_GetAll_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.data = decoder.decodeArrayPointer(new codec.PointerTo(KeyValue));
    return val;
  };

  LevelDBWrapper_GetAll_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LevelDBWrapper_GetAll_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(new codec.PointerTo(KeyValue), val.data);
  };
  var kLevelDBObserver_KeyAdded_Name = 0;
  var kLevelDBObserver_KeyChanged_Name = 1;
  var kLevelDBObserver_KeyDeleted_Name = 2;
  var kLevelDBObserver_AllDeleted_Name = 3;
  var kLevelDBObserver_GetAllComplete_Name = 4;

  function LevelDBObserverProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  LevelDBObserverProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  LevelDBObserverProxy.prototype.keyAdded = function(key, value, source) {
    var params = new LevelDBObserver_KeyAdded_Params();
    params.key = key;
    params.value = value;
    params.source = source;
    var builder = new codec.MessageBuilder(
        kLevelDBObserver_KeyAdded_Name,
        codec.align(LevelDBObserver_KeyAdded_Params.encodedSize));
    builder.encodeStruct(LevelDBObserver_KeyAdded_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  LevelDBObserverProxy.prototype.keyChanged = function(key, new_value, old_value, source) {
    var params = new LevelDBObserver_KeyChanged_Params();
    params.key = key;
    params.new_value = new_value;
    params.old_value = old_value;
    params.source = source;
    var builder = new codec.MessageBuilder(
        kLevelDBObserver_KeyChanged_Name,
        codec.align(LevelDBObserver_KeyChanged_Params.encodedSize));
    builder.encodeStruct(LevelDBObserver_KeyChanged_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  LevelDBObserverProxy.prototype.keyDeleted = function(key, old_value, source) {
    var params = new LevelDBObserver_KeyDeleted_Params();
    params.key = key;
    params.old_value = old_value;
    params.source = source;
    var builder = new codec.MessageBuilder(
        kLevelDBObserver_KeyDeleted_Name,
        codec.align(LevelDBObserver_KeyDeleted_Params.encodedSize));
    builder.encodeStruct(LevelDBObserver_KeyDeleted_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  LevelDBObserverProxy.prototype.allDeleted = function(source) {
    var params = new LevelDBObserver_AllDeleted_Params();
    params.source = source;
    var builder = new codec.MessageBuilder(
        kLevelDBObserver_AllDeleted_Name,
        codec.align(LevelDBObserver_AllDeleted_Params.encodedSize));
    builder.encodeStruct(LevelDBObserver_AllDeleted_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  LevelDBObserverProxy.prototype.getAllComplete = function(source) {
    var params = new LevelDBObserver_GetAllComplete_Params();
    params.source = source;
    var builder = new codec.MessageBuilder(
        kLevelDBObserver_GetAllComplete_Name,
        codec.align(LevelDBObserver_GetAllComplete_Params.encodedSize));
    builder.encodeStruct(LevelDBObserver_GetAllComplete_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function LevelDBObserverStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  LevelDBObserverStub.prototype = Object.create(bindings.StubBase.prototype);
  LevelDBObserverStub.prototype.keyAdded = function(key, value, source) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.keyAdded && bindings.StubBindings(this).delegate.keyAdded(key, value, source);
  }
  LevelDBObserverStub.prototype.keyChanged = function(key, new_value, old_value, source) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.keyChanged && bindings.StubBindings(this).delegate.keyChanged(key, new_value, old_value, source);
  }
  LevelDBObserverStub.prototype.keyDeleted = function(key, old_value, source) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.keyDeleted && bindings.StubBindings(this).delegate.keyDeleted(key, old_value, source);
  }
  LevelDBObserverStub.prototype.allDeleted = function(source) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.allDeleted && bindings.StubBindings(this).delegate.allDeleted(source);
  }
  LevelDBObserverStub.prototype.getAllComplete = function(source) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.getAllComplete && bindings.StubBindings(this).delegate.getAllComplete(source);
  }

  LevelDBObserverStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kLevelDBObserver_KeyAdded_Name:
      var params = reader.decodeStruct(LevelDBObserver_KeyAdded_Params);
      this.keyAdded(params.key, params.value, params.source);
      return true;
    case kLevelDBObserver_KeyChanged_Name:
      var params = reader.decodeStruct(LevelDBObserver_KeyChanged_Params);
      this.keyChanged(params.key, params.new_value, params.old_value, params.source);
      return true;
    case kLevelDBObserver_KeyDeleted_Name:
      var params = reader.decodeStruct(LevelDBObserver_KeyDeleted_Params);
      this.keyDeleted(params.key, params.old_value, params.source);
      return true;
    case kLevelDBObserver_AllDeleted_Name:
      var params = reader.decodeStruct(LevelDBObserver_AllDeleted_Params);
      this.allDeleted(params.source);
      return true;
    case kLevelDBObserver_GetAllComplete_Name:
      var params = reader.decodeStruct(LevelDBObserver_GetAllComplete_Params);
      this.getAllComplete(params.source);
      return true;
    default:
      return false;
    }
  };

  LevelDBObserverStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateLevelDBObserverRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kLevelDBObserver_KeyAdded_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = LevelDBObserver_KeyAdded_Params;
      break;
      case kLevelDBObserver_KeyChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = LevelDBObserver_KeyChanged_Params;
      break;
      case kLevelDBObserver_KeyDeleted_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = LevelDBObserver_KeyDeleted_Params;
      break;
      case kLevelDBObserver_AllDeleted_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = LevelDBObserver_AllDeleted_Params;
      break;
      case kLevelDBObserver_GetAllComplete_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = LevelDBObserver_GetAllComplete_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateLevelDBObserverResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var LevelDBObserver = {
    name: 'content::mojom::LevelDBObserver',
    proxyClass: LevelDBObserverProxy,
    stubClass: LevelDBObserverStub,
    validateRequest: validateLevelDBObserverRequest,
    validateResponse: null,
  };
  LevelDBObserverStub.prototype.validator = validateLevelDBObserverRequest;
  LevelDBObserverProxy.prototype.validator = null;
  var kLevelDBWrapper_Put_Name = 0;
  var kLevelDBWrapper_Delete_Name = 1;
  var kLevelDBWrapper_DeleteAll_Name = 2;
  var kLevelDBWrapper_Get_Name = 3;
  var kLevelDBWrapper_GetAll_Name = 4;

  function LevelDBWrapperProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  LevelDBWrapperProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  LevelDBWrapperProxy.prototype.put = function(key, value, source) {
    var params = new LevelDBWrapper_Put_Params();
    params.key = key;
    params.value = value;
    params.source = source;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kLevelDBWrapper_Put_Name,
          codec.align(LevelDBWrapper_Put_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(LevelDBWrapper_Put_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(LevelDBWrapper_Put_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  LevelDBWrapperProxy.prototype.delete = function(key, source) {
    var params = new LevelDBWrapper_Delete_Params();
    params.key = key;
    params.source = source;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kLevelDBWrapper_Delete_Name,
          codec.align(LevelDBWrapper_Delete_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(LevelDBWrapper_Delete_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(LevelDBWrapper_Delete_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  LevelDBWrapperProxy.prototype.deleteAll = function(source) {
    var params = new LevelDBWrapper_DeleteAll_Params();
    params.source = source;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kLevelDBWrapper_DeleteAll_Name,
          codec.align(LevelDBWrapper_DeleteAll_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(LevelDBWrapper_DeleteAll_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(LevelDBWrapper_DeleteAll_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  LevelDBWrapperProxy.prototype.get = function(key) {
    var params = new LevelDBWrapper_Get_Params();
    params.key = key;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kLevelDBWrapper_Get_Name,
          codec.align(LevelDBWrapper_Get_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(LevelDBWrapper_Get_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(LevelDBWrapper_Get_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  LevelDBWrapperProxy.prototype.getAll = function(source) {
    var params = new LevelDBWrapper_GetAll_Params();
    params.source = source;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kLevelDBWrapper_GetAll_Name,
          codec.align(LevelDBWrapper_GetAll_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(LevelDBWrapper_GetAll_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(LevelDBWrapper_GetAll_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function LevelDBWrapperStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  LevelDBWrapperStub.prototype = Object.create(bindings.StubBase.prototype);
  LevelDBWrapperStub.prototype.put = function(key, value, source) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.put && bindings.StubBindings(this).delegate.put(key, value, source);
  }
  LevelDBWrapperStub.prototype.delete = function(key, source) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.delete && bindings.StubBindings(this).delegate.delete(key, source);
  }
  LevelDBWrapperStub.prototype.deleteAll = function(source) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.deleteAll && bindings.StubBindings(this).delegate.deleteAll(source);
  }
  LevelDBWrapperStub.prototype.get = function(key) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.get && bindings.StubBindings(this).delegate.get(key);
  }
  LevelDBWrapperStub.prototype.getAll = function(source) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.getAll && bindings.StubBindings(this).delegate.getAll(source);
  }

  LevelDBWrapperStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  LevelDBWrapperStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kLevelDBWrapper_Put_Name:
      var params = reader.decodeStruct(LevelDBWrapper_Put_Params);
      return this.put(params.key, params.value, params.source).then(function(response) {
        var responseParams =
            new LevelDBWrapper_Put_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageWithRequestIDBuilder(
            kLevelDBWrapper_Put_Name,
            codec.align(LevelDBWrapper_Put_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(LevelDBWrapper_Put_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kLevelDBWrapper_Delete_Name:
      var params = reader.decodeStruct(LevelDBWrapper_Delete_Params);
      return this.delete(params.key, params.source).then(function(response) {
        var responseParams =
            new LevelDBWrapper_Delete_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageWithRequestIDBuilder(
            kLevelDBWrapper_Delete_Name,
            codec.align(LevelDBWrapper_Delete_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(LevelDBWrapper_Delete_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kLevelDBWrapper_DeleteAll_Name:
      var params = reader.decodeStruct(LevelDBWrapper_DeleteAll_Params);
      return this.deleteAll(params.source).then(function(response) {
        var responseParams =
            new LevelDBWrapper_DeleteAll_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageWithRequestIDBuilder(
            kLevelDBWrapper_DeleteAll_Name,
            codec.align(LevelDBWrapper_DeleteAll_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(LevelDBWrapper_DeleteAll_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kLevelDBWrapper_Get_Name:
      var params = reader.decodeStruct(LevelDBWrapper_Get_Params);
      return this.get(params.key).then(function(response) {
        var responseParams =
            new LevelDBWrapper_Get_ResponseParams();
        responseParams.success = response.success;
        responseParams.value = response.value;
        var builder = new codec.MessageWithRequestIDBuilder(
            kLevelDBWrapper_Get_Name,
            codec.align(LevelDBWrapper_Get_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(LevelDBWrapper_Get_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kLevelDBWrapper_GetAll_Name:
      var params = reader.decodeStruct(LevelDBWrapper_GetAll_Params);
      return this.getAll(params.source).then(function(response) {
        var responseParams =
            new LevelDBWrapper_GetAll_ResponseParams();
        responseParams.status = response.status;
        responseParams.data = response.data;
        var builder = new codec.MessageWithRequestIDBuilder(
            kLevelDBWrapper_GetAll_Name,
            codec.align(LevelDBWrapper_GetAll_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(LevelDBWrapper_GetAll_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateLevelDBWrapperRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kLevelDBWrapper_Put_Name:
        if (message.expectsResponse())
          paramsClass = LevelDBWrapper_Put_Params;
      break;
      case kLevelDBWrapper_Delete_Name:
        if (message.expectsResponse())
          paramsClass = LevelDBWrapper_Delete_Params;
      break;
      case kLevelDBWrapper_DeleteAll_Name:
        if (message.expectsResponse())
          paramsClass = LevelDBWrapper_DeleteAll_Params;
      break;
      case kLevelDBWrapper_Get_Name:
        if (message.expectsResponse())
          paramsClass = LevelDBWrapper_Get_Params;
      break;
      case kLevelDBWrapper_GetAll_Name:
        if (message.expectsResponse())
          paramsClass = LevelDBWrapper_GetAll_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateLevelDBWrapperResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kLevelDBWrapper_Put_Name:
        if (message.isResponse())
          paramsClass = LevelDBWrapper_Put_ResponseParams;
        break;
      case kLevelDBWrapper_Delete_Name:
        if (message.isResponse())
          paramsClass = LevelDBWrapper_Delete_ResponseParams;
        break;
      case kLevelDBWrapper_DeleteAll_Name:
        if (message.isResponse())
          paramsClass = LevelDBWrapper_DeleteAll_ResponseParams;
        break;
      case kLevelDBWrapper_Get_Name:
        if (message.isResponse())
          paramsClass = LevelDBWrapper_Get_ResponseParams;
        break;
      case kLevelDBWrapper_GetAll_Name:
        if (message.isResponse())
          paramsClass = LevelDBWrapper_GetAll_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var LevelDBWrapper = {
    name: 'content::mojom::LevelDBWrapper',
    proxyClass: LevelDBWrapperProxy,
    stubClass: LevelDBWrapperStub,
    validateRequest: validateLevelDBWrapperRequest,
    validateResponse: validateLevelDBWrapperResponse,
  };
  LevelDBWrapperStub.prototype.validator = validateLevelDBWrapperRequest;
  LevelDBWrapperProxy.prototype.validator = validateLevelDBWrapperResponse;

  var exports = {};
  exports.KeyValue = KeyValue;
  exports.LevelDBObserver = LevelDBObserver;
  exports.LevelDBWrapper = LevelDBWrapper;

  return exports;
});
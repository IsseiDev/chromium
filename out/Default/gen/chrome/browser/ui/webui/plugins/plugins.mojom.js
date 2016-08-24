// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("chrome/browser/ui/webui/plugins/plugins.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {

  function MimeType(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MimeType.prototype.initDefaults_ = function() {
    this.description = null;
    this.file_extensions = null;
    this.mime_type = null;
  };
  MimeType.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  MimeType.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, MimeType.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate MimeType.description
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate MimeType.file_extensions
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, codec.String, false, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate MimeType.mime_type
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MimeType.encodedSize = codec.kStructHeaderSize + 24;

  MimeType.decode = function(decoder) {
    var packed;
    var val = new MimeType();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.description = decoder.decodeStruct(codec.String);
    val.file_extensions = decoder.decodeArrayPointer(codec.String);
    val.mime_type = decoder.decodeStruct(codec.String);
    return val;
  };

  MimeType.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MimeType.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.description);
    encoder.encodeArrayPointer(codec.String, val.file_extensions);
    encoder.encodeStruct(codec.String, val.mime_type);
  };
  function PluginFile(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PluginFile.prototype.initDefaults_ = function() {
    this.description = null;
    this.enabled_mode = null;
    this.mime_types = null;
    this.name = null;
    this.path = null;
    this.type = null;
    this.version = null;
  };
  PluginFile.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PluginFile.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PluginFile.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PluginFile.description
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PluginFile.enabled_mode
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PluginFile.mime_types
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, new codec.PointerTo(MimeType), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PluginFile.name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 24, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PluginFile.path
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 32, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PluginFile.type
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 40, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PluginFile.version
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 48, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PluginFile.encodedSize = codec.kStructHeaderSize + 56;

  PluginFile.decode = function(decoder) {
    var packed;
    var val = new PluginFile();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.description = decoder.decodeStruct(codec.String);
    val.enabled_mode = decoder.decodeStruct(codec.String);
    val.mime_types = decoder.decodeArrayPointer(new codec.PointerTo(MimeType));
    val.name = decoder.decodeStruct(codec.String);
    val.path = decoder.decodeStruct(codec.String);
    val.type = decoder.decodeStruct(codec.String);
    val.version = decoder.decodeStruct(codec.String);
    return val;
  };

  PluginFile.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PluginFile.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.description);
    encoder.encodeStruct(codec.String, val.enabled_mode);
    encoder.encodeArrayPointer(new codec.PointerTo(MimeType), val.mime_types);
    encoder.encodeStruct(codec.String, val.name);
    encoder.encodeStruct(codec.String, val.path);
    encoder.encodeStruct(codec.String, val.type);
    encoder.encodeStruct(codec.String, val.version);
  };
  function PluginData(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PluginData.prototype.initDefaults_ = function() {
    this.always_allowed = false;
    this.trusted = false;
    this.policy_click_to_play = false;
    this.critical = false;
    this.description = null;
    this.enabled_mode = null;
    this.id = null;
    this.name = null;
    this.update_url = null;
    this.version = null;
    this.plugin_files = null;
  };
  PluginData.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PluginData.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PluginData.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;





    
    // validate PluginData.description
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PluginData.enabled_mode
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PluginData.id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 24, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PluginData.name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 32, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PluginData.update_url
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 40, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PluginData.version
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 48, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PluginData.plugin_files
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 56, 8, new codec.PointerTo(PluginFile), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PluginData.encodedSize = codec.kStructHeaderSize + 64;

  PluginData.decode = function(decoder) {
    var packed;
    var val = new PluginData();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.always_allowed = (packed >> 0) & 1 ? true : false;
    val.trusted = (packed >> 1) & 1 ? true : false;
    val.policy_click_to_play = (packed >> 2) & 1 ? true : false;
    val.critical = (packed >> 3) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.description = decoder.decodeStruct(codec.String);
    val.enabled_mode = decoder.decodeStruct(codec.String);
    val.id = decoder.decodeStruct(codec.String);
    val.name = decoder.decodeStruct(codec.String);
    val.update_url = decoder.decodeStruct(codec.String);
    val.version = decoder.decodeStruct(codec.String);
    val.plugin_files = decoder.decodeArrayPointer(new codec.PointerTo(PluginFile));
    return val;
  };

  PluginData.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PluginData.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.always_allowed & 1) << 0
    packed |= (val.trusted & 1) << 1
    packed |= (val.policy_click_to_play & 1) << 2
    packed |= (val.critical & 1) << 3
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.description);
    encoder.encodeStruct(codec.String, val.enabled_mode);
    encoder.encodeStruct(codec.String, val.id);
    encoder.encodeStruct(codec.String, val.name);
    encoder.encodeStruct(codec.String, val.update_url);
    encoder.encodeStruct(codec.String, val.version);
    encoder.encodeArrayPointer(new codec.PointerTo(PluginFile), val.plugin_files);
  };
  function PluginsPageHandler_GetPluginsData_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PluginsPageHandler_GetPluginsData_Params.prototype.initDefaults_ = function() {
  };
  PluginsPageHandler_GetPluginsData_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PluginsPageHandler_GetPluginsData_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PluginsPageHandler_GetPluginsData_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PluginsPageHandler_GetPluginsData_Params.encodedSize = codec.kStructHeaderSize + 0;

  PluginsPageHandler_GetPluginsData_Params.decode = function(decoder) {
    var packed;
    var val = new PluginsPageHandler_GetPluginsData_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  PluginsPageHandler_GetPluginsData_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PluginsPageHandler_GetPluginsData_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function PluginsPageHandler_GetPluginsData_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PluginsPageHandler_GetPluginsData_ResponseParams.prototype.initDefaults_ = function() {
    this.plugins = null;
  };
  PluginsPageHandler_GetPluginsData_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PluginsPageHandler_GetPluginsData_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PluginsPageHandler_GetPluginsData_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PluginsPageHandler_GetPluginsData_ResponseParams.plugins
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(PluginData), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PluginsPageHandler_GetPluginsData_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  PluginsPageHandler_GetPluginsData_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new PluginsPageHandler_GetPluginsData_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.plugins = decoder.decodeArrayPointer(new codec.PointerTo(PluginData));
    return val;
  };

  PluginsPageHandler_GetPluginsData_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PluginsPageHandler_GetPluginsData_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(PluginData), val.plugins);
  };
  function PluginsPageHandler_GetShowDetails_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PluginsPageHandler_GetShowDetails_Params.prototype.initDefaults_ = function() {
  };
  PluginsPageHandler_GetShowDetails_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PluginsPageHandler_GetShowDetails_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PluginsPageHandler_GetShowDetails_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PluginsPageHandler_GetShowDetails_Params.encodedSize = codec.kStructHeaderSize + 0;

  PluginsPageHandler_GetShowDetails_Params.decode = function(decoder) {
    var packed;
    var val = new PluginsPageHandler_GetShowDetails_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  PluginsPageHandler_GetShowDetails_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PluginsPageHandler_GetShowDetails_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function PluginsPageHandler_GetShowDetails_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PluginsPageHandler_GetShowDetails_ResponseParams.prototype.initDefaults_ = function() {
    this.show_details = false;
  };
  PluginsPageHandler_GetShowDetails_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PluginsPageHandler_GetShowDetails_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PluginsPageHandler_GetShowDetails_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  PluginsPageHandler_GetShowDetails_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  PluginsPageHandler_GetShowDetails_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new PluginsPageHandler_GetShowDetails_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.show_details = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PluginsPageHandler_GetShowDetails_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PluginsPageHandler_GetShowDetails_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint8, val.show_details);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PluginsPageHandler_SaveShowDetailsToPrefs_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PluginsPageHandler_SaveShowDetailsToPrefs_Params.prototype.initDefaults_ = function() {
    this.details_mode = false;
  };
  PluginsPageHandler_SaveShowDetailsToPrefs_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PluginsPageHandler_SaveShowDetailsToPrefs_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PluginsPageHandler_SaveShowDetailsToPrefs_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  PluginsPageHandler_SaveShowDetailsToPrefs_Params.encodedSize = codec.kStructHeaderSize + 8;

  PluginsPageHandler_SaveShowDetailsToPrefs_Params.decode = function(decoder) {
    var packed;
    var val = new PluginsPageHandler_SaveShowDetailsToPrefs_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.details_mode = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PluginsPageHandler_SaveShowDetailsToPrefs_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PluginsPageHandler_SaveShowDetailsToPrefs_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint8, val.details_mode);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PluginsPageHandler_SetPluginAlwaysAllowed_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PluginsPageHandler_SetPluginAlwaysAllowed_Params.prototype.initDefaults_ = function() {
    this.plugin = null;
    this.allowed = false;
  };
  PluginsPageHandler_SetPluginAlwaysAllowed_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PluginsPageHandler_SetPluginAlwaysAllowed_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PluginsPageHandler_SetPluginAlwaysAllowed_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PluginsPageHandler_SetPluginAlwaysAllowed_Params.plugin
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  PluginsPageHandler_SetPluginAlwaysAllowed_Params.encodedSize = codec.kStructHeaderSize + 16;

  PluginsPageHandler_SetPluginAlwaysAllowed_Params.decode = function(decoder) {
    var packed;
    var val = new PluginsPageHandler_SetPluginAlwaysAllowed_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.plugin = decoder.decodeStruct(codec.String);
    val.allowed = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PluginsPageHandler_SetPluginAlwaysAllowed_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PluginsPageHandler_SetPluginAlwaysAllowed_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.plugin);
    encoder.encodeStruct(codec.Uint8, val.allowed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PluginsPageHandler_SetPluginEnabled_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PluginsPageHandler_SetPluginEnabled_Params.prototype.initDefaults_ = function() {
    this.plugin_path = null;
    this.enable = false;
  };
  PluginsPageHandler_SetPluginEnabled_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PluginsPageHandler_SetPluginEnabled_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PluginsPageHandler_SetPluginEnabled_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PluginsPageHandler_SetPluginEnabled_Params.plugin_path
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  PluginsPageHandler_SetPluginEnabled_Params.encodedSize = codec.kStructHeaderSize + 16;

  PluginsPageHandler_SetPluginEnabled_Params.decode = function(decoder) {
    var packed;
    var val = new PluginsPageHandler_SetPluginEnabled_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.plugin_path = decoder.decodeStruct(codec.String);
    val.enable = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PluginsPageHandler_SetPluginEnabled_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PluginsPageHandler_SetPluginEnabled_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.plugin_path);
    encoder.encodeStruct(codec.Uint8, val.enable);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PluginsPageHandler_SetPluginGroupEnabled_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PluginsPageHandler_SetPluginGroupEnabled_Params.prototype.initDefaults_ = function() {
    this.group_name = null;
    this.enable = false;
  };
  PluginsPageHandler_SetPluginGroupEnabled_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PluginsPageHandler_SetPluginGroupEnabled_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PluginsPageHandler_SetPluginGroupEnabled_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PluginsPageHandler_SetPluginGroupEnabled_Params.group_name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  PluginsPageHandler_SetPluginGroupEnabled_Params.encodedSize = codec.kStructHeaderSize + 16;

  PluginsPageHandler_SetPluginGroupEnabled_Params.decode = function(decoder) {
    var packed;
    var val = new PluginsPageHandler_SetPluginGroupEnabled_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.group_name = decoder.decodeStruct(codec.String);
    val.enable = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PluginsPageHandler_SetPluginGroupEnabled_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PluginsPageHandler_SetPluginGroupEnabled_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.group_name);
    encoder.encodeStruct(codec.Uint8, val.enable);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PluginsPageHandler_SetClientPage_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PluginsPageHandler_SetClientPage_Params.prototype.initDefaults_ = function() {
    this.page = null;
  };
  PluginsPageHandler_SetClientPage_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PluginsPageHandler_SetClientPage_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PluginsPageHandler_SetClientPage_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PluginsPageHandler_SetClientPage_Params.page
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PluginsPageHandler_SetClientPage_Params.encodedSize = codec.kStructHeaderSize + 8;

  PluginsPageHandler_SetClientPage_Params.decode = function(decoder) {
    var packed;
    var val = new PluginsPageHandler_SetClientPage_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.page = decoder.decodeStruct(codec.Interface);
    return val;
  };

  PluginsPageHandler_SetClientPage_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PluginsPageHandler_SetClientPage_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Interface, val.page);
  };
  function PluginsPage_OnPluginsUpdated_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PluginsPage_OnPluginsUpdated_Params.prototype.initDefaults_ = function() {
    this.plugins = null;
  };
  PluginsPage_OnPluginsUpdated_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PluginsPage_OnPluginsUpdated_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PluginsPage_OnPluginsUpdated_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PluginsPage_OnPluginsUpdated_Params.plugins
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(PluginData), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PluginsPage_OnPluginsUpdated_Params.encodedSize = codec.kStructHeaderSize + 8;

  PluginsPage_OnPluginsUpdated_Params.decode = function(decoder) {
    var packed;
    var val = new PluginsPage_OnPluginsUpdated_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.plugins = decoder.decodeArrayPointer(new codec.PointerTo(PluginData));
    return val;
  };

  PluginsPage_OnPluginsUpdated_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PluginsPage_OnPluginsUpdated_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(PluginData), val.plugins);
  };
  var kPluginsPageHandler_GetPluginsData_Name = 0;
  var kPluginsPageHandler_GetShowDetails_Name = 1;
  var kPluginsPageHandler_SaveShowDetailsToPrefs_Name = 2;
  var kPluginsPageHandler_SetPluginAlwaysAllowed_Name = 3;
  var kPluginsPageHandler_SetPluginEnabled_Name = 4;
  var kPluginsPageHandler_SetPluginGroupEnabled_Name = 5;
  var kPluginsPageHandler_SetClientPage_Name = 6;

  function PluginsPageHandlerProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  PluginsPageHandlerProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  PluginsPageHandlerProxy.prototype.getPluginsData = function() {
    var params = new PluginsPageHandler_GetPluginsData_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kPluginsPageHandler_GetPluginsData_Name,
          codec.align(PluginsPageHandler_GetPluginsData_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(PluginsPageHandler_GetPluginsData_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(PluginsPageHandler_GetPluginsData_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  PluginsPageHandlerProxy.prototype.getShowDetails = function() {
    var params = new PluginsPageHandler_GetShowDetails_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kPluginsPageHandler_GetShowDetails_Name,
          codec.align(PluginsPageHandler_GetShowDetails_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(PluginsPageHandler_GetShowDetails_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(PluginsPageHandler_GetShowDetails_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  PluginsPageHandlerProxy.prototype.saveShowDetailsToPrefs = function(details_mode) {
    var params = new PluginsPageHandler_SaveShowDetailsToPrefs_Params();
    params.details_mode = details_mode;
    var builder = new codec.MessageBuilder(
        kPluginsPageHandler_SaveShowDetailsToPrefs_Name,
        codec.align(PluginsPageHandler_SaveShowDetailsToPrefs_Params.encodedSize));
    builder.encodeStruct(PluginsPageHandler_SaveShowDetailsToPrefs_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PluginsPageHandlerProxy.prototype.setPluginAlwaysAllowed = function(plugin, allowed) {
    var params = new PluginsPageHandler_SetPluginAlwaysAllowed_Params();
    params.plugin = plugin;
    params.allowed = allowed;
    var builder = new codec.MessageBuilder(
        kPluginsPageHandler_SetPluginAlwaysAllowed_Name,
        codec.align(PluginsPageHandler_SetPluginAlwaysAllowed_Params.encodedSize));
    builder.encodeStruct(PluginsPageHandler_SetPluginAlwaysAllowed_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PluginsPageHandlerProxy.prototype.setPluginEnabled = function(plugin_path, enable) {
    var params = new PluginsPageHandler_SetPluginEnabled_Params();
    params.plugin_path = plugin_path;
    params.enable = enable;
    var builder = new codec.MessageBuilder(
        kPluginsPageHandler_SetPluginEnabled_Name,
        codec.align(PluginsPageHandler_SetPluginEnabled_Params.encodedSize));
    builder.encodeStruct(PluginsPageHandler_SetPluginEnabled_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PluginsPageHandlerProxy.prototype.setPluginGroupEnabled = function(group_name, enable) {
    var params = new PluginsPageHandler_SetPluginGroupEnabled_Params();
    params.group_name = group_name;
    params.enable = enable;
    var builder = new codec.MessageBuilder(
        kPluginsPageHandler_SetPluginGroupEnabled_Name,
        codec.align(PluginsPageHandler_SetPluginGroupEnabled_Params.encodedSize));
    builder.encodeStruct(PluginsPageHandler_SetPluginGroupEnabled_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PluginsPageHandlerProxy.prototype.setClientPage = function(page) {
    var params = new PluginsPageHandler_SetClientPage_Params();
    params.page = core.isHandle(page) ? page : connection.bindImpl(page, PluginsPage);
    var builder = new codec.MessageBuilder(
        kPluginsPageHandler_SetClientPage_Name,
        codec.align(PluginsPageHandler_SetClientPage_Params.encodedSize));
    builder.encodeStruct(PluginsPageHandler_SetClientPage_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function PluginsPageHandlerStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  PluginsPageHandlerStub.prototype = Object.create(bindings.StubBase.prototype);
  PluginsPageHandlerStub.prototype.getPluginsData = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.getPluginsData && bindings.StubBindings(this).delegate.getPluginsData();
  }
  PluginsPageHandlerStub.prototype.getShowDetails = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.getShowDetails && bindings.StubBindings(this).delegate.getShowDetails();
  }
  PluginsPageHandlerStub.prototype.saveShowDetailsToPrefs = function(details_mode) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.saveShowDetailsToPrefs && bindings.StubBindings(this).delegate.saveShowDetailsToPrefs(details_mode);
  }
  PluginsPageHandlerStub.prototype.setPluginAlwaysAllowed = function(plugin, allowed) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.setPluginAlwaysAllowed && bindings.StubBindings(this).delegate.setPluginAlwaysAllowed(plugin, allowed);
  }
  PluginsPageHandlerStub.prototype.setPluginEnabled = function(plugin_path, enable) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.setPluginEnabled && bindings.StubBindings(this).delegate.setPluginEnabled(plugin_path, enable);
  }
  PluginsPageHandlerStub.prototype.setPluginGroupEnabled = function(group_name, enable) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.setPluginGroupEnabled && bindings.StubBindings(this).delegate.setPluginGroupEnabled(group_name, enable);
  }
  PluginsPageHandlerStub.prototype.setClientPage = function(page) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.setClientPage && bindings.StubBindings(this).delegate.setClientPage(connection.bindHandleToProxy(page, PluginsPage));
  }

  PluginsPageHandlerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPluginsPageHandler_SaveShowDetailsToPrefs_Name:
      var params = reader.decodeStruct(PluginsPageHandler_SaveShowDetailsToPrefs_Params);
      this.saveShowDetailsToPrefs(params.details_mode);
      return true;
    case kPluginsPageHandler_SetPluginAlwaysAllowed_Name:
      var params = reader.decodeStruct(PluginsPageHandler_SetPluginAlwaysAllowed_Params);
      this.setPluginAlwaysAllowed(params.plugin, params.allowed);
      return true;
    case kPluginsPageHandler_SetPluginEnabled_Name:
      var params = reader.decodeStruct(PluginsPageHandler_SetPluginEnabled_Params);
      this.setPluginEnabled(params.plugin_path, params.enable);
      return true;
    case kPluginsPageHandler_SetPluginGroupEnabled_Name:
      var params = reader.decodeStruct(PluginsPageHandler_SetPluginGroupEnabled_Params);
      this.setPluginGroupEnabled(params.group_name, params.enable);
      return true;
    case kPluginsPageHandler_SetClientPage_Name:
      var params = reader.decodeStruct(PluginsPageHandler_SetClientPage_Params);
      this.setClientPage(params.page);
      return true;
    default:
      return false;
    }
  };

  PluginsPageHandlerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPluginsPageHandler_GetPluginsData_Name:
      var params = reader.decodeStruct(PluginsPageHandler_GetPluginsData_Params);
      return this.getPluginsData().then(function(response) {
        var responseParams =
            new PluginsPageHandler_GetPluginsData_ResponseParams();
        responseParams.plugins = response.plugins;
        var builder = new codec.MessageWithRequestIDBuilder(
            kPluginsPageHandler_GetPluginsData_Name,
            codec.align(PluginsPageHandler_GetPluginsData_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(PluginsPageHandler_GetPluginsData_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kPluginsPageHandler_GetShowDetails_Name:
      var params = reader.decodeStruct(PluginsPageHandler_GetShowDetails_Params);
      return this.getShowDetails().then(function(response) {
        var responseParams =
            new PluginsPageHandler_GetShowDetails_ResponseParams();
        responseParams.show_details = response.show_details;
        var builder = new codec.MessageWithRequestIDBuilder(
            kPluginsPageHandler_GetShowDetails_Name,
            codec.align(PluginsPageHandler_GetShowDetails_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(PluginsPageHandler_GetShowDetails_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validatePluginsPageHandlerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kPluginsPageHandler_GetPluginsData_Name:
        if (message.expectsResponse())
          paramsClass = PluginsPageHandler_GetPluginsData_Params;
      break;
      case kPluginsPageHandler_GetShowDetails_Name:
        if (message.expectsResponse())
          paramsClass = PluginsPageHandler_GetShowDetails_Params;
      break;
      case kPluginsPageHandler_SaveShowDetailsToPrefs_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PluginsPageHandler_SaveShowDetailsToPrefs_Params;
      break;
      case kPluginsPageHandler_SetPluginAlwaysAllowed_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PluginsPageHandler_SetPluginAlwaysAllowed_Params;
      break;
      case kPluginsPageHandler_SetPluginEnabled_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PluginsPageHandler_SetPluginEnabled_Params;
      break;
      case kPluginsPageHandler_SetPluginGroupEnabled_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PluginsPageHandler_SetPluginGroupEnabled_Params;
      break;
      case kPluginsPageHandler_SetClientPage_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PluginsPageHandler_SetClientPage_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validatePluginsPageHandlerResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kPluginsPageHandler_GetPluginsData_Name:
        if (message.isResponse())
          paramsClass = PluginsPageHandler_GetPluginsData_ResponseParams;
        break;
      case kPluginsPageHandler_GetShowDetails_Name:
        if (message.isResponse())
          paramsClass = PluginsPageHandler_GetShowDetails_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var PluginsPageHandler = {
    name: 'mojom::PluginsPageHandler',
    proxyClass: PluginsPageHandlerProxy,
    stubClass: PluginsPageHandlerStub,
    validateRequest: validatePluginsPageHandlerRequest,
    validateResponse: validatePluginsPageHandlerResponse,
  };
  PluginsPageHandlerStub.prototype.validator = validatePluginsPageHandlerRequest;
  PluginsPageHandlerProxy.prototype.validator = validatePluginsPageHandlerResponse;
  var kPluginsPage_OnPluginsUpdated_Name = 0;

  function PluginsPageProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  PluginsPageProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  PluginsPageProxy.prototype.onPluginsUpdated = function(plugins) {
    var params = new PluginsPage_OnPluginsUpdated_Params();
    params.plugins = plugins;
    var builder = new codec.MessageBuilder(
        kPluginsPage_OnPluginsUpdated_Name,
        codec.align(PluginsPage_OnPluginsUpdated_Params.encodedSize));
    builder.encodeStruct(PluginsPage_OnPluginsUpdated_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function PluginsPageStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  PluginsPageStub.prototype = Object.create(bindings.StubBase.prototype);
  PluginsPageStub.prototype.onPluginsUpdated = function(plugins) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onPluginsUpdated && bindings.StubBindings(this).delegate.onPluginsUpdated(plugins);
  }

  PluginsPageStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPluginsPage_OnPluginsUpdated_Name:
      var params = reader.decodeStruct(PluginsPage_OnPluginsUpdated_Params);
      this.onPluginsUpdated(params.plugins);
      return true;
    default:
      return false;
    }
  };

  PluginsPageStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validatePluginsPageRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kPluginsPage_OnPluginsUpdated_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PluginsPage_OnPluginsUpdated_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validatePluginsPageResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var PluginsPage = {
    name: 'mojom::PluginsPage',
    proxyClass: PluginsPageProxy,
    stubClass: PluginsPageStub,
    validateRequest: validatePluginsPageRequest,
    validateResponse: null,
  };
  PluginsPageStub.prototype.validator = validatePluginsPageRequest;
  PluginsPageProxy.prototype.validator = null;

  var exports = {};
  exports.MimeType = MimeType;
  exports.PluginFile = PluginFile;
  exports.PluginData = PluginData;
  exports.PluginsPageHandler = PluginsPageHandler;
  exports.PluginsPage = PluginsPage;

  return exports;
});
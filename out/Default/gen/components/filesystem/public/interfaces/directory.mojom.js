// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("components/filesystem/public/interfaces/directory.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "components/filesystem/public/interfaces/file.mojom",
    "components/filesystem/public/interfaces/types.mojom",
], function(bindings, codec, connection, core, validator, file$, types$) {

  function FileOpenDetails(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FileOpenDetails.prototype.initDefaults_ = function() {
    this.path = null;
    this.open_flags = 0;
  };
  FileOpenDetails.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  FileOpenDetails.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, FileOpenDetails.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate FileOpenDetails.path
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  FileOpenDetails.encodedSize = codec.kStructHeaderSize + 16;

  FileOpenDetails.decode = function(decoder) {
    var packed;
    var val = new FileOpenDetails();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.path = decoder.decodeStruct(codec.String);
    val.open_flags = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  FileOpenDetails.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FileOpenDetails.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.path);
    encoder.encodeStruct(codec.Uint32, val.open_flags);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function FileOpenResult(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FileOpenResult.prototype.initDefaults_ = function() {
    this.path = null;
    this.error = 0;
    this.file_handle = null;
  };
  FileOpenResult.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  FileOpenResult.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, FileOpenResult.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate FileOpenResult.path
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate FileOpenResult.file_handle
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 12, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FileOpenResult.encodedSize = codec.kStructHeaderSize + 16;

  FileOpenResult.decode = function(decoder) {
    var packed;
    var val = new FileOpenResult();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.path = decoder.decodeStruct(codec.String);
    val.error = decoder.decodeStruct(codec.Int32);
    val.file_handle = decoder.decodeStruct(codec.Handle);
    return val;
  };

  FileOpenResult.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FileOpenResult.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.path);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.encodeStruct(codec.Handle, val.file_handle);
  };
  function Directory_Read_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_Read_Params.prototype.initDefaults_ = function() {
  };
  Directory_Read_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Directory_Read_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Directory_Read_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Directory_Read_Params.encodedSize = codec.kStructHeaderSize + 0;

  Directory_Read_Params.decode = function(decoder) {
    var packed;
    var val = new Directory_Read_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Directory_Read_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_Read_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function Directory_Read_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_Read_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
    this.directory_contents = null;
  };
  Directory_Read_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Directory_Read_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Directory_Read_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate Directory_Read_ResponseParams.directory_contents
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(types$.DirectoryEntry), true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Directory_Read_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  Directory_Read_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Directory_Read_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.directory_contents = decoder.decodeArrayPointer(new codec.PointerTo(types$.DirectoryEntry));
    return val;
  };

  Directory_Read_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_Read_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(new codec.PointerTo(types$.DirectoryEntry), val.directory_contents);
  };
  function Directory_OpenFile_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_OpenFile_Params.prototype.initDefaults_ = function() {
    this.path = null;
    this.file = null;
    this.open_flags = 0;
  };
  Directory_OpenFile_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Directory_OpenFile_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Directory_OpenFile_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Directory_OpenFile_Params.path
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Directory_OpenFile_Params.file
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 8, true)
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  Directory_OpenFile_Params.encodedSize = codec.kStructHeaderSize + 16;

  Directory_OpenFile_Params.decode = function(decoder) {
    var packed;
    var val = new Directory_OpenFile_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.path = decoder.decodeStruct(codec.String);
    val.file = decoder.decodeStruct(codec.Handle);
    val.open_flags = decoder.decodeStruct(codec.Uint32);
    return val;
  };

  Directory_OpenFile_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_OpenFile_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.path);
    encoder.encodeStruct(codec.Handle, val.file);
    encoder.encodeStruct(codec.Uint32, val.open_flags);
  };
  function Directory_OpenFile_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_OpenFile_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
  };
  Directory_OpenFile_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Directory_OpenFile_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Directory_OpenFile_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  Directory_OpenFile_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Directory_OpenFile_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Directory_OpenFile_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Directory_OpenFile_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_OpenFile_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Directory_OpenFileHandle_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_OpenFileHandle_Params.prototype.initDefaults_ = function() {
    this.path = null;
    this.open_flags = 0;
  };
  Directory_OpenFileHandle_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Directory_OpenFileHandle_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Directory_OpenFileHandle_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Directory_OpenFileHandle_Params.path
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  Directory_OpenFileHandle_Params.encodedSize = codec.kStructHeaderSize + 16;

  Directory_OpenFileHandle_Params.decode = function(decoder) {
    var packed;
    var val = new Directory_OpenFileHandle_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.path = decoder.decodeStruct(codec.String);
    val.open_flags = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Directory_OpenFileHandle_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_OpenFileHandle_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.path);
    encoder.encodeStruct(codec.Uint32, val.open_flags);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Directory_OpenFileHandle_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_OpenFileHandle_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
    this.file_handle = null;
  };
  Directory_OpenFileHandle_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Directory_OpenFileHandle_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Directory_OpenFileHandle_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate Directory_OpenFileHandle_ResponseParams.file_handle
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 4, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Directory_OpenFileHandle_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Directory_OpenFileHandle_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Directory_OpenFileHandle_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    val.file_handle = decoder.decodeStruct(codec.Handle);
    return val;
  };

  Directory_OpenFileHandle_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_OpenFileHandle_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.encodeStruct(codec.Handle, val.file_handle);
  };
  function Directory_OpenFileHandles_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_OpenFileHandles_Params.prototype.initDefaults_ = function() {
    this.files = null;
  };
  Directory_OpenFileHandles_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Directory_OpenFileHandles_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Directory_OpenFileHandles_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Directory_OpenFileHandles_Params.files
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(FileOpenDetails), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Directory_OpenFileHandles_Params.encodedSize = codec.kStructHeaderSize + 8;

  Directory_OpenFileHandles_Params.decode = function(decoder) {
    var packed;
    var val = new Directory_OpenFileHandles_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.files = decoder.decodeArrayPointer(new codec.PointerTo(FileOpenDetails));
    return val;
  };

  Directory_OpenFileHandles_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_OpenFileHandles_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(FileOpenDetails), val.files);
  };
  function Directory_OpenFileHandles_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_OpenFileHandles_ResponseParams.prototype.initDefaults_ = function() {
    this.results = null;
  };
  Directory_OpenFileHandles_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Directory_OpenFileHandles_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Directory_OpenFileHandles_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Directory_OpenFileHandles_ResponseParams.results
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(FileOpenResult), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Directory_OpenFileHandles_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Directory_OpenFileHandles_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Directory_OpenFileHandles_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.results = decoder.decodeArrayPointer(new codec.PointerTo(FileOpenResult));
    return val;
  };

  Directory_OpenFileHandles_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_OpenFileHandles_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(FileOpenResult), val.results);
  };
  function Directory_OpenDirectory_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_OpenDirectory_Params.prototype.initDefaults_ = function() {
    this.path = null;
    this.directory = null;
    this.open_flags = 0;
  };
  Directory_OpenDirectory_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Directory_OpenDirectory_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Directory_OpenDirectory_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Directory_OpenDirectory_Params.path
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Directory_OpenDirectory_Params.directory
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 8, true)
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  Directory_OpenDirectory_Params.encodedSize = codec.kStructHeaderSize + 16;

  Directory_OpenDirectory_Params.decode = function(decoder) {
    var packed;
    var val = new Directory_OpenDirectory_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.path = decoder.decodeStruct(codec.String);
    val.directory = decoder.decodeStruct(codec.Handle);
    val.open_flags = decoder.decodeStruct(codec.Uint32);
    return val;
  };

  Directory_OpenDirectory_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_OpenDirectory_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.path);
    encoder.encodeStruct(codec.Handle, val.directory);
    encoder.encodeStruct(codec.Uint32, val.open_flags);
  };
  function Directory_OpenDirectory_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_OpenDirectory_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
  };
  Directory_OpenDirectory_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Directory_OpenDirectory_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Directory_OpenDirectory_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  Directory_OpenDirectory_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Directory_OpenDirectory_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Directory_OpenDirectory_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Directory_OpenDirectory_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_OpenDirectory_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Directory_Rename_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_Rename_Params.prototype.initDefaults_ = function() {
    this.path = null;
    this.new_path = null;
  };
  Directory_Rename_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Directory_Rename_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Directory_Rename_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Directory_Rename_Params.path
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Directory_Rename_Params.new_path
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Directory_Rename_Params.encodedSize = codec.kStructHeaderSize + 16;

  Directory_Rename_Params.decode = function(decoder) {
    var packed;
    var val = new Directory_Rename_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.path = decoder.decodeStruct(codec.String);
    val.new_path = decoder.decodeStruct(codec.String);
    return val;
  };

  Directory_Rename_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_Rename_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.path);
    encoder.encodeStruct(codec.String, val.new_path);
  };
  function Directory_Rename_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_Rename_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
  };
  Directory_Rename_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Directory_Rename_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Directory_Rename_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  Directory_Rename_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Directory_Rename_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Directory_Rename_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Directory_Rename_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_Rename_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Directory_Delete_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_Delete_Params.prototype.initDefaults_ = function() {
    this.path = null;
    this.delete_flags = 0;
  };
  Directory_Delete_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Directory_Delete_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Directory_Delete_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Directory_Delete_Params.path
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  Directory_Delete_Params.encodedSize = codec.kStructHeaderSize + 16;

  Directory_Delete_Params.decode = function(decoder) {
    var packed;
    var val = new Directory_Delete_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.path = decoder.decodeStruct(codec.String);
    val.delete_flags = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Directory_Delete_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_Delete_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.path);
    encoder.encodeStruct(codec.Uint32, val.delete_flags);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Directory_Delete_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_Delete_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
  };
  Directory_Delete_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Directory_Delete_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Directory_Delete_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  Directory_Delete_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Directory_Delete_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Directory_Delete_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Directory_Delete_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_Delete_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Directory_Exists_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_Exists_Params.prototype.initDefaults_ = function() {
    this.path = null;
  };
  Directory_Exists_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Directory_Exists_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Directory_Exists_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Directory_Exists_Params.path
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Directory_Exists_Params.encodedSize = codec.kStructHeaderSize + 8;

  Directory_Exists_Params.decode = function(decoder) {
    var packed;
    var val = new Directory_Exists_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.path = decoder.decodeStruct(codec.String);
    return val;
  };

  Directory_Exists_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_Exists_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.path);
  };
  function Directory_Exists_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_Exists_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
    this.exists = false;
  };
  Directory_Exists_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Directory_Exists_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Directory_Exists_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  Directory_Exists_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Directory_Exists_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Directory_Exists_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    val.exists = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Directory_Exists_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_Exists_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.encodeStruct(codec.Uint8, val.exists);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Directory_IsWritable_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_IsWritable_Params.prototype.initDefaults_ = function() {
    this.path = null;
  };
  Directory_IsWritable_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Directory_IsWritable_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Directory_IsWritable_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Directory_IsWritable_Params.path
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Directory_IsWritable_Params.encodedSize = codec.kStructHeaderSize + 8;

  Directory_IsWritable_Params.decode = function(decoder) {
    var packed;
    var val = new Directory_IsWritable_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.path = decoder.decodeStruct(codec.String);
    return val;
  };

  Directory_IsWritable_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_IsWritable_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.path);
  };
  function Directory_IsWritable_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_IsWritable_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
    this.is_writable = false;
  };
  Directory_IsWritable_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Directory_IsWritable_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Directory_IsWritable_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  Directory_IsWritable_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Directory_IsWritable_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Directory_IsWritable_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    val.is_writable = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Directory_IsWritable_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_IsWritable_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.encodeStruct(codec.Uint8, val.is_writable);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Directory_Flush_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_Flush_Params.prototype.initDefaults_ = function() {
  };
  Directory_Flush_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Directory_Flush_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Directory_Flush_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Directory_Flush_Params.encodedSize = codec.kStructHeaderSize + 0;

  Directory_Flush_Params.decode = function(decoder) {
    var packed;
    var val = new Directory_Flush_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Directory_Flush_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_Flush_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function Directory_Flush_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_Flush_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
  };
  Directory_Flush_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Directory_Flush_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Directory_Flush_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  Directory_Flush_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Directory_Flush_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Directory_Flush_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Directory_Flush_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_Flush_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Directory_StatFile_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_StatFile_Params.prototype.initDefaults_ = function() {
    this.path = null;
  };
  Directory_StatFile_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Directory_StatFile_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Directory_StatFile_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Directory_StatFile_Params.path
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Directory_StatFile_Params.encodedSize = codec.kStructHeaderSize + 8;

  Directory_StatFile_Params.decode = function(decoder) {
    var packed;
    var val = new Directory_StatFile_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.path = decoder.decodeStruct(codec.String);
    return val;
  };

  Directory_StatFile_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_StatFile_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.path);
  };
  function Directory_StatFile_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_StatFile_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
    this.file_information = null;
  };
  Directory_StatFile_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Directory_StatFile_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Directory_StatFile_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate Directory_StatFile_ResponseParams.file_information
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, types$.FileInformation, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Directory_StatFile_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  Directory_StatFile_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Directory_StatFile_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.file_information = decoder.decodeStructPointer(types$.FileInformation);
    return val;
  };

  Directory_StatFile_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_StatFile_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(types$.FileInformation, val.file_information);
  };
  function Directory_Clone_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_Clone_Params.prototype.initDefaults_ = function() {
    this.directory = null;
  };
  Directory_Clone_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Directory_Clone_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Directory_Clone_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Directory_Clone_Params.directory
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Directory_Clone_Params.encodedSize = codec.kStructHeaderSize + 8;

  Directory_Clone_Params.decode = function(decoder) {
    var packed;
    var val = new Directory_Clone_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.directory = decoder.decodeStruct(codec.Handle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Directory_Clone_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_Clone_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.directory);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Directory_ReadEntireFile_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_ReadEntireFile_Params.prototype.initDefaults_ = function() {
    this.path = null;
  };
  Directory_ReadEntireFile_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Directory_ReadEntireFile_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Directory_ReadEntireFile_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Directory_ReadEntireFile_Params.path
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Directory_ReadEntireFile_Params.encodedSize = codec.kStructHeaderSize + 8;

  Directory_ReadEntireFile_Params.decode = function(decoder) {
    var packed;
    var val = new Directory_ReadEntireFile_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.path = decoder.decodeStruct(codec.String);
    return val;
  };

  Directory_ReadEntireFile_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_ReadEntireFile_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.path);
  };
  function Directory_ReadEntireFile_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_ReadEntireFile_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
    this.data = null;
  };
  Directory_ReadEntireFile_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Directory_ReadEntireFile_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Directory_ReadEntireFile_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate Directory_ReadEntireFile_ResponseParams.data
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Directory_ReadEntireFile_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  Directory_ReadEntireFile_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Directory_ReadEntireFile_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.data = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  Directory_ReadEntireFile_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_ReadEntireFile_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(codec.Uint8, val.data);
  };
  function Directory_WriteFile_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_WriteFile_Params.prototype.initDefaults_ = function() {
    this.path = null;
    this.data = null;
  };
  Directory_WriteFile_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Directory_WriteFile_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Directory_WriteFile_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Directory_WriteFile_Params.path
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Directory_WriteFile_Params.data
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Directory_WriteFile_Params.encodedSize = codec.kStructHeaderSize + 16;

  Directory_WriteFile_Params.decode = function(decoder) {
    var packed;
    var val = new Directory_WriteFile_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.path = decoder.decodeStruct(codec.String);
    val.data = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  Directory_WriteFile_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_WriteFile_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.path);
    encoder.encodeArrayPointer(codec.Uint8, val.data);
  };
  function Directory_WriteFile_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_WriteFile_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
  };
  Directory_WriteFile_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Directory_WriteFile_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Directory_WriteFile_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  Directory_WriteFile_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Directory_WriteFile_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Directory_WriteFile_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Directory_WriteFile_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_WriteFile_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kDirectory_Read_Name = 0;
  var kDirectory_OpenFile_Name = 1;
  var kDirectory_OpenFileHandle_Name = 2;
  var kDirectory_OpenFileHandles_Name = 3;
  var kDirectory_OpenDirectory_Name = 4;
  var kDirectory_Rename_Name = 5;
  var kDirectory_Delete_Name = 6;
  var kDirectory_Exists_Name = 7;
  var kDirectory_IsWritable_Name = 8;
  var kDirectory_Flush_Name = 9;
  var kDirectory_StatFile_Name = 10;
  var kDirectory_Clone_Name = 11;
  var kDirectory_ReadEntireFile_Name = 12;
  var kDirectory_WriteFile_Name = 13;

  function DirectoryProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  DirectoryProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  DirectoryProxy.prototype.read = function() {
    var params = new Directory_Read_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kDirectory_Read_Name,
          codec.align(Directory_Read_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Directory_Read_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Directory_Read_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  DirectoryProxy.prototype.openFile = function(path, file, open_flags) {
    var params = new Directory_OpenFile_Params();
    params.path = path;
    params.file = core.isHandle(file) ? file : connection.bindProxy(file, file$.File);
    params.open_flags = open_flags;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kDirectory_OpenFile_Name,
          codec.align(Directory_OpenFile_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Directory_OpenFile_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Directory_OpenFile_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  DirectoryProxy.prototype.openFileHandle = function(path, open_flags) {
    var params = new Directory_OpenFileHandle_Params();
    params.path = path;
    params.open_flags = open_flags;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kDirectory_OpenFileHandle_Name,
          codec.align(Directory_OpenFileHandle_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Directory_OpenFileHandle_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Directory_OpenFileHandle_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  DirectoryProxy.prototype.openFileHandles = function(files) {
    var params = new Directory_OpenFileHandles_Params();
    params.files = files;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kDirectory_OpenFileHandles_Name,
          codec.align(Directory_OpenFileHandles_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Directory_OpenFileHandles_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Directory_OpenFileHandles_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  DirectoryProxy.prototype.openDirectory = function(path, directory, open_flags) {
    var params = new Directory_OpenDirectory_Params();
    params.path = path;
    params.directory = core.isHandle(directory) ? directory : connection.bindProxy(directory, Directory);
    params.open_flags = open_flags;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kDirectory_OpenDirectory_Name,
          codec.align(Directory_OpenDirectory_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Directory_OpenDirectory_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Directory_OpenDirectory_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  DirectoryProxy.prototype.rename = function(path, new_path) {
    var params = new Directory_Rename_Params();
    params.path = path;
    params.new_path = new_path;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kDirectory_Rename_Name,
          codec.align(Directory_Rename_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Directory_Rename_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Directory_Rename_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  DirectoryProxy.prototype.delete = function(path, delete_flags) {
    var params = new Directory_Delete_Params();
    params.path = path;
    params.delete_flags = delete_flags;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kDirectory_Delete_Name,
          codec.align(Directory_Delete_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Directory_Delete_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Directory_Delete_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  DirectoryProxy.prototype.exists = function(path) {
    var params = new Directory_Exists_Params();
    params.path = path;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kDirectory_Exists_Name,
          codec.align(Directory_Exists_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Directory_Exists_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Directory_Exists_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  DirectoryProxy.prototype.isWritable = function(path) {
    var params = new Directory_IsWritable_Params();
    params.path = path;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kDirectory_IsWritable_Name,
          codec.align(Directory_IsWritable_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Directory_IsWritable_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Directory_IsWritable_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  DirectoryProxy.prototype.flush = function() {
    var params = new Directory_Flush_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kDirectory_Flush_Name,
          codec.align(Directory_Flush_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Directory_Flush_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Directory_Flush_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  DirectoryProxy.prototype.statFile = function(path) {
    var params = new Directory_StatFile_Params();
    params.path = path;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kDirectory_StatFile_Name,
          codec.align(Directory_StatFile_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Directory_StatFile_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Directory_StatFile_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  DirectoryProxy.prototype.clone = function(directory) {
    var params = new Directory_Clone_Params();
    params.directory = core.isHandle(directory) ? directory : connection.bindProxy(directory, Directory);
    var builder = new codec.MessageBuilder(
        kDirectory_Clone_Name,
        codec.align(Directory_Clone_Params.encodedSize));
    builder.encodeStruct(Directory_Clone_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DirectoryProxy.prototype.readEntireFile = function(path) {
    var params = new Directory_ReadEntireFile_Params();
    params.path = path;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kDirectory_ReadEntireFile_Name,
          codec.align(Directory_ReadEntireFile_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Directory_ReadEntireFile_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Directory_ReadEntireFile_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  DirectoryProxy.prototype.writeFile = function(path, data) {
    var params = new Directory_WriteFile_Params();
    params.path = path;
    params.data = data;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kDirectory_WriteFile_Name,
          codec.align(Directory_WriteFile_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Directory_WriteFile_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Directory_WriteFile_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function DirectoryStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  DirectoryStub.prototype = Object.create(bindings.StubBase.prototype);
  DirectoryStub.prototype.read = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.read && bindings.StubBindings(this).delegate.read();
  }
  DirectoryStub.prototype.openFile = function(path, file, open_flags) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.openFile && bindings.StubBindings(this).delegate.openFile(path, connection.bindHandleToStub(file, file$.File), open_flags);
  }
  DirectoryStub.prototype.openFileHandle = function(path, open_flags) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.openFileHandle && bindings.StubBindings(this).delegate.openFileHandle(path, open_flags);
  }
  DirectoryStub.prototype.openFileHandles = function(files) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.openFileHandles && bindings.StubBindings(this).delegate.openFileHandles(files);
  }
  DirectoryStub.prototype.openDirectory = function(path, directory, open_flags) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.openDirectory && bindings.StubBindings(this).delegate.openDirectory(path, connection.bindHandleToStub(directory, Directory), open_flags);
  }
  DirectoryStub.prototype.rename = function(path, new_path) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.rename && bindings.StubBindings(this).delegate.rename(path, new_path);
  }
  DirectoryStub.prototype.delete = function(path, delete_flags) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.delete && bindings.StubBindings(this).delegate.delete(path, delete_flags);
  }
  DirectoryStub.prototype.exists = function(path) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.exists && bindings.StubBindings(this).delegate.exists(path);
  }
  DirectoryStub.prototype.isWritable = function(path) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.isWritable && bindings.StubBindings(this).delegate.isWritable(path);
  }
  DirectoryStub.prototype.flush = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.flush && bindings.StubBindings(this).delegate.flush();
  }
  DirectoryStub.prototype.statFile = function(path) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.statFile && bindings.StubBindings(this).delegate.statFile(path);
  }
  DirectoryStub.prototype.clone = function(directory) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.clone && bindings.StubBindings(this).delegate.clone(connection.bindHandleToStub(directory, Directory));
  }
  DirectoryStub.prototype.readEntireFile = function(path) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.readEntireFile && bindings.StubBindings(this).delegate.readEntireFile(path);
  }
  DirectoryStub.prototype.writeFile = function(path, data) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.writeFile && bindings.StubBindings(this).delegate.writeFile(path, data);
  }

  DirectoryStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kDirectory_Clone_Name:
      var params = reader.decodeStruct(Directory_Clone_Params);
      this.clone(params.directory);
      return true;
    default:
      return false;
    }
  };

  DirectoryStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kDirectory_Read_Name:
      var params = reader.decodeStruct(Directory_Read_Params);
      return this.read().then(function(response) {
        var responseParams =
            new Directory_Read_ResponseParams();
        responseParams.error = response.error;
        responseParams.directory_contents = response.directory_contents;
        var builder = new codec.MessageWithRequestIDBuilder(
            kDirectory_Read_Name,
            codec.align(Directory_Read_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Directory_Read_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kDirectory_OpenFile_Name:
      var params = reader.decodeStruct(Directory_OpenFile_Params);
      return this.openFile(params.path, params.file, params.open_flags).then(function(response) {
        var responseParams =
            new Directory_OpenFile_ResponseParams();
        responseParams.error = response.error;
        var builder = new codec.MessageWithRequestIDBuilder(
            kDirectory_OpenFile_Name,
            codec.align(Directory_OpenFile_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Directory_OpenFile_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kDirectory_OpenFileHandle_Name:
      var params = reader.decodeStruct(Directory_OpenFileHandle_Params);
      return this.openFileHandle(params.path, params.open_flags).then(function(response) {
        var responseParams =
            new Directory_OpenFileHandle_ResponseParams();
        responseParams.error = response.error;
        responseParams.file_handle = response.file_handle;
        var builder = new codec.MessageWithRequestIDBuilder(
            kDirectory_OpenFileHandle_Name,
            codec.align(Directory_OpenFileHandle_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Directory_OpenFileHandle_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kDirectory_OpenFileHandles_Name:
      var params = reader.decodeStruct(Directory_OpenFileHandles_Params);
      return this.openFileHandles(params.files).then(function(response) {
        var responseParams =
            new Directory_OpenFileHandles_ResponseParams();
        responseParams.results = response.results;
        var builder = new codec.MessageWithRequestIDBuilder(
            kDirectory_OpenFileHandles_Name,
            codec.align(Directory_OpenFileHandles_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Directory_OpenFileHandles_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kDirectory_OpenDirectory_Name:
      var params = reader.decodeStruct(Directory_OpenDirectory_Params);
      return this.openDirectory(params.path, params.directory, params.open_flags).then(function(response) {
        var responseParams =
            new Directory_OpenDirectory_ResponseParams();
        responseParams.error = response.error;
        var builder = new codec.MessageWithRequestIDBuilder(
            kDirectory_OpenDirectory_Name,
            codec.align(Directory_OpenDirectory_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Directory_OpenDirectory_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kDirectory_Rename_Name:
      var params = reader.decodeStruct(Directory_Rename_Params);
      return this.rename(params.path, params.new_path).then(function(response) {
        var responseParams =
            new Directory_Rename_ResponseParams();
        responseParams.error = response.error;
        var builder = new codec.MessageWithRequestIDBuilder(
            kDirectory_Rename_Name,
            codec.align(Directory_Rename_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Directory_Rename_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kDirectory_Delete_Name:
      var params = reader.decodeStruct(Directory_Delete_Params);
      return this.delete(params.path, params.delete_flags).then(function(response) {
        var responseParams =
            new Directory_Delete_ResponseParams();
        responseParams.error = response.error;
        var builder = new codec.MessageWithRequestIDBuilder(
            kDirectory_Delete_Name,
            codec.align(Directory_Delete_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Directory_Delete_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kDirectory_Exists_Name:
      var params = reader.decodeStruct(Directory_Exists_Params);
      return this.exists(params.path).then(function(response) {
        var responseParams =
            new Directory_Exists_ResponseParams();
        responseParams.error = response.error;
        responseParams.exists = response.exists;
        var builder = new codec.MessageWithRequestIDBuilder(
            kDirectory_Exists_Name,
            codec.align(Directory_Exists_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Directory_Exists_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kDirectory_IsWritable_Name:
      var params = reader.decodeStruct(Directory_IsWritable_Params);
      return this.isWritable(params.path).then(function(response) {
        var responseParams =
            new Directory_IsWritable_ResponseParams();
        responseParams.error = response.error;
        responseParams.is_writable = response.is_writable;
        var builder = new codec.MessageWithRequestIDBuilder(
            kDirectory_IsWritable_Name,
            codec.align(Directory_IsWritable_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Directory_IsWritable_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kDirectory_Flush_Name:
      var params = reader.decodeStruct(Directory_Flush_Params);
      return this.flush().then(function(response) {
        var responseParams =
            new Directory_Flush_ResponseParams();
        responseParams.error = response.error;
        var builder = new codec.MessageWithRequestIDBuilder(
            kDirectory_Flush_Name,
            codec.align(Directory_Flush_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Directory_Flush_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kDirectory_StatFile_Name:
      var params = reader.decodeStruct(Directory_StatFile_Params);
      return this.statFile(params.path).then(function(response) {
        var responseParams =
            new Directory_StatFile_ResponseParams();
        responseParams.error = response.error;
        responseParams.file_information = response.file_information;
        var builder = new codec.MessageWithRequestIDBuilder(
            kDirectory_StatFile_Name,
            codec.align(Directory_StatFile_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Directory_StatFile_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kDirectory_ReadEntireFile_Name:
      var params = reader.decodeStruct(Directory_ReadEntireFile_Params);
      return this.readEntireFile(params.path).then(function(response) {
        var responseParams =
            new Directory_ReadEntireFile_ResponseParams();
        responseParams.error = response.error;
        responseParams.data = response.data;
        var builder = new codec.MessageWithRequestIDBuilder(
            kDirectory_ReadEntireFile_Name,
            codec.align(Directory_ReadEntireFile_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Directory_ReadEntireFile_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kDirectory_WriteFile_Name:
      var params = reader.decodeStruct(Directory_WriteFile_Params);
      return this.writeFile(params.path, params.data).then(function(response) {
        var responseParams =
            new Directory_WriteFile_ResponseParams();
        responseParams.error = response.error;
        var builder = new codec.MessageWithRequestIDBuilder(
            kDirectory_WriteFile_Name,
            codec.align(Directory_WriteFile_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Directory_WriteFile_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateDirectoryRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kDirectory_Read_Name:
        if (message.expectsResponse())
          paramsClass = Directory_Read_Params;
      break;
      case kDirectory_OpenFile_Name:
        if (message.expectsResponse())
          paramsClass = Directory_OpenFile_Params;
      break;
      case kDirectory_OpenFileHandle_Name:
        if (message.expectsResponse())
          paramsClass = Directory_OpenFileHandle_Params;
      break;
      case kDirectory_OpenFileHandles_Name:
        if (message.expectsResponse())
          paramsClass = Directory_OpenFileHandles_Params;
      break;
      case kDirectory_OpenDirectory_Name:
        if (message.expectsResponse())
          paramsClass = Directory_OpenDirectory_Params;
      break;
      case kDirectory_Rename_Name:
        if (message.expectsResponse())
          paramsClass = Directory_Rename_Params;
      break;
      case kDirectory_Delete_Name:
        if (message.expectsResponse())
          paramsClass = Directory_Delete_Params;
      break;
      case kDirectory_Exists_Name:
        if (message.expectsResponse())
          paramsClass = Directory_Exists_Params;
      break;
      case kDirectory_IsWritable_Name:
        if (message.expectsResponse())
          paramsClass = Directory_IsWritable_Params;
      break;
      case kDirectory_Flush_Name:
        if (message.expectsResponse())
          paramsClass = Directory_Flush_Params;
      break;
      case kDirectory_StatFile_Name:
        if (message.expectsResponse())
          paramsClass = Directory_StatFile_Params;
      break;
      case kDirectory_Clone_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Directory_Clone_Params;
      break;
      case kDirectory_ReadEntireFile_Name:
        if (message.expectsResponse())
          paramsClass = Directory_ReadEntireFile_Params;
      break;
      case kDirectory_WriteFile_Name:
        if (message.expectsResponse())
          paramsClass = Directory_WriteFile_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateDirectoryResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kDirectory_Read_Name:
        if (message.isResponse())
          paramsClass = Directory_Read_ResponseParams;
        break;
      case kDirectory_OpenFile_Name:
        if (message.isResponse())
          paramsClass = Directory_OpenFile_ResponseParams;
        break;
      case kDirectory_OpenFileHandle_Name:
        if (message.isResponse())
          paramsClass = Directory_OpenFileHandle_ResponseParams;
        break;
      case kDirectory_OpenFileHandles_Name:
        if (message.isResponse())
          paramsClass = Directory_OpenFileHandles_ResponseParams;
        break;
      case kDirectory_OpenDirectory_Name:
        if (message.isResponse())
          paramsClass = Directory_OpenDirectory_ResponseParams;
        break;
      case kDirectory_Rename_Name:
        if (message.isResponse())
          paramsClass = Directory_Rename_ResponseParams;
        break;
      case kDirectory_Delete_Name:
        if (message.isResponse())
          paramsClass = Directory_Delete_ResponseParams;
        break;
      case kDirectory_Exists_Name:
        if (message.isResponse())
          paramsClass = Directory_Exists_ResponseParams;
        break;
      case kDirectory_IsWritable_Name:
        if (message.isResponse())
          paramsClass = Directory_IsWritable_ResponseParams;
        break;
      case kDirectory_Flush_Name:
        if (message.isResponse())
          paramsClass = Directory_Flush_ResponseParams;
        break;
      case kDirectory_StatFile_Name:
        if (message.isResponse())
          paramsClass = Directory_StatFile_ResponseParams;
        break;
      case kDirectory_ReadEntireFile_Name:
        if (message.isResponse())
          paramsClass = Directory_ReadEntireFile_ResponseParams;
        break;
      case kDirectory_WriteFile_Name:
        if (message.isResponse())
          paramsClass = Directory_WriteFile_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var Directory = {
    name: 'filesystem::mojom::Directory',
    proxyClass: DirectoryProxy,
    stubClass: DirectoryStub,
    validateRequest: validateDirectoryRequest,
    validateResponse: validateDirectoryResponse,
  };
  DirectoryStub.prototype.validator = validateDirectoryRequest;
  DirectoryProxy.prototype.validator = validateDirectoryResponse;

  var exports = {};
  exports.FileOpenDetails = FileOpenDetails;
  exports.FileOpenResult = FileOpenResult;
  exports.Directory = Directory;

  return exports;
});
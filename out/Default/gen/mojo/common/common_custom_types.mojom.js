// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("mojo/common/common_custom_types.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {

  function FilePath(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FilePath.prototype.initDefaults_ = function() {
  };
  FilePath.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  FilePath.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, FilePath.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FilePath.encodedSize = codec.kStructHeaderSize + 0;

  FilePath.decode = function(decoder) {
    var packed;
    var val = new FilePath();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  FilePath.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FilePath.encodedSize);
    encoder.writeUint32(0);
  };
  function ListValue(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ListValue.prototype.initDefaults_ = function() {
  };
  ListValue.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ListValue.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ListValue.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ListValue.encodedSize = codec.kStructHeaderSize + 0;

  ListValue.decode = function(decoder) {
    var packed;
    var val = new ListValue();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  ListValue.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ListValue.encodedSize);
    encoder.writeUint32(0);
  };
  function DictionaryValue(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DictionaryValue.prototype.initDefaults_ = function() {
  };
  DictionaryValue.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  DictionaryValue.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, DictionaryValue.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DictionaryValue.encodedSize = codec.kStructHeaderSize + 0;

  DictionaryValue.decode = function(decoder) {
    var packed;
    var val = new DictionaryValue();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  DictionaryValue.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DictionaryValue.encodedSize);
    encoder.writeUint32(0);
  };
  function Time(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Time.prototype.initDefaults_ = function() {
  };
  Time.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Time.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Time.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Time.encodedSize = codec.kStructHeaderSize + 0;

  Time.decode = function(decoder) {
    var packed;
    var val = new Time();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Time.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Time.encodedSize);
    encoder.writeUint32(0);
  };
  function TimeDelta(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TimeDelta.prototype.initDefaults_ = function() {
  };
  TimeDelta.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  TimeDelta.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, TimeDelta.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  TimeDelta.encodedSize = codec.kStructHeaderSize + 0;

  TimeDelta.decode = function(decoder) {
    var packed;
    var val = new TimeDelta();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  TimeDelta.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TimeDelta.encodedSize);
    encoder.writeUint32(0);
  };
  function TimeTicks(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TimeTicks.prototype.initDefaults_ = function() {
  };
  TimeTicks.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  TimeTicks.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, TimeTicks.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  TimeTicks.encodedSize = codec.kStructHeaderSize + 0;

  TimeTicks.decode = function(decoder) {
    var packed;
    var val = new TimeTicks();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  TimeTicks.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TimeTicks.encodedSize);
    encoder.writeUint32(0);
  };
  function String16(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  String16.prototype.initDefaults_ = function() {
  };
  String16.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  String16.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, String16.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  String16.encodedSize = codec.kStructHeaderSize + 0;

  String16.decode = function(decoder) {
    var packed;
    var val = new String16();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  String16.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(String16.encodedSize);
    encoder.writeUint32(0);
  };
  function Version(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Version.prototype.initDefaults_ = function() {
    this.components = null;
  };
  Version.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Version.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Version.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Version.components
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 4, codec.Uint32, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Version.encodedSize = codec.kStructHeaderSize + 8;

  Version.decode = function(decoder) {
    var packed;
    var val = new Version();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.components = decoder.decodeArrayPointer(codec.Uint32);
    return val;
  };

  Version.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Version.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Uint32, val.components);
  };

  var exports = {};
  exports.FilePath = FilePath;
  exports.ListValue = ListValue;
  exports.DictionaryValue = DictionaryValue;
  exports.Time = Time;
  exports.TimeDelta = TimeDelta;
  exports.TimeTicks = TimeTicks;
  exports.String16 = String16;
  exports.Version = Version;

  return exports;
});
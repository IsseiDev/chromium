// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("cc/ipc/begin_frame_args.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "mojo/common/common_custom_types.mojom",
], function(bindings, codec, connection, core, validator, common_custom_types$) {
  var BeginFrameArgsType = {};
  BeginFrameArgsType.INVALID = 0;
  BeginFrameArgsType.NORMAL = BeginFrameArgsType.INVALID + 1;
  BeginFrameArgsType.MISSED = BeginFrameArgsType.NORMAL + 1;
  BeginFrameArgsType.BEGIN_FRAME_ARGS_TYPE_MAX = BeginFrameArgsType.MISSED + 1;

  function BeginFrameArgs(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BeginFrameArgs.prototype.initDefaults_ = function() {
    this.frame_time = null;
    this.deadline = null;
    this.interval = null;
    this.type = 0;
    this.on_critical_path = false;
  };
  BeginFrameArgs.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  BeginFrameArgs.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, BeginFrameArgs.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate BeginFrameArgs.frame_time
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, common_custom_types$.TimeTicks, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate BeginFrameArgs.deadline
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, common_custom_types$.TimeTicks, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate BeginFrameArgs.interval
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, common_custom_types$.TimeDelta, false);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  BeginFrameArgs.encodedSize = codec.kStructHeaderSize + 32;

  BeginFrameArgs.decode = function(decoder) {
    var packed;
    var val = new BeginFrameArgs();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.frame_time = decoder.decodeStructPointer(common_custom_types$.TimeTicks);
    val.deadline = decoder.decodeStructPointer(common_custom_types$.TimeTicks);
    val.interval = decoder.decodeStructPointer(common_custom_types$.TimeDelta);
    val.type = decoder.decodeStruct(codec.Int32);
    val.on_critical_path = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  BeginFrameArgs.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BeginFrameArgs.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(common_custom_types$.TimeTicks, val.frame_time);
    encoder.encodeStructPointer(common_custom_types$.TimeTicks, val.deadline);
    encoder.encodeStructPointer(common_custom_types$.TimeDelta, val.interval);
    encoder.encodeStruct(codec.Int32, val.type);
    encoder.encodeStruct(codec.Uint8, val.on_critical_path);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  var exports = {};
  exports.BeginFrameArgsType = BeginFrameArgsType;
  exports.BeginFrameArgs = BeginFrameArgs;

  return exports;
});
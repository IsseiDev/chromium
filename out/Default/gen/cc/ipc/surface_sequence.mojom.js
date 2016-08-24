// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("cc/ipc/surface_sequence.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {

  function SurfaceSequence(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SurfaceSequence.prototype.initDefaults_ = function() {
    this.client_id = 0;
    this.sequence = 0;
  };
  SurfaceSequence.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  SurfaceSequence.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, SurfaceSequence.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  SurfaceSequence.encodedSize = codec.kStructHeaderSize + 8;

  SurfaceSequence.decode = function(decoder) {
    var packed;
    var val = new SurfaceSequence();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.client_id = decoder.decodeStruct(codec.Uint32);
    val.sequence = decoder.decodeStruct(codec.Uint32);
    return val;
  };

  SurfaceSequence.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SurfaceSequence.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.client_id);
    encoder.encodeStruct(codec.Uint32, val.sequence);
  };

  var exports = {};
  exports.SurfaceSequence = SurfaceSequence;

  return exports;
});
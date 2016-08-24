// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("cc/ipc/render_pass_id.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {

  function RenderPassId(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RenderPassId.prototype.initDefaults_ = function() {
    this.layer_id = 0;
    this.index = 0;
  };
  RenderPassId.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  RenderPassId.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, RenderPassId.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  RenderPassId.encodedSize = codec.kStructHeaderSize + 8;

  RenderPassId.decode = function(decoder) {
    var packed;
    var val = new RenderPassId();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.layer_id = decoder.decodeStruct(codec.Int32);
    val.index = decoder.decodeStruct(codec.Uint32);
    return val;
  };

  RenderPassId.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RenderPassId.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.layer_id);
    encoder.encodeStruct(codec.Uint32, val.index);
  };

  var exports = {};
  exports.RenderPassId = RenderPassId;

  return exports;
});
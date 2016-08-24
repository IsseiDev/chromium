// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("gpu/ipc/common/sync_token.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {
  var CommandBufferNamespace = {};
  CommandBufferNamespace.INVALID = -1;
  CommandBufferNamespace.GPU_IO = CommandBufferNamespace.INVALID + 1;
  CommandBufferNamespace.IN_PROCESS = CommandBufferNamespace.GPU_IO + 1;
  CommandBufferNamespace.MOJO = CommandBufferNamespace.IN_PROCESS + 1;
  CommandBufferNamespace.MOJO_LOCAL = CommandBufferNamespace.MOJO + 1;
  CommandBufferNamespace.NUM_COMMAND_BUFFER_NAMESPACES = CommandBufferNamespace.MOJO_LOCAL + 1;

  function SyncToken(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SyncToken.prototype.initDefaults_ = function() {
    this.verified_flush = false;
    this.namespace_id = 0;
    this.extra_data_field = 0;
    this.command_buffer_id = 0;
    this.release_count = 0;
  };
  SyncToken.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  SyncToken.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, SyncToken.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;






    return validator.validationError.NONE;
  };

  SyncToken.encodedSize = codec.kStructHeaderSize + 32;

  SyncToken.decode = function(decoder) {
    var packed;
    var val = new SyncToken();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.verified_flush = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.namespace_id = decoder.decodeStruct(codec.Int32);
    val.extra_data_field = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.command_buffer_id = decoder.decodeStruct(codec.Uint64);
    val.release_count = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  SyncToken.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SyncToken.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint8, val.verified_flush);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.namespace_id);
    encoder.encodeStruct(codec.Int32, val.extra_data_field);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint64, val.command_buffer_id);
    encoder.encodeStruct(codec.Uint64, val.release_count);
  };

  var exports = {};
  exports.CommandBufferNamespace = CommandBufferNamespace;
  exports.SyncToken = SyncToken;

  return exports;
});
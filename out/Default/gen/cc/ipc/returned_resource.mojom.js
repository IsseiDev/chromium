// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("cc/ipc/returned_resource.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "gpu/ipc/common/sync_token.mojom",
], function(bindings, codec, connection, core, validator, sync_token$) {

  function ReturnedResource(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ReturnedResource.prototype.initDefaults_ = function() {
    this.id = 0;
    this.count = 0;
    this.sync_token = null;
    this.lost = false;
  };
  ReturnedResource.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ReturnedResource.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ReturnedResource.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



    
    // validate ReturnedResource.sync_token
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, sync_token$.SyncToken, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  ReturnedResource.encodedSize = codec.kStructHeaderSize + 24;

  ReturnedResource.decode = function(decoder) {
    var packed;
    var val = new ReturnedResource();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.Uint32);
    val.count = decoder.decodeStruct(codec.Int32);
    val.sync_token = decoder.decodeStructPointer(sync_token$.SyncToken);
    val.lost = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ReturnedResource.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ReturnedResource.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.id);
    encoder.encodeStruct(codec.Int32, val.count);
    encoder.encodeStructPointer(sync_token$.SyncToken, val.sync_token);
    encoder.encodeStruct(codec.Uint8, val.lost);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  var exports = {};
  exports.ReturnedResource = ReturnedResource;

  return exports;
});
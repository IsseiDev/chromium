// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("cc/ipc/transferable_resource.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "gpu/ipc/common/mailbox_holder.mojom",
    "ui/gfx/geometry/mojo/geometry.mojom",
], function(bindings, codec, connection, core, validator, mailbox_holder$, geometry$) {
  var ResourceFormat = {};
  ResourceFormat.RGBA_8888 = 0;
  ResourceFormat.RGBA_4444 = ResourceFormat.RGBA_8888 + 1;
  ResourceFormat.BGRA_8888 = ResourceFormat.RGBA_4444 + 1;
  ResourceFormat.ALPHA_8 = ResourceFormat.BGRA_8888 + 1;
  ResourceFormat.LUMINANCE_8 = ResourceFormat.ALPHA_8 + 1;
  ResourceFormat.RGB_565 = ResourceFormat.LUMINANCE_8 + 1;
  ResourceFormat.ETC1 = ResourceFormat.RGB_565 + 1;

  function TransferableResource(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TransferableResource.prototype.initDefaults_ = function() {
    this.id = 0;
    this.format = 0;
    this.filter = 0;
    this.read_lock_fences_enabled = false;
    this.is_software = false;
    this.is_overlay_candidate = false;
    this.size = null;
    this.mailbox_holder = null;
  };
  TransferableResource.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  TransferableResource.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, TransferableResource.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;







    
    // validate TransferableResource.size
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, geometry$.Size, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate TransferableResource.mailbox_holder
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, mailbox_holder$.MailboxHolder, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  TransferableResource.encodedSize = codec.kStructHeaderSize + 32;

  TransferableResource.decode = function(decoder) {
    var packed;
    var val = new TransferableResource();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.Uint32);
    val.format = decoder.decodeStruct(codec.Int32);
    val.filter = decoder.decodeStruct(codec.Uint32);
    packed = decoder.readUint8();
    val.read_lock_fences_enabled = (packed >> 0) & 1 ? true : false;
    val.is_software = (packed >> 1) & 1 ? true : false;
    val.is_overlay_candidate = (packed >> 2) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.size = decoder.decodeStructPointer(geometry$.Size);
    val.mailbox_holder = decoder.decodeStructPointer(mailbox_holder$.MailboxHolder);
    return val;
  };

  TransferableResource.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TransferableResource.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.id);
    encoder.encodeStruct(codec.Int32, val.format);
    encoder.encodeStruct(codec.Uint32, val.filter);
    packed = 0;
    packed |= (val.read_lock_fences_enabled & 1) << 0
    packed |= (val.is_software & 1) << 1
    packed |= (val.is_overlay_candidate & 1) << 2
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(geometry$.Size, val.size);
    encoder.encodeStructPointer(mailbox_holder$.MailboxHolder, val.mailbox_holder);
  };

  var exports = {};
  exports.ResourceFormat = ResourceFormat;
  exports.TransferableResource = TransferableResource;

  return exports;
});
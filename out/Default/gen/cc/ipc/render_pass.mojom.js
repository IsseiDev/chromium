// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("cc/ipc/render_pass.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "cc/ipc/render_pass_id.mojom",
    "cc/ipc/quads.mojom",
    "ui/gfx/geometry/mojo/geometry.mojom",
    "ui/gfx/mojo/transform.mojom",
], function(bindings, codec, connection, core, validator, render_pass_id$, quads$, geometry$, transform$) {

  function RenderPass(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RenderPass.prototype.initDefaults_ = function() {
    this.id = null;
    this.output_rect = null;
    this.damage_rect = null;
    this.transform_to_root_target = null;
    this.has_transparent_background = false;
    this.quad_list = null;
  };
  RenderPass.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  RenderPass.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, RenderPass.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate RenderPass.id
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, render_pass_id$.RenderPassId, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate RenderPass.output_rect
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, geometry$.Rect, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate RenderPass.damage_rect
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, geometry$.Rect, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate RenderPass.transform_to_root_target
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, transform$.Transform, false);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate RenderPass.quad_list
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 40, 8, new codec.PointerTo(quads$.DrawQuad), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RenderPass.encodedSize = codec.kStructHeaderSize + 48;

  RenderPass.decode = function(decoder) {
    var packed;
    var val = new RenderPass();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStructPointer(render_pass_id$.RenderPassId);
    val.output_rect = decoder.decodeStructPointer(geometry$.Rect);
    val.damage_rect = decoder.decodeStructPointer(geometry$.Rect);
    val.transform_to_root_target = decoder.decodeStructPointer(transform$.Transform);
    val.has_transparent_background = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.quad_list = decoder.decodeArrayPointer(new codec.PointerTo(quads$.DrawQuad));
    return val;
  };

  RenderPass.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RenderPass.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(render_pass_id$.RenderPassId, val.id);
    encoder.encodeStructPointer(geometry$.Rect, val.output_rect);
    encoder.encodeStructPointer(geometry$.Rect, val.damage_rect);
    encoder.encodeStructPointer(transform$.Transform, val.transform_to_root_target);
    encoder.encodeStruct(codec.Uint8, val.has_transparent_background);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(new codec.PointerTo(quads$.DrawQuad), val.quad_list);
  };

  var exports = {};
  exports.RenderPass = RenderPass;

  return exports;
});
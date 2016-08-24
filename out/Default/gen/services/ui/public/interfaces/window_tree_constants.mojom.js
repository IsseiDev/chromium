// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("services/ui/public/interfaces/window_tree_constants.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "ui/gfx/geometry/mojo/geometry.mojom",
], function(bindings, codec, connection, core, validator, geometry$) {
  var kEmbedFlagEmbedderInterceptsEvents = 0x01;
  var SurfaceType = {};
  SurfaceType.UNDERLAY = 0;
  SurfaceType.DEFAULT = SurfaceType.UNDERLAY + 1;
  var EventResult = {};
  EventResult.HANDLED = 0;
  EventResult.UNHANDLED = EventResult.HANDLED + 1;

  function WindowData(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowData.prototype.initDefaults_ = function() {
    this.parent_id = 0;
    this.window_id = 0;
    this.bounds = null;
    this.properties = null;
    this.visible = false;
  };
  WindowData.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WindowData.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WindowData.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



    
    // validate WindowData.bounds
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, geometry$.Rect, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WindowData.properties
    err = messageValidator.validateMapPointer(offset + codec.kStructHeaderSize + 16, false, codec.String, new codec.ArrayOf(codec.Uint8), false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  WindowData.encodedSize = codec.kStructHeaderSize + 32;

  WindowData.decode = function(decoder) {
    var packed;
    var val = new WindowData();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.parent_id = decoder.decodeStruct(codec.Uint32);
    val.window_id = decoder.decodeStruct(codec.Uint32);
    val.bounds = decoder.decodeStructPointer(geometry$.Rect);
    val.properties = decoder.decodeMapPointer(codec.String, new codec.ArrayOf(codec.Uint8));
    val.visible = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WindowData.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowData.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.parent_id);
    encoder.encodeStruct(codec.Uint32, val.window_id);
    encoder.encodeStructPointer(geometry$.Rect, val.bounds);
    encoder.encodeMapPointer(codec.String, new codec.ArrayOf(codec.Uint8), val.properties);
    encoder.encodeStruct(codec.Uint8, val.visible);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  var exports = {};
  exports.kEmbedFlagEmbedderInterceptsEvents = kEmbedFlagEmbedderInterceptsEvents;
  exports.SurfaceType = SurfaceType;
  exports.EventResult = EventResult;
  exports.WindowData = WindowData;

  return exports;
});
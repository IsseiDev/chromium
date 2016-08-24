// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("ui/gfx/mojo/selection_bound.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "ui/gfx/geometry/mojo/geometry.mojom",
], function(bindings, codec, connection, core, validator, geometry$) {
  var SelectionBoundType = {};
  SelectionBoundType.LEFT = 0;
  SelectionBoundType.RIGHT = SelectionBoundType.LEFT + 1;
  SelectionBoundType.CENTER = SelectionBoundType.RIGHT + 1;
  SelectionBoundType.EMPTY = SelectionBoundType.CENTER + 1;
  SelectionBoundType.LAST = SelectionBoundType.EMPTY;

  function SelectionBound(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SelectionBound.prototype.initDefaults_ = function() {
    this.type = 0;
    this.visible = false;
    this.edge_top = null;
    this.edge_bottom = null;
  };
  SelectionBound.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  SelectionBound.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, SelectionBound.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



    
    // validate SelectionBound.edge_top
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, geometry$.PointF, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate SelectionBound.edge_bottom
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, geometry$.PointF, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SelectionBound.encodedSize = codec.kStructHeaderSize + 24;

  SelectionBound.decode = function(decoder) {
    var packed;
    var val = new SelectionBound();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.type = decoder.decodeStruct(codec.Int32);
    val.visible = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.edge_top = decoder.decodeStructPointer(geometry$.PointF);
    val.edge_bottom = decoder.decodeStructPointer(geometry$.PointF);
    return val;
  };

  SelectionBound.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SelectionBound.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.type);
    encoder.encodeStruct(codec.Uint8, val.visible);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(geometry$.PointF, val.edge_top);
    encoder.encodeStructPointer(geometry$.PointF, val.edge_bottom);
  };

  var exports = {};
  exports.SelectionBoundType = SelectionBoundType;
  exports.SelectionBound = SelectionBound;

  return exports;
});
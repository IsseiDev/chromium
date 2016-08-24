// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("skia/public/interfaces/bitmap.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {
  var ColorType = {};
  ColorType.UNKNOWN = 0;
  ColorType.ALPHA_8 = ColorType.UNKNOWN + 1;
  ColorType.RGB_565 = ColorType.ALPHA_8 + 1;
  ColorType.ARGB_4444 = ColorType.RGB_565 + 1;
  ColorType.RGBA_8888 = ColorType.ARGB_4444 + 1;
  ColorType.BGRA_8888 = ColorType.RGBA_8888 + 1;
  ColorType.INDEX_8 = ColorType.BGRA_8888 + 1;
  ColorType.GRAY_8 = ColorType.INDEX_8 + 1;
  var AlphaType = {};
  AlphaType.UNKNOWN = 0;
  AlphaType.ALPHA_TYPE_OPAQUE = AlphaType.UNKNOWN + 1;
  AlphaType.PREMUL = AlphaType.ALPHA_TYPE_OPAQUE + 1;
  AlphaType.UNPREMUL = AlphaType.PREMUL + 1;
  var ColorProfileType = {};
  ColorProfileType.LINEAR = 0;
  ColorProfileType.SRGB = ColorProfileType.LINEAR + 1;

  function Bitmap(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Bitmap.prototype.initDefaults_ = function() {
    this.color_type = 0;
    this.alpha_type = 0;
    this.profile_type = 0;
    this.width = 0;
    this.height = 0;
    this.pixel_data = null;
  };
  Bitmap.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Bitmap.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Bitmap.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;






    
    // validate Bitmap.pixel_data
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 24, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Bitmap.encodedSize = codec.kStructHeaderSize + 32;

  Bitmap.decode = function(decoder) {
    var packed;
    var val = new Bitmap();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.color_type = decoder.decodeStruct(codec.Int32);
    val.alpha_type = decoder.decodeStruct(codec.Int32);
    val.profile_type = decoder.decodeStruct(codec.Int32);
    val.width = decoder.decodeStruct(codec.Uint32);
    val.height = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.pixel_data = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  Bitmap.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Bitmap.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.color_type);
    encoder.encodeStruct(codec.Int32, val.alpha_type);
    encoder.encodeStruct(codec.Int32, val.profile_type);
    encoder.encodeStruct(codec.Uint32, val.width);
    encoder.encodeStruct(codec.Uint32, val.height);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(codec.Uint8, val.pixel_data);
  };

  var exports = {};
  exports.ColorType = ColorType;
  exports.AlphaType = AlphaType;
  exports.ColorProfileType = ColorProfileType;
  exports.Bitmap = Bitmap;

  return exports;
});
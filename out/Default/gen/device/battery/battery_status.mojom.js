// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("device/battery/battery_status.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {

  function BatteryStatus(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BatteryStatus.prototype.initDefaults_ = function() {
    this.charging = true;
    this.charging_time = 0.0;
    this.discharging_time = Infinity;
    this.level = 1.0;
  };
  BatteryStatus.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  BatteryStatus.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, BatteryStatus.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;





    return validator.validationError.NONE;
  };

  BatteryStatus.encodedSize = codec.kStructHeaderSize + 32;

  BatteryStatus.decode = function(decoder) {
    var packed;
    var val = new BatteryStatus();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.charging = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.charging_time = decoder.decodeStruct(codec.Double);
    val.discharging_time = decoder.decodeStruct(codec.Double);
    val.level = decoder.decodeStruct(codec.Double);
    return val;
  };

  BatteryStatus.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BatteryStatus.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint8, val.charging);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Double, val.charging_time);
    encoder.encodeStruct(codec.Double, val.discharging_time);
    encoder.encodeStruct(codec.Double, val.level);
  };

  var exports = {};
  exports.BatteryStatus = BatteryStatus;

  return exports;
});
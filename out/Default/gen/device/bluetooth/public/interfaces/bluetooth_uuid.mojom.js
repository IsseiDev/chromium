// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("device/bluetooth/public/interfaces/bluetooth_uuid.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {

  function BluetoothUUID(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BluetoothUUID.prototype.initDefaults_ = function() {
    this.uuid = null;
  };
  BluetoothUUID.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  BluetoothUUID.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, BluetoothUUID.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate BluetoothUUID.uuid
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  BluetoothUUID.encodedSize = codec.kStructHeaderSize + 8;

  BluetoothUUID.decode = function(decoder) {
    var packed;
    var val = new BluetoothUUID();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.uuid = decoder.decodeStruct(codec.String);
    return val;
  };

  BluetoothUUID.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BluetoothUUID.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.uuid);
  };

  var exports = {};
  exports.BluetoothUUID = BluetoothUUID;

  return exports;
});
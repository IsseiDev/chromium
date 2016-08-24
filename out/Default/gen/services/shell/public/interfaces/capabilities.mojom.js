// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("services/shell/public/interfaces/capabilities.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {

  function CapabilityRequest(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CapabilityRequest.prototype.initDefaults_ = function() {
    this.classes = null;
    this.interfaces = null;
  };
  CapabilityRequest.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  CapabilityRequest.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, CapabilityRequest.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate CapabilityRequest.classes
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, codec.String, false, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate CapabilityRequest.interfaces
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, codec.String, false, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CapabilityRequest.encodedSize = codec.kStructHeaderSize + 16;

  CapabilityRequest.decode = function(decoder) {
    var packed;
    var val = new CapabilityRequest();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.classes = decoder.decodeArrayPointer(codec.String);
    val.interfaces = decoder.decodeArrayPointer(codec.String);
    return val;
  };

  CapabilityRequest.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CapabilityRequest.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.String, val.classes);
    encoder.encodeArrayPointer(codec.String, val.interfaces);
  };
  function CapabilitySpec(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CapabilitySpec.prototype.initDefaults_ = function() {
    this.provided = null;
    this.required = null;
  };
  CapabilitySpec.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  CapabilitySpec.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, CapabilitySpec.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate CapabilitySpec.provided
    err = messageValidator.validateMapPointer(offset + codec.kStructHeaderSize + 0, false, codec.String, new codec.ArrayOf(codec.String), false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate CapabilitySpec.required
    err = messageValidator.validateMapPointer(offset + codec.kStructHeaderSize + 8, false, codec.String, new codec.PointerTo(CapabilityRequest), false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CapabilitySpec.encodedSize = codec.kStructHeaderSize + 16;

  CapabilitySpec.decode = function(decoder) {
    var packed;
    var val = new CapabilitySpec();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.provided = decoder.decodeMapPointer(codec.String, new codec.ArrayOf(codec.String));
    val.required = decoder.decodeMapPointer(codec.String, new codec.PointerTo(CapabilityRequest));
    return val;
  };

  CapabilitySpec.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CapabilitySpec.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeMapPointer(codec.String, new codec.ArrayOf(codec.String), val.provided);
    encoder.encodeMapPointer(codec.String, new codec.PointerTo(CapabilityRequest), val.required);
  };

  var exports = {};
  exports.CapabilityRequest = CapabilityRequest;
  exports.CapabilitySpec = CapabilitySpec;

  return exports;
});
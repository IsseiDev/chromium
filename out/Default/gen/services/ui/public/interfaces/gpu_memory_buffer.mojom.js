// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("services/ui/public/interfaces/gpu_memory_buffer.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {
  var GpuMemoryBufferType = {};
  GpuMemoryBufferType.EMPTY = 0;
  GpuMemoryBufferType.SHARED_MEMORY = GpuMemoryBufferType.EMPTY + 1;
  GpuMemoryBufferType.IO_SURFACE = GpuMemoryBufferType.SHARED_MEMORY + 1;
  GpuMemoryBufferType.SURFACE_TEXTURE = GpuMemoryBufferType.IO_SURFACE + 1;
  GpuMemoryBufferType.OZONE_NATIVE_PIXMAP = GpuMemoryBufferType.SURFACE_TEXTURE + 1;
  GpuMemoryBufferType.LAST = GpuMemoryBufferType.OZONE_NATIVE_PIXMAP;

  function GpuMemoryBufferId(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GpuMemoryBufferId.prototype.initDefaults_ = function() {
    this.id = 0;
  };
  GpuMemoryBufferId.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  GpuMemoryBufferId.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, GpuMemoryBufferId.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  GpuMemoryBufferId.encodedSize = codec.kStructHeaderSize + 8;

  GpuMemoryBufferId.decode = function(decoder) {
    var packed;
    var val = new GpuMemoryBufferId();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  GpuMemoryBufferId.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GpuMemoryBufferId.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.id);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function NativePixmapHandle(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NativePixmapHandle.prototype.initDefaults_ = function() {
    this.fd = null;
    this.stride = 0;
  };
  NativePixmapHandle.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  NativePixmapHandle.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, NativePixmapHandle.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate NativePixmapHandle.fd
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  NativePixmapHandle.encodedSize = codec.kStructHeaderSize + 8;

  NativePixmapHandle.decode = function(decoder) {
    var packed;
    var val = new NativePixmapHandle();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.fd = decoder.decodeStruct(codec.Handle);
    val.stride = decoder.decodeStruct(codec.Int32);
    return val;
  };

  NativePixmapHandle.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NativePixmapHandle.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.fd);
    encoder.encodeStruct(codec.Int32, val.stride);
  };
  function GpuMemoryBufferHandle(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GpuMemoryBufferHandle.prototype.initDefaults_ = function() {
    this.type = 0;
    this.buffer_handle = null;
    this.id = null;
    this.offset = 0;
    this.stride = 0;
    this.native_pixmap_handle = null;
  };
  GpuMemoryBufferHandle.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  GpuMemoryBufferHandle.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, GpuMemoryBufferHandle.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate GpuMemoryBufferHandle.buffer_handle
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 4, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate GpuMemoryBufferHandle.id
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, GpuMemoryBufferId, false);
    if (err !== validator.validationError.NONE)
        return err;



    
    // validate GpuMemoryBufferHandle.native_pixmap_handle
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, NativePixmapHandle, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  GpuMemoryBufferHandle.encodedSize = codec.kStructHeaderSize + 32;

  GpuMemoryBufferHandle.decode = function(decoder) {
    var packed;
    var val = new GpuMemoryBufferHandle();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.type = decoder.decodeStruct(codec.Int32);
    val.buffer_handle = decoder.decodeStruct(codec.Handle);
    val.id = decoder.decodeStructPointer(GpuMemoryBufferId);
    val.offset = decoder.decodeStruct(codec.Uint32);
    val.stride = decoder.decodeStruct(codec.Int32);
    val.native_pixmap_handle = decoder.decodeStructPointer(NativePixmapHandle);
    return val;
  };

  GpuMemoryBufferHandle.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GpuMemoryBufferHandle.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.type);
    encoder.encodeStruct(codec.Handle, val.buffer_handle);
    encoder.encodeStructPointer(GpuMemoryBufferId, val.id);
    encoder.encodeStruct(codec.Uint32, val.offset);
    encoder.encodeStruct(codec.Int32, val.stride);
    encoder.encodeStructPointer(NativePixmapHandle, val.native_pixmap_handle);
  };

  var exports = {};
  exports.GpuMemoryBufferType = GpuMemoryBufferType;
  exports.GpuMemoryBufferId = GpuMemoryBufferId;
  exports.NativePixmapHandle = NativePixmapHandle;
  exports.GpuMemoryBufferHandle = GpuMemoryBufferHandle;

  return exports;
});
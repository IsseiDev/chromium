// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("media/mojo/interfaces/image_capture.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {
  var FocusMode = {};
  FocusMode.UNAVAILABLE = 0;
  FocusMode.MANUAL = FocusMode.UNAVAILABLE + 1;
  FocusMode.SINGLE_SHOT = FocusMode.MANUAL + 1;
  FocusMode.CONTINUOUS = FocusMode.SINGLE_SHOT + 1;

  function Range(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Range.prototype.initDefaults_ = function() {
    this.max = 0;
    this.min = 0;
    this.current = 0;
  };
  Range.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Range.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Range.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;




    return validator.validationError.NONE;
  };

  Range.encodedSize = codec.kStructHeaderSize + 16;

  Range.decode = function(decoder) {
    var packed;
    var val = new Range();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.max = decoder.decodeStruct(codec.Uint32);
    val.min = decoder.decodeStruct(codec.Uint32);
    val.current = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Range.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Range.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.max);
    encoder.encodeStruct(codec.Uint32, val.min);
    encoder.encodeStruct(codec.Uint32, val.current);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PhotoCapabilities(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PhotoCapabilities.prototype.initDefaults_ = function() {
    this.iso = null;
    this.height = null;
    this.width = null;
    this.zoom = null;
    this.focus_mode = 0;
  };
  PhotoCapabilities.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PhotoCapabilities.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PhotoCapabilities.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PhotoCapabilities.iso
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, Range, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PhotoCapabilities.height
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, Range, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PhotoCapabilities.width
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, Range, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PhotoCapabilities.zoom
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, Range, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  PhotoCapabilities.encodedSize = codec.kStructHeaderSize + 40;

  PhotoCapabilities.decode = function(decoder) {
    var packed;
    var val = new PhotoCapabilities();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.iso = decoder.decodeStructPointer(Range);
    val.height = decoder.decodeStructPointer(Range);
    val.width = decoder.decodeStructPointer(Range);
    val.zoom = decoder.decodeStructPointer(Range);
    val.focus_mode = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PhotoCapabilities.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PhotoCapabilities.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(Range, val.iso);
    encoder.encodeStructPointer(Range, val.height);
    encoder.encodeStructPointer(Range, val.width);
    encoder.encodeStructPointer(Range, val.zoom);
    encoder.encodeStruct(codec.Int32, val.focus_mode);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Point2D(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Point2D.prototype.initDefaults_ = function() {
    this.x = 0;
    this.y = 0;
  };
  Point2D.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Point2D.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Point2D.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  Point2D.encodedSize = codec.kStructHeaderSize + 8;

  Point2D.decode = function(decoder) {
    var packed;
    var val = new Point2D();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.x = decoder.decodeStruct(codec.Float);
    val.y = decoder.decodeStruct(codec.Float);
    return val;
  };

  Point2D.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Point2D.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Float, val.x);
    encoder.encodeStruct(codec.Float, val.y);
  };
  function PhotoSettings(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PhotoSettings.prototype.initDefaults_ = function() {
    this.has_zoom = false;
    this.has_width = false;
    this.has_height = false;
    this.has_focus_mode = false;
    this.zoom = 0;
    this.width = 0;
    this.height = 0;
    this.focus_mode = 0;
    this.points_of_interest = null;
  };
  PhotoSettings.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PhotoSettings.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PhotoSettings.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;









    
    // validate PhotoSettings.points_of_interest
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 24, 8, new codec.PointerTo(Point2D), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PhotoSettings.encodedSize = codec.kStructHeaderSize + 32;

  PhotoSettings.decode = function(decoder) {
    var packed;
    var val = new PhotoSettings();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.has_zoom = (packed >> 0) & 1 ? true : false;
    val.has_width = (packed >> 1) & 1 ? true : false;
    val.has_height = (packed >> 2) & 1 ? true : false;
    val.has_focus_mode = (packed >> 3) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.zoom = decoder.decodeStruct(codec.Uint32);
    val.width = decoder.decodeStruct(codec.Uint32);
    val.height = decoder.decodeStruct(codec.Uint32);
    val.focus_mode = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.points_of_interest = decoder.decodeArrayPointer(new codec.PointerTo(Point2D));
    return val;
  };

  PhotoSettings.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PhotoSettings.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.has_zoom & 1) << 0
    packed |= (val.has_width & 1) << 1
    packed |= (val.has_height & 1) << 2
    packed |= (val.has_focus_mode & 1) << 3
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint32, val.zoom);
    encoder.encodeStruct(codec.Uint32, val.width);
    encoder.encodeStruct(codec.Uint32, val.height);
    encoder.encodeStruct(codec.Int32, val.focus_mode);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(new codec.PointerTo(Point2D), val.points_of_interest);
  };
  function Blob(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Blob.prototype.initDefaults_ = function() {
    this.mime_type = null;
    this.data = null;
  };
  Blob.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Blob.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Blob.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Blob.mime_type
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Blob.data
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Blob.encodedSize = codec.kStructHeaderSize + 16;

  Blob.decode = function(decoder) {
    var packed;
    var val = new Blob();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.mime_type = decoder.decodeStruct(codec.String);
    val.data = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  Blob.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Blob.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.mime_type);
    encoder.encodeArrayPointer(codec.Uint8, val.data);
  };
  function ImageCapture_GetCapabilities_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ImageCapture_GetCapabilities_Params.prototype.initDefaults_ = function() {
    this.source_id = null;
  };
  ImageCapture_GetCapabilities_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ImageCapture_GetCapabilities_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ImageCapture_GetCapabilities_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ImageCapture_GetCapabilities_Params.source_id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ImageCapture_GetCapabilities_Params.encodedSize = codec.kStructHeaderSize + 8;

  ImageCapture_GetCapabilities_Params.decode = function(decoder) {
    var packed;
    var val = new ImageCapture_GetCapabilities_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.source_id = decoder.decodeStruct(codec.String);
    return val;
  };

  ImageCapture_GetCapabilities_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ImageCapture_GetCapabilities_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.source_id);
  };
  function ImageCapture_GetCapabilities_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ImageCapture_GetCapabilities_ResponseParams.prototype.initDefaults_ = function() {
    this.capabilities = null;
  };
  ImageCapture_GetCapabilities_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ImageCapture_GetCapabilities_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ImageCapture_GetCapabilities_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ImageCapture_GetCapabilities_ResponseParams.capabilities
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, PhotoCapabilities, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ImageCapture_GetCapabilities_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  ImageCapture_GetCapabilities_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ImageCapture_GetCapabilities_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.capabilities = decoder.decodeStructPointer(PhotoCapabilities);
    return val;
  };

  ImageCapture_GetCapabilities_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ImageCapture_GetCapabilities_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(PhotoCapabilities, val.capabilities);
  };
  function ImageCapture_SetOptions_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ImageCapture_SetOptions_Params.prototype.initDefaults_ = function() {
    this.source_id = null;
    this.settings = null;
  };
  ImageCapture_SetOptions_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ImageCapture_SetOptions_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ImageCapture_SetOptions_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ImageCapture_SetOptions_Params.source_id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ImageCapture_SetOptions_Params.settings
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, PhotoSettings, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ImageCapture_SetOptions_Params.encodedSize = codec.kStructHeaderSize + 16;

  ImageCapture_SetOptions_Params.decode = function(decoder) {
    var packed;
    var val = new ImageCapture_SetOptions_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.source_id = decoder.decodeStruct(codec.String);
    val.settings = decoder.decodeStructPointer(PhotoSettings);
    return val;
  };

  ImageCapture_SetOptions_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ImageCapture_SetOptions_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.source_id);
    encoder.encodeStructPointer(PhotoSettings, val.settings);
  };
  function ImageCapture_SetOptions_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ImageCapture_SetOptions_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  ImageCapture_SetOptions_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ImageCapture_SetOptions_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ImageCapture_SetOptions_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  ImageCapture_SetOptions_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  ImageCapture_SetOptions_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ImageCapture_SetOptions_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.success = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ImageCapture_SetOptions_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ImageCapture_SetOptions_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint8, val.success);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ImageCapture_TakePhoto_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ImageCapture_TakePhoto_Params.prototype.initDefaults_ = function() {
    this.source_id = null;
  };
  ImageCapture_TakePhoto_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ImageCapture_TakePhoto_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ImageCapture_TakePhoto_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ImageCapture_TakePhoto_Params.source_id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ImageCapture_TakePhoto_Params.encodedSize = codec.kStructHeaderSize + 8;

  ImageCapture_TakePhoto_Params.decode = function(decoder) {
    var packed;
    var val = new ImageCapture_TakePhoto_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.source_id = decoder.decodeStruct(codec.String);
    return val;
  };

  ImageCapture_TakePhoto_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ImageCapture_TakePhoto_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.source_id);
  };
  function ImageCapture_TakePhoto_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ImageCapture_TakePhoto_ResponseParams.prototype.initDefaults_ = function() {
    this.blob = null;
  };
  ImageCapture_TakePhoto_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ImageCapture_TakePhoto_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ImageCapture_TakePhoto_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ImageCapture_TakePhoto_ResponseParams.blob
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, Blob, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ImageCapture_TakePhoto_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  ImageCapture_TakePhoto_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ImageCapture_TakePhoto_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.blob = decoder.decodeStructPointer(Blob);
    return val;
  };

  ImageCapture_TakePhoto_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ImageCapture_TakePhoto_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(Blob, val.blob);
  };
  var kImageCapture_GetCapabilities_Name = 0;
  var kImageCapture_SetOptions_Name = 1;
  var kImageCapture_TakePhoto_Name = 2;

  function ImageCaptureProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  ImageCaptureProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  ImageCaptureProxy.prototype.getCapabilities = function(source_id) {
    var params = new ImageCapture_GetCapabilities_Params();
    params.source_id = source_id;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kImageCapture_GetCapabilities_Name,
          codec.align(ImageCapture_GetCapabilities_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ImageCapture_GetCapabilities_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ImageCapture_GetCapabilities_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ImageCaptureProxy.prototype.setOptions = function(source_id, settings) {
    var params = new ImageCapture_SetOptions_Params();
    params.source_id = source_id;
    params.settings = settings;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kImageCapture_SetOptions_Name,
          codec.align(ImageCapture_SetOptions_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ImageCapture_SetOptions_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ImageCapture_SetOptions_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ImageCaptureProxy.prototype.takePhoto = function(source_id) {
    var params = new ImageCapture_TakePhoto_Params();
    params.source_id = source_id;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kImageCapture_TakePhoto_Name,
          codec.align(ImageCapture_TakePhoto_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ImageCapture_TakePhoto_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ImageCapture_TakePhoto_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function ImageCaptureStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  ImageCaptureStub.prototype = Object.create(bindings.StubBase.prototype);
  ImageCaptureStub.prototype.getCapabilities = function(source_id) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.getCapabilities && bindings.StubBindings(this).delegate.getCapabilities(source_id);
  }
  ImageCaptureStub.prototype.setOptions = function(source_id, settings) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.setOptions && bindings.StubBindings(this).delegate.setOptions(source_id, settings);
  }
  ImageCaptureStub.prototype.takePhoto = function(source_id) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.takePhoto && bindings.StubBindings(this).delegate.takePhoto(source_id);
  }

  ImageCaptureStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  ImageCaptureStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kImageCapture_GetCapabilities_Name:
      var params = reader.decodeStruct(ImageCapture_GetCapabilities_Params);
      return this.getCapabilities(params.source_id).then(function(response) {
        var responseParams =
            new ImageCapture_GetCapabilities_ResponseParams();
        responseParams.capabilities = response.capabilities;
        var builder = new codec.MessageWithRequestIDBuilder(
            kImageCapture_GetCapabilities_Name,
            codec.align(ImageCapture_GetCapabilities_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ImageCapture_GetCapabilities_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kImageCapture_SetOptions_Name:
      var params = reader.decodeStruct(ImageCapture_SetOptions_Params);
      return this.setOptions(params.source_id, params.settings).then(function(response) {
        var responseParams =
            new ImageCapture_SetOptions_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageWithRequestIDBuilder(
            kImageCapture_SetOptions_Name,
            codec.align(ImageCapture_SetOptions_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ImageCapture_SetOptions_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kImageCapture_TakePhoto_Name:
      var params = reader.decodeStruct(ImageCapture_TakePhoto_Params);
      return this.takePhoto(params.source_id).then(function(response) {
        var responseParams =
            new ImageCapture_TakePhoto_ResponseParams();
        responseParams.blob = response.blob;
        var builder = new codec.MessageWithRequestIDBuilder(
            kImageCapture_TakePhoto_Name,
            codec.align(ImageCapture_TakePhoto_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ImageCapture_TakePhoto_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateImageCaptureRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kImageCapture_GetCapabilities_Name:
        if (message.expectsResponse())
          paramsClass = ImageCapture_GetCapabilities_Params;
      break;
      case kImageCapture_SetOptions_Name:
        if (message.expectsResponse())
          paramsClass = ImageCapture_SetOptions_Params;
      break;
      case kImageCapture_TakePhoto_Name:
        if (message.expectsResponse())
          paramsClass = ImageCapture_TakePhoto_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateImageCaptureResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kImageCapture_GetCapabilities_Name:
        if (message.isResponse())
          paramsClass = ImageCapture_GetCapabilities_ResponseParams;
        break;
      case kImageCapture_SetOptions_Name:
        if (message.isResponse())
          paramsClass = ImageCapture_SetOptions_ResponseParams;
        break;
      case kImageCapture_TakePhoto_Name:
        if (message.isResponse())
          paramsClass = ImageCapture_TakePhoto_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var ImageCapture = {
    name: 'media::mojom::ImageCapture',
    proxyClass: ImageCaptureProxy,
    stubClass: ImageCaptureStub,
    validateRequest: validateImageCaptureRequest,
    validateResponse: validateImageCaptureResponse,
  };
  ImageCaptureStub.prototype.validator = validateImageCaptureRequest;
  ImageCaptureProxy.prototype.validator = validateImageCaptureResponse;

  var exports = {};
  exports.FocusMode = FocusMode;
  exports.Range = Range;
  exports.PhotoCapabilities = PhotoCapabilities;
  exports.Point2D = Point2D;
  exports.PhotoSettings = PhotoSettings;
  exports.Blob = Blob;
  exports.ImageCapture = ImageCapture;

  return exports;
});
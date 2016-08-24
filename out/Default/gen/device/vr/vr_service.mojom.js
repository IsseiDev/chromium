// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("device/vr/vr_service.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {

  function VRFieldOfView(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VRFieldOfView.prototype.initDefaults_ = function() {
    this.upDegrees = 0;
    this.downDegrees = 0;
    this.leftDegrees = 0;
    this.rightDegrees = 0;
  };
  VRFieldOfView.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  VRFieldOfView.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, VRFieldOfView.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;





    return validator.validationError.NONE;
  };

  VRFieldOfView.encodedSize = codec.kStructHeaderSize + 16;

  VRFieldOfView.decode = function(decoder) {
    var packed;
    var val = new VRFieldOfView();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.upDegrees = decoder.decodeStruct(codec.Float);
    val.downDegrees = decoder.decodeStruct(codec.Float);
    val.leftDegrees = decoder.decodeStruct(codec.Float);
    val.rightDegrees = decoder.decodeStruct(codec.Float);
    return val;
  };

  VRFieldOfView.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VRFieldOfView.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Float, val.upDegrees);
    encoder.encodeStruct(codec.Float, val.downDegrees);
    encoder.encodeStruct(codec.Float, val.leftDegrees);
    encoder.encodeStruct(codec.Float, val.rightDegrees);
  };
  function VRPose(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VRPose.prototype.initDefaults_ = function() {
    this.timestamp = 0;
    this.orientation = null;
    this.position = null;
    this.angularVelocity = null;
    this.linearVelocity = null;
    this.angularAcceleration = null;
    this.linearAcceleration = null;
  };
  VRPose.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  VRPose.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, VRPose.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate VRPose.orientation
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 4, codec.Float, true, [4], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate VRPose.position
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 4, codec.Float, true, [3], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate VRPose.angularVelocity
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 24, 4, codec.Float, true, [3], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate VRPose.linearVelocity
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 32, 4, codec.Float, true, [3], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate VRPose.angularAcceleration
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 40, 4, codec.Float, true, [3], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate VRPose.linearAcceleration
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 48, 4, codec.Float, true, [3], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VRPose.encodedSize = codec.kStructHeaderSize + 56;

  VRPose.decode = function(decoder) {
    var packed;
    var val = new VRPose();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.timestamp = decoder.decodeStruct(codec.Double);
    val.orientation = decoder.decodeArrayPointer(codec.Float);
    val.position = decoder.decodeArrayPointer(codec.Float);
    val.angularVelocity = decoder.decodeArrayPointer(codec.Float);
    val.linearVelocity = decoder.decodeArrayPointer(codec.Float);
    val.angularAcceleration = decoder.decodeArrayPointer(codec.Float);
    val.linearAcceleration = decoder.decodeArrayPointer(codec.Float);
    return val;
  };

  VRPose.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VRPose.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Double, val.timestamp);
    encoder.encodeArrayPointer(codec.Float, val.orientation);
    encoder.encodeArrayPointer(codec.Float, val.position);
    encoder.encodeArrayPointer(codec.Float, val.angularVelocity);
    encoder.encodeArrayPointer(codec.Float, val.linearVelocity);
    encoder.encodeArrayPointer(codec.Float, val.angularAcceleration);
    encoder.encodeArrayPointer(codec.Float, val.linearAcceleration);
  };
  function VRDisplayCapabilities(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VRDisplayCapabilities.prototype.initDefaults_ = function() {
    this.hasOrientation = false;
    this.hasPosition = false;
    this.hasExternalDisplay = false;
    this.canPresent = false;
  };
  VRDisplayCapabilities.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  VRDisplayCapabilities.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, VRDisplayCapabilities.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;





    return validator.validationError.NONE;
  };

  VRDisplayCapabilities.encodedSize = codec.kStructHeaderSize + 8;

  VRDisplayCapabilities.decode = function(decoder) {
    var packed;
    var val = new VRDisplayCapabilities();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.hasOrientation = (packed >> 0) & 1 ? true : false;
    val.hasPosition = (packed >> 1) & 1 ? true : false;
    val.hasExternalDisplay = (packed >> 2) & 1 ? true : false;
    val.canPresent = (packed >> 3) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  VRDisplayCapabilities.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VRDisplayCapabilities.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.hasOrientation & 1) << 0
    packed |= (val.hasPosition & 1) << 1
    packed |= (val.hasExternalDisplay & 1) << 2
    packed |= (val.canPresent & 1) << 3
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function VREyeParameters(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VREyeParameters.prototype.initDefaults_ = function() {
    this.fieldOfView = null;
    this.offset = null;
    this.renderWidth = 0;
    this.renderHeight = 0;
  };
  VREyeParameters.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  VREyeParameters.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, VREyeParameters.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate VREyeParameters.fieldOfView
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, VRFieldOfView, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate VREyeParameters.offset
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 4, codec.Float, false, [3], 0);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  VREyeParameters.encodedSize = codec.kStructHeaderSize + 24;

  VREyeParameters.decode = function(decoder) {
    var packed;
    var val = new VREyeParameters();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.fieldOfView = decoder.decodeStructPointer(VRFieldOfView);
    val.offset = decoder.decodeArrayPointer(codec.Float);
    val.renderWidth = decoder.decodeStruct(codec.Uint32);
    val.renderHeight = decoder.decodeStruct(codec.Uint32);
    return val;
  };

  VREyeParameters.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VREyeParameters.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(VRFieldOfView, val.fieldOfView);
    encoder.encodeArrayPointer(codec.Float, val.offset);
    encoder.encodeStruct(codec.Uint32, val.renderWidth);
    encoder.encodeStruct(codec.Uint32, val.renderHeight);
  };
  function VRStageParameters(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VRStageParameters.prototype.initDefaults_ = function() {
    this.standingTransform = null;
    this.sizeX = 0;
    this.sizeZ = 0;
  };
  VRStageParameters.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  VRStageParameters.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, VRStageParameters.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate VRStageParameters.standingTransform
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 4, codec.Float, false, [16], 0);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  VRStageParameters.encodedSize = codec.kStructHeaderSize + 16;

  VRStageParameters.decode = function(decoder) {
    var packed;
    var val = new VRStageParameters();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.standingTransform = decoder.decodeArrayPointer(codec.Float);
    val.sizeX = decoder.decodeStruct(codec.Float);
    val.sizeZ = decoder.decodeStruct(codec.Float);
    return val;
  };

  VRStageParameters.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VRStageParameters.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Float, val.standingTransform);
    encoder.encodeStruct(codec.Float, val.sizeX);
    encoder.encodeStruct(codec.Float, val.sizeZ);
  };
  function VRDisplay(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VRDisplay.prototype.initDefaults_ = function() {
    this.index = 0;
    this.displayName = null;
    this.capabilities = null;
    this.stageParameters = null;
    this.leftEye = null;
    this.rightEye = null;
  };
  VRDisplay.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  VRDisplay.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, VRDisplay.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate VRDisplay.displayName
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate VRDisplay.capabilities
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, VRDisplayCapabilities, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate VRDisplay.stageParameters
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, VRStageParameters, true);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate VRDisplay.leftEye
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, VREyeParameters, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate VRDisplay.rightEye
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 40, VREyeParameters, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VRDisplay.encodedSize = codec.kStructHeaderSize + 48;

  VRDisplay.decode = function(decoder) {
    var packed;
    var val = new VRDisplay();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.index = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.displayName = decoder.decodeStruct(codec.String);
    val.capabilities = decoder.decodeStructPointer(VRDisplayCapabilities);
    val.stageParameters = decoder.decodeStructPointer(VRStageParameters);
    val.leftEye = decoder.decodeStructPointer(VREyeParameters);
    val.rightEye = decoder.decodeStructPointer(VREyeParameters);
    return val;
  };

  VRDisplay.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VRDisplay.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.index);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.displayName);
    encoder.encodeStructPointer(VRDisplayCapabilities, val.capabilities);
    encoder.encodeStructPointer(VRStageParameters, val.stageParameters);
    encoder.encodeStructPointer(VREyeParameters, val.leftEye);
    encoder.encodeStructPointer(VREyeParameters, val.rightEye);
  };
  function VRService_SetClient_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VRService_SetClient_Params.prototype.initDefaults_ = function() {
    this.client = null;
  };
  VRService_SetClient_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  VRService_SetClient_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, VRService_SetClient_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate VRService_SetClient_Params.client
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VRService_SetClient_Params.encodedSize = codec.kStructHeaderSize + 8;

  VRService_SetClient_Params.decode = function(decoder) {
    var packed;
    var val = new VRService_SetClient_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.client = decoder.decodeStruct(codec.Interface);
    return val;
  };

  VRService_SetClient_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VRService_SetClient_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Interface, val.client);
  };
  function VRService_GetDisplays_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VRService_GetDisplays_Params.prototype.initDefaults_ = function() {
  };
  VRService_GetDisplays_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  VRService_GetDisplays_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, VRService_GetDisplays_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VRService_GetDisplays_Params.encodedSize = codec.kStructHeaderSize + 0;

  VRService_GetDisplays_Params.decode = function(decoder) {
    var packed;
    var val = new VRService_GetDisplays_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  VRService_GetDisplays_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VRService_GetDisplays_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function VRService_GetDisplays_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VRService_GetDisplays_ResponseParams.prototype.initDefaults_ = function() {
    this.displays = null;
  };
  VRService_GetDisplays_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  VRService_GetDisplays_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, VRService_GetDisplays_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate VRService_GetDisplays_ResponseParams.displays
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(VRDisplay), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VRService_GetDisplays_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  VRService_GetDisplays_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new VRService_GetDisplays_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.displays = decoder.decodeArrayPointer(new codec.PointerTo(VRDisplay));
    return val;
  };

  VRService_GetDisplays_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VRService_GetDisplays_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(VRDisplay), val.displays);
  };
  function VRService_GetPose_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VRService_GetPose_Params.prototype.initDefaults_ = function() {
    this.index = 0;
  };
  VRService_GetPose_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  VRService_GetPose_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, VRService_GetPose_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  VRService_GetPose_Params.encodedSize = codec.kStructHeaderSize + 8;

  VRService_GetPose_Params.decode = function(decoder) {
    var packed;
    var val = new VRService_GetPose_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.index = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  VRService_GetPose_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VRService_GetPose_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.index);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function VRService_GetPose_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VRService_GetPose_ResponseParams.prototype.initDefaults_ = function() {
    this.pose = null;
  };
  VRService_GetPose_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  VRService_GetPose_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, VRService_GetPose_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate VRService_GetPose_ResponseParams.pose
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, VRPose, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VRService_GetPose_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  VRService_GetPose_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new VRService_GetPose_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.pose = decoder.decodeStructPointer(VRPose);
    return val;
  };

  VRService_GetPose_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VRService_GetPose_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(VRPose, val.pose);
  };
  function VRService_ResetPose_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VRService_ResetPose_Params.prototype.initDefaults_ = function() {
    this.index = 0;
  };
  VRService_ResetPose_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  VRService_ResetPose_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, VRService_ResetPose_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  VRService_ResetPose_Params.encodedSize = codec.kStructHeaderSize + 8;

  VRService_ResetPose_Params.decode = function(decoder) {
    var packed;
    var val = new VRService_ResetPose_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.index = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  VRService_ResetPose_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VRService_ResetPose_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.index);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function VRServiceClient_OnDisplayChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VRServiceClient_OnDisplayChanged_Params.prototype.initDefaults_ = function() {
    this.display = null;
  };
  VRServiceClient_OnDisplayChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  VRServiceClient_OnDisplayChanged_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, VRServiceClient_OnDisplayChanged_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate VRServiceClient_OnDisplayChanged_Params.display
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, VRDisplay, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VRServiceClient_OnDisplayChanged_Params.encodedSize = codec.kStructHeaderSize + 8;

  VRServiceClient_OnDisplayChanged_Params.decode = function(decoder) {
    var packed;
    var val = new VRServiceClient_OnDisplayChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.display = decoder.decodeStructPointer(VRDisplay);
    return val;
  };

  VRServiceClient_OnDisplayChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VRServiceClient_OnDisplayChanged_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(VRDisplay, val.display);
  };
  var kVRService_SetClient_Name = 0;
  var kVRService_GetDisplays_Name = 1;
  var kVRService_GetPose_Name = 2;
  var kVRService_ResetPose_Name = 3;

  function VRServiceProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  VRServiceProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  VRServiceProxy.prototype.setClient = function(client) {
    var params = new VRService_SetClient_Params();
    params.client = core.isHandle(client) ? client : connection.bindImpl(client, VRServiceClient);
    var builder = new codec.MessageBuilder(
        kVRService_SetClient_Name,
        codec.align(VRService_SetClient_Params.encodedSize));
    builder.encodeStruct(VRService_SetClient_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  VRServiceProxy.prototype.getDisplays = function() {
    var params = new VRService_GetDisplays_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kVRService_GetDisplays_Name,
          codec.align(VRService_GetDisplays_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(VRService_GetDisplays_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(VRService_GetDisplays_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  VRServiceProxy.prototype.getPose = function(index) {
    var params = new VRService_GetPose_Params();
    params.index = index;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kVRService_GetPose_Name,
          codec.align(VRService_GetPose_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(VRService_GetPose_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(VRService_GetPose_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  VRServiceProxy.prototype.resetPose = function(index) {
    var params = new VRService_ResetPose_Params();
    params.index = index;
    var builder = new codec.MessageBuilder(
        kVRService_ResetPose_Name,
        codec.align(VRService_ResetPose_Params.encodedSize));
    builder.encodeStruct(VRService_ResetPose_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function VRServiceStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  VRServiceStub.prototype = Object.create(bindings.StubBase.prototype);
  VRServiceStub.prototype.setClient = function(client) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.setClient && bindings.StubBindings(this).delegate.setClient(connection.bindHandleToProxy(client, VRServiceClient));
  }
  VRServiceStub.prototype.getDisplays = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.getDisplays && bindings.StubBindings(this).delegate.getDisplays();
  }
  VRServiceStub.prototype.getPose = function(index) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.getPose && bindings.StubBindings(this).delegate.getPose(index);
  }
  VRServiceStub.prototype.resetPose = function(index) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.resetPose && bindings.StubBindings(this).delegate.resetPose(index);
  }

  VRServiceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kVRService_SetClient_Name:
      var params = reader.decodeStruct(VRService_SetClient_Params);
      this.setClient(params.client);
      return true;
    case kVRService_ResetPose_Name:
      var params = reader.decodeStruct(VRService_ResetPose_Params);
      this.resetPose(params.index);
      return true;
    default:
      return false;
    }
  };

  VRServiceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kVRService_GetDisplays_Name:
      var params = reader.decodeStruct(VRService_GetDisplays_Params);
      return this.getDisplays().then(function(response) {
        var responseParams =
            new VRService_GetDisplays_ResponseParams();
        responseParams.displays = response.displays;
        var builder = new codec.MessageWithRequestIDBuilder(
            kVRService_GetDisplays_Name,
            codec.align(VRService_GetDisplays_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(VRService_GetDisplays_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kVRService_GetPose_Name:
      var params = reader.decodeStruct(VRService_GetPose_Params);
      return this.getPose(params.index).then(function(response) {
        var responseParams =
            new VRService_GetPose_ResponseParams();
        responseParams.pose = response.pose;
        var builder = new codec.MessageWithRequestIDBuilder(
            kVRService_GetPose_Name,
            codec.align(VRService_GetPose_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(VRService_GetPose_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateVRServiceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kVRService_SetClient_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = VRService_SetClient_Params;
      break;
      case kVRService_GetDisplays_Name:
        if (message.expectsResponse())
          paramsClass = VRService_GetDisplays_Params;
      break;
      case kVRService_GetPose_Name:
        if (message.expectsResponse())
          paramsClass = VRService_GetPose_Params;
      break;
      case kVRService_ResetPose_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = VRService_ResetPose_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateVRServiceResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kVRService_GetDisplays_Name:
        if (message.isResponse())
          paramsClass = VRService_GetDisplays_ResponseParams;
        break;
      case kVRService_GetPose_Name:
        if (message.isResponse())
          paramsClass = VRService_GetPose_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var VRService = {
    name: 'device::VRService',
    proxyClass: VRServiceProxy,
    stubClass: VRServiceStub,
    validateRequest: validateVRServiceRequest,
    validateResponse: validateVRServiceResponse,
  };
  VRServiceStub.prototype.validator = validateVRServiceRequest;
  VRServiceProxy.prototype.validator = validateVRServiceResponse;
  var kVRServiceClient_OnDisplayChanged_Name = 0;

  function VRServiceClientProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  VRServiceClientProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  VRServiceClientProxy.prototype.onDisplayChanged = function(display) {
    var params = new VRServiceClient_OnDisplayChanged_Params();
    params.display = display;
    var builder = new codec.MessageBuilder(
        kVRServiceClient_OnDisplayChanged_Name,
        codec.align(VRServiceClient_OnDisplayChanged_Params.encodedSize));
    builder.encodeStruct(VRServiceClient_OnDisplayChanged_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function VRServiceClientStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  VRServiceClientStub.prototype = Object.create(bindings.StubBase.prototype);
  VRServiceClientStub.prototype.onDisplayChanged = function(display) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onDisplayChanged && bindings.StubBindings(this).delegate.onDisplayChanged(display);
  }

  VRServiceClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kVRServiceClient_OnDisplayChanged_Name:
      var params = reader.decodeStruct(VRServiceClient_OnDisplayChanged_Params);
      this.onDisplayChanged(params.display);
      return true;
    default:
      return false;
    }
  };

  VRServiceClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateVRServiceClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kVRServiceClient_OnDisplayChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = VRServiceClient_OnDisplayChanged_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateVRServiceClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var VRServiceClient = {
    name: 'device::VRServiceClient',
    proxyClass: VRServiceClientProxy,
    stubClass: VRServiceClientStub,
    validateRequest: validateVRServiceClientRequest,
    validateResponse: null,
  };
  VRServiceClientStub.prototype.validator = validateVRServiceClientRequest;
  VRServiceClientProxy.prototype.validator = null;

  var exports = {};
  exports.VRFieldOfView = VRFieldOfView;
  exports.VRPose = VRPose;
  exports.VRDisplayCapabilities = VRDisplayCapabilities;
  exports.VREyeParameters = VREyeParameters;
  exports.VRStageParameters = VRStageParameters;
  exports.VRDisplay = VRDisplay;
  exports.VRService = VRService;
  exports.VRServiceClient = VRServiceClient;

  return exports;
});
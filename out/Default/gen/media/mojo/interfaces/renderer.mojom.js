// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("media/mojo/interfaces/renderer.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "media/mojo/interfaces/demuxer_stream.mojom",
    "media/mojo/interfaces/media_types.mojom",
    "mojo/common/common_custom_types.mojom",
    "ui/gfx/geometry/mojo/geometry.mojom",
    "url/mojo/url.mojom",
], function(bindings, codec, connection, core, validator, demuxer_stream$, media_types$, common_custom_types$, geometry$, url$) {

  function Renderer_Initialize_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Renderer_Initialize_Params.prototype.initDefaults_ = function() {
    this.client = null;
    this.audio = null;
    this.video = null;
    this.url = null;
  };
  Renderer_Initialize_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Renderer_Initialize_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Renderer_Initialize_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Renderer_Initialize_Params.client
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Renderer_Initialize_Params.audio
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 8, true);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Renderer_Initialize_Params.video
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 16, true);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Renderer_Initialize_Params.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, url$.Url, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Renderer_Initialize_Params.encodedSize = codec.kStructHeaderSize + 32;

  Renderer_Initialize_Params.decode = function(decoder) {
    var packed;
    var val = new Renderer_Initialize_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.client = decoder.decodeStruct(codec.Interface);
    val.audio = decoder.decodeStruct(codec.NullableInterface);
    val.video = decoder.decodeStruct(codec.NullableInterface);
    val.url = decoder.decodeStructPointer(url$.Url);
    return val;
  };

  Renderer_Initialize_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Renderer_Initialize_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Interface, val.client);
    encoder.encodeStruct(codec.NullableInterface, val.audio);
    encoder.encodeStruct(codec.NullableInterface, val.video);
    encoder.encodeStructPointer(url$.Url, val.url);
  };
  function Renderer_Initialize_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Renderer_Initialize_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  Renderer_Initialize_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Renderer_Initialize_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Renderer_Initialize_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  Renderer_Initialize_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Renderer_Initialize_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Renderer_Initialize_ResponseParams();
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

  Renderer_Initialize_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Renderer_Initialize_ResponseParams.encodedSize);
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
  function Renderer_Flush_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Renderer_Flush_Params.prototype.initDefaults_ = function() {
  };
  Renderer_Flush_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Renderer_Flush_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Renderer_Flush_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Renderer_Flush_Params.encodedSize = codec.kStructHeaderSize + 0;

  Renderer_Flush_Params.decode = function(decoder) {
    var packed;
    var val = new Renderer_Flush_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Renderer_Flush_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Renderer_Flush_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function Renderer_Flush_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Renderer_Flush_ResponseParams.prototype.initDefaults_ = function() {
  };
  Renderer_Flush_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Renderer_Flush_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Renderer_Flush_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Renderer_Flush_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  Renderer_Flush_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Renderer_Flush_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Renderer_Flush_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Renderer_Flush_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  function Renderer_StartPlayingFrom_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Renderer_StartPlayingFrom_Params.prototype.initDefaults_ = function() {
    this.time = null;
  };
  Renderer_StartPlayingFrom_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Renderer_StartPlayingFrom_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Renderer_StartPlayingFrom_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Renderer_StartPlayingFrom_Params.time
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, common_custom_types$.TimeDelta, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Renderer_StartPlayingFrom_Params.encodedSize = codec.kStructHeaderSize + 8;

  Renderer_StartPlayingFrom_Params.decode = function(decoder) {
    var packed;
    var val = new Renderer_StartPlayingFrom_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.time = decoder.decodeStructPointer(common_custom_types$.TimeDelta);
    return val;
  };

  Renderer_StartPlayingFrom_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Renderer_StartPlayingFrom_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(common_custom_types$.TimeDelta, val.time);
  };
  function Renderer_SetPlaybackRate_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Renderer_SetPlaybackRate_Params.prototype.initDefaults_ = function() {
    this.playback_rate = 0;
  };
  Renderer_SetPlaybackRate_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Renderer_SetPlaybackRate_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Renderer_SetPlaybackRate_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  Renderer_SetPlaybackRate_Params.encodedSize = codec.kStructHeaderSize + 8;

  Renderer_SetPlaybackRate_Params.decode = function(decoder) {
    var packed;
    var val = new Renderer_SetPlaybackRate_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.playback_rate = decoder.decodeStruct(codec.Double);
    return val;
  };

  Renderer_SetPlaybackRate_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Renderer_SetPlaybackRate_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Double, val.playback_rate);
  };
  function Renderer_SetVolume_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Renderer_SetVolume_Params.prototype.initDefaults_ = function() {
    this.volume = 0;
  };
  Renderer_SetVolume_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Renderer_SetVolume_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Renderer_SetVolume_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  Renderer_SetVolume_Params.encodedSize = codec.kStructHeaderSize + 8;

  Renderer_SetVolume_Params.decode = function(decoder) {
    var packed;
    var val = new Renderer_SetVolume_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.volume = decoder.decodeStruct(codec.Float);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Renderer_SetVolume_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Renderer_SetVolume_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Float, val.volume);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Renderer_SetCdm_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Renderer_SetCdm_Params.prototype.initDefaults_ = function() {
    this.cdm_id = 0;
  };
  Renderer_SetCdm_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Renderer_SetCdm_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Renderer_SetCdm_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  Renderer_SetCdm_Params.encodedSize = codec.kStructHeaderSize + 8;

  Renderer_SetCdm_Params.decode = function(decoder) {
    var packed;
    var val = new Renderer_SetCdm_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.cdm_id = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Renderer_SetCdm_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Renderer_SetCdm_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.cdm_id);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Renderer_SetCdm_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Renderer_SetCdm_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  Renderer_SetCdm_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Renderer_SetCdm_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Renderer_SetCdm_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  Renderer_SetCdm_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Renderer_SetCdm_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Renderer_SetCdm_ResponseParams();
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

  Renderer_SetCdm_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Renderer_SetCdm_ResponseParams.encodedSize);
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
  function RendererClient_OnTimeUpdate_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RendererClient_OnTimeUpdate_Params.prototype.initDefaults_ = function() {
    this.time = null;
    this.max_time = null;
  };
  RendererClient_OnTimeUpdate_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  RendererClient_OnTimeUpdate_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, RendererClient_OnTimeUpdate_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate RendererClient_OnTimeUpdate_Params.time
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, common_custom_types$.TimeDelta, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate RendererClient_OnTimeUpdate_Params.max_time
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, common_custom_types$.TimeDelta, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RendererClient_OnTimeUpdate_Params.encodedSize = codec.kStructHeaderSize + 16;

  RendererClient_OnTimeUpdate_Params.decode = function(decoder) {
    var packed;
    var val = new RendererClient_OnTimeUpdate_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.time = decoder.decodeStructPointer(common_custom_types$.TimeDelta);
    val.max_time = decoder.decodeStructPointer(common_custom_types$.TimeDelta);
    return val;
  };

  RendererClient_OnTimeUpdate_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RendererClient_OnTimeUpdate_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(common_custom_types$.TimeDelta, val.time);
    encoder.encodeStructPointer(common_custom_types$.TimeDelta, val.max_time);
  };
  function RendererClient_OnBufferingStateChange_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RendererClient_OnBufferingStateChange_Params.prototype.initDefaults_ = function() {
    this.state = 0;
  };
  RendererClient_OnBufferingStateChange_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  RendererClient_OnBufferingStateChange_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, RendererClient_OnBufferingStateChange_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  RendererClient_OnBufferingStateChange_Params.encodedSize = codec.kStructHeaderSize + 8;

  RendererClient_OnBufferingStateChange_Params.decode = function(decoder) {
    var packed;
    var val = new RendererClient_OnBufferingStateChange_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.state = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  RendererClient_OnBufferingStateChange_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RendererClient_OnBufferingStateChange_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.state);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function RendererClient_OnEnded_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RendererClient_OnEnded_Params.prototype.initDefaults_ = function() {
  };
  RendererClient_OnEnded_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  RendererClient_OnEnded_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, RendererClient_OnEnded_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RendererClient_OnEnded_Params.encodedSize = codec.kStructHeaderSize + 0;

  RendererClient_OnEnded_Params.decode = function(decoder) {
    var packed;
    var val = new RendererClient_OnEnded_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  RendererClient_OnEnded_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RendererClient_OnEnded_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function RendererClient_OnError_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RendererClient_OnError_Params.prototype.initDefaults_ = function() {
  };
  RendererClient_OnError_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  RendererClient_OnError_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, RendererClient_OnError_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RendererClient_OnError_Params.encodedSize = codec.kStructHeaderSize + 0;

  RendererClient_OnError_Params.decode = function(decoder) {
    var packed;
    var val = new RendererClient_OnError_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  RendererClient_OnError_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RendererClient_OnError_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function RendererClient_OnVideoNaturalSizeChange_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RendererClient_OnVideoNaturalSizeChange_Params.prototype.initDefaults_ = function() {
    this.size = null;
  };
  RendererClient_OnVideoNaturalSizeChange_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  RendererClient_OnVideoNaturalSizeChange_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, RendererClient_OnVideoNaturalSizeChange_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate RendererClient_OnVideoNaturalSizeChange_Params.size
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, geometry$.Size, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RendererClient_OnVideoNaturalSizeChange_Params.encodedSize = codec.kStructHeaderSize + 8;

  RendererClient_OnVideoNaturalSizeChange_Params.decode = function(decoder) {
    var packed;
    var val = new RendererClient_OnVideoNaturalSizeChange_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.size = decoder.decodeStructPointer(geometry$.Size);
    return val;
  };

  RendererClient_OnVideoNaturalSizeChange_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RendererClient_OnVideoNaturalSizeChange_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(geometry$.Size, val.size);
  };
  function RendererClient_OnVideoOpacityChange_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RendererClient_OnVideoOpacityChange_Params.prototype.initDefaults_ = function() {
    this.opaque = false;
  };
  RendererClient_OnVideoOpacityChange_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  RendererClient_OnVideoOpacityChange_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, RendererClient_OnVideoOpacityChange_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  RendererClient_OnVideoOpacityChange_Params.encodedSize = codec.kStructHeaderSize + 8;

  RendererClient_OnVideoOpacityChange_Params.decode = function(decoder) {
    var packed;
    var val = new RendererClient_OnVideoOpacityChange_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.opaque = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  RendererClient_OnVideoOpacityChange_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RendererClient_OnVideoOpacityChange_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint8, val.opaque);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function RendererClient_OnStatisticsUpdate_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RendererClient_OnStatisticsUpdate_Params.prototype.initDefaults_ = function() {
    this.stats = null;
  };
  RendererClient_OnStatisticsUpdate_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  RendererClient_OnStatisticsUpdate_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, RendererClient_OnStatisticsUpdate_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate RendererClient_OnStatisticsUpdate_Params.stats
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, media_types$.PipelineStatistics, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RendererClient_OnStatisticsUpdate_Params.encodedSize = codec.kStructHeaderSize + 8;

  RendererClient_OnStatisticsUpdate_Params.decode = function(decoder) {
    var packed;
    var val = new RendererClient_OnStatisticsUpdate_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.stats = decoder.decodeStructPointer(media_types$.PipelineStatistics);
    return val;
  };

  RendererClient_OnStatisticsUpdate_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RendererClient_OnStatisticsUpdate_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(media_types$.PipelineStatistics, val.stats);
  };
  function RendererClient_OnWaitingForDecryptionKey_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RendererClient_OnWaitingForDecryptionKey_Params.prototype.initDefaults_ = function() {
  };
  RendererClient_OnWaitingForDecryptionKey_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  RendererClient_OnWaitingForDecryptionKey_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, RendererClient_OnWaitingForDecryptionKey_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RendererClient_OnWaitingForDecryptionKey_Params.encodedSize = codec.kStructHeaderSize + 0;

  RendererClient_OnWaitingForDecryptionKey_Params.decode = function(decoder) {
    var packed;
    var val = new RendererClient_OnWaitingForDecryptionKey_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  RendererClient_OnWaitingForDecryptionKey_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RendererClient_OnWaitingForDecryptionKey_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function RendererClient_OnDurationChange_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RendererClient_OnDurationChange_Params.prototype.initDefaults_ = function() {
    this.duration = null;
  };
  RendererClient_OnDurationChange_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  RendererClient_OnDurationChange_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, RendererClient_OnDurationChange_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate RendererClient_OnDurationChange_Params.duration
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, common_custom_types$.TimeDelta, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RendererClient_OnDurationChange_Params.encodedSize = codec.kStructHeaderSize + 8;

  RendererClient_OnDurationChange_Params.decode = function(decoder) {
    var packed;
    var val = new RendererClient_OnDurationChange_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.duration = decoder.decodeStructPointer(common_custom_types$.TimeDelta);
    return val;
  };

  RendererClient_OnDurationChange_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RendererClient_OnDurationChange_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(common_custom_types$.TimeDelta, val.duration);
  };
  var kRenderer_Initialize_Name = 0;
  var kRenderer_Flush_Name = 1;
  var kRenderer_StartPlayingFrom_Name = 2;
  var kRenderer_SetPlaybackRate_Name = 3;
  var kRenderer_SetVolume_Name = 4;
  var kRenderer_SetCdm_Name = 5;

  function RendererProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  RendererProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  RendererProxy.prototype.initialize = function(client, audio, video, url) {
    var params = new Renderer_Initialize_Params();
    params.client = core.isHandle(client) ? client : connection.bindImpl(client, RendererClient);
    params.audio = core.isHandle(audio) ? audio : connection.bindImpl(audio, demuxer_stream$.DemuxerStream);
    params.video = core.isHandle(video) ? video : connection.bindImpl(video, demuxer_stream$.DemuxerStream);
    params.url = url;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kRenderer_Initialize_Name,
          codec.align(Renderer_Initialize_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Renderer_Initialize_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Renderer_Initialize_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  RendererProxy.prototype.flush = function() {
    var params = new Renderer_Flush_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kRenderer_Flush_Name,
          codec.align(Renderer_Flush_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Renderer_Flush_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Renderer_Flush_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  RendererProxy.prototype.startPlayingFrom = function(time) {
    var params = new Renderer_StartPlayingFrom_Params();
    params.time = time;
    var builder = new codec.MessageBuilder(
        kRenderer_StartPlayingFrom_Name,
        codec.align(Renderer_StartPlayingFrom_Params.encodedSize));
    builder.encodeStruct(Renderer_StartPlayingFrom_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RendererProxy.prototype.setPlaybackRate = function(playback_rate) {
    var params = new Renderer_SetPlaybackRate_Params();
    params.playback_rate = playback_rate;
    var builder = new codec.MessageBuilder(
        kRenderer_SetPlaybackRate_Name,
        codec.align(Renderer_SetPlaybackRate_Params.encodedSize));
    builder.encodeStruct(Renderer_SetPlaybackRate_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RendererProxy.prototype.setVolume = function(volume) {
    var params = new Renderer_SetVolume_Params();
    params.volume = volume;
    var builder = new codec.MessageBuilder(
        kRenderer_SetVolume_Name,
        codec.align(Renderer_SetVolume_Params.encodedSize));
    builder.encodeStruct(Renderer_SetVolume_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RendererProxy.prototype.setCdm = function(cdm_id) {
    var params = new Renderer_SetCdm_Params();
    params.cdm_id = cdm_id;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kRenderer_SetCdm_Name,
          codec.align(Renderer_SetCdm_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Renderer_SetCdm_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Renderer_SetCdm_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function RendererStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  RendererStub.prototype = Object.create(bindings.StubBase.prototype);
  RendererStub.prototype.initialize = function(client, audio, video, url) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.initialize && bindings.StubBindings(this).delegate.initialize(connection.bindHandleToProxy(client, RendererClient), connection.bindHandleToProxy(audio, demuxer_stream$.DemuxerStream), connection.bindHandleToProxy(video, demuxer_stream$.DemuxerStream), url);
  }
  RendererStub.prototype.flush = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.flush && bindings.StubBindings(this).delegate.flush();
  }
  RendererStub.prototype.startPlayingFrom = function(time) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.startPlayingFrom && bindings.StubBindings(this).delegate.startPlayingFrom(time);
  }
  RendererStub.prototype.setPlaybackRate = function(playback_rate) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.setPlaybackRate && bindings.StubBindings(this).delegate.setPlaybackRate(playback_rate);
  }
  RendererStub.prototype.setVolume = function(volume) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.setVolume && bindings.StubBindings(this).delegate.setVolume(volume);
  }
  RendererStub.prototype.setCdm = function(cdm_id) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.setCdm && bindings.StubBindings(this).delegate.setCdm(cdm_id);
  }

  RendererStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kRenderer_StartPlayingFrom_Name:
      var params = reader.decodeStruct(Renderer_StartPlayingFrom_Params);
      this.startPlayingFrom(params.time);
      return true;
    case kRenderer_SetPlaybackRate_Name:
      var params = reader.decodeStruct(Renderer_SetPlaybackRate_Params);
      this.setPlaybackRate(params.playback_rate);
      return true;
    case kRenderer_SetVolume_Name:
      var params = reader.decodeStruct(Renderer_SetVolume_Params);
      this.setVolume(params.volume);
      return true;
    default:
      return false;
    }
  };

  RendererStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kRenderer_Initialize_Name:
      var params = reader.decodeStruct(Renderer_Initialize_Params);
      return this.initialize(params.client, params.audio, params.video, params.url).then(function(response) {
        var responseParams =
            new Renderer_Initialize_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageWithRequestIDBuilder(
            kRenderer_Initialize_Name,
            codec.align(Renderer_Initialize_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Renderer_Initialize_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kRenderer_Flush_Name:
      var params = reader.decodeStruct(Renderer_Flush_Params);
      return this.flush().then(function(response) {
        var responseParams =
            new Renderer_Flush_ResponseParams();
        var builder = new codec.MessageWithRequestIDBuilder(
            kRenderer_Flush_Name,
            codec.align(Renderer_Flush_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Renderer_Flush_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kRenderer_SetCdm_Name:
      var params = reader.decodeStruct(Renderer_SetCdm_Params);
      return this.setCdm(params.cdm_id).then(function(response) {
        var responseParams =
            new Renderer_SetCdm_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageWithRequestIDBuilder(
            kRenderer_SetCdm_Name,
            codec.align(Renderer_SetCdm_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Renderer_SetCdm_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateRendererRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kRenderer_Initialize_Name:
        if (message.expectsResponse())
          paramsClass = Renderer_Initialize_Params;
      break;
      case kRenderer_Flush_Name:
        if (message.expectsResponse())
          paramsClass = Renderer_Flush_Params;
      break;
      case kRenderer_StartPlayingFrom_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Renderer_StartPlayingFrom_Params;
      break;
      case kRenderer_SetPlaybackRate_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Renderer_SetPlaybackRate_Params;
      break;
      case kRenderer_SetVolume_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Renderer_SetVolume_Params;
      break;
      case kRenderer_SetCdm_Name:
        if (message.expectsResponse())
          paramsClass = Renderer_SetCdm_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateRendererResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kRenderer_Initialize_Name:
        if (message.isResponse())
          paramsClass = Renderer_Initialize_ResponseParams;
        break;
      case kRenderer_Flush_Name:
        if (message.isResponse())
          paramsClass = Renderer_Flush_ResponseParams;
        break;
      case kRenderer_SetCdm_Name:
        if (message.isResponse())
          paramsClass = Renderer_SetCdm_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var Renderer = {
    name: 'media::mojom::Renderer',
    proxyClass: RendererProxy,
    stubClass: RendererStub,
    validateRequest: validateRendererRequest,
    validateResponse: validateRendererResponse,
  };
  RendererStub.prototype.validator = validateRendererRequest;
  RendererProxy.prototype.validator = validateRendererResponse;
  var kRendererClient_OnTimeUpdate_Name = 0;
  var kRendererClient_OnBufferingStateChange_Name = 1;
  var kRendererClient_OnEnded_Name = 2;
  var kRendererClient_OnError_Name = 3;
  var kRendererClient_OnVideoNaturalSizeChange_Name = 4;
  var kRendererClient_OnVideoOpacityChange_Name = 5;
  var kRendererClient_OnStatisticsUpdate_Name = 6;
  var kRendererClient_OnWaitingForDecryptionKey_Name = 7;
  var kRendererClient_OnDurationChange_Name = 8;

  function RendererClientProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  RendererClientProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  RendererClientProxy.prototype.onTimeUpdate = function(time, max_time) {
    var params = new RendererClient_OnTimeUpdate_Params();
    params.time = time;
    params.max_time = max_time;
    var builder = new codec.MessageBuilder(
        kRendererClient_OnTimeUpdate_Name,
        codec.align(RendererClient_OnTimeUpdate_Params.encodedSize));
    builder.encodeStruct(RendererClient_OnTimeUpdate_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RendererClientProxy.prototype.onBufferingStateChange = function(state) {
    var params = new RendererClient_OnBufferingStateChange_Params();
    params.state = state;
    var builder = new codec.MessageBuilder(
        kRendererClient_OnBufferingStateChange_Name,
        codec.align(RendererClient_OnBufferingStateChange_Params.encodedSize));
    builder.encodeStruct(RendererClient_OnBufferingStateChange_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RendererClientProxy.prototype.onEnded = function() {
    var params = new RendererClient_OnEnded_Params();
    var builder = new codec.MessageBuilder(
        kRendererClient_OnEnded_Name,
        codec.align(RendererClient_OnEnded_Params.encodedSize));
    builder.encodeStruct(RendererClient_OnEnded_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RendererClientProxy.prototype.onError = function() {
    var params = new RendererClient_OnError_Params();
    var builder = new codec.MessageBuilder(
        kRendererClient_OnError_Name,
        codec.align(RendererClient_OnError_Params.encodedSize));
    builder.encodeStruct(RendererClient_OnError_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RendererClientProxy.prototype.onVideoNaturalSizeChange = function(size) {
    var params = new RendererClient_OnVideoNaturalSizeChange_Params();
    params.size = size;
    var builder = new codec.MessageBuilder(
        kRendererClient_OnVideoNaturalSizeChange_Name,
        codec.align(RendererClient_OnVideoNaturalSizeChange_Params.encodedSize));
    builder.encodeStruct(RendererClient_OnVideoNaturalSizeChange_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RendererClientProxy.prototype.onVideoOpacityChange = function(opaque) {
    var params = new RendererClient_OnVideoOpacityChange_Params();
    params.opaque = opaque;
    var builder = new codec.MessageBuilder(
        kRendererClient_OnVideoOpacityChange_Name,
        codec.align(RendererClient_OnVideoOpacityChange_Params.encodedSize));
    builder.encodeStruct(RendererClient_OnVideoOpacityChange_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RendererClientProxy.prototype.onStatisticsUpdate = function(stats) {
    var params = new RendererClient_OnStatisticsUpdate_Params();
    params.stats = stats;
    var builder = new codec.MessageBuilder(
        kRendererClient_OnStatisticsUpdate_Name,
        codec.align(RendererClient_OnStatisticsUpdate_Params.encodedSize));
    builder.encodeStruct(RendererClient_OnStatisticsUpdate_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RendererClientProxy.prototype.onWaitingForDecryptionKey = function() {
    var params = new RendererClient_OnWaitingForDecryptionKey_Params();
    var builder = new codec.MessageBuilder(
        kRendererClient_OnWaitingForDecryptionKey_Name,
        codec.align(RendererClient_OnWaitingForDecryptionKey_Params.encodedSize));
    builder.encodeStruct(RendererClient_OnWaitingForDecryptionKey_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RendererClientProxy.prototype.onDurationChange = function(duration) {
    var params = new RendererClient_OnDurationChange_Params();
    params.duration = duration;
    var builder = new codec.MessageBuilder(
        kRendererClient_OnDurationChange_Name,
        codec.align(RendererClient_OnDurationChange_Params.encodedSize));
    builder.encodeStruct(RendererClient_OnDurationChange_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function RendererClientStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  RendererClientStub.prototype = Object.create(bindings.StubBase.prototype);
  RendererClientStub.prototype.onTimeUpdate = function(time, max_time) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onTimeUpdate && bindings.StubBindings(this).delegate.onTimeUpdate(time, max_time);
  }
  RendererClientStub.prototype.onBufferingStateChange = function(state) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onBufferingStateChange && bindings.StubBindings(this).delegate.onBufferingStateChange(state);
  }
  RendererClientStub.prototype.onEnded = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onEnded && bindings.StubBindings(this).delegate.onEnded();
  }
  RendererClientStub.prototype.onError = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onError && bindings.StubBindings(this).delegate.onError();
  }
  RendererClientStub.prototype.onVideoNaturalSizeChange = function(size) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onVideoNaturalSizeChange && bindings.StubBindings(this).delegate.onVideoNaturalSizeChange(size);
  }
  RendererClientStub.prototype.onVideoOpacityChange = function(opaque) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onVideoOpacityChange && bindings.StubBindings(this).delegate.onVideoOpacityChange(opaque);
  }
  RendererClientStub.prototype.onStatisticsUpdate = function(stats) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onStatisticsUpdate && bindings.StubBindings(this).delegate.onStatisticsUpdate(stats);
  }
  RendererClientStub.prototype.onWaitingForDecryptionKey = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onWaitingForDecryptionKey && bindings.StubBindings(this).delegate.onWaitingForDecryptionKey();
  }
  RendererClientStub.prototype.onDurationChange = function(duration) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onDurationChange && bindings.StubBindings(this).delegate.onDurationChange(duration);
  }

  RendererClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kRendererClient_OnTimeUpdate_Name:
      var params = reader.decodeStruct(RendererClient_OnTimeUpdate_Params);
      this.onTimeUpdate(params.time, params.max_time);
      return true;
    case kRendererClient_OnBufferingStateChange_Name:
      var params = reader.decodeStruct(RendererClient_OnBufferingStateChange_Params);
      this.onBufferingStateChange(params.state);
      return true;
    case kRendererClient_OnEnded_Name:
      var params = reader.decodeStruct(RendererClient_OnEnded_Params);
      this.onEnded();
      return true;
    case kRendererClient_OnError_Name:
      var params = reader.decodeStruct(RendererClient_OnError_Params);
      this.onError();
      return true;
    case kRendererClient_OnVideoNaturalSizeChange_Name:
      var params = reader.decodeStruct(RendererClient_OnVideoNaturalSizeChange_Params);
      this.onVideoNaturalSizeChange(params.size);
      return true;
    case kRendererClient_OnVideoOpacityChange_Name:
      var params = reader.decodeStruct(RendererClient_OnVideoOpacityChange_Params);
      this.onVideoOpacityChange(params.opaque);
      return true;
    case kRendererClient_OnStatisticsUpdate_Name:
      var params = reader.decodeStruct(RendererClient_OnStatisticsUpdate_Params);
      this.onStatisticsUpdate(params.stats);
      return true;
    case kRendererClient_OnWaitingForDecryptionKey_Name:
      var params = reader.decodeStruct(RendererClient_OnWaitingForDecryptionKey_Params);
      this.onWaitingForDecryptionKey();
      return true;
    case kRendererClient_OnDurationChange_Name:
      var params = reader.decodeStruct(RendererClient_OnDurationChange_Params);
      this.onDurationChange(params.duration);
      return true;
    default:
      return false;
    }
  };

  RendererClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateRendererClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kRendererClient_OnTimeUpdate_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = RendererClient_OnTimeUpdate_Params;
      break;
      case kRendererClient_OnBufferingStateChange_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = RendererClient_OnBufferingStateChange_Params;
      break;
      case kRendererClient_OnEnded_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = RendererClient_OnEnded_Params;
      break;
      case kRendererClient_OnError_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = RendererClient_OnError_Params;
      break;
      case kRendererClient_OnVideoNaturalSizeChange_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = RendererClient_OnVideoNaturalSizeChange_Params;
      break;
      case kRendererClient_OnVideoOpacityChange_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = RendererClient_OnVideoOpacityChange_Params;
      break;
      case kRendererClient_OnStatisticsUpdate_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = RendererClient_OnStatisticsUpdate_Params;
      break;
      case kRendererClient_OnWaitingForDecryptionKey_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = RendererClient_OnWaitingForDecryptionKey_Params;
      break;
      case kRendererClient_OnDurationChange_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = RendererClient_OnDurationChange_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateRendererClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var RendererClient = {
    name: 'media::mojom::RendererClient',
    proxyClass: RendererClientProxy,
    stubClass: RendererClientStub,
    validateRequest: validateRendererClientRequest,
    validateResponse: null,
  };
  RendererClientStub.prototype.validator = validateRendererClientRequest;
  RendererClientProxy.prototype.validator = null;

  var exports = {};
  exports.Renderer = Renderer;
  exports.RendererClient = RendererClient;

  return exports;
});
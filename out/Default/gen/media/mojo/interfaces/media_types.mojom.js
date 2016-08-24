// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("media/mojo/interfaces/media_types.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "ui/gfx/geometry/mojo/geometry.mojom",
    "mojo/common/common_custom_types.mojom",
], function(bindings, codec, connection, core, validator, geometry$, common_custom_types$) {
  var BufferingState = {};
  BufferingState.HAVE_NOTHING = 0;
  BufferingState.HAVE_ENOUGH = BufferingState.HAVE_NOTHING + 1;
  var DecodeStatus = {};
  DecodeStatus.OK = 0;
  DecodeStatus.ABORTED = DecodeStatus.OK + 1;
  DecodeStatus.DECODE_ERROR = DecodeStatus.ABORTED + 1;
  var AudioCodec = {};
  AudioCodec.UNKNOWN = 0;
  AudioCodec.AAC = 1;
  AudioCodec.MP3 = 2;
  AudioCodec.PCM = 3;
  AudioCodec.Vorbis = 4;
  AudioCodec.FLAC = 5;
  AudioCodec.AMR_NB = 6;
  AudioCodec.AMR_WB = 7;
  AudioCodec.PCM_MULAW = 8;
  AudioCodec.GSM_MS = 9;
  AudioCodec.PCM_S16BE = 10;
  AudioCodec.PCM_S24BE = 11;
  AudioCodec.Opus = 12;
  AudioCodec.EAC3 = 13;
  AudioCodec.PCM_ALAW = 14;
  AudioCodec.ALAC = 15;
  AudioCodec.AC3 = 16;
  AudioCodec.MAX = AudioCodec.AC3;
  var ChannelLayout = {};
  ChannelLayout.k_NONE = 0;
  ChannelLayout.k_UNSUPPORTED = 1;
  ChannelLayout.k_MONO = 2;
  ChannelLayout.k_STEREO = 3;
  ChannelLayout.k_2_1 = 4;
  ChannelLayout.k_SURROUND = 5;
  ChannelLayout.k_4_0 = 6;
  ChannelLayout.k_2_2 = 7;
  ChannelLayout.k_QUAD = 8;
  ChannelLayout.k_5_0 = 9;
  ChannelLayout.k_5_1 = 10;
  ChannelLayout.k_5_0_BACK = 11;
  ChannelLayout.k_5_1_BACK = 12;
  ChannelLayout.k_7_0 = 13;
  ChannelLayout.k_7_1 = 14;
  ChannelLayout.k_7_1_WIDE = 15;
  ChannelLayout.k_STEREO_DOWNMIX = 16;
  ChannelLayout.k_2POINT1 = 17;
  ChannelLayout.k_3_1 = 18;
  ChannelLayout.k_4_1 = 19;
  ChannelLayout.k_6_0 = 20;
  ChannelLayout.k_6_0_FRONT = 21;
  ChannelLayout.k_HEXAGONAL = 22;
  ChannelLayout.k_6_1 = 23;
  ChannelLayout.k_6_1_BACK = 24;
  ChannelLayout.k_6_1_FRONT = 25;
  ChannelLayout.k_7_0_FRONT = 26;
  ChannelLayout.k_7_1_WIDE_BACK = 27;
  ChannelLayout.k_OCTAGONAL = 28;
  ChannelLayout.k_DISCRETE = 29;
  ChannelLayout.k_STEREO_AND_KEYBOARD_MIC = 30;
  ChannelLayout.k_4_1_QUAD_SIDE = 31;
  ChannelLayout.k_MAX = ChannelLayout.k_4_1_QUAD_SIDE;
  var SampleFormat = {};
  SampleFormat.UNKNOWN = 0;
  SampleFormat.U8 = SampleFormat.UNKNOWN + 1;
  SampleFormat.S16 = SampleFormat.U8 + 1;
  SampleFormat.S32 = SampleFormat.S16 + 1;
  SampleFormat.F32 = SampleFormat.S32 + 1;
  SampleFormat.PlanarS16 = SampleFormat.F32 + 1;
  SampleFormat.PlanarF32 = SampleFormat.PlanarS16 + 1;
  SampleFormat.PlanarS32 = SampleFormat.PlanarF32 + 1;
  SampleFormat.S24 = SampleFormat.PlanarS32 + 1;
  SampleFormat.Max = SampleFormat.S24;
  var VideoFormat = {};
  VideoFormat.UNKNOWN = 0;
  VideoFormat.I420 = VideoFormat.UNKNOWN + 1;
  VideoFormat.YV12 = VideoFormat.I420 + 1;
  VideoFormat.YV16 = VideoFormat.YV12 + 1;
  VideoFormat.YV12A = VideoFormat.YV16 + 1;
  VideoFormat.YV24 = VideoFormat.YV12A + 1;
  VideoFormat.NV12 = VideoFormat.YV24 + 1;
  VideoFormat.NV21 = VideoFormat.NV12 + 1;
  VideoFormat.UYVY = VideoFormat.NV21 + 1;
  VideoFormat.YUY2 = VideoFormat.UYVY + 1;
  VideoFormat.ARGB = VideoFormat.YUY2 + 1;
  VideoFormat.XRGB = VideoFormat.ARGB + 1;
  VideoFormat.RGB24 = VideoFormat.XRGB + 1;
  VideoFormat.RGB32 = VideoFormat.RGB24 + 1;
  VideoFormat.MJPEG = VideoFormat.RGB32 + 1;
  VideoFormat.MT21 = VideoFormat.MJPEG + 1;
  VideoFormat.YUV420P9 = VideoFormat.MT21 + 1;
  VideoFormat.YUV420P10 = VideoFormat.YUV420P9 + 1;
  VideoFormat.YUV422P9 = VideoFormat.YUV420P10 + 1;
  VideoFormat.YUV422P10 = VideoFormat.YUV422P9 + 1;
  VideoFormat.YUV444P9 = VideoFormat.YUV422P10 + 1;
  VideoFormat.YUV444P10 = VideoFormat.YUV444P9 + 1;
  VideoFormat.FORMAT_MAX = VideoFormat.YUV444P10;
  var ColorSpace = {};
  ColorSpace.UNSPECIFIED = 0;
  ColorSpace.JPEG = 1;
  ColorSpace.HD_REC709 = 2;
  ColorSpace.SD_REC601 = 3;
  ColorSpace.MAX = ColorSpace.SD_REC601;
  var VideoCodec = {};
  VideoCodec.UNKNOWN = 0;
  VideoCodec.H264 = VideoCodec.UNKNOWN + 1;
  VideoCodec.VC1 = VideoCodec.H264 + 1;
  VideoCodec.MPEG2 = VideoCodec.VC1 + 1;
  VideoCodec.MPEG4 = VideoCodec.MPEG2 + 1;
  VideoCodec.Theora = VideoCodec.MPEG4 + 1;
  VideoCodec.VP8 = VideoCodec.Theora + 1;
  VideoCodec.VP9 = VideoCodec.VP8 + 1;
  VideoCodec.HEVC = VideoCodec.VP9 + 1;
  VideoCodec.Max = VideoCodec.HEVC;
  var VideoCodecProfile = {};
  VideoCodecProfile.VIDEO_CODEC_PROFILE_UNKNOWN = -1;
  VideoCodecProfile.VIDEO_CODEC_PROFILE_MIN = VideoCodecProfile.VIDEO_CODEC_PROFILE_UNKNOWN;
  VideoCodecProfile.H264PROFILE_MIN = 0;
  VideoCodecProfile.H264PROFILE_BASELINE = VideoCodecProfile.H264PROFILE_MIN;
  VideoCodecProfile.H264PROFILE_MAIN = VideoCodecProfile.H264PROFILE_BASELINE + 1;
  VideoCodecProfile.H264PROFILE_EXTENDED = VideoCodecProfile.H264PROFILE_MAIN + 1;
  VideoCodecProfile.H264PROFILE_HIGH = VideoCodecProfile.H264PROFILE_EXTENDED + 1;
  VideoCodecProfile.H264PROFILE_HIGH10PROFILE = VideoCodecProfile.H264PROFILE_HIGH + 1;
  VideoCodecProfile.H264PROFILE_HIGH422PROFILE = VideoCodecProfile.H264PROFILE_HIGH10PROFILE + 1;
  VideoCodecProfile.H264PROFILE_HIGH444PREDICTIVEPROFILE = VideoCodecProfile.H264PROFILE_HIGH422PROFILE + 1;
  VideoCodecProfile.H264PROFILE_SCALABLEBASELINE = VideoCodecProfile.H264PROFILE_HIGH444PREDICTIVEPROFILE + 1;
  VideoCodecProfile.H264PROFILE_SCALABLEHIGH = VideoCodecProfile.H264PROFILE_SCALABLEBASELINE + 1;
  VideoCodecProfile.H264PROFILE_STEREOHIGH = VideoCodecProfile.H264PROFILE_SCALABLEHIGH + 1;
  VideoCodecProfile.H264PROFILE_MULTIVIEWHIGH = VideoCodecProfile.H264PROFILE_STEREOHIGH + 1;
  VideoCodecProfile.H264PROFILE_MAX = VideoCodecProfile.H264PROFILE_MULTIVIEWHIGH;
  VideoCodecProfile.VP8PROFILE_MIN = VideoCodecProfile.H264PROFILE_MAX + 1;
  VideoCodecProfile.VP8PROFILE_ANY = VideoCodecProfile.VP8PROFILE_MIN;
  VideoCodecProfile.VP8PROFILE_MAX = VideoCodecProfile.VP8PROFILE_ANY;
  VideoCodecProfile.VP9PROFILE_MIN = VideoCodecProfile.VP8PROFILE_MAX + 1;
  VideoCodecProfile.VP9PROFILE_PROFILE0 = VideoCodecProfile.VP9PROFILE_MIN;
  VideoCodecProfile.VP9PROFILE_PROFILE1 = VideoCodecProfile.VP9PROFILE_PROFILE0 + 1;
  VideoCodecProfile.VP9PROFILE_PROFILE2 = VideoCodecProfile.VP9PROFILE_PROFILE1 + 1;
  VideoCodecProfile.VP9PROFILE_PROFILE3 = VideoCodecProfile.VP9PROFILE_PROFILE2 + 1;
  VideoCodecProfile.VP9PROFILE_MAX = VideoCodecProfile.VP9PROFILE_PROFILE3;
  VideoCodecProfile.HEVCPROFILE_MIN = VideoCodecProfile.VP9PROFILE_MAX + 1;
  VideoCodecProfile.HEVCPROFILE_MAIN = VideoCodecProfile.HEVCPROFILE_MIN;
  VideoCodecProfile.HEVCPROFILE_MAIN10 = VideoCodecProfile.HEVCPROFILE_MAIN + 1;
  VideoCodecProfile.HEVCPROFILE_MAIN_STILL_PICTURE = VideoCodecProfile.HEVCPROFILE_MAIN10 + 1;
  VideoCodecProfile.HEVCPROFILE_MAX = VideoCodecProfile.HEVCPROFILE_MAIN_STILL_PICTURE;
  VideoCodecProfile.VIDEO_CODEC_PROFILE_MAX = VideoCodecProfile.HEVCPROFILE_MAX;
  var CipherMode = {};
  CipherMode.UNENCRYPTED = 0;
  CipherMode.AES_CTR = CipherMode.UNENCRYPTED + 1;
  CipherMode.AES_CBC = CipherMode.AES_CTR + 1;
  CipherMode.MAX = CipherMode.AES_CBC;

  function Pattern(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Pattern.prototype.initDefaults_ = function() {
    this.encrypt_blocks = 0;
    this.skip_blocks = 0;
  };
  Pattern.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Pattern.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Pattern.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  Pattern.encodedSize = codec.kStructHeaderSize + 8;

  Pattern.decode = function(decoder) {
    var packed;
    var val = new Pattern();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.encrypt_blocks = decoder.decodeStruct(codec.Uint32);
    val.skip_blocks = decoder.decodeStruct(codec.Uint32);
    return val;
  };

  Pattern.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Pattern.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.encrypt_blocks);
    encoder.encodeStruct(codec.Uint32, val.skip_blocks);
  };
  function EncryptionScheme(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  EncryptionScheme.prototype.initDefaults_ = function() {
    this.mode = 0;
    this.pattern = null;
  };
  EncryptionScheme.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  EncryptionScheme.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, EncryptionScheme.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate EncryptionScheme.pattern
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, Pattern, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  EncryptionScheme.encodedSize = codec.kStructHeaderSize + 16;

  EncryptionScheme.decode = function(decoder) {
    var packed;
    var val = new EncryptionScheme();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.mode = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.pattern = decoder.decodeStructPointer(Pattern);
    return val;
  };

  EncryptionScheme.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(EncryptionScheme.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.mode);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(Pattern, val.pattern);
  };
  function AudioDecoderConfig(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AudioDecoderConfig.prototype.initDefaults_ = function() {
    this.codec = 0;
    this.sample_format = 0;
    this.channel_layout = 0;
    this.samples_per_second = 0;
    this.extra_data = null;
    this.seek_preroll = null;
    this.codec_delay = 0;
    this.encryption_scheme = null;
  };
  AudioDecoderConfig.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  AudioDecoderConfig.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, AudioDecoderConfig.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;





    
    // validate AudioDecoderConfig.extra_data
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 1, codec.Uint8, true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate AudioDecoderConfig.seek_preroll
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, common_custom_types$.TimeDelta, false);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate AudioDecoderConfig.encryption_scheme
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 40, EncryptionScheme, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AudioDecoderConfig.encodedSize = codec.kStructHeaderSize + 48;

  AudioDecoderConfig.decode = function(decoder) {
    var packed;
    var val = new AudioDecoderConfig();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.codec = decoder.decodeStruct(codec.Int32);
    val.sample_format = decoder.decodeStruct(codec.Int32);
    val.channel_layout = decoder.decodeStruct(codec.Int32);
    val.samples_per_second = decoder.decodeStruct(codec.Int32);
    val.extra_data = decoder.decodeArrayPointer(codec.Uint8);
    val.seek_preroll = decoder.decodeStructPointer(common_custom_types$.TimeDelta);
    val.codec_delay = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.encryption_scheme = decoder.decodeStructPointer(EncryptionScheme);
    return val;
  };

  AudioDecoderConfig.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AudioDecoderConfig.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.codec);
    encoder.encodeStruct(codec.Int32, val.sample_format);
    encoder.encodeStruct(codec.Int32, val.channel_layout);
    encoder.encodeStruct(codec.Int32, val.samples_per_second);
    encoder.encodeArrayPointer(codec.Uint8, val.extra_data);
    encoder.encodeStructPointer(common_custom_types$.TimeDelta, val.seek_preroll);
    encoder.encodeStruct(codec.Int32, val.codec_delay);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(EncryptionScheme, val.encryption_scheme);
  };
  function VideoDecoderConfig(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoDecoderConfig.prototype.initDefaults_ = function() {
    this.codec = 0;
    this.profile = 0;
    this.format = 0;
    this.color_space = 0;
    this.coded_size = null;
    this.visible_rect = null;
    this.natural_size = null;
    this.extra_data = null;
    this.encryption_scheme = null;
  };
  VideoDecoderConfig.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  VideoDecoderConfig.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, VideoDecoderConfig.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;





    
    // validate VideoDecoderConfig.coded_size
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, geometry$.Size, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate VideoDecoderConfig.visible_rect
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, geometry$.Rect, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate VideoDecoderConfig.natural_size
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, geometry$.Size, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate VideoDecoderConfig.extra_data
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 40, 1, codec.Uint8, true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate VideoDecoderConfig.encryption_scheme
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 48, EncryptionScheme, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VideoDecoderConfig.encodedSize = codec.kStructHeaderSize + 56;

  VideoDecoderConfig.decode = function(decoder) {
    var packed;
    var val = new VideoDecoderConfig();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.codec = decoder.decodeStruct(codec.Int32);
    val.profile = decoder.decodeStruct(codec.Int32);
    val.format = decoder.decodeStruct(codec.Int32);
    val.color_space = decoder.decodeStruct(codec.Int32);
    val.coded_size = decoder.decodeStructPointer(geometry$.Size);
    val.visible_rect = decoder.decodeStructPointer(geometry$.Rect);
    val.natural_size = decoder.decodeStructPointer(geometry$.Size);
    val.extra_data = decoder.decodeArrayPointer(codec.Uint8);
    val.encryption_scheme = decoder.decodeStructPointer(EncryptionScheme);
    return val;
  };

  VideoDecoderConfig.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoDecoderConfig.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.codec);
    encoder.encodeStruct(codec.Int32, val.profile);
    encoder.encodeStruct(codec.Int32, val.format);
    encoder.encodeStruct(codec.Int32, val.color_space);
    encoder.encodeStructPointer(geometry$.Size, val.coded_size);
    encoder.encodeStructPointer(geometry$.Rect, val.visible_rect);
    encoder.encodeStructPointer(geometry$.Size, val.natural_size);
    encoder.encodeArrayPointer(codec.Uint8, val.extra_data);
    encoder.encodeStructPointer(EncryptionScheme, val.encryption_scheme);
  };
  function SubsampleEntry(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SubsampleEntry.prototype.initDefaults_ = function() {
    this.clear_bytes = 0;
    this.cypher_bytes = 0;
  };
  SubsampleEntry.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  SubsampleEntry.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, SubsampleEntry.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  SubsampleEntry.encodedSize = codec.kStructHeaderSize + 8;

  SubsampleEntry.decode = function(decoder) {
    var packed;
    var val = new SubsampleEntry();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.clear_bytes = decoder.decodeStruct(codec.Uint32);
    val.cypher_bytes = decoder.decodeStruct(codec.Uint32);
    return val;
  };

  SubsampleEntry.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SubsampleEntry.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.clear_bytes);
    encoder.encodeStruct(codec.Uint32, val.cypher_bytes);
  };
  function DecryptConfig(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DecryptConfig.prototype.initDefaults_ = function() {
    this.key_id = null;
    this.iv = null;
    this.subsamples = null;
  };
  DecryptConfig.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  DecryptConfig.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, DecryptConfig.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate DecryptConfig.key_id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate DecryptConfig.iv
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate DecryptConfig.subsamples
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, new codec.PointerTo(SubsampleEntry), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DecryptConfig.encodedSize = codec.kStructHeaderSize + 24;

  DecryptConfig.decode = function(decoder) {
    var packed;
    var val = new DecryptConfig();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.key_id = decoder.decodeStruct(codec.String);
    val.iv = decoder.decodeStruct(codec.String);
    val.subsamples = decoder.decodeArrayPointer(new codec.PointerTo(SubsampleEntry));
    return val;
  };

  DecryptConfig.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DecryptConfig.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.key_id);
    encoder.encodeStruct(codec.String, val.iv);
    encoder.encodeArrayPointer(new codec.PointerTo(SubsampleEntry), val.subsamples);
  };
  function DecoderBuffer(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DecoderBuffer.prototype.initDefaults_ = function() {
    this.timestamp = null;
    this.duration = null;
    this.data_size = 0;
    this.is_key_frame = false;
    this.side_data = null;
    this.decrypt_config = null;
    this.front_discard = null;
    this.back_discard = null;
    this.splice_timestamp = null;
  };
  DecoderBuffer.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  DecoderBuffer.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, DecoderBuffer.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate DecoderBuffer.timestamp
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, common_custom_types$.TimeDelta, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate DecoderBuffer.duration
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, common_custom_types$.TimeDelta, false);
    if (err !== validator.validationError.NONE)
        return err;



    
    // validate DecoderBuffer.side_data
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 24, 1, codec.Uint8, true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate DecoderBuffer.decrypt_config
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, DecryptConfig, true);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate DecoderBuffer.front_discard
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 40, common_custom_types$.TimeDelta, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate DecoderBuffer.back_discard
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 48, common_custom_types$.TimeDelta, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate DecoderBuffer.splice_timestamp
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 56, common_custom_types$.TimeDelta, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DecoderBuffer.encodedSize = codec.kStructHeaderSize + 64;

  DecoderBuffer.decode = function(decoder) {
    var packed;
    var val = new DecoderBuffer();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.timestamp = decoder.decodeStructPointer(common_custom_types$.TimeDelta);
    val.duration = decoder.decodeStructPointer(common_custom_types$.TimeDelta);
    val.data_size = decoder.decodeStruct(codec.Uint32);
    val.is_key_frame = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.side_data = decoder.decodeArrayPointer(codec.Uint8);
    val.decrypt_config = decoder.decodeStructPointer(DecryptConfig);
    val.front_discard = decoder.decodeStructPointer(common_custom_types$.TimeDelta);
    val.back_discard = decoder.decodeStructPointer(common_custom_types$.TimeDelta);
    val.splice_timestamp = decoder.decodeStructPointer(common_custom_types$.TimeDelta);
    return val;
  };

  DecoderBuffer.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DecoderBuffer.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(common_custom_types$.TimeDelta, val.timestamp);
    encoder.encodeStructPointer(common_custom_types$.TimeDelta, val.duration);
    encoder.encodeStruct(codec.Uint32, val.data_size);
    encoder.encodeStruct(codec.Uint8, val.is_key_frame);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(codec.Uint8, val.side_data);
    encoder.encodeStructPointer(DecryptConfig, val.decrypt_config);
    encoder.encodeStructPointer(common_custom_types$.TimeDelta, val.front_discard);
    encoder.encodeStructPointer(common_custom_types$.TimeDelta, val.back_discard);
    encoder.encodeStructPointer(common_custom_types$.TimeDelta, val.splice_timestamp);
  };
  function AudioBuffer(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AudioBuffer.prototype.initDefaults_ = function() {
    this.sample_format = 0;
    this.channel_layout = 0;
    this.channel_count = 0;
    this.sample_rate = 0;
    this.frame_count = 0;
    this.end_of_stream = false;
    this.timestamp = null;
    this.data = null;
  };
  AudioBuffer.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  AudioBuffer.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, AudioBuffer.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;







    
    // validate AudioBuffer.timestamp
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, common_custom_types$.TimeDelta, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate AudioBuffer.data
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 32, 1, codec.Uint8, true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AudioBuffer.encodedSize = codec.kStructHeaderSize + 40;

  AudioBuffer.decode = function(decoder) {
    var packed;
    var val = new AudioBuffer();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.sample_format = decoder.decodeStruct(codec.Int32);
    val.channel_layout = decoder.decodeStruct(codec.Int32);
    val.channel_count = decoder.decodeStruct(codec.Int32);
    val.sample_rate = decoder.decodeStruct(codec.Int32);
    val.frame_count = decoder.decodeStruct(codec.Int32);
    val.end_of_stream = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.timestamp = decoder.decodeStructPointer(common_custom_types$.TimeDelta);
    val.data = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  AudioBuffer.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AudioBuffer.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.sample_format);
    encoder.encodeStruct(codec.Int32, val.channel_layout);
    encoder.encodeStruct(codec.Int32, val.channel_count);
    encoder.encodeStruct(codec.Int32, val.sample_rate);
    encoder.encodeStruct(codec.Int32, val.frame_count);
    encoder.encodeStruct(codec.Uint8, val.end_of_stream);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(common_custom_types$.TimeDelta, val.timestamp);
    encoder.encodeArrayPointer(codec.Uint8, val.data);
  };
  function VideoFrame(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoFrame.prototype.initDefaults_ = function() {
    this.format = 0;
    this.end_of_stream = false;
    this.coded_size = null;
    this.visible_rect = null;
    this.natural_size = null;
    this.timestamp = null;
    this.frame_data = null;
    this.y_stride = 0;
    this.frame_data_size = 0;
    this.u_stride = 0;
    this.v_stride = 0;
    this.y_offset = 0;
    this.u_offset = 0;
    this.v_offset = 0;
  };
  VideoFrame.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  VideoFrame.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, VideoFrame.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



    
    // validate VideoFrame.coded_size
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, geometry$.Size, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate VideoFrame.visible_rect
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, geometry$.Rect, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate VideoFrame.natural_size
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, geometry$.Size, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate VideoFrame.timestamp
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, common_custom_types$.TimeDelta, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate VideoFrame.frame_data
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 40, false)
    if (err !== validator.validationError.NONE)
        return err;








    return validator.validationError.NONE;
  };

  VideoFrame.encodedSize = codec.kStructHeaderSize + 88;

  VideoFrame.decode = function(decoder) {
    var packed;
    var val = new VideoFrame();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.format = decoder.decodeStruct(codec.Int32);
    val.end_of_stream = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.coded_size = decoder.decodeStructPointer(geometry$.Size);
    val.visible_rect = decoder.decodeStructPointer(geometry$.Rect);
    val.natural_size = decoder.decodeStructPointer(geometry$.Size);
    val.timestamp = decoder.decodeStructPointer(common_custom_types$.TimeDelta);
    val.frame_data = decoder.decodeStruct(codec.Handle);
    val.y_stride = decoder.decodeStruct(codec.Int32);
    val.frame_data_size = decoder.decodeStruct(codec.Uint64);
    val.u_stride = decoder.decodeStruct(codec.Int32);
    val.v_stride = decoder.decodeStruct(codec.Int32);
    val.y_offset = decoder.decodeStruct(codec.Uint64);
    val.u_offset = decoder.decodeStruct(codec.Uint64);
    val.v_offset = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  VideoFrame.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoFrame.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.format);
    encoder.encodeStruct(codec.Uint8, val.end_of_stream);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(geometry$.Size, val.coded_size);
    encoder.encodeStructPointer(geometry$.Rect, val.visible_rect);
    encoder.encodeStructPointer(geometry$.Size, val.natural_size);
    encoder.encodeStructPointer(common_custom_types$.TimeDelta, val.timestamp);
    encoder.encodeStruct(codec.Handle, val.frame_data);
    encoder.encodeStruct(codec.Int32, val.y_stride);
    encoder.encodeStruct(codec.Uint64, val.frame_data_size);
    encoder.encodeStruct(codec.Int32, val.u_stride);
    encoder.encodeStruct(codec.Int32, val.v_stride);
    encoder.encodeStruct(codec.Uint64, val.y_offset);
    encoder.encodeStruct(codec.Uint64, val.u_offset);
    encoder.encodeStruct(codec.Uint64, val.v_offset);
  };
  function PipelineStatistics(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PipelineStatistics.prototype.initDefaults_ = function() {
    this.audio_bytes_decoded = 0;
    this.video_bytes_decoded = 0;
    this.video_frames_decoded = 0;
    this.video_frames_dropped = 0;
    this.audio_memory_usage = 0;
    this.video_memory_usage = 0;
  };
  PipelineStatistics.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PipelineStatistics.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PipelineStatistics.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;







    return validator.validationError.NONE;
  };

  PipelineStatistics.encodedSize = codec.kStructHeaderSize + 40;

  PipelineStatistics.decode = function(decoder) {
    var packed;
    var val = new PipelineStatistics();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.audio_bytes_decoded = decoder.decodeStruct(codec.Uint64);
    val.video_bytes_decoded = decoder.decodeStruct(codec.Uint64);
    val.video_frames_decoded = decoder.decodeStruct(codec.Uint32);
    val.video_frames_dropped = decoder.decodeStruct(codec.Uint32);
    val.audio_memory_usage = decoder.decodeStruct(codec.Int64);
    val.video_memory_usage = decoder.decodeStruct(codec.Int64);
    return val;
  };

  PipelineStatistics.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PipelineStatistics.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.audio_bytes_decoded);
    encoder.encodeStruct(codec.Uint64, val.video_bytes_decoded);
    encoder.encodeStruct(codec.Uint32, val.video_frames_decoded);
    encoder.encodeStruct(codec.Uint32, val.video_frames_dropped);
    encoder.encodeStruct(codec.Int64, val.audio_memory_usage);
    encoder.encodeStruct(codec.Int64, val.video_memory_usage);
  };

  var exports = {};
  exports.BufferingState = BufferingState;
  exports.DecodeStatus = DecodeStatus;
  exports.AudioCodec = AudioCodec;
  exports.ChannelLayout = ChannelLayout;
  exports.SampleFormat = SampleFormat;
  exports.VideoFormat = VideoFormat;
  exports.ColorSpace = ColorSpace;
  exports.VideoCodec = VideoCodec;
  exports.VideoCodecProfile = VideoCodecProfile;
  exports.CipherMode = CipherMode;
  exports.Pattern = Pattern;
  exports.EncryptionScheme = EncryptionScheme;
  exports.AudioDecoderConfig = AudioDecoderConfig;
  exports.VideoDecoderConfig = VideoDecoderConfig;
  exports.SubsampleEntry = SubsampleEntry;
  exports.DecryptConfig = DecryptConfig;
  exports.DecoderBuffer = DecoderBuffer;
  exports.AudioBuffer = AudioBuffer;
  exports.VideoFrame = VideoFrame;
  exports.PipelineStatistics = PipelineStatistics;

  return exports;
});
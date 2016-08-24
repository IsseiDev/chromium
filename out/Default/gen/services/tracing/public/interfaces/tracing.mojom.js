// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("services/tracing/public/interfaces/tracing.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {

  function StartupPerformanceTimes(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  StartupPerformanceTimes.prototype.initDefaults_ = function() {
    this.shell_process_creation_time = 0;
    this.shell_main_entry_point_time = 0;
    this.browser_message_loop_start_ticks = 0;
    this.browser_window_display_ticks = 0;
    this.browser_open_tabs_time_delta = 0;
    this.first_web_contents_main_frame_load_ticks = 0;
    this.first_visually_non_empty_layout_ticks = 0;
  };
  StartupPerformanceTimes.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  StartupPerformanceTimes.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, StartupPerformanceTimes.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;








    return validator.validationError.NONE;
  };

  StartupPerformanceTimes.encodedSize = codec.kStructHeaderSize + 56;

  StartupPerformanceTimes.decode = function(decoder) {
    var packed;
    var val = new StartupPerformanceTimes();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.shell_process_creation_time = decoder.decodeStruct(codec.Int64);
    val.shell_main_entry_point_time = decoder.decodeStruct(codec.Int64);
    val.browser_message_loop_start_ticks = decoder.decodeStruct(codec.Int64);
    val.browser_window_display_ticks = decoder.decodeStruct(codec.Int64);
    val.browser_open_tabs_time_delta = decoder.decodeStruct(codec.Int64);
    val.first_web_contents_main_frame_load_ticks = decoder.decodeStruct(codec.Int64);
    val.first_visually_non_empty_layout_ticks = decoder.decodeStruct(codec.Int64);
    return val;
  };

  StartupPerformanceTimes.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(StartupPerformanceTimes.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.shell_process_creation_time);
    encoder.encodeStruct(codec.Int64, val.shell_main_entry_point_time);
    encoder.encodeStruct(codec.Int64, val.browser_message_loop_start_ticks);
    encoder.encodeStruct(codec.Int64, val.browser_window_display_ticks);
    encoder.encodeStruct(codec.Int64, val.browser_open_tabs_time_delta);
    encoder.encodeStruct(codec.Int64, val.first_web_contents_main_frame_load_ticks);
    encoder.encodeStruct(codec.Int64, val.first_visually_non_empty_layout_ticks);
  };
  function Provider_StartTracing_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Provider_StartTracing_Params.prototype.initDefaults_ = function() {
    this.categories = null;
    this.recorder = null;
  };
  Provider_StartTracing_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Provider_StartTracing_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Provider_StartTracing_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Provider_StartTracing_Params.categories
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Provider_StartTracing_Params.recorder
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 8, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Provider_StartTracing_Params.encodedSize = codec.kStructHeaderSize + 16;

  Provider_StartTracing_Params.decode = function(decoder) {
    var packed;
    var val = new Provider_StartTracing_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.categories = decoder.decodeStruct(codec.String);
    val.recorder = decoder.decodeStruct(codec.Interface);
    return val;
  };

  Provider_StartTracing_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Provider_StartTracing_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.categories);
    encoder.encodeStruct(codec.Interface, val.recorder);
  };
  function Provider_StopTracing_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Provider_StopTracing_Params.prototype.initDefaults_ = function() {
  };
  Provider_StopTracing_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Provider_StopTracing_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Provider_StopTracing_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Provider_StopTracing_Params.encodedSize = codec.kStructHeaderSize + 0;

  Provider_StopTracing_Params.decode = function(decoder) {
    var packed;
    var val = new Provider_StopTracing_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Provider_StopTracing_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Provider_StopTracing_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function Recorder_Record_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Recorder_Record_Params.prototype.initDefaults_ = function() {
    this.json = null;
  };
  Recorder_Record_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Recorder_Record_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Recorder_Record_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Recorder_Record_Params.json
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Recorder_Record_Params.encodedSize = codec.kStructHeaderSize + 8;

  Recorder_Record_Params.decode = function(decoder) {
    var packed;
    var val = new Recorder_Record_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.json = decoder.decodeStruct(codec.String);
    return val;
  };

  Recorder_Record_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Recorder_Record_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.json);
  };
  function Collector_Start_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Collector_Start_Params.prototype.initDefaults_ = function() {
    this.stream = null;
    this.categories = null;
  };
  Collector_Start_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Collector_Start_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Collector_Start_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Collector_Start_Params.stream
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Collector_Start_Params.categories
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Collector_Start_Params.encodedSize = codec.kStructHeaderSize + 16;

  Collector_Start_Params.decode = function(decoder) {
    var packed;
    var val = new Collector_Start_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.stream = decoder.decodeStruct(codec.Handle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.categories = decoder.decodeStruct(codec.String);
    return val;
  };

  Collector_Start_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Collector_Start_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.stream);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.categories);
  };
  function Collector_StopAndFlush_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Collector_StopAndFlush_Params.prototype.initDefaults_ = function() {
  };
  Collector_StopAndFlush_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Collector_StopAndFlush_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Collector_StopAndFlush_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Collector_StopAndFlush_Params.encodedSize = codec.kStructHeaderSize + 0;

  Collector_StopAndFlush_Params.decode = function(decoder) {
    var packed;
    var val = new Collector_StopAndFlush_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Collector_StopAndFlush_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Collector_StopAndFlush_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function StartupPerformanceDataCollector_SetShellProcessCreationTime_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  StartupPerformanceDataCollector_SetShellProcessCreationTime_Params.prototype.initDefaults_ = function() {
    this.time = 0;
  };
  StartupPerformanceDataCollector_SetShellProcessCreationTime_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  StartupPerformanceDataCollector_SetShellProcessCreationTime_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, StartupPerformanceDataCollector_SetShellProcessCreationTime_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  StartupPerformanceDataCollector_SetShellProcessCreationTime_Params.encodedSize = codec.kStructHeaderSize + 8;

  StartupPerformanceDataCollector_SetShellProcessCreationTime_Params.decode = function(decoder) {
    var packed;
    var val = new StartupPerformanceDataCollector_SetShellProcessCreationTime_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.time = decoder.decodeStruct(codec.Int64);
    return val;
  };

  StartupPerformanceDataCollector_SetShellProcessCreationTime_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(StartupPerformanceDataCollector_SetShellProcessCreationTime_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.time);
  };
  function StartupPerformanceDataCollector_SetShellMainEntryPointTime_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  StartupPerformanceDataCollector_SetShellMainEntryPointTime_Params.prototype.initDefaults_ = function() {
    this.time = 0;
  };
  StartupPerformanceDataCollector_SetShellMainEntryPointTime_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  StartupPerformanceDataCollector_SetShellMainEntryPointTime_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, StartupPerformanceDataCollector_SetShellMainEntryPointTime_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  StartupPerformanceDataCollector_SetShellMainEntryPointTime_Params.encodedSize = codec.kStructHeaderSize + 8;

  StartupPerformanceDataCollector_SetShellMainEntryPointTime_Params.decode = function(decoder) {
    var packed;
    var val = new StartupPerformanceDataCollector_SetShellMainEntryPointTime_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.time = decoder.decodeStruct(codec.Int64);
    return val;
  };

  StartupPerformanceDataCollector_SetShellMainEntryPointTime_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(StartupPerformanceDataCollector_SetShellMainEntryPointTime_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.time);
  };
  function StartupPerformanceDataCollector_SetBrowserMessageLoopStartTicks_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  StartupPerformanceDataCollector_SetBrowserMessageLoopStartTicks_Params.prototype.initDefaults_ = function() {
    this.ticks = 0;
  };
  StartupPerformanceDataCollector_SetBrowserMessageLoopStartTicks_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  StartupPerformanceDataCollector_SetBrowserMessageLoopStartTicks_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, StartupPerformanceDataCollector_SetBrowserMessageLoopStartTicks_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  StartupPerformanceDataCollector_SetBrowserMessageLoopStartTicks_Params.encodedSize = codec.kStructHeaderSize + 8;

  StartupPerformanceDataCollector_SetBrowserMessageLoopStartTicks_Params.decode = function(decoder) {
    var packed;
    var val = new StartupPerformanceDataCollector_SetBrowserMessageLoopStartTicks_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.ticks = decoder.decodeStruct(codec.Int64);
    return val;
  };

  StartupPerformanceDataCollector_SetBrowserMessageLoopStartTicks_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(StartupPerformanceDataCollector_SetBrowserMessageLoopStartTicks_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.ticks);
  };
  function StartupPerformanceDataCollector_SetBrowserWindowDisplayTicks_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  StartupPerformanceDataCollector_SetBrowserWindowDisplayTicks_Params.prototype.initDefaults_ = function() {
    this.ticks = 0;
  };
  StartupPerformanceDataCollector_SetBrowserWindowDisplayTicks_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  StartupPerformanceDataCollector_SetBrowserWindowDisplayTicks_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, StartupPerformanceDataCollector_SetBrowserWindowDisplayTicks_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  StartupPerformanceDataCollector_SetBrowserWindowDisplayTicks_Params.encodedSize = codec.kStructHeaderSize + 8;

  StartupPerformanceDataCollector_SetBrowserWindowDisplayTicks_Params.decode = function(decoder) {
    var packed;
    var val = new StartupPerformanceDataCollector_SetBrowserWindowDisplayTicks_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.ticks = decoder.decodeStruct(codec.Int64);
    return val;
  };

  StartupPerformanceDataCollector_SetBrowserWindowDisplayTicks_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(StartupPerformanceDataCollector_SetBrowserWindowDisplayTicks_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.ticks);
  };
  function StartupPerformanceDataCollector_SetBrowserOpenTabsTimeDelta_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  StartupPerformanceDataCollector_SetBrowserOpenTabsTimeDelta_Params.prototype.initDefaults_ = function() {
    this.delta = 0;
  };
  StartupPerformanceDataCollector_SetBrowserOpenTabsTimeDelta_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  StartupPerformanceDataCollector_SetBrowserOpenTabsTimeDelta_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, StartupPerformanceDataCollector_SetBrowserOpenTabsTimeDelta_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  StartupPerformanceDataCollector_SetBrowserOpenTabsTimeDelta_Params.encodedSize = codec.kStructHeaderSize + 8;

  StartupPerformanceDataCollector_SetBrowserOpenTabsTimeDelta_Params.decode = function(decoder) {
    var packed;
    var val = new StartupPerformanceDataCollector_SetBrowserOpenTabsTimeDelta_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.delta = decoder.decodeStruct(codec.Int64);
    return val;
  };

  StartupPerformanceDataCollector_SetBrowserOpenTabsTimeDelta_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(StartupPerformanceDataCollector_SetBrowserOpenTabsTimeDelta_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.delta);
  };
  function StartupPerformanceDataCollector_SetFirstWebContentsMainFrameLoadTicks_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  StartupPerformanceDataCollector_SetFirstWebContentsMainFrameLoadTicks_Params.prototype.initDefaults_ = function() {
    this.ticks = 0;
  };
  StartupPerformanceDataCollector_SetFirstWebContentsMainFrameLoadTicks_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  StartupPerformanceDataCollector_SetFirstWebContentsMainFrameLoadTicks_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, StartupPerformanceDataCollector_SetFirstWebContentsMainFrameLoadTicks_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  StartupPerformanceDataCollector_SetFirstWebContentsMainFrameLoadTicks_Params.encodedSize = codec.kStructHeaderSize + 8;

  StartupPerformanceDataCollector_SetFirstWebContentsMainFrameLoadTicks_Params.decode = function(decoder) {
    var packed;
    var val = new StartupPerformanceDataCollector_SetFirstWebContentsMainFrameLoadTicks_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.ticks = decoder.decodeStruct(codec.Int64);
    return val;
  };

  StartupPerformanceDataCollector_SetFirstWebContentsMainFrameLoadTicks_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(StartupPerformanceDataCollector_SetFirstWebContentsMainFrameLoadTicks_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.ticks);
  };
  function StartupPerformanceDataCollector_SetFirstVisuallyNonEmptyLayoutTicks_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  StartupPerformanceDataCollector_SetFirstVisuallyNonEmptyLayoutTicks_Params.prototype.initDefaults_ = function() {
    this.ticks = 0;
  };
  StartupPerformanceDataCollector_SetFirstVisuallyNonEmptyLayoutTicks_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  StartupPerformanceDataCollector_SetFirstVisuallyNonEmptyLayoutTicks_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, StartupPerformanceDataCollector_SetFirstVisuallyNonEmptyLayoutTicks_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  StartupPerformanceDataCollector_SetFirstVisuallyNonEmptyLayoutTicks_Params.encodedSize = codec.kStructHeaderSize + 8;

  StartupPerformanceDataCollector_SetFirstVisuallyNonEmptyLayoutTicks_Params.decode = function(decoder) {
    var packed;
    var val = new StartupPerformanceDataCollector_SetFirstVisuallyNonEmptyLayoutTicks_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.ticks = decoder.decodeStruct(codec.Int64);
    return val;
  };

  StartupPerformanceDataCollector_SetFirstVisuallyNonEmptyLayoutTicks_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(StartupPerformanceDataCollector_SetFirstVisuallyNonEmptyLayoutTicks_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.ticks);
  };
  function StartupPerformanceDataCollector_GetStartupPerformanceTimes_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  StartupPerformanceDataCollector_GetStartupPerformanceTimes_Params.prototype.initDefaults_ = function() {
  };
  StartupPerformanceDataCollector_GetStartupPerformanceTimes_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  StartupPerformanceDataCollector_GetStartupPerformanceTimes_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, StartupPerformanceDataCollector_GetStartupPerformanceTimes_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  StartupPerformanceDataCollector_GetStartupPerformanceTimes_Params.encodedSize = codec.kStructHeaderSize + 0;

  StartupPerformanceDataCollector_GetStartupPerformanceTimes_Params.decode = function(decoder) {
    var packed;
    var val = new StartupPerformanceDataCollector_GetStartupPerformanceTimes_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  StartupPerformanceDataCollector_GetStartupPerformanceTimes_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(StartupPerformanceDataCollector_GetStartupPerformanceTimes_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function StartupPerformanceDataCollector_GetStartupPerformanceTimes_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  StartupPerformanceDataCollector_GetStartupPerformanceTimes_ResponseParams.prototype.initDefaults_ = function() {
    this.times = null;
  };
  StartupPerformanceDataCollector_GetStartupPerformanceTimes_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  StartupPerformanceDataCollector_GetStartupPerformanceTimes_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, StartupPerformanceDataCollector_GetStartupPerformanceTimes_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate StartupPerformanceDataCollector_GetStartupPerformanceTimes_ResponseParams.times
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, StartupPerformanceTimes, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  StartupPerformanceDataCollector_GetStartupPerformanceTimes_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  StartupPerformanceDataCollector_GetStartupPerformanceTimes_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new StartupPerformanceDataCollector_GetStartupPerformanceTimes_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.times = decoder.decodeStructPointer(StartupPerformanceTimes);
    return val;
  };

  StartupPerformanceDataCollector_GetStartupPerformanceTimes_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(StartupPerformanceDataCollector_GetStartupPerformanceTimes_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(StartupPerformanceTimes, val.times);
  };
  function Factory_CreateRecorder_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Factory_CreateRecorder_Params.prototype.initDefaults_ = function() {
    this.provider = null;
  };
  Factory_CreateRecorder_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Factory_CreateRecorder_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Factory_CreateRecorder_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Factory_CreateRecorder_Params.provider
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Factory_CreateRecorder_Params.encodedSize = codec.kStructHeaderSize + 8;

  Factory_CreateRecorder_Params.decode = function(decoder) {
    var packed;
    var val = new Factory_CreateRecorder_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.provider = decoder.decodeStruct(codec.Interface);
    return val;
  };

  Factory_CreateRecorder_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Factory_CreateRecorder_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Interface, val.provider);
  };
  var kProvider_StartTracing_Name = 0;
  var kProvider_StopTracing_Name = 1;

  function ProviderProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  ProviderProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  ProviderProxy.prototype.startTracing = function(categories, recorder) {
    var params = new Provider_StartTracing_Params();
    params.categories = categories;
    params.recorder = core.isHandle(recorder) ? recorder : connection.bindImpl(recorder, Recorder);
    var builder = new codec.MessageBuilder(
        kProvider_StartTracing_Name,
        codec.align(Provider_StartTracing_Params.encodedSize));
    builder.encodeStruct(Provider_StartTracing_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ProviderProxy.prototype.stopTracing = function() {
    var params = new Provider_StopTracing_Params();
    var builder = new codec.MessageBuilder(
        kProvider_StopTracing_Name,
        codec.align(Provider_StopTracing_Params.encodedSize));
    builder.encodeStruct(Provider_StopTracing_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ProviderStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  ProviderStub.prototype = Object.create(bindings.StubBase.prototype);
  ProviderStub.prototype.startTracing = function(categories, recorder) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.startTracing && bindings.StubBindings(this).delegate.startTracing(categories, connection.bindHandleToProxy(recorder, Recorder));
  }
  ProviderStub.prototype.stopTracing = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.stopTracing && bindings.StubBindings(this).delegate.stopTracing();
  }

  ProviderStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kProvider_StartTracing_Name:
      var params = reader.decodeStruct(Provider_StartTracing_Params);
      this.startTracing(params.categories, params.recorder);
      return true;
    case kProvider_StopTracing_Name:
      var params = reader.decodeStruct(Provider_StopTracing_Params);
      this.stopTracing();
      return true;
    default:
      return false;
    }
  };

  ProviderStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateProviderRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kProvider_StartTracing_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Provider_StartTracing_Params;
      break;
      case kProvider_StopTracing_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Provider_StopTracing_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateProviderResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var Provider = {
    name: 'tracing::mojom::Provider',
    proxyClass: ProviderProxy,
    stubClass: ProviderStub,
    validateRequest: validateProviderRequest,
    validateResponse: null,
  };
  ProviderStub.prototype.validator = validateProviderRequest;
  ProviderProxy.prototype.validator = null;
  var kRecorder_Record_Name = 0;

  function RecorderProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  RecorderProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  RecorderProxy.prototype.record = function(json) {
    var params = new Recorder_Record_Params();
    params.json = json;
    var builder = new codec.MessageBuilder(
        kRecorder_Record_Name,
        codec.align(Recorder_Record_Params.encodedSize));
    builder.encodeStruct(Recorder_Record_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function RecorderStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  RecorderStub.prototype = Object.create(bindings.StubBase.prototype);
  RecorderStub.prototype.record = function(json) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.record && bindings.StubBindings(this).delegate.record(json);
  }

  RecorderStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kRecorder_Record_Name:
      var params = reader.decodeStruct(Recorder_Record_Params);
      this.record(params.json);
      return true;
    default:
      return false;
    }
  };

  RecorderStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateRecorderRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kRecorder_Record_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Recorder_Record_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateRecorderResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var Recorder = {
    name: 'tracing::mojom::Recorder',
    proxyClass: RecorderProxy,
    stubClass: RecorderStub,
    validateRequest: validateRecorderRequest,
    validateResponse: null,
  };
  RecorderStub.prototype.validator = validateRecorderRequest;
  RecorderProxy.prototype.validator = null;
  var kCollector_Start_Name = 0;
  var kCollector_StopAndFlush_Name = 1;

  function CollectorProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  CollectorProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  CollectorProxy.prototype.start = function(stream, categories) {
    var params = new Collector_Start_Params();
    params.stream = stream;
    params.categories = categories;
    var builder = new codec.MessageBuilder(
        kCollector_Start_Name,
        codec.align(Collector_Start_Params.encodedSize));
    builder.encodeStruct(Collector_Start_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  CollectorProxy.prototype.stopAndFlush = function() {
    var params = new Collector_StopAndFlush_Params();
    var builder = new codec.MessageBuilder(
        kCollector_StopAndFlush_Name,
        codec.align(Collector_StopAndFlush_Params.encodedSize));
    builder.encodeStruct(Collector_StopAndFlush_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function CollectorStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  CollectorStub.prototype = Object.create(bindings.StubBase.prototype);
  CollectorStub.prototype.start = function(stream, categories) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.start && bindings.StubBindings(this).delegate.start(stream, categories);
  }
  CollectorStub.prototype.stopAndFlush = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.stopAndFlush && bindings.StubBindings(this).delegate.stopAndFlush();
  }

  CollectorStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kCollector_Start_Name:
      var params = reader.decodeStruct(Collector_Start_Params);
      this.start(params.stream, params.categories);
      return true;
    case kCollector_StopAndFlush_Name:
      var params = reader.decodeStruct(Collector_StopAndFlush_Params);
      this.stopAndFlush();
      return true;
    default:
      return false;
    }
  };

  CollectorStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateCollectorRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kCollector_Start_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Collector_Start_Params;
      break;
      case kCollector_StopAndFlush_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Collector_StopAndFlush_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateCollectorResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var Collector = {
    name: 'tracing::mojom::Collector',
    proxyClass: CollectorProxy,
    stubClass: CollectorStub,
    validateRequest: validateCollectorRequest,
    validateResponse: null,
  };
  CollectorStub.prototype.validator = validateCollectorRequest;
  CollectorProxy.prototype.validator = null;
  var kStartupPerformanceDataCollector_SetShellProcessCreationTime_Name = 0;
  var kStartupPerformanceDataCollector_SetShellMainEntryPointTime_Name = 1;
  var kStartupPerformanceDataCollector_SetBrowserMessageLoopStartTicks_Name = 2;
  var kStartupPerformanceDataCollector_SetBrowserWindowDisplayTicks_Name = 3;
  var kStartupPerformanceDataCollector_SetBrowserOpenTabsTimeDelta_Name = 4;
  var kStartupPerformanceDataCollector_SetFirstWebContentsMainFrameLoadTicks_Name = 5;
  var kStartupPerformanceDataCollector_SetFirstVisuallyNonEmptyLayoutTicks_Name = 6;
  var kStartupPerformanceDataCollector_GetStartupPerformanceTimes_Name = 7;

  function StartupPerformanceDataCollectorProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  StartupPerformanceDataCollectorProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  StartupPerformanceDataCollectorProxy.prototype.setShellProcessCreationTime = function(time) {
    var params = new StartupPerformanceDataCollector_SetShellProcessCreationTime_Params();
    params.time = time;
    var builder = new codec.MessageBuilder(
        kStartupPerformanceDataCollector_SetShellProcessCreationTime_Name,
        codec.align(StartupPerformanceDataCollector_SetShellProcessCreationTime_Params.encodedSize));
    builder.encodeStruct(StartupPerformanceDataCollector_SetShellProcessCreationTime_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  StartupPerformanceDataCollectorProxy.prototype.setShellMainEntryPointTime = function(time) {
    var params = new StartupPerformanceDataCollector_SetShellMainEntryPointTime_Params();
    params.time = time;
    var builder = new codec.MessageBuilder(
        kStartupPerformanceDataCollector_SetShellMainEntryPointTime_Name,
        codec.align(StartupPerformanceDataCollector_SetShellMainEntryPointTime_Params.encodedSize));
    builder.encodeStruct(StartupPerformanceDataCollector_SetShellMainEntryPointTime_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  StartupPerformanceDataCollectorProxy.prototype.setBrowserMessageLoopStartTicks = function(ticks) {
    var params = new StartupPerformanceDataCollector_SetBrowserMessageLoopStartTicks_Params();
    params.ticks = ticks;
    var builder = new codec.MessageBuilder(
        kStartupPerformanceDataCollector_SetBrowserMessageLoopStartTicks_Name,
        codec.align(StartupPerformanceDataCollector_SetBrowserMessageLoopStartTicks_Params.encodedSize));
    builder.encodeStruct(StartupPerformanceDataCollector_SetBrowserMessageLoopStartTicks_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  StartupPerformanceDataCollectorProxy.prototype.setBrowserWindowDisplayTicks = function(ticks) {
    var params = new StartupPerformanceDataCollector_SetBrowserWindowDisplayTicks_Params();
    params.ticks = ticks;
    var builder = new codec.MessageBuilder(
        kStartupPerformanceDataCollector_SetBrowserWindowDisplayTicks_Name,
        codec.align(StartupPerformanceDataCollector_SetBrowserWindowDisplayTicks_Params.encodedSize));
    builder.encodeStruct(StartupPerformanceDataCollector_SetBrowserWindowDisplayTicks_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  StartupPerformanceDataCollectorProxy.prototype.setBrowserOpenTabsTimeDelta = function(delta) {
    var params = new StartupPerformanceDataCollector_SetBrowserOpenTabsTimeDelta_Params();
    params.delta = delta;
    var builder = new codec.MessageBuilder(
        kStartupPerformanceDataCollector_SetBrowserOpenTabsTimeDelta_Name,
        codec.align(StartupPerformanceDataCollector_SetBrowserOpenTabsTimeDelta_Params.encodedSize));
    builder.encodeStruct(StartupPerformanceDataCollector_SetBrowserOpenTabsTimeDelta_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  StartupPerformanceDataCollectorProxy.prototype.setFirstWebContentsMainFrameLoadTicks = function(ticks) {
    var params = new StartupPerformanceDataCollector_SetFirstWebContentsMainFrameLoadTicks_Params();
    params.ticks = ticks;
    var builder = new codec.MessageBuilder(
        kStartupPerformanceDataCollector_SetFirstWebContentsMainFrameLoadTicks_Name,
        codec.align(StartupPerformanceDataCollector_SetFirstWebContentsMainFrameLoadTicks_Params.encodedSize));
    builder.encodeStruct(StartupPerformanceDataCollector_SetFirstWebContentsMainFrameLoadTicks_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  StartupPerformanceDataCollectorProxy.prototype.setFirstVisuallyNonEmptyLayoutTicks = function(ticks) {
    var params = new StartupPerformanceDataCollector_SetFirstVisuallyNonEmptyLayoutTicks_Params();
    params.ticks = ticks;
    var builder = new codec.MessageBuilder(
        kStartupPerformanceDataCollector_SetFirstVisuallyNonEmptyLayoutTicks_Name,
        codec.align(StartupPerformanceDataCollector_SetFirstVisuallyNonEmptyLayoutTicks_Params.encodedSize));
    builder.encodeStruct(StartupPerformanceDataCollector_SetFirstVisuallyNonEmptyLayoutTicks_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  StartupPerformanceDataCollectorProxy.prototype.getStartupPerformanceTimes = function() {
    var params = new StartupPerformanceDataCollector_GetStartupPerformanceTimes_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kStartupPerformanceDataCollector_GetStartupPerformanceTimes_Name,
          codec.align(StartupPerformanceDataCollector_GetStartupPerformanceTimes_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(StartupPerformanceDataCollector_GetStartupPerformanceTimes_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(StartupPerformanceDataCollector_GetStartupPerformanceTimes_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function StartupPerformanceDataCollectorStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  StartupPerformanceDataCollectorStub.prototype = Object.create(bindings.StubBase.prototype);
  StartupPerformanceDataCollectorStub.prototype.setShellProcessCreationTime = function(time) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.setShellProcessCreationTime && bindings.StubBindings(this).delegate.setShellProcessCreationTime(time);
  }
  StartupPerformanceDataCollectorStub.prototype.setShellMainEntryPointTime = function(time) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.setShellMainEntryPointTime && bindings.StubBindings(this).delegate.setShellMainEntryPointTime(time);
  }
  StartupPerformanceDataCollectorStub.prototype.setBrowserMessageLoopStartTicks = function(ticks) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.setBrowserMessageLoopStartTicks && bindings.StubBindings(this).delegate.setBrowserMessageLoopStartTicks(ticks);
  }
  StartupPerformanceDataCollectorStub.prototype.setBrowserWindowDisplayTicks = function(ticks) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.setBrowserWindowDisplayTicks && bindings.StubBindings(this).delegate.setBrowserWindowDisplayTicks(ticks);
  }
  StartupPerformanceDataCollectorStub.prototype.setBrowserOpenTabsTimeDelta = function(delta) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.setBrowserOpenTabsTimeDelta && bindings.StubBindings(this).delegate.setBrowserOpenTabsTimeDelta(delta);
  }
  StartupPerformanceDataCollectorStub.prototype.setFirstWebContentsMainFrameLoadTicks = function(ticks) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.setFirstWebContentsMainFrameLoadTicks && bindings.StubBindings(this).delegate.setFirstWebContentsMainFrameLoadTicks(ticks);
  }
  StartupPerformanceDataCollectorStub.prototype.setFirstVisuallyNonEmptyLayoutTicks = function(ticks) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.setFirstVisuallyNonEmptyLayoutTicks && bindings.StubBindings(this).delegate.setFirstVisuallyNonEmptyLayoutTicks(ticks);
  }
  StartupPerformanceDataCollectorStub.prototype.getStartupPerformanceTimes = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.getStartupPerformanceTimes && bindings.StubBindings(this).delegate.getStartupPerformanceTimes();
  }

  StartupPerformanceDataCollectorStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kStartupPerformanceDataCollector_SetShellProcessCreationTime_Name:
      var params = reader.decodeStruct(StartupPerformanceDataCollector_SetShellProcessCreationTime_Params);
      this.setShellProcessCreationTime(params.time);
      return true;
    case kStartupPerformanceDataCollector_SetShellMainEntryPointTime_Name:
      var params = reader.decodeStruct(StartupPerformanceDataCollector_SetShellMainEntryPointTime_Params);
      this.setShellMainEntryPointTime(params.time);
      return true;
    case kStartupPerformanceDataCollector_SetBrowserMessageLoopStartTicks_Name:
      var params = reader.decodeStruct(StartupPerformanceDataCollector_SetBrowserMessageLoopStartTicks_Params);
      this.setBrowserMessageLoopStartTicks(params.ticks);
      return true;
    case kStartupPerformanceDataCollector_SetBrowserWindowDisplayTicks_Name:
      var params = reader.decodeStruct(StartupPerformanceDataCollector_SetBrowserWindowDisplayTicks_Params);
      this.setBrowserWindowDisplayTicks(params.ticks);
      return true;
    case kStartupPerformanceDataCollector_SetBrowserOpenTabsTimeDelta_Name:
      var params = reader.decodeStruct(StartupPerformanceDataCollector_SetBrowserOpenTabsTimeDelta_Params);
      this.setBrowserOpenTabsTimeDelta(params.delta);
      return true;
    case kStartupPerformanceDataCollector_SetFirstWebContentsMainFrameLoadTicks_Name:
      var params = reader.decodeStruct(StartupPerformanceDataCollector_SetFirstWebContentsMainFrameLoadTicks_Params);
      this.setFirstWebContentsMainFrameLoadTicks(params.ticks);
      return true;
    case kStartupPerformanceDataCollector_SetFirstVisuallyNonEmptyLayoutTicks_Name:
      var params = reader.decodeStruct(StartupPerformanceDataCollector_SetFirstVisuallyNonEmptyLayoutTicks_Params);
      this.setFirstVisuallyNonEmptyLayoutTicks(params.ticks);
      return true;
    default:
      return false;
    }
  };

  StartupPerformanceDataCollectorStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kStartupPerformanceDataCollector_GetStartupPerformanceTimes_Name:
      var params = reader.decodeStruct(StartupPerformanceDataCollector_GetStartupPerformanceTimes_Params);
      return this.getStartupPerformanceTimes().then(function(response) {
        var responseParams =
            new StartupPerformanceDataCollector_GetStartupPerformanceTimes_ResponseParams();
        responseParams.times = response.times;
        var builder = new codec.MessageWithRequestIDBuilder(
            kStartupPerformanceDataCollector_GetStartupPerformanceTimes_Name,
            codec.align(StartupPerformanceDataCollector_GetStartupPerformanceTimes_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(StartupPerformanceDataCollector_GetStartupPerformanceTimes_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateStartupPerformanceDataCollectorRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kStartupPerformanceDataCollector_SetShellProcessCreationTime_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = StartupPerformanceDataCollector_SetShellProcessCreationTime_Params;
      break;
      case kStartupPerformanceDataCollector_SetShellMainEntryPointTime_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = StartupPerformanceDataCollector_SetShellMainEntryPointTime_Params;
      break;
      case kStartupPerformanceDataCollector_SetBrowserMessageLoopStartTicks_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = StartupPerformanceDataCollector_SetBrowserMessageLoopStartTicks_Params;
      break;
      case kStartupPerformanceDataCollector_SetBrowserWindowDisplayTicks_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = StartupPerformanceDataCollector_SetBrowserWindowDisplayTicks_Params;
      break;
      case kStartupPerformanceDataCollector_SetBrowserOpenTabsTimeDelta_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = StartupPerformanceDataCollector_SetBrowserOpenTabsTimeDelta_Params;
      break;
      case kStartupPerformanceDataCollector_SetFirstWebContentsMainFrameLoadTicks_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = StartupPerformanceDataCollector_SetFirstWebContentsMainFrameLoadTicks_Params;
      break;
      case kStartupPerformanceDataCollector_SetFirstVisuallyNonEmptyLayoutTicks_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = StartupPerformanceDataCollector_SetFirstVisuallyNonEmptyLayoutTicks_Params;
      break;
      case kStartupPerformanceDataCollector_GetStartupPerformanceTimes_Name:
        if (message.expectsResponse())
          paramsClass = StartupPerformanceDataCollector_GetStartupPerformanceTimes_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateStartupPerformanceDataCollectorResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kStartupPerformanceDataCollector_GetStartupPerformanceTimes_Name:
        if (message.isResponse())
          paramsClass = StartupPerformanceDataCollector_GetStartupPerformanceTimes_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var StartupPerformanceDataCollector = {
    name: 'tracing::mojom::StartupPerformanceDataCollector',
    proxyClass: StartupPerformanceDataCollectorProxy,
    stubClass: StartupPerformanceDataCollectorStub,
    validateRequest: validateStartupPerformanceDataCollectorRequest,
    validateResponse: validateStartupPerformanceDataCollectorResponse,
  };
  StartupPerformanceDataCollectorStub.prototype.validator = validateStartupPerformanceDataCollectorRequest;
  StartupPerformanceDataCollectorProxy.prototype.validator = validateStartupPerformanceDataCollectorResponse;
  var kFactory_CreateRecorder_Name = 0;

  function FactoryProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  FactoryProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  FactoryProxy.prototype.createRecorder = function(provider) {
    var params = new Factory_CreateRecorder_Params();
    params.provider = core.isHandle(provider) ? provider : connection.bindImpl(provider, Provider);
    var builder = new codec.MessageBuilder(
        kFactory_CreateRecorder_Name,
        codec.align(Factory_CreateRecorder_Params.encodedSize));
    builder.encodeStruct(Factory_CreateRecorder_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function FactoryStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  FactoryStub.prototype = Object.create(bindings.StubBase.prototype);
  FactoryStub.prototype.createRecorder = function(provider) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.createRecorder && bindings.StubBindings(this).delegate.createRecorder(connection.bindHandleToProxy(provider, Provider));
  }

  FactoryStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kFactory_CreateRecorder_Name:
      var params = reader.decodeStruct(Factory_CreateRecorder_Params);
      this.createRecorder(params.provider);
      return true;
    default:
      return false;
    }
  };

  FactoryStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateFactoryRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kFactory_CreateRecorder_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Factory_CreateRecorder_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateFactoryResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var Factory = {
    name: 'tracing::mojom::Factory',
    proxyClass: FactoryProxy,
    stubClass: FactoryStub,
    validateRequest: validateFactoryRequest,
    validateResponse: null,
  };
  FactoryStub.prototype.validator = validateFactoryRequest;
  FactoryProxy.prototype.validator = null;

  var exports = {};
  exports.StartupPerformanceTimes = StartupPerformanceTimes;
  exports.Provider = Provider;
  exports.Recorder = Recorder;
  exports.Collector = Collector;
  exports.StartupPerformanceDataCollector = StartupPerformanceDataCollector;
  exports.Factory = Factory;

  return exports;
});
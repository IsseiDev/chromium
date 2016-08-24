// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("services/ui/public/interfaces/window_manager.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "services/ui/public/interfaces/cursor.mojom",
    "services/ui/public/interfaces/display/display.mojom",
    "services/ui/public/interfaces/event_matcher.mojom",
    "services/ui/public/interfaces/window_manager_constants.mojom",
    "services/ui/public/interfaces/window_tree_constants.mojom",
    "ui/events/mojo/event.mojom",
    "ui/gfx/geometry/mojo/geometry.mojom",
], function(bindings, codec, connection, core, validator, cursor$, display$, event_matcher$, window_manager_constants$, window_tree_constants$, event$, geometry$) {

  function WindowManager_OnConnect_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManager_OnConnect_Params.prototype.initDefaults_ = function() {
    this.client_id = 0;
  };
  WindowManager_OnConnect_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WindowManager_OnConnect_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WindowManager_OnConnect_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  WindowManager_OnConnect_Params.encodedSize = codec.kStructHeaderSize + 8;

  WindowManager_OnConnect_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManager_OnConnect_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.client_id = decoder.decodeStruct(codec.Uint16);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WindowManager_OnConnect_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManager_OnConnect_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint16, val.client_id);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WindowManager_WmNewDisplayAdded_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManager_WmNewDisplayAdded_Params.prototype.initDefaults_ = function() {
    this.display = null;
    this.root = null;
    this.parent_drawn = false;
  };
  WindowManager_WmNewDisplayAdded_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WindowManager_WmNewDisplayAdded_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WindowManager_WmNewDisplayAdded_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WindowManager_WmNewDisplayAdded_Params.display
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, display$.Display, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WindowManager_WmNewDisplayAdded_Params.root
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, window_tree_constants$.WindowData, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  WindowManager_WmNewDisplayAdded_Params.encodedSize = codec.kStructHeaderSize + 24;

  WindowManager_WmNewDisplayAdded_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManager_WmNewDisplayAdded_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.display = decoder.decodeStructPointer(display$.Display);
    val.root = decoder.decodeStructPointer(window_tree_constants$.WindowData);
    val.parent_drawn = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WindowManager_WmNewDisplayAdded_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManager_WmNewDisplayAdded_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(display$.Display, val.display);
    encoder.encodeStructPointer(window_tree_constants$.WindowData, val.root);
    encoder.encodeStruct(codec.Uint8, val.parent_drawn);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WindowManager_WmSetBounds_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManager_WmSetBounds_Params.prototype.initDefaults_ = function() {
    this.change_id = 0;
    this.window_id = 0;
    this.bounds = null;
  };
  WindowManager_WmSetBounds_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WindowManager_WmSetBounds_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WindowManager_WmSetBounds_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



    
    // validate WindowManager_WmSetBounds_Params.bounds
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, geometry$.Rect, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowManager_WmSetBounds_Params.encodedSize = codec.kStructHeaderSize + 16;

  WindowManager_WmSetBounds_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManager_WmSetBounds_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.change_id = decoder.decodeStruct(codec.Uint32);
    val.window_id = decoder.decodeStruct(codec.Uint32);
    val.bounds = decoder.decodeStructPointer(geometry$.Rect);
    return val;
  };

  WindowManager_WmSetBounds_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManager_WmSetBounds_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.change_id);
    encoder.encodeStruct(codec.Uint32, val.window_id);
    encoder.encodeStructPointer(geometry$.Rect, val.bounds);
  };
  function WindowManager_WmSetProperty_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManager_WmSetProperty_Params.prototype.initDefaults_ = function() {
    this.change_id = 0;
    this.window_id = 0;
    this.name = null;
    this.value = null;
  };
  WindowManager_WmSetProperty_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WindowManager_WmSetProperty_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WindowManager_WmSetProperty_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



    
    // validate WindowManager_WmSetProperty_Params.name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WindowManager_WmSetProperty_Params.value
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 1, codec.Uint8, true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowManager_WmSetProperty_Params.encodedSize = codec.kStructHeaderSize + 24;

  WindowManager_WmSetProperty_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManager_WmSetProperty_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.change_id = decoder.decodeStruct(codec.Uint32);
    val.window_id = decoder.decodeStruct(codec.Uint32);
    val.name = decoder.decodeStruct(codec.String);
    val.value = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  WindowManager_WmSetProperty_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManager_WmSetProperty_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.change_id);
    encoder.encodeStruct(codec.Uint32, val.window_id);
    encoder.encodeStruct(codec.String, val.name);
    encoder.encodeArrayPointer(codec.Uint8, val.value);
  };
  function WindowManager_WmCreateTopLevelWindow_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManager_WmCreateTopLevelWindow_Params.prototype.initDefaults_ = function() {
    this.change_id = 0;
    this.requesting_client_id = 0;
    this.properties = null;
  };
  WindowManager_WmCreateTopLevelWindow_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WindowManager_WmCreateTopLevelWindow_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WindowManager_WmCreateTopLevelWindow_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



    
    // validate WindowManager_WmCreateTopLevelWindow_Params.properties
    err = messageValidator.validateMapPointer(offset + codec.kStructHeaderSize + 8, false, codec.String, new codec.ArrayOf(codec.Uint8), false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowManager_WmCreateTopLevelWindow_Params.encodedSize = codec.kStructHeaderSize + 16;

  WindowManager_WmCreateTopLevelWindow_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManager_WmCreateTopLevelWindow_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.change_id = decoder.decodeStruct(codec.Uint32);
    val.requesting_client_id = decoder.decodeStruct(codec.Uint16);
    decoder.skip(1);
    decoder.skip(1);
    val.properties = decoder.decodeMapPointer(codec.String, new codec.ArrayOf(codec.Uint8));
    return val;
  };

  WindowManager_WmCreateTopLevelWindow_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManager_WmCreateTopLevelWindow_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.change_id);
    encoder.encodeStruct(codec.Uint16, val.requesting_client_id);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeMapPointer(codec.String, new codec.ArrayOf(codec.Uint8), val.properties);
  };
  function WindowManager_WmClientJankinessChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManager_WmClientJankinessChanged_Params.prototype.initDefaults_ = function() {
    this.client_id = 0;
    this.janky = false;
  };
  WindowManager_WmClientJankinessChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WindowManager_WmClientJankinessChanged_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WindowManager_WmClientJankinessChanged_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  WindowManager_WmClientJankinessChanged_Params.encodedSize = codec.kStructHeaderSize + 8;

  WindowManager_WmClientJankinessChanged_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManager_WmClientJankinessChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.client_id = decoder.decodeStruct(codec.Uint16);
    val.janky = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WindowManager_WmClientJankinessChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManager_WmClientJankinessChanged_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint16, val.client_id);
    encoder.encodeStruct(codec.Uint8, val.janky);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WindowManager_WmPerformMoveLoop_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManager_WmPerformMoveLoop_Params.prototype.initDefaults_ = function() {
    this.change_id = 0;
    this.window_id = 0;
    this.source = 0;
    this.cursor_location = null;
  };
  WindowManager_WmPerformMoveLoop_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WindowManager_WmPerformMoveLoop_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WindowManager_WmPerformMoveLoop_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;




    
    // validate WindowManager_WmPerformMoveLoop_Params.cursor_location
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, geometry$.Point, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowManager_WmPerformMoveLoop_Params.encodedSize = codec.kStructHeaderSize + 24;

  WindowManager_WmPerformMoveLoop_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManager_WmPerformMoveLoop_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.change_id = decoder.decodeStruct(codec.Uint32);
    val.window_id = decoder.decodeStruct(codec.Uint32);
    val.source = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.cursor_location = decoder.decodeStructPointer(geometry$.Point);
    return val;
  };

  WindowManager_WmPerformMoveLoop_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManager_WmPerformMoveLoop_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.change_id);
    encoder.encodeStruct(codec.Uint32, val.window_id);
    encoder.encodeStruct(codec.Int32, val.source);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(geometry$.Point, val.cursor_location);
  };
  function WindowManager_WmCancelMoveLoop_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManager_WmCancelMoveLoop_Params.prototype.initDefaults_ = function() {
    this.change_id = 0;
  };
  WindowManager_WmCancelMoveLoop_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WindowManager_WmCancelMoveLoop_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WindowManager_WmCancelMoveLoop_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  WindowManager_WmCancelMoveLoop_Params.encodedSize = codec.kStructHeaderSize + 8;

  WindowManager_WmCancelMoveLoop_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManager_WmCancelMoveLoop_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.change_id = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WindowManager_WmCancelMoveLoop_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManager_WmCancelMoveLoop_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.change_id);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WindowManager_OnAccelerator_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManager_OnAccelerator_Params.prototype.initDefaults_ = function() {
    this.ack_id = 0;
    this.accelerator_id = 0;
    this.event = null;
  };
  WindowManager_OnAccelerator_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WindowManager_OnAccelerator_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WindowManager_OnAccelerator_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



    
    // validate WindowManager_OnAccelerator_Params.event
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, event$.Event, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowManager_OnAccelerator_Params.encodedSize = codec.kStructHeaderSize + 16;

  WindowManager_OnAccelerator_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManager_OnAccelerator_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.ack_id = decoder.decodeStruct(codec.Uint32);
    val.accelerator_id = decoder.decodeStruct(codec.Uint32);
    val.event = decoder.decodeStructPointer(event$.Event);
    return val;
  };

  WindowManager_OnAccelerator_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManager_OnAccelerator_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.ack_id);
    encoder.encodeStruct(codec.Uint32, val.accelerator_id);
    encoder.encodeStructPointer(event$.Event, val.event);
  };
  function WindowManagerClient_AddActivationParent_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManagerClient_AddActivationParent_Params.prototype.initDefaults_ = function() {
    this.window_id = 0;
  };
  WindowManagerClient_AddActivationParent_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WindowManagerClient_AddActivationParent_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WindowManagerClient_AddActivationParent_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  WindowManagerClient_AddActivationParent_Params.encodedSize = codec.kStructHeaderSize + 8;

  WindowManagerClient_AddActivationParent_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManagerClient_AddActivationParent_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.window_id = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WindowManagerClient_AddActivationParent_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManagerClient_AddActivationParent_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.window_id);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WindowManagerClient_RemoveActivationParent_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManagerClient_RemoveActivationParent_Params.prototype.initDefaults_ = function() {
    this.window_id = 0;
  };
  WindowManagerClient_RemoveActivationParent_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WindowManagerClient_RemoveActivationParent_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WindowManagerClient_RemoveActivationParent_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  WindowManagerClient_RemoveActivationParent_Params.encodedSize = codec.kStructHeaderSize + 8;

  WindowManagerClient_RemoveActivationParent_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManagerClient_RemoveActivationParent_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.window_id = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WindowManagerClient_RemoveActivationParent_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManagerClient_RemoveActivationParent_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.window_id);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WindowManagerClient_ActivateNextWindow_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManagerClient_ActivateNextWindow_Params.prototype.initDefaults_ = function() {
  };
  WindowManagerClient_ActivateNextWindow_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WindowManagerClient_ActivateNextWindow_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WindowManagerClient_ActivateNextWindow_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowManagerClient_ActivateNextWindow_Params.encodedSize = codec.kStructHeaderSize + 0;

  WindowManagerClient_ActivateNextWindow_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManagerClient_ActivateNextWindow_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  WindowManagerClient_ActivateNextWindow_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManagerClient_ActivateNextWindow_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function WindowManagerClient_SetUnderlaySurfaceOffsetAndExtendedHitArea_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManagerClient_SetUnderlaySurfaceOffsetAndExtendedHitArea_Params.prototype.initDefaults_ = function() {
    this.window_id = 0;
    this.x_offset = 0;
    this.y_offset = 0;
    this.hit_area = null;
  };
  WindowManagerClient_SetUnderlaySurfaceOffsetAndExtendedHitArea_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WindowManagerClient_SetUnderlaySurfaceOffsetAndExtendedHitArea_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WindowManagerClient_SetUnderlaySurfaceOffsetAndExtendedHitArea_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;




    
    // validate WindowManagerClient_SetUnderlaySurfaceOffsetAndExtendedHitArea_Params.hit_area
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, geometry$.Insets, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowManagerClient_SetUnderlaySurfaceOffsetAndExtendedHitArea_Params.encodedSize = codec.kStructHeaderSize + 24;

  WindowManagerClient_SetUnderlaySurfaceOffsetAndExtendedHitArea_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManagerClient_SetUnderlaySurfaceOffsetAndExtendedHitArea_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.window_id = decoder.decodeStruct(codec.Uint32);
    val.x_offset = decoder.decodeStruct(codec.Int32);
    val.y_offset = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.hit_area = decoder.decodeStructPointer(geometry$.Insets);
    return val;
  };

  WindowManagerClient_SetUnderlaySurfaceOffsetAndExtendedHitArea_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManagerClient_SetUnderlaySurfaceOffsetAndExtendedHitArea_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.window_id);
    encoder.encodeStruct(codec.Int32, val.x_offset);
    encoder.encodeStruct(codec.Int32, val.y_offset);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(geometry$.Insets, val.hit_area);
  };
  function WindowManagerClient_AddAccelerator_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManagerClient_AddAccelerator_Params.prototype.initDefaults_ = function() {
    this.id = 0;
    this.matcher = null;
  };
  WindowManagerClient_AddAccelerator_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WindowManagerClient_AddAccelerator_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WindowManagerClient_AddAccelerator_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate WindowManagerClient_AddAccelerator_Params.matcher
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, event_matcher$.EventMatcher, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowManagerClient_AddAccelerator_Params.encodedSize = codec.kStructHeaderSize + 16;

  WindowManagerClient_AddAccelerator_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManagerClient_AddAccelerator_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.matcher = decoder.decodeStructPointer(event_matcher$.EventMatcher);
    return val;
  };

  WindowManagerClient_AddAccelerator_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManagerClient_AddAccelerator_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.id);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(event_matcher$.EventMatcher, val.matcher);
  };
  function WindowManagerClient_AddAccelerator_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManagerClient_AddAccelerator_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  WindowManagerClient_AddAccelerator_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WindowManagerClient_AddAccelerator_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WindowManagerClient_AddAccelerator_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  WindowManagerClient_AddAccelerator_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  WindowManagerClient_AddAccelerator_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new WindowManagerClient_AddAccelerator_ResponseParams();
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

  WindowManagerClient_AddAccelerator_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManagerClient_AddAccelerator_ResponseParams.encodedSize);
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
  function WindowManagerClient_RemoveAccelerator_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManagerClient_RemoveAccelerator_Params.prototype.initDefaults_ = function() {
    this.id = 0;
  };
  WindowManagerClient_RemoveAccelerator_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WindowManagerClient_RemoveAccelerator_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WindowManagerClient_RemoveAccelerator_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  WindowManagerClient_RemoveAccelerator_Params.encodedSize = codec.kStructHeaderSize + 8;

  WindowManagerClient_RemoveAccelerator_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManagerClient_RemoveAccelerator_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WindowManagerClient_RemoveAccelerator_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManagerClient_RemoveAccelerator_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.id);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WindowManagerClient_WmResponse_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManagerClient_WmResponse_Params.prototype.initDefaults_ = function() {
    this.change_id = 0;
    this.response = false;
  };
  WindowManagerClient_WmResponse_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WindowManagerClient_WmResponse_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WindowManagerClient_WmResponse_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  WindowManagerClient_WmResponse_Params.encodedSize = codec.kStructHeaderSize + 8;

  WindowManagerClient_WmResponse_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManagerClient_WmResponse_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.change_id = decoder.decodeStruct(codec.Uint32);
    val.response = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WindowManagerClient_WmResponse_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManagerClient_WmResponse_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.change_id);
    encoder.encodeStruct(codec.Uint8, val.response);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WindowManagerClient_WmRequestClose_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManagerClient_WmRequestClose_Params.prototype.initDefaults_ = function() {
    this.window_id = 0;
  };
  WindowManagerClient_WmRequestClose_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WindowManagerClient_WmRequestClose_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WindowManagerClient_WmRequestClose_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  WindowManagerClient_WmRequestClose_Params.encodedSize = codec.kStructHeaderSize + 8;

  WindowManagerClient_WmRequestClose_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManagerClient_WmRequestClose_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.window_id = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WindowManagerClient_WmRequestClose_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManagerClient_WmRequestClose_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.window_id);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WindowManagerClient_WmSetFrameDecorationValues_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManagerClient_WmSetFrameDecorationValues_Params.prototype.initDefaults_ = function() {
    this.values = null;
  };
  WindowManagerClient_WmSetFrameDecorationValues_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WindowManagerClient_WmSetFrameDecorationValues_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WindowManagerClient_WmSetFrameDecorationValues_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WindowManagerClient_WmSetFrameDecorationValues_Params.values
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, window_manager_constants$.FrameDecorationValues, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowManagerClient_WmSetFrameDecorationValues_Params.encodedSize = codec.kStructHeaderSize + 8;

  WindowManagerClient_WmSetFrameDecorationValues_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManagerClient_WmSetFrameDecorationValues_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.values = decoder.decodeStructPointer(window_manager_constants$.FrameDecorationValues);
    return val;
  };

  WindowManagerClient_WmSetFrameDecorationValues_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManagerClient_WmSetFrameDecorationValues_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(window_manager_constants$.FrameDecorationValues, val.values);
  };
  function WindowManagerClient_WmSetNonClientCursor_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManagerClient_WmSetNonClientCursor_Params.prototype.initDefaults_ = function() {
    this.window_id = 0;
    this.cursor_id = 0;
  };
  WindowManagerClient_WmSetNonClientCursor_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WindowManagerClient_WmSetNonClientCursor_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WindowManagerClient_WmSetNonClientCursor_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  WindowManagerClient_WmSetNonClientCursor_Params.encodedSize = codec.kStructHeaderSize + 8;

  WindowManagerClient_WmSetNonClientCursor_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManagerClient_WmSetNonClientCursor_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.window_id = decoder.decodeStruct(codec.Uint32);
    val.cursor_id = decoder.decodeStruct(codec.Int32);
    return val;
  };

  WindowManagerClient_WmSetNonClientCursor_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManagerClient_WmSetNonClientCursor_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.window_id);
    encoder.encodeStruct(codec.Int32, val.cursor_id);
  };
  function WindowManagerClient_OnWmCreatedTopLevelWindow_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManagerClient_OnWmCreatedTopLevelWindow_Params.prototype.initDefaults_ = function() {
    this.change_id = 0;
    this.window_id = 0;
  };
  WindowManagerClient_OnWmCreatedTopLevelWindow_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WindowManagerClient_OnWmCreatedTopLevelWindow_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WindowManagerClient_OnWmCreatedTopLevelWindow_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  WindowManagerClient_OnWmCreatedTopLevelWindow_Params.encodedSize = codec.kStructHeaderSize + 8;

  WindowManagerClient_OnWmCreatedTopLevelWindow_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManagerClient_OnWmCreatedTopLevelWindow_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.change_id = decoder.decodeStruct(codec.Uint32);
    val.window_id = decoder.decodeStruct(codec.Uint32);
    return val;
  };

  WindowManagerClient_OnWmCreatedTopLevelWindow_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManagerClient_OnWmCreatedTopLevelWindow_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.change_id);
    encoder.encodeStruct(codec.Uint32, val.window_id);
  };
  function WindowManagerClient_OnAcceleratorAck_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManagerClient_OnAcceleratorAck_Params.prototype.initDefaults_ = function() {
    this.ack_id = 0;
    this.event_result = 0;
  };
  WindowManagerClient_OnAcceleratorAck_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WindowManagerClient_OnAcceleratorAck_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WindowManagerClient_OnAcceleratorAck_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  WindowManagerClient_OnAcceleratorAck_Params.encodedSize = codec.kStructHeaderSize + 8;

  WindowManagerClient_OnAcceleratorAck_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManagerClient_OnAcceleratorAck_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.ack_id = decoder.decodeStruct(codec.Uint32);
    val.event_result = decoder.decodeStruct(codec.Int32);
    return val;
  };

  WindowManagerClient_OnAcceleratorAck_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManagerClient_OnAcceleratorAck_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.ack_id);
    encoder.encodeStruct(codec.Int32, val.event_result);
  };
  var kWindowManager_OnConnect_Name = 0;
  var kWindowManager_WmNewDisplayAdded_Name = 1;
  var kWindowManager_WmSetBounds_Name = 2;
  var kWindowManager_WmSetProperty_Name = 3;
  var kWindowManager_WmCreateTopLevelWindow_Name = 4;
  var kWindowManager_WmClientJankinessChanged_Name = 5;
  var kWindowManager_WmPerformMoveLoop_Name = 6;
  var kWindowManager_WmCancelMoveLoop_Name = 7;
  var kWindowManager_OnAccelerator_Name = 8;

  function WindowManagerProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  WindowManagerProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  WindowManagerProxy.prototype.onConnect = function(client_id) {
    var params = new WindowManager_OnConnect_Params();
    params.client_id = client_id;
    var builder = new codec.MessageBuilder(
        kWindowManager_OnConnect_Name,
        codec.align(WindowManager_OnConnect_Params.encodedSize));
    builder.encodeStruct(WindowManager_OnConnect_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowManagerProxy.prototype.wmNewDisplayAdded = function(display, root, parent_drawn) {
    var params = new WindowManager_WmNewDisplayAdded_Params();
    params.display = display;
    params.root = root;
    params.parent_drawn = parent_drawn;
    var builder = new codec.MessageBuilder(
        kWindowManager_WmNewDisplayAdded_Name,
        codec.align(WindowManager_WmNewDisplayAdded_Params.encodedSize));
    builder.encodeStruct(WindowManager_WmNewDisplayAdded_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowManagerProxy.prototype.wmSetBounds = function(change_id, window_id, bounds) {
    var params = new WindowManager_WmSetBounds_Params();
    params.change_id = change_id;
    params.window_id = window_id;
    params.bounds = bounds;
    var builder = new codec.MessageBuilder(
        kWindowManager_WmSetBounds_Name,
        codec.align(WindowManager_WmSetBounds_Params.encodedSize));
    builder.encodeStruct(WindowManager_WmSetBounds_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowManagerProxy.prototype.wmSetProperty = function(change_id, window_id, name, value) {
    var params = new WindowManager_WmSetProperty_Params();
    params.change_id = change_id;
    params.window_id = window_id;
    params.name = name;
    params.value = value;
    var builder = new codec.MessageBuilder(
        kWindowManager_WmSetProperty_Name,
        codec.align(WindowManager_WmSetProperty_Params.encodedSize));
    builder.encodeStruct(WindowManager_WmSetProperty_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowManagerProxy.prototype.wmCreateTopLevelWindow = function(change_id, requesting_client_id, properties) {
    var params = new WindowManager_WmCreateTopLevelWindow_Params();
    params.change_id = change_id;
    params.requesting_client_id = requesting_client_id;
    params.properties = properties;
    var builder = new codec.MessageBuilder(
        kWindowManager_WmCreateTopLevelWindow_Name,
        codec.align(WindowManager_WmCreateTopLevelWindow_Params.encodedSize));
    builder.encodeStruct(WindowManager_WmCreateTopLevelWindow_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowManagerProxy.prototype.wmClientJankinessChanged = function(client_id, janky) {
    var params = new WindowManager_WmClientJankinessChanged_Params();
    params.client_id = client_id;
    params.janky = janky;
    var builder = new codec.MessageBuilder(
        kWindowManager_WmClientJankinessChanged_Name,
        codec.align(WindowManager_WmClientJankinessChanged_Params.encodedSize));
    builder.encodeStruct(WindowManager_WmClientJankinessChanged_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowManagerProxy.prototype.wmPerformMoveLoop = function(change_id, window_id, source, cursor_location) {
    var params = new WindowManager_WmPerformMoveLoop_Params();
    params.change_id = change_id;
    params.window_id = window_id;
    params.source = source;
    params.cursor_location = cursor_location;
    var builder = new codec.MessageBuilder(
        kWindowManager_WmPerformMoveLoop_Name,
        codec.align(WindowManager_WmPerformMoveLoop_Params.encodedSize));
    builder.encodeStruct(WindowManager_WmPerformMoveLoop_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowManagerProxy.prototype.wmCancelMoveLoop = function(change_id) {
    var params = new WindowManager_WmCancelMoveLoop_Params();
    params.change_id = change_id;
    var builder = new codec.MessageBuilder(
        kWindowManager_WmCancelMoveLoop_Name,
        codec.align(WindowManager_WmCancelMoveLoop_Params.encodedSize));
    builder.encodeStruct(WindowManager_WmCancelMoveLoop_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowManagerProxy.prototype.onAccelerator = function(ack_id, accelerator_id, event) {
    var params = new WindowManager_OnAccelerator_Params();
    params.ack_id = ack_id;
    params.accelerator_id = accelerator_id;
    params.event = event;
    var builder = new codec.MessageBuilder(
        kWindowManager_OnAccelerator_Name,
        codec.align(WindowManager_OnAccelerator_Params.encodedSize));
    builder.encodeStruct(WindowManager_OnAccelerator_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function WindowManagerStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  WindowManagerStub.prototype = Object.create(bindings.StubBase.prototype);
  WindowManagerStub.prototype.onConnect = function(client_id) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onConnect && bindings.StubBindings(this).delegate.onConnect(client_id);
  }
  WindowManagerStub.prototype.wmNewDisplayAdded = function(display, root, parent_drawn) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.wmNewDisplayAdded && bindings.StubBindings(this).delegate.wmNewDisplayAdded(display, root, parent_drawn);
  }
  WindowManagerStub.prototype.wmSetBounds = function(change_id, window_id, bounds) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.wmSetBounds && bindings.StubBindings(this).delegate.wmSetBounds(change_id, window_id, bounds);
  }
  WindowManagerStub.prototype.wmSetProperty = function(change_id, window_id, name, value) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.wmSetProperty && bindings.StubBindings(this).delegate.wmSetProperty(change_id, window_id, name, value);
  }
  WindowManagerStub.prototype.wmCreateTopLevelWindow = function(change_id, requesting_client_id, properties) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.wmCreateTopLevelWindow && bindings.StubBindings(this).delegate.wmCreateTopLevelWindow(change_id, requesting_client_id, properties);
  }
  WindowManagerStub.prototype.wmClientJankinessChanged = function(client_id, janky) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.wmClientJankinessChanged && bindings.StubBindings(this).delegate.wmClientJankinessChanged(client_id, janky);
  }
  WindowManagerStub.prototype.wmPerformMoveLoop = function(change_id, window_id, source, cursor_location) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.wmPerformMoveLoop && bindings.StubBindings(this).delegate.wmPerformMoveLoop(change_id, window_id, source, cursor_location);
  }
  WindowManagerStub.prototype.wmCancelMoveLoop = function(change_id) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.wmCancelMoveLoop && bindings.StubBindings(this).delegate.wmCancelMoveLoop(change_id);
  }
  WindowManagerStub.prototype.onAccelerator = function(ack_id, accelerator_id, event) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onAccelerator && bindings.StubBindings(this).delegate.onAccelerator(ack_id, accelerator_id, event);
  }

  WindowManagerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kWindowManager_OnConnect_Name:
      var params = reader.decodeStruct(WindowManager_OnConnect_Params);
      this.onConnect(params.client_id);
      return true;
    case kWindowManager_WmNewDisplayAdded_Name:
      var params = reader.decodeStruct(WindowManager_WmNewDisplayAdded_Params);
      this.wmNewDisplayAdded(params.display, params.root, params.parent_drawn);
      return true;
    case kWindowManager_WmSetBounds_Name:
      var params = reader.decodeStruct(WindowManager_WmSetBounds_Params);
      this.wmSetBounds(params.change_id, params.window_id, params.bounds);
      return true;
    case kWindowManager_WmSetProperty_Name:
      var params = reader.decodeStruct(WindowManager_WmSetProperty_Params);
      this.wmSetProperty(params.change_id, params.window_id, params.name, params.value);
      return true;
    case kWindowManager_WmCreateTopLevelWindow_Name:
      var params = reader.decodeStruct(WindowManager_WmCreateTopLevelWindow_Params);
      this.wmCreateTopLevelWindow(params.change_id, params.requesting_client_id, params.properties);
      return true;
    case kWindowManager_WmClientJankinessChanged_Name:
      var params = reader.decodeStruct(WindowManager_WmClientJankinessChanged_Params);
      this.wmClientJankinessChanged(params.client_id, params.janky);
      return true;
    case kWindowManager_WmPerformMoveLoop_Name:
      var params = reader.decodeStruct(WindowManager_WmPerformMoveLoop_Params);
      this.wmPerformMoveLoop(params.change_id, params.window_id, params.source, params.cursor_location);
      return true;
    case kWindowManager_WmCancelMoveLoop_Name:
      var params = reader.decodeStruct(WindowManager_WmCancelMoveLoop_Params);
      this.wmCancelMoveLoop(params.change_id);
      return true;
    case kWindowManager_OnAccelerator_Name:
      var params = reader.decodeStruct(WindowManager_OnAccelerator_Params);
      this.onAccelerator(params.ack_id, params.accelerator_id, params.event);
      return true;
    default:
      return false;
    }
  };

  WindowManagerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateWindowManagerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kWindowManager_OnConnect_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManager_OnConnect_Params;
      break;
      case kWindowManager_WmNewDisplayAdded_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManager_WmNewDisplayAdded_Params;
      break;
      case kWindowManager_WmSetBounds_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManager_WmSetBounds_Params;
      break;
      case kWindowManager_WmSetProperty_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManager_WmSetProperty_Params;
      break;
      case kWindowManager_WmCreateTopLevelWindow_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManager_WmCreateTopLevelWindow_Params;
      break;
      case kWindowManager_WmClientJankinessChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManager_WmClientJankinessChanged_Params;
      break;
      case kWindowManager_WmPerformMoveLoop_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManager_WmPerformMoveLoop_Params;
      break;
      case kWindowManager_WmCancelMoveLoop_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManager_WmCancelMoveLoop_Params;
      break;
      case kWindowManager_OnAccelerator_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManager_OnAccelerator_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateWindowManagerResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var WindowManager = {
    name: 'ui::mojom::WindowManager',
    proxyClass: WindowManagerProxy,
    stubClass: WindowManagerStub,
    validateRequest: validateWindowManagerRequest,
    validateResponse: null,
  };
  WindowManager.kAlwaysOnTop_Property = "prop:always_on_top",
  WindowManager.kInitialBounds_Property = "prop:initial_bounds",
  WindowManager.kName_Property = "prop:name",
  WindowManager.kPreferredSize_Property = "prop:preferred-size",
  WindowManager.kResizeBehavior_Property = "prop:resize-behavior",
  WindowManager.kRestoreBounds_Property = "prop:restore-bounds",
  WindowManager.kShadowStyle_Property = "prop:shadow-style",
  WindowManager.kShowState_Property = "prop:show-state",
  WindowManager.kUserSetBounds_Property = "prop:user-set-bounds",
  WindowManager.kWindowAppIcon_Property = "prop:window-app-icon",
  WindowManager.kWindowType_Property = "prop:window-type",
  WindowManager.kWindowTitle_Property = "prop:window-title",
  WindowManager.kWindowIgnoredByShelf_Property = "prop:window-ignored-by-shelf",
  WindowManager.kAppID_Property = "prop:app-id",
  WindowManager.kRemoveStandardFrame_Property = "prop:remove-standard-frame",
  WindowManagerStub.prototype.validator = validateWindowManagerRequest;
  WindowManagerProxy.prototype.validator = null;
  var kWindowManagerClient_AddActivationParent_Name = 0;
  var kWindowManagerClient_RemoveActivationParent_Name = 1;
  var kWindowManagerClient_ActivateNextWindow_Name = 2;
  var kWindowManagerClient_SetUnderlaySurfaceOffsetAndExtendedHitArea_Name = 3;
  var kWindowManagerClient_AddAccelerator_Name = 4;
  var kWindowManagerClient_RemoveAccelerator_Name = 5;
  var kWindowManagerClient_WmResponse_Name = 6;
  var kWindowManagerClient_WmRequestClose_Name = 7;
  var kWindowManagerClient_WmSetFrameDecorationValues_Name = 8;
  var kWindowManagerClient_WmSetNonClientCursor_Name = 9;
  var kWindowManagerClient_OnWmCreatedTopLevelWindow_Name = 10;
  var kWindowManagerClient_OnAcceleratorAck_Name = 11;

  function WindowManagerClientProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  WindowManagerClientProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  WindowManagerClientProxy.prototype.addActivationParent = function(window_id) {
    var params = new WindowManagerClient_AddActivationParent_Params();
    params.window_id = window_id;
    var builder = new codec.MessageBuilder(
        kWindowManagerClient_AddActivationParent_Name,
        codec.align(WindowManagerClient_AddActivationParent_Params.encodedSize));
    builder.encodeStruct(WindowManagerClient_AddActivationParent_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowManagerClientProxy.prototype.removeActivationParent = function(window_id) {
    var params = new WindowManagerClient_RemoveActivationParent_Params();
    params.window_id = window_id;
    var builder = new codec.MessageBuilder(
        kWindowManagerClient_RemoveActivationParent_Name,
        codec.align(WindowManagerClient_RemoveActivationParent_Params.encodedSize));
    builder.encodeStruct(WindowManagerClient_RemoveActivationParent_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowManagerClientProxy.prototype.activateNextWindow = function() {
    var params = new WindowManagerClient_ActivateNextWindow_Params();
    var builder = new codec.MessageBuilder(
        kWindowManagerClient_ActivateNextWindow_Name,
        codec.align(WindowManagerClient_ActivateNextWindow_Params.encodedSize));
    builder.encodeStruct(WindowManagerClient_ActivateNextWindow_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowManagerClientProxy.prototype.setUnderlaySurfaceOffsetAndExtendedHitArea = function(window_id, x_offset, y_offset, hit_area) {
    var params = new WindowManagerClient_SetUnderlaySurfaceOffsetAndExtendedHitArea_Params();
    params.window_id = window_id;
    params.x_offset = x_offset;
    params.y_offset = y_offset;
    params.hit_area = hit_area;
    var builder = new codec.MessageBuilder(
        kWindowManagerClient_SetUnderlaySurfaceOffsetAndExtendedHitArea_Name,
        codec.align(WindowManagerClient_SetUnderlaySurfaceOffsetAndExtendedHitArea_Params.encodedSize));
    builder.encodeStruct(WindowManagerClient_SetUnderlaySurfaceOffsetAndExtendedHitArea_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowManagerClientProxy.prototype.addAccelerator = function(id, matcher) {
    var params = new WindowManagerClient_AddAccelerator_Params();
    params.id = id;
    params.matcher = matcher;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kWindowManagerClient_AddAccelerator_Name,
          codec.align(WindowManagerClient_AddAccelerator_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(WindowManagerClient_AddAccelerator_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(WindowManagerClient_AddAccelerator_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  WindowManagerClientProxy.prototype.removeAccelerator = function(id) {
    var params = new WindowManagerClient_RemoveAccelerator_Params();
    params.id = id;
    var builder = new codec.MessageBuilder(
        kWindowManagerClient_RemoveAccelerator_Name,
        codec.align(WindowManagerClient_RemoveAccelerator_Params.encodedSize));
    builder.encodeStruct(WindowManagerClient_RemoveAccelerator_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowManagerClientProxy.prototype.wmResponse = function(change_id, response) {
    var params = new WindowManagerClient_WmResponse_Params();
    params.change_id = change_id;
    params.response = response;
    var builder = new codec.MessageBuilder(
        kWindowManagerClient_WmResponse_Name,
        codec.align(WindowManagerClient_WmResponse_Params.encodedSize));
    builder.encodeStruct(WindowManagerClient_WmResponse_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowManagerClientProxy.prototype.wmRequestClose = function(window_id) {
    var params = new WindowManagerClient_WmRequestClose_Params();
    params.window_id = window_id;
    var builder = new codec.MessageBuilder(
        kWindowManagerClient_WmRequestClose_Name,
        codec.align(WindowManagerClient_WmRequestClose_Params.encodedSize));
    builder.encodeStruct(WindowManagerClient_WmRequestClose_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowManagerClientProxy.prototype.wmSetFrameDecorationValues = function(values) {
    var params = new WindowManagerClient_WmSetFrameDecorationValues_Params();
    params.values = values;
    var builder = new codec.MessageBuilder(
        kWindowManagerClient_WmSetFrameDecorationValues_Name,
        codec.align(WindowManagerClient_WmSetFrameDecorationValues_Params.encodedSize));
    builder.encodeStruct(WindowManagerClient_WmSetFrameDecorationValues_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowManagerClientProxy.prototype.wmSetNonClientCursor = function(window_id, cursor_id) {
    var params = new WindowManagerClient_WmSetNonClientCursor_Params();
    params.window_id = window_id;
    params.cursor_id = cursor_id;
    var builder = new codec.MessageBuilder(
        kWindowManagerClient_WmSetNonClientCursor_Name,
        codec.align(WindowManagerClient_WmSetNonClientCursor_Params.encodedSize));
    builder.encodeStruct(WindowManagerClient_WmSetNonClientCursor_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowManagerClientProxy.prototype.onWmCreatedTopLevelWindow = function(change_id, window_id) {
    var params = new WindowManagerClient_OnWmCreatedTopLevelWindow_Params();
    params.change_id = change_id;
    params.window_id = window_id;
    var builder = new codec.MessageBuilder(
        kWindowManagerClient_OnWmCreatedTopLevelWindow_Name,
        codec.align(WindowManagerClient_OnWmCreatedTopLevelWindow_Params.encodedSize));
    builder.encodeStruct(WindowManagerClient_OnWmCreatedTopLevelWindow_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowManagerClientProxy.prototype.onAcceleratorAck = function(ack_id, event_result) {
    var params = new WindowManagerClient_OnAcceleratorAck_Params();
    params.ack_id = ack_id;
    params.event_result = event_result;
    var builder = new codec.MessageBuilder(
        kWindowManagerClient_OnAcceleratorAck_Name,
        codec.align(WindowManagerClient_OnAcceleratorAck_Params.encodedSize));
    builder.encodeStruct(WindowManagerClient_OnAcceleratorAck_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function WindowManagerClientStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  WindowManagerClientStub.prototype = Object.create(bindings.StubBase.prototype);
  WindowManagerClientStub.prototype.addActivationParent = function(window_id) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.addActivationParent && bindings.StubBindings(this).delegate.addActivationParent(window_id);
  }
  WindowManagerClientStub.prototype.removeActivationParent = function(window_id) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.removeActivationParent && bindings.StubBindings(this).delegate.removeActivationParent(window_id);
  }
  WindowManagerClientStub.prototype.activateNextWindow = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.activateNextWindow && bindings.StubBindings(this).delegate.activateNextWindow();
  }
  WindowManagerClientStub.prototype.setUnderlaySurfaceOffsetAndExtendedHitArea = function(window_id, x_offset, y_offset, hit_area) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.setUnderlaySurfaceOffsetAndExtendedHitArea && bindings.StubBindings(this).delegate.setUnderlaySurfaceOffsetAndExtendedHitArea(window_id, x_offset, y_offset, hit_area);
  }
  WindowManagerClientStub.prototype.addAccelerator = function(id, matcher) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.addAccelerator && bindings.StubBindings(this).delegate.addAccelerator(id, matcher);
  }
  WindowManagerClientStub.prototype.removeAccelerator = function(id) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.removeAccelerator && bindings.StubBindings(this).delegate.removeAccelerator(id);
  }
  WindowManagerClientStub.prototype.wmResponse = function(change_id, response) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.wmResponse && bindings.StubBindings(this).delegate.wmResponse(change_id, response);
  }
  WindowManagerClientStub.prototype.wmRequestClose = function(window_id) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.wmRequestClose && bindings.StubBindings(this).delegate.wmRequestClose(window_id);
  }
  WindowManagerClientStub.prototype.wmSetFrameDecorationValues = function(values) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.wmSetFrameDecorationValues && bindings.StubBindings(this).delegate.wmSetFrameDecorationValues(values);
  }
  WindowManagerClientStub.prototype.wmSetNonClientCursor = function(window_id, cursor_id) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.wmSetNonClientCursor && bindings.StubBindings(this).delegate.wmSetNonClientCursor(window_id, cursor_id);
  }
  WindowManagerClientStub.prototype.onWmCreatedTopLevelWindow = function(change_id, window_id) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onWmCreatedTopLevelWindow && bindings.StubBindings(this).delegate.onWmCreatedTopLevelWindow(change_id, window_id);
  }
  WindowManagerClientStub.prototype.onAcceleratorAck = function(ack_id, event_result) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onAcceleratorAck && bindings.StubBindings(this).delegate.onAcceleratorAck(ack_id, event_result);
  }

  WindowManagerClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kWindowManagerClient_AddActivationParent_Name:
      var params = reader.decodeStruct(WindowManagerClient_AddActivationParent_Params);
      this.addActivationParent(params.window_id);
      return true;
    case kWindowManagerClient_RemoveActivationParent_Name:
      var params = reader.decodeStruct(WindowManagerClient_RemoveActivationParent_Params);
      this.removeActivationParent(params.window_id);
      return true;
    case kWindowManagerClient_ActivateNextWindow_Name:
      var params = reader.decodeStruct(WindowManagerClient_ActivateNextWindow_Params);
      this.activateNextWindow();
      return true;
    case kWindowManagerClient_SetUnderlaySurfaceOffsetAndExtendedHitArea_Name:
      var params = reader.decodeStruct(WindowManagerClient_SetUnderlaySurfaceOffsetAndExtendedHitArea_Params);
      this.setUnderlaySurfaceOffsetAndExtendedHitArea(params.window_id, params.x_offset, params.y_offset, params.hit_area);
      return true;
    case kWindowManagerClient_RemoveAccelerator_Name:
      var params = reader.decodeStruct(WindowManagerClient_RemoveAccelerator_Params);
      this.removeAccelerator(params.id);
      return true;
    case kWindowManagerClient_WmResponse_Name:
      var params = reader.decodeStruct(WindowManagerClient_WmResponse_Params);
      this.wmResponse(params.change_id, params.response);
      return true;
    case kWindowManagerClient_WmRequestClose_Name:
      var params = reader.decodeStruct(WindowManagerClient_WmRequestClose_Params);
      this.wmRequestClose(params.window_id);
      return true;
    case kWindowManagerClient_WmSetFrameDecorationValues_Name:
      var params = reader.decodeStruct(WindowManagerClient_WmSetFrameDecorationValues_Params);
      this.wmSetFrameDecorationValues(params.values);
      return true;
    case kWindowManagerClient_WmSetNonClientCursor_Name:
      var params = reader.decodeStruct(WindowManagerClient_WmSetNonClientCursor_Params);
      this.wmSetNonClientCursor(params.window_id, params.cursor_id);
      return true;
    case kWindowManagerClient_OnWmCreatedTopLevelWindow_Name:
      var params = reader.decodeStruct(WindowManagerClient_OnWmCreatedTopLevelWindow_Params);
      this.onWmCreatedTopLevelWindow(params.change_id, params.window_id);
      return true;
    case kWindowManagerClient_OnAcceleratorAck_Name:
      var params = reader.decodeStruct(WindowManagerClient_OnAcceleratorAck_Params);
      this.onAcceleratorAck(params.ack_id, params.event_result);
      return true;
    default:
      return false;
    }
  };

  WindowManagerClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kWindowManagerClient_AddAccelerator_Name:
      var params = reader.decodeStruct(WindowManagerClient_AddAccelerator_Params);
      return this.addAccelerator(params.id, params.matcher).then(function(response) {
        var responseParams =
            new WindowManagerClient_AddAccelerator_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageWithRequestIDBuilder(
            kWindowManagerClient_AddAccelerator_Name,
            codec.align(WindowManagerClient_AddAccelerator_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(WindowManagerClient_AddAccelerator_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateWindowManagerClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kWindowManagerClient_AddActivationParent_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManagerClient_AddActivationParent_Params;
      break;
      case kWindowManagerClient_RemoveActivationParent_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManagerClient_RemoveActivationParent_Params;
      break;
      case kWindowManagerClient_ActivateNextWindow_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManagerClient_ActivateNextWindow_Params;
      break;
      case kWindowManagerClient_SetUnderlaySurfaceOffsetAndExtendedHitArea_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManagerClient_SetUnderlaySurfaceOffsetAndExtendedHitArea_Params;
      break;
      case kWindowManagerClient_AddAccelerator_Name:
        if (message.expectsResponse())
          paramsClass = WindowManagerClient_AddAccelerator_Params;
      break;
      case kWindowManagerClient_RemoveAccelerator_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManagerClient_RemoveAccelerator_Params;
      break;
      case kWindowManagerClient_WmResponse_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManagerClient_WmResponse_Params;
      break;
      case kWindowManagerClient_WmRequestClose_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManagerClient_WmRequestClose_Params;
      break;
      case kWindowManagerClient_WmSetFrameDecorationValues_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManagerClient_WmSetFrameDecorationValues_Params;
      break;
      case kWindowManagerClient_WmSetNonClientCursor_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManagerClient_WmSetNonClientCursor_Params;
      break;
      case kWindowManagerClient_OnWmCreatedTopLevelWindow_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManagerClient_OnWmCreatedTopLevelWindow_Params;
      break;
      case kWindowManagerClient_OnAcceleratorAck_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManagerClient_OnAcceleratorAck_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateWindowManagerClientResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kWindowManagerClient_AddAccelerator_Name:
        if (message.isResponse())
          paramsClass = WindowManagerClient_AddAccelerator_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var WindowManagerClient = {
    name: 'ui::mojom::WindowManagerClient',
    proxyClass: WindowManagerClientProxy,
    stubClass: WindowManagerClientStub,
    validateRequest: validateWindowManagerClientRequest,
    validateResponse: validateWindowManagerClientResponse,
  };
  WindowManagerClientStub.prototype.validator = validateWindowManagerClientRequest;
  WindowManagerClientProxy.prototype.validator = validateWindowManagerClientResponse;

  var exports = {};
  exports.WindowManager = WindowManager;
  exports.WindowManagerClient = WindowManagerClient;

  return exports;
});
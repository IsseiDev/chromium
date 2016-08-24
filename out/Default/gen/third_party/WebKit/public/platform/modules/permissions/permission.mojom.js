// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("third_party/WebKit/public/platform/modules/permissions/permission.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "third_party/WebKit/public/platform/modules/permissions/permission_status.mojom",
    "url/mojo/origin.mojom",
], function(bindings, codec, connection, core, validator, permission_status$, origin$) {
  var PermissionName = {};
  PermissionName.GEOLOCATION = 0;
  PermissionName.NOTIFICATIONS = PermissionName.GEOLOCATION + 1;
  PermissionName.PUSH_NOTIFICATIONS = PermissionName.NOTIFICATIONS + 1;
  PermissionName.MIDI = PermissionName.PUSH_NOTIFICATIONS + 1;
  PermissionName.MIDI_SYSEX = PermissionName.MIDI + 1;
  PermissionName.PROTECTED_MEDIA_IDENTIFIER = PermissionName.MIDI_SYSEX + 1;
  PermissionName.DURABLE_STORAGE = PermissionName.PROTECTED_MEDIA_IDENTIFIER + 1;
  PermissionName.AUDIO_CAPTURE = PermissionName.DURABLE_STORAGE + 1;
  PermissionName.VIDEO_CAPTURE = PermissionName.AUDIO_CAPTURE + 1;
  PermissionName.BACKGROUND_SYNC = PermissionName.VIDEO_CAPTURE + 1;

  function PermissionService_HasPermission_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PermissionService_HasPermission_Params.prototype.initDefaults_ = function() {
    this.permission = 0;
    this.origin = null;
  };
  PermissionService_HasPermission_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PermissionService_HasPermission_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PermissionService_HasPermission_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate PermissionService_HasPermission_Params.origin
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, origin$.Origin, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PermissionService_HasPermission_Params.encodedSize = codec.kStructHeaderSize + 16;

  PermissionService_HasPermission_Params.decode = function(decoder) {
    var packed;
    var val = new PermissionService_HasPermission_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.permission = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.origin = decoder.decodeStructPointer(origin$.Origin);
    return val;
  };

  PermissionService_HasPermission_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PermissionService_HasPermission_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.permission);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(origin$.Origin, val.origin);
  };
  function PermissionService_HasPermission_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PermissionService_HasPermission_ResponseParams.prototype.initDefaults_ = function() {
    this.status = 0;
  };
  PermissionService_HasPermission_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PermissionService_HasPermission_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PermissionService_HasPermission_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  PermissionService_HasPermission_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  PermissionService_HasPermission_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new PermissionService_HasPermission_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PermissionService_HasPermission_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PermissionService_HasPermission_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PermissionService_RequestPermission_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PermissionService_RequestPermission_Params.prototype.initDefaults_ = function() {
    this.permission = 0;
    this.user_gesture = false;
    this.origin = null;
  };
  PermissionService_RequestPermission_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PermissionService_RequestPermission_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PermissionService_RequestPermission_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



    
    // validate PermissionService_RequestPermission_Params.origin
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, origin$.Origin, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PermissionService_RequestPermission_Params.encodedSize = codec.kStructHeaderSize + 16;

  PermissionService_RequestPermission_Params.decode = function(decoder) {
    var packed;
    var val = new PermissionService_RequestPermission_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.permission = decoder.decodeStruct(codec.Int32);
    val.user_gesture = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.origin = decoder.decodeStructPointer(origin$.Origin);
    return val;
  };

  PermissionService_RequestPermission_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PermissionService_RequestPermission_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.permission);
    encoder.encodeStruct(codec.Uint8, val.user_gesture);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(origin$.Origin, val.origin);
  };
  function PermissionService_RequestPermission_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PermissionService_RequestPermission_ResponseParams.prototype.initDefaults_ = function() {
    this.status = 0;
  };
  PermissionService_RequestPermission_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PermissionService_RequestPermission_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PermissionService_RequestPermission_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  PermissionService_RequestPermission_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  PermissionService_RequestPermission_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new PermissionService_RequestPermission_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PermissionService_RequestPermission_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PermissionService_RequestPermission_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PermissionService_RequestPermissions_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PermissionService_RequestPermissions_Params.prototype.initDefaults_ = function() {
    this.permission = null;
    this.origin = null;
    this.user_gesture = false;
  };
  PermissionService_RequestPermissions_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PermissionService_RequestPermissions_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PermissionService_RequestPermissions_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PermissionService_RequestPermissions_Params.permission
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 4, codec.Int32, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PermissionService_RequestPermissions_Params.origin
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, origin$.Origin, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  PermissionService_RequestPermissions_Params.encodedSize = codec.kStructHeaderSize + 24;

  PermissionService_RequestPermissions_Params.decode = function(decoder) {
    var packed;
    var val = new PermissionService_RequestPermissions_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.permission = decoder.decodeArrayPointer(codec.Int32);
    val.origin = decoder.decodeStructPointer(origin$.Origin);
    val.user_gesture = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PermissionService_RequestPermissions_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PermissionService_RequestPermissions_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Int32, val.permission);
    encoder.encodeStructPointer(origin$.Origin, val.origin);
    encoder.encodeStruct(codec.Uint8, val.user_gesture);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PermissionService_RequestPermissions_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PermissionService_RequestPermissions_ResponseParams.prototype.initDefaults_ = function() {
    this.statuses = null;
  };
  PermissionService_RequestPermissions_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PermissionService_RequestPermissions_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PermissionService_RequestPermissions_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PermissionService_RequestPermissions_ResponseParams.statuses
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 4, codec.Int32, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PermissionService_RequestPermissions_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  PermissionService_RequestPermissions_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new PermissionService_RequestPermissions_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.statuses = decoder.decodeArrayPointer(codec.Int32);
    return val;
  };

  PermissionService_RequestPermissions_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PermissionService_RequestPermissions_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Int32, val.statuses);
  };
  function PermissionService_RevokePermission_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PermissionService_RevokePermission_Params.prototype.initDefaults_ = function() {
    this.permission = 0;
    this.origin = null;
  };
  PermissionService_RevokePermission_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PermissionService_RevokePermission_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PermissionService_RevokePermission_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate PermissionService_RevokePermission_Params.origin
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, origin$.Origin, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PermissionService_RevokePermission_Params.encodedSize = codec.kStructHeaderSize + 16;

  PermissionService_RevokePermission_Params.decode = function(decoder) {
    var packed;
    var val = new PermissionService_RevokePermission_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.permission = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.origin = decoder.decodeStructPointer(origin$.Origin);
    return val;
  };

  PermissionService_RevokePermission_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PermissionService_RevokePermission_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.permission);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(origin$.Origin, val.origin);
  };
  function PermissionService_RevokePermission_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PermissionService_RevokePermission_ResponseParams.prototype.initDefaults_ = function() {
    this.status = 0;
  };
  PermissionService_RevokePermission_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PermissionService_RevokePermission_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PermissionService_RevokePermission_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  PermissionService_RevokePermission_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  PermissionService_RevokePermission_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new PermissionService_RevokePermission_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PermissionService_RevokePermission_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PermissionService_RevokePermission_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PermissionService_GetNextPermissionChange_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PermissionService_GetNextPermissionChange_Params.prototype.initDefaults_ = function() {
    this.permission = 0;
    this.last_known_status = 0;
    this.origin = null;
  };
  PermissionService_GetNextPermissionChange_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PermissionService_GetNextPermissionChange_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PermissionService_GetNextPermissionChange_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



    
    // validate PermissionService_GetNextPermissionChange_Params.origin
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, origin$.Origin, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PermissionService_GetNextPermissionChange_Params.encodedSize = codec.kStructHeaderSize + 16;

  PermissionService_GetNextPermissionChange_Params.decode = function(decoder) {
    var packed;
    var val = new PermissionService_GetNextPermissionChange_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.permission = decoder.decodeStruct(codec.Int32);
    val.last_known_status = decoder.decodeStruct(codec.Int32);
    val.origin = decoder.decodeStructPointer(origin$.Origin);
    return val;
  };

  PermissionService_GetNextPermissionChange_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PermissionService_GetNextPermissionChange_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.permission);
    encoder.encodeStruct(codec.Int32, val.last_known_status);
    encoder.encodeStructPointer(origin$.Origin, val.origin);
  };
  function PermissionService_GetNextPermissionChange_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PermissionService_GetNextPermissionChange_ResponseParams.prototype.initDefaults_ = function() {
    this.status = 0;
  };
  PermissionService_GetNextPermissionChange_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PermissionService_GetNextPermissionChange_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PermissionService_GetNextPermissionChange_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  PermissionService_GetNextPermissionChange_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  PermissionService_GetNextPermissionChange_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new PermissionService_GetNextPermissionChange_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PermissionService_GetNextPermissionChange_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PermissionService_GetNextPermissionChange_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kPermissionService_HasPermission_Name = 0;
  var kPermissionService_RequestPermission_Name = 1;
  var kPermissionService_RequestPermissions_Name = 2;
  var kPermissionService_RevokePermission_Name = 3;
  var kPermissionService_GetNextPermissionChange_Name = 4;

  function PermissionServiceProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  PermissionServiceProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  PermissionServiceProxy.prototype.hasPermission = function(permission, origin) {
    var params = new PermissionService_HasPermission_Params();
    params.permission = permission;
    params.origin = origin;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kPermissionService_HasPermission_Name,
          codec.align(PermissionService_HasPermission_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(PermissionService_HasPermission_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(PermissionService_HasPermission_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  PermissionServiceProxy.prototype.requestPermission = function(permission, origin, user_gesture) {
    var params = new PermissionService_RequestPermission_Params();
    params.permission = permission;
    params.origin = origin;
    params.user_gesture = user_gesture;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kPermissionService_RequestPermission_Name,
          codec.align(PermissionService_RequestPermission_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(PermissionService_RequestPermission_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(PermissionService_RequestPermission_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  PermissionServiceProxy.prototype.requestPermissions = function(permission, origin, user_gesture) {
    var params = new PermissionService_RequestPermissions_Params();
    params.permission = permission;
    params.origin = origin;
    params.user_gesture = user_gesture;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kPermissionService_RequestPermissions_Name,
          codec.align(PermissionService_RequestPermissions_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(PermissionService_RequestPermissions_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(PermissionService_RequestPermissions_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  PermissionServiceProxy.prototype.revokePermission = function(permission, origin) {
    var params = new PermissionService_RevokePermission_Params();
    params.permission = permission;
    params.origin = origin;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kPermissionService_RevokePermission_Name,
          codec.align(PermissionService_RevokePermission_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(PermissionService_RevokePermission_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(PermissionService_RevokePermission_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  PermissionServiceProxy.prototype.getNextPermissionChange = function(permission, origin, last_known_status) {
    var params = new PermissionService_GetNextPermissionChange_Params();
    params.permission = permission;
    params.origin = origin;
    params.last_known_status = last_known_status;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kPermissionService_GetNextPermissionChange_Name,
          codec.align(PermissionService_GetNextPermissionChange_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(PermissionService_GetNextPermissionChange_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(PermissionService_GetNextPermissionChange_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function PermissionServiceStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  PermissionServiceStub.prototype = Object.create(bindings.StubBase.prototype);
  PermissionServiceStub.prototype.hasPermission = function(permission, origin) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.hasPermission && bindings.StubBindings(this).delegate.hasPermission(permission, origin);
  }
  PermissionServiceStub.prototype.requestPermission = function(permission, origin, user_gesture) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.requestPermission && bindings.StubBindings(this).delegate.requestPermission(permission, origin, user_gesture);
  }
  PermissionServiceStub.prototype.requestPermissions = function(permission, origin, user_gesture) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.requestPermissions && bindings.StubBindings(this).delegate.requestPermissions(permission, origin, user_gesture);
  }
  PermissionServiceStub.prototype.revokePermission = function(permission, origin) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.revokePermission && bindings.StubBindings(this).delegate.revokePermission(permission, origin);
  }
  PermissionServiceStub.prototype.getNextPermissionChange = function(permission, origin, last_known_status) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.getNextPermissionChange && bindings.StubBindings(this).delegate.getNextPermissionChange(permission, origin, last_known_status);
  }

  PermissionServiceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  PermissionServiceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPermissionService_HasPermission_Name:
      var params = reader.decodeStruct(PermissionService_HasPermission_Params);
      return this.hasPermission(params.permission, params.origin).then(function(response) {
        var responseParams =
            new PermissionService_HasPermission_ResponseParams();
        responseParams.status = response.status;
        var builder = new codec.MessageWithRequestIDBuilder(
            kPermissionService_HasPermission_Name,
            codec.align(PermissionService_HasPermission_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(PermissionService_HasPermission_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kPermissionService_RequestPermission_Name:
      var params = reader.decodeStruct(PermissionService_RequestPermission_Params);
      return this.requestPermission(params.permission, params.origin, params.user_gesture).then(function(response) {
        var responseParams =
            new PermissionService_RequestPermission_ResponseParams();
        responseParams.status = response.status;
        var builder = new codec.MessageWithRequestIDBuilder(
            kPermissionService_RequestPermission_Name,
            codec.align(PermissionService_RequestPermission_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(PermissionService_RequestPermission_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kPermissionService_RequestPermissions_Name:
      var params = reader.decodeStruct(PermissionService_RequestPermissions_Params);
      return this.requestPermissions(params.permission, params.origin, params.user_gesture).then(function(response) {
        var responseParams =
            new PermissionService_RequestPermissions_ResponseParams();
        responseParams.statuses = response.statuses;
        var builder = new codec.MessageWithRequestIDBuilder(
            kPermissionService_RequestPermissions_Name,
            codec.align(PermissionService_RequestPermissions_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(PermissionService_RequestPermissions_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kPermissionService_RevokePermission_Name:
      var params = reader.decodeStruct(PermissionService_RevokePermission_Params);
      return this.revokePermission(params.permission, params.origin).then(function(response) {
        var responseParams =
            new PermissionService_RevokePermission_ResponseParams();
        responseParams.status = response.status;
        var builder = new codec.MessageWithRequestIDBuilder(
            kPermissionService_RevokePermission_Name,
            codec.align(PermissionService_RevokePermission_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(PermissionService_RevokePermission_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kPermissionService_GetNextPermissionChange_Name:
      var params = reader.decodeStruct(PermissionService_GetNextPermissionChange_Params);
      return this.getNextPermissionChange(params.permission, params.origin, params.last_known_status).then(function(response) {
        var responseParams =
            new PermissionService_GetNextPermissionChange_ResponseParams();
        responseParams.status = response.status;
        var builder = new codec.MessageWithRequestIDBuilder(
            kPermissionService_GetNextPermissionChange_Name,
            codec.align(PermissionService_GetNextPermissionChange_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(PermissionService_GetNextPermissionChange_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validatePermissionServiceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kPermissionService_HasPermission_Name:
        if (message.expectsResponse())
          paramsClass = PermissionService_HasPermission_Params;
      break;
      case kPermissionService_RequestPermission_Name:
        if (message.expectsResponse())
          paramsClass = PermissionService_RequestPermission_Params;
      break;
      case kPermissionService_RequestPermissions_Name:
        if (message.expectsResponse())
          paramsClass = PermissionService_RequestPermissions_Params;
      break;
      case kPermissionService_RevokePermission_Name:
        if (message.expectsResponse())
          paramsClass = PermissionService_RevokePermission_Params;
      break;
      case kPermissionService_GetNextPermissionChange_Name:
        if (message.expectsResponse())
          paramsClass = PermissionService_GetNextPermissionChange_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validatePermissionServiceResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kPermissionService_HasPermission_Name:
        if (message.isResponse())
          paramsClass = PermissionService_HasPermission_ResponseParams;
        break;
      case kPermissionService_RequestPermission_Name:
        if (message.isResponse())
          paramsClass = PermissionService_RequestPermission_ResponseParams;
        break;
      case kPermissionService_RequestPermissions_Name:
        if (message.isResponse())
          paramsClass = PermissionService_RequestPermissions_ResponseParams;
        break;
      case kPermissionService_RevokePermission_Name:
        if (message.isResponse())
          paramsClass = PermissionService_RevokePermission_ResponseParams;
        break;
      case kPermissionService_GetNextPermissionChange_Name:
        if (message.isResponse())
          paramsClass = PermissionService_GetNextPermissionChange_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var PermissionService = {
    name: 'blink::mojom::PermissionService',
    proxyClass: PermissionServiceProxy,
    stubClass: PermissionServiceStub,
    validateRequest: validatePermissionServiceRequest,
    validateResponse: validatePermissionServiceResponse,
  };
  PermissionServiceStub.prototype.validator = validatePermissionServiceRequest;
  PermissionServiceProxy.prototype.validator = validatePermissionServiceResponse;

  var exports = {};
  exports.PermissionName = PermissionName;
  exports.PermissionService = PermissionService;

  return exports;
});
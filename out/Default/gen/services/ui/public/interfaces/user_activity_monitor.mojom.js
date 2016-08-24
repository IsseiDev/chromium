// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("services/ui/public/interfaces/user_activity_monitor.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {

  function UserActivityObserver_OnUserActivity_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UserActivityObserver_OnUserActivity_Params.prototype.initDefaults_ = function() {
  };
  UserActivityObserver_OnUserActivity_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  UserActivityObserver_OnUserActivity_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, UserActivityObserver_OnUserActivity_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  UserActivityObserver_OnUserActivity_Params.encodedSize = codec.kStructHeaderSize + 0;

  UserActivityObserver_OnUserActivity_Params.decode = function(decoder) {
    var packed;
    var val = new UserActivityObserver_OnUserActivity_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  UserActivityObserver_OnUserActivity_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UserActivityObserver_OnUserActivity_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function UserIdleObserver_OnUserIdleStateChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UserIdleObserver_OnUserIdleStateChanged_Params.prototype.initDefaults_ = function() {
    this.new_state = 0;
  };
  UserIdleObserver_OnUserIdleStateChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  UserIdleObserver_OnUserIdleStateChanged_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, UserIdleObserver_OnUserIdleStateChanged_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  UserIdleObserver_OnUserIdleStateChanged_Params.encodedSize = codec.kStructHeaderSize + 8;

  UserIdleObserver_OnUserIdleStateChanged_Params.decode = function(decoder) {
    var packed;
    var val = new UserIdleObserver_OnUserIdleStateChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.new_state = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  UserIdleObserver_OnUserIdleStateChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UserIdleObserver_OnUserIdleStateChanged_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.new_state);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function UserActivityMonitor_AddUserActivityObserver_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UserActivityMonitor_AddUserActivityObserver_Params.prototype.initDefaults_ = function() {
    this.delay_between_notify_secs = 0;
    this.observer = null;
  };
  UserActivityMonitor_AddUserActivityObserver_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  UserActivityMonitor_AddUserActivityObserver_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, UserActivityMonitor_AddUserActivityObserver_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate UserActivityMonitor_AddUserActivityObserver_Params.observer
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 4, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  UserActivityMonitor_AddUserActivityObserver_Params.encodedSize = codec.kStructHeaderSize + 16;

  UserActivityMonitor_AddUserActivityObserver_Params.decode = function(decoder) {
    var packed;
    var val = new UserActivityMonitor_AddUserActivityObserver_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.delay_between_notify_secs = decoder.decodeStruct(codec.Uint32);
    val.observer = decoder.decodeStruct(codec.Interface);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  UserActivityMonitor_AddUserActivityObserver_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UserActivityMonitor_AddUserActivityObserver_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.delay_between_notify_secs);
    encoder.encodeStruct(codec.Interface, val.observer);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function UserActivityMonitor_AddUserIdleObserver_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UserActivityMonitor_AddUserIdleObserver_Params.prototype.initDefaults_ = function() {
    this.idle_time_in_minutes = 0;
    this.observer = null;
  };
  UserActivityMonitor_AddUserIdleObserver_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  UserActivityMonitor_AddUserIdleObserver_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, UserActivityMonitor_AddUserIdleObserver_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate UserActivityMonitor_AddUserIdleObserver_Params.observer
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 4, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  UserActivityMonitor_AddUserIdleObserver_Params.encodedSize = codec.kStructHeaderSize + 16;

  UserActivityMonitor_AddUserIdleObserver_Params.decode = function(decoder) {
    var packed;
    var val = new UserActivityMonitor_AddUserIdleObserver_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.idle_time_in_minutes = decoder.decodeStruct(codec.Uint32);
    val.observer = decoder.decodeStruct(codec.Interface);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  UserActivityMonitor_AddUserIdleObserver_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UserActivityMonitor_AddUserIdleObserver_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.idle_time_in_minutes);
    encoder.encodeStruct(codec.Interface, val.observer);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kUserActivityObserver_OnUserActivity_Name = 0;

  function UserActivityObserverProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  UserActivityObserverProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  UserActivityObserverProxy.prototype.onUserActivity = function() {
    var params = new UserActivityObserver_OnUserActivity_Params();
    var builder = new codec.MessageBuilder(
        kUserActivityObserver_OnUserActivity_Name,
        codec.align(UserActivityObserver_OnUserActivity_Params.encodedSize));
    builder.encodeStruct(UserActivityObserver_OnUserActivity_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function UserActivityObserverStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  UserActivityObserverStub.prototype = Object.create(bindings.StubBase.prototype);
  UserActivityObserverStub.prototype.onUserActivity = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onUserActivity && bindings.StubBindings(this).delegate.onUserActivity();
  }

  UserActivityObserverStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kUserActivityObserver_OnUserActivity_Name:
      var params = reader.decodeStruct(UserActivityObserver_OnUserActivity_Params);
      this.onUserActivity();
      return true;
    default:
      return false;
    }
  };

  UserActivityObserverStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateUserActivityObserverRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kUserActivityObserver_OnUserActivity_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = UserActivityObserver_OnUserActivity_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateUserActivityObserverResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var UserActivityObserver = {
    name: 'ui::mojom::UserActivityObserver',
    proxyClass: UserActivityObserverProxy,
    stubClass: UserActivityObserverStub,
    validateRequest: validateUserActivityObserverRequest,
    validateResponse: null,
  };
  UserActivityObserverStub.prototype.validator = validateUserActivityObserverRequest;
  UserActivityObserverProxy.prototype.validator = null;
  var kUserIdleObserver_OnUserIdleStateChanged_Name = 0;

  function UserIdleObserverProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  UserIdleObserverProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  UserIdleObserverProxy.prototype.onUserIdleStateChanged = function(new_state) {
    var params = new UserIdleObserver_OnUserIdleStateChanged_Params();
    params.new_state = new_state;
    var builder = new codec.MessageBuilder(
        kUserIdleObserver_OnUserIdleStateChanged_Name,
        codec.align(UserIdleObserver_OnUserIdleStateChanged_Params.encodedSize));
    builder.encodeStruct(UserIdleObserver_OnUserIdleStateChanged_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function UserIdleObserverStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  UserIdleObserverStub.prototype = Object.create(bindings.StubBase.prototype);
  UserIdleObserverStub.prototype.onUserIdleStateChanged = function(new_state) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onUserIdleStateChanged && bindings.StubBindings(this).delegate.onUserIdleStateChanged(new_state);
  }

  UserIdleObserverStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kUserIdleObserver_OnUserIdleStateChanged_Name:
      var params = reader.decodeStruct(UserIdleObserver_OnUserIdleStateChanged_Params);
      this.onUserIdleStateChanged(params.new_state);
      return true;
    default:
      return false;
    }
  };

  UserIdleObserverStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateUserIdleObserverRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kUserIdleObserver_OnUserIdleStateChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = UserIdleObserver_OnUserIdleStateChanged_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateUserIdleObserverResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var UserIdleObserver = {
    name: 'ui::mojom::UserIdleObserver',
    proxyClass: UserIdleObserverProxy,
    stubClass: UserIdleObserverStub,
    validateRequest: validateUserIdleObserverRequest,
    validateResponse: null,
  };
  UserIdleObserver.IdleState = {};
  UserIdleObserver.IdleState.ACTIVE = 0;
  UserIdleObserver.IdleState.IDLE = UserIdleObserver.IdleState.ACTIVE + 1;
  UserIdleObserverStub.prototype.validator = validateUserIdleObserverRequest;
  UserIdleObserverProxy.prototype.validator = null;
  var kUserActivityMonitor_AddUserActivityObserver_Name = 0;
  var kUserActivityMonitor_AddUserIdleObserver_Name = 1;

  function UserActivityMonitorProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  UserActivityMonitorProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  UserActivityMonitorProxy.prototype.addUserActivityObserver = function(delay_between_notify_secs, observer) {
    var params = new UserActivityMonitor_AddUserActivityObserver_Params();
    params.delay_between_notify_secs = delay_between_notify_secs;
    params.observer = core.isHandle(observer) ? observer : connection.bindImpl(observer, UserActivityObserver);
    var builder = new codec.MessageBuilder(
        kUserActivityMonitor_AddUserActivityObserver_Name,
        codec.align(UserActivityMonitor_AddUserActivityObserver_Params.encodedSize));
    builder.encodeStruct(UserActivityMonitor_AddUserActivityObserver_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  UserActivityMonitorProxy.prototype.addUserIdleObserver = function(idle_time_in_minutes, observer) {
    var params = new UserActivityMonitor_AddUserIdleObserver_Params();
    params.idle_time_in_minutes = idle_time_in_minutes;
    params.observer = core.isHandle(observer) ? observer : connection.bindImpl(observer, UserIdleObserver);
    var builder = new codec.MessageBuilder(
        kUserActivityMonitor_AddUserIdleObserver_Name,
        codec.align(UserActivityMonitor_AddUserIdleObserver_Params.encodedSize));
    builder.encodeStruct(UserActivityMonitor_AddUserIdleObserver_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function UserActivityMonitorStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  UserActivityMonitorStub.prototype = Object.create(bindings.StubBase.prototype);
  UserActivityMonitorStub.prototype.addUserActivityObserver = function(delay_between_notify_secs, observer) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.addUserActivityObserver && bindings.StubBindings(this).delegate.addUserActivityObserver(delay_between_notify_secs, connection.bindHandleToProxy(observer, UserActivityObserver));
  }
  UserActivityMonitorStub.prototype.addUserIdleObserver = function(idle_time_in_minutes, observer) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.addUserIdleObserver && bindings.StubBindings(this).delegate.addUserIdleObserver(idle_time_in_minutes, connection.bindHandleToProxy(observer, UserIdleObserver));
  }

  UserActivityMonitorStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kUserActivityMonitor_AddUserActivityObserver_Name:
      var params = reader.decodeStruct(UserActivityMonitor_AddUserActivityObserver_Params);
      this.addUserActivityObserver(params.delay_between_notify_secs, params.observer);
      return true;
    case kUserActivityMonitor_AddUserIdleObserver_Name:
      var params = reader.decodeStruct(UserActivityMonitor_AddUserIdleObserver_Params);
      this.addUserIdleObserver(params.idle_time_in_minutes, params.observer);
      return true;
    default:
      return false;
    }
  };

  UserActivityMonitorStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateUserActivityMonitorRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kUserActivityMonitor_AddUserActivityObserver_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = UserActivityMonitor_AddUserActivityObserver_Params;
      break;
      case kUserActivityMonitor_AddUserIdleObserver_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = UserActivityMonitor_AddUserIdleObserver_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateUserActivityMonitorResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var UserActivityMonitor = {
    name: 'ui::mojom::UserActivityMonitor',
    proxyClass: UserActivityMonitorProxy,
    stubClass: UserActivityMonitorStub,
    validateRequest: validateUserActivityMonitorRequest,
    validateResponse: null,
  };
  UserActivityMonitorStub.prototype.validator = validateUserActivityMonitorRequest;
  UserActivityMonitorProxy.prototype.validator = null;

  var exports = {};
  exports.UserActivityObserver = UserActivityObserver;
  exports.UserIdleObserver = UserIdleObserver;
  exports.UserActivityMonitor = UserActivityMonitor;

  return exports;
});
// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("components/startup_metric_utils/common/startup_metric.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "mojo/common/common_custom_types.mojom",
], function(bindings, codec, connection, core, validator, common_custom_types$) {

  function StartupMetricHost_RecordRendererMainEntryTime_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  StartupMetricHost_RecordRendererMainEntryTime_Params.prototype.initDefaults_ = function() {
    this.renderer_main_entry_time = null;
  };
  StartupMetricHost_RecordRendererMainEntryTime_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  StartupMetricHost_RecordRendererMainEntryTime_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, StartupMetricHost_RecordRendererMainEntryTime_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate StartupMetricHost_RecordRendererMainEntryTime_Params.renderer_main_entry_time
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, common_custom_types$.TimeTicks, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  StartupMetricHost_RecordRendererMainEntryTime_Params.encodedSize = codec.kStructHeaderSize + 8;

  StartupMetricHost_RecordRendererMainEntryTime_Params.decode = function(decoder) {
    var packed;
    var val = new StartupMetricHost_RecordRendererMainEntryTime_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.renderer_main_entry_time = decoder.decodeStructPointer(common_custom_types$.TimeTicks);
    return val;
  };

  StartupMetricHost_RecordRendererMainEntryTime_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(StartupMetricHost_RecordRendererMainEntryTime_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(common_custom_types$.TimeTicks, val.renderer_main_entry_time);
  };
  var kStartupMetricHost_RecordRendererMainEntryTime_Name = 0;

  function StartupMetricHostProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  StartupMetricHostProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  StartupMetricHostProxy.prototype.recordRendererMainEntryTime = function(renderer_main_entry_time) {
    var params = new StartupMetricHost_RecordRendererMainEntryTime_Params();
    params.renderer_main_entry_time = renderer_main_entry_time;
    var builder = new codec.MessageBuilder(
        kStartupMetricHost_RecordRendererMainEntryTime_Name,
        codec.align(StartupMetricHost_RecordRendererMainEntryTime_Params.encodedSize));
    builder.encodeStruct(StartupMetricHost_RecordRendererMainEntryTime_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function StartupMetricHostStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  StartupMetricHostStub.prototype = Object.create(bindings.StubBase.prototype);
  StartupMetricHostStub.prototype.recordRendererMainEntryTime = function(renderer_main_entry_time) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.recordRendererMainEntryTime && bindings.StubBindings(this).delegate.recordRendererMainEntryTime(renderer_main_entry_time);
  }

  StartupMetricHostStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kStartupMetricHost_RecordRendererMainEntryTime_Name:
      var params = reader.decodeStruct(StartupMetricHost_RecordRendererMainEntryTime_Params);
      this.recordRendererMainEntryTime(params.renderer_main_entry_time);
      return true;
    default:
      return false;
    }
  };

  StartupMetricHostStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateStartupMetricHostRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kStartupMetricHost_RecordRendererMainEntryTime_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = StartupMetricHost_RecordRendererMainEntryTime_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateStartupMetricHostResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var StartupMetricHost = {
    name: 'startup_metric_utils::mojom::StartupMetricHost',
    proxyClass: StartupMetricHostProxy,
    stubClass: StartupMetricHostStub,
    validateRequest: validateStartupMetricHostRequest,
    validateResponse: null,
  };
  StartupMetricHostStub.prototype.validator = validateStartupMetricHostRequest;
  StartupMetricHostProxy.prototype.validator = null;

  var exports = {};
  exports.StartupMetricHost = StartupMetricHost;

  return exports;
});
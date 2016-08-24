// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("chrome/common/resource_usage_reporter.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {

  function ResourceTypeStat(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ResourceTypeStat.prototype.initDefaults_ = function() {
    this.count = 0;
    this.size = 0;
    this.live_size = 0;
    this.decoded_size = 0;
  };
  ResourceTypeStat.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ResourceTypeStat.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ResourceTypeStat.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;





    return validator.validationError.NONE;
  };

  ResourceTypeStat.encodedSize = codec.kStructHeaderSize + 32;

  ResourceTypeStat.decode = function(decoder) {
    var packed;
    var val = new ResourceTypeStat();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.count = decoder.decodeStruct(codec.Uint64);
    val.size = decoder.decodeStruct(codec.Uint64);
    val.live_size = decoder.decodeStruct(codec.Uint64);
    val.decoded_size = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  ResourceTypeStat.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ResourceTypeStat.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.count);
    encoder.encodeStruct(codec.Uint64, val.size);
    encoder.encodeStruct(codec.Uint64, val.live_size);
    encoder.encodeStruct(codec.Uint64, val.decoded_size);
  };
  function ResourceTypeStats(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ResourceTypeStats.prototype.initDefaults_ = function() {
    this.images = null;
    this.css_style_sheets = null;
    this.scripts = null;
    this.xsl_style_sheets = null;
    this.fonts = null;
    this.other = null;
  };
  ResourceTypeStats.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ResourceTypeStats.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ResourceTypeStats.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ResourceTypeStats.images
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, ResourceTypeStat, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ResourceTypeStats.css_style_sheets
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, ResourceTypeStat, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ResourceTypeStats.scripts
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, ResourceTypeStat, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ResourceTypeStats.xsl_style_sheets
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, ResourceTypeStat, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ResourceTypeStats.fonts
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, ResourceTypeStat, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ResourceTypeStats.other
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 40, ResourceTypeStat, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ResourceTypeStats.encodedSize = codec.kStructHeaderSize + 48;

  ResourceTypeStats.decode = function(decoder) {
    var packed;
    var val = new ResourceTypeStats();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.images = decoder.decodeStructPointer(ResourceTypeStat);
    val.css_style_sheets = decoder.decodeStructPointer(ResourceTypeStat);
    val.scripts = decoder.decodeStructPointer(ResourceTypeStat);
    val.xsl_style_sheets = decoder.decodeStructPointer(ResourceTypeStat);
    val.fonts = decoder.decodeStructPointer(ResourceTypeStat);
    val.other = decoder.decodeStructPointer(ResourceTypeStat);
    return val;
  };

  ResourceTypeStats.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ResourceTypeStats.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(ResourceTypeStat, val.images);
    encoder.encodeStructPointer(ResourceTypeStat, val.css_style_sheets);
    encoder.encodeStructPointer(ResourceTypeStat, val.scripts);
    encoder.encodeStructPointer(ResourceTypeStat, val.xsl_style_sheets);
    encoder.encodeStructPointer(ResourceTypeStat, val.fonts);
    encoder.encodeStructPointer(ResourceTypeStat, val.other);
  };
  function ResourceUsageData(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ResourceUsageData.prototype.initDefaults_ = function() {
    this.reports_v8_stats = false;
    this.v8_bytes_allocated = 0;
    this.v8_bytes_used = 0;
    this.web_cache_stats = null;
  };
  ResourceUsageData.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ResourceUsageData.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ResourceUsageData.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;




    
    // validate ResourceUsageData.web_cache_stats
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, ResourceTypeStats, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ResourceUsageData.encodedSize = codec.kStructHeaderSize + 32;

  ResourceUsageData.decode = function(decoder) {
    var packed;
    var val = new ResourceUsageData();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.reports_v8_stats = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.v8_bytes_allocated = decoder.decodeStruct(codec.Uint64);
    val.v8_bytes_used = decoder.decodeStruct(codec.Uint64);
    val.web_cache_stats = decoder.decodeStructPointer(ResourceTypeStats);
    return val;
  };

  ResourceUsageData.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ResourceUsageData.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint8, val.reports_v8_stats);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint64, val.v8_bytes_allocated);
    encoder.encodeStruct(codec.Uint64, val.v8_bytes_used);
    encoder.encodeStructPointer(ResourceTypeStats, val.web_cache_stats);
  };
  function ResourceUsageReporter_GetUsageData_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ResourceUsageReporter_GetUsageData_Params.prototype.initDefaults_ = function() {
  };
  ResourceUsageReporter_GetUsageData_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ResourceUsageReporter_GetUsageData_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ResourceUsageReporter_GetUsageData_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ResourceUsageReporter_GetUsageData_Params.encodedSize = codec.kStructHeaderSize + 0;

  ResourceUsageReporter_GetUsageData_Params.decode = function(decoder) {
    var packed;
    var val = new ResourceUsageReporter_GetUsageData_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  ResourceUsageReporter_GetUsageData_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ResourceUsageReporter_GetUsageData_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function ResourceUsageReporter_GetUsageData_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ResourceUsageReporter_GetUsageData_ResponseParams.prototype.initDefaults_ = function() {
    this.data = null;
  };
  ResourceUsageReporter_GetUsageData_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ResourceUsageReporter_GetUsageData_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ResourceUsageReporter_GetUsageData_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ResourceUsageReporter_GetUsageData_ResponseParams.data
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, ResourceUsageData, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ResourceUsageReporter_GetUsageData_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  ResourceUsageReporter_GetUsageData_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ResourceUsageReporter_GetUsageData_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.data = decoder.decodeStructPointer(ResourceUsageData);
    return val;
  };

  ResourceUsageReporter_GetUsageData_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ResourceUsageReporter_GetUsageData_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(ResourceUsageData, val.data);
  };
  var kResourceUsageReporter_GetUsageData_Name = 0;

  function ResourceUsageReporterProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  ResourceUsageReporterProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  ResourceUsageReporterProxy.prototype.getUsageData = function() {
    var params = new ResourceUsageReporter_GetUsageData_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kResourceUsageReporter_GetUsageData_Name,
          codec.align(ResourceUsageReporter_GetUsageData_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ResourceUsageReporter_GetUsageData_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ResourceUsageReporter_GetUsageData_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function ResourceUsageReporterStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  ResourceUsageReporterStub.prototype = Object.create(bindings.StubBase.prototype);
  ResourceUsageReporterStub.prototype.getUsageData = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.getUsageData && bindings.StubBindings(this).delegate.getUsageData();
  }

  ResourceUsageReporterStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  ResourceUsageReporterStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kResourceUsageReporter_GetUsageData_Name:
      var params = reader.decodeStruct(ResourceUsageReporter_GetUsageData_Params);
      return this.getUsageData().then(function(response) {
        var responseParams =
            new ResourceUsageReporter_GetUsageData_ResponseParams();
        responseParams.data = response.data;
        var builder = new codec.MessageWithRequestIDBuilder(
            kResourceUsageReporter_GetUsageData_Name,
            codec.align(ResourceUsageReporter_GetUsageData_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ResourceUsageReporter_GetUsageData_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateResourceUsageReporterRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kResourceUsageReporter_GetUsageData_Name:
        if (message.expectsResponse())
          paramsClass = ResourceUsageReporter_GetUsageData_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateResourceUsageReporterResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kResourceUsageReporter_GetUsageData_Name:
        if (message.isResponse())
          paramsClass = ResourceUsageReporter_GetUsageData_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var ResourceUsageReporter = {
    name: 'mojom::ResourceUsageReporter',
    proxyClass: ResourceUsageReporterProxy,
    stubClass: ResourceUsageReporterStub,
    validateRequest: validateResourceUsageReporterRequest,
    validateResponse: validateResourceUsageReporterResponse,
  };
  ResourceUsageReporterStub.prototype.validator = validateResourceUsageReporterRequest;
  ResourceUsageReporterProxy.prototype.validator = validateResourceUsageReporterResponse;

  var exports = {};
  exports.ResourceTypeStat = ResourceTypeStat;
  exports.ResourceTypeStats = ResourceTypeStats;
  exports.ResourceUsageData = ResourceUsageData;
  exports.ResourceUsageReporter = ResourceUsageReporter;

  return exports;
});
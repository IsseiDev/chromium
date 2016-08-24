// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("device/usb/public/interfaces/device_manager.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "device/usb/public/interfaces/device.mojom",
], function(bindings, codec, connection, core, validator, device$) {

  function DeviceFilter(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DeviceFilter.prototype.initDefaults_ = function() {
    this.has_vendor_id = false;
    this.has_product_id = false;
    this.has_class_code = false;
    this.has_subclass_code = false;
    this.has_protocol_code = false;
    this.class_code = 0;
    this.vendor_id = 0;
    this.product_id = 0;
    this.subclass_code = 0;
    this.protocol_code = 0;
  };
  DeviceFilter.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  DeviceFilter.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, DeviceFilter.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;











    return validator.validationError.NONE;
  };

  DeviceFilter.encodedSize = codec.kStructHeaderSize + 8;

  DeviceFilter.decode = function(decoder) {
    var packed;
    var val = new DeviceFilter();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.has_vendor_id = (packed >> 0) & 1 ? true : false;
    val.has_product_id = (packed >> 1) & 1 ? true : false;
    val.has_class_code = (packed >> 2) & 1 ? true : false;
    val.has_subclass_code = (packed >> 3) & 1 ? true : false;
    val.has_protocol_code = (packed >> 4) & 1 ? true : false;
    val.class_code = decoder.decodeStruct(codec.Uint8);
    val.vendor_id = decoder.decodeStruct(codec.Uint16);
    val.product_id = decoder.decodeStruct(codec.Uint16);
    val.subclass_code = decoder.decodeStruct(codec.Uint8);
    val.protocol_code = decoder.decodeStruct(codec.Uint8);
    return val;
  };

  DeviceFilter.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DeviceFilter.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.has_vendor_id & 1) << 0
    packed |= (val.has_product_id & 1) << 1
    packed |= (val.has_class_code & 1) << 2
    packed |= (val.has_subclass_code & 1) << 3
    packed |= (val.has_protocol_code & 1) << 4
    encoder.writeUint8(packed);
    encoder.encodeStruct(codec.Uint8, val.class_code);
    encoder.encodeStruct(codec.Uint16, val.vendor_id);
    encoder.encodeStruct(codec.Uint16, val.product_id);
    encoder.encodeStruct(codec.Uint8, val.subclass_code);
    encoder.encodeStruct(codec.Uint8, val.protocol_code);
  };
  function EnumerationOptions(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  EnumerationOptions.prototype.initDefaults_ = function() {
    this.filters = null;
  };
  EnumerationOptions.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  EnumerationOptions.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, EnumerationOptions.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate EnumerationOptions.filters
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(DeviceFilter), true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  EnumerationOptions.encodedSize = codec.kStructHeaderSize + 8;

  EnumerationOptions.decode = function(decoder) {
    var packed;
    var val = new EnumerationOptions();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.filters = decoder.decodeArrayPointer(new codec.PointerTo(DeviceFilter));
    return val;
  };

  EnumerationOptions.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(EnumerationOptions.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(DeviceFilter), val.filters);
  };
  function DeviceManager_GetDevices_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DeviceManager_GetDevices_Params.prototype.initDefaults_ = function() {
    this.options = null;
  };
  DeviceManager_GetDevices_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  DeviceManager_GetDevices_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, DeviceManager_GetDevices_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate DeviceManager_GetDevices_Params.options
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, EnumerationOptions, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DeviceManager_GetDevices_Params.encodedSize = codec.kStructHeaderSize + 8;

  DeviceManager_GetDevices_Params.decode = function(decoder) {
    var packed;
    var val = new DeviceManager_GetDevices_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.options = decoder.decodeStructPointer(EnumerationOptions);
    return val;
  };

  DeviceManager_GetDevices_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DeviceManager_GetDevices_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(EnumerationOptions, val.options);
  };
  function DeviceManager_GetDevices_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DeviceManager_GetDevices_ResponseParams.prototype.initDefaults_ = function() {
    this.results = null;
  };
  DeviceManager_GetDevices_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  DeviceManager_GetDevices_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, DeviceManager_GetDevices_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate DeviceManager_GetDevices_ResponseParams.results
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(device$.DeviceInfo), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DeviceManager_GetDevices_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  DeviceManager_GetDevices_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new DeviceManager_GetDevices_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.results = decoder.decodeArrayPointer(new codec.PointerTo(device$.DeviceInfo));
    return val;
  };

  DeviceManager_GetDevices_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DeviceManager_GetDevices_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(device$.DeviceInfo), val.results);
  };
  function DeviceManager_GetDevice_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DeviceManager_GetDevice_Params.prototype.initDefaults_ = function() {
    this.guid = null;
    this.device_request = null;
  };
  DeviceManager_GetDevice_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  DeviceManager_GetDevice_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, DeviceManager_GetDevice_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate DeviceManager_GetDevice_Params.guid
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate DeviceManager_GetDevice_Params.device_request
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DeviceManager_GetDevice_Params.encodedSize = codec.kStructHeaderSize + 16;

  DeviceManager_GetDevice_Params.decode = function(decoder) {
    var packed;
    var val = new DeviceManager_GetDevice_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.guid = decoder.decodeStruct(codec.String);
    val.device_request = decoder.decodeStruct(codec.Handle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  DeviceManager_GetDevice_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DeviceManager_GetDevice_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.guid);
    encoder.encodeStruct(codec.Handle, val.device_request);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function DeviceManager_SetClient_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DeviceManager_SetClient_Params.prototype.initDefaults_ = function() {
    this.client = null;
  };
  DeviceManager_SetClient_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  DeviceManager_SetClient_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, DeviceManager_SetClient_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate DeviceManager_SetClient_Params.client
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DeviceManager_SetClient_Params.encodedSize = codec.kStructHeaderSize + 8;

  DeviceManager_SetClient_Params.decode = function(decoder) {
    var packed;
    var val = new DeviceManager_SetClient_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.client = decoder.decodeStruct(codec.Interface);
    return val;
  };

  DeviceManager_SetClient_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DeviceManager_SetClient_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Interface, val.client);
  };
  function DeviceManagerClient_OnDeviceAdded_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DeviceManagerClient_OnDeviceAdded_Params.prototype.initDefaults_ = function() {
    this.device_info = null;
  };
  DeviceManagerClient_OnDeviceAdded_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  DeviceManagerClient_OnDeviceAdded_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, DeviceManagerClient_OnDeviceAdded_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate DeviceManagerClient_OnDeviceAdded_Params.device_info
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, device$.DeviceInfo, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DeviceManagerClient_OnDeviceAdded_Params.encodedSize = codec.kStructHeaderSize + 8;

  DeviceManagerClient_OnDeviceAdded_Params.decode = function(decoder) {
    var packed;
    var val = new DeviceManagerClient_OnDeviceAdded_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.device_info = decoder.decodeStructPointer(device$.DeviceInfo);
    return val;
  };

  DeviceManagerClient_OnDeviceAdded_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DeviceManagerClient_OnDeviceAdded_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(device$.DeviceInfo, val.device_info);
  };
  function DeviceManagerClient_OnDeviceRemoved_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DeviceManagerClient_OnDeviceRemoved_Params.prototype.initDefaults_ = function() {
    this.device_info = null;
  };
  DeviceManagerClient_OnDeviceRemoved_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  DeviceManagerClient_OnDeviceRemoved_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, DeviceManagerClient_OnDeviceRemoved_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate DeviceManagerClient_OnDeviceRemoved_Params.device_info
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, device$.DeviceInfo, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DeviceManagerClient_OnDeviceRemoved_Params.encodedSize = codec.kStructHeaderSize + 8;

  DeviceManagerClient_OnDeviceRemoved_Params.decode = function(decoder) {
    var packed;
    var val = new DeviceManagerClient_OnDeviceRemoved_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.device_info = decoder.decodeStructPointer(device$.DeviceInfo);
    return val;
  };

  DeviceManagerClient_OnDeviceRemoved_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DeviceManagerClient_OnDeviceRemoved_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(device$.DeviceInfo, val.device_info);
  };
  var kDeviceManager_GetDevices_Name = 0;
  var kDeviceManager_GetDevice_Name = 1;
  var kDeviceManager_SetClient_Name = 2;

  function DeviceManagerProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  DeviceManagerProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  DeviceManagerProxy.prototype.getDevices = function(options) {
    var params = new DeviceManager_GetDevices_Params();
    params.options = options;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kDeviceManager_GetDevices_Name,
          codec.align(DeviceManager_GetDevices_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(DeviceManager_GetDevices_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(DeviceManager_GetDevices_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  DeviceManagerProxy.prototype.getDevice = function(guid, device_request) {
    var params = new DeviceManager_GetDevice_Params();
    params.guid = guid;
    params.device_request = core.isHandle(device_request) ? device_request : connection.bindProxy(device_request, device$.Device);
    var builder = new codec.MessageBuilder(
        kDeviceManager_GetDevice_Name,
        codec.align(DeviceManager_GetDevice_Params.encodedSize));
    builder.encodeStruct(DeviceManager_GetDevice_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DeviceManagerProxy.prototype.setClient = function(client) {
    var params = new DeviceManager_SetClient_Params();
    params.client = core.isHandle(client) ? client : connection.bindImpl(client, DeviceManagerClient);
    var builder = new codec.MessageBuilder(
        kDeviceManager_SetClient_Name,
        codec.align(DeviceManager_SetClient_Params.encodedSize));
    builder.encodeStruct(DeviceManager_SetClient_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function DeviceManagerStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  DeviceManagerStub.prototype = Object.create(bindings.StubBase.prototype);
  DeviceManagerStub.prototype.getDevices = function(options) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.getDevices && bindings.StubBindings(this).delegate.getDevices(options);
  }
  DeviceManagerStub.prototype.getDevice = function(guid, device_request) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.getDevice && bindings.StubBindings(this).delegate.getDevice(guid, connection.bindHandleToStub(device_request, device$.Device));
  }
  DeviceManagerStub.prototype.setClient = function(client) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.setClient && bindings.StubBindings(this).delegate.setClient(connection.bindHandleToProxy(client, DeviceManagerClient));
  }

  DeviceManagerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kDeviceManager_GetDevice_Name:
      var params = reader.decodeStruct(DeviceManager_GetDevice_Params);
      this.getDevice(params.guid, params.device_request);
      return true;
    case kDeviceManager_SetClient_Name:
      var params = reader.decodeStruct(DeviceManager_SetClient_Params);
      this.setClient(params.client);
      return true;
    default:
      return false;
    }
  };

  DeviceManagerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kDeviceManager_GetDevices_Name:
      var params = reader.decodeStruct(DeviceManager_GetDevices_Params);
      return this.getDevices(params.options).then(function(response) {
        var responseParams =
            new DeviceManager_GetDevices_ResponseParams();
        responseParams.results = response.results;
        var builder = new codec.MessageWithRequestIDBuilder(
            kDeviceManager_GetDevices_Name,
            codec.align(DeviceManager_GetDevices_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(DeviceManager_GetDevices_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateDeviceManagerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kDeviceManager_GetDevices_Name:
        if (message.expectsResponse())
          paramsClass = DeviceManager_GetDevices_Params;
      break;
      case kDeviceManager_GetDevice_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DeviceManager_GetDevice_Params;
      break;
      case kDeviceManager_SetClient_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DeviceManager_SetClient_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateDeviceManagerResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kDeviceManager_GetDevices_Name:
        if (message.isResponse())
          paramsClass = DeviceManager_GetDevices_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var DeviceManager = {
    name: 'device::usb::DeviceManager',
    proxyClass: DeviceManagerProxy,
    stubClass: DeviceManagerStub,
    validateRequest: validateDeviceManagerRequest,
    validateResponse: validateDeviceManagerResponse,
  };
  DeviceManagerStub.prototype.validator = validateDeviceManagerRequest;
  DeviceManagerProxy.prototype.validator = validateDeviceManagerResponse;
  var kDeviceManagerClient_OnDeviceAdded_Name = 0;
  var kDeviceManagerClient_OnDeviceRemoved_Name = 1;

  function DeviceManagerClientProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  DeviceManagerClientProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  DeviceManagerClientProxy.prototype.onDeviceAdded = function(device_info) {
    var params = new DeviceManagerClient_OnDeviceAdded_Params();
    params.device_info = device_info;
    var builder = new codec.MessageBuilder(
        kDeviceManagerClient_OnDeviceAdded_Name,
        codec.align(DeviceManagerClient_OnDeviceAdded_Params.encodedSize));
    builder.encodeStruct(DeviceManagerClient_OnDeviceAdded_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DeviceManagerClientProxy.prototype.onDeviceRemoved = function(device_info) {
    var params = new DeviceManagerClient_OnDeviceRemoved_Params();
    params.device_info = device_info;
    var builder = new codec.MessageBuilder(
        kDeviceManagerClient_OnDeviceRemoved_Name,
        codec.align(DeviceManagerClient_OnDeviceRemoved_Params.encodedSize));
    builder.encodeStruct(DeviceManagerClient_OnDeviceRemoved_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function DeviceManagerClientStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  DeviceManagerClientStub.prototype = Object.create(bindings.StubBase.prototype);
  DeviceManagerClientStub.prototype.onDeviceAdded = function(device_info) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onDeviceAdded && bindings.StubBindings(this).delegate.onDeviceAdded(device_info);
  }
  DeviceManagerClientStub.prototype.onDeviceRemoved = function(device_info) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onDeviceRemoved && bindings.StubBindings(this).delegate.onDeviceRemoved(device_info);
  }

  DeviceManagerClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kDeviceManagerClient_OnDeviceAdded_Name:
      var params = reader.decodeStruct(DeviceManagerClient_OnDeviceAdded_Params);
      this.onDeviceAdded(params.device_info);
      return true;
    case kDeviceManagerClient_OnDeviceRemoved_Name:
      var params = reader.decodeStruct(DeviceManagerClient_OnDeviceRemoved_Params);
      this.onDeviceRemoved(params.device_info);
      return true;
    default:
      return false;
    }
  };

  DeviceManagerClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateDeviceManagerClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kDeviceManagerClient_OnDeviceAdded_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DeviceManagerClient_OnDeviceAdded_Params;
      break;
      case kDeviceManagerClient_OnDeviceRemoved_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DeviceManagerClient_OnDeviceRemoved_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateDeviceManagerClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var DeviceManagerClient = {
    name: 'device::usb::DeviceManagerClient',
    proxyClass: DeviceManagerClientProxy,
    stubClass: DeviceManagerClientStub,
    validateRequest: validateDeviceManagerClientRequest,
    validateResponse: null,
  };
  DeviceManagerClientStub.prototype.validator = validateDeviceManagerClientRequest;
  DeviceManagerClientProxy.prototype.validator = null;

  var exports = {};
  exports.DeviceFilter = DeviceFilter;
  exports.EnumerationOptions = EnumerationOptions;
  exports.DeviceManager = DeviceManager;
  exports.DeviceManagerClient = DeviceManagerClient;

  return exports;
});
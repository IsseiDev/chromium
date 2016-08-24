// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("third_party/WebKit/public/platform/modules/bluetooth/web_bluetooth.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "device/bluetooth/public/interfaces/bluetooth_uuid.mojom",
], function(bindings, codec, connection, core, validator, bluetooth_uuid$) {
  var WebBluetoothError = {};
  WebBluetoothError.SUCCESS = 0;
  WebBluetoothError.GATT_INVALID_ATTRIBUTE_LENGTH = WebBluetoothError.SUCCESS + 1;
  WebBluetoothError.SERVICE_NO_LONGER_EXISTS = WebBluetoothError.GATT_INVALID_ATTRIBUTE_LENGTH + 1;
  WebBluetoothError.CHARACTERISTIC_NO_LONGER_EXISTS = WebBluetoothError.SERVICE_NO_LONGER_EXISTS + 1;
  WebBluetoothError.CONNECT_ALREADY_IN_PROGRESS = WebBluetoothError.CHARACTERISTIC_NO_LONGER_EXISTS + 1;
  WebBluetoothError.CONNECT_ATTRIBUTE_LENGTH_INVALID = WebBluetoothError.CONNECT_ALREADY_IN_PROGRESS + 1;
  WebBluetoothError.CONNECT_AUTH_CANCELED = WebBluetoothError.CONNECT_ATTRIBUTE_LENGTH_INVALID + 1;
  WebBluetoothError.CONNECT_AUTH_FAILED = WebBluetoothError.CONNECT_AUTH_CANCELED + 1;
  WebBluetoothError.CONNECT_AUTH_REJECTED = WebBluetoothError.CONNECT_AUTH_FAILED + 1;
  WebBluetoothError.CONNECT_AUTH_TIMEOUT = WebBluetoothError.CONNECT_AUTH_REJECTED + 1;
  WebBluetoothError.CONNECT_CONNECTION_CONGESTED = WebBluetoothError.CONNECT_AUTH_TIMEOUT + 1;
  WebBluetoothError.CONNECT_INSUFFICIENT_ENCRYPTION = WebBluetoothError.CONNECT_CONNECTION_CONGESTED + 1;
  WebBluetoothError.CONNECT_OFFSET_INVALID = WebBluetoothError.CONNECT_INSUFFICIENT_ENCRYPTION + 1;
  WebBluetoothError.CONNECT_READ_NOT_PERMITTED = WebBluetoothError.CONNECT_OFFSET_INVALID + 1;
  WebBluetoothError.CONNECT_REQUEST_NOT_SUPPORTED = WebBluetoothError.CONNECT_READ_NOT_PERMITTED + 1;
  WebBluetoothError.CONNECT_UNKNOWN_ERROR = WebBluetoothError.CONNECT_REQUEST_NOT_SUPPORTED + 1;
  WebBluetoothError.CONNECT_UNKNOWN_FAILURE = WebBluetoothError.CONNECT_UNKNOWN_ERROR + 1;
  WebBluetoothError.CONNECT_UNSUPPORTED_DEVICE = WebBluetoothError.CONNECT_UNKNOWN_FAILURE + 1;
  WebBluetoothError.CONNECT_WRITE_NOT_PERMITTED = WebBluetoothError.CONNECT_UNSUPPORTED_DEVICE + 1;
  WebBluetoothError.DEVICE_NO_LONGER_IN_RANGE = WebBluetoothError.CONNECT_WRITE_NOT_PERMITTED + 1;
  WebBluetoothError.GATT_NOT_PAIRED = WebBluetoothError.DEVICE_NO_LONGER_IN_RANGE + 1;
  WebBluetoothError.GATT_OPERATION_IN_PROGRESS = WebBluetoothError.GATT_NOT_PAIRED + 1;
  WebBluetoothError.UNTRANSLATED_CONNECT_ERROR_CODE = WebBluetoothError.GATT_OPERATION_IN_PROGRESS + 1;
  WebBluetoothError.NO_BLUETOOTH_ADAPTER = WebBluetoothError.UNTRANSLATED_CONNECT_ERROR_CODE + 1;
  WebBluetoothError.CHOSEN_DEVICE_VANISHED = WebBluetoothError.NO_BLUETOOTH_ADAPTER + 1;
  WebBluetoothError.CHOOSER_CANCELLED = WebBluetoothError.CHOSEN_DEVICE_VANISHED + 1;
  WebBluetoothError.CHOOSER_NOT_SHOWN_API_GLOBALLY_DISABLED = WebBluetoothError.CHOOSER_CANCELLED + 1;
  WebBluetoothError.CHOOSER_NOT_SHOWN_API_LOCALLY_DISABLED = WebBluetoothError.CHOOSER_NOT_SHOWN_API_GLOBALLY_DISABLED + 1;
  WebBluetoothError.CHOOSER_NOT_SHOWN_USER_DENIED_PERMISSION_TO_SCAN = WebBluetoothError.CHOOSER_NOT_SHOWN_API_LOCALLY_DISABLED + 1;
  WebBluetoothError.SERVICE_NOT_FOUND = WebBluetoothError.CHOOSER_NOT_SHOWN_USER_DENIED_PERMISSION_TO_SCAN + 1;
  WebBluetoothError.NO_SERVICES_FOUND = WebBluetoothError.SERVICE_NOT_FOUND + 1;
  WebBluetoothError.CHARACTERISTIC_NOT_FOUND = WebBluetoothError.NO_SERVICES_FOUND + 1;
  WebBluetoothError.NO_CHARACTERISTICS_FOUND = WebBluetoothError.CHARACTERISTIC_NOT_FOUND + 1;
  WebBluetoothError.WEB_BLUETOOTH_NOT_SUPPORTED = WebBluetoothError.NO_CHARACTERISTICS_FOUND + 1;
  WebBluetoothError.GATT_UNKNOWN_ERROR = WebBluetoothError.WEB_BLUETOOTH_NOT_SUPPORTED + 1;
  WebBluetoothError.GATT_UNKNOWN_FAILURE = WebBluetoothError.GATT_UNKNOWN_ERROR + 1;
  WebBluetoothError.GATT_NOT_PERMITTED = WebBluetoothError.GATT_UNKNOWN_FAILURE + 1;
  WebBluetoothError.GATT_NOT_SUPPORTED = WebBluetoothError.GATT_NOT_PERMITTED + 1;
  WebBluetoothError.GATT_UNTRANSLATED_ERROR_CODE = WebBluetoothError.GATT_NOT_SUPPORTED + 1;
  WebBluetoothError.GATT_NOT_AUTHORIZED = WebBluetoothError.GATT_UNTRANSLATED_ERROR_CODE + 1;
  WebBluetoothError.BLACKLISTED_CHARACTERISTIC_UUID = WebBluetoothError.GATT_NOT_AUTHORIZED + 1;
  WebBluetoothError.BLACKLISTED_READ = WebBluetoothError.BLACKLISTED_CHARACTERISTIC_UUID + 1;
  WebBluetoothError.BLACKLISTED_WRITE = WebBluetoothError.BLACKLISTED_READ + 1;
  WebBluetoothError.NOT_ALLOWED_TO_ACCESS_SERVICE = WebBluetoothError.BLACKLISTED_WRITE + 1;
  WebBluetoothError.REQUEST_DEVICE_WITH_BLACKLISTED_UUID = WebBluetoothError.NOT_ALLOWED_TO_ACCESS_SERVICE + 1;
  WebBluetoothError.REQUEST_DEVICE_FROM_CROSS_ORIGIN_IFRAME = WebBluetoothError.REQUEST_DEVICE_WITH_BLACKLISTED_UUID + 1;
  WebBluetoothError.REQUEST_DEVICE_WITHOUT_FRAME = WebBluetoothError.REQUEST_DEVICE_FROM_CROSS_ORIGIN_IFRAME + 1;
  WebBluetoothError.ENUM_MAX_VALUE = WebBluetoothError.REQUEST_DEVICE_WITHOUT_FRAME;
  var WebBluetoothGATTQueryQuantity = {};
  WebBluetoothGATTQueryQuantity.SINGLE = 0;
  WebBluetoothGATTQueryQuantity.MULTIPLE = WebBluetoothGATTQueryQuantity.SINGLE + 1;

  function WebBluetoothScanFilter(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebBluetoothScanFilter.prototype.initDefaults_ = function() {
    this.services = null;
    this.name = null;
    this.name_prefix = null;
  };
  WebBluetoothScanFilter.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WebBluetoothScanFilter.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WebBluetoothScanFilter.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WebBluetoothScanFilter.services
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(bluetooth_uuid$.BluetoothUUID), true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WebBluetoothScanFilter.name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, true)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WebBluetoothScanFilter.name_prefix
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebBluetoothScanFilter.encodedSize = codec.kStructHeaderSize + 24;

  WebBluetoothScanFilter.decode = function(decoder) {
    var packed;
    var val = new WebBluetoothScanFilter();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.services = decoder.decodeArrayPointer(new codec.PointerTo(bluetooth_uuid$.BluetoothUUID));
    val.name = decoder.decodeStruct(codec.NullableString);
    val.name_prefix = decoder.decodeStruct(codec.NullableString);
    return val;
  };

  WebBluetoothScanFilter.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebBluetoothScanFilter.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(bluetooth_uuid$.BluetoothUUID), val.services);
    encoder.encodeStruct(codec.NullableString, val.name);
    encoder.encodeStruct(codec.NullableString, val.name_prefix);
  };
  function WebBluetoothRequestDeviceOptions(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebBluetoothRequestDeviceOptions.prototype.initDefaults_ = function() {
    this.filters = null;
    this.optional_services = null;
  };
  WebBluetoothRequestDeviceOptions.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WebBluetoothRequestDeviceOptions.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WebBluetoothRequestDeviceOptions.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WebBluetoothRequestDeviceOptions.filters
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(WebBluetoothScanFilter), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WebBluetoothRequestDeviceOptions.optional_services
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(bluetooth_uuid$.BluetoothUUID), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebBluetoothRequestDeviceOptions.encodedSize = codec.kStructHeaderSize + 16;

  WebBluetoothRequestDeviceOptions.decode = function(decoder) {
    var packed;
    var val = new WebBluetoothRequestDeviceOptions();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.filters = decoder.decodeArrayPointer(new codec.PointerTo(WebBluetoothScanFilter));
    val.optional_services = decoder.decodeArrayPointer(new codec.PointerTo(bluetooth_uuid$.BluetoothUUID));
    return val;
  };

  WebBluetoothRequestDeviceOptions.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebBluetoothRequestDeviceOptions.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(WebBluetoothScanFilter), val.filters);
    encoder.encodeArrayPointer(new codec.PointerTo(bluetooth_uuid$.BluetoothUUID), val.optional_services);
  };
  function WebBluetoothDeviceId(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebBluetoothDeviceId.prototype.initDefaults_ = function() {
    this.device_id = null;
  };
  WebBluetoothDeviceId.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WebBluetoothDeviceId.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WebBluetoothDeviceId.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WebBluetoothDeviceId.device_id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebBluetoothDeviceId.encodedSize = codec.kStructHeaderSize + 8;

  WebBluetoothDeviceId.decode = function(decoder) {
    var packed;
    var val = new WebBluetoothDeviceId();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.device_id = decoder.decodeStruct(codec.String);
    return val;
  };

  WebBluetoothDeviceId.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebBluetoothDeviceId.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.device_id);
  };
  function WebBluetoothDevice(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebBluetoothDevice.prototype.initDefaults_ = function() {
    this.id = null;
    this.name = null;
    this.uuids = null;
  };
  WebBluetoothDevice.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WebBluetoothDevice.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WebBluetoothDevice.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WebBluetoothDevice.id
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, WebBluetoothDeviceId, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WebBluetoothDevice.name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, true)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WebBluetoothDevice.uuids
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, codec.String, false, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebBluetoothDevice.encodedSize = codec.kStructHeaderSize + 24;

  WebBluetoothDevice.decode = function(decoder) {
    var packed;
    var val = new WebBluetoothDevice();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStructPointer(WebBluetoothDeviceId);
    val.name = decoder.decodeStruct(codec.NullableString);
    val.uuids = decoder.decodeArrayPointer(codec.String);
    return val;
  };

  WebBluetoothDevice.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebBluetoothDevice.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(WebBluetoothDeviceId, val.id);
    encoder.encodeStruct(codec.NullableString, val.name);
    encoder.encodeArrayPointer(codec.String, val.uuids);
  };
  function WebBluetoothRemoteGATTService(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebBluetoothRemoteGATTService.prototype.initDefaults_ = function() {
    this.instance_id = null;
    this.uuid = null;
  };
  WebBluetoothRemoteGATTService.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WebBluetoothRemoteGATTService.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WebBluetoothRemoteGATTService.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WebBluetoothRemoteGATTService.instance_id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WebBluetoothRemoteGATTService.uuid
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebBluetoothRemoteGATTService.encodedSize = codec.kStructHeaderSize + 16;

  WebBluetoothRemoteGATTService.decode = function(decoder) {
    var packed;
    var val = new WebBluetoothRemoteGATTService();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.instance_id = decoder.decodeStruct(codec.String);
    val.uuid = decoder.decodeStruct(codec.String);
    return val;
  };

  WebBluetoothRemoteGATTService.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebBluetoothRemoteGATTService.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.instance_id);
    encoder.encodeStruct(codec.String, val.uuid);
  };
  function WebBluetoothRemoteGATTCharacteristic(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebBluetoothRemoteGATTCharacteristic.prototype.initDefaults_ = function() {
    this.instance_id = null;
    this.uuid = null;
    this.properties = 0;
  };
  WebBluetoothRemoteGATTCharacteristic.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WebBluetoothRemoteGATTCharacteristic.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WebBluetoothRemoteGATTCharacteristic.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WebBluetoothRemoteGATTCharacteristic.instance_id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WebBluetoothRemoteGATTCharacteristic.uuid
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  WebBluetoothRemoteGATTCharacteristic.encodedSize = codec.kStructHeaderSize + 24;

  WebBluetoothRemoteGATTCharacteristic.decode = function(decoder) {
    var packed;
    var val = new WebBluetoothRemoteGATTCharacteristic();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.instance_id = decoder.decodeStruct(codec.String);
    val.uuid = decoder.decodeStruct(codec.String);
    val.properties = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WebBluetoothRemoteGATTCharacteristic.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebBluetoothRemoteGATTCharacteristic.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.instance_id);
    encoder.encodeStruct(codec.String, val.uuid);
    encoder.encodeStruct(codec.Uint32, val.properties);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WebBluetoothService_SetClient_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebBluetoothService_SetClient_Params.prototype.initDefaults_ = function() {
    this.client = null;
  };
  WebBluetoothService_SetClient_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WebBluetoothService_SetClient_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WebBluetoothService_SetClient_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  WebBluetoothService_SetClient_Params.encodedSize = codec.kStructHeaderSize + 8;

  WebBluetoothService_SetClient_Params.decode = function(decoder) {
    var packed;
    var val = new WebBluetoothService_SetClient_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.client = decoder.decodeStruct(codec.AssociatedInterfaceNotSupported);
    return val;
  };

  WebBluetoothService_SetClient_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebBluetoothService_SetClient_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.AssociatedInterfaceNotSupported, val.client);
  };
  function WebBluetoothService_RequestDevice_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebBluetoothService_RequestDevice_Params.prototype.initDefaults_ = function() {
    this.options = null;
  };
  WebBluetoothService_RequestDevice_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WebBluetoothService_RequestDevice_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WebBluetoothService_RequestDevice_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WebBluetoothService_RequestDevice_Params.options
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, WebBluetoothRequestDeviceOptions, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebBluetoothService_RequestDevice_Params.encodedSize = codec.kStructHeaderSize + 8;

  WebBluetoothService_RequestDevice_Params.decode = function(decoder) {
    var packed;
    var val = new WebBluetoothService_RequestDevice_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.options = decoder.decodeStructPointer(WebBluetoothRequestDeviceOptions);
    return val;
  };

  WebBluetoothService_RequestDevice_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebBluetoothService_RequestDevice_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(WebBluetoothRequestDeviceOptions, val.options);
  };
  function WebBluetoothService_RequestDevice_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebBluetoothService_RequestDevice_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
    this.device = null;
  };
  WebBluetoothService_RequestDevice_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WebBluetoothService_RequestDevice_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WebBluetoothService_RequestDevice_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate WebBluetoothService_RequestDevice_ResponseParams.device
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, WebBluetoothDevice, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebBluetoothService_RequestDevice_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  WebBluetoothService_RequestDevice_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new WebBluetoothService_RequestDevice_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.device = decoder.decodeStructPointer(WebBluetoothDevice);
    return val;
  };

  WebBluetoothService_RequestDevice_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebBluetoothService_RequestDevice_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(WebBluetoothDevice, val.device);
  };
  function WebBluetoothService_RemoteServerConnect_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebBluetoothService_RemoteServerConnect_Params.prototype.initDefaults_ = function() {
    this.device_id = null;
  };
  WebBluetoothService_RemoteServerConnect_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WebBluetoothService_RemoteServerConnect_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WebBluetoothService_RemoteServerConnect_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WebBluetoothService_RemoteServerConnect_Params.device_id
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, WebBluetoothDeviceId, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebBluetoothService_RemoteServerConnect_Params.encodedSize = codec.kStructHeaderSize + 8;

  WebBluetoothService_RemoteServerConnect_Params.decode = function(decoder) {
    var packed;
    var val = new WebBluetoothService_RemoteServerConnect_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.device_id = decoder.decodeStructPointer(WebBluetoothDeviceId);
    return val;
  };

  WebBluetoothService_RemoteServerConnect_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebBluetoothService_RemoteServerConnect_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(WebBluetoothDeviceId, val.device_id);
  };
  function WebBluetoothService_RemoteServerConnect_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebBluetoothService_RemoteServerConnect_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
  };
  WebBluetoothService_RemoteServerConnect_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WebBluetoothService_RemoteServerConnect_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WebBluetoothService_RemoteServerConnect_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  WebBluetoothService_RemoteServerConnect_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  WebBluetoothService_RemoteServerConnect_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new WebBluetoothService_RemoteServerConnect_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WebBluetoothService_RemoteServerConnect_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebBluetoothService_RemoteServerConnect_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WebBluetoothService_RemoteServerDisconnect_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebBluetoothService_RemoteServerDisconnect_Params.prototype.initDefaults_ = function() {
    this.device_id = null;
  };
  WebBluetoothService_RemoteServerDisconnect_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WebBluetoothService_RemoteServerDisconnect_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WebBluetoothService_RemoteServerDisconnect_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WebBluetoothService_RemoteServerDisconnect_Params.device_id
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, WebBluetoothDeviceId, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebBluetoothService_RemoteServerDisconnect_Params.encodedSize = codec.kStructHeaderSize + 8;

  WebBluetoothService_RemoteServerDisconnect_Params.decode = function(decoder) {
    var packed;
    var val = new WebBluetoothService_RemoteServerDisconnect_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.device_id = decoder.decodeStructPointer(WebBluetoothDeviceId);
    return val;
  };

  WebBluetoothService_RemoteServerDisconnect_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebBluetoothService_RemoteServerDisconnect_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(WebBluetoothDeviceId, val.device_id);
  };
  function WebBluetoothService_RemoteServerGetPrimaryServices_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebBluetoothService_RemoteServerGetPrimaryServices_Params.prototype.initDefaults_ = function() {
    this.device_id = null;
    this.quantity = 0;
    this.services_uuid = null;
  };
  WebBluetoothService_RemoteServerGetPrimaryServices_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WebBluetoothService_RemoteServerGetPrimaryServices_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WebBluetoothService_RemoteServerGetPrimaryServices_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WebBluetoothService_RemoteServerGetPrimaryServices_Params.device_id
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, WebBluetoothDeviceId, false);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate WebBluetoothService_RemoteServerGetPrimaryServices_Params.services_uuid
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, bluetooth_uuid$.BluetoothUUID, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebBluetoothService_RemoteServerGetPrimaryServices_Params.encodedSize = codec.kStructHeaderSize + 24;

  WebBluetoothService_RemoteServerGetPrimaryServices_Params.decode = function(decoder) {
    var packed;
    var val = new WebBluetoothService_RemoteServerGetPrimaryServices_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.device_id = decoder.decodeStructPointer(WebBluetoothDeviceId);
    val.quantity = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.services_uuid = decoder.decodeStructPointer(bluetooth_uuid$.BluetoothUUID);
    return val;
  };

  WebBluetoothService_RemoteServerGetPrimaryServices_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebBluetoothService_RemoteServerGetPrimaryServices_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(WebBluetoothDeviceId, val.device_id);
    encoder.encodeStruct(codec.Int32, val.quantity);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(bluetooth_uuid$.BluetoothUUID, val.services_uuid);
  };
  function WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
    this.services = null;
  };
  WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams.services
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(WebBluetoothRemoteGATTService), true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.services = decoder.decodeArrayPointer(new codec.PointerTo(WebBluetoothRemoteGATTService));
    return val;
  };

  WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(new codec.PointerTo(WebBluetoothRemoteGATTService), val.services);
  };
  function WebBluetoothService_RemoteServiceGetCharacteristics_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebBluetoothService_RemoteServiceGetCharacteristics_Params.prototype.initDefaults_ = function() {
    this.service_instance_id = null;
    this.quantity = 0;
    this.characteristics_uuid = null;
  };
  WebBluetoothService_RemoteServiceGetCharacteristics_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WebBluetoothService_RemoteServiceGetCharacteristics_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WebBluetoothService_RemoteServiceGetCharacteristics_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WebBluetoothService_RemoteServiceGetCharacteristics_Params.service_instance_id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate WebBluetoothService_RemoteServiceGetCharacteristics_Params.characteristics_uuid
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, bluetooth_uuid$.BluetoothUUID, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebBluetoothService_RemoteServiceGetCharacteristics_Params.encodedSize = codec.kStructHeaderSize + 24;

  WebBluetoothService_RemoteServiceGetCharacteristics_Params.decode = function(decoder) {
    var packed;
    var val = new WebBluetoothService_RemoteServiceGetCharacteristics_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.service_instance_id = decoder.decodeStruct(codec.String);
    val.quantity = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.characteristics_uuid = decoder.decodeStructPointer(bluetooth_uuid$.BluetoothUUID);
    return val;
  };

  WebBluetoothService_RemoteServiceGetCharacteristics_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebBluetoothService_RemoteServiceGetCharacteristics_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.service_instance_id);
    encoder.encodeStruct(codec.Int32, val.quantity);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(bluetooth_uuid$.BluetoothUUID, val.characteristics_uuid);
  };
  function WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
    this.characteristics = null;
  };
  WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams.characteristics
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(WebBluetoothRemoteGATTCharacteristic), true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.characteristics = decoder.decodeArrayPointer(new codec.PointerTo(WebBluetoothRemoteGATTCharacteristic));
    return val;
  };

  WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(new codec.PointerTo(WebBluetoothRemoteGATTCharacteristic), val.characteristics);
  };
  function WebBluetoothService_RemoteCharacteristicReadValue_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebBluetoothService_RemoteCharacteristicReadValue_Params.prototype.initDefaults_ = function() {
    this.characteristic_instance_id = null;
  };
  WebBluetoothService_RemoteCharacteristicReadValue_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WebBluetoothService_RemoteCharacteristicReadValue_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WebBluetoothService_RemoteCharacteristicReadValue_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WebBluetoothService_RemoteCharacteristicReadValue_Params.characteristic_instance_id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebBluetoothService_RemoteCharacteristicReadValue_Params.encodedSize = codec.kStructHeaderSize + 8;

  WebBluetoothService_RemoteCharacteristicReadValue_Params.decode = function(decoder) {
    var packed;
    var val = new WebBluetoothService_RemoteCharacteristicReadValue_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.characteristic_instance_id = decoder.decodeStruct(codec.String);
    return val;
  };

  WebBluetoothService_RemoteCharacteristicReadValue_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebBluetoothService_RemoteCharacteristicReadValue_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.characteristic_instance_id);
  };
  function WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
    this.value = null;
  };
  WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams.value
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.value = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(codec.Uint8, val.value);
  };
  function WebBluetoothService_RemoteCharacteristicWriteValue_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebBluetoothService_RemoteCharacteristicWriteValue_Params.prototype.initDefaults_ = function() {
    this.characteristic_instance_id = null;
    this.value = null;
  };
  WebBluetoothService_RemoteCharacteristicWriteValue_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WebBluetoothService_RemoteCharacteristicWriteValue_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WebBluetoothService_RemoteCharacteristicWriteValue_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WebBluetoothService_RemoteCharacteristicWriteValue_Params.characteristic_instance_id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WebBluetoothService_RemoteCharacteristicWriteValue_Params.value
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebBluetoothService_RemoteCharacteristicWriteValue_Params.encodedSize = codec.kStructHeaderSize + 16;

  WebBluetoothService_RemoteCharacteristicWriteValue_Params.decode = function(decoder) {
    var packed;
    var val = new WebBluetoothService_RemoteCharacteristicWriteValue_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.characteristic_instance_id = decoder.decodeStruct(codec.String);
    val.value = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  WebBluetoothService_RemoteCharacteristicWriteValue_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebBluetoothService_RemoteCharacteristicWriteValue_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.characteristic_instance_id);
    encoder.encodeArrayPointer(codec.Uint8, val.value);
  };
  function WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
  };
  WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WebBluetoothService_RemoteCharacteristicStartNotifications_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebBluetoothService_RemoteCharacteristicStartNotifications_Params.prototype.initDefaults_ = function() {
    this.characteristic_instance_id = null;
  };
  WebBluetoothService_RemoteCharacteristicStartNotifications_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WebBluetoothService_RemoteCharacteristicStartNotifications_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WebBluetoothService_RemoteCharacteristicStartNotifications_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WebBluetoothService_RemoteCharacteristicStartNotifications_Params.characteristic_instance_id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebBluetoothService_RemoteCharacteristicStartNotifications_Params.encodedSize = codec.kStructHeaderSize + 8;

  WebBluetoothService_RemoteCharacteristicStartNotifications_Params.decode = function(decoder) {
    var packed;
    var val = new WebBluetoothService_RemoteCharacteristicStartNotifications_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.characteristic_instance_id = decoder.decodeStruct(codec.String);
    return val;
  };

  WebBluetoothService_RemoteCharacteristicStartNotifications_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebBluetoothService_RemoteCharacteristicStartNotifications_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.characteristic_instance_id);
  };
  function WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
  };
  WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WebBluetoothService_RemoteCharacteristicStopNotifications_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebBluetoothService_RemoteCharacteristicStopNotifications_Params.prototype.initDefaults_ = function() {
    this.characteristic_instance_id = null;
  };
  WebBluetoothService_RemoteCharacteristicStopNotifications_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WebBluetoothService_RemoteCharacteristicStopNotifications_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WebBluetoothService_RemoteCharacteristicStopNotifications_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WebBluetoothService_RemoteCharacteristicStopNotifications_Params.characteristic_instance_id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebBluetoothService_RemoteCharacteristicStopNotifications_Params.encodedSize = codec.kStructHeaderSize + 8;

  WebBluetoothService_RemoteCharacteristicStopNotifications_Params.decode = function(decoder) {
    var packed;
    var val = new WebBluetoothService_RemoteCharacteristicStopNotifications_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.characteristic_instance_id = decoder.decodeStruct(codec.String);
    return val;
  };

  WebBluetoothService_RemoteCharacteristicStopNotifications_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebBluetoothService_RemoteCharacteristicStopNotifications_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.characteristic_instance_id);
  };
  function WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams.prototype.initDefaults_ = function() {
  };
  WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  function WebBluetoothServiceClient_RemoteCharacteristicValueChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebBluetoothServiceClient_RemoteCharacteristicValueChanged_Params.prototype.initDefaults_ = function() {
    this.characteristic_instance_id = null;
    this.value = null;
  };
  WebBluetoothServiceClient_RemoteCharacteristicValueChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WebBluetoothServiceClient_RemoteCharacteristicValueChanged_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WebBluetoothServiceClient_RemoteCharacteristicValueChanged_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WebBluetoothServiceClient_RemoteCharacteristicValueChanged_Params.characteristic_instance_id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WebBluetoothServiceClient_RemoteCharacteristicValueChanged_Params.value
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebBluetoothServiceClient_RemoteCharacteristicValueChanged_Params.encodedSize = codec.kStructHeaderSize + 16;

  WebBluetoothServiceClient_RemoteCharacteristicValueChanged_Params.decode = function(decoder) {
    var packed;
    var val = new WebBluetoothServiceClient_RemoteCharacteristicValueChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.characteristic_instance_id = decoder.decodeStruct(codec.String);
    val.value = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  WebBluetoothServiceClient_RemoteCharacteristicValueChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebBluetoothServiceClient_RemoteCharacteristicValueChanged_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.characteristic_instance_id);
    encoder.encodeArrayPointer(codec.Uint8, val.value);
  };
  function WebBluetoothServiceClient_GattServerDisconnected_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebBluetoothServiceClient_GattServerDisconnected_Params.prototype.initDefaults_ = function() {
    this.device_id = null;
  };
  WebBluetoothServiceClient_GattServerDisconnected_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WebBluetoothServiceClient_GattServerDisconnected_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WebBluetoothServiceClient_GattServerDisconnected_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WebBluetoothServiceClient_GattServerDisconnected_Params.device_id
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, WebBluetoothDeviceId, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebBluetoothServiceClient_GattServerDisconnected_Params.encodedSize = codec.kStructHeaderSize + 8;

  WebBluetoothServiceClient_GattServerDisconnected_Params.decode = function(decoder) {
    var packed;
    var val = new WebBluetoothServiceClient_GattServerDisconnected_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.device_id = decoder.decodeStructPointer(WebBluetoothDeviceId);
    return val;
  };

  WebBluetoothServiceClient_GattServerDisconnected_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebBluetoothServiceClient_GattServerDisconnected_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(WebBluetoothDeviceId, val.device_id);
  };
  var kWebBluetoothService_SetClient_Name = 0;
  var kWebBluetoothService_RequestDevice_Name = 1;
  var kWebBluetoothService_RemoteServerConnect_Name = 2;
  var kWebBluetoothService_RemoteServerDisconnect_Name = 3;
  var kWebBluetoothService_RemoteServerGetPrimaryServices_Name = 4;
  var kWebBluetoothService_RemoteServiceGetCharacteristics_Name = 5;
  var kWebBluetoothService_RemoteCharacteristicReadValue_Name = 6;
  var kWebBluetoothService_RemoteCharacteristicWriteValue_Name = 7;
  var kWebBluetoothService_RemoteCharacteristicStartNotifications_Name = 8;
  var kWebBluetoothService_RemoteCharacteristicStopNotifications_Name = 9;

  function WebBluetoothServiceProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  WebBluetoothServiceProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  WebBluetoothServiceProxy.prototype.setClient = function(client) {
    var params = new WebBluetoothService_SetClient_Params();
    params.client = client;
    var builder = new codec.MessageBuilder(
        kWebBluetoothService_SetClient_Name,
        codec.align(WebBluetoothService_SetClient_Params.encodedSize));
    builder.encodeStruct(WebBluetoothService_SetClient_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WebBluetoothServiceProxy.prototype.requestDevice = function(options) {
    var params = new WebBluetoothService_RequestDevice_Params();
    params.options = options;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kWebBluetoothService_RequestDevice_Name,
          codec.align(WebBluetoothService_RequestDevice_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(WebBluetoothService_RequestDevice_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(WebBluetoothService_RequestDevice_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  WebBluetoothServiceProxy.prototype.remoteServerConnect = function(device_id) {
    var params = new WebBluetoothService_RemoteServerConnect_Params();
    params.device_id = device_id;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kWebBluetoothService_RemoteServerConnect_Name,
          codec.align(WebBluetoothService_RemoteServerConnect_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(WebBluetoothService_RemoteServerConnect_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(WebBluetoothService_RemoteServerConnect_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  WebBluetoothServiceProxy.prototype.remoteServerDisconnect = function(device_id) {
    var params = new WebBluetoothService_RemoteServerDisconnect_Params();
    params.device_id = device_id;
    var builder = new codec.MessageBuilder(
        kWebBluetoothService_RemoteServerDisconnect_Name,
        codec.align(WebBluetoothService_RemoteServerDisconnect_Params.encodedSize));
    builder.encodeStruct(WebBluetoothService_RemoteServerDisconnect_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WebBluetoothServiceProxy.prototype.remoteServerGetPrimaryServices = function(device_id, quantity, services_uuid) {
    var params = new WebBluetoothService_RemoteServerGetPrimaryServices_Params();
    params.device_id = device_id;
    params.quantity = quantity;
    params.services_uuid = services_uuid;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kWebBluetoothService_RemoteServerGetPrimaryServices_Name,
          codec.align(WebBluetoothService_RemoteServerGetPrimaryServices_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(WebBluetoothService_RemoteServerGetPrimaryServices_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  WebBluetoothServiceProxy.prototype.remoteServiceGetCharacteristics = function(service_instance_id, quantity, characteristics_uuid) {
    var params = new WebBluetoothService_RemoteServiceGetCharacteristics_Params();
    params.service_instance_id = service_instance_id;
    params.quantity = quantity;
    params.characteristics_uuid = characteristics_uuid;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kWebBluetoothService_RemoteServiceGetCharacteristics_Name,
          codec.align(WebBluetoothService_RemoteServiceGetCharacteristics_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(WebBluetoothService_RemoteServiceGetCharacteristics_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  WebBluetoothServiceProxy.prototype.remoteCharacteristicReadValue = function(characteristic_instance_id) {
    var params = new WebBluetoothService_RemoteCharacteristicReadValue_Params();
    params.characteristic_instance_id = characteristic_instance_id;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kWebBluetoothService_RemoteCharacteristicReadValue_Name,
          codec.align(WebBluetoothService_RemoteCharacteristicReadValue_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(WebBluetoothService_RemoteCharacteristicReadValue_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  WebBluetoothServiceProxy.prototype.remoteCharacteristicWriteValue = function(characteristic_instance_id, value) {
    var params = new WebBluetoothService_RemoteCharacteristicWriteValue_Params();
    params.characteristic_instance_id = characteristic_instance_id;
    params.value = value;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kWebBluetoothService_RemoteCharacteristicWriteValue_Name,
          codec.align(WebBluetoothService_RemoteCharacteristicWriteValue_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(WebBluetoothService_RemoteCharacteristicWriteValue_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  WebBluetoothServiceProxy.prototype.remoteCharacteristicStartNotifications = function(characteristic_instance_id) {
    var params = new WebBluetoothService_RemoteCharacteristicStartNotifications_Params();
    params.characteristic_instance_id = characteristic_instance_id;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kWebBluetoothService_RemoteCharacteristicStartNotifications_Name,
          codec.align(WebBluetoothService_RemoteCharacteristicStartNotifications_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(WebBluetoothService_RemoteCharacteristicStartNotifications_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  WebBluetoothServiceProxy.prototype.remoteCharacteristicStopNotifications = function(characteristic_instance_id) {
    var params = new WebBluetoothService_RemoteCharacteristicStopNotifications_Params();
    params.characteristic_instance_id = characteristic_instance_id;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kWebBluetoothService_RemoteCharacteristicStopNotifications_Name,
          codec.align(WebBluetoothService_RemoteCharacteristicStopNotifications_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(WebBluetoothService_RemoteCharacteristicStopNotifications_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function WebBluetoothServiceStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  WebBluetoothServiceStub.prototype = Object.create(bindings.StubBase.prototype);
  WebBluetoothServiceStub.prototype.setClient = function(client) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.setClient && bindings.StubBindings(this).delegate.setClient(client);
  }
  WebBluetoothServiceStub.prototype.requestDevice = function(options) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.requestDevice && bindings.StubBindings(this).delegate.requestDevice(options);
  }
  WebBluetoothServiceStub.prototype.remoteServerConnect = function(device_id) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.remoteServerConnect && bindings.StubBindings(this).delegate.remoteServerConnect(device_id);
  }
  WebBluetoothServiceStub.prototype.remoteServerDisconnect = function(device_id) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.remoteServerDisconnect && bindings.StubBindings(this).delegate.remoteServerDisconnect(device_id);
  }
  WebBluetoothServiceStub.prototype.remoteServerGetPrimaryServices = function(device_id, quantity, services_uuid) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.remoteServerGetPrimaryServices && bindings.StubBindings(this).delegate.remoteServerGetPrimaryServices(device_id, quantity, services_uuid);
  }
  WebBluetoothServiceStub.prototype.remoteServiceGetCharacteristics = function(service_instance_id, quantity, characteristics_uuid) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.remoteServiceGetCharacteristics && bindings.StubBindings(this).delegate.remoteServiceGetCharacteristics(service_instance_id, quantity, characteristics_uuid);
  }
  WebBluetoothServiceStub.prototype.remoteCharacteristicReadValue = function(characteristic_instance_id) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.remoteCharacteristicReadValue && bindings.StubBindings(this).delegate.remoteCharacteristicReadValue(characteristic_instance_id);
  }
  WebBluetoothServiceStub.prototype.remoteCharacteristicWriteValue = function(characteristic_instance_id, value) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.remoteCharacteristicWriteValue && bindings.StubBindings(this).delegate.remoteCharacteristicWriteValue(characteristic_instance_id, value);
  }
  WebBluetoothServiceStub.prototype.remoteCharacteristicStartNotifications = function(characteristic_instance_id) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.remoteCharacteristicStartNotifications && bindings.StubBindings(this).delegate.remoteCharacteristicStartNotifications(characteristic_instance_id);
  }
  WebBluetoothServiceStub.prototype.remoteCharacteristicStopNotifications = function(characteristic_instance_id) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.remoteCharacteristicStopNotifications && bindings.StubBindings(this).delegate.remoteCharacteristicStopNotifications(characteristic_instance_id);
  }

  WebBluetoothServiceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kWebBluetoothService_SetClient_Name:
      var params = reader.decodeStruct(WebBluetoothService_SetClient_Params);
      this.setClient(params.client);
      return true;
    case kWebBluetoothService_RemoteServerDisconnect_Name:
      var params = reader.decodeStruct(WebBluetoothService_RemoteServerDisconnect_Params);
      this.remoteServerDisconnect(params.device_id);
      return true;
    default:
      return false;
    }
  };

  WebBluetoothServiceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kWebBluetoothService_RequestDevice_Name:
      var params = reader.decodeStruct(WebBluetoothService_RequestDevice_Params);
      return this.requestDevice(params.options).then(function(response) {
        var responseParams =
            new WebBluetoothService_RequestDevice_ResponseParams();
        responseParams.error = response.error;
        responseParams.device = response.device;
        var builder = new codec.MessageWithRequestIDBuilder(
            kWebBluetoothService_RequestDevice_Name,
            codec.align(WebBluetoothService_RequestDevice_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(WebBluetoothService_RequestDevice_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kWebBluetoothService_RemoteServerConnect_Name:
      var params = reader.decodeStruct(WebBluetoothService_RemoteServerConnect_Params);
      return this.remoteServerConnect(params.device_id).then(function(response) {
        var responseParams =
            new WebBluetoothService_RemoteServerConnect_ResponseParams();
        responseParams.error = response.error;
        var builder = new codec.MessageWithRequestIDBuilder(
            kWebBluetoothService_RemoteServerConnect_Name,
            codec.align(WebBluetoothService_RemoteServerConnect_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(WebBluetoothService_RemoteServerConnect_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kWebBluetoothService_RemoteServerGetPrimaryServices_Name:
      var params = reader.decodeStruct(WebBluetoothService_RemoteServerGetPrimaryServices_Params);
      return this.remoteServerGetPrimaryServices(params.device_id, params.quantity, params.services_uuid).then(function(response) {
        var responseParams =
            new WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams();
        responseParams.error = response.error;
        responseParams.services = response.services;
        var builder = new codec.MessageWithRequestIDBuilder(
            kWebBluetoothService_RemoteServerGetPrimaryServices_Name,
            codec.align(WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kWebBluetoothService_RemoteServiceGetCharacteristics_Name:
      var params = reader.decodeStruct(WebBluetoothService_RemoteServiceGetCharacteristics_Params);
      return this.remoteServiceGetCharacteristics(params.service_instance_id, params.quantity, params.characteristics_uuid).then(function(response) {
        var responseParams =
            new WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams();
        responseParams.error = response.error;
        responseParams.characteristics = response.characteristics;
        var builder = new codec.MessageWithRequestIDBuilder(
            kWebBluetoothService_RemoteServiceGetCharacteristics_Name,
            codec.align(WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kWebBluetoothService_RemoteCharacteristicReadValue_Name:
      var params = reader.decodeStruct(WebBluetoothService_RemoteCharacteristicReadValue_Params);
      return this.remoteCharacteristicReadValue(params.characteristic_instance_id).then(function(response) {
        var responseParams =
            new WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams();
        responseParams.error = response.error;
        responseParams.value = response.value;
        var builder = new codec.MessageWithRequestIDBuilder(
            kWebBluetoothService_RemoteCharacteristicReadValue_Name,
            codec.align(WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kWebBluetoothService_RemoteCharacteristicWriteValue_Name:
      var params = reader.decodeStruct(WebBluetoothService_RemoteCharacteristicWriteValue_Params);
      return this.remoteCharacteristicWriteValue(params.characteristic_instance_id, params.value).then(function(response) {
        var responseParams =
            new WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams();
        responseParams.error = response.error;
        var builder = new codec.MessageWithRequestIDBuilder(
            kWebBluetoothService_RemoteCharacteristicWriteValue_Name,
            codec.align(WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kWebBluetoothService_RemoteCharacteristicStartNotifications_Name:
      var params = reader.decodeStruct(WebBluetoothService_RemoteCharacteristicStartNotifications_Params);
      return this.remoteCharacteristicStartNotifications(params.characteristic_instance_id).then(function(response) {
        var responseParams =
            new WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams();
        responseParams.error = response.error;
        var builder = new codec.MessageWithRequestIDBuilder(
            kWebBluetoothService_RemoteCharacteristicStartNotifications_Name,
            codec.align(WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kWebBluetoothService_RemoteCharacteristicStopNotifications_Name:
      var params = reader.decodeStruct(WebBluetoothService_RemoteCharacteristicStopNotifications_Params);
      return this.remoteCharacteristicStopNotifications(params.characteristic_instance_id).then(function(response) {
        var responseParams =
            new WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams();
        var builder = new codec.MessageWithRequestIDBuilder(
            kWebBluetoothService_RemoteCharacteristicStopNotifications_Name,
            codec.align(WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateWebBluetoothServiceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kWebBluetoothService_SetClient_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WebBluetoothService_SetClient_Params;
      break;
      case kWebBluetoothService_RequestDevice_Name:
        if (message.expectsResponse())
          paramsClass = WebBluetoothService_RequestDevice_Params;
      break;
      case kWebBluetoothService_RemoteServerConnect_Name:
        if (message.expectsResponse())
          paramsClass = WebBluetoothService_RemoteServerConnect_Params;
      break;
      case kWebBluetoothService_RemoteServerDisconnect_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WebBluetoothService_RemoteServerDisconnect_Params;
      break;
      case kWebBluetoothService_RemoteServerGetPrimaryServices_Name:
        if (message.expectsResponse())
          paramsClass = WebBluetoothService_RemoteServerGetPrimaryServices_Params;
      break;
      case kWebBluetoothService_RemoteServiceGetCharacteristics_Name:
        if (message.expectsResponse())
          paramsClass = WebBluetoothService_RemoteServiceGetCharacteristics_Params;
      break;
      case kWebBluetoothService_RemoteCharacteristicReadValue_Name:
        if (message.expectsResponse())
          paramsClass = WebBluetoothService_RemoteCharacteristicReadValue_Params;
      break;
      case kWebBluetoothService_RemoteCharacteristicWriteValue_Name:
        if (message.expectsResponse())
          paramsClass = WebBluetoothService_RemoteCharacteristicWriteValue_Params;
      break;
      case kWebBluetoothService_RemoteCharacteristicStartNotifications_Name:
        if (message.expectsResponse())
          paramsClass = WebBluetoothService_RemoteCharacteristicStartNotifications_Params;
      break;
      case kWebBluetoothService_RemoteCharacteristicStopNotifications_Name:
        if (message.expectsResponse())
          paramsClass = WebBluetoothService_RemoteCharacteristicStopNotifications_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateWebBluetoothServiceResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kWebBluetoothService_RequestDevice_Name:
        if (message.isResponse())
          paramsClass = WebBluetoothService_RequestDevice_ResponseParams;
        break;
      case kWebBluetoothService_RemoteServerConnect_Name:
        if (message.isResponse())
          paramsClass = WebBluetoothService_RemoteServerConnect_ResponseParams;
        break;
      case kWebBluetoothService_RemoteServerGetPrimaryServices_Name:
        if (message.isResponse())
          paramsClass = WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams;
        break;
      case kWebBluetoothService_RemoteServiceGetCharacteristics_Name:
        if (message.isResponse())
          paramsClass = WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams;
        break;
      case kWebBluetoothService_RemoteCharacteristicReadValue_Name:
        if (message.isResponse())
          paramsClass = WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams;
        break;
      case kWebBluetoothService_RemoteCharacteristicWriteValue_Name:
        if (message.isResponse())
          paramsClass = WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams;
        break;
      case kWebBluetoothService_RemoteCharacteristicStartNotifications_Name:
        if (message.isResponse())
          paramsClass = WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams;
        break;
      case kWebBluetoothService_RemoteCharacteristicStopNotifications_Name:
        if (message.isResponse())
          paramsClass = WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var WebBluetoothService = {
    name: 'blink::mojom::WebBluetoothService',
    proxyClass: WebBluetoothServiceProxy,
    stubClass: WebBluetoothServiceStub,
    validateRequest: validateWebBluetoothServiceRequest,
    validateResponse: validateWebBluetoothServiceResponse,
  };
  WebBluetoothServiceStub.prototype.validator = validateWebBluetoothServiceRequest;
  WebBluetoothServiceProxy.prototype.validator = validateWebBluetoothServiceResponse;
  var kWebBluetoothServiceClient_RemoteCharacteristicValueChanged_Name = 0;
  var kWebBluetoothServiceClient_GattServerDisconnected_Name = 1;

  function WebBluetoothServiceClientProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  WebBluetoothServiceClientProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  WebBluetoothServiceClientProxy.prototype.remoteCharacteristicValueChanged = function(characteristic_instance_id, value) {
    var params = new WebBluetoothServiceClient_RemoteCharacteristicValueChanged_Params();
    params.characteristic_instance_id = characteristic_instance_id;
    params.value = value;
    var builder = new codec.MessageBuilder(
        kWebBluetoothServiceClient_RemoteCharacteristicValueChanged_Name,
        codec.align(WebBluetoothServiceClient_RemoteCharacteristicValueChanged_Params.encodedSize));
    builder.encodeStruct(WebBluetoothServiceClient_RemoteCharacteristicValueChanged_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WebBluetoothServiceClientProxy.prototype.gattServerDisconnected = function(device_id) {
    var params = new WebBluetoothServiceClient_GattServerDisconnected_Params();
    params.device_id = device_id;
    var builder = new codec.MessageBuilder(
        kWebBluetoothServiceClient_GattServerDisconnected_Name,
        codec.align(WebBluetoothServiceClient_GattServerDisconnected_Params.encodedSize));
    builder.encodeStruct(WebBluetoothServiceClient_GattServerDisconnected_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function WebBluetoothServiceClientStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  WebBluetoothServiceClientStub.prototype = Object.create(bindings.StubBase.prototype);
  WebBluetoothServiceClientStub.prototype.remoteCharacteristicValueChanged = function(characteristic_instance_id, value) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.remoteCharacteristicValueChanged && bindings.StubBindings(this).delegate.remoteCharacteristicValueChanged(characteristic_instance_id, value);
  }
  WebBluetoothServiceClientStub.prototype.gattServerDisconnected = function(device_id) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.gattServerDisconnected && bindings.StubBindings(this).delegate.gattServerDisconnected(device_id);
  }

  WebBluetoothServiceClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kWebBluetoothServiceClient_RemoteCharacteristicValueChanged_Name:
      var params = reader.decodeStruct(WebBluetoothServiceClient_RemoteCharacteristicValueChanged_Params);
      this.remoteCharacteristicValueChanged(params.characteristic_instance_id, params.value);
      return true;
    case kWebBluetoothServiceClient_GattServerDisconnected_Name:
      var params = reader.decodeStruct(WebBluetoothServiceClient_GattServerDisconnected_Params);
      this.gattServerDisconnected(params.device_id);
      return true;
    default:
      return false;
    }
  };

  WebBluetoothServiceClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateWebBluetoothServiceClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kWebBluetoothServiceClient_RemoteCharacteristicValueChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WebBluetoothServiceClient_RemoteCharacteristicValueChanged_Params;
      break;
      case kWebBluetoothServiceClient_GattServerDisconnected_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WebBluetoothServiceClient_GattServerDisconnected_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateWebBluetoothServiceClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var WebBluetoothServiceClient = {
    name: 'blink::mojom::WebBluetoothServiceClient',
    proxyClass: WebBluetoothServiceClientProxy,
    stubClass: WebBluetoothServiceClientStub,
    validateRequest: validateWebBluetoothServiceClientRequest,
    validateResponse: null,
  };
  WebBluetoothServiceClientStub.prototype.validator = validateWebBluetoothServiceClientRequest;
  WebBluetoothServiceClientProxy.prototype.validator = null;

  var exports = {};
  exports.WebBluetoothError = WebBluetoothError;
  exports.WebBluetoothGATTQueryQuantity = WebBluetoothGATTQueryQuantity;
  exports.WebBluetoothScanFilter = WebBluetoothScanFilter;
  exports.WebBluetoothRequestDeviceOptions = WebBluetoothRequestDeviceOptions;
  exports.WebBluetoothDeviceId = WebBluetoothDeviceId;
  exports.WebBluetoothDevice = WebBluetoothDevice;
  exports.WebBluetoothRemoteGATTService = WebBluetoothRemoteGATTService;
  exports.WebBluetoothRemoteGATTCharacteristic = WebBluetoothRemoteGATTCharacteristic;
  exports.WebBluetoothService = WebBluetoothService;
  exports.WebBluetoothServiceClient = WebBluetoothServiceClient;

  return exports;
});
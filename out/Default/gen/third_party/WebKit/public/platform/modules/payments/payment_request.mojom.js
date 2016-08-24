// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("third_party/WebKit/public/platform/modules/payments/payment_request.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {
  var PaymentErrorReason = {};
  PaymentErrorReason.UNKNOWN = 0;
  PaymentErrorReason.USER_CANCEL = PaymentErrorReason.UNKNOWN + 1;
  PaymentErrorReason.NOT_SUPPORTED = PaymentErrorReason.USER_CANCEL + 1;
  var PaymentComplete = {};
  PaymentComplete.SUCCESS = 0;
  PaymentComplete.FAIL = PaymentComplete.SUCCESS + 1;
  PaymentComplete.UNKNOWN = PaymentComplete.FAIL + 1;

  function PaymentAddress(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentAddress.prototype.initDefaults_ = function() {
    this.country = null;
    this.address_line = null;
    this.region = null;
    this.city = null;
    this.dependent_locality = null;
    this.postal_code = null;
    this.sorting_code = null;
    this.language_code = null;
    this.script_code = null;
    this.organization = null;
    this.recipient = null;
    this.careOf = null;
    this.phone = null;
  };
  PaymentAddress.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PaymentAddress.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PaymentAddress.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PaymentAddress.country
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PaymentAddress.address_line
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, codec.String, false, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PaymentAddress.region
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PaymentAddress.city
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 24, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PaymentAddress.dependent_locality
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 32, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PaymentAddress.postal_code
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 40, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PaymentAddress.sorting_code
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 48, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PaymentAddress.language_code
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 56, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PaymentAddress.script_code
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 64, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PaymentAddress.organization
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 72, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PaymentAddress.recipient
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 80, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PaymentAddress.careOf
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 88, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PaymentAddress.phone
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 96, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PaymentAddress.encodedSize = codec.kStructHeaderSize + 104;

  PaymentAddress.decode = function(decoder) {
    var packed;
    var val = new PaymentAddress();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.country = decoder.decodeStruct(codec.String);
    val.address_line = decoder.decodeArrayPointer(codec.String);
    val.region = decoder.decodeStruct(codec.String);
    val.city = decoder.decodeStruct(codec.String);
    val.dependent_locality = decoder.decodeStruct(codec.String);
    val.postal_code = decoder.decodeStruct(codec.String);
    val.sorting_code = decoder.decodeStruct(codec.String);
    val.language_code = decoder.decodeStruct(codec.String);
    val.script_code = decoder.decodeStruct(codec.String);
    val.organization = decoder.decodeStruct(codec.String);
    val.recipient = decoder.decodeStruct(codec.String);
    val.careOf = decoder.decodeStruct(codec.String);
    val.phone = decoder.decodeStruct(codec.String);
    return val;
  };

  PaymentAddress.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentAddress.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.country);
    encoder.encodeArrayPointer(codec.String, val.address_line);
    encoder.encodeStruct(codec.String, val.region);
    encoder.encodeStruct(codec.String, val.city);
    encoder.encodeStruct(codec.String, val.dependent_locality);
    encoder.encodeStruct(codec.String, val.postal_code);
    encoder.encodeStruct(codec.String, val.sorting_code);
    encoder.encodeStruct(codec.String, val.language_code);
    encoder.encodeStruct(codec.String, val.script_code);
    encoder.encodeStruct(codec.String, val.organization);
    encoder.encodeStruct(codec.String, val.recipient);
    encoder.encodeStruct(codec.String, val.careOf);
    encoder.encodeStruct(codec.String, val.phone);
  };
  function PaymentCurrencyAmount(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentCurrencyAmount.prototype.initDefaults_ = function() {
    this.currency = null;
    this.value = null;
  };
  PaymentCurrencyAmount.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PaymentCurrencyAmount.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PaymentCurrencyAmount.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PaymentCurrencyAmount.currency
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PaymentCurrencyAmount.value
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PaymentCurrencyAmount.encodedSize = codec.kStructHeaderSize + 16;

  PaymentCurrencyAmount.decode = function(decoder) {
    var packed;
    var val = new PaymentCurrencyAmount();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.currency = decoder.decodeStruct(codec.String);
    val.value = decoder.decodeStruct(codec.String);
    return val;
  };

  PaymentCurrencyAmount.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentCurrencyAmount.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.currency);
    encoder.encodeStruct(codec.String, val.value);
  };
  function PaymentResponse(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentResponse.prototype.initDefaults_ = function() {
    this.method_name = null;
    this.stringified_details = null;
    this.shipping_address = null;
    this.shipping_option = null;
    this.payer_email = null;
    this.payer_phone = null;
  };
  PaymentResponse.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PaymentResponse.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PaymentResponse.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PaymentResponse.method_name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PaymentResponse.stringified_details
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PaymentResponse.shipping_address
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, PaymentAddress, true);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PaymentResponse.shipping_option
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 24, true)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PaymentResponse.payer_email
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 32, true)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PaymentResponse.payer_phone
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 40, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PaymentResponse.encodedSize = codec.kStructHeaderSize + 48;

  PaymentResponse.decode = function(decoder) {
    var packed;
    var val = new PaymentResponse();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.method_name = decoder.decodeStruct(codec.String);
    val.stringified_details = decoder.decodeStruct(codec.String);
    val.shipping_address = decoder.decodeStructPointer(PaymentAddress);
    val.shipping_option = decoder.decodeStruct(codec.NullableString);
    val.payer_email = decoder.decodeStruct(codec.NullableString);
    val.payer_phone = decoder.decodeStruct(codec.NullableString);
    return val;
  };

  PaymentResponse.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentResponse.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.method_name);
    encoder.encodeStruct(codec.String, val.stringified_details);
    encoder.encodeStructPointer(PaymentAddress, val.shipping_address);
    encoder.encodeStruct(codec.NullableString, val.shipping_option);
    encoder.encodeStruct(codec.NullableString, val.payer_email);
    encoder.encodeStruct(codec.NullableString, val.payer_phone);
  };
  function PaymentItem(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentItem.prototype.initDefaults_ = function() {
    this.label = null;
    this.amount = null;
  };
  PaymentItem.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PaymentItem.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PaymentItem.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PaymentItem.label
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PaymentItem.amount
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, PaymentCurrencyAmount, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PaymentItem.encodedSize = codec.kStructHeaderSize + 16;

  PaymentItem.decode = function(decoder) {
    var packed;
    var val = new PaymentItem();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.label = decoder.decodeStruct(codec.String);
    val.amount = decoder.decodeStructPointer(PaymentCurrencyAmount);
    return val;
  };

  PaymentItem.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentItem.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.label);
    encoder.encodeStructPointer(PaymentCurrencyAmount, val.amount);
  };
  function PaymentShippingOption(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentShippingOption.prototype.initDefaults_ = function() {
    this.id = null;
    this.label = null;
    this.amount = null;
    this.selected = false;
  };
  PaymentShippingOption.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PaymentShippingOption.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PaymentShippingOption.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PaymentShippingOption.id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PaymentShippingOption.label
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PaymentShippingOption.amount
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, PaymentCurrencyAmount, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  PaymentShippingOption.encodedSize = codec.kStructHeaderSize + 32;

  PaymentShippingOption.decode = function(decoder) {
    var packed;
    var val = new PaymentShippingOption();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.String);
    val.label = decoder.decodeStruct(codec.String);
    val.amount = decoder.decodeStructPointer(PaymentCurrencyAmount);
    val.selected = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PaymentShippingOption.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentShippingOption.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.id);
    encoder.encodeStruct(codec.String, val.label);
    encoder.encodeStructPointer(PaymentCurrencyAmount, val.amount);
    encoder.encodeStruct(codec.Uint8, val.selected);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PaymentDetailsModifier(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentDetailsModifier.prototype.initDefaults_ = function() {
    this.supported_methods = null;
    this.total = null;
    this.additional_display_items = null;
  };
  PaymentDetailsModifier.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PaymentDetailsModifier.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PaymentDetailsModifier.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PaymentDetailsModifier.supported_methods
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, codec.String, false, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PaymentDetailsModifier.total
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, PaymentItem, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PaymentDetailsModifier.additional_display_items
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, new codec.PointerTo(PaymentItem), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PaymentDetailsModifier.encodedSize = codec.kStructHeaderSize + 24;

  PaymentDetailsModifier.decode = function(decoder) {
    var packed;
    var val = new PaymentDetailsModifier();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.supported_methods = decoder.decodeArrayPointer(codec.String);
    val.total = decoder.decodeStructPointer(PaymentItem);
    val.additional_display_items = decoder.decodeArrayPointer(new codec.PointerTo(PaymentItem));
    return val;
  };

  PaymentDetailsModifier.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentDetailsModifier.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.String, val.supported_methods);
    encoder.encodeStructPointer(PaymentItem, val.total);
    encoder.encodeArrayPointer(new codec.PointerTo(PaymentItem), val.additional_display_items);
  };
  function PaymentDetails(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentDetails.prototype.initDefaults_ = function() {
    this.total = null;
    this.display_items = null;
    this.shipping_options = null;
    this.modifiers = null;
  };
  PaymentDetails.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PaymentDetails.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PaymentDetails.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PaymentDetails.total
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, PaymentItem, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PaymentDetails.display_items
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(PaymentItem), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PaymentDetails.shipping_options
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, new codec.PointerTo(PaymentShippingOption), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PaymentDetails.modifiers
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 24, 8, new codec.PointerTo(PaymentDetailsModifier), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PaymentDetails.encodedSize = codec.kStructHeaderSize + 32;

  PaymentDetails.decode = function(decoder) {
    var packed;
    var val = new PaymentDetails();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.total = decoder.decodeStructPointer(PaymentItem);
    val.display_items = decoder.decodeArrayPointer(new codec.PointerTo(PaymentItem));
    val.shipping_options = decoder.decodeArrayPointer(new codec.PointerTo(PaymentShippingOption));
    val.modifiers = decoder.decodeArrayPointer(new codec.PointerTo(PaymentDetailsModifier));
    return val;
  };

  PaymentDetails.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentDetails.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(PaymentItem, val.total);
    encoder.encodeArrayPointer(new codec.PointerTo(PaymentItem), val.display_items);
    encoder.encodeArrayPointer(new codec.PointerTo(PaymentShippingOption), val.shipping_options);
    encoder.encodeArrayPointer(new codec.PointerTo(PaymentDetailsModifier), val.modifiers);
  };
  function PaymentOptions(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentOptions.prototype.initDefaults_ = function() {
    this.request_payer_email = false;
    this.request_payer_phone = false;
    this.request_shipping = false;
  };
  PaymentOptions.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PaymentOptions.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PaymentOptions.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;




    return validator.validationError.NONE;
  };

  PaymentOptions.encodedSize = codec.kStructHeaderSize + 8;

  PaymentOptions.decode = function(decoder) {
    var packed;
    var val = new PaymentOptions();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.request_payer_email = (packed >> 0) & 1 ? true : false;
    val.request_payer_phone = (packed >> 1) & 1 ? true : false;
    val.request_shipping = (packed >> 2) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PaymentOptions.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentOptions.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.request_payer_email & 1) << 0
    packed |= (val.request_payer_phone & 1) << 1
    packed |= (val.request_shipping & 1) << 2
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PaymentMethodData(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentMethodData.prototype.initDefaults_ = function() {
    this.supported_methods = null;
    this.stringified_data = null;
  };
  PaymentMethodData.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PaymentMethodData.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PaymentMethodData.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PaymentMethodData.supported_methods
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, codec.String, false, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PaymentMethodData.stringified_data
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PaymentMethodData.encodedSize = codec.kStructHeaderSize + 16;

  PaymentMethodData.decode = function(decoder) {
    var packed;
    var val = new PaymentMethodData();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.supported_methods = decoder.decodeArrayPointer(codec.String);
    val.stringified_data = decoder.decodeStruct(codec.String);
    return val;
  };

  PaymentMethodData.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentMethodData.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.String, val.supported_methods);
    encoder.encodeStruct(codec.String, val.stringified_data);
  };
  function PaymentRequestClient_OnShippingAddressChange_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentRequestClient_OnShippingAddressChange_Params.prototype.initDefaults_ = function() {
    this.address = null;
  };
  PaymentRequestClient_OnShippingAddressChange_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PaymentRequestClient_OnShippingAddressChange_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PaymentRequestClient_OnShippingAddressChange_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PaymentRequestClient_OnShippingAddressChange_Params.address
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, PaymentAddress, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PaymentRequestClient_OnShippingAddressChange_Params.encodedSize = codec.kStructHeaderSize + 8;

  PaymentRequestClient_OnShippingAddressChange_Params.decode = function(decoder) {
    var packed;
    var val = new PaymentRequestClient_OnShippingAddressChange_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.address = decoder.decodeStructPointer(PaymentAddress);
    return val;
  };

  PaymentRequestClient_OnShippingAddressChange_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentRequestClient_OnShippingAddressChange_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(PaymentAddress, val.address);
  };
  function PaymentRequestClient_OnShippingOptionChange_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentRequestClient_OnShippingOptionChange_Params.prototype.initDefaults_ = function() {
    this.shipping_option_id = null;
  };
  PaymentRequestClient_OnShippingOptionChange_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PaymentRequestClient_OnShippingOptionChange_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PaymentRequestClient_OnShippingOptionChange_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PaymentRequestClient_OnShippingOptionChange_Params.shipping_option_id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PaymentRequestClient_OnShippingOptionChange_Params.encodedSize = codec.kStructHeaderSize + 8;

  PaymentRequestClient_OnShippingOptionChange_Params.decode = function(decoder) {
    var packed;
    var val = new PaymentRequestClient_OnShippingOptionChange_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.shipping_option_id = decoder.decodeStruct(codec.String);
    return val;
  };

  PaymentRequestClient_OnShippingOptionChange_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentRequestClient_OnShippingOptionChange_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.shipping_option_id);
  };
  function PaymentRequestClient_OnPaymentResponse_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentRequestClient_OnPaymentResponse_Params.prototype.initDefaults_ = function() {
    this.response = null;
  };
  PaymentRequestClient_OnPaymentResponse_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PaymentRequestClient_OnPaymentResponse_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PaymentRequestClient_OnPaymentResponse_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PaymentRequestClient_OnPaymentResponse_Params.response
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, PaymentResponse, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PaymentRequestClient_OnPaymentResponse_Params.encodedSize = codec.kStructHeaderSize + 8;

  PaymentRequestClient_OnPaymentResponse_Params.decode = function(decoder) {
    var packed;
    var val = new PaymentRequestClient_OnPaymentResponse_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.response = decoder.decodeStructPointer(PaymentResponse);
    return val;
  };

  PaymentRequestClient_OnPaymentResponse_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentRequestClient_OnPaymentResponse_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(PaymentResponse, val.response);
  };
  function PaymentRequestClient_OnError_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentRequestClient_OnError_Params.prototype.initDefaults_ = function() {
    this.error = 0;
  };
  PaymentRequestClient_OnError_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PaymentRequestClient_OnError_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PaymentRequestClient_OnError_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  PaymentRequestClient_OnError_Params.encodedSize = codec.kStructHeaderSize + 8;

  PaymentRequestClient_OnError_Params.decode = function(decoder) {
    var packed;
    var val = new PaymentRequestClient_OnError_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PaymentRequestClient_OnError_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentRequestClient_OnError_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PaymentRequestClient_OnComplete_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentRequestClient_OnComplete_Params.prototype.initDefaults_ = function() {
  };
  PaymentRequestClient_OnComplete_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PaymentRequestClient_OnComplete_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PaymentRequestClient_OnComplete_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PaymentRequestClient_OnComplete_Params.encodedSize = codec.kStructHeaderSize + 0;

  PaymentRequestClient_OnComplete_Params.decode = function(decoder) {
    var packed;
    var val = new PaymentRequestClient_OnComplete_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  PaymentRequestClient_OnComplete_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentRequestClient_OnComplete_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function PaymentRequestClient_OnAbort_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentRequestClient_OnAbort_Params.prototype.initDefaults_ = function() {
    this.aborted_successfully = false;
  };
  PaymentRequestClient_OnAbort_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PaymentRequestClient_OnAbort_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PaymentRequestClient_OnAbort_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  PaymentRequestClient_OnAbort_Params.encodedSize = codec.kStructHeaderSize + 8;

  PaymentRequestClient_OnAbort_Params.decode = function(decoder) {
    var packed;
    var val = new PaymentRequestClient_OnAbort_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.aborted_successfully = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PaymentRequestClient_OnAbort_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentRequestClient_OnAbort_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint8, val.aborted_successfully);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PaymentRequest_SetClient_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentRequest_SetClient_Params.prototype.initDefaults_ = function() {
    this.client = null;
  };
  PaymentRequest_SetClient_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PaymentRequest_SetClient_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PaymentRequest_SetClient_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PaymentRequest_SetClient_Params.client
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PaymentRequest_SetClient_Params.encodedSize = codec.kStructHeaderSize + 8;

  PaymentRequest_SetClient_Params.decode = function(decoder) {
    var packed;
    var val = new PaymentRequest_SetClient_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.client = decoder.decodeStruct(codec.Interface);
    return val;
  };

  PaymentRequest_SetClient_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentRequest_SetClient_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Interface, val.client);
  };
  function PaymentRequest_Show_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentRequest_Show_Params.prototype.initDefaults_ = function() {
    this.methodData = null;
    this.details = null;
    this.options = null;
  };
  PaymentRequest_Show_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PaymentRequest_Show_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PaymentRequest_Show_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PaymentRequest_Show_Params.methodData
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(PaymentMethodData), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PaymentRequest_Show_Params.details
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, PaymentDetails, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PaymentRequest_Show_Params.options
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, PaymentOptions, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PaymentRequest_Show_Params.encodedSize = codec.kStructHeaderSize + 24;

  PaymentRequest_Show_Params.decode = function(decoder) {
    var packed;
    var val = new PaymentRequest_Show_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.methodData = decoder.decodeArrayPointer(new codec.PointerTo(PaymentMethodData));
    val.details = decoder.decodeStructPointer(PaymentDetails);
    val.options = decoder.decodeStructPointer(PaymentOptions);
    return val;
  };

  PaymentRequest_Show_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentRequest_Show_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(PaymentMethodData), val.methodData);
    encoder.encodeStructPointer(PaymentDetails, val.details);
    encoder.encodeStructPointer(PaymentOptions, val.options);
  };
  function PaymentRequest_UpdateWith_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentRequest_UpdateWith_Params.prototype.initDefaults_ = function() {
    this.details = null;
  };
  PaymentRequest_UpdateWith_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PaymentRequest_UpdateWith_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PaymentRequest_UpdateWith_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PaymentRequest_UpdateWith_Params.details
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, PaymentDetails, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PaymentRequest_UpdateWith_Params.encodedSize = codec.kStructHeaderSize + 8;

  PaymentRequest_UpdateWith_Params.decode = function(decoder) {
    var packed;
    var val = new PaymentRequest_UpdateWith_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.details = decoder.decodeStructPointer(PaymentDetails);
    return val;
  };

  PaymentRequest_UpdateWith_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentRequest_UpdateWith_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(PaymentDetails, val.details);
  };
  function PaymentRequest_Abort_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentRequest_Abort_Params.prototype.initDefaults_ = function() {
  };
  PaymentRequest_Abort_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PaymentRequest_Abort_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PaymentRequest_Abort_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PaymentRequest_Abort_Params.encodedSize = codec.kStructHeaderSize + 0;

  PaymentRequest_Abort_Params.decode = function(decoder) {
    var packed;
    var val = new PaymentRequest_Abort_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  PaymentRequest_Abort_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentRequest_Abort_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function PaymentRequest_Complete_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentRequest_Complete_Params.prototype.initDefaults_ = function() {
    this.result = 0;
  };
  PaymentRequest_Complete_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PaymentRequest_Complete_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PaymentRequest_Complete_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  PaymentRequest_Complete_Params.encodedSize = codec.kStructHeaderSize + 8;

  PaymentRequest_Complete_Params.decode = function(decoder) {
    var packed;
    var val = new PaymentRequest_Complete_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PaymentRequest_Complete_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentRequest_Complete_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.result);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kPaymentRequestClient_OnShippingAddressChange_Name = 0;
  var kPaymentRequestClient_OnShippingOptionChange_Name = 1;
  var kPaymentRequestClient_OnPaymentResponse_Name = 2;
  var kPaymentRequestClient_OnError_Name = 3;
  var kPaymentRequestClient_OnComplete_Name = 4;
  var kPaymentRequestClient_OnAbort_Name = 5;

  function PaymentRequestClientProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  PaymentRequestClientProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  PaymentRequestClientProxy.prototype.onShippingAddressChange = function(address) {
    var params = new PaymentRequestClient_OnShippingAddressChange_Params();
    params.address = address;
    var builder = new codec.MessageBuilder(
        kPaymentRequestClient_OnShippingAddressChange_Name,
        codec.align(PaymentRequestClient_OnShippingAddressChange_Params.encodedSize));
    builder.encodeStruct(PaymentRequestClient_OnShippingAddressChange_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PaymentRequestClientProxy.prototype.onShippingOptionChange = function(shipping_option_id) {
    var params = new PaymentRequestClient_OnShippingOptionChange_Params();
    params.shipping_option_id = shipping_option_id;
    var builder = new codec.MessageBuilder(
        kPaymentRequestClient_OnShippingOptionChange_Name,
        codec.align(PaymentRequestClient_OnShippingOptionChange_Params.encodedSize));
    builder.encodeStruct(PaymentRequestClient_OnShippingOptionChange_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PaymentRequestClientProxy.prototype.onPaymentResponse = function(response) {
    var params = new PaymentRequestClient_OnPaymentResponse_Params();
    params.response = response;
    var builder = new codec.MessageBuilder(
        kPaymentRequestClient_OnPaymentResponse_Name,
        codec.align(PaymentRequestClient_OnPaymentResponse_Params.encodedSize));
    builder.encodeStruct(PaymentRequestClient_OnPaymentResponse_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PaymentRequestClientProxy.prototype.onError = function(error) {
    var params = new PaymentRequestClient_OnError_Params();
    params.error = error;
    var builder = new codec.MessageBuilder(
        kPaymentRequestClient_OnError_Name,
        codec.align(PaymentRequestClient_OnError_Params.encodedSize));
    builder.encodeStruct(PaymentRequestClient_OnError_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PaymentRequestClientProxy.prototype.onComplete = function() {
    var params = new PaymentRequestClient_OnComplete_Params();
    var builder = new codec.MessageBuilder(
        kPaymentRequestClient_OnComplete_Name,
        codec.align(PaymentRequestClient_OnComplete_Params.encodedSize));
    builder.encodeStruct(PaymentRequestClient_OnComplete_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PaymentRequestClientProxy.prototype.onAbort = function(aborted_successfully) {
    var params = new PaymentRequestClient_OnAbort_Params();
    params.aborted_successfully = aborted_successfully;
    var builder = new codec.MessageBuilder(
        kPaymentRequestClient_OnAbort_Name,
        codec.align(PaymentRequestClient_OnAbort_Params.encodedSize));
    builder.encodeStruct(PaymentRequestClient_OnAbort_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function PaymentRequestClientStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  PaymentRequestClientStub.prototype = Object.create(bindings.StubBase.prototype);
  PaymentRequestClientStub.prototype.onShippingAddressChange = function(address) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onShippingAddressChange && bindings.StubBindings(this).delegate.onShippingAddressChange(address);
  }
  PaymentRequestClientStub.prototype.onShippingOptionChange = function(shipping_option_id) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onShippingOptionChange && bindings.StubBindings(this).delegate.onShippingOptionChange(shipping_option_id);
  }
  PaymentRequestClientStub.prototype.onPaymentResponse = function(response) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onPaymentResponse && bindings.StubBindings(this).delegate.onPaymentResponse(response);
  }
  PaymentRequestClientStub.prototype.onError = function(error) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onError && bindings.StubBindings(this).delegate.onError(error);
  }
  PaymentRequestClientStub.prototype.onComplete = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onComplete && bindings.StubBindings(this).delegate.onComplete();
  }
  PaymentRequestClientStub.prototype.onAbort = function(aborted_successfully) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onAbort && bindings.StubBindings(this).delegate.onAbort(aborted_successfully);
  }

  PaymentRequestClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPaymentRequestClient_OnShippingAddressChange_Name:
      var params = reader.decodeStruct(PaymentRequestClient_OnShippingAddressChange_Params);
      this.onShippingAddressChange(params.address);
      return true;
    case kPaymentRequestClient_OnShippingOptionChange_Name:
      var params = reader.decodeStruct(PaymentRequestClient_OnShippingOptionChange_Params);
      this.onShippingOptionChange(params.shipping_option_id);
      return true;
    case kPaymentRequestClient_OnPaymentResponse_Name:
      var params = reader.decodeStruct(PaymentRequestClient_OnPaymentResponse_Params);
      this.onPaymentResponse(params.response);
      return true;
    case kPaymentRequestClient_OnError_Name:
      var params = reader.decodeStruct(PaymentRequestClient_OnError_Params);
      this.onError(params.error);
      return true;
    case kPaymentRequestClient_OnComplete_Name:
      var params = reader.decodeStruct(PaymentRequestClient_OnComplete_Params);
      this.onComplete();
      return true;
    case kPaymentRequestClient_OnAbort_Name:
      var params = reader.decodeStruct(PaymentRequestClient_OnAbort_Params);
      this.onAbort(params.aborted_successfully);
      return true;
    default:
      return false;
    }
  };

  PaymentRequestClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validatePaymentRequestClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kPaymentRequestClient_OnShippingAddressChange_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PaymentRequestClient_OnShippingAddressChange_Params;
      break;
      case kPaymentRequestClient_OnShippingOptionChange_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PaymentRequestClient_OnShippingOptionChange_Params;
      break;
      case kPaymentRequestClient_OnPaymentResponse_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PaymentRequestClient_OnPaymentResponse_Params;
      break;
      case kPaymentRequestClient_OnError_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PaymentRequestClient_OnError_Params;
      break;
      case kPaymentRequestClient_OnComplete_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PaymentRequestClient_OnComplete_Params;
      break;
      case kPaymentRequestClient_OnAbort_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PaymentRequestClient_OnAbort_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validatePaymentRequestClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var PaymentRequestClient = {
    name: 'blink::mojom::PaymentRequestClient',
    proxyClass: PaymentRequestClientProxy,
    stubClass: PaymentRequestClientStub,
    validateRequest: validatePaymentRequestClientRequest,
    validateResponse: null,
  };
  PaymentRequestClientStub.prototype.validator = validatePaymentRequestClientRequest;
  PaymentRequestClientProxy.prototype.validator = null;
  var kPaymentRequest_SetClient_Name = 0;
  var kPaymentRequest_Show_Name = 1;
  var kPaymentRequest_UpdateWith_Name = 2;
  var kPaymentRequest_Abort_Name = 3;
  var kPaymentRequest_Complete_Name = 4;

  function PaymentRequestProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  PaymentRequestProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  PaymentRequestProxy.prototype.setClient = function(client) {
    var params = new PaymentRequest_SetClient_Params();
    params.client = core.isHandle(client) ? client : connection.bindImpl(client, PaymentRequestClient);
    var builder = new codec.MessageBuilder(
        kPaymentRequest_SetClient_Name,
        codec.align(PaymentRequest_SetClient_Params.encodedSize));
    builder.encodeStruct(PaymentRequest_SetClient_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PaymentRequestProxy.prototype.show = function(methodData, details, options) {
    var params = new PaymentRequest_Show_Params();
    params.methodData = methodData;
    params.details = details;
    params.options = options;
    var builder = new codec.MessageBuilder(
        kPaymentRequest_Show_Name,
        codec.align(PaymentRequest_Show_Params.encodedSize));
    builder.encodeStruct(PaymentRequest_Show_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PaymentRequestProxy.prototype.updateWith = function(details) {
    var params = new PaymentRequest_UpdateWith_Params();
    params.details = details;
    var builder = new codec.MessageBuilder(
        kPaymentRequest_UpdateWith_Name,
        codec.align(PaymentRequest_UpdateWith_Params.encodedSize));
    builder.encodeStruct(PaymentRequest_UpdateWith_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PaymentRequestProxy.prototype.abort = function() {
    var params = new PaymentRequest_Abort_Params();
    var builder = new codec.MessageBuilder(
        kPaymentRequest_Abort_Name,
        codec.align(PaymentRequest_Abort_Params.encodedSize));
    builder.encodeStruct(PaymentRequest_Abort_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PaymentRequestProxy.prototype.complete = function(result) {
    var params = new PaymentRequest_Complete_Params();
    params.result = result;
    var builder = new codec.MessageBuilder(
        kPaymentRequest_Complete_Name,
        codec.align(PaymentRequest_Complete_Params.encodedSize));
    builder.encodeStruct(PaymentRequest_Complete_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function PaymentRequestStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  PaymentRequestStub.prototype = Object.create(bindings.StubBase.prototype);
  PaymentRequestStub.prototype.setClient = function(client) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.setClient && bindings.StubBindings(this).delegate.setClient(connection.bindHandleToProxy(client, PaymentRequestClient));
  }
  PaymentRequestStub.prototype.show = function(methodData, details, options) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.show && bindings.StubBindings(this).delegate.show(methodData, details, options);
  }
  PaymentRequestStub.prototype.updateWith = function(details) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.updateWith && bindings.StubBindings(this).delegate.updateWith(details);
  }
  PaymentRequestStub.prototype.abort = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.abort && bindings.StubBindings(this).delegate.abort();
  }
  PaymentRequestStub.prototype.complete = function(result) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.complete && bindings.StubBindings(this).delegate.complete(result);
  }

  PaymentRequestStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPaymentRequest_SetClient_Name:
      var params = reader.decodeStruct(PaymentRequest_SetClient_Params);
      this.setClient(params.client);
      return true;
    case kPaymentRequest_Show_Name:
      var params = reader.decodeStruct(PaymentRequest_Show_Params);
      this.show(params.methodData, params.details, params.options);
      return true;
    case kPaymentRequest_UpdateWith_Name:
      var params = reader.decodeStruct(PaymentRequest_UpdateWith_Params);
      this.updateWith(params.details);
      return true;
    case kPaymentRequest_Abort_Name:
      var params = reader.decodeStruct(PaymentRequest_Abort_Params);
      this.abort();
      return true;
    case kPaymentRequest_Complete_Name:
      var params = reader.decodeStruct(PaymentRequest_Complete_Params);
      this.complete(params.result);
      return true;
    default:
      return false;
    }
  };

  PaymentRequestStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validatePaymentRequestRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kPaymentRequest_SetClient_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PaymentRequest_SetClient_Params;
      break;
      case kPaymentRequest_Show_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PaymentRequest_Show_Params;
      break;
      case kPaymentRequest_UpdateWith_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PaymentRequest_UpdateWith_Params;
      break;
      case kPaymentRequest_Abort_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PaymentRequest_Abort_Params;
      break;
      case kPaymentRequest_Complete_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PaymentRequest_Complete_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validatePaymentRequestResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var PaymentRequest = {
    name: 'blink::mojom::PaymentRequest',
    proxyClass: PaymentRequestProxy,
    stubClass: PaymentRequestStub,
    validateRequest: validatePaymentRequestRequest,
    validateResponse: null,
  };
  PaymentRequestStub.prototype.validator = validatePaymentRequestRequest;
  PaymentRequestProxy.prototype.validator = null;

  var exports = {};
  exports.PaymentErrorReason = PaymentErrorReason;
  exports.PaymentComplete = PaymentComplete;
  exports.PaymentAddress = PaymentAddress;
  exports.PaymentCurrencyAmount = PaymentCurrencyAmount;
  exports.PaymentResponse = PaymentResponse;
  exports.PaymentItem = PaymentItem;
  exports.PaymentShippingOption = PaymentShippingOption;
  exports.PaymentDetailsModifier = PaymentDetailsModifier;
  exports.PaymentDetails = PaymentDetails;
  exports.PaymentOptions = PaymentOptions;
  exports.PaymentMethodData = PaymentMethodData;
  exports.PaymentRequestClient = PaymentRequestClient;
  exports.PaymentRequest = PaymentRequest;

  return exports;
});
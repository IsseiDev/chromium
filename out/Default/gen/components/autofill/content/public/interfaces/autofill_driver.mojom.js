// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("components/autofill/content/public/interfaces/autofill_driver.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "components/autofill/content/public/interfaces/autofill_types.mojom",
    "mojo/common/common_custom_types.mojom",
    "ui/gfx/geometry/mojo/geometry.mojom",
], function(bindings, codec, connection, core, validator, autofill_types$, common_custom_types$, geometry$) {

  function AutofillDriver_FirstUserGestureObserved_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AutofillDriver_FirstUserGestureObserved_Params.prototype.initDefaults_ = function() {
  };
  AutofillDriver_FirstUserGestureObserved_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  AutofillDriver_FirstUserGestureObserved_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, AutofillDriver_FirstUserGestureObserved_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AutofillDriver_FirstUserGestureObserved_Params.encodedSize = codec.kStructHeaderSize + 0;

  AutofillDriver_FirstUserGestureObserved_Params.decode = function(decoder) {
    var packed;
    var val = new AutofillDriver_FirstUserGestureObserved_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  AutofillDriver_FirstUserGestureObserved_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AutofillDriver_FirstUserGestureObserved_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function AutofillDriver_FormsSeen_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AutofillDriver_FormsSeen_Params.prototype.initDefaults_ = function() {
    this.forms = null;
    this.timestamp = null;
  };
  AutofillDriver_FormsSeen_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  AutofillDriver_FormsSeen_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, AutofillDriver_FormsSeen_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate AutofillDriver_FormsSeen_Params.forms
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(autofill_types$.FormData), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate AutofillDriver_FormsSeen_Params.timestamp
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, common_custom_types$.TimeTicks, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AutofillDriver_FormsSeen_Params.encodedSize = codec.kStructHeaderSize + 16;

  AutofillDriver_FormsSeen_Params.decode = function(decoder) {
    var packed;
    var val = new AutofillDriver_FormsSeen_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.forms = decoder.decodeArrayPointer(new codec.PointerTo(autofill_types$.FormData));
    val.timestamp = decoder.decodeStructPointer(common_custom_types$.TimeTicks);
    return val;
  };

  AutofillDriver_FormsSeen_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AutofillDriver_FormsSeen_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(autofill_types$.FormData), val.forms);
    encoder.encodeStructPointer(common_custom_types$.TimeTicks, val.timestamp);
  };
  function AutofillDriver_WillSubmitForm_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AutofillDriver_WillSubmitForm_Params.prototype.initDefaults_ = function() {
    this.form = null;
    this.timestamp = null;
  };
  AutofillDriver_WillSubmitForm_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  AutofillDriver_WillSubmitForm_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, AutofillDriver_WillSubmitForm_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate AutofillDriver_WillSubmitForm_Params.form
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, autofill_types$.FormData, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate AutofillDriver_WillSubmitForm_Params.timestamp
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, common_custom_types$.TimeTicks, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AutofillDriver_WillSubmitForm_Params.encodedSize = codec.kStructHeaderSize + 16;

  AutofillDriver_WillSubmitForm_Params.decode = function(decoder) {
    var packed;
    var val = new AutofillDriver_WillSubmitForm_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.form = decoder.decodeStructPointer(autofill_types$.FormData);
    val.timestamp = decoder.decodeStructPointer(common_custom_types$.TimeTicks);
    return val;
  };

  AutofillDriver_WillSubmitForm_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AutofillDriver_WillSubmitForm_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(autofill_types$.FormData, val.form);
    encoder.encodeStructPointer(common_custom_types$.TimeTicks, val.timestamp);
  };
  function AutofillDriver_FormSubmitted_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AutofillDriver_FormSubmitted_Params.prototype.initDefaults_ = function() {
    this.form = null;
  };
  AutofillDriver_FormSubmitted_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  AutofillDriver_FormSubmitted_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, AutofillDriver_FormSubmitted_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate AutofillDriver_FormSubmitted_Params.form
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, autofill_types$.FormData, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AutofillDriver_FormSubmitted_Params.encodedSize = codec.kStructHeaderSize + 8;

  AutofillDriver_FormSubmitted_Params.decode = function(decoder) {
    var packed;
    var val = new AutofillDriver_FormSubmitted_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.form = decoder.decodeStructPointer(autofill_types$.FormData);
    return val;
  };

  AutofillDriver_FormSubmitted_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AutofillDriver_FormSubmitted_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(autofill_types$.FormData, val.form);
  };
  function AutofillDriver_TextFieldDidChange_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AutofillDriver_TextFieldDidChange_Params.prototype.initDefaults_ = function() {
    this.form = null;
    this.field = null;
    this.timestamp = null;
  };
  AutofillDriver_TextFieldDidChange_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  AutofillDriver_TextFieldDidChange_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, AutofillDriver_TextFieldDidChange_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate AutofillDriver_TextFieldDidChange_Params.form
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, autofill_types$.FormData, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate AutofillDriver_TextFieldDidChange_Params.field
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, autofill_types$.FormFieldData, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate AutofillDriver_TextFieldDidChange_Params.timestamp
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, common_custom_types$.TimeTicks, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AutofillDriver_TextFieldDidChange_Params.encodedSize = codec.kStructHeaderSize + 24;

  AutofillDriver_TextFieldDidChange_Params.decode = function(decoder) {
    var packed;
    var val = new AutofillDriver_TextFieldDidChange_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.form = decoder.decodeStructPointer(autofill_types$.FormData);
    val.field = decoder.decodeStructPointer(autofill_types$.FormFieldData);
    val.timestamp = decoder.decodeStructPointer(common_custom_types$.TimeTicks);
    return val;
  };

  AutofillDriver_TextFieldDidChange_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AutofillDriver_TextFieldDidChange_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(autofill_types$.FormData, val.form);
    encoder.encodeStructPointer(autofill_types$.FormFieldData, val.field);
    encoder.encodeStructPointer(common_custom_types$.TimeTicks, val.timestamp);
  };
  function AutofillDriver_QueryFormFieldAutofill_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AutofillDriver_QueryFormFieldAutofill_Params.prototype.initDefaults_ = function() {
    this.id = 0;
    this.form = null;
    this.field = null;
    this.bounding_box = null;
  };
  AutofillDriver_QueryFormFieldAutofill_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  AutofillDriver_QueryFormFieldAutofill_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, AutofillDriver_QueryFormFieldAutofill_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate AutofillDriver_QueryFormFieldAutofill_Params.form
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, autofill_types$.FormData, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate AutofillDriver_QueryFormFieldAutofill_Params.field
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, autofill_types$.FormFieldData, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate AutofillDriver_QueryFormFieldAutofill_Params.bounding_box
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, geometry$.RectF, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AutofillDriver_QueryFormFieldAutofill_Params.encodedSize = codec.kStructHeaderSize + 32;

  AutofillDriver_QueryFormFieldAutofill_Params.decode = function(decoder) {
    var packed;
    var val = new AutofillDriver_QueryFormFieldAutofill_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.form = decoder.decodeStructPointer(autofill_types$.FormData);
    val.field = decoder.decodeStructPointer(autofill_types$.FormFieldData);
    val.bounding_box = decoder.decodeStructPointer(geometry$.RectF);
    return val;
  };

  AutofillDriver_QueryFormFieldAutofill_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AutofillDriver_QueryFormFieldAutofill_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.id);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(autofill_types$.FormData, val.form);
    encoder.encodeStructPointer(autofill_types$.FormFieldData, val.field);
    encoder.encodeStructPointer(geometry$.RectF, val.bounding_box);
  };
  function AutofillDriver_HidePopup_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AutofillDriver_HidePopup_Params.prototype.initDefaults_ = function() {
  };
  AutofillDriver_HidePopup_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  AutofillDriver_HidePopup_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, AutofillDriver_HidePopup_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AutofillDriver_HidePopup_Params.encodedSize = codec.kStructHeaderSize + 0;

  AutofillDriver_HidePopup_Params.decode = function(decoder) {
    var packed;
    var val = new AutofillDriver_HidePopup_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  AutofillDriver_HidePopup_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AutofillDriver_HidePopup_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function AutofillDriver_PingAck_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AutofillDriver_PingAck_Params.prototype.initDefaults_ = function() {
  };
  AutofillDriver_PingAck_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  AutofillDriver_PingAck_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, AutofillDriver_PingAck_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AutofillDriver_PingAck_Params.encodedSize = codec.kStructHeaderSize + 0;

  AutofillDriver_PingAck_Params.decode = function(decoder) {
    var packed;
    var val = new AutofillDriver_PingAck_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  AutofillDriver_PingAck_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AutofillDriver_PingAck_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function AutofillDriver_FocusNoLongerOnForm_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AutofillDriver_FocusNoLongerOnForm_Params.prototype.initDefaults_ = function() {
  };
  AutofillDriver_FocusNoLongerOnForm_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  AutofillDriver_FocusNoLongerOnForm_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, AutofillDriver_FocusNoLongerOnForm_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AutofillDriver_FocusNoLongerOnForm_Params.encodedSize = codec.kStructHeaderSize + 0;

  AutofillDriver_FocusNoLongerOnForm_Params.decode = function(decoder) {
    var packed;
    var val = new AutofillDriver_FocusNoLongerOnForm_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  AutofillDriver_FocusNoLongerOnForm_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AutofillDriver_FocusNoLongerOnForm_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function AutofillDriver_DidFillAutofillFormData_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AutofillDriver_DidFillAutofillFormData_Params.prototype.initDefaults_ = function() {
    this.form = null;
    this.timestamp = null;
  };
  AutofillDriver_DidFillAutofillFormData_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  AutofillDriver_DidFillAutofillFormData_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, AutofillDriver_DidFillAutofillFormData_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate AutofillDriver_DidFillAutofillFormData_Params.form
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, autofill_types$.FormData, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate AutofillDriver_DidFillAutofillFormData_Params.timestamp
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, common_custom_types$.TimeTicks, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AutofillDriver_DidFillAutofillFormData_Params.encodedSize = codec.kStructHeaderSize + 16;

  AutofillDriver_DidFillAutofillFormData_Params.decode = function(decoder) {
    var packed;
    var val = new AutofillDriver_DidFillAutofillFormData_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.form = decoder.decodeStructPointer(autofill_types$.FormData);
    val.timestamp = decoder.decodeStructPointer(common_custom_types$.TimeTicks);
    return val;
  };

  AutofillDriver_DidFillAutofillFormData_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AutofillDriver_DidFillAutofillFormData_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(autofill_types$.FormData, val.form);
    encoder.encodeStructPointer(common_custom_types$.TimeTicks, val.timestamp);
  };
  function AutofillDriver_DidPreviewAutofillFormData_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AutofillDriver_DidPreviewAutofillFormData_Params.prototype.initDefaults_ = function() {
  };
  AutofillDriver_DidPreviewAutofillFormData_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  AutofillDriver_DidPreviewAutofillFormData_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, AutofillDriver_DidPreviewAutofillFormData_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AutofillDriver_DidPreviewAutofillFormData_Params.encodedSize = codec.kStructHeaderSize + 0;

  AutofillDriver_DidPreviewAutofillFormData_Params.decode = function(decoder) {
    var packed;
    var val = new AutofillDriver_DidPreviewAutofillFormData_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  AutofillDriver_DidPreviewAutofillFormData_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AutofillDriver_DidPreviewAutofillFormData_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function AutofillDriver_DidEndTextFieldEditing_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AutofillDriver_DidEndTextFieldEditing_Params.prototype.initDefaults_ = function() {
  };
  AutofillDriver_DidEndTextFieldEditing_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  AutofillDriver_DidEndTextFieldEditing_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, AutofillDriver_DidEndTextFieldEditing_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AutofillDriver_DidEndTextFieldEditing_Params.encodedSize = codec.kStructHeaderSize + 0;

  AutofillDriver_DidEndTextFieldEditing_Params.decode = function(decoder) {
    var packed;
    var val = new AutofillDriver_DidEndTextFieldEditing_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  AutofillDriver_DidEndTextFieldEditing_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AutofillDriver_DidEndTextFieldEditing_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function AutofillDriver_SetDataList_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AutofillDriver_SetDataList_Params.prototype.initDefaults_ = function() {
    this.values = null;
    this.labels = null;
  };
  AutofillDriver_SetDataList_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  AutofillDriver_SetDataList_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, AutofillDriver_SetDataList_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate AutofillDriver_SetDataList_Params.values
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(common_custom_types$.String16), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate AutofillDriver_SetDataList_Params.labels
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(common_custom_types$.String16), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AutofillDriver_SetDataList_Params.encodedSize = codec.kStructHeaderSize + 16;

  AutofillDriver_SetDataList_Params.decode = function(decoder) {
    var packed;
    var val = new AutofillDriver_SetDataList_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.values = decoder.decodeArrayPointer(new codec.PointerTo(common_custom_types$.String16));
    val.labels = decoder.decodeArrayPointer(new codec.PointerTo(common_custom_types$.String16));
    return val;
  };

  AutofillDriver_SetDataList_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AutofillDriver_SetDataList_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(common_custom_types$.String16), val.values);
    encoder.encodeArrayPointer(new codec.PointerTo(common_custom_types$.String16), val.labels);
  };
  function PasswordManagerDriver_PasswordAutofillAgentConstructed_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PasswordManagerDriver_PasswordAutofillAgentConstructed_Params.prototype.initDefaults_ = function() {
  };
  PasswordManagerDriver_PasswordAutofillAgentConstructed_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PasswordManagerDriver_PasswordAutofillAgentConstructed_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PasswordManagerDriver_PasswordAutofillAgentConstructed_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PasswordManagerDriver_PasswordAutofillAgentConstructed_Params.encodedSize = codec.kStructHeaderSize + 0;

  PasswordManagerDriver_PasswordAutofillAgentConstructed_Params.decode = function(decoder) {
    var packed;
    var val = new PasswordManagerDriver_PasswordAutofillAgentConstructed_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  PasswordManagerDriver_PasswordAutofillAgentConstructed_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PasswordManagerDriver_PasswordAutofillAgentConstructed_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function PasswordManagerDriver_PasswordFormsParsed_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PasswordManagerDriver_PasswordFormsParsed_Params.prototype.initDefaults_ = function() {
    this.forms = null;
  };
  PasswordManagerDriver_PasswordFormsParsed_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PasswordManagerDriver_PasswordFormsParsed_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PasswordManagerDriver_PasswordFormsParsed_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PasswordManagerDriver_PasswordFormsParsed_Params.forms
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(autofill_types$.PasswordForm), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PasswordManagerDriver_PasswordFormsParsed_Params.encodedSize = codec.kStructHeaderSize + 8;

  PasswordManagerDriver_PasswordFormsParsed_Params.decode = function(decoder) {
    var packed;
    var val = new PasswordManagerDriver_PasswordFormsParsed_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.forms = decoder.decodeArrayPointer(new codec.PointerTo(autofill_types$.PasswordForm));
    return val;
  };

  PasswordManagerDriver_PasswordFormsParsed_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PasswordManagerDriver_PasswordFormsParsed_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(autofill_types$.PasswordForm), val.forms);
  };
  function PasswordManagerDriver_PasswordFormsRendered_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PasswordManagerDriver_PasswordFormsRendered_Params.prototype.initDefaults_ = function() {
    this.visible_forms = null;
    this.did_stop_loading = false;
  };
  PasswordManagerDriver_PasswordFormsRendered_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PasswordManagerDriver_PasswordFormsRendered_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PasswordManagerDriver_PasswordFormsRendered_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PasswordManagerDriver_PasswordFormsRendered_Params.visible_forms
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(autofill_types$.PasswordForm), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  PasswordManagerDriver_PasswordFormsRendered_Params.encodedSize = codec.kStructHeaderSize + 16;

  PasswordManagerDriver_PasswordFormsRendered_Params.decode = function(decoder) {
    var packed;
    var val = new PasswordManagerDriver_PasswordFormsRendered_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.visible_forms = decoder.decodeArrayPointer(new codec.PointerTo(autofill_types$.PasswordForm));
    val.did_stop_loading = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PasswordManagerDriver_PasswordFormsRendered_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PasswordManagerDriver_PasswordFormsRendered_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(autofill_types$.PasswordForm), val.visible_forms);
    encoder.encodeStruct(codec.Uint8, val.did_stop_loading);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PasswordManagerDriver_PasswordFormSubmitted_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PasswordManagerDriver_PasswordFormSubmitted_Params.prototype.initDefaults_ = function() {
    this.password_form = null;
  };
  PasswordManagerDriver_PasswordFormSubmitted_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PasswordManagerDriver_PasswordFormSubmitted_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PasswordManagerDriver_PasswordFormSubmitted_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PasswordManagerDriver_PasswordFormSubmitted_Params.password_form
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, autofill_types$.PasswordForm, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PasswordManagerDriver_PasswordFormSubmitted_Params.encodedSize = codec.kStructHeaderSize + 8;

  PasswordManagerDriver_PasswordFormSubmitted_Params.decode = function(decoder) {
    var packed;
    var val = new PasswordManagerDriver_PasswordFormSubmitted_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.password_form = decoder.decodeStructPointer(autofill_types$.PasswordForm);
    return val;
  };

  PasswordManagerDriver_PasswordFormSubmitted_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PasswordManagerDriver_PasswordFormSubmitted_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(autofill_types$.PasswordForm, val.password_form);
  };
  function PasswordManagerDriver_InPageNavigation_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PasswordManagerDriver_InPageNavigation_Params.prototype.initDefaults_ = function() {
    this.password_form = null;
  };
  PasswordManagerDriver_InPageNavigation_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PasswordManagerDriver_InPageNavigation_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PasswordManagerDriver_InPageNavigation_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PasswordManagerDriver_InPageNavigation_Params.password_form
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, autofill_types$.PasswordForm, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PasswordManagerDriver_InPageNavigation_Params.encodedSize = codec.kStructHeaderSize + 8;

  PasswordManagerDriver_InPageNavigation_Params.decode = function(decoder) {
    var packed;
    var val = new PasswordManagerDriver_InPageNavigation_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.password_form = decoder.decodeStructPointer(autofill_types$.PasswordForm);
    return val;
  };

  PasswordManagerDriver_InPageNavigation_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PasswordManagerDriver_InPageNavigation_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(autofill_types$.PasswordForm, val.password_form);
  };
  function PasswordManagerDriver_RecordSavePasswordProgress_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PasswordManagerDriver_RecordSavePasswordProgress_Params.prototype.initDefaults_ = function() {
    this.log = null;
  };
  PasswordManagerDriver_RecordSavePasswordProgress_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PasswordManagerDriver_RecordSavePasswordProgress_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PasswordManagerDriver_RecordSavePasswordProgress_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PasswordManagerDriver_RecordSavePasswordProgress_Params.log
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PasswordManagerDriver_RecordSavePasswordProgress_Params.encodedSize = codec.kStructHeaderSize + 8;

  PasswordManagerDriver_RecordSavePasswordProgress_Params.decode = function(decoder) {
    var packed;
    var val = new PasswordManagerDriver_RecordSavePasswordProgress_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.log = decoder.decodeStruct(codec.String);
    return val;
  };

  PasswordManagerDriver_RecordSavePasswordProgress_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PasswordManagerDriver_RecordSavePasswordProgress_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.log);
  };
  function PasswordManagerDriver_ShowPasswordSuggestions_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PasswordManagerDriver_ShowPasswordSuggestions_Params.prototype.initDefaults_ = function() {
    this.key = 0;
    this.text_direction = 0;
    this.typed_username = null;
    this.options = 0;
    this.bounds = null;
  };
  PasswordManagerDriver_ShowPasswordSuggestions_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PasswordManagerDriver_ShowPasswordSuggestions_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PasswordManagerDriver_ShowPasswordSuggestions_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



    
    // validate PasswordManagerDriver_ShowPasswordSuggestions_Params.typed_username
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, common_custom_types$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate PasswordManagerDriver_ShowPasswordSuggestions_Params.bounds
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, geometry$.RectF, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PasswordManagerDriver_ShowPasswordSuggestions_Params.encodedSize = codec.kStructHeaderSize + 32;

  PasswordManagerDriver_ShowPasswordSuggestions_Params.decode = function(decoder) {
    var packed;
    var val = new PasswordManagerDriver_ShowPasswordSuggestions_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.key = decoder.decodeStruct(codec.Int32);
    val.text_direction = decoder.decodeStruct(codec.Int32);
    val.typed_username = decoder.decodeStructPointer(common_custom_types$.String16);
    val.options = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.bounds = decoder.decodeStructPointer(geometry$.RectF);
    return val;
  };

  PasswordManagerDriver_ShowPasswordSuggestions_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PasswordManagerDriver_ShowPasswordSuggestions_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.key);
    encoder.encodeStruct(codec.Int32, val.text_direction);
    encoder.encodeStructPointer(common_custom_types$.String16, val.typed_username);
    encoder.encodeStruct(codec.Int32, val.options);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(geometry$.RectF, val.bounds);
  };
  function PasswordManagerDriver_PresaveGeneratedPassword_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PasswordManagerDriver_PresaveGeneratedPassword_Params.prototype.initDefaults_ = function() {
    this.password_form = null;
  };
  PasswordManagerDriver_PresaveGeneratedPassword_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PasswordManagerDriver_PresaveGeneratedPassword_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PasswordManagerDriver_PresaveGeneratedPassword_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PasswordManagerDriver_PresaveGeneratedPassword_Params.password_form
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, autofill_types$.PasswordForm, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PasswordManagerDriver_PresaveGeneratedPassword_Params.encodedSize = codec.kStructHeaderSize + 8;

  PasswordManagerDriver_PresaveGeneratedPassword_Params.decode = function(decoder) {
    var packed;
    var val = new PasswordManagerDriver_PresaveGeneratedPassword_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.password_form = decoder.decodeStructPointer(autofill_types$.PasswordForm);
    return val;
  };

  PasswordManagerDriver_PresaveGeneratedPassword_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PasswordManagerDriver_PresaveGeneratedPassword_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(autofill_types$.PasswordForm, val.password_form);
  };
  function PasswordManagerDriver_PasswordNoLongerGenerated_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PasswordManagerDriver_PasswordNoLongerGenerated_Params.prototype.initDefaults_ = function() {
    this.password_form = null;
  };
  PasswordManagerDriver_PasswordNoLongerGenerated_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PasswordManagerDriver_PasswordNoLongerGenerated_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PasswordManagerDriver_PasswordNoLongerGenerated_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PasswordManagerDriver_PasswordNoLongerGenerated_Params.password_form
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, autofill_types$.PasswordForm, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PasswordManagerDriver_PasswordNoLongerGenerated_Params.encodedSize = codec.kStructHeaderSize + 8;

  PasswordManagerDriver_PasswordNoLongerGenerated_Params.decode = function(decoder) {
    var packed;
    var val = new PasswordManagerDriver_PasswordNoLongerGenerated_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.password_form = decoder.decodeStructPointer(autofill_types$.PasswordForm);
    return val;
  };

  PasswordManagerDriver_PasswordNoLongerGenerated_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PasswordManagerDriver_PasswordNoLongerGenerated_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(autofill_types$.PasswordForm, val.password_form);
  };
  function PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params.prototype.initDefaults_ = function() {
    this.password_form = null;
    this.generation_field = null;
  };
  PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params.password_form
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, autofill_types$.PasswordForm, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params.generation_field
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, common_custom_types$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params.encodedSize = codec.kStructHeaderSize + 16;

  PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params.decode = function(decoder) {
    var packed;
    var val = new PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.password_form = decoder.decodeStructPointer(autofill_types$.PasswordForm);
    val.generation_field = decoder.decodeStructPointer(common_custom_types$.String16);
    return val;
  };

  PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(autofill_types$.PasswordForm, val.password_form);
    encoder.encodeStructPointer(common_custom_types$.String16, val.generation_field);
  };
  var kAutofillDriver_FirstUserGestureObserved_Name = 0;
  var kAutofillDriver_FormsSeen_Name = 1;
  var kAutofillDriver_WillSubmitForm_Name = 2;
  var kAutofillDriver_FormSubmitted_Name = 3;
  var kAutofillDriver_TextFieldDidChange_Name = 4;
  var kAutofillDriver_QueryFormFieldAutofill_Name = 5;
  var kAutofillDriver_HidePopup_Name = 6;
  var kAutofillDriver_PingAck_Name = 7;
  var kAutofillDriver_FocusNoLongerOnForm_Name = 8;
  var kAutofillDriver_DidFillAutofillFormData_Name = 9;
  var kAutofillDriver_DidPreviewAutofillFormData_Name = 10;
  var kAutofillDriver_DidEndTextFieldEditing_Name = 11;
  var kAutofillDriver_SetDataList_Name = 12;

  function AutofillDriverProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  AutofillDriverProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  AutofillDriverProxy.prototype.firstUserGestureObserved = function() {
    var params = new AutofillDriver_FirstUserGestureObserved_Params();
    var builder = new codec.MessageBuilder(
        kAutofillDriver_FirstUserGestureObserved_Name,
        codec.align(AutofillDriver_FirstUserGestureObserved_Params.encodedSize));
    builder.encodeStruct(AutofillDriver_FirstUserGestureObserved_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AutofillDriverProxy.prototype.formsSeen = function(forms, timestamp) {
    var params = new AutofillDriver_FormsSeen_Params();
    params.forms = forms;
    params.timestamp = timestamp;
    var builder = new codec.MessageBuilder(
        kAutofillDriver_FormsSeen_Name,
        codec.align(AutofillDriver_FormsSeen_Params.encodedSize));
    builder.encodeStruct(AutofillDriver_FormsSeen_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AutofillDriverProxy.prototype.willSubmitForm = function(form, timestamp) {
    var params = new AutofillDriver_WillSubmitForm_Params();
    params.form = form;
    params.timestamp = timestamp;
    var builder = new codec.MessageBuilder(
        kAutofillDriver_WillSubmitForm_Name,
        codec.align(AutofillDriver_WillSubmitForm_Params.encodedSize));
    builder.encodeStruct(AutofillDriver_WillSubmitForm_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AutofillDriverProxy.prototype.formSubmitted = function(form) {
    var params = new AutofillDriver_FormSubmitted_Params();
    params.form = form;
    var builder = new codec.MessageBuilder(
        kAutofillDriver_FormSubmitted_Name,
        codec.align(AutofillDriver_FormSubmitted_Params.encodedSize));
    builder.encodeStruct(AutofillDriver_FormSubmitted_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AutofillDriverProxy.prototype.textFieldDidChange = function(form, field, timestamp) {
    var params = new AutofillDriver_TextFieldDidChange_Params();
    params.form = form;
    params.field = field;
    params.timestamp = timestamp;
    var builder = new codec.MessageBuilder(
        kAutofillDriver_TextFieldDidChange_Name,
        codec.align(AutofillDriver_TextFieldDidChange_Params.encodedSize));
    builder.encodeStruct(AutofillDriver_TextFieldDidChange_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AutofillDriverProxy.prototype.queryFormFieldAutofill = function(id, form, field, bounding_box) {
    var params = new AutofillDriver_QueryFormFieldAutofill_Params();
    params.id = id;
    params.form = form;
    params.field = field;
    params.bounding_box = bounding_box;
    var builder = new codec.MessageBuilder(
        kAutofillDriver_QueryFormFieldAutofill_Name,
        codec.align(AutofillDriver_QueryFormFieldAutofill_Params.encodedSize));
    builder.encodeStruct(AutofillDriver_QueryFormFieldAutofill_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AutofillDriverProxy.prototype.hidePopup = function() {
    var params = new AutofillDriver_HidePopup_Params();
    var builder = new codec.MessageBuilder(
        kAutofillDriver_HidePopup_Name,
        codec.align(AutofillDriver_HidePopup_Params.encodedSize));
    builder.encodeStruct(AutofillDriver_HidePopup_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AutofillDriverProxy.prototype.pingAck = function() {
    var params = new AutofillDriver_PingAck_Params();
    var builder = new codec.MessageBuilder(
        kAutofillDriver_PingAck_Name,
        codec.align(AutofillDriver_PingAck_Params.encodedSize));
    builder.encodeStruct(AutofillDriver_PingAck_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AutofillDriverProxy.prototype.focusNoLongerOnForm = function() {
    var params = new AutofillDriver_FocusNoLongerOnForm_Params();
    var builder = new codec.MessageBuilder(
        kAutofillDriver_FocusNoLongerOnForm_Name,
        codec.align(AutofillDriver_FocusNoLongerOnForm_Params.encodedSize));
    builder.encodeStruct(AutofillDriver_FocusNoLongerOnForm_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AutofillDriverProxy.prototype.didFillAutofillFormData = function(form, timestamp) {
    var params = new AutofillDriver_DidFillAutofillFormData_Params();
    params.form = form;
    params.timestamp = timestamp;
    var builder = new codec.MessageBuilder(
        kAutofillDriver_DidFillAutofillFormData_Name,
        codec.align(AutofillDriver_DidFillAutofillFormData_Params.encodedSize));
    builder.encodeStruct(AutofillDriver_DidFillAutofillFormData_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AutofillDriverProxy.prototype.didPreviewAutofillFormData = function() {
    var params = new AutofillDriver_DidPreviewAutofillFormData_Params();
    var builder = new codec.MessageBuilder(
        kAutofillDriver_DidPreviewAutofillFormData_Name,
        codec.align(AutofillDriver_DidPreviewAutofillFormData_Params.encodedSize));
    builder.encodeStruct(AutofillDriver_DidPreviewAutofillFormData_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AutofillDriverProxy.prototype.didEndTextFieldEditing = function() {
    var params = new AutofillDriver_DidEndTextFieldEditing_Params();
    var builder = new codec.MessageBuilder(
        kAutofillDriver_DidEndTextFieldEditing_Name,
        codec.align(AutofillDriver_DidEndTextFieldEditing_Params.encodedSize));
    builder.encodeStruct(AutofillDriver_DidEndTextFieldEditing_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AutofillDriverProxy.prototype.setDataList = function(values, labels) {
    var params = new AutofillDriver_SetDataList_Params();
    params.values = values;
    params.labels = labels;
    var builder = new codec.MessageBuilder(
        kAutofillDriver_SetDataList_Name,
        codec.align(AutofillDriver_SetDataList_Params.encodedSize));
    builder.encodeStruct(AutofillDriver_SetDataList_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function AutofillDriverStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  AutofillDriverStub.prototype = Object.create(bindings.StubBase.prototype);
  AutofillDriverStub.prototype.firstUserGestureObserved = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.firstUserGestureObserved && bindings.StubBindings(this).delegate.firstUserGestureObserved();
  }
  AutofillDriverStub.prototype.formsSeen = function(forms, timestamp) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.formsSeen && bindings.StubBindings(this).delegate.formsSeen(forms, timestamp);
  }
  AutofillDriverStub.prototype.willSubmitForm = function(form, timestamp) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.willSubmitForm && bindings.StubBindings(this).delegate.willSubmitForm(form, timestamp);
  }
  AutofillDriverStub.prototype.formSubmitted = function(form) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.formSubmitted && bindings.StubBindings(this).delegate.formSubmitted(form);
  }
  AutofillDriverStub.prototype.textFieldDidChange = function(form, field, timestamp) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.textFieldDidChange && bindings.StubBindings(this).delegate.textFieldDidChange(form, field, timestamp);
  }
  AutofillDriverStub.prototype.queryFormFieldAutofill = function(id, form, field, bounding_box) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.queryFormFieldAutofill && bindings.StubBindings(this).delegate.queryFormFieldAutofill(id, form, field, bounding_box);
  }
  AutofillDriverStub.prototype.hidePopup = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.hidePopup && bindings.StubBindings(this).delegate.hidePopup();
  }
  AutofillDriverStub.prototype.pingAck = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.pingAck && bindings.StubBindings(this).delegate.pingAck();
  }
  AutofillDriverStub.prototype.focusNoLongerOnForm = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.focusNoLongerOnForm && bindings.StubBindings(this).delegate.focusNoLongerOnForm();
  }
  AutofillDriverStub.prototype.didFillAutofillFormData = function(form, timestamp) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.didFillAutofillFormData && bindings.StubBindings(this).delegate.didFillAutofillFormData(form, timestamp);
  }
  AutofillDriverStub.prototype.didPreviewAutofillFormData = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.didPreviewAutofillFormData && bindings.StubBindings(this).delegate.didPreviewAutofillFormData();
  }
  AutofillDriverStub.prototype.didEndTextFieldEditing = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.didEndTextFieldEditing && bindings.StubBindings(this).delegate.didEndTextFieldEditing();
  }
  AutofillDriverStub.prototype.setDataList = function(values, labels) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.setDataList && bindings.StubBindings(this).delegate.setDataList(values, labels);
  }

  AutofillDriverStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kAutofillDriver_FirstUserGestureObserved_Name:
      var params = reader.decodeStruct(AutofillDriver_FirstUserGestureObserved_Params);
      this.firstUserGestureObserved();
      return true;
    case kAutofillDriver_FormsSeen_Name:
      var params = reader.decodeStruct(AutofillDriver_FormsSeen_Params);
      this.formsSeen(params.forms, params.timestamp);
      return true;
    case kAutofillDriver_WillSubmitForm_Name:
      var params = reader.decodeStruct(AutofillDriver_WillSubmitForm_Params);
      this.willSubmitForm(params.form, params.timestamp);
      return true;
    case kAutofillDriver_FormSubmitted_Name:
      var params = reader.decodeStruct(AutofillDriver_FormSubmitted_Params);
      this.formSubmitted(params.form);
      return true;
    case kAutofillDriver_TextFieldDidChange_Name:
      var params = reader.decodeStruct(AutofillDriver_TextFieldDidChange_Params);
      this.textFieldDidChange(params.form, params.field, params.timestamp);
      return true;
    case kAutofillDriver_QueryFormFieldAutofill_Name:
      var params = reader.decodeStruct(AutofillDriver_QueryFormFieldAutofill_Params);
      this.queryFormFieldAutofill(params.id, params.form, params.field, params.bounding_box);
      return true;
    case kAutofillDriver_HidePopup_Name:
      var params = reader.decodeStruct(AutofillDriver_HidePopup_Params);
      this.hidePopup();
      return true;
    case kAutofillDriver_PingAck_Name:
      var params = reader.decodeStruct(AutofillDriver_PingAck_Params);
      this.pingAck();
      return true;
    case kAutofillDriver_FocusNoLongerOnForm_Name:
      var params = reader.decodeStruct(AutofillDriver_FocusNoLongerOnForm_Params);
      this.focusNoLongerOnForm();
      return true;
    case kAutofillDriver_DidFillAutofillFormData_Name:
      var params = reader.decodeStruct(AutofillDriver_DidFillAutofillFormData_Params);
      this.didFillAutofillFormData(params.form, params.timestamp);
      return true;
    case kAutofillDriver_DidPreviewAutofillFormData_Name:
      var params = reader.decodeStruct(AutofillDriver_DidPreviewAutofillFormData_Params);
      this.didPreviewAutofillFormData();
      return true;
    case kAutofillDriver_DidEndTextFieldEditing_Name:
      var params = reader.decodeStruct(AutofillDriver_DidEndTextFieldEditing_Params);
      this.didEndTextFieldEditing();
      return true;
    case kAutofillDriver_SetDataList_Name:
      var params = reader.decodeStruct(AutofillDriver_SetDataList_Params);
      this.setDataList(params.values, params.labels);
      return true;
    default:
      return false;
    }
  };

  AutofillDriverStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateAutofillDriverRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kAutofillDriver_FirstUserGestureObserved_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AutofillDriver_FirstUserGestureObserved_Params;
      break;
      case kAutofillDriver_FormsSeen_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AutofillDriver_FormsSeen_Params;
      break;
      case kAutofillDriver_WillSubmitForm_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AutofillDriver_WillSubmitForm_Params;
      break;
      case kAutofillDriver_FormSubmitted_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AutofillDriver_FormSubmitted_Params;
      break;
      case kAutofillDriver_TextFieldDidChange_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AutofillDriver_TextFieldDidChange_Params;
      break;
      case kAutofillDriver_QueryFormFieldAutofill_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AutofillDriver_QueryFormFieldAutofill_Params;
      break;
      case kAutofillDriver_HidePopup_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AutofillDriver_HidePopup_Params;
      break;
      case kAutofillDriver_PingAck_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AutofillDriver_PingAck_Params;
      break;
      case kAutofillDriver_FocusNoLongerOnForm_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AutofillDriver_FocusNoLongerOnForm_Params;
      break;
      case kAutofillDriver_DidFillAutofillFormData_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AutofillDriver_DidFillAutofillFormData_Params;
      break;
      case kAutofillDriver_DidPreviewAutofillFormData_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AutofillDriver_DidPreviewAutofillFormData_Params;
      break;
      case kAutofillDriver_DidEndTextFieldEditing_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AutofillDriver_DidEndTextFieldEditing_Params;
      break;
      case kAutofillDriver_SetDataList_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AutofillDriver_SetDataList_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateAutofillDriverResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var AutofillDriver = {
    name: 'autofill::mojom::AutofillDriver',
    proxyClass: AutofillDriverProxy,
    stubClass: AutofillDriverStub,
    validateRequest: validateAutofillDriverRequest,
    validateResponse: null,
  };
  AutofillDriverStub.prototype.validator = validateAutofillDriverRequest;
  AutofillDriverProxy.prototype.validator = null;
  var kPasswordManagerDriver_PasswordAutofillAgentConstructed_Name = 0;
  var kPasswordManagerDriver_PasswordFormsParsed_Name = 1;
  var kPasswordManagerDriver_PasswordFormsRendered_Name = 2;
  var kPasswordManagerDriver_PasswordFormSubmitted_Name = 3;
  var kPasswordManagerDriver_InPageNavigation_Name = 4;
  var kPasswordManagerDriver_RecordSavePasswordProgress_Name = 5;
  var kPasswordManagerDriver_ShowPasswordSuggestions_Name = 6;
  var kPasswordManagerDriver_PresaveGeneratedPassword_Name = 7;
  var kPasswordManagerDriver_PasswordNoLongerGenerated_Name = 8;
  var kPasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Name = 9;

  function PasswordManagerDriverProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  PasswordManagerDriverProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  PasswordManagerDriverProxy.prototype.passwordAutofillAgentConstructed = function() {
    var params = new PasswordManagerDriver_PasswordAutofillAgentConstructed_Params();
    var builder = new codec.MessageBuilder(
        kPasswordManagerDriver_PasswordAutofillAgentConstructed_Name,
        codec.align(PasswordManagerDriver_PasswordAutofillAgentConstructed_Params.encodedSize));
    builder.encodeStruct(PasswordManagerDriver_PasswordAutofillAgentConstructed_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PasswordManagerDriverProxy.prototype.passwordFormsParsed = function(forms) {
    var params = new PasswordManagerDriver_PasswordFormsParsed_Params();
    params.forms = forms;
    var builder = new codec.MessageBuilder(
        kPasswordManagerDriver_PasswordFormsParsed_Name,
        codec.align(PasswordManagerDriver_PasswordFormsParsed_Params.encodedSize));
    builder.encodeStruct(PasswordManagerDriver_PasswordFormsParsed_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PasswordManagerDriverProxy.prototype.passwordFormsRendered = function(visible_forms, did_stop_loading) {
    var params = new PasswordManagerDriver_PasswordFormsRendered_Params();
    params.visible_forms = visible_forms;
    params.did_stop_loading = did_stop_loading;
    var builder = new codec.MessageBuilder(
        kPasswordManagerDriver_PasswordFormsRendered_Name,
        codec.align(PasswordManagerDriver_PasswordFormsRendered_Params.encodedSize));
    builder.encodeStruct(PasswordManagerDriver_PasswordFormsRendered_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PasswordManagerDriverProxy.prototype.passwordFormSubmitted = function(password_form) {
    var params = new PasswordManagerDriver_PasswordFormSubmitted_Params();
    params.password_form = password_form;
    var builder = new codec.MessageBuilder(
        kPasswordManagerDriver_PasswordFormSubmitted_Name,
        codec.align(PasswordManagerDriver_PasswordFormSubmitted_Params.encodedSize));
    builder.encodeStruct(PasswordManagerDriver_PasswordFormSubmitted_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PasswordManagerDriverProxy.prototype.inPageNavigation = function(password_form) {
    var params = new PasswordManagerDriver_InPageNavigation_Params();
    params.password_form = password_form;
    var builder = new codec.MessageBuilder(
        kPasswordManagerDriver_InPageNavigation_Name,
        codec.align(PasswordManagerDriver_InPageNavigation_Params.encodedSize));
    builder.encodeStruct(PasswordManagerDriver_InPageNavigation_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PasswordManagerDriverProxy.prototype.recordSavePasswordProgress = function(log) {
    var params = new PasswordManagerDriver_RecordSavePasswordProgress_Params();
    params.log = log;
    var builder = new codec.MessageBuilder(
        kPasswordManagerDriver_RecordSavePasswordProgress_Name,
        codec.align(PasswordManagerDriver_RecordSavePasswordProgress_Params.encodedSize));
    builder.encodeStruct(PasswordManagerDriver_RecordSavePasswordProgress_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PasswordManagerDriverProxy.prototype.showPasswordSuggestions = function(key, text_direction, typed_username, options, bounds) {
    var params = new PasswordManagerDriver_ShowPasswordSuggestions_Params();
    params.key = key;
    params.text_direction = text_direction;
    params.typed_username = typed_username;
    params.options = options;
    params.bounds = bounds;
    var builder = new codec.MessageBuilder(
        kPasswordManagerDriver_ShowPasswordSuggestions_Name,
        codec.align(PasswordManagerDriver_ShowPasswordSuggestions_Params.encodedSize));
    builder.encodeStruct(PasswordManagerDriver_ShowPasswordSuggestions_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PasswordManagerDriverProxy.prototype.presaveGeneratedPassword = function(password_form) {
    var params = new PasswordManagerDriver_PresaveGeneratedPassword_Params();
    params.password_form = password_form;
    var builder = new codec.MessageBuilder(
        kPasswordManagerDriver_PresaveGeneratedPassword_Name,
        codec.align(PasswordManagerDriver_PresaveGeneratedPassword_Params.encodedSize));
    builder.encodeStruct(PasswordManagerDriver_PresaveGeneratedPassword_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PasswordManagerDriverProxy.prototype.passwordNoLongerGenerated = function(password_form) {
    var params = new PasswordManagerDriver_PasswordNoLongerGenerated_Params();
    params.password_form = password_form;
    var builder = new codec.MessageBuilder(
        kPasswordManagerDriver_PasswordNoLongerGenerated_Name,
        codec.align(PasswordManagerDriver_PasswordNoLongerGenerated_Params.encodedSize));
    builder.encodeStruct(PasswordManagerDriver_PasswordNoLongerGenerated_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PasswordManagerDriverProxy.prototype.saveGenerationFieldDetectedByClassifier = function(password_form, generation_field) {
    var params = new PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params();
    params.password_form = password_form;
    params.generation_field = generation_field;
    var builder = new codec.MessageBuilder(
        kPasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Name,
        codec.align(PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params.encodedSize));
    builder.encodeStruct(PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function PasswordManagerDriverStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  PasswordManagerDriverStub.prototype = Object.create(bindings.StubBase.prototype);
  PasswordManagerDriverStub.prototype.passwordAutofillAgentConstructed = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.passwordAutofillAgentConstructed && bindings.StubBindings(this).delegate.passwordAutofillAgentConstructed();
  }
  PasswordManagerDriverStub.prototype.passwordFormsParsed = function(forms) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.passwordFormsParsed && bindings.StubBindings(this).delegate.passwordFormsParsed(forms);
  }
  PasswordManagerDriverStub.prototype.passwordFormsRendered = function(visible_forms, did_stop_loading) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.passwordFormsRendered && bindings.StubBindings(this).delegate.passwordFormsRendered(visible_forms, did_stop_loading);
  }
  PasswordManagerDriverStub.prototype.passwordFormSubmitted = function(password_form) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.passwordFormSubmitted && bindings.StubBindings(this).delegate.passwordFormSubmitted(password_form);
  }
  PasswordManagerDriverStub.prototype.inPageNavigation = function(password_form) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.inPageNavigation && bindings.StubBindings(this).delegate.inPageNavigation(password_form);
  }
  PasswordManagerDriverStub.prototype.recordSavePasswordProgress = function(log) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.recordSavePasswordProgress && bindings.StubBindings(this).delegate.recordSavePasswordProgress(log);
  }
  PasswordManagerDriverStub.prototype.showPasswordSuggestions = function(key, text_direction, typed_username, options, bounds) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.showPasswordSuggestions && bindings.StubBindings(this).delegate.showPasswordSuggestions(key, text_direction, typed_username, options, bounds);
  }
  PasswordManagerDriverStub.prototype.presaveGeneratedPassword = function(password_form) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.presaveGeneratedPassword && bindings.StubBindings(this).delegate.presaveGeneratedPassword(password_form);
  }
  PasswordManagerDriverStub.prototype.passwordNoLongerGenerated = function(password_form) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.passwordNoLongerGenerated && bindings.StubBindings(this).delegate.passwordNoLongerGenerated(password_form);
  }
  PasswordManagerDriverStub.prototype.saveGenerationFieldDetectedByClassifier = function(password_form, generation_field) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.saveGenerationFieldDetectedByClassifier && bindings.StubBindings(this).delegate.saveGenerationFieldDetectedByClassifier(password_form, generation_field);
  }

  PasswordManagerDriverStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPasswordManagerDriver_PasswordAutofillAgentConstructed_Name:
      var params = reader.decodeStruct(PasswordManagerDriver_PasswordAutofillAgentConstructed_Params);
      this.passwordAutofillAgentConstructed();
      return true;
    case kPasswordManagerDriver_PasswordFormsParsed_Name:
      var params = reader.decodeStruct(PasswordManagerDriver_PasswordFormsParsed_Params);
      this.passwordFormsParsed(params.forms);
      return true;
    case kPasswordManagerDriver_PasswordFormsRendered_Name:
      var params = reader.decodeStruct(PasswordManagerDriver_PasswordFormsRendered_Params);
      this.passwordFormsRendered(params.visible_forms, params.did_stop_loading);
      return true;
    case kPasswordManagerDriver_PasswordFormSubmitted_Name:
      var params = reader.decodeStruct(PasswordManagerDriver_PasswordFormSubmitted_Params);
      this.passwordFormSubmitted(params.password_form);
      return true;
    case kPasswordManagerDriver_InPageNavigation_Name:
      var params = reader.decodeStruct(PasswordManagerDriver_InPageNavigation_Params);
      this.inPageNavigation(params.password_form);
      return true;
    case kPasswordManagerDriver_RecordSavePasswordProgress_Name:
      var params = reader.decodeStruct(PasswordManagerDriver_RecordSavePasswordProgress_Params);
      this.recordSavePasswordProgress(params.log);
      return true;
    case kPasswordManagerDriver_ShowPasswordSuggestions_Name:
      var params = reader.decodeStruct(PasswordManagerDriver_ShowPasswordSuggestions_Params);
      this.showPasswordSuggestions(params.key, params.text_direction, params.typed_username, params.options, params.bounds);
      return true;
    case kPasswordManagerDriver_PresaveGeneratedPassword_Name:
      var params = reader.decodeStruct(PasswordManagerDriver_PresaveGeneratedPassword_Params);
      this.presaveGeneratedPassword(params.password_form);
      return true;
    case kPasswordManagerDriver_PasswordNoLongerGenerated_Name:
      var params = reader.decodeStruct(PasswordManagerDriver_PasswordNoLongerGenerated_Params);
      this.passwordNoLongerGenerated(params.password_form);
      return true;
    case kPasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Name:
      var params = reader.decodeStruct(PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params);
      this.saveGenerationFieldDetectedByClassifier(params.password_form, params.generation_field);
      return true;
    default:
      return false;
    }
  };

  PasswordManagerDriverStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validatePasswordManagerDriverRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kPasswordManagerDriver_PasswordAutofillAgentConstructed_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PasswordManagerDriver_PasswordAutofillAgentConstructed_Params;
      break;
      case kPasswordManagerDriver_PasswordFormsParsed_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PasswordManagerDriver_PasswordFormsParsed_Params;
      break;
      case kPasswordManagerDriver_PasswordFormsRendered_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PasswordManagerDriver_PasswordFormsRendered_Params;
      break;
      case kPasswordManagerDriver_PasswordFormSubmitted_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PasswordManagerDriver_PasswordFormSubmitted_Params;
      break;
      case kPasswordManagerDriver_InPageNavigation_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PasswordManagerDriver_InPageNavigation_Params;
      break;
      case kPasswordManagerDriver_RecordSavePasswordProgress_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PasswordManagerDriver_RecordSavePasswordProgress_Params;
      break;
      case kPasswordManagerDriver_ShowPasswordSuggestions_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PasswordManagerDriver_ShowPasswordSuggestions_Params;
      break;
      case kPasswordManagerDriver_PresaveGeneratedPassword_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PasswordManagerDriver_PresaveGeneratedPassword_Params;
      break;
      case kPasswordManagerDriver_PasswordNoLongerGenerated_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PasswordManagerDriver_PasswordNoLongerGenerated_Params;
      break;
      case kPasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validatePasswordManagerDriverResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var PasswordManagerDriver = {
    name: 'autofill::mojom::PasswordManagerDriver',
    proxyClass: PasswordManagerDriverProxy,
    stubClass: PasswordManagerDriverStub,
    validateRequest: validatePasswordManagerDriverRequest,
    validateResponse: null,
  };
  PasswordManagerDriverStub.prototype.validator = validatePasswordManagerDriverRequest;
  PasswordManagerDriverProxy.prototype.validator = null;

  var exports = {};
  exports.AutofillDriver = AutofillDriver;
  exports.PasswordManagerDriver = PasswordManagerDriver;

  return exports;
});
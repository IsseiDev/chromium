// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("services/catalog/public/interfaces/catalog.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {

  function Entry(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Entry.prototype.initDefaults_ = function() {
    this.name = null;
    this.display_name = null;
  };
  Entry.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Entry.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Entry.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Entry.name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Entry.display_name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Entry.encodedSize = codec.kStructHeaderSize + 16;

  Entry.decode = function(decoder) {
    var packed;
    var val = new Entry();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.name = decoder.decodeStruct(codec.String);
    val.display_name = decoder.decodeStruct(codec.String);
    return val;
  };

  Entry.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Entry.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.name);
    encoder.encodeStruct(codec.String, val.display_name);
  };
  function Catalog_GetEntries_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Catalog_GetEntries_Params.prototype.initDefaults_ = function() {
    this.names = null;
  };
  Catalog_GetEntries_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Catalog_GetEntries_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Catalog_GetEntries_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Catalog_GetEntries_Params.names
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, codec.String, true, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Catalog_GetEntries_Params.encodedSize = codec.kStructHeaderSize + 8;

  Catalog_GetEntries_Params.decode = function(decoder) {
    var packed;
    var val = new Catalog_GetEntries_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.names = decoder.decodeArrayPointer(codec.String);
    return val;
  };

  Catalog_GetEntries_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Catalog_GetEntries_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.String, val.names);
  };
  function Catalog_GetEntries_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Catalog_GetEntries_ResponseParams.prototype.initDefaults_ = function() {
    this.entries = null;
  };
  Catalog_GetEntries_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Catalog_GetEntries_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Catalog_GetEntries_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Catalog_GetEntries_ResponseParams.entries
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(Entry), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Catalog_GetEntries_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Catalog_GetEntries_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Catalog_GetEntries_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.entries = decoder.decodeArrayPointer(new codec.PointerTo(Entry));
    return val;
  };

  Catalog_GetEntries_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Catalog_GetEntries_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(Entry), val.entries);
  };
  function Catalog_GetEntriesProvidingClass_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Catalog_GetEntriesProvidingClass_Params.prototype.initDefaults_ = function() {
    this.clazz = null;
  };
  Catalog_GetEntriesProvidingClass_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Catalog_GetEntriesProvidingClass_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Catalog_GetEntriesProvidingClass_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Catalog_GetEntriesProvidingClass_Params.clazz
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Catalog_GetEntriesProvidingClass_Params.encodedSize = codec.kStructHeaderSize + 8;

  Catalog_GetEntriesProvidingClass_Params.decode = function(decoder) {
    var packed;
    var val = new Catalog_GetEntriesProvidingClass_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.clazz = decoder.decodeStruct(codec.String);
    return val;
  };

  Catalog_GetEntriesProvidingClass_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Catalog_GetEntriesProvidingClass_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.clazz);
  };
  function Catalog_GetEntriesProvidingClass_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Catalog_GetEntriesProvidingClass_ResponseParams.prototype.initDefaults_ = function() {
    this.entries = null;
  };
  Catalog_GetEntriesProvidingClass_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Catalog_GetEntriesProvidingClass_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Catalog_GetEntriesProvidingClass_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Catalog_GetEntriesProvidingClass_ResponseParams.entries
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(Entry), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Catalog_GetEntriesProvidingClass_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Catalog_GetEntriesProvidingClass_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Catalog_GetEntriesProvidingClass_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.entries = decoder.decodeArrayPointer(new codec.PointerTo(Entry));
    return val;
  };

  Catalog_GetEntriesProvidingClass_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Catalog_GetEntriesProvidingClass_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(Entry), val.entries);
  };
  function Catalog_GetEntriesConsumingMIMEType_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Catalog_GetEntriesConsumingMIMEType_Params.prototype.initDefaults_ = function() {
    this.mime_type = null;
  };
  Catalog_GetEntriesConsumingMIMEType_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Catalog_GetEntriesConsumingMIMEType_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Catalog_GetEntriesConsumingMIMEType_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Catalog_GetEntriesConsumingMIMEType_Params.mime_type
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Catalog_GetEntriesConsumingMIMEType_Params.encodedSize = codec.kStructHeaderSize + 8;

  Catalog_GetEntriesConsumingMIMEType_Params.decode = function(decoder) {
    var packed;
    var val = new Catalog_GetEntriesConsumingMIMEType_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.mime_type = decoder.decodeStruct(codec.String);
    return val;
  };

  Catalog_GetEntriesConsumingMIMEType_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Catalog_GetEntriesConsumingMIMEType_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.mime_type);
  };
  function Catalog_GetEntriesConsumingMIMEType_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Catalog_GetEntriesConsumingMIMEType_ResponseParams.prototype.initDefaults_ = function() {
    this.entries = null;
  };
  Catalog_GetEntriesConsumingMIMEType_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Catalog_GetEntriesConsumingMIMEType_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Catalog_GetEntriesConsumingMIMEType_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Catalog_GetEntriesConsumingMIMEType_ResponseParams.entries
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(Entry), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Catalog_GetEntriesConsumingMIMEType_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Catalog_GetEntriesConsumingMIMEType_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Catalog_GetEntriesConsumingMIMEType_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.entries = decoder.decodeArrayPointer(new codec.PointerTo(Entry));
    return val;
  };

  Catalog_GetEntriesConsumingMIMEType_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Catalog_GetEntriesConsumingMIMEType_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(Entry), val.entries);
  };
  function Catalog_GetEntriesSupportingScheme_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Catalog_GetEntriesSupportingScheme_Params.prototype.initDefaults_ = function() {
    this.protocol_scheme = null;
  };
  Catalog_GetEntriesSupportingScheme_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Catalog_GetEntriesSupportingScheme_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Catalog_GetEntriesSupportingScheme_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Catalog_GetEntriesSupportingScheme_Params.protocol_scheme
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Catalog_GetEntriesSupportingScheme_Params.encodedSize = codec.kStructHeaderSize + 8;

  Catalog_GetEntriesSupportingScheme_Params.decode = function(decoder) {
    var packed;
    var val = new Catalog_GetEntriesSupportingScheme_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.protocol_scheme = decoder.decodeStruct(codec.String);
    return val;
  };

  Catalog_GetEntriesSupportingScheme_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Catalog_GetEntriesSupportingScheme_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.protocol_scheme);
  };
  function Catalog_GetEntriesSupportingScheme_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Catalog_GetEntriesSupportingScheme_ResponseParams.prototype.initDefaults_ = function() {
    this.entries = null;
  };
  Catalog_GetEntriesSupportingScheme_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Catalog_GetEntriesSupportingScheme_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Catalog_GetEntriesSupportingScheme_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Catalog_GetEntriesSupportingScheme_ResponseParams.entries
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(Entry), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Catalog_GetEntriesSupportingScheme_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Catalog_GetEntriesSupportingScheme_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Catalog_GetEntriesSupportingScheme_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.entries = decoder.decodeArrayPointer(new codec.PointerTo(Entry));
    return val;
  };

  Catalog_GetEntriesSupportingScheme_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Catalog_GetEntriesSupportingScheme_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(Entry), val.entries);
  };
  var kCatalog_GetEntries_Name = 0;
  var kCatalog_GetEntriesProvidingClass_Name = 1;
  var kCatalog_GetEntriesConsumingMIMEType_Name = 2;
  var kCatalog_GetEntriesSupportingScheme_Name = 3;

  function CatalogProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  CatalogProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  CatalogProxy.prototype.getEntries = function(names) {
    var params = new Catalog_GetEntries_Params();
    params.names = names;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kCatalog_GetEntries_Name,
          codec.align(Catalog_GetEntries_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Catalog_GetEntries_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Catalog_GetEntries_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  CatalogProxy.prototype.getEntriesProvidingClass = function(clazz) {
    var params = new Catalog_GetEntriesProvidingClass_Params();
    params.clazz = clazz;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kCatalog_GetEntriesProvidingClass_Name,
          codec.align(Catalog_GetEntriesProvidingClass_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Catalog_GetEntriesProvidingClass_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Catalog_GetEntriesProvidingClass_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  CatalogProxy.prototype.getEntriesConsumingMIMEType = function(mime_type) {
    var params = new Catalog_GetEntriesConsumingMIMEType_Params();
    params.mime_type = mime_type;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kCatalog_GetEntriesConsumingMIMEType_Name,
          codec.align(Catalog_GetEntriesConsumingMIMEType_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Catalog_GetEntriesConsumingMIMEType_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Catalog_GetEntriesConsumingMIMEType_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  CatalogProxy.prototype.getEntriesSupportingScheme = function(protocol_scheme) {
    var params = new Catalog_GetEntriesSupportingScheme_Params();
    params.protocol_scheme = protocol_scheme;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kCatalog_GetEntriesSupportingScheme_Name,
          codec.align(Catalog_GetEntriesSupportingScheme_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Catalog_GetEntriesSupportingScheme_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Catalog_GetEntriesSupportingScheme_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function CatalogStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  CatalogStub.prototype = Object.create(bindings.StubBase.prototype);
  CatalogStub.prototype.getEntries = function(names) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.getEntries && bindings.StubBindings(this).delegate.getEntries(names);
  }
  CatalogStub.prototype.getEntriesProvidingClass = function(clazz) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.getEntriesProvidingClass && bindings.StubBindings(this).delegate.getEntriesProvidingClass(clazz);
  }
  CatalogStub.prototype.getEntriesConsumingMIMEType = function(mime_type) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.getEntriesConsumingMIMEType && bindings.StubBindings(this).delegate.getEntriesConsumingMIMEType(mime_type);
  }
  CatalogStub.prototype.getEntriesSupportingScheme = function(protocol_scheme) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.getEntriesSupportingScheme && bindings.StubBindings(this).delegate.getEntriesSupportingScheme(protocol_scheme);
  }

  CatalogStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  CatalogStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kCatalog_GetEntries_Name:
      var params = reader.decodeStruct(Catalog_GetEntries_Params);
      return this.getEntries(params.names).then(function(response) {
        var responseParams =
            new Catalog_GetEntries_ResponseParams();
        responseParams.entries = response.entries;
        var builder = new codec.MessageWithRequestIDBuilder(
            kCatalog_GetEntries_Name,
            codec.align(Catalog_GetEntries_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Catalog_GetEntries_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kCatalog_GetEntriesProvidingClass_Name:
      var params = reader.decodeStruct(Catalog_GetEntriesProvidingClass_Params);
      return this.getEntriesProvidingClass(params.clazz).then(function(response) {
        var responseParams =
            new Catalog_GetEntriesProvidingClass_ResponseParams();
        responseParams.entries = response.entries;
        var builder = new codec.MessageWithRequestIDBuilder(
            kCatalog_GetEntriesProvidingClass_Name,
            codec.align(Catalog_GetEntriesProvidingClass_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Catalog_GetEntriesProvidingClass_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kCatalog_GetEntriesConsumingMIMEType_Name:
      var params = reader.decodeStruct(Catalog_GetEntriesConsumingMIMEType_Params);
      return this.getEntriesConsumingMIMEType(params.mime_type).then(function(response) {
        var responseParams =
            new Catalog_GetEntriesConsumingMIMEType_ResponseParams();
        responseParams.entries = response.entries;
        var builder = new codec.MessageWithRequestIDBuilder(
            kCatalog_GetEntriesConsumingMIMEType_Name,
            codec.align(Catalog_GetEntriesConsumingMIMEType_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Catalog_GetEntriesConsumingMIMEType_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kCatalog_GetEntriesSupportingScheme_Name:
      var params = reader.decodeStruct(Catalog_GetEntriesSupportingScheme_Params);
      return this.getEntriesSupportingScheme(params.protocol_scheme).then(function(response) {
        var responseParams =
            new Catalog_GetEntriesSupportingScheme_ResponseParams();
        responseParams.entries = response.entries;
        var builder = new codec.MessageWithRequestIDBuilder(
            kCatalog_GetEntriesSupportingScheme_Name,
            codec.align(Catalog_GetEntriesSupportingScheme_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Catalog_GetEntriesSupportingScheme_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateCatalogRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kCatalog_GetEntries_Name:
        if (message.expectsResponse())
          paramsClass = Catalog_GetEntries_Params;
      break;
      case kCatalog_GetEntriesProvidingClass_Name:
        if (message.expectsResponse())
          paramsClass = Catalog_GetEntriesProvidingClass_Params;
      break;
      case kCatalog_GetEntriesConsumingMIMEType_Name:
        if (message.expectsResponse())
          paramsClass = Catalog_GetEntriesConsumingMIMEType_Params;
      break;
      case kCatalog_GetEntriesSupportingScheme_Name:
        if (message.expectsResponse())
          paramsClass = Catalog_GetEntriesSupportingScheme_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateCatalogResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kCatalog_GetEntries_Name:
        if (message.isResponse())
          paramsClass = Catalog_GetEntries_ResponseParams;
        break;
      case kCatalog_GetEntriesProvidingClass_Name:
        if (message.isResponse())
          paramsClass = Catalog_GetEntriesProvidingClass_ResponseParams;
        break;
      case kCatalog_GetEntriesConsumingMIMEType_Name:
        if (message.isResponse())
          paramsClass = Catalog_GetEntriesConsumingMIMEType_ResponseParams;
        break;
      case kCatalog_GetEntriesSupportingScheme_Name:
        if (message.isResponse())
          paramsClass = Catalog_GetEntriesSupportingScheme_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var Catalog = {
    name: 'catalog::mojom::Catalog',
    proxyClass: CatalogProxy,
    stubClass: CatalogStub,
    validateRequest: validateCatalogRequest,
    validateResponse: validateCatalogResponse,
  };
  CatalogStub.prototype.validator = validateCatalogRequest;
  CatalogProxy.prototype.validator = validateCatalogResponse;

  var exports = {};
  exports.Entry = Entry;
  exports.Catalog = Catalog;

  return exports;
});
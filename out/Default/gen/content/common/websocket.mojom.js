// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("content/common/websocket.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "url/mojo/origin.mojom",
    "url/mojo/url.mojom",
], function(bindings, codec, connection, core, validator, origin$, url$) {
  var WebSocketMessageType = {};
  WebSocketMessageType.CONTINUATION = 0;
  WebSocketMessageType.TEXT = WebSocketMessageType.CONTINUATION + 1;
  WebSocketMessageType.BINARY = WebSocketMessageType.TEXT + 1;
  WebSocketMessageType.LAST = WebSocketMessageType.BINARY;

  function HttpHeader(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  HttpHeader.prototype.initDefaults_ = function() {
    this.name = null;
    this.value = null;
  };
  HttpHeader.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  HttpHeader.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, HttpHeader.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate HttpHeader.name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate HttpHeader.value
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  HttpHeader.encodedSize = codec.kStructHeaderSize + 16;

  HttpHeader.decode = function(decoder) {
    var packed;
    var val = new HttpHeader();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.name = decoder.decodeStruct(codec.String);
    val.value = decoder.decodeStruct(codec.String);
    return val;
  };

  HttpHeader.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(HttpHeader.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.name);
    encoder.encodeStruct(codec.String, val.value);
  };
  function WebSocketHandshakeRequest(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebSocketHandshakeRequest.prototype.initDefaults_ = function() {
    this.url = null;
    this.headers = null;
    this.headers_text = null;
  };
  WebSocketHandshakeRequest.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WebSocketHandshakeRequest.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WebSocketHandshakeRequest.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WebSocketHandshakeRequest.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WebSocketHandshakeRequest.headers
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(HttpHeader), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WebSocketHandshakeRequest.headers_text
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebSocketHandshakeRequest.encodedSize = codec.kStructHeaderSize + 24;

  WebSocketHandshakeRequest.decode = function(decoder) {
    var packed;
    var val = new WebSocketHandshakeRequest();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.url = decoder.decodeStructPointer(url$.Url);
    val.headers = decoder.decodeArrayPointer(new codec.PointerTo(HttpHeader));
    val.headers_text = decoder.decodeStruct(codec.String);
    return val;
  };

  WebSocketHandshakeRequest.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebSocketHandshakeRequest.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.url);
    encoder.encodeArrayPointer(new codec.PointerTo(HttpHeader), val.headers);
    encoder.encodeStruct(codec.String, val.headers_text);
  };
  function WebSocketHandshakeResponse(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebSocketHandshakeResponse.prototype.initDefaults_ = function() {
    this.url = null;
    this.status_code = 0;
    this.status_text = null;
    this.headers = null;
    this.headers_text = null;
  };
  WebSocketHandshakeResponse.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WebSocketHandshakeResponse.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WebSocketHandshakeResponse.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WebSocketHandshakeResponse.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate WebSocketHandshakeResponse.status_text
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WebSocketHandshakeResponse.headers
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 24, 8, new codec.PointerTo(HttpHeader), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WebSocketHandshakeResponse.headers_text
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 32, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebSocketHandshakeResponse.encodedSize = codec.kStructHeaderSize + 40;

  WebSocketHandshakeResponse.decode = function(decoder) {
    var packed;
    var val = new WebSocketHandshakeResponse();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.url = decoder.decodeStructPointer(url$.Url);
    val.status_code = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.status_text = decoder.decodeStruct(codec.String);
    val.headers = decoder.decodeArrayPointer(new codec.PointerTo(HttpHeader));
    val.headers_text = decoder.decodeStruct(codec.String);
    return val;
  };

  WebSocketHandshakeResponse.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebSocketHandshakeResponse.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.url);
    encoder.encodeStruct(codec.Int32, val.status_code);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.status_text);
    encoder.encodeArrayPointer(new codec.PointerTo(HttpHeader), val.headers);
    encoder.encodeStruct(codec.String, val.headers_text);
  };
  function WebSocketClient_OnFailChannel_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebSocketClient_OnFailChannel_Params.prototype.initDefaults_ = function() {
    this.reason = null;
  };
  WebSocketClient_OnFailChannel_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WebSocketClient_OnFailChannel_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WebSocketClient_OnFailChannel_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WebSocketClient_OnFailChannel_Params.reason
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebSocketClient_OnFailChannel_Params.encodedSize = codec.kStructHeaderSize + 8;

  WebSocketClient_OnFailChannel_Params.decode = function(decoder) {
    var packed;
    var val = new WebSocketClient_OnFailChannel_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.reason = decoder.decodeStruct(codec.String);
    return val;
  };

  WebSocketClient_OnFailChannel_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebSocketClient_OnFailChannel_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.reason);
  };
  function WebSocketClient_OnStartOpeningHandshake_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebSocketClient_OnStartOpeningHandshake_Params.prototype.initDefaults_ = function() {
    this.request = null;
  };
  WebSocketClient_OnStartOpeningHandshake_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WebSocketClient_OnStartOpeningHandshake_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WebSocketClient_OnStartOpeningHandshake_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WebSocketClient_OnStartOpeningHandshake_Params.request
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, WebSocketHandshakeRequest, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebSocketClient_OnStartOpeningHandshake_Params.encodedSize = codec.kStructHeaderSize + 8;

  WebSocketClient_OnStartOpeningHandshake_Params.decode = function(decoder) {
    var packed;
    var val = new WebSocketClient_OnStartOpeningHandshake_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.request = decoder.decodeStructPointer(WebSocketHandshakeRequest);
    return val;
  };

  WebSocketClient_OnStartOpeningHandshake_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebSocketClient_OnStartOpeningHandshake_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(WebSocketHandshakeRequest, val.request);
  };
  function WebSocketClient_OnFinishOpeningHandshake_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebSocketClient_OnFinishOpeningHandshake_Params.prototype.initDefaults_ = function() {
    this.response = null;
  };
  WebSocketClient_OnFinishOpeningHandshake_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WebSocketClient_OnFinishOpeningHandshake_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WebSocketClient_OnFinishOpeningHandshake_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WebSocketClient_OnFinishOpeningHandshake_Params.response
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, WebSocketHandshakeResponse, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebSocketClient_OnFinishOpeningHandshake_Params.encodedSize = codec.kStructHeaderSize + 8;

  WebSocketClient_OnFinishOpeningHandshake_Params.decode = function(decoder) {
    var packed;
    var val = new WebSocketClient_OnFinishOpeningHandshake_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.response = decoder.decodeStructPointer(WebSocketHandshakeResponse);
    return val;
  };

  WebSocketClient_OnFinishOpeningHandshake_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebSocketClient_OnFinishOpeningHandshake_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(WebSocketHandshakeResponse, val.response);
  };
  function WebSocketClient_OnAddChannelResponse_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebSocketClient_OnAddChannelResponse_Params.prototype.initDefaults_ = function() {
    this.selected_protocol = null;
    this.extensions = null;
  };
  WebSocketClient_OnAddChannelResponse_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WebSocketClient_OnAddChannelResponse_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WebSocketClient_OnAddChannelResponse_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WebSocketClient_OnAddChannelResponse_Params.selected_protocol
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WebSocketClient_OnAddChannelResponse_Params.extensions
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebSocketClient_OnAddChannelResponse_Params.encodedSize = codec.kStructHeaderSize + 16;

  WebSocketClient_OnAddChannelResponse_Params.decode = function(decoder) {
    var packed;
    var val = new WebSocketClient_OnAddChannelResponse_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.selected_protocol = decoder.decodeStruct(codec.String);
    val.extensions = decoder.decodeStruct(codec.String);
    return val;
  };

  WebSocketClient_OnAddChannelResponse_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebSocketClient_OnAddChannelResponse_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.selected_protocol);
    encoder.encodeStruct(codec.String, val.extensions);
  };
  function WebSocketClient_OnDataFrame_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebSocketClient_OnDataFrame_Params.prototype.initDefaults_ = function() {
    this.fin = false;
    this.type = 0;
    this.data = null;
  };
  WebSocketClient_OnDataFrame_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WebSocketClient_OnDataFrame_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WebSocketClient_OnDataFrame_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



    
    // validate WebSocketClient_OnDataFrame_Params.data
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebSocketClient_OnDataFrame_Params.encodedSize = codec.kStructHeaderSize + 16;

  WebSocketClient_OnDataFrame_Params.decode = function(decoder) {
    var packed;
    var val = new WebSocketClient_OnDataFrame_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.fin = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.type = decoder.decodeStruct(codec.Int32);
    val.data = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  WebSocketClient_OnDataFrame_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebSocketClient_OnDataFrame_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint8, val.fin);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.type);
    encoder.encodeArrayPointer(codec.Uint8, val.data);
  };
  function WebSocketClient_OnFlowControl_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebSocketClient_OnFlowControl_Params.prototype.initDefaults_ = function() {
    this.quota = 0;
  };
  WebSocketClient_OnFlowControl_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WebSocketClient_OnFlowControl_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WebSocketClient_OnFlowControl_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  WebSocketClient_OnFlowControl_Params.encodedSize = codec.kStructHeaderSize + 8;

  WebSocketClient_OnFlowControl_Params.decode = function(decoder) {
    var packed;
    var val = new WebSocketClient_OnFlowControl_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.quota = decoder.decodeStruct(codec.Int64);
    return val;
  };

  WebSocketClient_OnFlowControl_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebSocketClient_OnFlowControl_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.quota);
  };
  function WebSocketClient_OnDropChannel_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebSocketClient_OnDropChannel_Params.prototype.initDefaults_ = function() {
    this.was_clean = false;
    this.code = 0;
    this.reason = null;
  };
  WebSocketClient_OnDropChannel_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WebSocketClient_OnDropChannel_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WebSocketClient_OnDropChannel_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



    
    // validate WebSocketClient_OnDropChannel_Params.reason
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebSocketClient_OnDropChannel_Params.encodedSize = codec.kStructHeaderSize + 16;

  WebSocketClient_OnDropChannel_Params.decode = function(decoder) {
    var packed;
    var val = new WebSocketClient_OnDropChannel_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.was_clean = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    val.code = decoder.decodeStruct(codec.Uint16);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.reason = decoder.decodeStruct(codec.String);
    return val;
  };

  WebSocketClient_OnDropChannel_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebSocketClient_OnDropChannel_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint8, val.was_clean);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint16, val.code);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.reason);
  };
  function WebSocketClient_OnClosingHandshake_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebSocketClient_OnClosingHandshake_Params.prototype.initDefaults_ = function() {
  };
  WebSocketClient_OnClosingHandshake_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WebSocketClient_OnClosingHandshake_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WebSocketClient_OnClosingHandshake_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebSocketClient_OnClosingHandshake_Params.encodedSize = codec.kStructHeaderSize + 0;

  WebSocketClient_OnClosingHandshake_Params.decode = function(decoder) {
    var packed;
    var val = new WebSocketClient_OnClosingHandshake_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  WebSocketClient_OnClosingHandshake_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebSocketClient_OnClosingHandshake_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function WebSocket_AddChannelRequest_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebSocket_AddChannelRequest_Params.prototype.initDefaults_ = function() {
    this.url = null;
    this.requested_protocols = null;
    this.origin = null;
    this.first_party_for_cookies = null;
    this.user_agent_override = null;
    this.client = null;
  };
  WebSocket_AddChannelRequest_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WebSocket_AddChannelRequest_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WebSocket_AddChannelRequest_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WebSocket_AddChannelRequest_Params.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WebSocket_AddChannelRequest_Params.requested_protocols
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, codec.String, false, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WebSocket_AddChannelRequest_Params.origin
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, origin$.Origin, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WebSocket_AddChannelRequest_Params.first_party_for_cookies
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WebSocket_AddChannelRequest_Params.user_agent_override
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 32, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WebSocket_AddChannelRequest_Params.client
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 40, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebSocket_AddChannelRequest_Params.encodedSize = codec.kStructHeaderSize + 48;

  WebSocket_AddChannelRequest_Params.decode = function(decoder) {
    var packed;
    var val = new WebSocket_AddChannelRequest_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.url = decoder.decodeStructPointer(url$.Url);
    val.requested_protocols = decoder.decodeArrayPointer(codec.String);
    val.origin = decoder.decodeStructPointer(origin$.Origin);
    val.first_party_for_cookies = decoder.decodeStructPointer(url$.Url);
    val.user_agent_override = decoder.decodeStruct(codec.String);
    val.client = decoder.decodeStruct(codec.Interface);
    return val;
  };

  WebSocket_AddChannelRequest_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebSocket_AddChannelRequest_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.url);
    encoder.encodeArrayPointer(codec.String, val.requested_protocols);
    encoder.encodeStructPointer(origin$.Origin, val.origin);
    encoder.encodeStructPointer(url$.Url, val.first_party_for_cookies);
    encoder.encodeStruct(codec.String, val.user_agent_override);
    encoder.encodeStruct(codec.Interface, val.client);
  };
  function WebSocket_SendFrame_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebSocket_SendFrame_Params.prototype.initDefaults_ = function() {
    this.fin = false;
    this.type = 0;
    this.data = null;
  };
  WebSocket_SendFrame_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WebSocket_SendFrame_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WebSocket_SendFrame_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



    
    // validate WebSocket_SendFrame_Params.data
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebSocket_SendFrame_Params.encodedSize = codec.kStructHeaderSize + 16;

  WebSocket_SendFrame_Params.decode = function(decoder) {
    var packed;
    var val = new WebSocket_SendFrame_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.fin = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.type = decoder.decodeStruct(codec.Int32);
    val.data = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  WebSocket_SendFrame_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebSocket_SendFrame_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint8, val.fin);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.type);
    encoder.encodeArrayPointer(codec.Uint8, val.data);
  };
  function WebSocket_SendFlowControl_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebSocket_SendFlowControl_Params.prototype.initDefaults_ = function() {
    this.quota = 0;
  };
  WebSocket_SendFlowControl_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WebSocket_SendFlowControl_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WebSocket_SendFlowControl_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  WebSocket_SendFlowControl_Params.encodedSize = codec.kStructHeaderSize + 8;

  WebSocket_SendFlowControl_Params.decode = function(decoder) {
    var packed;
    var val = new WebSocket_SendFlowControl_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.quota = decoder.decodeStruct(codec.Int64);
    return val;
  };

  WebSocket_SendFlowControl_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebSocket_SendFlowControl_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.quota);
  };
  function WebSocket_StartClosingHandshake_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebSocket_StartClosingHandshake_Params.prototype.initDefaults_ = function() {
    this.code = 0;
    this.reason = null;
  };
  WebSocket_StartClosingHandshake_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WebSocket_StartClosingHandshake_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WebSocket_StartClosingHandshake_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate WebSocket_StartClosingHandshake_Params.reason
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebSocket_StartClosingHandshake_Params.encodedSize = codec.kStructHeaderSize + 16;

  WebSocket_StartClosingHandshake_Params.decode = function(decoder) {
    var packed;
    var val = new WebSocket_StartClosingHandshake_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.code = decoder.decodeStruct(codec.Uint16);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.reason = decoder.decodeStruct(codec.String);
    return val;
  };

  WebSocket_StartClosingHandshake_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebSocket_StartClosingHandshake_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint16, val.code);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.reason);
  };
  var kWebSocketClient_OnFailChannel_Name = 0;
  var kWebSocketClient_OnStartOpeningHandshake_Name = 1;
  var kWebSocketClient_OnFinishOpeningHandshake_Name = 2;
  var kWebSocketClient_OnAddChannelResponse_Name = 3;
  var kWebSocketClient_OnDataFrame_Name = 4;
  var kWebSocketClient_OnFlowControl_Name = 5;
  var kWebSocketClient_OnDropChannel_Name = 6;
  var kWebSocketClient_OnClosingHandshake_Name = 7;

  function WebSocketClientProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  WebSocketClientProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  WebSocketClientProxy.prototype.onFailChannel = function(reason) {
    var params = new WebSocketClient_OnFailChannel_Params();
    params.reason = reason;
    var builder = new codec.MessageBuilder(
        kWebSocketClient_OnFailChannel_Name,
        codec.align(WebSocketClient_OnFailChannel_Params.encodedSize));
    builder.encodeStruct(WebSocketClient_OnFailChannel_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WebSocketClientProxy.prototype.onStartOpeningHandshake = function(request) {
    var params = new WebSocketClient_OnStartOpeningHandshake_Params();
    params.request = request;
    var builder = new codec.MessageBuilder(
        kWebSocketClient_OnStartOpeningHandshake_Name,
        codec.align(WebSocketClient_OnStartOpeningHandshake_Params.encodedSize));
    builder.encodeStruct(WebSocketClient_OnStartOpeningHandshake_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WebSocketClientProxy.prototype.onFinishOpeningHandshake = function(response) {
    var params = new WebSocketClient_OnFinishOpeningHandshake_Params();
    params.response = response;
    var builder = new codec.MessageBuilder(
        kWebSocketClient_OnFinishOpeningHandshake_Name,
        codec.align(WebSocketClient_OnFinishOpeningHandshake_Params.encodedSize));
    builder.encodeStruct(WebSocketClient_OnFinishOpeningHandshake_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WebSocketClientProxy.prototype.onAddChannelResponse = function(selected_protocol, extensions) {
    var params = new WebSocketClient_OnAddChannelResponse_Params();
    params.selected_protocol = selected_protocol;
    params.extensions = extensions;
    var builder = new codec.MessageBuilder(
        kWebSocketClient_OnAddChannelResponse_Name,
        codec.align(WebSocketClient_OnAddChannelResponse_Params.encodedSize));
    builder.encodeStruct(WebSocketClient_OnAddChannelResponse_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WebSocketClientProxy.prototype.onDataFrame = function(fin, type, data) {
    var params = new WebSocketClient_OnDataFrame_Params();
    params.fin = fin;
    params.type = type;
    params.data = data;
    var builder = new codec.MessageBuilder(
        kWebSocketClient_OnDataFrame_Name,
        codec.align(WebSocketClient_OnDataFrame_Params.encodedSize));
    builder.encodeStruct(WebSocketClient_OnDataFrame_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WebSocketClientProxy.prototype.onFlowControl = function(quota) {
    var params = new WebSocketClient_OnFlowControl_Params();
    params.quota = quota;
    var builder = new codec.MessageBuilder(
        kWebSocketClient_OnFlowControl_Name,
        codec.align(WebSocketClient_OnFlowControl_Params.encodedSize));
    builder.encodeStruct(WebSocketClient_OnFlowControl_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WebSocketClientProxy.prototype.onDropChannel = function(was_clean, code, reason) {
    var params = new WebSocketClient_OnDropChannel_Params();
    params.was_clean = was_clean;
    params.code = code;
    params.reason = reason;
    var builder = new codec.MessageBuilder(
        kWebSocketClient_OnDropChannel_Name,
        codec.align(WebSocketClient_OnDropChannel_Params.encodedSize));
    builder.encodeStruct(WebSocketClient_OnDropChannel_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WebSocketClientProxy.prototype.onClosingHandshake = function() {
    var params = new WebSocketClient_OnClosingHandshake_Params();
    var builder = new codec.MessageBuilder(
        kWebSocketClient_OnClosingHandshake_Name,
        codec.align(WebSocketClient_OnClosingHandshake_Params.encodedSize));
    builder.encodeStruct(WebSocketClient_OnClosingHandshake_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function WebSocketClientStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  WebSocketClientStub.prototype = Object.create(bindings.StubBase.prototype);
  WebSocketClientStub.prototype.onFailChannel = function(reason) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onFailChannel && bindings.StubBindings(this).delegate.onFailChannel(reason);
  }
  WebSocketClientStub.prototype.onStartOpeningHandshake = function(request) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onStartOpeningHandshake && bindings.StubBindings(this).delegate.onStartOpeningHandshake(request);
  }
  WebSocketClientStub.prototype.onFinishOpeningHandshake = function(response) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onFinishOpeningHandshake && bindings.StubBindings(this).delegate.onFinishOpeningHandshake(response);
  }
  WebSocketClientStub.prototype.onAddChannelResponse = function(selected_protocol, extensions) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onAddChannelResponse && bindings.StubBindings(this).delegate.onAddChannelResponse(selected_protocol, extensions);
  }
  WebSocketClientStub.prototype.onDataFrame = function(fin, type, data) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onDataFrame && bindings.StubBindings(this).delegate.onDataFrame(fin, type, data);
  }
  WebSocketClientStub.prototype.onFlowControl = function(quota) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onFlowControl && bindings.StubBindings(this).delegate.onFlowControl(quota);
  }
  WebSocketClientStub.prototype.onDropChannel = function(was_clean, code, reason) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onDropChannel && bindings.StubBindings(this).delegate.onDropChannel(was_clean, code, reason);
  }
  WebSocketClientStub.prototype.onClosingHandshake = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onClosingHandshake && bindings.StubBindings(this).delegate.onClosingHandshake();
  }

  WebSocketClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kWebSocketClient_OnFailChannel_Name:
      var params = reader.decodeStruct(WebSocketClient_OnFailChannel_Params);
      this.onFailChannel(params.reason);
      return true;
    case kWebSocketClient_OnStartOpeningHandshake_Name:
      var params = reader.decodeStruct(WebSocketClient_OnStartOpeningHandshake_Params);
      this.onStartOpeningHandshake(params.request);
      return true;
    case kWebSocketClient_OnFinishOpeningHandshake_Name:
      var params = reader.decodeStruct(WebSocketClient_OnFinishOpeningHandshake_Params);
      this.onFinishOpeningHandshake(params.response);
      return true;
    case kWebSocketClient_OnAddChannelResponse_Name:
      var params = reader.decodeStruct(WebSocketClient_OnAddChannelResponse_Params);
      this.onAddChannelResponse(params.selected_protocol, params.extensions);
      return true;
    case kWebSocketClient_OnDataFrame_Name:
      var params = reader.decodeStruct(WebSocketClient_OnDataFrame_Params);
      this.onDataFrame(params.fin, params.type, params.data);
      return true;
    case kWebSocketClient_OnFlowControl_Name:
      var params = reader.decodeStruct(WebSocketClient_OnFlowControl_Params);
      this.onFlowControl(params.quota);
      return true;
    case kWebSocketClient_OnDropChannel_Name:
      var params = reader.decodeStruct(WebSocketClient_OnDropChannel_Params);
      this.onDropChannel(params.was_clean, params.code, params.reason);
      return true;
    case kWebSocketClient_OnClosingHandshake_Name:
      var params = reader.decodeStruct(WebSocketClient_OnClosingHandshake_Params);
      this.onClosingHandshake();
      return true;
    default:
      return false;
    }
  };

  WebSocketClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateWebSocketClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kWebSocketClient_OnFailChannel_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WebSocketClient_OnFailChannel_Params;
      break;
      case kWebSocketClient_OnStartOpeningHandshake_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WebSocketClient_OnStartOpeningHandshake_Params;
      break;
      case kWebSocketClient_OnFinishOpeningHandshake_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WebSocketClient_OnFinishOpeningHandshake_Params;
      break;
      case kWebSocketClient_OnAddChannelResponse_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WebSocketClient_OnAddChannelResponse_Params;
      break;
      case kWebSocketClient_OnDataFrame_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WebSocketClient_OnDataFrame_Params;
      break;
      case kWebSocketClient_OnFlowControl_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WebSocketClient_OnFlowControl_Params;
      break;
      case kWebSocketClient_OnDropChannel_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WebSocketClient_OnDropChannel_Params;
      break;
      case kWebSocketClient_OnClosingHandshake_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WebSocketClient_OnClosingHandshake_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateWebSocketClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var WebSocketClient = {
    name: 'content::mojom::WebSocketClient',
    proxyClass: WebSocketClientProxy,
    stubClass: WebSocketClientStub,
    validateRequest: validateWebSocketClientRequest,
    validateResponse: null,
  };
  WebSocketClientStub.prototype.validator = validateWebSocketClientRequest;
  WebSocketClientProxy.prototype.validator = null;
  var kWebSocket_AddChannelRequest_Name = 0;
  var kWebSocket_SendFrame_Name = 1;
  var kWebSocket_SendFlowControl_Name = 2;
  var kWebSocket_StartClosingHandshake_Name = 3;

  function WebSocketProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  WebSocketProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  WebSocketProxy.prototype.addChannelRequest = function(url, requested_protocols, origin, first_party_for_cookies, user_agent_override, client) {
    var params = new WebSocket_AddChannelRequest_Params();
    params.url = url;
    params.requested_protocols = requested_protocols;
    params.origin = origin;
    params.first_party_for_cookies = first_party_for_cookies;
    params.user_agent_override = user_agent_override;
    params.client = core.isHandle(client) ? client : connection.bindImpl(client, WebSocketClient);
    var builder = new codec.MessageBuilder(
        kWebSocket_AddChannelRequest_Name,
        codec.align(WebSocket_AddChannelRequest_Params.encodedSize));
    builder.encodeStruct(WebSocket_AddChannelRequest_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WebSocketProxy.prototype.sendFrame = function(fin, type, data) {
    var params = new WebSocket_SendFrame_Params();
    params.fin = fin;
    params.type = type;
    params.data = data;
    var builder = new codec.MessageBuilder(
        kWebSocket_SendFrame_Name,
        codec.align(WebSocket_SendFrame_Params.encodedSize));
    builder.encodeStruct(WebSocket_SendFrame_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WebSocketProxy.prototype.sendFlowControl = function(quota) {
    var params = new WebSocket_SendFlowControl_Params();
    params.quota = quota;
    var builder = new codec.MessageBuilder(
        kWebSocket_SendFlowControl_Name,
        codec.align(WebSocket_SendFlowControl_Params.encodedSize));
    builder.encodeStruct(WebSocket_SendFlowControl_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WebSocketProxy.prototype.startClosingHandshake = function(code, reason) {
    var params = new WebSocket_StartClosingHandshake_Params();
    params.code = code;
    params.reason = reason;
    var builder = new codec.MessageBuilder(
        kWebSocket_StartClosingHandshake_Name,
        codec.align(WebSocket_StartClosingHandshake_Params.encodedSize));
    builder.encodeStruct(WebSocket_StartClosingHandshake_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function WebSocketStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  WebSocketStub.prototype = Object.create(bindings.StubBase.prototype);
  WebSocketStub.prototype.addChannelRequest = function(url, requested_protocols, origin, first_party_for_cookies, user_agent_override, client) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.addChannelRequest && bindings.StubBindings(this).delegate.addChannelRequest(url, requested_protocols, origin, first_party_for_cookies, user_agent_override, connection.bindHandleToProxy(client, WebSocketClient));
  }
  WebSocketStub.prototype.sendFrame = function(fin, type, data) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.sendFrame && bindings.StubBindings(this).delegate.sendFrame(fin, type, data);
  }
  WebSocketStub.prototype.sendFlowControl = function(quota) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.sendFlowControl && bindings.StubBindings(this).delegate.sendFlowControl(quota);
  }
  WebSocketStub.prototype.startClosingHandshake = function(code, reason) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.startClosingHandshake && bindings.StubBindings(this).delegate.startClosingHandshake(code, reason);
  }

  WebSocketStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kWebSocket_AddChannelRequest_Name:
      var params = reader.decodeStruct(WebSocket_AddChannelRequest_Params);
      this.addChannelRequest(params.url, params.requested_protocols, params.origin, params.first_party_for_cookies, params.user_agent_override, params.client);
      return true;
    case kWebSocket_SendFrame_Name:
      var params = reader.decodeStruct(WebSocket_SendFrame_Params);
      this.sendFrame(params.fin, params.type, params.data);
      return true;
    case kWebSocket_SendFlowControl_Name:
      var params = reader.decodeStruct(WebSocket_SendFlowControl_Params);
      this.sendFlowControl(params.quota);
      return true;
    case kWebSocket_StartClosingHandshake_Name:
      var params = reader.decodeStruct(WebSocket_StartClosingHandshake_Params);
      this.startClosingHandshake(params.code, params.reason);
      return true;
    default:
      return false;
    }
  };

  WebSocketStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateWebSocketRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kWebSocket_AddChannelRequest_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WebSocket_AddChannelRequest_Params;
      break;
      case kWebSocket_SendFrame_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WebSocket_SendFrame_Params;
      break;
      case kWebSocket_SendFlowControl_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WebSocket_SendFlowControl_Params;
      break;
      case kWebSocket_StartClosingHandshake_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WebSocket_StartClosingHandshake_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateWebSocketResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var WebSocket = {
    name: 'content::mojom::WebSocket',
    proxyClass: WebSocketProxy,
    stubClass: WebSocketStub,
    validateRequest: validateWebSocketRequest,
    validateResponse: null,
  };
  WebSocketStub.prototype.validator = validateWebSocketRequest;
  WebSocketProxy.prototype.validator = null;

  var exports = {};
  exports.WebSocketMessageType = WebSocketMessageType;
  exports.HttpHeader = HttpHeader;
  exports.WebSocketHandshakeRequest = WebSocketHandshakeRequest;
  exports.WebSocketHandshakeResponse = WebSocketHandshakeResponse;
  exports.WebSocketClient = WebSocketClient;
  exports.WebSocket = WebSocket;

  return exports;
});
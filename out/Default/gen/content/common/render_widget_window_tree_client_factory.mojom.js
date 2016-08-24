// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("content/common/render_widget_window_tree_client_factory.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "services/ui/public/interfaces/window_tree.mojom",
], function(bindings, codec, connection, core, validator, window_tree$) {

  function RenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Params.prototype.initDefaults_ = function() {
    this.routing_id = 0;
    this.window_tree_client = null;
  };
  RenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  RenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, RenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate RenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Params.window_tree_client
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 4, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Params.encodedSize = codec.kStructHeaderSize + 8;

  RenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Params.decode = function(decoder) {
    var packed;
    var val = new RenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.routing_id = decoder.decodeStruct(codec.Uint32);
    val.window_tree_client = decoder.decodeStruct(codec.Handle);
    return val;
  };

  RenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.routing_id);
    encoder.encodeStruct(codec.Handle, val.window_tree_client);
  };
  var kRenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Name = 0;

  function RenderWidgetWindowTreeClientFactoryProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  RenderWidgetWindowTreeClientFactoryProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  RenderWidgetWindowTreeClientFactoryProxy.prototype.createWindowTreeClientForRenderWidget = function(routing_id, window_tree_client) {
    var params = new RenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Params();
    params.routing_id = routing_id;
    params.window_tree_client = core.isHandle(window_tree_client) ? window_tree_client : connection.bindProxy(window_tree_client, window_tree$.WindowTreeClient);
    var builder = new codec.MessageBuilder(
        kRenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Name,
        codec.align(RenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Params.encodedSize));
    builder.encodeStruct(RenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function RenderWidgetWindowTreeClientFactoryStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  RenderWidgetWindowTreeClientFactoryStub.prototype = Object.create(bindings.StubBase.prototype);
  RenderWidgetWindowTreeClientFactoryStub.prototype.createWindowTreeClientForRenderWidget = function(routing_id, window_tree_client) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.createWindowTreeClientForRenderWidget && bindings.StubBindings(this).delegate.createWindowTreeClientForRenderWidget(routing_id, connection.bindHandleToStub(window_tree_client, window_tree$.WindowTreeClient));
  }

  RenderWidgetWindowTreeClientFactoryStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kRenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Name:
      var params = reader.decodeStruct(RenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Params);
      this.createWindowTreeClientForRenderWidget(params.routing_id, params.window_tree_client);
      return true;
    default:
      return false;
    }
  };

  RenderWidgetWindowTreeClientFactoryStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateRenderWidgetWindowTreeClientFactoryRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kRenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = RenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateRenderWidgetWindowTreeClientFactoryResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var RenderWidgetWindowTreeClientFactory = {
    name: 'content::mojom::RenderWidgetWindowTreeClientFactory',
    proxyClass: RenderWidgetWindowTreeClientFactoryProxy,
    stubClass: RenderWidgetWindowTreeClientFactoryStub,
    validateRequest: validateRenderWidgetWindowTreeClientFactoryRequest,
    validateResponse: null,
  };
  RenderWidgetWindowTreeClientFactoryStub.prototype.validator = validateRenderWidgetWindowTreeClientFactoryRequest;
  RenderWidgetWindowTreeClientFactoryProxy.prototype.validator = null;

  var exports = {};
  exports.RenderWidgetWindowTreeClientFactory = RenderWidgetWindowTreeClientFactory;

  return exports;
});
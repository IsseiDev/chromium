// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_BROADCASTCHANNEL_BROADCAST_CHANNEL_MOJOM_H_
#define THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_BROADCASTCHANNEL_BROADCAST_CHANNEL_MOJOM_H_

#include <stdint.h>

#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/optional.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/lib/control_message_proxy.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/lib/union_accessor.h"
#include "mojo/public/cpp/bindings/map.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/message_filter.h"
#include "mojo/public/cpp/bindings/native_struct.h"
#include "mojo/public/cpp/bindings/native_struct_data_view.h"
#include "mojo/public/cpp/bindings/no_interface.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "third_party/WebKit/public/platform/modules/broadcastchannel/broadcast_channel.mojom-shared.h"
#include "url/mojo/origin.mojom.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"
#include "base/optional.h"
#include "url/gurl.h"
#include "device/bluetooth/bluetooth_uuid.h"
#include "url/origin.h"
#include "cc/surfaces/surface_sequence.h"
#include "cc/surfaces/surface_id.h"
#include "content/common/bluetooth/web_bluetooth_device_id.h"
#include "content/common/content_export.h"


namespace blink {
namespace mojom {
class BroadcastChannelClient;
using BroadcastChannelClientPtr = mojo::InterfacePtr<BroadcastChannelClient>;
using BroadcastChannelClientPtrInfo = mojo::InterfacePtrInfo<BroadcastChannelClient>;
using BroadcastChannelClientRequest = mojo::InterfaceRequest<BroadcastChannelClient>;
using BroadcastChannelClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<BroadcastChannelClient>;
using BroadcastChannelClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<BroadcastChannelClient>;
using BroadcastChannelClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<BroadcastChannelClient>;

class BroadcastChannelProvider;
using BroadcastChannelProviderPtr = mojo::InterfacePtr<BroadcastChannelProvider>;
using BroadcastChannelProviderPtrInfo = mojo::InterfacePtrInfo<BroadcastChannelProvider>;
using BroadcastChannelProviderRequest = mojo::InterfaceRequest<BroadcastChannelProvider>;
using BroadcastChannelProviderAssociatedPtr =
    mojo::AssociatedInterfacePtr<BroadcastChannelProvider>;
using BroadcastChannelProviderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<BroadcastChannelProvider>;
using BroadcastChannelProviderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<BroadcastChannelProvider>;


class BroadcastChannelClientProxy;
class BroadcastChannelClientStub;

class BroadcastChannelClientRequestValidator;

class CONTENT_EXPORT BroadcastChannelClient {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = BroadcastChannelClientProxy;
  using Stub_ = BroadcastChannelClientStub;

  using RequestValidator_ = BroadcastChannelClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~BroadcastChannelClient() {}

  virtual void OnMessage(mojo::Array<uint8_t> message) = 0;
};

class BroadcastChannelProviderProxy;
class BroadcastChannelProviderStub;

class BroadcastChannelProviderRequestValidator;

class CONTENT_EXPORT BroadcastChannelProvider {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = true;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = BroadcastChannelProviderProxy;
  using Stub_ = BroadcastChannelProviderStub;

  using RequestValidator_ = BroadcastChannelProviderRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~BroadcastChannelProvider() {}

  virtual void ConnectToChannel(const url::Origin& origin, const mojo::String& name, BroadcastChannelClientAssociatedPtrInfo receiver, BroadcastChannelClientAssociatedRequest sender) = 0;
};

class CONTENT_EXPORT BroadcastChannelClientProxy
    : public BroadcastChannelClient,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit BroadcastChannelClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnMessage(mojo::Array<uint8_t> message) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class CONTENT_EXPORT BroadcastChannelProviderProxy
    : public BroadcastChannelProvider,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit BroadcastChannelProviderProxy(mojo::MessageReceiverWithResponder* receiver);
  void ConnectToChannel(const url::Origin& origin, const mojo::String& name, BroadcastChannelClientAssociatedPtrInfo receiver, BroadcastChannelClientAssociatedRequest sender) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class CONTENT_EXPORT BroadcastChannelClientStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  BroadcastChannelClientStub();
  ~BroadcastChannelClientStub() override;
  void set_sink(BroadcastChannelClient* sink) { sink_ = sink; }
  BroadcastChannelClient* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  BroadcastChannelClient* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class CONTENT_EXPORT BroadcastChannelProviderStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  BroadcastChannelProviderStub();
  ~BroadcastChannelProviderStub() override;
  void set_sink(BroadcastChannelProvider* sink) { sink_ = sink; }
  BroadcastChannelProvider* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  BroadcastChannelProvider* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class CONTENT_EXPORT BroadcastChannelClientRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit BroadcastChannelClientRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT BroadcastChannelProviderRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit BroadcastChannelProviderRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_BROADCASTCHANNEL_BROADCAST_CHANNEL_MOJOM_H_
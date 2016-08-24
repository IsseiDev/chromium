// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_BROADCASTCHANNEL_BROADCAST_CHANNEL_MOJOM_BLINK_H_
#define THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_BROADCASTCHANNEL_BROADCAST_CHANNEL_MOJOM_BLINK_H_

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
#include "url/mojo/origin.mojom-blink.h"
#include "mojo/public/cpp/bindings/wtf_array.h"
#include "mojo/public/cpp/bindings/wtf_map.h"
#include "third_party/WebKit/Source/wtf/Optional.h"
#include "third_party/WebKit/Source/wtf/text/WTFString.h"
#include "third_party/WebKit/Source/platform/weborigin/KURL.h"
#include "cc/surfaces/surface_sequence.h"
#include "third_party/WebKit/Source/platform/weborigin/SecurityOrigin.h"
#include "cc/surfaces/surface_id.h"
#include "third_party/WebKit/public/platform/WebCommon.h"


namespace blink {
namespace mojom {
namespace blink {
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

class BLINK_PLATFORM_EXPORT BroadcastChannelClient {
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

  virtual void OnMessage(mojo::WTFArray<uint8_t> message) = 0;
};

class BroadcastChannelProviderProxy;
class BroadcastChannelProviderStub;

class BroadcastChannelProviderRequestValidator;

class BLINK_PLATFORM_EXPORT BroadcastChannelProvider {
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

  virtual void ConnectToChannel(const RefPtr<::blink::SecurityOrigin>& origin, const WTF::String& name, BroadcastChannelClientAssociatedPtrInfo receiver, BroadcastChannelClientAssociatedRequest sender) = 0;
};

class BLINK_PLATFORM_EXPORT BroadcastChannelClientProxy
    : public BroadcastChannelClient,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit BroadcastChannelClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnMessage(mojo::WTFArray<uint8_t> message) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class BLINK_PLATFORM_EXPORT BroadcastChannelProviderProxy
    : public BroadcastChannelProvider,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit BroadcastChannelProviderProxy(mojo::MessageReceiverWithResponder* receiver);
  void ConnectToChannel(const RefPtr<::blink::SecurityOrigin>& origin, const WTF::String& name, BroadcastChannelClientAssociatedPtrInfo receiver, BroadcastChannelClientAssociatedRequest sender) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class BLINK_PLATFORM_EXPORT BroadcastChannelClientStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
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
class BLINK_PLATFORM_EXPORT BroadcastChannelProviderStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
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
class BLINK_PLATFORM_EXPORT BroadcastChannelClientRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit BroadcastChannelClientRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT BroadcastChannelProviderRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit BroadcastChannelProviderRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_BROADCASTCHANNEL_BROADCAST_CHANNEL_MOJOM_BLINK_H_
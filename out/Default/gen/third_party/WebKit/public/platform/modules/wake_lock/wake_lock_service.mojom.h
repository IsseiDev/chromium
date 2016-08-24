// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_WAKE_LOCK_WAKE_LOCK_SERVICE_MOJOM_H_
#define THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_WAKE_LOCK_WAKE_LOCK_SERVICE_MOJOM_H_

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
#include "third_party/WebKit/public/platform/modules/wake_lock/wake_lock_service.mojom-shared.h"
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
class WakeLockService;
using WakeLockServicePtr = mojo::InterfacePtr<WakeLockService>;
using WakeLockServicePtrInfo = mojo::InterfacePtrInfo<WakeLockService>;
using WakeLockServiceRequest = mojo::InterfaceRequest<WakeLockService>;
using WakeLockServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<WakeLockService>;
using WakeLockServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<WakeLockService>;
using WakeLockServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<WakeLockService>;


class WakeLockServiceProxy;
class WakeLockServiceStub;

class WakeLockServiceRequestValidator;

class CONTENT_EXPORT WakeLockService {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = WakeLockServiceProxy;
  using Stub_ = WakeLockServiceStub;

  using RequestValidator_ = WakeLockServiceRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~WakeLockService() {}

  virtual void RequestWakeLock() = 0;

  virtual void CancelWakeLock() = 0;
};

class CONTENT_EXPORT WakeLockServiceProxy
    : public WakeLockService,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit WakeLockServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void RequestWakeLock() override;
  void CancelWakeLock() override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class CONTENT_EXPORT WakeLockServiceStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  WakeLockServiceStub();
  ~WakeLockServiceStub() override;
  void set_sink(WakeLockService* sink) { sink_ = sink; }
  WakeLockService* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  WakeLockService* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class CONTENT_EXPORT WakeLockServiceRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit WakeLockServiceRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_WAKE_LOCK_WAKE_LOCK_SERVICE_MOJOM_H_
// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_NOTIFICATIONS_NOTIFICATION_SERVICE_MOJOM_BLINK_H_
#define THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_NOTIFICATIONS_NOTIFICATION_SERVICE_MOJOM_BLINK_H_

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
#include "third_party/WebKit/public/platform/modules/notifications/notification_service.mojom-shared.h"
#include "third_party/WebKit/public/platform/modules/permissions/permission_status.mojom-blink.h"
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
class NotificationService;
using NotificationServicePtr = mojo::InterfacePtr<NotificationService>;
using NotificationServicePtrInfo = mojo::InterfacePtrInfo<NotificationService>;
using NotificationServiceRequest = mojo::InterfaceRequest<NotificationService>;
using NotificationServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<NotificationService>;
using NotificationServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<NotificationService>;
using NotificationServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<NotificationService>;


class NotificationServiceProxy;
class NotificationServiceStub;

class NotificationServiceRequestValidator;
class NotificationServiceResponseValidator;

class BLINK_PLATFORM_EXPORT NotificationService {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = true;

  using Proxy_ = NotificationServiceProxy;
  using Stub_ = NotificationServiceStub;

  using RequestValidator_ = NotificationServiceRequestValidator;
  using ResponseValidator_ = NotificationServiceResponseValidator;
  virtual ~NotificationService() {}

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool GetPermissionStatus(const WTF::String& origin, ::blink::mojom::blink::PermissionStatus* status);

  using GetPermissionStatusCallback = base::Callback<void(::blink::mojom::blink::PermissionStatus)>;
  virtual void GetPermissionStatus(const WTF::String& origin, const GetPermissionStatusCallback& callback) = 0;
};

class BLINK_PLATFORM_EXPORT NotificationServiceProxy
    : public NotificationService,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit NotificationServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  bool GetPermissionStatus(const WTF::String& origin, ::blink::mojom::blink::PermissionStatus* status) override;
  void GetPermissionStatus(const WTF::String& origin, const GetPermissionStatusCallback& callback) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class BLINK_PLATFORM_EXPORT NotificationServiceStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  NotificationServiceStub();
  ~NotificationServiceStub() override;
  void set_sink(NotificationService* sink) { sink_ = sink; }
  NotificationService* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  NotificationService* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class BLINK_PLATFORM_EXPORT NotificationServiceRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit NotificationServiceRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT NotificationServiceResponseValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit NotificationServiceResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_NOTIFICATIONS_NOTIFICATION_SERVICE_MOJOM_BLINK_H_
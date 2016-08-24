// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_PERMISSIONS_PERMISSION_MOJOM_BLINK_H_
#define THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_PERMISSIONS_PERMISSION_MOJOM_BLINK_H_

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
#include "third_party/WebKit/public/platform/modules/permissions/permission.mojom-shared.h"
#include "third_party/WebKit/public/platform/modules/permissions/permission_status.mojom-blink.h"
#include "url/mojo/origin.mojom-blink.h"
#include "mojo/public/cpp/bindings/wtf_array.h"
#include "mojo/public/cpp/bindings/wtf_map.h"
#include "third_party/WebKit/Source/wtf/Optional.h"
#include "third_party/WebKit/Source/wtf/text/WTFString.h"
#include "third_party/WebKit/Source/platform/weborigin/KURL.h"
#include "third_party/WebKit/Source/platform/weborigin/SecurityOrigin.h"
#include "third_party/WebKit/public/platform/WebCommon.h"


namespace blink {
namespace mojom {
namespace blink {
using PermissionName = PermissionName;  // Alias for definition in the parent namespace.
class PermissionService;
using PermissionServicePtr = mojo::InterfacePtr<PermissionService>;
using PermissionServicePtrInfo = mojo::InterfacePtrInfo<PermissionService>;
using PermissionServiceRequest = mojo::InterfaceRequest<PermissionService>;
using PermissionServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<PermissionService>;
using PermissionServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PermissionService>;
using PermissionServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PermissionService>;


class PermissionServiceProxy;
class PermissionServiceStub;

class PermissionServiceRequestValidator;
class PermissionServiceResponseValidator;

class BLINK_PLATFORM_EXPORT PermissionService {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = PermissionServiceProxy;
  using Stub_ = PermissionServiceStub;

  using RequestValidator_ = PermissionServiceRequestValidator;
  using ResponseValidator_ = PermissionServiceResponseValidator;
  virtual ~PermissionService() {}


  using HasPermissionCallback = base::Callback<void(::blink::mojom::blink::PermissionStatus)>;
  virtual void HasPermission(PermissionName permission, const RefPtr<::blink::SecurityOrigin>& origin, const HasPermissionCallback& callback) = 0;


  using RequestPermissionCallback = base::Callback<void(::blink::mojom::blink::PermissionStatus)>;
  virtual void RequestPermission(PermissionName permission, const RefPtr<::blink::SecurityOrigin>& origin, bool user_gesture, const RequestPermissionCallback& callback) = 0;


  using RequestPermissionsCallback = base::Callback<void(const WTF::Vector<::blink::mojom::blink::PermissionStatus>&)>;
  virtual void RequestPermissions(const WTF::Vector<PermissionName>& permission, const RefPtr<::blink::SecurityOrigin>& origin, bool user_gesture, const RequestPermissionsCallback& callback) = 0;


  using RevokePermissionCallback = base::Callback<void(::blink::mojom::blink::PermissionStatus)>;
  virtual void RevokePermission(PermissionName permission, const RefPtr<::blink::SecurityOrigin>& origin, const RevokePermissionCallback& callback) = 0;


  using GetNextPermissionChangeCallback = base::Callback<void(::blink::mojom::blink::PermissionStatus)>;
  virtual void GetNextPermissionChange(PermissionName permission, const RefPtr<::blink::SecurityOrigin>& origin, ::blink::mojom::blink::PermissionStatus last_known_status, const GetNextPermissionChangeCallback& callback) = 0;
};

class BLINK_PLATFORM_EXPORT PermissionServiceProxy
    : public PermissionService,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit PermissionServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void HasPermission(PermissionName permission, const RefPtr<::blink::SecurityOrigin>& origin, const HasPermissionCallback& callback) override;
  void RequestPermission(PermissionName permission, const RefPtr<::blink::SecurityOrigin>& origin, bool user_gesture, const RequestPermissionCallback& callback) override;
  void RequestPermissions(const WTF::Vector<PermissionName>& permission, const RefPtr<::blink::SecurityOrigin>& origin, bool user_gesture, const RequestPermissionsCallback& callback) override;
  void RevokePermission(PermissionName permission, const RefPtr<::blink::SecurityOrigin>& origin, const RevokePermissionCallback& callback) override;
  void GetNextPermissionChange(PermissionName permission, const RefPtr<::blink::SecurityOrigin>& origin, ::blink::mojom::blink::PermissionStatus last_known_status, const GetNextPermissionChangeCallback& callback) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class BLINK_PLATFORM_EXPORT PermissionServiceStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  PermissionServiceStub();
  ~PermissionServiceStub() override;
  void set_sink(PermissionService* sink) { sink_ = sink; }
  PermissionService* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  PermissionService* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class BLINK_PLATFORM_EXPORT PermissionServiceRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit PermissionServiceRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT PermissionServiceResponseValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit PermissionServiceResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_PERMISSIONS_PERMISSION_MOJOM_BLINK_H_
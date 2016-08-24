// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MIME_REGISTRY_MOJOM_H_
#define THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MIME_REGISTRY_MOJOM_H_

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
#include "third_party/WebKit/public/platform/mime_registry.mojom-shared.h"
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
class MimeRegistry;
using MimeRegistryPtr = mojo::InterfacePtr<MimeRegistry>;
using MimeRegistryPtrInfo = mojo::InterfacePtrInfo<MimeRegistry>;
using MimeRegistryRequest = mojo::InterfaceRequest<MimeRegistry>;
using MimeRegistryAssociatedPtr =
    mojo::AssociatedInterfacePtr<MimeRegistry>;
using MimeRegistryAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<MimeRegistry>;
using MimeRegistryAssociatedRequest =
    mojo::AssociatedInterfaceRequest<MimeRegistry>;


class MimeRegistryProxy;
class MimeRegistryStub;

class MimeRegistryRequestValidator;
class MimeRegistryResponseValidator;

class CONTENT_EXPORT MimeRegistry {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = true;

  using Proxy_ = MimeRegistryProxy;
  using Stub_ = MimeRegistryStub;

  using RequestValidator_ = MimeRegistryRequestValidator;
  using ResponseValidator_ = MimeRegistryResponseValidator;
  virtual ~MimeRegistry() {}

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool GetMimeTypeFromExtension(const mojo::String& extension, mojo::String* mime_type);

  using GetMimeTypeFromExtensionCallback = base::Callback<void(mojo::String)>;
  virtual void GetMimeTypeFromExtension(const mojo::String& extension, const GetMimeTypeFromExtensionCallback& callback) = 0;
};

class CONTENT_EXPORT MimeRegistryProxy
    : public MimeRegistry,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit MimeRegistryProxy(mojo::MessageReceiverWithResponder* receiver);
  bool GetMimeTypeFromExtension(const mojo::String& extension, mojo::String* mime_type) override;
  void GetMimeTypeFromExtension(const mojo::String& extension, const GetMimeTypeFromExtensionCallback& callback) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class CONTENT_EXPORT MimeRegistryStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  MimeRegistryStub();
  ~MimeRegistryStub() override;
  void set_sink(MimeRegistry* sink) { sink_ = sink; }
  MimeRegistry* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  MimeRegistry* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class CONTENT_EXPORT MimeRegistryRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit MimeRegistryRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT MimeRegistryResponseValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit MimeRegistryResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MIME_REGISTRY_MOJOM_H_
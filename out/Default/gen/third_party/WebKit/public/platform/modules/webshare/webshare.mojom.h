// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_WEBSHARE_WEBSHARE_MOJOM_H_
#define THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_WEBSHARE_WEBSHARE_MOJOM_H_

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
#include "third_party/WebKit/public/platform/modules/webshare/webshare.mojom-shared.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"
#include "content/common/content_export.h"


namespace blink {
namespace mojom {
class ShareService;
using ShareServicePtr = mojo::InterfacePtr<ShareService>;
using ShareServicePtrInfo = mojo::InterfacePtrInfo<ShareService>;
using ShareServiceRequest = mojo::InterfaceRequest<ShareService>;
using ShareServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<ShareService>;
using ShareServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ShareService>;
using ShareServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ShareService>;


class ShareServiceProxy;
class ShareServiceStub;

class ShareServiceRequestValidator;
class ShareServiceResponseValidator;

class CONTENT_EXPORT ShareService {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = ShareServiceProxy;
  using Stub_ = ShareServiceStub;

  using RequestValidator_ = ShareServiceRequestValidator;
  using ResponseValidator_ = ShareServiceResponseValidator;
  virtual ~ShareService() {}


  using ShareCallback = base::Callback<void(mojo::String)>;
  virtual void Share(const mojo::String& title, const mojo::String& text, const ShareCallback& callback) = 0;
};

class CONTENT_EXPORT ShareServiceProxy
    : public ShareService,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit ShareServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void Share(const mojo::String& title, const mojo::String& text, const ShareCallback& callback) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class CONTENT_EXPORT ShareServiceStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  ShareServiceStub();
  ~ShareServiceStub() override;
  void set_sink(ShareService* sink) { sink_ = sink; }
  ShareService* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  ShareService* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class CONTENT_EXPORT ShareServiceRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit ShareServiceRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT ShareServiceResponseValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit ShareServiceResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_WEBSHARE_WEBSHARE_MOJOM_H_
// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_CONTEXTUAL_SEARCH_COMMON_OVERLAY_PAGE_NOTIFIER_SERVICE_MOJOM_H_
#define COMPONENTS_CONTEXTUAL_SEARCH_COMMON_OVERLAY_PAGE_NOTIFIER_SERVICE_MOJOM_H_

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
#include "components/contextual_search/common/overlay_page_notifier_service.mojom-shared.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"


namespace contextual_search {
namespace mojom {
class OverlayPageNotifierService;
using OverlayPageNotifierServicePtr = mojo::InterfacePtr<OverlayPageNotifierService>;
using OverlayPageNotifierServicePtrInfo = mojo::InterfacePtrInfo<OverlayPageNotifierService>;
using OverlayPageNotifierServiceRequest = mojo::InterfaceRequest<OverlayPageNotifierService>;
using OverlayPageNotifierServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<OverlayPageNotifierService>;
using OverlayPageNotifierServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<OverlayPageNotifierService>;
using OverlayPageNotifierServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<OverlayPageNotifierService>;


class OverlayPageNotifierServiceProxy;
class OverlayPageNotifierServiceStub;

class OverlayPageNotifierServiceRequestValidator;

class  OverlayPageNotifierService {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = OverlayPageNotifierServiceProxy;
  using Stub_ = OverlayPageNotifierServiceStub;

  using RequestValidator_ = OverlayPageNotifierServiceRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~OverlayPageNotifierService() {}

  virtual void NotifyIsContextualSearchOverlay() = 0;
};

class  OverlayPageNotifierServiceProxy
    : public OverlayPageNotifierService,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit OverlayPageNotifierServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void NotifyIsContextualSearchOverlay() override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class  OverlayPageNotifierServiceStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  OverlayPageNotifierServiceStub();
  ~OverlayPageNotifierServiceStub() override;
  void set_sink(OverlayPageNotifierService* sink) { sink_ = sink; }
  OverlayPageNotifierService* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  OverlayPageNotifierService* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  OverlayPageNotifierServiceRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit OverlayPageNotifierServiceRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace contextual_search

namespace mojo {

}  // namespace mojo

#endif  // COMPONENTS_CONTEXTUAL_SEARCH_COMMON_OVERLAY_PAGE_NOTIFIER_SERVICE_MOJOM_H_
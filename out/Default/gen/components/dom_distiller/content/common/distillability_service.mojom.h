// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_DOM_DISTILLER_CONTENT_COMMON_DISTILLABILITY_SERVICE_MOJOM_H_
#define COMPONENTS_DOM_DISTILLER_CONTENT_COMMON_DISTILLABILITY_SERVICE_MOJOM_H_

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
#include "components/dom_distiller/content/common/distillability_service.mojom-shared.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"


namespace dom_distiller {
namespace mojom {
class DistillabilityService;
using DistillabilityServicePtr = mojo::InterfacePtr<DistillabilityService>;
using DistillabilityServicePtrInfo = mojo::InterfacePtrInfo<DistillabilityService>;
using DistillabilityServiceRequest = mojo::InterfaceRequest<DistillabilityService>;
using DistillabilityServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<DistillabilityService>;
using DistillabilityServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<DistillabilityService>;
using DistillabilityServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<DistillabilityService>;


class DistillabilityServiceProxy;
class DistillabilityServiceStub;

class DistillabilityServiceRequestValidator;

class  DistillabilityService {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = DistillabilityServiceProxy;
  using Stub_ = DistillabilityServiceStub;

  using RequestValidator_ = DistillabilityServiceRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~DistillabilityService() {}

  virtual void NotifyIsDistillable(bool page_is_distillable, bool is_last_update) = 0;
};

class  DistillabilityServiceProxy
    : public DistillabilityService,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit DistillabilityServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void NotifyIsDistillable(bool page_is_distillable, bool is_last_update) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class  DistillabilityServiceStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  DistillabilityServiceStub();
  ~DistillabilityServiceStub() override;
  void set_sink(DistillabilityService* sink) { sink_ = sink; }
  DistillabilityService* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  DistillabilityService* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  DistillabilityServiceRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit DistillabilityServiceRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace dom_distiller

namespace mojo {

}  // namespace mojo

#endif  // COMPONENTS_DOM_DISTILLER_CONTENT_COMMON_DISTILLABILITY_SERVICE_MOJOM_H_
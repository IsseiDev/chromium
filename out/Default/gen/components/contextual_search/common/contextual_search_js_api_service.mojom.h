// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_CONTEXTUAL_SEARCH_COMMON_CONTEXTUAL_SEARCH_JS_API_SERVICE_MOJOM_H_
#define COMPONENTS_CONTEXTUAL_SEARCH_COMMON_CONTEXTUAL_SEARCH_JS_API_SERVICE_MOJOM_H_

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
#include "components/contextual_search/common/contextual_search_js_api_service.mojom-shared.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"


namespace contextual_search {
namespace mojom {
class ContextualSearchJsApiService;
using ContextualSearchJsApiServicePtr = mojo::InterfacePtr<ContextualSearchJsApiService>;
using ContextualSearchJsApiServicePtrInfo = mojo::InterfacePtrInfo<ContextualSearchJsApiService>;
using ContextualSearchJsApiServiceRequest = mojo::InterfaceRequest<ContextualSearchJsApiService>;
using ContextualSearchJsApiServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<ContextualSearchJsApiService>;
using ContextualSearchJsApiServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ContextualSearchJsApiService>;
using ContextualSearchJsApiServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ContextualSearchJsApiService>;


class ContextualSearchJsApiServiceProxy;
class ContextualSearchJsApiServiceStub;

class ContextualSearchJsApiServiceRequestValidator;

class  ContextualSearchJsApiService {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = ContextualSearchJsApiServiceProxy;
  using Stub_ = ContextualSearchJsApiServiceStub;

  using RequestValidator_ = ContextualSearchJsApiServiceRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~ContextualSearchJsApiService() {}

  virtual void HandleSetCaption(const mojo::String& message, bool does_answer) = 0;
};

class  ContextualSearchJsApiServiceProxy
    : public ContextualSearchJsApiService,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit ContextualSearchJsApiServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void HandleSetCaption(const mojo::String& message, bool does_answer) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class  ContextualSearchJsApiServiceStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  ContextualSearchJsApiServiceStub();
  ~ContextualSearchJsApiServiceStub() override;
  void set_sink(ContextualSearchJsApiService* sink) { sink_ = sink; }
  ContextualSearchJsApiService* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  ContextualSearchJsApiService* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  ContextualSearchJsApiServiceRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit ContextualSearchJsApiServiceRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace contextual_search

namespace mojo {

}  // namespace mojo

#endif  // COMPONENTS_CONTEXTUAL_SEARCH_COMMON_CONTEXTUAL_SEARCH_JS_API_SERVICE_MOJOM_H_
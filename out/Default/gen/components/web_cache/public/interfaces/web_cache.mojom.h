// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_WEB_CACHE_PUBLIC_INTERFACES_WEB_CACHE_MOJOM_H_
#define COMPONENTS_WEB_CACHE_PUBLIC_INTERFACES_WEB_CACHE_MOJOM_H_

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
#include "components/web_cache/public/interfaces/web_cache.mojom-shared.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"


namespace web_cache {
namespace mojom {
class WebCache;
using WebCachePtr = mojo::InterfacePtr<WebCache>;
using WebCachePtrInfo = mojo::InterfacePtrInfo<WebCache>;
using WebCacheRequest = mojo::InterfaceRequest<WebCache>;
using WebCacheAssociatedPtr =
    mojo::AssociatedInterfacePtr<WebCache>;
using WebCacheAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<WebCache>;
using WebCacheAssociatedRequest =
    mojo::AssociatedInterfaceRequest<WebCache>;


class WebCacheProxy;
class WebCacheStub;

class WebCacheRequestValidator;

class  WebCache {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = WebCacheProxy;
  using Stub_ = WebCacheStub;

  using RequestValidator_ = WebCacheRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~WebCache() {}

  virtual void SetCacheCapacities(uint64_t min_dead_capacity, uint64_t max_dead_capacity, uint64_t capacity) = 0;

  virtual void ClearCache(bool on_navigation) = 0;
};

class  WebCacheProxy
    : public WebCache,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit WebCacheProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetCacheCapacities(uint64_t min_dead_capacity, uint64_t max_dead_capacity, uint64_t capacity) override;
  void ClearCache(bool on_navigation) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class  WebCacheStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  WebCacheStub();
  ~WebCacheStub() override;
  void set_sink(WebCache* sink) { sink_ = sink; }
  WebCache* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  WebCache* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  WebCacheRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit WebCacheRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace web_cache

namespace mojo {

}  // namespace mojo

#endif  // COMPONENTS_WEB_CACHE_PUBLIC_INTERFACES_WEB_CACHE_MOJOM_H_
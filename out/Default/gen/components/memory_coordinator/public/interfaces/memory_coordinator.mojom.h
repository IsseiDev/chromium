// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_MEMORY_COORDINATOR_PUBLIC_INTERFACES_MEMORY_COORDINATOR_MOJOM_H_
#define COMPONENTS_MEMORY_COORDINATOR_PUBLIC_INTERFACES_MEMORY_COORDINATOR_MOJOM_H_

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
#include "components/memory_coordinator/public/interfaces/memory_coordinator.mojom-shared.h"
#include "components/memory_coordinator/public/interfaces/child_memory_coordinator.mojom.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"
#include "components/memory_coordinator/common/memory_coordinator_export.h"


namespace memory_coordinator {
namespace mojom {
class MemoryCoordinatorHandle;
using MemoryCoordinatorHandlePtr = mojo::InterfacePtr<MemoryCoordinatorHandle>;
using MemoryCoordinatorHandlePtrInfo = mojo::InterfacePtrInfo<MemoryCoordinatorHandle>;
using MemoryCoordinatorHandleRequest = mojo::InterfaceRequest<MemoryCoordinatorHandle>;
using MemoryCoordinatorHandleAssociatedPtr =
    mojo::AssociatedInterfacePtr<MemoryCoordinatorHandle>;
using MemoryCoordinatorHandleAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<MemoryCoordinatorHandle>;
using MemoryCoordinatorHandleAssociatedRequest =
    mojo::AssociatedInterfaceRequest<MemoryCoordinatorHandle>;


class MemoryCoordinatorHandleProxy;
class MemoryCoordinatorHandleStub;

class MemoryCoordinatorHandleRequestValidator;

class MEMORY_COORDINATOR_EXPORT MemoryCoordinatorHandle {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = MemoryCoordinatorHandleProxy;
  using Stub_ = MemoryCoordinatorHandleStub;

  using RequestValidator_ = MemoryCoordinatorHandleRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~MemoryCoordinatorHandle() {}

  virtual void AddChild(::memory_coordinator::mojom::ChildMemoryCoordinatorPtr child) = 0;
};

class MEMORY_COORDINATOR_EXPORT MemoryCoordinatorHandleProxy
    : public MemoryCoordinatorHandle,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit MemoryCoordinatorHandleProxy(mojo::MessageReceiverWithResponder* receiver);
  void AddChild(::memory_coordinator::mojom::ChildMemoryCoordinatorPtr child) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class MEMORY_COORDINATOR_EXPORT MemoryCoordinatorHandleStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  MemoryCoordinatorHandleStub();
  ~MemoryCoordinatorHandleStub() override;
  void set_sink(MemoryCoordinatorHandle* sink) { sink_ = sink; }
  MemoryCoordinatorHandle* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  MemoryCoordinatorHandle* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class MEMORY_COORDINATOR_EXPORT MemoryCoordinatorHandleRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit MemoryCoordinatorHandleRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace memory_coordinator

namespace mojo {

}  // namespace mojo

#endif  // COMPONENTS_MEMORY_COORDINATOR_PUBLIC_INTERFACES_MEMORY_COORDINATOR_MOJOM_H_
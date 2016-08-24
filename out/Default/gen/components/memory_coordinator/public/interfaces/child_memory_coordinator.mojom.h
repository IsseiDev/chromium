// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_MEMORY_COORDINATOR_PUBLIC_INTERFACES_CHILD_MEMORY_COORDINATOR_MOJOM_H_
#define COMPONENTS_MEMORY_COORDINATOR_PUBLIC_INTERFACES_CHILD_MEMORY_COORDINATOR_MOJOM_H_

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
#include "components/memory_coordinator/public/interfaces/child_memory_coordinator.mojom-shared.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"
#include "components/memory_coordinator/common/memory_coordinator_export.h"


namespace memory_coordinator {
namespace mojom {
class ChildMemoryCoordinator;
using ChildMemoryCoordinatorPtr = mojo::InterfacePtr<ChildMemoryCoordinator>;
using ChildMemoryCoordinatorPtrInfo = mojo::InterfacePtrInfo<ChildMemoryCoordinator>;
using ChildMemoryCoordinatorRequest = mojo::InterfaceRequest<ChildMemoryCoordinator>;
using ChildMemoryCoordinatorAssociatedPtr =
    mojo::AssociatedInterfacePtr<ChildMemoryCoordinator>;
using ChildMemoryCoordinatorAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ChildMemoryCoordinator>;
using ChildMemoryCoordinatorAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ChildMemoryCoordinator>;


class ChildMemoryCoordinatorProxy;
class ChildMemoryCoordinatorStub;

class ChildMemoryCoordinatorRequestValidator;

class MEMORY_COORDINATOR_EXPORT ChildMemoryCoordinator {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = ChildMemoryCoordinatorProxy;
  using Stub_ = ChildMemoryCoordinatorStub;

  using RequestValidator_ = ChildMemoryCoordinatorRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~ChildMemoryCoordinator() {}

  virtual void OnStateChange(MemoryState state) = 0;
};

class MEMORY_COORDINATOR_EXPORT ChildMemoryCoordinatorProxy
    : public ChildMemoryCoordinator,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit ChildMemoryCoordinatorProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnStateChange(MemoryState state) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class MEMORY_COORDINATOR_EXPORT ChildMemoryCoordinatorStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  ChildMemoryCoordinatorStub();
  ~ChildMemoryCoordinatorStub() override;
  void set_sink(ChildMemoryCoordinator* sink) { sink_ = sink; }
  ChildMemoryCoordinator* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  ChildMemoryCoordinator* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class MEMORY_COORDINATOR_EXPORT ChildMemoryCoordinatorRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit ChildMemoryCoordinatorRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace memory_coordinator

namespace mojo {

}  // namespace mojo

#endif  // COMPONENTS_MEMORY_COORDINATOR_PUBLIC_INTERFACES_CHILD_MEMORY_COORDINATOR_MOJOM_H_
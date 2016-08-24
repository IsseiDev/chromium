// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SHELL_PUBLIC_INTERFACES_SERVICE_MOJOM_H_
#define SERVICES_SHELL_PUBLIC_INTERFACES_SERVICE_MOJOM_H_

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
#include "services/shell/public/interfaces/service.mojom-shared.h"
#include "services/shell/public/interfaces/capabilities.mojom.h"
#include "services/shell/public/interfaces/connector.mojom.h"
#include "services/shell/public/interfaces/interface_provider.mojom.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"
#include "services/shell/public/cpp/capabilities.h"
#include "services/shell/public/cpp/identity.h"
#include "base/values.h"
#include "base/version.h"
#include "base/time/time.h"
#include "base/strings/string16.h"
#include "base/files/file_path.h"


namespace shell {
namespace mojom {
class Service;
using ServicePtr = mojo::InterfacePtr<Service>;
using ServicePtrInfo = mojo::InterfacePtrInfo<Service>;
using ServiceRequest = mojo::InterfaceRequest<Service>;
using ServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<Service>;
using ServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Service>;
using ServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Service>;


class ServiceProxy;
class ServiceStub;

class ServiceRequestValidator;
class ServiceResponseValidator;

class  Service {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = ServiceProxy;
  using Stub_ = ServiceStub;

  using RequestValidator_ = ServiceRequestValidator;
  using ResponseValidator_ = ServiceResponseValidator;
  virtual ~Service() {}


  using OnStartCallback = base::Callback<void(::shell::mojom::ConnectorRequest)>;
  virtual void OnStart(const ::shell::Identity& identity, const OnStartCallback& callback) = 0;

  virtual void OnConnect(const ::shell::Identity& source, ::shell::mojom::InterfaceProviderRequest interfaces, const ::shell::CapabilityRequest& allowed_capabilities) = 0;
};

class  ServiceProxy
    : public Service,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit ServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnStart(const ::shell::Identity& identity, const OnStartCallback& callback) override;
  void OnConnect(const ::shell::Identity& source, ::shell::mojom::InterfaceProviderRequest interfaces, const ::shell::CapabilityRequest& allowed_capabilities) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class  ServiceStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  ServiceStub();
  ~ServiceStub() override;
  void set_sink(Service* sink) { sink_ = sink; }
  Service* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  Service* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  ServiceRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit ServiceRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  ServiceResponseValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit ServiceResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace shell

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_SHELL_PUBLIC_INTERFACES_SERVICE_MOJOM_H_
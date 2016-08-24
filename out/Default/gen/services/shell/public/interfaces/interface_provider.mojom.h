// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SHELL_PUBLIC_INTERFACES_INTERFACE_PROVIDER_MOJOM_H_
#define SERVICES_SHELL_PUBLIC_INTERFACES_INTERFACE_PROVIDER_MOJOM_H_

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
#include "services/shell/public/interfaces/interface_provider.mojom-shared.h"
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
class InterfaceProvider;
using InterfaceProviderPtr = mojo::InterfacePtr<InterfaceProvider>;
using InterfaceProviderPtrInfo = mojo::InterfacePtrInfo<InterfaceProvider>;
using InterfaceProviderRequest = mojo::InterfaceRequest<InterfaceProvider>;
using InterfaceProviderAssociatedPtr =
    mojo::AssociatedInterfacePtr<InterfaceProvider>;
using InterfaceProviderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<InterfaceProvider>;
using InterfaceProviderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<InterfaceProvider>;


class InterfaceProviderProxy;
class InterfaceProviderStub;

class InterfaceProviderRequestValidator;

class  InterfaceProvider {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = InterfaceProviderProxy;
  using Stub_ = InterfaceProviderStub;

  using RequestValidator_ = InterfaceProviderRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~InterfaceProvider() {}

  virtual void GetInterface(const std::string& interface_name, mojo::ScopedMessagePipeHandle pipe) = 0;
};

class  InterfaceProviderProxy
    : public InterfaceProvider,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit InterfaceProviderProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetInterface(const std::string& interface_name, mojo::ScopedMessagePipeHandle pipe) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class  InterfaceProviderStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  InterfaceProviderStub();
  ~InterfaceProviderStub() override;
  void set_sink(InterfaceProvider* sink) { sink_ = sink; }
  InterfaceProvider* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  InterfaceProvider* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  InterfaceProviderRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit InterfaceProviderRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace shell

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_SHELL_PUBLIC_INTERFACES_INTERFACE_PROVIDER_MOJOM_H_
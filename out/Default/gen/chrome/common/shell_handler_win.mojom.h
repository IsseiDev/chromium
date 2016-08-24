// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_SHELL_HANDLER_WIN_MOJOM_H_
#define CHROME_COMMON_SHELL_HANDLER_WIN_MOJOM_H_

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
#include "chrome/common/shell_handler_win.mojom-shared.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"
#include "third_party/skia/include/core/SkBitmap.h"
#include "third_party/skia/include/core/SkImageFilter.h"


namespace mojom {
class ShellHandler;
using ShellHandlerPtr = mojo::InterfacePtr<ShellHandler>;
using ShellHandlerPtrInfo = mojo::InterfacePtrInfo<ShellHandler>;
using ShellHandlerRequest = mojo::InterfaceRequest<ShellHandler>;
using ShellHandlerAssociatedPtr =
    mojo::AssociatedInterfacePtr<ShellHandler>;
using ShellHandlerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ShellHandler>;
using ShellHandlerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ShellHandler>;


class ShellHandlerProxy;
class ShellHandlerStub;

class ShellHandlerRequestValidator;
class ShellHandlerResponseValidator;

class  ShellHandler {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = ShellHandlerProxy;
  using Stub_ = ShellHandlerStub;

  using RequestValidator_ = ShellHandlerRequestValidator;
  using ResponseValidator_ = ShellHandlerResponseValidator;
  virtual ~ShellHandler() {}


  using IsPinnedToTaskbarCallback = base::Callback<void(bool, bool)>;
  virtual void IsPinnedToTaskbar(const IsPinnedToTaskbarCallback& callback) = 0;
};

class  ShellHandlerProxy
    : public ShellHandler,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit ShellHandlerProxy(mojo::MessageReceiverWithResponder* receiver);
  void IsPinnedToTaskbar(const IsPinnedToTaskbarCallback& callback) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class  ShellHandlerStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  ShellHandlerStub();
  ~ShellHandlerStub() override;
  void set_sink(ShellHandler* sink) { sink_ = sink; }
  ShellHandler* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  ShellHandler* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  ShellHandlerRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit ShellHandlerRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  ShellHandlerResponseValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit ShellHandlerResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom

namespace mojo {

}  // namespace mojo

#endif  // CHROME_COMMON_SHELL_HANDLER_WIN_MOJOM_H_
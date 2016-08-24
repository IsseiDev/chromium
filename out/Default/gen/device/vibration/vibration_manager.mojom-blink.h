// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_VIBRATION_VIBRATION_MANAGER_MOJOM_BLINK_H_
#define DEVICE_VIBRATION_VIBRATION_MANAGER_MOJOM_BLINK_H_

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
#include "device/vibration/vibration_manager.mojom-shared.h"
#include "mojo/public/cpp/bindings/wtf_array.h"
#include "mojo/public/cpp/bindings/wtf_map.h"
#include "third_party/WebKit/Source/wtf/Optional.h"
#include "third_party/WebKit/Source/wtf/text/WTFString.h"


namespace device {
namespace blink {
class VibrationManager;
using VibrationManagerPtr = mojo::InterfacePtr<VibrationManager>;
using VibrationManagerPtrInfo = mojo::InterfacePtrInfo<VibrationManager>;
using VibrationManagerRequest = mojo::InterfaceRequest<VibrationManager>;
using VibrationManagerAssociatedPtr =
    mojo::AssociatedInterfacePtr<VibrationManager>;
using VibrationManagerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<VibrationManager>;
using VibrationManagerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<VibrationManager>;


class VibrationManagerProxy;
class VibrationManagerStub;

class VibrationManagerRequestValidator;
class VibrationManagerResponseValidator;

class  VibrationManager {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = VibrationManagerProxy;
  using Stub_ = VibrationManagerStub;

  using RequestValidator_ = VibrationManagerRequestValidator;
  using ResponseValidator_ = VibrationManagerResponseValidator;
  virtual ~VibrationManager() {}


  using VibrateCallback = base::Callback<void()>;
  virtual void Vibrate(int64_t milliseconds, const VibrateCallback& callback) = 0;


  using CancelCallback = base::Callback<void()>;
  virtual void Cancel(const CancelCallback& callback) = 0;
};

class  VibrationManagerProxy
    : public VibrationManager,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit VibrationManagerProxy(mojo::MessageReceiverWithResponder* receiver);
  void Vibrate(int64_t milliseconds, const VibrateCallback& callback) override;
  void Cancel(const CancelCallback& callback) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class  VibrationManagerStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  VibrationManagerStub();
  ~VibrationManagerStub() override;
  void set_sink(VibrationManager* sink) { sink_ = sink; }
  VibrationManager* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  VibrationManager* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  VibrationManagerRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit VibrationManagerRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  VibrationManagerResponseValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit VibrationManagerResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace device

namespace mojo {

}  // namespace mojo

#endif  // DEVICE_VIBRATION_VIBRATION_MANAGER_MOJOM_BLINK_H_
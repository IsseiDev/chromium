// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_SENSORS_PUBLIC_INTERFACES_LIGHT_MOJOM_H_
#define DEVICE_SENSORS_PUBLIC_INTERFACES_LIGHT_MOJOM_H_

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
#include "device/sensors/public/interfaces/light.mojom-shared.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"


namespace device {
namespace mojom {
class LightSensor;
using LightSensorPtr = mojo::InterfacePtr<LightSensor>;
using LightSensorPtrInfo = mojo::InterfacePtrInfo<LightSensor>;
using LightSensorRequest = mojo::InterfaceRequest<LightSensor>;
using LightSensorAssociatedPtr =
    mojo::AssociatedInterfacePtr<LightSensor>;
using LightSensorAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<LightSensor>;
using LightSensorAssociatedRequest =
    mojo::AssociatedInterfaceRequest<LightSensor>;


class LightSensorProxy;
class LightSensorStub;

class LightSensorRequestValidator;
class LightSensorResponseValidator;

class  LightSensor {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = LightSensorProxy;
  using Stub_ = LightSensorStub;

  using RequestValidator_ = LightSensorRequestValidator;
  using ResponseValidator_ = LightSensorResponseValidator;
  virtual ~LightSensor() {}


  using StartPollingCallback = base::Callback<void(mojo::ScopedSharedBufferHandle)>;
  virtual void StartPolling(const StartPollingCallback& callback) = 0;

  virtual void StopPolling() = 0;
};

class  LightSensorProxy
    : public LightSensor,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit LightSensorProxy(mojo::MessageReceiverWithResponder* receiver);
  void StartPolling(const StartPollingCallback& callback) override;
  void StopPolling() override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class  LightSensorStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  LightSensorStub();
  ~LightSensorStub() override;
  void set_sink(LightSensor* sink) { sink_ = sink; }
  LightSensor* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  LightSensor* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  LightSensorRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit LightSensorRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  LightSensorResponseValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit LightSensorResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace device

namespace mojo {

}  // namespace mojo

#endif  // DEVICE_SENSORS_PUBLIC_INTERFACES_LIGHT_MOJOM_H_
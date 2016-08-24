// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_SENSORS_PUBLIC_INTERFACES_ORIENTATION_MOJOM_H_
#define DEVICE_SENSORS_PUBLIC_INTERFACES_ORIENTATION_MOJOM_H_

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
#include "device/sensors/public/interfaces/orientation.mojom-shared.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"


namespace device {
namespace mojom {
class OrientationAbsoluteSensor;
using OrientationAbsoluteSensorPtr = mojo::InterfacePtr<OrientationAbsoluteSensor>;
using OrientationAbsoluteSensorPtrInfo = mojo::InterfacePtrInfo<OrientationAbsoluteSensor>;
using OrientationAbsoluteSensorRequest = mojo::InterfaceRequest<OrientationAbsoluteSensor>;
using OrientationAbsoluteSensorAssociatedPtr =
    mojo::AssociatedInterfacePtr<OrientationAbsoluteSensor>;
using OrientationAbsoluteSensorAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<OrientationAbsoluteSensor>;
using OrientationAbsoluteSensorAssociatedRequest =
    mojo::AssociatedInterfaceRequest<OrientationAbsoluteSensor>;

class OrientationSensor;
using OrientationSensorPtr = mojo::InterfacePtr<OrientationSensor>;
using OrientationSensorPtrInfo = mojo::InterfacePtrInfo<OrientationSensor>;
using OrientationSensorRequest = mojo::InterfaceRequest<OrientationSensor>;
using OrientationSensorAssociatedPtr =
    mojo::AssociatedInterfacePtr<OrientationSensor>;
using OrientationSensorAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<OrientationSensor>;
using OrientationSensorAssociatedRequest =
    mojo::AssociatedInterfaceRequest<OrientationSensor>;


class OrientationAbsoluteSensorProxy;
class OrientationAbsoluteSensorStub;

class OrientationAbsoluteSensorRequestValidator;
class OrientationAbsoluteSensorResponseValidator;

class  OrientationAbsoluteSensor {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = OrientationAbsoluteSensorProxy;
  using Stub_ = OrientationAbsoluteSensorStub;

  using RequestValidator_ = OrientationAbsoluteSensorRequestValidator;
  using ResponseValidator_ = OrientationAbsoluteSensorResponseValidator;
  virtual ~OrientationAbsoluteSensor() {}


  using StartPollingCallback = base::Callback<void(mojo::ScopedSharedBufferHandle)>;
  virtual void StartPolling(const StartPollingCallback& callback) = 0;

  virtual void StopPolling() = 0;
};

class OrientationSensorProxy;
class OrientationSensorStub;

class OrientationSensorRequestValidator;
class OrientationSensorResponseValidator;

class  OrientationSensor {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = OrientationSensorProxy;
  using Stub_ = OrientationSensorStub;

  using RequestValidator_ = OrientationSensorRequestValidator;
  using ResponseValidator_ = OrientationSensorResponseValidator;
  virtual ~OrientationSensor() {}


  using StartPollingCallback = base::Callback<void(mojo::ScopedSharedBufferHandle)>;
  virtual void StartPolling(const StartPollingCallback& callback) = 0;

  virtual void StopPolling() = 0;
};

class  OrientationAbsoluteSensorProxy
    : public OrientationAbsoluteSensor,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit OrientationAbsoluteSensorProxy(mojo::MessageReceiverWithResponder* receiver);
  void StartPolling(const StartPollingCallback& callback) override;
  void StopPolling() override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class  OrientationSensorProxy
    : public OrientationSensor,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit OrientationSensorProxy(mojo::MessageReceiverWithResponder* receiver);
  void StartPolling(const StartPollingCallback& callback) override;
  void StopPolling() override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class  OrientationAbsoluteSensorStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  OrientationAbsoluteSensorStub();
  ~OrientationAbsoluteSensorStub() override;
  void set_sink(OrientationAbsoluteSensor* sink) { sink_ = sink; }
  OrientationAbsoluteSensor* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  OrientationAbsoluteSensor* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  OrientationSensorStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  OrientationSensorStub();
  ~OrientationSensorStub() override;
  void set_sink(OrientationSensor* sink) { sink_ = sink; }
  OrientationSensor* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  OrientationSensor* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  OrientationAbsoluteSensorRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit OrientationAbsoluteSensorRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  OrientationSensorRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit OrientationSensorRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  OrientationAbsoluteSensorResponseValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit OrientationAbsoluteSensorResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  OrientationSensorResponseValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit OrientationSensorResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace device

namespace mojo {

}  // namespace mojo

#endif  // DEVICE_SENSORS_PUBLIC_INTERFACES_ORIENTATION_MOJOM_H_
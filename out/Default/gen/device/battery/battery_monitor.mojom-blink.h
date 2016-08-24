// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_BATTERY_BATTERY_MONITOR_MOJOM_BLINK_H_
#define DEVICE_BATTERY_BATTERY_MONITOR_MOJOM_BLINK_H_

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
#include "device/battery/battery_monitor.mojom-shared.h"
#include "device/battery/battery_status.mojom-blink.h"
#include "mojo/public/cpp/bindings/wtf_array.h"
#include "mojo/public/cpp/bindings/wtf_map.h"
#include "third_party/WebKit/Source/wtf/Optional.h"
#include "third_party/WebKit/Source/wtf/text/WTFString.h"


namespace device {
namespace blink {
class BatteryMonitor;
using BatteryMonitorPtr = mojo::InterfacePtr<BatteryMonitor>;
using BatteryMonitorPtrInfo = mojo::InterfacePtrInfo<BatteryMonitor>;
using BatteryMonitorRequest = mojo::InterfaceRequest<BatteryMonitor>;
using BatteryMonitorAssociatedPtr =
    mojo::AssociatedInterfacePtr<BatteryMonitor>;
using BatteryMonitorAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<BatteryMonitor>;
using BatteryMonitorAssociatedRequest =
    mojo::AssociatedInterfaceRequest<BatteryMonitor>;


class BatteryMonitorProxy;
class BatteryMonitorStub;

class BatteryMonitorRequestValidator;
class BatteryMonitorResponseValidator;

class  BatteryMonitor {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = BatteryMonitorProxy;
  using Stub_ = BatteryMonitorStub;

  using RequestValidator_ = BatteryMonitorRequestValidator;
  using ResponseValidator_ = BatteryMonitorResponseValidator;
  virtual ~BatteryMonitor() {}


  using QueryNextStatusCallback = base::Callback<void(::device::blink::BatteryStatusPtr)>;
  virtual void QueryNextStatus(const QueryNextStatusCallback& callback) = 0;
};

class  BatteryMonitorProxy
    : public BatteryMonitor,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit BatteryMonitorProxy(mojo::MessageReceiverWithResponder* receiver);
  void QueryNextStatus(const QueryNextStatusCallback& callback) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class  BatteryMonitorStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  BatteryMonitorStub();
  ~BatteryMonitorStub() override;
  void set_sink(BatteryMonitor* sink) { sink_ = sink; }
  BatteryMonitor* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  BatteryMonitor* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  BatteryMonitorRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit BatteryMonitorRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  BatteryMonitorResponseValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit BatteryMonitorResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace device

namespace mojo {

}  // namespace mojo

#endif  // DEVICE_BATTERY_BATTERY_MONITOR_MOJOM_BLINK_H_
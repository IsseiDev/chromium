// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_STARTUP_METRIC_UTILS_COMMON_STARTUP_METRIC_MOJOM_H_
#define COMPONENTS_STARTUP_METRIC_UTILS_COMMON_STARTUP_METRIC_MOJOM_H_

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
#include "components/startup_metric_utils/common/startup_metric.mojom-shared.h"
#include "mojo/common/common_custom_types.mojom.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"
#include "base/strings/string16.h"
#include "base/files/file_path.h"
#include "base/values.h"
#include "base/time/time.h"
#include "base/version.h"


namespace startup_metric_utils {
namespace mojom {
class StartupMetricHost;
using StartupMetricHostPtr = mojo::InterfacePtr<StartupMetricHost>;
using StartupMetricHostPtrInfo = mojo::InterfacePtrInfo<StartupMetricHost>;
using StartupMetricHostRequest = mojo::InterfaceRequest<StartupMetricHost>;
using StartupMetricHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<StartupMetricHost>;
using StartupMetricHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<StartupMetricHost>;
using StartupMetricHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<StartupMetricHost>;


class StartupMetricHostProxy;
class StartupMetricHostStub;

class StartupMetricHostRequestValidator;

class  StartupMetricHost {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = StartupMetricHostProxy;
  using Stub_ = StartupMetricHostStub;

  using RequestValidator_ = StartupMetricHostRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~StartupMetricHost() {}

  virtual void RecordRendererMainEntryTime(base::TimeTicks renderer_main_entry_time) = 0;
};

class  StartupMetricHostProxy
    : public StartupMetricHost,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit StartupMetricHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void RecordRendererMainEntryTime(base::TimeTicks renderer_main_entry_time) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class  StartupMetricHostStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  StartupMetricHostStub();
  ~StartupMetricHostStub() override;
  void set_sink(StartupMetricHost* sink) { sink_ = sink; }
  StartupMetricHost* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  StartupMetricHost* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  StartupMetricHostRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit StartupMetricHostRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace startup_metric_utils

namespace mojo {

}  // namespace mojo

#endif  // COMPONENTS_STARTUP_METRIC_UTILS_COMMON_STARTUP_METRIC_MOJOM_H_
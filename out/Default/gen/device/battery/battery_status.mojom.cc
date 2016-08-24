// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "device/battery/battery_status.mojom.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/logging.h"
#include "base/trace_event/trace_event.h"
#include "mojo/public/cpp/bindings/lib/message_builder.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"
namespace device {

namespace {

}  // namespace// static
BatteryStatusPtr BatteryStatus::New() {
  BatteryStatusPtr rv;
  mojo::internal::StructHelper<BatteryStatus>::Initialize(&rv);
  return rv;
}

BatteryStatus::BatteryStatus()
    : charging(true),
      charging_time(0.0),
      discharging_time(INFINITY),
      level(1.0) {
}

BatteryStatus::~BatteryStatus() {
}
}  // namespace device

namespace mojo {


// static
bool StructTraits<::device::BatteryStatus, ::device::BatteryStatusPtr>::Read(
    ::device::BatteryStatusDataView input,
    ::device::BatteryStatusPtr* output) {
  bool success = true;
  ::device::BatteryStatusPtr result(::device::BatteryStatus::New());
  
      result->charging = input.charging();
      result->charging_time = input.charging_time();
      result->discharging_time = input.discharging_time();
      result->level = input.level();
  *output = std::move(result);
  return success;
}

}  // namespace mojo


#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
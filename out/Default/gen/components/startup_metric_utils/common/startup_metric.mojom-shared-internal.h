// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_STARTUP_METRIC_UTILS_COMMON_STARTUP_METRIC_MOJOM_SHARED_INTERNAL_H_
#define COMPONENTS_STARTUP_METRIC_UTILS_COMMON_STARTUP_METRIC_MOJOM_SHARED_INTERNAL_H_

#include <stdint.h>

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/cpp/bindings/lib/native_struct_data.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/common/common_custom_types.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace startup_metric_utils {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
const uint32_t kStartupMetricHost_RecordRendererMainEntryTime_Name = 0;
class StartupMetricHost_RecordRendererMainEntryTime_Params_Data {
 public:
  static StartupMetricHost_RecordRendererMainEntryTime_Params_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(StartupMetricHost_RecordRendererMainEntryTime_Params_Data))) StartupMetricHost_RecordRendererMainEntryTime_Params_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo::common::mojom::internal::TimeTicks_Data> renderer_main_entry_time;

 private:
  StartupMetricHost_RecordRendererMainEntryTime_Params_Data() : header_({sizeof(*this), 0}) {
  }
  ~StartupMetricHost_RecordRendererMainEntryTime_Params_Data() = delete;
};
static_assert(sizeof(StartupMetricHost_RecordRendererMainEntryTime_Params_Data) == 16,
              "Bad sizeof(StartupMetricHost_RecordRendererMainEntryTime_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace startup_metric_utils

#endif  // COMPONENTS_STARTUP_METRIC_UTILS_COMMON_STARTUP_METRIC_MOJOM_SHARED_INTERNAL_H_
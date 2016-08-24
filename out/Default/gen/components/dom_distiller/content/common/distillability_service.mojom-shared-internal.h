// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_DOM_DISTILLER_CONTENT_COMMON_DISTILLABILITY_SERVICE_MOJOM_SHARED_INTERNAL_H_
#define COMPONENTS_DOM_DISTILLER_CONTENT_COMMON_DISTILLABILITY_SERVICE_MOJOM_SHARED_INTERNAL_H_

#include <stdint.h>

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/cpp/bindings/lib/native_struct_data.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace dom_distiller {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
const uint32_t kDistillabilityService_NotifyIsDistillable_Name = 0;
class DistillabilityService_NotifyIsDistillable_Params_Data {
 public:
  static DistillabilityService_NotifyIsDistillable_Params_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(DistillabilityService_NotifyIsDistillable_Params_Data))) DistillabilityService_NotifyIsDistillable_Params_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t page_is_distillable : 1;
  uint8_t is_last_update : 1;
  uint8_t padfinal_[7];

 private:
  DistillabilityService_NotifyIsDistillable_Params_Data() : header_({sizeof(*this), 0}) {
  }
  ~DistillabilityService_NotifyIsDistillable_Params_Data() = delete;
};
static_assert(sizeof(DistillabilityService_NotifyIsDistillable_Params_Data) == 16,
              "Bad sizeof(DistillabilityService_NotifyIsDistillable_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace dom_distiller

#endif  // COMPONENTS_DOM_DISTILLER_CONTENT_COMMON_DISTILLABILITY_SERVICE_MOJOM_SHARED_INTERNAL_H_
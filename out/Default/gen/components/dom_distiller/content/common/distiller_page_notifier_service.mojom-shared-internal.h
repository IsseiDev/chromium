// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_DOM_DISTILLER_CONTENT_COMMON_DISTILLER_PAGE_NOTIFIER_SERVICE_MOJOM_SHARED_INTERNAL_H_
#define COMPONENTS_DOM_DISTILLER_CONTENT_COMMON_DISTILLER_PAGE_NOTIFIER_SERVICE_MOJOM_SHARED_INTERNAL_H_

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
const uint32_t kDistillerPageNotifierService_NotifyIsDistillerPage_Name = 0;
class DistillerPageNotifierService_NotifyIsDistillerPage_Params_Data {
 public:
  static DistillerPageNotifierService_NotifyIsDistillerPage_Params_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(DistillerPageNotifierService_NotifyIsDistillerPage_Params_Data))) DistillerPageNotifierService_NotifyIsDistillerPage_Params_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  DistillerPageNotifierService_NotifyIsDistillerPage_Params_Data() : header_({sizeof(*this), 0}) {
  }
  ~DistillerPageNotifierService_NotifyIsDistillerPage_Params_Data() = delete;
};
static_assert(sizeof(DistillerPageNotifierService_NotifyIsDistillerPage_Params_Data) == 8,
              "Bad sizeof(DistillerPageNotifierService_NotifyIsDistillerPage_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace dom_distiller

#endif  // COMPONENTS_DOM_DISTILLER_CONTENT_COMMON_DISTILLER_PAGE_NOTIFIER_SERVICE_MOJOM_SHARED_INTERNAL_H_
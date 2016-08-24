// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_MEMORY_COORDINATOR_PUBLIC_INTERFACES_MEMORY_COORDINATOR_MOJOM_SHARED_INTERNAL_H_
#define COMPONENTS_MEMORY_COORDINATOR_PUBLIC_INTERFACES_MEMORY_COORDINATOR_MOJOM_SHARED_INTERNAL_H_

#include <stdint.h>

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/cpp/bindings/lib/native_struct_data.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "components/memory_coordinator/public/interfaces/child_memory_coordinator.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace memory_coordinator {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
const uint32_t kMemoryCoordinatorHandle_AddChild_Name = 0;
class MemoryCoordinatorHandle_AddChild_Params_Data {
 public:
  static MemoryCoordinatorHandle_AddChild_Params_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(MemoryCoordinatorHandle_AddChild_Params_Data))) MemoryCoordinatorHandle_AddChild_Params_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data child;

 private:
  MemoryCoordinatorHandle_AddChild_Params_Data() : header_({sizeof(*this), 0}) {
  }
  ~MemoryCoordinatorHandle_AddChild_Params_Data() = delete;
};
static_assert(sizeof(MemoryCoordinatorHandle_AddChild_Params_Data) == 16,
              "Bad sizeof(MemoryCoordinatorHandle_AddChild_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace memory_coordinator

#endif  // COMPONENTS_MEMORY_COORDINATOR_PUBLIC_INTERFACES_MEMORY_COORDINATOR_MOJOM_SHARED_INTERNAL_H_
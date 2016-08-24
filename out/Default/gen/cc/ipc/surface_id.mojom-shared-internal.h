// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CC_IPC_SURFACE_ID_MOJOM_SHARED_INTERNAL_H_
#define CC_IPC_SURFACE_ID_MOJOM_SHARED_INTERNAL_H_

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
namespace cc {
namespace mojom {
namespace internal {
class SurfaceId_Data;

#pragma pack(push, 1)
class SurfaceId_Data {
 public:
  static SurfaceId_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(SurfaceId_Data))) SurfaceId_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t client_id;
  uint32_t local_id;
  uint64_t nonce;

 private:
  SurfaceId_Data() : header_({sizeof(*this), 0}) {
  }
  ~SurfaceId_Data() = delete;
};
static_assert(sizeof(SurfaceId_Data) == 24,
              "Bad sizeof(SurfaceId_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace cc

#endif  // CC_IPC_SURFACE_ID_MOJOM_SHARED_INTERNAL_H_
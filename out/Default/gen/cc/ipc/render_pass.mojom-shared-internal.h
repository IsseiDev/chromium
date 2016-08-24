// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CC_IPC_RENDER_PASS_MOJOM_SHARED_INTERNAL_H_
#define CC_IPC_RENDER_PASS_MOJOM_SHARED_INTERNAL_H_

#include <stdint.h>

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/cpp/bindings/lib/native_struct_data.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "cc/ipc/render_pass_id.mojom-shared-internal.h"
#include "cc/ipc/quads.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared-internal.h"
#include "ui/gfx/mojo/transform.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace cc {
namespace mojom {
namespace internal {
class RenderPass_Data;

#pragma pack(push, 1)
class RenderPass_Data {
 public:
  static RenderPass_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(RenderPass_Data))) RenderPass_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::cc::mojom::internal::RenderPassId_Data> id;
  mojo::internal::Pointer<::gfx::mojom::internal::Rect_Data> output_rect;
  mojo::internal::Pointer<::gfx::mojom::internal::Rect_Data> damage_rect;
  mojo::internal::Pointer<::gfx::mojom::internal::Transform_Data> transform_to_root_target;
  uint8_t has_transparent_background : 1;
  uint8_t pad4_[7];
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::cc::mojom::internal::DrawQuad_Data>>> quad_list;

 private:
  RenderPass_Data() : header_({sizeof(*this), 0}) {
  }
  ~RenderPass_Data() = delete;
};
static_assert(sizeof(RenderPass_Data) == 56,
              "Bad sizeof(RenderPass_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace cc

#endif  // CC_IPC_RENDER_PASS_MOJOM_SHARED_INTERNAL_H_
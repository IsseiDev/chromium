// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_SURFACE_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_UI_PUBLIC_INTERFACES_SURFACE_MOJOM_SHARED_INTERNAL_H_

#include <stdint.h>

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/cpp/bindings/lib/native_struct_data.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "cc/ipc/compositor_frame.mojom-shared-internal.h"
#include "cc/ipc/returned_resource.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace ui {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
const uint32_t kSurface_SubmitCompositorFrame_Name = 0;
class Surface_SubmitCompositorFrame_Params_Data {
 public:
  static Surface_SubmitCompositorFrame_Params_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(Surface_SubmitCompositorFrame_Params_Data))) Surface_SubmitCompositorFrame_Params_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::cc::mojom::internal::CompositorFrame_Data> frame;

 private:
  Surface_SubmitCompositorFrame_Params_Data() : header_({sizeof(*this), 0}) {
  }
  ~Surface_SubmitCompositorFrame_Params_Data() = delete;
};
static_assert(sizeof(Surface_SubmitCompositorFrame_Params_Data) == 16,
              "Bad sizeof(Surface_SubmitCompositorFrame_Params_Data)");
class Surface_SubmitCompositorFrame_ResponseParams_Data {
 public:
  static Surface_SubmitCompositorFrame_ResponseParams_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(Surface_SubmitCompositorFrame_ResponseParams_Data))) Surface_SubmitCompositorFrame_ResponseParams_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Surface_SubmitCompositorFrame_ResponseParams_Data() : header_({sizeof(*this), 0}) {
  }
  ~Surface_SubmitCompositorFrame_ResponseParams_Data() = delete;
};
static_assert(sizeof(Surface_SubmitCompositorFrame_ResponseParams_Data) == 8,
              "Bad sizeof(Surface_SubmitCompositorFrame_ResponseParams_Data)");
const uint32_t kSurfaceClient_ReturnResources_Name = 0;
class SurfaceClient_ReturnResources_Params_Data {
 public:
  static SurfaceClient_ReturnResources_Params_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(SurfaceClient_ReturnResources_Params_Data))) SurfaceClient_ReturnResources_Params_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::cc::mojom::internal::ReturnedResource_Data>>> resources;

 private:
  SurfaceClient_ReturnResources_Params_Data() : header_({sizeof(*this), 0}) {
  }
  ~SurfaceClient_ReturnResources_Params_Data() = delete;
};
static_assert(sizeof(SurfaceClient_ReturnResources_Params_Data) == 16,
              "Bad sizeof(SurfaceClient_ReturnResources_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace ui

#endif  // SERVICES_UI_PUBLIC_INTERFACES_SURFACE_MOJOM_SHARED_INTERNAL_H_
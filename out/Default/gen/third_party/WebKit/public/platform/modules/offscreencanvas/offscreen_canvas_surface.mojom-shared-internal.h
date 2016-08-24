// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_OFFSCREENCANVAS_OFFSCREEN_CANVAS_SURFACE_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_OFFSCREENCANVAS_OFFSCREEN_CANVAS_SURFACE_MOJOM_SHARED_INTERNAL_H_

#include <stdint.h>

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/cpp/bindings/lib/native_struct_data.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "cc/ipc/surface_id.mojom-shared-internal.h"
#include "cc/ipc/surface_sequence.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace blink {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
const uint32_t kOffscreenCanvasSurface_GetSurfaceId_Name = 0;
class OffscreenCanvasSurface_GetSurfaceId_Params_Data {
 public:
  static OffscreenCanvasSurface_GetSurfaceId_Params_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(OffscreenCanvasSurface_GetSurfaceId_Params_Data))) OffscreenCanvasSurface_GetSurfaceId_Params_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  OffscreenCanvasSurface_GetSurfaceId_Params_Data() : header_({sizeof(*this), 0}) {
  }
  ~OffscreenCanvasSurface_GetSurfaceId_Params_Data() = delete;
};
static_assert(sizeof(OffscreenCanvasSurface_GetSurfaceId_Params_Data) == 8,
              "Bad sizeof(OffscreenCanvasSurface_GetSurfaceId_Params_Data)");
class OffscreenCanvasSurface_GetSurfaceId_ResponseParams_Data {
 public:
  static OffscreenCanvasSurface_GetSurfaceId_ResponseParams_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(OffscreenCanvasSurface_GetSurfaceId_ResponseParams_Data))) OffscreenCanvasSurface_GetSurfaceId_ResponseParams_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::cc::mojom::internal::SurfaceId_Data> surface_id;

 private:
  OffscreenCanvasSurface_GetSurfaceId_ResponseParams_Data() : header_({sizeof(*this), 0}) {
  }
  ~OffscreenCanvasSurface_GetSurfaceId_ResponseParams_Data() = delete;
};
static_assert(sizeof(OffscreenCanvasSurface_GetSurfaceId_ResponseParams_Data) == 16,
              "Bad sizeof(OffscreenCanvasSurface_GetSurfaceId_ResponseParams_Data)");
const uint32_t kOffscreenCanvasSurface_RequestSurfaceCreation_Name = 1;
class OffscreenCanvasSurface_RequestSurfaceCreation_Params_Data {
 public:
  static OffscreenCanvasSurface_RequestSurfaceCreation_Params_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(OffscreenCanvasSurface_RequestSurfaceCreation_Params_Data))) OffscreenCanvasSurface_RequestSurfaceCreation_Params_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::cc::mojom::internal::SurfaceId_Data> surface_id;

 private:
  OffscreenCanvasSurface_RequestSurfaceCreation_Params_Data() : header_({sizeof(*this), 0}) {
  }
  ~OffscreenCanvasSurface_RequestSurfaceCreation_Params_Data() = delete;
};
static_assert(sizeof(OffscreenCanvasSurface_RequestSurfaceCreation_Params_Data) == 16,
              "Bad sizeof(OffscreenCanvasSurface_RequestSurfaceCreation_Params_Data)");
const uint32_t kOffscreenCanvasSurface_Require_Name = 2;
class OffscreenCanvasSurface_Require_Params_Data {
 public:
  static OffscreenCanvasSurface_Require_Params_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(OffscreenCanvasSurface_Require_Params_Data))) OffscreenCanvasSurface_Require_Params_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::cc::mojom::internal::SurfaceId_Data> surface_id;
  mojo::internal::Pointer<::cc::mojom::internal::SurfaceSequence_Data> sequence;

 private:
  OffscreenCanvasSurface_Require_Params_Data() : header_({sizeof(*this), 0}) {
  }
  ~OffscreenCanvasSurface_Require_Params_Data() = delete;
};
static_assert(sizeof(OffscreenCanvasSurface_Require_Params_Data) == 24,
              "Bad sizeof(OffscreenCanvasSurface_Require_Params_Data)");
const uint32_t kOffscreenCanvasSurface_Satisfy_Name = 3;
class OffscreenCanvasSurface_Satisfy_Params_Data {
 public:
  static OffscreenCanvasSurface_Satisfy_Params_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(OffscreenCanvasSurface_Satisfy_Params_Data))) OffscreenCanvasSurface_Satisfy_Params_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::cc::mojom::internal::SurfaceSequence_Data> sequence;

 private:
  OffscreenCanvasSurface_Satisfy_Params_Data() : header_({sizeof(*this), 0}) {
  }
  ~OffscreenCanvasSurface_Satisfy_Params_Data() = delete;
};
static_assert(sizeof(OffscreenCanvasSurface_Satisfy_Params_Data) == 16,
              "Bad sizeof(OffscreenCanvasSurface_Satisfy_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_OFFSCREENCANVAS_OFFSCREEN_CANVAS_SURFACE_MOJOM_SHARED_INTERNAL_H_
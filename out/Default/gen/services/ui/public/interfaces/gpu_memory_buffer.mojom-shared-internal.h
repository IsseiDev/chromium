// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_GPU_MEMORY_BUFFER_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_UI_PUBLIC_INTERFACES_GPU_MEMORY_BUFFER_MOJOM_SHARED_INTERNAL_H_

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
namespace ui {
namespace mojom {
namespace internal {
class GpuMemoryBufferId_Data;
class NativePixmapHandle_Data;
class GpuMemoryBufferHandle_Data;

struct GpuMemoryBufferType_Data {
 public:
  static bool const kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

#pragma pack(push, 1)
class GpuMemoryBufferId_Data {
 public:
  static GpuMemoryBufferId_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(GpuMemoryBufferId_Data))) GpuMemoryBufferId_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t id;
  uint8_t padfinal_[4];

 private:
  GpuMemoryBufferId_Data() : header_({sizeof(*this), 0}) {
  }
  ~GpuMemoryBufferId_Data() = delete;
};
static_assert(sizeof(GpuMemoryBufferId_Data) == 16,
              "Bad sizeof(GpuMemoryBufferId_Data)");
class NativePixmapHandle_Data {
 public:
  static NativePixmapHandle_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(NativePixmapHandle_Data))) NativePixmapHandle_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data fd;
  int32_t stride;

 private:
  NativePixmapHandle_Data() : header_({sizeof(*this), 0}) {
  }
  ~NativePixmapHandle_Data() = delete;
};
static_assert(sizeof(NativePixmapHandle_Data) == 16,
              "Bad sizeof(NativePixmapHandle_Data)");
class GpuMemoryBufferHandle_Data {
 public:
  static GpuMemoryBufferHandle_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(GpuMemoryBufferHandle_Data))) GpuMemoryBufferHandle_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t type;
  mojo::internal::Handle_Data buffer_handle;
  mojo::internal::Pointer<internal::GpuMemoryBufferId_Data> id;
  uint32_t offset;
  int32_t stride;
  mojo::internal::Pointer<internal::NativePixmapHandle_Data> native_pixmap_handle;

 private:
  GpuMemoryBufferHandle_Data() : header_({sizeof(*this), 0}) {
  }
  ~GpuMemoryBufferHandle_Data() = delete;
};
static_assert(sizeof(GpuMemoryBufferHandle_Data) == 40,
              "Bad sizeof(GpuMemoryBufferHandle_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace ui

#endif  // SERVICES_UI_PUBLIC_INTERFACES_GPU_MEMORY_BUFFER_MOJOM_SHARED_INTERNAL_H_
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

#include "services/ui/public/interfaces/gpu_memory_buffer.mojom.h"

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
#include "cc/ipc/quads_struct_traits.h"
#include "ui/events/mojo/event_struct_traits.h"
#include "cc/ipc/surface_id_struct_traits.h"
#include "gpu/ipc/common/sync_token_struct_traits.h"
#include "gpu/ipc/common/gpu_command_buffer_traits.h"
#include "cc/ipc/shared_quad_state_struct_traits.h"
#include "ui/gfx/mojo/accelerated_widget_struct_traits.h"
#include "cc/ipc/transferable_resource_struct_traits.h"
#include "ui/gfx/mojo/buffer_types_enum_traits.h"
#include "cc/ipc/filter_operations_struct_traits.h"
#include "gpu/ipc/common/dx_diag_node_struct_traits.h"
#include "cc/ipc/render_pass_id_struct_traits.h"
#include "cc/ipc/filter_operation_struct_traits.h"
#include "services/ui/public/interfaces/display/display_struct_traits.h"
#include "ipc/ipc_message_utils.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "cc/ipc/render_pass_struct_traits.h"
#include "cc/ipc/compositor_frame_metadata_struct_traits.h"
#include "cc/ipc/surface_sequence_struct_traits.h"
#include "ui/events/mojo/latency_info_struct_traits.h"
#include "ui/gfx/mojo/transform_struct_traits.h"
#include "skia/public/interfaces/bitmap_skbitmap_struct_traits.h"
#include "ui/gfx/mojo/selection_bound_struct_traits.h"
#include "gpu/ipc/common/mailbox_holder_struct_traits.h"
#include "cc/ipc/begin_frame_args_struct_traits.h"
#include "gpu/ipc/common/gpu_info_struct_traits.h"
#include "cc/ipc/selection_struct_traits.h"
#include "gpu/ipc/common/mailbox_struct_traits.h"
#include "mojo/common/common_custom_types_struct_traits.h"
#include "skia/public/interfaces/image_filter_struct_traits.h"
#include "cc/ipc/returned_resource_struct_traits.h"
#include "cc/ipc/compositor_frame_struct_traits.h"
namespace ui {
namespace mojom {

namespace {

}  // namespace// static
GpuMemoryBufferIdPtr GpuMemoryBufferId::New() {
  GpuMemoryBufferIdPtr rv;
  mojo::internal::StructHelper<GpuMemoryBufferId>::Initialize(&rv);
  return rv;
}

GpuMemoryBufferId::GpuMemoryBufferId()
    : id() {
}

GpuMemoryBufferId::~GpuMemoryBufferId() {
}// static
NativePixmapHandlePtr NativePixmapHandle::New() {
  NativePixmapHandlePtr rv;
  mojo::internal::StructHelper<NativePixmapHandle>::Initialize(&rv);
  return rv;
}

NativePixmapHandle::NativePixmapHandle()
    : fd(),
      stride() {
}

NativePixmapHandle::~NativePixmapHandle() {
}// static
GpuMemoryBufferHandlePtr GpuMemoryBufferHandle::New() {
  GpuMemoryBufferHandlePtr rv;
  mojo::internal::StructHelper<GpuMemoryBufferHandle>::Initialize(&rv);
  return rv;
}

GpuMemoryBufferHandle::GpuMemoryBufferHandle()
    : type(),
      id(),
      buffer_handle(),
      offset(),
      stride(),
      native_pixmap_handle() {
}

GpuMemoryBufferHandle::~GpuMemoryBufferHandle() {
}
}  // namespace mojom
}  // namespace ui

namespace mojo {


// static
bool StructTraits<::ui::mojom::GpuMemoryBufferId, ::ui::mojom::GpuMemoryBufferIdPtr>::Read(
    ::ui::mojom::GpuMemoryBufferIdDataView input,
    ::ui::mojom::GpuMemoryBufferIdPtr* output) {
  bool success = true;
  ::ui::mojom::GpuMemoryBufferIdPtr result(::ui::mojom::GpuMemoryBufferId::New());
  
      result->id = input.id();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::ui::mojom::NativePixmapHandle, ::ui::mojom::NativePixmapHandlePtr>::Read(
    ::ui::mojom::NativePixmapHandleDataView input,
    ::ui::mojom::NativePixmapHandlePtr* output) {
  bool success = true;
  ::ui::mojom::NativePixmapHandlePtr result(::ui::mojom::NativePixmapHandle::New());
  
      result->fd = input.TakeFd();
      result->stride = input.stride();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::ui::mojom::GpuMemoryBufferHandle, ::ui::mojom::GpuMemoryBufferHandlePtr>::Read(
    ::ui::mojom::GpuMemoryBufferHandleDataView input,
    ::ui::mojom::GpuMemoryBufferHandlePtr* output) {
  bool success = true;
  ::ui::mojom::GpuMemoryBufferHandlePtr result(::ui::mojom::GpuMemoryBufferHandle::New());
  
      if (!input.ReadType(&result->type))
        success = false;
      if (!input.ReadId(&result->id))
        success = false;
      result->buffer_handle = input.TakeBufferHandle();
      result->offset = input.offset();
      result->stride = input.stride();
      if (!input.ReadNativePixmapHandle(&result->native_pixmap_handle))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo


#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
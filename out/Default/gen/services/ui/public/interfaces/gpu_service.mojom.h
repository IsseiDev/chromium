// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_GPU_SERVICE_MOJOM_H_
#define SERVICES_UI_PUBLIC_INTERFACES_GPU_SERVICE_MOJOM_H_

#include <stdint.h>

#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/optional.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/lib/control_message_proxy.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/lib/union_accessor.h"
#include "mojo/public/cpp/bindings/map.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/message_filter.h"
#include "mojo/public/cpp/bindings/native_struct.h"
#include "mojo/public/cpp/bindings/native_struct_data_view.h"
#include "mojo/public/cpp/bindings/no_interface.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "services/ui/public/interfaces/gpu_service.mojom-shared.h"
#include "gpu/ipc/common/gpu_info.mojom.h"
#include "gpu/ipc/common/sync_token.mojom.h"
#include "services/ui/public/interfaces/gpu_memory_buffer.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
#include "ui/gfx/mojo/buffer_types.mojom.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"
#include "gpu/config/dx_diag_node.h"
#include "ui/gfx/geometry/point.h"
#include "cc/output/compositor_frame.h"
#include "third_party/skia/include/core/SkImageFilter.h"
#include "gpu/command_buffer/common/sync_token.h"
#include "cc/output/filter_operation.h"
#include "ui/display/display.h"
#include "ui/gfx/geometry/vector2d_f.h"
#include "ui/gfx/geometry/insets.h"
#include "base/version.h"
#include "gpu/config/gpu_info.h"
#include "base/time/time.h"
#include "cc/output/filter_operations.h"
#include "base/strings/string16.h"
#include "ui/gfx/selection_bound.h"
#include "gpu/command_buffer/common/capabilities.h"
#include "ui/gfx/geometry/size.h"
#include "base/values.h"
#include "ui/events/latency_info.h"
#include "cc/output/begin_frame_args.h"
#include "cc/output/compositor_frame_metadata.h"
#include "ui/events/event.h"
#include "cc/quads/draw_quad.h"
#include "base/files/file_path.h"
#include "ui/gfx/geometry/rect_f.h"
#include "cc/quads/render_pass.h"
#include "gpu/command_buffer/common/mailbox_holder.h"
#include "cc/resources/returned_resource.h"
#include "ui/gfx/buffer_types.h"
#include "ui/gfx/geometry/point_f.h"
#include "gpu/command_buffer/common/mailbox.h"
#include "cc/input/selection.h"
#include "third_party/skia/include/core/SkBitmap.h"
#include "ui/gfx/native_widget_types.h"
#include "cc/quads/shared_quad_state.h"
#include "cc/resources/transferable_resource.h"
#include "ui/gfx/transform.h"
#include "ui/gfx/geometry/rect.h"
#include "cc/surfaces/surface_sequence.h"
#include "cc/surfaces/surface_id.h"
#include "ui/gfx/geometry/vector2d.h"
#include "cc/quads/render_pass_id.h"


namespace ui {
namespace mojom {
class GpuService;
using GpuServicePtr = mojo::InterfacePtr<GpuService>;
using GpuServicePtrInfo = mojo::InterfacePtrInfo<GpuService>;
using GpuServiceRequest = mojo::InterfaceRequest<GpuService>;
using GpuServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<GpuService>;
using GpuServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<GpuService>;
using GpuServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<GpuService>;


class GpuServiceProxy;
class GpuServiceStub;

class GpuServiceRequestValidator;
class GpuServiceResponseValidator;

class  GpuService {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = true;

  using Proxy_ = GpuServiceProxy;
  using Stub_ = GpuServiceStub;

  using RequestValidator_ = GpuServiceRequestValidator;
  using ResponseValidator_ = GpuServiceResponseValidator;
  virtual ~GpuService() {}

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool EstablishGpuChannel(int32_t* client_id, mojo::ScopedMessagePipeHandle* channel_handle, gpu::GPUInfo* gpu_info);

  using EstablishGpuChannelCallback = base::Callback<void(int32_t, mojo::ScopedMessagePipeHandle, const gpu::GPUInfo&)>;
  virtual void EstablishGpuChannel(const EstablishGpuChannelCallback& callback) = 0;


  using CreateGpuMemoryBufferCallback = base::Callback<void(::ui::mojom::GpuMemoryBufferHandlePtr)>;
  virtual void CreateGpuMemoryBuffer(::ui::mojom::GpuMemoryBufferIdPtr id, const gfx::Size& size, gfx::BufferFormat format, gfx::BufferUsage usage, uint64_t surface_id, const CreateGpuMemoryBufferCallback& callback) = 0;

  virtual void DestroyGpuMemoryBuffer(::ui::mojom::GpuMemoryBufferIdPtr id, const ::gpu::SyncToken& sync_token) = 0;
};

class  GpuServiceProxy
    : public GpuService,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit GpuServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  bool EstablishGpuChannel(int32_t* client_id, mojo::ScopedMessagePipeHandle* channel_handle, gpu::GPUInfo* gpu_info) override;
  void EstablishGpuChannel(const EstablishGpuChannelCallback& callback) override;
  void CreateGpuMemoryBuffer(::ui::mojom::GpuMemoryBufferIdPtr id, const gfx::Size& size, gfx::BufferFormat format, gfx::BufferUsage usage, uint64_t surface_id, const CreateGpuMemoryBufferCallback& callback) override;
  void DestroyGpuMemoryBuffer(::ui::mojom::GpuMemoryBufferIdPtr id, const ::gpu::SyncToken& sync_token) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class  GpuServiceStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  GpuServiceStub();
  ~GpuServiceStub() override;
  void set_sink(GpuService* sink) { sink_ = sink; }
  GpuService* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  GpuService* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  GpuServiceRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit GpuServiceRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  GpuServiceResponseValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit GpuServiceResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace ui

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_UI_PUBLIC_INTERFACES_GPU_SERVICE_MOJOM_H_
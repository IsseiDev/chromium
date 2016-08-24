// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_SURFACE_MOJOM_H_
#define SERVICES_UI_PUBLIC_INTERFACES_SURFACE_MOJOM_H_

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
#include "services/ui/public/interfaces/surface.mojom-shared.h"
#include "cc/ipc/compositor_frame.mojom.h"
#include "cc/ipc/returned_resource.mojom.h"
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
class Surface;
using SurfacePtr = mojo::InterfacePtr<Surface>;
using SurfacePtrInfo = mojo::InterfacePtrInfo<Surface>;
using SurfaceRequest = mojo::InterfaceRequest<Surface>;
using SurfaceAssociatedPtr =
    mojo::AssociatedInterfacePtr<Surface>;
using SurfaceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Surface>;
using SurfaceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Surface>;

class SurfaceClient;
using SurfaceClientPtr = mojo::InterfacePtr<SurfaceClient>;
using SurfaceClientPtrInfo = mojo::InterfacePtrInfo<SurfaceClient>;
using SurfaceClientRequest = mojo::InterfaceRequest<SurfaceClient>;
using SurfaceClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<SurfaceClient>;
using SurfaceClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<SurfaceClient>;
using SurfaceClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<SurfaceClient>;


class SurfaceProxy;
class SurfaceStub;

class SurfaceRequestValidator;
class SurfaceResponseValidator;

class  Surface {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = SurfaceProxy;
  using Stub_ = SurfaceStub;

  using RequestValidator_ = SurfaceRequestValidator;
  using ResponseValidator_ = SurfaceResponseValidator;
  virtual ~Surface() {}


  using SubmitCompositorFrameCallback = base::Callback<void()>;
  virtual void SubmitCompositorFrame(cc::CompositorFrame frame, const SubmitCompositorFrameCallback& callback) = 0;
};

class SurfaceClientProxy;
class SurfaceClientStub;

class SurfaceClientRequestValidator;

class  SurfaceClient {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = SurfaceClientProxy;
  using Stub_ = SurfaceClientStub;

  using RequestValidator_ = SurfaceClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~SurfaceClient() {}

  virtual void ReturnResources(mojo::Array<cc::ReturnedResource> resources) = 0;
};

class  SurfaceProxy
    : public Surface,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit SurfaceProxy(mojo::MessageReceiverWithResponder* receiver);
  void SubmitCompositorFrame(cc::CompositorFrame frame, const SubmitCompositorFrameCallback& callback) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class  SurfaceClientProxy
    : public SurfaceClient,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit SurfaceClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void ReturnResources(mojo::Array<cc::ReturnedResource> resources) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class  SurfaceStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  SurfaceStub();
  ~SurfaceStub() override;
  void set_sink(Surface* sink) { sink_ = sink; }
  Surface* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  Surface* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  SurfaceClientStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  SurfaceClientStub();
  ~SurfaceClientStub() override;
  void set_sink(SurfaceClient* sink) { sink_ = sink; }
  SurfaceClient* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  SurfaceClient* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  SurfaceRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit SurfaceRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  SurfaceClientRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit SurfaceClientRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  SurfaceResponseValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit SurfaceResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace ui

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_UI_PUBLIC_INTERFACES_SURFACE_MOJOM_H_
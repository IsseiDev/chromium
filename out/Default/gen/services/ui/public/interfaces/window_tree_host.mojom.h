// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_WINDOW_TREE_HOST_MOJOM_H_
#define SERVICES_UI_PUBLIC_INTERFACES_WINDOW_TREE_HOST_MOJOM_H_

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
#include "services/ui/public/interfaces/window_tree_host.mojom-shared.h"
#include "services/ui/public/interfaces/window_tree.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
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
class WindowTreeHost;
using WindowTreeHostPtr = mojo::InterfacePtr<WindowTreeHost>;
using WindowTreeHostPtrInfo = mojo::InterfacePtrInfo<WindowTreeHost>;
using WindowTreeHostRequest = mojo::InterfaceRequest<WindowTreeHost>;
using WindowTreeHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<WindowTreeHost>;
using WindowTreeHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<WindowTreeHost>;
using WindowTreeHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<WindowTreeHost>;

class WindowTreeHostFactory;
using WindowTreeHostFactoryPtr = mojo::InterfacePtr<WindowTreeHostFactory>;
using WindowTreeHostFactoryPtrInfo = mojo::InterfacePtrInfo<WindowTreeHostFactory>;
using WindowTreeHostFactoryRequest = mojo::InterfaceRequest<WindowTreeHostFactory>;
using WindowTreeHostFactoryAssociatedPtr =
    mojo::AssociatedInterfacePtr<WindowTreeHostFactory>;
using WindowTreeHostFactoryAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<WindowTreeHostFactory>;
using WindowTreeHostFactoryAssociatedRequest =
    mojo::AssociatedInterfaceRequest<WindowTreeHostFactory>;


class WindowTreeHostProxy;
class WindowTreeHostStub;

class WindowTreeHostRequestValidator;

class  WindowTreeHost {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = WindowTreeHostProxy;
  using Stub_ = WindowTreeHostStub;

  using RequestValidator_ = WindowTreeHostRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~WindowTreeHost() {}

  virtual void SetSize(const gfx::Size& size) = 0;

  virtual void SetTitle(const mojo::String& title) = 0;
};

class WindowTreeHostFactoryProxy;
class WindowTreeHostFactoryStub;

class WindowTreeHostFactoryRequestValidator;

class  WindowTreeHostFactory {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = WindowTreeHostFactoryProxy;
  using Stub_ = WindowTreeHostFactoryStub;

  using RequestValidator_ = WindowTreeHostFactoryRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~WindowTreeHostFactory() {}

  virtual void CreateWindowTreeHost(WindowTreeHostRequest window_tree_host, ::ui::mojom::WindowTreeClientPtr tree_client) = 0;
};

class  WindowTreeHostProxy
    : public WindowTreeHost,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit WindowTreeHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetSize(const gfx::Size& size) override;
  void SetTitle(const mojo::String& title) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class  WindowTreeHostFactoryProxy
    : public WindowTreeHostFactory,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit WindowTreeHostFactoryProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateWindowTreeHost(WindowTreeHostRequest window_tree_host, ::ui::mojom::WindowTreeClientPtr tree_client) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class  WindowTreeHostStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  WindowTreeHostStub();
  ~WindowTreeHostStub() override;
  void set_sink(WindowTreeHost* sink) { sink_ = sink; }
  WindowTreeHost* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  WindowTreeHost* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  WindowTreeHostFactoryStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  WindowTreeHostFactoryStub();
  ~WindowTreeHostFactoryStub() override;
  void set_sink(WindowTreeHostFactory* sink) { sink_ = sink; }
  WindowTreeHostFactory* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  WindowTreeHostFactory* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  WindowTreeHostRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit WindowTreeHostRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  WindowTreeHostFactoryRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit WindowTreeHostFactoryRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace ui

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_UI_PUBLIC_INTERFACES_WINDOW_TREE_HOST_MOJOM_H_
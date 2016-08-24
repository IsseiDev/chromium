// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_DISPLAY_MOJOM_H_
#define SERVICES_UI_PUBLIC_INTERFACES_DISPLAY_MOJOM_H_

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
#include "services/ui/public/interfaces/display.mojom-shared.h"
#include "services/ui/public/interfaces/window_manager_constants.mojom.h"
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
class DisplayManagerObserver;
using DisplayManagerObserverPtr = mojo::InterfacePtr<DisplayManagerObserver>;
using DisplayManagerObserverPtrInfo = mojo::InterfacePtrInfo<DisplayManagerObserver>;
using DisplayManagerObserverRequest = mojo::InterfaceRequest<DisplayManagerObserver>;
using DisplayManagerObserverAssociatedPtr =
    mojo::AssociatedInterfacePtr<DisplayManagerObserver>;
using DisplayManagerObserverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<DisplayManagerObserver>;
using DisplayManagerObserverAssociatedRequest =
    mojo::AssociatedInterfaceRequest<DisplayManagerObserver>;

class DisplayManager;
using DisplayManagerPtr = mojo::InterfacePtr<DisplayManager>;
using DisplayManagerPtrInfo = mojo::InterfacePtrInfo<DisplayManager>;
using DisplayManagerRequest = mojo::InterfaceRequest<DisplayManager>;
using DisplayManagerAssociatedPtr =
    mojo::AssociatedInterfacePtr<DisplayManager>;
using DisplayManagerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<DisplayManager>;
using DisplayManagerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<DisplayManager>;


class DisplayManagerObserverProxy;
class DisplayManagerObserverStub;

class DisplayManagerObserverRequestValidator;

class  DisplayManagerObserver {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = DisplayManagerObserverProxy;
  using Stub_ = DisplayManagerObserverStub;

  using RequestValidator_ = DisplayManagerObserverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~DisplayManagerObserver() {}

  virtual void OnDisplays(mojo::Array<::ui::mojom::WsDisplayPtr> displays) = 0;

  virtual void OnDisplaysChanged(mojo::Array<::ui::mojom::WsDisplayPtr> displays) = 0;

  virtual void OnDisplayRemoved(int64_t id) = 0;
};

class DisplayManagerProxy;
class DisplayManagerStub;

class DisplayManagerRequestValidator;

class  DisplayManager {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = DisplayManagerProxy;
  using Stub_ = DisplayManagerStub;

  using RequestValidator_ = DisplayManagerRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~DisplayManager() {}

  virtual void AddObserver(DisplayManagerObserverPtr observer) = 0;
};

class  DisplayManagerObserverProxy
    : public DisplayManagerObserver,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit DisplayManagerObserverProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnDisplays(mojo::Array<::ui::mojom::WsDisplayPtr> displays) override;
  void OnDisplaysChanged(mojo::Array<::ui::mojom::WsDisplayPtr> displays) override;
  void OnDisplayRemoved(int64_t id) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class  DisplayManagerProxy
    : public DisplayManager,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit DisplayManagerProxy(mojo::MessageReceiverWithResponder* receiver);
  void AddObserver(DisplayManagerObserverPtr observer) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class  DisplayManagerObserverStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  DisplayManagerObserverStub();
  ~DisplayManagerObserverStub() override;
  void set_sink(DisplayManagerObserver* sink) { sink_ = sink; }
  DisplayManagerObserver* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  DisplayManagerObserver* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  DisplayManagerStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  DisplayManagerStub();
  ~DisplayManagerStub() override;
  void set_sink(DisplayManager* sink) { sink_ = sink; }
  DisplayManager* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  DisplayManager* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  DisplayManagerObserverRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit DisplayManagerObserverRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  DisplayManagerRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit DisplayManagerRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace ui

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_UI_PUBLIC_INTERFACES_DISPLAY_MOJOM_H_
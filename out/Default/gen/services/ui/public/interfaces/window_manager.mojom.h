// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_WINDOW_MANAGER_MOJOM_H_
#define SERVICES_UI_PUBLIC_INTERFACES_WINDOW_MANAGER_MOJOM_H_

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
#include "services/ui/public/interfaces/window_manager.mojom-shared.h"
#include "services/ui/public/interfaces/cursor.mojom.h"
#include "services/ui/public/interfaces/display/display.mojom.h"
#include "services/ui/public/interfaces/event_matcher.mojom.h"
#include "services/ui/public/interfaces/window_manager_constants.mojom.h"
#include "services/ui/public/interfaces/window_tree_constants.mojom.h"
#include "ui/events/mojo/event.mojom.h"
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
class WindowManager;
using WindowManagerPtr = mojo::InterfacePtr<WindowManager>;
using WindowManagerPtrInfo = mojo::InterfacePtrInfo<WindowManager>;
using WindowManagerRequest = mojo::InterfaceRequest<WindowManager>;
using WindowManagerAssociatedPtr =
    mojo::AssociatedInterfacePtr<WindowManager>;
using WindowManagerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<WindowManager>;
using WindowManagerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<WindowManager>;

class WindowManagerClient;
using WindowManagerClientPtr = mojo::InterfacePtr<WindowManagerClient>;
using WindowManagerClientPtrInfo = mojo::InterfacePtrInfo<WindowManagerClient>;
using WindowManagerClientRequest = mojo::InterfaceRequest<WindowManagerClient>;
using WindowManagerClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<WindowManagerClient>;
using WindowManagerClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<WindowManagerClient>;
using WindowManagerClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<WindowManagerClient>;


class WindowManagerProxy;
class WindowManagerStub;

class WindowManagerRequestValidator;

class  WindowManager {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = WindowManagerProxy;
  using Stub_ = WindowManagerStub;

  using RequestValidator_ = WindowManagerRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  static const char* kAlwaysOnTop_Property;
  static const char* kInitialBounds_Property;
  static const char* kName_Property;
  static const char* kPreferredSize_Property;
  static const char* kResizeBehavior_Property;
  static const char* kRestoreBounds_Property;
  static const char* kShadowStyle_Property;
  static const char* kShowState_Property;
  static const char* kUserSetBounds_Property;
  static const char* kWindowAppIcon_Property;
  static const char* kWindowType_Property;
  static const char* kWindowTitle_Property;
  static const char* kWindowIgnoredByShelf_Property;
  static const char* kAppID_Property;
  static const char* kRemoveStandardFrame_Property;
  virtual ~WindowManager() {}

  virtual void OnConnect(uint16_t client_id) = 0;

  virtual void WmNewDisplayAdded(const display::Display& display, ::ui::mojom::WindowDataPtr root, bool parent_drawn) = 0;

  virtual void WmSetBounds(uint32_t change_id, uint32_t window_id, const gfx::Rect& bounds) = 0;

  virtual void WmSetProperty(uint32_t change_id, uint32_t window_id, const mojo::String& name, mojo::Array<uint8_t> value) = 0;

  virtual void WmCreateTopLevelWindow(uint32_t change_id, uint16_t requesting_client_id, mojo::Map<mojo::String, mojo::Array<uint8_t>> properties) = 0;

  virtual void WmClientJankinessChanged(uint16_t client_id, bool janky) = 0;

  virtual void WmPerformMoveLoop(uint32_t change_id, uint32_t window_id, ::ui::mojom::MoveLoopSource source, const gfx::Point& cursor_location) = 0;

  virtual void WmCancelMoveLoop(uint32_t change_id) = 0;

  virtual void OnAccelerator(uint32_t ack_id, uint32_t accelerator_id, std::unique_ptr<ui::Event> event) = 0;
};

class WindowManagerClientProxy;
class WindowManagerClientStub;

class WindowManagerClientRequestValidator;
class WindowManagerClientResponseValidator;

class  WindowManagerClient {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = WindowManagerClientProxy;
  using Stub_ = WindowManagerClientStub;

  using RequestValidator_ = WindowManagerClientRequestValidator;
  using ResponseValidator_ = WindowManagerClientResponseValidator;
  virtual ~WindowManagerClient() {}

  virtual void AddActivationParent(uint32_t window_id) = 0;

  virtual void RemoveActivationParent(uint32_t window_id) = 0;

  virtual void ActivateNextWindow() = 0;

  virtual void SetUnderlaySurfaceOffsetAndExtendedHitArea(uint32_t window_id, int32_t x_offset, int32_t y_offset, const gfx::Insets& hit_area) = 0;


  using AddAcceleratorCallback = base::Callback<void(bool)>;
  virtual void AddAccelerator(uint32_t id, ::ui::mojom::EventMatcherPtr matcher, const AddAcceleratorCallback& callback) = 0;

  virtual void RemoveAccelerator(uint32_t id) = 0;

  virtual void WmResponse(uint32_t change_id, bool response) = 0;

  virtual void WmRequestClose(uint32_t window_id) = 0;

  virtual void WmSetFrameDecorationValues(::ui::mojom::FrameDecorationValuesPtr values) = 0;

  virtual void WmSetNonClientCursor(uint32_t window_id, ::ui::mojom::Cursor cursor_id) = 0;

  virtual void OnWmCreatedTopLevelWindow(uint32_t change_id, uint32_t window_id) = 0;

  virtual void OnAcceleratorAck(uint32_t ack_id, ::ui::mojom::EventResult event_result) = 0;
};

class  WindowManagerProxy
    : public WindowManager,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit WindowManagerProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnConnect(uint16_t client_id) override;
  void WmNewDisplayAdded(const display::Display& display, ::ui::mojom::WindowDataPtr root, bool parent_drawn) override;
  void WmSetBounds(uint32_t change_id, uint32_t window_id, const gfx::Rect& bounds) override;
  void WmSetProperty(uint32_t change_id, uint32_t window_id, const mojo::String& name, mojo::Array<uint8_t> value) override;
  void WmCreateTopLevelWindow(uint32_t change_id, uint16_t requesting_client_id, mojo::Map<mojo::String, mojo::Array<uint8_t>> properties) override;
  void WmClientJankinessChanged(uint16_t client_id, bool janky) override;
  void WmPerformMoveLoop(uint32_t change_id, uint32_t window_id, ::ui::mojom::MoveLoopSource source, const gfx::Point& cursor_location) override;
  void WmCancelMoveLoop(uint32_t change_id) override;
  void OnAccelerator(uint32_t ack_id, uint32_t accelerator_id, std::unique_ptr<ui::Event> event) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class  WindowManagerClientProxy
    : public WindowManagerClient,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit WindowManagerClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void AddActivationParent(uint32_t window_id) override;
  void RemoveActivationParent(uint32_t window_id) override;
  void ActivateNextWindow() override;
  void SetUnderlaySurfaceOffsetAndExtendedHitArea(uint32_t window_id, int32_t x_offset, int32_t y_offset, const gfx::Insets& hit_area) override;
  void AddAccelerator(uint32_t id, ::ui::mojom::EventMatcherPtr matcher, const AddAcceleratorCallback& callback) override;
  void RemoveAccelerator(uint32_t id) override;
  void WmResponse(uint32_t change_id, bool response) override;
  void WmRequestClose(uint32_t window_id) override;
  void WmSetFrameDecorationValues(::ui::mojom::FrameDecorationValuesPtr values) override;
  void WmSetNonClientCursor(uint32_t window_id, ::ui::mojom::Cursor cursor_id) override;
  void OnWmCreatedTopLevelWindow(uint32_t change_id, uint32_t window_id) override;
  void OnAcceleratorAck(uint32_t ack_id, ::ui::mojom::EventResult event_result) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class  WindowManagerStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  WindowManagerStub();
  ~WindowManagerStub() override;
  void set_sink(WindowManager* sink) { sink_ = sink; }
  WindowManager* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  WindowManager* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  WindowManagerClientStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  WindowManagerClientStub();
  ~WindowManagerClientStub() override;
  void set_sink(WindowManagerClient* sink) { sink_ = sink; }
  WindowManagerClient* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  WindowManagerClient* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  WindowManagerRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit WindowManagerRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  WindowManagerClientRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit WindowManagerClientRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  WindowManagerClientResponseValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit WindowManagerClientResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace ui

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_UI_PUBLIC_INTERFACES_WINDOW_MANAGER_MOJOM_H_
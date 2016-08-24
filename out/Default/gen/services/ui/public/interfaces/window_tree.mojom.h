// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_WINDOW_TREE_MOJOM_H_
#define SERVICES_UI_PUBLIC_INTERFACES_WINDOW_TREE_MOJOM_H_

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
#include "services/ui/public/interfaces/window_tree.mojom-shared.h"
#include "cc/ipc/surface_id.mojom.h"
#include "services/ui/public/interfaces/cursor.mojom.h"
#include "services/ui/public/interfaces/event_matcher.mojom.h"
#include "services/ui/public/interfaces/mus_constants.mojom.h"
#include "services/ui/public/interfaces/surface.mojom.h"
#include "services/ui/public/interfaces/window_manager.mojom.h"
#include "services/ui/public/interfaces/window_manager_constants.mojom.h"
#include "services/ui/public/interfaces/window_tree_constants.mojom.h"
#include "ui/events/mojo/event.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
#include "ui/platform_window/mojo/text_input_state.mojom.h"
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
class WindowTree;
using WindowTreePtr = mojo::InterfacePtr<WindowTree>;
using WindowTreePtrInfo = mojo::InterfacePtrInfo<WindowTree>;
using WindowTreeRequest = mojo::InterfaceRequest<WindowTree>;
using WindowTreeAssociatedPtr =
    mojo::AssociatedInterfacePtr<WindowTree>;
using WindowTreeAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<WindowTree>;
using WindowTreeAssociatedRequest =
    mojo::AssociatedInterfaceRequest<WindowTree>;

class WindowTreeClient;
using WindowTreeClientPtr = mojo::InterfacePtr<WindowTreeClient>;
using WindowTreeClientPtrInfo = mojo::InterfacePtrInfo<WindowTreeClient>;
using WindowTreeClientRequest = mojo::InterfaceRequest<WindowTreeClient>;
using WindowTreeClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<WindowTreeClient>;
using WindowTreeClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<WindowTreeClient>;
using WindowTreeClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<WindowTreeClient>;

class WindowTreeFactory;
using WindowTreeFactoryPtr = mojo::InterfacePtr<WindowTreeFactory>;
using WindowTreeFactoryPtrInfo = mojo::InterfacePtrInfo<WindowTreeFactory>;
using WindowTreeFactoryRequest = mojo::InterfaceRequest<WindowTreeFactory>;
using WindowTreeFactoryAssociatedPtr =
    mojo::AssociatedInterfacePtr<WindowTreeFactory>;
using WindowTreeFactoryAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<WindowTreeFactory>;
using WindowTreeFactoryAssociatedRequest =
    mojo::AssociatedInterfaceRequest<WindowTreeFactory>;


class WindowTreeProxy;
class WindowTreeStub;

class WindowTreeRequestValidator;
class WindowTreeResponseValidator;

class  WindowTree {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = true;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = WindowTreeProxy;
  using Stub_ = WindowTreeStub;

  using RequestValidator_ = WindowTreeRequestValidator;
  using ResponseValidator_ = WindowTreeResponseValidator;
  virtual ~WindowTree() {}

  virtual void NewWindow(uint32_t change_id, uint32_t window_id, mojo::Map<mojo::String, mojo::Array<uint8_t>> properties) = 0;

  virtual void NewTopLevelWindow(uint32_t change_id, uint32_t window_id, mojo::Map<mojo::String, mojo::Array<uint8_t>> properties) = 0;

  virtual void DeleteWindow(uint32_t change_id, uint32_t window_id) = 0;

  virtual void SetCapture(uint32_t change_id, uint32_t window_id) = 0;

  virtual void ReleaseCapture(uint32_t change_id, uint32_t window_id) = 0;

  virtual void StartPointerWatcher(bool want_moves) = 0;

  virtual void StopPointerWatcher() = 0;

  virtual void SetWindowBounds(uint32_t change_id, uint32_t window_id, const gfx::Rect& bounds) = 0;

  virtual void SetClientArea(uint32_t window_id, const gfx::Insets& insets, mojo::Array<gfx::Rect> additional_client_areas) = 0;

  virtual void SetHitTestMask(uint32_t window_id, const base::Optional<gfx::Rect>& mask) = 0;

  virtual void SetWindowVisibility(uint32_t change_id, uint32_t window_id, bool visible) = 0;

  virtual void SetWindowProperty(uint32_t change_id, uint32_t window_id, const mojo::String& name, mojo::Array<uint8_t> value) = 0;

  virtual void SetWindowOpacity(uint32_t change_id, uint32_t window_id, float opacity) = 0;

  virtual void AttachSurface(uint32_t window_id, ::ui::mojom::SurfaceType type, ::ui::mojom::SurfaceRequest surface, ::ui::mojom::SurfaceClientPtr client) = 0;

  virtual void AddWindow(uint32_t change_id, uint32_t parent, uint32_t child) = 0;

  virtual void RemoveWindowFromParent(uint32_t change_id, uint32_t window_id) = 0;

  virtual void AddTransientWindow(uint32_t change_id, uint32_t window_id, uint32_t transient_window_id) = 0;

  virtual void RemoveTransientWindowFromParent(uint32_t change_id, uint32_t transient_window_id) = 0;

  virtual void SetModal(uint32_t change_id, uint32_t window_id) = 0;

  virtual void ReorderWindow(uint32_t change_id, uint32_t window_id, uint32_t relative_window_id, ::ui::mojom::OrderDirection direction) = 0;


  using GetWindowTreeCallback = base::Callback<void(mojo::Array<::ui::mojom::WindowDataPtr>)>;
  virtual void GetWindowTree(uint32_t window_id, const GetWindowTreeCallback& callback) = 0;


  using EmbedCallback = base::Callback<void(bool)>;
  virtual void Embed(uint32_t window_id, WindowTreeClientPtr client, uint32_t embed_flags, const EmbedCallback& callback) = 0;

  virtual void SetFocus(uint32_t change_id, uint32_t window_id) = 0;

  virtual void SetCanFocus(uint32_t window_id, bool can_focus) = 0;

  virtual void SetPredefinedCursor(uint32_t change_id, uint32_t window_id, ::ui::mojom::Cursor cursor_id) = 0;

  virtual void SetWindowTextInputState(uint32_t window_id, ::mojo::TextInputStatePtr state) = 0;

  virtual void SetImeVisibility(uint32_t window_id, bool visible, ::mojo::TextInputStatePtr state) = 0;

  virtual void SetCanAcceptEvents(uint32_t window_id, bool accept_events) = 0;

  virtual void OnWindowInputEventAck(uint32_t event_id, ::ui::mojom::EventResult result) = 0;

  virtual void GetWindowManagerClient(::ui::mojom::WindowManagerClientAssociatedRequest internal) = 0;


  using GetCursorLocationMemoryCallback = base::Callback<void(mojo::ScopedSharedBufferHandle)>;
  virtual void GetCursorLocationMemory(const GetCursorLocationMemoryCallback& callback) = 0;

  virtual void PerformWindowMove(uint32_t change_id, uint32_t window_id, ::ui::mojom::MoveLoopSource source, const gfx::Point& cursor) = 0;

  virtual void CancelWindowMove(uint32_t window_id) = 0;
};

class WindowTreeClientProxy;
class WindowTreeClientStub;

class WindowTreeClientRequestValidator;

class  WindowTreeClient {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = true;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = WindowTreeClientProxy;
  using Stub_ = WindowTreeClientStub;

  using RequestValidator_ = WindowTreeClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~WindowTreeClient() {}

  virtual void OnEmbed(uint16_t connection_id, ::ui::mojom::WindowDataPtr root, WindowTreePtr tree, int64_t display_id, uint32_t focused_window, bool parent_drawn) = 0;

  virtual void OnEmbeddedAppDisconnected(uint32_t window) = 0;

  virtual void OnUnembed(uint32_t window) = 0;

  virtual void OnCaptureChanged(uint32_t new_capture, uint32_t old_capture) = 0;

  virtual void OnTopLevelCreated(uint32_t change_id, ::ui::mojom::WindowDataPtr data, int64_t display_id, bool parent_drawn) = 0;

  virtual void OnWindowBoundsChanged(uint32_t window, const gfx::Rect& old_bounds, const gfx::Rect& new_bounds) = 0;

  virtual void OnClientAreaChanged(uint32_t window_id, const gfx::Insets& new_client_area, mojo::Array<gfx::Rect> new_additional_client_areas) = 0;

  virtual void OnTransientWindowAdded(uint32_t window_id, uint32_t transient_window_id) = 0;

  virtual void OnTransientWindowRemoved(uint32_t window_id, uint32_t transient_window_id) = 0;

  virtual void OnWindowHierarchyChanged(uint32_t window, uint32_t old_parent, uint32_t new_parent, mojo::Array<::ui::mojom::WindowDataPtr> windows) = 0;

  virtual void OnWindowReordered(uint32_t window_id, uint32_t relative_window_id, ::ui::mojom::OrderDirection direction) = 0;

  virtual void OnWindowDeleted(uint32_t window) = 0;

  virtual void OnWindowVisibilityChanged(uint32_t window, bool visible) = 0;

  virtual void OnWindowOpacityChanged(uint32_t window, float old_opacity, float new_opacity) = 0;

  virtual void OnWindowParentDrawnStateChanged(uint32_t window, bool drawn) = 0;

  virtual void OnWindowSharedPropertyChanged(uint32_t window, const mojo::String& name, mojo::Array<uint8_t> new_data) = 0;

  virtual void OnWindowInputEvent(uint32_t event_id, uint32_t window, std::unique_ptr<ui::Event> event, bool matches_pointer_watcher) = 0;

  virtual void OnPointerEventObserved(std::unique_ptr<ui::Event> event, uint32_t window_id) = 0;

  virtual void OnWindowFocused(uint32_t focused_window_id) = 0;

  virtual void OnWindowPredefinedCursorChanged(uint32_t window_id, ::ui::mojom::Cursor cursor_id) = 0;

  virtual void OnChangeCompleted(uint32_t change_id, bool success) = 0;

  virtual void RequestClose(uint32_t window_id) = 0;

  virtual void GetWindowManager(::ui::mojom::WindowManagerAssociatedRequest internal) = 0;
};

class WindowTreeFactoryProxy;
class WindowTreeFactoryStub;

class WindowTreeFactoryRequestValidator;

class  WindowTreeFactory {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = WindowTreeFactoryProxy;
  using Stub_ = WindowTreeFactoryStub;

  using RequestValidator_ = WindowTreeFactoryRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~WindowTreeFactory() {}

  virtual void CreateWindowTree(WindowTreeRequest tree_request, WindowTreeClientPtr client) = 0;
};

class  WindowTreeProxy
    : public WindowTree,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit WindowTreeProxy(mojo::MessageReceiverWithResponder* receiver);
  void NewWindow(uint32_t change_id, uint32_t window_id, mojo::Map<mojo::String, mojo::Array<uint8_t>> properties) override;
  void NewTopLevelWindow(uint32_t change_id, uint32_t window_id, mojo::Map<mojo::String, mojo::Array<uint8_t>> properties) override;
  void DeleteWindow(uint32_t change_id, uint32_t window_id) override;
  void SetCapture(uint32_t change_id, uint32_t window_id) override;
  void ReleaseCapture(uint32_t change_id, uint32_t window_id) override;
  void StartPointerWatcher(bool want_moves) override;
  void StopPointerWatcher() override;
  void SetWindowBounds(uint32_t change_id, uint32_t window_id, const gfx::Rect& bounds) override;
  void SetClientArea(uint32_t window_id, const gfx::Insets& insets, mojo::Array<gfx::Rect> additional_client_areas) override;
  void SetHitTestMask(uint32_t window_id, const base::Optional<gfx::Rect>& mask) override;
  void SetWindowVisibility(uint32_t change_id, uint32_t window_id, bool visible) override;
  void SetWindowProperty(uint32_t change_id, uint32_t window_id, const mojo::String& name, mojo::Array<uint8_t> value) override;
  void SetWindowOpacity(uint32_t change_id, uint32_t window_id, float opacity) override;
  void AttachSurface(uint32_t window_id, ::ui::mojom::SurfaceType type, ::ui::mojom::SurfaceRequest surface, ::ui::mojom::SurfaceClientPtr client) override;
  void AddWindow(uint32_t change_id, uint32_t parent, uint32_t child) override;
  void RemoveWindowFromParent(uint32_t change_id, uint32_t window_id) override;
  void AddTransientWindow(uint32_t change_id, uint32_t window_id, uint32_t transient_window_id) override;
  void RemoveTransientWindowFromParent(uint32_t change_id, uint32_t transient_window_id) override;
  void SetModal(uint32_t change_id, uint32_t window_id) override;
  void ReorderWindow(uint32_t change_id, uint32_t window_id, uint32_t relative_window_id, ::ui::mojom::OrderDirection direction) override;
  void GetWindowTree(uint32_t window_id, const GetWindowTreeCallback& callback) override;
  void Embed(uint32_t window_id, WindowTreeClientPtr client, uint32_t embed_flags, const EmbedCallback& callback) override;
  void SetFocus(uint32_t change_id, uint32_t window_id) override;
  void SetCanFocus(uint32_t window_id, bool can_focus) override;
  void SetPredefinedCursor(uint32_t change_id, uint32_t window_id, ::ui::mojom::Cursor cursor_id) override;
  void SetWindowTextInputState(uint32_t window_id, ::mojo::TextInputStatePtr state) override;
  void SetImeVisibility(uint32_t window_id, bool visible, ::mojo::TextInputStatePtr state) override;
  void SetCanAcceptEvents(uint32_t window_id, bool accept_events) override;
  void OnWindowInputEventAck(uint32_t event_id, ::ui::mojom::EventResult result) override;
  void GetWindowManagerClient(::ui::mojom::WindowManagerClientAssociatedRequest internal) override;
  void GetCursorLocationMemory(const GetCursorLocationMemoryCallback& callback) override;
  void PerformWindowMove(uint32_t change_id, uint32_t window_id, ::ui::mojom::MoveLoopSource source, const gfx::Point& cursor) override;
  void CancelWindowMove(uint32_t window_id) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class  WindowTreeClientProxy
    : public WindowTreeClient,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit WindowTreeClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnEmbed(uint16_t connection_id, ::ui::mojom::WindowDataPtr root, WindowTreePtr tree, int64_t display_id, uint32_t focused_window, bool parent_drawn) override;
  void OnEmbeddedAppDisconnected(uint32_t window) override;
  void OnUnembed(uint32_t window) override;
  void OnCaptureChanged(uint32_t new_capture, uint32_t old_capture) override;
  void OnTopLevelCreated(uint32_t change_id, ::ui::mojom::WindowDataPtr data, int64_t display_id, bool parent_drawn) override;
  void OnWindowBoundsChanged(uint32_t window, const gfx::Rect& old_bounds, const gfx::Rect& new_bounds) override;
  void OnClientAreaChanged(uint32_t window_id, const gfx::Insets& new_client_area, mojo::Array<gfx::Rect> new_additional_client_areas) override;
  void OnTransientWindowAdded(uint32_t window_id, uint32_t transient_window_id) override;
  void OnTransientWindowRemoved(uint32_t window_id, uint32_t transient_window_id) override;
  void OnWindowHierarchyChanged(uint32_t window, uint32_t old_parent, uint32_t new_parent, mojo::Array<::ui::mojom::WindowDataPtr> windows) override;
  void OnWindowReordered(uint32_t window_id, uint32_t relative_window_id, ::ui::mojom::OrderDirection direction) override;
  void OnWindowDeleted(uint32_t window) override;
  void OnWindowVisibilityChanged(uint32_t window, bool visible) override;
  void OnWindowOpacityChanged(uint32_t window, float old_opacity, float new_opacity) override;
  void OnWindowParentDrawnStateChanged(uint32_t window, bool drawn) override;
  void OnWindowSharedPropertyChanged(uint32_t window, const mojo::String& name, mojo::Array<uint8_t> new_data) override;
  void OnWindowInputEvent(uint32_t event_id, uint32_t window, std::unique_ptr<ui::Event> event, bool matches_pointer_watcher) override;
  void OnPointerEventObserved(std::unique_ptr<ui::Event> event, uint32_t window_id) override;
  void OnWindowFocused(uint32_t focused_window_id) override;
  void OnWindowPredefinedCursorChanged(uint32_t window_id, ::ui::mojom::Cursor cursor_id) override;
  void OnChangeCompleted(uint32_t change_id, bool success) override;
  void RequestClose(uint32_t window_id) override;
  void GetWindowManager(::ui::mojom::WindowManagerAssociatedRequest internal) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class  WindowTreeFactoryProxy
    : public WindowTreeFactory,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit WindowTreeFactoryProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateWindowTree(WindowTreeRequest tree_request, WindowTreeClientPtr client) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class  WindowTreeStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  WindowTreeStub();
  ~WindowTreeStub() override;
  void set_sink(WindowTree* sink) { sink_ = sink; }
  WindowTree* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  WindowTree* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  WindowTreeClientStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  WindowTreeClientStub();
  ~WindowTreeClientStub() override;
  void set_sink(WindowTreeClient* sink) { sink_ = sink; }
  WindowTreeClient* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  WindowTreeClient* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  WindowTreeFactoryStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  WindowTreeFactoryStub();
  ~WindowTreeFactoryStub() override;
  void set_sink(WindowTreeFactory* sink) { sink_ = sink; }
  WindowTreeFactory* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  WindowTreeFactory* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  WindowTreeRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit WindowTreeRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  WindowTreeClientRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit WindowTreeClientRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  WindowTreeFactoryRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit WindowTreeFactoryRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  WindowTreeResponseValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit WindowTreeResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace ui

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_UI_PUBLIC_INTERFACES_WINDOW_TREE_MOJOM_H_
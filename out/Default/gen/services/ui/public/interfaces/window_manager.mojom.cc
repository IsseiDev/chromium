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

#include "services/ui/public/interfaces/window_manager.mojom.h"

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

class WindowManager_OnConnect_ParamsDataView {
 public:
  WindowManager_OnConnect_ParamsDataView() {}

  WindowManager_OnConnect_ParamsDataView(
      internal::WindowManager_OnConnect_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint16_t client_id() const {
    return data_->client_id;
  }
 private:
  internal::WindowManager_OnConnect_Params_Data* data_ = nullptr;
};




class WindowManager_WmNewDisplayAdded_ParamsDataView {
 public:
  WindowManager_WmNewDisplayAdded_ParamsDataView() {}

  WindowManager_WmNewDisplayAdded_ParamsDataView(
      internal::WindowManager_WmNewDisplayAdded_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDisplayDataView(
      ::display::mojom::DisplayDataView* output);

  template <typename UserType>
  bool ReadDisplay(UserType* output) {
    auto pointer = data_->display.Get();
    return mojo::internal::Deserialize<::display::mojom::DisplayPtr>(
        pointer, output, context_);
  }
  inline void GetRootDataView(
      ::ui::mojom::WindowDataDataView* output);

  template <typename UserType>
  bool ReadRoot(UserType* output) {
    auto pointer = data_->root.Get();
    return mojo::internal::Deserialize<::ui::mojom::WindowDataPtr>(
        pointer, output, context_);
  }
  bool parent_drawn() const {
    return data_->parent_drawn;
  }
 private:
  internal::WindowManager_WmNewDisplayAdded_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void WindowManager_WmNewDisplayAdded_ParamsDataView::GetDisplayDataView(
    ::display::mojom::DisplayDataView* output) {
  auto pointer = data_->display.Get();
  *output = ::display::mojom::DisplayDataView(pointer, context_);
}
inline void WindowManager_WmNewDisplayAdded_ParamsDataView::GetRootDataView(
    ::ui::mojom::WindowDataDataView* output) {
  auto pointer = data_->root.Get();
  *output = ::ui::mojom::WindowDataDataView(pointer, context_);
}


class WindowManager_WmSetBounds_ParamsDataView {
 public:
  WindowManager_WmSetBounds_ParamsDataView() {}

  WindowManager_WmSetBounds_ParamsDataView(
      internal::WindowManager_WmSetBounds_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t change_id() const {
    return data_->change_id;
  }
  uint32_t window_id() const {
    return data_->window_id;
  }
  inline void GetBoundsDataView(
      ::gfx::mojom::RectDataView* output);

  template <typename UserType>
  bool ReadBounds(UserType* output) {
    auto pointer = data_->bounds.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectPtr>(
        pointer, output, context_);
  }
 private:
  internal::WindowManager_WmSetBounds_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void WindowManager_WmSetBounds_ParamsDataView::GetBoundsDataView(
    ::gfx::mojom::RectDataView* output) {
  auto pointer = data_->bounds.Get();
  *output = ::gfx::mojom::RectDataView(pointer, context_);
}


class WindowManager_WmSetProperty_ParamsDataView {
 public:
  WindowManager_WmSetProperty_ParamsDataView() {}

  WindowManager_WmSetProperty_ParamsDataView(
      internal::WindowManager_WmSetProperty_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t change_id() const {
    return data_->change_id;
  }
  uint32_t window_id() const {
    return data_->window_id;
  }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadName(UserType* output) {
    auto pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetValueDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  bool ReadValue(UserType* output) {
    auto pointer = data_->value.Get();
    return mojo::internal::Deserialize<mojo::Array<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::WindowManager_WmSetProperty_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void WindowManager_WmSetProperty_ParamsDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void WindowManager_WmSetProperty_ParamsDataView::GetValueDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->value.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


class WindowManager_WmCreateTopLevelWindow_ParamsDataView {
 public:
  WindowManager_WmCreateTopLevelWindow_ParamsDataView() {}

  WindowManager_WmCreateTopLevelWindow_ParamsDataView(
      internal::WindowManager_WmCreateTopLevelWindow_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t change_id() const {
    return data_->change_id;
  }
  uint16_t requesting_client_id() const {
    return data_->requesting_client_id;
  }
  inline void GetPropertiesDataView(
      mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>* output);

  template <typename UserType>
  bool ReadProperties(UserType* output) {
    auto pointer = data_->properties.Get();
    return mojo::internal::Deserialize<mojo::Map<mojo::String, mojo::Array<uint8_t>>>(
        pointer, output, context_);
  }
 private:
  internal::WindowManager_WmCreateTopLevelWindow_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void WindowManager_WmCreateTopLevelWindow_ParamsDataView::GetPropertiesDataView(
    mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>* output) {
  auto pointer = data_->properties.Get();
  *output = mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>(pointer, context_);
}


class WindowManager_WmClientJankinessChanged_ParamsDataView {
 public:
  WindowManager_WmClientJankinessChanged_ParamsDataView() {}

  WindowManager_WmClientJankinessChanged_ParamsDataView(
      internal::WindowManager_WmClientJankinessChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint16_t client_id() const {
    return data_->client_id;
  }
  bool janky() const {
    return data_->janky;
  }
 private:
  internal::WindowManager_WmClientJankinessChanged_Params_Data* data_ = nullptr;
};




class WindowManager_WmPerformMoveLoop_ParamsDataView {
 public:
  WindowManager_WmPerformMoveLoop_ParamsDataView() {}

  WindowManager_WmPerformMoveLoop_ParamsDataView(
      internal::WindowManager_WmPerformMoveLoop_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t change_id() const {
    return data_->change_id;
  }
  uint32_t window_id() const {
    return data_->window_id;
  }
  template <typename UserType>
  bool ReadSource(UserType* output) const {
    auto data_value = data_->source;
    return mojo::internal::Deserialize<::ui::mojom::MoveLoopSource>(
        data_value, output);
  }

  ::ui::mojom::MoveLoopSource source() const {
    return static_cast<::ui::mojom::MoveLoopSource>(data_->source);
  }
  inline void GetCursorLocationDataView(
      ::gfx::mojom::PointDataView* output);

  template <typename UserType>
  bool ReadCursorLocation(UserType* output) {
    auto pointer = data_->cursor_location.Get();
    return mojo::internal::Deserialize<::gfx::mojom::PointPtr>(
        pointer, output, context_);
  }
 private:
  internal::WindowManager_WmPerformMoveLoop_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void WindowManager_WmPerformMoveLoop_ParamsDataView::GetCursorLocationDataView(
    ::gfx::mojom::PointDataView* output) {
  auto pointer = data_->cursor_location.Get();
  *output = ::gfx::mojom::PointDataView(pointer, context_);
}


class WindowManager_WmCancelMoveLoop_ParamsDataView {
 public:
  WindowManager_WmCancelMoveLoop_ParamsDataView() {}

  WindowManager_WmCancelMoveLoop_ParamsDataView(
      internal::WindowManager_WmCancelMoveLoop_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t change_id() const {
    return data_->change_id;
  }
 private:
  internal::WindowManager_WmCancelMoveLoop_Params_Data* data_ = nullptr;
};




class WindowManager_OnAccelerator_ParamsDataView {
 public:
  WindowManager_OnAccelerator_ParamsDataView() {}

  WindowManager_OnAccelerator_ParamsDataView(
      internal::WindowManager_OnAccelerator_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t ack_id() const {
    return data_->ack_id;
  }
  uint32_t accelerator_id() const {
    return data_->accelerator_id;
  }
  inline void GetEventDataView(
      ::ui::mojom::EventDataView* output);

  template <typename UserType>
  bool ReadEvent(UserType* output) {
    auto pointer = data_->event.Get();
    return mojo::internal::Deserialize<::ui::mojom::EventPtr>(
        pointer, output, context_);
  }
 private:
  internal::WindowManager_OnAccelerator_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void WindowManager_OnAccelerator_ParamsDataView::GetEventDataView(
    ::ui::mojom::EventDataView* output) {
  auto pointer = data_->event.Get();
  *output = ::ui::mojom::EventDataView(pointer, context_);
}


class WindowManagerClient_AddActivationParent_ParamsDataView {
 public:
  WindowManagerClient_AddActivationParent_ParamsDataView() {}

  WindowManagerClient_AddActivationParent_ParamsDataView(
      internal::WindowManagerClient_AddActivationParent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t window_id() const {
    return data_->window_id;
  }
 private:
  internal::WindowManagerClient_AddActivationParent_Params_Data* data_ = nullptr;
};




class WindowManagerClient_RemoveActivationParent_ParamsDataView {
 public:
  WindowManagerClient_RemoveActivationParent_ParamsDataView() {}

  WindowManagerClient_RemoveActivationParent_ParamsDataView(
      internal::WindowManagerClient_RemoveActivationParent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t window_id() const {
    return data_->window_id;
  }
 private:
  internal::WindowManagerClient_RemoveActivationParent_Params_Data* data_ = nullptr;
};




class WindowManagerClient_ActivateNextWindow_ParamsDataView {
 public:
  WindowManagerClient_ActivateNextWindow_ParamsDataView() {}

  WindowManagerClient_ActivateNextWindow_ParamsDataView(
      internal::WindowManagerClient_ActivateNextWindow_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::WindowManagerClient_ActivateNextWindow_Params_Data* data_ = nullptr;
};




class WindowManagerClient_SetUnderlaySurfaceOffsetAndExtendedHitArea_ParamsDataView {
 public:
  WindowManagerClient_SetUnderlaySurfaceOffsetAndExtendedHitArea_ParamsDataView() {}

  WindowManagerClient_SetUnderlaySurfaceOffsetAndExtendedHitArea_ParamsDataView(
      internal::WindowManagerClient_SetUnderlaySurfaceOffsetAndExtendedHitArea_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t window_id() const {
    return data_->window_id;
  }
  int32_t x_offset() const {
    return data_->x_offset;
  }
  int32_t y_offset() const {
    return data_->y_offset;
  }
  inline void GetHitAreaDataView(
      ::gfx::mojom::InsetsDataView* output);

  template <typename UserType>
  bool ReadHitArea(UserType* output) {
    auto pointer = data_->hit_area.Get();
    return mojo::internal::Deserialize<::gfx::mojom::InsetsPtr>(
        pointer, output, context_);
  }
 private:
  internal::WindowManagerClient_SetUnderlaySurfaceOffsetAndExtendedHitArea_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void WindowManagerClient_SetUnderlaySurfaceOffsetAndExtendedHitArea_ParamsDataView::GetHitAreaDataView(
    ::gfx::mojom::InsetsDataView* output) {
  auto pointer = data_->hit_area.Get();
  *output = ::gfx::mojom::InsetsDataView(pointer, context_);
}


class WindowManagerClient_AddAccelerator_ParamsDataView {
 public:
  WindowManagerClient_AddAccelerator_ParamsDataView() {}

  WindowManagerClient_AddAccelerator_ParamsDataView(
      internal::WindowManagerClient_AddAccelerator_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t id() const {
    return data_->id;
  }
  inline void GetMatcherDataView(
      ::ui::mojom::EventMatcherDataView* output);

  template <typename UserType>
  bool ReadMatcher(UserType* output) {
    auto pointer = data_->matcher.Get();
    return mojo::internal::Deserialize<::ui::mojom::EventMatcherPtr>(
        pointer, output, context_);
  }
 private:
  internal::WindowManagerClient_AddAccelerator_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void WindowManagerClient_AddAccelerator_ParamsDataView::GetMatcherDataView(
    ::ui::mojom::EventMatcherDataView* output) {
  auto pointer = data_->matcher.Get();
  *output = ::ui::mojom::EventMatcherDataView(pointer, context_);
}

class WindowManagerClient_AddAccelerator_ResponseParamsDataView {
 public:
  WindowManagerClient_AddAccelerator_ResponseParamsDataView() {}

  WindowManagerClient_AddAccelerator_ResponseParamsDataView(
      internal::WindowManagerClient_AddAccelerator_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::WindowManagerClient_AddAccelerator_ResponseParams_Data* data_ = nullptr;
};




class WindowManagerClient_RemoveAccelerator_ParamsDataView {
 public:
  WindowManagerClient_RemoveAccelerator_ParamsDataView() {}

  WindowManagerClient_RemoveAccelerator_ParamsDataView(
      internal::WindowManagerClient_RemoveAccelerator_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t id() const {
    return data_->id;
  }
 private:
  internal::WindowManagerClient_RemoveAccelerator_Params_Data* data_ = nullptr;
};




class WindowManagerClient_WmResponse_ParamsDataView {
 public:
  WindowManagerClient_WmResponse_ParamsDataView() {}

  WindowManagerClient_WmResponse_ParamsDataView(
      internal::WindowManagerClient_WmResponse_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t change_id() const {
    return data_->change_id;
  }
  bool response() const {
    return data_->response;
  }
 private:
  internal::WindowManagerClient_WmResponse_Params_Data* data_ = nullptr;
};




class WindowManagerClient_WmRequestClose_ParamsDataView {
 public:
  WindowManagerClient_WmRequestClose_ParamsDataView() {}

  WindowManagerClient_WmRequestClose_ParamsDataView(
      internal::WindowManagerClient_WmRequestClose_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t window_id() const {
    return data_->window_id;
  }
 private:
  internal::WindowManagerClient_WmRequestClose_Params_Data* data_ = nullptr;
};




class WindowManagerClient_WmSetFrameDecorationValues_ParamsDataView {
 public:
  WindowManagerClient_WmSetFrameDecorationValues_ParamsDataView() {}

  WindowManagerClient_WmSetFrameDecorationValues_ParamsDataView(
      internal::WindowManagerClient_WmSetFrameDecorationValues_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetValuesDataView(
      ::ui::mojom::FrameDecorationValuesDataView* output);

  template <typename UserType>
  bool ReadValues(UserType* output) {
    auto pointer = data_->values.Get();
    return mojo::internal::Deserialize<::ui::mojom::FrameDecorationValuesPtr>(
        pointer, output, context_);
  }
 private:
  internal::WindowManagerClient_WmSetFrameDecorationValues_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void WindowManagerClient_WmSetFrameDecorationValues_ParamsDataView::GetValuesDataView(
    ::ui::mojom::FrameDecorationValuesDataView* output) {
  auto pointer = data_->values.Get();
  *output = ::ui::mojom::FrameDecorationValuesDataView(pointer, context_);
}


class WindowManagerClient_WmSetNonClientCursor_ParamsDataView {
 public:
  WindowManagerClient_WmSetNonClientCursor_ParamsDataView() {}

  WindowManagerClient_WmSetNonClientCursor_ParamsDataView(
      internal::WindowManagerClient_WmSetNonClientCursor_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t window_id() const {
    return data_->window_id;
  }
  template <typename UserType>
  bool ReadCursorId(UserType* output) const {
    auto data_value = data_->cursor_id;
    return mojo::internal::Deserialize<::ui::mojom::Cursor>(
        data_value, output);
  }

  ::ui::mojom::Cursor cursor_id() const {
    return static_cast<::ui::mojom::Cursor>(data_->cursor_id);
  }
 private:
  internal::WindowManagerClient_WmSetNonClientCursor_Params_Data* data_ = nullptr;
};




class WindowManagerClient_OnWmCreatedTopLevelWindow_ParamsDataView {
 public:
  WindowManagerClient_OnWmCreatedTopLevelWindow_ParamsDataView() {}

  WindowManagerClient_OnWmCreatedTopLevelWindow_ParamsDataView(
      internal::WindowManagerClient_OnWmCreatedTopLevelWindow_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t change_id() const {
    return data_->change_id;
  }
  uint32_t window_id() const {
    return data_->window_id;
  }
 private:
  internal::WindowManagerClient_OnWmCreatedTopLevelWindow_Params_Data* data_ = nullptr;
};




class WindowManagerClient_OnAcceleratorAck_ParamsDataView {
 public:
  WindowManagerClient_OnAcceleratorAck_ParamsDataView() {}

  WindowManagerClient_OnAcceleratorAck_ParamsDataView(
      internal::WindowManagerClient_OnAcceleratorAck_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t ack_id() const {
    return data_->ack_id;
  }
  template <typename UserType>
  bool ReadEventResult(UserType* output) const {
    auto data_value = data_->event_result;
    return mojo::internal::Deserialize<::ui::mojom::EventResult>(
        data_value, output);
  }

  ::ui::mojom::EventResult event_result() const {
    return static_cast<::ui::mojom::EventResult>(data_->event_result);
  }
 private:
  internal::WindowManagerClient_OnAcceleratorAck_Params_Data* data_ = nullptr;
};




}  // namespace
const char WindowManager::Name_[] = "ui::mojom::WindowManager";
const uint32_t WindowManager::Version_;
const char* WindowManager::kAlwaysOnTop_Property = "prop:always_on_top";
const char* WindowManager::kInitialBounds_Property = "prop:initial_bounds";
const char* WindowManager::kName_Property = "prop:name";
const char* WindowManager::kPreferredSize_Property = "prop:preferred-size";
const char* WindowManager::kResizeBehavior_Property = "prop:resize-behavior";
const char* WindowManager::kRestoreBounds_Property = "prop:restore-bounds";
const char* WindowManager::kShadowStyle_Property = "prop:shadow-style";
const char* WindowManager::kShowState_Property = "prop:show-state";
const char* WindowManager::kUserSetBounds_Property = "prop:user-set-bounds";
const char* WindowManager::kWindowAppIcon_Property = "prop:window-app-icon";
const char* WindowManager::kWindowType_Property = "prop:window-type";
const char* WindowManager::kWindowTitle_Property = "prop:window-title";
const char* WindowManager::kWindowIgnoredByShelf_Property = "prop:window-ignored-by-shelf";
const char* WindowManager::kAppID_Property = "prop:app-id";
const char* WindowManager::kRemoveStandardFrame_Property = "prop:remove-standard-frame";

WindowManagerProxy::WindowManagerProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void WindowManagerProxy::OnConnect(
    uint16_t in_client_id) {
  size_t size = sizeof(::ui::mojom::internal::WindowManager_OnConnect_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kWindowManager_OnConnect_Name, size);

  auto params =
      ::ui::mojom::internal::WindowManager_OnConnect_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->client_id = in_client_id;
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void WindowManagerProxy::WmNewDisplayAdded(
    const display::Display& in_display, ::ui::mojom::WindowDataPtr in_root, bool in_parent_drawn) {
  size_t size = sizeof(::ui::mojom::internal::WindowManager_WmNewDisplayAdded_Params_Data);
  size += mojo::internal::PrepareToSerialize<::display::mojom::DisplayPtr>(
      in_display, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<::ui::mojom::WindowDataPtr>(
      in_root, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kWindowManager_WmNewDisplayAdded_Name, size);

  auto params =
      ::ui::mojom::internal::WindowManager_WmNewDisplayAdded_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->display)::BaseType* display_ptr;
  mojo::internal::Serialize<::display::mojom::DisplayPtr>(
      in_display, builder.buffer(), &display_ptr, &serialization_context_);
  params->display.Set(display_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->display.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null display in WindowManager.WmNewDisplayAdded request");
  typename decltype(params->root)::BaseType* root_ptr;
  mojo::internal::Serialize<::ui::mojom::WindowDataPtr>(
      in_root, builder.buffer(), &root_ptr, &serialization_context_);
  params->root.Set(root_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->root.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null root in WindowManager.WmNewDisplayAdded request");
  params->parent_drawn = in_parent_drawn;
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void WindowManagerProxy::WmSetBounds(
    uint32_t in_change_id, uint32_t in_window_id, const gfx::Rect& in_bounds) {
  size_t size = sizeof(::ui::mojom::internal::WindowManager_WmSetBounds_Params_Data);
  size += mojo::internal::PrepareToSerialize<::gfx::mojom::RectPtr>(
      in_bounds, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kWindowManager_WmSetBounds_Name, size);

  auto params =
      ::ui::mojom::internal::WindowManager_WmSetBounds_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->change_id = in_change_id;
  params->window_id = in_window_id;
  typename decltype(params->bounds)::BaseType* bounds_ptr;
  mojo::internal::Serialize<::gfx::mojom::RectPtr>(
      in_bounds, builder.buffer(), &bounds_ptr, &serialization_context_);
  params->bounds.Set(bounds_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->bounds.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null bounds in WindowManager.WmSetBounds request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void WindowManagerProxy::WmSetProperty(
    uint32_t in_change_id, uint32_t in_window_id, const mojo::String& in_name, mojo::Array<uint8_t> in_value) {
  size_t size = sizeof(::ui::mojom::internal::WindowManager_WmSetProperty_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_name, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<mojo::Array<uint8_t>>(
      in_value, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kWindowManager_WmSetProperty_Name, size);

  auto params =
      ::ui::mojom::internal::WindowManager_WmSetProperty_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->change_id = in_change_id;
  params->window_id = in_window_id;
  typename decltype(params->name)::BaseType* name_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_name, builder.buffer(), &name_ptr, &serialization_context_);
  params->name.Set(name_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null name in WindowManager.WmSetProperty request");
  typename decltype(params->value)::BaseType* value_ptr;
  const mojo::internal::ContainerValidateParams value_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::Array<uint8_t>>(
      in_value, builder.buffer(), &value_ptr, &value_validate_params,
      &serialization_context_);
  params->value.Set(value_ptr);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void WindowManagerProxy::WmCreateTopLevelWindow(
    uint32_t in_change_id, uint16_t in_requesting_client_id, mojo::Map<mojo::String, mojo::Array<uint8_t>> in_properties) {
  size_t size = sizeof(::ui::mojom::internal::WindowManager_WmCreateTopLevelWindow_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::Map<mojo::String, mojo::Array<uint8_t>>>(
      in_properties, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kWindowManager_WmCreateTopLevelWindow_Name, size);

  auto params =
      ::ui::mojom::internal::WindowManager_WmCreateTopLevelWindow_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->change_id = in_change_id;
  params->requesting_client_id = in_requesting_client_id;
  typename decltype(params->properties)::BaseType* properties_ptr;
  const mojo::internal::ContainerValidateParams properties_validate_params(
      new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)));
  mojo::internal::Serialize<mojo::Map<mojo::String, mojo::Array<uint8_t>>>(
      in_properties, builder.buffer(), &properties_ptr, &properties_validate_params,
      &serialization_context_);
  params->properties.Set(properties_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->properties.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null properties in WindowManager.WmCreateTopLevelWindow request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void WindowManagerProxy::WmClientJankinessChanged(
    uint16_t in_client_id, bool in_janky) {
  size_t size = sizeof(::ui::mojom::internal::WindowManager_WmClientJankinessChanged_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kWindowManager_WmClientJankinessChanged_Name, size);

  auto params =
      ::ui::mojom::internal::WindowManager_WmClientJankinessChanged_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->client_id = in_client_id;
  params->janky = in_janky;
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void WindowManagerProxy::WmPerformMoveLoop(
    uint32_t in_change_id, uint32_t in_window_id, ::ui::mojom::MoveLoopSource in_source, const gfx::Point& in_cursor_location) {
  size_t size = sizeof(::ui::mojom::internal::WindowManager_WmPerformMoveLoop_Params_Data);
  size += mojo::internal::PrepareToSerialize<::gfx::mojom::PointPtr>(
      in_cursor_location, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kWindowManager_WmPerformMoveLoop_Name, size);

  auto params =
      ::ui::mojom::internal::WindowManager_WmPerformMoveLoop_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->change_id = in_change_id;
  params->window_id = in_window_id;
  mojo::internal::Serialize<::ui::mojom::MoveLoopSource>(
      in_source, &params->source);
  typename decltype(params->cursor_location)::BaseType* cursor_location_ptr;
  mojo::internal::Serialize<::gfx::mojom::PointPtr>(
      in_cursor_location, builder.buffer(), &cursor_location_ptr, &serialization_context_);
  params->cursor_location.Set(cursor_location_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cursor_location.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cursor_location in WindowManager.WmPerformMoveLoop request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void WindowManagerProxy::WmCancelMoveLoop(
    uint32_t in_change_id) {
  size_t size = sizeof(::ui::mojom::internal::WindowManager_WmCancelMoveLoop_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kWindowManager_WmCancelMoveLoop_Name, size);

  auto params =
      ::ui::mojom::internal::WindowManager_WmCancelMoveLoop_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->change_id = in_change_id;
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void WindowManagerProxy::OnAccelerator(
    uint32_t in_ack_id, uint32_t in_accelerator_id, std::unique_ptr<ui::Event> in_event) {
  size_t size = sizeof(::ui::mojom::internal::WindowManager_OnAccelerator_Params_Data);
  size += mojo::internal::PrepareToSerialize<::ui::mojom::EventPtr>(
      in_event, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kWindowManager_OnAccelerator_Name, size);

  auto params =
      ::ui::mojom::internal::WindowManager_OnAccelerator_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->ack_id = in_ack_id;
  params->accelerator_id = in_accelerator_id;
  typename decltype(params->event)::BaseType* event_ptr;
  mojo::internal::Serialize<::ui::mojom::EventPtr>(
      in_event, builder.buffer(), &event_ptr, &serialization_context_);
  params->event.Set(event_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->event.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null event in WindowManager.OnAccelerator request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

WindowManagerStub::WindowManagerStub()
    : sink_(nullptr),
      control_message_handler_(WindowManager::Version_) {
}

WindowManagerStub::~WindowManagerStub() {}

bool WindowManagerStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kWindowManager_OnConnect_Name: {
      internal::WindowManager_OnConnect_Params_Data* params =
          reinterpret_cast<internal::WindowManager_OnConnect_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      uint16_t p_client_id{};
      WindowManager_OnConnect_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_client_id = input_data_view.client_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManager::OnConnect deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WindowManager::OnConnect");
      mojo::internal::MessageDispatchContext context(message);
      sink_->OnConnect(
std::move(p_client_id));
      return true;
    }
    case internal::kWindowManager_WmNewDisplayAdded_Name: {
      internal::WindowManager_WmNewDisplayAdded_Params_Data* params =
          reinterpret_cast<internal::WindowManager_WmNewDisplayAdded_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      display::Display p_display{};
      ::ui::mojom::WindowDataPtr p_root{};
      bool p_parent_drawn{};
      WindowManager_WmNewDisplayAdded_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadDisplay(&p_display))
        success = false;
      if (!input_data_view.ReadRoot(&p_root))
        success = false;
      p_parent_drawn = input_data_view.parent_drawn();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManager::WmNewDisplayAdded deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WindowManager::WmNewDisplayAdded");
      mojo::internal::MessageDispatchContext context(message);
      sink_->WmNewDisplayAdded(
std::move(p_display), 
std::move(p_root), 
std::move(p_parent_drawn));
      return true;
    }
    case internal::kWindowManager_WmSetBounds_Name: {
      internal::WindowManager_WmSetBounds_Params_Data* params =
          reinterpret_cast<internal::WindowManager_WmSetBounds_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      uint32_t p_change_id{};
      uint32_t p_window_id{};
      gfx::Rect p_bounds{};
      WindowManager_WmSetBounds_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_change_id = input_data_view.change_id();
      p_window_id = input_data_view.window_id();
      if (!input_data_view.ReadBounds(&p_bounds))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManager::WmSetBounds deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WindowManager::WmSetBounds");
      mojo::internal::MessageDispatchContext context(message);
      sink_->WmSetBounds(
std::move(p_change_id), 
std::move(p_window_id), 
std::move(p_bounds));
      return true;
    }
    case internal::kWindowManager_WmSetProperty_Name: {
      internal::WindowManager_WmSetProperty_Params_Data* params =
          reinterpret_cast<internal::WindowManager_WmSetProperty_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      uint32_t p_change_id{};
      uint32_t p_window_id{};
      mojo::String p_name{};
      mojo::Array<uint8_t> p_value{};
      WindowManager_WmSetProperty_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_change_id = input_data_view.change_id();
      p_window_id = input_data_view.window_id();
      if (!input_data_view.ReadName(&p_name))
        success = false;
      if (!input_data_view.ReadValue(&p_value))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManager::WmSetProperty deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WindowManager::WmSetProperty");
      mojo::internal::MessageDispatchContext context(message);
      sink_->WmSetProperty(
std::move(p_change_id), 
std::move(p_window_id), 
std::move(p_name), 
std::move(p_value));
      return true;
    }
    case internal::kWindowManager_WmCreateTopLevelWindow_Name: {
      internal::WindowManager_WmCreateTopLevelWindow_Params_Data* params =
          reinterpret_cast<internal::WindowManager_WmCreateTopLevelWindow_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      uint32_t p_change_id{};
      uint16_t p_requesting_client_id{};
      mojo::Map<mojo::String, mojo::Array<uint8_t>> p_properties{};
      WindowManager_WmCreateTopLevelWindow_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_change_id = input_data_view.change_id();
      p_requesting_client_id = input_data_view.requesting_client_id();
      if (!input_data_view.ReadProperties(&p_properties))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManager::WmCreateTopLevelWindow deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WindowManager::WmCreateTopLevelWindow");
      mojo::internal::MessageDispatchContext context(message);
      sink_->WmCreateTopLevelWindow(
std::move(p_change_id), 
std::move(p_requesting_client_id), 
std::move(p_properties));
      return true;
    }
    case internal::kWindowManager_WmClientJankinessChanged_Name: {
      internal::WindowManager_WmClientJankinessChanged_Params_Data* params =
          reinterpret_cast<internal::WindowManager_WmClientJankinessChanged_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      uint16_t p_client_id{};
      bool p_janky{};
      WindowManager_WmClientJankinessChanged_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_client_id = input_data_view.client_id();
      p_janky = input_data_view.janky();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManager::WmClientJankinessChanged deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WindowManager::WmClientJankinessChanged");
      mojo::internal::MessageDispatchContext context(message);
      sink_->WmClientJankinessChanged(
std::move(p_client_id), 
std::move(p_janky));
      return true;
    }
    case internal::kWindowManager_WmPerformMoveLoop_Name: {
      internal::WindowManager_WmPerformMoveLoop_Params_Data* params =
          reinterpret_cast<internal::WindowManager_WmPerformMoveLoop_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      uint32_t p_change_id{};
      uint32_t p_window_id{};
      ::ui::mojom::MoveLoopSource p_source{};
      gfx::Point p_cursor_location{};
      WindowManager_WmPerformMoveLoop_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_change_id = input_data_view.change_id();
      p_window_id = input_data_view.window_id();
      if (!input_data_view.ReadSource(&p_source))
        success = false;
      if (!input_data_view.ReadCursorLocation(&p_cursor_location))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManager::WmPerformMoveLoop deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WindowManager::WmPerformMoveLoop");
      mojo::internal::MessageDispatchContext context(message);
      sink_->WmPerformMoveLoop(
std::move(p_change_id), 
std::move(p_window_id), 
std::move(p_source), 
std::move(p_cursor_location));
      return true;
    }
    case internal::kWindowManager_WmCancelMoveLoop_Name: {
      internal::WindowManager_WmCancelMoveLoop_Params_Data* params =
          reinterpret_cast<internal::WindowManager_WmCancelMoveLoop_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      uint32_t p_change_id{};
      WindowManager_WmCancelMoveLoop_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_change_id = input_data_view.change_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManager::WmCancelMoveLoop deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WindowManager::WmCancelMoveLoop");
      mojo::internal::MessageDispatchContext context(message);
      sink_->WmCancelMoveLoop(
std::move(p_change_id));
      return true;
    }
    case internal::kWindowManager_OnAccelerator_Name: {
      internal::WindowManager_OnAccelerator_Params_Data* params =
          reinterpret_cast<internal::WindowManager_OnAccelerator_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      uint32_t p_ack_id{};
      uint32_t p_accelerator_id{};
      std::unique_ptr<ui::Event> p_event{};
      WindowManager_OnAccelerator_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_ack_id = input_data_view.ack_id();
      p_accelerator_id = input_data_view.accelerator_id();
      if (!input_data_view.ReadEvent(&p_event))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManager::OnAccelerator deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WindowManager::OnAccelerator");
      mojo::internal::MessageDispatchContext context(message);
      sink_->OnAccelerator(
std::move(p_ack_id), 
std::move(p_accelerator_id), 
std::move(p_event));
      return true;
    }
  }
  return false;
}

bool WindowManagerStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kWindowManager_OnConnect_Name: {
      break;
    }
    case internal::kWindowManager_WmNewDisplayAdded_Name: {
      break;
    }
    case internal::kWindowManager_WmSetBounds_Name: {
      break;
    }
    case internal::kWindowManager_WmSetProperty_Name: {
      break;
    }
    case internal::kWindowManager_WmCreateTopLevelWindow_Name: {
      break;
    }
    case internal::kWindowManager_WmClientJankinessChanged_Name: {
      break;
    }
    case internal::kWindowManager_WmPerformMoveLoop_Name: {
      break;
    }
    case internal::kWindowManager_WmCancelMoveLoop_Name: {
      break;
    }
    case internal::kWindowManager_OnAccelerator_Name: {
      break;
    }
  }
  return false;
}

WindowManagerRequestValidator::WindowManagerRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool WindowManagerRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "WindowManager RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kWindowManager_OnConnect_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManager_OnConnect_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kWindowManager_WmNewDisplayAdded_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManager_WmNewDisplayAdded_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kWindowManager_WmSetBounds_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManager_WmSetBounds_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kWindowManager_WmSetProperty_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManager_WmSetProperty_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kWindowManager_WmCreateTopLevelWindow_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManager_WmCreateTopLevelWindow_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kWindowManager_WmClientJankinessChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManager_WmClientJankinessChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kWindowManager_WmPerformMoveLoop_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManager_WmPerformMoveLoop_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kWindowManager_WmCancelMoveLoop_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManager_WmCancelMoveLoop_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kWindowManager_OnAccelerator_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManager_OnAccelerator_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

const char WindowManagerClient::Name_[] = "ui::mojom::WindowManagerClient";
const uint32_t WindowManagerClient::Version_;

class WindowManagerClient_AddAccelerator_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  WindowManagerClient_AddAccelerator_ForwardToCallback(
      const WindowManagerClient::AddAcceleratorCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  WindowManagerClient::AddAcceleratorCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(WindowManagerClient_AddAccelerator_ForwardToCallback);
};
bool WindowManagerClient_AddAccelerator_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::WindowManagerClient_AddAccelerator_ResponseParams_Data* params =
      reinterpret_cast<internal::WindowManagerClient_AddAccelerator_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  bool p_success{};
  WindowManagerClient_AddAccelerator_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "WindowManagerClient::AddAccelerator response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_success));
  }
  return true;
}

WindowManagerClientProxy::WindowManagerClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void WindowManagerClientProxy::AddActivationParent(
    uint32_t in_window_id) {
  size_t size = sizeof(::ui::mojom::internal::WindowManagerClient_AddActivationParent_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kWindowManagerClient_AddActivationParent_Name, size);

  auto params =
      ::ui::mojom::internal::WindowManagerClient_AddActivationParent_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->window_id = in_window_id;
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void WindowManagerClientProxy::RemoveActivationParent(
    uint32_t in_window_id) {
  size_t size = sizeof(::ui::mojom::internal::WindowManagerClient_RemoveActivationParent_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kWindowManagerClient_RemoveActivationParent_Name, size);

  auto params =
      ::ui::mojom::internal::WindowManagerClient_RemoveActivationParent_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->window_id = in_window_id;
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void WindowManagerClientProxy::ActivateNextWindow(
    ) {
  size_t size = sizeof(::ui::mojom::internal::WindowManagerClient_ActivateNextWindow_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kWindowManagerClient_ActivateNextWindow_Name, size);

  auto params =
      ::ui::mojom::internal::WindowManagerClient_ActivateNextWindow_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void WindowManagerClientProxy::SetUnderlaySurfaceOffsetAndExtendedHitArea(
    uint32_t in_window_id, int32_t in_x_offset, int32_t in_y_offset, const gfx::Insets& in_hit_area) {
  size_t size = sizeof(::ui::mojom::internal::WindowManagerClient_SetUnderlaySurfaceOffsetAndExtendedHitArea_Params_Data);
  size += mojo::internal::PrepareToSerialize<::gfx::mojom::InsetsPtr>(
      in_hit_area, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kWindowManagerClient_SetUnderlaySurfaceOffsetAndExtendedHitArea_Name, size);

  auto params =
      ::ui::mojom::internal::WindowManagerClient_SetUnderlaySurfaceOffsetAndExtendedHitArea_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->window_id = in_window_id;
  params->x_offset = in_x_offset;
  params->y_offset = in_y_offset;
  typename decltype(params->hit_area)::BaseType* hit_area_ptr;
  mojo::internal::Serialize<::gfx::mojom::InsetsPtr>(
      in_hit_area, builder.buffer(), &hit_area_ptr, &serialization_context_);
  params->hit_area.Set(hit_area_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->hit_area.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null hit_area in WindowManagerClient.SetUnderlaySurfaceOffsetAndExtendedHitArea request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void WindowManagerClientProxy::AddAccelerator(
    uint32_t in_id, ::ui::mojom::EventMatcherPtr in_matcher, const AddAcceleratorCallback& callback) {
  size_t size = sizeof(::ui::mojom::internal::WindowManagerClient_AddAccelerator_Params_Data);
  size += mojo::internal::PrepareToSerialize<::ui::mojom::EventMatcherPtr>(
      in_matcher, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kWindowManagerClient_AddAccelerator_Name, size);

  auto params =
      ::ui::mojom::internal::WindowManagerClient_AddAccelerator_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->id = in_id;
  typename decltype(params->matcher)::BaseType* matcher_ptr;
  mojo::internal::Serialize<::ui::mojom::EventMatcherPtr>(
      in_matcher, builder.buffer(), &matcher_ptr, &serialization_context_);
  params->matcher.Set(matcher_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->matcher.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null matcher in WindowManagerClient.AddAccelerator request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new WindowManagerClient_AddAccelerator_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void WindowManagerClientProxy::RemoveAccelerator(
    uint32_t in_id) {
  size_t size = sizeof(::ui::mojom::internal::WindowManagerClient_RemoveAccelerator_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kWindowManagerClient_RemoveAccelerator_Name, size);

  auto params =
      ::ui::mojom::internal::WindowManagerClient_RemoveAccelerator_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->id = in_id;
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void WindowManagerClientProxy::WmResponse(
    uint32_t in_change_id, bool in_response) {
  size_t size = sizeof(::ui::mojom::internal::WindowManagerClient_WmResponse_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kWindowManagerClient_WmResponse_Name, size);

  auto params =
      ::ui::mojom::internal::WindowManagerClient_WmResponse_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->change_id = in_change_id;
  params->response = in_response;
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void WindowManagerClientProxy::WmRequestClose(
    uint32_t in_window_id) {
  size_t size = sizeof(::ui::mojom::internal::WindowManagerClient_WmRequestClose_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kWindowManagerClient_WmRequestClose_Name, size);

  auto params =
      ::ui::mojom::internal::WindowManagerClient_WmRequestClose_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->window_id = in_window_id;
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void WindowManagerClientProxy::WmSetFrameDecorationValues(
    ::ui::mojom::FrameDecorationValuesPtr in_values) {
  size_t size = sizeof(::ui::mojom::internal::WindowManagerClient_WmSetFrameDecorationValues_Params_Data);
  size += mojo::internal::PrepareToSerialize<::ui::mojom::FrameDecorationValuesPtr>(
      in_values, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kWindowManagerClient_WmSetFrameDecorationValues_Name, size);

  auto params =
      ::ui::mojom::internal::WindowManagerClient_WmSetFrameDecorationValues_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->values)::BaseType* values_ptr;
  mojo::internal::Serialize<::ui::mojom::FrameDecorationValuesPtr>(
      in_values, builder.buffer(), &values_ptr, &serialization_context_);
  params->values.Set(values_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->values.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null values in WindowManagerClient.WmSetFrameDecorationValues request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void WindowManagerClientProxy::WmSetNonClientCursor(
    uint32_t in_window_id, ::ui::mojom::Cursor in_cursor_id) {
  size_t size = sizeof(::ui::mojom::internal::WindowManagerClient_WmSetNonClientCursor_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kWindowManagerClient_WmSetNonClientCursor_Name, size);

  auto params =
      ::ui::mojom::internal::WindowManagerClient_WmSetNonClientCursor_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->window_id = in_window_id;
  mojo::internal::Serialize<::ui::mojom::Cursor>(
      in_cursor_id, &params->cursor_id);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void WindowManagerClientProxy::OnWmCreatedTopLevelWindow(
    uint32_t in_change_id, uint32_t in_window_id) {
  size_t size = sizeof(::ui::mojom::internal::WindowManagerClient_OnWmCreatedTopLevelWindow_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kWindowManagerClient_OnWmCreatedTopLevelWindow_Name, size);

  auto params =
      ::ui::mojom::internal::WindowManagerClient_OnWmCreatedTopLevelWindow_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->change_id = in_change_id;
  params->window_id = in_window_id;
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void WindowManagerClientProxy::OnAcceleratorAck(
    uint32_t in_ack_id, ::ui::mojom::EventResult in_event_result) {
  size_t size = sizeof(::ui::mojom::internal::WindowManagerClient_OnAcceleratorAck_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kWindowManagerClient_OnAcceleratorAck_Name, size);

  auto params =
      ::ui::mojom::internal::WindowManagerClient_OnAcceleratorAck_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->ack_id = in_ack_id;
  mojo::internal::Serialize<::ui::mojom::EventResult>(
      in_event_result, &params->event_result);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}
class WindowManagerClient_AddAccelerator_ProxyToResponder {
 public:
  static WindowManagerClient::AddAcceleratorCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<WindowManagerClient_AddAccelerator_ProxyToResponder> proxy(
        new WindowManagerClient_AddAccelerator_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&WindowManagerClient_AddAccelerator_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~WindowManagerClient_AddAccelerator_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "WindowManagerClient::AddAccelerator() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  WindowManagerClient_AddAccelerator_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(responder),
        serialization_context_(std::move(group_controller)) {
  }

  void Run(
      bool in_success);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(WindowManagerClient_AddAccelerator_ProxyToResponder);
};

void WindowManagerClient_AddAccelerator_ProxyToResponder::Run(
    bool in_success) {
  size_t size = sizeof(::ui::mojom::internal::WindowManagerClient_AddAccelerator_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kWindowManagerClient_AddAccelerator_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::ui::mojom::internal::WindowManagerClient_AddAccelerator_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->success = in_success;
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}

WindowManagerClientStub::WindowManagerClientStub()
    : sink_(nullptr),
      control_message_handler_(WindowManagerClient::Version_) {
}

WindowManagerClientStub::~WindowManagerClientStub() {}

bool WindowManagerClientStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kWindowManagerClient_AddActivationParent_Name: {
      internal::WindowManagerClient_AddActivationParent_Params_Data* params =
          reinterpret_cast<internal::WindowManagerClient_AddActivationParent_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      uint32_t p_window_id{};
      WindowManagerClient_AddActivationParent_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_window_id = input_data_view.window_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManagerClient::AddActivationParent deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WindowManagerClient::AddActivationParent");
      mojo::internal::MessageDispatchContext context(message);
      sink_->AddActivationParent(
std::move(p_window_id));
      return true;
    }
    case internal::kWindowManagerClient_RemoveActivationParent_Name: {
      internal::WindowManagerClient_RemoveActivationParent_Params_Data* params =
          reinterpret_cast<internal::WindowManagerClient_RemoveActivationParent_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      uint32_t p_window_id{};
      WindowManagerClient_RemoveActivationParent_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_window_id = input_data_view.window_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManagerClient::RemoveActivationParent deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WindowManagerClient::RemoveActivationParent");
      mojo::internal::MessageDispatchContext context(message);
      sink_->RemoveActivationParent(
std::move(p_window_id));
      return true;
    }
    case internal::kWindowManagerClient_ActivateNextWindow_Name: {
      internal::WindowManagerClient_ActivateNextWindow_Params_Data* params =
          reinterpret_cast<internal::WindowManagerClient_ActivateNextWindow_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      WindowManagerClient_ActivateNextWindow_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManagerClient::ActivateNextWindow deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WindowManagerClient::ActivateNextWindow");
      mojo::internal::MessageDispatchContext context(message);
      sink_->ActivateNextWindow();
      return true;
    }
    case internal::kWindowManagerClient_SetUnderlaySurfaceOffsetAndExtendedHitArea_Name: {
      internal::WindowManagerClient_SetUnderlaySurfaceOffsetAndExtendedHitArea_Params_Data* params =
          reinterpret_cast<internal::WindowManagerClient_SetUnderlaySurfaceOffsetAndExtendedHitArea_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      uint32_t p_window_id{};
      int32_t p_x_offset{};
      int32_t p_y_offset{};
      gfx::Insets p_hit_area{};
      WindowManagerClient_SetUnderlaySurfaceOffsetAndExtendedHitArea_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_window_id = input_data_view.window_id();
      p_x_offset = input_data_view.x_offset();
      p_y_offset = input_data_view.y_offset();
      if (!input_data_view.ReadHitArea(&p_hit_area))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManagerClient::SetUnderlaySurfaceOffsetAndExtendedHitArea deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WindowManagerClient::SetUnderlaySurfaceOffsetAndExtendedHitArea");
      mojo::internal::MessageDispatchContext context(message);
      sink_->SetUnderlaySurfaceOffsetAndExtendedHitArea(
std::move(p_window_id), 
std::move(p_x_offset), 
std::move(p_y_offset), 
std::move(p_hit_area));
      return true;
    }
    case internal::kWindowManagerClient_AddAccelerator_Name: {
      break;
    }
    case internal::kWindowManagerClient_RemoveAccelerator_Name: {
      internal::WindowManagerClient_RemoveAccelerator_Params_Data* params =
          reinterpret_cast<internal::WindowManagerClient_RemoveAccelerator_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      uint32_t p_id{};
      WindowManagerClient_RemoveAccelerator_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_id = input_data_view.id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManagerClient::RemoveAccelerator deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WindowManagerClient::RemoveAccelerator");
      mojo::internal::MessageDispatchContext context(message);
      sink_->RemoveAccelerator(
std::move(p_id));
      return true;
    }
    case internal::kWindowManagerClient_WmResponse_Name: {
      internal::WindowManagerClient_WmResponse_Params_Data* params =
          reinterpret_cast<internal::WindowManagerClient_WmResponse_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      uint32_t p_change_id{};
      bool p_response{};
      WindowManagerClient_WmResponse_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_change_id = input_data_view.change_id();
      p_response = input_data_view.response();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManagerClient::WmResponse deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WindowManagerClient::WmResponse");
      mojo::internal::MessageDispatchContext context(message);
      sink_->WmResponse(
std::move(p_change_id), 
std::move(p_response));
      return true;
    }
    case internal::kWindowManagerClient_WmRequestClose_Name: {
      internal::WindowManagerClient_WmRequestClose_Params_Data* params =
          reinterpret_cast<internal::WindowManagerClient_WmRequestClose_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      uint32_t p_window_id{};
      WindowManagerClient_WmRequestClose_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_window_id = input_data_view.window_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManagerClient::WmRequestClose deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WindowManagerClient::WmRequestClose");
      mojo::internal::MessageDispatchContext context(message);
      sink_->WmRequestClose(
std::move(p_window_id));
      return true;
    }
    case internal::kWindowManagerClient_WmSetFrameDecorationValues_Name: {
      internal::WindowManagerClient_WmSetFrameDecorationValues_Params_Data* params =
          reinterpret_cast<internal::WindowManagerClient_WmSetFrameDecorationValues_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      ::ui::mojom::FrameDecorationValuesPtr p_values{};
      WindowManagerClient_WmSetFrameDecorationValues_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadValues(&p_values))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManagerClient::WmSetFrameDecorationValues deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WindowManagerClient::WmSetFrameDecorationValues");
      mojo::internal::MessageDispatchContext context(message);
      sink_->WmSetFrameDecorationValues(
std::move(p_values));
      return true;
    }
    case internal::kWindowManagerClient_WmSetNonClientCursor_Name: {
      internal::WindowManagerClient_WmSetNonClientCursor_Params_Data* params =
          reinterpret_cast<internal::WindowManagerClient_WmSetNonClientCursor_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      uint32_t p_window_id{};
      ::ui::mojom::Cursor p_cursor_id{};
      WindowManagerClient_WmSetNonClientCursor_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_window_id = input_data_view.window_id();
      if (!input_data_view.ReadCursorId(&p_cursor_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManagerClient::WmSetNonClientCursor deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WindowManagerClient::WmSetNonClientCursor");
      mojo::internal::MessageDispatchContext context(message);
      sink_->WmSetNonClientCursor(
std::move(p_window_id), 
std::move(p_cursor_id));
      return true;
    }
    case internal::kWindowManagerClient_OnWmCreatedTopLevelWindow_Name: {
      internal::WindowManagerClient_OnWmCreatedTopLevelWindow_Params_Data* params =
          reinterpret_cast<internal::WindowManagerClient_OnWmCreatedTopLevelWindow_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      uint32_t p_change_id{};
      uint32_t p_window_id{};
      WindowManagerClient_OnWmCreatedTopLevelWindow_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_change_id = input_data_view.change_id();
      p_window_id = input_data_view.window_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManagerClient::OnWmCreatedTopLevelWindow deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WindowManagerClient::OnWmCreatedTopLevelWindow");
      mojo::internal::MessageDispatchContext context(message);
      sink_->OnWmCreatedTopLevelWindow(
std::move(p_change_id), 
std::move(p_window_id));
      return true;
    }
    case internal::kWindowManagerClient_OnAcceleratorAck_Name: {
      internal::WindowManagerClient_OnAcceleratorAck_Params_Data* params =
          reinterpret_cast<internal::WindowManagerClient_OnAcceleratorAck_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      uint32_t p_ack_id{};
      ::ui::mojom::EventResult p_event_result{};
      WindowManagerClient_OnAcceleratorAck_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_ack_id = input_data_view.ack_id();
      if (!input_data_view.ReadEventResult(&p_event_result))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManagerClient::OnAcceleratorAck deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WindowManagerClient::OnAcceleratorAck");
      mojo::internal::MessageDispatchContext context(message);
      sink_->OnAcceleratorAck(
std::move(p_ack_id), 
std::move(p_event_result));
      return true;
    }
  }
  return false;
}

bool WindowManagerClientStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kWindowManagerClient_AddActivationParent_Name: {
      break;
    }
    case internal::kWindowManagerClient_RemoveActivationParent_Name: {
      break;
    }
    case internal::kWindowManagerClient_ActivateNextWindow_Name: {
      break;
    }
    case internal::kWindowManagerClient_SetUnderlaySurfaceOffsetAndExtendedHitArea_Name: {
      break;
    }
    case internal::kWindowManagerClient_AddAccelerator_Name: {
      internal::WindowManagerClient_AddAccelerator_Params_Data* params =
          reinterpret_cast<internal::WindowManagerClient_AddAccelerator_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      uint32_t p_id{};
      ::ui::mojom::EventMatcherPtr p_matcher{};
      WindowManagerClient_AddAccelerator_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_id = input_data_view.id();
      if (!input_data_view.ReadMatcher(&p_matcher))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManagerClient::AddAccelerator deserializer");
        return false;
      }
      WindowManagerClient::AddAcceleratorCallback callback =
          WindowManagerClient_AddAccelerator_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WindowManagerClient::AddAccelerator");
      mojo::internal::MessageDispatchContext context(message);
      sink_->AddAccelerator(
std::move(p_id), 
std::move(p_matcher), callback);
      return true;
    }
    case internal::kWindowManagerClient_RemoveAccelerator_Name: {
      break;
    }
    case internal::kWindowManagerClient_WmResponse_Name: {
      break;
    }
    case internal::kWindowManagerClient_WmRequestClose_Name: {
      break;
    }
    case internal::kWindowManagerClient_WmSetFrameDecorationValues_Name: {
      break;
    }
    case internal::kWindowManagerClient_WmSetNonClientCursor_Name: {
      break;
    }
    case internal::kWindowManagerClient_OnWmCreatedTopLevelWindow_Name: {
      break;
    }
    case internal::kWindowManagerClient_OnAcceleratorAck_Name: {
      break;
    }
  }
  return false;
}

WindowManagerClientRequestValidator::WindowManagerClientRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool WindowManagerClientRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "WindowManagerClient RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kWindowManagerClient_AddActivationParent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManagerClient_AddActivationParent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kWindowManagerClient_RemoveActivationParent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManagerClient_RemoveActivationParent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kWindowManagerClient_ActivateNextWindow_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManagerClient_ActivateNextWindow_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kWindowManagerClient_SetUnderlaySurfaceOffsetAndExtendedHitArea_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManagerClient_SetUnderlaySurfaceOffsetAndExtendedHitArea_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kWindowManagerClient_AddAccelerator_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManagerClient_AddAccelerator_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kWindowManagerClient_RemoveAccelerator_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManagerClient_RemoveAccelerator_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kWindowManagerClient_WmResponse_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManagerClient_WmResponse_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kWindowManagerClient_WmRequestClose_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManagerClient_WmRequestClose_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kWindowManagerClient_WmSetFrameDecorationValues_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManagerClient_WmSetFrameDecorationValues_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kWindowManagerClient_WmSetNonClientCursor_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManagerClient_WmSetNonClientCursor_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kWindowManagerClient_OnWmCreatedTopLevelWindow_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManagerClient_OnWmCreatedTopLevelWindow_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kWindowManagerClient_OnAcceleratorAck_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManagerClient_OnAcceleratorAck_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

WindowManagerClientResponseValidator::WindowManagerClientResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool WindowManagerClientResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "WindowManagerClient ResponseValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kWindowManagerClient_AddAccelerator_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManagerClient_AddAccelerator_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}
}  // namespace mojom
}  // namespace ui

namespace mojo {

}  // namespace mojo


#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
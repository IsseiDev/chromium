// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_WINDOW_MANAGER_CONSTANTS_MOJOM_H_
#define SERVICES_UI_PUBLIC_INTERFACES_WINDOW_MANAGER_CONSTANTS_MOJOM_H_

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
#include "services/ui/public/interfaces/window_manager_constants.mojom-shared.h"
#include "services/ui/public/interfaces/display/display.mojom.h"
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
const int32_t kResizeBehaviorNone = 0;
const int32_t kResizeBehaviorCanResize = 1;
const int32_t kResizeBehaviorCanMaximize = 2;
const int32_t kResizeBehaviorCanMinimize = 4;
class FrameDecorationValues;
class FrameDecorationValuesDataView;
using FrameDecorationValuesPtr = mojo::StructPtr<FrameDecorationValues>;

class WsDisplay;
class WsDisplayDataView;
using WsDisplayPtr = mojo::StructPtr<WsDisplay>;







class  FrameDecorationValues {
 public:
  using DataView = FrameDecorationValuesDataView;
  using Data_ = internal::FrameDecorationValues_Data;

  static FrameDecorationValuesPtr New();

  template <typename U>
  static FrameDecorationValuesPtr From(const U& u) {
    return mojo::TypeConverter<FrameDecorationValuesPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, FrameDecorationValues>::Convert(*this);
  }

  FrameDecorationValues();
  ~FrameDecorationValues();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = FrameDecorationValuesPtr>
  FrameDecorationValuesPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, FrameDecorationValues>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        FrameDecorationValuesPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        FrameDecorationValuesPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  gfx::Insets normal_client_area_insets;
  gfx::Insets maximized_client_area_insets;
  uint32_t max_title_bar_button_width;
};

class FrameDecorationValuesDataView {
 public:
  FrameDecorationValuesDataView() {}

  FrameDecorationValuesDataView(
      internal::FrameDecorationValues_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNormalClientAreaInsetsDataView(
      ::gfx::mojom::InsetsDataView* output);

  template <typename UserType>
  bool ReadNormalClientAreaInsets(UserType* output) {
    auto pointer = data_->normal_client_area_insets.Get();
    return mojo::internal::Deserialize<::gfx::mojom::InsetsPtr>(
        pointer, output, context_);
  }
  inline void GetMaximizedClientAreaInsetsDataView(
      ::gfx::mojom::InsetsDataView* output);

  template <typename UserType>
  bool ReadMaximizedClientAreaInsets(UserType* output) {
    auto pointer = data_->maximized_client_area_insets.Get();
    return mojo::internal::Deserialize<::gfx::mojom::InsetsPtr>(
        pointer, output, context_);
  }
  uint32_t max_title_bar_button_width() const {
    return data_->max_title_bar_button_width;
  }
 private:
  internal::FrameDecorationValues_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace ui

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::ui::mojom::FrameDecorationValuesDataView> {
  using MojomType = ::ui::mojom::FrameDecorationValuesPtr;
};
}  // namespace internal
}  // namespace mojo

namespace ui {
namespace mojom {



class  WsDisplay {
 public:
  using DataView = WsDisplayDataView;
  using Data_ = internal::WsDisplay_Data;

  static WsDisplayPtr New();

  template <typename U>
  static WsDisplayPtr From(const U& u) {
    return mojo::TypeConverter<WsDisplayPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, WsDisplay>::Convert(*this);
  }

  WsDisplay();
  ~WsDisplay();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = WsDisplayPtr>
  WsDisplayPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, WsDisplay>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        WsDisplayPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        WsDisplayPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  display::Display display;
  bool is_primary;
  FrameDecorationValuesPtr frame_decoration_values;
 private:
  DISALLOW_COPY_AND_ASSIGN(WsDisplay);
};

class WsDisplayDataView {
 public:
  WsDisplayDataView() {}

  WsDisplayDataView(
      internal::WsDisplay_Data* data,
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
  bool is_primary() const {
    return data_->is_primary;
  }
  inline void GetFrameDecorationValuesDataView(
      FrameDecorationValuesDataView* output);

  template <typename UserType>
  bool ReadFrameDecorationValues(UserType* output) {
    auto pointer = data_->frame_decoration_values.Get();
    return mojo::internal::Deserialize<::ui::mojom::FrameDecorationValuesPtr>(
        pointer, output, context_);
  }
 private:
  internal::WsDisplay_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace ui

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::ui::mojom::WsDisplayDataView> {
  using MojomType = ::ui::mojom::WsDisplayPtr;
};
}  // namespace internal
}  // namespace mojo

namespace ui {
namespace mojom {


template <typename StructPtrType>
FrameDecorationValuesPtr FrameDecorationValues::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->normal_client_area_insets = mojo::internal::Clone(normal_client_area_insets);
  rv->maximized_client_area_insets = mojo::internal::Clone(maximized_client_area_insets);
  rv->max_title_bar_button_width = mojo::internal::Clone(max_title_bar_button_width);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, FrameDecorationValues>::value>::type*>
bool FrameDecorationValues::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->normal_client_area_insets, other.normal_client_area_insets))
    return false;
  if (!mojo::internal::Equals(this->maximized_client_area_insets, other.maximized_client_area_insets))
    return false;
  if (!mojo::internal::Equals(this->max_title_bar_button_width, other.max_title_bar_button_width))
    return false;
  return true;
}

inline void FrameDecorationValuesDataView::GetNormalClientAreaInsetsDataView(
    ::gfx::mojom::InsetsDataView* output) {
  auto pointer = data_->normal_client_area_insets.Get();
  *output = ::gfx::mojom::InsetsDataView(pointer, context_);
}
inline void FrameDecorationValuesDataView::GetMaximizedClientAreaInsetsDataView(
    ::gfx::mojom::InsetsDataView* output) {
  auto pointer = data_->maximized_client_area_insets.Get();
  *output = ::gfx::mojom::InsetsDataView(pointer, context_);
}

template <typename StructPtrType>
WsDisplayPtr WsDisplay::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->display = mojo::internal::Clone(display);
  rv->is_primary = mojo::internal::Clone(is_primary);
  rv->frame_decoration_values = mojo::internal::Clone(frame_decoration_values);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, WsDisplay>::value>::type*>
bool WsDisplay::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->display, other.display))
    return false;
  if (!mojo::internal::Equals(this->is_primary, other.is_primary))
    return false;
  if (!mojo::internal::Equals(this->frame_decoration_values, other.frame_decoration_values))
    return false;
  return true;
}

inline void WsDisplayDataView::GetDisplayDataView(
    ::display::mojom::DisplayDataView* output) {
  auto pointer = data_->display.Get();
  *output = ::display::mojom::DisplayDataView(pointer, context_);
}
inline void WsDisplayDataView::GetFrameDecorationValuesDataView(
    FrameDecorationValuesDataView* output) {
  auto pointer = data_->frame_decoration_values.Get();
  *output = FrameDecorationValuesDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace ui

namespace mojo {


template <>
struct  StructTraits<::ui::mojom::FrameDecorationValues, ::ui::mojom::FrameDecorationValuesPtr> {
  static bool IsNull(const ::ui::mojom::FrameDecorationValuesPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::FrameDecorationValuesPtr* output) { output->reset(); }
  static decltype(::ui::mojom::FrameDecorationValues::normal_client_area_insets)& normal_client_area_insets(
      ::ui::mojom::FrameDecorationValuesPtr& input) {
    return input->normal_client_area_insets;
  }
  static decltype(::ui::mojom::FrameDecorationValues::maximized_client_area_insets)& maximized_client_area_insets(
      ::ui::mojom::FrameDecorationValuesPtr& input) {
    return input->maximized_client_area_insets;
  }
  static decltype(::ui::mojom::FrameDecorationValues::max_title_bar_button_width) max_title_bar_button_width(
      const ::ui::mojom::FrameDecorationValuesPtr& input) {
    return input->max_title_bar_button_width;
  }

  static bool Read(::ui::mojom::FrameDecorationValuesDataView input, ::ui::mojom::FrameDecorationValuesPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::FrameDecorationValuesPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::FrameDecorationValues, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::ui::mojom::internal::FrameDecorationValues_Data);
    decltype(CallWithContext(Traits::normal_client_area_insets, input, custom_context)) in_normal_client_area_insets = CallWithContext(Traits::normal_client_area_insets, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::gfx::mojom::InsetsPtr>(
        in_normal_client_area_insets, context);
    decltype(CallWithContext(Traits::maximized_client_area_insets, input, custom_context)) in_maximized_client_area_insets = CallWithContext(Traits::maximized_client_area_insets, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::gfx::mojom::InsetsPtr>(
        in_maximized_client_area_insets, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::FrameDecorationValues_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::ui::mojom::internal::FrameDecorationValues_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::normal_client_area_insets, input, custom_context)) in_normal_client_area_insets = CallWithContext(Traits::normal_client_area_insets, input, custom_context);
      typename decltype(result->normal_client_area_insets)::BaseType* normal_client_area_insets_ptr;
      mojo::internal::Serialize<::gfx::mojom::InsetsPtr>(
          in_normal_client_area_insets, buffer, &normal_client_area_insets_ptr, context);
      result->normal_client_area_insets.Set(normal_client_area_insets_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->normal_client_area_insets.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null normal_client_area_insets in FrameDecorationValues struct");
      decltype(CallWithContext(Traits::maximized_client_area_insets, input, custom_context)) in_maximized_client_area_insets = CallWithContext(Traits::maximized_client_area_insets, input, custom_context);
      typename decltype(result->maximized_client_area_insets)::BaseType* maximized_client_area_insets_ptr;
      mojo::internal::Serialize<::gfx::mojom::InsetsPtr>(
          in_maximized_client_area_insets, buffer, &maximized_client_area_insets_ptr, context);
      result->maximized_client_area_insets.Set(maximized_client_area_insets_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->maximized_client_area_insets.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null maximized_client_area_insets in FrameDecorationValues struct");
      result->max_title_bar_button_width = CallWithContext(Traits::max_title_bar_button_width, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::ui::mojom::internal::FrameDecorationValues_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::FrameDecorationValuesDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::ui::mojom::WsDisplay, ::ui::mojom::WsDisplayPtr> {
  static bool IsNull(const ::ui::mojom::WsDisplayPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::WsDisplayPtr* output) { output->reset(); }
  static decltype(::ui::mojom::WsDisplay::display)& display(
      ::ui::mojom::WsDisplayPtr& input) {
    return input->display;
  }
  static decltype(::ui::mojom::WsDisplay::is_primary) is_primary(
      const ::ui::mojom::WsDisplayPtr& input) {
    return input->is_primary;
  }
  static decltype(::ui::mojom::WsDisplay::frame_decoration_values)& frame_decoration_values(
      ::ui::mojom::WsDisplayPtr& input) {
    return input->frame_decoration_values;
  }

  static bool Read(::ui::mojom::WsDisplayDataView input, ::ui::mojom::WsDisplayPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::WsDisplayPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::WsDisplay, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::ui::mojom::internal::WsDisplay_Data);
    decltype(CallWithContext(Traits::display, input, custom_context)) in_display = CallWithContext(Traits::display, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::display::mojom::DisplayPtr>(
        in_display, context);
    decltype(CallWithContext(Traits::frame_decoration_values, input, custom_context)) in_frame_decoration_values = CallWithContext(Traits::frame_decoration_values, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::ui::mojom::FrameDecorationValuesPtr>(
        in_frame_decoration_values, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::WsDisplay_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::ui::mojom::internal::WsDisplay_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::display, input, custom_context)) in_display = CallWithContext(Traits::display, input, custom_context);
      typename decltype(result->display)::BaseType* display_ptr;
      mojo::internal::Serialize<::display::mojom::DisplayPtr>(
          in_display, buffer, &display_ptr, context);
      result->display.Set(display_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->display.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null display in WsDisplay struct");
      result->is_primary = CallWithContext(Traits::is_primary, input, custom_context);
      decltype(CallWithContext(Traits::frame_decoration_values, input, custom_context)) in_frame_decoration_values = CallWithContext(Traits::frame_decoration_values, input, custom_context);
      typename decltype(result->frame_decoration_values)::BaseType* frame_decoration_values_ptr;
      mojo::internal::Serialize<::ui::mojom::FrameDecorationValuesPtr>(
          in_frame_decoration_values, buffer, &frame_decoration_values_ptr, context);
      result->frame_decoration_values.Set(frame_decoration_values_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->frame_decoration_values.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null frame_decoration_values in WsDisplay struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::ui::mojom::internal::WsDisplay_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::WsDisplayDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // SERVICES_UI_PUBLIC_INTERFACES_WINDOW_MANAGER_CONSTANTS_MOJOM_H_
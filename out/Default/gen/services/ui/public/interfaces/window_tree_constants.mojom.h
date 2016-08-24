// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_WINDOW_TREE_CONSTANTS_MOJOM_H_
#define SERVICES_UI_PUBLIC_INTERFACES_WINDOW_TREE_CONSTANTS_MOJOM_H_

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
#include "services/ui/public/interfaces/window_tree_constants.mojom-shared.h"
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
const uint32_t kEmbedFlagEmbedderInterceptsEvents = 0x01U;
class WindowData;
class WindowDataDataView;
using WindowDataPtr = mojo::StructPtr<WindowData>;






class  WindowData {
 public:
  using DataView = WindowDataDataView;
  using Data_ = internal::WindowData_Data;

  static WindowDataPtr New();

  template <typename U>
  static WindowDataPtr From(const U& u) {
    return mojo::TypeConverter<WindowDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, WindowData>::Convert(*this);
  }

  WindowData();
  ~WindowData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = WindowDataPtr>
  WindowDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, WindowData>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        WindowDataPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        WindowDataPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  uint32_t parent_id;
  uint32_t window_id;
  gfx::Rect bounds;
  mojo::Map<mojo::String, mojo::Array<uint8_t>> properties;
  bool visible;
 private:
  DISALLOW_COPY_AND_ASSIGN(WindowData);
};

class WindowDataDataView {
 public:
  WindowDataDataView() {}

  WindowDataDataView(
      internal::WindowData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t parent_id() const {
    return data_->parent_id;
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
  inline void GetPropertiesDataView(
      mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>* output);

  template <typename UserType>
  bool ReadProperties(UserType* output) {
    auto pointer = data_->properties.Get();
    return mojo::internal::Deserialize<mojo::Map<mojo::String, mojo::Array<uint8_t>>>(
        pointer, output, context_);
  }
  bool visible() const {
    return data_->visible;
  }
 private:
  internal::WindowData_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace ui

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::ui::mojom::WindowDataDataView> {
  using MojomType = ::ui::mojom::WindowDataPtr;
};
}  // namespace internal
}  // namespace mojo

namespace ui {
namespace mojom {


template <typename StructPtrType>
WindowDataPtr WindowData::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->parent_id = mojo::internal::Clone(parent_id);
  rv->window_id = mojo::internal::Clone(window_id);
  rv->bounds = mojo::internal::Clone(bounds);
  rv->properties = mojo::internal::Clone(properties);
  rv->visible = mojo::internal::Clone(visible);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, WindowData>::value>::type*>
bool WindowData::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->parent_id, other.parent_id))
    return false;
  if (!mojo::internal::Equals(this->window_id, other.window_id))
    return false;
  if (!mojo::internal::Equals(this->bounds, other.bounds))
    return false;
  if (!mojo::internal::Equals(this->properties, other.properties))
    return false;
  if (!mojo::internal::Equals(this->visible, other.visible))
    return false;
  return true;
}

inline void WindowDataDataView::GetBoundsDataView(
    ::gfx::mojom::RectDataView* output) {
  auto pointer = data_->bounds.Get();
  *output = ::gfx::mojom::RectDataView(pointer, context_);
}
inline void WindowDataDataView::GetPropertiesDataView(
    mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>* output) {
  auto pointer = data_->properties.Get();
  *output = mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>(pointer, context_);
}



}  // namespace mojom
}  // namespace ui

namespace mojo {


template <>
struct  StructTraits<::ui::mojom::WindowData, ::ui::mojom::WindowDataPtr> {
  static bool IsNull(const ::ui::mojom::WindowDataPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::WindowDataPtr* output) { output->reset(); }
  static decltype(::ui::mojom::WindowData::parent_id) parent_id(
      const ::ui::mojom::WindowDataPtr& input) {
    return input->parent_id;
  }
  static decltype(::ui::mojom::WindowData::window_id) window_id(
      const ::ui::mojom::WindowDataPtr& input) {
    return input->window_id;
  }
  static decltype(::ui::mojom::WindowData::bounds)& bounds(
      ::ui::mojom::WindowDataPtr& input) {
    return input->bounds;
  }
  static decltype(::ui::mojom::WindowData::properties)& properties(
      ::ui::mojom::WindowDataPtr& input) {
    return input->properties;
  }
  static decltype(::ui::mojom::WindowData::visible) visible(
      const ::ui::mojom::WindowDataPtr& input) {
    return input->visible;
  }

  static bool Read(::ui::mojom::WindowDataDataView input, ::ui::mojom::WindowDataPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::WindowDataPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::WindowData, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::ui::mojom::internal::WindowData_Data);
    decltype(CallWithContext(Traits::bounds, input, custom_context)) in_bounds = CallWithContext(Traits::bounds, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::gfx::mojom::RectPtr>(
        in_bounds, context);
    decltype(CallWithContext(Traits::properties, input, custom_context)) in_properties = CallWithContext(Traits::properties, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Map<mojo::String, mojo::Array<uint8_t>>>(
        in_properties, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::WindowData_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::ui::mojom::internal::WindowData_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->parent_id = CallWithContext(Traits::parent_id, input, custom_context);
      result->window_id = CallWithContext(Traits::window_id, input, custom_context);
      decltype(CallWithContext(Traits::bounds, input, custom_context)) in_bounds = CallWithContext(Traits::bounds, input, custom_context);
      typename decltype(result->bounds)::BaseType* bounds_ptr;
      mojo::internal::Serialize<::gfx::mojom::RectPtr>(
          in_bounds, buffer, &bounds_ptr, context);
      result->bounds.Set(bounds_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->bounds.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null bounds in WindowData struct");
      decltype(CallWithContext(Traits::properties, input, custom_context)) in_properties = CallWithContext(Traits::properties, input, custom_context);
      typename decltype(result->properties)::BaseType* properties_ptr;
      const mojo::internal::ContainerValidateParams properties_validate_params(
          new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)));
      mojo::internal::Serialize<mojo::Map<mojo::String, mojo::Array<uint8_t>>>(
          in_properties, buffer, &properties_ptr, &properties_validate_params,
          context);
      result->properties.Set(properties_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->properties.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null properties in WindowData struct");
      result->visible = CallWithContext(Traits::visible, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::ui::mojom::internal::WindowData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::WindowDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // SERVICES_UI_PUBLIC_INTERFACES_WINDOW_TREE_CONSTANTS_MOJOM_H_
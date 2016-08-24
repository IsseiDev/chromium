// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CC_IPC_SHARED_QUAD_STATE_MOJOM_H_
#define CC_IPC_SHARED_QUAD_STATE_MOJOM_H_

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
#include "cc/ipc/shared_quad_state.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
#include "ui/gfx/mojo/transform.mojom.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"
#include "gpu/config/dx_diag_node.h"
#include "ui/gfx/geometry/point.h"
#include "cc/output/compositor_frame.h"
#include "third_party/skia/include/core/SkImageFilter.h"
#include "gpu/command_buffer/common/sync_token.h"
#include "cc/output/filter_operation.h"
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


namespace cc {
namespace mojom {
class SharedQuadState;
class SharedQuadStateDataView;
using SharedQuadStatePtr = mojo::StructPtr<SharedQuadState>;






class  SharedQuadState {
 public:
  using DataView = SharedQuadStateDataView;
  using Data_ = internal::SharedQuadState_Data;

  static SharedQuadStatePtr New();

  template <typename U>
  static SharedQuadStatePtr From(const U& u) {
    return mojo::TypeConverter<SharedQuadStatePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SharedQuadState>::Convert(*this);
  }

  SharedQuadState();
  ~SharedQuadState();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SharedQuadStatePtr>
  SharedQuadStatePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SharedQuadState>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        SharedQuadStatePtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        SharedQuadStatePtr, mojo::Array<uint8_t>>(
            input, output);
  }

  gfx::Transform quad_to_target_transform;
  gfx::Size quad_layer_bounds;
  gfx::Rect visible_quad_layer_rect;
  gfx::Rect clip_rect;
  bool is_clipped;
  float opacity;
  uint32_t blend_mode;
  int32_t sorting_context_id;
};

class SharedQuadStateDataView {
 public:
  SharedQuadStateDataView() {}

  SharedQuadStateDataView(
      internal::SharedQuadState_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetQuadToTargetTransformDataView(
      ::gfx::mojom::TransformDataView* output);

  template <typename UserType>
  bool ReadQuadToTargetTransform(UserType* output) {
    auto pointer = data_->quad_to_target_transform.Get();
    return mojo::internal::Deserialize<::gfx::mojom::TransformPtr>(
        pointer, output, context_);
  }
  inline void GetQuadLayerBoundsDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  bool ReadQuadLayerBounds(UserType* output) {
    auto pointer = data_->quad_layer_bounds.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizePtr>(
        pointer, output, context_);
  }
  inline void GetVisibleQuadLayerRectDataView(
      ::gfx::mojom::RectDataView* output);

  template <typename UserType>
  bool ReadVisibleQuadLayerRect(UserType* output) {
    auto pointer = data_->visible_quad_layer_rect.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectPtr>(
        pointer, output, context_);
  }
  inline void GetClipRectDataView(
      ::gfx::mojom::RectDataView* output);

  template <typename UserType>
  bool ReadClipRect(UserType* output) {
    auto pointer = data_->clip_rect.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectPtr>(
        pointer, output, context_);
  }
  bool is_clipped() const {
    return data_->is_clipped;
  }
  float opacity() const {
    return data_->opacity;
  }
  uint32_t blend_mode() const {
    return data_->blend_mode;
  }
  int32_t sorting_context_id() const {
    return data_->sorting_context_id;
  }
 private:
  internal::SharedQuadState_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace cc

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::cc::mojom::SharedQuadStateDataView> {
  using MojomType = ::cc::mojom::SharedQuadStatePtr;
};
}  // namespace internal
}  // namespace mojo

namespace cc {
namespace mojom {


template <typename StructPtrType>
SharedQuadStatePtr SharedQuadState::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->quad_to_target_transform = mojo::internal::Clone(quad_to_target_transform);
  rv->quad_layer_bounds = mojo::internal::Clone(quad_layer_bounds);
  rv->visible_quad_layer_rect = mojo::internal::Clone(visible_quad_layer_rect);
  rv->clip_rect = mojo::internal::Clone(clip_rect);
  rv->is_clipped = mojo::internal::Clone(is_clipped);
  rv->opacity = mojo::internal::Clone(opacity);
  rv->blend_mode = mojo::internal::Clone(blend_mode);
  rv->sorting_context_id = mojo::internal::Clone(sorting_context_id);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SharedQuadState>::value>::type*>
bool SharedQuadState::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->quad_to_target_transform, other.quad_to_target_transform))
    return false;
  if (!mojo::internal::Equals(this->quad_layer_bounds, other.quad_layer_bounds))
    return false;
  if (!mojo::internal::Equals(this->visible_quad_layer_rect, other.visible_quad_layer_rect))
    return false;
  if (!mojo::internal::Equals(this->clip_rect, other.clip_rect))
    return false;
  if (!mojo::internal::Equals(this->is_clipped, other.is_clipped))
    return false;
  if (!mojo::internal::Equals(this->opacity, other.opacity))
    return false;
  if (!mojo::internal::Equals(this->blend_mode, other.blend_mode))
    return false;
  if (!mojo::internal::Equals(this->sorting_context_id, other.sorting_context_id))
    return false;
  return true;
}

inline void SharedQuadStateDataView::GetQuadToTargetTransformDataView(
    ::gfx::mojom::TransformDataView* output) {
  auto pointer = data_->quad_to_target_transform.Get();
  *output = ::gfx::mojom::TransformDataView(pointer, context_);
}
inline void SharedQuadStateDataView::GetQuadLayerBoundsDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->quad_layer_bounds.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}
inline void SharedQuadStateDataView::GetVisibleQuadLayerRectDataView(
    ::gfx::mojom::RectDataView* output) {
  auto pointer = data_->visible_quad_layer_rect.Get();
  *output = ::gfx::mojom::RectDataView(pointer, context_);
}
inline void SharedQuadStateDataView::GetClipRectDataView(
    ::gfx::mojom::RectDataView* output) {
  auto pointer = data_->clip_rect.Get();
  *output = ::gfx::mojom::RectDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace cc

namespace mojo {


template <>
struct  StructTraits<::cc::mojom::SharedQuadState, ::cc::mojom::SharedQuadStatePtr> {
  static bool IsNull(const ::cc::mojom::SharedQuadStatePtr& input) { return !input; }
  static void SetToNull(::cc::mojom::SharedQuadStatePtr* output) { output->reset(); }
  static decltype(::cc::mojom::SharedQuadState::quad_to_target_transform)& quad_to_target_transform(
      ::cc::mojom::SharedQuadStatePtr& input) {
    return input->quad_to_target_transform;
  }
  static decltype(::cc::mojom::SharedQuadState::quad_layer_bounds)& quad_layer_bounds(
      ::cc::mojom::SharedQuadStatePtr& input) {
    return input->quad_layer_bounds;
  }
  static decltype(::cc::mojom::SharedQuadState::visible_quad_layer_rect)& visible_quad_layer_rect(
      ::cc::mojom::SharedQuadStatePtr& input) {
    return input->visible_quad_layer_rect;
  }
  static decltype(::cc::mojom::SharedQuadState::clip_rect)& clip_rect(
      ::cc::mojom::SharedQuadStatePtr& input) {
    return input->clip_rect;
  }
  static decltype(::cc::mojom::SharedQuadState::is_clipped) is_clipped(
      const ::cc::mojom::SharedQuadStatePtr& input) {
    return input->is_clipped;
  }
  static decltype(::cc::mojom::SharedQuadState::opacity) opacity(
      const ::cc::mojom::SharedQuadStatePtr& input) {
    return input->opacity;
  }
  static decltype(::cc::mojom::SharedQuadState::blend_mode) blend_mode(
      const ::cc::mojom::SharedQuadStatePtr& input) {
    return input->blend_mode;
  }
  static decltype(::cc::mojom::SharedQuadState::sorting_context_id) sorting_context_id(
      const ::cc::mojom::SharedQuadStatePtr& input) {
    return input->sorting_context_id;
  }

  static bool Read(::cc::mojom::SharedQuadStateDataView input, ::cc::mojom::SharedQuadStatePtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::cc::mojom::SharedQuadStatePtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::cc::mojom::SharedQuadState, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::cc::mojom::internal::SharedQuadState_Data);
    decltype(CallWithContext(Traits::quad_to_target_transform, input, custom_context)) in_quad_to_target_transform = CallWithContext(Traits::quad_to_target_transform, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::gfx::mojom::TransformPtr>(
        in_quad_to_target_transform, context);
    decltype(CallWithContext(Traits::quad_layer_bounds, input, custom_context)) in_quad_layer_bounds = CallWithContext(Traits::quad_layer_bounds, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::gfx::mojom::SizePtr>(
        in_quad_layer_bounds, context);
    decltype(CallWithContext(Traits::visible_quad_layer_rect, input, custom_context)) in_visible_quad_layer_rect = CallWithContext(Traits::visible_quad_layer_rect, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::gfx::mojom::RectPtr>(
        in_visible_quad_layer_rect, context);
    decltype(CallWithContext(Traits::clip_rect, input, custom_context)) in_clip_rect = CallWithContext(Traits::clip_rect, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::gfx::mojom::RectPtr>(
        in_clip_rect, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::cc::mojom::internal::SharedQuadState_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::cc::mojom::internal::SharedQuadState_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::quad_to_target_transform, input, custom_context)) in_quad_to_target_transform = CallWithContext(Traits::quad_to_target_transform, input, custom_context);
      typename decltype(result->quad_to_target_transform)::BaseType* quad_to_target_transform_ptr;
      mojo::internal::Serialize<::gfx::mojom::TransformPtr>(
          in_quad_to_target_transform, buffer, &quad_to_target_transform_ptr, context);
      result->quad_to_target_transform.Set(quad_to_target_transform_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->quad_to_target_transform.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null quad_to_target_transform in SharedQuadState struct");
      decltype(CallWithContext(Traits::quad_layer_bounds, input, custom_context)) in_quad_layer_bounds = CallWithContext(Traits::quad_layer_bounds, input, custom_context);
      typename decltype(result->quad_layer_bounds)::BaseType* quad_layer_bounds_ptr;
      mojo::internal::Serialize<::gfx::mojom::SizePtr>(
          in_quad_layer_bounds, buffer, &quad_layer_bounds_ptr, context);
      result->quad_layer_bounds.Set(quad_layer_bounds_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->quad_layer_bounds.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null quad_layer_bounds in SharedQuadState struct");
      decltype(CallWithContext(Traits::visible_quad_layer_rect, input, custom_context)) in_visible_quad_layer_rect = CallWithContext(Traits::visible_quad_layer_rect, input, custom_context);
      typename decltype(result->visible_quad_layer_rect)::BaseType* visible_quad_layer_rect_ptr;
      mojo::internal::Serialize<::gfx::mojom::RectPtr>(
          in_visible_quad_layer_rect, buffer, &visible_quad_layer_rect_ptr, context);
      result->visible_quad_layer_rect.Set(visible_quad_layer_rect_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->visible_quad_layer_rect.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null visible_quad_layer_rect in SharedQuadState struct");
      decltype(CallWithContext(Traits::clip_rect, input, custom_context)) in_clip_rect = CallWithContext(Traits::clip_rect, input, custom_context);
      typename decltype(result->clip_rect)::BaseType* clip_rect_ptr;
      mojo::internal::Serialize<::gfx::mojom::RectPtr>(
          in_clip_rect, buffer, &clip_rect_ptr, context);
      result->clip_rect.Set(clip_rect_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->clip_rect.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null clip_rect in SharedQuadState struct");
      result->is_clipped = CallWithContext(Traits::is_clipped, input, custom_context);
      result->opacity = CallWithContext(Traits::opacity, input, custom_context);
      result->blend_mode = CallWithContext(Traits::blend_mode, input, custom_context);
      result->sorting_context_id = CallWithContext(Traits::sorting_context_id, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::cc::mojom::internal::SharedQuadState_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::cc::mojom::SharedQuadStateDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // CC_IPC_SHARED_QUAD_STATE_MOJOM_H_
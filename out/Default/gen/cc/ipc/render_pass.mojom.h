// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CC_IPC_RENDER_PASS_MOJOM_H_
#define CC_IPC_RENDER_PASS_MOJOM_H_

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
#include "cc/ipc/render_pass.mojom-shared.h"
#include "cc/ipc/render_pass_id.mojom.h"
#include "cc/ipc/quads.mojom.h"
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
class RenderPass;
class RenderPassDataView;
using RenderPassPtr = mojo::StructPtr<RenderPass>;






class  RenderPass {
 public:
  using DataView = RenderPassDataView;
  using Data_ = internal::RenderPass_Data;

  static RenderPassPtr New();

  template <typename U>
  static RenderPassPtr From(const U& u) {
    return mojo::TypeConverter<RenderPassPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RenderPass>::Convert(*this);
  }

  RenderPass();
  ~RenderPass();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = RenderPassPtr>
  RenderPassPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, RenderPass>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        RenderPassPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        RenderPassPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  cc::RenderPassId id;
  gfx::Rect output_rect;
  gfx::Rect damage_rect;
  gfx::Transform transform_to_root_target;
  bool has_transparent_background;
  std::vector<::cc::mojom::DrawQuadPtr> quad_list;
 private:
  DISALLOW_COPY_AND_ASSIGN(RenderPass);
};

class RenderPassDataView {
 public:
  RenderPassDataView() {}

  RenderPassDataView(
      internal::RenderPass_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIdDataView(
      ::cc::mojom::RenderPassIdDataView* output);

  template <typename UserType>
  bool ReadId(UserType* output) {
    auto pointer = data_->id.Get();
    return mojo::internal::Deserialize<::cc::mojom::RenderPassIdPtr>(
        pointer, output, context_);
  }
  inline void GetOutputRectDataView(
      ::gfx::mojom::RectDataView* output);

  template <typename UserType>
  bool ReadOutputRect(UserType* output) {
    auto pointer = data_->output_rect.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectPtr>(
        pointer, output, context_);
  }
  inline void GetDamageRectDataView(
      ::gfx::mojom::RectDataView* output);

  template <typename UserType>
  bool ReadDamageRect(UserType* output) {
    auto pointer = data_->damage_rect.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectPtr>(
        pointer, output, context_);
  }
  inline void GetTransformToRootTargetDataView(
      ::gfx::mojom::TransformDataView* output);

  template <typename UserType>
  bool ReadTransformToRootTarget(UserType* output) {
    auto pointer = data_->transform_to_root_target.Get();
    return mojo::internal::Deserialize<::gfx::mojom::TransformPtr>(
        pointer, output, context_);
  }
  bool has_transparent_background() const {
    return data_->has_transparent_background;
  }
  inline void GetQuadListDataView(
      mojo::ArrayDataView<::cc::mojom::DrawQuadDataView>* output);

  template <typename UserType>
  bool ReadQuadList(UserType* output) {
    auto pointer = data_->quad_list.Get();
    return mojo::internal::Deserialize<mojo::Array<::cc::mojom::DrawQuadPtr>>(
        pointer, output, context_);
  }
 private:
  internal::RenderPass_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace cc

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::cc::mojom::RenderPassDataView> {
  using MojomType = ::cc::mojom::RenderPassPtr;
};
}  // namespace internal
}  // namespace mojo

namespace cc {
namespace mojom {


template <typename StructPtrType>
RenderPassPtr RenderPass::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->id = mojo::internal::Clone(id);
  rv->output_rect = mojo::internal::Clone(output_rect);
  rv->damage_rect = mojo::internal::Clone(damage_rect);
  rv->transform_to_root_target = mojo::internal::Clone(transform_to_root_target);
  rv->has_transparent_background = mojo::internal::Clone(has_transparent_background);
  rv->quad_list = mojo::internal::Clone(quad_list);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, RenderPass>::value>::type*>
bool RenderPass::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->id, other.id))
    return false;
  if (!mojo::internal::Equals(this->output_rect, other.output_rect))
    return false;
  if (!mojo::internal::Equals(this->damage_rect, other.damage_rect))
    return false;
  if (!mojo::internal::Equals(this->transform_to_root_target, other.transform_to_root_target))
    return false;
  if (!mojo::internal::Equals(this->has_transparent_background, other.has_transparent_background))
    return false;
  if (!mojo::internal::Equals(this->quad_list, other.quad_list))
    return false;
  return true;
}

inline void RenderPassDataView::GetIdDataView(
    ::cc::mojom::RenderPassIdDataView* output) {
  auto pointer = data_->id.Get();
  *output = ::cc::mojom::RenderPassIdDataView(pointer, context_);
}
inline void RenderPassDataView::GetOutputRectDataView(
    ::gfx::mojom::RectDataView* output) {
  auto pointer = data_->output_rect.Get();
  *output = ::gfx::mojom::RectDataView(pointer, context_);
}
inline void RenderPassDataView::GetDamageRectDataView(
    ::gfx::mojom::RectDataView* output) {
  auto pointer = data_->damage_rect.Get();
  *output = ::gfx::mojom::RectDataView(pointer, context_);
}
inline void RenderPassDataView::GetTransformToRootTargetDataView(
    ::gfx::mojom::TransformDataView* output) {
  auto pointer = data_->transform_to_root_target.Get();
  *output = ::gfx::mojom::TransformDataView(pointer, context_);
}
inline void RenderPassDataView::GetQuadListDataView(
    mojo::ArrayDataView<::cc::mojom::DrawQuadDataView>* output) {
  auto pointer = data_->quad_list.Get();
  *output = mojo::ArrayDataView<::cc::mojom::DrawQuadDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace cc

namespace mojo {


template <>
struct  StructTraits<::cc::mojom::RenderPass, ::cc::mojom::RenderPassPtr> {
  static bool IsNull(const ::cc::mojom::RenderPassPtr& input) { return !input; }
  static void SetToNull(::cc::mojom::RenderPassPtr* output) { output->reset(); }
  static decltype(::cc::mojom::RenderPass::id)& id(
      ::cc::mojom::RenderPassPtr& input) {
    return input->id;
  }
  static decltype(::cc::mojom::RenderPass::output_rect)& output_rect(
      ::cc::mojom::RenderPassPtr& input) {
    return input->output_rect;
  }
  static decltype(::cc::mojom::RenderPass::damage_rect)& damage_rect(
      ::cc::mojom::RenderPassPtr& input) {
    return input->damage_rect;
  }
  static decltype(::cc::mojom::RenderPass::transform_to_root_target)& transform_to_root_target(
      ::cc::mojom::RenderPassPtr& input) {
    return input->transform_to_root_target;
  }
  static decltype(::cc::mojom::RenderPass::has_transparent_background) has_transparent_background(
      const ::cc::mojom::RenderPassPtr& input) {
    return input->has_transparent_background;
  }
  static decltype(::cc::mojom::RenderPass::quad_list)& quad_list(
      ::cc::mojom::RenderPassPtr& input) {
    return input->quad_list;
  }

  static bool Read(::cc::mojom::RenderPassDataView input, ::cc::mojom::RenderPassPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::cc::mojom::RenderPassPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::cc::mojom::RenderPass, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::cc::mojom::internal::RenderPass_Data);
    decltype(CallWithContext(Traits::id, input, custom_context)) in_id = CallWithContext(Traits::id, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::cc::mojom::RenderPassIdPtr>(
        in_id, context);
    decltype(CallWithContext(Traits::output_rect, input, custom_context)) in_output_rect = CallWithContext(Traits::output_rect, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::gfx::mojom::RectPtr>(
        in_output_rect, context);
    decltype(CallWithContext(Traits::damage_rect, input, custom_context)) in_damage_rect = CallWithContext(Traits::damage_rect, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::gfx::mojom::RectPtr>(
        in_damage_rect, context);
    decltype(CallWithContext(Traits::transform_to_root_target, input, custom_context)) in_transform_to_root_target = CallWithContext(Traits::transform_to_root_target, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::gfx::mojom::TransformPtr>(
        in_transform_to_root_target, context);
    decltype(CallWithContext(Traits::quad_list, input, custom_context)) in_quad_list = CallWithContext(Traits::quad_list, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<::cc::mojom::DrawQuadPtr>>(
        in_quad_list, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::cc::mojom::internal::RenderPass_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::cc::mojom::internal::RenderPass_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::id, input, custom_context)) in_id = CallWithContext(Traits::id, input, custom_context);
      typename decltype(result->id)::BaseType* id_ptr;
      mojo::internal::Serialize<::cc::mojom::RenderPassIdPtr>(
          in_id, buffer, &id_ptr, context);
      result->id.Set(id_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->id.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null id in RenderPass struct");
      decltype(CallWithContext(Traits::output_rect, input, custom_context)) in_output_rect = CallWithContext(Traits::output_rect, input, custom_context);
      typename decltype(result->output_rect)::BaseType* output_rect_ptr;
      mojo::internal::Serialize<::gfx::mojom::RectPtr>(
          in_output_rect, buffer, &output_rect_ptr, context);
      result->output_rect.Set(output_rect_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->output_rect.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null output_rect in RenderPass struct");
      decltype(CallWithContext(Traits::damage_rect, input, custom_context)) in_damage_rect = CallWithContext(Traits::damage_rect, input, custom_context);
      typename decltype(result->damage_rect)::BaseType* damage_rect_ptr;
      mojo::internal::Serialize<::gfx::mojom::RectPtr>(
          in_damage_rect, buffer, &damage_rect_ptr, context);
      result->damage_rect.Set(damage_rect_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->damage_rect.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null damage_rect in RenderPass struct");
      decltype(CallWithContext(Traits::transform_to_root_target, input, custom_context)) in_transform_to_root_target = CallWithContext(Traits::transform_to_root_target, input, custom_context);
      typename decltype(result->transform_to_root_target)::BaseType* transform_to_root_target_ptr;
      mojo::internal::Serialize<::gfx::mojom::TransformPtr>(
          in_transform_to_root_target, buffer, &transform_to_root_target_ptr, context);
      result->transform_to_root_target.Set(transform_to_root_target_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->transform_to_root_target.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null transform_to_root_target in RenderPass struct");
      result->has_transparent_background = CallWithContext(Traits::has_transparent_background, input, custom_context);
      decltype(CallWithContext(Traits::quad_list, input, custom_context)) in_quad_list = CallWithContext(Traits::quad_list, input, custom_context);
      typename decltype(result->quad_list)::BaseType* quad_list_ptr;
      const mojo::internal::ContainerValidateParams quad_list_validate_params(
          0, false, nullptr);
      mojo::internal::Serialize<mojo::Array<::cc::mojom::DrawQuadPtr>>(
          in_quad_list, buffer, &quad_list_ptr, &quad_list_validate_params,
          context);
      result->quad_list.Set(quad_list_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->quad_list.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null quad_list in RenderPass struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::cc::mojom::internal::RenderPass_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::cc::mojom::RenderPassDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // CC_IPC_RENDER_PASS_MOJOM_H_
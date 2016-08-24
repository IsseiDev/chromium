// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CC_IPC_FILTER_OPERATION_MOJOM_H_
#define CC_IPC_FILTER_OPERATION_MOJOM_H_

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
#include "cc/ipc/filter_operation.mojom-shared.h"
#include "skia/public/interfaces/image_filter.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
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
class FilterOperation;
class FilterOperationDataView;
using FilterOperationPtr = mojo::StructPtr<FilterOperation>;






class  FilterOperation {
 public:
  using DataView = FilterOperationDataView;
  using Data_ = internal::FilterOperation_Data;

  static FilterOperationPtr New();

  template <typename U>
  static FilterOperationPtr From(const U& u) {
    return mojo::TypeConverter<FilterOperationPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, FilterOperation>::Convert(*this);
  }

  FilterOperation();
  ~FilterOperation();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = FilterOperationPtr>
  FilterOperationPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, FilterOperation>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        FilterOperationPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        FilterOperationPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  FilterType type;
  float amount;
  gfx::Point drop_shadow_offset;
  uint32_t drop_shadow_color;
  sk_sp<SkImageFilter> image_filter;
  base::Optional<std::vector<float>> matrix;
  int32_t zoom_inset;
};

class FilterOperationDataView {
 public:
  FilterOperationDataView() {}

  FilterOperationDataView(
      internal::FilterOperation_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::cc::mojom::FilterType>(
        data_value, output);
  }

  ::cc::mojom::FilterType type() const {
    return static_cast<::cc::mojom::FilterType>(data_->type);
  }
  float amount() const {
    return data_->amount;
  }
  inline void GetDropShadowOffsetDataView(
      ::gfx::mojom::PointDataView* output);

  template <typename UserType>
  bool ReadDropShadowOffset(UserType* output) {
    auto pointer = data_->drop_shadow_offset.Get();
    return mojo::internal::Deserialize<::gfx::mojom::PointPtr>(
        pointer, output, context_);
  }
  uint32_t drop_shadow_color() const {
    return data_->drop_shadow_color;
  }
  inline void GetImageFilterDataView(
      ::skia::mojom::ImageFilterDataView* output);

  template <typename UserType>
  bool ReadImageFilter(UserType* output) {
    auto pointer = data_->image_filter.Get();
    return mojo::internal::Deserialize<::skia::mojom::ImageFilterPtr>(
        pointer, output, context_);
  }
  inline void GetMatrixDataView(
      mojo::ArrayDataView<float>* output);

  template <typename UserType>
  bool ReadMatrix(UserType* output) {
    auto pointer = data_->matrix.Get();
    return mojo::internal::Deserialize<mojo::Array<float>>(
        pointer, output, context_);
  }
  int32_t zoom_inset() const {
    return data_->zoom_inset;
  }
 private:
  internal::FilterOperation_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace cc

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::cc::mojom::FilterOperationDataView> {
  using MojomType = ::cc::mojom::FilterOperationPtr;
};
}  // namespace internal
}  // namespace mojo

namespace cc {
namespace mojom {


template <typename StructPtrType>
FilterOperationPtr FilterOperation::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->type = mojo::internal::Clone(type);
  rv->amount = mojo::internal::Clone(amount);
  rv->drop_shadow_offset = mojo::internal::Clone(drop_shadow_offset);
  rv->drop_shadow_color = mojo::internal::Clone(drop_shadow_color);
  rv->image_filter = mojo::internal::Clone(image_filter);
  rv->matrix = mojo::internal::Clone(matrix);
  rv->zoom_inset = mojo::internal::Clone(zoom_inset);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, FilterOperation>::value>::type*>
bool FilterOperation::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->type, other.type))
    return false;
  if (!mojo::internal::Equals(this->amount, other.amount))
    return false;
  if (!mojo::internal::Equals(this->drop_shadow_offset, other.drop_shadow_offset))
    return false;
  if (!mojo::internal::Equals(this->drop_shadow_color, other.drop_shadow_color))
    return false;
  if (!mojo::internal::Equals(this->image_filter, other.image_filter))
    return false;
  if (!mojo::internal::Equals(this->matrix, other.matrix))
    return false;
  if (!mojo::internal::Equals(this->zoom_inset, other.zoom_inset))
    return false;
  return true;
}

inline void FilterOperationDataView::GetDropShadowOffsetDataView(
    ::gfx::mojom::PointDataView* output) {
  auto pointer = data_->drop_shadow_offset.Get();
  *output = ::gfx::mojom::PointDataView(pointer, context_);
}
inline void FilterOperationDataView::GetImageFilterDataView(
    ::skia::mojom::ImageFilterDataView* output) {
  auto pointer = data_->image_filter.Get();
  *output = ::skia::mojom::ImageFilterDataView(pointer, context_);
}
inline void FilterOperationDataView::GetMatrixDataView(
    mojo::ArrayDataView<float>* output) {
  auto pointer = data_->matrix.Get();
  *output = mojo::ArrayDataView<float>(pointer, context_);
}



}  // namespace mojom
}  // namespace cc

namespace mojo {


template <>
struct  StructTraits<::cc::mojom::FilterOperation, ::cc::mojom::FilterOperationPtr> {
  static bool IsNull(const ::cc::mojom::FilterOperationPtr& input) { return !input; }
  static void SetToNull(::cc::mojom::FilterOperationPtr* output) { output->reset(); }
  static decltype(::cc::mojom::FilterOperation::type) type(
      const ::cc::mojom::FilterOperationPtr& input) {
    return input->type;
  }
  static decltype(::cc::mojom::FilterOperation::amount) amount(
      const ::cc::mojom::FilterOperationPtr& input) {
    return input->amount;
  }
  static decltype(::cc::mojom::FilterOperation::drop_shadow_offset)& drop_shadow_offset(
      ::cc::mojom::FilterOperationPtr& input) {
    return input->drop_shadow_offset;
  }
  static decltype(::cc::mojom::FilterOperation::drop_shadow_color) drop_shadow_color(
      const ::cc::mojom::FilterOperationPtr& input) {
    return input->drop_shadow_color;
  }
  static decltype(::cc::mojom::FilterOperation::image_filter)& image_filter(
      ::cc::mojom::FilterOperationPtr& input) {
    return input->image_filter;
  }
  static decltype(::cc::mojom::FilterOperation::matrix)& matrix(
      ::cc::mojom::FilterOperationPtr& input) {
    return input->matrix;
  }
  static decltype(::cc::mojom::FilterOperation::zoom_inset) zoom_inset(
      const ::cc::mojom::FilterOperationPtr& input) {
    return input->zoom_inset;
  }

  static bool Read(::cc::mojom::FilterOperationDataView input, ::cc::mojom::FilterOperationPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::cc::mojom::FilterOperationPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::cc::mojom::FilterOperation, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::cc::mojom::internal::FilterOperation_Data);
    decltype(CallWithContext(Traits::drop_shadow_offset, input, custom_context)) in_drop_shadow_offset = CallWithContext(Traits::drop_shadow_offset, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::gfx::mojom::PointPtr>(
        in_drop_shadow_offset, context);
    decltype(CallWithContext(Traits::image_filter, input, custom_context)) in_image_filter = CallWithContext(Traits::image_filter, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::skia::mojom::ImageFilterPtr>(
        in_image_filter, context);
    decltype(CallWithContext(Traits::matrix, input, custom_context)) in_matrix = CallWithContext(Traits::matrix, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<float>>(
        in_matrix, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::cc::mojom::internal::FilterOperation_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::cc::mojom::internal::FilterOperation_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      mojo::internal::Serialize<::cc::mojom::FilterType>(
          CallWithContext(Traits::type, input, custom_context), &result->type);
      result->amount = CallWithContext(Traits::amount, input, custom_context);
      decltype(CallWithContext(Traits::drop_shadow_offset, input, custom_context)) in_drop_shadow_offset = CallWithContext(Traits::drop_shadow_offset, input, custom_context);
      typename decltype(result->drop_shadow_offset)::BaseType* drop_shadow_offset_ptr;
      mojo::internal::Serialize<::gfx::mojom::PointPtr>(
          in_drop_shadow_offset, buffer, &drop_shadow_offset_ptr, context);
      result->drop_shadow_offset.Set(drop_shadow_offset_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->drop_shadow_offset.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null drop_shadow_offset in FilterOperation struct");
      result->drop_shadow_color = CallWithContext(Traits::drop_shadow_color, input, custom_context);
      decltype(CallWithContext(Traits::image_filter, input, custom_context)) in_image_filter = CallWithContext(Traits::image_filter, input, custom_context);
      typename decltype(result->image_filter)::BaseType* image_filter_ptr;
      mojo::internal::Serialize<::skia::mojom::ImageFilterPtr>(
          in_image_filter, buffer, &image_filter_ptr, context);
      result->image_filter.Set(image_filter_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->image_filter.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null image_filter in FilterOperation struct");
      decltype(CallWithContext(Traits::matrix, input, custom_context)) in_matrix = CallWithContext(Traits::matrix, input, custom_context);
      typename decltype(result->matrix)::BaseType* matrix_ptr;
      const mojo::internal::ContainerValidateParams matrix_validate_params(
          20, false, nullptr);
      mojo::internal::Serialize<mojo::Array<float>>(
          in_matrix, buffer, &matrix_ptr, &matrix_validate_params,
          context);
      result->matrix.Set(matrix_ptr);
      result->zoom_inset = CallWithContext(Traits::zoom_inset, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::cc::mojom::internal::FilterOperation_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::cc::mojom::FilterOperationDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // CC_IPC_FILTER_OPERATION_MOJOM_H_
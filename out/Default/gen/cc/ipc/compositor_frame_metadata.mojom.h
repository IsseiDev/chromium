// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CC_IPC_COMPOSITOR_FRAME_METADATA_MOJOM_H_
#define CC_IPC_COMPOSITOR_FRAME_METADATA_MOJOM_H_

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
#include "cc/ipc/compositor_frame_metadata.mojom-shared.h"
#include "cc/ipc/selection.mojom.h"
#include "cc/ipc/surface_id.mojom.h"
#include "ui/events/mojo/latency_info.mojom.h"
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
class CompositorFrameMetadata;
class CompositorFrameMetadataDataView;
using CompositorFrameMetadataPtr = mojo::StructPtr<CompositorFrameMetadata>;






class  CompositorFrameMetadata {
 public:
  using DataView = CompositorFrameMetadataDataView;
  using Data_ = internal::CompositorFrameMetadata_Data;

  static CompositorFrameMetadataPtr New();

  template <typename U>
  static CompositorFrameMetadataPtr From(const U& u) {
    return mojo::TypeConverter<CompositorFrameMetadataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CompositorFrameMetadata>::Convert(*this);
  }

  CompositorFrameMetadata();
  ~CompositorFrameMetadata();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CompositorFrameMetadataPtr>
  CompositorFrameMetadataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CompositorFrameMetadata>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        CompositorFrameMetadataPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        CompositorFrameMetadataPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  float device_scale_factor;
  gfx::Vector2dF root_scroll_offset;
  float page_scale_factor;
  gfx::SizeF scrollable_viewport_size;
  gfx::SizeF root_layer_size;
  float min_page_scale_factor;
  float max_page_scale_factor;
  bool root_overflow_x_hidden;
  bool root_overflow_y_hidden;
  bool may_contain_video;
  bool is_resourceless_software_draw_with_scroll_or_animation;
  float top_controls_height;
  float top_controls_shown_ratio;
  float bottom_controls_height;
  float bottom_controls_shown_ratio;
  uint32_t root_background_color;
  cc::Selection<gfx::SelectionBound> selection;
  std::vector<ui::LatencyInfo> latency_info;
  std::vector<uint32_t> satisfies_sequences;
  std::vector<cc::SurfaceId> referenced_surfaces;
};

class CompositorFrameMetadataDataView {
 public:
  CompositorFrameMetadataDataView() {}

  CompositorFrameMetadataDataView(
      internal::CompositorFrameMetadata_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  float device_scale_factor() const {
    return data_->device_scale_factor;
  }
  inline void GetRootScrollOffsetDataView(
      ::gfx::mojom::Vector2dFDataView* output);

  template <typename UserType>
  bool ReadRootScrollOffset(UserType* output) {
    auto pointer = data_->root_scroll_offset.Get();
    return mojo::internal::Deserialize<::gfx::mojom::Vector2dFPtr>(
        pointer, output, context_);
  }
  float page_scale_factor() const {
    return data_->page_scale_factor;
  }
  inline void GetScrollableViewportSizeDataView(
      ::gfx::mojom::SizeFDataView* output);

  template <typename UserType>
  bool ReadScrollableViewportSize(UserType* output) {
    auto pointer = data_->scrollable_viewport_size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeFPtr>(
        pointer, output, context_);
  }
  inline void GetRootLayerSizeDataView(
      ::gfx::mojom::SizeFDataView* output);

  template <typename UserType>
  bool ReadRootLayerSize(UserType* output) {
    auto pointer = data_->root_layer_size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeFPtr>(
        pointer, output, context_);
  }
  float min_page_scale_factor() const {
    return data_->min_page_scale_factor;
  }
  float max_page_scale_factor() const {
    return data_->max_page_scale_factor;
  }
  bool root_overflow_x_hidden() const {
    return data_->root_overflow_x_hidden;
  }
  bool root_overflow_y_hidden() const {
    return data_->root_overflow_y_hidden;
  }
  bool may_contain_video() const {
    return data_->may_contain_video;
  }
  bool is_resourceless_software_draw_with_scroll_or_animation() const {
    return data_->is_resourceless_software_draw_with_scroll_or_animation;
  }
  float top_controls_height() const {
    return data_->top_controls_height;
  }
  float top_controls_shown_ratio() const {
    return data_->top_controls_shown_ratio;
  }
  float bottom_controls_height() const {
    return data_->bottom_controls_height;
  }
  float bottom_controls_shown_ratio() const {
    return data_->bottom_controls_shown_ratio;
  }
  uint32_t root_background_color() const {
    return data_->root_background_color;
  }
  inline void GetSelectionDataView(
      ::cc::mojom::SelectionDataView* output);

  template <typename UserType>
  bool ReadSelection(UserType* output) {
    auto pointer = data_->selection.Get();
    return mojo::internal::Deserialize<::cc::mojom::SelectionPtr>(
        pointer, output, context_);
  }
  inline void GetLatencyInfoDataView(
      mojo::ArrayDataView<::ui::mojom::LatencyInfoDataView>* output);

  template <typename UserType>
  bool ReadLatencyInfo(UserType* output) {
    auto pointer = data_->latency_info.Get();
    return mojo::internal::Deserialize<mojo::Array<::ui::mojom::LatencyInfoPtr>>(
        pointer, output, context_);
  }
  inline void GetSatisfiesSequencesDataView(
      mojo::ArrayDataView<uint32_t>* output);

  template <typename UserType>
  bool ReadSatisfiesSequences(UserType* output) {
    auto pointer = data_->satisfies_sequences.Get();
    return mojo::internal::Deserialize<mojo::Array<uint32_t>>(
        pointer, output, context_);
  }
  inline void GetReferencedSurfacesDataView(
      mojo::ArrayDataView<::cc::mojom::SurfaceIdDataView>* output);

  template <typename UserType>
  bool ReadReferencedSurfaces(UserType* output) {
    auto pointer = data_->referenced_surfaces.Get();
    return mojo::internal::Deserialize<mojo::Array<::cc::mojom::SurfaceIdPtr>>(
        pointer, output, context_);
  }
 private:
  internal::CompositorFrameMetadata_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace cc

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::cc::mojom::CompositorFrameMetadataDataView> {
  using MojomType = ::cc::mojom::CompositorFrameMetadataPtr;
};
}  // namespace internal
}  // namespace mojo

namespace cc {
namespace mojom {


template <typename StructPtrType>
CompositorFrameMetadataPtr CompositorFrameMetadata::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->device_scale_factor = mojo::internal::Clone(device_scale_factor);
  rv->root_scroll_offset = mojo::internal::Clone(root_scroll_offset);
  rv->page_scale_factor = mojo::internal::Clone(page_scale_factor);
  rv->scrollable_viewport_size = mojo::internal::Clone(scrollable_viewport_size);
  rv->root_layer_size = mojo::internal::Clone(root_layer_size);
  rv->min_page_scale_factor = mojo::internal::Clone(min_page_scale_factor);
  rv->max_page_scale_factor = mojo::internal::Clone(max_page_scale_factor);
  rv->root_overflow_x_hidden = mojo::internal::Clone(root_overflow_x_hidden);
  rv->root_overflow_y_hidden = mojo::internal::Clone(root_overflow_y_hidden);
  rv->may_contain_video = mojo::internal::Clone(may_contain_video);
  rv->is_resourceless_software_draw_with_scroll_or_animation = mojo::internal::Clone(is_resourceless_software_draw_with_scroll_or_animation);
  rv->top_controls_height = mojo::internal::Clone(top_controls_height);
  rv->top_controls_shown_ratio = mojo::internal::Clone(top_controls_shown_ratio);
  rv->bottom_controls_height = mojo::internal::Clone(bottom_controls_height);
  rv->bottom_controls_shown_ratio = mojo::internal::Clone(bottom_controls_shown_ratio);
  rv->root_background_color = mojo::internal::Clone(root_background_color);
  rv->selection = mojo::internal::Clone(selection);
  rv->latency_info = mojo::internal::Clone(latency_info);
  rv->satisfies_sequences = mojo::internal::Clone(satisfies_sequences);
  rv->referenced_surfaces = mojo::internal::Clone(referenced_surfaces);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CompositorFrameMetadata>::value>::type*>
bool CompositorFrameMetadata::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->device_scale_factor, other.device_scale_factor))
    return false;
  if (!mojo::internal::Equals(this->root_scroll_offset, other.root_scroll_offset))
    return false;
  if (!mojo::internal::Equals(this->page_scale_factor, other.page_scale_factor))
    return false;
  if (!mojo::internal::Equals(this->scrollable_viewport_size, other.scrollable_viewport_size))
    return false;
  if (!mojo::internal::Equals(this->root_layer_size, other.root_layer_size))
    return false;
  if (!mojo::internal::Equals(this->min_page_scale_factor, other.min_page_scale_factor))
    return false;
  if (!mojo::internal::Equals(this->max_page_scale_factor, other.max_page_scale_factor))
    return false;
  if (!mojo::internal::Equals(this->root_overflow_x_hidden, other.root_overflow_x_hidden))
    return false;
  if (!mojo::internal::Equals(this->root_overflow_y_hidden, other.root_overflow_y_hidden))
    return false;
  if (!mojo::internal::Equals(this->may_contain_video, other.may_contain_video))
    return false;
  if (!mojo::internal::Equals(this->is_resourceless_software_draw_with_scroll_or_animation, other.is_resourceless_software_draw_with_scroll_or_animation))
    return false;
  if (!mojo::internal::Equals(this->top_controls_height, other.top_controls_height))
    return false;
  if (!mojo::internal::Equals(this->top_controls_shown_ratio, other.top_controls_shown_ratio))
    return false;
  if (!mojo::internal::Equals(this->bottom_controls_height, other.bottom_controls_height))
    return false;
  if (!mojo::internal::Equals(this->bottom_controls_shown_ratio, other.bottom_controls_shown_ratio))
    return false;
  if (!mojo::internal::Equals(this->root_background_color, other.root_background_color))
    return false;
  if (!mojo::internal::Equals(this->selection, other.selection))
    return false;
  if (!mojo::internal::Equals(this->latency_info, other.latency_info))
    return false;
  if (!mojo::internal::Equals(this->satisfies_sequences, other.satisfies_sequences))
    return false;
  if (!mojo::internal::Equals(this->referenced_surfaces, other.referenced_surfaces))
    return false;
  return true;
}

inline void CompositorFrameMetadataDataView::GetRootScrollOffsetDataView(
    ::gfx::mojom::Vector2dFDataView* output) {
  auto pointer = data_->root_scroll_offset.Get();
  *output = ::gfx::mojom::Vector2dFDataView(pointer, context_);
}
inline void CompositorFrameMetadataDataView::GetScrollableViewportSizeDataView(
    ::gfx::mojom::SizeFDataView* output) {
  auto pointer = data_->scrollable_viewport_size.Get();
  *output = ::gfx::mojom::SizeFDataView(pointer, context_);
}
inline void CompositorFrameMetadataDataView::GetRootLayerSizeDataView(
    ::gfx::mojom::SizeFDataView* output) {
  auto pointer = data_->root_layer_size.Get();
  *output = ::gfx::mojom::SizeFDataView(pointer, context_);
}
inline void CompositorFrameMetadataDataView::GetSelectionDataView(
    ::cc::mojom::SelectionDataView* output) {
  auto pointer = data_->selection.Get();
  *output = ::cc::mojom::SelectionDataView(pointer, context_);
}
inline void CompositorFrameMetadataDataView::GetLatencyInfoDataView(
    mojo::ArrayDataView<::ui::mojom::LatencyInfoDataView>* output) {
  auto pointer = data_->latency_info.Get();
  *output = mojo::ArrayDataView<::ui::mojom::LatencyInfoDataView>(pointer, context_);
}
inline void CompositorFrameMetadataDataView::GetSatisfiesSequencesDataView(
    mojo::ArrayDataView<uint32_t>* output) {
  auto pointer = data_->satisfies_sequences.Get();
  *output = mojo::ArrayDataView<uint32_t>(pointer, context_);
}
inline void CompositorFrameMetadataDataView::GetReferencedSurfacesDataView(
    mojo::ArrayDataView<::cc::mojom::SurfaceIdDataView>* output) {
  auto pointer = data_->referenced_surfaces.Get();
  *output = mojo::ArrayDataView<::cc::mojom::SurfaceIdDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace cc

namespace mojo {


template <>
struct  StructTraits<::cc::mojom::CompositorFrameMetadata, ::cc::mojom::CompositorFrameMetadataPtr> {
  static bool IsNull(const ::cc::mojom::CompositorFrameMetadataPtr& input) { return !input; }
  static void SetToNull(::cc::mojom::CompositorFrameMetadataPtr* output) { output->reset(); }
  static decltype(::cc::mojom::CompositorFrameMetadata::device_scale_factor) device_scale_factor(
      const ::cc::mojom::CompositorFrameMetadataPtr& input) {
    return input->device_scale_factor;
  }
  static decltype(::cc::mojom::CompositorFrameMetadata::root_scroll_offset)& root_scroll_offset(
      ::cc::mojom::CompositorFrameMetadataPtr& input) {
    return input->root_scroll_offset;
  }
  static decltype(::cc::mojom::CompositorFrameMetadata::page_scale_factor) page_scale_factor(
      const ::cc::mojom::CompositorFrameMetadataPtr& input) {
    return input->page_scale_factor;
  }
  static decltype(::cc::mojom::CompositorFrameMetadata::scrollable_viewport_size)& scrollable_viewport_size(
      ::cc::mojom::CompositorFrameMetadataPtr& input) {
    return input->scrollable_viewport_size;
  }
  static decltype(::cc::mojom::CompositorFrameMetadata::root_layer_size)& root_layer_size(
      ::cc::mojom::CompositorFrameMetadataPtr& input) {
    return input->root_layer_size;
  }
  static decltype(::cc::mojom::CompositorFrameMetadata::min_page_scale_factor) min_page_scale_factor(
      const ::cc::mojom::CompositorFrameMetadataPtr& input) {
    return input->min_page_scale_factor;
  }
  static decltype(::cc::mojom::CompositorFrameMetadata::max_page_scale_factor) max_page_scale_factor(
      const ::cc::mojom::CompositorFrameMetadataPtr& input) {
    return input->max_page_scale_factor;
  }
  static decltype(::cc::mojom::CompositorFrameMetadata::root_overflow_x_hidden) root_overflow_x_hidden(
      const ::cc::mojom::CompositorFrameMetadataPtr& input) {
    return input->root_overflow_x_hidden;
  }
  static decltype(::cc::mojom::CompositorFrameMetadata::root_overflow_y_hidden) root_overflow_y_hidden(
      const ::cc::mojom::CompositorFrameMetadataPtr& input) {
    return input->root_overflow_y_hidden;
  }
  static decltype(::cc::mojom::CompositorFrameMetadata::may_contain_video) may_contain_video(
      const ::cc::mojom::CompositorFrameMetadataPtr& input) {
    return input->may_contain_video;
  }
  static decltype(::cc::mojom::CompositorFrameMetadata::is_resourceless_software_draw_with_scroll_or_animation) is_resourceless_software_draw_with_scroll_or_animation(
      const ::cc::mojom::CompositorFrameMetadataPtr& input) {
    return input->is_resourceless_software_draw_with_scroll_or_animation;
  }
  static decltype(::cc::mojom::CompositorFrameMetadata::top_controls_height) top_controls_height(
      const ::cc::mojom::CompositorFrameMetadataPtr& input) {
    return input->top_controls_height;
  }
  static decltype(::cc::mojom::CompositorFrameMetadata::top_controls_shown_ratio) top_controls_shown_ratio(
      const ::cc::mojom::CompositorFrameMetadataPtr& input) {
    return input->top_controls_shown_ratio;
  }
  static decltype(::cc::mojom::CompositorFrameMetadata::bottom_controls_height) bottom_controls_height(
      const ::cc::mojom::CompositorFrameMetadataPtr& input) {
    return input->bottom_controls_height;
  }
  static decltype(::cc::mojom::CompositorFrameMetadata::bottom_controls_shown_ratio) bottom_controls_shown_ratio(
      const ::cc::mojom::CompositorFrameMetadataPtr& input) {
    return input->bottom_controls_shown_ratio;
  }
  static decltype(::cc::mojom::CompositorFrameMetadata::root_background_color) root_background_color(
      const ::cc::mojom::CompositorFrameMetadataPtr& input) {
    return input->root_background_color;
  }
  static decltype(::cc::mojom::CompositorFrameMetadata::selection)& selection(
      ::cc::mojom::CompositorFrameMetadataPtr& input) {
    return input->selection;
  }
  static decltype(::cc::mojom::CompositorFrameMetadata::latency_info)& latency_info(
      ::cc::mojom::CompositorFrameMetadataPtr& input) {
    return input->latency_info;
  }
  static decltype(::cc::mojom::CompositorFrameMetadata::satisfies_sequences)& satisfies_sequences(
      ::cc::mojom::CompositorFrameMetadataPtr& input) {
    return input->satisfies_sequences;
  }
  static decltype(::cc::mojom::CompositorFrameMetadata::referenced_surfaces)& referenced_surfaces(
      ::cc::mojom::CompositorFrameMetadataPtr& input) {
    return input->referenced_surfaces;
  }

  static bool Read(::cc::mojom::CompositorFrameMetadataDataView input, ::cc::mojom::CompositorFrameMetadataPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::cc::mojom::CompositorFrameMetadataPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::cc::mojom::CompositorFrameMetadata, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::cc::mojom::internal::CompositorFrameMetadata_Data);
    decltype(CallWithContext(Traits::root_scroll_offset, input, custom_context)) in_root_scroll_offset = CallWithContext(Traits::root_scroll_offset, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::gfx::mojom::Vector2dFPtr>(
        in_root_scroll_offset, context);
    decltype(CallWithContext(Traits::scrollable_viewport_size, input, custom_context)) in_scrollable_viewport_size = CallWithContext(Traits::scrollable_viewport_size, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::gfx::mojom::SizeFPtr>(
        in_scrollable_viewport_size, context);
    decltype(CallWithContext(Traits::root_layer_size, input, custom_context)) in_root_layer_size = CallWithContext(Traits::root_layer_size, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::gfx::mojom::SizeFPtr>(
        in_root_layer_size, context);
    decltype(CallWithContext(Traits::selection, input, custom_context)) in_selection = CallWithContext(Traits::selection, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::cc::mojom::SelectionPtr>(
        in_selection, context);
    decltype(CallWithContext(Traits::latency_info, input, custom_context)) in_latency_info = CallWithContext(Traits::latency_info, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<::ui::mojom::LatencyInfoPtr>>(
        in_latency_info, context);
    decltype(CallWithContext(Traits::satisfies_sequences, input, custom_context)) in_satisfies_sequences = CallWithContext(Traits::satisfies_sequences, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<uint32_t>>(
        in_satisfies_sequences, context);
    decltype(CallWithContext(Traits::referenced_surfaces, input, custom_context)) in_referenced_surfaces = CallWithContext(Traits::referenced_surfaces, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<::cc::mojom::SurfaceIdPtr>>(
        in_referenced_surfaces, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::cc::mojom::internal::CompositorFrameMetadata_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::cc::mojom::internal::CompositorFrameMetadata_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->device_scale_factor = CallWithContext(Traits::device_scale_factor, input, custom_context);
      decltype(CallWithContext(Traits::root_scroll_offset, input, custom_context)) in_root_scroll_offset = CallWithContext(Traits::root_scroll_offset, input, custom_context);
      typename decltype(result->root_scroll_offset)::BaseType* root_scroll_offset_ptr;
      mojo::internal::Serialize<::gfx::mojom::Vector2dFPtr>(
          in_root_scroll_offset, buffer, &root_scroll_offset_ptr, context);
      result->root_scroll_offset.Set(root_scroll_offset_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->root_scroll_offset.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null root_scroll_offset in CompositorFrameMetadata struct");
      result->page_scale_factor = CallWithContext(Traits::page_scale_factor, input, custom_context);
      decltype(CallWithContext(Traits::scrollable_viewport_size, input, custom_context)) in_scrollable_viewport_size = CallWithContext(Traits::scrollable_viewport_size, input, custom_context);
      typename decltype(result->scrollable_viewport_size)::BaseType* scrollable_viewport_size_ptr;
      mojo::internal::Serialize<::gfx::mojom::SizeFPtr>(
          in_scrollable_viewport_size, buffer, &scrollable_viewport_size_ptr, context);
      result->scrollable_viewport_size.Set(scrollable_viewport_size_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->scrollable_viewport_size.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null scrollable_viewport_size in CompositorFrameMetadata struct");
      decltype(CallWithContext(Traits::root_layer_size, input, custom_context)) in_root_layer_size = CallWithContext(Traits::root_layer_size, input, custom_context);
      typename decltype(result->root_layer_size)::BaseType* root_layer_size_ptr;
      mojo::internal::Serialize<::gfx::mojom::SizeFPtr>(
          in_root_layer_size, buffer, &root_layer_size_ptr, context);
      result->root_layer_size.Set(root_layer_size_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->root_layer_size.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null root_layer_size in CompositorFrameMetadata struct");
      result->min_page_scale_factor = CallWithContext(Traits::min_page_scale_factor, input, custom_context);
      result->max_page_scale_factor = CallWithContext(Traits::max_page_scale_factor, input, custom_context);
      result->root_overflow_x_hidden = CallWithContext(Traits::root_overflow_x_hidden, input, custom_context);
      result->root_overflow_y_hidden = CallWithContext(Traits::root_overflow_y_hidden, input, custom_context);
      result->may_contain_video = CallWithContext(Traits::may_contain_video, input, custom_context);
      result->is_resourceless_software_draw_with_scroll_or_animation = CallWithContext(Traits::is_resourceless_software_draw_with_scroll_or_animation, input, custom_context);
      result->top_controls_height = CallWithContext(Traits::top_controls_height, input, custom_context);
      result->top_controls_shown_ratio = CallWithContext(Traits::top_controls_shown_ratio, input, custom_context);
      result->bottom_controls_height = CallWithContext(Traits::bottom_controls_height, input, custom_context);
      result->bottom_controls_shown_ratio = CallWithContext(Traits::bottom_controls_shown_ratio, input, custom_context);
      result->root_background_color = CallWithContext(Traits::root_background_color, input, custom_context);
      decltype(CallWithContext(Traits::selection, input, custom_context)) in_selection = CallWithContext(Traits::selection, input, custom_context);
      typename decltype(result->selection)::BaseType* selection_ptr;
      mojo::internal::Serialize<::cc::mojom::SelectionPtr>(
          in_selection, buffer, &selection_ptr, context);
      result->selection.Set(selection_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->selection.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null selection in CompositorFrameMetadata struct");
      decltype(CallWithContext(Traits::latency_info, input, custom_context)) in_latency_info = CallWithContext(Traits::latency_info, input, custom_context);
      typename decltype(result->latency_info)::BaseType* latency_info_ptr;
      const mojo::internal::ContainerValidateParams latency_info_validate_params(
          0, false, nullptr);
      mojo::internal::Serialize<mojo::Array<::ui::mojom::LatencyInfoPtr>>(
          in_latency_info, buffer, &latency_info_ptr, &latency_info_validate_params,
          context);
      result->latency_info.Set(latency_info_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->latency_info.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null latency_info in CompositorFrameMetadata struct");
      decltype(CallWithContext(Traits::satisfies_sequences, input, custom_context)) in_satisfies_sequences = CallWithContext(Traits::satisfies_sequences, input, custom_context);
      typename decltype(result->satisfies_sequences)::BaseType* satisfies_sequences_ptr;
      const mojo::internal::ContainerValidateParams satisfies_sequences_validate_params(
          0, false, nullptr);
      mojo::internal::Serialize<mojo::Array<uint32_t>>(
          in_satisfies_sequences, buffer, &satisfies_sequences_ptr, &satisfies_sequences_validate_params,
          context);
      result->satisfies_sequences.Set(satisfies_sequences_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->satisfies_sequences.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null satisfies_sequences in CompositorFrameMetadata struct");
      decltype(CallWithContext(Traits::referenced_surfaces, input, custom_context)) in_referenced_surfaces = CallWithContext(Traits::referenced_surfaces, input, custom_context);
      typename decltype(result->referenced_surfaces)::BaseType* referenced_surfaces_ptr;
      const mojo::internal::ContainerValidateParams referenced_surfaces_validate_params(
          0, false, nullptr);
      mojo::internal::Serialize<mojo::Array<::cc::mojom::SurfaceIdPtr>>(
          in_referenced_surfaces, buffer, &referenced_surfaces_ptr, &referenced_surfaces_validate_params,
          context);
      result->referenced_surfaces.Set(referenced_surfaces_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->referenced_surfaces.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null referenced_surfaces in CompositorFrameMetadata struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::cc::mojom::internal::CompositorFrameMetadata_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::cc::mojom::CompositorFrameMetadataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // CC_IPC_COMPOSITOR_FRAME_METADATA_MOJOM_H_
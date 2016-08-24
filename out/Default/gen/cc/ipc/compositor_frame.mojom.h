// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CC_IPC_COMPOSITOR_FRAME_MOJOM_H_
#define CC_IPC_COMPOSITOR_FRAME_MOJOM_H_

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
#include "cc/ipc/compositor_frame.mojom-shared.h"
#include "cc/ipc/compositor_frame_metadata.mojom.h"
#include "cc/ipc/render_pass.mojom.h"
#include "cc/ipc/transferable_resource.mojom.h"
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
class CompositorFrame;
class CompositorFrameDataView;
using CompositorFramePtr = mojo::StructPtr<CompositorFrame>;






class  CompositorFrame {
 public:
  using DataView = CompositorFrameDataView;
  using Data_ = internal::CompositorFrame_Data;

  static CompositorFramePtr New();

  template <typename U>
  static CompositorFramePtr From(const U& u) {
    return mojo::TypeConverter<CompositorFramePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CompositorFrame>::Convert(*this);
  }

  CompositorFrame();
  ~CompositorFrame();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CompositorFramePtr>
  CompositorFramePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CompositorFrame>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        CompositorFramePtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        CompositorFramePtr, mojo::Array<uint8_t>>(
            input, output);
  }

  cc::CompositorFrameMetadata metadata;
  std::vector<cc::TransferableResource> resources;
  std::vector<std::unique_ptr<cc::RenderPass>> passes;
 private:
  DISALLOW_COPY_AND_ASSIGN(CompositorFrame);
};

class CompositorFrameDataView {
 public:
  CompositorFrameDataView() {}

  CompositorFrameDataView(
      internal::CompositorFrame_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMetadataDataView(
      ::cc::mojom::CompositorFrameMetadataDataView* output);

  template <typename UserType>
  bool ReadMetadata(UserType* output) {
    auto pointer = data_->metadata.Get();
    return mojo::internal::Deserialize<::cc::mojom::CompositorFrameMetadataPtr>(
        pointer, output, context_);
  }
  inline void GetResourcesDataView(
      mojo::ArrayDataView<::cc::mojom::TransferableResourceDataView>* output);

  template <typename UserType>
  bool ReadResources(UserType* output) {
    auto pointer = data_->resources.Get();
    return mojo::internal::Deserialize<mojo::Array<::cc::mojom::TransferableResourcePtr>>(
        pointer, output, context_);
  }
  inline void GetPassesDataView(
      mojo::ArrayDataView<::cc::mojom::RenderPassDataView>* output);

  template <typename UserType>
  bool ReadPasses(UserType* output) {
    auto pointer = data_->passes.Get();
    return mojo::internal::Deserialize<mojo::Array<::cc::mojom::RenderPassPtr>>(
        pointer, output, context_);
  }
 private:
  internal::CompositorFrame_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace cc

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::cc::mojom::CompositorFrameDataView> {
  using MojomType = ::cc::mojom::CompositorFramePtr;
};
}  // namespace internal
}  // namespace mojo

namespace cc {
namespace mojom {


template <typename StructPtrType>
CompositorFramePtr CompositorFrame::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->metadata = mojo::internal::Clone(metadata);
  rv->resources = mojo::internal::Clone(resources);
  rv->passes = mojo::internal::Clone(passes);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CompositorFrame>::value>::type*>
bool CompositorFrame::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->metadata, other.metadata))
    return false;
  if (!mojo::internal::Equals(this->resources, other.resources))
    return false;
  if (!mojo::internal::Equals(this->passes, other.passes))
    return false;
  return true;
}

inline void CompositorFrameDataView::GetMetadataDataView(
    ::cc::mojom::CompositorFrameMetadataDataView* output) {
  auto pointer = data_->metadata.Get();
  *output = ::cc::mojom::CompositorFrameMetadataDataView(pointer, context_);
}
inline void CompositorFrameDataView::GetResourcesDataView(
    mojo::ArrayDataView<::cc::mojom::TransferableResourceDataView>* output) {
  auto pointer = data_->resources.Get();
  *output = mojo::ArrayDataView<::cc::mojom::TransferableResourceDataView>(pointer, context_);
}
inline void CompositorFrameDataView::GetPassesDataView(
    mojo::ArrayDataView<::cc::mojom::RenderPassDataView>* output) {
  auto pointer = data_->passes.Get();
  *output = mojo::ArrayDataView<::cc::mojom::RenderPassDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace cc

namespace mojo {


template <>
struct  StructTraits<::cc::mojom::CompositorFrame, ::cc::mojom::CompositorFramePtr> {
  static bool IsNull(const ::cc::mojom::CompositorFramePtr& input) { return !input; }
  static void SetToNull(::cc::mojom::CompositorFramePtr* output) { output->reset(); }
  static decltype(::cc::mojom::CompositorFrame::metadata)& metadata(
      ::cc::mojom::CompositorFramePtr& input) {
    return input->metadata;
  }
  static decltype(::cc::mojom::CompositorFrame::resources)& resources(
      ::cc::mojom::CompositorFramePtr& input) {
    return input->resources;
  }
  static decltype(::cc::mojom::CompositorFrame::passes)& passes(
      ::cc::mojom::CompositorFramePtr& input) {
    return input->passes;
  }

  static bool Read(::cc::mojom::CompositorFrameDataView input, ::cc::mojom::CompositorFramePtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::cc::mojom::CompositorFramePtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::cc::mojom::CompositorFrame, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::cc::mojom::internal::CompositorFrame_Data);
    decltype(CallWithContext(Traits::metadata, input, custom_context)) in_metadata = CallWithContext(Traits::metadata, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::cc::mojom::CompositorFrameMetadataPtr>(
        in_metadata, context);
    decltype(CallWithContext(Traits::resources, input, custom_context)) in_resources = CallWithContext(Traits::resources, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<::cc::mojom::TransferableResourcePtr>>(
        in_resources, context);
    decltype(CallWithContext(Traits::passes, input, custom_context)) in_passes = CallWithContext(Traits::passes, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<::cc::mojom::RenderPassPtr>>(
        in_passes, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::cc::mojom::internal::CompositorFrame_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::cc::mojom::internal::CompositorFrame_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::metadata, input, custom_context)) in_metadata = CallWithContext(Traits::metadata, input, custom_context);
      typename decltype(result->metadata)::BaseType* metadata_ptr;
      mojo::internal::Serialize<::cc::mojom::CompositorFrameMetadataPtr>(
          in_metadata, buffer, &metadata_ptr, context);
      result->metadata.Set(metadata_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->metadata.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null metadata in CompositorFrame struct");
      decltype(CallWithContext(Traits::resources, input, custom_context)) in_resources = CallWithContext(Traits::resources, input, custom_context);
      typename decltype(result->resources)::BaseType* resources_ptr;
      const mojo::internal::ContainerValidateParams resources_validate_params(
          0, false, nullptr);
      mojo::internal::Serialize<mojo::Array<::cc::mojom::TransferableResourcePtr>>(
          in_resources, buffer, &resources_ptr, &resources_validate_params,
          context);
      result->resources.Set(resources_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->resources.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null resources in CompositorFrame struct");
      decltype(CallWithContext(Traits::passes, input, custom_context)) in_passes = CallWithContext(Traits::passes, input, custom_context);
      typename decltype(result->passes)::BaseType* passes_ptr;
      const mojo::internal::ContainerValidateParams passes_validate_params(
          0, false, nullptr);
      mojo::internal::Serialize<mojo::Array<::cc::mojom::RenderPassPtr>>(
          in_passes, buffer, &passes_ptr, &passes_validate_params,
          context);
      result->passes.Set(passes_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->passes.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null passes in CompositorFrame struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::cc::mojom::internal::CompositorFrame_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::cc::mojom::CompositorFrameDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // CC_IPC_COMPOSITOR_FRAME_MOJOM_H_
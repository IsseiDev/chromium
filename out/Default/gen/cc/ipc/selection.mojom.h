// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CC_IPC_SELECTION_MOJOM_H_
#define CC_IPC_SELECTION_MOJOM_H_

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
#include "cc/ipc/selection.mojom-shared.h"
#include "ui/gfx/mojo/selection_bound.mojom.h"
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
class Selection;
class SelectionDataView;
using SelectionPtr = mojo::StructPtr<Selection>;






class  Selection {
 public:
  using DataView = SelectionDataView;
  using Data_ = internal::Selection_Data;

  static SelectionPtr New();

  template <typename U>
  static SelectionPtr From(const U& u) {
    return mojo::TypeConverter<SelectionPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Selection>::Convert(*this);
  }

  Selection();
  ~Selection();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SelectionPtr>
  SelectionPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Selection>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        SelectionPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        SelectionPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  gfx::SelectionBound start;
  gfx::SelectionBound end;
  bool is_editable;
  bool is_empty_text_form_control;
};

class SelectionDataView {
 public:
  SelectionDataView() {}

  SelectionDataView(
      internal::Selection_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetStartDataView(
      ::gfx::mojom::SelectionBoundDataView* output);

  template <typename UserType>
  bool ReadStart(UserType* output) {
    auto pointer = data_->start.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SelectionBoundPtr>(
        pointer, output, context_);
  }
  inline void GetEndDataView(
      ::gfx::mojom::SelectionBoundDataView* output);

  template <typename UserType>
  bool ReadEnd(UserType* output) {
    auto pointer = data_->end.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SelectionBoundPtr>(
        pointer, output, context_);
  }
  bool is_editable() const {
    return data_->is_editable;
  }
  bool is_empty_text_form_control() const {
    return data_->is_empty_text_form_control;
  }
 private:
  internal::Selection_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace cc

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::cc::mojom::SelectionDataView> {
  using MojomType = ::cc::mojom::SelectionPtr;
};
}  // namespace internal
}  // namespace mojo

namespace cc {
namespace mojom {


template <typename StructPtrType>
SelectionPtr Selection::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->start = mojo::internal::Clone(start);
  rv->end = mojo::internal::Clone(end);
  rv->is_editable = mojo::internal::Clone(is_editable);
  rv->is_empty_text_form_control = mojo::internal::Clone(is_empty_text_form_control);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Selection>::value>::type*>
bool Selection::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->start, other.start))
    return false;
  if (!mojo::internal::Equals(this->end, other.end))
    return false;
  if (!mojo::internal::Equals(this->is_editable, other.is_editable))
    return false;
  if (!mojo::internal::Equals(this->is_empty_text_form_control, other.is_empty_text_form_control))
    return false;
  return true;
}

inline void SelectionDataView::GetStartDataView(
    ::gfx::mojom::SelectionBoundDataView* output) {
  auto pointer = data_->start.Get();
  *output = ::gfx::mojom::SelectionBoundDataView(pointer, context_);
}
inline void SelectionDataView::GetEndDataView(
    ::gfx::mojom::SelectionBoundDataView* output) {
  auto pointer = data_->end.Get();
  *output = ::gfx::mojom::SelectionBoundDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace cc

namespace mojo {


template <>
struct  StructTraits<::cc::mojom::Selection, ::cc::mojom::SelectionPtr> {
  static bool IsNull(const ::cc::mojom::SelectionPtr& input) { return !input; }
  static void SetToNull(::cc::mojom::SelectionPtr* output) { output->reset(); }
  static decltype(::cc::mojom::Selection::start)& start(
      ::cc::mojom::SelectionPtr& input) {
    return input->start;
  }
  static decltype(::cc::mojom::Selection::end)& end(
      ::cc::mojom::SelectionPtr& input) {
    return input->end;
  }
  static decltype(::cc::mojom::Selection::is_editable) is_editable(
      const ::cc::mojom::SelectionPtr& input) {
    return input->is_editable;
  }
  static decltype(::cc::mojom::Selection::is_empty_text_form_control) is_empty_text_form_control(
      const ::cc::mojom::SelectionPtr& input) {
    return input->is_empty_text_form_control;
  }

  static bool Read(::cc::mojom::SelectionDataView input, ::cc::mojom::SelectionPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::cc::mojom::SelectionPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::cc::mojom::Selection, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::cc::mojom::internal::Selection_Data);
    decltype(CallWithContext(Traits::start, input, custom_context)) in_start = CallWithContext(Traits::start, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::gfx::mojom::SelectionBoundPtr>(
        in_start, context);
    decltype(CallWithContext(Traits::end, input, custom_context)) in_end = CallWithContext(Traits::end, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::gfx::mojom::SelectionBoundPtr>(
        in_end, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::cc::mojom::internal::Selection_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::cc::mojom::internal::Selection_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::start, input, custom_context)) in_start = CallWithContext(Traits::start, input, custom_context);
      typename decltype(result->start)::BaseType* start_ptr;
      mojo::internal::Serialize<::gfx::mojom::SelectionBoundPtr>(
          in_start, buffer, &start_ptr, context);
      result->start.Set(start_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->start.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null start in Selection struct");
      decltype(CallWithContext(Traits::end, input, custom_context)) in_end = CallWithContext(Traits::end, input, custom_context);
      typename decltype(result->end)::BaseType* end_ptr;
      mojo::internal::Serialize<::gfx::mojom::SelectionBoundPtr>(
          in_end, buffer, &end_ptr, context);
      result->end.Set(end_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->end.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null end in Selection struct");
      result->is_editable = CallWithContext(Traits::is_editable, input, custom_context);
      result->is_empty_text_form_control = CallWithContext(Traits::is_empty_text_form_control, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::cc::mojom::internal::Selection_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::cc::mojom::SelectionDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // CC_IPC_SELECTION_MOJOM_H_
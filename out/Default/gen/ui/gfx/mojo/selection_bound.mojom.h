// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_GFX_MOJO_SELECTION_BOUND_MOJOM_H_
#define UI_GFX_MOJO_SELECTION_BOUND_MOJOM_H_

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
#include "ui/gfx/mojo/selection_bound.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"
#include "ui/gfx/geometry/point.h"
#include "ui/gfx/native_widget_types.h"
#include "ui/gfx/buffer_types.h"
#include "ui/gfx/transform.h"
#include "ui/gfx/geometry/vector2d.h"
#include "ui/gfx/geometry/vector2d_f.h"
#include "ui/gfx/geometry/rect.h"
#include "ui/gfx/geometry/point_f.h"
#include "ui/gfx/geometry/insets.h"
#include "ui/gfx/selection_bound.h"
#include "ui/gfx/geometry/size.h"
#include "ui/gfx/geometry/rect_f.h"


namespace gfx {
namespace mojom {
class SelectionBound;
class SelectionBoundDataView;
using SelectionBoundPtr = mojo::StructPtr<SelectionBound>;






class  SelectionBound {
 public:
  using DataView = SelectionBoundDataView;
  using Data_ = internal::SelectionBound_Data;

  static SelectionBoundPtr New();

  template <typename U>
  static SelectionBoundPtr From(const U& u) {
    return mojo::TypeConverter<SelectionBoundPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SelectionBound>::Convert(*this);
  }

  SelectionBound();
  ~SelectionBound();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SelectionBoundPtr>
  SelectionBoundPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SelectionBound>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        SelectionBoundPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        SelectionBoundPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  SelectionBoundType type;
  gfx::PointF edge_top;
  gfx::PointF edge_bottom;
  bool visible;
};

class SelectionBoundDataView {
 public:
  SelectionBoundDataView() {}

  SelectionBoundDataView(
      internal::SelectionBound_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::gfx::mojom::SelectionBoundType>(
        data_value, output);
  }

  ::gfx::mojom::SelectionBoundType type() const {
    return static_cast<::gfx::mojom::SelectionBoundType>(data_->type);
  }
  inline void GetEdgeTopDataView(
      ::gfx::mojom::PointFDataView* output);

  template <typename UserType>
  bool ReadEdgeTop(UserType* output) {
    auto pointer = data_->edge_top.Get();
    return mojo::internal::Deserialize<::gfx::mojom::PointFPtr>(
        pointer, output, context_);
  }
  inline void GetEdgeBottomDataView(
      ::gfx::mojom::PointFDataView* output);

  template <typename UserType>
  bool ReadEdgeBottom(UserType* output) {
    auto pointer = data_->edge_bottom.Get();
    return mojo::internal::Deserialize<::gfx::mojom::PointFPtr>(
        pointer, output, context_);
  }
  bool visible() const {
    return data_->visible;
  }
 private:
  internal::SelectionBound_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace gfx

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::gfx::mojom::SelectionBoundDataView> {
  using MojomType = ::gfx::mojom::SelectionBoundPtr;
};
}  // namespace internal
}  // namespace mojo

namespace gfx {
namespace mojom {


template <typename StructPtrType>
SelectionBoundPtr SelectionBound::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->type = mojo::internal::Clone(type);
  rv->edge_top = mojo::internal::Clone(edge_top);
  rv->edge_bottom = mojo::internal::Clone(edge_bottom);
  rv->visible = mojo::internal::Clone(visible);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SelectionBound>::value>::type*>
bool SelectionBound::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->type, other.type))
    return false;
  if (!mojo::internal::Equals(this->edge_top, other.edge_top))
    return false;
  if (!mojo::internal::Equals(this->edge_bottom, other.edge_bottom))
    return false;
  if (!mojo::internal::Equals(this->visible, other.visible))
    return false;
  return true;
}

inline void SelectionBoundDataView::GetEdgeTopDataView(
    ::gfx::mojom::PointFDataView* output) {
  auto pointer = data_->edge_top.Get();
  *output = ::gfx::mojom::PointFDataView(pointer, context_);
}
inline void SelectionBoundDataView::GetEdgeBottomDataView(
    ::gfx::mojom::PointFDataView* output) {
  auto pointer = data_->edge_bottom.Get();
  *output = ::gfx::mojom::PointFDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace gfx

namespace mojo {


template <>
struct  StructTraits<::gfx::mojom::SelectionBound, ::gfx::mojom::SelectionBoundPtr> {
  static bool IsNull(const ::gfx::mojom::SelectionBoundPtr& input) { return !input; }
  static void SetToNull(::gfx::mojom::SelectionBoundPtr* output) { output->reset(); }
  static decltype(::gfx::mojom::SelectionBound::type) type(
      const ::gfx::mojom::SelectionBoundPtr& input) {
    return input->type;
  }
  static decltype(::gfx::mojom::SelectionBound::edge_top)& edge_top(
      ::gfx::mojom::SelectionBoundPtr& input) {
    return input->edge_top;
  }
  static decltype(::gfx::mojom::SelectionBound::edge_bottom)& edge_bottom(
      ::gfx::mojom::SelectionBoundPtr& input) {
    return input->edge_bottom;
  }
  static decltype(::gfx::mojom::SelectionBound::visible) visible(
      const ::gfx::mojom::SelectionBoundPtr& input) {
    return input->visible;
  }

  static bool Read(::gfx::mojom::SelectionBoundDataView input, ::gfx::mojom::SelectionBoundPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gfx::mojom::SelectionBoundPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gfx::mojom::SelectionBound, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::gfx::mojom::internal::SelectionBound_Data);
    decltype(CallWithContext(Traits::edge_top, input, custom_context)) in_edge_top = CallWithContext(Traits::edge_top, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::gfx::mojom::PointFPtr>(
        in_edge_top, context);
    decltype(CallWithContext(Traits::edge_bottom, input, custom_context)) in_edge_bottom = CallWithContext(Traits::edge_bottom, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::gfx::mojom::PointFPtr>(
        in_edge_bottom, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gfx::mojom::internal::SelectionBound_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::gfx::mojom::internal::SelectionBound_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      mojo::internal::Serialize<::gfx::mojom::SelectionBoundType>(
          CallWithContext(Traits::type, input, custom_context), &result->type);
      decltype(CallWithContext(Traits::edge_top, input, custom_context)) in_edge_top = CallWithContext(Traits::edge_top, input, custom_context);
      typename decltype(result->edge_top)::BaseType* edge_top_ptr;
      mojo::internal::Serialize<::gfx::mojom::PointFPtr>(
          in_edge_top, buffer, &edge_top_ptr, context);
      result->edge_top.Set(edge_top_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->edge_top.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null edge_top in SelectionBound struct");
      decltype(CallWithContext(Traits::edge_bottom, input, custom_context)) in_edge_bottom = CallWithContext(Traits::edge_bottom, input, custom_context);
      typename decltype(result->edge_bottom)::BaseType* edge_bottom_ptr;
      mojo::internal::Serialize<::gfx::mojom::PointFPtr>(
          in_edge_bottom, buffer, &edge_bottom_ptr, context);
      result->edge_bottom.Set(edge_bottom_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->edge_bottom.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null edge_bottom in SelectionBound struct");
      result->visible = CallWithContext(Traits::visible, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::gfx::mojom::internal::SelectionBound_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gfx::mojom::SelectionBoundDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // UI_GFX_MOJO_SELECTION_BOUND_MOJOM_H_
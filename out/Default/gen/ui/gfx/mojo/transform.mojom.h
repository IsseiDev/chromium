// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_GFX_MOJO_TRANSFORM_MOJOM_H_
#define UI_GFX_MOJO_TRANSFORM_MOJOM_H_

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
#include "ui/gfx/mojo/transform.mojom-shared.h"
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
class Transform;
class TransformDataView;
using TransformPtr = mojo::StructPtr<Transform>;






class  Transform {
 public:
  using DataView = TransformDataView;
  using Data_ = internal::Transform_Data;

  static TransformPtr New();

  template <typename U>
  static TransformPtr From(const U& u) {
    return mojo::TypeConverter<TransformPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Transform>::Convert(*this);
  }

  Transform();
  ~Transform();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = TransformPtr>
  TransformPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Transform>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        TransformPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        TransformPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  base::Optional<std::vector<float>> matrix;
};

class TransformDataView {
 public:
  TransformDataView() {}

  TransformDataView(
      internal::Transform_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMatrixDataView(
      mojo::ArrayDataView<float>* output);

  template <typename UserType>
  bool ReadMatrix(UserType* output) {
    auto pointer = data_->matrix.Get();
    return mojo::internal::Deserialize<mojo::Array<float>>(
        pointer, output, context_);
  }
 private:
  internal::Transform_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace gfx

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::gfx::mojom::TransformDataView> {
  using MojomType = ::gfx::mojom::TransformPtr;
};
}  // namespace internal
}  // namespace mojo

namespace gfx {
namespace mojom {


template <typename StructPtrType>
TransformPtr Transform::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->matrix = mojo::internal::Clone(matrix);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Transform>::value>::type*>
bool Transform::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->matrix, other.matrix))
    return false;
  return true;
}

inline void TransformDataView::GetMatrixDataView(
    mojo::ArrayDataView<float>* output) {
  auto pointer = data_->matrix.Get();
  *output = mojo::ArrayDataView<float>(pointer, context_);
}



}  // namespace mojom
}  // namespace gfx

namespace mojo {


template <>
struct  StructTraits<::gfx::mojom::Transform, ::gfx::mojom::TransformPtr> {
  static bool IsNull(const ::gfx::mojom::TransformPtr& input) { return !input; }
  static void SetToNull(::gfx::mojom::TransformPtr* output) { output->reset(); }
  static decltype(::gfx::mojom::Transform::matrix)& matrix(
      ::gfx::mojom::TransformPtr& input) {
    return input->matrix;
  }

  static bool Read(::gfx::mojom::TransformDataView input, ::gfx::mojom::TransformPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gfx::mojom::TransformPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gfx::mojom::Transform, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::gfx::mojom::internal::Transform_Data);
    decltype(CallWithContext(Traits::matrix, input, custom_context)) in_matrix = CallWithContext(Traits::matrix, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<float>>(
        in_matrix, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gfx::mojom::internal::Transform_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::gfx::mojom::internal::Transform_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::matrix, input, custom_context)) in_matrix = CallWithContext(Traits::matrix, input, custom_context);
      typename decltype(result->matrix)::BaseType* matrix_ptr;
      const mojo::internal::ContainerValidateParams matrix_validate_params(
          16, false, nullptr);
      mojo::internal::Serialize<mojo::Array<float>>(
          in_matrix, buffer, &matrix_ptr, &matrix_validate_params,
          context);
      result->matrix.Set(matrix_ptr);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::gfx::mojom::internal::Transform_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gfx::mojom::TransformDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // UI_GFX_MOJO_TRANSFORM_MOJOM_H_
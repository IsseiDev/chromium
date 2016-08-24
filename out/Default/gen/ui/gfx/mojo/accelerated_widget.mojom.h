// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_GFX_MOJO_ACCELERATED_WIDGET_MOJOM_H_
#define UI_GFX_MOJO_ACCELERATED_WIDGET_MOJOM_H_

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
#include "ui/gfx/mojo/accelerated_widget.mojom-shared.h"
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
class AcceleratedWidget;
class AcceleratedWidgetDataView;
using AcceleratedWidgetPtr = mojo::InlinedStructPtr<AcceleratedWidget>;



class  AcceleratedWidget {
 public:
  using DataView = AcceleratedWidgetDataView;
  using Data_ = internal::AcceleratedWidget_Data;

  static AcceleratedWidgetPtr New();

  template <typename U>
  static AcceleratedWidgetPtr From(const U& u) {
    return mojo::TypeConverter<AcceleratedWidgetPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, AcceleratedWidget>::Convert(*this);
  }

  AcceleratedWidget();
  ~AcceleratedWidget();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = AcceleratedWidgetPtr>
  AcceleratedWidgetPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, AcceleratedWidget>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        AcceleratedWidgetPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        AcceleratedWidgetPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  uint64_t widget;
};

class AcceleratedWidgetDataView {
 public:
  AcceleratedWidgetDataView() {}

  AcceleratedWidgetDataView(
      internal::AcceleratedWidget_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t widget() const {
    return data_->widget;
  }
 private:
  internal::AcceleratedWidget_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace gfx

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::gfx::mojom::AcceleratedWidgetDataView> {
  using MojomType = ::gfx::mojom::AcceleratedWidgetPtr;
};
}  // namespace internal
}  // namespace mojo

namespace gfx {
namespace mojom {





template <typename StructPtrType>
AcceleratedWidgetPtr AcceleratedWidget::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->widget = mojo::internal::Clone(widget);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, AcceleratedWidget>::value>::type*>
bool AcceleratedWidget::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->widget, other.widget))
    return false;
  return true;
}




}  // namespace mojom
}  // namespace gfx

namespace mojo {


template <>
struct  StructTraits<::gfx::mojom::AcceleratedWidget, ::gfx::mojom::AcceleratedWidgetPtr> {
  static bool IsNull(const ::gfx::mojom::AcceleratedWidgetPtr& input) { return !input; }
  static void SetToNull(::gfx::mojom::AcceleratedWidgetPtr* output) { output->reset(); }
  static decltype(::gfx::mojom::AcceleratedWidget::widget) widget(
      const ::gfx::mojom::AcceleratedWidgetPtr& input) {
    return input->widget;
  }

  static bool Read(::gfx::mojom::AcceleratedWidgetDataView input, ::gfx::mojom::AcceleratedWidgetPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gfx::mojom::AcceleratedWidgetPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gfx::mojom::AcceleratedWidget, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::gfx::mojom::internal::AcceleratedWidget_Data);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gfx::mojom::internal::AcceleratedWidget_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::gfx::mojom::internal::AcceleratedWidget_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->widget = CallWithContext(Traits::widget, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::gfx::mojom::internal::AcceleratedWidget_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gfx::mojom::AcceleratedWidgetDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // UI_GFX_MOJO_ACCELERATED_WIDGET_MOJOM_H_
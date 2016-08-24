// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_DISPLAY_DISPLAY_MOJOM_H_
#define SERVICES_UI_PUBLIC_INTERFACES_DISPLAY_DISPLAY_MOJOM_H_

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
#include "services/ui/public/interfaces/display/display.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"
#include "ui/gfx/geometry/vector2d.h"
#include "ui/gfx/geometry/point.h"
#include "ui/display/display.h"
#include "ui/gfx/geometry/vector2d_f.h"
#include "ui/gfx/geometry/rect.h"
#include "ui/gfx/geometry/point_f.h"
#include "ui/gfx/geometry/insets.h"
#include "ui/gfx/geometry/size.h"
#include "ui/gfx/geometry/rect_f.h"


namespace display {
namespace mojom {
class Display;
class DisplayDataView;
using DisplayPtr = mojo::StructPtr<Display>;






class  Display {
 public:
  using DataView = DisplayDataView;
  using Data_ = internal::Display_Data;

  static DisplayPtr New();

  template <typename U>
  static DisplayPtr From(const U& u) {
    return mojo::TypeConverter<DisplayPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Display>::Convert(*this);
  }

  Display();
  ~Display();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DisplayPtr>
  DisplayPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Display>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        DisplayPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        DisplayPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  int64_t id;
  gfx::Rect bounds;
  gfx::Rect work_area;
  float device_scale_factor;
  Rotation rotation;
  display::Display::TouchSupport touch_support;
  gfx::Size maximum_cursor_size;
};

class DisplayDataView {
 public:
  DisplayDataView() {}

  DisplayDataView(
      internal::Display_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t id() const {
    return data_->id;
  }
  inline void GetBoundsDataView(
      ::gfx::mojom::RectDataView* output);

  template <typename UserType>
  bool ReadBounds(UserType* output) {
    auto pointer = data_->bounds.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectPtr>(
        pointer, output, context_);
  }
  inline void GetWorkAreaDataView(
      ::gfx::mojom::RectDataView* output);

  template <typename UserType>
  bool ReadWorkArea(UserType* output) {
    auto pointer = data_->work_area.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectPtr>(
        pointer, output, context_);
  }
  float device_scale_factor() const {
    return data_->device_scale_factor;
  }
  template <typename UserType>
  bool ReadRotation(UserType* output) const {
    auto data_value = data_->rotation;
    return mojo::internal::Deserialize<::display::mojom::Rotation>(
        data_value, output);
  }

  ::display::mojom::Rotation rotation() const {
    return static_cast<::display::mojom::Rotation>(data_->rotation);
  }
  template <typename UserType>
  bool ReadTouchSupport(UserType* output) const {
    auto data_value = data_->touch_support;
    return mojo::internal::Deserialize<::display::mojom::TouchSupport>(
        data_value, output);
  }

  ::display::mojom::TouchSupport touch_support() const {
    return static_cast<::display::mojom::TouchSupport>(data_->touch_support);
  }
  inline void GetMaximumCursorSizeDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  bool ReadMaximumCursorSize(UserType* output) {
    auto pointer = data_->maximum_cursor_size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizePtr>(
        pointer, output, context_);
  }
 private:
  internal::Display_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace display

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::display::mojom::DisplayDataView> {
  using MojomType = ::display::mojom::DisplayPtr;
};
}  // namespace internal
}  // namespace mojo

namespace display {
namespace mojom {


template <typename StructPtrType>
DisplayPtr Display::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->id = mojo::internal::Clone(id);
  rv->bounds = mojo::internal::Clone(bounds);
  rv->work_area = mojo::internal::Clone(work_area);
  rv->device_scale_factor = mojo::internal::Clone(device_scale_factor);
  rv->rotation = mojo::internal::Clone(rotation);
  rv->touch_support = mojo::internal::Clone(touch_support);
  rv->maximum_cursor_size = mojo::internal::Clone(maximum_cursor_size);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Display>::value>::type*>
bool Display::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->id, other.id))
    return false;
  if (!mojo::internal::Equals(this->bounds, other.bounds))
    return false;
  if (!mojo::internal::Equals(this->work_area, other.work_area))
    return false;
  if (!mojo::internal::Equals(this->device_scale_factor, other.device_scale_factor))
    return false;
  if (!mojo::internal::Equals(this->rotation, other.rotation))
    return false;
  if (!mojo::internal::Equals(this->touch_support, other.touch_support))
    return false;
  if (!mojo::internal::Equals(this->maximum_cursor_size, other.maximum_cursor_size))
    return false;
  return true;
}

inline void DisplayDataView::GetBoundsDataView(
    ::gfx::mojom::RectDataView* output) {
  auto pointer = data_->bounds.Get();
  *output = ::gfx::mojom::RectDataView(pointer, context_);
}
inline void DisplayDataView::GetWorkAreaDataView(
    ::gfx::mojom::RectDataView* output) {
  auto pointer = data_->work_area.Get();
  *output = ::gfx::mojom::RectDataView(pointer, context_);
}
inline void DisplayDataView::GetMaximumCursorSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->maximum_cursor_size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace display

namespace mojo {


template <>
struct  StructTraits<::display::mojom::Display, ::display::mojom::DisplayPtr> {
  static bool IsNull(const ::display::mojom::DisplayPtr& input) { return !input; }
  static void SetToNull(::display::mojom::DisplayPtr* output) { output->reset(); }
  static decltype(::display::mojom::Display::id) id(
      const ::display::mojom::DisplayPtr& input) {
    return input->id;
  }
  static decltype(::display::mojom::Display::bounds)& bounds(
      ::display::mojom::DisplayPtr& input) {
    return input->bounds;
  }
  static decltype(::display::mojom::Display::work_area)& work_area(
      ::display::mojom::DisplayPtr& input) {
    return input->work_area;
  }
  static decltype(::display::mojom::Display::device_scale_factor) device_scale_factor(
      const ::display::mojom::DisplayPtr& input) {
    return input->device_scale_factor;
  }
  static decltype(::display::mojom::Display::rotation) rotation(
      const ::display::mojom::DisplayPtr& input) {
    return input->rotation;
  }
  static decltype(::display::mojom::Display::touch_support) touch_support(
      const ::display::mojom::DisplayPtr& input) {
    return input->touch_support;
  }
  static decltype(::display::mojom::Display::maximum_cursor_size)& maximum_cursor_size(
      ::display::mojom::DisplayPtr& input) {
    return input->maximum_cursor_size;
  }

  static bool Read(::display::mojom::DisplayDataView input, ::display::mojom::DisplayPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::display::mojom::DisplayPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::display::mojom::Display, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::display::mojom::internal::Display_Data);
    decltype(CallWithContext(Traits::bounds, input, custom_context)) in_bounds = CallWithContext(Traits::bounds, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::gfx::mojom::RectPtr>(
        in_bounds, context);
    decltype(CallWithContext(Traits::work_area, input, custom_context)) in_work_area = CallWithContext(Traits::work_area, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::gfx::mojom::RectPtr>(
        in_work_area, context);
    decltype(CallWithContext(Traits::maximum_cursor_size, input, custom_context)) in_maximum_cursor_size = CallWithContext(Traits::maximum_cursor_size, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::gfx::mojom::SizePtr>(
        in_maximum_cursor_size, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::display::mojom::internal::Display_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::display::mojom::internal::Display_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->id = CallWithContext(Traits::id, input, custom_context);
      decltype(CallWithContext(Traits::bounds, input, custom_context)) in_bounds = CallWithContext(Traits::bounds, input, custom_context);
      typename decltype(result->bounds)::BaseType* bounds_ptr;
      mojo::internal::Serialize<::gfx::mojom::RectPtr>(
          in_bounds, buffer, &bounds_ptr, context);
      result->bounds.Set(bounds_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->bounds.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null bounds in Display struct");
      decltype(CallWithContext(Traits::work_area, input, custom_context)) in_work_area = CallWithContext(Traits::work_area, input, custom_context);
      typename decltype(result->work_area)::BaseType* work_area_ptr;
      mojo::internal::Serialize<::gfx::mojom::RectPtr>(
          in_work_area, buffer, &work_area_ptr, context);
      result->work_area.Set(work_area_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->work_area.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null work_area in Display struct");
      result->device_scale_factor = CallWithContext(Traits::device_scale_factor, input, custom_context);
      mojo::internal::Serialize<::display::mojom::Rotation>(
          CallWithContext(Traits::rotation, input, custom_context), &result->rotation);
      mojo::internal::Serialize<::display::mojom::TouchSupport>(
          CallWithContext(Traits::touch_support, input, custom_context), &result->touch_support);
      decltype(CallWithContext(Traits::maximum_cursor_size, input, custom_context)) in_maximum_cursor_size = CallWithContext(Traits::maximum_cursor_size, input, custom_context);
      typename decltype(result->maximum_cursor_size)::BaseType* maximum_cursor_size_ptr;
      mojo::internal::Serialize<::gfx::mojom::SizePtr>(
          in_maximum_cursor_size, buffer, &maximum_cursor_size_ptr, context);
      result->maximum_cursor_size.Set(maximum_cursor_size_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->maximum_cursor_size.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null maximum_cursor_size in Display struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::display::mojom::internal::Display_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::display::mojom::DisplayDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // SERVICES_UI_PUBLIC_INTERFACES_DISPLAY_DISPLAY_MOJOM_H_
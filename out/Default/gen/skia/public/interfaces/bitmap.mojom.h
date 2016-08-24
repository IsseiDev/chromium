// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SKIA_PUBLIC_INTERFACES_BITMAP_MOJOM_H_
#define SKIA_PUBLIC_INTERFACES_BITMAP_MOJOM_H_

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
#include "skia/public/interfaces/bitmap.mojom-shared.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"
#include "third_party/skia/include/core/SkBitmap.h"
#include "third_party/skia/include/core/SkImageFilter.h"


namespace skia {
namespace mojom {
class Bitmap;
class BitmapDataView;
using BitmapPtr = mojo::StructPtr<Bitmap>;






class  Bitmap {
 public:
  using DataView = BitmapDataView;
  using Data_ = internal::Bitmap_Data;

  static BitmapPtr New();

  template <typename U>
  static BitmapPtr From(const U& u) {
    return mojo::TypeConverter<BitmapPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Bitmap>::Convert(*this);
  }

  Bitmap();
  ~Bitmap();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = BitmapPtr>
  BitmapPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Bitmap>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        BitmapPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        BitmapPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  ColorType color_type;
  AlphaType alpha_type;
  ColorProfileType profile_type;
  uint32_t width;
  uint32_t height;
  mojo::Array<uint8_t> pixel_data;
 private:
  DISALLOW_COPY_AND_ASSIGN(Bitmap);
};

class BitmapDataView {
 public:
  BitmapDataView() {}

  BitmapDataView(
      internal::Bitmap_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadColorType(UserType* output) const {
    auto data_value = data_->color_type;
    return mojo::internal::Deserialize<::skia::mojom::ColorType>(
        data_value, output);
  }

  ::skia::mojom::ColorType color_type() const {
    return static_cast<::skia::mojom::ColorType>(data_->color_type);
  }
  template <typename UserType>
  bool ReadAlphaType(UserType* output) const {
    auto data_value = data_->alpha_type;
    return mojo::internal::Deserialize<::skia::mojom::AlphaType>(
        data_value, output);
  }

  ::skia::mojom::AlphaType alpha_type() const {
    return static_cast<::skia::mojom::AlphaType>(data_->alpha_type);
  }
  template <typename UserType>
  bool ReadProfileType(UserType* output) const {
    auto data_value = data_->profile_type;
    return mojo::internal::Deserialize<::skia::mojom::ColorProfileType>(
        data_value, output);
  }

  ::skia::mojom::ColorProfileType profile_type() const {
    return static_cast<::skia::mojom::ColorProfileType>(data_->profile_type);
  }
  uint32_t width() const {
    return data_->width;
  }
  uint32_t height() const {
    return data_->height;
  }
  inline void GetPixelDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  bool ReadPixelData(UserType* output) {
    auto pointer = data_->pixel_data.Get();
    return mojo::internal::Deserialize<mojo::Array<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::Bitmap_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace skia

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::skia::mojom::BitmapDataView> {
  using MojomType = ::skia::mojom::BitmapPtr;
};
}  // namespace internal
}  // namespace mojo

namespace skia {
namespace mojom {


template <typename StructPtrType>
BitmapPtr Bitmap::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->color_type = mojo::internal::Clone(color_type);
  rv->alpha_type = mojo::internal::Clone(alpha_type);
  rv->profile_type = mojo::internal::Clone(profile_type);
  rv->width = mojo::internal::Clone(width);
  rv->height = mojo::internal::Clone(height);
  rv->pixel_data = mojo::internal::Clone(pixel_data);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Bitmap>::value>::type*>
bool Bitmap::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->color_type, other.color_type))
    return false;
  if (!mojo::internal::Equals(this->alpha_type, other.alpha_type))
    return false;
  if (!mojo::internal::Equals(this->profile_type, other.profile_type))
    return false;
  if (!mojo::internal::Equals(this->width, other.width))
    return false;
  if (!mojo::internal::Equals(this->height, other.height))
    return false;
  if (!mojo::internal::Equals(this->pixel_data, other.pixel_data))
    return false;
  return true;
}

inline void BitmapDataView::GetPixelDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->pixel_data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}



}  // namespace mojom
}  // namespace skia

namespace mojo {


template <>
struct  StructTraits<::skia::mojom::Bitmap, ::skia::mojom::BitmapPtr> {
  static bool IsNull(const ::skia::mojom::BitmapPtr& input) { return !input; }
  static void SetToNull(::skia::mojom::BitmapPtr* output) { output->reset(); }
  static decltype(::skia::mojom::Bitmap::color_type) color_type(
      const ::skia::mojom::BitmapPtr& input) {
    return input->color_type;
  }
  static decltype(::skia::mojom::Bitmap::alpha_type) alpha_type(
      const ::skia::mojom::BitmapPtr& input) {
    return input->alpha_type;
  }
  static decltype(::skia::mojom::Bitmap::profile_type) profile_type(
      const ::skia::mojom::BitmapPtr& input) {
    return input->profile_type;
  }
  static decltype(::skia::mojom::Bitmap::width) width(
      const ::skia::mojom::BitmapPtr& input) {
    return input->width;
  }
  static decltype(::skia::mojom::Bitmap::height) height(
      const ::skia::mojom::BitmapPtr& input) {
    return input->height;
  }
  static decltype(::skia::mojom::Bitmap::pixel_data)& pixel_data(
      ::skia::mojom::BitmapPtr& input) {
    return input->pixel_data;
  }

  static bool Read(::skia::mojom::BitmapDataView input, ::skia::mojom::BitmapPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::skia::mojom::BitmapPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::skia::mojom::Bitmap, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::skia::mojom::internal::Bitmap_Data);
    decltype(CallWithContext(Traits::pixel_data, input, custom_context)) in_pixel_data = CallWithContext(Traits::pixel_data, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<uint8_t>>(
        in_pixel_data, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::skia::mojom::internal::Bitmap_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::skia::mojom::internal::Bitmap_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      mojo::internal::Serialize<::skia::mojom::ColorType>(
          CallWithContext(Traits::color_type, input, custom_context), &result->color_type);
      mojo::internal::Serialize<::skia::mojom::AlphaType>(
          CallWithContext(Traits::alpha_type, input, custom_context), &result->alpha_type);
      mojo::internal::Serialize<::skia::mojom::ColorProfileType>(
          CallWithContext(Traits::profile_type, input, custom_context), &result->profile_type);
      result->width = CallWithContext(Traits::width, input, custom_context);
      result->height = CallWithContext(Traits::height, input, custom_context);
      decltype(CallWithContext(Traits::pixel_data, input, custom_context)) in_pixel_data = CallWithContext(Traits::pixel_data, input, custom_context);
      typename decltype(result->pixel_data)::BaseType* pixel_data_ptr;
      const mojo::internal::ContainerValidateParams pixel_data_validate_params(
          0, false, nullptr);
      mojo::internal::Serialize<mojo::Array<uint8_t>>(
          in_pixel_data, buffer, &pixel_data_ptr, &pixel_data_validate_params,
          context);
      result->pixel_data.Set(pixel_data_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->pixel_data.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null pixel_data in Bitmap struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::skia::mojom::internal::Bitmap_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::skia::mojom::BitmapDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // SKIA_PUBLIC_INTERFACES_BITMAP_MOJOM_H_
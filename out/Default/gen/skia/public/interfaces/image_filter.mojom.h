// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SKIA_PUBLIC_INTERFACES_IMAGE_FILTER_MOJOM_H_
#define SKIA_PUBLIC_INTERFACES_IMAGE_FILTER_MOJOM_H_

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
#include "skia/public/interfaces/image_filter.mojom-shared.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"
#include "third_party/skia/include/core/SkBitmap.h"
#include "third_party/skia/include/core/SkImageFilter.h"


namespace skia {
namespace mojom {
class ImageFilter;
class ImageFilterDataView;
using ImageFilterPtr = mojo::StructPtr<ImageFilter>;






class  ImageFilter {
 public:
  using DataView = ImageFilterDataView;
  using Data_ = internal::ImageFilter_Data;

  static ImageFilterPtr New();

  template <typename U>
  static ImageFilterPtr From(const U& u) {
    return mojo::TypeConverter<ImageFilterPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ImageFilter>::Convert(*this);
  }

  ImageFilter();
  ~ImageFilter();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ImageFilterPtr>
  ImageFilterPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ImageFilter>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        ImageFilterPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        ImageFilterPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  mojo::Array<uint8_t> data;
 private:
  DISALLOW_COPY_AND_ASSIGN(ImageFilter);
};

class ImageFilterDataView {
 public:
  ImageFilterDataView() {}

  ImageFilterDataView(
      internal::ImageFilter_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  bool ReadData(UserType* output) {
    auto pointer = data_->data.Get();
    return mojo::internal::Deserialize<mojo::Array<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::ImageFilter_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace skia

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::skia::mojom::ImageFilterDataView> {
  using MojomType = ::skia::mojom::ImageFilterPtr;
};
}  // namespace internal
}  // namespace mojo

namespace skia {
namespace mojom {


template <typename StructPtrType>
ImageFilterPtr ImageFilter::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->data = mojo::internal::Clone(data);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ImageFilter>::value>::type*>
bool ImageFilter::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->data, other.data))
    return false;
  return true;
}

inline void ImageFilterDataView::GetDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}



}  // namespace mojom
}  // namespace skia

namespace mojo {


template <>
struct  StructTraits<::skia::mojom::ImageFilter, ::skia::mojom::ImageFilterPtr> {
  static bool IsNull(const ::skia::mojom::ImageFilterPtr& input) { return !input; }
  static void SetToNull(::skia::mojom::ImageFilterPtr* output) { output->reset(); }
  static decltype(::skia::mojom::ImageFilter::data)& data(
      ::skia::mojom::ImageFilterPtr& input) {
    return input->data;
  }

  static bool Read(::skia::mojom::ImageFilterDataView input, ::skia::mojom::ImageFilterPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::skia::mojom::ImageFilterPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::skia::mojom::ImageFilter, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::skia::mojom::internal::ImageFilter_Data);
    decltype(CallWithContext(Traits::data, input, custom_context)) in_data = CallWithContext(Traits::data, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<uint8_t>>(
        in_data, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::skia::mojom::internal::ImageFilter_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::skia::mojom::internal::ImageFilter_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::data, input, custom_context)) in_data = CallWithContext(Traits::data, input, custom_context);
      typename decltype(result->data)::BaseType* data_ptr;
      const mojo::internal::ContainerValidateParams data_validate_params(
          0, false, nullptr);
      mojo::internal::Serialize<mojo::Array<uint8_t>>(
          in_data, buffer, &data_ptr, &data_validate_params,
          context);
      result->data.Set(data_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->data.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null data in ImageFilter struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::skia::mojom::internal::ImageFilter_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::skia::mojom::ImageFilterDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // SKIA_PUBLIC_INTERFACES_IMAGE_FILTER_MOJOM_H_
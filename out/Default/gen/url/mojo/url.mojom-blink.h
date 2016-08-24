// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef URL_MOJO_URL_MOJOM_BLINK_H_
#define URL_MOJO_URL_MOJOM_BLINK_H_

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
#include "url/mojo/url.mojom-shared.h"
#include "mojo/public/cpp/bindings/wtf_array.h"
#include "mojo/public/cpp/bindings/wtf_map.h"
#include "third_party/WebKit/Source/wtf/Optional.h"
#include "third_party/WebKit/Source/wtf/text/WTFString.h"
#include "third_party/WebKit/Source/platform/weborigin/KURL.h"


namespace url {
namespace mojom {
namespace blink {
class Url;
class UrlDataView;
using UrlPtr = mojo::InlinedStructPtr<Url>;



class  Url {
 public:
  using DataView = UrlDataView;
  using Data_ = internal::Url_Data;

  static UrlPtr New();

  template <typename U>
  static UrlPtr From(const U& u) {
    return mojo::TypeConverter<UrlPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Url>::Convert(*this);
  }

  Url();
  ~Url();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = UrlPtr>
  UrlPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Url>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::WTFArray<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        UrlPtr, mojo::WTFArray<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::WTFArray<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        UrlPtr, mojo::WTFArray<uint8_t>>(
            input, output);
  }

  WTF::String url;
};

class UrlDataView {
 public:
  UrlDataView() {}

  UrlDataView(
      internal::Url_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUrlDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadUrl(UserType* output) {
    auto pointer = data_->url.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::Url_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace blink
}  // namespace mojom
}  // namespace url

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::url::mojom::blink::UrlDataView> {
  using MojomType = ::url::mojom::blink::UrlPtr;
};
}  // namespace internal
}  // namespace mojo

namespace url {
namespace mojom {
namespace blink {





template <typename StructPtrType>
UrlPtr Url::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->url = mojo::internal::Clone(url);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Url>::value>::type*>
bool Url::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->url, other.url))
    return false;
  return true;
}

inline void UrlDataView::GetUrlDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->url.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace blink
}  // namespace mojom
}  // namespace url

namespace mojo {


template <>
struct  StructTraits<::url::mojom::blink::Url, ::url::mojom::blink::UrlPtr> {
  static bool IsNull(const ::url::mojom::blink::UrlPtr& input) { return !input; }
  static void SetToNull(::url::mojom::blink::UrlPtr* output) { output->reset(); }
  static decltype(::url::mojom::blink::Url::url)& url(
      ::url::mojom::blink::UrlPtr& input) {
    return input->url;
  }

  static bool Read(::url::mojom::blink::UrlDataView input, ::url::mojom::blink::UrlPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::url::mojom::blink::UrlPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::url::mojom::blink::Url, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::url::mojom::internal::Url_Data);
    decltype(CallWithContext(Traits::url, input, custom_context)) in_url = CallWithContext(Traits::url, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_url, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::url::mojom::internal::Url_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::url::mojom::internal::Url_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::url, input, custom_context)) in_url = CallWithContext(Traits::url, input, custom_context);
      typename decltype(result->url)::BaseType* url_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_url, buffer, &url_ptr, context);
      result->url.Set(url_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->url.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null url in Url struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::url::mojom::internal::Url_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::url::mojom::blink::UrlDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // URL_MOJO_URL_MOJOM_BLINK_H_
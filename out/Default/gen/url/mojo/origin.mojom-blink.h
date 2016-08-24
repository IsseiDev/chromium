// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef URL_MOJO_ORIGIN_MOJOM_BLINK_H_
#define URL_MOJO_ORIGIN_MOJOM_BLINK_H_

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
#include "url/mojo/origin.mojom-shared.h"
#include "mojo/public/cpp/bindings/wtf_array.h"
#include "mojo/public/cpp/bindings/wtf_map.h"
#include "third_party/WebKit/Source/wtf/Optional.h"
#include "third_party/WebKit/Source/wtf/text/WTFString.h"
#include "third_party/WebKit/Source/platform/weborigin/KURL.h"
#include "third_party/WebKit/Source/platform/weborigin/SecurityOrigin.h"


namespace url {
namespace mojom {
namespace blink {
class Origin;
class OriginDataView;
using OriginPtr = mojo::InlinedStructPtr<Origin>;



class  Origin {
 public:
  using DataView = OriginDataView;
  using Data_ = internal::Origin_Data;

  static OriginPtr New();

  template <typename U>
  static OriginPtr From(const U& u) {
    return mojo::TypeConverter<OriginPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Origin>::Convert(*this);
  }

  Origin();
  ~Origin();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = OriginPtr>
  OriginPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Origin>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::WTFArray<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        OriginPtr, mojo::WTFArray<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::WTFArray<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        OriginPtr, mojo::WTFArray<uint8_t>>(
            input, output);
  }

  WTF::String scheme;
  WTF::String host;
  uint16_t port;
  bool unique;
};

class OriginDataView {
 public:
  OriginDataView() {}

  OriginDataView(
      internal::Origin_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSchemeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadScheme(UserType* output) {
    auto pointer = data_->scheme.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetHostDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadHost(UserType* output) {
    auto pointer = data_->host.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  uint16_t port() const {
    return data_->port;
  }
  bool unique() const {
    return data_->unique;
  }
 private:
  internal::Origin_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace blink
}  // namespace mojom
}  // namespace url

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::url::mojom::blink::OriginDataView> {
  using MojomType = ::url::mojom::blink::OriginPtr;
};
}  // namespace internal
}  // namespace mojo

namespace url {
namespace mojom {
namespace blink {





template <typename StructPtrType>
OriginPtr Origin::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->scheme = mojo::internal::Clone(scheme);
  rv->host = mojo::internal::Clone(host);
  rv->port = mojo::internal::Clone(port);
  rv->unique = mojo::internal::Clone(unique);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Origin>::value>::type*>
bool Origin::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->scheme, other.scheme))
    return false;
  if (!mojo::internal::Equals(this->host, other.host))
    return false;
  if (!mojo::internal::Equals(this->port, other.port))
    return false;
  if (!mojo::internal::Equals(this->unique, other.unique))
    return false;
  return true;
}

inline void OriginDataView::GetSchemeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->scheme.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void OriginDataView::GetHostDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->host.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace blink
}  // namespace mojom
}  // namespace url

namespace mojo {


template <>
struct  StructTraits<::url::mojom::blink::Origin, ::url::mojom::blink::OriginPtr> {
  static bool IsNull(const ::url::mojom::blink::OriginPtr& input) { return !input; }
  static void SetToNull(::url::mojom::blink::OriginPtr* output) { output->reset(); }
  static decltype(::url::mojom::blink::Origin::scheme)& scheme(
      ::url::mojom::blink::OriginPtr& input) {
    return input->scheme;
  }
  static decltype(::url::mojom::blink::Origin::host)& host(
      ::url::mojom::blink::OriginPtr& input) {
    return input->host;
  }
  static decltype(::url::mojom::blink::Origin::port) port(
      const ::url::mojom::blink::OriginPtr& input) {
    return input->port;
  }
  static decltype(::url::mojom::blink::Origin::unique) unique(
      const ::url::mojom::blink::OriginPtr& input) {
    return input->unique;
  }

  static bool Read(::url::mojom::blink::OriginDataView input, ::url::mojom::blink::OriginPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::url::mojom::blink::OriginPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::url::mojom::blink::Origin, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::url::mojom::internal::Origin_Data);
    decltype(CallWithContext(Traits::scheme, input, custom_context)) in_scheme = CallWithContext(Traits::scheme, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_scheme, context);
    decltype(CallWithContext(Traits::host, input, custom_context)) in_host = CallWithContext(Traits::host, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_host, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::url::mojom::internal::Origin_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::url::mojom::internal::Origin_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::scheme, input, custom_context)) in_scheme = CallWithContext(Traits::scheme, input, custom_context);
      typename decltype(result->scheme)::BaseType* scheme_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_scheme, buffer, &scheme_ptr, context);
      result->scheme.Set(scheme_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->scheme.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null scheme in Origin struct");
      decltype(CallWithContext(Traits::host, input, custom_context)) in_host = CallWithContext(Traits::host, input, custom_context);
      typename decltype(result->host)::BaseType* host_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_host, buffer, &host_ptr, context);
      result->host.Set(host_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->host.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null host in Origin struct");
      result->port = CallWithContext(Traits::port, input, custom_context);
      result->unique = CallWithContext(Traits::unique, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::url::mojom::internal::Origin_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::url::mojom::blink::OriginDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // URL_MOJO_ORIGIN_MOJOM_BLINK_H_
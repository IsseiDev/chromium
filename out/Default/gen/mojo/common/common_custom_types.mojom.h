// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_COMMON_COMMON_CUSTOM_TYPES_MOJOM_H_
#define MOJO_COMMON_COMMON_CUSTOM_TYPES_MOJOM_H_

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
#include "mojo/common/common_custom_types.mojom-shared.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"
#include "base/strings/string16.h"
#include "base/files/file_path.h"
#include "base/values.h"
#include "base/time/time.h"
#include "base/version.h"


namespace mojo {
namespace common {
namespace mojom {
using FilePath = mojo::NativeStruct;
using FilePathDataView = mojo::NativeStructDataView;
using FilePathPtr = mojo::NativeStructPtr;

using ListValue = mojo::NativeStruct;
using ListValueDataView = mojo::NativeStructDataView;
using ListValuePtr = mojo::NativeStructPtr;

using DictionaryValue = mojo::NativeStruct;
using DictionaryValueDataView = mojo::NativeStructDataView;
using DictionaryValuePtr = mojo::NativeStructPtr;

using Time = mojo::NativeStruct;
using TimeDataView = mojo::NativeStructDataView;
using TimePtr = mojo::NativeStructPtr;

using TimeDelta = mojo::NativeStruct;
using TimeDeltaDataView = mojo::NativeStructDataView;
using TimeDeltaPtr = mojo::NativeStructPtr;

using TimeTicks = mojo::NativeStruct;
using TimeTicksDataView = mojo::NativeStructDataView;
using TimeTicksPtr = mojo::NativeStructPtr;

using String16 = mojo::NativeStruct;
using String16DataView = mojo::NativeStructDataView;
using String16Ptr = mojo::NativeStructPtr;

class Version;
class VersionDataView;
using VersionPtr = mojo::StructPtr<Version>;




















class  Version {
 public:
  using DataView = VersionDataView;
  using Data_ = internal::Version_Data;

  static VersionPtr New();

  template <typename U>
  static VersionPtr From(const U& u) {
    return mojo::TypeConverter<VersionPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Version>::Convert(*this);
  }

  Version();
  ~Version();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = VersionPtr>
  VersionPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Version>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        VersionPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        VersionPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  std::vector<uint32_t> components;
};

class VersionDataView {
 public:
  VersionDataView() {}

  VersionDataView(
      internal::Version_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetComponentsDataView(
      mojo::ArrayDataView<uint32_t>* output);

  template <typename UserType>
  bool ReadComponents(UserType* output) {
    auto pointer = data_->components.Get();
    return mojo::internal::Deserialize<mojo::Array<uint32_t>>(
        pointer, output, context_);
  }
 private:
  internal::Version_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace common
}  // namespace mojo

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::mojo::common::mojom::VersionDataView> {
  using MojomType = ::mojo::common::mojom::VersionPtr;
};
}  // namespace internal
}  // namespace mojo

namespace mojo {
namespace common {
namespace mojom {


template <typename StructPtrType>
VersionPtr Version::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->components = mojo::internal::Clone(components);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Version>::value>::type*>
bool Version::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->components, other.components))
    return false;
  return true;
}

inline void VersionDataView::GetComponentsDataView(
    mojo::ArrayDataView<uint32_t>* output) {
  auto pointer = data_->components.Get();
  *output = mojo::ArrayDataView<uint32_t>(pointer, context_);
}



}  // namespace mojom
}  // namespace common
}  // namespace mojo

namespace mojo {


template <>
struct  StructTraits<::mojo::common::mojom::Version, ::mojo::common::mojom::VersionPtr> {
  static bool IsNull(const ::mojo::common::mojom::VersionPtr& input) { return !input; }
  static void SetToNull(::mojo::common::mojom::VersionPtr* output) { output->reset(); }
  static decltype(::mojo::common::mojom::Version::components)& components(
      ::mojo::common::mojom::VersionPtr& input) {
    return input->components;
  }

  static bool Read(::mojo::common::mojom::VersionDataView input, ::mojo::common::mojom::VersionPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::common::mojom::VersionPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::common::mojom::Version, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::mojo::common::mojom::internal::Version_Data);
    decltype(CallWithContext(Traits::components, input, custom_context)) in_components = CallWithContext(Traits::components, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<uint32_t>>(
        in_components, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::common::mojom::internal::Version_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::mojo::common::mojom::internal::Version_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::components, input, custom_context)) in_components = CallWithContext(Traits::components, input, custom_context);
      typename decltype(result->components)::BaseType* components_ptr;
      const mojo::internal::ContainerValidateParams components_validate_params(
          0, false, nullptr);
      mojo::internal::Serialize<mojo::Array<uint32_t>>(
          in_components, buffer, &components_ptr, &components_validate_params,
          context);
      result->components.Set(components_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->components.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null components in Version struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::mojo::common::mojom::internal::Version_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::common::mojom::VersionDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // MOJO_COMMON_COMMON_CUSTOM_TYPES_MOJOM_H_
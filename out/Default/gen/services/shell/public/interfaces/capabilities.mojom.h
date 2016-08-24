// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SHELL_PUBLIC_INTERFACES_CAPABILITIES_MOJOM_H_
#define SERVICES_SHELL_PUBLIC_INTERFACES_CAPABILITIES_MOJOM_H_

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
#include "services/shell/public/interfaces/capabilities.mojom-shared.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"
#include "services/shell/public/cpp/capabilities.h"
#include "services/shell/public/cpp/identity.h"
#include "base/values.h"
#include "base/version.h"
#include "base/time/time.h"
#include "base/strings/string16.h"
#include "base/files/file_path.h"


namespace shell {
namespace mojom {
class CapabilityRequest;
class CapabilityRequestDataView;
using CapabilityRequestPtr = mojo::StructPtr<CapabilityRequest>;

class CapabilitySpec;
class CapabilitySpecDataView;
using CapabilitySpecPtr = mojo::StructPtr<CapabilitySpec>;







class  CapabilityRequest {
 public:
  using DataView = CapabilityRequestDataView;
  using Data_ = internal::CapabilityRequest_Data;

  static CapabilityRequestPtr New();

  template <typename U>
  static CapabilityRequestPtr From(const U& u) {
    return mojo::TypeConverter<CapabilityRequestPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CapabilityRequest>::Convert(*this);
  }

  CapabilityRequest();
  ~CapabilityRequest();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CapabilityRequestPtr>
  CapabilityRequestPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CapabilityRequest>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        CapabilityRequestPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        CapabilityRequestPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  std::vector<std::string> classes;
  std::vector<std::string> interfaces;
};

class CapabilityRequestDataView {
 public:
  CapabilityRequestDataView() {}

  CapabilityRequestDataView(
      internal::CapabilityRequest_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetClassesDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  bool ReadClasses(UserType* output) {
    auto pointer = data_->classes.Get();
    return mojo::internal::Deserialize<mojo::Array<mojo::String>>(
        pointer, output, context_);
  }
  inline void GetInterfacesDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  bool ReadInterfaces(UserType* output) {
    auto pointer = data_->interfaces.Get();
    return mojo::internal::Deserialize<mojo::Array<mojo::String>>(
        pointer, output, context_);
  }
 private:
  internal::CapabilityRequest_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace shell

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::shell::mojom::CapabilityRequestDataView> {
  using MojomType = ::shell::mojom::CapabilityRequestPtr;
};
}  // namespace internal
}  // namespace mojo

namespace shell {
namespace mojom {



class  CapabilitySpec {
 public:
  using DataView = CapabilitySpecDataView;
  using Data_ = internal::CapabilitySpec_Data;

  static CapabilitySpecPtr New();

  template <typename U>
  static CapabilitySpecPtr From(const U& u) {
    return mojo::TypeConverter<CapabilitySpecPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CapabilitySpec>::Convert(*this);
  }

  CapabilitySpec();
  ~CapabilitySpec();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CapabilitySpecPtr>
  CapabilitySpecPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CapabilitySpec>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        CapabilitySpecPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        CapabilitySpecPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  std::unordered_map<std::string, std::vector<std::string>> provided;
  std::unordered_map<std::string, ::shell::CapabilityRequest> required;
};

class CapabilitySpecDataView {
 public:
  CapabilitySpecDataView() {}

  CapabilitySpecDataView(
      internal::CapabilitySpec_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetProvidedDataView(
      mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<mojo::StringDataView>>* output);

  template <typename UserType>
  bool ReadProvided(UserType* output) {
    auto pointer = data_->provided.Get();
    return mojo::internal::Deserialize<mojo::Map<mojo::String, mojo::Array<mojo::String>>>(
        pointer, output, context_);
  }
  inline void GetRequiredDataView(
      mojo::MapDataView<mojo::StringDataView, CapabilityRequestDataView>* output);

  template <typename UserType>
  bool ReadRequired(UserType* output) {
    auto pointer = data_->required.Get();
    return mojo::internal::Deserialize<mojo::Map<mojo::String, ::shell::mojom::CapabilityRequestPtr>>(
        pointer, output, context_);
  }
 private:
  internal::CapabilitySpec_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace shell

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::shell::mojom::CapabilitySpecDataView> {
  using MojomType = ::shell::mojom::CapabilitySpecPtr;
};
}  // namespace internal
}  // namespace mojo

namespace shell {
namespace mojom {


template <typename StructPtrType>
CapabilityRequestPtr CapabilityRequest::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->classes = mojo::internal::Clone(classes);
  rv->interfaces = mojo::internal::Clone(interfaces);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CapabilityRequest>::value>::type*>
bool CapabilityRequest::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->classes, other.classes))
    return false;
  if (!mojo::internal::Equals(this->interfaces, other.interfaces))
    return false;
  return true;
}

inline void CapabilityRequestDataView::GetClassesDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->classes.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}
inline void CapabilityRequestDataView::GetInterfacesDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->interfaces.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}

template <typename StructPtrType>
CapabilitySpecPtr CapabilitySpec::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->provided = mojo::internal::Clone(provided);
  rv->required = mojo::internal::Clone(required);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CapabilitySpec>::value>::type*>
bool CapabilitySpec::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->provided, other.provided))
    return false;
  if (!mojo::internal::Equals(this->required, other.required))
    return false;
  return true;
}

inline void CapabilitySpecDataView::GetProvidedDataView(
    mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<mojo::StringDataView>>* output) {
  auto pointer = data_->provided.Get();
  *output = mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<mojo::StringDataView>>(pointer, context_);
}
inline void CapabilitySpecDataView::GetRequiredDataView(
    mojo::MapDataView<mojo::StringDataView, CapabilityRequestDataView>* output) {
  auto pointer = data_->required.Get();
  *output = mojo::MapDataView<mojo::StringDataView, CapabilityRequestDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace shell

namespace mojo {


template <>
struct  StructTraits<::shell::mojom::CapabilityRequest, ::shell::mojom::CapabilityRequestPtr> {
  static bool IsNull(const ::shell::mojom::CapabilityRequestPtr& input) { return !input; }
  static void SetToNull(::shell::mojom::CapabilityRequestPtr* output) { output->reset(); }
  static decltype(::shell::mojom::CapabilityRequest::classes)& classes(
      ::shell::mojom::CapabilityRequestPtr& input) {
    return input->classes;
  }
  static decltype(::shell::mojom::CapabilityRequest::interfaces)& interfaces(
      ::shell::mojom::CapabilityRequestPtr& input) {
    return input->interfaces;
  }

  static bool Read(::shell::mojom::CapabilityRequestDataView input, ::shell::mojom::CapabilityRequestPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::shell::mojom::CapabilityRequestPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::shell::mojom::CapabilityRequest, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::shell::mojom::internal::CapabilityRequest_Data);
    decltype(CallWithContext(Traits::classes, input, custom_context)) in_classes = CallWithContext(Traits::classes, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<mojo::String>>(
        in_classes, context);
    decltype(CallWithContext(Traits::interfaces, input, custom_context)) in_interfaces = CallWithContext(Traits::interfaces, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<mojo::String>>(
        in_interfaces, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::shell::mojom::internal::CapabilityRequest_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::shell::mojom::internal::CapabilityRequest_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::classes, input, custom_context)) in_classes = CallWithContext(Traits::classes, input, custom_context);
      typename decltype(result->classes)::BaseType* classes_ptr;
      const mojo::internal::ContainerValidateParams classes_validate_params(
          0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
      mojo::internal::Serialize<mojo::Array<mojo::String>>(
          in_classes, buffer, &classes_ptr, &classes_validate_params,
          context);
      result->classes.Set(classes_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->classes.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null classes in CapabilityRequest struct");
      decltype(CallWithContext(Traits::interfaces, input, custom_context)) in_interfaces = CallWithContext(Traits::interfaces, input, custom_context);
      typename decltype(result->interfaces)::BaseType* interfaces_ptr;
      const mojo::internal::ContainerValidateParams interfaces_validate_params(
          0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
      mojo::internal::Serialize<mojo::Array<mojo::String>>(
          in_interfaces, buffer, &interfaces_ptr, &interfaces_validate_params,
          context);
      result->interfaces.Set(interfaces_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->interfaces.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null interfaces in CapabilityRequest struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::shell::mojom::internal::CapabilityRequest_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::shell::mojom::CapabilityRequestDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::shell::mojom::CapabilitySpec, ::shell::mojom::CapabilitySpecPtr> {
  static bool IsNull(const ::shell::mojom::CapabilitySpecPtr& input) { return !input; }
  static void SetToNull(::shell::mojom::CapabilitySpecPtr* output) { output->reset(); }
  static decltype(::shell::mojom::CapabilitySpec::provided)& provided(
      ::shell::mojom::CapabilitySpecPtr& input) {
    return input->provided;
  }
  static decltype(::shell::mojom::CapabilitySpec::required)& required(
      ::shell::mojom::CapabilitySpecPtr& input) {
    return input->required;
  }

  static bool Read(::shell::mojom::CapabilitySpecDataView input, ::shell::mojom::CapabilitySpecPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::shell::mojom::CapabilitySpecPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::shell::mojom::CapabilitySpec, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::shell::mojom::internal::CapabilitySpec_Data);
    decltype(CallWithContext(Traits::provided, input, custom_context)) in_provided = CallWithContext(Traits::provided, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Map<mojo::String, mojo::Array<mojo::String>>>(
        in_provided, context);
    decltype(CallWithContext(Traits::required, input, custom_context)) in_required = CallWithContext(Traits::required, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Map<mojo::String, ::shell::mojom::CapabilityRequestPtr>>(
        in_required, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::shell::mojom::internal::CapabilitySpec_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::shell::mojom::internal::CapabilitySpec_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::provided, input, custom_context)) in_provided = CallWithContext(Traits::provided, input, custom_context);
      typename decltype(result->provided)::BaseType* provided_ptr;
      const mojo::internal::ContainerValidateParams provided_validate_params(
          new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr))));
      mojo::internal::Serialize<mojo::Map<mojo::String, mojo::Array<mojo::String>>>(
          in_provided, buffer, &provided_ptr, &provided_validate_params,
          context);
      result->provided.Set(provided_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->provided.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null provided in CapabilitySpec struct");
      decltype(CallWithContext(Traits::required, input, custom_context)) in_required = CallWithContext(Traits::required, input, custom_context);
      typename decltype(result->required)::BaseType* required_ptr;
      const mojo::internal::ContainerValidateParams required_validate_params(
          new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, nullptr));
      mojo::internal::Serialize<mojo::Map<mojo::String, ::shell::mojom::CapabilityRequestPtr>>(
          in_required, buffer, &required_ptr, &required_validate_params,
          context);
      result->required.Set(required_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->required.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null required in CapabilitySpec struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::shell::mojom::internal::CapabilitySpec_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::shell::mojom::CapabilitySpecDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // SERVICES_SHELL_PUBLIC_INTERFACES_CAPABILITIES_MOJOM_H_
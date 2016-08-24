// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SHELL_PUBLIC_INTERFACES_RESOLVER_MOJOM_H_
#define SERVICES_SHELL_PUBLIC_INTERFACES_RESOLVER_MOJOM_H_

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
#include "services/shell/public/interfaces/resolver.mojom-shared.h"
#include "mojo/common/common_custom_types.mojom.h"
#include "services/shell/public/interfaces/capabilities.mojom.h"
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
class Resolver;
using ResolverPtr = mojo::InterfacePtr<Resolver>;
using ResolverPtrInfo = mojo::InterfacePtrInfo<Resolver>;
using ResolverRequest = mojo::InterfaceRequest<Resolver>;
using ResolverAssociatedPtr =
    mojo::AssociatedInterfacePtr<Resolver>;
using ResolverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Resolver>;
using ResolverAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Resolver>;

class ResolveResult;
class ResolveResultDataView;
using ResolveResultPtr = mojo::StructPtr<ResolveResult>;


class ResolverProxy;
class ResolverStub;

class ResolverRequestValidator;
class ResolverResponseValidator;

class  Resolver {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = ResolverProxy;
  using Stub_ = ResolverStub;

  using RequestValidator_ = ResolverRequestValidator;
  using ResponseValidator_ = ResolverResponseValidator;
  virtual ~Resolver() {}


  using ResolveMojoNameCallback = base::Callback<void(ResolveResultPtr)>;
  virtual void ResolveMojoName(const std::string& mojo_name, const ResolveMojoNameCallback& callback) = 0;
};

class  ResolverProxy
    : public Resolver,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit ResolverProxy(mojo::MessageReceiverWithResponder* receiver);
  void ResolveMojoName(const std::string& mojo_name, const ResolveMojoNameCallback& callback) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class  ResolverStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  ResolverStub();
  ~ResolverStub() override;
  void set_sink(Resolver* sink) { sink_ = sink; }
  Resolver* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  Resolver* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  ResolverRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit ResolverRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  ResolverResponseValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit ResolverResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





class  ResolveResult {
 public:
  using DataView = ResolveResultDataView;
  using Data_ = internal::ResolveResult_Data;

  static ResolveResultPtr New();

  template <typename U>
  static ResolveResultPtr From(const U& u) {
    return mojo::TypeConverter<ResolveResultPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ResolveResult>::Convert(*this);
  }

  ResolveResult();
  ~ResolveResult();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ResolveResultPtr>
  ResolveResultPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ResolveResult>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        ResolveResultPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        ResolveResultPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  std::string name;
  std::string resolved_name;
  std::string qualifier;
  base::Optional<::shell::CapabilitySpec> capabilities;
  base::FilePath package_path;
};

class ResolveResultDataView {
 public:
  ResolveResultDataView() {}

  ResolveResultDataView(
      internal::ResolveResult_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadName(UserType* output) {
    auto pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetResolvedNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadResolvedName(UserType* output) {
    auto pointer = data_->resolved_name.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetQualifierDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadQualifier(UserType* output) {
    auto pointer = data_->qualifier.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetCapabilitiesDataView(
      ::shell::mojom::CapabilitySpecDataView* output);

  template <typename UserType>
  bool ReadCapabilities(UserType* output) {
    auto pointer = data_->capabilities.Get();
    return mojo::internal::Deserialize<::shell::mojom::CapabilitySpecPtr>(
        pointer, output, context_);
  }
  inline void GetPackagePathDataView(
      ::mojo::common::mojom::FilePathDataView* output);

  template <typename UserType>
  bool ReadPackagePath(UserType* output) {
    auto pointer = data_->package_path.Get();
    return mojo::internal::Deserialize<::mojo::common::mojom::FilePathPtr>(
        pointer, output, context_);
  }
 private:
  internal::ResolveResult_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace shell

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::shell::mojom::ResolveResultDataView> {
  using MojomType = ::shell::mojom::ResolveResultPtr;
};
}  // namespace internal
}  // namespace mojo

namespace shell {
namespace mojom {


template <typename StructPtrType>
ResolveResultPtr ResolveResult::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->name = mojo::internal::Clone(name);
  rv->resolved_name = mojo::internal::Clone(resolved_name);
  rv->qualifier = mojo::internal::Clone(qualifier);
  rv->capabilities = mojo::internal::Clone(capabilities);
  rv->package_path = mojo::internal::Clone(package_path);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ResolveResult>::value>::type*>
bool ResolveResult::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->name, other.name))
    return false;
  if (!mojo::internal::Equals(this->resolved_name, other.resolved_name))
    return false;
  if (!mojo::internal::Equals(this->qualifier, other.qualifier))
    return false;
  if (!mojo::internal::Equals(this->capabilities, other.capabilities))
    return false;
  if (!mojo::internal::Equals(this->package_path, other.package_path))
    return false;
  return true;
}

inline void ResolveResultDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ResolveResultDataView::GetResolvedNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->resolved_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ResolveResultDataView::GetQualifierDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->qualifier.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ResolveResultDataView::GetCapabilitiesDataView(
    ::shell::mojom::CapabilitySpecDataView* output) {
  auto pointer = data_->capabilities.Get();
  *output = ::shell::mojom::CapabilitySpecDataView(pointer, context_);
}
inline void ResolveResultDataView::GetPackagePathDataView(
    ::mojo::common::mojom::FilePathDataView* output) {
  auto pointer = data_->package_path.Get();
  *output = ::mojo::common::mojom::FilePathDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace shell

namespace mojo {


template <>
struct  StructTraits<::shell::mojom::ResolveResult, ::shell::mojom::ResolveResultPtr> {
  static bool IsNull(const ::shell::mojom::ResolveResultPtr& input) { return !input; }
  static void SetToNull(::shell::mojom::ResolveResultPtr* output) { output->reset(); }
  static decltype(::shell::mojom::ResolveResult::name)& name(
      ::shell::mojom::ResolveResultPtr& input) {
    return input->name;
  }
  static decltype(::shell::mojom::ResolveResult::resolved_name)& resolved_name(
      ::shell::mojom::ResolveResultPtr& input) {
    return input->resolved_name;
  }
  static decltype(::shell::mojom::ResolveResult::qualifier)& qualifier(
      ::shell::mojom::ResolveResultPtr& input) {
    return input->qualifier;
  }
  static decltype(::shell::mojom::ResolveResult::capabilities)& capabilities(
      ::shell::mojom::ResolveResultPtr& input) {
    return input->capabilities;
  }
  static decltype(::shell::mojom::ResolveResult::package_path)& package_path(
      ::shell::mojom::ResolveResultPtr& input) {
    return input->package_path;
  }

  static bool Read(::shell::mojom::ResolveResultDataView input, ::shell::mojom::ResolveResultPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::shell::mojom::ResolveResultPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::shell::mojom::ResolveResult, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::shell::mojom::internal::ResolveResult_Data);
    decltype(CallWithContext(Traits::name, input, custom_context)) in_name = CallWithContext(Traits::name, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_name, context);
    decltype(CallWithContext(Traits::resolved_name, input, custom_context)) in_resolved_name = CallWithContext(Traits::resolved_name, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_resolved_name, context);
    decltype(CallWithContext(Traits::qualifier, input, custom_context)) in_qualifier = CallWithContext(Traits::qualifier, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_qualifier, context);
    decltype(CallWithContext(Traits::capabilities, input, custom_context)) in_capabilities = CallWithContext(Traits::capabilities, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::shell::mojom::CapabilitySpecPtr>(
        in_capabilities, context);
    decltype(CallWithContext(Traits::package_path, input, custom_context)) in_package_path = CallWithContext(Traits::package_path, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::mojo::common::mojom::FilePathPtr>(
        in_package_path, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::shell::mojom::internal::ResolveResult_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::shell::mojom::internal::ResolveResult_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::name, input, custom_context)) in_name = CallWithContext(Traits::name, input, custom_context);
      typename decltype(result->name)::BaseType* name_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_name, buffer, &name_ptr, context);
      result->name.Set(name_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->name.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null name in ResolveResult struct");
      decltype(CallWithContext(Traits::resolved_name, input, custom_context)) in_resolved_name = CallWithContext(Traits::resolved_name, input, custom_context);
      typename decltype(result->resolved_name)::BaseType* resolved_name_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_resolved_name, buffer, &resolved_name_ptr, context);
      result->resolved_name.Set(resolved_name_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->resolved_name.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null resolved_name in ResolveResult struct");
      decltype(CallWithContext(Traits::qualifier, input, custom_context)) in_qualifier = CallWithContext(Traits::qualifier, input, custom_context);
      typename decltype(result->qualifier)::BaseType* qualifier_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_qualifier, buffer, &qualifier_ptr, context);
      result->qualifier.Set(qualifier_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->qualifier.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null qualifier in ResolveResult struct");
      decltype(CallWithContext(Traits::capabilities, input, custom_context)) in_capabilities = CallWithContext(Traits::capabilities, input, custom_context);
      typename decltype(result->capabilities)::BaseType* capabilities_ptr;
      mojo::internal::Serialize<::shell::mojom::CapabilitySpecPtr>(
          in_capabilities, buffer, &capabilities_ptr, context);
      result->capabilities.Set(capabilities_ptr);
      decltype(CallWithContext(Traits::package_path, input, custom_context)) in_package_path = CallWithContext(Traits::package_path, input, custom_context);
      typename decltype(result->package_path)::BaseType* package_path_ptr;
      mojo::internal::Serialize<::mojo::common::mojom::FilePathPtr>(
          in_package_path, buffer, &package_path_ptr, context);
      result->package_path.Set(package_path_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->package_path.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null package_path in ResolveResult struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::shell::mojom::internal::ResolveResult_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::shell::mojom::ResolveResultDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // SERVICES_SHELL_PUBLIC_INTERFACES_RESOLVER_MOJOM_H_
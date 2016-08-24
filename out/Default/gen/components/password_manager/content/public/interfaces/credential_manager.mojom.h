// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_PASSWORD_MANAGER_CONTENT_PUBLIC_INTERFACES_CREDENTIAL_MANAGER_MOJOM_H_
#define COMPONENTS_PASSWORD_MANAGER_CONTENT_PUBLIC_INTERFACES_CREDENTIAL_MANAGER_MOJOM_H_

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
#include "components/password_manager/content/public/interfaces/credential_manager.mojom-shared.h"
#include "url/mojo/origin.mojom.h"
#include "url/mojo/url.mojom.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"
#include "url/gurl.h"
#include "url/origin.h"
#include "components/password_manager/core/common/credential_manager_types.h"


namespace password_manager {
namespace mojom {
class CredentialManager;
using CredentialManagerPtr = mojo::InterfacePtr<CredentialManager>;
using CredentialManagerPtrInfo = mojo::InterfacePtrInfo<CredentialManager>;
using CredentialManagerRequest = mojo::InterfaceRequest<CredentialManager>;
using CredentialManagerAssociatedPtr =
    mojo::AssociatedInterfacePtr<CredentialManager>;
using CredentialManagerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<CredentialManager>;
using CredentialManagerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<CredentialManager>;

class CredentialInfo;
class CredentialInfoDataView;
using CredentialInfoPtr = mojo::StructPtr<CredentialInfo>;


class CredentialManagerProxy;
class CredentialManagerStub;

class CredentialManagerRequestValidator;
class CredentialManagerResponseValidator;

class  CredentialManager {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = CredentialManagerProxy;
  using Stub_ = CredentialManagerStub;

  using RequestValidator_ = CredentialManagerRequestValidator;
  using ResponseValidator_ = CredentialManagerResponseValidator;
  virtual ~CredentialManager() {}


  using StoreCallback = base::Callback<void()>;
  virtual void Store(const password_manager::CredentialInfo& credential, const StoreCallback& callback) = 0;


  using RequireUserMediationCallback = base::Callback<void()>;
  virtual void RequireUserMediation(const RequireUserMediationCallback& callback) = 0;


  using GetCallback = base::Callback<void(CredentialManagerError, const base::Optional<password_manager::CredentialInfo>&)>;
  virtual void Get(bool zero_click_only, bool include_passwords, const std::vector<GURL>& federations, const GetCallback& callback) = 0;
};

class  CredentialManagerProxy
    : public CredentialManager,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit CredentialManagerProxy(mojo::MessageReceiverWithResponder* receiver);
  void Store(const password_manager::CredentialInfo& credential, const StoreCallback& callback) override;
  void RequireUserMediation(const RequireUserMediationCallback& callback) override;
  void Get(bool zero_click_only, bool include_passwords, const std::vector<GURL>& federations, const GetCallback& callback) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class  CredentialManagerStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  CredentialManagerStub();
  ~CredentialManagerStub() override;
  void set_sink(CredentialManager* sink) { sink_ = sink; }
  CredentialManager* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  CredentialManager* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  CredentialManagerRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit CredentialManagerRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  CredentialManagerResponseValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit CredentialManagerResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





class  CredentialInfo {
 public:
  using DataView = CredentialInfoDataView;
  using Data_ = internal::CredentialInfo_Data;

  static CredentialInfoPtr New();

  template <typename U>
  static CredentialInfoPtr From(const U& u) {
    return mojo::TypeConverter<CredentialInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CredentialInfo>::Convert(*this);
  }

  CredentialInfo();
  ~CredentialInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CredentialInfoPtr>
  CredentialInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CredentialInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        CredentialInfoPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        CredentialInfoPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  password_manager::CredentialType type;
  std::string id;
  std::string name;
  GURL icon;
  std::string password;
  url::Origin federation;
};

class CredentialInfoDataView {
 public:
  CredentialInfoDataView() {}

  CredentialInfoDataView(
      internal::CredentialInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::password_manager::mojom::CredentialType>(
        data_value, output);
  }

  ::password_manager::mojom::CredentialType type() const {
    return static_cast<::password_manager::mojom::CredentialType>(data_->type);
  }
  inline void GetIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadId(UserType* output) {
    auto pointer = data_->id.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadName(UserType* output) {
    auto pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetIconDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  bool ReadIcon(UserType* output) {
    auto pointer = data_->icon.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlPtr>(
        pointer, output, context_);
  }
  inline void GetPasswordDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadPassword(UserType* output) {
    auto pointer = data_->password.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetFederationDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  bool ReadFederation(UserType* output) {
    auto pointer = data_->federation.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginPtr>(
        pointer, output, context_);
  }
 private:
  internal::CredentialInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace password_manager

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::password_manager::mojom::CredentialInfoDataView> {
  using MojomType = ::password_manager::mojom::CredentialInfoPtr;
};
}  // namespace internal
}  // namespace mojo

namespace password_manager {
namespace mojom {


template <typename StructPtrType>
CredentialInfoPtr CredentialInfo::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->type = mojo::internal::Clone(type);
  rv->id = mojo::internal::Clone(id);
  rv->name = mojo::internal::Clone(name);
  rv->icon = mojo::internal::Clone(icon);
  rv->password = mojo::internal::Clone(password);
  rv->federation = mojo::internal::Clone(federation);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CredentialInfo>::value>::type*>
bool CredentialInfo::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->type, other.type))
    return false;
  if (!mojo::internal::Equals(this->id, other.id))
    return false;
  if (!mojo::internal::Equals(this->name, other.name))
    return false;
  if (!mojo::internal::Equals(this->icon, other.icon))
    return false;
  if (!mojo::internal::Equals(this->password, other.password))
    return false;
  if (!mojo::internal::Equals(this->federation, other.federation))
    return false;
  return true;
}

inline void CredentialInfoDataView::GetIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void CredentialInfoDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void CredentialInfoDataView::GetIconDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->icon.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void CredentialInfoDataView::GetPasswordDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->password.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void CredentialInfoDataView::GetFederationDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->federation.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace password_manager

namespace mojo {


template <>
struct  StructTraits<::password_manager::mojom::CredentialInfo, ::password_manager::mojom::CredentialInfoPtr> {
  static bool IsNull(const ::password_manager::mojom::CredentialInfoPtr& input) { return !input; }
  static void SetToNull(::password_manager::mojom::CredentialInfoPtr* output) { output->reset(); }
  static decltype(::password_manager::mojom::CredentialInfo::type) type(
      const ::password_manager::mojom::CredentialInfoPtr& input) {
    return input->type;
  }
  static decltype(::password_manager::mojom::CredentialInfo::id)& id(
      ::password_manager::mojom::CredentialInfoPtr& input) {
    return input->id;
  }
  static decltype(::password_manager::mojom::CredentialInfo::name)& name(
      ::password_manager::mojom::CredentialInfoPtr& input) {
    return input->name;
  }
  static decltype(::password_manager::mojom::CredentialInfo::icon)& icon(
      ::password_manager::mojom::CredentialInfoPtr& input) {
    return input->icon;
  }
  static decltype(::password_manager::mojom::CredentialInfo::password)& password(
      ::password_manager::mojom::CredentialInfoPtr& input) {
    return input->password;
  }
  static decltype(::password_manager::mojom::CredentialInfo::federation)& federation(
      ::password_manager::mojom::CredentialInfoPtr& input) {
    return input->federation;
  }

  static bool Read(::password_manager::mojom::CredentialInfoDataView input, ::password_manager::mojom::CredentialInfoPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::password_manager::mojom::CredentialInfoPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::password_manager::mojom::CredentialInfo, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::password_manager::mojom::internal::CredentialInfo_Data);
    decltype(CallWithContext(Traits::id, input, custom_context)) in_id = CallWithContext(Traits::id, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_id, context);
    decltype(CallWithContext(Traits::name, input, custom_context)) in_name = CallWithContext(Traits::name, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_name, context);
    decltype(CallWithContext(Traits::icon, input, custom_context)) in_icon = CallWithContext(Traits::icon, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::url::mojom::UrlPtr>(
        in_icon, context);
    decltype(CallWithContext(Traits::password, input, custom_context)) in_password = CallWithContext(Traits::password, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_password, context);
    decltype(CallWithContext(Traits::federation, input, custom_context)) in_federation = CallWithContext(Traits::federation, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::url::mojom::OriginPtr>(
        in_federation, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::password_manager::mojom::internal::CredentialInfo_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::password_manager::mojom::internal::CredentialInfo_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      mojo::internal::Serialize<::password_manager::mojom::CredentialType>(
          CallWithContext(Traits::type, input, custom_context), &result->type);
      decltype(CallWithContext(Traits::id, input, custom_context)) in_id = CallWithContext(Traits::id, input, custom_context);
      typename decltype(result->id)::BaseType* id_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_id, buffer, &id_ptr, context);
      result->id.Set(id_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->id.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null id in CredentialInfo struct");
      decltype(CallWithContext(Traits::name, input, custom_context)) in_name = CallWithContext(Traits::name, input, custom_context);
      typename decltype(result->name)::BaseType* name_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_name, buffer, &name_ptr, context);
      result->name.Set(name_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->name.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null name in CredentialInfo struct");
      decltype(CallWithContext(Traits::icon, input, custom_context)) in_icon = CallWithContext(Traits::icon, input, custom_context);
      typename decltype(result->icon)::BaseType* icon_ptr;
      mojo::internal::Serialize<::url::mojom::UrlPtr>(
          in_icon, buffer, &icon_ptr, context);
      result->icon.Set(icon_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->icon.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null icon in CredentialInfo struct");
      decltype(CallWithContext(Traits::password, input, custom_context)) in_password = CallWithContext(Traits::password, input, custom_context);
      typename decltype(result->password)::BaseType* password_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_password, buffer, &password_ptr, context);
      result->password.Set(password_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->password.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null password in CredentialInfo struct");
      decltype(CallWithContext(Traits::federation, input, custom_context)) in_federation = CallWithContext(Traits::federation, input, custom_context);
      typename decltype(result->federation)::BaseType* federation_ptr;
      mojo::internal::Serialize<::url::mojom::OriginPtr>(
          in_federation, buffer, &federation_ptr, context);
      result->federation.Set(federation_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->federation.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null federation in CredentialInfo struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::password_manager::mojom::internal::CredentialInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::password_manager::mojom::CredentialInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // COMPONENTS_PASSWORD_MANAGER_CONTENT_PUBLIC_INTERFACES_CREDENTIAL_MANAGER_MOJOM_H_
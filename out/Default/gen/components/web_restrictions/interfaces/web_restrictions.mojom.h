// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_WEB_RESTRICTIONS_INTERFACES_WEB_RESTRICTIONS_MOJOM_H_
#define COMPONENTS_WEB_RESTRICTIONS_INTERFACES_WEB_RESTRICTIONS_MOJOM_H_

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
#include "components/web_restrictions/interfaces/web_restrictions.mojom-shared.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"


namespace web_restrictions {
namespace mojom {
class WebRestrictions;
using WebRestrictionsPtr = mojo::InterfacePtr<WebRestrictions>;
using WebRestrictionsPtrInfo = mojo::InterfacePtrInfo<WebRestrictions>;
using WebRestrictionsRequest = mojo::InterfaceRequest<WebRestrictions>;
using WebRestrictionsAssociatedPtr =
    mojo::AssociatedInterfacePtr<WebRestrictions>;
using WebRestrictionsAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<WebRestrictions>;
using WebRestrictionsAssociatedRequest =
    mojo::AssociatedInterfaceRequest<WebRestrictions>;

class ClientResult;
class ClientResultDataView;
using ClientResultPtr = mojo::StructPtr<ClientResult>;


class WebRestrictionsProxy;
class WebRestrictionsStub;

class WebRestrictionsRequestValidator;
class WebRestrictionsResponseValidator;

class  WebRestrictions {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = true;

  using Proxy_ = WebRestrictionsProxy;
  using Stub_ = WebRestrictionsStub;

  using RequestValidator_ = WebRestrictionsRequestValidator;
  using ResponseValidator_ = WebRestrictionsResponseValidator;
  virtual ~WebRestrictions() {}

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool GetResult(const std::string& url, ClientResultPtr* reply);

  using GetResultCallback = base::Callback<void(ClientResultPtr)>;
  virtual void GetResult(const std::string& url, const GetResultCallback& callback) = 0;


  using RequestPermissionCallback = base::Callback<void(bool)>;
  virtual void RequestPermission(const std::string& url, const RequestPermissionCallback& callback) = 0;
};

class  WebRestrictionsProxy
    : public WebRestrictions,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit WebRestrictionsProxy(mojo::MessageReceiverWithResponder* receiver);
  bool GetResult(const std::string& url, ClientResultPtr* reply) override;
  void GetResult(const std::string& url, const GetResultCallback& callback) override;
  void RequestPermission(const std::string& url, const RequestPermissionCallback& callback) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class  WebRestrictionsStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  WebRestrictionsStub();
  ~WebRestrictionsStub() override;
  void set_sink(WebRestrictions* sink) { sink_ = sink; }
  WebRestrictions* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  WebRestrictions* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  WebRestrictionsRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit WebRestrictionsRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  WebRestrictionsResponseValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit WebRestrictionsResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





class  ClientResult {
 public:
  using DataView = ClientResultDataView;
  using Data_ = internal::ClientResult_Data;

  static ClientResultPtr New();

  template <typename U>
  static ClientResultPtr From(const U& u) {
    return mojo::TypeConverter<ClientResultPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ClientResult>::Convert(*this);
  }

  ClientResult();
  ~ClientResult();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ClientResultPtr>
  ClientResultPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ClientResult>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        ClientResultPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        ClientResultPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  std::unordered_map<std::string, int32_t> intParams;
  std::unordered_map<std::string, std::string> stringParams;
};

class ClientResultDataView {
 public:
  ClientResultDataView() {}

  ClientResultDataView(
      internal::ClientResult_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIntparamsDataView(
      mojo::MapDataView<mojo::StringDataView, int32_t>* output);

  template <typename UserType>
  bool ReadIntparams(UserType* output) {
    auto pointer = data_->intParams.Get();
    return mojo::internal::Deserialize<mojo::Map<mojo::String, int32_t>>(
        pointer, output, context_);
  }
  inline void GetStringparamsDataView(
      mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>* output);

  template <typename UserType>
  bool ReadStringparams(UserType* output) {
    auto pointer = data_->stringParams.Get();
    return mojo::internal::Deserialize<mojo::Map<mojo::String, mojo::String>>(
        pointer, output, context_);
  }
 private:
  internal::ClientResult_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace web_restrictions

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::web_restrictions::mojom::ClientResultDataView> {
  using MojomType = ::web_restrictions::mojom::ClientResultPtr;
};
}  // namespace internal
}  // namespace mojo

namespace web_restrictions {
namespace mojom {


template <typename StructPtrType>
ClientResultPtr ClientResult::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->intParams = mojo::internal::Clone(intParams);
  rv->stringParams = mojo::internal::Clone(stringParams);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ClientResult>::value>::type*>
bool ClientResult::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->intParams, other.intParams))
    return false;
  if (!mojo::internal::Equals(this->stringParams, other.stringParams))
    return false;
  return true;
}

inline void ClientResultDataView::GetIntparamsDataView(
    mojo::MapDataView<mojo::StringDataView, int32_t>* output) {
  auto pointer = data_->intParams.Get();
  *output = mojo::MapDataView<mojo::StringDataView, int32_t>(pointer, context_);
}
inline void ClientResultDataView::GetStringparamsDataView(
    mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>* output) {
  auto pointer = data_->stringParams.Get();
  *output = mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace web_restrictions

namespace mojo {


template <>
struct  StructTraits<::web_restrictions::mojom::ClientResult, ::web_restrictions::mojom::ClientResultPtr> {
  static bool IsNull(const ::web_restrictions::mojom::ClientResultPtr& input) { return !input; }
  static void SetToNull(::web_restrictions::mojom::ClientResultPtr* output) { output->reset(); }
  static decltype(::web_restrictions::mojom::ClientResult::intParams)& intParams(
      ::web_restrictions::mojom::ClientResultPtr& input) {
    return input->intParams;
  }
  static decltype(::web_restrictions::mojom::ClientResult::stringParams)& stringParams(
      ::web_restrictions::mojom::ClientResultPtr& input) {
    return input->stringParams;
  }

  static bool Read(::web_restrictions::mojom::ClientResultDataView input, ::web_restrictions::mojom::ClientResultPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::web_restrictions::mojom::ClientResultPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::web_restrictions::mojom::ClientResult, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::web_restrictions::mojom::internal::ClientResult_Data);
    decltype(CallWithContext(Traits::intParams, input, custom_context)) in_intParams = CallWithContext(Traits::intParams, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Map<mojo::String, int32_t>>(
        in_intParams, context);
    decltype(CallWithContext(Traits::stringParams, input, custom_context)) in_stringParams = CallWithContext(Traits::stringParams, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Map<mojo::String, mojo::String>>(
        in_stringParams, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::web_restrictions::mojom::internal::ClientResult_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::web_restrictions::mojom::internal::ClientResult_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::intParams, input, custom_context)) in_intParams = CallWithContext(Traits::intParams, input, custom_context);
      typename decltype(result->intParams)::BaseType* intParams_ptr;
      const mojo::internal::ContainerValidateParams intParams_validate_params(
          new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, nullptr));
      mojo::internal::Serialize<mojo::Map<mojo::String, int32_t>>(
          in_intParams, buffer, &intParams_ptr, &intParams_validate_params,
          context);
      result->intParams.Set(intParams_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->intParams.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null intParams in ClientResult struct");
      decltype(CallWithContext(Traits::stringParams, input, custom_context)) in_stringParams = CallWithContext(Traits::stringParams, input, custom_context);
      typename decltype(result->stringParams)::BaseType* stringParams_ptr;
      const mojo::internal::ContainerValidateParams stringParams_validate_params(
          new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)));
      mojo::internal::Serialize<mojo::Map<mojo::String, mojo::String>>(
          in_stringParams, buffer, &stringParams_ptr, &stringParams_validate_params,
          context);
      result->stringParams.Set(stringParams_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->stringParams.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null stringParams in ClientResult struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::web_restrictions::mojom::internal::ClientResult_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::web_restrictions::mojom::ClientResultDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // COMPONENTS_WEB_RESTRICTIONS_INTERFACES_WEB_RESTRICTIONS_MOJOM_H_
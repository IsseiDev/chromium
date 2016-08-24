// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SHELL_PUBLIC_INTERFACES_SERVICE_MANAGER_MOJOM_H_
#define SERVICES_SHELL_PUBLIC_INTERFACES_SERVICE_MANAGER_MOJOM_H_

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
#include "services/shell/public/interfaces/service_manager.mojom-shared.h"
#include "services/shell/public/interfaces/connector.mojom.h"
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
class ServiceManagerListener;
using ServiceManagerListenerPtr = mojo::InterfacePtr<ServiceManagerListener>;
using ServiceManagerListenerPtrInfo = mojo::InterfacePtrInfo<ServiceManagerListener>;
using ServiceManagerListenerRequest = mojo::InterfaceRequest<ServiceManagerListener>;
using ServiceManagerListenerAssociatedPtr =
    mojo::AssociatedInterfacePtr<ServiceManagerListener>;
using ServiceManagerListenerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ServiceManagerListener>;
using ServiceManagerListenerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ServiceManagerListener>;

class ServiceManager;
using ServiceManagerPtr = mojo::InterfacePtr<ServiceManager>;
using ServiceManagerPtrInfo = mojo::InterfacePtrInfo<ServiceManager>;
using ServiceManagerRequest = mojo::InterfaceRequest<ServiceManager>;
using ServiceManagerAssociatedPtr =
    mojo::AssociatedInterfacePtr<ServiceManager>;
using ServiceManagerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ServiceManager>;
using ServiceManagerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ServiceManager>;

class ServiceInfo;
class ServiceInfoDataView;
using ServiceInfoPtr = mojo::StructPtr<ServiceInfo>;


class ServiceManagerListenerProxy;
class ServiceManagerListenerStub;

class ServiceManagerListenerRequestValidator;

class  ServiceManagerListener {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = ServiceManagerListenerProxy;
  using Stub_ = ServiceManagerListenerStub;

  using RequestValidator_ = ServiceManagerListenerRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~ServiceManagerListener() {}

  virtual void OnInit(std::vector<ServiceInfoPtr> running_services) = 0;

  virtual void OnServiceCreated(ServiceInfoPtr service) = 0;

  virtual void OnServiceStarted(const ::shell::Identity& identity, uint32_t pid) = 0;

  virtual void OnServiceStopped(const ::shell::Identity& identity) = 0;
};

class ServiceManagerProxy;
class ServiceManagerStub;

class ServiceManagerRequestValidator;

class  ServiceManager {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = ServiceManagerProxy;
  using Stub_ = ServiceManagerStub;

  using RequestValidator_ = ServiceManagerRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~ServiceManager() {}

  virtual void AddListener(ServiceManagerListenerPtr listener) = 0;
};

class  ServiceManagerListenerProxy
    : public ServiceManagerListener,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit ServiceManagerListenerProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnInit(std::vector<ServiceInfoPtr> running_services) override;
  void OnServiceCreated(ServiceInfoPtr service) override;
  void OnServiceStarted(const ::shell::Identity& identity, uint32_t pid) override;
  void OnServiceStopped(const ::shell::Identity& identity) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class  ServiceManagerProxy
    : public ServiceManager,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit ServiceManagerProxy(mojo::MessageReceiverWithResponder* receiver);
  void AddListener(ServiceManagerListenerPtr listener) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class  ServiceManagerListenerStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  ServiceManagerListenerStub();
  ~ServiceManagerListenerStub() override;
  void set_sink(ServiceManagerListener* sink) { sink_ = sink; }
  ServiceManagerListener* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  ServiceManagerListener* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  ServiceManagerStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  ServiceManagerStub();
  ~ServiceManagerStub() override;
  void set_sink(ServiceManager* sink) { sink_ = sink; }
  ServiceManager* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  ServiceManager* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  ServiceManagerListenerRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit ServiceManagerListenerRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  ServiceManagerRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit ServiceManagerRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





class  ServiceInfo {
 public:
  using DataView = ServiceInfoDataView;
  using Data_ = internal::ServiceInfo_Data;

  static ServiceInfoPtr New();

  template <typename U>
  static ServiceInfoPtr From(const U& u) {
    return mojo::TypeConverter<ServiceInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ServiceInfo>::Convert(*this);
  }

  ServiceInfo();
  ~ServiceInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ServiceInfoPtr>
  ServiceInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ServiceInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        ServiceInfoPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        ServiceInfoPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  uint32_t id;
  ::shell::Identity identity;
  uint32_t pid;
};

class ServiceInfoDataView {
 public:
  ServiceInfoDataView() {}

  ServiceInfoDataView(
      internal::ServiceInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t id() const {
    return data_->id;
  }
  inline void GetIdentityDataView(
      ::shell::mojom::IdentityDataView* output);

  template <typename UserType>
  bool ReadIdentity(UserType* output) {
    auto pointer = data_->identity.Get();
    return mojo::internal::Deserialize<::shell::mojom::IdentityPtr>(
        pointer, output, context_);
  }
  uint32_t pid() const {
    return data_->pid;
  }
 private:
  internal::ServiceInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace shell

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::shell::mojom::ServiceInfoDataView> {
  using MojomType = ::shell::mojom::ServiceInfoPtr;
};
}  // namespace internal
}  // namespace mojo

namespace shell {
namespace mojom {


template <typename StructPtrType>
ServiceInfoPtr ServiceInfo::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->id = mojo::internal::Clone(id);
  rv->identity = mojo::internal::Clone(identity);
  rv->pid = mojo::internal::Clone(pid);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ServiceInfo>::value>::type*>
bool ServiceInfo::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->id, other.id))
    return false;
  if (!mojo::internal::Equals(this->identity, other.identity))
    return false;
  if (!mojo::internal::Equals(this->pid, other.pid))
    return false;
  return true;
}

inline void ServiceInfoDataView::GetIdentityDataView(
    ::shell::mojom::IdentityDataView* output) {
  auto pointer = data_->identity.Get();
  *output = ::shell::mojom::IdentityDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace shell

namespace mojo {


template <>
struct  StructTraits<::shell::mojom::ServiceInfo, ::shell::mojom::ServiceInfoPtr> {
  static bool IsNull(const ::shell::mojom::ServiceInfoPtr& input) { return !input; }
  static void SetToNull(::shell::mojom::ServiceInfoPtr* output) { output->reset(); }
  static decltype(::shell::mojom::ServiceInfo::id) id(
      const ::shell::mojom::ServiceInfoPtr& input) {
    return input->id;
  }
  static decltype(::shell::mojom::ServiceInfo::identity)& identity(
      ::shell::mojom::ServiceInfoPtr& input) {
    return input->identity;
  }
  static decltype(::shell::mojom::ServiceInfo::pid) pid(
      const ::shell::mojom::ServiceInfoPtr& input) {
    return input->pid;
  }

  static bool Read(::shell::mojom::ServiceInfoDataView input, ::shell::mojom::ServiceInfoPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::shell::mojom::ServiceInfoPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::shell::mojom::ServiceInfo, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::shell::mojom::internal::ServiceInfo_Data);
    decltype(CallWithContext(Traits::identity, input, custom_context)) in_identity = CallWithContext(Traits::identity, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::shell::mojom::IdentityPtr>(
        in_identity, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::shell::mojom::internal::ServiceInfo_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::shell::mojom::internal::ServiceInfo_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->id = CallWithContext(Traits::id, input, custom_context);
      decltype(CallWithContext(Traits::identity, input, custom_context)) in_identity = CallWithContext(Traits::identity, input, custom_context);
      typename decltype(result->identity)::BaseType* identity_ptr;
      mojo::internal::Serialize<::shell::mojom::IdentityPtr>(
          in_identity, buffer, &identity_ptr, context);
      result->identity.Set(identity_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->identity.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null identity in ServiceInfo struct");
      result->pid = CallWithContext(Traits::pid, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::shell::mojom::internal::ServiceInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::shell::mojom::ServiceInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // SERVICES_SHELL_PUBLIC_INTERFACES_SERVICE_MANAGER_MOJOM_H_
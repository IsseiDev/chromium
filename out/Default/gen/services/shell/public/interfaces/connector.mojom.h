// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SHELL_PUBLIC_INTERFACES_CONNECTOR_MOJOM_H_
#define SERVICES_SHELL_PUBLIC_INTERFACES_CONNECTOR_MOJOM_H_

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
#include "services/shell/public/interfaces/connector.mojom-shared.h"
#include "services/shell/public/interfaces/interface_provider.mojom.h"
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
extern const char* kRootUserID;
extern const char* kInheritUserID;
const uint32_t kInvalidInstanceID = 0U;
class PIDReceiver;
using PIDReceiverPtr = mojo::InterfacePtr<PIDReceiver>;
using PIDReceiverPtrInfo = mojo::InterfacePtrInfo<PIDReceiver>;
using PIDReceiverRequest = mojo::InterfaceRequest<PIDReceiver>;
using PIDReceiverAssociatedPtr =
    mojo::AssociatedInterfacePtr<PIDReceiver>;
using PIDReceiverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PIDReceiver>;
using PIDReceiverAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PIDReceiver>;

class Connector;
using ConnectorPtr = mojo::InterfacePtr<Connector>;
using ConnectorPtrInfo = mojo::InterfacePtrInfo<Connector>;
using ConnectorRequest = mojo::InterfaceRequest<Connector>;
using ConnectorAssociatedPtr =
    mojo::AssociatedInterfacePtr<Connector>;
using ConnectorAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Connector>;
using ConnectorAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Connector>;

class Identity;
class IdentityDataView;
using IdentityPtr = mojo::InlinedStructPtr<Identity>;

class ClientProcessConnection;
class ClientProcessConnectionDataView;
using ClientProcessConnectionPtr = mojo::StructPtr<ClientProcessConnection>;


class PIDReceiverProxy;
class PIDReceiverStub;

class PIDReceiverRequestValidator;

class  PIDReceiver {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = PIDReceiverProxy;
  using Stub_ = PIDReceiverStub;

  using RequestValidator_ = PIDReceiverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~PIDReceiver() {}

  virtual void SetPID(uint32_t pid) = 0;
};

class ConnectorProxy;
class ConnectorStub;

class ConnectorRequestValidator;
class ConnectorResponseValidator;

class  Connector {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = ConnectorProxy;
  using Stub_ = ConnectorStub;

  using RequestValidator_ = ConnectorRequestValidator;
  using ResponseValidator_ = ConnectorResponseValidator;
  virtual ~Connector() {}


  using ConnectCallback = base::Callback<void(ConnectResult, const std::string&)>;
  virtual void Connect(const ::shell::Identity& target, ::shell::mojom::InterfaceProviderRequest remote_interfaces, ClientProcessConnectionPtr client_process_connection, const ConnectCallback& callback) = 0;

  virtual void Clone(ConnectorRequest request) = 0;
};

class  PIDReceiverProxy
    : public PIDReceiver,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit PIDReceiverProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetPID(uint32_t pid) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class  ConnectorProxy
    : public Connector,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit ConnectorProxy(mojo::MessageReceiverWithResponder* receiver);
  void Connect(const ::shell::Identity& target, ::shell::mojom::InterfaceProviderRequest remote_interfaces, ClientProcessConnectionPtr client_process_connection, const ConnectCallback& callback) override;
  void Clone(ConnectorRequest request) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class  PIDReceiverStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  PIDReceiverStub();
  ~PIDReceiverStub() override;
  void set_sink(PIDReceiver* sink) { sink_ = sink; }
  PIDReceiver* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  PIDReceiver* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  ConnectorStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  ConnectorStub();
  ~ConnectorStub() override;
  void set_sink(Connector* sink) { sink_ = sink; }
  Connector* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  Connector* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  PIDReceiverRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit PIDReceiverRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  ConnectorRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit ConnectorRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  ConnectorResponseValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit ConnectorResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};


class  Identity {
 public:
  using DataView = IdentityDataView;
  using Data_ = internal::Identity_Data;

  static IdentityPtr New();

  template <typename U>
  static IdentityPtr From(const U& u) {
    return mojo::TypeConverter<IdentityPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Identity>::Convert(*this);
  }

  Identity();
  ~Identity();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = IdentityPtr>
  IdentityPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Identity>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        IdentityPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        IdentityPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  std::string name;
  std::string user_id;
  std::string instance;
};

class IdentityDataView {
 public:
  IdentityDataView() {}

  IdentityDataView(
      internal::Identity_Data* data,
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
  inline void GetUserIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadUserId(UserType* output) {
    auto pointer = data_->user_id.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetInstanceDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadInstance(UserType* output) {
    auto pointer = data_->instance.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::Identity_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace shell

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::shell::mojom::IdentityDataView> {
  using MojomType = ::shell::mojom::IdentityPtr;
};
}  // namespace internal
}  // namespace mojo

namespace shell {
namespace mojom {







class  ClientProcessConnection {
 public:
  using DataView = ClientProcessConnectionDataView;
  using Data_ = internal::ClientProcessConnection_Data;

  static ClientProcessConnectionPtr New();

  template <typename U>
  static ClientProcessConnectionPtr From(const U& u) {
    return mojo::TypeConverter<ClientProcessConnectionPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ClientProcessConnection>::Convert(*this);
  }

  ClientProcessConnection();
  ~ClientProcessConnection();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ClientProcessConnectionPtr>
  ClientProcessConnectionPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ClientProcessConnection>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        ClientProcessConnectionPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        ClientProcessConnectionPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  mojo::ScopedMessagePipeHandle service;
  mojo::ScopedMessagePipeHandle pid_receiver_request;
 private:
  DISALLOW_COPY_AND_ASSIGN(ClientProcessConnection);
};

class ClientProcessConnectionDataView {
 public:
  ClientProcessConnectionDataView() {}

  ClientProcessConnectionDataView(
      internal::ClientProcessConnection_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  mojo::ScopedMessagePipeHandle TakeService() {
    mojo::ScopedMessagePipeHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedMessagePipeHandle>(
            &data_->service, &result, context_);
    DCHECK(ret);
    return result;
  }
  mojo::ScopedMessagePipeHandle TakePidReceiverRequest() {
    mojo::ScopedMessagePipeHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedMessagePipeHandle>(
            &data_->pid_receiver_request, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ClientProcessConnection_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace shell

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::shell::mojom::ClientProcessConnectionDataView> {
  using MojomType = ::shell::mojom::ClientProcessConnectionPtr;
};
}  // namespace internal
}  // namespace mojo

namespace shell {
namespace mojom {


template <typename StructPtrType>
IdentityPtr Identity::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->name = mojo::internal::Clone(name);
  rv->user_id = mojo::internal::Clone(user_id);
  rv->instance = mojo::internal::Clone(instance);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Identity>::value>::type*>
bool Identity::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->name, other.name))
    return false;
  if (!mojo::internal::Equals(this->user_id, other.user_id))
    return false;
  if (!mojo::internal::Equals(this->instance, other.instance))
    return false;
  return true;
}

inline void IdentityDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void IdentityDataView::GetUserIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->user_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void IdentityDataView::GetInstanceDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->instance.Get();
  *output = mojo::StringDataView(pointer, context_);
}

template <typename StructPtrType>
ClientProcessConnectionPtr ClientProcessConnection::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->service = mojo::internal::Clone(service);
  rv->pid_receiver_request = mojo::internal::Clone(pid_receiver_request);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ClientProcessConnection>::value>::type*>
bool ClientProcessConnection::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->service, other.service))
    return false;
  if (!mojo::internal::Equals(this->pid_receiver_request, other.pid_receiver_request))
    return false;
  return true;
}




}  // namespace mojom
}  // namespace shell

namespace mojo {


template <>
struct  StructTraits<::shell::mojom::Identity, ::shell::mojom::IdentityPtr> {
  static bool IsNull(const ::shell::mojom::IdentityPtr& input) { return !input; }
  static void SetToNull(::shell::mojom::IdentityPtr* output) { output->reset(); }
  static decltype(::shell::mojom::Identity::name)& name(
      ::shell::mojom::IdentityPtr& input) {
    return input->name;
  }
  static decltype(::shell::mojom::Identity::user_id)& user_id(
      ::shell::mojom::IdentityPtr& input) {
    return input->user_id;
  }
  static decltype(::shell::mojom::Identity::instance)& instance(
      ::shell::mojom::IdentityPtr& input) {
    return input->instance;
  }

  static bool Read(::shell::mojom::IdentityDataView input, ::shell::mojom::IdentityPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::shell::mojom::IdentityPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::shell::mojom::Identity, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::shell::mojom::internal::Identity_Data);
    decltype(CallWithContext(Traits::name, input, custom_context)) in_name = CallWithContext(Traits::name, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_name, context);
    decltype(CallWithContext(Traits::user_id, input, custom_context)) in_user_id = CallWithContext(Traits::user_id, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_user_id, context);
    decltype(CallWithContext(Traits::instance, input, custom_context)) in_instance = CallWithContext(Traits::instance, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_instance, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::shell::mojom::internal::Identity_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::shell::mojom::internal::Identity_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::name, input, custom_context)) in_name = CallWithContext(Traits::name, input, custom_context);
      typename decltype(result->name)::BaseType* name_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_name, buffer, &name_ptr, context);
      result->name.Set(name_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->name.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null name in Identity struct");
      decltype(CallWithContext(Traits::user_id, input, custom_context)) in_user_id = CallWithContext(Traits::user_id, input, custom_context);
      typename decltype(result->user_id)::BaseType* user_id_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_user_id, buffer, &user_id_ptr, context);
      result->user_id.Set(user_id_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->user_id.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null user_id in Identity struct");
      decltype(CallWithContext(Traits::instance, input, custom_context)) in_instance = CallWithContext(Traits::instance, input, custom_context);
      typename decltype(result->instance)::BaseType* instance_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_instance, buffer, &instance_ptr, context);
      result->instance.Set(instance_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->instance.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null instance in Identity struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::shell::mojom::internal::Identity_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::shell::mojom::IdentityDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::shell::mojom::ClientProcessConnection, ::shell::mojom::ClientProcessConnectionPtr> {
  static bool IsNull(const ::shell::mojom::ClientProcessConnectionPtr& input) { return !input; }
  static void SetToNull(::shell::mojom::ClientProcessConnectionPtr* output) { output->reset(); }
  static decltype(::shell::mojom::ClientProcessConnection::service)& service(
      ::shell::mojom::ClientProcessConnectionPtr& input) {
    return input->service;
  }
  static decltype(::shell::mojom::ClientProcessConnection::pid_receiver_request)& pid_receiver_request(
      ::shell::mojom::ClientProcessConnectionPtr& input) {
    return input->pid_receiver_request;
  }

  static bool Read(::shell::mojom::ClientProcessConnectionDataView input, ::shell::mojom::ClientProcessConnectionPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::shell::mojom::ClientProcessConnectionPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::shell::mojom::ClientProcessConnection, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::shell::mojom::internal::ClientProcessConnection_Data);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::shell::mojom::internal::ClientProcessConnection_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::shell::mojom::internal::ClientProcessConnection_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::service, input, custom_context)) in_service = CallWithContext(Traits::service, input, custom_context);
      mojo::internal::Serialize<mojo::ScopedMessagePipeHandle>(
          in_service, &result->service, context);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          !mojo::internal::IsHandleOrInterfaceValid(result->service),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
          "invalid service in ClientProcessConnection struct");
      decltype(CallWithContext(Traits::pid_receiver_request, input, custom_context)) in_pid_receiver_request = CallWithContext(Traits::pid_receiver_request, input, custom_context);
      mojo::internal::Serialize<mojo::ScopedMessagePipeHandle>(
          in_pid_receiver_request, &result->pid_receiver_request, context);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          !mojo::internal::IsHandleOrInterfaceValid(result->pid_receiver_request),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
          "invalid pid_receiver_request in ClientProcessConnection struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::shell::mojom::internal::ClientProcessConnection_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::shell::mojom::ClientProcessConnectionDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // SERVICES_SHELL_PUBLIC_INTERFACES_CONNECTOR_MOJOM_H_
// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef IPC_IPC_MOJOM_H_
#define IPC_IPC_MOJOM_H_

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
#include "ipc/ipc.mojom-shared.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"


namespace IPC {
namespace mojom {
class GenericInterface;
using GenericInterfacePtr = mojo::InterfacePtr<GenericInterface>;
using GenericInterfacePtrInfo = mojo::InterfacePtrInfo<GenericInterface>;
using GenericInterfaceRequest = mojo::InterfaceRequest<GenericInterface>;
using GenericInterfaceAssociatedPtr =
    mojo::AssociatedInterfacePtr<GenericInterface>;
using GenericInterfaceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<GenericInterface>;
using GenericInterfaceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<GenericInterface>;

class Channel;
using ChannelPtr = mojo::InterfacePtr<Channel>;
using ChannelPtrInfo = mojo::InterfacePtrInfo<Channel>;
using ChannelRequest = mojo::InterfaceRequest<Channel>;
using ChannelAssociatedPtr =
    mojo::AssociatedInterfacePtr<Channel>;
using ChannelAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Channel>;
using ChannelAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Channel>;

class ChannelBootstrap;
using ChannelBootstrapPtr = mojo::InterfacePtr<ChannelBootstrap>;
using ChannelBootstrapPtrInfo = mojo::InterfacePtrInfo<ChannelBootstrap>;
using ChannelBootstrapRequest = mojo::InterfaceRequest<ChannelBootstrap>;
using ChannelBootstrapAssociatedPtr =
    mojo::AssociatedInterfacePtr<ChannelBootstrap>;
using ChannelBootstrapAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ChannelBootstrap>;
using ChannelBootstrapAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ChannelBootstrap>;

class SerializedHandle;
class SerializedHandleDataView;
using SerializedHandlePtr = mojo::StructPtr<SerializedHandle>;


class GenericInterfaceProxy;
class GenericInterfaceStub;

class GenericInterfaceRequestValidator;

class  GenericInterface {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = GenericInterfaceProxy;
  using Stub_ = GenericInterfaceStub;

  using RequestValidator_ = GenericInterfaceRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~GenericInterface() {}
};

class ChannelProxy;
class ChannelStub;

class ChannelRequestValidator;

class  Channel {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = true;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = ChannelProxy;
  using Stub_ = ChannelStub;

  using RequestValidator_ = ChannelRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~Channel() {}

  virtual void SetPeerPid(int32_t pid) = 0;

  virtual void Receive(mojo::Array<uint8_t> data, mojo::Array<SerializedHandlePtr> handles) = 0;

  virtual void GetAssociatedInterface(const mojo::String& name, GenericInterfaceAssociatedRequest request) = 0;
};

class ChannelBootstrapProxy;
class ChannelBootstrapStub;

class ChannelBootstrapRequestValidator;

class  ChannelBootstrap {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = ChannelBootstrapProxy;
  using Stub_ = ChannelBootstrapStub;

  using RequestValidator_ = ChannelBootstrapRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~ChannelBootstrap() {}
};

class  GenericInterfaceProxy
    : public GenericInterface,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit GenericInterfaceProxy(mojo::MessageReceiverWithResponder* receiver);

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class  ChannelProxy
    : public Channel,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit ChannelProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetPeerPid(int32_t pid) override;
  void Receive(mojo::Array<uint8_t> data, mojo::Array<SerializedHandlePtr> handles) override;
  void GetAssociatedInterface(const mojo::String& name, GenericInterfaceAssociatedRequest request) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class  ChannelBootstrapProxy
    : public ChannelBootstrap,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit ChannelBootstrapProxy(mojo::MessageReceiverWithResponder* receiver);

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class  GenericInterfaceStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  GenericInterfaceStub();
  ~GenericInterfaceStub() override;
  void set_sink(GenericInterface* sink) { sink_ = sink; }
  GenericInterface* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  GenericInterface* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  ChannelStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  ChannelStub();
  ~ChannelStub() override;
  void set_sink(Channel* sink) { sink_ = sink; }
  Channel* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  Channel* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  ChannelBootstrapStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  ChannelBootstrapStub();
  ~ChannelBootstrapStub() override;
  void set_sink(ChannelBootstrap* sink) { sink_ = sink; }
  ChannelBootstrap* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  ChannelBootstrap* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  GenericInterfaceRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit GenericInterfaceRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  ChannelRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit ChannelRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  ChannelBootstrapRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit ChannelBootstrapRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





class  SerializedHandle {
 public:
  using DataView = SerializedHandleDataView;
  using Data_ = internal::SerializedHandle_Data;using Type = SerializedHandle_Type;

  static SerializedHandlePtr New();

  template <typename U>
  static SerializedHandlePtr From(const U& u) {
    return mojo::TypeConverter<SerializedHandlePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SerializedHandle>::Convert(*this);
  }

  SerializedHandle();
  ~SerializedHandle();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SerializedHandlePtr>
  SerializedHandlePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SerializedHandle>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        SerializedHandlePtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        SerializedHandlePtr, mojo::Array<uint8_t>>(
            input, output);
  }

  mojo::ScopedHandle the_handle;
  SerializedHandle::Type type;
 private:
  DISALLOW_COPY_AND_ASSIGN(SerializedHandle);
};

class SerializedHandleDataView {
 public:
  SerializedHandleDataView() {}

  SerializedHandleDataView(
      internal::SerializedHandle_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  mojo::ScopedHandle TakeTheHandle() {
    mojo::ScopedHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedHandle>(
            &data_->the_handle, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::IPC::mojom::SerializedHandle::Type>(
        data_value, output);
  }

  ::IPC::mojom::SerializedHandle::Type type() const {
    return static_cast<::IPC::mojom::SerializedHandle::Type>(data_->type);
  }
 private:
  internal::SerializedHandle_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace IPC

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::IPC::mojom::SerializedHandleDataView> {
  using MojomType = ::IPC::mojom::SerializedHandlePtr;
};
}  // namespace internal
}  // namespace mojo

namespace IPC {
namespace mojom {


template <typename StructPtrType>
SerializedHandlePtr SerializedHandle::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->the_handle = mojo::internal::Clone(the_handle);
  rv->type = mojo::internal::Clone(type);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SerializedHandle>::value>::type*>
bool SerializedHandle::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->the_handle, other.the_handle))
    return false;
  if (!mojo::internal::Equals(this->type, other.type))
    return false;
  return true;
}




}  // namespace mojom
}  // namespace IPC

namespace mojo {


template <>
struct  StructTraits<::IPC::mojom::SerializedHandle, ::IPC::mojom::SerializedHandlePtr> {
  static bool IsNull(const ::IPC::mojom::SerializedHandlePtr& input) { return !input; }
  static void SetToNull(::IPC::mojom::SerializedHandlePtr* output) { output->reset(); }
  static decltype(::IPC::mojom::SerializedHandle::the_handle)& the_handle(
      ::IPC::mojom::SerializedHandlePtr& input) {
    return input->the_handle;
  }
  static decltype(::IPC::mojom::SerializedHandle::type) type(
      const ::IPC::mojom::SerializedHandlePtr& input) {
    return input->type;
  }

  static bool Read(::IPC::mojom::SerializedHandleDataView input, ::IPC::mojom::SerializedHandlePtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::IPC::mojom::SerializedHandlePtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::IPC::mojom::SerializedHandle, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::IPC::mojom::internal::SerializedHandle_Data);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::IPC::mojom::internal::SerializedHandle_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::IPC::mojom::internal::SerializedHandle_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::the_handle, input, custom_context)) in_the_handle = CallWithContext(Traits::the_handle, input, custom_context);
      mojo::internal::Serialize<mojo::ScopedHandle>(
          in_the_handle, &result->the_handle, context);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          !mojo::internal::IsHandleOrInterfaceValid(result->the_handle),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
          "invalid the_handle in SerializedHandle struct");
      mojo::internal::Serialize<::IPC::mojom::SerializedHandle::Type>(
          CallWithContext(Traits::type, input, custom_context), &result->type);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::IPC::mojom::internal::SerializedHandle_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::IPC::mojom::SerializedHandleDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // IPC_IPC_MOJOM_H_
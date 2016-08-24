// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_BACKGROUND_SYNC_BACKGROUND_SYNC_MOJOM_BLINK_H_
#define THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_BACKGROUND_SYNC_BACKGROUND_SYNC_MOJOM_BLINK_H_

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
#include "third_party/WebKit/public/platform/modules/background_sync/background_sync.mojom-shared.h"
#include "third_party/WebKit/public/platform/modules/serviceworker/service_worker_event_status.mojom-blink.h"
#include "mojo/public/cpp/bindings/wtf_array.h"
#include "mojo/public/cpp/bindings/wtf_map.h"
#include "third_party/WebKit/Source/wtf/Optional.h"
#include "third_party/WebKit/Source/wtf/text/WTFString.h"
#include "third_party/WebKit/Source/platform/weborigin/KURL.h"
#include "cc/surfaces/surface_sequence.h"
#include "third_party/WebKit/Source/platform/weborigin/SecurityOrigin.h"
#include "cc/surfaces/surface_id.h"
#include "third_party/WebKit/public/platform/WebCommon.h"


namespace blink {
namespace mojom {
namespace blink {
using BackgroundSyncNetworkState = BackgroundSyncNetworkState;  // Alias for definition in the parent namespace.
using BackgroundSyncError = BackgroundSyncError;  // Alias for definition in the parent namespace.
using BackgroundSyncState = BackgroundSyncState;  // Alias for definition in the parent namespace.
using BackgroundSyncEventLastChance = BackgroundSyncEventLastChance;  // Alias for definition in the parent namespace.
class BackgroundSyncService;
using BackgroundSyncServicePtr = mojo::InterfacePtr<BackgroundSyncService>;
using BackgroundSyncServicePtrInfo = mojo::InterfacePtrInfo<BackgroundSyncService>;
using BackgroundSyncServiceRequest = mojo::InterfaceRequest<BackgroundSyncService>;
using BackgroundSyncServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<BackgroundSyncService>;
using BackgroundSyncServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<BackgroundSyncService>;
using BackgroundSyncServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<BackgroundSyncService>;

class BackgroundSyncServiceClient;
using BackgroundSyncServiceClientPtr = mojo::InterfacePtr<BackgroundSyncServiceClient>;
using BackgroundSyncServiceClientPtrInfo = mojo::InterfacePtrInfo<BackgroundSyncServiceClient>;
using BackgroundSyncServiceClientRequest = mojo::InterfaceRequest<BackgroundSyncServiceClient>;
using BackgroundSyncServiceClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<BackgroundSyncServiceClient>;
using BackgroundSyncServiceClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<BackgroundSyncServiceClient>;
using BackgroundSyncServiceClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<BackgroundSyncServiceClient>;

class SyncRegistration;
class SyncRegistrationDataView;
using SyncRegistrationPtr = mojo::InlinedStructPtr<SyncRegistration>;


class BackgroundSyncServiceProxy;
class BackgroundSyncServiceStub;

class BackgroundSyncServiceRequestValidator;
class BackgroundSyncServiceResponseValidator;

class BLINK_PLATFORM_EXPORT BackgroundSyncService {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = BackgroundSyncServiceProxy;
  using Stub_ = BackgroundSyncServiceStub;

  using RequestValidator_ = BackgroundSyncServiceRequestValidator;
  using ResponseValidator_ = BackgroundSyncServiceResponseValidator;
  virtual ~BackgroundSyncService() {}


  using RegisterCallback = base::Callback<void(BackgroundSyncError, SyncRegistrationPtr)>;
  virtual void Register(SyncRegistrationPtr options, int64_t service_worker_registration_id, const RegisterCallback& callback) = 0;


  using GetRegistrationsCallback = base::Callback<void(BackgroundSyncError, mojo::WTFArray<SyncRegistrationPtr>)>;
  virtual void GetRegistrations(int64_t service_worker_registration_id, const GetRegistrationsCallback& callback) = 0;
};

class BackgroundSyncServiceClientProxy;
class BackgroundSyncServiceClientStub;

class BackgroundSyncServiceClientRequestValidator;
class BackgroundSyncServiceClientResponseValidator;

class BLINK_PLATFORM_EXPORT BackgroundSyncServiceClient {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = BackgroundSyncServiceClientProxy;
  using Stub_ = BackgroundSyncServiceClientStub;

  using RequestValidator_ = BackgroundSyncServiceClientRequestValidator;
  using ResponseValidator_ = BackgroundSyncServiceClientResponseValidator;
  virtual ~BackgroundSyncServiceClient() {}


  using SyncCallback = base::Callback<void(::blink::mojom::blink::ServiceWorkerEventStatus)>;
  virtual void Sync(const WTF::String& tag, BackgroundSyncEventLastChance last_chance, const SyncCallback& callback) = 0;
};

class BLINK_PLATFORM_EXPORT BackgroundSyncServiceProxy
    : public BackgroundSyncService,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit BackgroundSyncServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void Register(SyncRegistrationPtr options, int64_t service_worker_registration_id, const RegisterCallback& callback) override;
  void GetRegistrations(int64_t service_worker_registration_id, const GetRegistrationsCallback& callback) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class BLINK_PLATFORM_EXPORT BackgroundSyncServiceClientProxy
    : public BackgroundSyncServiceClient,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit BackgroundSyncServiceClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void Sync(const WTF::String& tag, BackgroundSyncEventLastChance last_chance, const SyncCallback& callback) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class BLINK_PLATFORM_EXPORT BackgroundSyncServiceStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  BackgroundSyncServiceStub();
  ~BackgroundSyncServiceStub() override;
  void set_sink(BackgroundSyncService* sink) { sink_ = sink; }
  BackgroundSyncService* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  BackgroundSyncService* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class BLINK_PLATFORM_EXPORT BackgroundSyncServiceClientStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  BackgroundSyncServiceClientStub();
  ~BackgroundSyncServiceClientStub() override;
  void set_sink(BackgroundSyncServiceClient* sink) { sink_ = sink; }
  BackgroundSyncServiceClient* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  BackgroundSyncServiceClient* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class BLINK_PLATFORM_EXPORT BackgroundSyncServiceRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit BackgroundSyncServiceRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT BackgroundSyncServiceClientRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit BackgroundSyncServiceClientRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT BackgroundSyncServiceResponseValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit BackgroundSyncServiceResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT BackgroundSyncServiceClientResponseValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit BackgroundSyncServiceClientResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};


class BLINK_PLATFORM_EXPORT SyncRegistration {
 public:
  using DataView = SyncRegistrationDataView;
  using Data_ = internal::SyncRegistration_Data;

  static SyncRegistrationPtr New();

  template <typename U>
  static SyncRegistrationPtr From(const U& u) {
    return mojo::TypeConverter<SyncRegistrationPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SyncRegistration>::Convert(*this);
  }

  SyncRegistration();
  ~SyncRegistration();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SyncRegistrationPtr>
  SyncRegistrationPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SyncRegistration>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::WTFArray<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        SyncRegistrationPtr, mojo::WTFArray<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::WTFArray<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        SyncRegistrationPtr, mojo::WTFArray<uint8_t>>(
            input, output);
  }

  int64_t id;
  WTF::String tag;
  BackgroundSyncNetworkState network_state;
};

class SyncRegistrationDataView {
 public:
  SyncRegistrationDataView() {}

  SyncRegistrationDataView(
      internal::SyncRegistration_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t id() const {
    return data_->id;
  }
  inline void GetTagDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadTag(UserType* output) {
    auto pointer = data_->tag.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  template <typename UserType>
  bool ReadNetworkState(UserType* output) const {
    auto data_value = data_->network_state;
    return mojo::internal::Deserialize<::blink::mojom::blink::BackgroundSyncNetworkState>(
        data_value, output);
  }

  ::blink::mojom::blink::BackgroundSyncNetworkState network_state() const {
    return static_cast<::blink::mojom::blink::BackgroundSyncNetworkState>(data_->network_state);
  }
 private:
  internal::SyncRegistration_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::blink::mojom::blink::SyncRegistrationDataView> {
  using MojomType = ::blink::mojom::blink::SyncRegistrationPtr;
};
}  // namespace internal
}  // namespace mojo

namespace blink {
namespace mojom {
namespace blink {





template <typename StructPtrType>
SyncRegistrationPtr SyncRegistration::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->id = mojo::internal::Clone(id);
  rv->tag = mojo::internal::Clone(tag);
  rv->network_state = mojo::internal::Clone(network_state);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SyncRegistration>::value>::type*>
bool SyncRegistration::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->id, other.id))
    return false;
  if (!mojo::internal::Equals(this->tag, other.tag))
    return false;
  if (!mojo::internal::Equals(this->network_state, other.network_state))
    return false;
  return true;
}

inline void SyncRegistrationDataView::GetTagDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->tag.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::blink::mojom::blink::SyncRegistration, ::blink::mojom::blink::SyncRegistrationPtr> {
  static bool IsNull(const ::blink::mojom::blink::SyncRegistrationPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::SyncRegistrationPtr* output) { output->reset(); }
  static decltype(::blink::mojom::blink::SyncRegistration::id) id(
      const ::blink::mojom::blink::SyncRegistrationPtr& input) {
    return input->id;
  }
  static decltype(::blink::mojom::blink::SyncRegistration::tag)& tag(
      ::blink::mojom::blink::SyncRegistrationPtr& input) {
    return input->tag;
  }
  static decltype(::blink::mojom::blink::SyncRegistration::network_state) network_state(
      const ::blink::mojom::blink::SyncRegistrationPtr& input) {
    return input->network_state;
  }

  static bool Read(::blink::mojom::blink::SyncRegistrationDataView input, ::blink::mojom::blink::SyncRegistrationPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::blink::SyncRegistrationPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::blink::SyncRegistration, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::blink::mojom::internal::SyncRegistration_Data);
    decltype(CallWithContext(Traits::tag, input, custom_context)) in_tag = CallWithContext(Traits::tag, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_tag, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::SyncRegistration_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::blink::mojom::internal::SyncRegistration_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->id = CallWithContext(Traits::id, input, custom_context);
      decltype(CallWithContext(Traits::tag, input, custom_context)) in_tag = CallWithContext(Traits::tag, input, custom_context);
      typename decltype(result->tag)::BaseType* tag_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_tag, buffer, &tag_ptr, context);
      result->tag.Set(tag_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->tag.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null tag in SyncRegistration struct");
      mojo::internal::Serialize<::blink::mojom::blink::BackgroundSyncNetworkState>(
          CallWithContext(Traits::network_state, input, custom_context), &result->network_state);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::SyncRegistration_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::blink::SyncRegistrationDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_BACKGROUND_SYNC_BACKGROUND_SYNC_MOJOM_BLINK_H_
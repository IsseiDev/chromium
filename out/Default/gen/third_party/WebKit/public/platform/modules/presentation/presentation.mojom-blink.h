// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_PRESENTATION_PRESENTATION_MOJOM_BLINK_H_
#define THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_PRESENTATION_PRESENTATION_MOJOM_BLINK_H_

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
#include "third_party/WebKit/public/platform/modules/presentation/presentation.mojom-shared.h"
#include "mojo/public/cpp/bindings/wtf_array.h"
#include "mojo/public/cpp/bindings/wtf_map.h"
#include "third_party/WebKit/Source/wtf/Optional.h"
#include "third_party/WebKit/Source/wtf/text/WTFString.h"
#include "third_party/WebKit/Source/platform/weborigin/KURL.h"
#include "third_party/WebKit/Source/platform/weborigin/SecurityOrigin.h"
#include "third_party/WebKit/public/platform/WebCommon.h"


namespace blink {
namespace mojom {
namespace blink {
using PresentationConnectionState = PresentationConnectionState;  // Alias for definition in the parent namespace.
using PresentationConnectionCloseReason = PresentationConnectionCloseReason;  // Alias for definition in the parent namespace.
using PresentationErrorType = PresentationErrorType;  // Alias for definition in the parent namespace.
using PresentationMessageType = PresentationMessageType;  // Alias for definition in the parent namespace.
class PresentationService;
using PresentationServicePtr = mojo::InterfacePtr<PresentationService>;
using PresentationServicePtrInfo = mojo::InterfacePtrInfo<PresentationService>;
using PresentationServiceRequest = mojo::InterfaceRequest<PresentationService>;
using PresentationServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<PresentationService>;
using PresentationServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PresentationService>;
using PresentationServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PresentationService>;

class PresentationServiceClient;
using PresentationServiceClientPtr = mojo::InterfacePtr<PresentationServiceClient>;
using PresentationServiceClientPtrInfo = mojo::InterfacePtrInfo<PresentationServiceClient>;
using PresentationServiceClientRequest = mojo::InterfaceRequest<PresentationServiceClient>;
using PresentationServiceClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<PresentationServiceClient>;
using PresentationServiceClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PresentationServiceClient>;
using PresentationServiceClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PresentationServiceClient>;

class PresentationSessionInfo;
class PresentationSessionInfoDataView;
using PresentationSessionInfoPtr = mojo::InlinedStructPtr<PresentationSessionInfo>;

class PresentationError;
class PresentationErrorDataView;
using PresentationErrorPtr = mojo::InlinedStructPtr<PresentationError>;

class SessionMessage;
class SessionMessageDataView;
using SessionMessagePtr = mojo::StructPtr<SessionMessage>;


class PresentationServiceProxy;
class PresentationServiceStub;

class PresentationServiceRequestValidator;
class PresentationServiceResponseValidator;

class BLINK_PLATFORM_EXPORT PresentationService {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = PresentationServiceProxy;
  using Stub_ = PresentationServiceStub;

  using RequestValidator_ = PresentationServiceRequestValidator;
  using ResponseValidator_ = PresentationServiceResponseValidator;
  virtual ~PresentationService() {}

  virtual void SetClient(PresentationServiceClientPtr client) = 0;

  virtual void SetDefaultPresentationURL(const WTF::String& url) = 0;

  virtual void ListenForScreenAvailability(const WTF::String& url) = 0;

  virtual void StopListeningForScreenAvailability(const WTF::String& url) = 0;


  using StartSessionCallback = base::Callback<void(PresentationSessionInfoPtr, PresentationErrorPtr)>;
  virtual void StartSession(const WTF::String& presentation_url, const StartSessionCallback& callback) = 0;


  using JoinSessionCallback = base::Callback<void(PresentationSessionInfoPtr, PresentationErrorPtr)>;
  virtual void JoinSession(const WTF::String& presentation_url, const WTF::String& presentation_id, const JoinSessionCallback& callback) = 0;


  using SendSessionMessageCallback = base::Callback<void(bool)>;
  virtual void SendSessionMessage(PresentationSessionInfoPtr sessionInfo, SessionMessagePtr message_request, const SendSessionMessageCallback& callback) = 0;

  virtual void CloseConnection(const WTF::String& presentation_url, const WTF::String& presentation_id) = 0;

  virtual void Terminate(const WTF::String& presentation_url, const WTF::String& presentation_id) = 0;

  virtual void ListenForSessionMessages(PresentationSessionInfoPtr sessionInfo) = 0;
};

class PresentationServiceClientProxy;
class PresentationServiceClientStub;

class PresentationServiceClientRequestValidator;

class BLINK_PLATFORM_EXPORT PresentationServiceClient {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = PresentationServiceClientProxy;
  using Stub_ = PresentationServiceClientStub;

  using RequestValidator_ = PresentationServiceClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~PresentationServiceClient() {}

  virtual void OnScreenAvailabilityNotSupported(const WTF::String& url) = 0;

  virtual void OnScreenAvailabilityUpdated(const WTF::String& url, bool available) = 0;

  virtual void OnConnectionStateChanged(PresentationSessionInfoPtr connection, PresentationConnectionState newState) = 0;

  virtual void OnConnectionClosed(PresentationSessionInfoPtr connection, PresentationConnectionCloseReason reason, const WTF::String& message) = 0;

  virtual void OnSessionMessagesReceived(PresentationSessionInfoPtr sessionInfo, WTF::Vector<SessionMessagePtr> messages) = 0;

  virtual void OnDefaultSessionStarted(PresentationSessionInfoPtr sessionInfo) = 0;
};

class BLINK_PLATFORM_EXPORT PresentationServiceProxy
    : public PresentationService,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit PresentationServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetClient(PresentationServiceClientPtr client) override;
  void SetDefaultPresentationURL(const WTF::String& url) override;
  void ListenForScreenAvailability(const WTF::String& url) override;
  void StopListeningForScreenAvailability(const WTF::String& url) override;
  void StartSession(const WTF::String& presentation_url, const StartSessionCallback& callback) override;
  void JoinSession(const WTF::String& presentation_url, const WTF::String& presentation_id, const JoinSessionCallback& callback) override;
  void SendSessionMessage(PresentationSessionInfoPtr sessionInfo, SessionMessagePtr message_request, const SendSessionMessageCallback& callback) override;
  void CloseConnection(const WTF::String& presentation_url, const WTF::String& presentation_id) override;
  void Terminate(const WTF::String& presentation_url, const WTF::String& presentation_id) override;
  void ListenForSessionMessages(PresentationSessionInfoPtr sessionInfo) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class BLINK_PLATFORM_EXPORT PresentationServiceClientProxy
    : public PresentationServiceClient,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit PresentationServiceClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnScreenAvailabilityNotSupported(const WTF::String& url) override;
  void OnScreenAvailabilityUpdated(const WTF::String& url, bool available) override;
  void OnConnectionStateChanged(PresentationSessionInfoPtr connection, PresentationConnectionState newState) override;
  void OnConnectionClosed(PresentationSessionInfoPtr connection, PresentationConnectionCloseReason reason, const WTF::String& message) override;
  void OnSessionMessagesReceived(PresentationSessionInfoPtr sessionInfo, WTF::Vector<SessionMessagePtr> messages) override;
  void OnDefaultSessionStarted(PresentationSessionInfoPtr sessionInfo) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class BLINK_PLATFORM_EXPORT PresentationServiceStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  PresentationServiceStub();
  ~PresentationServiceStub() override;
  void set_sink(PresentationService* sink) { sink_ = sink; }
  PresentationService* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  PresentationService* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class BLINK_PLATFORM_EXPORT PresentationServiceClientStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  PresentationServiceClientStub();
  ~PresentationServiceClientStub() override;
  void set_sink(PresentationServiceClient* sink) { sink_ = sink; }
  PresentationServiceClient* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  PresentationServiceClient* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class BLINK_PLATFORM_EXPORT PresentationServiceRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit PresentationServiceRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT PresentationServiceClientRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit PresentationServiceClientRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT PresentationServiceResponseValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit PresentationServiceResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};


class BLINK_PLATFORM_EXPORT PresentationSessionInfo {
 public:
  using DataView = PresentationSessionInfoDataView;
  using Data_ = internal::PresentationSessionInfo_Data;

  static PresentationSessionInfoPtr New();

  template <typename U>
  static PresentationSessionInfoPtr From(const U& u) {
    return mojo::TypeConverter<PresentationSessionInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PresentationSessionInfo>::Convert(*this);
  }

  PresentationSessionInfo();
  ~PresentationSessionInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PresentationSessionInfoPtr>
  PresentationSessionInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PresentationSessionInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::WTFArray<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        PresentationSessionInfoPtr, mojo::WTFArray<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::WTFArray<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        PresentationSessionInfoPtr, mojo::WTFArray<uint8_t>>(
            input, output);
  }

  WTF::String url;
  WTF::String id;
};

class PresentationSessionInfoDataView {
 public:
  PresentationSessionInfoDataView() {}

  PresentationSessionInfoDataView(
      internal::PresentationSessionInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUrlDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadUrl(UserType* output) {
    auto pointer = data_->url.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadId(UserType* output) {
    auto pointer = data_->id.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::PresentationSessionInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::blink::mojom::blink::PresentationSessionInfoDataView> {
  using MojomType = ::blink::mojom::blink::PresentationSessionInfoPtr;
};
}  // namespace internal
}  // namespace mojo

namespace blink {
namespace mojom {
namespace blink {



class BLINK_PLATFORM_EXPORT PresentationError {
 public:
  using DataView = PresentationErrorDataView;
  using Data_ = internal::PresentationError_Data;

  static PresentationErrorPtr New();

  template <typename U>
  static PresentationErrorPtr From(const U& u) {
    return mojo::TypeConverter<PresentationErrorPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PresentationError>::Convert(*this);
  }

  PresentationError();
  ~PresentationError();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PresentationErrorPtr>
  PresentationErrorPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PresentationError>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::WTFArray<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        PresentationErrorPtr, mojo::WTFArray<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::WTFArray<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        PresentationErrorPtr, mojo::WTFArray<uint8_t>>(
            input, output);
  }

  PresentationErrorType error_type;
  WTF::String message;
};

class PresentationErrorDataView {
 public:
  PresentationErrorDataView() {}

  PresentationErrorDataView(
      internal::PresentationError_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadErrorType(UserType* output) const {
    auto data_value = data_->error_type;
    return mojo::internal::Deserialize<::blink::mojom::blink::PresentationErrorType>(
        data_value, output);
  }

  ::blink::mojom::blink::PresentationErrorType error_type() const {
    return static_cast<::blink::mojom::blink::PresentationErrorType>(data_->error_type);
  }
  inline void GetMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadMessage(UserType* output) {
    auto pointer = data_->message.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::PresentationError_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::blink::mojom::blink::PresentationErrorDataView> {
  using MojomType = ::blink::mojom::blink::PresentationErrorPtr;
};
}  // namespace internal
}  // namespace mojo

namespace blink {
namespace mojom {
namespace blink {








class BLINK_PLATFORM_EXPORT SessionMessage {
 public:
  using DataView = SessionMessageDataView;
  using Data_ = internal::SessionMessage_Data;

  static SessionMessagePtr New();

  template <typename U>
  static SessionMessagePtr From(const U& u) {
    return mojo::TypeConverter<SessionMessagePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SessionMessage>::Convert(*this);
  }

  SessionMessage();
  ~SessionMessage();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SessionMessagePtr>
  SessionMessagePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SessionMessage>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::WTFArray<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        SessionMessagePtr, mojo::WTFArray<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::WTFArray<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        SessionMessagePtr, mojo::WTFArray<uint8_t>>(
            input, output);
  }

  PresentationMessageType type;
  WTF::String message;
  WTF::Optional<WTF::Vector<uint8_t>> data;
};

class SessionMessageDataView {
 public:
  SessionMessageDataView() {}

  SessionMessageDataView(
      internal::SessionMessage_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::blink::mojom::blink::PresentationMessageType>(
        data_value, output);
  }

  ::blink::mojom::blink::PresentationMessageType type() const {
    return static_cast<::blink::mojom::blink::PresentationMessageType>(data_->type);
  }
  inline void GetMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadMessage(UserType* output) {
    auto pointer = data_->message.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  bool ReadData(UserType* output) {
    auto pointer = data_->data.Get();
    return mojo::internal::Deserialize<mojo::Array<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::SessionMessage_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::blink::mojom::blink::SessionMessageDataView> {
  using MojomType = ::blink::mojom::blink::SessionMessagePtr;
};
}  // namespace internal
}  // namespace mojo

namespace blink {
namespace mojom {
namespace blink {


template <typename StructPtrType>
PresentationSessionInfoPtr PresentationSessionInfo::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->url = mojo::internal::Clone(url);
  rv->id = mojo::internal::Clone(id);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PresentationSessionInfo>::value>::type*>
bool PresentationSessionInfo::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->url, other.url))
    return false;
  if (!mojo::internal::Equals(this->id, other.id))
    return false;
  return true;
}

inline void PresentationSessionInfoDataView::GetUrlDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->url.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PresentationSessionInfoDataView::GetIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->id.Get();
  *output = mojo::StringDataView(pointer, context_);
}

template <typename StructPtrType>
PresentationErrorPtr PresentationError::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->error_type = mojo::internal::Clone(error_type);
  rv->message = mojo::internal::Clone(message);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PresentationError>::value>::type*>
bool PresentationError::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->error_type, other.error_type))
    return false;
  if (!mojo::internal::Equals(this->message, other.message))
    return false;
  return true;
}

inline void PresentationErrorDataView::GetMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->message.Get();
  *output = mojo::StringDataView(pointer, context_);
}

template <typename StructPtrType>
SessionMessagePtr SessionMessage::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->type = mojo::internal::Clone(type);
  rv->message = mojo::internal::Clone(message);
  rv->data = mojo::internal::Clone(data);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SessionMessage>::value>::type*>
bool SessionMessage::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->type, other.type))
    return false;
  if (!mojo::internal::Equals(this->message, other.message))
    return false;
  if (!mojo::internal::Equals(this->data, other.data))
    return false;
  return true;
}

inline void SessionMessageDataView::GetMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->message.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void SessionMessageDataView::GetDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}



}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::blink::mojom::blink::PresentationSessionInfo, ::blink::mojom::blink::PresentationSessionInfoPtr> {
  static bool IsNull(const ::blink::mojom::blink::PresentationSessionInfoPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::PresentationSessionInfoPtr* output) { output->reset(); }
  static decltype(::blink::mojom::blink::PresentationSessionInfo::url)& url(
      ::blink::mojom::blink::PresentationSessionInfoPtr& input) {
    return input->url;
  }
  static decltype(::blink::mojom::blink::PresentationSessionInfo::id)& id(
      ::blink::mojom::blink::PresentationSessionInfoPtr& input) {
    return input->id;
  }

  static bool Read(::blink::mojom::blink::PresentationSessionInfoDataView input, ::blink::mojom::blink::PresentationSessionInfoPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::blink::PresentationSessionInfoPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::blink::PresentationSessionInfo, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::blink::mojom::internal::PresentationSessionInfo_Data);
    decltype(CallWithContext(Traits::url, input, custom_context)) in_url = CallWithContext(Traits::url, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_url, context);
    decltype(CallWithContext(Traits::id, input, custom_context)) in_id = CallWithContext(Traits::id, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_id, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::PresentationSessionInfo_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::blink::mojom::internal::PresentationSessionInfo_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::url, input, custom_context)) in_url = CallWithContext(Traits::url, input, custom_context);
      typename decltype(result->url)::BaseType* url_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_url, buffer, &url_ptr, context);
      result->url.Set(url_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->url.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null url in PresentationSessionInfo struct");
      decltype(CallWithContext(Traits::id, input, custom_context)) in_id = CallWithContext(Traits::id, input, custom_context);
      typename decltype(result->id)::BaseType* id_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_id, buffer, &id_ptr, context);
      result->id.Set(id_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->id.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null id in PresentationSessionInfo struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::PresentationSessionInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::blink::PresentationSessionInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::blink::mojom::blink::PresentationError, ::blink::mojom::blink::PresentationErrorPtr> {
  static bool IsNull(const ::blink::mojom::blink::PresentationErrorPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::PresentationErrorPtr* output) { output->reset(); }
  static decltype(::blink::mojom::blink::PresentationError::error_type) error_type(
      const ::blink::mojom::blink::PresentationErrorPtr& input) {
    return input->error_type;
  }
  static decltype(::blink::mojom::blink::PresentationError::message)& message(
      ::blink::mojom::blink::PresentationErrorPtr& input) {
    return input->message;
  }

  static bool Read(::blink::mojom::blink::PresentationErrorDataView input, ::blink::mojom::blink::PresentationErrorPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::blink::PresentationErrorPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::blink::PresentationError, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::blink::mojom::internal::PresentationError_Data);
    decltype(CallWithContext(Traits::message, input, custom_context)) in_message = CallWithContext(Traits::message, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_message, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::PresentationError_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::blink::mojom::internal::PresentationError_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      mojo::internal::Serialize<::blink::mojom::blink::PresentationErrorType>(
          CallWithContext(Traits::error_type, input, custom_context), &result->error_type);
      decltype(CallWithContext(Traits::message, input, custom_context)) in_message = CallWithContext(Traits::message, input, custom_context);
      typename decltype(result->message)::BaseType* message_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_message, buffer, &message_ptr, context);
      result->message.Set(message_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->message.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null message in PresentationError struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::PresentationError_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::blink::PresentationErrorDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::blink::mojom::blink::SessionMessage, ::blink::mojom::blink::SessionMessagePtr> {
  static bool IsNull(const ::blink::mojom::blink::SessionMessagePtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::SessionMessagePtr* output) { output->reset(); }
  static decltype(::blink::mojom::blink::SessionMessage::type) type(
      const ::blink::mojom::blink::SessionMessagePtr& input) {
    return input->type;
  }
  static decltype(::blink::mojom::blink::SessionMessage::message)& message(
      ::blink::mojom::blink::SessionMessagePtr& input) {
    return input->message;
  }
  static decltype(::blink::mojom::blink::SessionMessage::data)& data(
      ::blink::mojom::blink::SessionMessagePtr& input) {
    return input->data;
  }

  static bool Read(::blink::mojom::blink::SessionMessageDataView input, ::blink::mojom::blink::SessionMessagePtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::blink::SessionMessagePtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::blink::SessionMessage, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::blink::mojom::internal::SessionMessage_Data);
    decltype(CallWithContext(Traits::message, input, custom_context)) in_message = CallWithContext(Traits::message, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_message, context);
    decltype(CallWithContext(Traits::data, input, custom_context)) in_data = CallWithContext(Traits::data, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<uint8_t>>(
        in_data, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::SessionMessage_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::blink::mojom::internal::SessionMessage_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      mojo::internal::Serialize<::blink::mojom::blink::PresentationMessageType>(
          CallWithContext(Traits::type, input, custom_context), &result->type);
      decltype(CallWithContext(Traits::message, input, custom_context)) in_message = CallWithContext(Traits::message, input, custom_context);
      typename decltype(result->message)::BaseType* message_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_message, buffer, &message_ptr, context);
      result->message.Set(message_ptr);
      decltype(CallWithContext(Traits::data, input, custom_context)) in_data = CallWithContext(Traits::data, input, custom_context);
      typename decltype(result->data)::BaseType* data_ptr;
      const mojo::internal::ContainerValidateParams data_validate_params(
          0, false, nullptr);
      mojo::internal::Serialize<mojo::Array<uint8_t>>(
          in_data, buffer, &data_ptr, &data_validate_params,
          context);
      result->data.Set(data_ptr);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::SessionMessage_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::blink::SessionMessageDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_PRESENTATION_PRESENTATION_MOJOM_BLINK_H_
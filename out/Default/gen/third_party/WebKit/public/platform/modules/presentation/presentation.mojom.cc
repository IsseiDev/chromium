// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "third_party/WebKit/public/platform/modules/presentation/presentation.mojom.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/logging.h"
#include "base/trace_event/trace_event.h"
#include "mojo/public/cpp/bindings/lib/message_builder.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"
#include "url/mojo/origin_struct_traits.h"
#include "url/mojo/url_gurl_struct_traits.h"
namespace blink {
namespace mojom {

namespace {

class PresentationService_SetClient_ParamsDataView {
 public:
  PresentationService_SetClient_ParamsDataView() {}

  PresentationService_SetClient_ParamsDataView(
      internal::PresentationService_SetClient_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  PresentationServiceClientPtr TakeClient() {
    PresentationServiceClientPtr result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::PresentationServiceClientPtr>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::PresentationService_SetClient_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




class PresentationService_SetDefaultPresentationURL_ParamsDataView {
 public:
  PresentationService_SetDefaultPresentationURL_ParamsDataView() {}

  PresentationService_SetDefaultPresentationURL_ParamsDataView(
      internal::PresentationService_SetDefaultPresentationURL_Params_Data* data,
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
 private:
  internal::PresentationService_SetDefaultPresentationURL_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void PresentationService_SetDefaultPresentationURL_ParamsDataView::GetUrlDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->url.Get();
  *output = mojo::StringDataView(pointer, context_);
}


class PresentationService_ListenForScreenAvailability_ParamsDataView {
 public:
  PresentationService_ListenForScreenAvailability_ParamsDataView() {}

  PresentationService_ListenForScreenAvailability_ParamsDataView(
      internal::PresentationService_ListenForScreenAvailability_Params_Data* data,
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
 private:
  internal::PresentationService_ListenForScreenAvailability_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void PresentationService_ListenForScreenAvailability_ParamsDataView::GetUrlDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->url.Get();
  *output = mojo::StringDataView(pointer, context_);
}


class PresentationService_StopListeningForScreenAvailability_ParamsDataView {
 public:
  PresentationService_StopListeningForScreenAvailability_ParamsDataView() {}

  PresentationService_StopListeningForScreenAvailability_ParamsDataView(
      internal::PresentationService_StopListeningForScreenAvailability_Params_Data* data,
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
 private:
  internal::PresentationService_StopListeningForScreenAvailability_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void PresentationService_StopListeningForScreenAvailability_ParamsDataView::GetUrlDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->url.Get();
  *output = mojo::StringDataView(pointer, context_);
}


class PresentationService_StartSession_ParamsDataView {
 public:
  PresentationService_StartSession_ParamsDataView() {}

  PresentationService_StartSession_ParamsDataView(
      internal::PresentationService_StartSession_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPresentationUrlDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadPresentationUrl(UserType* output) {
    auto pointer = data_->presentation_url.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::PresentationService_StartSession_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void PresentationService_StartSession_ParamsDataView::GetPresentationUrlDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->presentation_url.Get();
  *output = mojo::StringDataView(pointer, context_);
}

class PresentationService_StartSession_ResponseParamsDataView {
 public:
  PresentationService_StartSession_ResponseParamsDataView() {}

  PresentationService_StartSession_ResponseParamsDataView(
      internal::PresentationService_StartSession_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSessioninfoDataView(
      PresentationSessionInfoDataView* output);

  template <typename UserType>
  bool ReadSessioninfo(UserType* output) {
    auto pointer = data_->sessionInfo.Get();
    return mojo::internal::Deserialize<::blink::mojom::PresentationSessionInfoPtr>(
        pointer, output, context_);
  }
  inline void GetErrorDataView(
      PresentationErrorDataView* output);

  template <typename UserType>
  bool ReadError(UserType* output) {
    auto pointer = data_->error.Get();
    return mojo::internal::Deserialize<::blink::mojom::PresentationErrorPtr>(
        pointer, output, context_);
  }
 private:
  internal::PresentationService_StartSession_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void PresentationService_StartSession_ResponseParamsDataView::GetSessioninfoDataView(
    PresentationSessionInfoDataView* output) {
  auto pointer = data_->sessionInfo.Get();
  *output = PresentationSessionInfoDataView(pointer, context_);
}
inline void PresentationService_StartSession_ResponseParamsDataView::GetErrorDataView(
    PresentationErrorDataView* output) {
  auto pointer = data_->error.Get();
  *output = PresentationErrorDataView(pointer, context_);
}


class PresentationService_JoinSession_ParamsDataView {
 public:
  PresentationService_JoinSession_ParamsDataView() {}

  PresentationService_JoinSession_ParamsDataView(
      internal::PresentationService_JoinSession_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPresentationUrlDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadPresentationUrl(UserType* output) {
    auto pointer = data_->presentation_url.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetPresentationIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadPresentationId(UserType* output) {
    auto pointer = data_->presentation_id.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::PresentationService_JoinSession_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void PresentationService_JoinSession_ParamsDataView::GetPresentationUrlDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->presentation_url.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PresentationService_JoinSession_ParamsDataView::GetPresentationIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->presentation_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}

class PresentationService_JoinSession_ResponseParamsDataView {
 public:
  PresentationService_JoinSession_ResponseParamsDataView() {}

  PresentationService_JoinSession_ResponseParamsDataView(
      internal::PresentationService_JoinSession_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSessioninfoDataView(
      PresentationSessionInfoDataView* output);

  template <typename UserType>
  bool ReadSessioninfo(UserType* output) {
    auto pointer = data_->sessionInfo.Get();
    return mojo::internal::Deserialize<::blink::mojom::PresentationSessionInfoPtr>(
        pointer, output, context_);
  }
  inline void GetErrorDataView(
      PresentationErrorDataView* output);

  template <typename UserType>
  bool ReadError(UserType* output) {
    auto pointer = data_->error.Get();
    return mojo::internal::Deserialize<::blink::mojom::PresentationErrorPtr>(
        pointer, output, context_);
  }
 private:
  internal::PresentationService_JoinSession_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void PresentationService_JoinSession_ResponseParamsDataView::GetSessioninfoDataView(
    PresentationSessionInfoDataView* output) {
  auto pointer = data_->sessionInfo.Get();
  *output = PresentationSessionInfoDataView(pointer, context_);
}
inline void PresentationService_JoinSession_ResponseParamsDataView::GetErrorDataView(
    PresentationErrorDataView* output) {
  auto pointer = data_->error.Get();
  *output = PresentationErrorDataView(pointer, context_);
}


class PresentationService_SendSessionMessage_ParamsDataView {
 public:
  PresentationService_SendSessionMessage_ParamsDataView() {}

  PresentationService_SendSessionMessage_ParamsDataView(
      internal::PresentationService_SendSessionMessage_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSessioninfoDataView(
      PresentationSessionInfoDataView* output);

  template <typename UserType>
  bool ReadSessioninfo(UserType* output) {
    auto pointer = data_->sessionInfo.Get();
    return mojo::internal::Deserialize<::blink::mojom::PresentationSessionInfoPtr>(
        pointer, output, context_);
  }
  inline void GetMessageRequestDataView(
      SessionMessageDataView* output);

  template <typename UserType>
  bool ReadMessageRequest(UserType* output) {
    auto pointer = data_->message_request.Get();
    return mojo::internal::Deserialize<::blink::mojom::SessionMessagePtr>(
        pointer, output, context_);
  }
 private:
  internal::PresentationService_SendSessionMessage_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void PresentationService_SendSessionMessage_ParamsDataView::GetSessioninfoDataView(
    PresentationSessionInfoDataView* output) {
  auto pointer = data_->sessionInfo.Get();
  *output = PresentationSessionInfoDataView(pointer, context_);
}
inline void PresentationService_SendSessionMessage_ParamsDataView::GetMessageRequestDataView(
    SessionMessageDataView* output) {
  auto pointer = data_->message_request.Get();
  *output = SessionMessageDataView(pointer, context_);
}

class PresentationService_SendSessionMessage_ResponseParamsDataView {
 public:
  PresentationService_SendSessionMessage_ResponseParamsDataView() {}

  PresentationService_SendSessionMessage_ResponseParamsDataView(
      internal::PresentationService_SendSessionMessage_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::PresentationService_SendSessionMessage_ResponseParams_Data* data_ = nullptr;
};




class PresentationService_CloseConnection_ParamsDataView {
 public:
  PresentationService_CloseConnection_ParamsDataView() {}

  PresentationService_CloseConnection_ParamsDataView(
      internal::PresentationService_CloseConnection_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPresentationUrlDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadPresentationUrl(UserType* output) {
    auto pointer = data_->presentation_url.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetPresentationIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadPresentationId(UserType* output) {
    auto pointer = data_->presentation_id.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::PresentationService_CloseConnection_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void PresentationService_CloseConnection_ParamsDataView::GetPresentationUrlDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->presentation_url.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PresentationService_CloseConnection_ParamsDataView::GetPresentationIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->presentation_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


class PresentationService_Terminate_ParamsDataView {
 public:
  PresentationService_Terminate_ParamsDataView() {}

  PresentationService_Terminate_ParamsDataView(
      internal::PresentationService_Terminate_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPresentationUrlDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadPresentationUrl(UserType* output) {
    auto pointer = data_->presentation_url.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetPresentationIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadPresentationId(UserType* output) {
    auto pointer = data_->presentation_id.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::PresentationService_Terminate_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void PresentationService_Terminate_ParamsDataView::GetPresentationUrlDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->presentation_url.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PresentationService_Terminate_ParamsDataView::GetPresentationIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->presentation_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


class PresentationService_ListenForSessionMessages_ParamsDataView {
 public:
  PresentationService_ListenForSessionMessages_ParamsDataView() {}

  PresentationService_ListenForSessionMessages_ParamsDataView(
      internal::PresentationService_ListenForSessionMessages_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSessioninfoDataView(
      PresentationSessionInfoDataView* output);

  template <typename UserType>
  bool ReadSessioninfo(UserType* output) {
    auto pointer = data_->sessionInfo.Get();
    return mojo::internal::Deserialize<::blink::mojom::PresentationSessionInfoPtr>(
        pointer, output, context_);
  }
 private:
  internal::PresentationService_ListenForSessionMessages_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void PresentationService_ListenForSessionMessages_ParamsDataView::GetSessioninfoDataView(
    PresentationSessionInfoDataView* output) {
  auto pointer = data_->sessionInfo.Get();
  *output = PresentationSessionInfoDataView(pointer, context_);
}


class PresentationServiceClient_OnScreenAvailabilityNotSupported_ParamsDataView {
 public:
  PresentationServiceClient_OnScreenAvailabilityNotSupported_ParamsDataView() {}

  PresentationServiceClient_OnScreenAvailabilityNotSupported_ParamsDataView(
      internal::PresentationServiceClient_OnScreenAvailabilityNotSupported_Params_Data* data,
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
 private:
  internal::PresentationServiceClient_OnScreenAvailabilityNotSupported_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void PresentationServiceClient_OnScreenAvailabilityNotSupported_ParamsDataView::GetUrlDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->url.Get();
  *output = mojo::StringDataView(pointer, context_);
}


class PresentationServiceClient_OnScreenAvailabilityUpdated_ParamsDataView {
 public:
  PresentationServiceClient_OnScreenAvailabilityUpdated_ParamsDataView() {}

  PresentationServiceClient_OnScreenAvailabilityUpdated_ParamsDataView(
      internal::PresentationServiceClient_OnScreenAvailabilityUpdated_Params_Data* data,
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
  bool available() const {
    return data_->available;
  }
 private:
  internal::PresentationServiceClient_OnScreenAvailabilityUpdated_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void PresentationServiceClient_OnScreenAvailabilityUpdated_ParamsDataView::GetUrlDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->url.Get();
  *output = mojo::StringDataView(pointer, context_);
}


class PresentationServiceClient_OnConnectionStateChanged_ParamsDataView {
 public:
  PresentationServiceClient_OnConnectionStateChanged_ParamsDataView() {}

  PresentationServiceClient_OnConnectionStateChanged_ParamsDataView(
      internal::PresentationServiceClient_OnConnectionStateChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetConnectionDataView(
      PresentationSessionInfoDataView* output);

  template <typename UserType>
  bool ReadConnection(UserType* output) {
    auto pointer = data_->connection.Get();
    return mojo::internal::Deserialize<::blink::mojom::PresentationSessionInfoPtr>(
        pointer, output, context_);
  }
  template <typename UserType>
  bool ReadNewstate(UserType* output) const {
    auto data_value = data_->newState;
    return mojo::internal::Deserialize<::blink::mojom::PresentationConnectionState>(
        data_value, output);
  }

  ::blink::mojom::PresentationConnectionState newState() const {
    return static_cast<::blink::mojom::PresentationConnectionState>(data_->newState);
  }
 private:
  internal::PresentationServiceClient_OnConnectionStateChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void PresentationServiceClient_OnConnectionStateChanged_ParamsDataView::GetConnectionDataView(
    PresentationSessionInfoDataView* output) {
  auto pointer = data_->connection.Get();
  *output = PresentationSessionInfoDataView(pointer, context_);
}


class PresentationServiceClient_OnConnectionClosed_ParamsDataView {
 public:
  PresentationServiceClient_OnConnectionClosed_ParamsDataView() {}

  PresentationServiceClient_OnConnectionClosed_ParamsDataView(
      internal::PresentationServiceClient_OnConnectionClosed_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetConnectionDataView(
      PresentationSessionInfoDataView* output);

  template <typename UserType>
  bool ReadConnection(UserType* output) {
    auto pointer = data_->connection.Get();
    return mojo::internal::Deserialize<::blink::mojom::PresentationSessionInfoPtr>(
        pointer, output, context_);
  }
  template <typename UserType>
  bool ReadReason(UserType* output) const {
    auto data_value = data_->reason;
    return mojo::internal::Deserialize<::blink::mojom::PresentationConnectionCloseReason>(
        data_value, output);
  }

  ::blink::mojom::PresentationConnectionCloseReason reason() const {
    return static_cast<::blink::mojom::PresentationConnectionCloseReason>(data_->reason);
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
  internal::PresentationServiceClient_OnConnectionClosed_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void PresentationServiceClient_OnConnectionClosed_ParamsDataView::GetConnectionDataView(
    PresentationSessionInfoDataView* output) {
  auto pointer = data_->connection.Get();
  *output = PresentationSessionInfoDataView(pointer, context_);
}
inline void PresentationServiceClient_OnConnectionClosed_ParamsDataView::GetMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->message.Get();
  *output = mojo::StringDataView(pointer, context_);
}


class PresentationServiceClient_OnSessionMessagesReceived_ParamsDataView {
 public:
  PresentationServiceClient_OnSessionMessagesReceived_ParamsDataView() {}

  PresentationServiceClient_OnSessionMessagesReceived_ParamsDataView(
      internal::PresentationServiceClient_OnSessionMessagesReceived_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSessioninfoDataView(
      PresentationSessionInfoDataView* output);

  template <typename UserType>
  bool ReadSessioninfo(UserType* output) {
    auto pointer = data_->sessionInfo.Get();
    return mojo::internal::Deserialize<::blink::mojom::PresentationSessionInfoPtr>(
        pointer, output, context_);
  }
  inline void GetMessagesDataView(
      mojo::ArrayDataView<SessionMessageDataView>* output);

  template <typename UserType>
  bool ReadMessages(UserType* output) {
    auto pointer = data_->messages.Get();
    return mojo::internal::Deserialize<mojo::Array<::blink::mojom::SessionMessagePtr>>(
        pointer, output, context_);
  }
 private:
  internal::PresentationServiceClient_OnSessionMessagesReceived_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void PresentationServiceClient_OnSessionMessagesReceived_ParamsDataView::GetSessioninfoDataView(
    PresentationSessionInfoDataView* output) {
  auto pointer = data_->sessionInfo.Get();
  *output = PresentationSessionInfoDataView(pointer, context_);
}
inline void PresentationServiceClient_OnSessionMessagesReceived_ParamsDataView::GetMessagesDataView(
    mojo::ArrayDataView<SessionMessageDataView>* output) {
  auto pointer = data_->messages.Get();
  *output = mojo::ArrayDataView<SessionMessageDataView>(pointer, context_);
}


class PresentationServiceClient_OnDefaultSessionStarted_ParamsDataView {
 public:
  PresentationServiceClient_OnDefaultSessionStarted_ParamsDataView() {}

  PresentationServiceClient_OnDefaultSessionStarted_ParamsDataView(
      internal::PresentationServiceClient_OnDefaultSessionStarted_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSessioninfoDataView(
      PresentationSessionInfoDataView* output);

  template <typename UserType>
  bool ReadSessioninfo(UserType* output) {
    auto pointer = data_->sessionInfo.Get();
    return mojo::internal::Deserialize<::blink::mojom::PresentationSessionInfoPtr>(
        pointer, output, context_);
  }
 private:
  internal::PresentationServiceClient_OnDefaultSessionStarted_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void PresentationServiceClient_OnDefaultSessionStarted_ParamsDataView::GetSessioninfoDataView(
    PresentationSessionInfoDataView* output) {
  auto pointer = data_->sessionInfo.Get();
  *output = PresentationSessionInfoDataView(pointer, context_);
}


}  // namespace// static
PresentationSessionInfoPtr PresentationSessionInfo::New() {
  PresentationSessionInfoPtr rv;
  mojo::internal::StructHelper<PresentationSessionInfo>::Initialize(&rv);
  return rv;
}

PresentationSessionInfo::PresentationSessionInfo()
    : url(),
      id() {
}

PresentationSessionInfo::~PresentationSessionInfo() {
}// static
PresentationErrorPtr PresentationError::New() {
  PresentationErrorPtr rv;
  mojo::internal::StructHelper<PresentationError>::Initialize(&rv);
  return rv;
}

PresentationError::PresentationError()
    : error_type(),
      message() {
}

PresentationError::~PresentationError() {
}// static
SessionMessagePtr SessionMessage::New() {
  SessionMessagePtr rv;
  mojo::internal::StructHelper<SessionMessage>::Initialize(&rv);
  return rv;
}

SessionMessage::SessionMessage()
    : type(),
      message(),
      data() {
}

SessionMessage::~SessionMessage() {
}
const char PresentationService::Name_[] = "blink::mojom::PresentationService";
const uint32_t PresentationService::Version_;

class PresentationService_StartSession_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  PresentationService_StartSession_ForwardToCallback(
      const PresentationService::StartSessionCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  PresentationService::StartSessionCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(PresentationService_StartSession_ForwardToCallback);
};
bool PresentationService_StartSession_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::PresentationService_StartSession_ResponseParams_Data* params =
      reinterpret_cast<internal::PresentationService_StartSession_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  PresentationSessionInfoPtr p_sessionInfo{};
  PresentationErrorPtr p_error{};
  PresentationService_StartSession_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadSessioninfo(&p_sessionInfo))
    success = false;
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "PresentationService::StartSession response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_sessionInfo), 
std::move(p_error));
  }
  return true;
}

class PresentationService_JoinSession_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  PresentationService_JoinSession_ForwardToCallback(
      const PresentationService::JoinSessionCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  PresentationService::JoinSessionCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(PresentationService_JoinSession_ForwardToCallback);
};
bool PresentationService_JoinSession_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::PresentationService_JoinSession_ResponseParams_Data* params =
      reinterpret_cast<internal::PresentationService_JoinSession_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  PresentationSessionInfoPtr p_sessionInfo{};
  PresentationErrorPtr p_error{};
  PresentationService_JoinSession_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadSessioninfo(&p_sessionInfo))
    success = false;
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "PresentationService::JoinSession response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_sessionInfo), 
std::move(p_error));
  }
  return true;
}

class PresentationService_SendSessionMessage_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  PresentationService_SendSessionMessage_ForwardToCallback(
      const PresentationService::SendSessionMessageCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  PresentationService::SendSessionMessageCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(PresentationService_SendSessionMessage_ForwardToCallback);
};
bool PresentationService_SendSessionMessage_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::PresentationService_SendSessionMessage_ResponseParams_Data* params =
      reinterpret_cast<internal::PresentationService_SendSessionMessage_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  bool p_success{};
  PresentationService_SendSessionMessage_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "PresentationService::SendSessionMessage response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_success));
  }
  return true;
}

PresentationServiceProxy::PresentationServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void PresentationServiceProxy::SetClient(
    PresentationServiceClientPtr in_client) {
  size_t size = sizeof(::blink::mojom::internal::PresentationService_SetClient_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kPresentationService_SetClient_Name, size);

  auto params =
      ::blink::mojom::internal::PresentationService_SetClient_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::blink::mojom::PresentationServiceClientPtr>(
      in_client, &params->client, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in PresentationService.SetClient request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void PresentationServiceProxy::SetDefaultPresentationURL(
    const std::string& in_url) {
  size_t size = sizeof(::blink::mojom::internal::PresentationService_SetDefaultPresentationURL_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_url, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kPresentationService_SetDefaultPresentationURL_Name, size);

  auto params =
      ::blink::mojom::internal::PresentationService_SetDefaultPresentationURL_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->url)::BaseType* url_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_url, builder.buffer(), &url_ptr, &serialization_context_);
  params->url.Set(url_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in PresentationService.SetDefaultPresentationURL request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void PresentationServiceProxy::ListenForScreenAvailability(
    const std::string& in_url) {
  size_t size = sizeof(::blink::mojom::internal::PresentationService_ListenForScreenAvailability_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_url, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kPresentationService_ListenForScreenAvailability_Name, size);

  auto params =
      ::blink::mojom::internal::PresentationService_ListenForScreenAvailability_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->url)::BaseType* url_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_url, builder.buffer(), &url_ptr, &serialization_context_);
  params->url.Set(url_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in PresentationService.ListenForScreenAvailability request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void PresentationServiceProxy::StopListeningForScreenAvailability(
    const std::string& in_url) {
  size_t size = sizeof(::blink::mojom::internal::PresentationService_StopListeningForScreenAvailability_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_url, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kPresentationService_StopListeningForScreenAvailability_Name, size);

  auto params =
      ::blink::mojom::internal::PresentationService_StopListeningForScreenAvailability_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->url)::BaseType* url_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_url, builder.buffer(), &url_ptr, &serialization_context_);
  params->url.Set(url_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in PresentationService.StopListeningForScreenAvailability request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void PresentationServiceProxy::StartSession(
    const std::string& in_presentation_url, const StartSessionCallback& callback) {
  size_t size = sizeof(::blink::mojom::internal::PresentationService_StartSession_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_presentation_url, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kPresentationService_StartSession_Name, size);

  auto params =
      ::blink::mojom::internal::PresentationService_StartSession_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->presentation_url)::BaseType* presentation_url_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_presentation_url, builder.buffer(), &presentation_url_ptr, &serialization_context_);
  params->presentation_url.Set(presentation_url_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->presentation_url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null presentation_url in PresentationService.StartSession request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new PresentationService_StartSession_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void PresentationServiceProxy::JoinSession(
    const std::string& in_presentation_url, const base::Optional<std::string>& in_presentation_id, const JoinSessionCallback& callback) {
  size_t size = sizeof(::blink::mojom::internal::PresentationService_JoinSession_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_presentation_url, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_presentation_id, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kPresentationService_JoinSession_Name, size);

  auto params =
      ::blink::mojom::internal::PresentationService_JoinSession_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->presentation_url)::BaseType* presentation_url_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_presentation_url, builder.buffer(), &presentation_url_ptr, &serialization_context_);
  params->presentation_url.Set(presentation_url_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->presentation_url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null presentation_url in PresentationService.JoinSession request");
  typename decltype(params->presentation_id)::BaseType* presentation_id_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_presentation_id, builder.buffer(), &presentation_id_ptr, &serialization_context_);
  params->presentation_id.Set(presentation_id_ptr);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new PresentationService_JoinSession_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void PresentationServiceProxy::SendSessionMessage(
    PresentationSessionInfoPtr in_sessionInfo, SessionMessagePtr in_message_request, const SendSessionMessageCallback& callback) {
  size_t size = sizeof(::blink::mojom::internal::PresentationService_SendSessionMessage_Params_Data);
  size += mojo::internal::PrepareToSerialize<::blink::mojom::PresentationSessionInfoPtr>(
      in_sessionInfo, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<::blink::mojom::SessionMessagePtr>(
      in_message_request, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kPresentationService_SendSessionMessage_Name, size);

  auto params =
      ::blink::mojom::internal::PresentationService_SendSessionMessage_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->sessionInfo)::BaseType* sessionInfo_ptr;
  mojo::internal::Serialize<::blink::mojom::PresentationSessionInfoPtr>(
      in_sessionInfo, builder.buffer(), &sessionInfo_ptr, &serialization_context_);
  params->sessionInfo.Set(sessionInfo_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->sessionInfo.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null sessionInfo in PresentationService.SendSessionMessage request");
  typename decltype(params->message_request)::BaseType* message_request_ptr;
  mojo::internal::Serialize<::blink::mojom::SessionMessagePtr>(
      in_message_request, builder.buffer(), &message_request_ptr, &serialization_context_);
  params->message_request.Set(message_request_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->message_request.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message_request in PresentationService.SendSessionMessage request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new PresentationService_SendSessionMessage_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void PresentationServiceProxy::CloseConnection(
    const std::string& in_presentation_url, const std::string& in_presentation_id) {
  size_t size = sizeof(::blink::mojom::internal::PresentationService_CloseConnection_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_presentation_url, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_presentation_id, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kPresentationService_CloseConnection_Name, size);

  auto params =
      ::blink::mojom::internal::PresentationService_CloseConnection_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->presentation_url)::BaseType* presentation_url_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_presentation_url, builder.buffer(), &presentation_url_ptr, &serialization_context_);
  params->presentation_url.Set(presentation_url_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->presentation_url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null presentation_url in PresentationService.CloseConnection request");
  typename decltype(params->presentation_id)::BaseType* presentation_id_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_presentation_id, builder.buffer(), &presentation_id_ptr, &serialization_context_);
  params->presentation_id.Set(presentation_id_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->presentation_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null presentation_id in PresentationService.CloseConnection request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void PresentationServiceProxy::Terminate(
    const std::string& in_presentation_url, const std::string& in_presentation_id) {
  size_t size = sizeof(::blink::mojom::internal::PresentationService_Terminate_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_presentation_url, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_presentation_id, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kPresentationService_Terminate_Name, size);

  auto params =
      ::blink::mojom::internal::PresentationService_Terminate_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->presentation_url)::BaseType* presentation_url_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_presentation_url, builder.buffer(), &presentation_url_ptr, &serialization_context_);
  params->presentation_url.Set(presentation_url_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->presentation_url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null presentation_url in PresentationService.Terminate request");
  typename decltype(params->presentation_id)::BaseType* presentation_id_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_presentation_id, builder.buffer(), &presentation_id_ptr, &serialization_context_);
  params->presentation_id.Set(presentation_id_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->presentation_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null presentation_id in PresentationService.Terminate request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void PresentationServiceProxy::ListenForSessionMessages(
    PresentationSessionInfoPtr in_sessionInfo) {
  size_t size = sizeof(::blink::mojom::internal::PresentationService_ListenForSessionMessages_Params_Data);
  size += mojo::internal::PrepareToSerialize<::blink::mojom::PresentationSessionInfoPtr>(
      in_sessionInfo, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kPresentationService_ListenForSessionMessages_Name, size);

  auto params =
      ::blink::mojom::internal::PresentationService_ListenForSessionMessages_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->sessionInfo)::BaseType* sessionInfo_ptr;
  mojo::internal::Serialize<::blink::mojom::PresentationSessionInfoPtr>(
      in_sessionInfo, builder.buffer(), &sessionInfo_ptr, &serialization_context_);
  params->sessionInfo.Set(sessionInfo_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->sessionInfo.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null sessionInfo in PresentationService.ListenForSessionMessages request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}
class PresentationService_StartSession_ProxyToResponder {
 public:
  static PresentationService::StartSessionCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<PresentationService_StartSession_ProxyToResponder> proxy(
        new PresentationService_StartSession_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&PresentationService_StartSession_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~PresentationService_StartSession_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "PresentationService::StartSession() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  PresentationService_StartSession_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(responder),
        serialization_context_(std::move(group_controller)) {
  }

  void Run(
      PresentationSessionInfoPtr in_sessionInfo, PresentationErrorPtr in_error);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(PresentationService_StartSession_ProxyToResponder);
};

void PresentationService_StartSession_ProxyToResponder::Run(
    PresentationSessionInfoPtr in_sessionInfo, PresentationErrorPtr in_error) {
  size_t size = sizeof(::blink::mojom::internal::PresentationService_StartSession_ResponseParams_Data);
  size += mojo::internal::PrepareToSerialize<::blink::mojom::PresentationSessionInfoPtr>(
      in_sessionInfo, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<::blink::mojom::PresentationErrorPtr>(
      in_error, &serialization_context_);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kPresentationService_StartSession_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::blink::mojom::internal::PresentationService_StartSession_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->sessionInfo)::BaseType* sessionInfo_ptr;
  mojo::internal::Serialize<::blink::mojom::PresentationSessionInfoPtr>(
      in_sessionInfo, builder.buffer(), &sessionInfo_ptr, &serialization_context_);
  params->sessionInfo.Set(sessionInfo_ptr);
  typename decltype(params->error)::BaseType* error_ptr;
  mojo::internal::Serialize<::blink::mojom::PresentationErrorPtr>(
      in_error, builder.buffer(), &error_ptr, &serialization_context_);
  params->error.Set(error_ptr);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class PresentationService_JoinSession_ProxyToResponder {
 public:
  static PresentationService::JoinSessionCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<PresentationService_JoinSession_ProxyToResponder> proxy(
        new PresentationService_JoinSession_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&PresentationService_JoinSession_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~PresentationService_JoinSession_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "PresentationService::JoinSession() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  PresentationService_JoinSession_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(responder),
        serialization_context_(std::move(group_controller)) {
  }

  void Run(
      PresentationSessionInfoPtr in_sessionInfo, PresentationErrorPtr in_error);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(PresentationService_JoinSession_ProxyToResponder);
};

void PresentationService_JoinSession_ProxyToResponder::Run(
    PresentationSessionInfoPtr in_sessionInfo, PresentationErrorPtr in_error) {
  size_t size = sizeof(::blink::mojom::internal::PresentationService_JoinSession_ResponseParams_Data);
  size += mojo::internal::PrepareToSerialize<::blink::mojom::PresentationSessionInfoPtr>(
      in_sessionInfo, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<::blink::mojom::PresentationErrorPtr>(
      in_error, &serialization_context_);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kPresentationService_JoinSession_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::blink::mojom::internal::PresentationService_JoinSession_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->sessionInfo)::BaseType* sessionInfo_ptr;
  mojo::internal::Serialize<::blink::mojom::PresentationSessionInfoPtr>(
      in_sessionInfo, builder.buffer(), &sessionInfo_ptr, &serialization_context_);
  params->sessionInfo.Set(sessionInfo_ptr);
  typename decltype(params->error)::BaseType* error_ptr;
  mojo::internal::Serialize<::blink::mojom::PresentationErrorPtr>(
      in_error, builder.buffer(), &error_ptr, &serialization_context_);
  params->error.Set(error_ptr);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class PresentationService_SendSessionMessage_ProxyToResponder {
 public:
  static PresentationService::SendSessionMessageCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<PresentationService_SendSessionMessage_ProxyToResponder> proxy(
        new PresentationService_SendSessionMessage_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&PresentationService_SendSessionMessage_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~PresentationService_SendSessionMessage_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "PresentationService::SendSessionMessage() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  PresentationService_SendSessionMessage_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(responder),
        serialization_context_(std::move(group_controller)) {
  }

  void Run(
      bool in_success);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(PresentationService_SendSessionMessage_ProxyToResponder);
};

void PresentationService_SendSessionMessage_ProxyToResponder::Run(
    bool in_success) {
  size_t size = sizeof(::blink::mojom::internal::PresentationService_SendSessionMessage_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kPresentationService_SendSessionMessage_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::blink::mojom::internal::PresentationService_SendSessionMessage_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->success = in_success;
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}

PresentationServiceStub::PresentationServiceStub()
    : sink_(nullptr),
      control_message_handler_(PresentationService::Version_) {
}

PresentationServiceStub::~PresentationServiceStub() {}

bool PresentationServiceStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kPresentationService_SetClient_Name: {
      internal::PresentationService_SetClient_Params_Data* params =
          reinterpret_cast<internal::PresentationService_SetClient_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      PresentationServiceClientPtr p_client{};
      PresentationService_SetClient_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_client = input_data_view.TakeClient();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PresentationService::SetClient deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PresentationService::SetClient");
      mojo::internal::MessageDispatchContext context(message);
      sink_->SetClient(
std::move(p_client));
      return true;
    }
    case internal::kPresentationService_SetDefaultPresentationURL_Name: {
      internal::PresentationService_SetDefaultPresentationURL_Params_Data* params =
          reinterpret_cast<internal::PresentationService_SetDefaultPresentationURL_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      std::string p_url{};
      PresentationService_SetDefaultPresentationURL_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PresentationService::SetDefaultPresentationURL deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PresentationService::SetDefaultPresentationURL");
      mojo::internal::MessageDispatchContext context(message);
      sink_->SetDefaultPresentationURL(
std::move(p_url));
      return true;
    }
    case internal::kPresentationService_ListenForScreenAvailability_Name: {
      internal::PresentationService_ListenForScreenAvailability_Params_Data* params =
          reinterpret_cast<internal::PresentationService_ListenForScreenAvailability_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      std::string p_url{};
      PresentationService_ListenForScreenAvailability_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PresentationService::ListenForScreenAvailability deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PresentationService::ListenForScreenAvailability");
      mojo::internal::MessageDispatchContext context(message);
      sink_->ListenForScreenAvailability(
std::move(p_url));
      return true;
    }
    case internal::kPresentationService_StopListeningForScreenAvailability_Name: {
      internal::PresentationService_StopListeningForScreenAvailability_Params_Data* params =
          reinterpret_cast<internal::PresentationService_StopListeningForScreenAvailability_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      std::string p_url{};
      PresentationService_StopListeningForScreenAvailability_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PresentationService::StopListeningForScreenAvailability deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PresentationService::StopListeningForScreenAvailability");
      mojo::internal::MessageDispatchContext context(message);
      sink_->StopListeningForScreenAvailability(
std::move(p_url));
      return true;
    }
    case internal::kPresentationService_StartSession_Name: {
      break;
    }
    case internal::kPresentationService_JoinSession_Name: {
      break;
    }
    case internal::kPresentationService_SendSessionMessage_Name: {
      break;
    }
    case internal::kPresentationService_CloseConnection_Name: {
      internal::PresentationService_CloseConnection_Params_Data* params =
          reinterpret_cast<internal::PresentationService_CloseConnection_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      std::string p_presentation_url{};
      std::string p_presentation_id{};
      PresentationService_CloseConnection_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadPresentationUrl(&p_presentation_url))
        success = false;
      if (!input_data_view.ReadPresentationId(&p_presentation_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PresentationService::CloseConnection deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PresentationService::CloseConnection");
      mojo::internal::MessageDispatchContext context(message);
      sink_->CloseConnection(
std::move(p_presentation_url), 
std::move(p_presentation_id));
      return true;
    }
    case internal::kPresentationService_Terminate_Name: {
      internal::PresentationService_Terminate_Params_Data* params =
          reinterpret_cast<internal::PresentationService_Terminate_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      std::string p_presentation_url{};
      std::string p_presentation_id{};
      PresentationService_Terminate_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadPresentationUrl(&p_presentation_url))
        success = false;
      if (!input_data_view.ReadPresentationId(&p_presentation_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PresentationService::Terminate deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PresentationService::Terminate");
      mojo::internal::MessageDispatchContext context(message);
      sink_->Terminate(
std::move(p_presentation_url), 
std::move(p_presentation_id));
      return true;
    }
    case internal::kPresentationService_ListenForSessionMessages_Name: {
      internal::PresentationService_ListenForSessionMessages_Params_Data* params =
          reinterpret_cast<internal::PresentationService_ListenForSessionMessages_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      PresentationSessionInfoPtr p_sessionInfo{};
      PresentationService_ListenForSessionMessages_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadSessioninfo(&p_sessionInfo))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PresentationService::ListenForSessionMessages deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PresentationService::ListenForSessionMessages");
      mojo::internal::MessageDispatchContext context(message);
      sink_->ListenForSessionMessages(
std::move(p_sessionInfo));
      return true;
    }
  }
  return false;
}

bool PresentationServiceStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kPresentationService_SetClient_Name: {
      break;
    }
    case internal::kPresentationService_SetDefaultPresentationURL_Name: {
      break;
    }
    case internal::kPresentationService_ListenForScreenAvailability_Name: {
      break;
    }
    case internal::kPresentationService_StopListeningForScreenAvailability_Name: {
      break;
    }
    case internal::kPresentationService_StartSession_Name: {
      internal::PresentationService_StartSession_Params_Data* params =
          reinterpret_cast<internal::PresentationService_StartSession_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      std::string p_presentation_url{};
      PresentationService_StartSession_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadPresentationUrl(&p_presentation_url))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PresentationService::StartSession deserializer");
        return false;
      }
      PresentationService::StartSessionCallback callback =
          PresentationService_StartSession_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PresentationService::StartSession");
      mojo::internal::MessageDispatchContext context(message);
      sink_->StartSession(
std::move(p_presentation_url), callback);
      return true;
    }
    case internal::kPresentationService_JoinSession_Name: {
      internal::PresentationService_JoinSession_Params_Data* params =
          reinterpret_cast<internal::PresentationService_JoinSession_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      std::string p_presentation_url{};
      base::Optional<std::string> p_presentation_id{};
      PresentationService_JoinSession_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadPresentationUrl(&p_presentation_url))
        success = false;
      if (!input_data_view.ReadPresentationId(&p_presentation_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PresentationService::JoinSession deserializer");
        return false;
      }
      PresentationService::JoinSessionCallback callback =
          PresentationService_JoinSession_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PresentationService::JoinSession");
      mojo::internal::MessageDispatchContext context(message);
      sink_->JoinSession(
std::move(p_presentation_url), 
std::move(p_presentation_id), callback);
      return true;
    }
    case internal::kPresentationService_SendSessionMessage_Name: {
      internal::PresentationService_SendSessionMessage_Params_Data* params =
          reinterpret_cast<internal::PresentationService_SendSessionMessage_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      PresentationSessionInfoPtr p_sessionInfo{};
      SessionMessagePtr p_message_request{};
      PresentationService_SendSessionMessage_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadSessioninfo(&p_sessionInfo))
        success = false;
      if (!input_data_view.ReadMessageRequest(&p_message_request))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PresentationService::SendSessionMessage deserializer");
        return false;
      }
      PresentationService::SendSessionMessageCallback callback =
          PresentationService_SendSessionMessage_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PresentationService::SendSessionMessage");
      mojo::internal::MessageDispatchContext context(message);
      sink_->SendSessionMessage(
std::move(p_sessionInfo), 
std::move(p_message_request), callback);
      return true;
    }
    case internal::kPresentationService_CloseConnection_Name: {
      break;
    }
    case internal::kPresentationService_Terminate_Name: {
      break;
    }
    case internal::kPresentationService_ListenForSessionMessages_Name: {
      break;
    }
  }
  return false;
}

PresentationServiceRequestValidator::PresentationServiceRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool PresentationServiceRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "PresentationService RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kPresentationService_SetClient_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PresentationService_SetClient_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPresentationService_SetDefaultPresentationURL_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PresentationService_SetDefaultPresentationURL_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPresentationService_ListenForScreenAvailability_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PresentationService_ListenForScreenAvailability_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPresentationService_StopListeningForScreenAvailability_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PresentationService_StopListeningForScreenAvailability_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPresentationService_StartSession_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PresentationService_StartSession_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPresentationService_JoinSession_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PresentationService_JoinSession_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPresentationService_SendSessionMessage_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PresentationService_SendSessionMessage_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPresentationService_CloseConnection_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PresentationService_CloseConnection_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPresentationService_Terminate_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PresentationService_Terminate_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPresentationService_ListenForSessionMessages_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PresentationService_ListenForSessionMessages_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

PresentationServiceResponseValidator::PresentationServiceResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool PresentationServiceResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "PresentationService ResponseValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kPresentationService_StartSession_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::PresentationService_StartSession_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPresentationService_JoinSession_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::PresentationService_JoinSession_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPresentationService_SendSessionMessage_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::PresentationService_SendSessionMessage_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}
const char PresentationServiceClient::Name_[] = "blink::mojom::PresentationServiceClient";
const uint32_t PresentationServiceClient::Version_;

PresentationServiceClientProxy::PresentationServiceClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void PresentationServiceClientProxy::OnScreenAvailabilityNotSupported(
    const std::string& in_url) {
  size_t size = sizeof(::blink::mojom::internal::PresentationServiceClient_OnScreenAvailabilityNotSupported_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_url, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kPresentationServiceClient_OnScreenAvailabilityNotSupported_Name, size);

  auto params =
      ::blink::mojom::internal::PresentationServiceClient_OnScreenAvailabilityNotSupported_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->url)::BaseType* url_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_url, builder.buffer(), &url_ptr, &serialization_context_);
  params->url.Set(url_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in PresentationServiceClient.OnScreenAvailabilityNotSupported request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void PresentationServiceClientProxy::OnScreenAvailabilityUpdated(
    const std::string& in_url, bool in_available) {
  size_t size = sizeof(::blink::mojom::internal::PresentationServiceClient_OnScreenAvailabilityUpdated_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_url, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kPresentationServiceClient_OnScreenAvailabilityUpdated_Name, size);

  auto params =
      ::blink::mojom::internal::PresentationServiceClient_OnScreenAvailabilityUpdated_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->url)::BaseType* url_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_url, builder.buffer(), &url_ptr, &serialization_context_);
  params->url.Set(url_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in PresentationServiceClient.OnScreenAvailabilityUpdated request");
  params->available = in_available;
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void PresentationServiceClientProxy::OnConnectionStateChanged(
    PresentationSessionInfoPtr in_connection, PresentationConnectionState in_newState) {
  size_t size = sizeof(::blink::mojom::internal::PresentationServiceClient_OnConnectionStateChanged_Params_Data);
  size += mojo::internal::PrepareToSerialize<::blink::mojom::PresentationSessionInfoPtr>(
      in_connection, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kPresentationServiceClient_OnConnectionStateChanged_Name, size);

  auto params =
      ::blink::mojom::internal::PresentationServiceClient_OnConnectionStateChanged_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->connection)::BaseType* connection_ptr;
  mojo::internal::Serialize<::blink::mojom::PresentationSessionInfoPtr>(
      in_connection, builder.buffer(), &connection_ptr, &serialization_context_);
  params->connection.Set(connection_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->connection.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null connection in PresentationServiceClient.OnConnectionStateChanged request");
  mojo::internal::Serialize<::blink::mojom::PresentationConnectionState>(
      in_newState, &params->newState);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void PresentationServiceClientProxy::OnConnectionClosed(
    PresentationSessionInfoPtr in_connection, PresentationConnectionCloseReason in_reason, const std::string& in_message) {
  size_t size = sizeof(::blink::mojom::internal::PresentationServiceClient_OnConnectionClosed_Params_Data);
  size += mojo::internal::PrepareToSerialize<::blink::mojom::PresentationSessionInfoPtr>(
      in_connection, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_message, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kPresentationServiceClient_OnConnectionClosed_Name, size);

  auto params =
      ::blink::mojom::internal::PresentationServiceClient_OnConnectionClosed_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->connection)::BaseType* connection_ptr;
  mojo::internal::Serialize<::blink::mojom::PresentationSessionInfoPtr>(
      in_connection, builder.buffer(), &connection_ptr, &serialization_context_);
  params->connection.Set(connection_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->connection.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null connection in PresentationServiceClient.OnConnectionClosed request");
  mojo::internal::Serialize<::blink::mojom::PresentationConnectionCloseReason>(
      in_reason, &params->reason);
  typename decltype(params->message)::BaseType* message_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_message, builder.buffer(), &message_ptr, &serialization_context_);
  params->message.Set(message_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->message.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message in PresentationServiceClient.OnConnectionClosed request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void PresentationServiceClientProxy::OnSessionMessagesReceived(
    PresentationSessionInfoPtr in_sessionInfo, std::vector<SessionMessagePtr> in_messages) {
  size_t size = sizeof(::blink::mojom::internal::PresentationServiceClient_OnSessionMessagesReceived_Params_Data);
  size += mojo::internal::PrepareToSerialize<::blink::mojom::PresentationSessionInfoPtr>(
      in_sessionInfo, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<mojo::Array<::blink::mojom::SessionMessagePtr>>(
      in_messages, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kPresentationServiceClient_OnSessionMessagesReceived_Name, size);

  auto params =
      ::blink::mojom::internal::PresentationServiceClient_OnSessionMessagesReceived_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->sessionInfo)::BaseType* sessionInfo_ptr;
  mojo::internal::Serialize<::blink::mojom::PresentationSessionInfoPtr>(
      in_sessionInfo, builder.buffer(), &sessionInfo_ptr, &serialization_context_);
  params->sessionInfo.Set(sessionInfo_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->sessionInfo.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null sessionInfo in PresentationServiceClient.OnSessionMessagesReceived request");
  typename decltype(params->messages)::BaseType* messages_ptr;
  const mojo::internal::ContainerValidateParams messages_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::Array<::blink::mojom::SessionMessagePtr>>(
      in_messages, builder.buffer(), &messages_ptr, &messages_validate_params,
      &serialization_context_);
  params->messages.Set(messages_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->messages.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null messages in PresentationServiceClient.OnSessionMessagesReceived request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void PresentationServiceClientProxy::OnDefaultSessionStarted(
    PresentationSessionInfoPtr in_sessionInfo) {
  size_t size = sizeof(::blink::mojom::internal::PresentationServiceClient_OnDefaultSessionStarted_Params_Data);
  size += mojo::internal::PrepareToSerialize<::blink::mojom::PresentationSessionInfoPtr>(
      in_sessionInfo, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kPresentationServiceClient_OnDefaultSessionStarted_Name, size);

  auto params =
      ::blink::mojom::internal::PresentationServiceClient_OnDefaultSessionStarted_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->sessionInfo)::BaseType* sessionInfo_ptr;
  mojo::internal::Serialize<::blink::mojom::PresentationSessionInfoPtr>(
      in_sessionInfo, builder.buffer(), &sessionInfo_ptr, &serialization_context_);
  params->sessionInfo.Set(sessionInfo_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->sessionInfo.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null sessionInfo in PresentationServiceClient.OnDefaultSessionStarted request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

PresentationServiceClientStub::PresentationServiceClientStub()
    : sink_(nullptr),
      control_message_handler_(PresentationServiceClient::Version_) {
}

PresentationServiceClientStub::~PresentationServiceClientStub() {}

bool PresentationServiceClientStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kPresentationServiceClient_OnScreenAvailabilityNotSupported_Name: {
      internal::PresentationServiceClient_OnScreenAvailabilityNotSupported_Params_Data* params =
          reinterpret_cast<internal::PresentationServiceClient_OnScreenAvailabilityNotSupported_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      std::string p_url{};
      PresentationServiceClient_OnScreenAvailabilityNotSupported_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PresentationServiceClient::OnScreenAvailabilityNotSupported deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PresentationServiceClient::OnScreenAvailabilityNotSupported");
      mojo::internal::MessageDispatchContext context(message);
      sink_->OnScreenAvailabilityNotSupported(
std::move(p_url));
      return true;
    }
    case internal::kPresentationServiceClient_OnScreenAvailabilityUpdated_Name: {
      internal::PresentationServiceClient_OnScreenAvailabilityUpdated_Params_Data* params =
          reinterpret_cast<internal::PresentationServiceClient_OnScreenAvailabilityUpdated_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      std::string p_url{};
      bool p_available{};
      PresentationServiceClient_OnScreenAvailabilityUpdated_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      p_available = input_data_view.available();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PresentationServiceClient::OnScreenAvailabilityUpdated deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PresentationServiceClient::OnScreenAvailabilityUpdated");
      mojo::internal::MessageDispatchContext context(message);
      sink_->OnScreenAvailabilityUpdated(
std::move(p_url), 
std::move(p_available));
      return true;
    }
    case internal::kPresentationServiceClient_OnConnectionStateChanged_Name: {
      internal::PresentationServiceClient_OnConnectionStateChanged_Params_Data* params =
          reinterpret_cast<internal::PresentationServiceClient_OnConnectionStateChanged_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      PresentationSessionInfoPtr p_connection{};
      PresentationConnectionState p_newState{};
      PresentationServiceClient_OnConnectionStateChanged_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadConnection(&p_connection))
        success = false;
      if (!input_data_view.ReadNewstate(&p_newState))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PresentationServiceClient::OnConnectionStateChanged deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PresentationServiceClient::OnConnectionStateChanged");
      mojo::internal::MessageDispatchContext context(message);
      sink_->OnConnectionStateChanged(
std::move(p_connection), 
std::move(p_newState));
      return true;
    }
    case internal::kPresentationServiceClient_OnConnectionClosed_Name: {
      internal::PresentationServiceClient_OnConnectionClosed_Params_Data* params =
          reinterpret_cast<internal::PresentationServiceClient_OnConnectionClosed_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      PresentationSessionInfoPtr p_connection{};
      PresentationConnectionCloseReason p_reason{};
      std::string p_message{};
      PresentationServiceClient_OnConnectionClosed_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadConnection(&p_connection))
        success = false;
      if (!input_data_view.ReadReason(&p_reason))
        success = false;
      if (!input_data_view.ReadMessage(&p_message))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PresentationServiceClient::OnConnectionClosed deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PresentationServiceClient::OnConnectionClosed");
      mojo::internal::MessageDispatchContext context(message);
      sink_->OnConnectionClosed(
std::move(p_connection), 
std::move(p_reason), 
std::move(p_message));
      return true;
    }
    case internal::kPresentationServiceClient_OnSessionMessagesReceived_Name: {
      internal::PresentationServiceClient_OnSessionMessagesReceived_Params_Data* params =
          reinterpret_cast<internal::PresentationServiceClient_OnSessionMessagesReceived_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      PresentationSessionInfoPtr p_sessionInfo{};
      std::vector<SessionMessagePtr> p_messages{};
      PresentationServiceClient_OnSessionMessagesReceived_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadSessioninfo(&p_sessionInfo))
        success = false;
      if (!input_data_view.ReadMessages(&p_messages))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PresentationServiceClient::OnSessionMessagesReceived deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PresentationServiceClient::OnSessionMessagesReceived");
      mojo::internal::MessageDispatchContext context(message);
      sink_->OnSessionMessagesReceived(
std::move(p_sessionInfo), 
std::move(p_messages));
      return true;
    }
    case internal::kPresentationServiceClient_OnDefaultSessionStarted_Name: {
      internal::PresentationServiceClient_OnDefaultSessionStarted_Params_Data* params =
          reinterpret_cast<internal::PresentationServiceClient_OnDefaultSessionStarted_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      PresentationSessionInfoPtr p_sessionInfo{};
      PresentationServiceClient_OnDefaultSessionStarted_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadSessioninfo(&p_sessionInfo))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PresentationServiceClient::OnDefaultSessionStarted deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PresentationServiceClient::OnDefaultSessionStarted");
      mojo::internal::MessageDispatchContext context(message);
      sink_->OnDefaultSessionStarted(
std::move(p_sessionInfo));
      return true;
    }
  }
  return false;
}

bool PresentationServiceClientStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kPresentationServiceClient_OnScreenAvailabilityNotSupported_Name: {
      break;
    }
    case internal::kPresentationServiceClient_OnScreenAvailabilityUpdated_Name: {
      break;
    }
    case internal::kPresentationServiceClient_OnConnectionStateChanged_Name: {
      break;
    }
    case internal::kPresentationServiceClient_OnConnectionClosed_Name: {
      break;
    }
    case internal::kPresentationServiceClient_OnSessionMessagesReceived_Name: {
      break;
    }
    case internal::kPresentationServiceClient_OnDefaultSessionStarted_Name: {
      break;
    }
  }
  return false;
}

PresentationServiceClientRequestValidator::PresentationServiceClientRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool PresentationServiceClientRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "PresentationServiceClient RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kPresentationServiceClient_OnScreenAvailabilityNotSupported_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PresentationServiceClient_OnScreenAvailabilityNotSupported_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPresentationServiceClient_OnScreenAvailabilityUpdated_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PresentationServiceClient_OnScreenAvailabilityUpdated_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPresentationServiceClient_OnConnectionStateChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PresentationServiceClient_OnConnectionStateChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPresentationServiceClient_OnConnectionClosed_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PresentationServiceClient_OnConnectionClosed_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPresentationServiceClient_OnSessionMessagesReceived_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PresentationServiceClient_OnSessionMessagesReceived_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPresentationServiceClient_OnDefaultSessionStarted_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PresentationServiceClient_OnDefaultSessionStarted_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

}  // namespace mojom
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::PresentationSessionInfo, ::blink::mojom::PresentationSessionInfoPtr>::Read(
    ::blink::mojom::PresentationSessionInfoDataView input,
    ::blink::mojom::PresentationSessionInfoPtr* output) {
  bool success = true;
  ::blink::mojom::PresentationSessionInfoPtr result(::blink::mojom::PresentationSessionInfo::New());
  
      if (!input.ReadUrl(&result->url))
        success = false;
      if (!input.ReadId(&result->id))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::PresentationError, ::blink::mojom::PresentationErrorPtr>::Read(
    ::blink::mojom::PresentationErrorDataView input,
    ::blink::mojom::PresentationErrorPtr* output) {
  bool success = true;
  ::blink::mojom::PresentationErrorPtr result(::blink::mojom::PresentationError::New());
  
      if (!input.ReadErrorType(&result->error_type))
        success = false;
      if (!input.ReadMessage(&result->message))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::SessionMessage, ::blink::mojom::SessionMessagePtr>::Read(
    ::blink::mojom::SessionMessageDataView input,
    ::blink::mojom::SessionMessagePtr* output) {
  bool success = true;
  ::blink::mojom::SessionMessagePtr result(::blink::mojom::SessionMessage::New());
  
      if (!input.ReadType(&result->type))
        success = false;
      if (!input.ReadMessage(&result->message))
        success = false;
      if (!input.ReadData(&result->data))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo


#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
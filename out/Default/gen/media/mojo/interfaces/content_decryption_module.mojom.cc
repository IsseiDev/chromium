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

#include "media/mojo/interfaces/content_decryption_module.mojom.h"

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
#include "media/mojo/common/pipeline_statistics_struct_traits.h"
#include "services/shell/public/cpp/capabilities_struct_traits.h"
#include "services/shell/public/cpp/identity_struct_traits.h"
#include "mojo/common/common_custom_types_struct_traits.h"
#include "ipc/ipc_message_utils.h"
#include "media/base/ipc/media_param_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "url/mojo/url_gurl_struct_traits.h"
namespace media {
namespace mojom {

namespace {

class ContentDecryptionModule_SetClient_ParamsDataView {
 public:
  ContentDecryptionModule_SetClient_ParamsDataView() {}

  ContentDecryptionModule_SetClient_ParamsDataView(
      internal::ContentDecryptionModule_SetClient_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  ContentDecryptionModuleClientPtr TakeClient() {
    ContentDecryptionModuleClientPtr result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::ContentDecryptionModuleClientPtr>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ContentDecryptionModule_SetClient_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




class ContentDecryptionModule_Initialize_ParamsDataView {
 public:
  ContentDecryptionModule_Initialize_ParamsDataView() {}

  ContentDecryptionModule_Initialize_ParamsDataView(
      internal::ContentDecryptionModule_Initialize_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeySystemDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadKeySystem(UserType* output) {
    auto pointer = data_->key_system.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetSecurityOriginDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadSecurityOrigin(UserType* output) {
    auto pointer = data_->security_origin.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetCdmConfigDataView(
      CdmConfigDataView* output);

  template <typename UserType>
  bool ReadCdmConfig(UserType* output) {
    auto pointer = data_->cdm_config.Get();
    return mojo::internal::Deserialize<::media::mojom::CdmConfigPtr>(
        pointer, output, context_);
  }
 private:
  internal::ContentDecryptionModule_Initialize_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void ContentDecryptionModule_Initialize_ParamsDataView::GetKeySystemDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->key_system.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ContentDecryptionModule_Initialize_ParamsDataView::GetSecurityOriginDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->security_origin.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ContentDecryptionModule_Initialize_ParamsDataView::GetCdmConfigDataView(
    CdmConfigDataView* output) {
  auto pointer = data_->cdm_config.Get();
  *output = CdmConfigDataView(pointer, context_);
}

class ContentDecryptionModule_Initialize_ResponseParamsDataView {
 public:
  ContentDecryptionModule_Initialize_ResponseParamsDataView() {}

  ContentDecryptionModule_Initialize_ResponseParamsDataView(
      internal::ContentDecryptionModule_Initialize_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      CdmPromiseResultDataView* output);

  template <typename UserType>
  bool ReadResult(UserType* output) {
    auto pointer = data_->result.Get();
    return mojo::internal::Deserialize<::media::mojom::CdmPromiseResultPtr>(
        pointer, output, context_);
  }
  int32_t cdm_id() const {
    return data_->cdm_id;
  }
  ::media::mojom::DecryptorPtr TakeDecryptor() {
    ::media::mojom::DecryptorPtr result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::DecryptorPtr>(
            &data_->decryptor, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ContentDecryptionModule_Initialize_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void ContentDecryptionModule_Initialize_ResponseParamsDataView::GetResultDataView(
    CdmPromiseResultDataView* output) {
  auto pointer = data_->result.Get();
  *output = CdmPromiseResultDataView(pointer, context_);
}


class ContentDecryptionModule_SetServerCertificate_ParamsDataView {
 public:
  ContentDecryptionModule_SetServerCertificate_ParamsDataView() {}

  ContentDecryptionModule_SetServerCertificate_ParamsDataView(
      internal::ContentDecryptionModule_SetServerCertificate_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCertificateDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  bool ReadCertificateData(UserType* output) {
    auto pointer = data_->certificate_data.Get();
    return mojo::internal::Deserialize<mojo::Array<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::ContentDecryptionModule_SetServerCertificate_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void ContentDecryptionModule_SetServerCertificate_ParamsDataView::GetCertificateDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->certificate_data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}

class ContentDecryptionModule_SetServerCertificate_ResponseParamsDataView {
 public:
  ContentDecryptionModule_SetServerCertificate_ResponseParamsDataView() {}

  ContentDecryptionModule_SetServerCertificate_ResponseParamsDataView(
      internal::ContentDecryptionModule_SetServerCertificate_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      CdmPromiseResultDataView* output);

  template <typename UserType>
  bool ReadResult(UserType* output) {
    auto pointer = data_->result.Get();
    return mojo::internal::Deserialize<::media::mojom::CdmPromiseResultPtr>(
        pointer, output, context_);
  }
 private:
  internal::ContentDecryptionModule_SetServerCertificate_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void ContentDecryptionModule_SetServerCertificate_ResponseParamsDataView::GetResultDataView(
    CdmPromiseResultDataView* output) {
  auto pointer = data_->result.Get();
  *output = CdmPromiseResultDataView(pointer, context_);
}


class ContentDecryptionModule_CreateSessionAndGenerateRequest_ParamsDataView {
 public:
  ContentDecryptionModule_CreateSessionAndGenerateRequest_ParamsDataView() {}

  ContentDecryptionModule_CreateSessionAndGenerateRequest_ParamsDataView(
      internal::ContentDecryptionModule_CreateSessionAndGenerateRequest_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadSessionType(UserType* output) const {
    auto data_value = data_->session_type;
    return mojo::internal::Deserialize<::media::mojom::ContentDecryptionModule::SessionType>(
        data_value, output);
  }

  ::media::mojom::ContentDecryptionModule::SessionType session_type() const {
    return static_cast<::media::mojom::ContentDecryptionModule::SessionType>(data_->session_type);
  }
  template <typename UserType>
  bool ReadInitDataType(UserType* output) const {
    auto data_value = data_->init_data_type;
    return mojo::internal::Deserialize<::media::mojom::ContentDecryptionModule::InitDataType>(
        data_value, output);
  }

  ::media::mojom::ContentDecryptionModule::InitDataType init_data_type() const {
    return static_cast<::media::mojom::ContentDecryptionModule::InitDataType>(data_->init_data_type);
  }
  inline void GetInitDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  bool ReadInitData(UserType* output) {
    auto pointer = data_->init_data.Get();
    return mojo::internal::Deserialize<mojo::Array<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::ContentDecryptionModule_CreateSessionAndGenerateRequest_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void ContentDecryptionModule_CreateSessionAndGenerateRequest_ParamsDataView::GetInitDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->init_data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}

class ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParamsDataView {
 public:
  ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParamsDataView() {}

  ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParamsDataView(
      internal::ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      CdmPromiseResultDataView* output);

  template <typename UserType>
  bool ReadResult(UserType* output) {
    auto pointer = data_->result.Get();
    return mojo::internal::Deserialize<::media::mojom::CdmPromiseResultPtr>(
        pointer, output, context_);
  }
  inline void GetSessionIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadSessionId(UserType* output) {
    auto pointer = data_->session_id.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParamsDataView::GetResultDataView(
    CdmPromiseResultDataView* output) {
  auto pointer = data_->result.Get();
  *output = CdmPromiseResultDataView(pointer, context_);
}
inline void ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParamsDataView::GetSessionIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->session_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


class ContentDecryptionModule_LoadSession_ParamsDataView {
 public:
  ContentDecryptionModule_LoadSession_ParamsDataView() {}

  ContentDecryptionModule_LoadSession_ParamsDataView(
      internal::ContentDecryptionModule_LoadSession_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadSessionType(UserType* output) const {
    auto data_value = data_->session_type;
    return mojo::internal::Deserialize<::media::mojom::ContentDecryptionModule::SessionType>(
        data_value, output);
  }

  ::media::mojom::ContentDecryptionModule::SessionType session_type() const {
    return static_cast<::media::mojom::ContentDecryptionModule::SessionType>(data_->session_type);
  }
  inline void GetSessionIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadSessionId(UserType* output) {
    auto pointer = data_->session_id.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::ContentDecryptionModule_LoadSession_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void ContentDecryptionModule_LoadSession_ParamsDataView::GetSessionIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->session_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}

class ContentDecryptionModule_LoadSession_ResponseParamsDataView {
 public:
  ContentDecryptionModule_LoadSession_ResponseParamsDataView() {}

  ContentDecryptionModule_LoadSession_ResponseParamsDataView(
      internal::ContentDecryptionModule_LoadSession_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      CdmPromiseResultDataView* output);

  template <typename UserType>
  bool ReadResult(UserType* output) {
    auto pointer = data_->result.Get();
    return mojo::internal::Deserialize<::media::mojom::CdmPromiseResultPtr>(
        pointer, output, context_);
  }
  inline void GetSessionIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadSessionId(UserType* output) {
    auto pointer = data_->session_id.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::ContentDecryptionModule_LoadSession_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void ContentDecryptionModule_LoadSession_ResponseParamsDataView::GetResultDataView(
    CdmPromiseResultDataView* output) {
  auto pointer = data_->result.Get();
  *output = CdmPromiseResultDataView(pointer, context_);
}
inline void ContentDecryptionModule_LoadSession_ResponseParamsDataView::GetSessionIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->session_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


class ContentDecryptionModule_UpdateSession_ParamsDataView {
 public:
  ContentDecryptionModule_UpdateSession_ParamsDataView() {}

  ContentDecryptionModule_UpdateSession_ParamsDataView(
      internal::ContentDecryptionModule_UpdateSession_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSessionIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadSessionId(UserType* output) {
    auto pointer = data_->session_id.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetResponseDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  bool ReadResponse(UserType* output) {
    auto pointer = data_->response.Get();
    return mojo::internal::Deserialize<mojo::Array<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::ContentDecryptionModule_UpdateSession_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void ContentDecryptionModule_UpdateSession_ParamsDataView::GetSessionIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->session_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ContentDecryptionModule_UpdateSession_ParamsDataView::GetResponseDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->response.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}

class ContentDecryptionModule_UpdateSession_ResponseParamsDataView {
 public:
  ContentDecryptionModule_UpdateSession_ResponseParamsDataView() {}

  ContentDecryptionModule_UpdateSession_ResponseParamsDataView(
      internal::ContentDecryptionModule_UpdateSession_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      CdmPromiseResultDataView* output);

  template <typename UserType>
  bool ReadResult(UserType* output) {
    auto pointer = data_->result.Get();
    return mojo::internal::Deserialize<::media::mojom::CdmPromiseResultPtr>(
        pointer, output, context_);
  }
 private:
  internal::ContentDecryptionModule_UpdateSession_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void ContentDecryptionModule_UpdateSession_ResponseParamsDataView::GetResultDataView(
    CdmPromiseResultDataView* output) {
  auto pointer = data_->result.Get();
  *output = CdmPromiseResultDataView(pointer, context_);
}


class ContentDecryptionModule_CloseSession_ParamsDataView {
 public:
  ContentDecryptionModule_CloseSession_ParamsDataView() {}

  ContentDecryptionModule_CloseSession_ParamsDataView(
      internal::ContentDecryptionModule_CloseSession_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSessionIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadSessionId(UserType* output) {
    auto pointer = data_->session_id.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::ContentDecryptionModule_CloseSession_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void ContentDecryptionModule_CloseSession_ParamsDataView::GetSessionIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->session_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}

class ContentDecryptionModule_CloseSession_ResponseParamsDataView {
 public:
  ContentDecryptionModule_CloseSession_ResponseParamsDataView() {}

  ContentDecryptionModule_CloseSession_ResponseParamsDataView(
      internal::ContentDecryptionModule_CloseSession_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      CdmPromiseResultDataView* output);

  template <typename UserType>
  bool ReadResult(UserType* output) {
    auto pointer = data_->result.Get();
    return mojo::internal::Deserialize<::media::mojom::CdmPromiseResultPtr>(
        pointer, output, context_);
  }
 private:
  internal::ContentDecryptionModule_CloseSession_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void ContentDecryptionModule_CloseSession_ResponseParamsDataView::GetResultDataView(
    CdmPromiseResultDataView* output) {
  auto pointer = data_->result.Get();
  *output = CdmPromiseResultDataView(pointer, context_);
}


class ContentDecryptionModule_RemoveSession_ParamsDataView {
 public:
  ContentDecryptionModule_RemoveSession_ParamsDataView() {}

  ContentDecryptionModule_RemoveSession_ParamsDataView(
      internal::ContentDecryptionModule_RemoveSession_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSessionIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadSessionId(UserType* output) {
    auto pointer = data_->session_id.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::ContentDecryptionModule_RemoveSession_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void ContentDecryptionModule_RemoveSession_ParamsDataView::GetSessionIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->session_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}

class ContentDecryptionModule_RemoveSession_ResponseParamsDataView {
 public:
  ContentDecryptionModule_RemoveSession_ResponseParamsDataView() {}

  ContentDecryptionModule_RemoveSession_ResponseParamsDataView(
      internal::ContentDecryptionModule_RemoveSession_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      CdmPromiseResultDataView* output);

  template <typename UserType>
  bool ReadResult(UserType* output) {
    auto pointer = data_->result.Get();
    return mojo::internal::Deserialize<::media::mojom::CdmPromiseResultPtr>(
        pointer, output, context_);
  }
 private:
  internal::ContentDecryptionModule_RemoveSession_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void ContentDecryptionModule_RemoveSession_ResponseParamsDataView::GetResultDataView(
    CdmPromiseResultDataView* output) {
  auto pointer = data_->result.Get();
  *output = CdmPromiseResultDataView(pointer, context_);
}


class ContentDecryptionModuleClient_OnSessionMessage_ParamsDataView {
 public:
  ContentDecryptionModuleClient_OnSessionMessage_ParamsDataView() {}

  ContentDecryptionModuleClient_OnSessionMessage_ParamsDataView(
      internal::ContentDecryptionModuleClient_OnSessionMessage_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSessionIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadSessionId(UserType* output) {
    auto pointer = data_->session_id.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  template <typename UserType>
  bool ReadMessageType(UserType* output) const {
    auto data_value = data_->message_type;
    return mojo::internal::Deserialize<::media::mojom::CdmMessageType>(
        data_value, output);
  }

  ::media::mojom::CdmMessageType message_type() const {
    return static_cast<::media::mojom::CdmMessageType>(data_->message_type);
  }
  inline void GetMessageDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  bool ReadMessage(UserType* output) {
    auto pointer = data_->message.Get();
    return mojo::internal::Deserialize<mojo::Array<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetLegacyDestinationUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  bool ReadLegacyDestinationUrl(UserType* output) {
    auto pointer = data_->legacy_destination_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlPtr>(
        pointer, output, context_);
  }
 private:
  internal::ContentDecryptionModuleClient_OnSessionMessage_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void ContentDecryptionModuleClient_OnSessionMessage_ParamsDataView::GetSessionIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->session_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ContentDecryptionModuleClient_OnSessionMessage_ParamsDataView::GetMessageDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->message.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void ContentDecryptionModuleClient_OnSessionMessage_ParamsDataView::GetLegacyDestinationUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->legacy_destination_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}


class ContentDecryptionModuleClient_OnSessionClosed_ParamsDataView {
 public:
  ContentDecryptionModuleClient_OnSessionClosed_ParamsDataView() {}

  ContentDecryptionModuleClient_OnSessionClosed_ParamsDataView(
      internal::ContentDecryptionModuleClient_OnSessionClosed_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSessionIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadSessionId(UserType* output) {
    auto pointer = data_->session_id.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::ContentDecryptionModuleClient_OnSessionClosed_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void ContentDecryptionModuleClient_OnSessionClosed_ParamsDataView::GetSessionIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->session_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


class ContentDecryptionModuleClient_OnLegacySessionError_ParamsDataView {
 public:
  ContentDecryptionModuleClient_OnLegacySessionError_ParamsDataView() {}

  ContentDecryptionModuleClient_OnLegacySessionError_ParamsDataView(
      internal::ContentDecryptionModuleClient_OnLegacySessionError_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSessionIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadSessionId(UserType* output) {
    auto pointer = data_->session_id.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  template <typename UserType>
  bool ReadException(UserType* output) const {
    auto data_value = data_->exception;
    return mojo::internal::Deserialize<::media::mojom::CdmException>(
        data_value, output);
  }

  ::media::mojom::CdmException exception() const {
    return static_cast<::media::mojom::CdmException>(data_->exception);
  }
  uint32_t system_code() const {
    return data_->system_code;
  }
  inline void GetErrorMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadErrorMessage(UserType* output) {
    auto pointer = data_->error_message.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::ContentDecryptionModuleClient_OnLegacySessionError_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void ContentDecryptionModuleClient_OnLegacySessionError_ParamsDataView::GetSessionIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->session_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ContentDecryptionModuleClient_OnLegacySessionError_ParamsDataView::GetErrorMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->error_message.Get();
  *output = mojo::StringDataView(pointer, context_);
}


class ContentDecryptionModuleClient_OnSessionKeysChange_ParamsDataView {
 public:
  ContentDecryptionModuleClient_OnSessionKeysChange_ParamsDataView() {}

  ContentDecryptionModuleClient_OnSessionKeysChange_ParamsDataView(
      internal::ContentDecryptionModuleClient_OnSessionKeysChange_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSessionIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadSessionId(UserType* output) {
    auto pointer = data_->session_id.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  bool has_additional_usable_key() const {
    return data_->has_additional_usable_key;
  }
  inline void GetKeyInformationDataView(
      mojo::ArrayDataView<CdmKeyInformationDataView>* output);

  template <typename UserType>
  bool ReadKeyInformation(UserType* output) {
    auto pointer = data_->key_information.Get();
    return mojo::internal::Deserialize<mojo::Array<::media::mojom::CdmKeyInformationPtr>>(
        pointer, output, context_);
  }
 private:
  internal::ContentDecryptionModuleClient_OnSessionKeysChange_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void ContentDecryptionModuleClient_OnSessionKeysChange_ParamsDataView::GetSessionIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->session_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ContentDecryptionModuleClient_OnSessionKeysChange_ParamsDataView::GetKeyInformationDataView(
    mojo::ArrayDataView<CdmKeyInformationDataView>* output) {
  auto pointer = data_->key_information.Get();
  *output = mojo::ArrayDataView<CdmKeyInformationDataView>(pointer, context_);
}


class ContentDecryptionModuleClient_OnSessionExpirationUpdate_ParamsDataView {
 public:
  ContentDecryptionModuleClient_OnSessionExpirationUpdate_ParamsDataView() {}

  ContentDecryptionModuleClient_OnSessionExpirationUpdate_ParamsDataView(
      internal::ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSessionIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadSessionId(UserType* output) {
    auto pointer = data_->session_id.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  double new_expiry_time_sec() const {
    return data_->new_expiry_time_sec;
  }
 private:
  internal::ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void ContentDecryptionModuleClient_OnSessionExpirationUpdate_ParamsDataView::GetSessionIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->session_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


}  // namespace// static
CdmConfigPtr CdmConfig::New() {
  CdmConfigPtr rv;
  mojo::internal::StructHelper<CdmConfig>::Initialize(&rv);
  return rv;
}

CdmConfig::CdmConfig()
    : allow_distinctive_identifier(),
      allow_persistent_state(),
      use_hw_secure_codecs() {
}

CdmConfig::~CdmConfig() {
}// static
CdmPromiseResultPtr CdmPromiseResult::New() {
  CdmPromiseResultPtr rv;
  mojo::internal::StructHelper<CdmPromiseResult>::Initialize(&rv);
  return rv;
}

CdmPromiseResult::CdmPromiseResult()
    : success(),
      exception(),
      system_code(),
      error_message(nullptr) {
}

CdmPromiseResult::~CdmPromiseResult() {
}// static
CdmKeyInformationPtr CdmKeyInformation::New() {
  CdmKeyInformationPtr rv;
  mojo::internal::StructHelper<CdmKeyInformation>::Initialize(&rv);
  return rv;
}

CdmKeyInformation::CdmKeyInformation()
    : key_id(nullptr),
      status(),
      system_code() {
}

CdmKeyInformation::~CdmKeyInformation() {
}
const char ContentDecryptionModule::Name_[] = "media::mojom::ContentDecryptionModule";
const uint32_t ContentDecryptionModule::Version_;

class ContentDecryptionModule_Initialize_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ContentDecryptionModule_Initialize_ForwardToCallback(
      const ContentDecryptionModule::InitializeCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ContentDecryptionModule::InitializeCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(ContentDecryptionModule_Initialize_ForwardToCallback);
};
bool ContentDecryptionModule_Initialize_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::ContentDecryptionModule_Initialize_ResponseParams_Data* params =
      reinterpret_cast<internal::ContentDecryptionModule_Initialize_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  CdmPromiseResultPtr p_result{};
  int32_t p_cdm_id{};
  ::media::mojom::DecryptorPtr p_decryptor{};
  ContentDecryptionModule_Initialize_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  p_cdm_id = input_data_view.cdm_id();
  p_decryptor = input_data_view.TakeDecryptor();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "ContentDecryptionModule::Initialize response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_result), 
std::move(p_cdm_id), 
std::move(p_decryptor));
  }
  return true;
}

class ContentDecryptionModule_SetServerCertificate_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ContentDecryptionModule_SetServerCertificate_ForwardToCallback(
      const ContentDecryptionModule::SetServerCertificateCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ContentDecryptionModule::SetServerCertificateCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(ContentDecryptionModule_SetServerCertificate_ForwardToCallback);
};
bool ContentDecryptionModule_SetServerCertificate_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::ContentDecryptionModule_SetServerCertificate_ResponseParams_Data* params =
      reinterpret_cast<internal::ContentDecryptionModule_SetServerCertificate_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  CdmPromiseResultPtr p_result{};
  ContentDecryptionModule_SetServerCertificate_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "ContentDecryptionModule::SetServerCertificate response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_result));
  }
  return true;
}

class ContentDecryptionModule_CreateSessionAndGenerateRequest_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ContentDecryptionModule_CreateSessionAndGenerateRequest_ForwardToCallback(
      const ContentDecryptionModule::CreateSessionAndGenerateRequestCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ContentDecryptionModule::CreateSessionAndGenerateRequestCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(ContentDecryptionModule_CreateSessionAndGenerateRequest_ForwardToCallback);
};
bool ContentDecryptionModule_CreateSessionAndGenerateRequest_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams_Data* params =
      reinterpret_cast<internal::ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  CdmPromiseResultPtr p_result{};
  mojo::String p_session_id{};
  ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!input_data_view.ReadSessionId(&p_session_id))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "ContentDecryptionModule::CreateSessionAndGenerateRequest response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_result), 
std::move(p_session_id));
  }
  return true;
}

class ContentDecryptionModule_LoadSession_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ContentDecryptionModule_LoadSession_ForwardToCallback(
      const ContentDecryptionModule::LoadSessionCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ContentDecryptionModule::LoadSessionCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(ContentDecryptionModule_LoadSession_ForwardToCallback);
};
bool ContentDecryptionModule_LoadSession_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::ContentDecryptionModule_LoadSession_ResponseParams_Data* params =
      reinterpret_cast<internal::ContentDecryptionModule_LoadSession_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  CdmPromiseResultPtr p_result{};
  mojo::String p_session_id{};
  ContentDecryptionModule_LoadSession_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!input_data_view.ReadSessionId(&p_session_id))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "ContentDecryptionModule::LoadSession response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_result), 
std::move(p_session_id));
  }
  return true;
}

class ContentDecryptionModule_UpdateSession_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ContentDecryptionModule_UpdateSession_ForwardToCallback(
      const ContentDecryptionModule::UpdateSessionCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ContentDecryptionModule::UpdateSessionCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(ContentDecryptionModule_UpdateSession_ForwardToCallback);
};
bool ContentDecryptionModule_UpdateSession_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::ContentDecryptionModule_UpdateSession_ResponseParams_Data* params =
      reinterpret_cast<internal::ContentDecryptionModule_UpdateSession_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  CdmPromiseResultPtr p_result{};
  ContentDecryptionModule_UpdateSession_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "ContentDecryptionModule::UpdateSession response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_result));
  }
  return true;
}

class ContentDecryptionModule_CloseSession_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ContentDecryptionModule_CloseSession_ForwardToCallback(
      const ContentDecryptionModule::CloseSessionCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ContentDecryptionModule::CloseSessionCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(ContentDecryptionModule_CloseSession_ForwardToCallback);
};
bool ContentDecryptionModule_CloseSession_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::ContentDecryptionModule_CloseSession_ResponseParams_Data* params =
      reinterpret_cast<internal::ContentDecryptionModule_CloseSession_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  CdmPromiseResultPtr p_result{};
  ContentDecryptionModule_CloseSession_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "ContentDecryptionModule::CloseSession response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_result));
  }
  return true;
}

class ContentDecryptionModule_RemoveSession_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ContentDecryptionModule_RemoveSession_ForwardToCallback(
      const ContentDecryptionModule::RemoveSessionCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ContentDecryptionModule::RemoveSessionCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(ContentDecryptionModule_RemoveSession_ForwardToCallback);
};
bool ContentDecryptionModule_RemoveSession_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::ContentDecryptionModule_RemoveSession_ResponseParams_Data* params =
      reinterpret_cast<internal::ContentDecryptionModule_RemoveSession_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  CdmPromiseResultPtr p_result{};
  ContentDecryptionModule_RemoveSession_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "ContentDecryptionModule::RemoveSession response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_result));
  }
  return true;
}

ContentDecryptionModuleProxy::ContentDecryptionModuleProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void ContentDecryptionModuleProxy::SetClient(
    ContentDecryptionModuleClientPtr in_client) {
  size_t size = sizeof(::media::mojom::internal::ContentDecryptionModule_SetClient_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kContentDecryptionModule_SetClient_Name, size);

  auto params =
      ::media::mojom::internal::ContentDecryptionModule_SetClient_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::media::mojom::ContentDecryptionModuleClientPtr>(
      in_client, &params->client, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in ContentDecryptionModule.SetClient request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void ContentDecryptionModuleProxy::Initialize(
    const mojo::String& in_key_system, const mojo::String& in_security_origin, CdmConfigPtr in_cdm_config, const InitializeCallback& callback) {
  size_t size = sizeof(::media::mojom::internal::ContentDecryptionModule_Initialize_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_key_system, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_security_origin, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<::media::mojom::CdmConfigPtr>(
      in_cdm_config, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kContentDecryptionModule_Initialize_Name, size);

  auto params =
      ::media::mojom::internal::ContentDecryptionModule_Initialize_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->key_system)::BaseType* key_system_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_key_system, builder.buffer(), &key_system_ptr, &serialization_context_);
  params->key_system.Set(key_system_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key_system.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key_system in ContentDecryptionModule.Initialize request");
  typename decltype(params->security_origin)::BaseType* security_origin_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_security_origin, builder.buffer(), &security_origin_ptr, &serialization_context_);
  params->security_origin.Set(security_origin_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->security_origin.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null security_origin in ContentDecryptionModule.Initialize request");
  typename decltype(params->cdm_config)::BaseType* cdm_config_ptr;
  mojo::internal::Serialize<::media::mojom::CdmConfigPtr>(
      in_cdm_config, builder.buffer(), &cdm_config_ptr, &serialization_context_);
  params->cdm_config.Set(cdm_config_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cdm_config.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cdm_config in ContentDecryptionModule.Initialize request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new ContentDecryptionModule_Initialize_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void ContentDecryptionModuleProxy::SetServerCertificate(
    mojo::Array<uint8_t> in_certificate_data, const SetServerCertificateCallback& callback) {
  size_t size = sizeof(::media::mojom::internal::ContentDecryptionModule_SetServerCertificate_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::Array<uint8_t>>(
      in_certificate_data, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kContentDecryptionModule_SetServerCertificate_Name, size);

  auto params =
      ::media::mojom::internal::ContentDecryptionModule_SetServerCertificate_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->certificate_data)::BaseType* certificate_data_ptr;
  const mojo::internal::ContainerValidateParams certificate_data_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::Array<uint8_t>>(
      in_certificate_data, builder.buffer(), &certificate_data_ptr, &certificate_data_validate_params,
      &serialization_context_);
  params->certificate_data.Set(certificate_data_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->certificate_data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null certificate_data in ContentDecryptionModule.SetServerCertificate request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new ContentDecryptionModule_SetServerCertificate_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void ContentDecryptionModuleProxy::CreateSessionAndGenerateRequest(
    ContentDecryptionModule::SessionType in_session_type, ContentDecryptionModule::InitDataType in_init_data_type, mojo::Array<uint8_t> in_init_data, const CreateSessionAndGenerateRequestCallback& callback) {
  size_t size = sizeof(::media::mojom::internal::ContentDecryptionModule_CreateSessionAndGenerateRequest_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::Array<uint8_t>>(
      in_init_data, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kContentDecryptionModule_CreateSessionAndGenerateRequest_Name, size);

  auto params =
      ::media::mojom::internal::ContentDecryptionModule_CreateSessionAndGenerateRequest_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::media::mojom::ContentDecryptionModule::SessionType>(
      in_session_type, &params->session_type);
  mojo::internal::Serialize<::media::mojom::ContentDecryptionModule::InitDataType>(
      in_init_data_type, &params->init_data_type);
  typename decltype(params->init_data)::BaseType* init_data_ptr;
  const mojo::internal::ContainerValidateParams init_data_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::Array<uint8_t>>(
      in_init_data, builder.buffer(), &init_data_ptr, &init_data_validate_params,
      &serialization_context_);
  params->init_data.Set(init_data_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->init_data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null init_data in ContentDecryptionModule.CreateSessionAndGenerateRequest request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new ContentDecryptionModule_CreateSessionAndGenerateRequest_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void ContentDecryptionModuleProxy::LoadSession(
    ContentDecryptionModule::SessionType in_session_type, const mojo::String& in_session_id, const LoadSessionCallback& callback) {
  size_t size = sizeof(::media::mojom::internal::ContentDecryptionModule_LoadSession_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_session_id, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kContentDecryptionModule_LoadSession_Name, size);

  auto params =
      ::media::mojom::internal::ContentDecryptionModule_LoadSession_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::media::mojom::ContentDecryptionModule::SessionType>(
      in_session_type, &params->session_type);
  typename decltype(params->session_id)::BaseType* session_id_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_session_id, builder.buffer(), &session_id_ptr, &serialization_context_);
  params->session_id.Set(session_id_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->session_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null session_id in ContentDecryptionModule.LoadSession request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new ContentDecryptionModule_LoadSession_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void ContentDecryptionModuleProxy::UpdateSession(
    const mojo::String& in_session_id, mojo::Array<uint8_t> in_response, const UpdateSessionCallback& callback) {
  size_t size = sizeof(::media::mojom::internal::ContentDecryptionModule_UpdateSession_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_session_id, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<mojo::Array<uint8_t>>(
      in_response, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kContentDecryptionModule_UpdateSession_Name, size);

  auto params =
      ::media::mojom::internal::ContentDecryptionModule_UpdateSession_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->session_id)::BaseType* session_id_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_session_id, builder.buffer(), &session_id_ptr, &serialization_context_);
  params->session_id.Set(session_id_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->session_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null session_id in ContentDecryptionModule.UpdateSession request");
  typename decltype(params->response)::BaseType* response_ptr;
  const mojo::internal::ContainerValidateParams response_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::Array<uint8_t>>(
      in_response, builder.buffer(), &response_ptr, &response_validate_params,
      &serialization_context_);
  params->response.Set(response_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->response.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null response in ContentDecryptionModule.UpdateSession request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new ContentDecryptionModule_UpdateSession_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void ContentDecryptionModuleProxy::CloseSession(
    const mojo::String& in_session_id, const CloseSessionCallback& callback) {
  size_t size = sizeof(::media::mojom::internal::ContentDecryptionModule_CloseSession_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_session_id, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kContentDecryptionModule_CloseSession_Name, size);

  auto params =
      ::media::mojom::internal::ContentDecryptionModule_CloseSession_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->session_id)::BaseType* session_id_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_session_id, builder.buffer(), &session_id_ptr, &serialization_context_);
  params->session_id.Set(session_id_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->session_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null session_id in ContentDecryptionModule.CloseSession request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new ContentDecryptionModule_CloseSession_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void ContentDecryptionModuleProxy::RemoveSession(
    const mojo::String& in_session_id, const RemoveSessionCallback& callback) {
  size_t size = sizeof(::media::mojom::internal::ContentDecryptionModule_RemoveSession_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_session_id, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kContentDecryptionModule_RemoveSession_Name, size);

  auto params =
      ::media::mojom::internal::ContentDecryptionModule_RemoveSession_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->session_id)::BaseType* session_id_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_session_id, builder.buffer(), &session_id_ptr, &serialization_context_);
  params->session_id.Set(session_id_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->session_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null session_id in ContentDecryptionModule.RemoveSession request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new ContentDecryptionModule_RemoveSession_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
class ContentDecryptionModule_Initialize_ProxyToResponder {
 public:
  static ContentDecryptionModule::InitializeCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<ContentDecryptionModule_Initialize_ProxyToResponder> proxy(
        new ContentDecryptionModule_Initialize_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&ContentDecryptionModule_Initialize_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~ContentDecryptionModule_Initialize_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "ContentDecryptionModule::Initialize() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  ContentDecryptionModule_Initialize_ProxyToResponder(
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
      CdmPromiseResultPtr in_result, int32_t in_cdm_id, ::media::mojom::DecryptorPtr in_decryptor);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(ContentDecryptionModule_Initialize_ProxyToResponder);
};

void ContentDecryptionModule_Initialize_ProxyToResponder::Run(
    CdmPromiseResultPtr in_result, int32_t in_cdm_id, ::media::mojom::DecryptorPtr in_decryptor) {
  size_t size = sizeof(::media::mojom::internal::ContentDecryptionModule_Initialize_ResponseParams_Data);
  size += mojo::internal::PrepareToSerialize<::media::mojom::CdmPromiseResultPtr>(
      in_result, &serialization_context_);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kContentDecryptionModule_Initialize_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::media::mojom::internal::ContentDecryptionModule_Initialize_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->result)::BaseType* result_ptr;
  mojo::internal::Serialize<::media::mojom::CdmPromiseResultPtr>(
      in_result, builder.buffer(), &result_ptr, &serialization_context_);
  params->result.Set(result_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->result.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in ContentDecryptionModule.Initialize response");
  params->cdm_id = in_cdm_id;
  mojo::internal::Serialize<::media::mojom::DecryptorPtr>(
      in_decryptor, &params->decryptor, &serialization_context_);
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
class ContentDecryptionModule_SetServerCertificate_ProxyToResponder {
 public:
  static ContentDecryptionModule::SetServerCertificateCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<ContentDecryptionModule_SetServerCertificate_ProxyToResponder> proxy(
        new ContentDecryptionModule_SetServerCertificate_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&ContentDecryptionModule_SetServerCertificate_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~ContentDecryptionModule_SetServerCertificate_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "ContentDecryptionModule::SetServerCertificate() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  ContentDecryptionModule_SetServerCertificate_ProxyToResponder(
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
      CdmPromiseResultPtr in_result);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(ContentDecryptionModule_SetServerCertificate_ProxyToResponder);
};

void ContentDecryptionModule_SetServerCertificate_ProxyToResponder::Run(
    CdmPromiseResultPtr in_result) {
  size_t size = sizeof(::media::mojom::internal::ContentDecryptionModule_SetServerCertificate_ResponseParams_Data);
  size += mojo::internal::PrepareToSerialize<::media::mojom::CdmPromiseResultPtr>(
      in_result, &serialization_context_);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kContentDecryptionModule_SetServerCertificate_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::media::mojom::internal::ContentDecryptionModule_SetServerCertificate_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->result)::BaseType* result_ptr;
  mojo::internal::Serialize<::media::mojom::CdmPromiseResultPtr>(
      in_result, builder.buffer(), &result_ptr, &serialization_context_);
  params->result.Set(result_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->result.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in ContentDecryptionModule.SetServerCertificate response");
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
class ContentDecryptionModule_CreateSessionAndGenerateRequest_ProxyToResponder {
 public:
  static ContentDecryptionModule::CreateSessionAndGenerateRequestCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<ContentDecryptionModule_CreateSessionAndGenerateRequest_ProxyToResponder> proxy(
        new ContentDecryptionModule_CreateSessionAndGenerateRequest_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&ContentDecryptionModule_CreateSessionAndGenerateRequest_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~ContentDecryptionModule_CreateSessionAndGenerateRequest_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "ContentDecryptionModule::CreateSessionAndGenerateRequest() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  ContentDecryptionModule_CreateSessionAndGenerateRequest_ProxyToResponder(
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
      CdmPromiseResultPtr in_result, 
mojo::String in_session_id);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(ContentDecryptionModule_CreateSessionAndGenerateRequest_ProxyToResponder);
};

void ContentDecryptionModule_CreateSessionAndGenerateRequest_ProxyToResponder::Run(
    CdmPromiseResultPtr in_result, 
mojo::String in_session_id) {
  size_t size = sizeof(::media::mojom::internal::ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams_Data);
  size += mojo::internal::PrepareToSerialize<::media::mojom::CdmPromiseResultPtr>(
      in_result, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_session_id, &serialization_context_);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kContentDecryptionModule_CreateSessionAndGenerateRequest_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::media::mojom::internal::ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->result)::BaseType* result_ptr;
  mojo::internal::Serialize<::media::mojom::CdmPromiseResultPtr>(
      in_result, builder.buffer(), &result_ptr, &serialization_context_);
  params->result.Set(result_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->result.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in ContentDecryptionModule.CreateSessionAndGenerateRequest response");
  typename decltype(params->session_id)::BaseType* session_id_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_session_id, builder.buffer(), &session_id_ptr, &serialization_context_);
  params->session_id.Set(session_id_ptr);
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
class ContentDecryptionModule_LoadSession_ProxyToResponder {
 public:
  static ContentDecryptionModule::LoadSessionCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<ContentDecryptionModule_LoadSession_ProxyToResponder> proxy(
        new ContentDecryptionModule_LoadSession_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&ContentDecryptionModule_LoadSession_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~ContentDecryptionModule_LoadSession_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "ContentDecryptionModule::LoadSession() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  ContentDecryptionModule_LoadSession_ProxyToResponder(
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
      CdmPromiseResultPtr in_result, 
mojo::String in_session_id);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(ContentDecryptionModule_LoadSession_ProxyToResponder);
};

void ContentDecryptionModule_LoadSession_ProxyToResponder::Run(
    CdmPromiseResultPtr in_result, 
mojo::String in_session_id) {
  size_t size = sizeof(::media::mojom::internal::ContentDecryptionModule_LoadSession_ResponseParams_Data);
  size += mojo::internal::PrepareToSerialize<::media::mojom::CdmPromiseResultPtr>(
      in_result, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_session_id, &serialization_context_);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kContentDecryptionModule_LoadSession_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::media::mojom::internal::ContentDecryptionModule_LoadSession_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->result)::BaseType* result_ptr;
  mojo::internal::Serialize<::media::mojom::CdmPromiseResultPtr>(
      in_result, builder.buffer(), &result_ptr, &serialization_context_);
  params->result.Set(result_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->result.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in ContentDecryptionModule.LoadSession response");
  typename decltype(params->session_id)::BaseType* session_id_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_session_id, builder.buffer(), &session_id_ptr, &serialization_context_);
  params->session_id.Set(session_id_ptr);
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
class ContentDecryptionModule_UpdateSession_ProxyToResponder {
 public:
  static ContentDecryptionModule::UpdateSessionCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<ContentDecryptionModule_UpdateSession_ProxyToResponder> proxy(
        new ContentDecryptionModule_UpdateSession_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&ContentDecryptionModule_UpdateSession_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~ContentDecryptionModule_UpdateSession_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "ContentDecryptionModule::UpdateSession() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  ContentDecryptionModule_UpdateSession_ProxyToResponder(
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
      CdmPromiseResultPtr in_result);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(ContentDecryptionModule_UpdateSession_ProxyToResponder);
};

void ContentDecryptionModule_UpdateSession_ProxyToResponder::Run(
    CdmPromiseResultPtr in_result) {
  size_t size = sizeof(::media::mojom::internal::ContentDecryptionModule_UpdateSession_ResponseParams_Data);
  size += mojo::internal::PrepareToSerialize<::media::mojom::CdmPromiseResultPtr>(
      in_result, &serialization_context_);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kContentDecryptionModule_UpdateSession_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::media::mojom::internal::ContentDecryptionModule_UpdateSession_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->result)::BaseType* result_ptr;
  mojo::internal::Serialize<::media::mojom::CdmPromiseResultPtr>(
      in_result, builder.buffer(), &result_ptr, &serialization_context_);
  params->result.Set(result_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->result.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in ContentDecryptionModule.UpdateSession response");
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
class ContentDecryptionModule_CloseSession_ProxyToResponder {
 public:
  static ContentDecryptionModule::CloseSessionCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<ContentDecryptionModule_CloseSession_ProxyToResponder> proxy(
        new ContentDecryptionModule_CloseSession_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&ContentDecryptionModule_CloseSession_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~ContentDecryptionModule_CloseSession_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "ContentDecryptionModule::CloseSession() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  ContentDecryptionModule_CloseSession_ProxyToResponder(
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
      CdmPromiseResultPtr in_result);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(ContentDecryptionModule_CloseSession_ProxyToResponder);
};

void ContentDecryptionModule_CloseSession_ProxyToResponder::Run(
    CdmPromiseResultPtr in_result) {
  size_t size = sizeof(::media::mojom::internal::ContentDecryptionModule_CloseSession_ResponseParams_Data);
  size += mojo::internal::PrepareToSerialize<::media::mojom::CdmPromiseResultPtr>(
      in_result, &serialization_context_);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kContentDecryptionModule_CloseSession_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::media::mojom::internal::ContentDecryptionModule_CloseSession_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->result)::BaseType* result_ptr;
  mojo::internal::Serialize<::media::mojom::CdmPromiseResultPtr>(
      in_result, builder.buffer(), &result_ptr, &serialization_context_);
  params->result.Set(result_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->result.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in ContentDecryptionModule.CloseSession response");
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
class ContentDecryptionModule_RemoveSession_ProxyToResponder {
 public:
  static ContentDecryptionModule::RemoveSessionCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<ContentDecryptionModule_RemoveSession_ProxyToResponder> proxy(
        new ContentDecryptionModule_RemoveSession_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&ContentDecryptionModule_RemoveSession_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~ContentDecryptionModule_RemoveSession_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "ContentDecryptionModule::RemoveSession() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  ContentDecryptionModule_RemoveSession_ProxyToResponder(
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
      CdmPromiseResultPtr in_result);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(ContentDecryptionModule_RemoveSession_ProxyToResponder);
};

void ContentDecryptionModule_RemoveSession_ProxyToResponder::Run(
    CdmPromiseResultPtr in_result) {
  size_t size = sizeof(::media::mojom::internal::ContentDecryptionModule_RemoveSession_ResponseParams_Data);
  size += mojo::internal::PrepareToSerialize<::media::mojom::CdmPromiseResultPtr>(
      in_result, &serialization_context_);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kContentDecryptionModule_RemoveSession_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::media::mojom::internal::ContentDecryptionModule_RemoveSession_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->result)::BaseType* result_ptr;
  mojo::internal::Serialize<::media::mojom::CdmPromiseResultPtr>(
      in_result, builder.buffer(), &result_ptr, &serialization_context_);
  params->result.Set(result_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->result.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in ContentDecryptionModule.RemoveSession response");
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

ContentDecryptionModuleStub::ContentDecryptionModuleStub()
    : sink_(nullptr),
      control_message_handler_(ContentDecryptionModule::Version_) {
}

ContentDecryptionModuleStub::~ContentDecryptionModuleStub() {}

bool ContentDecryptionModuleStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kContentDecryptionModule_SetClient_Name: {
      internal::ContentDecryptionModule_SetClient_Params_Data* params =
          reinterpret_cast<internal::ContentDecryptionModule_SetClient_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      ContentDecryptionModuleClientPtr p_client{};
      ContentDecryptionModule_SetClient_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_client = input_data_view.TakeClient();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ContentDecryptionModule::SetClient deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ContentDecryptionModule::SetClient");
      mojo::internal::MessageDispatchContext context(message);
      sink_->SetClient(
std::move(p_client));
      return true;
    }
    case internal::kContentDecryptionModule_Initialize_Name: {
      break;
    }
    case internal::kContentDecryptionModule_SetServerCertificate_Name: {
      break;
    }
    case internal::kContentDecryptionModule_CreateSessionAndGenerateRequest_Name: {
      break;
    }
    case internal::kContentDecryptionModule_LoadSession_Name: {
      break;
    }
    case internal::kContentDecryptionModule_UpdateSession_Name: {
      break;
    }
    case internal::kContentDecryptionModule_CloseSession_Name: {
      break;
    }
    case internal::kContentDecryptionModule_RemoveSession_Name: {
      break;
    }
  }
  return false;
}

bool ContentDecryptionModuleStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kContentDecryptionModule_SetClient_Name: {
      break;
    }
    case internal::kContentDecryptionModule_Initialize_Name: {
      internal::ContentDecryptionModule_Initialize_Params_Data* params =
          reinterpret_cast<internal::ContentDecryptionModule_Initialize_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      mojo::String p_key_system{};
      mojo::String p_security_origin{};
      CdmConfigPtr p_cdm_config{};
      ContentDecryptionModule_Initialize_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadKeySystem(&p_key_system))
        success = false;
      if (!input_data_view.ReadSecurityOrigin(&p_security_origin))
        success = false;
      if (!input_data_view.ReadCdmConfig(&p_cdm_config))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ContentDecryptionModule::Initialize deserializer");
        return false;
      }
      ContentDecryptionModule::InitializeCallback callback =
          ContentDecryptionModule_Initialize_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ContentDecryptionModule::Initialize");
      mojo::internal::MessageDispatchContext context(message);
      sink_->Initialize(
std::move(p_key_system), 
std::move(p_security_origin), 
std::move(p_cdm_config), callback);
      return true;
    }
    case internal::kContentDecryptionModule_SetServerCertificate_Name: {
      internal::ContentDecryptionModule_SetServerCertificate_Params_Data* params =
          reinterpret_cast<internal::ContentDecryptionModule_SetServerCertificate_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      mojo::Array<uint8_t> p_certificate_data{};
      ContentDecryptionModule_SetServerCertificate_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadCertificateData(&p_certificate_data))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ContentDecryptionModule::SetServerCertificate deserializer");
        return false;
      }
      ContentDecryptionModule::SetServerCertificateCallback callback =
          ContentDecryptionModule_SetServerCertificate_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ContentDecryptionModule::SetServerCertificate");
      mojo::internal::MessageDispatchContext context(message);
      sink_->SetServerCertificate(
std::move(p_certificate_data), callback);
      return true;
    }
    case internal::kContentDecryptionModule_CreateSessionAndGenerateRequest_Name: {
      internal::ContentDecryptionModule_CreateSessionAndGenerateRequest_Params_Data* params =
          reinterpret_cast<internal::ContentDecryptionModule_CreateSessionAndGenerateRequest_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      ContentDecryptionModule::SessionType p_session_type{};
      ContentDecryptionModule::InitDataType p_init_data_type{};
      mojo::Array<uint8_t> p_init_data{};
      ContentDecryptionModule_CreateSessionAndGenerateRequest_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadSessionType(&p_session_type))
        success = false;
      if (!input_data_view.ReadInitDataType(&p_init_data_type))
        success = false;
      if (!input_data_view.ReadInitData(&p_init_data))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ContentDecryptionModule::CreateSessionAndGenerateRequest deserializer");
        return false;
      }
      ContentDecryptionModule::CreateSessionAndGenerateRequestCallback callback =
          ContentDecryptionModule_CreateSessionAndGenerateRequest_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ContentDecryptionModule::CreateSessionAndGenerateRequest");
      mojo::internal::MessageDispatchContext context(message);
      sink_->CreateSessionAndGenerateRequest(
std::move(p_session_type), 
std::move(p_init_data_type), 
std::move(p_init_data), callback);
      return true;
    }
    case internal::kContentDecryptionModule_LoadSession_Name: {
      internal::ContentDecryptionModule_LoadSession_Params_Data* params =
          reinterpret_cast<internal::ContentDecryptionModule_LoadSession_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      ContentDecryptionModule::SessionType p_session_type{};
      mojo::String p_session_id{};
      ContentDecryptionModule_LoadSession_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadSessionType(&p_session_type))
        success = false;
      if (!input_data_view.ReadSessionId(&p_session_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ContentDecryptionModule::LoadSession deserializer");
        return false;
      }
      ContentDecryptionModule::LoadSessionCallback callback =
          ContentDecryptionModule_LoadSession_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ContentDecryptionModule::LoadSession");
      mojo::internal::MessageDispatchContext context(message);
      sink_->LoadSession(
std::move(p_session_type), 
std::move(p_session_id), callback);
      return true;
    }
    case internal::kContentDecryptionModule_UpdateSession_Name: {
      internal::ContentDecryptionModule_UpdateSession_Params_Data* params =
          reinterpret_cast<internal::ContentDecryptionModule_UpdateSession_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      mojo::String p_session_id{};
      mojo::Array<uint8_t> p_response{};
      ContentDecryptionModule_UpdateSession_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadSessionId(&p_session_id))
        success = false;
      if (!input_data_view.ReadResponse(&p_response))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ContentDecryptionModule::UpdateSession deserializer");
        return false;
      }
      ContentDecryptionModule::UpdateSessionCallback callback =
          ContentDecryptionModule_UpdateSession_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ContentDecryptionModule::UpdateSession");
      mojo::internal::MessageDispatchContext context(message);
      sink_->UpdateSession(
std::move(p_session_id), 
std::move(p_response), callback);
      return true;
    }
    case internal::kContentDecryptionModule_CloseSession_Name: {
      internal::ContentDecryptionModule_CloseSession_Params_Data* params =
          reinterpret_cast<internal::ContentDecryptionModule_CloseSession_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      mojo::String p_session_id{};
      ContentDecryptionModule_CloseSession_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadSessionId(&p_session_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ContentDecryptionModule::CloseSession deserializer");
        return false;
      }
      ContentDecryptionModule::CloseSessionCallback callback =
          ContentDecryptionModule_CloseSession_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ContentDecryptionModule::CloseSession");
      mojo::internal::MessageDispatchContext context(message);
      sink_->CloseSession(
std::move(p_session_id), callback);
      return true;
    }
    case internal::kContentDecryptionModule_RemoveSession_Name: {
      internal::ContentDecryptionModule_RemoveSession_Params_Data* params =
          reinterpret_cast<internal::ContentDecryptionModule_RemoveSession_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      mojo::String p_session_id{};
      ContentDecryptionModule_RemoveSession_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadSessionId(&p_session_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ContentDecryptionModule::RemoveSession deserializer");
        return false;
      }
      ContentDecryptionModule::RemoveSessionCallback callback =
          ContentDecryptionModule_RemoveSession_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ContentDecryptionModule::RemoveSession");
      mojo::internal::MessageDispatchContext context(message);
      sink_->RemoveSession(
std::move(p_session_id), callback);
      return true;
    }
  }
  return false;
}

ContentDecryptionModuleRequestValidator::ContentDecryptionModuleRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool ContentDecryptionModuleRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "ContentDecryptionModule RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kContentDecryptionModule_SetClient_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ContentDecryptionModule_SetClient_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kContentDecryptionModule_Initialize_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ContentDecryptionModule_Initialize_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kContentDecryptionModule_SetServerCertificate_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ContentDecryptionModule_SetServerCertificate_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kContentDecryptionModule_CreateSessionAndGenerateRequest_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ContentDecryptionModule_CreateSessionAndGenerateRequest_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kContentDecryptionModule_LoadSession_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ContentDecryptionModule_LoadSession_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kContentDecryptionModule_UpdateSession_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ContentDecryptionModule_UpdateSession_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kContentDecryptionModule_CloseSession_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ContentDecryptionModule_CloseSession_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kContentDecryptionModule_RemoveSession_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ContentDecryptionModule_RemoveSession_Params_Data>(
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

ContentDecryptionModuleResponseValidator::ContentDecryptionModuleResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool ContentDecryptionModuleResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "ContentDecryptionModule ResponseValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kContentDecryptionModule_Initialize_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ContentDecryptionModule_Initialize_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kContentDecryptionModule_SetServerCertificate_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ContentDecryptionModule_SetServerCertificate_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kContentDecryptionModule_CreateSessionAndGenerateRequest_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kContentDecryptionModule_LoadSession_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ContentDecryptionModule_LoadSession_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kContentDecryptionModule_UpdateSession_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ContentDecryptionModule_UpdateSession_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kContentDecryptionModule_CloseSession_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ContentDecryptionModule_CloseSession_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kContentDecryptionModule_RemoveSession_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ContentDecryptionModule_RemoveSession_ResponseParams_Data>(
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
const char ContentDecryptionModuleClient::Name_[] = "media::mojom::ContentDecryptionModuleClient";
const uint32_t ContentDecryptionModuleClient::Version_;

ContentDecryptionModuleClientProxy::ContentDecryptionModuleClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void ContentDecryptionModuleClientProxy::OnSessionMessage(
    const mojo::String& in_session_id, CdmMessageType in_message_type, mojo::Array<uint8_t> in_message, const GURL& in_legacy_destination_url) {
  size_t size = sizeof(::media::mojom::internal::ContentDecryptionModuleClient_OnSessionMessage_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_session_id, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<mojo::Array<uint8_t>>(
      in_message, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<::url::mojom::UrlPtr>(
      in_legacy_destination_url, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kContentDecryptionModuleClient_OnSessionMessage_Name, size);

  auto params =
      ::media::mojom::internal::ContentDecryptionModuleClient_OnSessionMessage_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->session_id)::BaseType* session_id_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_session_id, builder.buffer(), &session_id_ptr, &serialization_context_);
  params->session_id.Set(session_id_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->session_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null session_id in ContentDecryptionModuleClient.OnSessionMessage request");
  mojo::internal::Serialize<::media::mojom::CdmMessageType>(
      in_message_type, &params->message_type);
  typename decltype(params->message)::BaseType* message_ptr;
  const mojo::internal::ContainerValidateParams message_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::Array<uint8_t>>(
      in_message, builder.buffer(), &message_ptr, &message_validate_params,
      &serialization_context_);
  params->message.Set(message_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->message.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message in ContentDecryptionModuleClient.OnSessionMessage request");
  typename decltype(params->legacy_destination_url)::BaseType* legacy_destination_url_ptr;
  mojo::internal::Serialize<::url::mojom::UrlPtr>(
      in_legacy_destination_url, builder.buffer(), &legacy_destination_url_ptr, &serialization_context_);
  params->legacy_destination_url.Set(legacy_destination_url_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->legacy_destination_url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null legacy_destination_url in ContentDecryptionModuleClient.OnSessionMessage request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void ContentDecryptionModuleClientProxy::OnSessionClosed(
    const mojo::String& in_session_id) {
  size_t size = sizeof(::media::mojom::internal::ContentDecryptionModuleClient_OnSessionClosed_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_session_id, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kContentDecryptionModuleClient_OnSessionClosed_Name, size);

  auto params =
      ::media::mojom::internal::ContentDecryptionModuleClient_OnSessionClosed_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->session_id)::BaseType* session_id_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_session_id, builder.buffer(), &session_id_ptr, &serialization_context_);
  params->session_id.Set(session_id_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->session_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null session_id in ContentDecryptionModuleClient.OnSessionClosed request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void ContentDecryptionModuleClientProxy::OnLegacySessionError(
    const mojo::String& in_session_id, CdmException in_exception, uint32_t in_system_code, const mojo::String& in_error_message) {
  size_t size = sizeof(::media::mojom::internal::ContentDecryptionModuleClient_OnLegacySessionError_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_session_id, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_error_message, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kContentDecryptionModuleClient_OnLegacySessionError_Name, size);

  auto params =
      ::media::mojom::internal::ContentDecryptionModuleClient_OnLegacySessionError_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->session_id)::BaseType* session_id_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_session_id, builder.buffer(), &session_id_ptr, &serialization_context_);
  params->session_id.Set(session_id_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->session_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null session_id in ContentDecryptionModuleClient.OnLegacySessionError request");
  mojo::internal::Serialize<::media::mojom::CdmException>(
      in_exception, &params->exception);
  params->system_code = in_system_code;
  typename decltype(params->error_message)::BaseType* error_message_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_error_message, builder.buffer(), &error_message_ptr, &serialization_context_);
  params->error_message.Set(error_message_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->error_message.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null error_message in ContentDecryptionModuleClient.OnLegacySessionError request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void ContentDecryptionModuleClientProxy::OnSessionKeysChange(
    const mojo::String& in_session_id, bool in_has_additional_usable_key, mojo::Array<CdmKeyInformationPtr> in_key_information) {
  size_t size = sizeof(::media::mojom::internal::ContentDecryptionModuleClient_OnSessionKeysChange_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_session_id, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<mojo::Array<::media::mojom::CdmKeyInformationPtr>>(
      in_key_information, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kContentDecryptionModuleClient_OnSessionKeysChange_Name, size);

  auto params =
      ::media::mojom::internal::ContentDecryptionModuleClient_OnSessionKeysChange_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->session_id)::BaseType* session_id_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_session_id, builder.buffer(), &session_id_ptr, &serialization_context_);
  params->session_id.Set(session_id_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->session_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null session_id in ContentDecryptionModuleClient.OnSessionKeysChange request");
  params->has_additional_usable_key = in_has_additional_usable_key;
  typename decltype(params->key_information)::BaseType* key_information_ptr;
  const mojo::internal::ContainerValidateParams key_information_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::Array<::media::mojom::CdmKeyInformationPtr>>(
      in_key_information, builder.buffer(), &key_information_ptr, &key_information_validate_params,
      &serialization_context_);
  params->key_information.Set(key_information_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key_information.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key_information in ContentDecryptionModuleClient.OnSessionKeysChange request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void ContentDecryptionModuleClientProxy::OnSessionExpirationUpdate(
    const mojo::String& in_session_id, double in_new_expiry_time_sec) {
  size_t size = sizeof(::media::mojom::internal::ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_session_id, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kContentDecryptionModuleClient_OnSessionExpirationUpdate_Name, size);

  auto params =
      ::media::mojom::internal::ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->session_id)::BaseType* session_id_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_session_id, builder.buffer(), &session_id_ptr, &serialization_context_);
  params->session_id.Set(session_id_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->session_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null session_id in ContentDecryptionModuleClient.OnSessionExpirationUpdate request");
  params->new_expiry_time_sec = in_new_expiry_time_sec;
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

ContentDecryptionModuleClientStub::ContentDecryptionModuleClientStub()
    : sink_(nullptr),
      control_message_handler_(ContentDecryptionModuleClient::Version_) {
}

ContentDecryptionModuleClientStub::~ContentDecryptionModuleClientStub() {}

bool ContentDecryptionModuleClientStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kContentDecryptionModuleClient_OnSessionMessage_Name: {
      internal::ContentDecryptionModuleClient_OnSessionMessage_Params_Data* params =
          reinterpret_cast<internal::ContentDecryptionModuleClient_OnSessionMessage_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      mojo::String p_session_id{};
      CdmMessageType p_message_type{};
      mojo::Array<uint8_t> p_message{};
      GURL p_legacy_destination_url{};
      ContentDecryptionModuleClient_OnSessionMessage_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadSessionId(&p_session_id))
        success = false;
      if (!input_data_view.ReadMessageType(&p_message_type))
        success = false;
      if (!input_data_view.ReadMessage(&p_message))
        success = false;
      if (!input_data_view.ReadLegacyDestinationUrl(&p_legacy_destination_url))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ContentDecryptionModuleClient::OnSessionMessage deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ContentDecryptionModuleClient::OnSessionMessage");
      mojo::internal::MessageDispatchContext context(message);
      sink_->OnSessionMessage(
std::move(p_session_id), 
std::move(p_message_type), 
std::move(p_message), 
std::move(p_legacy_destination_url));
      return true;
    }
    case internal::kContentDecryptionModuleClient_OnSessionClosed_Name: {
      internal::ContentDecryptionModuleClient_OnSessionClosed_Params_Data* params =
          reinterpret_cast<internal::ContentDecryptionModuleClient_OnSessionClosed_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      mojo::String p_session_id{};
      ContentDecryptionModuleClient_OnSessionClosed_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadSessionId(&p_session_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ContentDecryptionModuleClient::OnSessionClosed deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ContentDecryptionModuleClient::OnSessionClosed");
      mojo::internal::MessageDispatchContext context(message);
      sink_->OnSessionClosed(
std::move(p_session_id));
      return true;
    }
    case internal::kContentDecryptionModuleClient_OnLegacySessionError_Name: {
      internal::ContentDecryptionModuleClient_OnLegacySessionError_Params_Data* params =
          reinterpret_cast<internal::ContentDecryptionModuleClient_OnLegacySessionError_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      mojo::String p_session_id{};
      CdmException p_exception{};
      uint32_t p_system_code{};
      mojo::String p_error_message{};
      ContentDecryptionModuleClient_OnLegacySessionError_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadSessionId(&p_session_id))
        success = false;
      if (!input_data_view.ReadException(&p_exception))
        success = false;
      p_system_code = input_data_view.system_code();
      if (!input_data_view.ReadErrorMessage(&p_error_message))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ContentDecryptionModuleClient::OnLegacySessionError deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ContentDecryptionModuleClient::OnLegacySessionError");
      mojo::internal::MessageDispatchContext context(message);
      sink_->OnLegacySessionError(
std::move(p_session_id), 
std::move(p_exception), 
std::move(p_system_code), 
std::move(p_error_message));
      return true;
    }
    case internal::kContentDecryptionModuleClient_OnSessionKeysChange_Name: {
      internal::ContentDecryptionModuleClient_OnSessionKeysChange_Params_Data* params =
          reinterpret_cast<internal::ContentDecryptionModuleClient_OnSessionKeysChange_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      mojo::String p_session_id{};
      bool p_has_additional_usable_key{};
      mojo::Array<CdmKeyInformationPtr> p_key_information{};
      ContentDecryptionModuleClient_OnSessionKeysChange_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadSessionId(&p_session_id))
        success = false;
      p_has_additional_usable_key = input_data_view.has_additional_usable_key();
      if (!input_data_view.ReadKeyInformation(&p_key_information))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ContentDecryptionModuleClient::OnSessionKeysChange deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ContentDecryptionModuleClient::OnSessionKeysChange");
      mojo::internal::MessageDispatchContext context(message);
      sink_->OnSessionKeysChange(
std::move(p_session_id), 
std::move(p_has_additional_usable_key), 
std::move(p_key_information));
      return true;
    }
    case internal::kContentDecryptionModuleClient_OnSessionExpirationUpdate_Name: {
      internal::ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params_Data* params =
          reinterpret_cast<internal::ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      mojo::String p_session_id{};
      double p_new_expiry_time_sec{};
      ContentDecryptionModuleClient_OnSessionExpirationUpdate_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadSessionId(&p_session_id))
        success = false;
      p_new_expiry_time_sec = input_data_view.new_expiry_time_sec();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ContentDecryptionModuleClient::OnSessionExpirationUpdate deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ContentDecryptionModuleClient::OnSessionExpirationUpdate");
      mojo::internal::MessageDispatchContext context(message);
      sink_->OnSessionExpirationUpdate(
std::move(p_session_id), 
std::move(p_new_expiry_time_sec));
      return true;
    }
  }
  return false;
}

bool ContentDecryptionModuleClientStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kContentDecryptionModuleClient_OnSessionMessage_Name: {
      break;
    }
    case internal::kContentDecryptionModuleClient_OnSessionClosed_Name: {
      break;
    }
    case internal::kContentDecryptionModuleClient_OnLegacySessionError_Name: {
      break;
    }
    case internal::kContentDecryptionModuleClient_OnSessionKeysChange_Name: {
      break;
    }
    case internal::kContentDecryptionModuleClient_OnSessionExpirationUpdate_Name: {
      break;
    }
  }
  return false;
}

ContentDecryptionModuleClientRequestValidator::ContentDecryptionModuleClientRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool ContentDecryptionModuleClientRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "ContentDecryptionModuleClient RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kContentDecryptionModuleClient_OnSessionMessage_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ContentDecryptionModuleClient_OnSessionMessage_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kContentDecryptionModuleClient_OnSessionClosed_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ContentDecryptionModuleClient_OnSessionClosed_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kContentDecryptionModuleClient_OnLegacySessionError_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ContentDecryptionModuleClient_OnLegacySessionError_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kContentDecryptionModuleClient_OnSessionKeysChange_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ContentDecryptionModuleClient_OnSessionKeysChange_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kContentDecryptionModuleClient_OnSessionExpirationUpdate_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params_Data>(
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
}  // namespace media

namespace mojo {


// static
bool StructTraits<::media::mojom::CdmConfig, ::media::mojom::CdmConfigPtr>::Read(
    ::media::mojom::CdmConfigDataView input,
    ::media::mojom::CdmConfigPtr* output) {
  bool success = true;
  ::media::mojom::CdmConfigPtr result(::media::mojom::CdmConfig::New());
  
      result->allow_distinctive_identifier = input.allow_distinctive_identifier();
      result->allow_persistent_state = input.allow_persistent_state();
      result->use_hw_secure_codecs = input.use_hw_secure_codecs();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media::mojom::CdmPromiseResult, ::media::mojom::CdmPromiseResultPtr>::Read(
    ::media::mojom::CdmPromiseResultDataView input,
    ::media::mojom::CdmPromiseResultPtr* output) {
  bool success = true;
  ::media::mojom::CdmPromiseResultPtr result(::media::mojom::CdmPromiseResult::New());
  
      result->success = input.success();
      if (!input.ReadException(&result->exception))
        success = false;
      result->system_code = input.system_code();
      if (!input.ReadErrorMessage(&result->error_message))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media::mojom::CdmKeyInformation, ::media::mojom::CdmKeyInformationPtr>::Read(
    ::media::mojom::CdmKeyInformationDataView input,
    ::media::mojom::CdmKeyInformationPtr* output) {
  bool success = true;
  ::media::mojom::CdmKeyInformationPtr result(::media::mojom::CdmKeyInformation::New());
  
      if (!input.ReadKeyId(&result->key_id))
        success = false;
      if (!input.ReadStatus(&result->status))
        success = false;
      result->system_code = input.system_code();
  *output = std::move(result);
  return success;
}

}  // namespace mojo


#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
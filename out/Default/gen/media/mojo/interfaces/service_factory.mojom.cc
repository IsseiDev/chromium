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

#include "media/mojo/interfaces/service_factory.mojom.h"

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

class ServiceFactory_CreateAudioDecoder_ParamsDataView {
 public:
  ServiceFactory_CreateAudioDecoder_ParamsDataView() {}

  ServiceFactory_CreateAudioDecoder_ParamsDataView(
      internal::ServiceFactory_CreateAudioDecoder_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  ::media::mojom::AudioDecoderRequest TakeAudioDecoder() {
    ::media::mojom::AudioDecoderRequest result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::AudioDecoderRequest>(
            &data_->audio_decoder, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ServiceFactory_CreateAudioDecoder_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




class ServiceFactory_CreateVideoDecoder_ParamsDataView {
 public:
  ServiceFactory_CreateVideoDecoder_ParamsDataView() {}

  ServiceFactory_CreateVideoDecoder_ParamsDataView(
      internal::ServiceFactory_CreateVideoDecoder_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  ::media::mojom::VideoDecoderRequest TakeVideoDecoder() {
    ::media::mojom::VideoDecoderRequest result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::VideoDecoderRequest>(
            &data_->video_decoder, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ServiceFactory_CreateVideoDecoder_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




class ServiceFactory_CreateRenderer_ParamsDataView {
 public:
  ServiceFactory_CreateRenderer_ParamsDataView() {}

  ServiceFactory_CreateRenderer_ParamsDataView(
      internal::ServiceFactory_CreateRenderer_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetAudioDeviceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadAudioDeviceId(UserType* output) {
    auto pointer = data_->audio_device_id.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  ::media::mojom::RendererRequest TakeRenderer() {
    ::media::mojom::RendererRequest result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::RendererRequest>(
            &data_->renderer, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ServiceFactory_CreateRenderer_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void ServiceFactory_CreateRenderer_ParamsDataView::GetAudioDeviceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->audio_device_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


class ServiceFactory_CreateCdm_ParamsDataView {
 public:
  ServiceFactory_CreateCdm_ParamsDataView() {}

  ServiceFactory_CreateCdm_ParamsDataView(
      internal::ServiceFactory_CreateCdm_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  ::media::mojom::ContentDecryptionModuleRequest TakeCdm() {
    ::media::mojom::ContentDecryptionModuleRequest result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::ContentDecryptionModuleRequest>(
            &data_->cdm, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ServiceFactory_CreateCdm_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




}  // namespace
const char ServiceFactory::Name_[] = "media::mojom::ServiceFactory";
const uint32_t ServiceFactory::Version_;

ServiceFactoryProxy::ServiceFactoryProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void ServiceFactoryProxy::CreateAudioDecoder(
    ::media::mojom::AudioDecoderRequest in_audio_decoder) {
  size_t size = sizeof(::media::mojom::internal::ServiceFactory_CreateAudioDecoder_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kServiceFactory_CreateAudioDecoder_Name, size);

  auto params =
      ::media::mojom::internal::ServiceFactory_CreateAudioDecoder_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::media::mojom::AudioDecoderRequest>(
      in_audio_decoder, &params->audio_decoder, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->audio_decoder),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid audio_decoder in ServiceFactory.CreateAudioDecoder request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void ServiceFactoryProxy::CreateVideoDecoder(
    ::media::mojom::VideoDecoderRequest in_video_decoder) {
  size_t size = sizeof(::media::mojom::internal::ServiceFactory_CreateVideoDecoder_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kServiceFactory_CreateVideoDecoder_Name, size);

  auto params =
      ::media::mojom::internal::ServiceFactory_CreateVideoDecoder_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::media::mojom::VideoDecoderRequest>(
      in_video_decoder, &params->video_decoder, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->video_decoder),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid video_decoder in ServiceFactory.CreateVideoDecoder request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void ServiceFactoryProxy::CreateRenderer(
    const mojo::String& in_audio_device_id, ::media::mojom::RendererRequest in_renderer) {
  size_t size = sizeof(::media::mojom::internal::ServiceFactory_CreateRenderer_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_audio_device_id, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kServiceFactory_CreateRenderer_Name, size);

  auto params =
      ::media::mojom::internal::ServiceFactory_CreateRenderer_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->audio_device_id)::BaseType* audio_device_id_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_audio_device_id, builder.buffer(), &audio_device_id_ptr, &serialization_context_);
  params->audio_device_id.Set(audio_device_id_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->audio_device_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null audio_device_id in ServiceFactory.CreateRenderer request");
  mojo::internal::Serialize<::media::mojom::RendererRequest>(
      in_renderer, &params->renderer, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->renderer),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid renderer in ServiceFactory.CreateRenderer request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void ServiceFactoryProxy::CreateCdm(
    ::media::mojom::ContentDecryptionModuleRequest in_cdm) {
  size_t size = sizeof(::media::mojom::internal::ServiceFactory_CreateCdm_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kServiceFactory_CreateCdm_Name, size);

  auto params =
      ::media::mojom::internal::ServiceFactory_CreateCdm_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::media::mojom::ContentDecryptionModuleRequest>(
      in_cdm, &params->cdm, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->cdm),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid cdm in ServiceFactory.CreateCdm request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

ServiceFactoryStub::ServiceFactoryStub()
    : sink_(nullptr),
      control_message_handler_(ServiceFactory::Version_) {
}

ServiceFactoryStub::~ServiceFactoryStub() {}

bool ServiceFactoryStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kServiceFactory_CreateAudioDecoder_Name: {
      internal::ServiceFactory_CreateAudioDecoder_Params_Data* params =
          reinterpret_cast<internal::ServiceFactory_CreateAudioDecoder_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      ::media::mojom::AudioDecoderRequest p_audio_decoder{};
      ServiceFactory_CreateAudioDecoder_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_audio_decoder = input_data_view.TakeAudioDecoder();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ServiceFactory::CreateAudioDecoder deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ServiceFactory::CreateAudioDecoder");
      mojo::internal::MessageDispatchContext context(message);
      sink_->CreateAudioDecoder(
std::move(p_audio_decoder));
      return true;
    }
    case internal::kServiceFactory_CreateVideoDecoder_Name: {
      internal::ServiceFactory_CreateVideoDecoder_Params_Data* params =
          reinterpret_cast<internal::ServiceFactory_CreateVideoDecoder_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      ::media::mojom::VideoDecoderRequest p_video_decoder{};
      ServiceFactory_CreateVideoDecoder_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_video_decoder = input_data_view.TakeVideoDecoder();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ServiceFactory::CreateVideoDecoder deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ServiceFactory::CreateVideoDecoder");
      mojo::internal::MessageDispatchContext context(message);
      sink_->CreateVideoDecoder(
std::move(p_video_decoder));
      return true;
    }
    case internal::kServiceFactory_CreateRenderer_Name: {
      internal::ServiceFactory_CreateRenderer_Params_Data* params =
          reinterpret_cast<internal::ServiceFactory_CreateRenderer_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      mojo::String p_audio_device_id{};
      ::media::mojom::RendererRequest p_renderer{};
      ServiceFactory_CreateRenderer_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadAudioDeviceId(&p_audio_device_id))
        success = false;
      p_renderer = input_data_view.TakeRenderer();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ServiceFactory::CreateRenderer deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ServiceFactory::CreateRenderer");
      mojo::internal::MessageDispatchContext context(message);
      sink_->CreateRenderer(
std::move(p_audio_device_id), 
std::move(p_renderer));
      return true;
    }
    case internal::kServiceFactory_CreateCdm_Name: {
      internal::ServiceFactory_CreateCdm_Params_Data* params =
          reinterpret_cast<internal::ServiceFactory_CreateCdm_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      ::media::mojom::ContentDecryptionModuleRequest p_cdm{};
      ServiceFactory_CreateCdm_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_cdm = input_data_view.TakeCdm();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ServiceFactory::CreateCdm deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ServiceFactory::CreateCdm");
      mojo::internal::MessageDispatchContext context(message);
      sink_->CreateCdm(
std::move(p_cdm));
      return true;
    }
  }
  return false;
}

bool ServiceFactoryStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kServiceFactory_CreateAudioDecoder_Name: {
      break;
    }
    case internal::kServiceFactory_CreateVideoDecoder_Name: {
      break;
    }
    case internal::kServiceFactory_CreateRenderer_Name: {
      break;
    }
    case internal::kServiceFactory_CreateCdm_Name: {
      break;
    }
  }
  return false;
}

ServiceFactoryRequestValidator::ServiceFactoryRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool ServiceFactoryRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "ServiceFactory RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kServiceFactory_CreateAudioDecoder_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceFactory_CreateAudioDecoder_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kServiceFactory_CreateVideoDecoder_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceFactory_CreateVideoDecoder_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kServiceFactory_CreateRenderer_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceFactory_CreateRenderer_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kServiceFactory_CreateCdm_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceFactory_CreateCdm_Params_Data>(
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

}  // namespace mojo


#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
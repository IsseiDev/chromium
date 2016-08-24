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

#include "media/mojo/interfaces/media_service.mojom.h"

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

class MediaService_CreateServiceFactory_ParamsDataView {
 public:
  MediaService_CreateServiceFactory_ParamsDataView() {}

  MediaService_CreateServiceFactory_ParamsDataView(
      internal::MediaService_CreateServiceFactory_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  ::media::mojom::ServiceFactoryRequest TakeFactory() {
    ::media::mojom::ServiceFactoryRequest result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::ServiceFactoryRequest>(
            &data_->factory, &result, context_);
    DCHECK(ret);
    return result;
  }
  ::shell::mojom::InterfaceProviderPtr TakeFrameInterfaces() {
    ::shell::mojom::InterfaceProviderPtr result;
    bool ret =
        mojo::internal::Deserialize<::shell::mojom::InterfaceProviderPtr>(
            &data_->frame_interfaces, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::MediaService_CreateServiceFactory_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




}  // namespace
const char MediaService::Name_[] = "media::mojom::MediaService";
const uint32_t MediaService::Version_;

MediaServiceProxy::MediaServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void MediaServiceProxy::CreateServiceFactory(
    ::media::mojom::ServiceFactoryRequest in_factory, ::shell::mojom::InterfaceProviderPtr in_frame_interfaces) {
  size_t size = sizeof(::media::mojom::internal::MediaService_CreateServiceFactory_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kMediaService_CreateServiceFactory_Name, size);

  auto params =
      ::media::mojom::internal::MediaService_CreateServiceFactory_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::media::mojom::ServiceFactoryRequest>(
      in_factory, &params->factory, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->factory),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid factory in MediaService.CreateServiceFactory request");
  mojo::internal::Serialize<::shell::mojom::InterfaceProviderPtr>(
      in_frame_interfaces, &params->frame_interfaces, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->frame_interfaces),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid frame_interfaces in MediaService.CreateServiceFactory request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

MediaServiceStub::MediaServiceStub()
    : sink_(nullptr),
      control_message_handler_(MediaService::Version_) {
}

MediaServiceStub::~MediaServiceStub() {}

bool MediaServiceStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kMediaService_CreateServiceFactory_Name: {
      internal::MediaService_CreateServiceFactory_Params_Data* params =
          reinterpret_cast<internal::MediaService_CreateServiceFactory_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      ::media::mojom::ServiceFactoryRequest p_factory{};
      ::shell::mojom::InterfaceProviderPtr p_frame_interfaces{};
      MediaService_CreateServiceFactory_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_factory = input_data_view.TakeFactory();
      p_frame_interfaces = input_data_view.TakeFrameInterfaces();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MediaService::CreateServiceFactory deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "MediaService::CreateServiceFactory");
      mojo::internal::MessageDispatchContext context(message);
      sink_->CreateServiceFactory(
std::move(p_factory), 
std::move(p_frame_interfaces));
      return true;
    }
  }
  return false;
}

bool MediaServiceStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kMediaService_CreateServiceFactory_Name: {
      break;
    }
  }
  return false;
}

MediaServiceRequestValidator::MediaServiceRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool MediaServiceRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "MediaService RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kMediaService_CreateServiceFactory_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaService_CreateServiceFactory_Params_Data>(
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
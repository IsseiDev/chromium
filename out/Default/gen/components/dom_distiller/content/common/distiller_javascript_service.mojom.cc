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

#include "components/dom_distiller/content/common/distiller_javascript_service.mojom.h"

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
namespace dom_distiller {
namespace mojom {

namespace {

class DistillerJavaScriptService_HandleDistillerEchoCall_ParamsDataView {
 public:
  DistillerJavaScriptService_HandleDistillerEchoCall_ParamsDataView() {}

  DistillerJavaScriptService_HandleDistillerEchoCall_ParamsDataView(
      internal::DistillerJavaScriptService_HandleDistillerEchoCall_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadMessage(UserType* output) {
    auto pointer = data_->message.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::DistillerJavaScriptService_HandleDistillerEchoCall_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void DistillerJavaScriptService_HandleDistillerEchoCall_ParamsDataView::GetMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->message.Get();
  *output = mojo::StringDataView(pointer, context_);
}


class DistillerJavaScriptService_HandleDistillerFeedbackCall_ParamsDataView {
 public:
  DistillerJavaScriptService_HandleDistillerFeedbackCall_ParamsDataView() {}

  DistillerJavaScriptService_HandleDistillerFeedbackCall_ParamsDataView(
      internal::DistillerJavaScriptService_HandleDistillerFeedbackCall_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool good() const {
    return data_->good;
  }
 private:
  internal::DistillerJavaScriptService_HandleDistillerFeedbackCall_Params_Data* data_ = nullptr;
};




class DistillerJavaScriptService_HandleDistillerClosePanelCall_ParamsDataView {
 public:
  DistillerJavaScriptService_HandleDistillerClosePanelCall_ParamsDataView() {}

  DistillerJavaScriptService_HandleDistillerClosePanelCall_ParamsDataView(
      internal::DistillerJavaScriptService_HandleDistillerClosePanelCall_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool animate() const {
    return data_->animate;
  }
 private:
  internal::DistillerJavaScriptService_HandleDistillerClosePanelCall_Params_Data* data_ = nullptr;
};




class DistillerJavaScriptService_HandleDistillerOpenSettingsCall_ParamsDataView {
 public:
  DistillerJavaScriptService_HandleDistillerOpenSettingsCall_ParamsDataView() {}

  DistillerJavaScriptService_HandleDistillerOpenSettingsCall_ParamsDataView(
      internal::DistillerJavaScriptService_HandleDistillerOpenSettingsCall_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::DistillerJavaScriptService_HandleDistillerOpenSettingsCall_Params_Data* data_ = nullptr;
};




}  // namespace
const char DistillerJavaScriptService::Name_[] = "dom_distiller::mojom::DistillerJavaScriptService";
const uint32_t DistillerJavaScriptService::Version_;

DistillerJavaScriptServiceProxy::DistillerJavaScriptServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void DistillerJavaScriptServiceProxy::HandleDistillerEchoCall(
    const mojo::String& in_message) {
  size_t size = sizeof(::dom_distiller::mojom::internal::DistillerJavaScriptService_HandleDistillerEchoCall_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_message, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kDistillerJavaScriptService_HandleDistillerEchoCall_Name, size);

  auto params =
      ::dom_distiller::mojom::internal::DistillerJavaScriptService_HandleDistillerEchoCall_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->message)::BaseType* message_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_message, builder.buffer(), &message_ptr, &serialization_context_);
  params->message.Set(message_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->message.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message in DistillerJavaScriptService.HandleDistillerEchoCall request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void DistillerJavaScriptServiceProxy::HandleDistillerFeedbackCall(
    bool in_good) {
  size_t size = sizeof(::dom_distiller::mojom::internal::DistillerJavaScriptService_HandleDistillerFeedbackCall_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kDistillerJavaScriptService_HandleDistillerFeedbackCall_Name, size);

  auto params =
      ::dom_distiller::mojom::internal::DistillerJavaScriptService_HandleDistillerFeedbackCall_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->good = in_good;
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void DistillerJavaScriptServiceProxy::HandleDistillerClosePanelCall(
    bool in_animate) {
  size_t size = sizeof(::dom_distiller::mojom::internal::DistillerJavaScriptService_HandleDistillerClosePanelCall_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kDistillerJavaScriptService_HandleDistillerClosePanelCall_Name, size);

  auto params =
      ::dom_distiller::mojom::internal::DistillerJavaScriptService_HandleDistillerClosePanelCall_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->animate = in_animate;
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void DistillerJavaScriptServiceProxy::HandleDistillerOpenSettingsCall(
    ) {
  size_t size = sizeof(::dom_distiller::mojom::internal::DistillerJavaScriptService_HandleDistillerOpenSettingsCall_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kDistillerJavaScriptService_HandleDistillerOpenSettingsCall_Name, size);

  auto params =
      ::dom_distiller::mojom::internal::DistillerJavaScriptService_HandleDistillerOpenSettingsCall_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

DistillerJavaScriptServiceStub::DistillerJavaScriptServiceStub()
    : sink_(nullptr),
      control_message_handler_(DistillerJavaScriptService::Version_) {
}

DistillerJavaScriptServiceStub::~DistillerJavaScriptServiceStub() {}

bool DistillerJavaScriptServiceStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kDistillerJavaScriptService_HandleDistillerEchoCall_Name: {
      internal::DistillerJavaScriptService_HandleDistillerEchoCall_Params_Data* params =
          reinterpret_cast<internal::DistillerJavaScriptService_HandleDistillerEchoCall_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      mojo::String p_message{};
      DistillerJavaScriptService_HandleDistillerEchoCall_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadMessage(&p_message))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DistillerJavaScriptService::HandleDistillerEchoCall deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "DistillerJavaScriptService::HandleDistillerEchoCall");
      mojo::internal::MessageDispatchContext context(message);
      sink_->HandleDistillerEchoCall(
std::move(p_message));
      return true;
    }
    case internal::kDistillerJavaScriptService_HandleDistillerFeedbackCall_Name: {
      internal::DistillerJavaScriptService_HandleDistillerFeedbackCall_Params_Data* params =
          reinterpret_cast<internal::DistillerJavaScriptService_HandleDistillerFeedbackCall_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      bool p_good{};
      DistillerJavaScriptService_HandleDistillerFeedbackCall_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_good = input_data_view.good();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DistillerJavaScriptService::HandleDistillerFeedbackCall deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "DistillerJavaScriptService::HandleDistillerFeedbackCall");
      mojo::internal::MessageDispatchContext context(message);
      sink_->HandleDistillerFeedbackCall(
std::move(p_good));
      return true;
    }
    case internal::kDistillerJavaScriptService_HandleDistillerClosePanelCall_Name: {
      internal::DistillerJavaScriptService_HandleDistillerClosePanelCall_Params_Data* params =
          reinterpret_cast<internal::DistillerJavaScriptService_HandleDistillerClosePanelCall_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      bool p_animate{};
      DistillerJavaScriptService_HandleDistillerClosePanelCall_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_animate = input_data_view.animate();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DistillerJavaScriptService::HandleDistillerClosePanelCall deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "DistillerJavaScriptService::HandleDistillerClosePanelCall");
      mojo::internal::MessageDispatchContext context(message);
      sink_->HandleDistillerClosePanelCall(
std::move(p_animate));
      return true;
    }
    case internal::kDistillerJavaScriptService_HandleDistillerOpenSettingsCall_Name: {
      internal::DistillerJavaScriptService_HandleDistillerOpenSettingsCall_Params_Data* params =
          reinterpret_cast<internal::DistillerJavaScriptService_HandleDistillerOpenSettingsCall_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      DistillerJavaScriptService_HandleDistillerOpenSettingsCall_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DistillerJavaScriptService::HandleDistillerOpenSettingsCall deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "DistillerJavaScriptService::HandleDistillerOpenSettingsCall");
      mojo::internal::MessageDispatchContext context(message);
      sink_->HandleDistillerOpenSettingsCall();
      return true;
    }
  }
  return false;
}

bool DistillerJavaScriptServiceStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kDistillerJavaScriptService_HandleDistillerEchoCall_Name: {
      break;
    }
    case internal::kDistillerJavaScriptService_HandleDistillerFeedbackCall_Name: {
      break;
    }
    case internal::kDistillerJavaScriptService_HandleDistillerClosePanelCall_Name: {
      break;
    }
    case internal::kDistillerJavaScriptService_HandleDistillerOpenSettingsCall_Name: {
      break;
    }
  }
  return false;
}

DistillerJavaScriptServiceRequestValidator::DistillerJavaScriptServiceRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool DistillerJavaScriptServiceRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "DistillerJavaScriptService RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kDistillerJavaScriptService_HandleDistillerEchoCall_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DistillerJavaScriptService_HandleDistillerEchoCall_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDistillerJavaScriptService_HandleDistillerFeedbackCall_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DistillerJavaScriptService_HandleDistillerFeedbackCall_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDistillerJavaScriptService_HandleDistillerClosePanelCall_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DistillerJavaScriptService_HandleDistillerClosePanelCall_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDistillerJavaScriptService_HandleDistillerOpenSettingsCall_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DistillerJavaScriptService_HandleDistillerOpenSettingsCall_Params_Data>(
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
}  // namespace dom_distiller

namespace mojo {

}  // namespace mojo


#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
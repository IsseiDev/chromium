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

#include "components/dom_distiller/content/common/distillability_service.mojom.h"

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

class DistillabilityService_NotifyIsDistillable_ParamsDataView {
 public:
  DistillabilityService_NotifyIsDistillable_ParamsDataView() {}

  DistillabilityService_NotifyIsDistillable_ParamsDataView(
      internal::DistillabilityService_NotifyIsDistillable_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool page_is_distillable() const {
    return data_->page_is_distillable;
  }
  bool is_last_update() const {
    return data_->is_last_update;
  }
 private:
  internal::DistillabilityService_NotifyIsDistillable_Params_Data* data_ = nullptr;
};




}  // namespace
const char DistillabilityService::Name_[] = "dom_distiller::mojom::DistillabilityService";
const uint32_t DistillabilityService::Version_;

DistillabilityServiceProxy::DistillabilityServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void DistillabilityServiceProxy::NotifyIsDistillable(
    bool in_page_is_distillable, bool in_is_last_update) {
  size_t size = sizeof(::dom_distiller::mojom::internal::DistillabilityService_NotifyIsDistillable_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kDistillabilityService_NotifyIsDistillable_Name, size);

  auto params =
      ::dom_distiller::mojom::internal::DistillabilityService_NotifyIsDistillable_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->page_is_distillable = in_page_is_distillable;
  params->is_last_update = in_is_last_update;
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

DistillabilityServiceStub::DistillabilityServiceStub()
    : sink_(nullptr),
      control_message_handler_(DistillabilityService::Version_) {
}

DistillabilityServiceStub::~DistillabilityServiceStub() {}

bool DistillabilityServiceStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kDistillabilityService_NotifyIsDistillable_Name: {
      internal::DistillabilityService_NotifyIsDistillable_Params_Data* params =
          reinterpret_cast<internal::DistillabilityService_NotifyIsDistillable_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      bool p_page_is_distillable{};
      bool p_is_last_update{};
      DistillabilityService_NotifyIsDistillable_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_page_is_distillable = input_data_view.page_is_distillable();
      p_is_last_update = input_data_view.is_last_update();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DistillabilityService::NotifyIsDistillable deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "DistillabilityService::NotifyIsDistillable");
      mojo::internal::MessageDispatchContext context(message);
      sink_->NotifyIsDistillable(
std::move(p_page_is_distillable), 
std::move(p_is_last_update));
      return true;
    }
  }
  return false;
}

bool DistillabilityServiceStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kDistillabilityService_NotifyIsDistillable_Name: {
      break;
    }
  }
  return false;
}

DistillabilityServiceRequestValidator::DistillabilityServiceRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool DistillabilityServiceRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "DistillabilityService RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kDistillabilityService_NotifyIsDistillable_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DistillabilityService_NotifyIsDistillable_Params_Data>(
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
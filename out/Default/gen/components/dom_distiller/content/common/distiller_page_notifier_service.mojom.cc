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

#include "components/dom_distiller/content/common/distiller_page_notifier_service.mojom.h"

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

class DistillerPageNotifierService_NotifyIsDistillerPage_ParamsDataView {
 public:
  DistillerPageNotifierService_NotifyIsDistillerPage_ParamsDataView() {}

  DistillerPageNotifierService_NotifyIsDistillerPage_ParamsDataView(
      internal::DistillerPageNotifierService_NotifyIsDistillerPage_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::DistillerPageNotifierService_NotifyIsDistillerPage_Params_Data* data_ = nullptr;
};




}  // namespace
const char DistillerPageNotifierService::Name_[] = "dom_distiller::mojom::DistillerPageNotifierService";
const uint32_t DistillerPageNotifierService::Version_;

DistillerPageNotifierServiceProxy::DistillerPageNotifierServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void DistillerPageNotifierServiceProxy::NotifyIsDistillerPage(
    ) {
  size_t size = sizeof(::dom_distiller::mojom::internal::DistillerPageNotifierService_NotifyIsDistillerPage_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kDistillerPageNotifierService_NotifyIsDistillerPage_Name, size);

  auto params =
      ::dom_distiller::mojom::internal::DistillerPageNotifierService_NotifyIsDistillerPage_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

DistillerPageNotifierServiceStub::DistillerPageNotifierServiceStub()
    : sink_(nullptr),
      control_message_handler_(DistillerPageNotifierService::Version_) {
}

DistillerPageNotifierServiceStub::~DistillerPageNotifierServiceStub() {}

bool DistillerPageNotifierServiceStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kDistillerPageNotifierService_NotifyIsDistillerPage_Name: {
      internal::DistillerPageNotifierService_NotifyIsDistillerPage_Params_Data* params =
          reinterpret_cast<internal::DistillerPageNotifierService_NotifyIsDistillerPage_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      DistillerPageNotifierService_NotifyIsDistillerPage_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DistillerPageNotifierService::NotifyIsDistillerPage deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "DistillerPageNotifierService::NotifyIsDistillerPage");
      mojo::internal::MessageDispatchContext context(message);
      sink_->NotifyIsDistillerPage();
      return true;
    }
  }
  return false;
}

bool DistillerPageNotifierServiceStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kDistillerPageNotifierService_NotifyIsDistillerPage_Name: {
      break;
    }
  }
  return false;
}

DistillerPageNotifierServiceRequestValidator::DistillerPageNotifierServiceRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool DistillerPageNotifierServiceRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "DistillerPageNotifierService RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kDistillerPageNotifierService_NotifyIsDistillerPage_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DistillerPageNotifierService_NotifyIsDistillerPage_Params_Data>(
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
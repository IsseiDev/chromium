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

#include "components/contextual_search/common/overlay_page_notifier_service.mojom.h"

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
namespace contextual_search {
namespace mojom {

namespace {

class OverlayPageNotifierService_NotifyIsContextualSearchOverlay_ParamsDataView {
 public:
  OverlayPageNotifierService_NotifyIsContextualSearchOverlay_ParamsDataView() {}

  OverlayPageNotifierService_NotifyIsContextualSearchOverlay_ParamsDataView(
      internal::OverlayPageNotifierService_NotifyIsContextualSearchOverlay_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::OverlayPageNotifierService_NotifyIsContextualSearchOverlay_Params_Data* data_ = nullptr;
};




}  // namespace
const char OverlayPageNotifierService::Name_[] = "contextual_search::mojom::OverlayPageNotifierService";
const uint32_t OverlayPageNotifierService::Version_;

OverlayPageNotifierServiceProxy::OverlayPageNotifierServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void OverlayPageNotifierServiceProxy::NotifyIsContextualSearchOverlay(
    ) {
  size_t size = sizeof(::contextual_search::mojom::internal::OverlayPageNotifierService_NotifyIsContextualSearchOverlay_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kOverlayPageNotifierService_NotifyIsContextualSearchOverlay_Name, size);

  auto params =
      ::contextual_search::mojom::internal::OverlayPageNotifierService_NotifyIsContextualSearchOverlay_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

OverlayPageNotifierServiceStub::OverlayPageNotifierServiceStub()
    : sink_(nullptr),
      control_message_handler_(OverlayPageNotifierService::Version_) {
}

OverlayPageNotifierServiceStub::~OverlayPageNotifierServiceStub() {}

bool OverlayPageNotifierServiceStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kOverlayPageNotifierService_NotifyIsContextualSearchOverlay_Name: {
      internal::OverlayPageNotifierService_NotifyIsContextualSearchOverlay_Params_Data* params =
          reinterpret_cast<internal::OverlayPageNotifierService_NotifyIsContextualSearchOverlay_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      OverlayPageNotifierService_NotifyIsContextualSearchOverlay_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "OverlayPageNotifierService::NotifyIsContextualSearchOverlay deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "OverlayPageNotifierService::NotifyIsContextualSearchOverlay");
      mojo::internal::MessageDispatchContext context(message);
      sink_->NotifyIsContextualSearchOverlay();
      return true;
    }
  }
  return false;
}

bool OverlayPageNotifierServiceStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kOverlayPageNotifierService_NotifyIsContextualSearchOverlay_Name: {
      break;
    }
  }
  return false;
}

OverlayPageNotifierServiceRequestValidator::OverlayPageNotifierServiceRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool OverlayPageNotifierServiceRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "OverlayPageNotifierService RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kOverlayPageNotifierService_NotifyIsContextualSearchOverlay_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::OverlayPageNotifierService_NotifyIsContextualSearchOverlay_Params_Data>(
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
}  // namespace contextual_search

namespace mojo {

}  // namespace mojo


#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
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

#include "components/contextual_search/common/contextual_search_js_api_service.mojom.h"

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

class ContextualSearchJsApiService_HandleSetCaption_ParamsDataView {
 public:
  ContextualSearchJsApiService_HandleSetCaption_ParamsDataView() {}

  ContextualSearchJsApiService_HandleSetCaption_ParamsDataView(
      internal::ContextualSearchJsApiService_HandleSetCaption_Params_Data* data,
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
  bool does_answer() const {
    return data_->does_answer;
  }
 private:
  internal::ContextualSearchJsApiService_HandleSetCaption_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void ContextualSearchJsApiService_HandleSetCaption_ParamsDataView::GetMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->message.Get();
  *output = mojo::StringDataView(pointer, context_);
}


}  // namespace
const char ContextualSearchJsApiService::Name_[] = "contextual_search::mojom::ContextualSearchJsApiService";
const uint32_t ContextualSearchJsApiService::Version_;

ContextualSearchJsApiServiceProxy::ContextualSearchJsApiServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void ContextualSearchJsApiServiceProxy::HandleSetCaption(
    const mojo::String& in_message, bool in_does_answer) {
  size_t size = sizeof(::contextual_search::mojom::internal::ContextualSearchJsApiService_HandleSetCaption_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_message, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kContextualSearchJsApiService_HandleSetCaption_Name, size);

  auto params =
      ::contextual_search::mojom::internal::ContextualSearchJsApiService_HandleSetCaption_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->message)::BaseType* message_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_message, builder.buffer(), &message_ptr, &serialization_context_);
  params->message.Set(message_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->message.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message in ContextualSearchJsApiService.HandleSetCaption request");
  params->does_answer = in_does_answer;
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

ContextualSearchJsApiServiceStub::ContextualSearchJsApiServiceStub()
    : sink_(nullptr),
      control_message_handler_(ContextualSearchJsApiService::Version_) {
}

ContextualSearchJsApiServiceStub::~ContextualSearchJsApiServiceStub() {}

bool ContextualSearchJsApiServiceStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kContextualSearchJsApiService_HandleSetCaption_Name: {
      internal::ContextualSearchJsApiService_HandleSetCaption_Params_Data* params =
          reinterpret_cast<internal::ContextualSearchJsApiService_HandleSetCaption_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      mojo::String p_message{};
      bool p_does_answer{};
      ContextualSearchJsApiService_HandleSetCaption_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadMessage(&p_message))
        success = false;
      p_does_answer = input_data_view.does_answer();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ContextualSearchJsApiService::HandleSetCaption deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ContextualSearchJsApiService::HandleSetCaption");
      mojo::internal::MessageDispatchContext context(message);
      sink_->HandleSetCaption(
std::move(p_message), 
std::move(p_does_answer));
      return true;
    }
  }
  return false;
}

bool ContextualSearchJsApiServiceStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kContextualSearchJsApiService_HandleSetCaption_Name: {
      break;
    }
  }
  return false;
}

ContextualSearchJsApiServiceRequestValidator::ContextualSearchJsApiServiceRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool ContextualSearchJsApiServiceRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "ContextualSearchJsApiService RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kContextualSearchJsApiService_HandleSetCaption_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ContextualSearchJsApiService_HandleSetCaption_Params_Data>(
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
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

#include "components/memory_coordinator/public/interfaces/memory_coordinator.mojom.h"

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
namespace memory_coordinator {
namespace mojom {

namespace {

class MemoryCoordinatorHandle_AddChild_ParamsDataView {
 public:
  MemoryCoordinatorHandle_AddChild_ParamsDataView() {}

  MemoryCoordinatorHandle_AddChild_ParamsDataView(
      internal::MemoryCoordinatorHandle_AddChild_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  ::memory_coordinator::mojom::ChildMemoryCoordinatorPtr TakeChild() {
    ::memory_coordinator::mojom::ChildMemoryCoordinatorPtr result;
    bool ret =
        mojo::internal::Deserialize<::memory_coordinator::mojom::ChildMemoryCoordinatorPtr>(
            &data_->child, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::MemoryCoordinatorHandle_AddChild_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




}  // namespace
const char MemoryCoordinatorHandle::Name_[] = "memory_coordinator::mojom::MemoryCoordinatorHandle";
const uint32_t MemoryCoordinatorHandle::Version_;

MemoryCoordinatorHandleProxy::MemoryCoordinatorHandleProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void MemoryCoordinatorHandleProxy::AddChild(
    ::memory_coordinator::mojom::ChildMemoryCoordinatorPtr in_child) {
  size_t size = sizeof(::memory_coordinator::mojom::internal::MemoryCoordinatorHandle_AddChild_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kMemoryCoordinatorHandle_AddChild_Name, size);

  auto params =
      ::memory_coordinator::mojom::internal::MemoryCoordinatorHandle_AddChild_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::memory_coordinator::mojom::ChildMemoryCoordinatorPtr>(
      in_child, &params->child, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->child),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid child in MemoryCoordinatorHandle.AddChild request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

MemoryCoordinatorHandleStub::MemoryCoordinatorHandleStub()
    : sink_(nullptr),
      control_message_handler_(MemoryCoordinatorHandle::Version_) {
}

MemoryCoordinatorHandleStub::~MemoryCoordinatorHandleStub() {}

bool MemoryCoordinatorHandleStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kMemoryCoordinatorHandle_AddChild_Name: {
      internal::MemoryCoordinatorHandle_AddChild_Params_Data* params =
          reinterpret_cast<internal::MemoryCoordinatorHandle_AddChild_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      ::memory_coordinator::mojom::ChildMemoryCoordinatorPtr p_child{};
      MemoryCoordinatorHandle_AddChild_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_child = input_data_view.TakeChild();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MemoryCoordinatorHandle::AddChild deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "MemoryCoordinatorHandle::AddChild");
      mojo::internal::MessageDispatchContext context(message);
      sink_->AddChild(
std::move(p_child));
      return true;
    }
  }
  return false;
}

bool MemoryCoordinatorHandleStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kMemoryCoordinatorHandle_AddChild_Name: {
      break;
    }
  }
  return false;
}

MemoryCoordinatorHandleRequestValidator::MemoryCoordinatorHandleRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool MemoryCoordinatorHandleRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "MemoryCoordinatorHandle RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kMemoryCoordinatorHandle_AddChild_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MemoryCoordinatorHandle_AddChild_Params_Data>(
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
}  // namespace memory_coordinator

namespace mojo {

}  // namespace mojo


#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
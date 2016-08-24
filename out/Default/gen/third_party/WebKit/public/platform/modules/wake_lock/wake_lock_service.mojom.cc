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

#include "third_party/WebKit/public/platform/modules/wake_lock/wake_lock_service.mojom.h"

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
#include "cc/ipc/surface_sequence_struct_traits.h"
#include "url/mojo/origin_struct_traits.h"
#include "content/common/bluetooth/web_bluetooth_device_id_struct_traits.h"
#include "cc/ipc/surface_id_struct_traits.h"
#include "url/mojo/url_gurl_struct_traits.h"
#include "device/bluetooth/public/interfaces/bluetooth_uuid_struct_traits.h"
namespace blink {
namespace mojom {

namespace {

class WakeLockService_RequestWakeLock_ParamsDataView {
 public:
  WakeLockService_RequestWakeLock_ParamsDataView() {}

  WakeLockService_RequestWakeLock_ParamsDataView(
      internal::WakeLockService_RequestWakeLock_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::WakeLockService_RequestWakeLock_Params_Data* data_ = nullptr;
};




class WakeLockService_CancelWakeLock_ParamsDataView {
 public:
  WakeLockService_CancelWakeLock_ParamsDataView() {}

  WakeLockService_CancelWakeLock_ParamsDataView(
      internal::WakeLockService_CancelWakeLock_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::WakeLockService_CancelWakeLock_Params_Data* data_ = nullptr;
};




}  // namespace
const char WakeLockService::Name_[] = "blink::mojom::WakeLockService";
const uint32_t WakeLockService::Version_;

WakeLockServiceProxy::WakeLockServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void WakeLockServiceProxy::RequestWakeLock(
    ) {
  size_t size = sizeof(::blink::mojom::internal::WakeLockService_RequestWakeLock_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kWakeLockService_RequestWakeLock_Name, size);

  auto params =
      ::blink::mojom::internal::WakeLockService_RequestWakeLock_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void WakeLockServiceProxy::CancelWakeLock(
    ) {
  size_t size = sizeof(::blink::mojom::internal::WakeLockService_CancelWakeLock_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kWakeLockService_CancelWakeLock_Name, size);

  auto params =
      ::blink::mojom::internal::WakeLockService_CancelWakeLock_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

WakeLockServiceStub::WakeLockServiceStub()
    : sink_(nullptr),
      control_message_handler_(WakeLockService::Version_) {
}

WakeLockServiceStub::~WakeLockServiceStub() {}

bool WakeLockServiceStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kWakeLockService_RequestWakeLock_Name: {
      internal::WakeLockService_RequestWakeLock_Params_Data* params =
          reinterpret_cast<internal::WakeLockService_RequestWakeLock_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      WakeLockService_RequestWakeLock_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WakeLockService::RequestWakeLock deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WakeLockService::RequestWakeLock");
      mojo::internal::MessageDispatchContext context(message);
      sink_->RequestWakeLock();
      return true;
    }
    case internal::kWakeLockService_CancelWakeLock_Name: {
      internal::WakeLockService_CancelWakeLock_Params_Data* params =
          reinterpret_cast<internal::WakeLockService_CancelWakeLock_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      WakeLockService_CancelWakeLock_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WakeLockService::CancelWakeLock deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WakeLockService::CancelWakeLock");
      mojo::internal::MessageDispatchContext context(message);
      sink_->CancelWakeLock();
      return true;
    }
  }
  return false;
}

bool WakeLockServiceStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kWakeLockService_RequestWakeLock_Name: {
      break;
    }
    case internal::kWakeLockService_CancelWakeLock_Name: {
      break;
    }
  }
  return false;
}

WakeLockServiceRequestValidator::WakeLockServiceRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool WakeLockServiceRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "WakeLockService RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kWakeLockService_RequestWakeLock_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WakeLockService_RequestWakeLock_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kWakeLockService_CancelWakeLock_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WakeLockService_CancelWakeLock_Params_Data>(
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

}  // namespace mojo


#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
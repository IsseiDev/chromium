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

#include "device/sensors/public/interfaces/motion.mojom.h"

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
namespace device {
namespace mojom {

namespace {

class MotionSensor_StartPolling_ParamsDataView {
 public:
  MotionSensor_StartPolling_ParamsDataView() {}

  MotionSensor_StartPolling_ParamsDataView(
      internal::MotionSensor_StartPolling_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::MotionSensor_StartPolling_Params_Data* data_ = nullptr;
};



class MotionSensor_StartPolling_ResponseParamsDataView {
 public:
  MotionSensor_StartPolling_ResponseParamsDataView() {}

  MotionSensor_StartPolling_ResponseParamsDataView(
      internal::MotionSensor_StartPolling_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  mojo::ScopedSharedBufferHandle TakeMemoryHandle() {
    mojo::ScopedSharedBufferHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedSharedBufferHandle>(
            &data_->memory_handle, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::MotionSensor_StartPolling_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




class MotionSensor_StopPolling_ParamsDataView {
 public:
  MotionSensor_StopPolling_ParamsDataView() {}

  MotionSensor_StopPolling_ParamsDataView(
      internal::MotionSensor_StopPolling_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::MotionSensor_StopPolling_Params_Data* data_ = nullptr;
};




}  // namespace
const char MotionSensor::Name_[] = "device::mojom::MotionSensor";
const uint32_t MotionSensor::Version_;

class MotionSensor_StartPolling_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  MotionSensor_StartPolling_ForwardToCallback(
      const MotionSensor::StartPollingCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  MotionSensor::StartPollingCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(MotionSensor_StartPolling_ForwardToCallback);
};
bool MotionSensor_StartPolling_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::MotionSensor_StartPolling_ResponseParams_Data* params =
      reinterpret_cast<internal::MotionSensor_StartPolling_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  mojo::ScopedSharedBufferHandle p_memory_handle{};
  MotionSensor_StartPolling_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  p_memory_handle = input_data_view.TakeMemoryHandle();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "MotionSensor::StartPolling response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_memory_handle));
  }
  return true;
}

MotionSensorProxy::MotionSensorProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void MotionSensorProxy::StartPolling(
    const StartPollingCallback& callback) {
  size_t size = sizeof(::device::mojom::internal::MotionSensor_StartPolling_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kMotionSensor_StartPolling_Name, size);

  auto params =
      ::device::mojom::internal::MotionSensor_StartPolling_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new MotionSensor_StartPolling_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void MotionSensorProxy::StopPolling(
    ) {
  size_t size = sizeof(::device::mojom::internal::MotionSensor_StopPolling_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kMotionSensor_StopPolling_Name, size);

  auto params =
      ::device::mojom::internal::MotionSensor_StopPolling_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}
class MotionSensor_StartPolling_ProxyToResponder {
 public:
  static MotionSensor::StartPollingCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<MotionSensor_StartPolling_ProxyToResponder> proxy(
        new MotionSensor_StartPolling_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&MotionSensor_StartPolling_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~MotionSensor_StartPolling_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "MotionSensor::StartPolling() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  MotionSensor_StartPolling_ProxyToResponder(
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
      mojo::ScopedSharedBufferHandle in_memory_handle);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(MotionSensor_StartPolling_ProxyToResponder);
};

void MotionSensor_StartPolling_ProxyToResponder::Run(
    mojo::ScopedSharedBufferHandle in_memory_handle) {
  size_t size = sizeof(::device::mojom::internal::MotionSensor_StartPolling_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kMotionSensor_StartPolling_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::device::mojom::internal::MotionSensor_StartPolling_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<mojo::ScopedSharedBufferHandle>(
      in_memory_handle, &params->memory_handle, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->memory_handle),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid memory_handle in MotionSensor.StartPolling response");
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

MotionSensorStub::MotionSensorStub()
    : sink_(nullptr),
      control_message_handler_(MotionSensor::Version_) {
}

MotionSensorStub::~MotionSensorStub() {}

bool MotionSensorStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kMotionSensor_StartPolling_Name: {
      break;
    }
    case internal::kMotionSensor_StopPolling_Name: {
      internal::MotionSensor_StopPolling_Params_Data* params =
          reinterpret_cast<internal::MotionSensor_StopPolling_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      MotionSensor_StopPolling_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MotionSensor::StopPolling deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "MotionSensor::StopPolling");
      mojo::internal::MessageDispatchContext context(message);
      sink_->StopPolling();
      return true;
    }
  }
  return false;
}

bool MotionSensorStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kMotionSensor_StartPolling_Name: {
      internal::MotionSensor_StartPolling_Params_Data* params =
          reinterpret_cast<internal::MotionSensor_StartPolling_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      MotionSensor_StartPolling_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MotionSensor::StartPolling deserializer");
        return false;
      }
      MotionSensor::StartPollingCallback callback =
          MotionSensor_StartPolling_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "MotionSensor::StartPolling");
      mojo::internal::MessageDispatchContext context(message);
      sink_->StartPolling(callback);
      return true;
    }
    case internal::kMotionSensor_StopPolling_Name: {
      break;
    }
  }
  return false;
}

MotionSensorRequestValidator::MotionSensorRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool MotionSensorRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "MotionSensor RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kMotionSensor_StartPolling_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MotionSensor_StartPolling_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kMotionSensor_StopPolling_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MotionSensor_StopPolling_Params_Data>(
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

MotionSensorResponseValidator::MotionSensorResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool MotionSensorResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "MotionSensor ResponseValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kMotionSensor_StartPolling_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::MotionSensor_StartPolling_ResponseParams_Data>(
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
}  // namespace device

namespace mojo {

}  // namespace mojo


#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
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

#include "media/mojo/interfaces/output_protection.mojom.h"

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

class OutputProtection_QueryStatus_ParamsDataView {
 public:
  OutputProtection_QueryStatus_ParamsDataView() {}

  OutputProtection_QueryStatus_ParamsDataView(
      internal::OutputProtection_QueryStatus_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::OutputProtection_QueryStatus_Params_Data* data_ = nullptr;
};



class OutputProtection_QueryStatus_ResponseParamsDataView {
 public:
  OutputProtection_QueryStatus_ResponseParamsDataView() {}

  OutputProtection_QueryStatus_ResponseParamsDataView(
      internal::OutputProtection_QueryStatus_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
  uint32_t link_mask() const {
    return data_->link_mask;
  }
  uint32_t protection_mask() const {
    return data_->protection_mask;
  }
 private:
  internal::OutputProtection_QueryStatus_ResponseParams_Data* data_ = nullptr;
};




class OutputProtection_EnableProtection_ParamsDataView {
 public:
  OutputProtection_EnableProtection_ParamsDataView() {}

  OutputProtection_EnableProtection_ParamsDataView(
      internal::OutputProtection_EnableProtection_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t desired_protection_mask() const {
    return data_->desired_protection_mask;
  }
 private:
  internal::OutputProtection_EnableProtection_Params_Data* data_ = nullptr;
};



class OutputProtection_EnableProtection_ResponseParamsDataView {
 public:
  OutputProtection_EnableProtection_ResponseParamsDataView() {}

  OutputProtection_EnableProtection_ResponseParamsDataView(
      internal::OutputProtection_EnableProtection_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::OutputProtection_EnableProtection_ResponseParams_Data* data_ = nullptr;
};




}  // namespace
const char OutputProtection::Name_[] = "media::mojom::OutputProtection";
const uint32_t OutputProtection::Version_;

class OutputProtection_QueryStatus_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  OutputProtection_QueryStatus_ForwardToCallback(
      const OutputProtection::QueryStatusCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  OutputProtection::QueryStatusCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(OutputProtection_QueryStatus_ForwardToCallback);
};
bool OutputProtection_QueryStatus_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::OutputProtection_QueryStatus_ResponseParams_Data* params =
      reinterpret_cast<internal::OutputProtection_QueryStatus_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  bool p_success{};
  uint32_t p_link_mask{};
  uint32_t p_protection_mask{};
  OutputProtection_QueryStatus_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  p_success = input_data_view.success();
  p_link_mask = input_data_view.link_mask();
  p_protection_mask = input_data_view.protection_mask();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "OutputProtection::QueryStatus response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_success), 
std::move(p_link_mask), 
std::move(p_protection_mask));
  }
  return true;
}

class OutputProtection_EnableProtection_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  OutputProtection_EnableProtection_ForwardToCallback(
      const OutputProtection::EnableProtectionCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  OutputProtection::EnableProtectionCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(OutputProtection_EnableProtection_ForwardToCallback);
};
bool OutputProtection_EnableProtection_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::OutputProtection_EnableProtection_ResponseParams_Data* params =
      reinterpret_cast<internal::OutputProtection_EnableProtection_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  bool p_success{};
  OutputProtection_EnableProtection_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "OutputProtection::EnableProtection response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_success));
  }
  return true;
}

OutputProtectionProxy::OutputProtectionProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void OutputProtectionProxy::QueryStatus(
    const QueryStatusCallback& callback) {
  size_t size = sizeof(::media::mojom::internal::OutputProtection_QueryStatus_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kOutputProtection_QueryStatus_Name, size);

  auto params =
      ::media::mojom::internal::OutputProtection_QueryStatus_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new OutputProtection_QueryStatus_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void OutputProtectionProxy::EnableProtection(
    uint32_t in_desired_protection_mask, const EnableProtectionCallback& callback) {
  size_t size = sizeof(::media::mojom::internal::OutputProtection_EnableProtection_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kOutputProtection_EnableProtection_Name, size);

  auto params =
      ::media::mojom::internal::OutputProtection_EnableProtection_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->desired_protection_mask = in_desired_protection_mask;
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new OutputProtection_EnableProtection_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
class OutputProtection_QueryStatus_ProxyToResponder {
 public:
  static OutputProtection::QueryStatusCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<OutputProtection_QueryStatus_ProxyToResponder> proxy(
        new OutputProtection_QueryStatus_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&OutputProtection_QueryStatus_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~OutputProtection_QueryStatus_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "OutputProtection::QueryStatus() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  OutputProtection_QueryStatus_ProxyToResponder(
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
      bool in_success, uint32_t in_link_mask, uint32_t in_protection_mask);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(OutputProtection_QueryStatus_ProxyToResponder);
};

void OutputProtection_QueryStatus_ProxyToResponder::Run(
    bool in_success, uint32_t in_link_mask, uint32_t in_protection_mask) {
  size_t size = sizeof(::media::mojom::internal::OutputProtection_QueryStatus_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kOutputProtection_QueryStatus_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::media::mojom::internal::OutputProtection_QueryStatus_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->success = in_success;
  params->link_mask = in_link_mask;
  params->protection_mask = in_protection_mask;
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
class OutputProtection_EnableProtection_ProxyToResponder {
 public:
  static OutputProtection::EnableProtectionCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<OutputProtection_EnableProtection_ProxyToResponder> proxy(
        new OutputProtection_EnableProtection_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&OutputProtection_EnableProtection_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~OutputProtection_EnableProtection_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "OutputProtection::EnableProtection() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  OutputProtection_EnableProtection_ProxyToResponder(
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
      bool in_success);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(OutputProtection_EnableProtection_ProxyToResponder);
};

void OutputProtection_EnableProtection_ProxyToResponder::Run(
    bool in_success) {
  size_t size = sizeof(::media::mojom::internal::OutputProtection_EnableProtection_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kOutputProtection_EnableProtection_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::media::mojom::internal::OutputProtection_EnableProtection_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->success = in_success;
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

OutputProtectionStub::OutputProtectionStub()
    : sink_(nullptr),
      control_message_handler_(OutputProtection::Version_) {
}

OutputProtectionStub::~OutputProtectionStub() {}

bool OutputProtectionStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kOutputProtection_QueryStatus_Name: {
      break;
    }
    case internal::kOutputProtection_EnableProtection_Name: {
      break;
    }
  }
  return false;
}

bool OutputProtectionStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kOutputProtection_QueryStatus_Name: {
      internal::OutputProtection_QueryStatus_Params_Data* params =
          reinterpret_cast<internal::OutputProtection_QueryStatus_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      OutputProtection_QueryStatus_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "OutputProtection::QueryStatus deserializer");
        return false;
      }
      OutputProtection::QueryStatusCallback callback =
          OutputProtection_QueryStatus_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "OutputProtection::QueryStatus");
      mojo::internal::MessageDispatchContext context(message);
      sink_->QueryStatus(callback);
      return true;
    }
    case internal::kOutputProtection_EnableProtection_Name: {
      internal::OutputProtection_EnableProtection_Params_Data* params =
          reinterpret_cast<internal::OutputProtection_EnableProtection_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      uint32_t p_desired_protection_mask{};
      OutputProtection_EnableProtection_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_desired_protection_mask = input_data_view.desired_protection_mask();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "OutputProtection::EnableProtection deserializer");
        return false;
      }
      OutputProtection::EnableProtectionCallback callback =
          OutputProtection_EnableProtection_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "OutputProtection::EnableProtection");
      mojo::internal::MessageDispatchContext context(message);
      sink_->EnableProtection(
std::move(p_desired_protection_mask), callback);
      return true;
    }
  }
  return false;
}

OutputProtectionRequestValidator::OutputProtectionRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool OutputProtectionRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "OutputProtection RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kOutputProtection_QueryStatus_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::OutputProtection_QueryStatus_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kOutputProtection_EnableProtection_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::OutputProtection_EnableProtection_Params_Data>(
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

OutputProtectionResponseValidator::OutputProtectionResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool OutputProtectionResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "OutputProtection ResponseValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kOutputProtection_QueryStatus_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::OutputProtection_QueryStatus_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kOutputProtection_EnableProtection_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::OutputProtection_EnableProtection_ResponseParams_Data>(
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
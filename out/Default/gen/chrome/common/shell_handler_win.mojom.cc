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

#include "chrome/common/shell_handler_win.mojom.h"

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
#include "skia/public/interfaces/bitmap_skbitmap_struct_traits.h"
#include "skia/public/interfaces/image_filter_struct_traits.h"
namespace mojom {

namespace {

class ShellHandler_IsPinnedToTaskbar_ParamsDataView {
 public:
  ShellHandler_IsPinnedToTaskbar_ParamsDataView() {}

  ShellHandler_IsPinnedToTaskbar_ParamsDataView(
      internal::ShellHandler_IsPinnedToTaskbar_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ShellHandler_IsPinnedToTaskbar_Params_Data* data_ = nullptr;
};



class ShellHandler_IsPinnedToTaskbar_ResponseParamsDataView {
 public:
  ShellHandler_IsPinnedToTaskbar_ResponseParamsDataView() {}

  ShellHandler_IsPinnedToTaskbar_ResponseParamsDataView(
      internal::ShellHandler_IsPinnedToTaskbar_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool succeeded() const {
    return data_->succeeded;
  }
  bool is_pinned_to_taskbar() const {
    return data_->is_pinned_to_taskbar;
  }
 private:
  internal::ShellHandler_IsPinnedToTaskbar_ResponseParams_Data* data_ = nullptr;
};




}  // namespace
const char ShellHandler::Name_[] = "mojom::ShellHandler";
const uint32_t ShellHandler::Version_;

class ShellHandler_IsPinnedToTaskbar_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ShellHandler_IsPinnedToTaskbar_ForwardToCallback(
      const ShellHandler::IsPinnedToTaskbarCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ShellHandler::IsPinnedToTaskbarCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(ShellHandler_IsPinnedToTaskbar_ForwardToCallback);
};
bool ShellHandler_IsPinnedToTaskbar_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::ShellHandler_IsPinnedToTaskbar_ResponseParams_Data* params =
      reinterpret_cast<internal::ShellHandler_IsPinnedToTaskbar_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  bool p_succeeded{};
  bool p_is_pinned_to_taskbar{};
  ShellHandler_IsPinnedToTaskbar_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  p_succeeded = input_data_view.succeeded();
  p_is_pinned_to_taskbar = input_data_view.is_pinned_to_taskbar();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "ShellHandler::IsPinnedToTaskbar response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_succeeded), 
std::move(p_is_pinned_to_taskbar));
  }
  return true;
}

ShellHandlerProxy::ShellHandlerProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void ShellHandlerProxy::IsPinnedToTaskbar(
    const IsPinnedToTaskbarCallback& callback) {
  size_t size = sizeof(::mojom::internal::ShellHandler_IsPinnedToTaskbar_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kShellHandler_IsPinnedToTaskbar_Name, size);

  auto params =
      ::mojom::internal::ShellHandler_IsPinnedToTaskbar_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new ShellHandler_IsPinnedToTaskbar_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
class ShellHandler_IsPinnedToTaskbar_ProxyToResponder {
 public:
  static ShellHandler::IsPinnedToTaskbarCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<ShellHandler_IsPinnedToTaskbar_ProxyToResponder> proxy(
        new ShellHandler_IsPinnedToTaskbar_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&ShellHandler_IsPinnedToTaskbar_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~ShellHandler_IsPinnedToTaskbar_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "ShellHandler::IsPinnedToTaskbar() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  ShellHandler_IsPinnedToTaskbar_ProxyToResponder(
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
      bool in_succeeded, bool in_is_pinned_to_taskbar);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(ShellHandler_IsPinnedToTaskbar_ProxyToResponder);
};

void ShellHandler_IsPinnedToTaskbar_ProxyToResponder::Run(
    bool in_succeeded, bool in_is_pinned_to_taskbar) {
  size_t size = sizeof(::mojom::internal::ShellHandler_IsPinnedToTaskbar_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kShellHandler_IsPinnedToTaskbar_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::mojom::internal::ShellHandler_IsPinnedToTaskbar_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->succeeded = in_succeeded;
  params->is_pinned_to_taskbar = in_is_pinned_to_taskbar;
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

ShellHandlerStub::ShellHandlerStub()
    : sink_(nullptr),
      control_message_handler_(ShellHandler::Version_) {
}

ShellHandlerStub::~ShellHandlerStub() {}

bool ShellHandlerStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kShellHandler_IsPinnedToTaskbar_Name: {
      break;
    }
  }
  return false;
}

bool ShellHandlerStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kShellHandler_IsPinnedToTaskbar_Name: {
      internal::ShellHandler_IsPinnedToTaskbar_Params_Data* params =
          reinterpret_cast<internal::ShellHandler_IsPinnedToTaskbar_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      ShellHandler_IsPinnedToTaskbar_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ShellHandler::IsPinnedToTaskbar deserializer");
        return false;
      }
      ShellHandler::IsPinnedToTaskbarCallback callback =
          ShellHandler_IsPinnedToTaskbar_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ShellHandler::IsPinnedToTaskbar");
      mojo::internal::MessageDispatchContext context(message);
      sink_->IsPinnedToTaskbar(callback);
      return true;
    }
  }
  return false;
}

ShellHandlerRequestValidator::ShellHandlerRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool ShellHandlerRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "ShellHandler RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kShellHandler_IsPinnedToTaskbar_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ShellHandler_IsPinnedToTaskbar_Params_Data>(
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

ShellHandlerResponseValidator::ShellHandlerResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool ShellHandlerResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "ShellHandler ResponseValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kShellHandler_IsPinnedToTaskbar_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ShellHandler_IsPinnedToTaskbar_ResponseParams_Data>(
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

namespace mojo {

}  // namespace mojo


#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
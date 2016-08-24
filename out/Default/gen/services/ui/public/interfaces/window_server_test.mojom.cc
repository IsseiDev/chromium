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

#include "services/ui/public/interfaces/window_server_test.mojom.h"

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
#include "cc/ipc/quads_struct_traits.h"
#include "ui/events/mojo/event_struct_traits.h"
#include "cc/ipc/surface_id_struct_traits.h"
#include "gpu/ipc/common/sync_token_struct_traits.h"
#include "gpu/ipc/common/gpu_command_buffer_traits.h"
#include "cc/ipc/shared_quad_state_struct_traits.h"
#include "ui/gfx/mojo/accelerated_widget_struct_traits.h"
#include "cc/ipc/transferable_resource_struct_traits.h"
#include "ui/gfx/mojo/buffer_types_enum_traits.h"
#include "cc/ipc/filter_operations_struct_traits.h"
#include "gpu/ipc/common/dx_diag_node_struct_traits.h"
#include "cc/ipc/render_pass_id_struct_traits.h"
#include "cc/ipc/filter_operation_struct_traits.h"
#include "services/ui/public/interfaces/display/display_struct_traits.h"
#include "ipc/ipc_message_utils.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "cc/ipc/render_pass_struct_traits.h"
#include "cc/ipc/compositor_frame_metadata_struct_traits.h"
#include "cc/ipc/surface_sequence_struct_traits.h"
#include "ui/events/mojo/latency_info_struct_traits.h"
#include "ui/gfx/mojo/transform_struct_traits.h"
#include "skia/public/interfaces/bitmap_skbitmap_struct_traits.h"
#include "ui/gfx/mojo/selection_bound_struct_traits.h"
#include "gpu/ipc/common/mailbox_holder_struct_traits.h"
#include "cc/ipc/begin_frame_args_struct_traits.h"
#include "gpu/ipc/common/gpu_info_struct_traits.h"
#include "cc/ipc/selection_struct_traits.h"
#include "gpu/ipc/common/mailbox_struct_traits.h"
#include "mojo/common/common_custom_types_struct_traits.h"
#include "skia/public/interfaces/image_filter_struct_traits.h"
#include "cc/ipc/returned_resource_struct_traits.h"
#include "cc/ipc/compositor_frame_struct_traits.h"
namespace ui {
namespace mojom {

namespace {

class WindowServerTest_EnsureClientHasDrawnWindow_ParamsDataView {
 public:
  WindowServerTest_EnsureClientHasDrawnWindow_ParamsDataView() {}

  WindowServerTest_EnsureClientHasDrawnWindow_ParamsDataView(
      internal::WindowServerTest_EnsureClientHasDrawnWindow_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetClientNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadClientName(UserType* output) {
    auto pointer = data_->client_name.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::WindowServerTest_EnsureClientHasDrawnWindow_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void WindowServerTest_EnsureClientHasDrawnWindow_ParamsDataView::GetClientNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->client_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}

class WindowServerTest_EnsureClientHasDrawnWindow_ResponseParamsDataView {
 public:
  WindowServerTest_EnsureClientHasDrawnWindow_ResponseParamsDataView() {}

  WindowServerTest_EnsureClientHasDrawnWindow_ResponseParamsDataView(
      internal::WindowServerTest_EnsureClientHasDrawnWindow_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::WindowServerTest_EnsureClientHasDrawnWindow_ResponseParams_Data* data_ = nullptr;
};




}  // namespace
const char WindowServerTest::Name_[] = "ui::mojom::WindowServerTest";
const uint32_t WindowServerTest::Version_;

class WindowServerTest_EnsureClientHasDrawnWindow_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  WindowServerTest_EnsureClientHasDrawnWindow_ForwardToCallback(
      const WindowServerTest::EnsureClientHasDrawnWindowCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  WindowServerTest::EnsureClientHasDrawnWindowCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(WindowServerTest_EnsureClientHasDrawnWindow_ForwardToCallback);
};
bool WindowServerTest_EnsureClientHasDrawnWindow_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::WindowServerTest_EnsureClientHasDrawnWindow_ResponseParams_Data* params =
      reinterpret_cast<internal::WindowServerTest_EnsureClientHasDrawnWindow_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  bool p_success{};
  WindowServerTest_EnsureClientHasDrawnWindow_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "WindowServerTest::EnsureClientHasDrawnWindow response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_success));
  }
  return true;
}

WindowServerTestProxy::WindowServerTestProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void WindowServerTestProxy::EnsureClientHasDrawnWindow(
    const mojo::String& in_client_name, const EnsureClientHasDrawnWindowCallback& callback) {
  size_t size = sizeof(::ui::mojom::internal::WindowServerTest_EnsureClientHasDrawnWindow_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_client_name, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kWindowServerTest_EnsureClientHasDrawnWindow_Name, size);

  auto params =
      ::ui::mojom::internal::WindowServerTest_EnsureClientHasDrawnWindow_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->client_name)::BaseType* client_name_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_client_name, builder.buffer(), &client_name_ptr, &serialization_context_);
  params->client_name.Set(client_name_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->client_name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null client_name in WindowServerTest.EnsureClientHasDrawnWindow request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new WindowServerTest_EnsureClientHasDrawnWindow_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
class WindowServerTest_EnsureClientHasDrawnWindow_ProxyToResponder {
 public:
  static WindowServerTest::EnsureClientHasDrawnWindowCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<WindowServerTest_EnsureClientHasDrawnWindow_ProxyToResponder> proxy(
        new WindowServerTest_EnsureClientHasDrawnWindow_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&WindowServerTest_EnsureClientHasDrawnWindow_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~WindowServerTest_EnsureClientHasDrawnWindow_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "WindowServerTest::EnsureClientHasDrawnWindow() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  WindowServerTest_EnsureClientHasDrawnWindow_ProxyToResponder(
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

  DISALLOW_COPY_AND_ASSIGN(WindowServerTest_EnsureClientHasDrawnWindow_ProxyToResponder);
};

void WindowServerTest_EnsureClientHasDrawnWindow_ProxyToResponder::Run(
    bool in_success) {
  size_t size = sizeof(::ui::mojom::internal::WindowServerTest_EnsureClientHasDrawnWindow_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kWindowServerTest_EnsureClientHasDrawnWindow_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::ui::mojom::internal::WindowServerTest_EnsureClientHasDrawnWindow_ResponseParams_Data::New(builder.buffer());
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

WindowServerTestStub::WindowServerTestStub()
    : sink_(nullptr),
      control_message_handler_(WindowServerTest::Version_) {
}

WindowServerTestStub::~WindowServerTestStub() {}

bool WindowServerTestStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kWindowServerTest_EnsureClientHasDrawnWindow_Name: {
      break;
    }
  }
  return false;
}

bool WindowServerTestStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kWindowServerTest_EnsureClientHasDrawnWindow_Name: {
      internal::WindowServerTest_EnsureClientHasDrawnWindow_Params_Data* params =
          reinterpret_cast<internal::WindowServerTest_EnsureClientHasDrawnWindow_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      mojo::String p_client_name{};
      WindowServerTest_EnsureClientHasDrawnWindow_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadClientName(&p_client_name))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowServerTest::EnsureClientHasDrawnWindow deserializer");
        return false;
      }
      WindowServerTest::EnsureClientHasDrawnWindowCallback callback =
          WindowServerTest_EnsureClientHasDrawnWindow_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WindowServerTest::EnsureClientHasDrawnWindow");
      mojo::internal::MessageDispatchContext context(message);
      sink_->EnsureClientHasDrawnWindow(
std::move(p_client_name), callback);
      return true;
    }
  }
  return false;
}

WindowServerTestRequestValidator::WindowServerTestRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool WindowServerTestRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "WindowServerTest RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kWindowServerTest_EnsureClientHasDrawnWindow_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowServerTest_EnsureClientHasDrawnWindow_Params_Data>(
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

WindowServerTestResponseValidator::WindowServerTestResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool WindowServerTestResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "WindowServerTest ResponseValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kWindowServerTest_EnsureClientHasDrawnWindow_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowServerTest_EnsureClientHasDrawnWindow_ResponseParams_Data>(
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
}  // namespace ui

namespace mojo {

}  // namespace mojo


#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
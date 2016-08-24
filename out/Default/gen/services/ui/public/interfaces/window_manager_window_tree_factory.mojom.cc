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

#include "services/ui/public/interfaces/window_manager_window_tree_factory.mojom.h"

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

class WindowManagerWindowTreeFactory_CreateWindowTree_ParamsDataView {
 public:
  WindowManagerWindowTreeFactory_CreateWindowTree_ParamsDataView() {}

  WindowManagerWindowTreeFactory_CreateWindowTree_ParamsDataView(
      internal::WindowManagerWindowTreeFactory_CreateWindowTree_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  ::ui::mojom::WindowTreeRequest TakeTreeRequest() {
    ::ui::mojom::WindowTreeRequest result;
    bool ret =
        mojo::internal::Deserialize<::ui::mojom::WindowTreeRequest>(
            &data_->tree_request, &result, context_);
    DCHECK(ret);
    return result;
  }
  ::ui::mojom::WindowTreeClientPtr TakeClient() {
    ::ui::mojom::WindowTreeClientPtr result;
    bool ret =
        mojo::internal::Deserialize<::ui::mojom::WindowTreeClientPtr>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::WindowManagerWindowTreeFactory_CreateWindowTree_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




}  // namespace
const char WindowManagerWindowTreeFactory::Name_[] = "ui::mojom::WindowManagerWindowTreeFactory";
const uint32_t WindowManagerWindowTreeFactory::Version_;

WindowManagerWindowTreeFactoryProxy::WindowManagerWindowTreeFactoryProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void WindowManagerWindowTreeFactoryProxy::CreateWindowTree(
    ::ui::mojom::WindowTreeRequest in_tree_request, ::ui::mojom::WindowTreeClientPtr in_client) {
  size_t size = sizeof(::ui::mojom::internal::WindowManagerWindowTreeFactory_CreateWindowTree_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kWindowManagerWindowTreeFactory_CreateWindowTree_Name, size);

  auto params =
      ::ui::mojom::internal::WindowManagerWindowTreeFactory_CreateWindowTree_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::ui::mojom::WindowTreeRequest>(
      in_tree_request, &params->tree_request, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->tree_request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid tree_request in WindowManagerWindowTreeFactory.CreateWindowTree request");
  mojo::internal::Serialize<::ui::mojom::WindowTreeClientPtr>(
      in_client, &params->client, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in WindowManagerWindowTreeFactory.CreateWindowTree request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

WindowManagerWindowTreeFactoryStub::WindowManagerWindowTreeFactoryStub()
    : sink_(nullptr),
      control_message_handler_(WindowManagerWindowTreeFactory::Version_) {
}

WindowManagerWindowTreeFactoryStub::~WindowManagerWindowTreeFactoryStub() {}

bool WindowManagerWindowTreeFactoryStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kWindowManagerWindowTreeFactory_CreateWindowTree_Name: {
      internal::WindowManagerWindowTreeFactory_CreateWindowTree_Params_Data* params =
          reinterpret_cast<internal::WindowManagerWindowTreeFactory_CreateWindowTree_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      ::ui::mojom::WindowTreeRequest p_tree_request{};
      ::ui::mojom::WindowTreeClientPtr p_client{};
      WindowManagerWindowTreeFactory_CreateWindowTree_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_tree_request = input_data_view.TakeTreeRequest();
      p_client = input_data_view.TakeClient();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManagerWindowTreeFactory::CreateWindowTree deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WindowManagerWindowTreeFactory::CreateWindowTree");
      mojo::internal::MessageDispatchContext context(message);
      sink_->CreateWindowTree(
std::move(p_tree_request), 
std::move(p_client));
      return true;
    }
  }
  return false;
}

bool WindowManagerWindowTreeFactoryStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kWindowManagerWindowTreeFactory_CreateWindowTree_Name: {
      break;
    }
  }
  return false;
}

WindowManagerWindowTreeFactoryRequestValidator::WindowManagerWindowTreeFactoryRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool WindowManagerWindowTreeFactoryRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "WindowManagerWindowTreeFactory RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kWindowManagerWindowTreeFactory_CreateWindowTree_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManagerWindowTreeFactory_CreateWindowTree_Params_Data>(
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
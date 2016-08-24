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

#include "services/ui/public/interfaces/window_tree_host.mojom.h"

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

class WindowTreeHost_SetSize_ParamsDataView {
 public:
  WindowTreeHost_SetSize_ParamsDataView() {}

  WindowTreeHost_SetSize_ParamsDataView(
      internal::WindowTreeHost_SetSize_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSizeDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  bool ReadSize(UserType* output) {
    auto pointer = data_->size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizePtr>(
        pointer, output, context_);
  }
 private:
  internal::WindowTreeHost_SetSize_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void WindowTreeHost_SetSize_ParamsDataView::GetSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}


class WindowTreeHost_SetTitle_ParamsDataView {
 public:
  WindowTreeHost_SetTitle_ParamsDataView() {}

  WindowTreeHost_SetTitle_ParamsDataView(
      internal::WindowTreeHost_SetTitle_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTitleDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadTitle(UserType* output) {
    auto pointer = data_->title.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::WindowTreeHost_SetTitle_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void WindowTreeHost_SetTitle_ParamsDataView::GetTitleDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->title.Get();
  *output = mojo::StringDataView(pointer, context_);
}


class WindowTreeHostFactory_CreateWindowTreeHost_ParamsDataView {
 public:
  WindowTreeHostFactory_CreateWindowTreeHost_ParamsDataView() {}

  WindowTreeHostFactory_CreateWindowTreeHost_ParamsDataView(
      internal::WindowTreeHostFactory_CreateWindowTreeHost_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  WindowTreeHostRequest TakeWindowTreeHost() {
    WindowTreeHostRequest result;
    bool ret =
        mojo::internal::Deserialize<::ui::mojom::WindowTreeHostRequest>(
            &data_->window_tree_host, &result, context_);
    DCHECK(ret);
    return result;
  }
  ::ui::mojom::WindowTreeClientPtr TakeTreeClient() {
    ::ui::mojom::WindowTreeClientPtr result;
    bool ret =
        mojo::internal::Deserialize<::ui::mojom::WindowTreeClientPtr>(
            &data_->tree_client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::WindowTreeHostFactory_CreateWindowTreeHost_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




}  // namespace
const char WindowTreeHost::Name_[] = "ui::mojom::WindowTreeHost";
const uint32_t WindowTreeHost::Version_;

WindowTreeHostProxy::WindowTreeHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void WindowTreeHostProxy::SetSize(
    const gfx::Size& in_size) {
  size_t size = sizeof(::ui::mojom::internal::WindowTreeHost_SetSize_Params_Data);
  size += mojo::internal::PrepareToSerialize<::gfx::mojom::SizePtr>(
      in_size, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kWindowTreeHost_SetSize_Name, size);

  auto params =
      ::ui::mojom::internal::WindowTreeHost_SetSize_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->size)::BaseType* size_ptr;
  mojo::internal::Serialize<::gfx::mojom::SizePtr>(
      in_size, builder.buffer(), &size_ptr, &serialization_context_);
  params->size.Set(size_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->size.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null size in WindowTreeHost.SetSize request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void WindowTreeHostProxy::SetTitle(
    const mojo::String& in_title) {
  size_t size = sizeof(::ui::mojom::internal::WindowTreeHost_SetTitle_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_title, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kWindowTreeHost_SetTitle_Name, size);

  auto params =
      ::ui::mojom::internal::WindowTreeHost_SetTitle_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->title)::BaseType* title_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_title, builder.buffer(), &title_ptr, &serialization_context_);
  params->title.Set(title_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->title.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null title in WindowTreeHost.SetTitle request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

WindowTreeHostStub::WindowTreeHostStub()
    : sink_(nullptr),
      control_message_handler_(WindowTreeHost::Version_) {
}

WindowTreeHostStub::~WindowTreeHostStub() {}

bool WindowTreeHostStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kWindowTreeHost_SetSize_Name: {
      internal::WindowTreeHost_SetSize_Params_Data* params =
          reinterpret_cast<internal::WindowTreeHost_SetSize_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      gfx::Size p_size{};
      WindowTreeHost_SetSize_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadSize(&p_size))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTreeHost::SetSize deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WindowTreeHost::SetSize");
      mojo::internal::MessageDispatchContext context(message);
      sink_->SetSize(
std::move(p_size));
      return true;
    }
    case internal::kWindowTreeHost_SetTitle_Name: {
      internal::WindowTreeHost_SetTitle_Params_Data* params =
          reinterpret_cast<internal::WindowTreeHost_SetTitle_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      mojo::String p_title{};
      WindowTreeHost_SetTitle_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadTitle(&p_title))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTreeHost::SetTitle deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WindowTreeHost::SetTitle");
      mojo::internal::MessageDispatchContext context(message);
      sink_->SetTitle(
std::move(p_title));
      return true;
    }
  }
  return false;
}

bool WindowTreeHostStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kWindowTreeHost_SetSize_Name: {
      break;
    }
    case internal::kWindowTreeHost_SetTitle_Name: {
      break;
    }
  }
  return false;
}

WindowTreeHostRequestValidator::WindowTreeHostRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool WindowTreeHostRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "WindowTreeHost RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kWindowTreeHost_SetSize_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeHost_SetSize_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kWindowTreeHost_SetTitle_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeHost_SetTitle_Params_Data>(
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

const char WindowTreeHostFactory::Name_[] = "ui::mojom::WindowTreeHostFactory";
const uint32_t WindowTreeHostFactory::Version_;

WindowTreeHostFactoryProxy::WindowTreeHostFactoryProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void WindowTreeHostFactoryProxy::CreateWindowTreeHost(
    WindowTreeHostRequest in_window_tree_host, ::ui::mojom::WindowTreeClientPtr in_tree_client) {
  size_t size = sizeof(::ui::mojom::internal::WindowTreeHostFactory_CreateWindowTreeHost_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kWindowTreeHostFactory_CreateWindowTreeHost_Name, size);

  auto params =
      ::ui::mojom::internal::WindowTreeHostFactory_CreateWindowTreeHost_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::ui::mojom::WindowTreeHostRequest>(
      in_window_tree_host, &params->window_tree_host, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->window_tree_host),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid window_tree_host in WindowTreeHostFactory.CreateWindowTreeHost request");
  mojo::internal::Serialize<::ui::mojom::WindowTreeClientPtr>(
      in_tree_client, &params->tree_client, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->tree_client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid tree_client in WindowTreeHostFactory.CreateWindowTreeHost request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

WindowTreeHostFactoryStub::WindowTreeHostFactoryStub()
    : sink_(nullptr),
      control_message_handler_(WindowTreeHostFactory::Version_) {
}

WindowTreeHostFactoryStub::~WindowTreeHostFactoryStub() {}

bool WindowTreeHostFactoryStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kWindowTreeHostFactory_CreateWindowTreeHost_Name: {
      internal::WindowTreeHostFactory_CreateWindowTreeHost_Params_Data* params =
          reinterpret_cast<internal::WindowTreeHostFactory_CreateWindowTreeHost_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      WindowTreeHostRequest p_window_tree_host{};
      ::ui::mojom::WindowTreeClientPtr p_tree_client{};
      WindowTreeHostFactory_CreateWindowTreeHost_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_window_tree_host = input_data_view.TakeWindowTreeHost();
      p_tree_client = input_data_view.TakeTreeClient();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTreeHostFactory::CreateWindowTreeHost deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WindowTreeHostFactory::CreateWindowTreeHost");
      mojo::internal::MessageDispatchContext context(message);
      sink_->CreateWindowTreeHost(
std::move(p_window_tree_host), 
std::move(p_tree_client));
      return true;
    }
  }
  return false;
}

bool WindowTreeHostFactoryStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kWindowTreeHostFactory_CreateWindowTreeHost_Name: {
      break;
    }
  }
  return false;
}

WindowTreeHostFactoryRequestValidator::WindowTreeHostFactoryRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool WindowTreeHostFactoryRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "WindowTreeHostFactory RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kWindowTreeHostFactory_CreateWindowTreeHost_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeHostFactory_CreateWindowTreeHost_Params_Data>(
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
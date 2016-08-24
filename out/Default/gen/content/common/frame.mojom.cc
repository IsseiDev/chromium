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

#include "content/common/frame.mojom.h"

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
#include "url/mojo/origin_struct_traits.h"
#include "ui/events/mojo/event_struct_traits.h"
#include "content/common/bluetooth/web_bluetooth_device_id_struct_traits.h"
#include "cc/ipc/surface_id_struct_traits.h"
#include "gpu/ipc/common/mailbox_struct_traits.h"
#include "gpu/ipc/common/gpu_command_buffer_traits.h"
#include "cc/ipc/shared_quad_state_struct_traits.h"
#include "ui/gfx/mojo/accelerated_widget_struct_traits.h"
#include "cc/ipc/transferable_resource_struct_traits.h"
#include "ui/gfx/mojo/buffer_types_enum_traits.h"
#include "cc/ipc/filter_operations_struct_traits.h"
#include "gpu/ipc/common/dx_diag_node_struct_traits.h"
#include "cc/ipc/render_pass_id_struct_traits.h"
#include "services/shell/public/cpp/identity_struct_traits.h"
#include "cc/ipc/filter_operation_struct_traits.h"
#include "services/ui/public/interfaces/display/display_struct_traits.h"
#include "ipc/ipc_message_utils.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "cc/ipc/render_pass_struct_traits.h"
#include "cc/ipc/compositor_frame_metadata_struct_traits.h"
#include "cc/ipc/surface_sequence_struct_traits.h"
#include "ui/events/mojo/latency_info_struct_traits.h"
#include "ui/gfx/mojo/transform_struct_traits.h"
#include "content/common/resource_messages.h"
#include "skia/public/interfaces/bitmap_skbitmap_struct_traits.h"
#include "ui/gfx/mojo/selection_bound_struct_traits.h"
#include "url/mojo/url_gurl_struct_traits.h"
#include "device/bluetooth/public/interfaces/bluetooth_uuid_struct_traits.h"
#include "gpu/ipc/common/mailbox_holder_struct_traits.h"
#include "cc/ipc/begin_frame_args_struct_traits.h"
#include "gpu/ipc/common/gpu_info_struct_traits.h"
#include "cc/ipc/selection_struct_traits.h"
#include "services/shell/public/cpp/capabilities_struct_traits.h"
#include "gpu/ipc/common/sync_token_struct_traits.h"
#include "mojo/common/common_custom_types_struct_traits.h"
#include "skia/public/interfaces/image_filter_struct_traits.h"
#include "cc/ipc/returned_resource_struct_traits.h"
#include "cc/ipc/compositor_frame_struct_traits.h"
namespace content {
namespace mojom {

namespace {

class Frame_GetInterfaceProvider_ParamsDataView {
 public:
  Frame_GetInterfaceProvider_ParamsDataView() {}

  Frame_GetInterfaceProvider_ParamsDataView(
      internal::Frame_GetInterfaceProvider_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  ::shell::mojom::InterfaceProviderRequest TakeInterfaces() {
    ::shell::mojom::InterfaceProviderRequest result;
    bool ret =
        mojo::internal::Deserialize<::shell::mojom::InterfaceProviderRequest>(
            &data_->interfaces, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Frame_GetInterfaceProvider_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




class FrameHost_GetInterfaceProvider_ParamsDataView {
 public:
  FrameHost_GetInterfaceProvider_ParamsDataView() {}

  FrameHost_GetInterfaceProvider_ParamsDataView(
      internal::FrameHost_GetInterfaceProvider_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  ::shell::mojom::InterfaceProviderRequest TakeInterfaces() {
    ::shell::mojom::InterfaceProviderRequest result;
    bool ret =
        mojo::internal::Deserialize<::shell::mojom::InterfaceProviderRequest>(
            &data_->interfaces, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::FrameHost_GetInterfaceProvider_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




class FrameFactory_CreateFrame_ParamsDataView {
 public:
  FrameFactory_CreateFrame_ParamsDataView() {}

  FrameFactory_CreateFrame_ParamsDataView(
      internal::FrameFactory_CreateFrame_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t frame_routing_id() const {
    return data_->frame_routing_id;
  }
  FrameRequest TakeFrame() {
    FrameRequest result;
    bool ret =
        mojo::internal::Deserialize<::content::mojom::FrameRequest>(
            &data_->frame, &result, context_);
    DCHECK(ret);
    return result;
  }
  FrameHostPtr TakeHost() {
    FrameHostPtr result;
    bool ret =
        mojo::internal::Deserialize<::content::mojom::FrameHostPtr>(
            &data_->host, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::FrameFactory_CreateFrame_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




}  // namespace
const char Frame::Name_[] = "content::mojom::Frame";
const uint32_t Frame::Version_;

FrameProxy::FrameProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void FrameProxy::GetInterfaceProvider(
    ::shell::mojom::InterfaceProviderRequest in_interfaces) {
  size_t size = sizeof(::content::mojom::internal::Frame_GetInterfaceProvider_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kFrame_GetInterfaceProvider_Name, size);

  auto params =
      ::content::mojom::internal::Frame_GetInterfaceProvider_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::shell::mojom::InterfaceProviderRequest>(
      in_interfaces, &params->interfaces, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->interfaces),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid interfaces in Frame.GetInterfaceProvider request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

FrameStub::FrameStub()
    : sink_(nullptr),
      control_message_handler_(Frame::Version_) {
}

FrameStub::~FrameStub() {}

bool FrameStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kFrame_GetInterfaceProvider_Name: {
      internal::Frame_GetInterfaceProvider_Params_Data* params =
          reinterpret_cast<internal::Frame_GetInterfaceProvider_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      ::shell::mojom::InterfaceProviderRequest p_interfaces{};
      Frame_GetInterfaceProvider_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_interfaces = input_data_view.TakeInterfaces();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Frame::GetInterfaceProvider deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "Frame::GetInterfaceProvider");
      mojo::internal::MessageDispatchContext context(message);
      sink_->GetInterfaceProvider(
std::move(p_interfaces));
      return true;
    }
  }
  return false;
}

bool FrameStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kFrame_GetInterfaceProvider_Name: {
      break;
    }
  }
  return false;
}

FrameRequestValidator::FrameRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool FrameRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "Frame RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kFrame_GetInterfaceProvider_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Frame_GetInterfaceProvider_Params_Data>(
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

const char FrameHost::Name_[] = "content::mojom::FrameHost";
const uint32_t FrameHost::Version_;

FrameHostProxy::FrameHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void FrameHostProxy::GetInterfaceProvider(
    ::shell::mojom::InterfaceProviderRequest in_interfaces) {
  size_t size = sizeof(::content::mojom::internal::FrameHost_GetInterfaceProvider_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kFrameHost_GetInterfaceProvider_Name, size);

  auto params =
      ::content::mojom::internal::FrameHost_GetInterfaceProvider_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::shell::mojom::InterfaceProviderRequest>(
      in_interfaces, &params->interfaces, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->interfaces),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid interfaces in FrameHost.GetInterfaceProvider request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

FrameHostStub::FrameHostStub()
    : sink_(nullptr),
      control_message_handler_(FrameHost::Version_) {
}

FrameHostStub::~FrameHostStub() {}

bool FrameHostStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kFrameHost_GetInterfaceProvider_Name: {
      internal::FrameHost_GetInterfaceProvider_Params_Data* params =
          reinterpret_cast<internal::FrameHost_GetInterfaceProvider_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      ::shell::mojom::InterfaceProviderRequest p_interfaces{};
      FrameHost_GetInterfaceProvider_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_interfaces = input_data_view.TakeInterfaces();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameHost::GetInterfaceProvider deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "FrameHost::GetInterfaceProvider");
      mojo::internal::MessageDispatchContext context(message);
      sink_->GetInterfaceProvider(
std::move(p_interfaces));
      return true;
    }
  }
  return false;
}

bool FrameHostStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kFrameHost_GetInterfaceProvider_Name: {
      break;
    }
  }
  return false;
}

FrameHostRequestValidator::FrameHostRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool FrameHostRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "FrameHost RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kFrameHost_GetInterfaceProvider_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameHost_GetInterfaceProvider_Params_Data>(
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

const char FrameFactory::Name_[] = "content::mojom::FrameFactory";
const uint32_t FrameFactory::Version_;

FrameFactoryProxy::FrameFactoryProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void FrameFactoryProxy::CreateFrame(
    int32_t in_frame_routing_id, FrameRequest in_frame, FrameHostPtr in_host) {
  size_t size = sizeof(::content::mojom::internal::FrameFactory_CreateFrame_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kFrameFactory_CreateFrame_Name, size);

  auto params =
      ::content::mojom::internal::FrameFactory_CreateFrame_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->frame_routing_id = in_frame_routing_id;
  mojo::internal::Serialize<::content::mojom::FrameRequest>(
      in_frame, &params->frame, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->frame),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid frame in FrameFactory.CreateFrame request");
  mojo::internal::Serialize<::content::mojom::FrameHostPtr>(
      in_host, &params->host, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->host),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid host in FrameFactory.CreateFrame request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

FrameFactoryStub::FrameFactoryStub()
    : sink_(nullptr),
      control_message_handler_(FrameFactory::Version_) {
}

FrameFactoryStub::~FrameFactoryStub() {}

bool FrameFactoryStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kFrameFactory_CreateFrame_Name: {
      internal::FrameFactory_CreateFrame_Params_Data* params =
          reinterpret_cast<internal::FrameFactory_CreateFrame_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      int32_t p_frame_routing_id{};
      FrameRequest p_frame{};
      FrameHostPtr p_host{};
      FrameFactory_CreateFrame_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_frame_routing_id = input_data_view.frame_routing_id();
      p_frame = input_data_view.TakeFrame();
      p_host = input_data_view.TakeHost();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameFactory::CreateFrame deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "FrameFactory::CreateFrame");
      mojo::internal::MessageDispatchContext context(message);
      sink_->CreateFrame(
std::move(p_frame_routing_id), 
std::move(p_frame), 
std::move(p_host));
      return true;
    }
  }
  return false;
}

bool FrameFactoryStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kFrameFactory_CreateFrame_Name: {
      break;
    }
  }
  return false;
}

FrameFactoryRequestValidator::FrameFactoryRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool FrameFactoryRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "FrameFactory RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kFrameFactory_CreateFrame_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameFactory_CreateFrame_Params_Data>(
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
}  // namespace content

namespace mojo {

}  // namespace mojo


#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
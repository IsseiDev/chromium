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

#include "content/common/url_loader.mojom.h"

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

class URLLoader_FollowRedirect_ParamsDataView {
 public:
  URLLoader_FollowRedirect_ParamsDataView() {}

  URLLoader_FollowRedirect_ParamsDataView(
      internal::URLLoader_FollowRedirect_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::URLLoader_FollowRedirect_Params_Data* data_ = nullptr;
};




class URLLoader_Cancel_ParamsDataView {
 public:
  URLLoader_Cancel_ParamsDataView() {}

  URLLoader_Cancel_ParamsDataView(
      internal::URLLoader_Cancel_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::URLLoader_Cancel_Params_Data* data_ = nullptr;
};




class URLLoaderClient_OnReceiveResponse_ParamsDataView {
 public:
  URLLoaderClient_OnReceiveResponse_ParamsDataView() {}

  URLLoaderClient_OnReceiveResponse_ParamsDataView(
      internal::URLLoaderClient_OnReceiveResponse_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetHeadDataView(
      URLResponseHeadDataView* output);

  template <typename UserType>
  bool ReadHead(UserType* output) {
    auto pointer = data_->head.Get();
    return mojo::internal::Deserialize<::content::mojom::URLResponseHeadPtr>(
        pointer, output, context_);
  }
 private:
  internal::URLLoaderClient_OnReceiveResponse_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void URLLoaderClient_OnReceiveResponse_ParamsDataView::GetHeadDataView(
    URLResponseHeadDataView* output) {
  auto pointer = data_->head.Get();
  *output = URLResponseHeadDataView(pointer, context_);
}


class URLLoaderClient_OnStartLoadingResponseBody_ParamsDataView {
 public:
  URLLoaderClient_OnStartLoadingResponseBody_ParamsDataView() {}

  URLLoaderClient_OnStartLoadingResponseBody_ParamsDataView(
      internal::URLLoaderClient_OnStartLoadingResponseBody_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  mojo::ScopedDataPipeConsumerHandle TakeBody() {
    mojo::ScopedDataPipeConsumerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeConsumerHandle>(
            &data_->body, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::URLLoaderClient_OnStartLoadingResponseBody_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




class URLLoaderClient_OnComplete_ParamsDataView {
 public:
  URLLoaderClient_OnComplete_ParamsDataView() {}

  URLLoaderClient_OnComplete_ParamsDataView(
      internal::URLLoaderClient_OnComplete_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCompletionStatusDataView(
      URLLoaderStatusDataView* output);

  template <typename UserType>
  bool ReadCompletionStatus(UserType* output) {
    auto pointer = data_->completion_status.Get();
    return mojo::internal::Deserialize<::content::mojom::URLLoaderStatusPtr>(
        pointer, output, context_);
  }
 private:
  internal::URLLoaderClient_OnComplete_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void URLLoaderClient_OnComplete_ParamsDataView::GetCompletionStatusDataView(
    URLLoaderStatusDataView* output) {
  auto pointer = data_->completion_status.Get();
  *output = URLLoaderStatusDataView(pointer, context_);
}


}  // namespace
const char URLLoader::Name_[] = "content::mojom::URLLoader";
const uint32_t URLLoader::Version_;

URLLoaderProxy::URLLoaderProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void URLLoaderProxy::FollowRedirect(
    ) {
  size_t size = sizeof(::content::mojom::internal::URLLoader_FollowRedirect_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kURLLoader_FollowRedirect_Name, size);

  auto params =
      ::content::mojom::internal::URLLoader_FollowRedirect_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void URLLoaderProxy::Cancel(
    ) {
  size_t size = sizeof(::content::mojom::internal::URLLoader_Cancel_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kURLLoader_Cancel_Name, size);

  auto params =
      ::content::mojom::internal::URLLoader_Cancel_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

URLLoaderStub::URLLoaderStub()
    : sink_(nullptr),
      control_message_handler_(URLLoader::Version_) {
}

URLLoaderStub::~URLLoaderStub() {}

bool URLLoaderStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kURLLoader_FollowRedirect_Name: {
      internal::URLLoader_FollowRedirect_Params_Data* params =
          reinterpret_cast<internal::URLLoader_FollowRedirect_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      URLLoader_FollowRedirect_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "URLLoader::FollowRedirect deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "URLLoader::FollowRedirect");
      mojo::internal::MessageDispatchContext context(message);
      sink_->FollowRedirect();
      return true;
    }
    case internal::kURLLoader_Cancel_Name: {
      internal::URLLoader_Cancel_Params_Data* params =
          reinterpret_cast<internal::URLLoader_Cancel_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      URLLoader_Cancel_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "URLLoader::Cancel deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "URLLoader::Cancel");
      mojo::internal::MessageDispatchContext context(message);
      sink_->Cancel();
      return true;
    }
  }
  return false;
}

bool URLLoaderStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kURLLoader_FollowRedirect_Name: {
      break;
    }
    case internal::kURLLoader_Cancel_Name: {
      break;
    }
  }
  return false;
}

URLLoaderRequestValidator::URLLoaderRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool URLLoaderRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "URLLoader RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kURLLoader_FollowRedirect_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::URLLoader_FollowRedirect_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kURLLoader_Cancel_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::URLLoader_Cancel_Params_Data>(
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

const char URLLoaderClient::Name_[] = "content::mojom::URLLoaderClient";
const uint32_t URLLoaderClient::Version_;

URLLoaderClientProxy::URLLoaderClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void URLLoaderClientProxy::OnReceiveResponse(
    const content::ResourceResponseHead& in_head) {
  size_t size = sizeof(::content::mojom::internal::URLLoaderClient_OnReceiveResponse_Params_Data);
  size += mojo::internal::PrepareToSerialize<::content::mojom::URLResponseHeadPtr>(
      in_head, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kURLLoaderClient_OnReceiveResponse_Name, size);

  auto params =
      ::content::mojom::internal::URLLoaderClient_OnReceiveResponse_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->head)::BaseType* head_ptr;
  mojo::internal::Serialize<::content::mojom::URLResponseHeadPtr>(
      in_head, builder.buffer(), &head_ptr, &serialization_context_);
  params->head.Set(head_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->head.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null head in URLLoaderClient.OnReceiveResponse request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void URLLoaderClientProxy::OnStartLoadingResponseBody(
    mojo::ScopedDataPipeConsumerHandle in_body) {
  size_t size = sizeof(::content::mojom::internal::URLLoaderClient_OnStartLoadingResponseBody_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kURLLoaderClient_OnStartLoadingResponseBody_Name, size);

  auto params =
      ::content::mojom::internal::URLLoaderClient_OnStartLoadingResponseBody_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<mojo::ScopedDataPipeConsumerHandle>(
      in_body, &params->body, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->body),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid body in URLLoaderClient.OnStartLoadingResponseBody request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void URLLoaderClientProxy::OnComplete(
    const content::ResourceRequestCompletionStatus& in_completion_status) {
  size_t size = sizeof(::content::mojom::internal::URLLoaderClient_OnComplete_Params_Data);
  size += mojo::internal::PrepareToSerialize<::content::mojom::URLLoaderStatusPtr>(
      in_completion_status, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kURLLoaderClient_OnComplete_Name, size);

  auto params =
      ::content::mojom::internal::URLLoaderClient_OnComplete_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->completion_status)::BaseType* completion_status_ptr;
  mojo::internal::Serialize<::content::mojom::URLLoaderStatusPtr>(
      in_completion_status, builder.buffer(), &completion_status_ptr, &serialization_context_);
  params->completion_status.Set(completion_status_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->completion_status.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null completion_status in URLLoaderClient.OnComplete request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

URLLoaderClientStub::URLLoaderClientStub()
    : sink_(nullptr),
      control_message_handler_(URLLoaderClient::Version_) {
}

URLLoaderClientStub::~URLLoaderClientStub() {}

bool URLLoaderClientStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kURLLoaderClient_OnReceiveResponse_Name: {
      internal::URLLoaderClient_OnReceiveResponse_Params_Data* params =
          reinterpret_cast<internal::URLLoaderClient_OnReceiveResponse_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      content::ResourceResponseHead p_head{};
      URLLoaderClient_OnReceiveResponse_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadHead(&p_head))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "URLLoaderClient::OnReceiveResponse deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "URLLoaderClient::OnReceiveResponse");
      mojo::internal::MessageDispatchContext context(message);
      sink_->OnReceiveResponse(
std::move(p_head));
      return true;
    }
    case internal::kURLLoaderClient_OnStartLoadingResponseBody_Name: {
      internal::URLLoaderClient_OnStartLoadingResponseBody_Params_Data* params =
          reinterpret_cast<internal::URLLoaderClient_OnStartLoadingResponseBody_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      mojo::ScopedDataPipeConsumerHandle p_body{};
      URLLoaderClient_OnStartLoadingResponseBody_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_body = input_data_view.TakeBody();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "URLLoaderClient::OnStartLoadingResponseBody deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "URLLoaderClient::OnStartLoadingResponseBody");
      mojo::internal::MessageDispatchContext context(message);
      sink_->OnStartLoadingResponseBody(
std::move(p_body));
      return true;
    }
    case internal::kURLLoaderClient_OnComplete_Name: {
      internal::URLLoaderClient_OnComplete_Params_Data* params =
          reinterpret_cast<internal::URLLoaderClient_OnComplete_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      content::ResourceRequestCompletionStatus p_completion_status{};
      URLLoaderClient_OnComplete_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadCompletionStatus(&p_completion_status))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "URLLoaderClient::OnComplete deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "URLLoaderClient::OnComplete");
      mojo::internal::MessageDispatchContext context(message);
      sink_->OnComplete(
std::move(p_completion_status));
      return true;
    }
  }
  return false;
}

bool URLLoaderClientStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kURLLoaderClient_OnReceiveResponse_Name: {
      break;
    }
    case internal::kURLLoaderClient_OnStartLoadingResponseBody_Name: {
      break;
    }
    case internal::kURLLoaderClient_OnComplete_Name: {
      break;
    }
  }
  return false;
}

URLLoaderClientRequestValidator::URLLoaderClientRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool URLLoaderClientRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "URLLoaderClient RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kURLLoaderClient_OnReceiveResponse_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::URLLoaderClient_OnReceiveResponse_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kURLLoaderClient_OnStartLoadingResponseBody_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::URLLoaderClient_OnStartLoadingResponseBody_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kURLLoaderClient_OnComplete_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::URLLoaderClient_OnComplete_Params_Data>(
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
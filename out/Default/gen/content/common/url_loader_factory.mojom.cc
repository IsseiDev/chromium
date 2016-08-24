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

#include "content/common/url_loader_factory.mojom.h"

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

class URLLoaderFactory_CreateLoaderAndStart_ParamsDataView {
 public:
  URLLoaderFactory_CreateLoaderAndStart_ParamsDataView() {}

  URLLoaderFactory_CreateLoaderAndStart_ParamsDataView(
      internal::URLLoaderFactory_CreateLoaderAndStart_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  ::content::mojom::URLLoaderRequest TakeLoader() {
    ::content::mojom::URLLoaderRequest result;
    bool ret =
        mojo::internal::Deserialize<::content::mojom::URLLoaderRequest>(
            &data_->loader, &result, context_);
    DCHECK(ret);
    return result;
  }
  int32_t request_id() const {
    return data_->request_id;
  }
  inline void GetRequestDataView(
      ::content::mojom::URLRequestDataView* output);

  template <typename UserType>
  bool ReadRequest(UserType* output) {
    auto pointer = data_->request.Get();
    return mojo::internal::Deserialize<::content::mojom::URLRequestPtr>(
        pointer, output, context_);
  }
  ::content::mojom::URLLoaderClientPtr TakeClient() {
    ::content::mojom::URLLoaderClientPtr result;
    bool ret =
        mojo::internal::Deserialize<::content::mojom::URLLoaderClientPtr>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::URLLoaderFactory_CreateLoaderAndStart_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void URLLoaderFactory_CreateLoaderAndStart_ParamsDataView::GetRequestDataView(
    ::content::mojom::URLRequestDataView* output) {
  auto pointer = data_->request.Get();
  *output = ::content::mojom::URLRequestDataView(pointer, context_);
}


}  // namespace
const char URLLoaderFactory::Name_[] = "content::mojom::URLLoaderFactory";
const uint32_t URLLoaderFactory::Version_;

URLLoaderFactoryProxy::URLLoaderFactoryProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void URLLoaderFactoryProxy::CreateLoaderAndStart(
    ::content::mojom::URLLoaderRequest in_loader, int32_t in_request_id, const content::ResourceRequest& in_request, ::content::mojom::URLLoaderClientPtr in_client) {
  size_t size = sizeof(::content::mojom::internal::URLLoaderFactory_CreateLoaderAndStart_Params_Data);
  size += mojo::internal::PrepareToSerialize<::content::mojom::URLRequestPtr>(
      in_request, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kURLLoaderFactory_CreateLoaderAndStart_Name, size);

  auto params =
      ::content::mojom::internal::URLLoaderFactory_CreateLoaderAndStart_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::content::mojom::URLLoaderRequest>(
      in_loader, &params->loader, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->loader),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid loader in URLLoaderFactory.CreateLoaderAndStart request");
  params->request_id = in_request_id;
  typename decltype(params->request)::BaseType* request_ptr;
  mojo::internal::Serialize<::content::mojom::URLRequestPtr>(
      in_request, builder.buffer(), &request_ptr, &serialization_context_);
  params->request.Set(request_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->request.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null request in URLLoaderFactory.CreateLoaderAndStart request");
  mojo::internal::Serialize<::content::mojom::URLLoaderClientPtr>(
      in_client, &params->client, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in URLLoaderFactory.CreateLoaderAndStart request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

URLLoaderFactoryStub::URLLoaderFactoryStub()
    : sink_(nullptr),
      control_message_handler_(URLLoaderFactory::Version_) {
}

URLLoaderFactoryStub::~URLLoaderFactoryStub() {}

bool URLLoaderFactoryStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kURLLoaderFactory_CreateLoaderAndStart_Name: {
      internal::URLLoaderFactory_CreateLoaderAndStart_Params_Data* params =
          reinterpret_cast<internal::URLLoaderFactory_CreateLoaderAndStart_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      ::content::mojom::URLLoaderRequest p_loader{};
      int32_t p_request_id{};
      content::ResourceRequest p_request{};
      ::content::mojom::URLLoaderClientPtr p_client{};
      URLLoaderFactory_CreateLoaderAndStart_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_loader = input_data_view.TakeLoader();
      p_request_id = input_data_view.request_id();
      if (!input_data_view.ReadRequest(&p_request))
        success = false;
      p_client = input_data_view.TakeClient();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "URLLoaderFactory::CreateLoaderAndStart deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "URLLoaderFactory::CreateLoaderAndStart");
      mojo::internal::MessageDispatchContext context(message);
      sink_->CreateLoaderAndStart(
std::move(p_loader), 
std::move(p_request_id), 
std::move(p_request), 
std::move(p_client));
      return true;
    }
  }
  return false;
}

bool URLLoaderFactoryStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kURLLoaderFactory_CreateLoaderAndStart_Name: {
      break;
    }
  }
  return false;
}

URLLoaderFactoryRequestValidator::URLLoaderFactoryRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool URLLoaderFactoryRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "URLLoaderFactory RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kURLLoaderFactory_CreateLoaderAndStart_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::URLLoaderFactory_CreateLoaderAndStart_Params_Data>(
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
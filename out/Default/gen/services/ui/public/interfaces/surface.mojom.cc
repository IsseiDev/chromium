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

#include "services/ui/public/interfaces/surface.mojom.h"

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

class Surface_SubmitCompositorFrame_ParamsDataView {
 public:
  Surface_SubmitCompositorFrame_ParamsDataView() {}

  Surface_SubmitCompositorFrame_ParamsDataView(
      internal::Surface_SubmitCompositorFrame_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFrameDataView(
      ::cc::mojom::CompositorFrameDataView* output);

  template <typename UserType>
  bool ReadFrame(UserType* output) {
    auto pointer = data_->frame.Get();
    return mojo::internal::Deserialize<::cc::mojom::CompositorFramePtr>(
        pointer, output, context_);
  }
 private:
  internal::Surface_SubmitCompositorFrame_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void Surface_SubmitCompositorFrame_ParamsDataView::GetFrameDataView(
    ::cc::mojom::CompositorFrameDataView* output) {
  auto pointer = data_->frame.Get();
  *output = ::cc::mojom::CompositorFrameDataView(pointer, context_);
}

class Surface_SubmitCompositorFrame_ResponseParamsDataView {
 public:
  Surface_SubmitCompositorFrame_ResponseParamsDataView() {}

  Surface_SubmitCompositorFrame_ResponseParamsDataView(
      internal::Surface_SubmitCompositorFrame_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Surface_SubmitCompositorFrame_ResponseParams_Data* data_ = nullptr;
};




class SurfaceClient_ReturnResources_ParamsDataView {
 public:
  SurfaceClient_ReturnResources_ParamsDataView() {}

  SurfaceClient_ReturnResources_ParamsDataView(
      internal::SurfaceClient_ReturnResources_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResourcesDataView(
      mojo::ArrayDataView<::cc::mojom::ReturnedResourceDataView>* output);

  template <typename UserType>
  bool ReadResources(UserType* output) {
    auto pointer = data_->resources.Get();
    return mojo::internal::Deserialize<mojo::Array<::cc::mojom::ReturnedResourcePtr>>(
        pointer, output, context_);
  }
 private:
  internal::SurfaceClient_ReturnResources_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void SurfaceClient_ReturnResources_ParamsDataView::GetResourcesDataView(
    mojo::ArrayDataView<::cc::mojom::ReturnedResourceDataView>* output) {
  auto pointer = data_->resources.Get();
  *output = mojo::ArrayDataView<::cc::mojom::ReturnedResourceDataView>(pointer, context_);
}


}  // namespace
const char Surface::Name_[] = "ui::mojom::Surface";
const uint32_t Surface::Version_;

class Surface_SubmitCompositorFrame_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Surface_SubmitCompositorFrame_ForwardToCallback(
      const Surface::SubmitCompositorFrameCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Surface::SubmitCompositorFrameCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(Surface_SubmitCompositorFrame_ForwardToCallback);
};
bool Surface_SubmitCompositorFrame_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::Surface_SubmitCompositorFrame_ResponseParams_Data* params =
      reinterpret_cast<internal::Surface_SubmitCompositorFrame_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  Surface_SubmitCompositorFrame_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Surface::SubmitCompositorFrame response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run();
  }
  return true;
}

SurfaceProxy::SurfaceProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void SurfaceProxy::SubmitCompositorFrame(
    cc::CompositorFrame in_frame, const SubmitCompositorFrameCallback& callback) {
  size_t size = sizeof(::ui::mojom::internal::Surface_SubmitCompositorFrame_Params_Data);
  size += mojo::internal::PrepareToSerialize<::cc::mojom::CompositorFramePtr>(
      in_frame, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kSurface_SubmitCompositorFrame_Name, size);

  auto params =
      ::ui::mojom::internal::Surface_SubmitCompositorFrame_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->frame)::BaseType* frame_ptr;
  mojo::internal::Serialize<::cc::mojom::CompositorFramePtr>(
      in_frame, builder.buffer(), &frame_ptr, &serialization_context_);
  params->frame.Set(frame_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->frame.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null frame in Surface.SubmitCompositorFrame request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new Surface_SubmitCompositorFrame_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
class Surface_SubmitCompositorFrame_ProxyToResponder {
 public:
  static Surface::SubmitCompositorFrameCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<Surface_SubmitCompositorFrame_ProxyToResponder> proxy(
        new Surface_SubmitCompositorFrame_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&Surface_SubmitCompositorFrame_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~Surface_SubmitCompositorFrame_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "Surface::SubmitCompositorFrame() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  Surface_SubmitCompositorFrame_ProxyToResponder(
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
      );

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(Surface_SubmitCompositorFrame_ProxyToResponder);
};

void Surface_SubmitCompositorFrame_ProxyToResponder::Run(
    ) {
  size_t size = sizeof(::ui::mojom::internal::Surface_SubmitCompositorFrame_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kSurface_SubmitCompositorFrame_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::ui::mojom::internal::Surface_SubmitCompositorFrame_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
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

SurfaceStub::SurfaceStub()
    : sink_(nullptr),
      control_message_handler_(Surface::Version_) {
}

SurfaceStub::~SurfaceStub() {}

bool SurfaceStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kSurface_SubmitCompositorFrame_Name: {
      break;
    }
  }
  return false;
}

bool SurfaceStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kSurface_SubmitCompositorFrame_Name: {
      internal::Surface_SubmitCompositorFrame_Params_Data* params =
          reinterpret_cast<internal::Surface_SubmitCompositorFrame_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      cc::CompositorFrame p_frame{};
      Surface_SubmitCompositorFrame_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadFrame(&p_frame))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Surface::SubmitCompositorFrame deserializer");
        return false;
      }
      Surface::SubmitCompositorFrameCallback callback =
          Surface_SubmitCompositorFrame_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "Surface::SubmitCompositorFrame");
      mojo::internal::MessageDispatchContext context(message);
      sink_->SubmitCompositorFrame(
std::move(p_frame), callback);
      return true;
    }
  }
  return false;
}

SurfaceRequestValidator::SurfaceRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool SurfaceRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "Surface RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kSurface_SubmitCompositorFrame_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Surface_SubmitCompositorFrame_Params_Data>(
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

SurfaceResponseValidator::SurfaceResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool SurfaceResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "Surface ResponseValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kSurface_SubmitCompositorFrame_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Surface_SubmitCompositorFrame_ResponseParams_Data>(
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
const char SurfaceClient::Name_[] = "ui::mojom::SurfaceClient";
const uint32_t SurfaceClient::Version_;

SurfaceClientProxy::SurfaceClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void SurfaceClientProxy::ReturnResources(
    mojo::Array<cc::ReturnedResource> in_resources) {
  size_t size = sizeof(::ui::mojom::internal::SurfaceClient_ReturnResources_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::Array<::cc::mojom::ReturnedResourcePtr>>(
      in_resources, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kSurfaceClient_ReturnResources_Name, size);

  auto params =
      ::ui::mojom::internal::SurfaceClient_ReturnResources_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->resources)::BaseType* resources_ptr;
  const mojo::internal::ContainerValidateParams resources_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::Array<::cc::mojom::ReturnedResourcePtr>>(
      in_resources, builder.buffer(), &resources_ptr, &resources_validate_params,
      &serialization_context_);
  params->resources.Set(resources_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->resources.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null resources in SurfaceClient.ReturnResources request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

SurfaceClientStub::SurfaceClientStub()
    : sink_(nullptr),
      control_message_handler_(SurfaceClient::Version_) {
}

SurfaceClientStub::~SurfaceClientStub() {}

bool SurfaceClientStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kSurfaceClient_ReturnResources_Name: {
      internal::SurfaceClient_ReturnResources_Params_Data* params =
          reinterpret_cast<internal::SurfaceClient_ReturnResources_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      mojo::Array<cc::ReturnedResource> p_resources{};
      SurfaceClient_ReturnResources_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadResources(&p_resources))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SurfaceClient::ReturnResources deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "SurfaceClient::ReturnResources");
      mojo::internal::MessageDispatchContext context(message);
      sink_->ReturnResources(
std::move(p_resources));
      return true;
    }
  }
  return false;
}

bool SurfaceClientStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kSurfaceClient_ReturnResources_Name: {
      break;
    }
  }
  return false;
}

SurfaceClientRequestValidator::SurfaceClientRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool SurfaceClientRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "SurfaceClient RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kSurfaceClient_ReturnResources_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SurfaceClient_ReturnResources_Params_Data>(
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
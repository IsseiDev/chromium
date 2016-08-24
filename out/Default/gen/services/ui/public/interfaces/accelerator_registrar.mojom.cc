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

#include "services/ui/public/interfaces/accelerator_registrar.mojom.h"

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

class AcceleratorHandler_OnAccelerator_ParamsDataView {
 public:
  AcceleratorHandler_OnAccelerator_ParamsDataView() {}

  AcceleratorHandler_OnAccelerator_ParamsDataView(
      internal::AcceleratorHandler_OnAccelerator_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t id() const {
    return data_->id;
  }
  inline void GetEventDataView(
      ::ui::mojom::EventDataView* output);

  template <typename UserType>
  bool ReadEvent(UserType* output) {
    auto pointer = data_->event.Get();
    return mojo::internal::Deserialize<::ui::mojom::EventPtr>(
        pointer, output, context_);
  }
 private:
  internal::AcceleratorHandler_OnAccelerator_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void AcceleratorHandler_OnAccelerator_ParamsDataView::GetEventDataView(
    ::ui::mojom::EventDataView* output) {
  auto pointer = data_->event.Get();
  *output = ::ui::mojom::EventDataView(pointer, context_);
}


class AcceleratorRegistrar_SetHandler_ParamsDataView {
 public:
  AcceleratorRegistrar_SetHandler_ParamsDataView() {}

  AcceleratorRegistrar_SetHandler_ParamsDataView(
      internal::AcceleratorRegistrar_SetHandler_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  AcceleratorHandlerPtr TakeHandler() {
    AcceleratorHandlerPtr result;
    bool ret =
        mojo::internal::Deserialize<::ui::mojom::AcceleratorHandlerPtr>(
            &data_->handler, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::AcceleratorRegistrar_SetHandler_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




class AcceleratorRegistrar_AddAccelerator_ParamsDataView {
 public:
  AcceleratorRegistrar_AddAccelerator_ParamsDataView() {}

  AcceleratorRegistrar_AddAccelerator_ParamsDataView(
      internal::AcceleratorRegistrar_AddAccelerator_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t id() const {
    return data_->id;
  }
  inline void GetMatcherDataView(
      ::ui::mojom::EventMatcherDataView* output);

  template <typename UserType>
  bool ReadMatcher(UserType* output) {
    auto pointer = data_->matcher.Get();
    return mojo::internal::Deserialize<::ui::mojom::EventMatcherPtr>(
        pointer, output, context_);
  }
 private:
  internal::AcceleratorRegistrar_AddAccelerator_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void AcceleratorRegistrar_AddAccelerator_ParamsDataView::GetMatcherDataView(
    ::ui::mojom::EventMatcherDataView* output) {
  auto pointer = data_->matcher.Get();
  *output = ::ui::mojom::EventMatcherDataView(pointer, context_);
}

class AcceleratorRegistrar_AddAccelerator_ResponseParamsDataView {
 public:
  AcceleratorRegistrar_AddAccelerator_ResponseParamsDataView() {}

  AcceleratorRegistrar_AddAccelerator_ResponseParamsDataView(
      internal::AcceleratorRegistrar_AddAccelerator_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::AcceleratorRegistrar_AddAccelerator_ResponseParams_Data* data_ = nullptr;
};




class AcceleratorRegistrar_RemoveAccelerator_ParamsDataView {
 public:
  AcceleratorRegistrar_RemoveAccelerator_ParamsDataView() {}

  AcceleratorRegistrar_RemoveAccelerator_ParamsDataView(
      internal::AcceleratorRegistrar_RemoveAccelerator_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t id() const {
    return data_->id;
  }
 private:
  internal::AcceleratorRegistrar_RemoveAccelerator_Params_Data* data_ = nullptr;
};




}  // namespace
const char AcceleratorHandler::Name_[] = "ui::mojom::AcceleratorHandler";
const uint32_t AcceleratorHandler::Version_;

AcceleratorHandlerProxy::AcceleratorHandlerProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void AcceleratorHandlerProxy::OnAccelerator(
    uint32_t in_id, std::unique_ptr<ui::Event> in_event) {
  size_t size = sizeof(::ui::mojom::internal::AcceleratorHandler_OnAccelerator_Params_Data);
  size += mojo::internal::PrepareToSerialize<::ui::mojom::EventPtr>(
      in_event, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kAcceleratorHandler_OnAccelerator_Name, size);

  auto params =
      ::ui::mojom::internal::AcceleratorHandler_OnAccelerator_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->id = in_id;
  typename decltype(params->event)::BaseType* event_ptr;
  mojo::internal::Serialize<::ui::mojom::EventPtr>(
      in_event, builder.buffer(), &event_ptr, &serialization_context_);
  params->event.Set(event_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->event.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null event in AcceleratorHandler.OnAccelerator request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

AcceleratorHandlerStub::AcceleratorHandlerStub()
    : sink_(nullptr),
      control_message_handler_(AcceleratorHandler::Version_) {
}

AcceleratorHandlerStub::~AcceleratorHandlerStub() {}

bool AcceleratorHandlerStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kAcceleratorHandler_OnAccelerator_Name: {
      internal::AcceleratorHandler_OnAccelerator_Params_Data* params =
          reinterpret_cast<internal::AcceleratorHandler_OnAccelerator_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      uint32_t p_id{};
      std::unique_ptr<ui::Event> p_event{};
      AcceleratorHandler_OnAccelerator_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_id = input_data_view.id();
      if (!input_data_view.ReadEvent(&p_event))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AcceleratorHandler::OnAccelerator deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "AcceleratorHandler::OnAccelerator");
      mojo::internal::MessageDispatchContext context(message);
      sink_->OnAccelerator(
std::move(p_id), 
std::move(p_event));
      return true;
    }
  }
  return false;
}

bool AcceleratorHandlerStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kAcceleratorHandler_OnAccelerator_Name: {
      break;
    }
  }
  return false;
}

AcceleratorHandlerRequestValidator::AcceleratorHandlerRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool AcceleratorHandlerRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "AcceleratorHandler RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kAcceleratorHandler_OnAccelerator_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AcceleratorHandler_OnAccelerator_Params_Data>(
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

const char AcceleratorRegistrar::Name_[] = "ui::mojom::AcceleratorRegistrar";
const uint32_t AcceleratorRegistrar::Version_;

class AcceleratorRegistrar_AddAccelerator_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  AcceleratorRegistrar_AddAccelerator_ForwardToCallback(
      const AcceleratorRegistrar::AddAcceleratorCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  AcceleratorRegistrar::AddAcceleratorCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(AcceleratorRegistrar_AddAccelerator_ForwardToCallback);
};
bool AcceleratorRegistrar_AddAccelerator_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::AcceleratorRegistrar_AddAccelerator_ResponseParams_Data* params =
      reinterpret_cast<internal::AcceleratorRegistrar_AddAccelerator_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  bool p_success{};
  AcceleratorRegistrar_AddAccelerator_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "AcceleratorRegistrar::AddAccelerator response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_success));
  }
  return true;
}

AcceleratorRegistrarProxy::AcceleratorRegistrarProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void AcceleratorRegistrarProxy::SetHandler(
    AcceleratorHandlerPtr in_handler) {
  size_t size = sizeof(::ui::mojom::internal::AcceleratorRegistrar_SetHandler_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kAcceleratorRegistrar_SetHandler_Name, size);

  auto params =
      ::ui::mojom::internal::AcceleratorRegistrar_SetHandler_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::ui::mojom::AcceleratorHandlerPtr>(
      in_handler, &params->handler, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->handler),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid handler in AcceleratorRegistrar.SetHandler request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void AcceleratorRegistrarProxy::AddAccelerator(
    uint32_t in_id, ::ui::mojom::EventMatcherPtr in_matcher, const AddAcceleratorCallback& callback) {
  size_t size = sizeof(::ui::mojom::internal::AcceleratorRegistrar_AddAccelerator_Params_Data);
  size += mojo::internal::PrepareToSerialize<::ui::mojom::EventMatcherPtr>(
      in_matcher, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kAcceleratorRegistrar_AddAccelerator_Name, size);

  auto params =
      ::ui::mojom::internal::AcceleratorRegistrar_AddAccelerator_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->id = in_id;
  typename decltype(params->matcher)::BaseType* matcher_ptr;
  mojo::internal::Serialize<::ui::mojom::EventMatcherPtr>(
      in_matcher, builder.buffer(), &matcher_ptr, &serialization_context_);
  params->matcher.Set(matcher_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->matcher.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null matcher in AcceleratorRegistrar.AddAccelerator request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new AcceleratorRegistrar_AddAccelerator_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void AcceleratorRegistrarProxy::RemoveAccelerator(
    uint32_t in_id) {
  size_t size = sizeof(::ui::mojom::internal::AcceleratorRegistrar_RemoveAccelerator_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kAcceleratorRegistrar_RemoveAccelerator_Name, size);

  auto params =
      ::ui::mojom::internal::AcceleratorRegistrar_RemoveAccelerator_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->id = in_id;
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}
class AcceleratorRegistrar_AddAccelerator_ProxyToResponder {
 public:
  static AcceleratorRegistrar::AddAcceleratorCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<AcceleratorRegistrar_AddAccelerator_ProxyToResponder> proxy(
        new AcceleratorRegistrar_AddAccelerator_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&AcceleratorRegistrar_AddAccelerator_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~AcceleratorRegistrar_AddAccelerator_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "AcceleratorRegistrar::AddAccelerator() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  AcceleratorRegistrar_AddAccelerator_ProxyToResponder(
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

  DISALLOW_COPY_AND_ASSIGN(AcceleratorRegistrar_AddAccelerator_ProxyToResponder);
};

void AcceleratorRegistrar_AddAccelerator_ProxyToResponder::Run(
    bool in_success) {
  size_t size = sizeof(::ui::mojom::internal::AcceleratorRegistrar_AddAccelerator_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kAcceleratorRegistrar_AddAccelerator_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::ui::mojom::internal::AcceleratorRegistrar_AddAccelerator_ResponseParams_Data::New(builder.buffer());
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

AcceleratorRegistrarStub::AcceleratorRegistrarStub()
    : sink_(nullptr),
      control_message_handler_(AcceleratorRegistrar::Version_) {
}

AcceleratorRegistrarStub::~AcceleratorRegistrarStub() {}

bool AcceleratorRegistrarStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kAcceleratorRegistrar_SetHandler_Name: {
      internal::AcceleratorRegistrar_SetHandler_Params_Data* params =
          reinterpret_cast<internal::AcceleratorRegistrar_SetHandler_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      AcceleratorHandlerPtr p_handler{};
      AcceleratorRegistrar_SetHandler_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_handler = input_data_view.TakeHandler();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AcceleratorRegistrar::SetHandler deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "AcceleratorRegistrar::SetHandler");
      mojo::internal::MessageDispatchContext context(message);
      sink_->SetHandler(
std::move(p_handler));
      return true;
    }
    case internal::kAcceleratorRegistrar_AddAccelerator_Name: {
      break;
    }
    case internal::kAcceleratorRegistrar_RemoveAccelerator_Name: {
      internal::AcceleratorRegistrar_RemoveAccelerator_Params_Data* params =
          reinterpret_cast<internal::AcceleratorRegistrar_RemoveAccelerator_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      uint32_t p_id{};
      AcceleratorRegistrar_RemoveAccelerator_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_id = input_data_view.id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AcceleratorRegistrar::RemoveAccelerator deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "AcceleratorRegistrar::RemoveAccelerator");
      mojo::internal::MessageDispatchContext context(message);
      sink_->RemoveAccelerator(
std::move(p_id));
      return true;
    }
  }
  return false;
}

bool AcceleratorRegistrarStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kAcceleratorRegistrar_SetHandler_Name: {
      break;
    }
    case internal::kAcceleratorRegistrar_AddAccelerator_Name: {
      internal::AcceleratorRegistrar_AddAccelerator_Params_Data* params =
          reinterpret_cast<internal::AcceleratorRegistrar_AddAccelerator_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      uint32_t p_id{};
      ::ui::mojom::EventMatcherPtr p_matcher{};
      AcceleratorRegistrar_AddAccelerator_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_id = input_data_view.id();
      if (!input_data_view.ReadMatcher(&p_matcher))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AcceleratorRegistrar::AddAccelerator deserializer");
        return false;
      }
      AcceleratorRegistrar::AddAcceleratorCallback callback =
          AcceleratorRegistrar_AddAccelerator_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "AcceleratorRegistrar::AddAccelerator");
      mojo::internal::MessageDispatchContext context(message);
      sink_->AddAccelerator(
std::move(p_id), 
std::move(p_matcher), callback);
      return true;
    }
    case internal::kAcceleratorRegistrar_RemoveAccelerator_Name: {
      break;
    }
  }
  return false;
}

AcceleratorRegistrarRequestValidator::AcceleratorRegistrarRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool AcceleratorRegistrarRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "AcceleratorRegistrar RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kAcceleratorRegistrar_SetHandler_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AcceleratorRegistrar_SetHandler_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kAcceleratorRegistrar_AddAccelerator_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AcceleratorRegistrar_AddAccelerator_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kAcceleratorRegistrar_RemoveAccelerator_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AcceleratorRegistrar_RemoveAccelerator_Params_Data>(
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

AcceleratorRegistrarResponseValidator::AcceleratorRegistrarResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool AcceleratorRegistrarResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "AcceleratorRegistrar ResponseValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kAcceleratorRegistrar_AddAccelerator_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::AcceleratorRegistrar_AddAccelerator_ResponseParams_Data>(
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
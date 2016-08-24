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

#include "services/ui/public/interfaces/display.mojom.h"

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

class DisplayManagerObserver_OnDisplays_ParamsDataView {
 public:
  DisplayManagerObserver_OnDisplays_ParamsDataView() {}

  DisplayManagerObserver_OnDisplays_ParamsDataView(
      internal::DisplayManagerObserver_OnDisplays_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDisplaysDataView(
      mojo::ArrayDataView<::ui::mojom::WsDisplayDataView>* output);

  template <typename UserType>
  bool ReadDisplays(UserType* output) {
    auto pointer = data_->displays.Get();
    return mojo::internal::Deserialize<mojo::Array<::ui::mojom::WsDisplayPtr>>(
        pointer, output, context_);
  }
 private:
  internal::DisplayManagerObserver_OnDisplays_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void DisplayManagerObserver_OnDisplays_ParamsDataView::GetDisplaysDataView(
    mojo::ArrayDataView<::ui::mojom::WsDisplayDataView>* output) {
  auto pointer = data_->displays.Get();
  *output = mojo::ArrayDataView<::ui::mojom::WsDisplayDataView>(pointer, context_);
}


class DisplayManagerObserver_OnDisplaysChanged_ParamsDataView {
 public:
  DisplayManagerObserver_OnDisplaysChanged_ParamsDataView() {}

  DisplayManagerObserver_OnDisplaysChanged_ParamsDataView(
      internal::DisplayManagerObserver_OnDisplaysChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDisplaysDataView(
      mojo::ArrayDataView<::ui::mojom::WsDisplayDataView>* output);

  template <typename UserType>
  bool ReadDisplays(UserType* output) {
    auto pointer = data_->displays.Get();
    return mojo::internal::Deserialize<mojo::Array<::ui::mojom::WsDisplayPtr>>(
        pointer, output, context_);
  }
 private:
  internal::DisplayManagerObserver_OnDisplaysChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void DisplayManagerObserver_OnDisplaysChanged_ParamsDataView::GetDisplaysDataView(
    mojo::ArrayDataView<::ui::mojom::WsDisplayDataView>* output) {
  auto pointer = data_->displays.Get();
  *output = mojo::ArrayDataView<::ui::mojom::WsDisplayDataView>(pointer, context_);
}


class DisplayManagerObserver_OnDisplayRemoved_ParamsDataView {
 public:
  DisplayManagerObserver_OnDisplayRemoved_ParamsDataView() {}

  DisplayManagerObserver_OnDisplayRemoved_ParamsDataView(
      internal::DisplayManagerObserver_OnDisplayRemoved_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t id() const {
    return data_->id;
  }
 private:
  internal::DisplayManagerObserver_OnDisplayRemoved_Params_Data* data_ = nullptr;
};




class DisplayManager_AddObserver_ParamsDataView {
 public:
  DisplayManager_AddObserver_ParamsDataView() {}

  DisplayManager_AddObserver_ParamsDataView(
      internal::DisplayManager_AddObserver_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  DisplayManagerObserverPtr TakeObserver() {
    DisplayManagerObserverPtr result;
    bool ret =
        mojo::internal::Deserialize<::ui::mojom::DisplayManagerObserverPtr>(
            &data_->observer, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::DisplayManager_AddObserver_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




}  // namespace
const char DisplayManagerObserver::Name_[] = "ui::mojom::DisplayManagerObserver";
const uint32_t DisplayManagerObserver::Version_;

DisplayManagerObserverProxy::DisplayManagerObserverProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void DisplayManagerObserverProxy::OnDisplays(
    mojo::Array<::ui::mojom::WsDisplayPtr> in_displays) {
  size_t size = sizeof(::ui::mojom::internal::DisplayManagerObserver_OnDisplays_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::Array<::ui::mojom::WsDisplayPtr>>(
      in_displays, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kDisplayManagerObserver_OnDisplays_Name, size);

  auto params =
      ::ui::mojom::internal::DisplayManagerObserver_OnDisplays_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->displays)::BaseType* displays_ptr;
  const mojo::internal::ContainerValidateParams displays_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::Array<::ui::mojom::WsDisplayPtr>>(
      in_displays, builder.buffer(), &displays_ptr, &displays_validate_params,
      &serialization_context_);
  params->displays.Set(displays_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->displays.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null displays in DisplayManagerObserver.OnDisplays request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void DisplayManagerObserverProxy::OnDisplaysChanged(
    mojo::Array<::ui::mojom::WsDisplayPtr> in_displays) {
  size_t size = sizeof(::ui::mojom::internal::DisplayManagerObserver_OnDisplaysChanged_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::Array<::ui::mojom::WsDisplayPtr>>(
      in_displays, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kDisplayManagerObserver_OnDisplaysChanged_Name, size);

  auto params =
      ::ui::mojom::internal::DisplayManagerObserver_OnDisplaysChanged_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->displays)::BaseType* displays_ptr;
  const mojo::internal::ContainerValidateParams displays_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::Array<::ui::mojom::WsDisplayPtr>>(
      in_displays, builder.buffer(), &displays_ptr, &displays_validate_params,
      &serialization_context_);
  params->displays.Set(displays_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->displays.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null displays in DisplayManagerObserver.OnDisplaysChanged request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void DisplayManagerObserverProxy::OnDisplayRemoved(
    int64_t in_id) {
  size_t size = sizeof(::ui::mojom::internal::DisplayManagerObserver_OnDisplayRemoved_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kDisplayManagerObserver_OnDisplayRemoved_Name, size);

  auto params =
      ::ui::mojom::internal::DisplayManagerObserver_OnDisplayRemoved_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->id = in_id;
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

DisplayManagerObserverStub::DisplayManagerObserverStub()
    : sink_(nullptr),
      control_message_handler_(DisplayManagerObserver::Version_) {
}

DisplayManagerObserverStub::~DisplayManagerObserverStub() {}

bool DisplayManagerObserverStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kDisplayManagerObserver_OnDisplays_Name: {
      internal::DisplayManagerObserver_OnDisplays_Params_Data* params =
          reinterpret_cast<internal::DisplayManagerObserver_OnDisplays_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      mojo::Array<::ui::mojom::WsDisplayPtr> p_displays{};
      DisplayManagerObserver_OnDisplays_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadDisplays(&p_displays))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DisplayManagerObserver::OnDisplays deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "DisplayManagerObserver::OnDisplays");
      mojo::internal::MessageDispatchContext context(message);
      sink_->OnDisplays(
std::move(p_displays));
      return true;
    }
    case internal::kDisplayManagerObserver_OnDisplaysChanged_Name: {
      internal::DisplayManagerObserver_OnDisplaysChanged_Params_Data* params =
          reinterpret_cast<internal::DisplayManagerObserver_OnDisplaysChanged_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      mojo::Array<::ui::mojom::WsDisplayPtr> p_displays{};
      DisplayManagerObserver_OnDisplaysChanged_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadDisplays(&p_displays))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DisplayManagerObserver::OnDisplaysChanged deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "DisplayManagerObserver::OnDisplaysChanged");
      mojo::internal::MessageDispatchContext context(message);
      sink_->OnDisplaysChanged(
std::move(p_displays));
      return true;
    }
    case internal::kDisplayManagerObserver_OnDisplayRemoved_Name: {
      internal::DisplayManagerObserver_OnDisplayRemoved_Params_Data* params =
          reinterpret_cast<internal::DisplayManagerObserver_OnDisplayRemoved_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      int64_t p_id{};
      DisplayManagerObserver_OnDisplayRemoved_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_id = input_data_view.id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DisplayManagerObserver::OnDisplayRemoved deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "DisplayManagerObserver::OnDisplayRemoved");
      mojo::internal::MessageDispatchContext context(message);
      sink_->OnDisplayRemoved(
std::move(p_id));
      return true;
    }
  }
  return false;
}

bool DisplayManagerObserverStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kDisplayManagerObserver_OnDisplays_Name: {
      break;
    }
    case internal::kDisplayManagerObserver_OnDisplaysChanged_Name: {
      break;
    }
    case internal::kDisplayManagerObserver_OnDisplayRemoved_Name: {
      break;
    }
  }
  return false;
}

DisplayManagerObserverRequestValidator::DisplayManagerObserverRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool DisplayManagerObserverRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "DisplayManagerObserver RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kDisplayManagerObserver_OnDisplays_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DisplayManagerObserver_OnDisplays_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDisplayManagerObserver_OnDisplaysChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DisplayManagerObserver_OnDisplaysChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDisplayManagerObserver_OnDisplayRemoved_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DisplayManagerObserver_OnDisplayRemoved_Params_Data>(
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

const char DisplayManager::Name_[] = "ui::mojom::DisplayManager";
const uint32_t DisplayManager::Version_;

DisplayManagerProxy::DisplayManagerProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void DisplayManagerProxy::AddObserver(
    DisplayManagerObserverPtr in_observer) {
  size_t size = sizeof(::ui::mojom::internal::DisplayManager_AddObserver_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kDisplayManager_AddObserver_Name, size);

  auto params =
      ::ui::mojom::internal::DisplayManager_AddObserver_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::ui::mojom::DisplayManagerObserverPtr>(
      in_observer, &params->observer, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->observer),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid observer in DisplayManager.AddObserver request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

DisplayManagerStub::DisplayManagerStub()
    : sink_(nullptr),
      control_message_handler_(DisplayManager::Version_) {
}

DisplayManagerStub::~DisplayManagerStub() {}

bool DisplayManagerStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kDisplayManager_AddObserver_Name: {
      internal::DisplayManager_AddObserver_Params_Data* params =
          reinterpret_cast<internal::DisplayManager_AddObserver_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      DisplayManagerObserverPtr p_observer{};
      DisplayManager_AddObserver_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_observer = input_data_view.TakeObserver();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DisplayManager::AddObserver deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "DisplayManager::AddObserver");
      mojo::internal::MessageDispatchContext context(message);
      sink_->AddObserver(
std::move(p_observer));
      return true;
    }
  }
  return false;
}

bool DisplayManagerStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kDisplayManager_AddObserver_Name: {
      break;
    }
  }
  return false;
}

DisplayManagerRequestValidator::DisplayManagerRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool DisplayManagerRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "DisplayManager RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kDisplayManager_AddObserver_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DisplayManager_AddObserver_Params_Data>(
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
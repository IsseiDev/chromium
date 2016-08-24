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

#include "services/ui/public/interfaces/ime.mojom.h"

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

class IMEDriver_StartSession_ParamsDataView {
 public:
  IMEDriver_StartSession_ParamsDataView() {}

  IMEDriver_StartSession_ParamsDataView(
      internal::IMEDriver_StartSession_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t session_id() const {
    return data_->session_id;
  }
  TextInputClientPtr TakeClient() {
    TextInputClientPtr result;
    bool ret =
        mojo::internal::Deserialize<::ui::mojom::TextInputClientPtr>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
  InputMethodRequest TakeInputMethod() {
    InputMethodRequest result;
    bool ret =
        mojo::internal::Deserialize<::ui::mojom::InputMethodRequest>(
            &data_->input_method, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::IMEDriver_StartSession_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




class IMEDriver_CancelSession_ParamsDataView {
 public:
  IMEDriver_CancelSession_ParamsDataView() {}

  IMEDriver_CancelSession_ParamsDataView(
      internal::IMEDriver_CancelSession_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t session_id() const {
    return data_->session_id;
  }
 private:
  internal::IMEDriver_CancelSession_Params_Data* data_ = nullptr;
};




class IMEServer_StartSession_ParamsDataView {
 public:
  IMEServer_StartSession_ParamsDataView() {}

  IMEServer_StartSession_ParamsDataView(
      internal::IMEServer_StartSession_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  TextInputClientPtr TakeClient() {
    TextInputClientPtr result;
    bool ret =
        mojo::internal::Deserialize<::ui::mojom::TextInputClientPtr>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
  InputMethodRequest TakeInputMethod() {
    InputMethodRequest result;
    bool ret =
        mojo::internal::Deserialize<::ui::mojom::InputMethodRequest>(
            &data_->input_method, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::IMEServer_StartSession_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




class IMERegistrar_RegisterDriver_ParamsDataView {
 public:
  IMERegistrar_RegisterDriver_ParamsDataView() {}

  IMERegistrar_RegisterDriver_ParamsDataView(
      internal::IMERegistrar_RegisterDriver_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  IMEDriverPtr TakeDriver() {
    IMEDriverPtr result;
    bool ret =
        mojo::internal::Deserialize<::ui::mojom::IMEDriverPtr>(
            &data_->driver, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::IMERegistrar_RegisterDriver_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




class InputMethod_OnTextInputModeChanged_ParamsDataView {
 public:
  InputMethod_OnTextInputModeChanged_ParamsDataView() {}

  InputMethod_OnTextInputModeChanged_ParamsDataView(
      internal::InputMethod_OnTextInputModeChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadTextInputMode(UserType* output) const {
    auto data_value = data_->text_input_mode;
    return mojo::internal::Deserialize<::ui::mojom::TextInputMode>(
        data_value, output);
  }

  ::ui::mojom::TextInputMode text_input_mode() const {
    return static_cast<::ui::mojom::TextInputMode>(data_->text_input_mode);
  }
 private:
  internal::InputMethod_OnTextInputModeChanged_Params_Data* data_ = nullptr;
};




class InputMethod_OnTextInputTypeChanged_ParamsDataView {
 public:
  InputMethod_OnTextInputTypeChanged_ParamsDataView() {}

  InputMethod_OnTextInputTypeChanged_ParamsDataView(
      internal::InputMethod_OnTextInputTypeChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadTextInputType(UserType* output) const {
    auto data_value = data_->text_input_type;
    return mojo::internal::Deserialize<::ui::mojom::TextInputType>(
        data_value, output);
  }

  ::ui::mojom::TextInputType text_input_type() const {
    return static_cast<::ui::mojom::TextInputType>(data_->text_input_type);
  }
 private:
  internal::InputMethod_OnTextInputTypeChanged_Params_Data* data_ = nullptr;
};




class InputMethod_OnCaretBoundsChanged_ParamsDataView {
 public:
  InputMethod_OnCaretBoundsChanged_ParamsDataView() {}

  InputMethod_OnCaretBoundsChanged_ParamsDataView(
      internal::InputMethod_OnCaretBoundsChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCaretBoundsDataView(
      ::gfx::mojom::RectDataView* output);

  template <typename UserType>
  bool ReadCaretBounds(UserType* output) {
    auto pointer = data_->caret_bounds.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectPtr>(
        pointer, output, context_);
  }
 private:
  internal::InputMethod_OnCaretBoundsChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void InputMethod_OnCaretBoundsChanged_ParamsDataView::GetCaretBoundsDataView(
    ::gfx::mojom::RectDataView* output) {
  auto pointer = data_->caret_bounds.Get();
  *output = ::gfx::mojom::RectDataView(pointer, context_);
}


class InputMethod_ProcessKeyEvent_ParamsDataView {
 public:
  InputMethod_ProcessKeyEvent_ParamsDataView() {}

  InputMethod_ProcessKeyEvent_ParamsDataView(
      internal::InputMethod_ProcessKeyEvent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeyEventDataView(
      ::ui::mojom::EventDataView* output);

  template <typename UserType>
  bool ReadKeyEvent(UserType* output) {
    auto pointer = data_->key_event.Get();
    return mojo::internal::Deserialize<::ui::mojom::EventPtr>(
        pointer, output, context_);
  }
 private:
  internal::InputMethod_ProcessKeyEvent_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void InputMethod_ProcessKeyEvent_ParamsDataView::GetKeyEventDataView(
    ::ui::mojom::EventDataView* output) {
  auto pointer = data_->key_event.Get();
  *output = ::ui::mojom::EventDataView(pointer, context_);
}


class InputMethod_CancelComposition_ParamsDataView {
 public:
  InputMethod_CancelComposition_ParamsDataView() {}

  InputMethod_CancelComposition_ParamsDataView(
      internal::InputMethod_CancelComposition_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::InputMethod_CancelComposition_Params_Data* data_ = nullptr;
};




class TextInputClient_OnCompositionEvent_ParamsDataView {
 public:
  TextInputClient_OnCompositionEvent_ParamsDataView() {}

  TextInputClient_OnCompositionEvent_ParamsDataView(
      internal::TextInputClient_OnCompositionEvent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetEventDataView(
      CompositionEventDataView* output);

  template <typename UserType>
  bool ReadEvent(UserType* output) {
    auto pointer = data_->event.Get();
    return mojo::internal::Deserialize<::ui::mojom::CompositionEventPtr>(
        pointer, output, context_);
  }
 private:
  internal::TextInputClient_OnCompositionEvent_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void TextInputClient_OnCompositionEvent_ParamsDataView::GetEventDataView(
    CompositionEventDataView* output) {
  auto pointer = data_->event.Get();
  *output = CompositionEventDataView(pointer, context_);
}


}  // namespace// static
CompositionEventPtr CompositionEvent::New() {
  CompositionEventPtr rv;
  mojo::internal::StructHelper<CompositionEvent>::Initialize(&rv);
  return rv;
}

CompositionEvent::CompositionEvent()
    : type(),
      key_event() {
}

CompositionEvent::~CompositionEvent() {
}
const char IMEDriver::Name_[] = "ui::mojom::IMEDriver";
const uint32_t IMEDriver::Version_;

IMEDriverProxy::IMEDriverProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void IMEDriverProxy::StartSession(
    int32_t in_session_id, TextInputClientPtr in_client, InputMethodRequest in_input_method) {
  size_t size = sizeof(::ui::mojom::internal::IMEDriver_StartSession_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kIMEDriver_StartSession_Name, size);

  auto params =
      ::ui::mojom::internal::IMEDriver_StartSession_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->session_id = in_session_id;
  mojo::internal::Serialize<::ui::mojom::TextInputClientPtr>(
      in_client, &params->client, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in IMEDriver.StartSession request");
  mojo::internal::Serialize<::ui::mojom::InputMethodRequest>(
      in_input_method, &params->input_method, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->input_method),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid input_method in IMEDriver.StartSession request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void IMEDriverProxy::CancelSession(
    int32_t in_session_id) {
  size_t size = sizeof(::ui::mojom::internal::IMEDriver_CancelSession_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kIMEDriver_CancelSession_Name, size);

  auto params =
      ::ui::mojom::internal::IMEDriver_CancelSession_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->session_id = in_session_id;
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

IMEDriverStub::IMEDriverStub()
    : sink_(nullptr),
      control_message_handler_(IMEDriver::Version_) {
}

IMEDriverStub::~IMEDriverStub() {}

bool IMEDriverStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kIMEDriver_StartSession_Name: {
      internal::IMEDriver_StartSession_Params_Data* params =
          reinterpret_cast<internal::IMEDriver_StartSession_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      int32_t p_session_id{};
      TextInputClientPtr p_client{};
      InputMethodRequest p_input_method{};
      IMEDriver_StartSession_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_session_id = input_data_view.session_id();
      p_client = input_data_view.TakeClient();
      p_input_method = input_data_view.TakeInputMethod();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "IMEDriver::StartSession deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "IMEDriver::StartSession");
      mojo::internal::MessageDispatchContext context(message);
      sink_->StartSession(
std::move(p_session_id), 
std::move(p_client), 
std::move(p_input_method));
      return true;
    }
    case internal::kIMEDriver_CancelSession_Name: {
      internal::IMEDriver_CancelSession_Params_Data* params =
          reinterpret_cast<internal::IMEDriver_CancelSession_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      int32_t p_session_id{};
      IMEDriver_CancelSession_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_session_id = input_data_view.session_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "IMEDriver::CancelSession deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "IMEDriver::CancelSession");
      mojo::internal::MessageDispatchContext context(message);
      sink_->CancelSession(
std::move(p_session_id));
      return true;
    }
  }
  return false;
}

bool IMEDriverStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kIMEDriver_StartSession_Name: {
      break;
    }
    case internal::kIMEDriver_CancelSession_Name: {
      break;
    }
  }
  return false;
}

IMEDriverRequestValidator::IMEDriverRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool IMEDriverRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "IMEDriver RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kIMEDriver_StartSession_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IMEDriver_StartSession_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kIMEDriver_CancelSession_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IMEDriver_CancelSession_Params_Data>(
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

const char IMEServer::Name_[] = "ui::mojom::IMEServer";
const uint32_t IMEServer::Version_;

IMEServerProxy::IMEServerProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void IMEServerProxy::StartSession(
    TextInputClientPtr in_client, InputMethodRequest in_input_method) {
  size_t size = sizeof(::ui::mojom::internal::IMEServer_StartSession_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kIMEServer_StartSession_Name, size);

  auto params =
      ::ui::mojom::internal::IMEServer_StartSession_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::ui::mojom::TextInputClientPtr>(
      in_client, &params->client, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in IMEServer.StartSession request");
  mojo::internal::Serialize<::ui::mojom::InputMethodRequest>(
      in_input_method, &params->input_method, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->input_method),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid input_method in IMEServer.StartSession request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

IMEServerStub::IMEServerStub()
    : sink_(nullptr),
      control_message_handler_(IMEServer::Version_) {
}

IMEServerStub::~IMEServerStub() {}

bool IMEServerStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kIMEServer_StartSession_Name: {
      internal::IMEServer_StartSession_Params_Data* params =
          reinterpret_cast<internal::IMEServer_StartSession_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      TextInputClientPtr p_client{};
      InputMethodRequest p_input_method{};
      IMEServer_StartSession_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_client = input_data_view.TakeClient();
      p_input_method = input_data_view.TakeInputMethod();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "IMEServer::StartSession deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "IMEServer::StartSession");
      mojo::internal::MessageDispatchContext context(message);
      sink_->StartSession(
std::move(p_client), 
std::move(p_input_method));
      return true;
    }
  }
  return false;
}

bool IMEServerStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kIMEServer_StartSession_Name: {
      break;
    }
  }
  return false;
}

IMEServerRequestValidator::IMEServerRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool IMEServerRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "IMEServer RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kIMEServer_StartSession_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IMEServer_StartSession_Params_Data>(
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

const char IMERegistrar::Name_[] = "ui::mojom::IMERegistrar";
const uint32_t IMERegistrar::Version_;

IMERegistrarProxy::IMERegistrarProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void IMERegistrarProxy::RegisterDriver(
    IMEDriverPtr in_driver) {
  size_t size = sizeof(::ui::mojom::internal::IMERegistrar_RegisterDriver_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kIMERegistrar_RegisterDriver_Name, size);

  auto params =
      ::ui::mojom::internal::IMERegistrar_RegisterDriver_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::ui::mojom::IMEDriverPtr>(
      in_driver, &params->driver, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->driver),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid driver in IMERegistrar.RegisterDriver request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

IMERegistrarStub::IMERegistrarStub()
    : sink_(nullptr),
      control_message_handler_(IMERegistrar::Version_) {
}

IMERegistrarStub::~IMERegistrarStub() {}

bool IMERegistrarStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kIMERegistrar_RegisterDriver_Name: {
      internal::IMERegistrar_RegisterDriver_Params_Data* params =
          reinterpret_cast<internal::IMERegistrar_RegisterDriver_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      IMEDriverPtr p_driver{};
      IMERegistrar_RegisterDriver_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_driver = input_data_view.TakeDriver();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "IMERegistrar::RegisterDriver deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "IMERegistrar::RegisterDriver");
      mojo::internal::MessageDispatchContext context(message);
      sink_->RegisterDriver(
std::move(p_driver));
      return true;
    }
  }
  return false;
}

bool IMERegistrarStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kIMERegistrar_RegisterDriver_Name: {
      break;
    }
  }
  return false;
}

IMERegistrarRequestValidator::IMERegistrarRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool IMERegistrarRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "IMERegistrar RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kIMERegistrar_RegisterDriver_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IMERegistrar_RegisterDriver_Params_Data>(
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

const char InputMethod::Name_[] = "ui::mojom::InputMethod";
const uint32_t InputMethod::Version_;

InputMethodProxy::InputMethodProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void InputMethodProxy::OnTextInputModeChanged(
    TextInputMode in_text_input_mode) {
  size_t size = sizeof(::ui::mojom::internal::InputMethod_OnTextInputModeChanged_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kInputMethod_OnTextInputModeChanged_Name, size);

  auto params =
      ::ui::mojom::internal::InputMethod_OnTextInputModeChanged_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::ui::mojom::TextInputMode>(
      in_text_input_mode, &params->text_input_mode);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void InputMethodProxy::OnTextInputTypeChanged(
    TextInputType in_text_input_type) {
  size_t size = sizeof(::ui::mojom::internal::InputMethod_OnTextInputTypeChanged_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kInputMethod_OnTextInputTypeChanged_Name, size);

  auto params =
      ::ui::mojom::internal::InputMethod_OnTextInputTypeChanged_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::ui::mojom::TextInputType>(
      in_text_input_type, &params->text_input_type);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void InputMethodProxy::OnCaretBoundsChanged(
    const gfx::Rect& in_caret_bounds) {
  size_t size = sizeof(::ui::mojom::internal::InputMethod_OnCaretBoundsChanged_Params_Data);
  size += mojo::internal::PrepareToSerialize<::gfx::mojom::RectPtr>(
      in_caret_bounds, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kInputMethod_OnCaretBoundsChanged_Name, size);

  auto params =
      ::ui::mojom::internal::InputMethod_OnCaretBoundsChanged_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->caret_bounds)::BaseType* caret_bounds_ptr;
  mojo::internal::Serialize<::gfx::mojom::RectPtr>(
      in_caret_bounds, builder.buffer(), &caret_bounds_ptr, &serialization_context_);
  params->caret_bounds.Set(caret_bounds_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->caret_bounds.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null caret_bounds in InputMethod.OnCaretBoundsChanged request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void InputMethodProxy::ProcessKeyEvent(
    std::unique_ptr<ui::Event> in_key_event) {
  size_t size = sizeof(::ui::mojom::internal::InputMethod_ProcessKeyEvent_Params_Data);
  size += mojo::internal::PrepareToSerialize<::ui::mojom::EventPtr>(
      in_key_event, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kInputMethod_ProcessKeyEvent_Name, size);

  auto params =
      ::ui::mojom::internal::InputMethod_ProcessKeyEvent_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->key_event)::BaseType* key_event_ptr;
  mojo::internal::Serialize<::ui::mojom::EventPtr>(
      in_key_event, builder.buffer(), &key_event_ptr, &serialization_context_);
  params->key_event.Set(key_event_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key_event.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key_event in InputMethod.ProcessKeyEvent request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void InputMethodProxy::CancelComposition(
    ) {
  size_t size = sizeof(::ui::mojom::internal::InputMethod_CancelComposition_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kInputMethod_CancelComposition_Name, size);

  auto params =
      ::ui::mojom::internal::InputMethod_CancelComposition_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

InputMethodStub::InputMethodStub()
    : sink_(nullptr),
      control_message_handler_(InputMethod::Version_) {
}

InputMethodStub::~InputMethodStub() {}

bool InputMethodStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kInputMethod_OnTextInputModeChanged_Name: {
      internal::InputMethod_OnTextInputModeChanged_Params_Data* params =
          reinterpret_cast<internal::InputMethod_OnTextInputModeChanged_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      TextInputMode p_text_input_mode{};
      InputMethod_OnTextInputModeChanged_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadTextInputMode(&p_text_input_mode))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "InputMethod::OnTextInputModeChanged deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "InputMethod::OnTextInputModeChanged");
      mojo::internal::MessageDispatchContext context(message);
      sink_->OnTextInputModeChanged(
std::move(p_text_input_mode));
      return true;
    }
    case internal::kInputMethod_OnTextInputTypeChanged_Name: {
      internal::InputMethod_OnTextInputTypeChanged_Params_Data* params =
          reinterpret_cast<internal::InputMethod_OnTextInputTypeChanged_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      TextInputType p_text_input_type{};
      InputMethod_OnTextInputTypeChanged_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadTextInputType(&p_text_input_type))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "InputMethod::OnTextInputTypeChanged deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "InputMethod::OnTextInputTypeChanged");
      mojo::internal::MessageDispatchContext context(message);
      sink_->OnTextInputTypeChanged(
std::move(p_text_input_type));
      return true;
    }
    case internal::kInputMethod_OnCaretBoundsChanged_Name: {
      internal::InputMethod_OnCaretBoundsChanged_Params_Data* params =
          reinterpret_cast<internal::InputMethod_OnCaretBoundsChanged_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      gfx::Rect p_caret_bounds{};
      InputMethod_OnCaretBoundsChanged_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadCaretBounds(&p_caret_bounds))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "InputMethod::OnCaretBoundsChanged deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "InputMethod::OnCaretBoundsChanged");
      mojo::internal::MessageDispatchContext context(message);
      sink_->OnCaretBoundsChanged(
std::move(p_caret_bounds));
      return true;
    }
    case internal::kInputMethod_ProcessKeyEvent_Name: {
      internal::InputMethod_ProcessKeyEvent_Params_Data* params =
          reinterpret_cast<internal::InputMethod_ProcessKeyEvent_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      std::unique_ptr<ui::Event> p_key_event{};
      InputMethod_ProcessKeyEvent_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadKeyEvent(&p_key_event))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "InputMethod::ProcessKeyEvent deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "InputMethod::ProcessKeyEvent");
      mojo::internal::MessageDispatchContext context(message);
      sink_->ProcessKeyEvent(
std::move(p_key_event));
      return true;
    }
    case internal::kInputMethod_CancelComposition_Name: {
      internal::InputMethod_CancelComposition_Params_Data* params =
          reinterpret_cast<internal::InputMethod_CancelComposition_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      InputMethod_CancelComposition_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "InputMethod::CancelComposition deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "InputMethod::CancelComposition");
      mojo::internal::MessageDispatchContext context(message);
      sink_->CancelComposition();
      return true;
    }
  }
  return false;
}

bool InputMethodStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kInputMethod_OnTextInputModeChanged_Name: {
      break;
    }
    case internal::kInputMethod_OnTextInputTypeChanged_Name: {
      break;
    }
    case internal::kInputMethod_OnCaretBoundsChanged_Name: {
      break;
    }
    case internal::kInputMethod_ProcessKeyEvent_Name: {
      break;
    }
    case internal::kInputMethod_CancelComposition_Name: {
      break;
    }
  }
  return false;
}

InputMethodRequestValidator::InputMethodRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool InputMethodRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "InputMethod RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kInputMethod_OnTextInputModeChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InputMethod_OnTextInputModeChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kInputMethod_OnTextInputTypeChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InputMethod_OnTextInputTypeChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kInputMethod_OnCaretBoundsChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InputMethod_OnCaretBoundsChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kInputMethod_ProcessKeyEvent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InputMethod_ProcessKeyEvent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kInputMethod_CancelComposition_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InputMethod_CancelComposition_Params_Data>(
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

const char TextInputClient::Name_[] = "ui::mojom::TextInputClient";
const uint32_t TextInputClient::Version_;

TextInputClientProxy::TextInputClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void TextInputClientProxy::OnCompositionEvent(
    CompositionEventPtr in_event) {
  size_t size = sizeof(::ui::mojom::internal::TextInputClient_OnCompositionEvent_Params_Data);
  size += mojo::internal::PrepareToSerialize<::ui::mojom::CompositionEventPtr>(
      in_event, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kTextInputClient_OnCompositionEvent_Name, size);

  auto params =
      ::ui::mojom::internal::TextInputClient_OnCompositionEvent_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->event)::BaseType* event_ptr;
  mojo::internal::Serialize<::ui::mojom::CompositionEventPtr>(
      in_event, builder.buffer(), &event_ptr, &serialization_context_);
  params->event.Set(event_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->event.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null event in TextInputClient.OnCompositionEvent request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

TextInputClientStub::TextInputClientStub()
    : sink_(nullptr),
      control_message_handler_(TextInputClient::Version_) {
}

TextInputClientStub::~TextInputClientStub() {}

bool TextInputClientStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kTextInputClient_OnCompositionEvent_Name: {
      internal::TextInputClient_OnCompositionEvent_Params_Data* params =
          reinterpret_cast<internal::TextInputClient_OnCompositionEvent_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      CompositionEventPtr p_event{};
      TextInputClient_OnCompositionEvent_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadEvent(&p_event))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "TextInputClient::OnCompositionEvent deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "TextInputClient::OnCompositionEvent");
      mojo::internal::MessageDispatchContext context(message);
      sink_->OnCompositionEvent(
std::move(p_event));
      return true;
    }
  }
  return false;
}

bool TextInputClientStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kTextInputClient_OnCompositionEvent_Name: {
      break;
    }
  }
  return false;
}

TextInputClientRequestValidator::TextInputClientRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool TextInputClientRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "TextInputClient RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kTextInputClient_OnCompositionEvent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TextInputClient_OnCompositionEvent_Params_Data>(
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


// static
bool StructTraits<::ui::mojom::CompositionEvent, ::ui::mojom::CompositionEventPtr>::Read(
    ::ui::mojom::CompositionEventDataView input,
    ::ui::mojom::CompositionEventPtr* output) {
  bool success = true;
  ::ui::mojom::CompositionEventPtr result(::ui::mojom::CompositionEvent::New());
  
      if (!input.ReadType(&result->type))
        success = false;
      if (!input.ReadKeyEvent(&result->key_event))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo


#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
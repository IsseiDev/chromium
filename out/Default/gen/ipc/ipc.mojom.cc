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

#include "ipc/ipc.mojom.h"

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
namespace IPC {
namespace mojom {

namespace {

class Channel_SetPeerPid_ParamsDataView {
 public:
  Channel_SetPeerPid_ParamsDataView() {}

  Channel_SetPeerPid_ParamsDataView(
      internal::Channel_SetPeerPid_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t pid() const {
    return data_->pid;
  }
 private:
  internal::Channel_SetPeerPid_Params_Data* data_ = nullptr;
};




class Channel_Receive_ParamsDataView {
 public:
  Channel_Receive_ParamsDataView() {}

  Channel_Receive_ParamsDataView(
      internal::Channel_Receive_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  bool ReadData(UserType* output) {
    auto pointer = data_->data.Get();
    return mojo::internal::Deserialize<mojo::Array<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetHandlesDataView(
      mojo::ArrayDataView<SerializedHandleDataView>* output);

  template <typename UserType>
  bool ReadHandles(UserType* output) {
    auto pointer = data_->handles.Get();
    return mojo::internal::Deserialize<mojo::Array<::IPC::mojom::SerializedHandlePtr>>(
        pointer, output, context_);
  }
 private:
  internal::Channel_Receive_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void Channel_Receive_ParamsDataView::GetDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void Channel_Receive_ParamsDataView::GetHandlesDataView(
    mojo::ArrayDataView<SerializedHandleDataView>* output) {
  auto pointer = data_->handles.Get();
  *output = mojo::ArrayDataView<SerializedHandleDataView>(pointer, context_);
}


class Channel_GetAssociatedInterface_ParamsDataView {
 public:
  Channel_GetAssociatedInterface_ParamsDataView() {}

  Channel_GetAssociatedInterface_ParamsDataView(
      internal::Channel_GetAssociatedInterface_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadName(UserType* output) {
    auto pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  GenericInterfaceAssociatedRequest TakeRequest() {
    GenericInterfaceAssociatedRequest result;
    bool ret =
        mojo::internal::Deserialize<::IPC::mojom::GenericInterfaceAssociatedRequest>(
            &data_->request, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Channel_GetAssociatedInterface_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void Channel_GetAssociatedInterface_ParamsDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}


}  // namespace// static
SerializedHandlePtr SerializedHandle::New() {
  SerializedHandlePtr rv;
  mojo::internal::StructHelper<SerializedHandle>::Initialize(&rv);
  return rv;
}

SerializedHandle::SerializedHandle()
    : the_handle(),
      type() {
}

SerializedHandle::~SerializedHandle() {
}
const char GenericInterface::Name_[] = "IPC::mojom::GenericInterface";
const uint32_t GenericInterface::Version_;

GenericInterfaceProxy::GenericInterfaceProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

GenericInterfaceStub::GenericInterfaceStub()
    : sink_(nullptr),
      control_message_handler_(GenericInterface::Version_) {
}

GenericInterfaceStub::~GenericInterfaceStub() {}

bool GenericInterfaceStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  return false;
}

bool GenericInterfaceStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  return false;
}

GenericInterfaceRequestValidator::GenericInterfaceRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool GenericInterfaceRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "GenericInterface RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

const char Channel::Name_[] = "IPC::mojom::Channel";
const uint32_t Channel::Version_;

ChannelProxy::ChannelProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void ChannelProxy::SetPeerPid(
    int32_t in_pid) {
  size_t size = sizeof(::IPC::mojom::internal::Channel_SetPeerPid_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kChannel_SetPeerPid_Name, size);

  auto params =
      ::IPC::mojom::internal::Channel_SetPeerPid_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->pid = in_pid;
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void ChannelProxy::Receive(
    mojo::Array<uint8_t> in_data, mojo::Array<SerializedHandlePtr> in_handles) {
  size_t size = sizeof(::IPC::mojom::internal::Channel_Receive_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::Array<uint8_t>>(
      in_data, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<mojo::Array<::IPC::mojom::SerializedHandlePtr>>(
      in_handles, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kChannel_Receive_Name, size);

  auto params =
      ::IPC::mojom::internal::Channel_Receive_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->data)::BaseType* data_ptr;
  const mojo::internal::ContainerValidateParams data_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::Array<uint8_t>>(
      in_data, builder.buffer(), &data_ptr, &data_validate_params,
      &serialization_context_);
  params->data.Set(data_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data in Channel.Receive request");
  typename decltype(params->handles)::BaseType* handles_ptr;
  const mojo::internal::ContainerValidateParams handles_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::Array<::IPC::mojom::SerializedHandlePtr>>(
      in_handles, builder.buffer(), &handles_ptr, &handles_validate_params,
      &serialization_context_);
  params->handles.Set(handles_ptr);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void ChannelProxy::GetAssociatedInterface(
    const mojo::String& in_name, GenericInterfaceAssociatedRequest in_request) {
  size_t size = sizeof(::IPC::mojom::internal::Channel_GetAssociatedInterface_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_name, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kChannel_GetAssociatedInterface_Name, size);

  auto params =
      ::IPC::mojom::internal::Channel_GetAssociatedInterface_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->name)::BaseType* name_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_name, builder.buffer(), &name_ptr, &serialization_context_);
  params->name.Set(name_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null name in Channel.GetAssociatedInterface request");
  mojo::internal::Serialize<::IPC::mojom::GenericInterfaceAssociatedRequest>(
      in_request, &params->request, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid request in Channel.GetAssociatedInterface request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

ChannelStub::ChannelStub()
    : sink_(nullptr),
      control_message_handler_(Channel::Version_) {
}

ChannelStub::~ChannelStub() {}

bool ChannelStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kChannel_SetPeerPid_Name: {
      internal::Channel_SetPeerPid_Params_Data* params =
          reinterpret_cast<internal::Channel_SetPeerPid_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      int32_t p_pid{};
      Channel_SetPeerPid_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_pid = input_data_view.pid();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Channel::SetPeerPid deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "Channel::SetPeerPid");
      mojo::internal::MessageDispatchContext context(message);
      sink_->SetPeerPid(
std::move(p_pid));
      return true;
    }
    case internal::kChannel_Receive_Name: {
      internal::Channel_Receive_Params_Data* params =
          reinterpret_cast<internal::Channel_Receive_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      mojo::Array<uint8_t> p_data{};
      mojo::Array<SerializedHandlePtr> p_handles{};
      Channel_Receive_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadData(&p_data))
        success = false;
      if (!input_data_view.ReadHandles(&p_handles))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Channel::Receive deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "Channel::Receive");
      mojo::internal::MessageDispatchContext context(message);
      sink_->Receive(
std::move(p_data), 
std::move(p_handles));
      return true;
    }
    case internal::kChannel_GetAssociatedInterface_Name: {
      internal::Channel_GetAssociatedInterface_Params_Data* params =
          reinterpret_cast<internal::Channel_GetAssociatedInterface_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      mojo::String p_name{};
      GenericInterfaceAssociatedRequest p_request{};
      Channel_GetAssociatedInterface_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadName(&p_name))
        success = false;
      p_request = input_data_view.TakeRequest();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Channel::GetAssociatedInterface deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "Channel::GetAssociatedInterface");
      mojo::internal::MessageDispatchContext context(message);
      sink_->GetAssociatedInterface(
std::move(p_name), 
std::move(p_request));
      return true;
    }
  }
  return false;
}

bool ChannelStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kChannel_SetPeerPid_Name: {
      break;
    }
    case internal::kChannel_Receive_Name: {
      break;
    }
    case internal::kChannel_GetAssociatedInterface_Name: {
      break;
    }
  }
  return false;
}

ChannelRequestValidator::ChannelRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool ChannelRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "Channel RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kChannel_SetPeerPid_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Channel_SetPeerPid_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kChannel_Receive_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Channel_Receive_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kChannel_GetAssociatedInterface_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Channel_GetAssociatedInterface_Params_Data>(
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

const char ChannelBootstrap::Name_[] = "IPC::mojom::ChannelBootstrap";
const uint32_t ChannelBootstrap::Version_;

ChannelBootstrapProxy::ChannelBootstrapProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

ChannelBootstrapStub::ChannelBootstrapStub()
    : sink_(nullptr),
      control_message_handler_(ChannelBootstrap::Version_) {
}

ChannelBootstrapStub::~ChannelBootstrapStub() {}

bool ChannelBootstrapStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  return false;
}

bool ChannelBootstrapStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  return false;
}

ChannelBootstrapRequestValidator::ChannelBootstrapRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool ChannelBootstrapRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "ChannelBootstrap RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
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
}  // namespace IPC

namespace mojo {


// static
bool StructTraits<::IPC::mojom::SerializedHandle, ::IPC::mojom::SerializedHandlePtr>::Read(
    ::IPC::mojom::SerializedHandleDataView input,
    ::IPC::mojom::SerializedHandlePtr* output) {
  bool success = true;
  ::IPC::mojom::SerializedHandlePtr result(::IPC::mojom::SerializedHandle::New());
  
      result->the_handle = input.TakeTheHandle();
      if (!input.ReadType(&result->type))
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
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

#include "third_party/WebKit/public/platform/modules/broadcastchannel/broadcast_channel.mojom.h"

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
#include "cc/ipc/surface_sequence_struct_traits.h"
#include "url/mojo/origin_struct_traits.h"
#include "content/common/bluetooth/web_bluetooth_device_id_struct_traits.h"
#include "cc/ipc/surface_id_struct_traits.h"
#include "url/mojo/url_gurl_struct_traits.h"
#include "device/bluetooth/public/interfaces/bluetooth_uuid_struct_traits.h"
namespace blink {
namespace mojom {

namespace {

class BroadcastChannelClient_OnMessage_ParamsDataView {
 public:
  BroadcastChannelClient_OnMessage_ParamsDataView() {}

  BroadcastChannelClient_OnMessage_ParamsDataView(
      internal::BroadcastChannelClient_OnMessage_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMessageDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  bool ReadMessage(UserType* output) {
    auto pointer = data_->message.Get();
    return mojo::internal::Deserialize<mojo::Array<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::BroadcastChannelClient_OnMessage_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void BroadcastChannelClient_OnMessage_ParamsDataView::GetMessageDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->message.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


class BroadcastChannelProvider_ConnectToChannel_ParamsDataView {
 public:
  BroadcastChannelProvider_ConnectToChannel_ParamsDataView() {}

  BroadcastChannelProvider_ConnectToChannel_ParamsDataView(
      internal::BroadcastChannelProvider_ConnectToChannel_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOriginDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  bool ReadOrigin(UserType* output) {
    auto pointer = data_->origin.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginPtr>(
        pointer, output, context_);
  }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadName(UserType* output) {
    auto pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  BroadcastChannelClientAssociatedPtrInfo TakeReceiver() {
    BroadcastChannelClientAssociatedPtrInfo result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::BroadcastChannelClientAssociatedPtrInfo>(
            &data_->receiver, &result, context_);
    DCHECK(ret);
    return result;
  }
  BroadcastChannelClientAssociatedRequest TakeSender() {
    BroadcastChannelClientAssociatedRequest result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::BroadcastChannelClientAssociatedRequest>(
            &data_->sender, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::BroadcastChannelProvider_ConnectToChannel_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void BroadcastChannelProvider_ConnectToChannel_ParamsDataView::GetOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}
inline void BroadcastChannelProvider_ConnectToChannel_ParamsDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}


}  // namespace
const char BroadcastChannelClient::Name_[] = "blink::mojom::BroadcastChannelClient";
const uint32_t BroadcastChannelClient::Version_;

BroadcastChannelClientProxy::BroadcastChannelClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void BroadcastChannelClientProxy::OnMessage(
    mojo::Array<uint8_t> in_message) {
  size_t size = sizeof(::blink::mojom::internal::BroadcastChannelClient_OnMessage_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::Array<uint8_t>>(
      in_message, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kBroadcastChannelClient_OnMessage_Name, size);

  auto params =
      ::blink::mojom::internal::BroadcastChannelClient_OnMessage_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->message)::BaseType* message_ptr;
  const mojo::internal::ContainerValidateParams message_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::Array<uint8_t>>(
      in_message, builder.buffer(), &message_ptr, &message_validate_params,
      &serialization_context_);
  params->message.Set(message_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->message.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message in BroadcastChannelClient.OnMessage request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

BroadcastChannelClientStub::BroadcastChannelClientStub()
    : sink_(nullptr),
      control_message_handler_(BroadcastChannelClient::Version_) {
}

BroadcastChannelClientStub::~BroadcastChannelClientStub() {}

bool BroadcastChannelClientStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kBroadcastChannelClient_OnMessage_Name: {
      internal::BroadcastChannelClient_OnMessage_Params_Data* params =
          reinterpret_cast<internal::BroadcastChannelClient_OnMessage_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      mojo::Array<uint8_t> p_message{};
      BroadcastChannelClient_OnMessage_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadMessage(&p_message))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "BroadcastChannelClient::OnMessage deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "BroadcastChannelClient::OnMessage");
      mojo::internal::MessageDispatchContext context(message);
      sink_->OnMessage(
std::move(p_message));
      return true;
    }
  }
  return false;
}

bool BroadcastChannelClientStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kBroadcastChannelClient_OnMessage_Name: {
      break;
    }
  }
  return false;
}

BroadcastChannelClientRequestValidator::BroadcastChannelClientRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool BroadcastChannelClientRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "BroadcastChannelClient RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kBroadcastChannelClient_OnMessage_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::BroadcastChannelClient_OnMessage_Params_Data>(
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

const char BroadcastChannelProvider::Name_[] = "blink::mojom::BroadcastChannelProvider";
const uint32_t BroadcastChannelProvider::Version_;

BroadcastChannelProviderProxy::BroadcastChannelProviderProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void BroadcastChannelProviderProxy::ConnectToChannel(
    const url::Origin& in_origin, const mojo::String& in_name, BroadcastChannelClientAssociatedPtrInfo in_receiver, BroadcastChannelClientAssociatedRequest in_sender) {
  size_t size = sizeof(::blink::mojom::internal::BroadcastChannelProvider_ConnectToChannel_Params_Data);
  size += mojo::internal::PrepareToSerialize<::url::mojom::OriginPtr>(
      in_origin, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_name, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kBroadcastChannelProvider_ConnectToChannel_Name, size);

  auto params =
      ::blink::mojom::internal::BroadcastChannelProvider_ConnectToChannel_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->origin)::BaseType* origin_ptr;
  mojo::internal::Serialize<::url::mojom::OriginPtr>(
      in_origin, builder.buffer(), &origin_ptr, &serialization_context_);
  params->origin.Set(origin_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->origin.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origin in BroadcastChannelProvider.ConnectToChannel request");
  typename decltype(params->name)::BaseType* name_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_name, builder.buffer(), &name_ptr, &serialization_context_);
  params->name.Set(name_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null name in BroadcastChannelProvider.ConnectToChannel request");
  mojo::internal::Serialize<::blink::mojom::BroadcastChannelClientAssociatedPtrInfo>(
      in_receiver, &params->receiver, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->receiver),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid receiver in BroadcastChannelProvider.ConnectToChannel request");
  mojo::internal::Serialize<::blink::mojom::BroadcastChannelClientAssociatedRequest>(
      in_sender, &params->sender, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->sender),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid sender in BroadcastChannelProvider.ConnectToChannel request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

BroadcastChannelProviderStub::BroadcastChannelProviderStub()
    : sink_(nullptr),
      control_message_handler_(BroadcastChannelProvider::Version_) {
}

BroadcastChannelProviderStub::~BroadcastChannelProviderStub() {}

bool BroadcastChannelProviderStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kBroadcastChannelProvider_ConnectToChannel_Name: {
      internal::BroadcastChannelProvider_ConnectToChannel_Params_Data* params =
          reinterpret_cast<internal::BroadcastChannelProvider_ConnectToChannel_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      url::Origin p_origin{};
      mojo::String p_name{};
      BroadcastChannelClientAssociatedPtrInfo p_receiver{};
      BroadcastChannelClientAssociatedRequest p_sender{};
      BroadcastChannelProvider_ConnectToChannel_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadOrigin(&p_origin))
        success = false;
      if (!input_data_view.ReadName(&p_name))
        success = false;
      p_receiver = input_data_view.TakeReceiver();
      p_sender = input_data_view.TakeSender();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "BroadcastChannelProvider::ConnectToChannel deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "BroadcastChannelProvider::ConnectToChannel");
      mojo::internal::MessageDispatchContext context(message);
      sink_->ConnectToChannel(
std::move(p_origin), 
std::move(p_name), 
std::move(p_receiver), 
std::move(p_sender));
      return true;
    }
  }
  return false;
}

bool BroadcastChannelProviderStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kBroadcastChannelProvider_ConnectToChannel_Name: {
      break;
    }
  }
  return false;
}

BroadcastChannelProviderRequestValidator::BroadcastChannelProviderRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool BroadcastChannelProviderRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "BroadcastChannelProvider RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kBroadcastChannelProvider_ConnectToChannel_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::BroadcastChannelProvider_ConnectToChannel_Params_Data>(
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
}  // namespace blink

namespace mojo {

}  // namespace mojo


#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
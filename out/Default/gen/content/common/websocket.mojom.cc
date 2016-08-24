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

#include "content/common/websocket.mojom.h"

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

class WebSocketClient_OnFailChannel_ParamsDataView {
 public:
  WebSocketClient_OnFailChannel_ParamsDataView() {}

  WebSocketClient_OnFailChannel_ParamsDataView(
      internal::WebSocketClient_OnFailChannel_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetReasonDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadReason(UserType* output) {
    auto pointer = data_->reason.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::WebSocketClient_OnFailChannel_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void WebSocketClient_OnFailChannel_ParamsDataView::GetReasonDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->reason.Get();
  *output = mojo::StringDataView(pointer, context_);
}


class WebSocketClient_OnStartOpeningHandshake_ParamsDataView {
 public:
  WebSocketClient_OnStartOpeningHandshake_ParamsDataView() {}

  WebSocketClient_OnStartOpeningHandshake_ParamsDataView(
      internal::WebSocketClient_OnStartOpeningHandshake_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRequestDataView(
      WebSocketHandshakeRequestDataView* output);

  template <typename UserType>
  bool ReadRequest(UserType* output) {
    auto pointer = data_->request.Get();
    return mojo::internal::Deserialize<::content::mojom::WebSocketHandshakeRequestPtr>(
        pointer, output, context_);
  }
 private:
  internal::WebSocketClient_OnStartOpeningHandshake_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void WebSocketClient_OnStartOpeningHandshake_ParamsDataView::GetRequestDataView(
    WebSocketHandshakeRequestDataView* output) {
  auto pointer = data_->request.Get();
  *output = WebSocketHandshakeRequestDataView(pointer, context_);
}


class WebSocketClient_OnFinishOpeningHandshake_ParamsDataView {
 public:
  WebSocketClient_OnFinishOpeningHandshake_ParamsDataView() {}

  WebSocketClient_OnFinishOpeningHandshake_ParamsDataView(
      internal::WebSocketClient_OnFinishOpeningHandshake_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResponseDataView(
      WebSocketHandshakeResponseDataView* output);

  template <typename UserType>
  bool ReadResponse(UserType* output) {
    auto pointer = data_->response.Get();
    return mojo::internal::Deserialize<::content::mojom::WebSocketHandshakeResponsePtr>(
        pointer, output, context_);
  }
 private:
  internal::WebSocketClient_OnFinishOpeningHandshake_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void WebSocketClient_OnFinishOpeningHandshake_ParamsDataView::GetResponseDataView(
    WebSocketHandshakeResponseDataView* output) {
  auto pointer = data_->response.Get();
  *output = WebSocketHandshakeResponseDataView(pointer, context_);
}


class WebSocketClient_OnAddChannelResponse_ParamsDataView {
 public:
  WebSocketClient_OnAddChannelResponse_ParamsDataView() {}

  WebSocketClient_OnAddChannelResponse_ParamsDataView(
      internal::WebSocketClient_OnAddChannelResponse_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSelectedProtocolDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadSelectedProtocol(UserType* output) {
    auto pointer = data_->selected_protocol.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetExtensionsDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadExtensions(UserType* output) {
    auto pointer = data_->extensions.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::WebSocketClient_OnAddChannelResponse_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void WebSocketClient_OnAddChannelResponse_ParamsDataView::GetSelectedProtocolDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->selected_protocol.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void WebSocketClient_OnAddChannelResponse_ParamsDataView::GetExtensionsDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->extensions.Get();
  *output = mojo::StringDataView(pointer, context_);
}


class WebSocketClient_OnDataFrame_ParamsDataView {
 public:
  WebSocketClient_OnDataFrame_ParamsDataView() {}

  WebSocketClient_OnDataFrame_ParamsDataView(
      internal::WebSocketClient_OnDataFrame_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool fin() const {
    return data_->fin;
  }
  template <typename UserType>
  bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::content::mojom::WebSocketMessageType>(
        data_value, output);
  }

  ::content::mojom::WebSocketMessageType type() const {
    return static_cast<::content::mojom::WebSocketMessageType>(data_->type);
  }
  inline void GetDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  bool ReadData(UserType* output) {
    auto pointer = data_->data.Get();
    return mojo::internal::Deserialize<mojo::Array<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::WebSocketClient_OnDataFrame_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void WebSocketClient_OnDataFrame_ParamsDataView::GetDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


class WebSocketClient_OnFlowControl_ParamsDataView {
 public:
  WebSocketClient_OnFlowControl_ParamsDataView() {}

  WebSocketClient_OnFlowControl_ParamsDataView(
      internal::WebSocketClient_OnFlowControl_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t quota() const {
    return data_->quota;
  }
 private:
  internal::WebSocketClient_OnFlowControl_Params_Data* data_ = nullptr;
};




class WebSocketClient_OnDropChannel_ParamsDataView {
 public:
  WebSocketClient_OnDropChannel_ParamsDataView() {}

  WebSocketClient_OnDropChannel_ParamsDataView(
      internal::WebSocketClient_OnDropChannel_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool was_clean() const {
    return data_->was_clean;
  }
  uint16_t code() const {
    return data_->code;
  }
  inline void GetReasonDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadReason(UserType* output) {
    auto pointer = data_->reason.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::WebSocketClient_OnDropChannel_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void WebSocketClient_OnDropChannel_ParamsDataView::GetReasonDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->reason.Get();
  *output = mojo::StringDataView(pointer, context_);
}


class WebSocketClient_OnClosingHandshake_ParamsDataView {
 public:
  WebSocketClient_OnClosingHandshake_ParamsDataView() {}

  WebSocketClient_OnClosingHandshake_ParamsDataView(
      internal::WebSocketClient_OnClosingHandshake_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::WebSocketClient_OnClosingHandshake_Params_Data* data_ = nullptr;
};




class WebSocket_AddChannelRequest_ParamsDataView {
 public:
  WebSocket_AddChannelRequest_ParamsDataView() {}

  WebSocket_AddChannelRequest_ParamsDataView(
      internal::WebSocket_AddChannelRequest_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  bool ReadUrl(UserType* output) {
    auto pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlPtr>(
        pointer, output, context_);
  }
  inline void GetRequestedProtocolsDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  bool ReadRequestedProtocols(UserType* output) {
    auto pointer = data_->requested_protocols.Get();
    return mojo::internal::Deserialize<mojo::Array<mojo::String>>(
        pointer, output, context_);
  }
  inline void GetOriginDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  bool ReadOrigin(UserType* output) {
    auto pointer = data_->origin.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginPtr>(
        pointer, output, context_);
  }
  inline void GetFirstPartyForCookiesDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  bool ReadFirstPartyForCookies(UserType* output) {
    auto pointer = data_->first_party_for_cookies.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlPtr>(
        pointer, output, context_);
  }
  inline void GetUserAgentOverrideDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadUserAgentOverride(UserType* output) {
    auto pointer = data_->user_agent_override.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  WebSocketClientPtr TakeClient() {
    WebSocketClientPtr result;
    bool ret =
        mojo::internal::Deserialize<::content::mojom::WebSocketClientPtr>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::WebSocket_AddChannelRequest_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void WebSocket_AddChannelRequest_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void WebSocket_AddChannelRequest_ParamsDataView::GetRequestedProtocolsDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->requested_protocols.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}
inline void WebSocket_AddChannelRequest_ParamsDataView::GetOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}
inline void WebSocket_AddChannelRequest_ParamsDataView::GetFirstPartyForCookiesDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->first_party_for_cookies.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void WebSocket_AddChannelRequest_ParamsDataView::GetUserAgentOverrideDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->user_agent_override.Get();
  *output = mojo::StringDataView(pointer, context_);
}


class WebSocket_SendFrame_ParamsDataView {
 public:
  WebSocket_SendFrame_ParamsDataView() {}

  WebSocket_SendFrame_ParamsDataView(
      internal::WebSocket_SendFrame_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool fin() const {
    return data_->fin;
  }
  template <typename UserType>
  bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::content::mojom::WebSocketMessageType>(
        data_value, output);
  }

  ::content::mojom::WebSocketMessageType type() const {
    return static_cast<::content::mojom::WebSocketMessageType>(data_->type);
  }
  inline void GetDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  bool ReadData(UserType* output) {
    auto pointer = data_->data.Get();
    return mojo::internal::Deserialize<mojo::Array<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::WebSocket_SendFrame_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void WebSocket_SendFrame_ParamsDataView::GetDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


class WebSocket_SendFlowControl_ParamsDataView {
 public:
  WebSocket_SendFlowControl_ParamsDataView() {}

  WebSocket_SendFlowControl_ParamsDataView(
      internal::WebSocket_SendFlowControl_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t quota() const {
    return data_->quota;
  }
 private:
  internal::WebSocket_SendFlowControl_Params_Data* data_ = nullptr;
};




class WebSocket_StartClosingHandshake_ParamsDataView {
 public:
  WebSocket_StartClosingHandshake_ParamsDataView() {}

  WebSocket_StartClosingHandshake_ParamsDataView(
      internal::WebSocket_StartClosingHandshake_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint16_t code() const {
    return data_->code;
  }
  inline void GetReasonDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadReason(UserType* output) {
    auto pointer = data_->reason.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::WebSocket_StartClosingHandshake_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void WebSocket_StartClosingHandshake_ParamsDataView::GetReasonDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->reason.Get();
  *output = mojo::StringDataView(pointer, context_);
}


}  // namespace// static
HttpHeaderPtr HttpHeader::New() {
  HttpHeaderPtr rv;
  mojo::internal::StructHelper<HttpHeader>::Initialize(&rv);
  return rv;
}

HttpHeader::HttpHeader()
    : name(),
      value() {
}

HttpHeader::~HttpHeader() {
}// static
WebSocketHandshakeRequestPtr WebSocketHandshakeRequest::New() {
  WebSocketHandshakeRequestPtr rv;
  mojo::internal::StructHelper<WebSocketHandshakeRequest>::Initialize(&rv);
  return rv;
}

WebSocketHandshakeRequest::WebSocketHandshakeRequest()
    : url(),
      headers(),
      headers_text() {
}

WebSocketHandshakeRequest::~WebSocketHandshakeRequest() {
}// static
WebSocketHandshakeResponsePtr WebSocketHandshakeResponse::New() {
  WebSocketHandshakeResponsePtr rv;
  mojo::internal::StructHelper<WebSocketHandshakeResponse>::Initialize(&rv);
  return rv;
}

WebSocketHandshakeResponse::WebSocketHandshakeResponse()
    : url(),
      status_code(),
      status_text(),
      headers(),
      headers_text() {
}

WebSocketHandshakeResponse::~WebSocketHandshakeResponse() {
}
const char WebSocketClient::Name_[] = "content::mojom::WebSocketClient";
const uint32_t WebSocketClient::Version_;

WebSocketClientProxy::WebSocketClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void WebSocketClientProxy::OnFailChannel(
    const std::string& in_reason) {
  size_t size = sizeof(::content::mojom::internal::WebSocketClient_OnFailChannel_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_reason, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kWebSocketClient_OnFailChannel_Name, size);

  auto params =
      ::content::mojom::internal::WebSocketClient_OnFailChannel_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->reason)::BaseType* reason_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_reason, builder.buffer(), &reason_ptr, &serialization_context_);
  params->reason.Set(reason_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->reason.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null reason in WebSocketClient.OnFailChannel request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void WebSocketClientProxy::OnStartOpeningHandshake(
    WebSocketHandshakeRequestPtr in_request) {
  size_t size = sizeof(::content::mojom::internal::WebSocketClient_OnStartOpeningHandshake_Params_Data);
  size += mojo::internal::PrepareToSerialize<::content::mojom::WebSocketHandshakeRequestPtr>(
      in_request, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kWebSocketClient_OnStartOpeningHandshake_Name, size);

  auto params =
      ::content::mojom::internal::WebSocketClient_OnStartOpeningHandshake_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->request)::BaseType* request_ptr;
  mojo::internal::Serialize<::content::mojom::WebSocketHandshakeRequestPtr>(
      in_request, builder.buffer(), &request_ptr, &serialization_context_);
  params->request.Set(request_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->request.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null request in WebSocketClient.OnStartOpeningHandshake request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void WebSocketClientProxy::OnFinishOpeningHandshake(
    WebSocketHandshakeResponsePtr in_response) {
  size_t size = sizeof(::content::mojom::internal::WebSocketClient_OnFinishOpeningHandshake_Params_Data);
  size += mojo::internal::PrepareToSerialize<::content::mojom::WebSocketHandshakeResponsePtr>(
      in_response, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kWebSocketClient_OnFinishOpeningHandshake_Name, size);

  auto params =
      ::content::mojom::internal::WebSocketClient_OnFinishOpeningHandshake_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->response)::BaseType* response_ptr;
  mojo::internal::Serialize<::content::mojom::WebSocketHandshakeResponsePtr>(
      in_response, builder.buffer(), &response_ptr, &serialization_context_);
  params->response.Set(response_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->response.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null response in WebSocketClient.OnFinishOpeningHandshake request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void WebSocketClientProxy::OnAddChannelResponse(
    const std::string& in_selected_protocol, const std::string& in_extensions) {
  size_t size = sizeof(::content::mojom::internal::WebSocketClient_OnAddChannelResponse_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_selected_protocol, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_extensions, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kWebSocketClient_OnAddChannelResponse_Name, size);

  auto params =
      ::content::mojom::internal::WebSocketClient_OnAddChannelResponse_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->selected_protocol)::BaseType* selected_protocol_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_selected_protocol, builder.buffer(), &selected_protocol_ptr, &serialization_context_);
  params->selected_protocol.Set(selected_protocol_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->selected_protocol.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null selected_protocol in WebSocketClient.OnAddChannelResponse request");
  typename decltype(params->extensions)::BaseType* extensions_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_extensions, builder.buffer(), &extensions_ptr, &serialization_context_);
  params->extensions.Set(extensions_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->extensions.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null extensions in WebSocketClient.OnAddChannelResponse request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void WebSocketClientProxy::OnDataFrame(
    bool in_fin, WebSocketMessageType in_type, const std::vector<uint8_t>& in_data) {
  size_t size = sizeof(::content::mojom::internal::WebSocketClient_OnDataFrame_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::Array<uint8_t>>(
      in_data, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kWebSocketClient_OnDataFrame_Name, size);

  auto params =
      ::content::mojom::internal::WebSocketClient_OnDataFrame_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->fin = in_fin;
  mojo::internal::Serialize<::content::mojom::WebSocketMessageType>(
      in_type, &params->type);
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
      "null data in WebSocketClient.OnDataFrame request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void WebSocketClientProxy::OnFlowControl(
    int64_t in_quota) {
  size_t size = sizeof(::content::mojom::internal::WebSocketClient_OnFlowControl_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kWebSocketClient_OnFlowControl_Name, size);

  auto params =
      ::content::mojom::internal::WebSocketClient_OnFlowControl_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->quota = in_quota;
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void WebSocketClientProxy::OnDropChannel(
    bool in_was_clean, uint16_t in_code, const std::string& in_reason) {
  size_t size = sizeof(::content::mojom::internal::WebSocketClient_OnDropChannel_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_reason, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kWebSocketClient_OnDropChannel_Name, size);

  auto params =
      ::content::mojom::internal::WebSocketClient_OnDropChannel_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->was_clean = in_was_clean;
  params->code = in_code;
  typename decltype(params->reason)::BaseType* reason_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_reason, builder.buffer(), &reason_ptr, &serialization_context_);
  params->reason.Set(reason_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->reason.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null reason in WebSocketClient.OnDropChannel request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void WebSocketClientProxy::OnClosingHandshake(
    ) {
  size_t size = sizeof(::content::mojom::internal::WebSocketClient_OnClosingHandshake_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kWebSocketClient_OnClosingHandshake_Name, size);

  auto params =
      ::content::mojom::internal::WebSocketClient_OnClosingHandshake_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

WebSocketClientStub::WebSocketClientStub()
    : sink_(nullptr),
      control_message_handler_(WebSocketClient::Version_) {
}

WebSocketClientStub::~WebSocketClientStub() {}

bool WebSocketClientStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kWebSocketClient_OnFailChannel_Name: {
      internal::WebSocketClient_OnFailChannel_Params_Data* params =
          reinterpret_cast<internal::WebSocketClient_OnFailChannel_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      std::string p_reason{};
      WebSocketClient_OnFailChannel_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadReason(&p_reason))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WebSocketClient::OnFailChannel deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WebSocketClient::OnFailChannel");
      mojo::internal::MessageDispatchContext context(message);
      sink_->OnFailChannel(
std::move(p_reason));
      return true;
    }
    case internal::kWebSocketClient_OnStartOpeningHandshake_Name: {
      internal::WebSocketClient_OnStartOpeningHandshake_Params_Data* params =
          reinterpret_cast<internal::WebSocketClient_OnStartOpeningHandshake_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      WebSocketHandshakeRequestPtr p_request{};
      WebSocketClient_OnStartOpeningHandshake_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadRequest(&p_request))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WebSocketClient::OnStartOpeningHandshake deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WebSocketClient::OnStartOpeningHandshake");
      mojo::internal::MessageDispatchContext context(message);
      sink_->OnStartOpeningHandshake(
std::move(p_request));
      return true;
    }
    case internal::kWebSocketClient_OnFinishOpeningHandshake_Name: {
      internal::WebSocketClient_OnFinishOpeningHandshake_Params_Data* params =
          reinterpret_cast<internal::WebSocketClient_OnFinishOpeningHandshake_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      WebSocketHandshakeResponsePtr p_response{};
      WebSocketClient_OnFinishOpeningHandshake_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadResponse(&p_response))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WebSocketClient::OnFinishOpeningHandshake deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WebSocketClient::OnFinishOpeningHandshake");
      mojo::internal::MessageDispatchContext context(message);
      sink_->OnFinishOpeningHandshake(
std::move(p_response));
      return true;
    }
    case internal::kWebSocketClient_OnAddChannelResponse_Name: {
      internal::WebSocketClient_OnAddChannelResponse_Params_Data* params =
          reinterpret_cast<internal::WebSocketClient_OnAddChannelResponse_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      std::string p_selected_protocol{};
      std::string p_extensions{};
      WebSocketClient_OnAddChannelResponse_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadSelectedProtocol(&p_selected_protocol))
        success = false;
      if (!input_data_view.ReadExtensions(&p_extensions))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WebSocketClient::OnAddChannelResponse deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WebSocketClient::OnAddChannelResponse");
      mojo::internal::MessageDispatchContext context(message);
      sink_->OnAddChannelResponse(
std::move(p_selected_protocol), 
std::move(p_extensions));
      return true;
    }
    case internal::kWebSocketClient_OnDataFrame_Name: {
      internal::WebSocketClient_OnDataFrame_Params_Data* params =
          reinterpret_cast<internal::WebSocketClient_OnDataFrame_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      bool p_fin{};
      WebSocketMessageType p_type{};
      std::vector<uint8_t> p_data{};
      WebSocketClient_OnDataFrame_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_fin = input_data_view.fin();
      if (!input_data_view.ReadType(&p_type))
        success = false;
      if (!input_data_view.ReadData(&p_data))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WebSocketClient::OnDataFrame deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WebSocketClient::OnDataFrame");
      mojo::internal::MessageDispatchContext context(message);
      sink_->OnDataFrame(
std::move(p_fin), 
std::move(p_type), 
std::move(p_data));
      return true;
    }
    case internal::kWebSocketClient_OnFlowControl_Name: {
      internal::WebSocketClient_OnFlowControl_Params_Data* params =
          reinterpret_cast<internal::WebSocketClient_OnFlowControl_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      int64_t p_quota{};
      WebSocketClient_OnFlowControl_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_quota = input_data_view.quota();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WebSocketClient::OnFlowControl deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WebSocketClient::OnFlowControl");
      mojo::internal::MessageDispatchContext context(message);
      sink_->OnFlowControl(
std::move(p_quota));
      return true;
    }
    case internal::kWebSocketClient_OnDropChannel_Name: {
      internal::WebSocketClient_OnDropChannel_Params_Data* params =
          reinterpret_cast<internal::WebSocketClient_OnDropChannel_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      bool p_was_clean{};
      uint16_t p_code{};
      std::string p_reason{};
      WebSocketClient_OnDropChannel_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_was_clean = input_data_view.was_clean();
      p_code = input_data_view.code();
      if (!input_data_view.ReadReason(&p_reason))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WebSocketClient::OnDropChannel deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WebSocketClient::OnDropChannel");
      mojo::internal::MessageDispatchContext context(message);
      sink_->OnDropChannel(
std::move(p_was_clean), 
std::move(p_code), 
std::move(p_reason));
      return true;
    }
    case internal::kWebSocketClient_OnClosingHandshake_Name: {
      internal::WebSocketClient_OnClosingHandshake_Params_Data* params =
          reinterpret_cast<internal::WebSocketClient_OnClosingHandshake_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      WebSocketClient_OnClosingHandshake_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WebSocketClient::OnClosingHandshake deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WebSocketClient::OnClosingHandshake");
      mojo::internal::MessageDispatchContext context(message);
      sink_->OnClosingHandshake();
      return true;
    }
  }
  return false;
}

bool WebSocketClientStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kWebSocketClient_OnFailChannel_Name: {
      break;
    }
    case internal::kWebSocketClient_OnStartOpeningHandshake_Name: {
      break;
    }
    case internal::kWebSocketClient_OnFinishOpeningHandshake_Name: {
      break;
    }
    case internal::kWebSocketClient_OnAddChannelResponse_Name: {
      break;
    }
    case internal::kWebSocketClient_OnDataFrame_Name: {
      break;
    }
    case internal::kWebSocketClient_OnFlowControl_Name: {
      break;
    }
    case internal::kWebSocketClient_OnDropChannel_Name: {
      break;
    }
    case internal::kWebSocketClient_OnClosingHandshake_Name: {
      break;
    }
  }
  return false;
}

WebSocketClientRequestValidator::WebSocketClientRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool WebSocketClientRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "WebSocketClient RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kWebSocketClient_OnFailChannel_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebSocketClient_OnFailChannel_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kWebSocketClient_OnStartOpeningHandshake_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebSocketClient_OnStartOpeningHandshake_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kWebSocketClient_OnFinishOpeningHandshake_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebSocketClient_OnFinishOpeningHandshake_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kWebSocketClient_OnAddChannelResponse_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebSocketClient_OnAddChannelResponse_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kWebSocketClient_OnDataFrame_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebSocketClient_OnDataFrame_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kWebSocketClient_OnFlowControl_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebSocketClient_OnFlowControl_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kWebSocketClient_OnDropChannel_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebSocketClient_OnDropChannel_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kWebSocketClient_OnClosingHandshake_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebSocketClient_OnClosingHandshake_Params_Data>(
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

const char WebSocket::Name_[] = "content::mojom::WebSocket";
const uint32_t WebSocket::Version_;

WebSocketProxy::WebSocketProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void WebSocketProxy::AddChannelRequest(
    const GURL& in_url, const std::vector<std::string>& in_requested_protocols, const url::Origin& in_origin, const GURL& in_first_party_for_cookies, const std::string& in_user_agent_override, WebSocketClientPtr in_client) {
  size_t size = sizeof(::content::mojom::internal::WebSocket_AddChannelRequest_Params_Data);
  size += mojo::internal::PrepareToSerialize<::url::mojom::UrlPtr>(
      in_url, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<mojo::Array<mojo::String>>(
      in_requested_protocols, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<::url::mojom::OriginPtr>(
      in_origin, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<::url::mojom::UrlPtr>(
      in_first_party_for_cookies, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_user_agent_override, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kWebSocket_AddChannelRequest_Name, size);

  auto params =
      ::content::mojom::internal::WebSocket_AddChannelRequest_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->url)::BaseType* url_ptr;
  mojo::internal::Serialize<::url::mojom::UrlPtr>(
      in_url, builder.buffer(), &url_ptr, &serialization_context_);
  params->url.Set(url_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in WebSocket.AddChannelRequest request");
  typename decltype(params->requested_protocols)::BaseType* requested_protocols_ptr;
  const mojo::internal::ContainerValidateParams requested_protocols_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  mojo::internal::Serialize<mojo::Array<mojo::String>>(
      in_requested_protocols, builder.buffer(), &requested_protocols_ptr, &requested_protocols_validate_params,
      &serialization_context_);
  params->requested_protocols.Set(requested_protocols_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->requested_protocols.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null requested_protocols in WebSocket.AddChannelRequest request");
  typename decltype(params->origin)::BaseType* origin_ptr;
  mojo::internal::Serialize<::url::mojom::OriginPtr>(
      in_origin, builder.buffer(), &origin_ptr, &serialization_context_);
  params->origin.Set(origin_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->origin.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origin in WebSocket.AddChannelRequest request");
  typename decltype(params->first_party_for_cookies)::BaseType* first_party_for_cookies_ptr;
  mojo::internal::Serialize<::url::mojom::UrlPtr>(
      in_first_party_for_cookies, builder.buffer(), &first_party_for_cookies_ptr, &serialization_context_);
  params->first_party_for_cookies.Set(first_party_for_cookies_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->first_party_for_cookies.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null first_party_for_cookies in WebSocket.AddChannelRequest request");
  typename decltype(params->user_agent_override)::BaseType* user_agent_override_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_user_agent_override, builder.buffer(), &user_agent_override_ptr, &serialization_context_);
  params->user_agent_override.Set(user_agent_override_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->user_agent_override.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null user_agent_override in WebSocket.AddChannelRequest request");
  mojo::internal::Serialize<::content::mojom::WebSocketClientPtr>(
      in_client, &params->client, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in WebSocket.AddChannelRequest request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void WebSocketProxy::SendFrame(
    bool in_fin, WebSocketMessageType in_type, const std::vector<uint8_t>& in_data) {
  size_t size = sizeof(::content::mojom::internal::WebSocket_SendFrame_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::Array<uint8_t>>(
      in_data, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kWebSocket_SendFrame_Name, size);

  auto params =
      ::content::mojom::internal::WebSocket_SendFrame_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->fin = in_fin;
  mojo::internal::Serialize<::content::mojom::WebSocketMessageType>(
      in_type, &params->type);
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
      "null data in WebSocket.SendFrame request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void WebSocketProxy::SendFlowControl(
    int64_t in_quota) {
  size_t size = sizeof(::content::mojom::internal::WebSocket_SendFlowControl_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kWebSocket_SendFlowControl_Name, size);

  auto params =
      ::content::mojom::internal::WebSocket_SendFlowControl_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->quota = in_quota;
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void WebSocketProxy::StartClosingHandshake(
    uint16_t in_code, const std::string& in_reason) {
  size_t size = sizeof(::content::mojom::internal::WebSocket_StartClosingHandshake_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_reason, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kWebSocket_StartClosingHandshake_Name, size);

  auto params =
      ::content::mojom::internal::WebSocket_StartClosingHandshake_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->code = in_code;
  typename decltype(params->reason)::BaseType* reason_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_reason, builder.buffer(), &reason_ptr, &serialization_context_);
  params->reason.Set(reason_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->reason.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null reason in WebSocket.StartClosingHandshake request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

WebSocketStub::WebSocketStub()
    : sink_(nullptr),
      control_message_handler_(WebSocket::Version_) {
}

WebSocketStub::~WebSocketStub() {}

bool WebSocketStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kWebSocket_AddChannelRequest_Name: {
      internal::WebSocket_AddChannelRequest_Params_Data* params =
          reinterpret_cast<internal::WebSocket_AddChannelRequest_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      GURL p_url{};
      std::vector<std::string> p_requested_protocols{};
      url::Origin p_origin{};
      GURL p_first_party_for_cookies{};
      std::string p_user_agent_override{};
      WebSocketClientPtr p_client{};
      WebSocket_AddChannelRequest_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!input_data_view.ReadRequestedProtocols(&p_requested_protocols))
        success = false;
      if (!input_data_view.ReadOrigin(&p_origin))
        success = false;
      if (!input_data_view.ReadFirstPartyForCookies(&p_first_party_for_cookies))
        success = false;
      if (!input_data_view.ReadUserAgentOverride(&p_user_agent_override))
        success = false;
      p_client = input_data_view.TakeClient();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WebSocket::AddChannelRequest deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WebSocket::AddChannelRequest");
      mojo::internal::MessageDispatchContext context(message);
      sink_->AddChannelRequest(
std::move(p_url), 
std::move(p_requested_protocols), 
std::move(p_origin), 
std::move(p_first_party_for_cookies), 
std::move(p_user_agent_override), 
std::move(p_client));
      return true;
    }
    case internal::kWebSocket_SendFrame_Name: {
      internal::WebSocket_SendFrame_Params_Data* params =
          reinterpret_cast<internal::WebSocket_SendFrame_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      bool p_fin{};
      WebSocketMessageType p_type{};
      std::vector<uint8_t> p_data{};
      WebSocket_SendFrame_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_fin = input_data_view.fin();
      if (!input_data_view.ReadType(&p_type))
        success = false;
      if (!input_data_view.ReadData(&p_data))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WebSocket::SendFrame deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WebSocket::SendFrame");
      mojo::internal::MessageDispatchContext context(message);
      sink_->SendFrame(
std::move(p_fin), 
std::move(p_type), 
std::move(p_data));
      return true;
    }
    case internal::kWebSocket_SendFlowControl_Name: {
      internal::WebSocket_SendFlowControl_Params_Data* params =
          reinterpret_cast<internal::WebSocket_SendFlowControl_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      int64_t p_quota{};
      WebSocket_SendFlowControl_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_quota = input_data_view.quota();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WebSocket::SendFlowControl deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WebSocket::SendFlowControl");
      mojo::internal::MessageDispatchContext context(message);
      sink_->SendFlowControl(
std::move(p_quota));
      return true;
    }
    case internal::kWebSocket_StartClosingHandshake_Name: {
      internal::WebSocket_StartClosingHandshake_Params_Data* params =
          reinterpret_cast<internal::WebSocket_StartClosingHandshake_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      uint16_t p_code{};
      std::string p_reason{};
      WebSocket_StartClosingHandshake_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_code = input_data_view.code();
      if (!input_data_view.ReadReason(&p_reason))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WebSocket::StartClosingHandshake deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WebSocket::StartClosingHandshake");
      mojo::internal::MessageDispatchContext context(message);
      sink_->StartClosingHandshake(
std::move(p_code), 
std::move(p_reason));
      return true;
    }
  }
  return false;
}

bool WebSocketStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kWebSocket_AddChannelRequest_Name: {
      break;
    }
    case internal::kWebSocket_SendFrame_Name: {
      break;
    }
    case internal::kWebSocket_SendFlowControl_Name: {
      break;
    }
    case internal::kWebSocket_StartClosingHandshake_Name: {
      break;
    }
  }
  return false;
}

WebSocketRequestValidator::WebSocketRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool WebSocketRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "WebSocket RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kWebSocket_AddChannelRequest_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebSocket_AddChannelRequest_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kWebSocket_SendFrame_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebSocket_SendFrame_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kWebSocket_SendFlowControl_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebSocket_SendFlowControl_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kWebSocket_StartClosingHandshake_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebSocket_StartClosingHandshake_Params_Data>(
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


// static
bool StructTraits<::content::mojom::HttpHeader, ::content::mojom::HttpHeaderPtr>::Read(
    ::content::mojom::HttpHeaderDataView input,
    ::content::mojom::HttpHeaderPtr* output) {
  bool success = true;
  ::content::mojom::HttpHeaderPtr result(::content::mojom::HttpHeader::New());
  
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadValue(&result->value))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::content::mojom::WebSocketHandshakeRequest, ::content::mojom::WebSocketHandshakeRequestPtr>::Read(
    ::content::mojom::WebSocketHandshakeRequestDataView input,
    ::content::mojom::WebSocketHandshakeRequestPtr* output) {
  bool success = true;
  ::content::mojom::WebSocketHandshakeRequestPtr result(::content::mojom::WebSocketHandshakeRequest::New());
  
      if (!input.ReadUrl(&result->url))
        success = false;
      if (!input.ReadHeaders(&result->headers))
        success = false;
      if (!input.ReadHeadersText(&result->headers_text))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::content::mojom::WebSocketHandshakeResponse, ::content::mojom::WebSocketHandshakeResponsePtr>::Read(
    ::content::mojom::WebSocketHandshakeResponseDataView input,
    ::content::mojom::WebSocketHandshakeResponsePtr* output) {
  bool success = true;
  ::content::mojom::WebSocketHandshakeResponsePtr result(::content::mojom::WebSocketHandshakeResponse::New());
  
      if (!input.ReadUrl(&result->url))
        success = false;
      result->status_code = input.status_code();
      if (!input.ReadStatusText(&result->status_text))
        success = false;
      if (!input.ReadHeaders(&result->headers))
        success = false;
      if (!input.ReadHeadersText(&result->headers_text))
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
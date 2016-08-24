// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_WEBSOCKET_MOJOM_H_
#define CONTENT_COMMON_WEBSOCKET_MOJOM_H_

#include <stdint.h>

#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/optional.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/lib/control_message_proxy.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/lib/union_accessor.h"
#include "mojo/public/cpp/bindings/map.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/message_filter.h"
#include "mojo/public/cpp/bindings/native_struct.h"
#include "mojo/public/cpp/bindings/native_struct_data_view.h"
#include "mojo/public/cpp/bindings/no_interface.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "content/common/websocket.mojom-shared.h"
#include "url/mojo/origin.mojom.h"
#include "url/mojo/url.mojom.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"
#include "gpu/config/dx_diag_node.h"
#include "base/values.h"
#include "cc/output/compositor_frame.h"
#include "third_party/skia/include/core/SkImageFilter.h"
#include "gpu/command_buffer/common/sync_token.h"
#include "cc/output/filter_operation.h"
#include "ui/display/display.h"
#include "ui/gfx/geometry/vector2d_f.h"
#include "ui/gfx/geometry/insets.h"
#include "base/version.h"
#include "gpu/config/gpu_info.h"
#include "base/time/time.h"
#include "cc/output/filter_operations.h"
#include "base/strings/string16.h"
#include "ui/gfx/selection_bound.h"
#include "content/common/bluetooth/web_bluetooth_device_id.h"
#include "ui/gfx/geometry/size.h"
#include "base/optional.h"
#include "content/common/resource_request_completion_status.h"
#include "services/shell/public/cpp/capabilities.h"
#include "ui/gfx/geometry/point.h"
#include "ui/events/latency_info.h"
#include "content/public/common/resource_response.h"
#include "cc/output/begin_frame_args.h"
#include "cc/surfaces/surface_sequence.h"
#include "cc/output/compositor_frame_metadata.h"
#include "ui/events/event.h"
#include "cc/quads/draw_quad.h"
#include "base/files/file_path.h"
#include "ui/gfx/geometry/rect_f.h"
#include "cc/quads/render_pass.h"
#include "gpu/command_buffer/common/mailbox_holder.h"
#include "cc/resources/returned_resource.h"
#include "ui/gfx/buffer_types.h"
#include "url/origin.h"
#include "ui/gfx/geometry/point_f.h"
#include "gpu/command_buffer/common/mailbox.h"
#include "cc/input/selection.h"
#include "third_party/skia/include/core/SkBitmap.h"
#include "ui/gfx/native_widget_types.h"
#include "url/gurl.h"
#include "cc/quads/shared_quad_state.h"
#include "cc/resources/transferable_resource.h"
#include "ui/gfx/transform.h"
#include "device/bluetooth/bluetooth_uuid.h"
#include "services/shell/public/cpp/identity.h"
#include "content/common/resource_request.h"
#include "ui/gfx/geometry/rect.h"
#include "gpu/command_buffer/common/capabilities.h"
#include "cc/surfaces/surface_id.h"
#include "ui/gfx/geometry/vector2d.h"
#include "cc/quads/render_pass_id.h"
#include "content/common/content_export.h"


namespace content {
namespace mojom {
class WebSocketClient;
using WebSocketClientPtr = mojo::InterfacePtr<WebSocketClient>;
using WebSocketClientPtrInfo = mojo::InterfacePtrInfo<WebSocketClient>;
using WebSocketClientRequest = mojo::InterfaceRequest<WebSocketClient>;
using WebSocketClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<WebSocketClient>;
using WebSocketClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<WebSocketClient>;
using WebSocketClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<WebSocketClient>;

class WebSocket;
using WebSocketPtr = mojo::InterfacePtr<WebSocket>;
using WebSocketPtrInfo = mojo::InterfacePtrInfo<WebSocket>;
using WebSocketRequest = mojo::InterfaceRequest<WebSocket>;
using WebSocketAssociatedPtr =
    mojo::AssociatedInterfacePtr<WebSocket>;
using WebSocketAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<WebSocket>;
using WebSocketAssociatedRequest =
    mojo::AssociatedInterfaceRequest<WebSocket>;

class HttpHeader;
class HttpHeaderDataView;
using HttpHeaderPtr = mojo::InlinedStructPtr<HttpHeader>;

class WebSocketHandshakeRequest;
class WebSocketHandshakeRequestDataView;
using WebSocketHandshakeRequestPtr = mojo::StructPtr<WebSocketHandshakeRequest>;

class WebSocketHandshakeResponse;
class WebSocketHandshakeResponseDataView;
using WebSocketHandshakeResponsePtr = mojo::StructPtr<WebSocketHandshakeResponse>;


class WebSocketClientProxy;
class WebSocketClientStub;

class WebSocketClientRequestValidator;

class CONTENT_EXPORT WebSocketClient {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = WebSocketClientProxy;
  using Stub_ = WebSocketClientStub;

  using RequestValidator_ = WebSocketClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~WebSocketClient() {}

  virtual void OnFailChannel(const std::string& reason) = 0;

  virtual void OnStartOpeningHandshake(WebSocketHandshakeRequestPtr request) = 0;

  virtual void OnFinishOpeningHandshake(WebSocketHandshakeResponsePtr response) = 0;

  virtual void OnAddChannelResponse(const std::string& selected_protocol, const std::string& extensions) = 0;

  virtual void OnDataFrame(bool fin, WebSocketMessageType type, const std::vector<uint8_t>& data) = 0;

  virtual void OnFlowControl(int64_t quota) = 0;

  virtual void OnDropChannel(bool was_clean, uint16_t code, const std::string& reason) = 0;

  virtual void OnClosingHandshake() = 0;
};

class WebSocketProxy;
class WebSocketStub;

class WebSocketRequestValidator;

class CONTENT_EXPORT WebSocket {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = WebSocketProxy;
  using Stub_ = WebSocketStub;

  using RequestValidator_ = WebSocketRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~WebSocket() {}

  virtual void AddChannelRequest(const GURL& url, const std::vector<std::string>& requested_protocols, const url::Origin& origin, const GURL& first_party_for_cookies, const std::string& user_agent_override, WebSocketClientPtr client) = 0;

  virtual void SendFrame(bool fin, WebSocketMessageType type, const std::vector<uint8_t>& data) = 0;

  virtual void SendFlowControl(int64_t quota) = 0;

  virtual void StartClosingHandshake(uint16_t code, const std::string& reason) = 0;
};

class CONTENT_EXPORT WebSocketClientProxy
    : public WebSocketClient,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit WebSocketClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnFailChannel(const std::string& reason) override;
  void OnStartOpeningHandshake(WebSocketHandshakeRequestPtr request) override;
  void OnFinishOpeningHandshake(WebSocketHandshakeResponsePtr response) override;
  void OnAddChannelResponse(const std::string& selected_protocol, const std::string& extensions) override;
  void OnDataFrame(bool fin, WebSocketMessageType type, const std::vector<uint8_t>& data) override;
  void OnFlowControl(int64_t quota) override;
  void OnDropChannel(bool was_clean, uint16_t code, const std::string& reason) override;
  void OnClosingHandshake() override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class CONTENT_EXPORT WebSocketProxy
    : public WebSocket,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit WebSocketProxy(mojo::MessageReceiverWithResponder* receiver);
  void AddChannelRequest(const GURL& url, const std::vector<std::string>& requested_protocols, const url::Origin& origin, const GURL& first_party_for_cookies, const std::string& user_agent_override, WebSocketClientPtr client) override;
  void SendFrame(bool fin, WebSocketMessageType type, const std::vector<uint8_t>& data) override;
  void SendFlowControl(int64_t quota) override;
  void StartClosingHandshake(uint16_t code, const std::string& reason) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class CONTENT_EXPORT WebSocketClientStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  WebSocketClientStub();
  ~WebSocketClientStub() override;
  void set_sink(WebSocketClient* sink) { sink_ = sink; }
  WebSocketClient* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  WebSocketClient* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class CONTENT_EXPORT WebSocketStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  WebSocketStub();
  ~WebSocketStub() override;
  void set_sink(WebSocket* sink) { sink_ = sink; }
  WebSocket* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  WebSocket* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class CONTENT_EXPORT WebSocketClientRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit WebSocketClientRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT WebSocketRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit WebSocketRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};


class CONTENT_EXPORT HttpHeader {
 public:
  using DataView = HttpHeaderDataView;
  using Data_ = internal::HttpHeader_Data;

  static HttpHeaderPtr New();

  template <typename U>
  static HttpHeaderPtr From(const U& u) {
    return mojo::TypeConverter<HttpHeaderPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, HttpHeader>::Convert(*this);
  }

  HttpHeader();
  ~HttpHeader();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = HttpHeaderPtr>
  HttpHeaderPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, HttpHeader>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        HttpHeaderPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        HttpHeaderPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  std::string name;
  std::string value;
};

class HttpHeaderDataView {
 public:
  HttpHeaderDataView() {}

  HttpHeaderDataView(
      internal::HttpHeader_Data* data,
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
  inline void GetValueDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadValue(UserType* output) {
    auto pointer = data_->value.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::HttpHeader_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace content

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::content::mojom::HttpHeaderDataView> {
  using MojomType = ::content::mojom::HttpHeaderPtr;
};
}  // namespace internal
}  // namespace mojo

namespace content {
namespace mojom {








class CONTENT_EXPORT WebSocketHandshakeRequest {
 public:
  using DataView = WebSocketHandshakeRequestDataView;
  using Data_ = internal::WebSocketHandshakeRequest_Data;

  static WebSocketHandshakeRequestPtr New();

  template <typename U>
  static WebSocketHandshakeRequestPtr From(const U& u) {
    return mojo::TypeConverter<WebSocketHandshakeRequestPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, WebSocketHandshakeRequest>::Convert(*this);
  }

  WebSocketHandshakeRequest();
  ~WebSocketHandshakeRequest();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = WebSocketHandshakeRequestPtr>
  WebSocketHandshakeRequestPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, WebSocketHandshakeRequest>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        WebSocketHandshakeRequestPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        WebSocketHandshakeRequestPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  GURL url;
  std::vector<HttpHeaderPtr> headers;
  std::string headers_text;
 private:
  DISALLOW_COPY_AND_ASSIGN(WebSocketHandshakeRequest);
};

class WebSocketHandshakeRequestDataView {
 public:
  WebSocketHandshakeRequestDataView() {}

  WebSocketHandshakeRequestDataView(
      internal::WebSocketHandshakeRequest_Data* data,
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
  inline void GetHeadersDataView(
      mojo::ArrayDataView<HttpHeaderDataView>* output);

  template <typename UserType>
  bool ReadHeaders(UserType* output) {
    auto pointer = data_->headers.Get();
    return mojo::internal::Deserialize<mojo::Array<::content::mojom::HttpHeaderPtr>>(
        pointer, output, context_);
  }
  inline void GetHeadersTextDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadHeadersText(UserType* output) {
    auto pointer = data_->headers_text.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::WebSocketHandshakeRequest_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace content

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::content::mojom::WebSocketHandshakeRequestDataView> {
  using MojomType = ::content::mojom::WebSocketHandshakeRequestPtr;
};
}  // namespace internal
}  // namespace mojo

namespace content {
namespace mojom {



class CONTENT_EXPORT WebSocketHandshakeResponse {
 public:
  using DataView = WebSocketHandshakeResponseDataView;
  using Data_ = internal::WebSocketHandshakeResponse_Data;

  static WebSocketHandshakeResponsePtr New();

  template <typename U>
  static WebSocketHandshakeResponsePtr From(const U& u) {
    return mojo::TypeConverter<WebSocketHandshakeResponsePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, WebSocketHandshakeResponse>::Convert(*this);
  }

  WebSocketHandshakeResponse();
  ~WebSocketHandshakeResponse();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = WebSocketHandshakeResponsePtr>
  WebSocketHandshakeResponsePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, WebSocketHandshakeResponse>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        WebSocketHandshakeResponsePtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        WebSocketHandshakeResponsePtr, mojo::Array<uint8_t>>(
            input, output);
  }

  GURL url;
  int32_t status_code;
  std::string status_text;
  std::vector<HttpHeaderPtr> headers;
  std::string headers_text;
 private:
  DISALLOW_COPY_AND_ASSIGN(WebSocketHandshakeResponse);
};

class WebSocketHandshakeResponseDataView {
 public:
  WebSocketHandshakeResponseDataView() {}

  WebSocketHandshakeResponseDataView(
      internal::WebSocketHandshakeResponse_Data* data,
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
  int32_t status_code() const {
    return data_->status_code;
  }
  inline void GetStatusTextDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadStatusText(UserType* output) {
    auto pointer = data_->status_text.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetHeadersDataView(
      mojo::ArrayDataView<HttpHeaderDataView>* output);

  template <typename UserType>
  bool ReadHeaders(UserType* output) {
    auto pointer = data_->headers.Get();
    return mojo::internal::Deserialize<mojo::Array<::content::mojom::HttpHeaderPtr>>(
        pointer, output, context_);
  }
  inline void GetHeadersTextDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadHeadersText(UserType* output) {
    auto pointer = data_->headers_text.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::WebSocketHandshakeResponse_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace content

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::content::mojom::WebSocketHandshakeResponseDataView> {
  using MojomType = ::content::mojom::WebSocketHandshakeResponsePtr;
};
}  // namespace internal
}  // namespace mojo

namespace content {
namespace mojom {


template <typename StructPtrType>
HttpHeaderPtr HttpHeader::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->name = mojo::internal::Clone(name);
  rv->value = mojo::internal::Clone(value);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, HttpHeader>::value>::type*>
bool HttpHeader::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->name, other.name))
    return false;
  if (!mojo::internal::Equals(this->value, other.value))
    return false;
  return true;
}

inline void HttpHeaderDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void HttpHeaderDataView::GetValueDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->value.Get();
  *output = mojo::StringDataView(pointer, context_);
}

template <typename StructPtrType>
WebSocketHandshakeRequestPtr WebSocketHandshakeRequest::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->url = mojo::internal::Clone(url);
  rv->headers = mojo::internal::Clone(headers);
  rv->headers_text = mojo::internal::Clone(headers_text);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, WebSocketHandshakeRequest>::value>::type*>
bool WebSocketHandshakeRequest::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->url, other.url))
    return false;
  if (!mojo::internal::Equals(this->headers, other.headers))
    return false;
  if (!mojo::internal::Equals(this->headers_text, other.headers_text))
    return false;
  return true;
}

inline void WebSocketHandshakeRequestDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void WebSocketHandshakeRequestDataView::GetHeadersDataView(
    mojo::ArrayDataView<HttpHeaderDataView>* output) {
  auto pointer = data_->headers.Get();
  *output = mojo::ArrayDataView<HttpHeaderDataView>(pointer, context_);
}
inline void WebSocketHandshakeRequestDataView::GetHeadersTextDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->headers_text.Get();
  *output = mojo::StringDataView(pointer, context_);
}

template <typename StructPtrType>
WebSocketHandshakeResponsePtr WebSocketHandshakeResponse::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->url = mojo::internal::Clone(url);
  rv->status_code = mojo::internal::Clone(status_code);
  rv->status_text = mojo::internal::Clone(status_text);
  rv->headers = mojo::internal::Clone(headers);
  rv->headers_text = mojo::internal::Clone(headers_text);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, WebSocketHandshakeResponse>::value>::type*>
bool WebSocketHandshakeResponse::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->url, other.url))
    return false;
  if (!mojo::internal::Equals(this->status_code, other.status_code))
    return false;
  if (!mojo::internal::Equals(this->status_text, other.status_text))
    return false;
  if (!mojo::internal::Equals(this->headers, other.headers))
    return false;
  if (!mojo::internal::Equals(this->headers_text, other.headers_text))
    return false;
  return true;
}

inline void WebSocketHandshakeResponseDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void WebSocketHandshakeResponseDataView::GetStatusTextDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->status_text.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void WebSocketHandshakeResponseDataView::GetHeadersDataView(
    mojo::ArrayDataView<HttpHeaderDataView>* output) {
  auto pointer = data_->headers.Get();
  *output = mojo::ArrayDataView<HttpHeaderDataView>(pointer, context_);
}
inline void WebSocketHandshakeResponseDataView::GetHeadersTextDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->headers_text.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace content

namespace mojo {


template <>
struct CONTENT_EXPORT StructTraits<::content::mojom::HttpHeader, ::content::mojom::HttpHeaderPtr> {
  static bool IsNull(const ::content::mojom::HttpHeaderPtr& input) { return !input; }
  static void SetToNull(::content::mojom::HttpHeaderPtr* output) { output->reset(); }
  static decltype(::content::mojom::HttpHeader::name)& name(
      ::content::mojom::HttpHeaderPtr& input) {
    return input->name;
  }
  static decltype(::content::mojom::HttpHeader::value)& value(
      ::content::mojom::HttpHeaderPtr& input) {
    return input->value;
  }

  static bool Read(::content::mojom::HttpHeaderDataView input, ::content::mojom::HttpHeaderPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::HttpHeaderPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::mojom::HttpHeader, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::content::mojom::internal::HttpHeader_Data);
    decltype(CallWithContext(Traits::name, input, custom_context)) in_name = CallWithContext(Traits::name, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_name, context);
    decltype(CallWithContext(Traits::value, input, custom_context)) in_value = CallWithContext(Traits::value, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_value, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::mojom::internal::HttpHeader_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::content::mojom::internal::HttpHeader_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::name, input, custom_context)) in_name = CallWithContext(Traits::name, input, custom_context);
      typename decltype(result->name)::BaseType* name_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_name, buffer, &name_ptr, context);
      result->name.Set(name_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->name.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null name in HttpHeader struct");
      decltype(CallWithContext(Traits::value, input, custom_context)) in_value = CallWithContext(Traits::value, input, custom_context);
      typename decltype(result->value)::BaseType* value_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_value, buffer, &value_ptr, context);
      result->value.Set(value_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->value.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null value in HttpHeader struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::mojom::internal::HttpHeader_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::mojom::HttpHeaderDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct CONTENT_EXPORT StructTraits<::content::mojom::WebSocketHandshakeRequest, ::content::mojom::WebSocketHandshakeRequestPtr> {
  static bool IsNull(const ::content::mojom::WebSocketHandshakeRequestPtr& input) { return !input; }
  static void SetToNull(::content::mojom::WebSocketHandshakeRequestPtr* output) { output->reset(); }
  static decltype(::content::mojom::WebSocketHandshakeRequest::url)& url(
      ::content::mojom::WebSocketHandshakeRequestPtr& input) {
    return input->url;
  }
  static decltype(::content::mojom::WebSocketHandshakeRequest::headers)& headers(
      ::content::mojom::WebSocketHandshakeRequestPtr& input) {
    return input->headers;
  }
  static decltype(::content::mojom::WebSocketHandshakeRequest::headers_text)& headers_text(
      ::content::mojom::WebSocketHandshakeRequestPtr& input) {
    return input->headers_text;
  }

  static bool Read(::content::mojom::WebSocketHandshakeRequestDataView input, ::content::mojom::WebSocketHandshakeRequestPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::WebSocketHandshakeRequestPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::mojom::WebSocketHandshakeRequest, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::content::mojom::internal::WebSocketHandshakeRequest_Data);
    decltype(CallWithContext(Traits::url, input, custom_context)) in_url = CallWithContext(Traits::url, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::url::mojom::UrlPtr>(
        in_url, context);
    decltype(CallWithContext(Traits::headers, input, custom_context)) in_headers = CallWithContext(Traits::headers, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<::content::mojom::HttpHeaderPtr>>(
        in_headers, context);
    decltype(CallWithContext(Traits::headers_text, input, custom_context)) in_headers_text = CallWithContext(Traits::headers_text, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_headers_text, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::mojom::internal::WebSocketHandshakeRequest_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::content::mojom::internal::WebSocketHandshakeRequest_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::url, input, custom_context)) in_url = CallWithContext(Traits::url, input, custom_context);
      typename decltype(result->url)::BaseType* url_ptr;
      mojo::internal::Serialize<::url::mojom::UrlPtr>(
          in_url, buffer, &url_ptr, context);
      result->url.Set(url_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->url.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null url in WebSocketHandshakeRequest struct");
      decltype(CallWithContext(Traits::headers, input, custom_context)) in_headers = CallWithContext(Traits::headers, input, custom_context);
      typename decltype(result->headers)::BaseType* headers_ptr;
      const mojo::internal::ContainerValidateParams headers_validate_params(
          0, false, nullptr);
      mojo::internal::Serialize<mojo::Array<::content::mojom::HttpHeaderPtr>>(
          in_headers, buffer, &headers_ptr, &headers_validate_params,
          context);
      result->headers.Set(headers_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->headers.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null headers in WebSocketHandshakeRequest struct");
      decltype(CallWithContext(Traits::headers_text, input, custom_context)) in_headers_text = CallWithContext(Traits::headers_text, input, custom_context);
      typename decltype(result->headers_text)::BaseType* headers_text_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_headers_text, buffer, &headers_text_ptr, context);
      result->headers_text.Set(headers_text_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->headers_text.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null headers_text in WebSocketHandshakeRequest struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::mojom::internal::WebSocketHandshakeRequest_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::mojom::WebSocketHandshakeRequestDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct CONTENT_EXPORT StructTraits<::content::mojom::WebSocketHandshakeResponse, ::content::mojom::WebSocketHandshakeResponsePtr> {
  static bool IsNull(const ::content::mojom::WebSocketHandshakeResponsePtr& input) { return !input; }
  static void SetToNull(::content::mojom::WebSocketHandshakeResponsePtr* output) { output->reset(); }
  static decltype(::content::mojom::WebSocketHandshakeResponse::url)& url(
      ::content::mojom::WebSocketHandshakeResponsePtr& input) {
    return input->url;
  }
  static decltype(::content::mojom::WebSocketHandshakeResponse::status_code) status_code(
      const ::content::mojom::WebSocketHandshakeResponsePtr& input) {
    return input->status_code;
  }
  static decltype(::content::mojom::WebSocketHandshakeResponse::status_text)& status_text(
      ::content::mojom::WebSocketHandshakeResponsePtr& input) {
    return input->status_text;
  }
  static decltype(::content::mojom::WebSocketHandshakeResponse::headers)& headers(
      ::content::mojom::WebSocketHandshakeResponsePtr& input) {
    return input->headers;
  }
  static decltype(::content::mojom::WebSocketHandshakeResponse::headers_text)& headers_text(
      ::content::mojom::WebSocketHandshakeResponsePtr& input) {
    return input->headers_text;
  }

  static bool Read(::content::mojom::WebSocketHandshakeResponseDataView input, ::content::mojom::WebSocketHandshakeResponsePtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::WebSocketHandshakeResponsePtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::mojom::WebSocketHandshakeResponse, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::content::mojom::internal::WebSocketHandshakeResponse_Data);
    decltype(CallWithContext(Traits::url, input, custom_context)) in_url = CallWithContext(Traits::url, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::url::mojom::UrlPtr>(
        in_url, context);
    decltype(CallWithContext(Traits::status_text, input, custom_context)) in_status_text = CallWithContext(Traits::status_text, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_status_text, context);
    decltype(CallWithContext(Traits::headers, input, custom_context)) in_headers = CallWithContext(Traits::headers, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<::content::mojom::HttpHeaderPtr>>(
        in_headers, context);
    decltype(CallWithContext(Traits::headers_text, input, custom_context)) in_headers_text = CallWithContext(Traits::headers_text, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_headers_text, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::mojom::internal::WebSocketHandshakeResponse_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::content::mojom::internal::WebSocketHandshakeResponse_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::url, input, custom_context)) in_url = CallWithContext(Traits::url, input, custom_context);
      typename decltype(result->url)::BaseType* url_ptr;
      mojo::internal::Serialize<::url::mojom::UrlPtr>(
          in_url, buffer, &url_ptr, context);
      result->url.Set(url_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->url.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null url in WebSocketHandshakeResponse struct");
      result->status_code = CallWithContext(Traits::status_code, input, custom_context);
      decltype(CallWithContext(Traits::status_text, input, custom_context)) in_status_text = CallWithContext(Traits::status_text, input, custom_context);
      typename decltype(result->status_text)::BaseType* status_text_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_status_text, buffer, &status_text_ptr, context);
      result->status_text.Set(status_text_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->status_text.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null status_text in WebSocketHandshakeResponse struct");
      decltype(CallWithContext(Traits::headers, input, custom_context)) in_headers = CallWithContext(Traits::headers, input, custom_context);
      typename decltype(result->headers)::BaseType* headers_ptr;
      const mojo::internal::ContainerValidateParams headers_validate_params(
          0, false, nullptr);
      mojo::internal::Serialize<mojo::Array<::content::mojom::HttpHeaderPtr>>(
          in_headers, buffer, &headers_ptr, &headers_validate_params,
          context);
      result->headers.Set(headers_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->headers.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null headers in WebSocketHandshakeResponse struct");
      decltype(CallWithContext(Traits::headers_text, input, custom_context)) in_headers_text = CallWithContext(Traits::headers_text, input, custom_context);
      typename decltype(result->headers_text)::BaseType* headers_text_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_headers_text, buffer, &headers_text_ptr, context);
      result->headers_text.Set(headers_text_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->headers_text.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null headers_text in WebSocketHandshakeResponse struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::mojom::internal::WebSocketHandshakeResponse_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::mojom::WebSocketHandshakeResponseDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // CONTENT_COMMON_WEBSOCKET_MOJOM_H_
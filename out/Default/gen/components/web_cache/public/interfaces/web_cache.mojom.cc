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

#include "components/web_cache/public/interfaces/web_cache.mojom.h"

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
namespace web_cache {
namespace mojom {

namespace {

class WebCache_SetCacheCapacities_ParamsDataView {
 public:
  WebCache_SetCacheCapacities_ParamsDataView() {}

  WebCache_SetCacheCapacities_ParamsDataView(
      internal::WebCache_SetCacheCapacities_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t min_dead_capacity() const {
    return data_->min_dead_capacity;
  }
  uint64_t max_dead_capacity() const {
    return data_->max_dead_capacity;
  }
  uint64_t capacity() const {
    return data_->capacity;
  }
 private:
  internal::WebCache_SetCacheCapacities_Params_Data* data_ = nullptr;
};




class WebCache_ClearCache_ParamsDataView {
 public:
  WebCache_ClearCache_ParamsDataView() {}

  WebCache_ClearCache_ParamsDataView(
      internal::WebCache_ClearCache_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool on_navigation() const {
    return data_->on_navigation;
  }
 private:
  internal::WebCache_ClearCache_Params_Data* data_ = nullptr;
};




}  // namespace
const char WebCache::Name_[] = "web_cache::mojom::WebCache";
const uint32_t WebCache::Version_;

WebCacheProxy::WebCacheProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void WebCacheProxy::SetCacheCapacities(
    uint64_t in_min_dead_capacity, uint64_t in_max_dead_capacity, uint64_t in_capacity) {
  size_t size = sizeof(::web_cache::mojom::internal::WebCache_SetCacheCapacities_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kWebCache_SetCacheCapacities_Name, size);

  auto params =
      ::web_cache::mojom::internal::WebCache_SetCacheCapacities_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->min_dead_capacity = in_min_dead_capacity;
  params->max_dead_capacity = in_max_dead_capacity;
  params->capacity = in_capacity;
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void WebCacheProxy::ClearCache(
    bool in_on_navigation) {
  size_t size = sizeof(::web_cache::mojom::internal::WebCache_ClearCache_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kWebCache_ClearCache_Name, size);

  auto params =
      ::web_cache::mojom::internal::WebCache_ClearCache_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->on_navigation = in_on_navigation;
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

WebCacheStub::WebCacheStub()
    : sink_(nullptr),
      control_message_handler_(WebCache::Version_) {
}

WebCacheStub::~WebCacheStub() {}

bool WebCacheStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kWebCache_SetCacheCapacities_Name: {
      internal::WebCache_SetCacheCapacities_Params_Data* params =
          reinterpret_cast<internal::WebCache_SetCacheCapacities_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      uint64_t p_min_dead_capacity{};
      uint64_t p_max_dead_capacity{};
      uint64_t p_capacity{};
      WebCache_SetCacheCapacities_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_min_dead_capacity = input_data_view.min_dead_capacity();
      p_max_dead_capacity = input_data_view.max_dead_capacity();
      p_capacity = input_data_view.capacity();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WebCache::SetCacheCapacities deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WebCache::SetCacheCapacities");
      mojo::internal::MessageDispatchContext context(message);
      sink_->SetCacheCapacities(
std::move(p_min_dead_capacity), 
std::move(p_max_dead_capacity), 
std::move(p_capacity));
      return true;
    }
    case internal::kWebCache_ClearCache_Name: {
      internal::WebCache_ClearCache_Params_Data* params =
          reinterpret_cast<internal::WebCache_ClearCache_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      bool p_on_navigation{};
      WebCache_ClearCache_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_on_navigation = input_data_view.on_navigation();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WebCache::ClearCache deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WebCache::ClearCache");
      mojo::internal::MessageDispatchContext context(message);
      sink_->ClearCache(
std::move(p_on_navigation));
      return true;
    }
  }
  return false;
}

bool WebCacheStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kWebCache_SetCacheCapacities_Name: {
      break;
    }
    case internal::kWebCache_ClearCache_Name: {
      break;
    }
  }
  return false;
}

WebCacheRequestValidator::WebCacheRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool WebCacheRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "WebCache RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kWebCache_SetCacheCapacities_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebCache_SetCacheCapacities_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kWebCache_ClearCache_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebCache_ClearCache_Params_Data>(
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
}  // namespace web_cache

namespace mojo {

}  // namespace mojo


#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
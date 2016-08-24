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

#include "components/safe_json/public/interfaces/safe_json.mojom.h"

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
#include "ipc/ipc_message_utils.h"
namespace safe_json {
namespace mojom {

namespace {

class SafeJsonParser_Parse_ParamsDataView {
 public:
  SafeJsonParser_Parse_ParamsDataView() {}

  SafeJsonParser_Parse_ParamsDataView(
      internal::SafeJsonParser_Parse_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetJsonDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadJson(UserType* output) {
    auto pointer = data_->json.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::SafeJsonParser_Parse_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void SafeJsonParser_Parse_ParamsDataView::GetJsonDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->json.Get();
  *output = mojo::StringDataView(pointer, context_);
}

class SafeJsonParser_Parse_ResponseParamsDataView {
 public:
  SafeJsonParser_Parse_ResponseParamsDataView() {}

  SafeJsonParser_Parse_ResponseParamsDataView(
      internal::SafeJsonParser_Parse_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      ListValueDataView* output);

  template <typename UserType>
  bool ReadResult(UserType* output) {
    auto pointer = data_->result.Get();
    return mojo::internal::Deserialize<::safe_json::mojom::ListValuePtr>(
        pointer, output, context_);
  }
  inline void GetErrorDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadError(UserType* output) {
    auto pointer = data_->error.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::SafeJsonParser_Parse_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void SafeJsonParser_Parse_ResponseParamsDataView::GetResultDataView(
    ListValueDataView* output) {
  auto pointer = data_->result.Get();
  *output = ListValueDataView(pointer, context_);
}
inline void SafeJsonParser_Parse_ResponseParamsDataView::GetErrorDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->error.Get();
  *output = mojo::StringDataView(pointer, context_);
}


}  // namespace
const char SafeJsonParser::Name_[] = "safe_json::mojom::SafeJsonParser";
const uint32_t SafeJsonParser::Version_;

class SafeJsonParser_Parse_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  SafeJsonParser_Parse_ForwardToCallback(
      const SafeJsonParser::ParseCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  SafeJsonParser::ParseCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(SafeJsonParser_Parse_ForwardToCallback);
};
bool SafeJsonParser_Parse_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::SafeJsonParser_Parse_ResponseParams_Data* params =
      reinterpret_cast<internal::SafeJsonParser_Parse_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  base::ListValue p_result{};
  mojo::String p_error{};
  SafeJsonParser_Parse_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "SafeJsonParser::Parse response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_result), 
std::move(p_error));
  }
  return true;
}

SafeJsonParserProxy::SafeJsonParserProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void SafeJsonParserProxy::Parse(
    const mojo::String& in_json, const ParseCallback& callback) {
  size_t size = sizeof(::safe_json::mojom::internal::SafeJsonParser_Parse_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_json, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kSafeJsonParser_Parse_Name, size);

  auto params =
      ::safe_json::mojom::internal::SafeJsonParser_Parse_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->json)::BaseType* json_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_json, builder.buffer(), &json_ptr, &serialization_context_);
  params->json.Set(json_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->json.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null json in SafeJsonParser.Parse request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new SafeJsonParser_Parse_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
class SafeJsonParser_Parse_ProxyToResponder {
 public:
  static SafeJsonParser::ParseCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<SafeJsonParser_Parse_ProxyToResponder> proxy(
        new SafeJsonParser_Parse_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&SafeJsonParser_Parse_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~SafeJsonParser_Parse_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "SafeJsonParser::Parse() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  SafeJsonParser_Parse_ProxyToResponder(
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
      const base::ListValue& in_result, 
mojo::String in_error);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(SafeJsonParser_Parse_ProxyToResponder);
};

void SafeJsonParser_Parse_ProxyToResponder::Run(
    const base::ListValue& in_result, 
mojo::String in_error) {
  size_t size = sizeof(::safe_json::mojom::internal::SafeJsonParser_Parse_ResponseParams_Data);
  size += mojo::internal::PrepareToSerialize<::safe_json::mojom::ListValuePtr>(
      in_result, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_error, &serialization_context_);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kSafeJsonParser_Parse_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::safe_json::mojom::internal::SafeJsonParser_Parse_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->result)::BaseType* result_ptr;
  mojo::internal::Serialize<::safe_json::mojom::ListValuePtr>(
      in_result, builder.buffer(), &result_ptr, &serialization_context_);
  params->result.Set(result_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->result.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in SafeJsonParser.Parse response");
  typename decltype(params->error)::BaseType* error_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_error, builder.buffer(), &error_ptr, &serialization_context_);
  params->error.Set(error_ptr);
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

SafeJsonParserStub::SafeJsonParserStub()
    : sink_(nullptr),
      control_message_handler_(SafeJsonParser::Version_) {
}

SafeJsonParserStub::~SafeJsonParserStub() {}

bool SafeJsonParserStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kSafeJsonParser_Parse_Name: {
      break;
    }
  }
  return false;
}

bool SafeJsonParserStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kSafeJsonParser_Parse_Name: {
      internal::SafeJsonParser_Parse_Params_Data* params =
          reinterpret_cast<internal::SafeJsonParser_Parse_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      mojo::String p_json{};
      SafeJsonParser_Parse_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadJson(&p_json))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SafeJsonParser::Parse deserializer");
        return false;
      }
      SafeJsonParser::ParseCallback callback =
          SafeJsonParser_Parse_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "SafeJsonParser::Parse");
      mojo::internal::MessageDispatchContext context(message);
      sink_->Parse(
std::move(p_json), callback);
      return true;
    }
  }
  return false;
}

SafeJsonParserRequestValidator::SafeJsonParserRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool SafeJsonParserRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "SafeJsonParser RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kSafeJsonParser_Parse_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SafeJsonParser_Parse_Params_Data>(
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

SafeJsonParserResponseValidator::SafeJsonParserResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool SafeJsonParserResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "SafeJsonParser ResponseValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kSafeJsonParser_Parse_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::SafeJsonParser_Parse_ResponseParams_Data>(
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
}  // namespace safe_json

namespace mojo {

}  // namespace mojo


#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
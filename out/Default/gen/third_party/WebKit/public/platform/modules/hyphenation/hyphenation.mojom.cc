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

#include "third_party/WebKit/public/platform/modules/hyphenation/hyphenation.mojom.h"

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

class Hyphenation_OpenDictionary_ParamsDataView {
 public:
  Hyphenation_OpenDictionary_ParamsDataView() {}

  Hyphenation_OpenDictionary_ParamsDataView(
      internal::Hyphenation_OpenDictionary_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetLocaleDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadLocale(UserType* output) {
    auto pointer = data_->locale.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::Hyphenation_OpenDictionary_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void Hyphenation_OpenDictionary_ParamsDataView::GetLocaleDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->locale.Get();
  *output = mojo::StringDataView(pointer, context_);
}

class Hyphenation_OpenDictionary_ResponseParamsDataView {
 public:
  Hyphenation_OpenDictionary_ResponseParamsDataView() {}

  Hyphenation_OpenDictionary_ResponseParamsDataView(
      internal::Hyphenation_OpenDictionary_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  mojo::ScopedHandle TakeHyphenationDictionaryHandle() {
    mojo::ScopedHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedHandle>(
            &data_->hyphenation_dictionary_handle, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Hyphenation_OpenDictionary_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




}  // namespace
const char Hyphenation::Name_[] = "blink::mojom::Hyphenation";
const uint32_t Hyphenation::Version_;
bool Hyphenation::OpenDictionary(const mojo::String& locale, mojo::ScopedHandle* hyphenation_dictionary_handle) {
  NOTREACHED();
  return false;
}
class Hyphenation_OpenDictionary_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  Hyphenation_OpenDictionary_HandleSyncResponse(
      scoped_refptr<mojo::AssociatedGroupController> group_controller,
      bool* result, mojo::ScopedHandle* out_hyphenation_dictionary_handle)
      : serialization_context_(std::move(group_controller)), result_(result), out_hyphenation_dictionary_handle_(out_hyphenation_dictionary_handle) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  mojo::internal::SerializationContext serialization_context_;
  bool* result_;
  mojo::ScopedHandle* out_hyphenation_dictionary_handle_;DISALLOW_COPY_AND_ASSIGN(Hyphenation_OpenDictionary_HandleSyncResponse);
};
bool Hyphenation_OpenDictionary_HandleSyncResponse::Accept(
    mojo::Message* message) {
  internal::Hyphenation_OpenDictionary_ResponseParams_Data* params =
      reinterpret_cast<internal::Hyphenation_OpenDictionary_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  mojo::ScopedHandle p_hyphenation_dictionary_handle{};
  Hyphenation_OpenDictionary_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  p_hyphenation_dictionary_handle = input_data_view.TakeHyphenationDictionaryHandle();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Hyphenation::OpenDictionary response deserializer");
    return false;
  }
  *out_hyphenation_dictionary_handle_ = std::move(p_hyphenation_dictionary_handle);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

class Hyphenation_OpenDictionary_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Hyphenation_OpenDictionary_ForwardToCallback(
      const Hyphenation::OpenDictionaryCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Hyphenation::OpenDictionaryCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(Hyphenation_OpenDictionary_ForwardToCallback);
};
bool Hyphenation_OpenDictionary_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::Hyphenation_OpenDictionary_ResponseParams_Data* params =
      reinterpret_cast<internal::Hyphenation_OpenDictionary_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  mojo::ScopedHandle p_hyphenation_dictionary_handle{};
  Hyphenation_OpenDictionary_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  p_hyphenation_dictionary_handle = input_data_view.TakeHyphenationDictionaryHandle();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Hyphenation::OpenDictionary response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_hyphenation_dictionary_handle));
  }
  return true;
}

HyphenationProxy::HyphenationProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
bool HyphenationProxy::OpenDictionary(
    const mojo::String& param_locale, mojo::ScopedHandle* param_hyphenation_dictionary_handle) {
  size_t size = sizeof(::blink::mojom::internal::Hyphenation_OpenDictionary_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      param_locale, &serialization_context_);

  mojo::internal::RequestMessageBuilder builder(internal::kHyphenation_OpenDictionary_Name, size,
                                                mojo::Message::kFlagIsSync);

  auto params =
      ::blink::mojom::internal::Hyphenation_OpenDictionary_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->locale)::BaseType* locale_ptr;
  mojo::internal::Serialize<mojo::String>(
      param_locale, builder.buffer(), &locale_ptr, &serialization_context_);
  params->locale.Set(locale_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->locale.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null locale in Hyphenation.OpenDictionary request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());

  bool result = false;
  mojo::MessageReceiver* responder =
      new Hyphenation_OpenDictionary_HandleSyncResponse(
          serialization_context_.group_controller, &result, param_hyphenation_dictionary_handle);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
  return result;
}

void HyphenationProxy::OpenDictionary(
    const mojo::String& in_locale, const OpenDictionaryCallback& callback) {
  size_t size = sizeof(::blink::mojom::internal::Hyphenation_OpenDictionary_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_locale, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kHyphenation_OpenDictionary_Name, size);

  auto params =
      ::blink::mojom::internal::Hyphenation_OpenDictionary_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->locale)::BaseType* locale_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_locale, builder.buffer(), &locale_ptr, &serialization_context_);
  params->locale.Set(locale_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->locale.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null locale in Hyphenation.OpenDictionary request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new Hyphenation_OpenDictionary_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
class Hyphenation_OpenDictionary_ProxyToResponder {
 public:
  static Hyphenation::OpenDictionaryCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<Hyphenation_OpenDictionary_ProxyToResponder> proxy(
        new Hyphenation_OpenDictionary_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&Hyphenation_OpenDictionary_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~Hyphenation_OpenDictionary_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "Hyphenation::OpenDictionary() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  Hyphenation_OpenDictionary_ProxyToResponder(
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
      mojo::ScopedHandle in_hyphenation_dictionary_handle);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(Hyphenation_OpenDictionary_ProxyToResponder);
};

void Hyphenation_OpenDictionary_ProxyToResponder::Run(
    mojo::ScopedHandle in_hyphenation_dictionary_handle) {
  size_t size = sizeof(::blink::mojom::internal::Hyphenation_OpenDictionary_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kHyphenation_OpenDictionary_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::blink::mojom::internal::Hyphenation_OpenDictionary_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<mojo::ScopedHandle>(
      in_hyphenation_dictionary_handle, &params->hyphenation_dictionary_handle, &serialization_context_);
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

HyphenationStub::HyphenationStub()
    : sink_(nullptr),
      control_message_handler_(Hyphenation::Version_) {
}

HyphenationStub::~HyphenationStub() {}

bool HyphenationStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kHyphenation_OpenDictionary_Name: {
      break;
    }
  }
  return false;
}

bool HyphenationStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kHyphenation_OpenDictionary_Name: {
      internal::Hyphenation_OpenDictionary_Params_Data* params =
          reinterpret_cast<internal::Hyphenation_OpenDictionary_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      mojo::String p_locale{};
      Hyphenation_OpenDictionary_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadLocale(&p_locale))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Hyphenation::OpenDictionary deserializer");
        return false;
      }
      Hyphenation::OpenDictionaryCallback callback =
          Hyphenation_OpenDictionary_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "Hyphenation::OpenDictionary");
      mojo::internal::MessageDispatchContext context(message);
      sink_->OpenDictionary(
std::move(p_locale), callback);
      return true;
    }
  }
  return false;
}

HyphenationRequestValidator::HyphenationRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool HyphenationRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "Hyphenation RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kHyphenation_OpenDictionary_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Hyphenation_OpenDictionary_Params_Data>(
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

HyphenationResponseValidator::HyphenationResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool HyphenationResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "Hyphenation ResponseValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kHyphenation_OpenDictionary_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Hyphenation_OpenDictionary_ResponseParams_Data>(
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
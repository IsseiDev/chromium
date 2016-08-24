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

#include "components/translate/content/common/translate.mojom.h"

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
#include "url/mojo/url_gurl_struct_traits.h"
#include "ipc/ipc_message_utils.h"
#include "components/translate/content/common/translate_struct_traits.h"
#include "mojo/common/common_custom_types_struct_traits.h"
namespace translate {
namespace mojom {

namespace {

class Page_Translate_ParamsDataView {
 public:
  Page_Translate_ParamsDataView() {}

  Page_Translate_ParamsDataView(
      internal::Page_Translate_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTranslateScriptDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadTranslateScript(UserType* output) {
    auto pointer = data_->translate_script.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetSourceLangDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadSourceLang(UserType* output) {
    auto pointer = data_->source_lang.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetTargetLangDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadTargetLang(UserType* output) {
    auto pointer = data_->target_lang.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::Page_Translate_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void Page_Translate_ParamsDataView::GetTranslateScriptDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->translate_script.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void Page_Translate_ParamsDataView::GetSourceLangDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->source_lang.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void Page_Translate_ParamsDataView::GetTargetLangDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->target_lang.Get();
  *output = mojo::StringDataView(pointer, context_);
}

class Page_Translate_ResponseParamsDataView {
 public:
  Page_Translate_ResponseParamsDataView() {}

  Page_Translate_ResponseParamsDataView(
      internal::Page_Translate_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool cancelled() const {
    return data_->cancelled;
  }
  inline void GetOriginalLangDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadOriginalLang(UserType* output) {
    auto pointer = data_->original_lang.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetTranslatedLangDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadTranslatedLang(UserType* output) {
    auto pointer = data_->translated_lang.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  template <typename UserType>
  bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::translate::mojom::TranslateError>(
        data_value, output);
  }

  ::translate::mojom::TranslateError error() const {
    return static_cast<::translate::mojom::TranslateError>(data_->error);
  }
 private:
  internal::Page_Translate_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void Page_Translate_ResponseParamsDataView::GetOriginalLangDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->original_lang.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void Page_Translate_ResponseParamsDataView::GetTranslatedLangDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->translated_lang.Get();
  *output = mojo::StringDataView(pointer, context_);
}


class Page_RevertTranslation_ParamsDataView {
 public:
  Page_RevertTranslation_ParamsDataView() {}

  Page_RevertTranslation_ParamsDataView(
      internal::Page_RevertTranslation_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Page_RevertTranslation_Params_Data* data_ = nullptr;
};




class ContentTranslateDriver_RegisterPage_ParamsDataView {
 public:
  ContentTranslateDriver_RegisterPage_ParamsDataView() {}

  ContentTranslateDriver_RegisterPage_ParamsDataView(
      internal::ContentTranslateDriver_RegisterPage_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  PagePtr TakePage() {
    PagePtr result;
    bool ret =
        mojo::internal::Deserialize<::translate::mojom::PagePtr>(
            &data_->page, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetDetailsDataView(
      LanguageDetectionDetailsDataView* output);

  template <typename UserType>
  bool ReadDetails(UserType* output) {
    auto pointer = data_->details.Get();
    return mojo::internal::Deserialize<::translate::mojom::LanguageDetectionDetailsPtr>(
        pointer, output, context_);
  }
  bool page_needs_translation() const {
    return data_->page_needs_translation;
  }
 private:
  internal::ContentTranslateDriver_RegisterPage_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void ContentTranslateDriver_RegisterPage_ParamsDataView::GetDetailsDataView(
    LanguageDetectionDetailsDataView* output) {
  auto pointer = data_->details.Get();
  *output = LanguageDetectionDetailsDataView(pointer, context_);
}


}  // namespace// static
LanguageDetectionDetailsPtr LanguageDetectionDetails::New() {
  LanguageDetectionDetailsPtr rv;
  mojo::internal::StructHelper<LanguageDetectionDetails>::Initialize(&rv);
  return rv;
}

LanguageDetectionDetails::LanguageDetectionDetails()
    : time(),
      url(),
      content_language(),
      cld_language(),
      is_cld_reliable(),
      has_notranslate(),
      html_root_language(),
      adopted_language(),
      contents() {
}

LanguageDetectionDetails::~LanguageDetectionDetails() {
}
const char Page::Name_[] = "translate::mojom::Page";
const uint32_t Page::Version_;

class Page_Translate_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Page_Translate_ForwardToCallback(
      const Page::TranslateCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Page::TranslateCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(Page_Translate_ForwardToCallback);
};
bool Page_Translate_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::Page_Translate_ResponseParams_Data* params =
      reinterpret_cast<internal::Page_Translate_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  bool p_cancelled{};
  std::string p_original_lang{};
  std::string p_translated_lang{};
  translate::TranslateErrors::Type p_error{};
  Page_Translate_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  p_cancelled = input_data_view.cancelled();
  if (!input_data_view.ReadOriginalLang(&p_original_lang))
    success = false;
  if (!input_data_view.ReadTranslatedLang(&p_translated_lang))
    success = false;
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Page::Translate response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_cancelled), 
std::move(p_original_lang), 
std::move(p_translated_lang), 
std::move(p_error));
  }
  return true;
}

PageProxy::PageProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void PageProxy::Translate(
    const std::string& in_translate_script, const std::string& in_source_lang, const std::string& in_target_lang, const TranslateCallback& callback) {
  size_t size = sizeof(::translate::mojom::internal::Page_Translate_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_translate_script, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_source_lang, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_target_lang, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kPage_Translate_Name, size);

  auto params =
      ::translate::mojom::internal::Page_Translate_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->translate_script)::BaseType* translate_script_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_translate_script, builder.buffer(), &translate_script_ptr, &serialization_context_);
  params->translate_script.Set(translate_script_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->translate_script.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null translate_script in Page.Translate request");
  typename decltype(params->source_lang)::BaseType* source_lang_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_source_lang, builder.buffer(), &source_lang_ptr, &serialization_context_);
  params->source_lang.Set(source_lang_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->source_lang.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null source_lang in Page.Translate request");
  typename decltype(params->target_lang)::BaseType* target_lang_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_target_lang, builder.buffer(), &target_lang_ptr, &serialization_context_);
  params->target_lang.Set(target_lang_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->target_lang.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null target_lang in Page.Translate request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new Page_Translate_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void PageProxy::RevertTranslation(
    ) {
  size_t size = sizeof(::translate::mojom::internal::Page_RevertTranslation_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kPage_RevertTranslation_Name, size);

  auto params =
      ::translate::mojom::internal::Page_RevertTranslation_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}
class Page_Translate_ProxyToResponder {
 public:
  static Page::TranslateCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<Page_Translate_ProxyToResponder> proxy(
        new Page_Translate_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&Page_Translate_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~Page_Translate_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "Page::Translate() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  Page_Translate_ProxyToResponder(
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
      bool in_cancelled, const std::string& in_original_lang, const std::string& in_translated_lang, translate::TranslateErrors::Type in_error);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(Page_Translate_ProxyToResponder);
};

void Page_Translate_ProxyToResponder::Run(
    bool in_cancelled, const std::string& in_original_lang, const std::string& in_translated_lang, translate::TranslateErrors::Type in_error) {
  size_t size = sizeof(::translate::mojom::internal::Page_Translate_ResponseParams_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_original_lang, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_translated_lang, &serialization_context_);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kPage_Translate_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::translate::mojom::internal::Page_Translate_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->cancelled = in_cancelled;
  typename decltype(params->original_lang)::BaseType* original_lang_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_original_lang, builder.buffer(), &original_lang_ptr, &serialization_context_);
  params->original_lang.Set(original_lang_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->original_lang.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null original_lang in Page.Translate response");
  typename decltype(params->translated_lang)::BaseType* translated_lang_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_translated_lang, builder.buffer(), &translated_lang_ptr, &serialization_context_);
  params->translated_lang.Set(translated_lang_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->translated_lang.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null translated_lang in Page.Translate response");
  mojo::internal::Serialize<::translate::mojom::TranslateError>(
      in_error, &params->error);
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

PageStub::PageStub()
    : sink_(nullptr),
      control_message_handler_(Page::Version_) {
}

PageStub::~PageStub() {}

bool PageStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kPage_Translate_Name: {
      break;
    }
    case internal::kPage_RevertTranslation_Name: {
      internal::Page_RevertTranslation_Params_Data* params =
          reinterpret_cast<internal::Page_RevertTranslation_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      Page_RevertTranslation_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Page::RevertTranslation deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "Page::RevertTranslation");
      mojo::internal::MessageDispatchContext context(message);
      sink_->RevertTranslation();
      return true;
    }
  }
  return false;
}

bool PageStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kPage_Translate_Name: {
      internal::Page_Translate_Params_Data* params =
          reinterpret_cast<internal::Page_Translate_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      std::string p_translate_script{};
      std::string p_source_lang{};
      std::string p_target_lang{};
      Page_Translate_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadTranslateScript(&p_translate_script))
        success = false;
      if (!input_data_view.ReadSourceLang(&p_source_lang))
        success = false;
      if (!input_data_view.ReadTargetLang(&p_target_lang))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Page::Translate deserializer");
        return false;
      }
      Page::TranslateCallback callback =
          Page_Translate_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "Page::Translate");
      mojo::internal::MessageDispatchContext context(message);
      sink_->Translate(
std::move(p_translate_script), 
std::move(p_source_lang), 
std::move(p_target_lang), callback);
      return true;
    }
    case internal::kPage_RevertTranslation_Name: {
      break;
    }
  }
  return false;
}

PageRequestValidator::PageRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool PageRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "Page RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kPage_Translate_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Page_Translate_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPage_RevertTranslation_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Page_RevertTranslation_Params_Data>(
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

PageResponseValidator::PageResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool PageResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "Page ResponseValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kPage_Translate_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Page_Translate_ResponseParams_Data>(
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
const char ContentTranslateDriver::Name_[] = "translate::mojom::ContentTranslateDriver";
const uint32_t ContentTranslateDriver::Version_;

ContentTranslateDriverProxy::ContentTranslateDriverProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void ContentTranslateDriverProxy::RegisterPage(
    PagePtr in_page, const translate::LanguageDetectionDetails& in_details, bool in_page_needs_translation) {
  size_t size = sizeof(::translate::mojom::internal::ContentTranslateDriver_RegisterPage_Params_Data);
  size += mojo::internal::PrepareToSerialize<::translate::mojom::LanguageDetectionDetailsPtr>(
      in_details, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kContentTranslateDriver_RegisterPage_Name, size);

  auto params =
      ::translate::mojom::internal::ContentTranslateDriver_RegisterPage_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::translate::mojom::PagePtr>(
      in_page, &params->page, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->page),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid page in ContentTranslateDriver.RegisterPage request");
  typename decltype(params->details)::BaseType* details_ptr;
  mojo::internal::Serialize<::translate::mojom::LanguageDetectionDetailsPtr>(
      in_details, builder.buffer(), &details_ptr, &serialization_context_);
  params->details.Set(details_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->details.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null details in ContentTranslateDriver.RegisterPage request");
  params->page_needs_translation = in_page_needs_translation;
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

ContentTranslateDriverStub::ContentTranslateDriverStub()
    : sink_(nullptr),
      control_message_handler_(ContentTranslateDriver::Version_) {
}

ContentTranslateDriverStub::~ContentTranslateDriverStub() {}

bool ContentTranslateDriverStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kContentTranslateDriver_RegisterPage_Name: {
      internal::ContentTranslateDriver_RegisterPage_Params_Data* params =
          reinterpret_cast<internal::ContentTranslateDriver_RegisterPage_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      PagePtr p_page{};
      translate::LanguageDetectionDetails p_details{};
      bool p_page_needs_translation{};
      ContentTranslateDriver_RegisterPage_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_page = input_data_view.TakePage();
      if (!input_data_view.ReadDetails(&p_details))
        success = false;
      p_page_needs_translation = input_data_view.page_needs_translation();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ContentTranslateDriver::RegisterPage deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ContentTranslateDriver::RegisterPage");
      mojo::internal::MessageDispatchContext context(message);
      sink_->RegisterPage(
std::move(p_page), 
std::move(p_details), 
std::move(p_page_needs_translation));
      return true;
    }
  }
  return false;
}

bool ContentTranslateDriverStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kContentTranslateDriver_RegisterPage_Name: {
      break;
    }
  }
  return false;
}

ContentTranslateDriverRequestValidator::ContentTranslateDriverRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool ContentTranslateDriverRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "ContentTranslateDriver RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kContentTranslateDriver_RegisterPage_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ContentTranslateDriver_RegisterPage_Params_Data>(
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
}  // namespace translate

namespace mojo {


// static
bool StructTraits<::translate::mojom::LanguageDetectionDetails, ::translate::mojom::LanguageDetectionDetailsPtr>::Read(
    ::translate::mojom::LanguageDetectionDetailsDataView input,
    ::translate::mojom::LanguageDetectionDetailsPtr* output) {
  bool success = true;
  ::translate::mojom::LanguageDetectionDetailsPtr result(::translate::mojom::LanguageDetectionDetails::New());
  
      if (!input.ReadTime(&result->time))
        success = false;
      if (!input.ReadUrl(&result->url))
        success = false;
      if (!input.ReadContentLanguage(&result->content_language))
        success = false;
      if (!input.ReadCldLanguage(&result->cld_language))
        success = false;
      result->is_cld_reliable = input.is_cld_reliable();
      result->has_notranslate = input.has_notranslate();
      if (!input.ReadHtmlRootLanguage(&result->html_root_language))
        success = false;
      if (!input.ReadAdoptedLanguage(&result->adopted_language))
        success = false;
      if (!input.ReadContents(&result->contents))
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
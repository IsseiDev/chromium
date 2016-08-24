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

#include "chrome/browser/ui/webui/omnibox/omnibox.mojom.h"

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
namespace mojom {

namespace {

class OmniboxPageHandler_SetClientPage_ParamsDataView {
 public:
  OmniboxPageHandler_SetClientPage_ParamsDataView() {}

  OmniboxPageHandler_SetClientPage_ParamsDataView(
      internal::OmniboxPageHandler_SetClientPage_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  OmniboxPagePtr TakePage() {
    OmniboxPagePtr result;
    bool ret =
        mojo::internal::Deserialize<::mojom::OmniboxPagePtr>(
            &data_->page, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::OmniboxPageHandler_SetClientPage_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




class OmniboxPageHandler_StartOmniboxQuery_ParamsDataView {
 public:
  OmniboxPageHandler_StartOmniboxQuery_ParamsDataView() {}

  OmniboxPageHandler_StartOmniboxQuery_ParamsDataView(
      internal::OmniboxPageHandler_StartOmniboxQuery_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInputStringDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadInputString(UserType* output) {
    auto pointer = data_->input_string.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  int32_t cursor_position() const {
    return data_->cursor_position;
  }
  bool prevent_inline_autocomplete() const {
    return data_->prevent_inline_autocomplete;
  }
  bool prefer_keyword() const {
    return data_->prefer_keyword;
  }
  int32_t page_classification() const {
    return data_->page_classification;
  }
 private:
  internal::OmniboxPageHandler_StartOmniboxQuery_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void OmniboxPageHandler_StartOmniboxQuery_ParamsDataView::GetInputStringDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->input_string.Get();
  *output = mojo::StringDataView(pointer, context_);
}


class OmniboxPage_HandleNewAutocompleteResult_ParamsDataView {
 public:
  OmniboxPage_HandleNewAutocompleteResult_ParamsDataView() {}

  OmniboxPage_HandleNewAutocompleteResult_ParamsDataView(
      internal::OmniboxPage_HandleNewAutocompleteResult_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      OmniboxResultDataView* output);

  template <typename UserType>
  bool ReadResult(UserType* output) {
    auto pointer = data_->result.Get();
    return mojo::internal::Deserialize<::mojom::OmniboxResultPtr>(
        pointer, output, context_);
  }
 private:
  internal::OmniboxPage_HandleNewAutocompleteResult_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void OmniboxPage_HandleNewAutocompleteResult_ParamsDataView::GetResultDataView(
    OmniboxResultDataView* output) {
  auto pointer = data_->result.Get();
  *output = OmniboxResultDataView(pointer, context_);
}


}  // namespace// static
AutocompleteAdditionalInfoPtr AutocompleteAdditionalInfo::New() {
  AutocompleteAdditionalInfoPtr rv;
  mojo::internal::StructHelper<AutocompleteAdditionalInfo>::Initialize(&rv);
  return rv;
}

AutocompleteAdditionalInfo::AutocompleteAdditionalInfo()
    : key(nullptr),
      value(nullptr) {
}

AutocompleteAdditionalInfo::~AutocompleteAdditionalInfo() {
}// static
AutocompleteMatchPtr AutocompleteMatch::New() {
  AutocompleteMatchPtr rv;
  mojo::internal::StructHelper<AutocompleteMatch>::Initialize(&rv);
  return rv;
}

AutocompleteMatch::AutocompleteMatch()
    : provider_name(nullptr),
      provider_done(),
      relevance(),
      deletable(),
      fill_into_edit(nullptr),
      inline_autocompletion(nullptr),
      destination_url(nullptr),
      contents(nullptr),
      description(nullptr),
      transition(),
      allowed_to_be_default_match(),
      type(nullptr),
      associated_keyword(nullptr),
      keyword(nullptr),
      starred(),
      duplicates(),
      from_previous(),
      additional_info(nullptr) {
}

AutocompleteMatch::~AutocompleteMatch() {
}// static
AutocompleteResultsForProviderPtr AutocompleteResultsForProvider::New() {
  AutocompleteResultsForProviderPtr rv;
  mojo::internal::StructHelper<AutocompleteResultsForProvider>::Initialize(&rv);
  return rv;
}

AutocompleteResultsForProvider::AutocompleteResultsForProvider()
    : provider_name(nullptr),
      results(nullptr) {
}

AutocompleteResultsForProvider::~AutocompleteResultsForProvider() {
}// static
OmniboxResultPtr OmniboxResult::New() {
  OmniboxResultPtr rv;
  mojo::internal::StructHelper<OmniboxResult>::Initialize(&rv);
  return rv;
}

OmniboxResult::OmniboxResult()
    : done(),
      time_since_omnibox_started_ms(),
      host(nullptr),
      is_typed_host(),
      combined_results(nullptr),
      results_by_provider(nullptr) {
}

OmniboxResult::~OmniboxResult() {
}
const char OmniboxPageHandler::Name_[] = "mojom::OmniboxPageHandler";
const uint32_t OmniboxPageHandler::Version_;

OmniboxPageHandlerProxy::OmniboxPageHandlerProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void OmniboxPageHandlerProxy::SetClientPage(
    OmniboxPagePtr in_page) {
  size_t size = sizeof(::mojom::internal::OmniboxPageHandler_SetClientPage_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kOmniboxPageHandler_SetClientPage_Name, size);

  auto params =
      ::mojom::internal::OmniboxPageHandler_SetClientPage_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::mojom::OmniboxPagePtr>(
      in_page, &params->page, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->page),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid page in OmniboxPageHandler.SetClientPage request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void OmniboxPageHandlerProxy::StartOmniboxQuery(
    const mojo::String& in_input_string, int32_t in_cursor_position, bool in_prevent_inline_autocomplete, bool in_prefer_keyword, int32_t in_page_classification) {
  size_t size = sizeof(::mojom::internal::OmniboxPageHandler_StartOmniboxQuery_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_input_string, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kOmniboxPageHandler_StartOmniboxQuery_Name, size);

  auto params =
      ::mojom::internal::OmniboxPageHandler_StartOmniboxQuery_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->input_string)::BaseType* input_string_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_input_string, builder.buffer(), &input_string_ptr, &serialization_context_);
  params->input_string.Set(input_string_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->input_string.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null input_string in OmniboxPageHandler.StartOmniboxQuery request");
  params->cursor_position = in_cursor_position;
  params->prevent_inline_autocomplete = in_prevent_inline_autocomplete;
  params->prefer_keyword = in_prefer_keyword;
  params->page_classification = in_page_classification;
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

OmniboxPageHandlerStub::OmniboxPageHandlerStub()
    : sink_(nullptr),
      control_message_handler_(OmniboxPageHandler::Version_) {
}

OmniboxPageHandlerStub::~OmniboxPageHandlerStub() {}

bool OmniboxPageHandlerStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kOmniboxPageHandler_SetClientPage_Name: {
      internal::OmniboxPageHandler_SetClientPage_Params_Data* params =
          reinterpret_cast<internal::OmniboxPageHandler_SetClientPage_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      OmniboxPagePtr p_page{};
      OmniboxPageHandler_SetClientPage_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_page = input_data_view.TakePage();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "OmniboxPageHandler::SetClientPage deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "OmniboxPageHandler::SetClientPage");
      mojo::internal::MessageDispatchContext context(message);
      sink_->SetClientPage(
std::move(p_page));
      return true;
    }
    case internal::kOmniboxPageHandler_StartOmniboxQuery_Name: {
      internal::OmniboxPageHandler_StartOmniboxQuery_Params_Data* params =
          reinterpret_cast<internal::OmniboxPageHandler_StartOmniboxQuery_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      mojo::String p_input_string{};
      int32_t p_cursor_position{};
      bool p_prevent_inline_autocomplete{};
      bool p_prefer_keyword{};
      int32_t p_page_classification{};
      OmniboxPageHandler_StartOmniboxQuery_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadInputString(&p_input_string))
        success = false;
      p_cursor_position = input_data_view.cursor_position();
      p_prevent_inline_autocomplete = input_data_view.prevent_inline_autocomplete();
      p_prefer_keyword = input_data_view.prefer_keyword();
      p_page_classification = input_data_view.page_classification();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "OmniboxPageHandler::StartOmniboxQuery deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "OmniboxPageHandler::StartOmniboxQuery");
      mojo::internal::MessageDispatchContext context(message);
      sink_->StartOmniboxQuery(
std::move(p_input_string), 
std::move(p_cursor_position), 
std::move(p_prevent_inline_autocomplete), 
std::move(p_prefer_keyword), 
std::move(p_page_classification));
      return true;
    }
  }
  return false;
}

bool OmniboxPageHandlerStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kOmniboxPageHandler_SetClientPage_Name: {
      break;
    }
    case internal::kOmniboxPageHandler_StartOmniboxQuery_Name: {
      break;
    }
  }
  return false;
}

OmniboxPageHandlerRequestValidator::OmniboxPageHandlerRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool OmniboxPageHandlerRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "OmniboxPageHandler RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kOmniboxPageHandler_SetClientPage_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::OmniboxPageHandler_SetClientPage_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kOmniboxPageHandler_StartOmniboxQuery_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::OmniboxPageHandler_StartOmniboxQuery_Params_Data>(
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

const char OmniboxPage::Name_[] = "mojom::OmniboxPage";
const uint32_t OmniboxPage::Version_;

OmniboxPageProxy::OmniboxPageProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void OmniboxPageProxy::HandleNewAutocompleteResult(
    OmniboxResultPtr in_result) {
  size_t size = sizeof(::mojom::internal::OmniboxPage_HandleNewAutocompleteResult_Params_Data);
  size += mojo::internal::PrepareToSerialize<::mojom::OmniboxResultPtr>(
      in_result, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kOmniboxPage_HandleNewAutocompleteResult_Name, size);

  auto params =
      ::mojom::internal::OmniboxPage_HandleNewAutocompleteResult_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->result)::BaseType* result_ptr;
  mojo::internal::Serialize<::mojom::OmniboxResultPtr>(
      in_result, builder.buffer(), &result_ptr, &serialization_context_);
  params->result.Set(result_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->result.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in OmniboxPage.HandleNewAutocompleteResult request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

OmniboxPageStub::OmniboxPageStub()
    : sink_(nullptr),
      control_message_handler_(OmniboxPage::Version_) {
}

OmniboxPageStub::~OmniboxPageStub() {}

bool OmniboxPageStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kOmniboxPage_HandleNewAutocompleteResult_Name: {
      internal::OmniboxPage_HandleNewAutocompleteResult_Params_Data* params =
          reinterpret_cast<internal::OmniboxPage_HandleNewAutocompleteResult_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      OmniboxResultPtr p_result{};
      OmniboxPage_HandleNewAutocompleteResult_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadResult(&p_result))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "OmniboxPage::HandleNewAutocompleteResult deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "OmniboxPage::HandleNewAutocompleteResult");
      mojo::internal::MessageDispatchContext context(message);
      sink_->HandleNewAutocompleteResult(
std::move(p_result));
      return true;
    }
  }
  return false;
}

bool OmniboxPageStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kOmniboxPage_HandleNewAutocompleteResult_Name: {
      break;
    }
  }
  return false;
}

OmniboxPageRequestValidator::OmniboxPageRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool OmniboxPageRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "OmniboxPage RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kOmniboxPage_HandleNewAutocompleteResult_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::OmniboxPage_HandleNewAutocompleteResult_Params_Data>(
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

namespace mojo {


// static
bool StructTraits<::mojom::AutocompleteAdditionalInfo, ::mojom::AutocompleteAdditionalInfoPtr>::Read(
    ::mojom::AutocompleteAdditionalInfoDataView input,
    ::mojom::AutocompleteAdditionalInfoPtr* output) {
  bool success = true;
  ::mojom::AutocompleteAdditionalInfoPtr result(::mojom::AutocompleteAdditionalInfo::New());
  
      if (!input.ReadKey(&result->key))
        success = false;
      if (!input.ReadValue(&result->value))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojom::AutocompleteMatch, ::mojom::AutocompleteMatchPtr>::Read(
    ::mojom::AutocompleteMatchDataView input,
    ::mojom::AutocompleteMatchPtr* output) {
  bool success = true;
  ::mojom::AutocompleteMatchPtr result(::mojom::AutocompleteMatch::New());
  
      if (!input.ReadProviderName(&result->provider_name))
        success = false;
      result->provider_done = input.provider_done();
      result->relevance = input.relevance();
      result->deletable = input.deletable();
      if (!input.ReadFillIntoEdit(&result->fill_into_edit))
        success = false;
      if (!input.ReadInlineAutocompletion(&result->inline_autocompletion))
        success = false;
      if (!input.ReadDestinationUrl(&result->destination_url))
        success = false;
      if (!input.ReadContents(&result->contents))
        success = false;
      if (!input.ReadDescription(&result->description))
        success = false;
      result->transition = input.transition();
      result->allowed_to_be_default_match = input.allowed_to_be_default_match();
      if (!input.ReadType(&result->type))
        success = false;
      if (!input.ReadAssociatedKeyword(&result->associated_keyword))
        success = false;
      if (!input.ReadKeyword(&result->keyword))
        success = false;
      result->starred = input.starred();
      result->duplicates = input.duplicates();
      result->from_previous = input.from_previous();
      if (!input.ReadAdditionalInfo(&result->additional_info))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojom::AutocompleteResultsForProvider, ::mojom::AutocompleteResultsForProviderPtr>::Read(
    ::mojom::AutocompleteResultsForProviderDataView input,
    ::mojom::AutocompleteResultsForProviderPtr* output) {
  bool success = true;
  ::mojom::AutocompleteResultsForProviderPtr result(::mojom::AutocompleteResultsForProvider::New());
  
      if (!input.ReadProviderName(&result->provider_name))
        success = false;
      if (!input.ReadResults(&result->results))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojom::OmniboxResult, ::mojom::OmniboxResultPtr>::Read(
    ::mojom::OmniboxResultDataView input,
    ::mojom::OmniboxResultPtr* output) {
  bool success = true;
  ::mojom::OmniboxResultPtr result(::mojom::OmniboxResult::New());
  
      result->done = input.done();
      result->time_since_omnibox_started_ms = input.time_since_omnibox_started_ms();
      if (!input.ReadHost(&result->host))
        success = false;
      result->is_typed_host = input.is_typed_host();
      if (!input.ReadCombinedResults(&result->combined_results))
        success = false;
      if (!input.ReadResultsByProvider(&result->results_by_provider))
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
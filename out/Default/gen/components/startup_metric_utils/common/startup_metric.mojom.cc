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

#include "components/startup_metric_utils/common/startup_metric.mojom.h"

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
#include "mojo/common/common_custom_types_struct_traits.h"
namespace startup_metric_utils {
namespace mojom {

namespace {

class StartupMetricHost_RecordRendererMainEntryTime_ParamsDataView {
 public:
  StartupMetricHost_RecordRendererMainEntryTime_ParamsDataView() {}

  StartupMetricHost_RecordRendererMainEntryTime_ParamsDataView(
      internal::StartupMetricHost_RecordRendererMainEntryTime_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRendererMainEntryTimeDataView(
      ::mojo::common::mojom::TimeTicksDataView* output);

  template <typename UserType>
  bool ReadRendererMainEntryTime(UserType* output) {
    auto pointer = data_->renderer_main_entry_time.Get();
    return mojo::internal::Deserialize<::mojo::common::mojom::TimeTicksPtr>(
        pointer, output, context_);
  }
 private:
  internal::StartupMetricHost_RecordRendererMainEntryTime_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void StartupMetricHost_RecordRendererMainEntryTime_ParamsDataView::GetRendererMainEntryTimeDataView(
    ::mojo::common::mojom::TimeTicksDataView* output) {
  auto pointer = data_->renderer_main_entry_time.Get();
  *output = ::mojo::common::mojom::TimeTicksDataView(pointer, context_);
}


}  // namespace
const char StartupMetricHost::Name_[] = "startup_metric_utils::mojom::StartupMetricHost";
const uint32_t StartupMetricHost::Version_;

StartupMetricHostProxy::StartupMetricHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void StartupMetricHostProxy::RecordRendererMainEntryTime(
    base::TimeTicks in_renderer_main_entry_time) {
  size_t size = sizeof(::startup_metric_utils::mojom::internal::StartupMetricHost_RecordRendererMainEntryTime_Params_Data);
  size += mojo::internal::PrepareToSerialize<::mojo::common::mojom::TimeTicksPtr>(
      in_renderer_main_entry_time, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kStartupMetricHost_RecordRendererMainEntryTime_Name, size);

  auto params =
      ::startup_metric_utils::mojom::internal::StartupMetricHost_RecordRendererMainEntryTime_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->renderer_main_entry_time)::BaseType* renderer_main_entry_time_ptr;
  mojo::internal::Serialize<::mojo::common::mojom::TimeTicksPtr>(
      in_renderer_main_entry_time, builder.buffer(), &renderer_main_entry_time_ptr, &serialization_context_);
  params->renderer_main_entry_time.Set(renderer_main_entry_time_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->renderer_main_entry_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null renderer_main_entry_time in StartupMetricHost.RecordRendererMainEntryTime request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

StartupMetricHostStub::StartupMetricHostStub()
    : sink_(nullptr),
      control_message_handler_(StartupMetricHost::Version_) {
}

StartupMetricHostStub::~StartupMetricHostStub() {}

bool StartupMetricHostStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kStartupMetricHost_RecordRendererMainEntryTime_Name: {
      internal::StartupMetricHost_RecordRendererMainEntryTime_Params_Data* params =
          reinterpret_cast<internal::StartupMetricHost_RecordRendererMainEntryTime_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      base::TimeTicks p_renderer_main_entry_time{};
      StartupMetricHost_RecordRendererMainEntryTime_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadRendererMainEntryTime(&p_renderer_main_entry_time))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "StartupMetricHost::RecordRendererMainEntryTime deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "StartupMetricHost::RecordRendererMainEntryTime");
      mojo::internal::MessageDispatchContext context(message);
      sink_->RecordRendererMainEntryTime(
std::move(p_renderer_main_entry_time));
      return true;
    }
  }
  return false;
}

bool StartupMetricHostStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kStartupMetricHost_RecordRendererMainEntryTime_Name: {
      break;
    }
  }
  return false;
}

StartupMetricHostRequestValidator::StartupMetricHostRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool StartupMetricHostRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "StartupMetricHost RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kStartupMetricHost_RecordRendererMainEntryTime_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::StartupMetricHost_RecordRendererMainEntryTime_Params_Data>(
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
}  // namespace startup_metric_utils

namespace mojo {

}  // namespace mojo


#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
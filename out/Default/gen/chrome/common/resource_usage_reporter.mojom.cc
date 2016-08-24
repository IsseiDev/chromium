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

#include "chrome/common/resource_usage_reporter.mojom.h"

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
#include "skia/public/interfaces/bitmap_skbitmap_struct_traits.h"
#include "skia/public/interfaces/image_filter_struct_traits.h"
namespace mojom {

namespace {

class ResourceUsageReporter_GetUsageData_ParamsDataView {
 public:
  ResourceUsageReporter_GetUsageData_ParamsDataView() {}

  ResourceUsageReporter_GetUsageData_ParamsDataView(
      internal::ResourceUsageReporter_GetUsageData_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ResourceUsageReporter_GetUsageData_Params_Data* data_ = nullptr;
};



class ResourceUsageReporter_GetUsageData_ResponseParamsDataView {
 public:
  ResourceUsageReporter_GetUsageData_ResponseParamsDataView() {}

  ResourceUsageReporter_GetUsageData_ResponseParamsDataView(
      internal::ResourceUsageReporter_GetUsageData_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDataDataView(
      ResourceUsageDataDataView* output);

  template <typename UserType>
  bool ReadData(UserType* output) {
    auto pointer = data_->data.Get();
    return mojo::internal::Deserialize<::mojom::ResourceUsageDataPtr>(
        pointer, output, context_);
  }
 private:
  internal::ResourceUsageReporter_GetUsageData_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void ResourceUsageReporter_GetUsageData_ResponseParamsDataView::GetDataDataView(
    ResourceUsageDataDataView* output) {
  auto pointer = data_->data.Get();
  *output = ResourceUsageDataDataView(pointer, context_);
}


}  // namespace// static
ResourceTypeStatPtr ResourceTypeStat::New() {
  ResourceTypeStatPtr rv;
  mojo::internal::StructHelper<ResourceTypeStat>::Initialize(&rv);
  return rv;
}

ResourceTypeStat::ResourceTypeStat()
    : count(0ULL),
      size(0ULL),
      live_size(0ULL),
      decoded_size(0ULL) {
}

ResourceTypeStat::~ResourceTypeStat() {
}// static
ResourceTypeStatsPtr ResourceTypeStats::New() {
  ResourceTypeStatsPtr rv;
  mojo::internal::StructHelper<ResourceTypeStats>::Initialize(&rv);
  return rv;
}

ResourceTypeStats::ResourceTypeStats()
    : images(),
      css_style_sheets(),
      scripts(),
      xsl_style_sheets(),
      fonts(),
      other() {
}

ResourceTypeStats::~ResourceTypeStats() {
}// static
ResourceUsageDataPtr ResourceUsageData::New() {
  ResourceUsageDataPtr rv;
  mojo::internal::StructHelper<ResourceUsageData>::Initialize(&rv);
  return rv;
}

ResourceUsageData::ResourceUsageData()
    : reports_v8_stats(false),
      v8_bytes_allocated(0ULL),
      v8_bytes_used(0ULL),
      web_cache_stats() {
}

ResourceUsageData::~ResourceUsageData() {
}
const char ResourceUsageReporter::Name_[] = "mojom::ResourceUsageReporter";
const uint32_t ResourceUsageReporter::Version_;

class ResourceUsageReporter_GetUsageData_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ResourceUsageReporter_GetUsageData_ForwardToCallback(
      const ResourceUsageReporter::GetUsageDataCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ResourceUsageReporter::GetUsageDataCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(ResourceUsageReporter_GetUsageData_ForwardToCallback);
};
bool ResourceUsageReporter_GetUsageData_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::ResourceUsageReporter_GetUsageData_ResponseParams_Data* params =
      reinterpret_cast<internal::ResourceUsageReporter_GetUsageData_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  ResourceUsageDataPtr p_data{};
  ResourceUsageReporter_GetUsageData_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadData(&p_data))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "ResourceUsageReporter::GetUsageData response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_data));
  }
  return true;
}

ResourceUsageReporterProxy::ResourceUsageReporterProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void ResourceUsageReporterProxy::GetUsageData(
    const GetUsageDataCallback& callback) {
  size_t size = sizeof(::mojom::internal::ResourceUsageReporter_GetUsageData_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kResourceUsageReporter_GetUsageData_Name, size);

  auto params =
      ::mojom::internal::ResourceUsageReporter_GetUsageData_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new ResourceUsageReporter_GetUsageData_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
class ResourceUsageReporter_GetUsageData_ProxyToResponder {
 public:
  static ResourceUsageReporter::GetUsageDataCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<ResourceUsageReporter_GetUsageData_ProxyToResponder> proxy(
        new ResourceUsageReporter_GetUsageData_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&ResourceUsageReporter_GetUsageData_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~ResourceUsageReporter_GetUsageData_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "ResourceUsageReporter::GetUsageData() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  ResourceUsageReporter_GetUsageData_ProxyToResponder(
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
      ResourceUsageDataPtr in_data);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(ResourceUsageReporter_GetUsageData_ProxyToResponder);
};

void ResourceUsageReporter_GetUsageData_ProxyToResponder::Run(
    ResourceUsageDataPtr in_data) {
  size_t size = sizeof(::mojom::internal::ResourceUsageReporter_GetUsageData_ResponseParams_Data);
  size += mojo::internal::PrepareToSerialize<::mojom::ResourceUsageDataPtr>(
      in_data, &serialization_context_);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kResourceUsageReporter_GetUsageData_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::mojom::internal::ResourceUsageReporter_GetUsageData_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->data)::BaseType* data_ptr;
  mojo::internal::Serialize<::mojom::ResourceUsageDataPtr>(
      in_data, builder.buffer(), &data_ptr, &serialization_context_);
  params->data.Set(data_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data in ResourceUsageReporter.GetUsageData response");
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

ResourceUsageReporterStub::ResourceUsageReporterStub()
    : sink_(nullptr),
      control_message_handler_(ResourceUsageReporter::Version_) {
}

ResourceUsageReporterStub::~ResourceUsageReporterStub() {}

bool ResourceUsageReporterStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kResourceUsageReporter_GetUsageData_Name: {
      break;
    }
  }
  return false;
}

bool ResourceUsageReporterStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kResourceUsageReporter_GetUsageData_Name: {
      internal::ResourceUsageReporter_GetUsageData_Params_Data* params =
          reinterpret_cast<internal::ResourceUsageReporter_GetUsageData_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      ResourceUsageReporter_GetUsageData_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ResourceUsageReporter::GetUsageData deserializer");
        return false;
      }
      ResourceUsageReporter::GetUsageDataCallback callback =
          ResourceUsageReporter_GetUsageData_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ResourceUsageReporter::GetUsageData");
      mojo::internal::MessageDispatchContext context(message);
      sink_->GetUsageData(callback);
      return true;
    }
  }
  return false;
}

ResourceUsageReporterRequestValidator::ResourceUsageReporterRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool ResourceUsageReporterRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "ResourceUsageReporter RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kResourceUsageReporter_GetUsageData_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ResourceUsageReporter_GetUsageData_Params_Data>(
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

ResourceUsageReporterResponseValidator::ResourceUsageReporterResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool ResourceUsageReporterResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "ResourceUsageReporter ResponseValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kResourceUsageReporter_GetUsageData_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ResourceUsageReporter_GetUsageData_ResponseParams_Data>(
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
bool StructTraits<::mojom::ResourceTypeStat, ::mojom::ResourceTypeStatPtr>::Read(
    ::mojom::ResourceTypeStatDataView input,
    ::mojom::ResourceTypeStatPtr* output) {
  bool success = true;
  ::mojom::ResourceTypeStatPtr result(::mojom::ResourceTypeStat::New());
  
      result->count = input.count();
      result->size = input.size();
      result->live_size = input.live_size();
      result->decoded_size = input.decoded_size();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojom::ResourceTypeStats, ::mojom::ResourceTypeStatsPtr>::Read(
    ::mojom::ResourceTypeStatsDataView input,
    ::mojom::ResourceTypeStatsPtr* output) {
  bool success = true;
  ::mojom::ResourceTypeStatsPtr result(::mojom::ResourceTypeStats::New());
  
      if (!input.ReadImages(&result->images))
        success = false;
      if (!input.ReadCssStyleSheets(&result->css_style_sheets))
        success = false;
      if (!input.ReadScripts(&result->scripts))
        success = false;
      if (!input.ReadXslStyleSheets(&result->xsl_style_sheets))
        success = false;
      if (!input.ReadFonts(&result->fonts))
        success = false;
      if (!input.ReadOther(&result->other))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojom::ResourceUsageData, ::mojom::ResourceUsageDataPtr>::Read(
    ::mojom::ResourceUsageDataDataView input,
    ::mojom::ResourceUsageDataPtr* output) {
  bool success = true;
  ::mojom::ResourceUsageDataPtr result(::mojom::ResourceUsageData::New());
  
      result->reports_v8_stats = input.reports_v8_stats();
      result->v8_bytes_allocated = input.v8_bytes_allocated();
      result->v8_bytes_used = input.v8_bytes_used();
      if (!input.ReadWebCacheStats(&result->web_cache_stats))
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
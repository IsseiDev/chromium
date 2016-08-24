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

#include "content/common/storage_partition_service.mojom.h"

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

class StoragePartitionService_OpenLocalStorage_ParamsDataView {
 public:
  StoragePartitionService_OpenLocalStorage_ParamsDataView() {}

  StoragePartitionService_OpenLocalStorage_ParamsDataView(
      internal::StoragePartitionService_OpenLocalStorage_Params_Data* data,
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
  ::content::mojom::LevelDBObserverPtr TakeObserver() {
    ::content::mojom::LevelDBObserverPtr result;
    bool ret =
        mojo::internal::Deserialize<::content::mojom::LevelDBObserverPtr>(
            &data_->observer, &result, context_);
    DCHECK(ret);
    return result;
  }
  ::content::mojom::LevelDBWrapperRequest TakeDatabase() {
    ::content::mojom::LevelDBWrapperRequest result;
    bool ret =
        mojo::internal::Deserialize<::content::mojom::LevelDBWrapperRequest>(
            &data_->database, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::StoragePartitionService_OpenLocalStorage_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void StoragePartitionService_OpenLocalStorage_ParamsDataView::GetOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}


}  // namespace
const char StoragePartitionService::Name_[] = "content::mojom::StoragePartitionService";
const uint32_t StoragePartitionService::Version_;

StoragePartitionServiceProxy::StoragePartitionServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void StoragePartitionServiceProxy::OpenLocalStorage(
    const url::Origin& in_origin, ::content::mojom::LevelDBObserverPtr in_observer, ::content::mojom::LevelDBWrapperRequest in_database) {
  size_t size = sizeof(::content::mojom::internal::StoragePartitionService_OpenLocalStorage_Params_Data);
  size += mojo::internal::PrepareToSerialize<::url::mojom::OriginPtr>(
      in_origin, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kStoragePartitionService_OpenLocalStorage_Name, size);

  auto params =
      ::content::mojom::internal::StoragePartitionService_OpenLocalStorage_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->origin)::BaseType* origin_ptr;
  mojo::internal::Serialize<::url::mojom::OriginPtr>(
      in_origin, builder.buffer(), &origin_ptr, &serialization_context_);
  params->origin.Set(origin_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->origin.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origin in StoragePartitionService.OpenLocalStorage request");
  mojo::internal::Serialize<::content::mojom::LevelDBObserverPtr>(
      in_observer, &params->observer, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->observer),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid observer in StoragePartitionService.OpenLocalStorage request");
  mojo::internal::Serialize<::content::mojom::LevelDBWrapperRequest>(
      in_database, &params->database, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->database),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid database in StoragePartitionService.OpenLocalStorage request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

StoragePartitionServiceStub::StoragePartitionServiceStub()
    : sink_(nullptr),
      control_message_handler_(StoragePartitionService::Version_) {
}

StoragePartitionServiceStub::~StoragePartitionServiceStub() {}

bool StoragePartitionServiceStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kStoragePartitionService_OpenLocalStorage_Name: {
      internal::StoragePartitionService_OpenLocalStorage_Params_Data* params =
          reinterpret_cast<internal::StoragePartitionService_OpenLocalStorage_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      url::Origin p_origin{};
      ::content::mojom::LevelDBObserverPtr p_observer{};
      ::content::mojom::LevelDBWrapperRequest p_database{};
      StoragePartitionService_OpenLocalStorage_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadOrigin(&p_origin))
        success = false;
      p_observer = input_data_view.TakeObserver();
      p_database = input_data_view.TakeDatabase();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "StoragePartitionService::OpenLocalStorage deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "StoragePartitionService::OpenLocalStorage");
      mojo::internal::MessageDispatchContext context(message);
      sink_->OpenLocalStorage(
std::move(p_origin), 
std::move(p_observer), 
std::move(p_database));
      return true;
    }
  }
  return false;
}

bool StoragePartitionServiceStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kStoragePartitionService_OpenLocalStorage_Name: {
      break;
    }
  }
  return false;
}

StoragePartitionServiceRequestValidator::StoragePartitionServiceRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool StoragePartitionServiceRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "StoragePartitionService RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kStoragePartitionService_OpenLocalStorage_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::StoragePartitionService_OpenLocalStorage_Params_Data>(
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

}  // namespace mojo


#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
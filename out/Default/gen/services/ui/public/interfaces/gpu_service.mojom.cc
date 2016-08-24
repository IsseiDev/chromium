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

#include "services/ui/public/interfaces/gpu_service.mojom.h"

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
#include "ui/events/mojo/event_struct_traits.h"
#include "cc/ipc/surface_id_struct_traits.h"
#include "gpu/ipc/common/sync_token_struct_traits.h"
#include "gpu/ipc/common/gpu_command_buffer_traits.h"
#include "cc/ipc/shared_quad_state_struct_traits.h"
#include "ui/gfx/mojo/accelerated_widget_struct_traits.h"
#include "cc/ipc/transferable_resource_struct_traits.h"
#include "ui/gfx/mojo/buffer_types_enum_traits.h"
#include "cc/ipc/filter_operations_struct_traits.h"
#include "gpu/ipc/common/dx_diag_node_struct_traits.h"
#include "cc/ipc/render_pass_id_struct_traits.h"
#include "cc/ipc/filter_operation_struct_traits.h"
#include "services/ui/public/interfaces/display/display_struct_traits.h"
#include "ipc/ipc_message_utils.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "cc/ipc/render_pass_struct_traits.h"
#include "cc/ipc/compositor_frame_metadata_struct_traits.h"
#include "cc/ipc/surface_sequence_struct_traits.h"
#include "ui/events/mojo/latency_info_struct_traits.h"
#include "ui/gfx/mojo/transform_struct_traits.h"
#include "skia/public/interfaces/bitmap_skbitmap_struct_traits.h"
#include "ui/gfx/mojo/selection_bound_struct_traits.h"
#include "gpu/ipc/common/mailbox_holder_struct_traits.h"
#include "cc/ipc/begin_frame_args_struct_traits.h"
#include "gpu/ipc/common/gpu_info_struct_traits.h"
#include "cc/ipc/selection_struct_traits.h"
#include "gpu/ipc/common/mailbox_struct_traits.h"
#include "mojo/common/common_custom_types_struct_traits.h"
#include "skia/public/interfaces/image_filter_struct_traits.h"
#include "cc/ipc/returned_resource_struct_traits.h"
#include "cc/ipc/compositor_frame_struct_traits.h"
namespace ui {
namespace mojom {

namespace {

class GpuService_EstablishGpuChannel_ParamsDataView {
 public:
  GpuService_EstablishGpuChannel_ParamsDataView() {}

  GpuService_EstablishGpuChannel_ParamsDataView(
      internal::GpuService_EstablishGpuChannel_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::GpuService_EstablishGpuChannel_Params_Data* data_ = nullptr;
};



class GpuService_EstablishGpuChannel_ResponseParamsDataView {
 public:
  GpuService_EstablishGpuChannel_ResponseParamsDataView() {}

  GpuService_EstablishGpuChannel_ResponseParamsDataView(
      internal::GpuService_EstablishGpuChannel_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t client_id() const {
    return data_->client_id;
  }
  mojo::ScopedMessagePipeHandle TakeChannelHandle() {
    mojo::ScopedMessagePipeHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedMessagePipeHandle>(
            &data_->channel_handle, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetGpuInfoDataView(
      ::gpu::mojom::GpuInfoDataView* output);

  template <typename UserType>
  bool ReadGpuInfo(UserType* output) {
    auto pointer = data_->gpu_info.Get();
    return mojo::internal::Deserialize<::gpu::mojom::GpuInfoPtr>(
        pointer, output, context_);
  }
 private:
  internal::GpuService_EstablishGpuChannel_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void GpuService_EstablishGpuChannel_ResponseParamsDataView::GetGpuInfoDataView(
    ::gpu::mojom::GpuInfoDataView* output) {
  auto pointer = data_->gpu_info.Get();
  *output = ::gpu::mojom::GpuInfoDataView(pointer, context_);
}


class GpuService_CreateGpuMemoryBuffer_ParamsDataView {
 public:
  GpuService_CreateGpuMemoryBuffer_ParamsDataView() {}

  GpuService_CreateGpuMemoryBuffer_ParamsDataView(
      internal::GpuService_CreateGpuMemoryBuffer_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIdDataView(
      ::ui::mojom::GpuMemoryBufferIdDataView* output);

  template <typename UserType>
  bool ReadId(UserType* output) {
    auto pointer = data_->id.Get();
    return mojo::internal::Deserialize<::ui::mojom::GpuMemoryBufferIdPtr>(
        pointer, output, context_);
  }
  inline void GetSizeDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  bool ReadSize(UserType* output) {
    auto pointer = data_->size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizePtr>(
        pointer, output, context_);
  }
  template <typename UserType>
  bool ReadFormat(UserType* output) const {
    auto data_value = data_->format;
    return mojo::internal::Deserialize<::gfx::mojom::BufferFormat>(
        data_value, output);
  }

  ::gfx::mojom::BufferFormat format() const {
    return static_cast<::gfx::mojom::BufferFormat>(data_->format);
  }
  template <typename UserType>
  bool ReadUsage(UserType* output) const {
    auto data_value = data_->usage;
    return mojo::internal::Deserialize<::gfx::mojom::BufferUsage>(
        data_value, output);
  }

  ::gfx::mojom::BufferUsage usage() const {
    return static_cast<::gfx::mojom::BufferUsage>(data_->usage);
  }
  uint64_t surface_id() const {
    return data_->surface_id;
  }
 private:
  internal::GpuService_CreateGpuMemoryBuffer_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void GpuService_CreateGpuMemoryBuffer_ParamsDataView::GetIdDataView(
    ::ui::mojom::GpuMemoryBufferIdDataView* output) {
  auto pointer = data_->id.Get();
  *output = ::ui::mojom::GpuMemoryBufferIdDataView(pointer, context_);
}
inline void GpuService_CreateGpuMemoryBuffer_ParamsDataView::GetSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}

class GpuService_CreateGpuMemoryBuffer_ResponseParamsDataView {
 public:
  GpuService_CreateGpuMemoryBuffer_ResponseParamsDataView() {}

  GpuService_CreateGpuMemoryBuffer_ResponseParamsDataView(
      internal::GpuService_CreateGpuMemoryBuffer_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetBufferHandleDataView(
      ::ui::mojom::GpuMemoryBufferHandleDataView* output);

  template <typename UserType>
  bool ReadBufferHandle(UserType* output) {
    auto pointer = data_->buffer_handle.Get();
    return mojo::internal::Deserialize<::ui::mojom::GpuMemoryBufferHandlePtr>(
        pointer, output, context_);
  }
 private:
  internal::GpuService_CreateGpuMemoryBuffer_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void GpuService_CreateGpuMemoryBuffer_ResponseParamsDataView::GetBufferHandleDataView(
    ::ui::mojom::GpuMemoryBufferHandleDataView* output) {
  auto pointer = data_->buffer_handle.Get();
  *output = ::ui::mojom::GpuMemoryBufferHandleDataView(pointer, context_);
}


class GpuService_DestroyGpuMemoryBuffer_ParamsDataView {
 public:
  GpuService_DestroyGpuMemoryBuffer_ParamsDataView() {}

  GpuService_DestroyGpuMemoryBuffer_ParamsDataView(
      internal::GpuService_DestroyGpuMemoryBuffer_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIdDataView(
      ::ui::mojom::GpuMemoryBufferIdDataView* output);

  template <typename UserType>
  bool ReadId(UserType* output) {
    auto pointer = data_->id.Get();
    return mojo::internal::Deserialize<::ui::mojom::GpuMemoryBufferIdPtr>(
        pointer, output, context_);
  }
  inline void GetSyncTokenDataView(
      ::gpu::mojom::SyncTokenDataView* output);

  template <typename UserType>
  bool ReadSyncToken(UserType* output) {
    auto pointer = data_->sync_token.Get();
    return mojo::internal::Deserialize<::gpu::mojom::SyncTokenPtr>(
        pointer, output, context_);
  }
 private:
  internal::GpuService_DestroyGpuMemoryBuffer_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void GpuService_DestroyGpuMemoryBuffer_ParamsDataView::GetIdDataView(
    ::ui::mojom::GpuMemoryBufferIdDataView* output) {
  auto pointer = data_->id.Get();
  *output = ::ui::mojom::GpuMemoryBufferIdDataView(pointer, context_);
}
inline void GpuService_DestroyGpuMemoryBuffer_ParamsDataView::GetSyncTokenDataView(
    ::gpu::mojom::SyncTokenDataView* output) {
  auto pointer = data_->sync_token.Get();
  *output = ::gpu::mojom::SyncTokenDataView(pointer, context_);
}


}  // namespace
const char GpuService::Name_[] = "ui::mojom::GpuService";
const uint32_t GpuService::Version_;
bool GpuService::EstablishGpuChannel(int32_t* client_id, mojo::ScopedMessagePipeHandle* channel_handle, gpu::GPUInfo* gpu_info) {
  NOTREACHED();
  return false;
}
class GpuService_EstablishGpuChannel_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  GpuService_EstablishGpuChannel_HandleSyncResponse(
      scoped_refptr<mojo::AssociatedGroupController> group_controller,
      bool* result, int32_t* out_client_id, mojo::ScopedMessagePipeHandle* out_channel_handle, gpu::GPUInfo* out_gpu_info)
      : serialization_context_(std::move(group_controller)), result_(result), out_client_id_(out_client_id), out_channel_handle_(out_channel_handle), out_gpu_info_(out_gpu_info) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  mojo::internal::SerializationContext serialization_context_;
  bool* result_;
  int32_t* out_client_id_;
  mojo::ScopedMessagePipeHandle* out_channel_handle_;
  gpu::GPUInfo* out_gpu_info_;DISALLOW_COPY_AND_ASSIGN(GpuService_EstablishGpuChannel_HandleSyncResponse);
};
bool GpuService_EstablishGpuChannel_HandleSyncResponse::Accept(
    mojo::Message* message) {
  internal::GpuService_EstablishGpuChannel_ResponseParams_Data* params =
      reinterpret_cast<internal::GpuService_EstablishGpuChannel_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  int32_t p_client_id{};
  mojo::ScopedMessagePipeHandle p_channel_handle{};
  gpu::GPUInfo p_gpu_info{};
  GpuService_EstablishGpuChannel_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  p_client_id = input_data_view.client_id();
  p_channel_handle = input_data_view.TakeChannelHandle();
  if (!input_data_view.ReadGpuInfo(&p_gpu_info))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "GpuService::EstablishGpuChannel response deserializer");
    return false;
  }
  *out_client_id_ = std::move(p_client_id);
  *out_channel_handle_ = std::move(p_channel_handle);
  *out_gpu_info_ = std::move(p_gpu_info);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

class GpuService_EstablishGpuChannel_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  GpuService_EstablishGpuChannel_ForwardToCallback(
      const GpuService::EstablishGpuChannelCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  GpuService::EstablishGpuChannelCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(GpuService_EstablishGpuChannel_ForwardToCallback);
};
bool GpuService_EstablishGpuChannel_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::GpuService_EstablishGpuChannel_ResponseParams_Data* params =
      reinterpret_cast<internal::GpuService_EstablishGpuChannel_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  int32_t p_client_id{};
  mojo::ScopedMessagePipeHandle p_channel_handle{};
  gpu::GPUInfo p_gpu_info{};
  GpuService_EstablishGpuChannel_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  p_client_id = input_data_view.client_id();
  p_channel_handle = input_data_view.TakeChannelHandle();
  if (!input_data_view.ReadGpuInfo(&p_gpu_info))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "GpuService::EstablishGpuChannel response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_client_id), 
std::move(p_channel_handle), 
std::move(p_gpu_info));
  }
  return true;
}

class GpuService_CreateGpuMemoryBuffer_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  GpuService_CreateGpuMemoryBuffer_ForwardToCallback(
      const GpuService::CreateGpuMemoryBufferCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  GpuService::CreateGpuMemoryBufferCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(GpuService_CreateGpuMemoryBuffer_ForwardToCallback);
};
bool GpuService_CreateGpuMemoryBuffer_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::GpuService_CreateGpuMemoryBuffer_ResponseParams_Data* params =
      reinterpret_cast<internal::GpuService_CreateGpuMemoryBuffer_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  ::ui::mojom::GpuMemoryBufferHandlePtr p_buffer_handle{};
  GpuService_CreateGpuMemoryBuffer_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadBufferHandle(&p_buffer_handle))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "GpuService::CreateGpuMemoryBuffer response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_buffer_handle));
  }
  return true;
}

GpuServiceProxy::GpuServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
bool GpuServiceProxy::EstablishGpuChannel(
    int32_t* param_client_id, mojo::ScopedMessagePipeHandle* param_channel_handle, gpu::GPUInfo* param_gpu_info) {
  size_t size = sizeof(::ui::mojom::internal::GpuService_EstablishGpuChannel_Params_Data);

  mojo::internal::RequestMessageBuilder builder(internal::kGpuService_EstablishGpuChannel_Name, size,
                                                mojo::Message::kFlagIsSync);

  auto params =
      ::ui::mojom::internal::GpuService_EstablishGpuChannel_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());

  bool result = false;
  mojo::MessageReceiver* responder =
      new GpuService_EstablishGpuChannel_HandleSyncResponse(
          serialization_context_.group_controller, &result, param_client_id, param_channel_handle, param_gpu_info);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
  return result;
}

void GpuServiceProxy::EstablishGpuChannel(
    const EstablishGpuChannelCallback& callback) {
  size_t size = sizeof(::ui::mojom::internal::GpuService_EstablishGpuChannel_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kGpuService_EstablishGpuChannel_Name, size);

  auto params =
      ::ui::mojom::internal::GpuService_EstablishGpuChannel_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new GpuService_EstablishGpuChannel_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void GpuServiceProxy::CreateGpuMemoryBuffer(
    ::ui::mojom::GpuMemoryBufferIdPtr in_id, const gfx::Size& in_size, gfx::BufferFormat in_format, gfx::BufferUsage in_usage, uint64_t in_surface_id, const CreateGpuMemoryBufferCallback& callback) {
  size_t size = sizeof(::ui::mojom::internal::GpuService_CreateGpuMemoryBuffer_Params_Data);
  size += mojo::internal::PrepareToSerialize<::ui::mojom::GpuMemoryBufferIdPtr>(
      in_id, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<::gfx::mojom::SizePtr>(
      in_size, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kGpuService_CreateGpuMemoryBuffer_Name, size);

  auto params =
      ::ui::mojom::internal::GpuService_CreateGpuMemoryBuffer_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->id)::BaseType* id_ptr;
  mojo::internal::Serialize<::ui::mojom::GpuMemoryBufferIdPtr>(
      in_id, builder.buffer(), &id_ptr, &serialization_context_);
  params->id.Set(id_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null id in GpuService.CreateGpuMemoryBuffer request");
  typename decltype(params->size)::BaseType* size_ptr;
  mojo::internal::Serialize<::gfx::mojom::SizePtr>(
      in_size, builder.buffer(), &size_ptr, &serialization_context_);
  params->size.Set(size_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->size.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null size in GpuService.CreateGpuMemoryBuffer request");
  mojo::internal::Serialize<::gfx::mojom::BufferFormat>(
      in_format, &params->format);
  mojo::internal::Serialize<::gfx::mojom::BufferUsage>(
      in_usage, &params->usage);
  params->surface_id = in_surface_id;
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new GpuService_CreateGpuMemoryBuffer_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void GpuServiceProxy::DestroyGpuMemoryBuffer(
    ::ui::mojom::GpuMemoryBufferIdPtr in_id, const ::gpu::SyncToken& in_sync_token) {
  size_t size = sizeof(::ui::mojom::internal::GpuService_DestroyGpuMemoryBuffer_Params_Data);
  size += mojo::internal::PrepareToSerialize<::ui::mojom::GpuMemoryBufferIdPtr>(
      in_id, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<::gpu::mojom::SyncTokenPtr>(
      in_sync_token, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kGpuService_DestroyGpuMemoryBuffer_Name, size);

  auto params =
      ::ui::mojom::internal::GpuService_DestroyGpuMemoryBuffer_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->id)::BaseType* id_ptr;
  mojo::internal::Serialize<::ui::mojom::GpuMemoryBufferIdPtr>(
      in_id, builder.buffer(), &id_ptr, &serialization_context_);
  params->id.Set(id_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null id in GpuService.DestroyGpuMemoryBuffer request");
  typename decltype(params->sync_token)::BaseType* sync_token_ptr;
  mojo::internal::Serialize<::gpu::mojom::SyncTokenPtr>(
      in_sync_token, builder.buffer(), &sync_token_ptr, &serialization_context_);
  params->sync_token.Set(sync_token_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->sync_token.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null sync_token in GpuService.DestroyGpuMemoryBuffer request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}
class GpuService_EstablishGpuChannel_ProxyToResponder {
 public:
  static GpuService::EstablishGpuChannelCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<GpuService_EstablishGpuChannel_ProxyToResponder> proxy(
        new GpuService_EstablishGpuChannel_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&GpuService_EstablishGpuChannel_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~GpuService_EstablishGpuChannel_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "GpuService::EstablishGpuChannel() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  GpuService_EstablishGpuChannel_ProxyToResponder(
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
      int32_t in_client_id, mojo::ScopedMessagePipeHandle in_channel_handle, const gpu::GPUInfo& in_gpu_info);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(GpuService_EstablishGpuChannel_ProxyToResponder);
};

void GpuService_EstablishGpuChannel_ProxyToResponder::Run(
    int32_t in_client_id, mojo::ScopedMessagePipeHandle in_channel_handle, const gpu::GPUInfo& in_gpu_info) {
  size_t size = sizeof(::ui::mojom::internal::GpuService_EstablishGpuChannel_ResponseParams_Data);
  size += mojo::internal::PrepareToSerialize<::gpu::mojom::GpuInfoPtr>(
      in_gpu_info, &serialization_context_);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kGpuService_EstablishGpuChannel_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::ui::mojom::internal::GpuService_EstablishGpuChannel_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->client_id = in_client_id;
  mojo::internal::Serialize<mojo::ScopedMessagePipeHandle>(
      in_channel_handle, &params->channel_handle, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->channel_handle),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid channel_handle in GpuService.EstablishGpuChannel response");
  typename decltype(params->gpu_info)::BaseType* gpu_info_ptr;
  mojo::internal::Serialize<::gpu::mojom::GpuInfoPtr>(
      in_gpu_info, builder.buffer(), &gpu_info_ptr, &serialization_context_);
  params->gpu_info.Set(gpu_info_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->gpu_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null gpu_info in GpuService.EstablishGpuChannel response");
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
class GpuService_CreateGpuMemoryBuffer_ProxyToResponder {
 public:
  static GpuService::CreateGpuMemoryBufferCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<GpuService_CreateGpuMemoryBuffer_ProxyToResponder> proxy(
        new GpuService_CreateGpuMemoryBuffer_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&GpuService_CreateGpuMemoryBuffer_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~GpuService_CreateGpuMemoryBuffer_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "GpuService::CreateGpuMemoryBuffer() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  GpuService_CreateGpuMemoryBuffer_ProxyToResponder(
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
      ::ui::mojom::GpuMemoryBufferHandlePtr in_buffer_handle);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(GpuService_CreateGpuMemoryBuffer_ProxyToResponder);
};

void GpuService_CreateGpuMemoryBuffer_ProxyToResponder::Run(
    ::ui::mojom::GpuMemoryBufferHandlePtr in_buffer_handle) {
  size_t size = sizeof(::ui::mojom::internal::GpuService_CreateGpuMemoryBuffer_ResponseParams_Data);
  size += mojo::internal::PrepareToSerialize<::ui::mojom::GpuMemoryBufferHandlePtr>(
      in_buffer_handle, &serialization_context_);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kGpuService_CreateGpuMemoryBuffer_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::ui::mojom::internal::GpuService_CreateGpuMemoryBuffer_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->buffer_handle)::BaseType* buffer_handle_ptr;
  mojo::internal::Serialize<::ui::mojom::GpuMemoryBufferHandlePtr>(
      in_buffer_handle, builder.buffer(), &buffer_handle_ptr, &serialization_context_);
  params->buffer_handle.Set(buffer_handle_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->buffer_handle.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null buffer_handle in GpuService.CreateGpuMemoryBuffer response");
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

GpuServiceStub::GpuServiceStub()
    : sink_(nullptr),
      control_message_handler_(GpuService::Version_) {
}

GpuServiceStub::~GpuServiceStub() {}

bool GpuServiceStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kGpuService_EstablishGpuChannel_Name: {
      break;
    }
    case internal::kGpuService_CreateGpuMemoryBuffer_Name: {
      break;
    }
    case internal::kGpuService_DestroyGpuMemoryBuffer_Name: {
      internal::GpuService_DestroyGpuMemoryBuffer_Params_Data* params =
          reinterpret_cast<internal::GpuService_DestroyGpuMemoryBuffer_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      ::ui::mojom::GpuMemoryBufferIdPtr p_id{};
      ::gpu::SyncToken p_sync_token{};
      GpuService_DestroyGpuMemoryBuffer_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadId(&p_id))
        success = false;
      if (!input_data_view.ReadSyncToken(&p_sync_token))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "GpuService::DestroyGpuMemoryBuffer deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "GpuService::DestroyGpuMemoryBuffer");
      mojo::internal::MessageDispatchContext context(message);
      sink_->DestroyGpuMemoryBuffer(
std::move(p_id), 
std::move(p_sync_token));
      return true;
    }
  }
  return false;
}

bool GpuServiceStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kGpuService_EstablishGpuChannel_Name: {
      internal::GpuService_EstablishGpuChannel_Params_Data* params =
          reinterpret_cast<internal::GpuService_EstablishGpuChannel_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      GpuService_EstablishGpuChannel_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "GpuService::EstablishGpuChannel deserializer");
        return false;
      }
      GpuService::EstablishGpuChannelCallback callback =
          GpuService_EstablishGpuChannel_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "GpuService::EstablishGpuChannel");
      mojo::internal::MessageDispatchContext context(message);
      sink_->EstablishGpuChannel(callback);
      return true;
    }
    case internal::kGpuService_CreateGpuMemoryBuffer_Name: {
      internal::GpuService_CreateGpuMemoryBuffer_Params_Data* params =
          reinterpret_cast<internal::GpuService_CreateGpuMemoryBuffer_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      ::ui::mojom::GpuMemoryBufferIdPtr p_id{};
      gfx::Size p_size{};
      gfx::BufferFormat p_format{};
      gfx::BufferUsage p_usage{};
      uint64_t p_surface_id{};
      GpuService_CreateGpuMemoryBuffer_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadId(&p_id))
        success = false;
      if (!input_data_view.ReadSize(&p_size))
        success = false;
      if (!input_data_view.ReadFormat(&p_format))
        success = false;
      if (!input_data_view.ReadUsage(&p_usage))
        success = false;
      p_surface_id = input_data_view.surface_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "GpuService::CreateGpuMemoryBuffer deserializer");
        return false;
      }
      GpuService::CreateGpuMemoryBufferCallback callback =
          GpuService_CreateGpuMemoryBuffer_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "GpuService::CreateGpuMemoryBuffer");
      mojo::internal::MessageDispatchContext context(message);
      sink_->CreateGpuMemoryBuffer(
std::move(p_id), 
std::move(p_size), 
std::move(p_format), 
std::move(p_usage), 
std::move(p_surface_id), callback);
      return true;
    }
    case internal::kGpuService_DestroyGpuMemoryBuffer_Name: {
      break;
    }
  }
  return false;
}

GpuServiceRequestValidator::GpuServiceRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool GpuServiceRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "GpuService RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kGpuService_EstablishGpuChannel_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::GpuService_EstablishGpuChannel_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kGpuService_CreateGpuMemoryBuffer_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::GpuService_CreateGpuMemoryBuffer_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kGpuService_DestroyGpuMemoryBuffer_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::GpuService_DestroyGpuMemoryBuffer_Params_Data>(
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

GpuServiceResponseValidator::GpuServiceResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool GpuServiceResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "GpuService ResponseValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kGpuService_EstablishGpuChannel_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::GpuService_EstablishGpuChannel_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kGpuService_CreateGpuMemoryBuffer_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::GpuService_CreateGpuMemoryBuffer_ResponseParams_Data>(
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
}  // namespace ui

namespace mojo {

}  // namespace mojo


#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
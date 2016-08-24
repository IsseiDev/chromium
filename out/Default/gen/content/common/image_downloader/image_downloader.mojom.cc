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

#include "content/common/image_downloader/image_downloader.mojom.h"

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

class ImageDownloader_DownloadImage_ParamsDataView {
 public:
  ImageDownloader_DownloadImage_ParamsDataView() {}

  ImageDownloader_DownloadImage_ParamsDataView(
      internal::ImageDownloader_DownloadImage_Params_Data* data,
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
  bool is_favicon() const {
    return data_->is_favicon;
  }
  uint32_t max_bitmap_size() const {
    return data_->max_bitmap_size;
  }
  bool bypass_cache() const {
    return data_->bypass_cache;
  }
 private:
  internal::ImageDownloader_DownloadImage_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void ImageDownloader_DownloadImage_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}

class ImageDownloader_DownloadImage_ResponseParamsDataView {
 public:
  ImageDownloader_DownloadImage_ResponseParamsDataView() {}

  ImageDownloader_DownloadImage_ResponseParamsDataView(
      internal::ImageDownloader_DownloadImage_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t http_status_code() const {
    return data_->http_status_code;
  }
  inline void GetImagesDataView(
      mojo::ArrayDataView<::skia::mojom::BitmapDataView>* output);

  template <typename UserType>
  bool ReadImages(UserType* output) {
    auto pointer = data_->images.Get();
    return mojo::internal::Deserialize<mojo::Array<::skia::mojom::BitmapPtr>>(
        pointer, output, context_);
  }
  inline void GetOriginalImageSizesDataView(
      mojo::ArrayDataView<::gfx::mojom::SizeDataView>* output);

  template <typename UserType>
  bool ReadOriginalImageSizes(UserType* output) {
    auto pointer = data_->original_image_sizes.Get();
    return mojo::internal::Deserialize<mojo::Array<::gfx::mojom::SizePtr>>(
        pointer, output, context_);
  }
 private:
  internal::ImageDownloader_DownloadImage_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void ImageDownloader_DownloadImage_ResponseParamsDataView::GetImagesDataView(
    mojo::ArrayDataView<::skia::mojom::BitmapDataView>* output) {
  auto pointer = data_->images.Get();
  *output = mojo::ArrayDataView<::skia::mojom::BitmapDataView>(pointer, context_);
}
inline void ImageDownloader_DownloadImage_ResponseParamsDataView::GetOriginalImageSizesDataView(
    mojo::ArrayDataView<::gfx::mojom::SizeDataView>* output) {
  auto pointer = data_->original_image_sizes.Get();
  *output = mojo::ArrayDataView<::gfx::mojom::SizeDataView>(pointer, context_);
}


}  // namespace
const char ImageDownloader::Name_[] = "content::mojom::ImageDownloader";
const uint32_t ImageDownloader::Version_;

class ImageDownloader_DownloadImage_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ImageDownloader_DownloadImage_ForwardToCallback(
      const ImageDownloader::DownloadImageCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ImageDownloader::DownloadImageCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(ImageDownloader_DownloadImage_ForwardToCallback);
};
bool ImageDownloader_DownloadImage_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::ImageDownloader_DownloadImage_ResponseParams_Data* params =
      reinterpret_cast<internal::ImageDownloader_DownloadImage_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  int32_t p_http_status_code{};
  std::vector<SkBitmap> p_images{};
  std::vector<gfx::Size> p_original_image_sizes{};
  ImageDownloader_DownloadImage_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  p_http_status_code = input_data_view.http_status_code();
  if (!input_data_view.ReadImages(&p_images))
    success = false;
  if (!input_data_view.ReadOriginalImageSizes(&p_original_image_sizes))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "ImageDownloader::DownloadImage response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_http_status_code), 
std::move(p_images), 
std::move(p_original_image_sizes));
  }
  return true;
}

ImageDownloaderProxy::ImageDownloaderProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void ImageDownloaderProxy::DownloadImage(
    const GURL& in_url, bool in_is_favicon, uint32_t in_max_bitmap_size, bool in_bypass_cache, const DownloadImageCallback& callback) {
  size_t size = sizeof(::content::mojom::internal::ImageDownloader_DownloadImage_Params_Data);
  size += mojo::internal::PrepareToSerialize<::url::mojom::UrlPtr>(
      in_url, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kImageDownloader_DownloadImage_Name, size);

  auto params =
      ::content::mojom::internal::ImageDownloader_DownloadImage_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->url)::BaseType* url_ptr;
  mojo::internal::Serialize<::url::mojom::UrlPtr>(
      in_url, builder.buffer(), &url_ptr, &serialization_context_);
  params->url.Set(url_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in ImageDownloader.DownloadImage request");
  params->is_favicon = in_is_favicon;
  params->max_bitmap_size = in_max_bitmap_size;
  params->bypass_cache = in_bypass_cache;
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new ImageDownloader_DownloadImage_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
class ImageDownloader_DownloadImage_ProxyToResponder {
 public:
  static ImageDownloader::DownloadImageCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<ImageDownloader_DownloadImage_ProxyToResponder> proxy(
        new ImageDownloader_DownloadImage_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&ImageDownloader_DownloadImage_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~ImageDownloader_DownloadImage_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "ImageDownloader::DownloadImage() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  ImageDownloader_DownloadImage_ProxyToResponder(
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
      int32_t in_http_status_code, const std::vector<SkBitmap>& in_images, const std::vector<gfx::Size>& in_original_image_sizes);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(ImageDownloader_DownloadImage_ProxyToResponder);
};

void ImageDownloader_DownloadImage_ProxyToResponder::Run(
    int32_t in_http_status_code, const std::vector<SkBitmap>& in_images, const std::vector<gfx::Size>& in_original_image_sizes) {
  size_t size = sizeof(::content::mojom::internal::ImageDownloader_DownloadImage_ResponseParams_Data);
  size += mojo::internal::PrepareToSerialize<mojo::Array<::skia::mojom::BitmapPtr>>(
      in_images, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<mojo::Array<::gfx::mojom::SizePtr>>(
      in_original_image_sizes, &serialization_context_);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kImageDownloader_DownloadImage_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::content::mojom::internal::ImageDownloader_DownloadImage_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->http_status_code = in_http_status_code;
  typename decltype(params->images)::BaseType* images_ptr;
  const mojo::internal::ContainerValidateParams images_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::Array<::skia::mojom::BitmapPtr>>(
      in_images, builder.buffer(), &images_ptr, &images_validate_params,
      &serialization_context_);
  params->images.Set(images_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->images.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null images in ImageDownloader.DownloadImage response");
  typename decltype(params->original_image_sizes)::BaseType* original_image_sizes_ptr;
  const mojo::internal::ContainerValidateParams original_image_sizes_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::Array<::gfx::mojom::SizePtr>>(
      in_original_image_sizes, builder.buffer(), &original_image_sizes_ptr, &original_image_sizes_validate_params,
      &serialization_context_);
  params->original_image_sizes.Set(original_image_sizes_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->original_image_sizes.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null original_image_sizes in ImageDownloader.DownloadImage response");
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

ImageDownloaderStub::ImageDownloaderStub()
    : sink_(nullptr),
      control_message_handler_(ImageDownloader::Version_) {
}

ImageDownloaderStub::~ImageDownloaderStub() {}

bool ImageDownloaderStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kImageDownloader_DownloadImage_Name: {
      break;
    }
  }
  return false;
}

bool ImageDownloaderStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kImageDownloader_DownloadImage_Name: {
      internal::ImageDownloader_DownloadImage_Params_Data* params =
          reinterpret_cast<internal::ImageDownloader_DownloadImage_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      GURL p_url{};
      bool p_is_favicon{};
      uint32_t p_max_bitmap_size{};
      bool p_bypass_cache{};
      ImageDownloader_DownloadImage_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      p_is_favicon = input_data_view.is_favicon();
      p_max_bitmap_size = input_data_view.max_bitmap_size();
      p_bypass_cache = input_data_view.bypass_cache();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ImageDownloader::DownloadImage deserializer");
        return false;
      }
      ImageDownloader::DownloadImageCallback callback =
          ImageDownloader_DownloadImage_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ImageDownloader::DownloadImage");
      mojo::internal::MessageDispatchContext context(message);
      sink_->DownloadImage(
std::move(p_url), 
std::move(p_is_favicon), 
std::move(p_max_bitmap_size), 
std::move(p_bypass_cache), callback);
      return true;
    }
  }
  return false;
}

ImageDownloaderRequestValidator::ImageDownloaderRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool ImageDownloaderRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "ImageDownloader RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kImageDownloader_DownloadImage_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ImageDownloader_DownloadImage_Params_Data>(
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

ImageDownloaderResponseValidator::ImageDownloaderResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool ImageDownloaderResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "ImageDownloader ResponseValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kImageDownloader_DownloadImage_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ImageDownloader_DownloadImage_ResponseParams_Data>(
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
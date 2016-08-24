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

#include "media/mojo/interfaces/image_capture.mojom.h"

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
namespace media {
namespace mojom {

namespace {

class ImageCapture_GetCapabilities_ParamsDataView {
 public:
  ImageCapture_GetCapabilities_ParamsDataView() {}

  ImageCapture_GetCapabilities_ParamsDataView(
      internal::ImageCapture_GetCapabilities_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSourceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadSourceId(UserType* output) {
    auto pointer = data_->source_id.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::ImageCapture_GetCapabilities_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void ImageCapture_GetCapabilities_ParamsDataView::GetSourceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->source_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}

class ImageCapture_GetCapabilities_ResponseParamsDataView {
 public:
  ImageCapture_GetCapabilities_ResponseParamsDataView() {}

  ImageCapture_GetCapabilities_ResponseParamsDataView(
      internal::ImageCapture_GetCapabilities_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCapabilitiesDataView(
      PhotoCapabilitiesDataView* output);

  template <typename UserType>
  bool ReadCapabilities(UserType* output) {
    auto pointer = data_->capabilities.Get();
    return mojo::internal::Deserialize<::media::mojom::PhotoCapabilitiesPtr>(
        pointer, output, context_);
  }
 private:
  internal::ImageCapture_GetCapabilities_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void ImageCapture_GetCapabilities_ResponseParamsDataView::GetCapabilitiesDataView(
    PhotoCapabilitiesDataView* output) {
  auto pointer = data_->capabilities.Get();
  *output = PhotoCapabilitiesDataView(pointer, context_);
}


class ImageCapture_SetOptions_ParamsDataView {
 public:
  ImageCapture_SetOptions_ParamsDataView() {}

  ImageCapture_SetOptions_ParamsDataView(
      internal::ImageCapture_SetOptions_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSourceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadSourceId(UserType* output) {
    auto pointer = data_->source_id.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetSettingsDataView(
      PhotoSettingsDataView* output);

  template <typename UserType>
  bool ReadSettings(UserType* output) {
    auto pointer = data_->settings.Get();
    return mojo::internal::Deserialize<::media::mojom::PhotoSettingsPtr>(
        pointer, output, context_);
  }
 private:
  internal::ImageCapture_SetOptions_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void ImageCapture_SetOptions_ParamsDataView::GetSourceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->source_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ImageCapture_SetOptions_ParamsDataView::GetSettingsDataView(
    PhotoSettingsDataView* output) {
  auto pointer = data_->settings.Get();
  *output = PhotoSettingsDataView(pointer, context_);
}

class ImageCapture_SetOptions_ResponseParamsDataView {
 public:
  ImageCapture_SetOptions_ResponseParamsDataView() {}

  ImageCapture_SetOptions_ResponseParamsDataView(
      internal::ImageCapture_SetOptions_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::ImageCapture_SetOptions_ResponseParams_Data* data_ = nullptr;
};




class ImageCapture_TakePhoto_ParamsDataView {
 public:
  ImageCapture_TakePhoto_ParamsDataView() {}

  ImageCapture_TakePhoto_ParamsDataView(
      internal::ImageCapture_TakePhoto_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSourceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadSourceId(UserType* output) {
    auto pointer = data_->source_id.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::ImageCapture_TakePhoto_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void ImageCapture_TakePhoto_ParamsDataView::GetSourceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->source_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}

class ImageCapture_TakePhoto_ResponseParamsDataView {
 public:
  ImageCapture_TakePhoto_ResponseParamsDataView() {}

  ImageCapture_TakePhoto_ResponseParamsDataView(
      internal::ImageCapture_TakePhoto_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetBlobDataView(
      BlobDataView* output);

  template <typename UserType>
  bool ReadBlob(UserType* output) {
    auto pointer = data_->blob.Get();
    return mojo::internal::Deserialize<::media::mojom::BlobPtr>(
        pointer, output, context_);
  }
 private:
  internal::ImageCapture_TakePhoto_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void ImageCapture_TakePhoto_ResponseParamsDataView::GetBlobDataView(
    BlobDataView* output) {
  auto pointer = data_->blob.Get();
  *output = BlobDataView(pointer, context_);
}


}  // namespace// static
RangePtr Range::New() {
  RangePtr rv;
  mojo::internal::StructHelper<Range>::Initialize(&rv);
  return rv;
}

Range::Range()
    : max(),
      min(),
      current() {
}

Range::~Range() {
}// static
PhotoCapabilitiesPtr PhotoCapabilities::New() {
  PhotoCapabilitiesPtr rv;
  mojo::internal::StructHelper<PhotoCapabilities>::Initialize(&rv);
  return rv;
}

PhotoCapabilities::PhotoCapabilities()
    : iso(),
      height(),
      width(),
      zoom(),
      focus_mode() {
}

PhotoCapabilities::~PhotoCapabilities() {
}// static
Point2DPtr Point2D::New() {
  Point2DPtr rv;
  mojo::internal::StructHelper<Point2D>::Initialize(&rv);
  return rv;
}

Point2D::Point2D()
    : x(),
      y() {
}

Point2D::~Point2D() {
}// static
PhotoSettingsPtr PhotoSettings::New() {
  PhotoSettingsPtr rv;
  mojo::internal::StructHelper<PhotoSettings>::Initialize(&rv);
  return rv;
}

PhotoSettings::PhotoSettings()
    : has_zoom(),
      zoom(),
      has_width(),
      width(),
      has_height(),
      height(),
      has_focus_mode(),
      focus_mode(),
      points_of_interest() {
}

PhotoSettings::~PhotoSettings() {
}// static
BlobPtr Blob::New() {
  BlobPtr rv;
  mojo::internal::StructHelper<Blob>::Initialize(&rv);
  return rv;
}

Blob::Blob()
    : mime_type(),
      data() {
}

Blob::~Blob() {
}
const char ImageCapture::Name_[] = "media::mojom::ImageCapture";
const uint32_t ImageCapture::Version_;

class ImageCapture_GetCapabilities_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ImageCapture_GetCapabilities_ForwardToCallback(
      const ImageCapture::GetCapabilitiesCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ImageCapture::GetCapabilitiesCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(ImageCapture_GetCapabilities_ForwardToCallback);
};
bool ImageCapture_GetCapabilities_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::ImageCapture_GetCapabilities_ResponseParams_Data* params =
      reinterpret_cast<internal::ImageCapture_GetCapabilities_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  PhotoCapabilitiesPtr p_capabilities{};
  ImageCapture_GetCapabilities_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadCapabilities(&p_capabilities))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "ImageCapture::GetCapabilities response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_capabilities));
  }
  return true;
}

class ImageCapture_SetOptions_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ImageCapture_SetOptions_ForwardToCallback(
      const ImageCapture::SetOptionsCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ImageCapture::SetOptionsCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(ImageCapture_SetOptions_ForwardToCallback);
};
bool ImageCapture_SetOptions_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::ImageCapture_SetOptions_ResponseParams_Data* params =
      reinterpret_cast<internal::ImageCapture_SetOptions_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  bool p_success{};
  ImageCapture_SetOptions_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "ImageCapture::SetOptions response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_success));
  }
  return true;
}

class ImageCapture_TakePhoto_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ImageCapture_TakePhoto_ForwardToCallback(
      const ImageCapture::TakePhotoCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ImageCapture::TakePhotoCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(ImageCapture_TakePhoto_ForwardToCallback);
};
bool ImageCapture_TakePhoto_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::ImageCapture_TakePhoto_ResponseParams_Data* params =
      reinterpret_cast<internal::ImageCapture_TakePhoto_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  BlobPtr p_blob{};
  ImageCapture_TakePhoto_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadBlob(&p_blob))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "ImageCapture::TakePhoto response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_blob));
  }
  return true;
}

ImageCaptureProxy::ImageCaptureProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void ImageCaptureProxy::GetCapabilities(
    const std::string& in_source_id, const GetCapabilitiesCallback& callback) {
  size_t size = sizeof(::media::mojom::internal::ImageCapture_GetCapabilities_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_source_id, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kImageCapture_GetCapabilities_Name, size);

  auto params =
      ::media::mojom::internal::ImageCapture_GetCapabilities_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->source_id)::BaseType* source_id_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_source_id, builder.buffer(), &source_id_ptr, &serialization_context_);
  params->source_id.Set(source_id_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->source_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null source_id in ImageCapture.GetCapabilities request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new ImageCapture_GetCapabilities_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void ImageCaptureProxy::SetOptions(
    const std::string& in_source_id, PhotoSettingsPtr in_settings, const SetOptionsCallback& callback) {
  size_t size = sizeof(::media::mojom::internal::ImageCapture_SetOptions_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_source_id, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<::media::mojom::PhotoSettingsPtr>(
      in_settings, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kImageCapture_SetOptions_Name, size);

  auto params =
      ::media::mojom::internal::ImageCapture_SetOptions_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->source_id)::BaseType* source_id_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_source_id, builder.buffer(), &source_id_ptr, &serialization_context_);
  params->source_id.Set(source_id_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->source_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null source_id in ImageCapture.SetOptions request");
  typename decltype(params->settings)::BaseType* settings_ptr;
  mojo::internal::Serialize<::media::mojom::PhotoSettingsPtr>(
      in_settings, builder.buffer(), &settings_ptr, &serialization_context_);
  params->settings.Set(settings_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->settings.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null settings in ImageCapture.SetOptions request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new ImageCapture_SetOptions_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void ImageCaptureProxy::TakePhoto(
    const std::string& in_source_id, const TakePhotoCallback& callback) {
  size_t size = sizeof(::media::mojom::internal::ImageCapture_TakePhoto_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_source_id, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kImageCapture_TakePhoto_Name, size);

  auto params =
      ::media::mojom::internal::ImageCapture_TakePhoto_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->source_id)::BaseType* source_id_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_source_id, builder.buffer(), &source_id_ptr, &serialization_context_);
  params->source_id.Set(source_id_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->source_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null source_id in ImageCapture.TakePhoto request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new ImageCapture_TakePhoto_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
class ImageCapture_GetCapabilities_ProxyToResponder {
 public:
  static ImageCapture::GetCapabilitiesCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<ImageCapture_GetCapabilities_ProxyToResponder> proxy(
        new ImageCapture_GetCapabilities_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&ImageCapture_GetCapabilities_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~ImageCapture_GetCapabilities_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "ImageCapture::GetCapabilities() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  ImageCapture_GetCapabilities_ProxyToResponder(
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
      PhotoCapabilitiesPtr in_capabilities);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(ImageCapture_GetCapabilities_ProxyToResponder);
};

void ImageCapture_GetCapabilities_ProxyToResponder::Run(
    PhotoCapabilitiesPtr in_capabilities) {
  size_t size = sizeof(::media::mojom::internal::ImageCapture_GetCapabilities_ResponseParams_Data);
  size += mojo::internal::PrepareToSerialize<::media::mojom::PhotoCapabilitiesPtr>(
      in_capabilities, &serialization_context_);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kImageCapture_GetCapabilities_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::media::mojom::internal::ImageCapture_GetCapabilities_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->capabilities)::BaseType* capabilities_ptr;
  mojo::internal::Serialize<::media::mojom::PhotoCapabilitiesPtr>(
      in_capabilities, builder.buffer(), &capabilities_ptr, &serialization_context_);
  params->capabilities.Set(capabilities_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->capabilities.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null capabilities in ImageCapture.GetCapabilities response");
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
class ImageCapture_SetOptions_ProxyToResponder {
 public:
  static ImageCapture::SetOptionsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<ImageCapture_SetOptions_ProxyToResponder> proxy(
        new ImageCapture_SetOptions_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&ImageCapture_SetOptions_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~ImageCapture_SetOptions_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "ImageCapture::SetOptions() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  ImageCapture_SetOptions_ProxyToResponder(
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
      bool in_success);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(ImageCapture_SetOptions_ProxyToResponder);
};

void ImageCapture_SetOptions_ProxyToResponder::Run(
    bool in_success) {
  size_t size = sizeof(::media::mojom::internal::ImageCapture_SetOptions_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kImageCapture_SetOptions_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::media::mojom::internal::ImageCapture_SetOptions_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->success = in_success;
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
class ImageCapture_TakePhoto_ProxyToResponder {
 public:
  static ImageCapture::TakePhotoCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<ImageCapture_TakePhoto_ProxyToResponder> proxy(
        new ImageCapture_TakePhoto_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&ImageCapture_TakePhoto_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~ImageCapture_TakePhoto_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "ImageCapture::TakePhoto() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  ImageCapture_TakePhoto_ProxyToResponder(
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
      BlobPtr in_blob);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(ImageCapture_TakePhoto_ProxyToResponder);
};

void ImageCapture_TakePhoto_ProxyToResponder::Run(
    BlobPtr in_blob) {
  size_t size = sizeof(::media::mojom::internal::ImageCapture_TakePhoto_ResponseParams_Data);
  size += mojo::internal::PrepareToSerialize<::media::mojom::BlobPtr>(
      in_blob, &serialization_context_);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kImageCapture_TakePhoto_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::media::mojom::internal::ImageCapture_TakePhoto_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->blob)::BaseType* blob_ptr;
  mojo::internal::Serialize<::media::mojom::BlobPtr>(
      in_blob, builder.buffer(), &blob_ptr, &serialization_context_);
  params->blob.Set(blob_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->blob.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null blob in ImageCapture.TakePhoto response");
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

ImageCaptureStub::ImageCaptureStub()
    : sink_(nullptr),
      control_message_handler_(ImageCapture::Version_) {
}

ImageCaptureStub::~ImageCaptureStub() {}

bool ImageCaptureStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kImageCapture_GetCapabilities_Name: {
      break;
    }
    case internal::kImageCapture_SetOptions_Name: {
      break;
    }
    case internal::kImageCapture_TakePhoto_Name: {
      break;
    }
  }
  return false;
}

bool ImageCaptureStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kImageCapture_GetCapabilities_Name: {
      internal::ImageCapture_GetCapabilities_Params_Data* params =
          reinterpret_cast<internal::ImageCapture_GetCapabilities_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      std::string p_source_id{};
      ImageCapture_GetCapabilities_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadSourceId(&p_source_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ImageCapture::GetCapabilities deserializer");
        return false;
      }
      ImageCapture::GetCapabilitiesCallback callback =
          ImageCapture_GetCapabilities_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ImageCapture::GetCapabilities");
      mojo::internal::MessageDispatchContext context(message);
      sink_->GetCapabilities(
std::move(p_source_id), callback);
      return true;
    }
    case internal::kImageCapture_SetOptions_Name: {
      internal::ImageCapture_SetOptions_Params_Data* params =
          reinterpret_cast<internal::ImageCapture_SetOptions_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      std::string p_source_id{};
      PhotoSettingsPtr p_settings{};
      ImageCapture_SetOptions_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadSourceId(&p_source_id))
        success = false;
      if (!input_data_view.ReadSettings(&p_settings))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ImageCapture::SetOptions deserializer");
        return false;
      }
      ImageCapture::SetOptionsCallback callback =
          ImageCapture_SetOptions_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ImageCapture::SetOptions");
      mojo::internal::MessageDispatchContext context(message);
      sink_->SetOptions(
std::move(p_source_id), 
std::move(p_settings), callback);
      return true;
    }
    case internal::kImageCapture_TakePhoto_Name: {
      internal::ImageCapture_TakePhoto_Params_Data* params =
          reinterpret_cast<internal::ImageCapture_TakePhoto_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      std::string p_source_id{};
      ImageCapture_TakePhoto_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadSourceId(&p_source_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ImageCapture::TakePhoto deserializer");
        return false;
      }
      ImageCapture::TakePhotoCallback callback =
          ImageCapture_TakePhoto_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ImageCapture::TakePhoto");
      mojo::internal::MessageDispatchContext context(message);
      sink_->TakePhoto(
std::move(p_source_id), callback);
      return true;
    }
  }
  return false;
}

ImageCaptureRequestValidator::ImageCaptureRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool ImageCaptureRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "ImageCapture RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kImageCapture_GetCapabilities_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ImageCapture_GetCapabilities_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kImageCapture_SetOptions_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ImageCapture_SetOptions_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kImageCapture_TakePhoto_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ImageCapture_TakePhoto_Params_Data>(
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

ImageCaptureResponseValidator::ImageCaptureResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool ImageCaptureResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "ImageCapture ResponseValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kImageCapture_GetCapabilities_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ImageCapture_GetCapabilities_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kImageCapture_SetOptions_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ImageCapture_SetOptions_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kImageCapture_TakePhoto_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ImageCapture_TakePhoto_ResponseParams_Data>(
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
}  // namespace media

namespace mojo {


// static
bool StructTraits<::media::mojom::Range, ::media::mojom::RangePtr>::Read(
    ::media::mojom::RangeDataView input,
    ::media::mojom::RangePtr* output) {
  bool success = true;
  ::media::mojom::RangePtr result(::media::mojom::Range::New());
  
      result->max = input.max();
      result->min = input.min();
      result->current = input.current();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media::mojom::PhotoCapabilities, ::media::mojom::PhotoCapabilitiesPtr>::Read(
    ::media::mojom::PhotoCapabilitiesDataView input,
    ::media::mojom::PhotoCapabilitiesPtr* output) {
  bool success = true;
  ::media::mojom::PhotoCapabilitiesPtr result(::media::mojom::PhotoCapabilities::New());
  
      if (!input.ReadIso(&result->iso))
        success = false;
      if (!input.ReadHeight(&result->height))
        success = false;
      if (!input.ReadWidth(&result->width))
        success = false;
      if (!input.ReadZoom(&result->zoom))
        success = false;
      if (!input.ReadFocusMode(&result->focus_mode))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media::mojom::Point2D, ::media::mojom::Point2DPtr>::Read(
    ::media::mojom::Point2DDataView input,
    ::media::mojom::Point2DPtr* output) {
  bool success = true;
  ::media::mojom::Point2DPtr result(::media::mojom::Point2D::New());
  
      result->x = input.x();
      result->y = input.y();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media::mojom::PhotoSettings, ::media::mojom::PhotoSettingsPtr>::Read(
    ::media::mojom::PhotoSettingsDataView input,
    ::media::mojom::PhotoSettingsPtr* output) {
  bool success = true;
  ::media::mojom::PhotoSettingsPtr result(::media::mojom::PhotoSettings::New());
  
      result->has_zoom = input.has_zoom();
      result->zoom = input.zoom();
      result->has_width = input.has_width();
      result->width = input.width();
      result->has_height = input.has_height();
      result->height = input.height();
      result->has_focus_mode = input.has_focus_mode();
      if (!input.ReadFocusMode(&result->focus_mode))
        success = false;
      if (!input.ReadPointsOfInterest(&result->points_of_interest))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media::mojom::Blob, ::media::mojom::BlobPtr>::Read(
    ::media::mojom::BlobDataView input,
    ::media::mojom::BlobPtr* output) {
  bool success = true;
  ::media::mojom::BlobPtr result(::media::mojom::Blob::New());
  
      if (!input.ReadMimeType(&result->mime_type))
        success = false;
      if (!input.ReadData(&result->data))
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
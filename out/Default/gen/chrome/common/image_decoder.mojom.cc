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

#include "chrome/common/image_decoder.mojom.h"

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

class ImageDecoder_DecodeImage_ParamsDataView {
 public:
  ImageDecoder_DecodeImage_ParamsDataView() {}

  ImageDecoder_DecodeImage_ParamsDataView(
      internal::ImageDecoder_DecodeImage_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetEncodedDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  bool ReadEncodedData(UserType* output) {
    auto pointer = data_->encoded_data.Get();
    return mojo::internal::Deserialize<mojo::Array<uint8_t>>(
        pointer, output, context_);
  }
  template <typename UserType>
  bool ReadCodec(UserType* output) const {
    auto data_value = data_->codec;
    return mojo::internal::Deserialize<::mojom::ImageCodec>(
        data_value, output);
  }

  ::mojom::ImageCodec codec() const {
    return static_cast<::mojom::ImageCodec>(data_->codec);
  }
  bool shrink_to_fit() const {
    return data_->shrink_to_fit;
  }
 private:
  internal::ImageDecoder_DecodeImage_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void ImageDecoder_DecodeImage_ParamsDataView::GetEncodedDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->encoded_data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}

class ImageDecoder_DecodeImage_ResponseParamsDataView {
 public:
  ImageDecoder_DecodeImage_ResponseParamsDataView() {}

  ImageDecoder_DecodeImage_ResponseParamsDataView(
      internal::ImageDecoder_DecodeImage_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDecodedImageDataView(
      ::skia::mojom::BitmapDataView* output);

  template <typename UserType>
  bool ReadDecodedImage(UserType* output) {
    auto pointer = data_->decoded_image.Get();
    return mojo::internal::Deserialize<::skia::mojom::BitmapPtr>(
        pointer, output, context_);
  }
 private:
  internal::ImageDecoder_DecodeImage_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void ImageDecoder_DecodeImage_ResponseParamsDataView::GetDecodedImageDataView(
    ::skia::mojom::BitmapDataView* output) {
  auto pointer = data_->decoded_image.Get();
  *output = ::skia::mojom::BitmapDataView(pointer, context_);
}


}  // namespace
const char ImageDecoder::Name_[] = "mojom::ImageDecoder";
const uint32_t ImageDecoder::Version_;

class ImageDecoder_DecodeImage_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ImageDecoder_DecodeImage_ForwardToCallback(
      const ImageDecoder::DecodeImageCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ImageDecoder::DecodeImageCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(ImageDecoder_DecodeImage_ForwardToCallback);
};
bool ImageDecoder_DecodeImage_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::ImageDecoder_DecodeImage_ResponseParams_Data* params =
      reinterpret_cast<internal::ImageDecoder_DecodeImage_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  SkBitmap p_decoded_image{};
  ImageDecoder_DecodeImage_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadDecodedImage(&p_decoded_image))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "ImageDecoder::DecodeImage response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_decoded_image));
  }
  return true;
}

ImageDecoderProxy::ImageDecoderProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void ImageDecoderProxy::DecodeImage(
    mojo::Array<uint8_t> in_encoded_data, ImageCodec in_codec, bool in_shrink_to_fit, const DecodeImageCallback& callback) {
  size_t size = sizeof(::mojom::internal::ImageDecoder_DecodeImage_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::Array<uint8_t>>(
      in_encoded_data, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kImageDecoder_DecodeImage_Name, size);

  auto params =
      ::mojom::internal::ImageDecoder_DecodeImage_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->encoded_data)::BaseType* encoded_data_ptr;
  const mojo::internal::ContainerValidateParams encoded_data_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::Array<uint8_t>>(
      in_encoded_data, builder.buffer(), &encoded_data_ptr, &encoded_data_validate_params,
      &serialization_context_);
  params->encoded_data.Set(encoded_data_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->encoded_data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null encoded_data in ImageDecoder.DecodeImage request");
  mojo::internal::Serialize<::mojom::ImageCodec>(
      in_codec, &params->codec);
  params->shrink_to_fit = in_shrink_to_fit;
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new ImageDecoder_DecodeImage_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
class ImageDecoder_DecodeImage_ProxyToResponder {
 public:
  static ImageDecoder::DecodeImageCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<ImageDecoder_DecodeImage_ProxyToResponder> proxy(
        new ImageDecoder_DecodeImage_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&ImageDecoder_DecodeImage_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~ImageDecoder_DecodeImage_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "ImageDecoder::DecodeImage() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  ImageDecoder_DecodeImage_ProxyToResponder(
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
      const SkBitmap& in_decoded_image);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(ImageDecoder_DecodeImage_ProxyToResponder);
};

void ImageDecoder_DecodeImage_ProxyToResponder::Run(
    const SkBitmap& in_decoded_image) {
  size_t size = sizeof(::mojom::internal::ImageDecoder_DecodeImage_ResponseParams_Data);
  size += mojo::internal::PrepareToSerialize<::skia::mojom::BitmapPtr>(
      in_decoded_image, &serialization_context_);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kImageDecoder_DecodeImage_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::mojom::internal::ImageDecoder_DecodeImage_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->decoded_image)::BaseType* decoded_image_ptr;
  mojo::internal::Serialize<::skia::mojom::BitmapPtr>(
      in_decoded_image, builder.buffer(), &decoded_image_ptr, &serialization_context_);
  params->decoded_image.Set(decoded_image_ptr);
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

ImageDecoderStub::ImageDecoderStub()
    : sink_(nullptr),
      control_message_handler_(ImageDecoder::Version_) {
}

ImageDecoderStub::~ImageDecoderStub() {}

bool ImageDecoderStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kImageDecoder_DecodeImage_Name: {
      break;
    }
  }
  return false;
}

bool ImageDecoderStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kImageDecoder_DecodeImage_Name: {
      internal::ImageDecoder_DecodeImage_Params_Data* params =
          reinterpret_cast<internal::ImageDecoder_DecodeImage_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      mojo::Array<uint8_t> p_encoded_data{};
      ImageCodec p_codec{};
      bool p_shrink_to_fit{};
      ImageDecoder_DecodeImage_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadEncodedData(&p_encoded_data))
        success = false;
      if (!input_data_view.ReadCodec(&p_codec))
        success = false;
      p_shrink_to_fit = input_data_view.shrink_to_fit();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ImageDecoder::DecodeImage deserializer");
        return false;
      }
      ImageDecoder::DecodeImageCallback callback =
          ImageDecoder_DecodeImage_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ImageDecoder::DecodeImage");
      mojo::internal::MessageDispatchContext context(message);
      sink_->DecodeImage(
std::move(p_encoded_data), 
std::move(p_codec), 
std::move(p_shrink_to_fit), callback);
      return true;
    }
  }
  return false;
}

ImageDecoderRequestValidator::ImageDecoderRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool ImageDecoderRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "ImageDecoder RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kImageDecoder_DecodeImage_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ImageDecoder_DecodeImage_Params_Data>(
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

ImageDecoderResponseValidator::ImageDecoderResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool ImageDecoderResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "ImageDecoder ResponseValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kImageDecoder_DecodeImage_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ImageDecoder_DecodeImage_ResponseParams_Data>(
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

}  // namespace mojo


#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
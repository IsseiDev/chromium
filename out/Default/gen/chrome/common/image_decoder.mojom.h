// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_IMAGE_DECODER_MOJOM_H_
#define CHROME_COMMON_IMAGE_DECODER_MOJOM_H_

#include <stdint.h>

#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/optional.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/lib/control_message_proxy.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/lib/union_accessor.h"
#include "mojo/public/cpp/bindings/map.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/message_filter.h"
#include "mojo/public/cpp/bindings/native_struct.h"
#include "mojo/public/cpp/bindings/native_struct_data_view.h"
#include "mojo/public/cpp/bindings/no_interface.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "chrome/common/image_decoder.mojom-shared.h"
#include "skia/public/interfaces/bitmap.mojom.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"
#include "third_party/skia/include/core/SkBitmap.h"
#include "third_party/skia/include/core/SkImageFilter.h"


namespace mojom {
class ImageDecoder;
using ImageDecoderPtr = mojo::InterfacePtr<ImageDecoder>;
using ImageDecoderPtrInfo = mojo::InterfacePtrInfo<ImageDecoder>;
using ImageDecoderRequest = mojo::InterfaceRequest<ImageDecoder>;
using ImageDecoderAssociatedPtr =
    mojo::AssociatedInterfacePtr<ImageDecoder>;
using ImageDecoderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ImageDecoder>;
using ImageDecoderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ImageDecoder>;


class ImageDecoderProxy;
class ImageDecoderStub;

class ImageDecoderRequestValidator;
class ImageDecoderResponseValidator;

class  ImageDecoder {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = ImageDecoderProxy;
  using Stub_ = ImageDecoderStub;

  using RequestValidator_ = ImageDecoderRequestValidator;
  using ResponseValidator_ = ImageDecoderResponseValidator;
  virtual ~ImageDecoder() {}


  using DecodeImageCallback = base::Callback<void(const SkBitmap&)>;
  virtual void DecodeImage(mojo::Array<uint8_t> encoded_data, ImageCodec codec, bool shrink_to_fit, const DecodeImageCallback& callback) = 0;
};

class  ImageDecoderProxy
    : public ImageDecoder,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit ImageDecoderProxy(mojo::MessageReceiverWithResponder* receiver);
  void DecodeImage(mojo::Array<uint8_t> encoded_data, ImageCodec codec, bool shrink_to_fit, const DecodeImageCallback& callback) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class  ImageDecoderStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  ImageDecoderStub();
  ~ImageDecoderStub() override;
  void set_sink(ImageDecoder* sink) { sink_ = sink; }
  ImageDecoder* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  ImageDecoder* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  ImageDecoderRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit ImageDecoderRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  ImageDecoderResponseValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit ImageDecoderResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom

namespace mojo {

}  // namespace mojo

#endif  // CHROME_COMMON_IMAGE_DECODER_MOJOM_H_
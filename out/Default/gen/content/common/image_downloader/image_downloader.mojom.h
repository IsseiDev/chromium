// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_IMAGE_DOWNLOADER_IMAGE_DOWNLOADER_MOJOM_H_
#define CONTENT_COMMON_IMAGE_DOWNLOADER_IMAGE_DOWNLOADER_MOJOM_H_

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
#include "content/common/image_downloader/image_downloader.mojom-shared.h"
#include "skia/public/interfaces/bitmap.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
#include "url/mojo/url.mojom.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"
#include "gpu/config/dx_diag_node.h"
#include "base/values.h"
#include "cc/output/compositor_frame.h"
#include "third_party/skia/include/core/SkImageFilter.h"
#include "gpu/command_buffer/common/sync_token.h"
#include "cc/output/filter_operation.h"
#include "ui/display/display.h"
#include "ui/gfx/geometry/vector2d_f.h"
#include "ui/gfx/geometry/insets.h"
#include "base/version.h"
#include "gpu/config/gpu_info.h"
#include "base/time/time.h"
#include "cc/output/filter_operations.h"
#include "base/strings/string16.h"
#include "ui/gfx/selection_bound.h"
#include "content/common/bluetooth/web_bluetooth_device_id.h"
#include "ui/gfx/geometry/size.h"
#include "base/optional.h"
#include "content/common/resource_request_completion_status.h"
#include "services/shell/public/cpp/capabilities.h"
#include "ui/gfx/geometry/point.h"
#include "ui/events/latency_info.h"
#include "content/public/common/resource_response.h"
#include "cc/output/begin_frame_args.h"
#include "cc/surfaces/surface_sequence.h"
#include "cc/output/compositor_frame_metadata.h"
#include "ui/events/event.h"
#include "cc/quads/draw_quad.h"
#include "base/files/file_path.h"
#include "ui/gfx/geometry/rect_f.h"
#include "cc/quads/render_pass.h"
#include "gpu/command_buffer/common/mailbox_holder.h"
#include "cc/resources/returned_resource.h"
#include "ui/gfx/buffer_types.h"
#include "url/origin.h"
#include "ui/gfx/geometry/point_f.h"
#include "gpu/command_buffer/common/mailbox.h"
#include "cc/input/selection.h"
#include "third_party/skia/include/core/SkBitmap.h"
#include "ui/gfx/native_widget_types.h"
#include "url/gurl.h"
#include "cc/quads/shared_quad_state.h"
#include "cc/resources/transferable_resource.h"
#include "ui/gfx/transform.h"
#include "device/bluetooth/bluetooth_uuid.h"
#include "services/shell/public/cpp/identity.h"
#include "content/common/resource_request.h"
#include "ui/gfx/geometry/rect.h"
#include "gpu/command_buffer/common/capabilities.h"
#include "cc/surfaces/surface_id.h"
#include "ui/gfx/geometry/vector2d.h"
#include "cc/quads/render_pass_id.h"
#include "content/common/content_export.h"


namespace content {
namespace mojom {
class ImageDownloader;
using ImageDownloaderPtr = mojo::InterfacePtr<ImageDownloader>;
using ImageDownloaderPtrInfo = mojo::InterfacePtrInfo<ImageDownloader>;
using ImageDownloaderRequest = mojo::InterfaceRequest<ImageDownloader>;
using ImageDownloaderAssociatedPtr =
    mojo::AssociatedInterfacePtr<ImageDownloader>;
using ImageDownloaderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ImageDownloader>;
using ImageDownloaderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ImageDownloader>;


class ImageDownloaderProxy;
class ImageDownloaderStub;

class ImageDownloaderRequestValidator;
class ImageDownloaderResponseValidator;

class CONTENT_EXPORT ImageDownloader {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = ImageDownloaderProxy;
  using Stub_ = ImageDownloaderStub;

  using RequestValidator_ = ImageDownloaderRequestValidator;
  using ResponseValidator_ = ImageDownloaderResponseValidator;
  virtual ~ImageDownloader() {}


  using DownloadImageCallback = base::Callback<void(int32_t, const std::vector<SkBitmap>&, const std::vector<gfx::Size>&)>;
  virtual void DownloadImage(const GURL& url, bool is_favicon, uint32_t max_bitmap_size, bool bypass_cache, const DownloadImageCallback& callback) = 0;
};

class CONTENT_EXPORT ImageDownloaderProxy
    : public ImageDownloader,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit ImageDownloaderProxy(mojo::MessageReceiverWithResponder* receiver);
  void DownloadImage(const GURL& url, bool is_favicon, uint32_t max_bitmap_size, bool bypass_cache, const DownloadImageCallback& callback) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class CONTENT_EXPORT ImageDownloaderStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  ImageDownloaderStub();
  ~ImageDownloaderStub() override;
  void set_sink(ImageDownloader* sink) { sink_ = sink; }
  ImageDownloader* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  ImageDownloader* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class CONTENT_EXPORT ImageDownloaderRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit ImageDownloaderRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT ImageDownloaderResponseValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit ImageDownloaderResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace content

namespace mojo {

}  // namespace mojo

#endif  // CONTENT_COMMON_IMAGE_DOWNLOADER_IMAGE_DOWNLOADER_MOJOM_H_
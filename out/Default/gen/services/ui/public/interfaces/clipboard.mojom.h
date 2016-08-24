// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_CLIPBOARD_MOJOM_H_
#define SERVICES_UI_PUBLIC_INTERFACES_CLIPBOARD_MOJOM_H_

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
#include "services/ui/public/interfaces/clipboard.mojom-shared.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"
#include "gpu/config/dx_diag_node.h"
#include "ui/gfx/geometry/point.h"
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
#include "gpu/command_buffer/common/capabilities.h"
#include "ui/gfx/geometry/size.h"
#include "base/values.h"
#include "ui/events/latency_info.h"
#include "cc/output/begin_frame_args.h"
#include "cc/output/compositor_frame_metadata.h"
#include "ui/events/event.h"
#include "cc/quads/draw_quad.h"
#include "base/files/file_path.h"
#include "ui/gfx/geometry/rect_f.h"
#include "cc/quads/render_pass.h"
#include "gpu/command_buffer/common/mailbox_holder.h"
#include "cc/resources/returned_resource.h"
#include "ui/gfx/buffer_types.h"
#include "ui/gfx/geometry/point_f.h"
#include "gpu/command_buffer/common/mailbox.h"
#include "cc/input/selection.h"
#include "third_party/skia/include/core/SkBitmap.h"
#include "ui/gfx/native_widget_types.h"
#include "cc/quads/shared_quad_state.h"
#include "cc/resources/transferable_resource.h"
#include "ui/gfx/transform.h"
#include "ui/gfx/geometry/rect.h"
#include "cc/surfaces/surface_sequence.h"
#include "cc/surfaces/surface_id.h"
#include "ui/gfx/geometry/vector2d.h"
#include "cc/quads/render_pass_id.h"


namespace ui {
namespace mojom {
extern const char* kMimeTypeHTML;
extern const char* kMimeTypeMozillaURL;
extern const char* kMimeTypePNG;
extern const char* kMimeTypeRTF;
extern const char* kMimeTypeText;
extern const char* kMimeTypeURIList;
extern const char* kMimeTypeURL;
class Clipboard;
using ClipboardPtr = mojo::InterfacePtr<Clipboard>;
using ClipboardPtrInfo = mojo::InterfacePtrInfo<Clipboard>;
using ClipboardRequest = mojo::InterfaceRequest<Clipboard>;
using ClipboardAssociatedPtr =
    mojo::AssociatedInterfacePtr<Clipboard>;
using ClipboardAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Clipboard>;
using ClipboardAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Clipboard>;


class ClipboardProxy;
class ClipboardStub;

class ClipboardRequestValidator;
class ClipboardResponseValidator;

class  Clipboard {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = true;

  using Proxy_ = ClipboardProxy;
  using Stub_ = ClipboardStub;

  using RequestValidator_ = ClipboardRequestValidator;
  using ResponseValidator_ = ClipboardResponseValidator;
  using Type = Clipboard_Type;
  virtual ~Clipboard() {}

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool GetSequenceNumber(Clipboard::Type clipboard_type, uint64_t* sequence);

  using GetSequenceNumberCallback = base::Callback<void(uint64_t)>;
  virtual void GetSequenceNumber(Clipboard::Type clipboard_type, const GetSequenceNumberCallback& callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool GetAvailableMimeTypes(Clipboard::Type clipboard_types, uint64_t* sequence, mojo::Array<mojo::String>* types);

  using GetAvailableMimeTypesCallback = base::Callback<void(uint64_t, mojo::Array<mojo::String>)>;
  virtual void GetAvailableMimeTypes(Clipboard::Type clipboard_types, const GetAvailableMimeTypesCallback& callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool ReadClipboardData(Clipboard::Type clipboard_type, const mojo::String& mime_type, uint64_t* sequence, mojo::Array<uint8_t>* data);

  using ReadClipboardDataCallback = base::Callback<void(uint64_t, mojo::Array<uint8_t>)>;
  virtual void ReadClipboardData(Clipboard::Type clipboard_type, const mojo::String& mime_type, const ReadClipboardDataCallback& callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool WriteClipboardData(Clipboard::Type clipboard_type, mojo::Map<mojo::String, mojo::Array<uint8_t>> data, uint64_t* sequence);

  using WriteClipboardDataCallback = base::Callback<void(uint64_t)>;
  virtual void WriteClipboardData(Clipboard::Type clipboard_type, mojo::Map<mojo::String, mojo::Array<uint8_t>> data, const WriteClipboardDataCallback& callback) = 0;
};

class  ClipboardProxy
    : public Clipboard,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit ClipboardProxy(mojo::MessageReceiverWithResponder* receiver);
  bool GetSequenceNumber(Clipboard::Type clipboard_type, uint64_t* sequence) override;
  void GetSequenceNumber(Clipboard::Type clipboard_type, const GetSequenceNumberCallback& callback) override;
  bool GetAvailableMimeTypes(Clipboard::Type clipboard_types, uint64_t* sequence, mojo::Array<mojo::String>* types) override;
  void GetAvailableMimeTypes(Clipboard::Type clipboard_types, const GetAvailableMimeTypesCallback& callback) override;
  bool ReadClipboardData(Clipboard::Type clipboard_type, const mojo::String& mime_type, uint64_t* sequence, mojo::Array<uint8_t>* data) override;
  void ReadClipboardData(Clipboard::Type clipboard_type, const mojo::String& mime_type, const ReadClipboardDataCallback& callback) override;
  bool WriteClipboardData(Clipboard::Type clipboard_type, mojo::Map<mojo::String, mojo::Array<uint8_t>> data, uint64_t* sequence) override;
  void WriteClipboardData(Clipboard::Type clipboard_type, mojo::Map<mojo::String, mojo::Array<uint8_t>> data, const WriteClipboardDataCallback& callback) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class  ClipboardStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  ClipboardStub();
  ~ClipboardStub() override;
  void set_sink(Clipboard* sink) { sink_ = sink; }
  Clipboard* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  Clipboard* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  ClipboardRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit ClipboardRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  ClipboardResponseValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit ClipboardResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace ui

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_UI_PUBLIC_INTERFACES_CLIPBOARD_MOJOM_H_
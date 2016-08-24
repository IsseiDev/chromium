// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_AUDIO_OUTPUT_MOJOM_H_
#define MEDIA_MOJO_INTERFACES_AUDIO_OUTPUT_MOJOM_H_

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
#include "media/mojo/interfaces/audio_output.mojom-shared.h"
#include "media/mojo/interfaces/audio_parameters.mojom.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"
#include "base/values.h"
#include "ui/gfx/geometry/vector2d.h"
#include "url/gurl.h"
#include "base/files/file_path.h"
#include "ui/gfx/geometry/point.h"
#include "media/base/pipeline_status.h"
#include "base/version.h"
#include "ui/gfx/geometry/vector2d_f.h"
#include "media/base/audio_parameters.h"
#include "services/shell/public/cpp/capabilities.h"
#include "base/strings/string16.h"
#include "ui/gfx/geometry/rect.h"
#include "base/time/time.h"
#include "ui/gfx/geometry/point_f.h"
#include "ui/gfx/geometry/insets.h"
#include "ui/gfx/geometry/size.h"
#include "services/shell/public/cpp/identity.h"
#include "ui/gfx/geometry/rect_f.h"


namespace media {
namespace mojom {
class AudioOutputStream;
using AudioOutputStreamPtr = mojo::InterfacePtr<AudioOutputStream>;
using AudioOutputStreamPtrInfo = mojo::InterfacePtrInfo<AudioOutputStream>;
using AudioOutputStreamRequest = mojo::InterfaceRequest<AudioOutputStream>;
using AudioOutputStreamAssociatedPtr =
    mojo::AssociatedInterfacePtr<AudioOutputStream>;
using AudioOutputStreamAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<AudioOutputStream>;
using AudioOutputStreamAssociatedRequest =
    mojo::AssociatedInterfaceRequest<AudioOutputStream>;

class AudioOutput;
using AudioOutputPtr = mojo::InterfacePtr<AudioOutput>;
using AudioOutputPtrInfo = mojo::InterfacePtrInfo<AudioOutput>;
using AudioOutputRequest = mojo::InterfaceRequest<AudioOutput>;
using AudioOutputAssociatedPtr =
    mojo::AssociatedInterfacePtr<AudioOutput>;
using AudioOutputAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<AudioOutput>;
using AudioOutputAssociatedRequest =
    mojo::AssociatedInterfaceRequest<AudioOutput>;


class AudioOutputStreamProxy;
class AudioOutputStreamStub;

class AudioOutputStreamRequestValidator;

class  AudioOutputStream {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = AudioOutputStreamProxy;
  using Stub_ = AudioOutputStreamStub;

  using RequestValidator_ = AudioOutputStreamRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~AudioOutputStream() {}

  virtual void Close() = 0;
};

class AudioOutputProxy;
class AudioOutputStub;

class AudioOutputRequestValidator;
class AudioOutputResponseValidator;

class  AudioOutput {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = AudioOutputProxy;
  using Stub_ = AudioOutputStub;

  using RequestValidator_ = AudioOutputRequestValidator;
  using ResponseValidator_ = AudioOutputResponseValidator;
  virtual ~AudioOutput() {}


  using CreateStreamCallback = base::Callback<void(int32_t, AudioOutputStreamPtr, mojo::ScopedSharedBufferHandle, mojo::ScopedHandle)>;
  virtual void CreateStream(int32_t stream_id, const media::AudioParameters& params, const CreateStreamCallback& callback) = 0;
};

class  AudioOutputStreamProxy
    : public AudioOutputStream,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit AudioOutputStreamProxy(mojo::MessageReceiverWithResponder* receiver);
  void Close() override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class  AudioOutputProxy
    : public AudioOutput,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit AudioOutputProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateStream(int32_t stream_id, const media::AudioParameters& params, const CreateStreamCallback& callback) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class  AudioOutputStreamStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  AudioOutputStreamStub();
  ~AudioOutputStreamStub() override;
  void set_sink(AudioOutputStream* sink) { sink_ = sink; }
  AudioOutputStream* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  AudioOutputStream* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  AudioOutputStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  AudioOutputStub();
  ~AudioOutputStub() override;
  void set_sink(AudioOutput* sink) { sink_ = sink; }
  AudioOutput* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  AudioOutput* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  AudioOutputStreamRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit AudioOutputStreamRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  AudioOutputRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit AudioOutputRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  AudioOutputResponseValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit AudioOutputResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace media

namespace mojo {

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_AUDIO_OUTPUT_MOJOM_H_
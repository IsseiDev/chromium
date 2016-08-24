// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_IME_MOJOM_H_
#define SERVICES_UI_PUBLIC_INTERFACES_IME_MOJOM_H_

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
#include "services/ui/public/interfaces/ime.mojom-shared.h"
#include "ui/events/mojo/event.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
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
class IMEDriver;
using IMEDriverPtr = mojo::InterfacePtr<IMEDriver>;
using IMEDriverPtrInfo = mojo::InterfacePtrInfo<IMEDriver>;
using IMEDriverRequest = mojo::InterfaceRequest<IMEDriver>;
using IMEDriverAssociatedPtr =
    mojo::AssociatedInterfacePtr<IMEDriver>;
using IMEDriverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<IMEDriver>;
using IMEDriverAssociatedRequest =
    mojo::AssociatedInterfaceRequest<IMEDriver>;

class IMEServer;
using IMEServerPtr = mojo::InterfacePtr<IMEServer>;
using IMEServerPtrInfo = mojo::InterfacePtrInfo<IMEServer>;
using IMEServerRequest = mojo::InterfaceRequest<IMEServer>;
using IMEServerAssociatedPtr =
    mojo::AssociatedInterfacePtr<IMEServer>;
using IMEServerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<IMEServer>;
using IMEServerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<IMEServer>;

class IMERegistrar;
using IMERegistrarPtr = mojo::InterfacePtr<IMERegistrar>;
using IMERegistrarPtrInfo = mojo::InterfacePtrInfo<IMERegistrar>;
using IMERegistrarRequest = mojo::InterfaceRequest<IMERegistrar>;
using IMERegistrarAssociatedPtr =
    mojo::AssociatedInterfacePtr<IMERegistrar>;
using IMERegistrarAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<IMERegistrar>;
using IMERegistrarAssociatedRequest =
    mojo::AssociatedInterfaceRequest<IMERegistrar>;

class InputMethod;
using InputMethodPtr = mojo::InterfacePtr<InputMethod>;
using InputMethodPtrInfo = mojo::InterfacePtrInfo<InputMethod>;
using InputMethodRequest = mojo::InterfaceRequest<InputMethod>;
using InputMethodAssociatedPtr =
    mojo::AssociatedInterfacePtr<InputMethod>;
using InputMethodAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<InputMethod>;
using InputMethodAssociatedRequest =
    mojo::AssociatedInterfaceRequest<InputMethod>;

class TextInputClient;
using TextInputClientPtr = mojo::InterfacePtr<TextInputClient>;
using TextInputClientPtrInfo = mojo::InterfacePtrInfo<TextInputClient>;
using TextInputClientRequest = mojo::InterfaceRequest<TextInputClient>;
using TextInputClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<TextInputClient>;
using TextInputClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<TextInputClient>;
using TextInputClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<TextInputClient>;

class CompositionEvent;
class CompositionEventDataView;
using CompositionEventPtr = mojo::StructPtr<CompositionEvent>;


class IMEDriverProxy;
class IMEDriverStub;

class IMEDriverRequestValidator;

class  IMEDriver {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = IMEDriverProxy;
  using Stub_ = IMEDriverStub;

  using RequestValidator_ = IMEDriverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~IMEDriver() {}

  virtual void StartSession(int32_t session_id, TextInputClientPtr client, InputMethodRequest input_method) = 0;

  virtual void CancelSession(int32_t session_id) = 0;
};

class IMEServerProxy;
class IMEServerStub;

class IMEServerRequestValidator;

class  IMEServer {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = IMEServerProxy;
  using Stub_ = IMEServerStub;

  using RequestValidator_ = IMEServerRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~IMEServer() {}

  virtual void StartSession(TextInputClientPtr client, InputMethodRequest input_method) = 0;
};

class IMERegistrarProxy;
class IMERegistrarStub;

class IMERegistrarRequestValidator;

class  IMERegistrar {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = IMERegistrarProxy;
  using Stub_ = IMERegistrarStub;

  using RequestValidator_ = IMERegistrarRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~IMERegistrar() {}

  virtual void RegisterDriver(IMEDriverPtr driver) = 0;
};

class InputMethodProxy;
class InputMethodStub;

class InputMethodRequestValidator;

class  InputMethod {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = InputMethodProxy;
  using Stub_ = InputMethodStub;

  using RequestValidator_ = InputMethodRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~InputMethod() {}

  virtual void OnTextInputModeChanged(TextInputMode text_input_mode) = 0;

  virtual void OnTextInputTypeChanged(TextInputType text_input_type) = 0;

  virtual void OnCaretBoundsChanged(const gfx::Rect& caret_bounds) = 0;

  virtual void ProcessKeyEvent(std::unique_ptr<ui::Event> key_event) = 0;

  virtual void CancelComposition() = 0;
};

class TextInputClientProxy;
class TextInputClientStub;

class TextInputClientRequestValidator;

class  TextInputClient {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = TextInputClientProxy;
  using Stub_ = TextInputClientStub;

  using RequestValidator_ = TextInputClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~TextInputClient() {}

  virtual void OnCompositionEvent(CompositionEventPtr event) = 0;
};

class  IMEDriverProxy
    : public IMEDriver,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit IMEDriverProxy(mojo::MessageReceiverWithResponder* receiver);
  void StartSession(int32_t session_id, TextInputClientPtr client, InputMethodRequest input_method) override;
  void CancelSession(int32_t session_id) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class  IMEServerProxy
    : public IMEServer,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit IMEServerProxy(mojo::MessageReceiverWithResponder* receiver);
  void StartSession(TextInputClientPtr client, InputMethodRequest input_method) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class  IMERegistrarProxy
    : public IMERegistrar,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit IMERegistrarProxy(mojo::MessageReceiverWithResponder* receiver);
  void RegisterDriver(IMEDriverPtr driver) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class  InputMethodProxy
    : public InputMethod,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit InputMethodProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnTextInputModeChanged(TextInputMode text_input_mode) override;
  void OnTextInputTypeChanged(TextInputType text_input_type) override;
  void OnCaretBoundsChanged(const gfx::Rect& caret_bounds) override;
  void ProcessKeyEvent(std::unique_ptr<ui::Event> key_event) override;
  void CancelComposition() override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class  TextInputClientProxy
    : public TextInputClient,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit TextInputClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnCompositionEvent(CompositionEventPtr event) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class  IMEDriverStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  IMEDriverStub();
  ~IMEDriverStub() override;
  void set_sink(IMEDriver* sink) { sink_ = sink; }
  IMEDriver* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  IMEDriver* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  IMEServerStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  IMEServerStub();
  ~IMEServerStub() override;
  void set_sink(IMEServer* sink) { sink_ = sink; }
  IMEServer* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  IMEServer* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  IMERegistrarStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  IMERegistrarStub();
  ~IMERegistrarStub() override;
  void set_sink(IMERegistrar* sink) { sink_ = sink; }
  IMERegistrar* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  IMERegistrar* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  InputMethodStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  InputMethodStub();
  ~InputMethodStub() override;
  void set_sink(InputMethod* sink) { sink_ = sink; }
  InputMethod* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  InputMethod* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  TextInputClientStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  TextInputClientStub();
  ~TextInputClientStub() override;
  void set_sink(TextInputClient* sink) { sink_ = sink; }
  TextInputClient* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  TextInputClient* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  IMEDriverRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit IMEDriverRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  IMEServerRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit IMEServerRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  IMERegistrarRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit IMERegistrarRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  InputMethodRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit InputMethodRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  TextInputClientRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit TextInputClientRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





class  CompositionEvent {
 public:
  using DataView = CompositionEventDataView;
  using Data_ = internal::CompositionEvent_Data;

  static CompositionEventPtr New();

  template <typename U>
  static CompositionEventPtr From(const U& u) {
    return mojo::TypeConverter<CompositionEventPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CompositionEvent>::Convert(*this);
  }

  CompositionEvent();
  ~CompositionEvent();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CompositionEventPtr>
  CompositionEventPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CompositionEvent>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        CompositionEventPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        CompositionEventPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  CompositionEventType type;
  base::Optional<std::unique_ptr<ui::Event>> key_event;
 private:
  DISALLOW_COPY_AND_ASSIGN(CompositionEvent);
};

class CompositionEventDataView {
 public:
  CompositionEventDataView() {}

  CompositionEventDataView(
      internal::CompositionEvent_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::ui::mojom::CompositionEventType>(
        data_value, output);
  }

  ::ui::mojom::CompositionEventType type() const {
    return static_cast<::ui::mojom::CompositionEventType>(data_->type);
  }
  inline void GetKeyEventDataView(
      ::ui::mojom::EventDataView* output);

  template <typename UserType>
  bool ReadKeyEvent(UserType* output) {
    auto pointer = data_->key_event.Get();
    return mojo::internal::Deserialize<::ui::mojom::EventPtr>(
        pointer, output, context_);
  }
 private:
  internal::CompositionEvent_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace ui

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::ui::mojom::CompositionEventDataView> {
  using MojomType = ::ui::mojom::CompositionEventPtr;
};
}  // namespace internal
}  // namespace mojo

namespace ui {
namespace mojom {


template <typename StructPtrType>
CompositionEventPtr CompositionEvent::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->type = mojo::internal::Clone(type);
  rv->key_event = mojo::internal::Clone(key_event);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CompositionEvent>::value>::type*>
bool CompositionEvent::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->type, other.type))
    return false;
  if (!mojo::internal::Equals(this->key_event, other.key_event))
    return false;
  return true;
}

inline void CompositionEventDataView::GetKeyEventDataView(
    ::ui::mojom::EventDataView* output) {
  auto pointer = data_->key_event.Get();
  *output = ::ui::mojom::EventDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace ui

namespace mojo {


template <>
struct  StructTraits<::ui::mojom::CompositionEvent, ::ui::mojom::CompositionEventPtr> {
  static bool IsNull(const ::ui::mojom::CompositionEventPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::CompositionEventPtr* output) { output->reset(); }
  static decltype(::ui::mojom::CompositionEvent::type) type(
      const ::ui::mojom::CompositionEventPtr& input) {
    return input->type;
  }
  static decltype(::ui::mojom::CompositionEvent::key_event)& key_event(
      ::ui::mojom::CompositionEventPtr& input) {
    return input->key_event;
  }

  static bool Read(::ui::mojom::CompositionEventDataView input, ::ui::mojom::CompositionEventPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::CompositionEventPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::CompositionEvent, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::ui::mojom::internal::CompositionEvent_Data);
    decltype(CallWithContext(Traits::key_event, input, custom_context)) in_key_event = CallWithContext(Traits::key_event, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::ui::mojom::EventPtr>(
        in_key_event, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::CompositionEvent_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::ui::mojom::internal::CompositionEvent_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      mojo::internal::Serialize<::ui::mojom::CompositionEventType>(
          CallWithContext(Traits::type, input, custom_context), &result->type);
      decltype(CallWithContext(Traits::key_event, input, custom_context)) in_key_event = CallWithContext(Traits::key_event, input, custom_context);
      typename decltype(result->key_event)::BaseType* key_event_ptr;
      mojo::internal::Serialize<::ui::mojom::EventPtr>(
          in_key_event, buffer, &key_event_ptr, context);
      result->key_event.Set(key_event_ptr);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::ui::mojom::internal::CompositionEvent_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::CompositionEventDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // SERVICES_UI_PUBLIC_INTERFACES_IME_MOJOM_H_
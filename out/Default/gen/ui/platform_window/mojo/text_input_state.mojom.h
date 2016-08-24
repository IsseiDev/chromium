// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_PLATFORM_WINDOW_MOJO_TEXT_INPUT_STATE_MOJOM_H_
#define UI_PLATFORM_WINDOW_MOJO_TEXT_INPUT_STATE_MOJOM_H_

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
#include "ui/platform_window/mojo/text_input_state.mojom-shared.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"


namespace mojo {
class TextInputState;
class TextInputStateDataView;
using TextInputStatePtr = mojo::StructPtr<TextInputState>;






class  TextInputState {
 public:
  using DataView = TextInputStateDataView;
  using Data_ = internal::TextInputState_Data;

  static TextInputStatePtr New();

  template <typename U>
  static TextInputStatePtr From(const U& u) {
    return mojo::TypeConverter<TextInputStatePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, TextInputState>::Convert(*this);
  }

  TextInputState();
  ~TextInputState();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = TextInputStatePtr>
  TextInputStatePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, TextInputState>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        TextInputStatePtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        TextInputStatePtr, mojo::Array<uint8_t>>(
            input, output);
  }

  TextInputType type;
  int32_t flags;
  mojo::String text;
  int32_t selection_start;
  int32_t selection_end;
  int32_t composition_start;
  int32_t composition_end;
  bool can_compose_inline;
};

class TextInputStateDataView {
 public:
  TextInputStateDataView() {}

  TextInputStateDataView(
      internal::TextInputState_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::mojo::TextInputType>(
        data_value, output);
  }

  ::mojo::TextInputType type() const {
    return static_cast<::mojo::TextInputType>(data_->type);
  }
  int32_t flags() const {
    return data_->flags;
  }
  inline void GetTextDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadText(UserType* output) {
    auto pointer = data_->text.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  int32_t selection_start() const {
    return data_->selection_start;
  }
  int32_t selection_end() const {
    return data_->selection_end;
  }
  int32_t composition_start() const {
    return data_->composition_start;
  }
  int32_t composition_end() const {
    return data_->composition_end;
  }
  bool can_compose_inline() const {
    return data_->can_compose_inline;
  }
 private:
  internal::TextInputState_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojo

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::mojo::TextInputStateDataView> {
  using MojomType = ::mojo::TextInputStatePtr;
};
}  // namespace internal
}  // namespace mojo

namespace mojo {


template <typename StructPtrType>
TextInputStatePtr TextInputState::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->type = mojo::internal::Clone(type);
  rv->flags = mojo::internal::Clone(flags);
  rv->text = mojo::internal::Clone(text);
  rv->selection_start = mojo::internal::Clone(selection_start);
  rv->selection_end = mojo::internal::Clone(selection_end);
  rv->composition_start = mojo::internal::Clone(composition_start);
  rv->composition_end = mojo::internal::Clone(composition_end);
  rv->can_compose_inline = mojo::internal::Clone(can_compose_inline);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, TextInputState>::value>::type*>
bool TextInputState::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->type, other.type))
    return false;
  if (!mojo::internal::Equals(this->flags, other.flags))
    return false;
  if (!mojo::internal::Equals(this->text, other.text))
    return false;
  if (!mojo::internal::Equals(this->selection_start, other.selection_start))
    return false;
  if (!mojo::internal::Equals(this->selection_end, other.selection_end))
    return false;
  if (!mojo::internal::Equals(this->composition_start, other.composition_start))
    return false;
  if (!mojo::internal::Equals(this->composition_end, other.composition_end))
    return false;
  if (!mojo::internal::Equals(this->can_compose_inline, other.can_compose_inline))
    return false;
  return true;
}

inline void TextInputStateDataView::GetTextDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->text.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojo

namespace mojo {


template <>
struct  StructTraits<::mojo::TextInputState, ::mojo::TextInputStatePtr> {
  static bool IsNull(const ::mojo::TextInputStatePtr& input) { return !input; }
  static void SetToNull(::mojo::TextInputStatePtr* output) { output->reset(); }
  static decltype(::mojo::TextInputState::type) type(
      const ::mojo::TextInputStatePtr& input) {
    return input->type;
  }
  static decltype(::mojo::TextInputState::flags) flags(
      const ::mojo::TextInputStatePtr& input) {
    return input->flags;
  }
  static decltype(::mojo::TextInputState::text)& text(
      ::mojo::TextInputStatePtr& input) {
    return input->text;
  }
  static decltype(::mojo::TextInputState::selection_start) selection_start(
      const ::mojo::TextInputStatePtr& input) {
    return input->selection_start;
  }
  static decltype(::mojo::TextInputState::selection_end) selection_end(
      const ::mojo::TextInputStatePtr& input) {
    return input->selection_end;
  }
  static decltype(::mojo::TextInputState::composition_start) composition_start(
      const ::mojo::TextInputStatePtr& input) {
    return input->composition_start;
  }
  static decltype(::mojo::TextInputState::composition_end) composition_end(
      const ::mojo::TextInputStatePtr& input) {
    return input->composition_end;
  }
  static decltype(::mojo::TextInputState::can_compose_inline) can_compose_inline(
      const ::mojo::TextInputStatePtr& input) {
    return input->can_compose_inline;
  }

  static bool Read(::mojo::TextInputStateDataView input, ::mojo::TextInputStatePtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::TextInputStatePtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::TextInputState, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::mojo::internal::TextInputState_Data);
    decltype(CallWithContext(Traits::text, input, custom_context)) in_text = CallWithContext(Traits::text, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_text, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::internal::TextInputState_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::mojo::internal::TextInputState_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      mojo::internal::Serialize<::mojo::TextInputType>(
          CallWithContext(Traits::type, input, custom_context), &result->type);
      result->flags = CallWithContext(Traits::flags, input, custom_context);
      decltype(CallWithContext(Traits::text, input, custom_context)) in_text = CallWithContext(Traits::text, input, custom_context);
      typename decltype(result->text)::BaseType* text_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_text, buffer, &text_ptr, context);
      result->text.Set(text_ptr);
      result->selection_start = CallWithContext(Traits::selection_start, input, custom_context);
      result->selection_end = CallWithContext(Traits::selection_end, input, custom_context);
      result->composition_start = CallWithContext(Traits::composition_start, input, custom_context);
      result->composition_end = CallWithContext(Traits::composition_end, input, custom_context);
      result->can_compose_inline = CallWithContext(Traits::can_compose_inline, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::mojo::internal::TextInputState_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::TextInputStateDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // UI_PLATFORM_WINDOW_MOJO_TEXT_INPUT_STATE_MOJOM_H_
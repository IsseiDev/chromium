// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_PIPE_CONTROL_MESSAGES_MOJOM_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_PIPE_CONTROL_MESSAGES_MOJOM_H_

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
#include "mojo/public/interfaces/bindings/pipe_control_messages.mojom-shared.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"


namespace mojo {
namespace pipe_control {
const uint32_t kRunOrClosePipeMessageId = 0xFFFFFFFEU;
class RunOrClosePipeMessageParams;
class RunOrClosePipeMessageParamsDataView;
using RunOrClosePipeMessageParamsPtr = mojo::StructPtr<RunOrClosePipeMessageParams>;

class PeerAssociatedEndpointClosedEvent;
class PeerAssociatedEndpointClosedEventDataView;
using PeerAssociatedEndpointClosedEventPtr = mojo::InlinedStructPtr<PeerAssociatedEndpointClosedEvent>;

class AssociatedEndpointClosedBeforeSentEvent;
class AssociatedEndpointClosedBeforeSentEventDataView;
using AssociatedEndpointClosedBeforeSentEventPtr = mojo::InlinedStructPtr<AssociatedEndpointClosedBeforeSentEvent>;

class RunOrClosePipeInput;
class RunOrClosePipeInputDataView;

typedef mojo::StructPtr<RunOrClosePipeInput> RunOrClosePipeInputPtr;




class  PeerAssociatedEndpointClosedEvent {
 public:
  using DataView = PeerAssociatedEndpointClosedEventDataView;
  using Data_ = internal::PeerAssociatedEndpointClosedEvent_Data;

  static PeerAssociatedEndpointClosedEventPtr New();

  template <typename U>
  static PeerAssociatedEndpointClosedEventPtr From(const U& u) {
    return mojo::TypeConverter<PeerAssociatedEndpointClosedEventPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PeerAssociatedEndpointClosedEvent>::Convert(*this);
  }

  PeerAssociatedEndpointClosedEvent();
  ~PeerAssociatedEndpointClosedEvent();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PeerAssociatedEndpointClosedEventPtr>
  PeerAssociatedEndpointClosedEventPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PeerAssociatedEndpointClosedEvent>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        PeerAssociatedEndpointClosedEventPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        PeerAssociatedEndpointClosedEventPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  uint32_t id;
};

class PeerAssociatedEndpointClosedEventDataView {
 public:
  PeerAssociatedEndpointClosedEventDataView() {}

  PeerAssociatedEndpointClosedEventDataView(
      internal::PeerAssociatedEndpointClosedEvent_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t id() const {
    return data_->id;
  }
 private:
  internal::PeerAssociatedEndpointClosedEvent_Data* data_ = nullptr;
};



}  // namespace pipe_control
}  // namespace mojo

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::mojo::pipe_control::PeerAssociatedEndpointClosedEventDataView> {
  using MojomType = ::mojo::pipe_control::PeerAssociatedEndpointClosedEventPtr;
};
}  // namespace internal
}  // namespace mojo

namespace mojo {
namespace pipe_control {



class  AssociatedEndpointClosedBeforeSentEvent {
 public:
  using DataView = AssociatedEndpointClosedBeforeSentEventDataView;
  using Data_ = internal::AssociatedEndpointClosedBeforeSentEvent_Data;

  static AssociatedEndpointClosedBeforeSentEventPtr New();

  template <typename U>
  static AssociatedEndpointClosedBeforeSentEventPtr From(const U& u) {
    return mojo::TypeConverter<AssociatedEndpointClosedBeforeSentEventPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, AssociatedEndpointClosedBeforeSentEvent>::Convert(*this);
  }

  AssociatedEndpointClosedBeforeSentEvent();
  ~AssociatedEndpointClosedBeforeSentEvent();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = AssociatedEndpointClosedBeforeSentEventPtr>
  AssociatedEndpointClosedBeforeSentEventPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, AssociatedEndpointClosedBeforeSentEvent>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        AssociatedEndpointClosedBeforeSentEventPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        AssociatedEndpointClosedBeforeSentEventPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  uint32_t id;
};

class AssociatedEndpointClosedBeforeSentEventDataView {
 public:
  AssociatedEndpointClosedBeforeSentEventDataView() {}

  AssociatedEndpointClosedBeforeSentEventDataView(
      internal::AssociatedEndpointClosedBeforeSentEvent_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t id() const {
    return data_->id;
  }
 private:
  internal::AssociatedEndpointClosedBeforeSentEvent_Data* data_ = nullptr;
};



}  // namespace pipe_control
}  // namespace mojo

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::mojo::pipe_control::AssociatedEndpointClosedBeforeSentEventDataView> {
  using MojomType = ::mojo::pipe_control::AssociatedEndpointClosedBeforeSentEventPtr;
};
}  // namespace internal
}  // namespace mojo

namespace mojo {
namespace pipe_control {



class  RunOrClosePipeInput {
 public:
  using DataView = RunOrClosePipeInputDataView;
  using Data_ = internal::RunOrClosePipeInput_Data;
  using Tag = Data_::RunOrClosePipeInput_Tag;

  static RunOrClosePipeInputPtr New();

  template <typename U>
  static RunOrClosePipeInputPtr From(const U& u) {
    return mojo::TypeConverter<RunOrClosePipeInputPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RunOrClosePipeInput>::Convert(*this);
  }

  RunOrClosePipeInput();
  ~RunOrClosePipeInput();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename UnionPtrType = RunOrClosePipeInputPtr>
  RunOrClosePipeInputPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, RunOrClosePipeInput>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  Tag which() const {
    return tag_;
  }


  bool is_peer_associated_endpoint_closed_event() const { return tag_ == Tag::PEER_ASSOCIATED_ENDPOINT_CLOSED_EVENT; }

  PeerAssociatedEndpointClosedEventPtr& get_peer_associated_endpoint_closed_event() const {
    DCHECK(tag_ == Tag::PEER_ASSOCIATED_ENDPOINT_CLOSED_EVENT);
    return *(data_.peer_associated_endpoint_closed_event);
  }

  void set_peer_associated_endpoint_closed_event(PeerAssociatedEndpointClosedEventPtr peer_associated_endpoint_closed_event);
  bool is_associated_endpoint_closed_before_sent_event() const { return tag_ == Tag::ASSOCIATED_ENDPOINT_CLOSED_BEFORE_SENT_EVENT; }

  AssociatedEndpointClosedBeforeSentEventPtr& get_associated_endpoint_closed_before_sent_event() const {
    DCHECK(tag_ == Tag::ASSOCIATED_ENDPOINT_CLOSED_BEFORE_SENT_EVENT);
    return *(data_.associated_endpoint_closed_before_sent_event);
  }

  void set_associated_endpoint_closed_before_sent_event(AssociatedEndpointClosedBeforeSentEventPtr associated_endpoint_closed_before_sent_event);

 private:
  friend class mojo::internal::UnionAccessor<RunOrClosePipeInput>;
  union Union_ {
    Union_() {}
    ~Union_() {}
    PeerAssociatedEndpointClosedEventPtr* peer_associated_endpoint_closed_event;
    AssociatedEndpointClosedBeforeSentEventPtr* associated_endpoint_closed_before_sent_event;
  };
  void SwitchActive(Tag new_active);
  void SetActive(Tag new_active);
  void DestroyActive();
  Tag tag_;
  Union_ data_;
};
class RunOrClosePipeInputDataView {
 public:
  using Tag = internal::RunOrClosePipeInput_Data::RunOrClosePipeInput_Tag;

  RunOrClosePipeInputDataView() {}

  RunOrClosePipeInputDataView(
      internal::RunOrClosePipeInput_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const {
    // For inlined unions, |data_| is always non-null. In that case we need to
    // check |data_->is_null()|.
    return !data_ || data_->is_null();
  }

  Tag tag() const { return data_->tag; }
  bool is_peer_associated_endpoint_closed_event() const { return data_->tag == Tag::PEER_ASSOCIATED_ENDPOINT_CLOSED_EVENT; }
  inline void GetPeerAssociatedEndpointClosedEventDataView(
      PeerAssociatedEndpointClosedEventDataView* output);

  template <typename UserType>
  bool ReadPeerAssociatedEndpointClosedEvent(UserType* output) {
    DCHECK(is_peer_associated_endpoint_closed_event());
    return mojo::internal::Deserialize<::mojo::pipe_control::PeerAssociatedEndpointClosedEventPtr>(
        data_->data.f_peer_associated_endpoint_closed_event.Get(), output, context_);
  }
  bool is_associated_endpoint_closed_before_sent_event() const { return data_->tag == Tag::ASSOCIATED_ENDPOINT_CLOSED_BEFORE_SENT_EVENT; }
  inline void GetAssociatedEndpointClosedBeforeSentEventDataView(
      AssociatedEndpointClosedBeforeSentEventDataView* output);

  template <typename UserType>
  bool ReadAssociatedEndpointClosedBeforeSentEvent(UserType* output) {
    DCHECK(is_associated_endpoint_closed_before_sent_event());
    return mojo::internal::Deserialize<::mojo::pipe_control::AssociatedEndpointClosedBeforeSentEventPtr>(
        data_->data.f_associated_endpoint_closed_before_sent_event.Get(), output, context_);
  }

 private:
  internal::RunOrClosePipeInput_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace pipe_control
}  // namespace mojo

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::mojo::pipe_control::RunOrClosePipeInputDataView> {
  using MojomType = ::mojo::pipe_control::RunOrClosePipeInputPtr;
};
}  // namespace internal
}  // namespace mojo

namespace mojo {
namespace pipe_control {


class  RunOrClosePipeMessageParams {
 public:
  using DataView = RunOrClosePipeMessageParamsDataView;
  using Data_ = internal::RunOrClosePipeMessageParams_Data;

  static RunOrClosePipeMessageParamsPtr New();

  template <typename U>
  static RunOrClosePipeMessageParamsPtr From(const U& u) {
    return mojo::TypeConverter<RunOrClosePipeMessageParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RunOrClosePipeMessageParams>::Convert(*this);
  }

  RunOrClosePipeMessageParams();
  ~RunOrClosePipeMessageParams();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = RunOrClosePipeMessageParamsPtr>
  RunOrClosePipeMessageParamsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, RunOrClosePipeMessageParams>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        RunOrClosePipeMessageParamsPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        RunOrClosePipeMessageParamsPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  RunOrClosePipeInputPtr input;
 private:
  DISALLOW_COPY_AND_ASSIGN(RunOrClosePipeMessageParams);
};

class RunOrClosePipeMessageParamsDataView {
 public:
  RunOrClosePipeMessageParamsDataView() {}

  RunOrClosePipeMessageParamsDataView(
      internal::RunOrClosePipeMessageParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInputDataView(
      RunOrClosePipeInputDataView* output);

  template <typename UserType>
  bool ReadInput(UserType* output) {
    auto pointer = &data_->input;
    return mojo::internal::Deserialize<::mojo::pipe_control::RunOrClosePipeInputPtr>(
        pointer, output, context_);
  }
 private:
  internal::RunOrClosePipeMessageParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace pipe_control
}  // namespace mojo

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::mojo::pipe_control::RunOrClosePipeMessageParamsDataView> {
  using MojomType = ::mojo::pipe_control::RunOrClosePipeMessageParamsPtr;
};
}  // namespace internal
}  // namespace mojo

namespace mojo {
namespace pipe_control {




template <typename UnionPtrType>
RunOrClosePipeInputPtr RunOrClosePipeInput::Clone() const {
  // Use UnionPtrType to prevent the compiler from trying to compile this
  // without being asked.
  UnionPtrType rv(New());
  switch (tag_) {
    case Tag::PEER_ASSOCIATED_ENDPOINT_CLOSED_EVENT:
      rv->set_peer_associated_endpoint_closed_event(mojo::internal::Clone(*data_.peer_associated_endpoint_closed_event));
      break;
    case Tag::ASSOCIATED_ENDPOINT_CLOSED_BEFORE_SENT_EVENT:
      rv->set_associated_endpoint_closed_before_sent_event(mojo::internal::Clone(*data_.associated_endpoint_closed_before_sent_event));
      break;
  };
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, RunOrClosePipeInput>::value>::type*>
bool RunOrClosePipeInput::Equals(const T& other) const {
  if (tag_ != other.which())
    return false;

  switch (tag_) {
    case Tag::PEER_ASSOCIATED_ENDPOINT_CLOSED_EVENT:
      return mojo::internal::Equals(*(data_.peer_associated_endpoint_closed_event), *(other.data_.peer_associated_endpoint_closed_event));
    case Tag::ASSOCIATED_ENDPOINT_CLOSED_BEFORE_SENT_EVENT:
      return mojo::internal::Equals(*(data_.associated_endpoint_closed_before_sent_event), *(other.data_.associated_endpoint_closed_before_sent_event));
  };

  return false;
}

inline void RunOrClosePipeInputDataView::GetPeerAssociatedEndpointClosedEventDataView(
    PeerAssociatedEndpointClosedEventDataView* output) {
  DCHECK(is_peer_associated_endpoint_closed_event());
  *output = PeerAssociatedEndpointClosedEventDataView(data_->data.f_peer_associated_endpoint_closed_event.Get(), context_);
}
inline void RunOrClosePipeInputDataView::GetAssociatedEndpointClosedBeforeSentEventDataView(
    AssociatedEndpointClosedBeforeSentEventDataView* output) {
  DCHECK(is_associated_endpoint_closed_before_sent_event());
  *output = AssociatedEndpointClosedBeforeSentEventDataView(data_->data.f_associated_endpoint_closed_before_sent_event.Get(), context_);
}
template <typename StructPtrType>
RunOrClosePipeMessageParamsPtr RunOrClosePipeMessageParams::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->input = mojo::internal::Clone(input);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, RunOrClosePipeMessageParams>::value>::type*>
bool RunOrClosePipeMessageParams::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->input, other.input))
    return false;
  return true;
}

inline void RunOrClosePipeMessageParamsDataView::GetInputDataView(
    RunOrClosePipeInputDataView* output) {
  auto pointer = &data_->input;
  *output = RunOrClosePipeInputDataView(pointer, context_);
}

template <typename StructPtrType>
PeerAssociatedEndpointClosedEventPtr PeerAssociatedEndpointClosedEvent::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->id = mojo::internal::Clone(id);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PeerAssociatedEndpointClosedEvent>::value>::type*>
bool PeerAssociatedEndpointClosedEvent::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->id, other.id))
    return false;
  return true;
}


template <typename StructPtrType>
AssociatedEndpointClosedBeforeSentEventPtr AssociatedEndpointClosedBeforeSentEvent::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->id = mojo::internal::Clone(id);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, AssociatedEndpointClosedBeforeSentEvent>::value>::type*>
bool AssociatedEndpointClosedBeforeSentEvent::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->id, other.id))
    return false;
  return true;
}




}  // namespace pipe_control
}  // namespace mojo

namespace mojo {


template <>
struct  StructTraits<::mojo::pipe_control::RunOrClosePipeMessageParams, ::mojo::pipe_control::RunOrClosePipeMessageParamsPtr> {
  static bool IsNull(const ::mojo::pipe_control::RunOrClosePipeMessageParamsPtr& input) { return !input; }
  static void SetToNull(::mojo::pipe_control::RunOrClosePipeMessageParamsPtr* output) { output->reset(); }
  static decltype(::mojo::pipe_control::RunOrClosePipeMessageParams::input)& input(
      ::mojo::pipe_control::RunOrClosePipeMessageParamsPtr& input) {
    return input->input;
  }

  static bool Read(::mojo::pipe_control::RunOrClosePipeMessageParamsDataView input, ::mojo::pipe_control::RunOrClosePipeMessageParamsPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::pipe_control::RunOrClosePipeMessageParamsPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::pipe_control::RunOrClosePipeMessageParams, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::mojo::pipe_control::internal::RunOrClosePipeMessageParams_Data);
    decltype(CallWithContext(Traits::input, input, custom_context)) in_input = CallWithContext(Traits::input, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::mojo::pipe_control::RunOrClosePipeInputPtr>(
        in_input, true, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::pipe_control::internal::RunOrClosePipeMessageParams_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::mojo::pipe_control::internal::RunOrClosePipeMessageParams_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::input, input, custom_context)) in_input = CallWithContext(Traits::input, input, custom_context);
      auto input_ptr = &result->input;
      mojo::internal::Serialize<::mojo::pipe_control::RunOrClosePipeInputPtr>(
          in_input, buffer, &input_ptr, true, context);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->input.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null input in RunOrClosePipeMessageParams struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::mojo::pipe_control::internal::RunOrClosePipeMessageParams_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::pipe_control::RunOrClosePipeMessageParamsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::mojo::pipe_control::PeerAssociatedEndpointClosedEvent, ::mojo::pipe_control::PeerAssociatedEndpointClosedEventPtr> {
  static bool IsNull(const ::mojo::pipe_control::PeerAssociatedEndpointClosedEventPtr& input) { return !input; }
  static void SetToNull(::mojo::pipe_control::PeerAssociatedEndpointClosedEventPtr* output) { output->reset(); }
  static decltype(::mojo::pipe_control::PeerAssociatedEndpointClosedEvent::id) id(
      const ::mojo::pipe_control::PeerAssociatedEndpointClosedEventPtr& input) {
    return input->id;
  }

  static bool Read(::mojo::pipe_control::PeerAssociatedEndpointClosedEventDataView input, ::mojo::pipe_control::PeerAssociatedEndpointClosedEventPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::pipe_control::PeerAssociatedEndpointClosedEventPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::pipe_control::PeerAssociatedEndpointClosedEvent, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::mojo::pipe_control::internal::PeerAssociatedEndpointClosedEvent_Data);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::pipe_control::internal::PeerAssociatedEndpointClosedEvent_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::mojo::pipe_control::internal::PeerAssociatedEndpointClosedEvent_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->id = CallWithContext(Traits::id, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::mojo::pipe_control::internal::PeerAssociatedEndpointClosedEvent_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::pipe_control::PeerAssociatedEndpointClosedEventDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::mojo::pipe_control::AssociatedEndpointClosedBeforeSentEvent, ::mojo::pipe_control::AssociatedEndpointClosedBeforeSentEventPtr> {
  static bool IsNull(const ::mojo::pipe_control::AssociatedEndpointClosedBeforeSentEventPtr& input) { return !input; }
  static void SetToNull(::mojo::pipe_control::AssociatedEndpointClosedBeforeSentEventPtr* output) { output->reset(); }
  static decltype(::mojo::pipe_control::AssociatedEndpointClosedBeforeSentEvent::id) id(
      const ::mojo::pipe_control::AssociatedEndpointClosedBeforeSentEventPtr& input) {
    return input->id;
  }

  static bool Read(::mojo::pipe_control::AssociatedEndpointClosedBeforeSentEventDataView input, ::mojo::pipe_control::AssociatedEndpointClosedBeforeSentEventPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::pipe_control::AssociatedEndpointClosedBeforeSentEventPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::pipe_control::AssociatedEndpointClosedBeforeSentEvent, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::mojo::pipe_control::internal::AssociatedEndpointClosedBeforeSentEvent_Data);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::pipe_control::internal::AssociatedEndpointClosedBeforeSentEvent_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::mojo::pipe_control::internal::AssociatedEndpointClosedBeforeSentEvent_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->id = CallWithContext(Traits::id, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::mojo::pipe_control::internal::AssociatedEndpointClosedBeforeSentEvent_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::pipe_control::AssociatedEndpointClosedBeforeSentEventDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  UnionTraits<::mojo::pipe_control::RunOrClosePipeInput, ::mojo::pipe_control::RunOrClosePipeInputPtr> {
  static bool IsNull(const ::mojo::pipe_control::RunOrClosePipeInputPtr& input) { return !input; }
  static void SetToNull(::mojo::pipe_control::RunOrClosePipeInputPtr* output) { output->reset(); }

  static ::mojo::pipe_control::RunOrClosePipeInput::Tag GetTag(const ::mojo::pipe_control::RunOrClosePipeInputPtr& input) {
    return input->which();
  }
  static decltype(std::declval<::mojo::pipe_control::RunOrClosePipeInput>().get_peer_associated_endpoint_closed_event())
      peer_associated_endpoint_closed_event(::mojo::pipe_control::RunOrClosePipeInputPtr& input) {
    return input->get_peer_associated_endpoint_closed_event();
  }
  static decltype(std::declval<::mojo::pipe_control::RunOrClosePipeInput>().get_associated_endpoint_closed_before_sent_event())
      associated_endpoint_closed_before_sent_event(::mojo::pipe_control::RunOrClosePipeInputPtr& input) {
    return input->get_associated_endpoint_closed_before_sent_event();
  }

  static bool Read(::mojo::pipe_control::RunOrClosePipeInputDataView input, ::mojo::pipe_control::RunOrClosePipeInputPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::pipe_control::RunOrClosePipeInputPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = UnionTraits<::mojo::pipe_control::RunOrClosePipeInput, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   bool inlined,
                                   SerializationContext* context) {
    size_t size = inlined ? 0 : sizeof(::mojo::pipe_control::internal::RunOrClosePipeInput_Data);

    if (CallIsNullIfExists<Traits>(input))
      return size;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    switch (CallWithContext(Traits::GetTag, input, custom_context)) {
      case ::mojo::pipe_control::RunOrClosePipeInput::Tag::PEER_ASSOCIATED_ENDPOINT_CLOSED_EVENT: {
        decltype(CallWithContext(Traits::peer_associated_endpoint_closed_event, input, custom_context))
            in_peer_associated_endpoint_closed_event = CallWithContext(Traits::peer_associated_endpoint_closed_event, input,
                                          custom_context);
        size += mojo::internal::PrepareToSerialize<::mojo::pipe_control::PeerAssociatedEndpointClosedEventPtr>(
            in_peer_associated_endpoint_closed_event, context);
        break;
      }
      case ::mojo::pipe_control::RunOrClosePipeInput::Tag::ASSOCIATED_ENDPOINT_CLOSED_BEFORE_SENT_EVENT: {
        decltype(CallWithContext(Traits::associated_endpoint_closed_before_sent_event, input, custom_context))
            in_associated_endpoint_closed_before_sent_event = CallWithContext(Traits::associated_endpoint_closed_before_sent_event, input,
                                          custom_context);
        size += mojo::internal::PrepareToSerialize<::mojo::pipe_control::AssociatedEndpointClosedBeforeSentEventPtr>(
            in_associated_endpoint_closed_before_sent_event, context);
        break;
      }
    }
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::pipe_control::internal::RunOrClosePipeInput_Data** output,
                        bool inlined,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      if (inlined)
        (*output)->set_null();
      else
        *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    if (!inlined)
      *output = ::mojo::pipe_control::internal::RunOrClosePipeInput_Data::New(buffer);

    ::mojo::pipe_control::internal::RunOrClosePipeInput_Data* result = *output;
    ALLOW_UNUSED_LOCAL(result);
    // TODO(azani): Handle unknown and objects.
    // Set the not-null flag.
    result->size = kUnionDataSize;
    result->tag = CallWithContext(Traits::GetTag, input, custom_context);
    switch (result->tag) {
      case ::mojo::pipe_control::RunOrClosePipeInput::Tag::PEER_ASSOCIATED_ENDPOINT_CLOSED_EVENT: {
        decltype(CallWithContext(Traits::peer_associated_endpoint_closed_event, input, custom_context))
            in_peer_associated_endpoint_closed_event = CallWithContext(Traits::peer_associated_endpoint_closed_event, input,
                                          custom_context);
        typename decltype(result->data.f_peer_associated_endpoint_closed_event)::BaseType* ptr;
        mojo::internal::Serialize<::mojo::pipe_control::PeerAssociatedEndpointClosedEventPtr>(
            in_peer_associated_endpoint_closed_event, buffer, &ptr, context);
        result->data.f_peer_associated_endpoint_closed_event.Set(ptr);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            !ptr, mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null peer_associated_endpoint_closed_event in RunOrClosePipeInput union");
        break;
      }
      case ::mojo::pipe_control::RunOrClosePipeInput::Tag::ASSOCIATED_ENDPOINT_CLOSED_BEFORE_SENT_EVENT: {
        decltype(CallWithContext(Traits::associated_endpoint_closed_before_sent_event, input, custom_context))
            in_associated_endpoint_closed_before_sent_event = CallWithContext(Traits::associated_endpoint_closed_before_sent_event, input,
                                          custom_context);
        typename decltype(result->data.f_associated_endpoint_closed_before_sent_event)::BaseType* ptr;
        mojo::internal::Serialize<::mojo::pipe_control::AssociatedEndpointClosedBeforeSentEventPtr>(
            in_associated_endpoint_closed_before_sent_event, buffer, &ptr, context);
        result->data.f_associated_endpoint_closed_before_sent_event.Set(ptr);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            !ptr, mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null associated_endpoint_closed_before_sent_event in RunOrClosePipeInput union");
        break;
      }
    }

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::mojo::pipe_control::internal::RunOrClosePipeInput_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input || input->is_null())
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::pipe_control::RunOrClosePipeInputDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_PIPE_CONTROL_MESSAGES_MOJOM_H_
// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CC_IPC_SURFACE_SEQUENCE_MOJOM_H_
#define CC_IPC_SURFACE_SEQUENCE_MOJOM_H_

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
#include "cc/ipc/surface_sequence.mojom-shared.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"
#include "cc/surfaces/surface_sequence.h"
#include "cc/surfaces/surface_id.h"


namespace cc {
namespace mojom {
class SurfaceSequence;
class SurfaceSequenceDataView;
using SurfaceSequencePtr = mojo::InlinedStructPtr<SurfaceSequence>;



class  SurfaceSequence {
 public:
  using DataView = SurfaceSequenceDataView;
  using Data_ = internal::SurfaceSequence_Data;

  static SurfaceSequencePtr New();

  template <typename U>
  static SurfaceSequencePtr From(const U& u) {
    return mojo::TypeConverter<SurfaceSequencePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SurfaceSequence>::Convert(*this);
  }

  SurfaceSequence();
  ~SurfaceSequence();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SurfaceSequencePtr>
  SurfaceSequencePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SurfaceSequence>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        SurfaceSequencePtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        SurfaceSequencePtr, mojo::Array<uint8_t>>(
            input, output);
  }

  uint32_t client_id;
  uint32_t sequence;
};

class SurfaceSequenceDataView {
 public:
  SurfaceSequenceDataView() {}

  SurfaceSequenceDataView(
      internal::SurfaceSequence_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t client_id() const {
    return data_->client_id;
  }
  uint32_t sequence() const {
    return data_->sequence;
  }
 private:
  internal::SurfaceSequence_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace cc

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::cc::mojom::SurfaceSequenceDataView> {
  using MojomType = ::cc::mojom::SurfaceSequencePtr;
};
}  // namespace internal
}  // namespace mojo

namespace cc {
namespace mojom {





template <typename StructPtrType>
SurfaceSequencePtr SurfaceSequence::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->client_id = mojo::internal::Clone(client_id);
  rv->sequence = mojo::internal::Clone(sequence);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SurfaceSequence>::value>::type*>
bool SurfaceSequence::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->client_id, other.client_id))
    return false;
  if (!mojo::internal::Equals(this->sequence, other.sequence))
    return false;
  return true;
}




}  // namespace mojom
}  // namespace cc

namespace mojo {


template <>
struct  StructTraits<::cc::mojom::SurfaceSequence, ::cc::mojom::SurfaceSequencePtr> {
  static bool IsNull(const ::cc::mojom::SurfaceSequencePtr& input) { return !input; }
  static void SetToNull(::cc::mojom::SurfaceSequencePtr* output) { output->reset(); }
  static decltype(::cc::mojom::SurfaceSequence::client_id) client_id(
      const ::cc::mojom::SurfaceSequencePtr& input) {
    return input->client_id;
  }
  static decltype(::cc::mojom::SurfaceSequence::sequence) sequence(
      const ::cc::mojom::SurfaceSequencePtr& input) {
    return input->sequence;
  }

  static bool Read(::cc::mojom::SurfaceSequenceDataView input, ::cc::mojom::SurfaceSequencePtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::cc::mojom::SurfaceSequencePtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::cc::mojom::SurfaceSequence, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::cc::mojom::internal::SurfaceSequence_Data);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::cc::mojom::internal::SurfaceSequence_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::cc::mojom::internal::SurfaceSequence_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->client_id = CallWithContext(Traits::client_id, input, custom_context);
      result->sequence = CallWithContext(Traits::sequence, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::cc::mojom::internal::SurfaceSequence_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::cc::mojom::SurfaceSequenceDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // CC_IPC_SURFACE_SEQUENCE_MOJOM_H_
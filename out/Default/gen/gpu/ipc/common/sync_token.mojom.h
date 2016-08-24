// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef GPU_IPC_COMMON_SYNC_TOKEN_MOJOM_H_
#define GPU_IPC_COMMON_SYNC_TOKEN_MOJOM_H_

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
#include "gpu/ipc/common/sync_token.mojom-shared.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"
#include "gpu/config/dx_diag_node.h"
#include "base/values.h"
#include "ui/gfx/geometry/vector2d.h"
#include "gpu/command_buffer/common/mailbox_holder.h"
#include "gpu/command_buffer/common/sync_token.h"
#include "base/files/file_path.h"
#include "ui/gfx/geometry/point.h"
#include "base/version.h"
#include "ui/gfx/geometry/vector2d_f.h"
#include "base/strings/string16.h"
#include "ui/gfx/geometry/rect.h"
#include "gpu/config/gpu_info.h"
#include "base/time/time.h"
#include "ui/gfx/geometry/point_f.h"
#include "gpu/command_buffer/common/mailbox.h"
#include "ui/gfx/geometry/insets.h"
#include "gpu/command_buffer/common/capabilities.h"
#include "ui/gfx/geometry/size.h"
#include "ui/gfx/geometry/rect_f.h"


namespace gpu {
namespace mojom {
class SyncToken;
class SyncTokenDataView;
using SyncTokenPtr = mojo::StructPtr<SyncToken>;






class  SyncToken {
 public:
  using DataView = SyncTokenDataView;
  using Data_ = internal::SyncToken_Data;

  static SyncTokenPtr New();

  template <typename U>
  static SyncTokenPtr From(const U& u) {
    return mojo::TypeConverter<SyncTokenPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SyncToken>::Convert(*this);
  }

  SyncToken();
  ~SyncToken();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SyncTokenPtr>
  SyncTokenPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SyncToken>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        SyncTokenPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        SyncTokenPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  bool verified_flush;
  CommandBufferNamespace namespace_id;
  int32_t extra_data_field;
  uint64_t command_buffer_id;
  uint64_t release_count;
};

class SyncTokenDataView {
 public:
  SyncTokenDataView() {}

  SyncTokenDataView(
      internal::SyncToken_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool verified_flush() const {
    return data_->verified_flush;
  }
  template <typename UserType>
  bool ReadNamespaceId(UserType* output) const {
    auto data_value = data_->namespace_id;
    return mojo::internal::Deserialize<::gpu::mojom::CommandBufferNamespace>(
        data_value, output);
  }

  ::gpu::mojom::CommandBufferNamespace namespace_id() const {
    return static_cast<::gpu::mojom::CommandBufferNamespace>(data_->namespace_id);
  }
  int32_t extra_data_field() const {
    return data_->extra_data_field;
  }
  uint64_t command_buffer_id() const {
    return data_->command_buffer_id;
  }
  uint64_t release_count() const {
    return data_->release_count;
  }
 private:
  internal::SyncToken_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace gpu

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::gpu::mojom::SyncTokenDataView> {
  using MojomType = ::gpu::mojom::SyncTokenPtr;
};
}  // namespace internal
}  // namespace mojo

namespace gpu {
namespace mojom {


template <typename StructPtrType>
SyncTokenPtr SyncToken::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->verified_flush = mojo::internal::Clone(verified_flush);
  rv->namespace_id = mojo::internal::Clone(namespace_id);
  rv->extra_data_field = mojo::internal::Clone(extra_data_field);
  rv->command_buffer_id = mojo::internal::Clone(command_buffer_id);
  rv->release_count = mojo::internal::Clone(release_count);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SyncToken>::value>::type*>
bool SyncToken::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->verified_flush, other.verified_flush))
    return false;
  if (!mojo::internal::Equals(this->namespace_id, other.namespace_id))
    return false;
  if (!mojo::internal::Equals(this->extra_data_field, other.extra_data_field))
    return false;
  if (!mojo::internal::Equals(this->command_buffer_id, other.command_buffer_id))
    return false;
  if (!mojo::internal::Equals(this->release_count, other.release_count))
    return false;
  return true;
}




}  // namespace mojom
}  // namespace gpu

namespace mojo {


template <>
struct  StructTraits<::gpu::mojom::SyncToken, ::gpu::mojom::SyncTokenPtr> {
  static bool IsNull(const ::gpu::mojom::SyncTokenPtr& input) { return !input; }
  static void SetToNull(::gpu::mojom::SyncTokenPtr* output) { output->reset(); }
  static decltype(::gpu::mojom::SyncToken::verified_flush) verified_flush(
      const ::gpu::mojom::SyncTokenPtr& input) {
    return input->verified_flush;
  }
  static decltype(::gpu::mojom::SyncToken::namespace_id) namespace_id(
      const ::gpu::mojom::SyncTokenPtr& input) {
    return input->namespace_id;
  }
  static decltype(::gpu::mojom::SyncToken::extra_data_field) extra_data_field(
      const ::gpu::mojom::SyncTokenPtr& input) {
    return input->extra_data_field;
  }
  static decltype(::gpu::mojom::SyncToken::command_buffer_id) command_buffer_id(
      const ::gpu::mojom::SyncTokenPtr& input) {
    return input->command_buffer_id;
  }
  static decltype(::gpu::mojom::SyncToken::release_count) release_count(
      const ::gpu::mojom::SyncTokenPtr& input) {
    return input->release_count;
  }

  static bool Read(::gpu::mojom::SyncTokenDataView input, ::gpu::mojom::SyncTokenPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gpu::mojom::SyncTokenPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gpu::mojom::SyncToken, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::gpu::mojom::internal::SyncToken_Data);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gpu::mojom::internal::SyncToken_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::gpu::mojom::internal::SyncToken_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->verified_flush = CallWithContext(Traits::verified_flush, input, custom_context);
      mojo::internal::Serialize<::gpu::mojom::CommandBufferNamespace>(
          CallWithContext(Traits::namespace_id, input, custom_context), &result->namespace_id);
      result->extra_data_field = CallWithContext(Traits::extra_data_field, input, custom_context);
      result->command_buffer_id = CallWithContext(Traits::command_buffer_id, input, custom_context);
      result->release_count = CallWithContext(Traits::release_count, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::gpu::mojom::internal::SyncToken_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gpu::mojom::SyncTokenDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // GPU_IPC_COMMON_SYNC_TOKEN_MOJOM_H_
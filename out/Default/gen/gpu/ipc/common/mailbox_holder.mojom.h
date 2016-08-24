// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef GPU_IPC_COMMON_MAILBOX_HOLDER_MOJOM_H_
#define GPU_IPC_COMMON_MAILBOX_HOLDER_MOJOM_H_

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
#include "gpu/ipc/common/mailbox_holder.mojom-shared.h"
#include "gpu/ipc/common/mailbox.mojom.h"
#include "gpu/ipc/common/sync_token.mojom.h"
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
class MailboxHolder;
class MailboxHolderDataView;
using MailboxHolderPtr = mojo::StructPtr<MailboxHolder>;






class  MailboxHolder {
 public:
  using DataView = MailboxHolderDataView;
  using Data_ = internal::MailboxHolder_Data;

  static MailboxHolderPtr New();

  template <typename U>
  static MailboxHolderPtr From(const U& u) {
    return mojo::TypeConverter<MailboxHolderPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, MailboxHolder>::Convert(*this);
  }

  MailboxHolder();
  ~MailboxHolder();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = MailboxHolderPtr>
  MailboxHolderPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, MailboxHolder>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        MailboxHolderPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        MailboxHolderPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  gpu::Mailbox mailbox;
  ::gpu::SyncToken sync_token;
  uint32_t texture_target;
};

class MailboxHolderDataView {
 public:
  MailboxHolderDataView() {}

  MailboxHolderDataView(
      internal::MailboxHolder_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMailboxDataView(
      ::gpu::mojom::MailboxDataView* output);

  template <typename UserType>
  bool ReadMailbox(UserType* output) {
    auto pointer = data_->mailbox.Get();
    return mojo::internal::Deserialize<::gpu::mojom::MailboxPtr>(
        pointer, output, context_);
  }
  inline void GetSyncTokenDataView(
      ::gpu::mojom::SyncTokenDataView* output);

  template <typename UserType>
  bool ReadSyncToken(UserType* output) {
    auto pointer = data_->sync_token.Get();
    return mojo::internal::Deserialize<::gpu::mojom::SyncTokenPtr>(
        pointer, output, context_);
  }
  uint32_t texture_target() const {
    return data_->texture_target;
  }
 private:
  internal::MailboxHolder_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace gpu

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::gpu::mojom::MailboxHolderDataView> {
  using MojomType = ::gpu::mojom::MailboxHolderPtr;
};
}  // namespace internal
}  // namespace mojo

namespace gpu {
namespace mojom {


template <typename StructPtrType>
MailboxHolderPtr MailboxHolder::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->mailbox = mojo::internal::Clone(mailbox);
  rv->sync_token = mojo::internal::Clone(sync_token);
  rv->texture_target = mojo::internal::Clone(texture_target);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, MailboxHolder>::value>::type*>
bool MailboxHolder::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->mailbox, other.mailbox))
    return false;
  if (!mojo::internal::Equals(this->sync_token, other.sync_token))
    return false;
  if (!mojo::internal::Equals(this->texture_target, other.texture_target))
    return false;
  return true;
}

inline void MailboxHolderDataView::GetMailboxDataView(
    ::gpu::mojom::MailboxDataView* output) {
  auto pointer = data_->mailbox.Get();
  *output = ::gpu::mojom::MailboxDataView(pointer, context_);
}
inline void MailboxHolderDataView::GetSyncTokenDataView(
    ::gpu::mojom::SyncTokenDataView* output) {
  auto pointer = data_->sync_token.Get();
  *output = ::gpu::mojom::SyncTokenDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace gpu

namespace mojo {


template <>
struct  StructTraits<::gpu::mojom::MailboxHolder, ::gpu::mojom::MailboxHolderPtr> {
  static bool IsNull(const ::gpu::mojom::MailboxHolderPtr& input) { return !input; }
  static void SetToNull(::gpu::mojom::MailboxHolderPtr* output) { output->reset(); }
  static decltype(::gpu::mojom::MailboxHolder::mailbox)& mailbox(
      ::gpu::mojom::MailboxHolderPtr& input) {
    return input->mailbox;
  }
  static decltype(::gpu::mojom::MailboxHolder::sync_token)& sync_token(
      ::gpu::mojom::MailboxHolderPtr& input) {
    return input->sync_token;
  }
  static decltype(::gpu::mojom::MailboxHolder::texture_target) texture_target(
      const ::gpu::mojom::MailboxHolderPtr& input) {
    return input->texture_target;
  }

  static bool Read(::gpu::mojom::MailboxHolderDataView input, ::gpu::mojom::MailboxHolderPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gpu::mojom::MailboxHolderPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gpu::mojom::MailboxHolder, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::gpu::mojom::internal::MailboxHolder_Data);
    decltype(CallWithContext(Traits::mailbox, input, custom_context)) in_mailbox = CallWithContext(Traits::mailbox, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::gpu::mojom::MailboxPtr>(
        in_mailbox, context);
    decltype(CallWithContext(Traits::sync_token, input, custom_context)) in_sync_token = CallWithContext(Traits::sync_token, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::gpu::mojom::SyncTokenPtr>(
        in_sync_token, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gpu::mojom::internal::MailboxHolder_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::gpu::mojom::internal::MailboxHolder_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::mailbox, input, custom_context)) in_mailbox = CallWithContext(Traits::mailbox, input, custom_context);
      typename decltype(result->mailbox)::BaseType* mailbox_ptr;
      mojo::internal::Serialize<::gpu::mojom::MailboxPtr>(
          in_mailbox, buffer, &mailbox_ptr, context);
      result->mailbox.Set(mailbox_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->mailbox.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null mailbox in MailboxHolder struct");
      decltype(CallWithContext(Traits::sync_token, input, custom_context)) in_sync_token = CallWithContext(Traits::sync_token, input, custom_context);
      typename decltype(result->sync_token)::BaseType* sync_token_ptr;
      mojo::internal::Serialize<::gpu::mojom::SyncTokenPtr>(
          in_sync_token, buffer, &sync_token_ptr, context);
      result->sync_token.Set(sync_token_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->sync_token.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null sync_token in MailboxHolder struct");
      result->texture_target = CallWithContext(Traits::texture_target, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::gpu::mojom::internal::MailboxHolder_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gpu::mojom::MailboxHolderDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // GPU_IPC_COMMON_MAILBOX_HOLDER_MOJOM_H_
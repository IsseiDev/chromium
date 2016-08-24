// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef GPU_IPC_COMMON_DX_DIAG_NODE_MOJOM_H_
#define GPU_IPC_COMMON_DX_DIAG_NODE_MOJOM_H_

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
#include "gpu/ipc/common/dx_diag_node.mojom-shared.h"
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
class DxDiagNode;
class DxDiagNodeDataView;
using DxDiagNodePtr = mojo::StructPtr<DxDiagNode>;






class  DxDiagNode {
 public:
  using DataView = DxDiagNodeDataView;
  using Data_ = internal::DxDiagNode_Data;

  static DxDiagNodePtr New();

  template <typename U>
  static DxDiagNodePtr From(const U& u) {
    return mojo::TypeConverter<DxDiagNodePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DxDiagNode>::Convert(*this);
  }

  DxDiagNode();
  ~DxDiagNode();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DxDiagNodePtr>
  DxDiagNodePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, DxDiagNode>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        DxDiagNodePtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        DxDiagNodePtr, mojo::Array<uint8_t>>(
            input, output);
  }

  std::unordered_map<std::string, std::string> values;
  std::unordered_map<std::string, gpu::DxDiagNode> children;
};

class DxDiagNodeDataView {
 public:
  DxDiagNodeDataView() {}

  DxDiagNodeDataView(
      internal::DxDiagNode_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetValuesDataView(
      mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>* output);

  template <typename UserType>
  bool ReadValues(UserType* output) {
    auto pointer = data_->values.Get();
    return mojo::internal::Deserialize<mojo::Map<mojo::String, mojo::String>>(
        pointer, output, context_);
  }
  inline void GetChildrenDataView(
      mojo::MapDataView<mojo::StringDataView, DxDiagNodeDataView>* output);

  template <typename UserType>
  bool ReadChildren(UserType* output) {
    auto pointer = data_->children.Get();
    return mojo::internal::Deserialize<mojo::Map<mojo::String, ::gpu::mojom::DxDiagNodePtr>>(
        pointer, output, context_);
  }
 private:
  internal::DxDiagNode_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace gpu

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::gpu::mojom::DxDiagNodeDataView> {
  using MojomType = ::gpu::mojom::DxDiagNodePtr;
};
}  // namespace internal
}  // namespace mojo

namespace gpu {
namespace mojom {


template <typename StructPtrType>
DxDiagNodePtr DxDiagNode::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->values = mojo::internal::Clone(values);
  rv->children = mojo::internal::Clone(children);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, DxDiagNode>::value>::type*>
bool DxDiagNode::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->values, other.values))
    return false;
  if (!mojo::internal::Equals(this->children, other.children))
    return false;
  return true;
}

inline void DxDiagNodeDataView::GetValuesDataView(
    mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>* output) {
  auto pointer = data_->values.Get();
  *output = mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>(pointer, context_);
}
inline void DxDiagNodeDataView::GetChildrenDataView(
    mojo::MapDataView<mojo::StringDataView, DxDiagNodeDataView>* output) {
  auto pointer = data_->children.Get();
  *output = mojo::MapDataView<mojo::StringDataView, DxDiagNodeDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace gpu

namespace mojo {


template <>
struct  StructTraits<::gpu::mojom::DxDiagNode, ::gpu::mojom::DxDiagNodePtr> {
  static bool IsNull(const ::gpu::mojom::DxDiagNodePtr& input) { return !input; }
  static void SetToNull(::gpu::mojom::DxDiagNodePtr* output) { output->reset(); }
  static decltype(::gpu::mojom::DxDiagNode::values)& values(
      ::gpu::mojom::DxDiagNodePtr& input) {
    return input->values;
  }
  static decltype(::gpu::mojom::DxDiagNode::children)& children(
      ::gpu::mojom::DxDiagNodePtr& input) {
    return input->children;
  }

  static bool Read(::gpu::mojom::DxDiagNodeDataView input, ::gpu::mojom::DxDiagNodePtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gpu::mojom::DxDiagNodePtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gpu::mojom::DxDiagNode, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::gpu::mojom::internal::DxDiagNode_Data);
    decltype(CallWithContext(Traits::values, input, custom_context)) in_values = CallWithContext(Traits::values, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Map<mojo::String, mojo::String>>(
        in_values, context);
    decltype(CallWithContext(Traits::children, input, custom_context)) in_children = CallWithContext(Traits::children, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Map<mojo::String, ::gpu::mojom::DxDiagNodePtr>>(
        in_children, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gpu::mojom::internal::DxDiagNode_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::gpu::mojom::internal::DxDiagNode_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::values, input, custom_context)) in_values = CallWithContext(Traits::values, input, custom_context);
      typename decltype(result->values)::BaseType* values_ptr;
      const mojo::internal::ContainerValidateParams values_validate_params(
          new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)));
      mojo::internal::Serialize<mojo::Map<mojo::String, mojo::String>>(
          in_values, buffer, &values_ptr, &values_validate_params,
          context);
      result->values.Set(values_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->values.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null values in DxDiagNode struct");
      decltype(CallWithContext(Traits::children, input, custom_context)) in_children = CallWithContext(Traits::children, input, custom_context);
      typename decltype(result->children)::BaseType* children_ptr;
      const mojo::internal::ContainerValidateParams children_validate_params(
          new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, nullptr));
      mojo::internal::Serialize<mojo::Map<mojo::String, ::gpu::mojom::DxDiagNodePtr>>(
          in_children, buffer, &children_ptr, &children_validate_params,
          context);
      result->children.Set(children_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->children.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null children in DxDiagNode struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::gpu::mojom::internal::DxDiagNode_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gpu::mojom::DxDiagNodeDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // GPU_IPC_COMMON_DX_DIAG_NODE_MOJOM_H_
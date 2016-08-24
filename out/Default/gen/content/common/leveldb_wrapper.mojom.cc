// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "content/common/leveldb_wrapper.mojom.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/logging.h"
#include "base/trace_event/trace_event.h"
#include "mojo/public/cpp/bindings/lib/message_builder.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"
#include "cc/ipc/quads_struct_traits.h"
#include "url/mojo/origin_struct_traits.h"
#include "ui/events/mojo/event_struct_traits.h"
#include "content/common/bluetooth/web_bluetooth_device_id_struct_traits.h"
#include "cc/ipc/surface_id_struct_traits.h"
#include "gpu/ipc/common/mailbox_struct_traits.h"
#include "gpu/ipc/common/gpu_command_buffer_traits.h"
#include "cc/ipc/shared_quad_state_struct_traits.h"
#include "ui/gfx/mojo/accelerated_widget_struct_traits.h"
#include "cc/ipc/transferable_resource_struct_traits.h"
#include "ui/gfx/mojo/buffer_types_enum_traits.h"
#include "cc/ipc/filter_operations_struct_traits.h"
#include "gpu/ipc/common/dx_diag_node_struct_traits.h"
#include "cc/ipc/render_pass_id_struct_traits.h"
#include "services/shell/public/cpp/identity_struct_traits.h"
#include "cc/ipc/filter_operation_struct_traits.h"
#include "services/ui/public/interfaces/display/display_struct_traits.h"
#include "ipc/ipc_message_utils.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "cc/ipc/render_pass_struct_traits.h"
#include "cc/ipc/compositor_frame_metadata_struct_traits.h"
#include "cc/ipc/surface_sequence_struct_traits.h"
#include "ui/events/mojo/latency_info_struct_traits.h"
#include "ui/gfx/mojo/transform_struct_traits.h"
#include "content/common/resource_messages.h"
#include "skia/public/interfaces/bitmap_skbitmap_struct_traits.h"
#include "ui/gfx/mojo/selection_bound_struct_traits.h"
#include "url/mojo/url_gurl_struct_traits.h"
#include "device/bluetooth/public/interfaces/bluetooth_uuid_struct_traits.h"
#include "gpu/ipc/common/mailbox_holder_struct_traits.h"
#include "cc/ipc/begin_frame_args_struct_traits.h"
#include "gpu/ipc/common/gpu_info_struct_traits.h"
#include "cc/ipc/selection_struct_traits.h"
#include "services/shell/public/cpp/capabilities_struct_traits.h"
#include "gpu/ipc/common/sync_token_struct_traits.h"
#include "mojo/common/common_custom_types_struct_traits.h"
#include "skia/public/interfaces/image_filter_struct_traits.h"
#include "cc/ipc/returned_resource_struct_traits.h"
#include "cc/ipc/compositor_frame_struct_traits.h"
namespace content {
namespace mojom {

namespace {

class LevelDBObserver_KeyAdded_ParamsDataView {
 public:
  LevelDBObserver_KeyAdded_ParamsDataView() {}

  LevelDBObserver_KeyAdded_ParamsDataView(
      internal::LevelDBObserver_KeyAdded_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeyDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  bool ReadKey(UserType* output) {
    auto pointer = data_->key.Get();
    return mojo::internal::Deserialize<mojo::Array<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetValueDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  bool ReadValue(UserType* output) {
    auto pointer = data_->value.Get();
    return mojo::internal::Deserialize<mojo::Array<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetSourceDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadSource(UserType* output) {
    auto pointer = data_->source.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::LevelDBObserver_KeyAdded_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void LevelDBObserver_KeyAdded_ParamsDataView::GetKeyDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->key.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void LevelDBObserver_KeyAdded_ParamsDataView::GetValueDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->value.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void LevelDBObserver_KeyAdded_ParamsDataView::GetSourceDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->source.Get();
  *output = mojo::StringDataView(pointer, context_);
}


class LevelDBObserver_KeyChanged_ParamsDataView {
 public:
  LevelDBObserver_KeyChanged_ParamsDataView() {}

  LevelDBObserver_KeyChanged_ParamsDataView(
      internal::LevelDBObserver_KeyChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeyDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  bool ReadKey(UserType* output) {
    auto pointer = data_->key.Get();
    return mojo::internal::Deserialize<mojo::Array<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetNewValueDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  bool ReadNewValue(UserType* output) {
    auto pointer = data_->new_value.Get();
    return mojo::internal::Deserialize<mojo::Array<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetOldValueDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  bool ReadOldValue(UserType* output) {
    auto pointer = data_->old_value.Get();
    return mojo::internal::Deserialize<mojo::Array<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetSourceDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadSource(UserType* output) {
    auto pointer = data_->source.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::LevelDBObserver_KeyChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void LevelDBObserver_KeyChanged_ParamsDataView::GetKeyDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->key.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void LevelDBObserver_KeyChanged_ParamsDataView::GetNewValueDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->new_value.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void LevelDBObserver_KeyChanged_ParamsDataView::GetOldValueDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->old_value.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void LevelDBObserver_KeyChanged_ParamsDataView::GetSourceDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->source.Get();
  *output = mojo::StringDataView(pointer, context_);
}


class LevelDBObserver_KeyDeleted_ParamsDataView {
 public:
  LevelDBObserver_KeyDeleted_ParamsDataView() {}

  LevelDBObserver_KeyDeleted_ParamsDataView(
      internal::LevelDBObserver_KeyDeleted_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeyDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  bool ReadKey(UserType* output) {
    auto pointer = data_->key.Get();
    return mojo::internal::Deserialize<mojo::Array<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetOldValueDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  bool ReadOldValue(UserType* output) {
    auto pointer = data_->old_value.Get();
    return mojo::internal::Deserialize<mojo::Array<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetSourceDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadSource(UserType* output) {
    auto pointer = data_->source.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::LevelDBObserver_KeyDeleted_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void LevelDBObserver_KeyDeleted_ParamsDataView::GetKeyDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->key.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void LevelDBObserver_KeyDeleted_ParamsDataView::GetOldValueDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->old_value.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void LevelDBObserver_KeyDeleted_ParamsDataView::GetSourceDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->source.Get();
  *output = mojo::StringDataView(pointer, context_);
}


class LevelDBObserver_AllDeleted_ParamsDataView {
 public:
  LevelDBObserver_AllDeleted_ParamsDataView() {}

  LevelDBObserver_AllDeleted_ParamsDataView(
      internal::LevelDBObserver_AllDeleted_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSourceDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadSource(UserType* output) {
    auto pointer = data_->source.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::LevelDBObserver_AllDeleted_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void LevelDBObserver_AllDeleted_ParamsDataView::GetSourceDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->source.Get();
  *output = mojo::StringDataView(pointer, context_);
}


class LevelDBObserver_GetAllComplete_ParamsDataView {
 public:
  LevelDBObserver_GetAllComplete_ParamsDataView() {}

  LevelDBObserver_GetAllComplete_ParamsDataView(
      internal::LevelDBObserver_GetAllComplete_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSourceDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadSource(UserType* output) {
    auto pointer = data_->source.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::LevelDBObserver_GetAllComplete_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void LevelDBObserver_GetAllComplete_ParamsDataView::GetSourceDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->source.Get();
  *output = mojo::StringDataView(pointer, context_);
}


class LevelDBWrapper_Put_ParamsDataView {
 public:
  LevelDBWrapper_Put_ParamsDataView() {}

  LevelDBWrapper_Put_ParamsDataView(
      internal::LevelDBWrapper_Put_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeyDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  bool ReadKey(UserType* output) {
    auto pointer = data_->key.Get();
    return mojo::internal::Deserialize<mojo::Array<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetValueDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  bool ReadValue(UserType* output) {
    auto pointer = data_->value.Get();
    return mojo::internal::Deserialize<mojo::Array<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetSourceDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadSource(UserType* output) {
    auto pointer = data_->source.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::LevelDBWrapper_Put_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void LevelDBWrapper_Put_ParamsDataView::GetKeyDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->key.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void LevelDBWrapper_Put_ParamsDataView::GetValueDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->value.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void LevelDBWrapper_Put_ParamsDataView::GetSourceDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->source.Get();
  *output = mojo::StringDataView(pointer, context_);
}

class LevelDBWrapper_Put_ResponseParamsDataView {
 public:
  LevelDBWrapper_Put_ResponseParamsDataView() {}

  LevelDBWrapper_Put_ResponseParamsDataView(
      internal::LevelDBWrapper_Put_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::LevelDBWrapper_Put_ResponseParams_Data* data_ = nullptr;
};




class LevelDBWrapper_Delete_ParamsDataView {
 public:
  LevelDBWrapper_Delete_ParamsDataView() {}

  LevelDBWrapper_Delete_ParamsDataView(
      internal::LevelDBWrapper_Delete_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeyDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  bool ReadKey(UserType* output) {
    auto pointer = data_->key.Get();
    return mojo::internal::Deserialize<mojo::Array<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetSourceDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadSource(UserType* output) {
    auto pointer = data_->source.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::LevelDBWrapper_Delete_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void LevelDBWrapper_Delete_ParamsDataView::GetKeyDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->key.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void LevelDBWrapper_Delete_ParamsDataView::GetSourceDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->source.Get();
  *output = mojo::StringDataView(pointer, context_);
}

class LevelDBWrapper_Delete_ResponseParamsDataView {
 public:
  LevelDBWrapper_Delete_ResponseParamsDataView() {}

  LevelDBWrapper_Delete_ResponseParamsDataView(
      internal::LevelDBWrapper_Delete_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::LevelDBWrapper_Delete_ResponseParams_Data* data_ = nullptr;
};




class LevelDBWrapper_DeleteAll_ParamsDataView {
 public:
  LevelDBWrapper_DeleteAll_ParamsDataView() {}

  LevelDBWrapper_DeleteAll_ParamsDataView(
      internal::LevelDBWrapper_DeleteAll_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSourceDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadSource(UserType* output) {
    auto pointer = data_->source.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::LevelDBWrapper_DeleteAll_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void LevelDBWrapper_DeleteAll_ParamsDataView::GetSourceDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->source.Get();
  *output = mojo::StringDataView(pointer, context_);
}

class LevelDBWrapper_DeleteAll_ResponseParamsDataView {
 public:
  LevelDBWrapper_DeleteAll_ResponseParamsDataView() {}

  LevelDBWrapper_DeleteAll_ResponseParamsDataView(
      internal::LevelDBWrapper_DeleteAll_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::LevelDBWrapper_DeleteAll_ResponseParams_Data* data_ = nullptr;
};




class LevelDBWrapper_Get_ParamsDataView {
 public:
  LevelDBWrapper_Get_ParamsDataView() {}

  LevelDBWrapper_Get_ParamsDataView(
      internal::LevelDBWrapper_Get_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeyDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  bool ReadKey(UserType* output) {
    auto pointer = data_->key.Get();
    return mojo::internal::Deserialize<mojo::Array<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::LevelDBWrapper_Get_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void LevelDBWrapper_Get_ParamsDataView::GetKeyDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->key.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}

class LevelDBWrapper_Get_ResponseParamsDataView {
 public:
  LevelDBWrapper_Get_ResponseParamsDataView() {}

  LevelDBWrapper_Get_ResponseParamsDataView(
      internal::LevelDBWrapper_Get_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
  inline void GetValueDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  bool ReadValue(UserType* output) {
    auto pointer = data_->value.Get();
    return mojo::internal::Deserialize<mojo::Array<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::LevelDBWrapper_Get_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void LevelDBWrapper_Get_ResponseParamsDataView::GetValueDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->value.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


class LevelDBWrapper_GetAll_ParamsDataView {
 public:
  LevelDBWrapper_GetAll_ParamsDataView() {}

  LevelDBWrapper_GetAll_ParamsDataView(
      internal::LevelDBWrapper_GetAll_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSourceDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadSource(UserType* output) {
    auto pointer = data_->source.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::LevelDBWrapper_GetAll_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void LevelDBWrapper_GetAll_ParamsDataView::GetSourceDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->source.Get();
  *output = mojo::StringDataView(pointer, context_);
}

class LevelDBWrapper_GetAll_ResponseParamsDataView {
 public:
  LevelDBWrapper_GetAll_ResponseParamsDataView() {}

  LevelDBWrapper_GetAll_ResponseParamsDataView(
      internal::LevelDBWrapper_GetAll_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::leveldb::mojom::DatabaseError>(
        data_value, output);
  }

  ::leveldb::mojom::DatabaseError status() const {
    return static_cast<::leveldb::mojom::DatabaseError>(data_->status);
  }
  inline void GetDataDataView(
      mojo::ArrayDataView<KeyValueDataView>* output);

  template <typename UserType>
  bool ReadData(UserType* output) {
    auto pointer = data_->data.Get();
    return mojo::internal::Deserialize<mojo::Array<::content::mojom::KeyValuePtr>>(
        pointer, output, context_);
  }
 private:
  internal::LevelDBWrapper_GetAll_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void LevelDBWrapper_GetAll_ResponseParamsDataView::GetDataDataView(
    mojo::ArrayDataView<KeyValueDataView>* output) {
  auto pointer = data_->data.Get();
  *output = mojo::ArrayDataView<KeyValueDataView>(pointer, context_);
}


}  // namespace// static
KeyValuePtr KeyValue::New() {
  KeyValuePtr rv;
  mojo::internal::StructHelper<KeyValue>::Initialize(&rv);
  return rv;
}

KeyValue::KeyValue()
    : key(),
      value() {
}

KeyValue::~KeyValue() {
}
const char LevelDBObserver::Name_[] = "content::mojom::LevelDBObserver";
const uint32_t LevelDBObserver::Version_;

LevelDBObserverProxy::LevelDBObserverProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void LevelDBObserverProxy::KeyAdded(
    const std::vector<uint8_t>& in_key, const std::vector<uint8_t>& in_value, const std::string& in_source) {
  size_t size = sizeof(::content::mojom::internal::LevelDBObserver_KeyAdded_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::Array<uint8_t>>(
      in_key, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<mojo::Array<uint8_t>>(
      in_value, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_source, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kLevelDBObserver_KeyAdded_Name, size);

  auto params =
      ::content::mojom::internal::LevelDBObserver_KeyAdded_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->key)::BaseType* key_ptr;
  const mojo::internal::ContainerValidateParams key_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::Array<uint8_t>>(
      in_key, builder.buffer(), &key_ptr, &key_validate_params,
      &serialization_context_);
  params->key.Set(key_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key in LevelDBObserver.KeyAdded request");
  typename decltype(params->value)::BaseType* value_ptr;
  const mojo::internal::ContainerValidateParams value_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::Array<uint8_t>>(
      in_value, builder.buffer(), &value_ptr, &value_validate_params,
      &serialization_context_);
  params->value.Set(value_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->value.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null value in LevelDBObserver.KeyAdded request");
  typename decltype(params->source)::BaseType* source_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_source, builder.buffer(), &source_ptr, &serialization_context_);
  params->source.Set(source_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->source.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null source in LevelDBObserver.KeyAdded request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void LevelDBObserverProxy::KeyChanged(
    const std::vector<uint8_t>& in_key, const std::vector<uint8_t>& in_new_value, const std::vector<uint8_t>& in_old_value, const std::string& in_source) {
  size_t size = sizeof(::content::mojom::internal::LevelDBObserver_KeyChanged_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::Array<uint8_t>>(
      in_key, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<mojo::Array<uint8_t>>(
      in_new_value, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<mojo::Array<uint8_t>>(
      in_old_value, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_source, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kLevelDBObserver_KeyChanged_Name, size);

  auto params =
      ::content::mojom::internal::LevelDBObserver_KeyChanged_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->key)::BaseType* key_ptr;
  const mojo::internal::ContainerValidateParams key_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::Array<uint8_t>>(
      in_key, builder.buffer(), &key_ptr, &key_validate_params,
      &serialization_context_);
  params->key.Set(key_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key in LevelDBObserver.KeyChanged request");
  typename decltype(params->new_value)::BaseType* new_value_ptr;
  const mojo::internal::ContainerValidateParams new_value_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::Array<uint8_t>>(
      in_new_value, builder.buffer(), &new_value_ptr, &new_value_validate_params,
      &serialization_context_);
  params->new_value.Set(new_value_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->new_value.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null new_value in LevelDBObserver.KeyChanged request");
  typename decltype(params->old_value)::BaseType* old_value_ptr;
  const mojo::internal::ContainerValidateParams old_value_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::Array<uint8_t>>(
      in_old_value, builder.buffer(), &old_value_ptr, &old_value_validate_params,
      &serialization_context_);
  params->old_value.Set(old_value_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->old_value.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null old_value in LevelDBObserver.KeyChanged request");
  typename decltype(params->source)::BaseType* source_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_source, builder.buffer(), &source_ptr, &serialization_context_);
  params->source.Set(source_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->source.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null source in LevelDBObserver.KeyChanged request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void LevelDBObserverProxy::KeyDeleted(
    const std::vector<uint8_t>& in_key, const std::vector<uint8_t>& in_old_value, const std::string& in_source) {
  size_t size = sizeof(::content::mojom::internal::LevelDBObserver_KeyDeleted_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::Array<uint8_t>>(
      in_key, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<mojo::Array<uint8_t>>(
      in_old_value, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_source, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kLevelDBObserver_KeyDeleted_Name, size);

  auto params =
      ::content::mojom::internal::LevelDBObserver_KeyDeleted_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->key)::BaseType* key_ptr;
  const mojo::internal::ContainerValidateParams key_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::Array<uint8_t>>(
      in_key, builder.buffer(), &key_ptr, &key_validate_params,
      &serialization_context_);
  params->key.Set(key_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key in LevelDBObserver.KeyDeleted request");
  typename decltype(params->old_value)::BaseType* old_value_ptr;
  const mojo::internal::ContainerValidateParams old_value_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::Array<uint8_t>>(
      in_old_value, builder.buffer(), &old_value_ptr, &old_value_validate_params,
      &serialization_context_);
  params->old_value.Set(old_value_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->old_value.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null old_value in LevelDBObserver.KeyDeleted request");
  typename decltype(params->source)::BaseType* source_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_source, builder.buffer(), &source_ptr, &serialization_context_);
  params->source.Set(source_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->source.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null source in LevelDBObserver.KeyDeleted request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void LevelDBObserverProxy::AllDeleted(
    const std::string& in_source) {
  size_t size = sizeof(::content::mojom::internal::LevelDBObserver_AllDeleted_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_source, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kLevelDBObserver_AllDeleted_Name, size);

  auto params =
      ::content::mojom::internal::LevelDBObserver_AllDeleted_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->source)::BaseType* source_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_source, builder.buffer(), &source_ptr, &serialization_context_);
  params->source.Set(source_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->source.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null source in LevelDBObserver.AllDeleted request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void LevelDBObserverProxy::GetAllComplete(
    const std::string& in_source) {
  size_t size = sizeof(::content::mojom::internal::LevelDBObserver_GetAllComplete_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_source, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kLevelDBObserver_GetAllComplete_Name, size);

  auto params =
      ::content::mojom::internal::LevelDBObserver_GetAllComplete_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->source)::BaseType* source_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_source, builder.buffer(), &source_ptr, &serialization_context_);
  params->source.Set(source_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->source.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null source in LevelDBObserver.GetAllComplete request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

LevelDBObserverStub::LevelDBObserverStub()
    : sink_(nullptr),
      control_message_handler_(LevelDBObserver::Version_) {
}

LevelDBObserverStub::~LevelDBObserverStub() {}

bool LevelDBObserverStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kLevelDBObserver_KeyAdded_Name: {
      internal::LevelDBObserver_KeyAdded_Params_Data* params =
          reinterpret_cast<internal::LevelDBObserver_KeyAdded_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      std::vector<uint8_t> p_key{};
      std::vector<uint8_t> p_value{};
      std::string p_source{};
      LevelDBObserver_KeyAdded_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadKey(&p_key))
        success = false;
      if (!input_data_view.ReadValue(&p_value))
        success = false;
      if (!input_data_view.ReadSource(&p_source))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "LevelDBObserver::KeyAdded deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "LevelDBObserver::KeyAdded");
      mojo::internal::MessageDispatchContext context(message);
      sink_->KeyAdded(
std::move(p_key), 
std::move(p_value), 
std::move(p_source));
      return true;
    }
    case internal::kLevelDBObserver_KeyChanged_Name: {
      internal::LevelDBObserver_KeyChanged_Params_Data* params =
          reinterpret_cast<internal::LevelDBObserver_KeyChanged_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      std::vector<uint8_t> p_key{};
      std::vector<uint8_t> p_new_value{};
      std::vector<uint8_t> p_old_value{};
      std::string p_source{};
      LevelDBObserver_KeyChanged_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadKey(&p_key))
        success = false;
      if (!input_data_view.ReadNewValue(&p_new_value))
        success = false;
      if (!input_data_view.ReadOldValue(&p_old_value))
        success = false;
      if (!input_data_view.ReadSource(&p_source))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "LevelDBObserver::KeyChanged deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "LevelDBObserver::KeyChanged");
      mojo::internal::MessageDispatchContext context(message);
      sink_->KeyChanged(
std::move(p_key), 
std::move(p_new_value), 
std::move(p_old_value), 
std::move(p_source));
      return true;
    }
    case internal::kLevelDBObserver_KeyDeleted_Name: {
      internal::LevelDBObserver_KeyDeleted_Params_Data* params =
          reinterpret_cast<internal::LevelDBObserver_KeyDeleted_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      std::vector<uint8_t> p_key{};
      std::vector<uint8_t> p_old_value{};
      std::string p_source{};
      LevelDBObserver_KeyDeleted_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadKey(&p_key))
        success = false;
      if (!input_data_view.ReadOldValue(&p_old_value))
        success = false;
      if (!input_data_view.ReadSource(&p_source))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "LevelDBObserver::KeyDeleted deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "LevelDBObserver::KeyDeleted");
      mojo::internal::MessageDispatchContext context(message);
      sink_->KeyDeleted(
std::move(p_key), 
std::move(p_old_value), 
std::move(p_source));
      return true;
    }
    case internal::kLevelDBObserver_AllDeleted_Name: {
      internal::LevelDBObserver_AllDeleted_Params_Data* params =
          reinterpret_cast<internal::LevelDBObserver_AllDeleted_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      std::string p_source{};
      LevelDBObserver_AllDeleted_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadSource(&p_source))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "LevelDBObserver::AllDeleted deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "LevelDBObserver::AllDeleted");
      mojo::internal::MessageDispatchContext context(message);
      sink_->AllDeleted(
std::move(p_source));
      return true;
    }
    case internal::kLevelDBObserver_GetAllComplete_Name: {
      internal::LevelDBObserver_GetAllComplete_Params_Data* params =
          reinterpret_cast<internal::LevelDBObserver_GetAllComplete_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      std::string p_source{};
      LevelDBObserver_GetAllComplete_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadSource(&p_source))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "LevelDBObserver::GetAllComplete deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "LevelDBObserver::GetAllComplete");
      mojo::internal::MessageDispatchContext context(message);
      sink_->GetAllComplete(
std::move(p_source));
      return true;
    }
  }
  return false;
}

bool LevelDBObserverStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kLevelDBObserver_KeyAdded_Name: {
      break;
    }
    case internal::kLevelDBObserver_KeyChanged_Name: {
      break;
    }
    case internal::kLevelDBObserver_KeyDeleted_Name: {
      break;
    }
    case internal::kLevelDBObserver_AllDeleted_Name: {
      break;
    }
    case internal::kLevelDBObserver_GetAllComplete_Name: {
      break;
    }
  }
  return false;
}

LevelDBObserverRequestValidator::LevelDBObserverRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool LevelDBObserverRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "LevelDBObserver RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kLevelDBObserver_KeyAdded_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBObserver_KeyAdded_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kLevelDBObserver_KeyChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBObserver_KeyChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kLevelDBObserver_KeyDeleted_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBObserver_KeyDeleted_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kLevelDBObserver_AllDeleted_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBObserver_AllDeleted_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kLevelDBObserver_GetAllComplete_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBObserver_GetAllComplete_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

const char LevelDBWrapper::Name_[] = "content::mojom::LevelDBWrapper";
const uint32_t LevelDBWrapper::Version_;
bool LevelDBWrapper::GetAll(const std::string& source, ::leveldb::mojom::DatabaseError* status, std::vector<KeyValuePtr>* data) {
  NOTREACHED();
  return false;
}

class LevelDBWrapper_Put_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  LevelDBWrapper_Put_ForwardToCallback(
      const LevelDBWrapper::PutCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  LevelDBWrapper::PutCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(LevelDBWrapper_Put_ForwardToCallback);
};
bool LevelDBWrapper_Put_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::LevelDBWrapper_Put_ResponseParams_Data* params =
      reinterpret_cast<internal::LevelDBWrapper_Put_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  bool p_success{};
  LevelDBWrapper_Put_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "LevelDBWrapper::Put response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_success));
  }
  return true;
}

class LevelDBWrapper_Delete_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  LevelDBWrapper_Delete_ForwardToCallback(
      const LevelDBWrapper::DeleteCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  LevelDBWrapper::DeleteCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(LevelDBWrapper_Delete_ForwardToCallback);
};
bool LevelDBWrapper_Delete_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::LevelDBWrapper_Delete_ResponseParams_Data* params =
      reinterpret_cast<internal::LevelDBWrapper_Delete_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  bool p_success{};
  LevelDBWrapper_Delete_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "LevelDBWrapper::Delete response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_success));
  }
  return true;
}

class LevelDBWrapper_DeleteAll_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  LevelDBWrapper_DeleteAll_ForwardToCallback(
      const LevelDBWrapper::DeleteAllCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  LevelDBWrapper::DeleteAllCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(LevelDBWrapper_DeleteAll_ForwardToCallback);
};
bool LevelDBWrapper_DeleteAll_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::LevelDBWrapper_DeleteAll_ResponseParams_Data* params =
      reinterpret_cast<internal::LevelDBWrapper_DeleteAll_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  bool p_success{};
  LevelDBWrapper_DeleteAll_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "LevelDBWrapper::DeleteAll response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_success));
  }
  return true;
}

class LevelDBWrapper_Get_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  LevelDBWrapper_Get_ForwardToCallback(
      const LevelDBWrapper::GetCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  LevelDBWrapper::GetCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(LevelDBWrapper_Get_ForwardToCallback);
};
bool LevelDBWrapper_Get_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::LevelDBWrapper_Get_ResponseParams_Data* params =
      reinterpret_cast<internal::LevelDBWrapper_Get_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  bool p_success{};
  std::vector<uint8_t> p_value{};
  LevelDBWrapper_Get_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  p_success = input_data_view.success();
  if (!input_data_view.ReadValue(&p_value))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "LevelDBWrapper::Get response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_success), 
std::move(p_value));
  }
  return true;
}
class LevelDBWrapper_GetAll_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  LevelDBWrapper_GetAll_HandleSyncResponse(
      scoped_refptr<mojo::AssociatedGroupController> group_controller,
      bool* result, ::leveldb::mojom::DatabaseError* out_status, std::vector<KeyValuePtr>* out_data)
      : serialization_context_(std::move(group_controller)), result_(result), out_status_(out_status), out_data_(out_data) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  mojo::internal::SerializationContext serialization_context_;
  bool* result_;
  ::leveldb::mojom::DatabaseError* out_status_;
  std::vector<KeyValuePtr>* out_data_;DISALLOW_COPY_AND_ASSIGN(LevelDBWrapper_GetAll_HandleSyncResponse);
};
bool LevelDBWrapper_GetAll_HandleSyncResponse::Accept(
    mojo::Message* message) {
  internal::LevelDBWrapper_GetAll_ResponseParams_Data* params =
      reinterpret_cast<internal::LevelDBWrapper_GetAll_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  ::leveldb::mojom::DatabaseError p_status{};
  std::vector<KeyValuePtr> p_data{};
  LevelDBWrapper_GetAll_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!input_data_view.ReadData(&p_data))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "LevelDBWrapper::GetAll response deserializer");
    return false;
  }
  *out_status_ = std::move(p_status);
  *out_data_ = std::move(p_data);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

class LevelDBWrapper_GetAll_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  LevelDBWrapper_GetAll_ForwardToCallback(
      const LevelDBWrapper::GetAllCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  LevelDBWrapper::GetAllCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(LevelDBWrapper_GetAll_ForwardToCallback);
};
bool LevelDBWrapper_GetAll_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::LevelDBWrapper_GetAll_ResponseParams_Data* params =
      reinterpret_cast<internal::LevelDBWrapper_GetAll_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  ::leveldb::mojom::DatabaseError p_status{};
  std::vector<KeyValuePtr> p_data{};
  LevelDBWrapper_GetAll_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!input_data_view.ReadData(&p_data))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "LevelDBWrapper::GetAll response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_status), 
std::move(p_data));
  }
  return true;
}

LevelDBWrapperProxy::LevelDBWrapperProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void LevelDBWrapperProxy::Put(
    const std::vector<uint8_t>& in_key, const std::vector<uint8_t>& in_value, const std::string& in_source, const PutCallback& callback) {
  size_t size = sizeof(::content::mojom::internal::LevelDBWrapper_Put_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::Array<uint8_t>>(
      in_key, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<mojo::Array<uint8_t>>(
      in_value, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_source, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kLevelDBWrapper_Put_Name, size);

  auto params =
      ::content::mojom::internal::LevelDBWrapper_Put_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->key)::BaseType* key_ptr;
  const mojo::internal::ContainerValidateParams key_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::Array<uint8_t>>(
      in_key, builder.buffer(), &key_ptr, &key_validate_params,
      &serialization_context_);
  params->key.Set(key_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key in LevelDBWrapper.Put request");
  typename decltype(params->value)::BaseType* value_ptr;
  const mojo::internal::ContainerValidateParams value_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::Array<uint8_t>>(
      in_value, builder.buffer(), &value_ptr, &value_validate_params,
      &serialization_context_);
  params->value.Set(value_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->value.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null value in LevelDBWrapper.Put request");
  typename decltype(params->source)::BaseType* source_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_source, builder.buffer(), &source_ptr, &serialization_context_);
  params->source.Set(source_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->source.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null source in LevelDBWrapper.Put request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new LevelDBWrapper_Put_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void LevelDBWrapperProxy::Delete(
    const std::vector<uint8_t>& in_key, const std::string& in_source, const DeleteCallback& callback) {
  size_t size = sizeof(::content::mojom::internal::LevelDBWrapper_Delete_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::Array<uint8_t>>(
      in_key, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_source, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kLevelDBWrapper_Delete_Name, size);

  auto params =
      ::content::mojom::internal::LevelDBWrapper_Delete_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->key)::BaseType* key_ptr;
  const mojo::internal::ContainerValidateParams key_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::Array<uint8_t>>(
      in_key, builder.buffer(), &key_ptr, &key_validate_params,
      &serialization_context_);
  params->key.Set(key_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key in LevelDBWrapper.Delete request");
  typename decltype(params->source)::BaseType* source_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_source, builder.buffer(), &source_ptr, &serialization_context_);
  params->source.Set(source_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->source.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null source in LevelDBWrapper.Delete request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new LevelDBWrapper_Delete_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void LevelDBWrapperProxy::DeleteAll(
    const std::string& in_source, const DeleteAllCallback& callback) {
  size_t size = sizeof(::content::mojom::internal::LevelDBWrapper_DeleteAll_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_source, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kLevelDBWrapper_DeleteAll_Name, size);

  auto params =
      ::content::mojom::internal::LevelDBWrapper_DeleteAll_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->source)::BaseType* source_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_source, builder.buffer(), &source_ptr, &serialization_context_);
  params->source.Set(source_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->source.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null source in LevelDBWrapper.DeleteAll request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new LevelDBWrapper_DeleteAll_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void LevelDBWrapperProxy::Get(
    const std::vector<uint8_t>& in_key, const GetCallback& callback) {
  size_t size = sizeof(::content::mojom::internal::LevelDBWrapper_Get_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::Array<uint8_t>>(
      in_key, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kLevelDBWrapper_Get_Name, size);

  auto params =
      ::content::mojom::internal::LevelDBWrapper_Get_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->key)::BaseType* key_ptr;
  const mojo::internal::ContainerValidateParams key_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::Array<uint8_t>>(
      in_key, builder.buffer(), &key_ptr, &key_validate_params,
      &serialization_context_);
  params->key.Set(key_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key in LevelDBWrapper.Get request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new LevelDBWrapper_Get_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
bool LevelDBWrapperProxy::GetAll(
    const std::string& param_source, ::leveldb::mojom::DatabaseError* param_status, std::vector<KeyValuePtr>* param_data) {
  size_t size = sizeof(::content::mojom::internal::LevelDBWrapper_GetAll_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      param_source, &serialization_context_);

  mojo::internal::RequestMessageBuilder builder(internal::kLevelDBWrapper_GetAll_Name, size,
                                                mojo::Message::kFlagIsSync);

  auto params =
      ::content::mojom::internal::LevelDBWrapper_GetAll_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->source)::BaseType* source_ptr;
  mojo::internal::Serialize<mojo::String>(
      param_source, builder.buffer(), &source_ptr, &serialization_context_);
  params->source.Set(source_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->source.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null source in LevelDBWrapper.GetAll request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());

  bool result = false;
  mojo::MessageReceiver* responder =
      new LevelDBWrapper_GetAll_HandleSyncResponse(
          serialization_context_.group_controller, &result, param_status, param_data);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
  return result;
}

void LevelDBWrapperProxy::GetAll(
    const std::string& in_source, const GetAllCallback& callback) {
  size_t size = sizeof(::content::mojom::internal::LevelDBWrapper_GetAll_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_source, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kLevelDBWrapper_GetAll_Name, size);

  auto params =
      ::content::mojom::internal::LevelDBWrapper_GetAll_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->source)::BaseType* source_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_source, builder.buffer(), &source_ptr, &serialization_context_);
  params->source.Set(source_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->source.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null source in LevelDBWrapper.GetAll request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new LevelDBWrapper_GetAll_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
class LevelDBWrapper_Put_ProxyToResponder {
 public:
  static LevelDBWrapper::PutCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<LevelDBWrapper_Put_ProxyToResponder> proxy(
        new LevelDBWrapper_Put_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&LevelDBWrapper_Put_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~LevelDBWrapper_Put_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "LevelDBWrapper::Put() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  LevelDBWrapper_Put_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(responder),
        serialization_context_(std::move(group_controller)) {
  }

  void Run(
      bool in_success);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBWrapper_Put_ProxyToResponder);
};

void LevelDBWrapper_Put_ProxyToResponder::Run(
    bool in_success) {
  size_t size = sizeof(::content::mojom::internal::LevelDBWrapper_Put_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kLevelDBWrapper_Put_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::content::mojom::internal::LevelDBWrapper_Put_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->success = in_success;
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class LevelDBWrapper_Delete_ProxyToResponder {
 public:
  static LevelDBWrapper::DeleteCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<LevelDBWrapper_Delete_ProxyToResponder> proxy(
        new LevelDBWrapper_Delete_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&LevelDBWrapper_Delete_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~LevelDBWrapper_Delete_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "LevelDBWrapper::Delete() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  LevelDBWrapper_Delete_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(responder),
        serialization_context_(std::move(group_controller)) {
  }

  void Run(
      bool in_success);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBWrapper_Delete_ProxyToResponder);
};

void LevelDBWrapper_Delete_ProxyToResponder::Run(
    bool in_success) {
  size_t size = sizeof(::content::mojom::internal::LevelDBWrapper_Delete_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kLevelDBWrapper_Delete_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::content::mojom::internal::LevelDBWrapper_Delete_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->success = in_success;
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class LevelDBWrapper_DeleteAll_ProxyToResponder {
 public:
  static LevelDBWrapper::DeleteAllCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<LevelDBWrapper_DeleteAll_ProxyToResponder> proxy(
        new LevelDBWrapper_DeleteAll_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&LevelDBWrapper_DeleteAll_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~LevelDBWrapper_DeleteAll_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "LevelDBWrapper::DeleteAll() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  LevelDBWrapper_DeleteAll_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(responder),
        serialization_context_(std::move(group_controller)) {
  }

  void Run(
      bool in_success);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBWrapper_DeleteAll_ProxyToResponder);
};

void LevelDBWrapper_DeleteAll_ProxyToResponder::Run(
    bool in_success) {
  size_t size = sizeof(::content::mojom::internal::LevelDBWrapper_DeleteAll_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kLevelDBWrapper_DeleteAll_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::content::mojom::internal::LevelDBWrapper_DeleteAll_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->success = in_success;
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class LevelDBWrapper_Get_ProxyToResponder {
 public:
  static LevelDBWrapper::GetCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<LevelDBWrapper_Get_ProxyToResponder> proxy(
        new LevelDBWrapper_Get_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&LevelDBWrapper_Get_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~LevelDBWrapper_Get_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "LevelDBWrapper::Get() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  LevelDBWrapper_Get_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(responder),
        serialization_context_(std::move(group_controller)) {
  }

  void Run(
      bool in_success, const std::vector<uint8_t>& in_value);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBWrapper_Get_ProxyToResponder);
};

void LevelDBWrapper_Get_ProxyToResponder::Run(
    bool in_success, const std::vector<uint8_t>& in_value) {
  size_t size = sizeof(::content::mojom::internal::LevelDBWrapper_Get_ResponseParams_Data);
  size += mojo::internal::PrepareToSerialize<mojo::Array<uint8_t>>(
      in_value, &serialization_context_);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kLevelDBWrapper_Get_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::content::mojom::internal::LevelDBWrapper_Get_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->success = in_success;
  typename decltype(params->value)::BaseType* value_ptr;
  const mojo::internal::ContainerValidateParams value_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::Array<uint8_t>>(
      in_value, builder.buffer(), &value_ptr, &value_validate_params,
      &serialization_context_);
  params->value.Set(value_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->value.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null value in LevelDBWrapper.Get response");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class LevelDBWrapper_GetAll_ProxyToResponder {
 public:
  static LevelDBWrapper::GetAllCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<LevelDBWrapper_GetAll_ProxyToResponder> proxy(
        new LevelDBWrapper_GetAll_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&LevelDBWrapper_GetAll_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~LevelDBWrapper_GetAll_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "LevelDBWrapper::GetAll() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  LevelDBWrapper_GetAll_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(responder),
        serialization_context_(std::move(group_controller)) {
  }

  void Run(
      ::leveldb::mojom::DatabaseError in_status, std::vector<KeyValuePtr> in_data);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBWrapper_GetAll_ProxyToResponder);
};

void LevelDBWrapper_GetAll_ProxyToResponder::Run(
    ::leveldb::mojom::DatabaseError in_status, std::vector<KeyValuePtr> in_data) {
  size_t size = sizeof(::content::mojom::internal::LevelDBWrapper_GetAll_ResponseParams_Data);
  size += mojo::internal::PrepareToSerialize<mojo::Array<::content::mojom::KeyValuePtr>>(
      in_data, &serialization_context_);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kLevelDBWrapper_GetAll_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::content::mojom::internal::LevelDBWrapper_GetAll_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::leveldb::mojom::DatabaseError>(
      in_status, &params->status);
  typename decltype(params->data)::BaseType* data_ptr;
  const mojo::internal::ContainerValidateParams data_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::Array<::content::mojom::KeyValuePtr>>(
      in_data, builder.buffer(), &data_ptr, &data_validate_params,
      &serialization_context_);
  params->data.Set(data_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data in LevelDBWrapper.GetAll response");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}

LevelDBWrapperStub::LevelDBWrapperStub()
    : sink_(nullptr),
      control_message_handler_(LevelDBWrapper::Version_) {
}

LevelDBWrapperStub::~LevelDBWrapperStub() {}

bool LevelDBWrapperStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kLevelDBWrapper_Put_Name: {
      break;
    }
    case internal::kLevelDBWrapper_Delete_Name: {
      break;
    }
    case internal::kLevelDBWrapper_DeleteAll_Name: {
      break;
    }
    case internal::kLevelDBWrapper_Get_Name: {
      break;
    }
    case internal::kLevelDBWrapper_GetAll_Name: {
      break;
    }
  }
  return false;
}

bool LevelDBWrapperStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kLevelDBWrapper_Put_Name: {
      internal::LevelDBWrapper_Put_Params_Data* params =
          reinterpret_cast<internal::LevelDBWrapper_Put_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      std::vector<uint8_t> p_key{};
      std::vector<uint8_t> p_value{};
      std::string p_source{};
      LevelDBWrapper_Put_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadKey(&p_key))
        success = false;
      if (!input_data_view.ReadValue(&p_value))
        success = false;
      if (!input_data_view.ReadSource(&p_source))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "LevelDBWrapper::Put deserializer");
        return false;
      }
      LevelDBWrapper::PutCallback callback =
          LevelDBWrapper_Put_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "LevelDBWrapper::Put");
      mojo::internal::MessageDispatchContext context(message);
      sink_->Put(
std::move(p_key), 
std::move(p_value), 
std::move(p_source), callback);
      return true;
    }
    case internal::kLevelDBWrapper_Delete_Name: {
      internal::LevelDBWrapper_Delete_Params_Data* params =
          reinterpret_cast<internal::LevelDBWrapper_Delete_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      std::vector<uint8_t> p_key{};
      std::string p_source{};
      LevelDBWrapper_Delete_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadKey(&p_key))
        success = false;
      if (!input_data_view.ReadSource(&p_source))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "LevelDBWrapper::Delete deserializer");
        return false;
      }
      LevelDBWrapper::DeleteCallback callback =
          LevelDBWrapper_Delete_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "LevelDBWrapper::Delete");
      mojo::internal::MessageDispatchContext context(message);
      sink_->Delete(
std::move(p_key), 
std::move(p_source), callback);
      return true;
    }
    case internal::kLevelDBWrapper_DeleteAll_Name: {
      internal::LevelDBWrapper_DeleteAll_Params_Data* params =
          reinterpret_cast<internal::LevelDBWrapper_DeleteAll_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      std::string p_source{};
      LevelDBWrapper_DeleteAll_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadSource(&p_source))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "LevelDBWrapper::DeleteAll deserializer");
        return false;
      }
      LevelDBWrapper::DeleteAllCallback callback =
          LevelDBWrapper_DeleteAll_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "LevelDBWrapper::DeleteAll");
      mojo::internal::MessageDispatchContext context(message);
      sink_->DeleteAll(
std::move(p_source), callback);
      return true;
    }
    case internal::kLevelDBWrapper_Get_Name: {
      internal::LevelDBWrapper_Get_Params_Data* params =
          reinterpret_cast<internal::LevelDBWrapper_Get_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      std::vector<uint8_t> p_key{};
      LevelDBWrapper_Get_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadKey(&p_key))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "LevelDBWrapper::Get deserializer");
        return false;
      }
      LevelDBWrapper::GetCallback callback =
          LevelDBWrapper_Get_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "LevelDBWrapper::Get");
      mojo::internal::MessageDispatchContext context(message);
      sink_->Get(
std::move(p_key), callback);
      return true;
    }
    case internal::kLevelDBWrapper_GetAll_Name: {
      internal::LevelDBWrapper_GetAll_Params_Data* params =
          reinterpret_cast<internal::LevelDBWrapper_GetAll_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      std::string p_source{};
      LevelDBWrapper_GetAll_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadSource(&p_source))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "LevelDBWrapper::GetAll deserializer");
        return false;
      }
      LevelDBWrapper::GetAllCallback callback =
          LevelDBWrapper_GetAll_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "LevelDBWrapper::GetAll");
      mojo::internal::MessageDispatchContext context(message);
      sink_->GetAll(
std::move(p_source), callback);
      return true;
    }
  }
  return false;
}

LevelDBWrapperRequestValidator::LevelDBWrapperRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool LevelDBWrapperRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "LevelDBWrapper RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kLevelDBWrapper_Put_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBWrapper_Put_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kLevelDBWrapper_Delete_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBWrapper_Delete_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kLevelDBWrapper_DeleteAll_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBWrapper_DeleteAll_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kLevelDBWrapper_Get_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBWrapper_Get_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kLevelDBWrapper_GetAll_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBWrapper_GetAll_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

LevelDBWrapperResponseValidator::LevelDBWrapperResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool LevelDBWrapperResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "LevelDBWrapper ResponseValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kLevelDBWrapper_Put_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBWrapper_Put_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kLevelDBWrapper_Delete_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBWrapper_Delete_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kLevelDBWrapper_DeleteAll_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBWrapper_DeleteAll_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kLevelDBWrapper_Get_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBWrapper_Get_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kLevelDBWrapper_GetAll_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBWrapper_GetAll_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}
}  // namespace mojom
}  // namespace content

namespace mojo {


// static
bool StructTraits<::content::mojom::KeyValue, ::content::mojom::KeyValuePtr>::Read(
    ::content::mojom::KeyValueDataView input,
    ::content::mojom::KeyValuePtr* output) {
  bool success = true;
  ::content::mojom::KeyValuePtr result(::content::mojom::KeyValue::New());
  
      if (!input.ReadKey(&result->key))
        success = false;
      if (!input.ReadValue(&result->value))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo


#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_LEVELDB_WRAPPER_MOJOM_H_
#define CONTENT_COMMON_LEVELDB_WRAPPER_MOJOM_H_

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
#include "content/common/leveldb_wrapper.mojom-shared.h"
#include "components/leveldb/public/interfaces/leveldb.mojom.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"
#include "gpu/config/dx_diag_node.h"
#include "base/values.h"
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
#include "content/common/bluetooth/web_bluetooth_device_id.h"
#include "ui/gfx/geometry/size.h"
#include "base/optional.h"
#include "content/common/resource_request_completion_status.h"
#include "services/shell/public/cpp/capabilities.h"
#include "ui/gfx/geometry/point.h"
#include "ui/events/latency_info.h"
#include "content/public/common/resource_response.h"
#include "cc/output/begin_frame_args.h"
#include "cc/surfaces/surface_sequence.h"
#include "cc/output/compositor_frame_metadata.h"
#include "ui/events/event.h"
#include "cc/quads/draw_quad.h"
#include "base/files/file_path.h"
#include "ui/gfx/geometry/rect_f.h"
#include "cc/quads/render_pass.h"
#include "gpu/command_buffer/common/mailbox_holder.h"
#include "cc/resources/returned_resource.h"
#include "ui/gfx/buffer_types.h"
#include "url/origin.h"
#include "ui/gfx/geometry/point_f.h"
#include "gpu/command_buffer/common/mailbox.h"
#include "cc/input/selection.h"
#include "third_party/skia/include/core/SkBitmap.h"
#include "ui/gfx/native_widget_types.h"
#include "url/gurl.h"
#include "cc/quads/shared_quad_state.h"
#include "cc/resources/transferable_resource.h"
#include "ui/gfx/transform.h"
#include "device/bluetooth/bluetooth_uuid.h"
#include "services/shell/public/cpp/identity.h"
#include "content/common/resource_request.h"
#include "ui/gfx/geometry/rect.h"
#include "gpu/command_buffer/common/capabilities.h"
#include "cc/surfaces/surface_id.h"
#include "ui/gfx/geometry/vector2d.h"
#include "cc/quads/render_pass_id.h"
#include "content/common/content_export.h"


namespace content {
namespace mojom {
class LevelDBObserver;
using LevelDBObserverPtr = mojo::InterfacePtr<LevelDBObserver>;
using LevelDBObserverPtrInfo = mojo::InterfacePtrInfo<LevelDBObserver>;
using LevelDBObserverRequest = mojo::InterfaceRequest<LevelDBObserver>;
using LevelDBObserverAssociatedPtr =
    mojo::AssociatedInterfacePtr<LevelDBObserver>;
using LevelDBObserverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<LevelDBObserver>;
using LevelDBObserverAssociatedRequest =
    mojo::AssociatedInterfaceRequest<LevelDBObserver>;

class LevelDBWrapper;
using LevelDBWrapperPtr = mojo::InterfacePtr<LevelDBWrapper>;
using LevelDBWrapperPtrInfo = mojo::InterfacePtrInfo<LevelDBWrapper>;
using LevelDBWrapperRequest = mojo::InterfaceRequest<LevelDBWrapper>;
using LevelDBWrapperAssociatedPtr =
    mojo::AssociatedInterfacePtr<LevelDBWrapper>;
using LevelDBWrapperAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<LevelDBWrapper>;
using LevelDBWrapperAssociatedRequest =
    mojo::AssociatedInterfaceRequest<LevelDBWrapper>;

class KeyValue;
class KeyValueDataView;
using KeyValuePtr = mojo::StructPtr<KeyValue>;


class LevelDBObserverProxy;
class LevelDBObserverStub;

class LevelDBObserverRequestValidator;

class CONTENT_EXPORT LevelDBObserver {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = LevelDBObserverProxy;
  using Stub_ = LevelDBObserverStub;

  using RequestValidator_ = LevelDBObserverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~LevelDBObserver() {}

  virtual void KeyAdded(const std::vector<uint8_t>& key, const std::vector<uint8_t>& value, const std::string& source) = 0;

  virtual void KeyChanged(const std::vector<uint8_t>& key, const std::vector<uint8_t>& new_value, const std::vector<uint8_t>& old_value, const std::string& source) = 0;

  virtual void KeyDeleted(const std::vector<uint8_t>& key, const std::vector<uint8_t>& old_value, const std::string& source) = 0;

  virtual void AllDeleted(const std::string& source) = 0;

  virtual void GetAllComplete(const std::string& source) = 0;
};

class LevelDBWrapperProxy;
class LevelDBWrapperStub;

class LevelDBWrapperRequestValidator;
class LevelDBWrapperResponseValidator;

class CONTENT_EXPORT LevelDBWrapper {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = true;

  using Proxy_ = LevelDBWrapperProxy;
  using Stub_ = LevelDBWrapperStub;

  using RequestValidator_ = LevelDBWrapperRequestValidator;
  using ResponseValidator_ = LevelDBWrapperResponseValidator;
  virtual ~LevelDBWrapper() {}


  using PutCallback = base::Callback<void(bool)>;
  virtual void Put(const std::vector<uint8_t>& key, const std::vector<uint8_t>& value, const std::string& source, const PutCallback& callback) = 0;


  using DeleteCallback = base::Callback<void(bool)>;
  virtual void Delete(const std::vector<uint8_t>& key, const std::string& source, const DeleteCallback& callback) = 0;


  using DeleteAllCallback = base::Callback<void(bool)>;
  virtual void DeleteAll(const std::string& source, const DeleteAllCallback& callback) = 0;


  using GetCallback = base::Callback<void(bool, const std::vector<uint8_t>&)>;
  virtual void Get(const std::vector<uint8_t>& key, const GetCallback& callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool GetAll(const std::string& source, ::leveldb::mojom::DatabaseError* status, std::vector<KeyValuePtr>* data);

  using GetAllCallback = base::Callback<void(::leveldb::mojom::DatabaseError, std::vector<KeyValuePtr>)>;
  virtual void GetAll(const std::string& source, const GetAllCallback& callback) = 0;
};

class CONTENT_EXPORT LevelDBObserverProxy
    : public LevelDBObserver,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit LevelDBObserverProxy(mojo::MessageReceiverWithResponder* receiver);
  void KeyAdded(const std::vector<uint8_t>& key, const std::vector<uint8_t>& value, const std::string& source) override;
  void KeyChanged(const std::vector<uint8_t>& key, const std::vector<uint8_t>& new_value, const std::vector<uint8_t>& old_value, const std::string& source) override;
  void KeyDeleted(const std::vector<uint8_t>& key, const std::vector<uint8_t>& old_value, const std::string& source) override;
  void AllDeleted(const std::string& source) override;
  void GetAllComplete(const std::string& source) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class CONTENT_EXPORT LevelDBWrapperProxy
    : public LevelDBWrapper,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit LevelDBWrapperProxy(mojo::MessageReceiverWithResponder* receiver);
  void Put(const std::vector<uint8_t>& key, const std::vector<uint8_t>& value, const std::string& source, const PutCallback& callback) override;
  void Delete(const std::vector<uint8_t>& key, const std::string& source, const DeleteCallback& callback) override;
  void DeleteAll(const std::string& source, const DeleteAllCallback& callback) override;
  void Get(const std::vector<uint8_t>& key, const GetCallback& callback) override;
  bool GetAll(const std::string& source, ::leveldb::mojom::DatabaseError* status, std::vector<KeyValuePtr>* data) override;
  void GetAll(const std::string& source, const GetAllCallback& callback) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class CONTENT_EXPORT LevelDBObserverStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  LevelDBObserverStub();
  ~LevelDBObserverStub() override;
  void set_sink(LevelDBObserver* sink) { sink_ = sink; }
  LevelDBObserver* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  LevelDBObserver* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class CONTENT_EXPORT LevelDBWrapperStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  LevelDBWrapperStub();
  ~LevelDBWrapperStub() override;
  void set_sink(LevelDBWrapper* sink) { sink_ = sink; }
  LevelDBWrapper* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  LevelDBWrapper* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class CONTENT_EXPORT LevelDBObserverRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit LevelDBObserverRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT LevelDBWrapperRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit LevelDBWrapperRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT LevelDBWrapperResponseValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit LevelDBWrapperResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





class CONTENT_EXPORT KeyValue {
 public:
  using DataView = KeyValueDataView;
  using Data_ = internal::KeyValue_Data;

  static KeyValuePtr New();

  template <typename U>
  static KeyValuePtr From(const U& u) {
    return mojo::TypeConverter<KeyValuePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, KeyValue>::Convert(*this);
  }

  KeyValue();
  ~KeyValue();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = KeyValuePtr>
  KeyValuePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, KeyValue>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        KeyValuePtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        KeyValuePtr, mojo::Array<uint8_t>>(
            input, output);
  }

  std::vector<uint8_t> key;
  std::vector<uint8_t> value;
};

class KeyValueDataView {
 public:
  KeyValueDataView() {}

  KeyValueDataView(
      internal::KeyValue_Data* data,
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
 private:
  internal::KeyValue_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace content

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::content::mojom::KeyValueDataView> {
  using MojomType = ::content::mojom::KeyValuePtr;
};
}  // namespace internal
}  // namespace mojo

namespace content {
namespace mojom {


template <typename StructPtrType>
KeyValuePtr KeyValue::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->key = mojo::internal::Clone(key);
  rv->value = mojo::internal::Clone(value);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, KeyValue>::value>::type*>
bool KeyValue::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->key, other.key))
    return false;
  if (!mojo::internal::Equals(this->value, other.value))
    return false;
  return true;
}

inline void KeyValueDataView::GetKeyDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->key.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void KeyValueDataView::GetValueDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->value.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}



}  // namespace mojom
}  // namespace content

namespace mojo {


template <>
struct CONTENT_EXPORT StructTraits<::content::mojom::KeyValue, ::content::mojom::KeyValuePtr> {
  static bool IsNull(const ::content::mojom::KeyValuePtr& input) { return !input; }
  static void SetToNull(::content::mojom::KeyValuePtr* output) { output->reset(); }
  static decltype(::content::mojom::KeyValue::key)& key(
      ::content::mojom::KeyValuePtr& input) {
    return input->key;
  }
  static decltype(::content::mojom::KeyValue::value)& value(
      ::content::mojom::KeyValuePtr& input) {
    return input->value;
  }

  static bool Read(::content::mojom::KeyValueDataView input, ::content::mojom::KeyValuePtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::KeyValuePtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::mojom::KeyValue, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::content::mojom::internal::KeyValue_Data);
    decltype(CallWithContext(Traits::key, input, custom_context)) in_key = CallWithContext(Traits::key, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<uint8_t>>(
        in_key, context);
    decltype(CallWithContext(Traits::value, input, custom_context)) in_value = CallWithContext(Traits::value, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<uint8_t>>(
        in_value, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::mojom::internal::KeyValue_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::content::mojom::internal::KeyValue_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::key, input, custom_context)) in_key = CallWithContext(Traits::key, input, custom_context);
      typename decltype(result->key)::BaseType* key_ptr;
      const mojo::internal::ContainerValidateParams key_validate_params(
          0, false, nullptr);
      mojo::internal::Serialize<mojo::Array<uint8_t>>(
          in_key, buffer, &key_ptr, &key_validate_params,
          context);
      result->key.Set(key_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->key.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null key in KeyValue struct");
      decltype(CallWithContext(Traits::value, input, custom_context)) in_value = CallWithContext(Traits::value, input, custom_context);
      typename decltype(result->value)::BaseType* value_ptr;
      const mojo::internal::ContainerValidateParams value_validate_params(
          0, false, nullptr);
      mojo::internal::Serialize<mojo::Array<uint8_t>>(
          in_value, buffer, &value_ptr, &value_validate_params,
          context);
      result->value.Set(value_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->value.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null value in KeyValue struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::mojom::internal::KeyValue_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::mojom::KeyValueDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // CONTENT_COMMON_LEVELDB_WRAPPER_MOJOM_H_
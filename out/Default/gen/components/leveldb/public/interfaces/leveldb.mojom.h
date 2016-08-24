// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_LEVELDB_PUBLIC_INTERFACES_LEVELDB_MOJOM_H_
#define COMPONENTS_LEVELDB_PUBLIC_INTERFACES_LEVELDB_MOJOM_H_

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
#include "components/leveldb/public/interfaces/leveldb.mojom-shared.h"
#include "components/filesystem/public/interfaces/directory.mojom.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"


namespace leveldb {
namespace mojom {
class LevelDBService;
using LevelDBServicePtr = mojo::InterfacePtr<LevelDBService>;
using LevelDBServicePtrInfo = mojo::InterfacePtrInfo<LevelDBService>;
using LevelDBServiceRequest = mojo::InterfaceRequest<LevelDBService>;
using LevelDBServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<LevelDBService>;
using LevelDBServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<LevelDBService>;
using LevelDBServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<LevelDBService>;

class LevelDBDatabase;
using LevelDBDatabasePtr = mojo::InterfacePtr<LevelDBDatabase>;
using LevelDBDatabasePtrInfo = mojo::InterfacePtrInfo<LevelDBDatabase>;
using LevelDBDatabaseRequest = mojo::InterfaceRequest<LevelDBDatabase>;
using LevelDBDatabaseAssociatedPtr =
    mojo::AssociatedInterfacePtr<LevelDBDatabase>;
using LevelDBDatabaseAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<LevelDBDatabase>;
using LevelDBDatabaseAssociatedRequest =
    mojo::AssociatedInterfaceRequest<LevelDBDatabase>;

class BatchedOperation;
class BatchedOperationDataView;
using BatchedOperationPtr = mojo::StructPtr<BatchedOperation>;

class KeyValue;
class KeyValueDataView;
using KeyValuePtr = mojo::StructPtr<KeyValue>;

class OpenOptions;
class OpenOptionsDataView;
using OpenOptionsPtr = mojo::StructPtr<OpenOptions>;


class LevelDBServiceProxy;
class LevelDBServiceStub;

class LevelDBServiceRequestValidator;
class LevelDBServiceResponseValidator;

class  LevelDBService {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = LevelDBServiceProxy;
  using Stub_ = LevelDBServiceStub;

  using RequestValidator_ = LevelDBServiceRequestValidator;
  using ResponseValidator_ = LevelDBServiceResponseValidator;
  virtual ~LevelDBService() {}


  using OpenCallback = base::Callback<void(DatabaseError)>;
  virtual void Open(::filesystem::mojom::DirectoryPtr directory, const mojo::String& dbname, LevelDBDatabaseRequest database, const OpenCallback& callback) = 0;


  using OpenWithOptionsCallback = base::Callback<void(DatabaseError)>;
  virtual void OpenWithOptions(OpenOptionsPtr options, ::filesystem::mojom::DirectoryPtr directory, const mojo::String& dbname, LevelDBDatabaseRequest database, const OpenWithOptionsCallback& callback) = 0;


  using OpenInMemoryCallback = base::Callback<void(DatabaseError)>;
  virtual void OpenInMemory(LevelDBDatabaseRequest database, const OpenInMemoryCallback& callback) = 0;
};

class LevelDBDatabaseProxy;
class LevelDBDatabaseStub;

class LevelDBDatabaseRequestValidator;
class LevelDBDatabaseResponseValidator;

class  LevelDBDatabase {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = true;

  using Proxy_ = LevelDBDatabaseProxy;
  using Stub_ = LevelDBDatabaseStub;

  using RequestValidator_ = LevelDBDatabaseRequestValidator;
  using ResponseValidator_ = LevelDBDatabaseResponseValidator;
  virtual ~LevelDBDatabase() {}


  using PutCallback = base::Callback<void(DatabaseError)>;
  virtual void Put(mojo::Array<uint8_t> key, mojo::Array<uint8_t> value, const PutCallback& callback) = 0;


  using DeleteCallback = base::Callback<void(DatabaseError)>;
  virtual void Delete(mojo::Array<uint8_t> key, const DeleteCallback& callback) = 0;


  using DeletePrefixedCallback = base::Callback<void(DatabaseError)>;
  virtual void DeletePrefixed(mojo::Array<uint8_t> key_prefix, const DeletePrefixedCallback& callback) = 0;


  using WriteCallback = base::Callback<void(DatabaseError)>;
  virtual void Write(mojo::Array<BatchedOperationPtr> operations, const WriteCallback& callback) = 0;


  using GetCallback = base::Callback<void(DatabaseError, mojo::Array<uint8_t>)>;
  virtual void Get(mojo::Array<uint8_t> key, const GetCallback& callback) = 0;


  using GetPrefixedCallback = base::Callback<void(DatabaseError, mojo::Array<KeyValuePtr>)>;
  virtual void GetPrefixed(mojo::Array<uint8_t> key_prefix, const GetPrefixedCallback& callback) = 0;


  using GetSnapshotCallback = base::Callback<void(uint64_t)>;
  virtual void GetSnapshot(const GetSnapshotCallback& callback) = 0;

  virtual void ReleaseSnapshot(uint64_t snapshot_id) = 0;


  using GetFromSnapshotCallback = base::Callback<void(DatabaseError, mojo::Array<uint8_t>)>;
  virtual void GetFromSnapshot(uint64_t snapshot_id, mojo::Array<uint8_t> key, const GetFromSnapshotCallback& callback) = 0;


  using NewIteratorCallback = base::Callback<void(uint64_t)>;
  virtual void NewIterator(const NewIteratorCallback& callback) = 0;


  using NewIteratorFromSnapshotCallback = base::Callback<void(uint64_t)>;
  virtual void NewIteratorFromSnapshot(uint64_t snapshot_id, const NewIteratorFromSnapshotCallback& callback) = 0;

  virtual void ReleaseIterator(uint64_t iterator_id) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool IteratorSeekToFirst(uint64_t iterator_id, bool* valid, DatabaseError* status, mojo::Array<uint8_t>* key, mojo::Array<uint8_t>* value);

  using IteratorSeekToFirstCallback = base::Callback<void(bool, DatabaseError, mojo::Array<uint8_t>, mojo::Array<uint8_t>)>;
  virtual void IteratorSeekToFirst(uint64_t iterator_id, const IteratorSeekToFirstCallback& callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool IteratorSeekToLast(uint64_t iterator_id, bool* valid, DatabaseError* status, mojo::Array<uint8_t>* key, mojo::Array<uint8_t>* value);

  using IteratorSeekToLastCallback = base::Callback<void(bool, DatabaseError, mojo::Array<uint8_t>, mojo::Array<uint8_t>)>;
  virtual void IteratorSeekToLast(uint64_t iterator_id, const IteratorSeekToLastCallback& callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool IteratorSeek(uint64_t iterator_id, mojo::Array<uint8_t> target, bool* valid, DatabaseError* status, mojo::Array<uint8_t>* key, mojo::Array<uint8_t>* value);

  using IteratorSeekCallback = base::Callback<void(bool, DatabaseError, mojo::Array<uint8_t>, mojo::Array<uint8_t>)>;
  virtual void IteratorSeek(uint64_t iterator_id, mojo::Array<uint8_t> target, const IteratorSeekCallback& callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool IteratorNext(uint64_t iterator_id, bool* valid, DatabaseError* status, mojo::Array<uint8_t>* key, mojo::Array<uint8_t>* value);

  using IteratorNextCallback = base::Callback<void(bool, DatabaseError, mojo::Array<uint8_t>, mojo::Array<uint8_t>)>;
  virtual void IteratorNext(uint64_t iterator_id, const IteratorNextCallback& callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool IteratorPrev(uint64_t iterator_id, bool* valid, DatabaseError* status, mojo::Array<uint8_t>* key, mojo::Array<uint8_t>* value);

  using IteratorPrevCallback = base::Callback<void(bool, DatabaseError, mojo::Array<uint8_t>, mojo::Array<uint8_t>)>;
  virtual void IteratorPrev(uint64_t iterator_id, const IteratorPrevCallback& callback) = 0;
};

class  LevelDBServiceProxy
    : public LevelDBService,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit LevelDBServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void Open(::filesystem::mojom::DirectoryPtr directory, const mojo::String& dbname, LevelDBDatabaseRequest database, const OpenCallback& callback) override;
  void OpenWithOptions(OpenOptionsPtr options, ::filesystem::mojom::DirectoryPtr directory, const mojo::String& dbname, LevelDBDatabaseRequest database, const OpenWithOptionsCallback& callback) override;
  void OpenInMemory(LevelDBDatabaseRequest database, const OpenInMemoryCallback& callback) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class  LevelDBDatabaseProxy
    : public LevelDBDatabase,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit LevelDBDatabaseProxy(mojo::MessageReceiverWithResponder* receiver);
  void Put(mojo::Array<uint8_t> key, mojo::Array<uint8_t> value, const PutCallback& callback) override;
  void Delete(mojo::Array<uint8_t> key, const DeleteCallback& callback) override;
  void DeletePrefixed(mojo::Array<uint8_t> key_prefix, const DeletePrefixedCallback& callback) override;
  void Write(mojo::Array<BatchedOperationPtr> operations, const WriteCallback& callback) override;
  void Get(mojo::Array<uint8_t> key, const GetCallback& callback) override;
  void GetPrefixed(mojo::Array<uint8_t> key_prefix, const GetPrefixedCallback& callback) override;
  void GetSnapshot(const GetSnapshotCallback& callback) override;
  void ReleaseSnapshot(uint64_t snapshot_id) override;
  void GetFromSnapshot(uint64_t snapshot_id, mojo::Array<uint8_t> key, const GetFromSnapshotCallback& callback) override;
  void NewIterator(const NewIteratorCallback& callback) override;
  void NewIteratorFromSnapshot(uint64_t snapshot_id, const NewIteratorFromSnapshotCallback& callback) override;
  void ReleaseIterator(uint64_t iterator_id) override;
  bool IteratorSeekToFirst(uint64_t iterator_id, bool* valid, DatabaseError* status, mojo::Array<uint8_t>* key, mojo::Array<uint8_t>* value) override;
  void IteratorSeekToFirst(uint64_t iterator_id, const IteratorSeekToFirstCallback& callback) override;
  bool IteratorSeekToLast(uint64_t iterator_id, bool* valid, DatabaseError* status, mojo::Array<uint8_t>* key, mojo::Array<uint8_t>* value) override;
  void IteratorSeekToLast(uint64_t iterator_id, const IteratorSeekToLastCallback& callback) override;
  bool IteratorSeek(uint64_t iterator_id, mojo::Array<uint8_t> target, bool* valid, DatabaseError* status, mojo::Array<uint8_t>* key, mojo::Array<uint8_t>* value) override;
  void IteratorSeek(uint64_t iterator_id, mojo::Array<uint8_t> target, const IteratorSeekCallback& callback) override;
  bool IteratorNext(uint64_t iterator_id, bool* valid, DatabaseError* status, mojo::Array<uint8_t>* key, mojo::Array<uint8_t>* value) override;
  void IteratorNext(uint64_t iterator_id, const IteratorNextCallback& callback) override;
  bool IteratorPrev(uint64_t iterator_id, bool* valid, DatabaseError* status, mojo::Array<uint8_t>* key, mojo::Array<uint8_t>* value) override;
  void IteratorPrev(uint64_t iterator_id, const IteratorPrevCallback& callback) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class  LevelDBServiceStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  LevelDBServiceStub();
  ~LevelDBServiceStub() override;
  void set_sink(LevelDBService* sink) { sink_ = sink; }
  LevelDBService* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  LevelDBService* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  LevelDBDatabaseStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  LevelDBDatabaseStub();
  ~LevelDBDatabaseStub() override;
  void set_sink(LevelDBDatabase* sink) { sink_ = sink; }
  LevelDBDatabase* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  LevelDBDatabase* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  LevelDBServiceRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit LevelDBServiceRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  LevelDBDatabaseRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit LevelDBDatabaseRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  LevelDBServiceResponseValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit LevelDBServiceResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  LevelDBDatabaseResponseValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit LevelDBDatabaseResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};







class  BatchedOperation {
 public:
  using DataView = BatchedOperationDataView;
  using Data_ = internal::BatchedOperation_Data;

  static BatchedOperationPtr New();

  template <typename U>
  static BatchedOperationPtr From(const U& u) {
    return mojo::TypeConverter<BatchedOperationPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, BatchedOperation>::Convert(*this);
  }

  BatchedOperation();
  ~BatchedOperation();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = BatchedOperationPtr>
  BatchedOperationPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, BatchedOperation>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        BatchedOperationPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        BatchedOperationPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  BatchOperationType type;
  mojo::Array<uint8_t> key;
  mojo::Array<uint8_t> value;
 private:
  DISALLOW_COPY_AND_ASSIGN(BatchedOperation);
};

class BatchedOperationDataView {
 public:
  BatchedOperationDataView() {}

  BatchedOperationDataView(
      internal::BatchedOperation_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::leveldb::mojom::BatchOperationType>(
        data_value, output);
  }

  ::leveldb::mojom::BatchOperationType type() const {
    return static_cast<::leveldb::mojom::BatchOperationType>(data_->type);
  }
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
  internal::BatchedOperation_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace leveldb

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::leveldb::mojom::BatchedOperationDataView> {
  using MojomType = ::leveldb::mojom::BatchedOperationPtr;
};
}  // namespace internal
}  // namespace mojo

namespace leveldb {
namespace mojom {



class  KeyValue {
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

  mojo::Array<uint8_t> key;
  mojo::Array<uint8_t> value;
 private:
  DISALLOW_COPY_AND_ASSIGN(KeyValue);
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
}  // namespace leveldb

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::leveldb::mojom::KeyValueDataView> {
  using MojomType = ::leveldb::mojom::KeyValuePtr;
};
}  // namespace internal
}  // namespace mojo

namespace leveldb {
namespace mojom {



class  OpenOptions {
 public:
  using DataView = OpenOptionsDataView;
  using Data_ = internal::OpenOptions_Data;

  static OpenOptionsPtr New();

  template <typename U>
  static OpenOptionsPtr From(const U& u) {
    return mojo::TypeConverter<OpenOptionsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, OpenOptions>::Convert(*this);
  }

  OpenOptions();
  ~OpenOptions();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = OpenOptionsPtr>
  OpenOptionsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, OpenOptions>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        OpenOptionsPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        OpenOptionsPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  bool create_if_missing;
  bool error_if_exists;
  bool paranoid_checks;
  uint64_t write_buffer_size;
  int32_t max_open_files;
};

class OpenOptionsDataView {
 public:
  OpenOptionsDataView() {}

  OpenOptionsDataView(
      internal::OpenOptions_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool create_if_missing() const {
    return data_->create_if_missing;
  }
  bool error_if_exists() const {
    return data_->error_if_exists;
  }
  bool paranoid_checks() const {
    return data_->paranoid_checks;
  }
  uint64_t write_buffer_size() const {
    return data_->write_buffer_size;
  }
  int32_t max_open_files() const {
    return data_->max_open_files;
  }
 private:
  internal::OpenOptions_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace leveldb

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::leveldb::mojom::OpenOptionsDataView> {
  using MojomType = ::leveldb::mojom::OpenOptionsPtr;
};
}  // namespace internal
}  // namespace mojo

namespace leveldb {
namespace mojom {


template <typename StructPtrType>
BatchedOperationPtr BatchedOperation::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->type = mojo::internal::Clone(type);
  rv->key = mojo::internal::Clone(key);
  rv->value = mojo::internal::Clone(value);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, BatchedOperation>::value>::type*>
bool BatchedOperation::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->type, other.type))
    return false;
  if (!mojo::internal::Equals(this->key, other.key))
    return false;
  if (!mojo::internal::Equals(this->value, other.value))
    return false;
  return true;
}

inline void BatchedOperationDataView::GetKeyDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->key.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void BatchedOperationDataView::GetValueDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->value.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}

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

template <typename StructPtrType>
OpenOptionsPtr OpenOptions::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->create_if_missing = mojo::internal::Clone(create_if_missing);
  rv->error_if_exists = mojo::internal::Clone(error_if_exists);
  rv->paranoid_checks = mojo::internal::Clone(paranoid_checks);
  rv->write_buffer_size = mojo::internal::Clone(write_buffer_size);
  rv->max_open_files = mojo::internal::Clone(max_open_files);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, OpenOptions>::value>::type*>
bool OpenOptions::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->create_if_missing, other.create_if_missing))
    return false;
  if (!mojo::internal::Equals(this->error_if_exists, other.error_if_exists))
    return false;
  if (!mojo::internal::Equals(this->paranoid_checks, other.paranoid_checks))
    return false;
  if (!mojo::internal::Equals(this->write_buffer_size, other.write_buffer_size))
    return false;
  if (!mojo::internal::Equals(this->max_open_files, other.max_open_files))
    return false;
  return true;
}




}  // namespace mojom
}  // namespace leveldb

namespace mojo {


template <>
struct  StructTraits<::leveldb::mojom::BatchedOperation, ::leveldb::mojom::BatchedOperationPtr> {
  static bool IsNull(const ::leveldb::mojom::BatchedOperationPtr& input) { return !input; }
  static void SetToNull(::leveldb::mojom::BatchedOperationPtr* output) { output->reset(); }
  static decltype(::leveldb::mojom::BatchedOperation::type) type(
      const ::leveldb::mojom::BatchedOperationPtr& input) {
    return input->type;
  }
  static decltype(::leveldb::mojom::BatchedOperation::key)& key(
      ::leveldb::mojom::BatchedOperationPtr& input) {
    return input->key;
  }
  static decltype(::leveldb::mojom::BatchedOperation::value)& value(
      ::leveldb::mojom::BatchedOperationPtr& input) {
    return input->value;
  }

  static bool Read(::leveldb::mojom::BatchedOperationDataView input, ::leveldb::mojom::BatchedOperationPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::leveldb::mojom::BatchedOperationPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::leveldb::mojom::BatchedOperation, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::leveldb::mojom::internal::BatchedOperation_Data);
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
                        ::leveldb::mojom::internal::BatchedOperation_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::leveldb::mojom::internal::BatchedOperation_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      mojo::internal::Serialize<::leveldb::mojom::BatchOperationType>(
          CallWithContext(Traits::type, input, custom_context), &result->type);
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
          "null key in BatchedOperation struct");
      decltype(CallWithContext(Traits::value, input, custom_context)) in_value = CallWithContext(Traits::value, input, custom_context);
      typename decltype(result->value)::BaseType* value_ptr;
      const mojo::internal::ContainerValidateParams value_validate_params(
          0, false, nullptr);
      mojo::internal::Serialize<mojo::Array<uint8_t>>(
          in_value, buffer, &value_ptr, &value_validate_params,
          context);
      result->value.Set(value_ptr);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::leveldb::mojom::internal::BatchedOperation_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::leveldb::mojom::BatchedOperationDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::leveldb::mojom::KeyValue, ::leveldb::mojom::KeyValuePtr> {
  static bool IsNull(const ::leveldb::mojom::KeyValuePtr& input) { return !input; }
  static void SetToNull(::leveldb::mojom::KeyValuePtr* output) { output->reset(); }
  static decltype(::leveldb::mojom::KeyValue::key)& key(
      ::leveldb::mojom::KeyValuePtr& input) {
    return input->key;
  }
  static decltype(::leveldb::mojom::KeyValue::value)& value(
      ::leveldb::mojom::KeyValuePtr& input) {
    return input->value;
  }

  static bool Read(::leveldb::mojom::KeyValueDataView input, ::leveldb::mojom::KeyValuePtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::leveldb::mojom::KeyValuePtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::leveldb::mojom::KeyValue, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::leveldb::mojom::internal::KeyValue_Data);
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
                        ::leveldb::mojom::internal::KeyValue_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::leveldb::mojom::internal::KeyValue_Data::New(buffer);
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

  static bool Deserialize(::leveldb::mojom::internal::KeyValue_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::leveldb::mojom::KeyValueDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::leveldb::mojom::OpenOptions, ::leveldb::mojom::OpenOptionsPtr> {
  static bool IsNull(const ::leveldb::mojom::OpenOptionsPtr& input) { return !input; }
  static void SetToNull(::leveldb::mojom::OpenOptionsPtr* output) { output->reset(); }
  static decltype(::leveldb::mojom::OpenOptions::create_if_missing) create_if_missing(
      const ::leveldb::mojom::OpenOptionsPtr& input) {
    return input->create_if_missing;
  }
  static decltype(::leveldb::mojom::OpenOptions::error_if_exists) error_if_exists(
      const ::leveldb::mojom::OpenOptionsPtr& input) {
    return input->error_if_exists;
  }
  static decltype(::leveldb::mojom::OpenOptions::paranoid_checks) paranoid_checks(
      const ::leveldb::mojom::OpenOptionsPtr& input) {
    return input->paranoid_checks;
  }
  static decltype(::leveldb::mojom::OpenOptions::write_buffer_size) write_buffer_size(
      const ::leveldb::mojom::OpenOptionsPtr& input) {
    return input->write_buffer_size;
  }
  static decltype(::leveldb::mojom::OpenOptions::max_open_files) max_open_files(
      const ::leveldb::mojom::OpenOptionsPtr& input) {
    return input->max_open_files;
  }

  static bool Read(::leveldb::mojom::OpenOptionsDataView input, ::leveldb::mojom::OpenOptionsPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::leveldb::mojom::OpenOptionsPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::leveldb::mojom::OpenOptions, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::leveldb::mojom::internal::OpenOptions_Data);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::leveldb::mojom::internal::OpenOptions_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::leveldb::mojom::internal::OpenOptions_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->create_if_missing = CallWithContext(Traits::create_if_missing, input, custom_context);
      result->error_if_exists = CallWithContext(Traits::error_if_exists, input, custom_context);
      result->paranoid_checks = CallWithContext(Traits::paranoid_checks, input, custom_context);
      result->write_buffer_size = CallWithContext(Traits::write_buffer_size, input, custom_context);
      result->max_open_files = CallWithContext(Traits::max_open_files, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::leveldb::mojom::internal::OpenOptions_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::leveldb::mojom::OpenOptionsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // COMPONENTS_LEVELDB_PUBLIC_INTERFACES_LEVELDB_MOJOM_H_
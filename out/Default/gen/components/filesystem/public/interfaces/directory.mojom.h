// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_FILESYSTEM_PUBLIC_INTERFACES_DIRECTORY_MOJOM_H_
#define COMPONENTS_FILESYSTEM_PUBLIC_INTERFACES_DIRECTORY_MOJOM_H_

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
#include "components/filesystem/public/interfaces/directory.mojom-shared.h"
#include "components/filesystem/public/interfaces/file.mojom.h"
#include "components/filesystem/public/interfaces/types.mojom.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"


namespace filesystem {
namespace mojom {
class Directory;
using DirectoryPtr = mojo::InterfacePtr<Directory>;
using DirectoryPtrInfo = mojo::InterfacePtrInfo<Directory>;
using DirectoryRequest = mojo::InterfaceRequest<Directory>;
using DirectoryAssociatedPtr =
    mojo::AssociatedInterfacePtr<Directory>;
using DirectoryAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Directory>;
using DirectoryAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Directory>;

class FileOpenDetails;
class FileOpenDetailsDataView;
using FileOpenDetailsPtr = mojo::InlinedStructPtr<FileOpenDetails>;

class FileOpenResult;
class FileOpenResultDataView;
using FileOpenResultPtr = mojo::StructPtr<FileOpenResult>;


class DirectoryProxy;
class DirectoryStub;

class DirectoryRequestValidator;
class DirectoryResponseValidator;

class  Directory {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = true;

  using Proxy_ = DirectoryProxy;
  using Stub_ = DirectoryStub;

  using RequestValidator_ = DirectoryRequestValidator;
  using ResponseValidator_ = DirectoryResponseValidator;
  virtual ~Directory() {}

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool Read(::filesystem::mojom::FileError* error, mojo::Array<::filesystem::mojom::DirectoryEntryPtr>* directory_contents);

  using ReadCallback = base::Callback<void(::filesystem::mojom::FileError, mojo::Array<::filesystem::mojom::DirectoryEntryPtr>)>;
  virtual void Read(const ReadCallback& callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool OpenFile(const mojo::String& path, ::filesystem::mojom::FileRequest file, uint32_t open_flags, ::filesystem::mojom::FileError* error);

  using OpenFileCallback = base::Callback<void(::filesystem::mojom::FileError)>;
  virtual void OpenFile(const mojo::String& path, ::filesystem::mojom::FileRequest file, uint32_t open_flags, const OpenFileCallback& callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool OpenFileHandle(const mojo::String& path, uint32_t open_flags, ::filesystem::mojom::FileError* error, mojo::ScopedHandle* file_handle);

  using OpenFileHandleCallback = base::Callback<void(::filesystem::mojom::FileError, mojo::ScopedHandle)>;
  virtual void OpenFileHandle(const mojo::String& path, uint32_t open_flags, const OpenFileHandleCallback& callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool OpenFileHandles(mojo::Array<FileOpenDetailsPtr> files, mojo::Array<FileOpenResultPtr>* results);

  using OpenFileHandlesCallback = base::Callback<void(mojo::Array<FileOpenResultPtr>)>;
  virtual void OpenFileHandles(mojo::Array<FileOpenDetailsPtr> files, const OpenFileHandlesCallback& callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool OpenDirectory(const mojo::String& path, DirectoryRequest directory, uint32_t open_flags, ::filesystem::mojom::FileError* error);

  using OpenDirectoryCallback = base::Callback<void(::filesystem::mojom::FileError)>;
  virtual void OpenDirectory(const mojo::String& path, DirectoryRequest directory, uint32_t open_flags, const OpenDirectoryCallback& callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool Rename(const mojo::String& path, const mojo::String& new_path, ::filesystem::mojom::FileError* error);

  using RenameCallback = base::Callback<void(::filesystem::mojom::FileError)>;
  virtual void Rename(const mojo::String& path, const mojo::String& new_path, const RenameCallback& callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool Delete(const mojo::String& path, uint32_t delete_flags, ::filesystem::mojom::FileError* error);

  using DeleteCallback = base::Callback<void(::filesystem::mojom::FileError)>;
  virtual void Delete(const mojo::String& path, uint32_t delete_flags, const DeleteCallback& callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool Exists(const mojo::String& path, ::filesystem::mojom::FileError* error, bool* exists);

  using ExistsCallback = base::Callback<void(::filesystem::mojom::FileError, bool)>;
  virtual void Exists(const mojo::String& path, const ExistsCallback& callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool IsWritable(const mojo::String& path, ::filesystem::mojom::FileError* error, bool* is_writable);

  using IsWritableCallback = base::Callback<void(::filesystem::mojom::FileError, bool)>;
  virtual void IsWritable(const mojo::String& path, const IsWritableCallback& callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool Flush(::filesystem::mojom::FileError* error);

  using FlushCallback = base::Callback<void(::filesystem::mojom::FileError)>;
  virtual void Flush(const FlushCallback& callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool StatFile(const mojo::String& path, ::filesystem::mojom::FileError* error, ::filesystem::mojom::FileInformationPtr* file_information);

  using StatFileCallback = base::Callback<void(::filesystem::mojom::FileError, ::filesystem::mojom::FileInformationPtr)>;
  virtual void StatFile(const mojo::String& path, const StatFileCallback& callback) = 0;

  virtual void Clone(DirectoryRequest directory) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool ReadEntireFile(const mojo::String& path, ::filesystem::mojom::FileError* error, mojo::Array<uint8_t>* data);

  using ReadEntireFileCallback = base::Callback<void(::filesystem::mojom::FileError, mojo::Array<uint8_t>)>;
  virtual void ReadEntireFile(const mojo::String& path, const ReadEntireFileCallback& callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool WriteFile(const mojo::String& path, mojo::Array<uint8_t> data, ::filesystem::mojom::FileError* error);

  using WriteFileCallback = base::Callback<void(::filesystem::mojom::FileError)>;
  virtual void WriteFile(const mojo::String& path, mojo::Array<uint8_t> data, const WriteFileCallback& callback) = 0;
};

class  DirectoryProxy
    : public Directory,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit DirectoryProxy(mojo::MessageReceiverWithResponder* receiver);
  bool Read(::filesystem::mojom::FileError* error, mojo::Array<::filesystem::mojom::DirectoryEntryPtr>* directory_contents) override;
  void Read(const ReadCallback& callback) override;
  bool OpenFile(const mojo::String& path, ::filesystem::mojom::FileRequest file, uint32_t open_flags, ::filesystem::mojom::FileError* error) override;
  void OpenFile(const mojo::String& path, ::filesystem::mojom::FileRequest file, uint32_t open_flags, const OpenFileCallback& callback) override;
  bool OpenFileHandle(const mojo::String& path, uint32_t open_flags, ::filesystem::mojom::FileError* error, mojo::ScopedHandle* file_handle) override;
  void OpenFileHandle(const mojo::String& path, uint32_t open_flags, const OpenFileHandleCallback& callback) override;
  bool OpenFileHandles(mojo::Array<FileOpenDetailsPtr> files, mojo::Array<FileOpenResultPtr>* results) override;
  void OpenFileHandles(mojo::Array<FileOpenDetailsPtr> files, const OpenFileHandlesCallback& callback) override;
  bool OpenDirectory(const mojo::String& path, DirectoryRequest directory, uint32_t open_flags, ::filesystem::mojom::FileError* error) override;
  void OpenDirectory(const mojo::String& path, DirectoryRequest directory, uint32_t open_flags, const OpenDirectoryCallback& callback) override;
  bool Rename(const mojo::String& path, const mojo::String& new_path, ::filesystem::mojom::FileError* error) override;
  void Rename(const mojo::String& path, const mojo::String& new_path, const RenameCallback& callback) override;
  bool Delete(const mojo::String& path, uint32_t delete_flags, ::filesystem::mojom::FileError* error) override;
  void Delete(const mojo::String& path, uint32_t delete_flags, const DeleteCallback& callback) override;
  bool Exists(const mojo::String& path, ::filesystem::mojom::FileError* error, bool* exists) override;
  void Exists(const mojo::String& path, const ExistsCallback& callback) override;
  bool IsWritable(const mojo::String& path, ::filesystem::mojom::FileError* error, bool* is_writable) override;
  void IsWritable(const mojo::String& path, const IsWritableCallback& callback) override;
  bool Flush(::filesystem::mojom::FileError* error) override;
  void Flush(const FlushCallback& callback) override;
  bool StatFile(const mojo::String& path, ::filesystem::mojom::FileError* error, ::filesystem::mojom::FileInformationPtr* file_information) override;
  void StatFile(const mojo::String& path, const StatFileCallback& callback) override;
  void Clone(DirectoryRequest directory) override;
  bool ReadEntireFile(const mojo::String& path, ::filesystem::mojom::FileError* error, mojo::Array<uint8_t>* data) override;
  void ReadEntireFile(const mojo::String& path, const ReadEntireFileCallback& callback) override;
  bool WriteFile(const mojo::String& path, mojo::Array<uint8_t> data, ::filesystem::mojom::FileError* error) override;
  void WriteFile(const mojo::String& path, mojo::Array<uint8_t> data, const WriteFileCallback& callback) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class  DirectoryStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  DirectoryStub();
  ~DirectoryStub() override;
  void set_sink(Directory* sink) { sink_ = sink; }
  Directory* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  Directory* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  DirectoryRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit DirectoryRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  DirectoryResponseValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit DirectoryResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};


class  FileOpenDetails {
 public:
  using DataView = FileOpenDetailsDataView;
  using Data_ = internal::FileOpenDetails_Data;

  static FileOpenDetailsPtr New();

  template <typename U>
  static FileOpenDetailsPtr From(const U& u) {
    return mojo::TypeConverter<FileOpenDetailsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, FileOpenDetails>::Convert(*this);
  }

  FileOpenDetails();
  ~FileOpenDetails();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = FileOpenDetailsPtr>
  FileOpenDetailsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, FileOpenDetails>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        FileOpenDetailsPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        FileOpenDetailsPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  mojo::String path;
  uint32_t open_flags;
};

class FileOpenDetailsDataView {
 public:
  FileOpenDetailsDataView() {}

  FileOpenDetailsDataView(
      internal::FileOpenDetails_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPathDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadPath(UserType* output) {
    auto pointer = data_->path.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  uint32_t open_flags() const {
    return data_->open_flags;
  }
 private:
  internal::FileOpenDetails_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace filesystem

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::filesystem::mojom::FileOpenDetailsDataView> {
  using MojomType = ::filesystem::mojom::FileOpenDetailsPtr;
};
}  // namespace internal
}  // namespace mojo

namespace filesystem {
namespace mojom {







class  FileOpenResult {
 public:
  using DataView = FileOpenResultDataView;
  using Data_ = internal::FileOpenResult_Data;

  static FileOpenResultPtr New();

  template <typename U>
  static FileOpenResultPtr From(const U& u) {
    return mojo::TypeConverter<FileOpenResultPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, FileOpenResult>::Convert(*this);
  }

  FileOpenResult();
  ~FileOpenResult();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = FileOpenResultPtr>
  FileOpenResultPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, FileOpenResult>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        FileOpenResultPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        FileOpenResultPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  mojo::String path;
  ::filesystem::mojom::FileError error;
  mojo::ScopedHandle file_handle;
 private:
  DISALLOW_COPY_AND_ASSIGN(FileOpenResult);
};

class FileOpenResultDataView {
 public:
  FileOpenResultDataView() {}

  FileOpenResultDataView(
      internal::FileOpenResult_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPathDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadPath(UserType* output) {
    auto pointer = data_->path.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  template <typename UserType>
  bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::filesystem::mojom::FileError>(
        data_value, output);
  }

  ::filesystem::mojom::FileError error() const {
    return static_cast<::filesystem::mojom::FileError>(data_->error);
  }
  mojo::ScopedHandle TakeFileHandle() {
    mojo::ScopedHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedHandle>(
            &data_->file_handle, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::FileOpenResult_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace filesystem

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::filesystem::mojom::FileOpenResultDataView> {
  using MojomType = ::filesystem::mojom::FileOpenResultPtr;
};
}  // namespace internal
}  // namespace mojo

namespace filesystem {
namespace mojom {


template <typename StructPtrType>
FileOpenDetailsPtr FileOpenDetails::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->path = mojo::internal::Clone(path);
  rv->open_flags = mojo::internal::Clone(open_flags);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, FileOpenDetails>::value>::type*>
bool FileOpenDetails::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->path, other.path))
    return false;
  if (!mojo::internal::Equals(this->open_flags, other.open_flags))
    return false;
  return true;
}

inline void FileOpenDetailsDataView::GetPathDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->path.Get();
  *output = mojo::StringDataView(pointer, context_);
}

template <typename StructPtrType>
FileOpenResultPtr FileOpenResult::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->path = mojo::internal::Clone(path);
  rv->error = mojo::internal::Clone(error);
  rv->file_handle = mojo::internal::Clone(file_handle);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, FileOpenResult>::value>::type*>
bool FileOpenResult::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->path, other.path))
    return false;
  if (!mojo::internal::Equals(this->error, other.error))
    return false;
  if (!mojo::internal::Equals(this->file_handle, other.file_handle))
    return false;
  return true;
}

inline void FileOpenResultDataView::GetPathDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->path.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace filesystem

namespace mojo {


template <>
struct  StructTraits<::filesystem::mojom::FileOpenDetails, ::filesystem::mojom::FileOpenDetailsPtr> {
  static bool IsNull(const ::filesystem::mojom::FileOpenDetailsPtr& input) { return !input; }
  static void SetToNull(::filesystem::mojom::FileOpenDetailsPtr* output) { output->reset(); }
  static decltype(::filesystem::mojom::FileOpenDetails::path)& path(
      ::filesystem::mojom::FileOpenDetailsPtr& input) {
    return input->path;
  }
  static decltype(::filesystem::mojom::FileOpenDetails::open_flags) open_flags(
      const ::filesystem::mojom::FileOpenDetailsPtr& input) {
    return input->open_flags;
  }

  static bool Read(::filesystem::mojom::FileOpenDetailsDataView input, ::filesystem::mojom::FileOpenDetailsPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::filesystem::mojom::FileOpenDetailsPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::filesystem::mojom::FileOpenDetails, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::filesystem::mojom::internal::FileOpenDetails_Data);
    decltype(CallWithContext(Traits::path, input, custom_context)) in_path = CallWithContext(Traits::path, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_path, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::filesystem::mojom::internal::FileOpenDetails_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::filesystem::mojom::internal::FileOpenDetails_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::path, input, custom_context)) in_path = CallWithContext(Traits::path, input, custom_context);
      typename decltype(result->path)::BaseType* path_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_path, buffer, &path_ptr, context);
      result->path.Set(path_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->path.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null path in FileOpenDetails struct");
      result->open_flags = CallWithContext(Traits::open_flags, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::filesystem::mojom::internal::FileOpenDetails_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::filesystem::mojom::FileOpenDetailsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::filesystem::mojom::FileOpenResult, ::filesystem::mojom::FileOpenResultPtr> {
  static bool IsNull(const ::filesystem::mojom::FileOpenResultPtr& input) { return !input; }
  static void SetToNull(::filesystem::mojom::FileOpenResultPtr* output) { output->reset(); }
  static decltype(::filesystem::mojom::FileOpenResult::path)& path(
      ::filesystem::mojom::FileOpenResultPtr& input) {
    return input->path;
  }
  static decltype(::filesystem::mojom::FileOpenResult::error) error(
      const ::filesystem::mojom::FileOpenResultPtr& input) {
    return input->error;
  }
  static decltype(::filesystem::mojom::FileOpenResult::file_handle)& file_handle(
      ::filesystem::mojom::FileOpenResultPtr& input) {
    return input->file_handle;
  }

  static bool Read(::filesystem::mojom::FileOpenResultDataView input, ::filesystem::mojom::FileOpenResultPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::filesystem::mojom::FileOpenResultPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::filesystem::mojom::FileOpenResult, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::filesystem::mojom::internal::FileOpenResult_Data);
    decltype(CallWithContext(Traits::path, input, custom_context)) in_path = CallWithContext(Traits::path, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_path, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::filesystem::mojom::internal::FileOpenResult_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::filesystem::mojom::internal::FileOpenResult_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::path, input, custom_context)) in_path = CallWithContext(Traits::path, input, custom_context);
      typename decltype(result->path)::BaseType* path_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_path, buffer, &path_ptr, context);
      result->path.Set(path_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->path.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null path in FileOpenResult struct");
      mojo::internal::Serialize<::filesystem::mojom::FileError>(
          CallWithContext(Traits::error, input, custom_context), &result->error);
      decltype(CallWithContext(Traits::file_handle, input, custom_context)) in_file_handle = CallWithContext(Traits::file_handle, input, custom_context);
      mojo::internal::Serialize<mojo::ScopedHandle>(
          in_file_handle, &result->file_handle, context);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          !mojo::internal::IsHandleOrInterfaceValid(result->file_handle),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
          "invalid file_handle in FileOpenResult struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::filesystem::mojom::internal::FileOpenResult_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::filesystem::mojom::FileOpenResultDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // COMPONENTS_FILESYSTEM_PUBLIC_INTERFACES_DIRECTORY_MOJOM_H_
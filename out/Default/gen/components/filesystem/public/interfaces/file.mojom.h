// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_FILESYSTEM_PUBLIC_INTERFACES_FILE_MOJOM_H_
#define COMPONENTS_FILESYSTEM_PUBLIC_INTERFACES_FILE_MOJOM_H_

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
#include "components/filesystem/public/interfaces/file.mojom-shared.h"
#include "components/filesystem/public/interfaces/types.mojom.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"


namespace filesystem {
namespace mojom {
class File;
using FilePtr = mojo::InterfacePtr<File>;
using FilePtrInfo = mojo::InterfacePtrInfo<File>;
using FileRequest = mojo::InterfaceRequest<File>;
using FileAssociatedPtr =
    mojo::AssociatedInterfacePtr<File>;
using FileAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<File>;
using FileAssociatedRequest =
    mojo::AssociatedInterfaceRequest<File>;


class FileProxy;
class FileStub;

class FileRequestValidator;
class FileResponseValidator;

class  File {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = true;

  using Proxy_ = FileProxy;
  using Stub_ = FileStub;

  using RequestValidator_ = FileRequestValidator;
  using ResponseValidator_ = FileResponseValidator;
  virtual ~File() {}

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool Close(::filesystem::mojom::FileError* err);

  using CloseCallback = base::Callback<void(::filesystem::mojom::FileError)>;
  virtual void Close(const CloseCallback& callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool Read(uint32_t num_bytes_to_read, int64_t offset, ::filesystem::mojom::Whence whence, ::filesystem::mojom::FileError* error, mojo::Array<uint8_t>* bytes_read);

  using ReadCallback = base::Callback<void(::filesystem::mojom::FileError, mojo::Array<uint8_t>)>;
  virtual void Read(uint32_t num_bytes_to_read, int64_t offset, ::filesystem::mojom::Whence whence, const ReadCallback& callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool Write(mojo::Array<uint8_t> bytes_to_write, int64_t offset, ::filesystem::mojom::Whence whence, ::filesystem::mojom::FileError* error, uint32_t* num_bytes_written);

  using WriteCallback = base::Callback<void(::filesystem::mojom::FileError, uint32_t)>;
  virtual void Write(mojo::Array<uint8_t> bytes_to_write, int64_t offset, ::filesystem::mojom::Whence whence, const WriteCallback& callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool Tell(::filesystem::mojom::FileError* error, int64_t* position);

  using TellCallback = base::Callback<void(::filesystem::mojom::FileError, int64_t)>;
  virtual void Tell(const TellCallback& callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool Seek(int64_t offset, ::filesystem::mojom::Whence whence, ::filesystem::mojom::FileError* error, int64_t* position);

  using SeekCallback = base::Callback<void(::filesystem::mojom::FileError, int64_t)>;
  virtual void Seek(int64_t offset, ::filesystem::mojom::Whence whence, const SeekCallback& callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool Stat(::filesystem::mojom::FileError* error, ::filesystem::mojom::FileInformationPtr* file_information);

  using StatCallback = base::Callback<void(::filesystem::mojom::FileError, ::filesystem::mojom::FileInformationPtr)>;
  virtual void Stat(const StatCallback& callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool Truncate(int64_t size, ::filesystem::mojom::FileError* error);

  using TruncateCallback = base::Callback<void(::filesystem::mojom::FileError)>;
  virtual void Truncate(int64_t size, const TruncateCallback& callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool Touch(::filesystem::mojom::TimespecOrNowPtr atime, ::filesystem::mojom::TimespecOrNowPtr mtime, ::filesystem::mojom::FileError* error);

  using TouchCallback = base::Callback<void(::filesystem::mojom::FileError)>;
  virtual void Touch(::filesystem::mojom::TimespecOrNowPtr atime, ::filesystem::mojom::TimespecOrNowPtr mtime, const TouchCallback& callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool Dup(FileRequest file, ::filesystem::mojom::FileError* error);

  using DupCallback = base::Callback<void(::filesystem::mojom::FileError)>;
  virtual void Dup(FileRequest file, const DupCallback& callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool Flush(::filesystem::mojom::FileError* error);

  using FlushCallback = base::Callback<void(::filesystem::mojom::FileError)>;
  virtual void Flush(const FlushCallback& callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool Lock(::filesystem::mojom::FileError* error);

  using LockCallback = base::Callback<void(::filesystem::mojom::FileError)>;
  virtual void Lock(const LockCallback& callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool Unlock(::filesystem::mojom::FileError* error);

  using UnlockCallback = base::Callback<void(::filesystem::mojom::FileError)>;
  virtual void Unlock(const UnlockCallback& callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool AsHandle(::filesystem::mojom::FileError* error, mojo::ScopedHandle* file_handle);

  using AsHandleCallback = base::Callback<void(::filesystem::mojom::FileError, mojo::ScopedHandle)>;
  virtual void AsHandle(const AsHandleCallback& callback) = 0;
};

class  FileProxy
    : public File,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit FileProxy(mojo::MessageReceiverWithResponder* receiver);
  bool Close(::filesystem::mojom::FileError* err) override;
  void Close(const CloseCallback& callback) override;
  bool Read(uint32_t num_bytes_to_read, int64_t offset, ::filesystem::mojom::Whence whence, ::filesystem::mojom::FileError* error, mojo::Array<uint8_t>* bytes_read) override;
  void Read(uint32_t num_bytes_to_read, int64_t offset, ::filesystem::mojom::Whence whence, const ReadCallback& callback) override;
  bool Write(mojo::Array<uint8_t> bytes_to_write, int64_t offset, ::filesystem::mojom::Whence whence, ::filesystem::mojom::FileError* error, uint32_t* num_bytes_written) override;
  void Write(mojo::Array<uint8_t> bytes_to_write, int64_t offset, ::filesystem::mojom::Whence whence, const WriteCallback& callback) override;
  bool Tell(::filesystem::mojom::FileError* error, int64_t* position) override;
  void Tell(const TellCallback& callback) override;
  bool Seek(int64_t offset, ::filesystem::mojom::Whence whence, ::filesystem::mojom::FileError* error, int64_t* position) override;
  void Seek(int64_t offset, ::filesystem::mojom::Whence whence, const SeekCallback& callback) override;
  bool Stat(::filesystem::mojom::FileError* error, ::filesystem::mojom::FileInformationPtr* file_information) override;
  void Stat(const StatCallback& callback) override;
  bool Truncate(int64_t size, ::filesystem::mojom::FileError* error) override;
  void Truncate(int64_t size, const TruncateCallback& callback) override;
  bool Touch(::filesystem::mojom::TimespecOrNowPtr atime, ::filesystem::mojom::TimespecOrNowPtr mtime, ::filesystem::mojom::FileError* error) override;
  void Touch(::filesystem::mojom::TimespecOrNowPtr atime, ::filesystem::mojom::TimespecOrNowPtr mtime, const TouchCallback& callback) override;
  bool Dup(FileRequest file, ::filesystem::mojom::FileError* error) override;
  void Dup(FileRequest file, const DupCallback& callback) override;
  bool Flush(::filesystem::mojom::FileError* error) override;
  void Flush(const FlushCallback& callback) override;
  bool Lock(::filesystem::mojom::FileError* error) override;
  void Lock(const LockCallback& callback) override;
  bool Unlock(::filesystem::mojom::FileError* error) override;
  void Unlock(const UnlockCallback& callback) override;
  bool AsHandle(::filesystem::mojom::FileError* error, mojo::ScopedHandle* file_handle) override;
  void AsHandle(const AsHandleCallback& callback) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class  FileStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  FileStub();
  ~FileStub() override;
  void set_sink(File* sink) { sink_ = sink; }
  File* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  File* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  FileRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit FileRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  FileResponseValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit FileResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace filesystem

namespace mojo {

}  // namespace mojo

#endif  // COMPONENTS_FILESYSTEM_PUBLIC_INTERFACES_FILE_MOJOM_H_
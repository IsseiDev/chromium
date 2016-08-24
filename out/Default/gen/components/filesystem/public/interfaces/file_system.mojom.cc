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

#include "components/filesystem/public/interfaces/file_system.mojom.h"

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
namespace filesystem {
namespace mojom {

namespace {

class FileSystem_OpenTempDirectory_ParamsDataView {
 public:
  FileSystem_OpenTempDirectory_ParamsDataView() {}

  FileSystem_OpenTempDirectory_ParamsDataView(
      internal::FileSystem_OpenTempDirectory_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  ::filesystem::mojom::DirectoryRequest TakeDirectory() {
    ::filesystem::mojom::DirectoryRequest result;
    bool ret =
        mojo::internal::Deserialize<::filesystem::mojom::DirectoryRequest>(
            &data_->directory, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::FileSystem_OpenTempDirectory_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



class FileSystem_OpenTempDirectory_ResponseParamsDataView {
 public:
  FileSystem_OpenTempDirectory_ResponseParamsDataView() {}

  FileSystem_OpenTempDirectory_ResponseParamsDataView(
      internal::FileSystem_OpenTempDirectory_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::filesystem::mojom::FileError>(
        data_value, output);
  }

  ::filesystem::mojom::FileError error() const {
    return static_cast<::filesystem::mojom::FileError>(data_->error);
  }
 private:
  internal::FileSystem_OpenTempDirectory_ResponseParams_Data* data_ = nullptr;
};




class FileSystem_OpenPersistentFileSystem_ParamsDataView {
 public:
  FileSystem_OpenPersistentFileSystem_ParamsDataView() {}

  FileSystem_OpenPersistentFileSystem_ParamsDataView(
      internal::FileSystem_OpenPersistentFileSystem_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  ::filesystem::mojom::DirectoryRequest TakeDirectory() {
    ::filesystem::mojom::DirectoryRequest result;
    bool ret =
        mojo::internal::Deserialize<::filesystem::mojom::DirectoryRequest>(
            &data_->directory, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::FileSystem_OpenPersistentFileSystem_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



class FileSystem_OpenPersistentFileSystem_ResponseParamsDataView {
 public:
  FileSystem_OpenPersistentFileSystem_ResponseParamsDataView() {}

  FileSystem_OpenPersistentFileSystem_ResponseParamsDataView(
      internal::FileSystem_OpenPersistentFileSystem_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::filesystem::mojom::FileError>(
        data_value, output);
  }

  ::filesystem::mojom::FileError error() const {
    return static_cast<::filesystem::mojom::FileError>(data_->error);
  }
 private:
  internal::FileSystem_OpenPersistentFileSystem_ResponseParams_Data* data_ = nullptr;
};




}  // namespace
const char FileSystem::Name_[] = "filesystem::mojom::FileSystem";
const uint32_t FileSystem::Version_;
bool FileSystem::OpenTempDirectory(::filesystem::mojom::DirectoryRequest directory, ::filesystem::mojom::FileError* error) {
  NOTREACHED();
  return false;
}
bool FileSystem::OpenPersistentFileSystem(::filesystem::mojom::DirectoryRequest directory, ::filesystem::mojom::FileError* error) {
  NOTREACHED();
  return false;
}
class FileSystem_OpenTempDirectory_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  FileSystem_OpenTempDirectory_HandleSyncResponse(
      scoped_refptr<mojo::AssociatedGroupController> group_controller,
      bool* result, ::filesystem::mojom::FileError* out_error)
      : serialization_context_(std::move(group_controller)), result_(result), out_error_(out_error) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  mojo::internal::SerializationContext serialization_context_;
  bool* result_;
  ::filesystem::mojom::FileError* out_error_;DISALLOW_COPY_AND_ASSIGN(FileSystem_OpenTempDirectory_HandleSyncResponse);
};
bool FileSystem_OpenTempDirectory_HandleSyncResponse::Accept(
    mojo::Message* message) {
  internal::FileSystem_OpenTempDirectory_ResponseParams_Data* params =
      reinterpret_cast<internal::FileSystem_OpenTempDirectory_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  ::filesystem::mojom::FileError p_error{};
  FileSystem_OpenTempDirectory_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "FileSystem::OpenTempDirectory response deserializer");
    return false;
  }
  *out_error_ = std::move(p_error);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

class FileSystem_OpenTempDirectory_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  FileSystem_OpenTempDirectory_ForwardToCallback(
      const FileSystem::OpenTempDirectoryCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  FileSystem::OpenTempDirectoryCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(FileSystem_OpenTempDirectory_ForwardToCallback);
};
bool FileSystem_OpenTempDirectory_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::FileSystem_OpenTempDirectory_ResponseParams_Data* params =
      reinterpret_cast<internal::FileSystem_OpenTempDirectory_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  ::filesystem::mojom::FileError p_error{};
  FileSystem_OpenTempDirectory_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "FileSystem::OpenTempDirectory response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_error));
  }
  return true;
}
class FileSystem_OpenPersistentFileSystem_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  FileSystem_OpenPersistentFileSystem_HandleSyncResponse(
      scoped_refptr<mojo::AssociatedGroupController> group_controller,
      bool* result, ::filesystem::mojom::FileError* out_error)
      : serialization_context_(std::move(group_controller)), result_(result), out_error_(out_error) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  mojo::internal::SerializationContext serialization_context_;
  bool* result_;
  ::filesystem::mojom::FileError* out_error_;DISALLOW_COPY_AND_ASSIGN(FileSystem_OpenPersistentFileSystem_HandleSyncResponse);
};
bool FileSystem_OpenPersistentFileSystem_HandleSyncResponse::Accept(
    mojo::Message* message) {
  internal::FileSystem_OpenPersistentFileSystem_ResponseParams_Data* params =
      reinterpret_cast<internal::FileSystem_OpenPersistentFileSystem_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  ::filesystem::mojom::FileError p_error{};
  FileSystem_OpenPersistentFileSystem_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "FileSystem::OpenPersistentFileSystem response deserializer");
    return false;
  }
  *out_error_ = std::move(p_error);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

class FileSystem_OpenPersistentFileSystem_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  FileSystem_OpenPersistentFileSystem_ForwardToCallback(
      const FileSystem::OpenPersistentFileSystemCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  FileSystem::OpenPersistentFileSystemCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(FileSystem_OpenPersistentFileSystem_ForwardToCallback);
};
bool FileSystem_OpenPersistentFileSystem_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::FileSystem_OpenPersistentFileSystem_ResponseParams_Data* params =
      reinterpret_cast<internal::FileSystem_OpenPersistentFileSystem_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  ::filesystem::mojom::FileError p_error{};
  FileSystem_OpenPersistentFileSystem_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "FileSystem::OpenPersistentFileSystem response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_error));
  }
  return true;
}

FileSystemProxy::FileSystemProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
bool FileSystemProxy::OpenTempDirectory(
    ::filesystem::mojom::DirectoryRequest param_directory, ::filesystem::mojom::FileError* param_error) {
  size_t size = sizeof(::filesystem::mojom::internal::FileSystem_OpenTempDirectory_Params_Data);

  mojo::internal::RequestMessageBuilder builder(internal::kFileSystem_OpenTempDirectory_Name, size,
                                                mojo::Message::kFlagIsSync);

  auto params =
      ::filesystem::mojom::internal::FileSystem_OpenTempDirectory_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::filesystem::mojom::DirectoryRequest>(
      param_directory, &params->directory, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->directory),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid directory in FileSystem.OpenTempDirectory request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());

  bool result = false;
  mojo::MessageReceiver* responder =
      new FileSystem_OpenTempDirectory_HandleSyncResponse(
          serialization_context_.group_controller, &result, param_error);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
  return result;
}

void FileSystemProxy::OpenTempDirectory(
    ::filesystem::mojom::DirectoryRequest in_directory, const OpenTempDirectoryCallback& callback) {
  size_t size = sizeof(::filesystem::mojom::internal::FileSystem_OpenTempDirectory_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kFileSystem_OpenTempDirectory_Name, size);

  auto params =
      ::filesystem::mojom::internal::FileSystem_OpenTempDirectory_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::filesystem::mojom::DirectoryRequest>(
      in_directory, &params->directory, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->directory),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid directory in FileSystem.OpenTempDirectory request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new FileSystem_OpenTempDirectory_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
bool FileSystemProxy::OpenPersistentFileSystem(
    ::filesystem::mojom::DirectoryRequest param_directory, ::filesystem::mojom::FileError* param_error) {
  size_t size = sizeof(::filesystem::mojom::internal::FileSystem_OpenPersistentFileSystem_Params_Data);

  mojo::internal::RequestMessageBuilder builder(internal::kFileSystem_OpenPersistentFileSystem_Name, size,
                                                mojo::Message::kFlagIsSync);

  auto params =
      ::filesystem::mojom::internal::FileSystem_OpenPersistentFileSystem_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::filesystem::mojom::DirectoryRequest>(
      param_directory, &params->directory, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->directory),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid directory in FileSystem.OpenPersistentFileSystem request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());

  bool result = false;
  mojo::MessageReceiver* responder =
      new FileSystem_OpenPersistentFileSystem_HandleSyncResponse(
          serialization_context_.group_controller, &result, param_error);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
  return result;
}

void FileSystemProxy::OpenPersistentFileSystem(
    ::filesystem::mojom::DirectoryRequest in_directory, const OpenPersistentFileSystemCallback& callback) {
  size_t size = sizeof(::filesystem::mojom::internal::FileSystem_OpenPersistentFileSystem_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kFileSystem_OpenPersistentFileSystem_Name, size);

  auto params =
      ::filesystem::mojom::internal::FileSystem_OpenPersistentFileSystem_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::filesystem::mojom::DirectoryRequest>(
      in_directory, &params->directory, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->directory),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid directory in FileSystem.OpenPersistentFileSystem request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new FileSystem_OpenPersistentFileSystem_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
class FileSystem_OpenTempDirectory_ProxyToResponder {
 public:
  static FileSystem::OpenTempDirectoryCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<FileSystem_OpenTempDirectory_ProxyToResponder> proxy(
        new FileSystem_OpenTempDirectory_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&FileSystem_OpenTempDirectory_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~FileSystem_OpenTempDirectory_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "FileSystem::OpenTempDirectory() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  FileSystem_OpenTempDirectory_ProxyToResponder(
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
      ::filesystem::mojom::FileError in_error);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(FileSystem_OpenTempDirectory_ProxyToResponder);
};

void FileSystem_OpenTempDirectory_ProxyToResponder::Run(
    ::filesystem::mojom::FileError in_error) {
  size_t size = sizeof(::filesystem::mojom::internal::FileSystem_OpenTempDirectory_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kFileSystem_OpenTempDirectory_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::filesystem::mojom::internal::FileSystem_OpenTempDirectory_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::filesystem::mojom::FileError>(
      in_error, &params->error);
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
class FileSystem_OpenPersistentFileSystem_ProxyToResponder {
 public:
  static FileSystem::OpenPersistentFileSystemCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<FileSystem_OpenPersistentFileSystem_ProxyToResponder> proxy(
        new FileSystem_OpenPersistentFileSystem_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&FileSystem_OpenPersistentFileSystem_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~FileSystem_OpenPersistentFileSystem_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "FileSystem::OpenPersistentFileSystem() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  FileSystem_OpenPersistentFileSystem_ProxyToResponder(
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
      ::filesystem::mojom::FileError in_error);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(FileSystem_OpenPersistentFileSystem_ProxyToResponder);
};

void FileSystem_OpenPersistentFileSystem_ProxyToResponder::Run(
    ::filesystem::mojom::FileError in_error) {
  size_t size = sizeof(::filesystem::mojom::internal::FileSystem_OpenPersistentFileSystem_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kFileSystem_OpenPersistentFileSystem_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::filesystem::mojom::internal::FileSystem_OpenPersistentFileSystem_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::filesystem::mojom::FileError>(
      in_error, &params->error);
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

FileSystemStub::FileSystemStub()
    : sink_(nullptr),
      control_message_handler_(FileSystem::Version_) {
}

FileSystemStub::~FileSystemStub() {}

bool FileSystemStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kFileSystem_OpenTempDirectory_Name: {
      break;
    }
    case internal::kFileSystem_OpenPersistentFileSystem_Name: {
      break;
    }
  }
  return false;
}

bool FileSystemStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kFileSystem_OpenTempDirectory_Name: {
      internal::FileSystem_OpenTempDirectory_Params_Data* params =
          reinterpret_cast<internal::FileSystem_OpenTempDirectory_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      ::filesystem::mojom::DirectoryRequest p_directory{};
      FileSystem_OpenTempDirectory_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_directory = input_data_view.TakeDirectory();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FileSystem::OpenTempDirectory deserializer");
        return false;
      }
      FileSystem::OpenTempDirectoryCallback callback =
          FileSystem_OpenTempDirectory_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "FileSystem::OpenTempDirectory");
      mojo::internal::MessageDispatchContext context(message);
      sink_->OpenTempDirectory(
std::move(p_directory), callback);
      return true;
    }
    case internal::kFileSystem_OpenPersistentFileSystem_Name: {
      internal::FileSystem_OpenPersistentFileSystem_Params_Data* params =
          reinterpret_cast<internal::FileSystem_OpenPersistentFileSystem_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      ::filesystem::mojom::DirectoryRequest p_directory{};
      FileSystem_OpenPersistentFileSystem_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_directory = input_data_view.TakeDirectory();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FileSystem::OpenPersistentFileSystem deserializer");
        return false;
      }
      FileSystem::OpenPersistentFileSystemCallback callback =
          FileSystem_OpenPersistentFileSystem_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "FileSystem::OpenPersistentFileSystem");
      mojo::internal::MessageDispatchContext context(message);
      sink_->OpenPersistentFileSystem(
std::move(p_directory), callback);
      return true;
    }
  }
  return false;
}

FileSystemRequestValidator::FileSystemRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool FileSystemRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "FileSystem RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kFileSystem_OpenTempDirectory_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FileSystem_OpenTempDirectory_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kFileSystem_OpenPersistentFileSystem_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FileSystem_OpenPersistentFileSystem_Params_Data>(
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

FileSystemResponseValidator::FileSystemResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool FileSystemResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "FileSystem ResponseValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kFileSystem_OpenTempDirectory_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::FileSystem_OpenTempDirectory_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kFileSystem_OpenPersistentFileSystem_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::FileSystem_OpenPersistentFileSystem_ResponseParams_Data>(
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
}  // namespace filesystem

namespace mojo {

}  // namespace mojo


#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
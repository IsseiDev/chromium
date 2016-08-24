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

#include "services/file/public/interfaces/file_system.mojom.h"

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
namespace file {
namespace mojom {

namespace {

class FileSystem_GetDirectory_ParamsDataView {
 public:
  FileSystem_GetDirectory_ParamsDataView() {}

  FileSystem_GetDirectory_ParamsDataView(
      internal::FileSystem_GetDirectory_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  ::filesystem::mojom::DirectoryRequest TakeDir() {
    ::filesystem::mojom::DirectoryRequest result;
    bool ret =
        mojo::internal::Deserialize<::filesystem::mojom::DirectoryRequest>(
            &data_->dir, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::FileSystem_GetDirectory_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



class FileSystem_GetDirectory_ResponseParamsDataView {
 public:
  FileSystem_GetDirectory_ResponseParamsDataView() {}

  FileSystem_GetDirectory_ResponseParamsDataView(
      internal::FileSystem_GetDirectory_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::FileSystem_GetDirectory_ResponseParams_Data* data_ = nullptr;
};




class FileSystem_GetSubDirectory_ParamsDataView {
 public:
  FileSystem_GetSubDirectory_ParamsDataView() {}

  FileSystem_GetSubDirectory_ParamsDataView(
      internal::FileSystem_GetSubDirectory_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDirPathDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadDirPath(UserType* output) {
    auto pointer = data_->dir_path.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  ::filesystem::mojom::DirectoryRequest TakeDir() {
    ::filesystem::mojom::DirectoryRequest result;
    bool ret =
        mojo::internal::Deserialize<::filesystem::mojom::DirectoryRequest>(
            &data_->dir, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::FileSystem_GetSubDirectory_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void FileSystem_GetSubDirectory_ParamsDataView::GetDirPathDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->dir_path.Get();
  *output = mojo::StringDataView(pointer, context_);
}

class FileSystem_GetSubDirectory_ResponseParamsDataView {
 public:
  FileSystem_GetSubDirectory_ResponseParamsDataView() {}

  FileSystem_GetSubDirectory_ResponseParamsDataView(
      internal::FileSystem_GetSubDirectory_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadErr(UserType* output) const {
    auto data_value = data_->err;
    return mojo::internal::Deserialize<::filesystem::mojom::FileError>(
        data_value, output);
  }

  ::filesystem::mojom::FileError err() const {
    return static_cast<::filesystem::mojom::FileError>(data_->err);
  }
 private:
  internal::FileSystem_GetSubDirectory_ResponseParams_Data* data_ = nullptr;
};




}  // namespace
const char FileSystem::Name_[] = "file::mojom::FileSystem";
const uint32_t FileSystem::Version_;

class FileSystem_GetDirectory_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  FileSystem_GetDirectory_ForwardToCallback(
      const FileSystem::GetDirectoryCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  FileSystem::GetDirectoryCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(FileSystem_GetDirectory_ForwardToCallback);
};
bool FileSystem_GetDirectory_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::FileSystem_GetDirectory_ResponseParams_Data* params =
      reinterpret_cast<internal::FileSystem_GetDirectory_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  FileSystem_GetDirectory_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "FileSystem::GetDirectory response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run();
  }
  return true;
}

class FileSystem_GetSubDirectory_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  FileSystem_GetSubDirectory_ForwardToCallback(
      const FileSystem::GetSubDirectoryCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  FileSystem::GetSubDirectoryCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(FileSystem_GetSubDirectory_ForwardToCallback);
};
bool FileSystem_GetSubDirectory_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::FileSystem_GetSubDirectory_ResponseParams_Data* params =
      reinterpret_cast<internal::FileSystem_GetSubDirectory_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  ::filesystem::mojom::FileError p_err{};
  FileSystem_GetSubDirectory_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadErr(&p_err))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "FileSystem::GetSubDirectory response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_err));
  }
  return true;
}

FileSystemProxy::FileSystemProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void FileSystemProxy::GetDirectory(
    ::filesystem::mojom::DirectoryRequest in_dir, const GetDirectoryCallback& callback) {
  size_t size = sizeof(::file::mojom::internal::FileSystem_GetDirectory_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kFileSystem_GetDirectory_Name, size);

  auto params =
      ::file::mojom::internal::FileSystem_GetDirectory_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::filesystem::mojom::DirectoryRequest>(
      in_dir, &params->dir, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->dir),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid dir in FileSystem.GetDirectory request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new FileSystem_GetDirectory_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void FileSystemProxy::GetSubDirectory(
    const std::string& in_dir_path, ::filesystem::mojom::DirectoryRequest in_dir, const GetSubDirectoryCallback& callback) {
  size_t size = sizeof(::file::mojom::internal::FileSystem_GetSubDirectory_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_dir_path, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kFileSystem_GetSubDirectory_Name, size);

  auto params =
      ::file::mojom::internal::FileSystem_GetSubDirectory_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->dir_path)::BaseType* dir_path_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_dir_path, builder.buffer(), &dir_path_ptr, &serialization_context_);
  params->dir_path.Set(dir_path_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->dir_path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null dir_path in FileSystem.GetSubDirectory request");
  mojo::internal::Serialize<::filesystem::mojom::DirectoryRequest>(
      in_dir, &params->dir, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->dir),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid dir in FileSystem.GetSubDirectory request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new FileSystem_GetSubDirectory_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
class FileSystem_GetDirectory_ProxyToResponder {
 public:
  static FileSystem::GetDirectoryCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<FileSystem_GetDirectory_ProxyToResponder> proxy(
        new FileSystem_GetDirectory_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&FileSystem_GetDirectory_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~FileSystem_GetDirectory_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "FileSystem::GetDirectory() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  FileSystem_GetDirectory_ProxyToResponder(
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
      );

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(FileSystem_GetDirectory_ProxyToResponder);
};

void FileSystem_GetDirectory_ProxyToResponder::Run(
    ) {
  size_t size = sizeof(::file::mojom::internal::FileSystem_GetDirectory_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kFileSystem_GetDirectory_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::file::mojom::internal::FileSystem_GetDirectory_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
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
class FileSystem_GetSubDirectory_ProxyToResponder {
 public:
  static FileSystem::GetSubDirectoryCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<FileSystem_GetSubDirectory_ProxyToResponder> proxy(
        new FileSystem_GetSubDirectory_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&FileSystem_GetSubDirectory_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~FileSystem_GetSubDirectory_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "FileSystem::GetSubDirectory() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  FileSystem_GetSubDirectory_ProxyToResponder(
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
      ::filesystem::mojom::FileError in_err);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(FileSystem_GetSubDirectory_ProxyToResponder);
};

void FileSystem_GetSubDirectory_ProxyToResponder::Run(
    ::filesystem::mojom::FileError in_err) {
  size_t size = sizeof(::file::mojom::internal::FileSystem_GetSubDirectory_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kFileSystem_GetSubDirectory_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::file::mojom::internal::FileSystem_GetSubDirectory_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::filesystem::mojom::FileError>(
      in_err, &params->err);
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
    case internal::kFileSystem_GetDirectory_Name: {
      break;
    }
    case internal::kFileSystem_GetSubDirectory_Name: {
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
    case internal::kFileSystem_GetDirectory_Name: {
      internal::FileSystem_GetDirectory_Params_Data* params =
          reinterpret_cast<internal::FileSystem_GetDirectory_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      ::filesystem::mojom::DirectoryRequest p_dir{};
      FileSystem_GetDirectory_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_dir = input_data_view.TakeDir();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FileSystem::GetDirectory deserializer");
        return false;
      }
      FileSystem::GetDirectoryCallback callback =
          FileSystem_GetDirectory_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "FileSystem::GetDirectory");
      mojo::internal::MessageDispatchContext context(message);
      sink_->GetDirectory(
std::move(p_dir), callback);
      return true;
    }
    case internal::kFileSystem_GetSubDirectory_Name: {
      internal::FileSystem_GetSubDirectory_Params_Data* params =
          reinterpret_cast<internal::FileSystem_GetSubDirectory_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      std::string p_dir_path{};
      ::filesystem::mojom::DirectoryRequest p_dir{};
      FileSystem_GetSubDirectory_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadDirPath(&p_dir_path))
        success = false;
      p_dir = input_data_view.TakeDir();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FileSystem::GetSubDirectory deserializer");
        return false;
      }
      FileSystem::GetSubDirectoryCallback callback =
          FileSystem_GetSubDirectory_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "FileSystem::GetSubDirectory");
      mojo::internal::MessageDispatchContext context(message);
      sink_->GetSubDirectory(
std::move(p_dir_path), 
std::move(p_dir), callback);
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
    case internal::kFileSystem_GetDirectory_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FileSystem_GetDirectory_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kFileSystem_GetSubDirectory_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FileSystem_GetSubDirectory_Params_Data>(
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
    case internal::kFileSystem_GetDirectory_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::FileSystem_GetDirectory_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kFileSystem_GetSubDirectory_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::FileSystem_GetSubDirectory_ResponseParams_Data>(
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
}  // namespace file

namespace mojo {

}  // namespace mojo


#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
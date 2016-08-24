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

#include "components/filesystem/public/interfaces/file.mojom.h"

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

class File_Close_ParamsDataView {
 public:
  File_Close_ParamsDataView() {}

  File_Close_ParamsDataView(
      internal::File_Close_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::File_Close_Params_Data* data_ = nullptr;
};



class File_Close_ResponseParamsDataView {
 public:
  File_Close_ResponseParamsDataView() {}

  File_Close_ResponseParamsDataView(
      internal::File_Close_ResponseParams_Data* data,
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
  internal::File_Close_ResponseParams_Data* data_ = nullptr;
};




class File_Read_ParamsDataView {
 public:
  File_Read_ParamsDataView() {}

  File_Read_ParamsDataView(
      internal::File_Read_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t num_bytes_to_read() const {
    return data_->num_bytes_to_read;
  }
  int64_t offset() const {
    return data_->offset;
  }
  template <typename UserType>
  bool ReadWhence(UserType* output) const {
    auto data_value = data_->whence;
    return mojo::internal::Deserialize<::filesystem::mojom::Whence>(
        data_value, output);
  }

  ::filesystem::mojom::Whence whence() const {
    return static_cast<::filesystem::mojom::Whence>(data_->whence);
  }
 private:
  internal::File_Read_Params_Data* data_ = nullptr;
};



class File_Read_ResponseParamsDataView {
 public:
  File_Read_ResponseParamsDataView() {}

  File_Read_ResponseParamsDataView(
      internal::File_Read_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

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
  inline void GetBytesReadDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  bool ReadBytesRead(UserType* output) {
    auto pointer = data_->bytes_read.Get();
    return mojo::internal::Deserialize<mojo::Array<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::File_Read_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void File_Read_ResponseParamsDataView::GetBytesReadDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->bytes_read.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


class File_Write_ParamsDataView {
 public:
  File_Write_ParamsDataView() {}

  File_Write_ParamsDataView(
      internal::File_Write_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetBytesToWriteDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  bool ReadBytesToWrite(UserType* output) {
    auto pointer = data_->bytes_to_write.Get();
    return mojo::internal::Deserialize<mojo::Array<uint8_t>>(
        pointer, output, context_);
  }
  int64_t offset() const {
    return data_->offset;
  }
  template <typename UserType>
  bool ReadWhence(UserType* output) const {
    auto data_value = data_->whence;
    return mojo::internal::Deserialize<::filesystem::mojom::Whence>(
        data_value, output);
  }

  ::filesystem::mojom::Whence whence() const {
    return static_cast<::filesystem::mojom::Whence>(data_->whence);
  }
 private:
  internal::File_Write_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void File_Write_ParamsDataView::GetBytesToWriteDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->bytes_to_write.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}

class File_Write_ResponseParamsDataView {
 public:
  File_Write_ResponseParamsDataView() {}

  File_Write_ResponseParamsDataView(
      internal::File_Write_ResponseParams_Data* data,
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
  uint32_t num_bytes_written() const {
    return data_->num_bytes_written;
  }
 private:
  internal::File_Write_ResponseParams_Data* data_ = nullptr;
};




class File_Tell_ParamsDataView {
 public:
  File_Tell_ParamsDataView() {}

  File_Tell_ParamsDataView(
      internal::File_Tell_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::File_Tell_Params_Data* data_ = nullptr;
};



class File_Tell_ResponseParamsDataView {
 public:
  File_Tell_ResponseParamsDataView() {}

  File_Tell_ResponseParamsDataView(
      internal::File_Tell_ResponseParams_Data* data,
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
  int64_t position() const {
    return data_->position;
  }
 private:
  internal::File_Tell_ResponseParams_Data* data_ = nullptr;
};




class File_Seek_ParamsDataView {
 public:
  File_Seek_ParamsDataView() {}

  File_Seek_ParamsDataView(
      internal::File_Seek_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t offset() const {
    return data_->offset;
  }
  template <typename UserType>
  bool ReadWhence(UserType* output) const {
    auto data_value = data_->whence;
    return mojo::internal::Deserialize<::filesystem::mojom::Whence>(
        data_value, output);
  }

  ::filesystem::mojom::Whence whence() const {
    return static_cast<::filesystem::mojom::Whence>(data_->whence);
  }
 private:
  internal::File_Seek_Params_Data* data_ = nullptr;
};



class File_Seek_ResponseParamsDataView {
 public:
  File_Seek_ResponseParamsDataView() {}

  File_Seek_ResponseParamsDataView(
      internal::File_Seek_ResponseParams_Data* data,
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
  int64_t position() const {
    return data_->position;
  }
 private:
  internal::File_Seek_ResponseParams_Data* data_ = nullptr;
};




class File_Stat_ParamsDataView {
 public:
  File_Stat_ParamsDataView() {}

  File_Stat_ParamsDataView(
      internal::File_Stat_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::File_Stat_Params_Data* data_ = nullptr;
};



class File_Stat_ResponseParamsDataView {
 public:
  File_Stat_ResponseParamsDataView() {}

  File_Stat_ResponseParamsDataView(
      internal::File_Stat_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

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
  inline void GetFileInformationDataView(
      ::filesystem::mojom::FileInformationDataView* output);

  template <typename UserType>
  bool ReadFileInformation(UserType* output) {
    auto pointer = data_->file_information.Get();
    return mojo::internal::Deserialize<::filesystem::mojom::FileInformationPtr>(
        pointer, output, context_);
  }
 private:
  internal::File_Stat_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void File_Stat_ResponseParamsDataView::GetFileInformationDataView(
    ::filesystem::mojom::FileInformationDataView* output) {
  auto pointer = data_->file_information.Get();
  *output = ::filesystem::mojom::FileInformationDataView(pointer, context_);
}


class File_Truncate_ParamsDataView {
 public:
  File_Truncate_ParamsDataView() {}

  File_Truncate_ParamsDataView(
      internal::File_Truncate_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t size() const {
    return data_->size;
  }
 private:
  internal::File_Truncate_Params_Data* data_ = nullptr;
};



class File_Truncate_ResponseParamsDataView {
 public:
  File_Truncate_ResponseParamsDataView() {}

  File_Truncate_ResponseParamsDataView(
      internal::File_Truncate_ResponseParams_Data* data,
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
  internal::File_Truncate_ResponseParams_Data* data_ = nullptr;
};




class File_Touch_ParamsDataView {
 public:
  File_Touch_ParamsDataView() {}

  File_Touch_ParamsDataView(
      internal::File_Touch_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetAtimeDataView(
      ::filesystem::mojom::TimespecOrNowDataView* output);

  template <typename UserType>
  bool ReadAtime(UserType* output) {
    auto pointer = data_->atime.Get();
    return mojo::internal::Deserialize<::filesystem::mojom::TimespecOrNowPtr>(
        pointer, output, context_);
  }
  inline void GetMtimeDataView(
      ::filesystem::mojom::TimespecOrNowDataView* output);

  template <typename UserType>
  bool ReadMtime(UserType* output) {
    auto pointer = data_->mtime.Get();
    return mojo::internal::Deserialize<::filesystem::mojom::TimespecOrNowPtr>(
        pointer, output, context_);
  }
 private:
  internal::File_Touch_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void File_Touch_ParamsDataView::GetAtimeDataView(
    ::filesystem::mojom::TimespecOrNowDataView* output) {
  auto pointer = data_->atime.Get();
  *output = ::filesystem::mojom::TimespecOrNowDataView(pointer, context_);
}
inline void File_Touch_ParamsDataView::GetMtimeDataView(
    ::filesystem::mojom::TimespecOrNowDataView* output) {
  auto pointer = data_->mtime.Get();
  *output = ::filesystem::mojom::TimespecOrNowDataView(pointer, context_);
}

class File_Touch_ResponseParamsDataView {
 public:
  File_Touch_ResponseParamsDataView() {}

  File_Touch_ResponseParamsDataView(
      internal::File_Touch_ResponseParams_Data* data,
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
  internal::File_Touch_ResponseParams_Data* data_ = nullptr;
};




class File_Dup_ParamsDataView {
 public:
  File_Dup_ParamsDataView() {}

  File_Dup_ParamsDataView(
      internal::File_Dup_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  FileRequest TakeFile() {
    FileRequest result;
    bool ret =
        mojo::internal::Deserialize<::filesystem::mojom::FileRequest>(
            &data_->file, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::File_Dup_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



class File_Dup_ResponseParamsDataView {
 public:
  File_Dup_ResponseParamsDataView() {}

  File_Dup_ResponseParamsDataView(
      internal::File_Dup_ResponseParams_Data* data,
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
  internal::File_Dup_ResponseParams_Data* data_ = nullptr;
};




class File_Flush_ParamsDataView {
 public:
  File_Flush_ParamsDataView() {}

  File_Flush_ParamsDataView(
      internal::File_Flush_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::File_Flush_Params_Data* data_ = nullptr;
};



class File_Flush_ResponseParamsDataView {
 public:
  File_Flush_ResponseParamsDataView() {}

  File_Flush_ResponseParamsDataView(
      internal::File_Flush_ResponseParams_Data* data,
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
  internal::File_Flush_ResponseParams_Data* data_ = nullptr;
};




class File_Lock_ParamsDataView {
 public:
  File_Lock_ParamsDataView() {}

  File_Lock_ParamsDataView(
      internal::File_Lock_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::File_Lock_Params_Data* data_ = nullptr;
};



class File_Lock_ResponseParamsDataView {
 public:
  File_Lock_ResponseParamsDataView() {}

  File_Lock_ResponseParamsDataView(
      internal::File_Lock_ResponseParams_Data* data,
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
  internal::File_Lock_ResponseParams_Data* data_ = nullptr;
};




class File_Unlock_ParamsDataView {
 public:
  File_Unlock_ParamsDataView() {}

  File_Unlock_ParamsDataView(
      internal::File_Unlock_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::File_Unlock_Params_Data* data_ = nullptr;
};



class File_Unlock_ResponseParamsDataView {
 public:
  File_Unlock_ResponseParamsDataView() {}

  File_Unlock_ResponseParamsDataView(
      internal::File_Unlock_ResponseParams_Data* data,
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
  internal::File_Unlock_ResponseParams_Data* data_ = nullptr;
};




class File_AsHandle_ParamsDataView {
 public:
  File_AsHandle_ParamsDataView() {}

  File_AsHandle_ParamsDataView(
      internal::File_AsHandle_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::File_AsHandle_Params_Data* data_ = nullptr;
};



class File_AsHandle_ResponseParamsDataView {
 public:
  File_AsHandle_ResponseParamsDataView() {}

  File_AsHandle_ResponseParamsDataView(
      internal::File_AsHandle_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

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
  mojo::ScopedHandle TakeFileHandle() {
    mojo::ScopedHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedHandle>(
            &data_->file_handle, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::File_AsHandle_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




}  // namespace
const char File::Name_[] = "filesystem::mojom::File";
const uint32_t File::Version_;
bool File::Close(::filesystem::mojom::FileError* err) {
  NOTREACHED();
  return false;
}
bool File::Read(uint32_t num_bytes_to_read, int64_t offset, ::filesystem::mojom::Whence whence, ::filesystem::mojom::FileError* error, mojo::Array<uint8_t>* bytes_read) {
  NOTREACHED();
  return false;
}
bool File::Write(mojo::Array<uint8_t> bytes_to_write, int64_t offset, ::filesystem::mojom::Whence whence, ::filesystem::mojom::FileError* error, uint32_t* num_bytes_written) {
  NOTREACHED();
  return false;
}
bool File::Tell(::filesystem::mojom::FileError* error, int64_t* position) {
  NOTREACHED();
  return false;
}
bool File::Seek(int64_t offset, ::filesystem::mojom::Whence whence, ::filesystem::mojom::FileError* error, int64_t* position) {
  NOTREACHED();
  return false;
}
bool File::Stat(::filesystem::mojom::FileError* error, ::filesystem::mojom::FileInformationPtr* file_information) {
  NOTREACHED();
  return false;
}
bool File::Truncate(int64_t size, ::filesystem::mojom::FileError* error) {
  NOTREACHED();
  return false;
}
bool File::Touch(::filesystem::mojom::TimespecOrNowPtr atime, ::filesystem::mojom::TimespecOrNowPtr mtime, ::filesystem::mojom::FileError* error) {
  NOTREACHED();
  return false;
}
bool File::Dup(FileRequest file, ::filesystem::mojom::FileError* error) {
  NOTREACHED();
  return false;
}
bool File::Flush(::filesystem::mojom::FileError* error) {
  NOTREACHED();
  return false;
}
bool File::Lock(::filesystem::mojom::FileError* error) {
  NOTREACHED();
  return false;
}
bool File::Unlock(::filesystem::mojom::FileError* error) {
  NOTREACHED();
  return false;
}
bool File::AsHandle(::filesystem::mojom::FileError* error, mojo::ScopedHandle* file_handle) {
  NOTREACHED();
  return false;
}
class File_Close_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  File_Close_HandleSyncResponse(
      scoped_refptr<mojo::AssociatedGroupController> group_controller,
      bool* result, ::filesystem::mojom::FileError* out_err)
      : serialization_context_(std::move(group_controller)), result_(result), out_err_(out_err) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  mojo::internal::SerializationContext serialization_context_;
  bool* result_;
  ::filesystem::mojom::FileError* out_err_;DISALLOW_COPY_AND_ASSIGN(File_Close_HandleSyncResponse);
};
bool File_Close_HandleSyncResponse::Accept(
    mojo::Message* message) {
  internal::File_Close_ResponseParams_Data* params =
      reinterpret_cast<internal::File_Close_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  ::filesystem::mojom::FileError p_err{};
  File_Close_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadErr(&p_err))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "File::Close response deserializer");
    return false;
  }
  *out_err_ = std::move(p_err);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

class File_Close_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  File_Close_ForwardToCallback(
      const File::CloseCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  File::CloseCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(File_Close_ForwardToCallback);
};
bool File_Close_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::File_Close_ResponseParams_Data* params =
      reinterpret_cast<internal::File_Close_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  ::filesystem::mojom::FileError p_err{};
  File_Close_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadErr(&p_err))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "File::Close response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_err));
  }
  return true;
}
class File_Read_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  File_Read_HandleSyncResponse(
      scoped_refptr<mojo::AssociatedGroupController> group_controller,
      bool* result, ::filesystem::mojom::FileError* out_error, mojo::Array<uint8_t>* out_bytes_read)
      : serialization_context_(std::move(group_controller)), result_(result), out_error_(out_error), out_bytes_read_(out_bytes_read) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  mojo::internal::SerializationContext serialization_context_;
  bool* result_;
  ::filesystem::mojom::FileError* out_error_;
  mojo::Array<uint8_t>* out_bytes_read_;DISALLOW_COPY_AND_ASSIGN(File_Read_HandleSyncResponse);
};
bool File_Read_HandleSyncResponse::Accept(
    mojo::Message* message) {
  internal::File_Read_ResponseParams_Data* params =
      reinterpret_cast<internal::File_Read_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  ::filesystem::mojom::FileError p_error{};
  mojo::Array<uint8_t> p_bytes_read{};
  File_Read_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!input_data_view.ReadBytesRead(&p_bytes_read))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "File::Read response deserializer");
    return false;
  }
  *out_error_ = std::move(p_error);
  *out_bytes_read_ = std::move(p_bytes_read);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

class File_Read_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  File_Read_ForwardToCallback(
      const File::ReadCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  File::ReadCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(File_Read_ForwardToCallback);
};
bool File_Read_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::File_Read_ResponseParams_Data* params =
      reinterpret_cast<internal::File_Read_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  ::filesystem::mojom::FileError p_error{};
  mojo::Array<uint8_t> p_bytes_read{};
  File_Read_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!input_data_view.ReadBytesRead(&p_bytes_read))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "File::Read response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_error), 
std::move(p_bytes_read));
  }
  return true;
}
class File_Write_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  File_Write_HandleSyncResponse(
      scoped_refptr<mojo::AssociatedGroupController> group_controller,
      bool* result, ::filesystem::mojom::FileError* out_error, uint32_t* out_num_bytes_written)
      : serialization_context_(std::move(group_controller)), result_(result), out_error_(out_error), out_num_bytes_written_(out_num_bytes_written) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  mojo::internal::SerializationContext serialization_context_;
  bool* result_;
  ::filesystem::mojom::FileError* out_error_;
  uint32_t* out_num_bytes_written_;DISALLOW_COPY_AND_ASSIGN(File_Write_HandleSyncResponse);
};
bool File_Write_HandleSyncResponse::Accept(
    mojo::Message* message) {
  internal::File_Write_ResponseParams_Data* params =
      reinterpret_cast<internal::File_Write_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  ::filesystem::mojom::FileError p_error{};
  uint32_t p_num_bytes_written{};
  File_Write_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  p_num_bytes_written = input_data_view.num_bytes_written();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "File::Write response deserializer");
    return false;
  }
  *out_error_ = std::move(p_error);
  *out_num_bytes_written_ = std::move(p_num_bytes_written);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

class File_Write_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  File_Write_ForwardToCallback(
      const File::WriteCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  File::WriteCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(File_Write_ForwardToCallback);
};
bool File_Write_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::File_Write_ResponseParams_Data* params =
      reinterpret_cast<internal::File_Write_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  ::filesystem::mojom::FileError p_error{};
  uint32_t p_num_bytes_written{};
  File_Write_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  p_num_bytes_written = input_data_view.num_bytes_written();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "File::Write response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_error), 
std::move(p_num_bytes_written));
  }
  return true;
}
class File_Tell_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  File_Tell_HandleSyncResponse(
      scoped_refptr<mojo::AssociatedGroupController> group_controller,
      bool* result, ::filesystem::mojom::FileError* out_error, int64_t* out_position)
      : serialization_context_(std::move(group_controller)), result_(result), out_error_(out_error), out_position_(out_position) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  mojo::internal::SerializationContext serialization_context_;
  bool* result_;
  ::filesystem::mojom::FileError* out_error_;
  int64_t* out_position_;DISALLOW_COPY_AND_ASSIGN(File_Tell_HandleSyncResponse);
};
bool File_Tell_HandleSyncResponse::Accept(
    mojo::Message* message) {
  internal::File_Tell_ResponseParams_Data* params =
      reinterpret_cast<internal::File_Tell_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  ::filesystem::mojom::FileError p_error{};
  int64_t p_position{};
  File_Tell_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  p_position = input_data_view.position();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "File::Tell response deserializer");
    return false;
  }
  *out_error_ = std::move(p_error);
  *out_position_ = std::move(p_position);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

class File_Tell_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  File_Tell_ForwardToCallback(
      const File::TellCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  File::TellCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(File_Tell_ForwardToCallback);
};
bool File_Tell_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::File_Tell_ResponseParams_Data* params =
      reinterpret_cast<internal::File_Tell_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  ::filesystem::mojom::FileError p_error{};
  int64_t p_position{};
  File_Tell_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  p_position = input_data_view.position();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "File::Tell response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_error), 
std::move(p_position));
  }
  return true;
}
class File_Seek_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  File_Seek_HandleSyncResponse(
      scoped_refptr<mojo::AssociatedGroupController> group_controller,
      bool* result, ::filesystem::mojom::FileError* out_error, int64_t* out_position)
      : serialization_context_(std::move(group_controller)), result_(result), out_error_(out_error), out_position_(out_position) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  mojo::internal::SerializationContext serialization_context_;
  bool* result_;
  ::filesystem::mojom::FileError* out_error_;
  int64_t* out_position_;DISALLOW_COPY_AND_ASSIGN(File_Seek_HandleSyncResponse);
};
bool File_Seek_HandleSyncResponse::Accept(
    mojo::Message* message) {
  internal::File_Seek_ResponseParams_Data* params =
      reinterpret_cast<internal::File_Seek_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  ::filesystem::mojom::FileError p_error{};
  int64_t p_position{};
  File_Seek_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  p_position = input_data_view.position();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "File::Seek response deserializer");
    return false;
  }
  *out_error_ = std::move(p_error);
  *out_position_ = std::move(p_position);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

class File_Seek_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  File_Seek_ForwardToCallback(
      const File::SeekCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  File::SeekCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(File_Seek_ForwardToCallback);
};
bool File_Seek_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::File_Seek_ResponseParams_Data* params =
      reinterpret_cast<internal::File_Seek_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  ::filesystem::mojom::FileError p_error{};
  int64_t p_position{};
  File_Seek_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  p_position = input_data_view.position();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "File::Seek response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_error), 
std::move(p_position));
  }
  return true;
}
class File_Stat_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  File_Stat_HandleSyncResponse(
      scoped_refptr<mojo::AssociatedGroupController> group_controller,
      bool* result, ::filesystem::mojom::FileError* out_error, ::filesystem::mojom::FileInformationPtr* out_file_information)
      : serialization_context_(std::move(group_controller)), result_(result), out_error_(out_error), out_file_information_(out_file_information) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  mojo::internal::SerializationContext serialization_context_;
  bool* result_;
  ::filesystem::mojom::FileError* out_error_;
  ::filesystem::mojom::FileInformationPtr* out_file_information_;DISALLOW_COPY_AND_ASSIGN(File_Stat_HandleSyncResponse);
};
bool File_Stat_HandleSyncResponse::Accept(
    mojo::Message* message) {
  internal::File_Stat_ResponseParams_Data* params =
      reinterpret_cast<internal::File_Stat_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  ::filesystem::mojom::FileError p_error{};
  ::filesystem::mojom::FileInformationPtr p_file_information{};
  File_Stat_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!input_data_view.ReadFileInformation(&p_file_information))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "File::Stat response deserializer");
    return false;
  }
  *out_error_ = std::move(p_error);
  *out_file_information_ = std::move(p_file_information);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

class File_Stat_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  File_Stat_ForwardToCallback(
      const File::StatCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  File::StatCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(File_Stat_ForwardToCallback);
};
bool File_Stat_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::File_Stat_ResponseParams_Data* params =
      reinterpret_cast<internal::File_Stat_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  ::filesystem::mojom::FileError p_error{};
  ::filesystem::mojom::FileInformationPtr p_file_information{};
  File_Stat_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!input_data_view.ReadFileInformation(&p_file_information))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "File::Stat response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_error), 
std::move(p_file_information));
  }
  return true;
}
class File_Truncate_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  File_Truncate_HandleSyncResponse(
      scoped_refptr<mojo::AssociatedGroupController> group_controller,
      bool* result, ::filesystem::mojom::FileError* out_error)
      : serialization_context_(std::move(group_controller)), result_(result), out_error_(out_error) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  mojo::internal::SerializationContext serialization_context_;
  bool* result_;
  ::filesystem::mojom::FileError* out_error_;DISALLOW_COPY_AND_ASSIGN(File_Truncate_HandleSyncResponse);
};
bool File_Truncate_HandleSyncResponse::Accept(
    mojo::Message* message) {
  internal::File_Truncate_ResponseParams_Data* params =
      reinterpret_cast<internal::File_Truncate_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  ::filesystem::mojom::FileError p_error{};
  File_Truncate_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "File::Truncate response deserializer");
    return false;
  }
  *out_error_ = std::move(p_error);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

class File_Truncate_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  File_Truncate_ForwardToCallback(
      const File::TruncateCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  File::TruncateCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(File_Truncate_ForwardToCallback);
};
bool File_Truncate_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::File_Truncate_ResponseParams_Data* params =
      reinterpret_cast<internal::File_Truncate_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  ::filesystem::mojom::FileError p_error{};
  File_Truncate_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "File::Truncate response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_error));
  }
  return true;
}
class File_Touch_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  File_Touch_HandleSyncResponse(
      scoped_refptr<mojo::AssociatedGroupController> group_controller,
      bool* result, ::filesystem::mojom::FileError* out_error)
      : serialization_context_(std::move(group_controller)), result_(result), out_error_(out_error) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  mojo::internal::SerializationContext serialization_context_;
  bool* result_;
  ::filesystem::mojom::FileError* out_error_;DISALLOW_COPY_AND_ASSIGN(File_Touch_HandleSyncResponse);
};
bool File_Touch_HandleSyncResponse::Accept(
    mojo::Message* message) {
  internal::File_Touch_ResponseParams_Data* params =
      reinterpret_cast<internal::File_Touch_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  ::filesystem::mojom::FileError p_error{};
  File_Touch_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "File::Touch response deserializer");
    return false;
  }
  *out_error_ = std::move(p_error);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

class File_Touch_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  File_Touch_ForwardToCallback(
      const File::TouchCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  File::TouchCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(File_Touch_ForwardToCallback);
};
bool File_Touch_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::File_Touch_ResponseParams_Data* params =
      reinterpret_cast<internal::File_Touch_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  ::filesystem::mojom::FileError p_error{};
  File_Touch_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "File::Touch response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_error));
  }
  return true;
}
class File_Dup_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  File_Dup_HandleSyncResponse(
      scoped_refptr<mojo::AssociatedGroupController> group_controller,
      bool* result, ::filesystem::mojom::FileError* out_error)
      : serialization_context_(std::move(group_controller)), result_(result), out_error_(out_error) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  mojo::internal::SerializationContext serialization_context_;
  bool* result_;
  ::filesystem::mojom::FileError* out_error_;DISALLOW_COPY_AND_ASSIGN(File_Dup_HandleSyncResponse);
};
bool File_Dup_HandleSyncResponse::Accept(
    mojo::Message* message) {
  internal::File_Dup_ResponseParams_Data* params =
      reinterpret_cast<internal::File_Dup_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  ::filesystem::mojom::FileError p_error{};
  File_Dup_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "File::Dup response deserializer");
    return false;
  }
  *out_error_ = std::move(p_error);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

class File_Dup_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  File_Dup_ForwardToCallback(
      const File::DupCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  File::DupCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(File_Dup_ForwardToCallback);
};
bool File_Dup_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::File_Dup_ResponseParams_Data* params =
      reinterpret_cast<internal::File_Dup_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  ::filesystem::mojom::FileError p_error{};
  File_Dup_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "File::Dup response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_error));
  }
  return true;
}
class File_Flush_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  File_Flush_HandleSyncResponse(
      scoped_refptr<mojo::AssociatedGroupController> group_controller,
      bool* result, ::filesystem::mojom::FileError* out_error)
      : serialization_context_(std::move(group_controller)), result_(result), out_error_(out_error) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  mojo::internal::SerializationContext serialization_context_;
  bool* result_;
  ::filesystem::mojom::FileError* out_error_;DISALLOW_COPY_AND_ASSIGN(File_Flush_HandleSyncResponse);
};
bool File_Flush_HandleSyncResponse::Accept(
    mojo::Message* message) {
  internal::File_Flush_ResponseParams_Data* params =
      reinterpret_cast<internal::File_Flush_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  ::filesystem::mojom::FileError p_error{};
  File_Flush_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "File::Flush response deserializer");
    return false;
  }
  *out_error_ = std::move(p_error);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

class File_Flush_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  File_Flush_ForwardToCallback(
      const File::FlushCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  File::FlushCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(File_Flush_ForwardToCallback);
};
bool File_Flush_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::File_Flush_ResponseParams_Data* params =
      reinterpret_cast<internal::File_Flush_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  ::filesystem::mojom::FileError p_error{};
  File_Flush_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "File::Flush response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_error));
  }
  return true;
}
class File_Lock_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  File_Lock_HandleSyncResponse(
      scoped_refptr<mojo::AssociatedGroupController> group_controller,
      bool* result, ::filesystem::mojom::FileError* out_error)
      : serialization_context_(std::move(group_controller)), result_(result), out_error_(out_error) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  mojo::internal::SerializationContext serialization_context_;
  bool* result_;
  ::filesystem::mojom::FileError* out_error_;DISALLOW_COPY_AND_ASSIGN(File_Lock_HandleSyncResponse);
};
bool File_Lock_HandleSyncResponse::Accept(
    mojo::Message* message) {
  internal::File_Lock_ResponseParams_Data* params =
      reinterpret_cast<internal::File_Lock_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  ::filesystem::mojom::FileError p_error{};
  File_Lock_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "File::Lock response deserializer");
    return false;
  }
  *out_error_ = std::move(p_error);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

class File_Lock_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  File_Lock_ForwardToCallback(
      const File::LockCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  File::LockCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(File_Lock_ForwardToCallback);
};
bool File_Lock_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::File_Lock_ResponseParams_Data* params =
      reinterpret_cast<internal::File_Lock_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  ::filesystem::mojom::FileError p_error{};
  File_Lock_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "File::Lock response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_error));
  }
  return true;
}
class File_Unlock_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  File_Unlock_HandleSyncResponse(
      scoped_refptr<mojo::AssociatedGroupController> group_controller,
      bool* result, ::filesystem::mojom::FileError* out_error)
      : serialization_context_(std::move(group_controller)), result_(result), out_error_(out_error) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  mojo::internal::SerializationContext serialization_context_;
  bool* result_;
  ::filesystem::mojom::FileError* out_error_;DISALLOW_COPY_AND_ASSIGN(File_Unlock_HandleSyncResponse);
};
bool File_Unlock_HandleSyncResponse::Accept(
    mojo::Message* message) {
  internal::File_Unlock_ResponseParams_Data* params =
      reinterpret_cast<internal::File_Unlock_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  ::filesystem::mojom::FileError p_error{};
  File_Unlock_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "File::Unlock response deserializer");
    return false;
  }
  *out_error_ = std::move(p_error);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

class File_Unlock_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  File_Unlock_ForwardToCallback(
      const File::UnlockCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  File::UnlockCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(File_Unlock_ForwardToCallback);
};
bool File_Unlock_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::File_Unlock_ResponseParams_Data* params =
      reinterpret_cast<internal::File_Unlock_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  ::filesystem::mojom::FileError p_error{};
  File_Unlock_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "File::Unlock response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_error));
  }
  return true;
}
class File_AsHandle_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  File_AsHandle_HandleSyncResponse(
      scoped_refptr<mojo::AssociatedGroupController> group_controller,
      bool* result, ::filesystem::mojom::FileError* out_error, mojo::ScopedHandle* out_file_handle)
      : serialization_context_(std::move(group_controller)), result_(result), out_error_(out_error), out_file_handle_(out_file_handle) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  mojo::internal::SerializationContext serialization_context_;
  bool* result_;
  ::filesystem::mojom::FileError* out_error_;
  mojo::ScopedHandle* out_file_handle_;DISALLOW_COPY_AND_ASSIGN(File_AsHandle_HandleSyncResponse);
};
bool File_AsHandle_HandleSyncResponse::Accept(
    mojo::Message* message) {
  internal::File_AsHandle_ResponseParams_Data* params =
      reinterpret_cast<internal::File_AsHandle_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  ::filesystem::mojom::FileError p_error{};
  mojo::ScopedHandle p_file_handle{};
  File_AsHandle_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  p_file_handle = input_data_view.TakeFileHandle();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "File::AsHandle response deserializer");
    return false;
  }
  *out_error_ = std::move(p_error);
  *out_file_handle_ = std::move(p_file_handle);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

class File_AsHandle_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  File_AsHandle_ForwardToCallback(
      const File::AsHandleCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  File::AsHandleCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(File_AsHandle_ForwardToCallback);
};
bool File_AsHandle_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::File_AsHandle_ResponseParams_Data* params =
      reinterpret_cast<internal::File_AsHandle_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  ::filesystem::mojom::FileError p_error{};
  mojo::ScopedHandle p_file_handle{};
  File_AsHandle_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  p_file_handle = input_data_view.TakeFileHandle();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "File::AsHandle response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_error), 
std::move(p_file_handle));
  }
  return true;
}

FileProxy::FileProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
bool FileProxy::Close(
    ::filesystem::mojom::FileError* param_err) {
  size_t size = sizeof(::filesystem::mojom::internal::File_Close_Params_Data);

  mojo::internal::RequestMessageBuilder builder(internal::kFile_Close_Name, size,
                                                mojo::Message::kFlagIsSync);

  auto params =
      ::filesystem::mojom::internal::File_Close_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());

  bool result = false;
  mojo::MessageReceiver* responder =
      new File_Close_HandleSyncResponse(
          serialization_context_.group_controller, &result, param_err);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
  return result;
}

void FileProxy::Close(
    const CloseCallback& callback) {
  size_t size = sizeof(::filesystem::mojom::internal::File_Close_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kFile_Close_Name, size);

  auto params =
      ::filesystem::mojom::internal::File_Close_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new File_Close_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
bool FileProxy::Read(
    uint32_t param_num_bytes_to_read, int64_t param_offset, ::filesystem::mojom::Whence param_whence, ::filesystem::mojom::FileError* param_error, mojo::Array<uint8_t>* param_bytes_read) {
  size_t size = sizeof(::filesystem::mojom::internal::File_Read_Params_Data);

  mojo::internal::RequestMessageBuilder builder(internal::kFile_Read_Name, size,
                                                mojo::Message::kFlagIsSync);

  auto params =
      ::filesystem::mojom::internal::File_Read_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->num_bytes_to_read = param_num_bytes_to_read;
  params->offset = param_offset;
  mojo::internal::Serialize<::filesystem::mojom::Whence>(
      param_whence, &params->whence);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());

  bool result = false;
  mojo::MessageReceiver* responder =
      new File_Read_HandleSyncResponse(
          serialization_context_.group_controller, &result, param_error, param_bytes_read);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
  return result;
}

void FileProxy::Read(
    uint32_t in_num_bytes_to_read, int64_t in_offset, ::filesystem::mojom::Whence in_whence, const ReadCallback& callback) {
  size_t size = sizeof(::filesystem::mojom::internal::File_Read_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kFile_Read_Name, size);

  auto params =
      ::filesystem::mojom::internal::File_Read_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->num_bytes_to_read = in_num_bytes_to_read;
  params->offset = in_offset;
  mojo::internal::Serialize<::filesystem::mojom::Whence>(
      in_whence, &params->whence);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new File_Read_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
bool FileProxy::Write(
    mojo::Array<uint8_t> param_bytes_to_write, int64_t param_offset, ::filesystem::mojom::Whence param_whence, ::filesystem::mojom::FileError* param_error, uint32_t* param_num_bytes_written) {
  size_t size = sizeof(::filesystem::mojom::internal::File_Write_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::Array<uint8_t>>(
      param_bytes_to_write, &serialization_context_);

  mojo::internal::RequestMessageBuilder builder(internal::kFile_Write_Name, size,
                                                mojo::Message::kFlagIsSync);

  auto params =
      ::filesystem::mojom::internal::File_Write_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->bytes_to_write)::BaseType* bytes_to_write_ptr;
  const mojo::internal::ContainerValidateParams bytes_to_write_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::Array<uint8_t>>(
      param_bytes_to_write, builder.buffer(), &bytes_to_write_ptr, &bytes_to_write_validate_params,
      &serialization_context_);
  params->bytes_to_write.Set(bytes_to_write_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->bytes_to_write.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null bytes_to_write in File.Write request");
  params->offset = param_offset;
  mojo::internal::Serialize<::filesystem::mojom::Whence>(
      param_whence, &params->whence);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());

  bool result = false;
  mojo::MessageReceiver* responder =
      new File_Write_HandleSyncResponse(
          serialization_context_.group_controller, &result, param_error, param_num_bytes_written);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
  return result;
}

void FileProxy::Write(
    mojo::Array<uint8_t> in_bytes_to_write, int64_t in_offset, ::filesystem::mojom::Whence in_whence, const WriteCallback& callback) {
  size_t size = sizeof(::filesystem::mojom::internal::File_Write_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::Array<uint8_t>>(
      in_bytes_to_write, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kFile_Write_Name, size);

  auto params =
      ::filesystem::mojom::internal::File_Write_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->bytes_to_write)::BaseType* bytes_to_write_ptr;
  const mojo::internal::ContainerValidateParams bytes_to_write_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::Array<uint8_t>>(
      in_bytes_to_write, builder.buffer(), &bytes_to_write_ptr, &bytes_to_write_validate_params,
      &serialization_context_);
  params->bytes_to_write.Set(bytes_to_write_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->bytes_to_write.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null bytes_to_write in File.Write request");
  params->offset = in_offset;
  mojo::internal::Serialize<::filesystem::mojom::Whence>(
      in_whence, &params->whence);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new File_Write_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
bool FileProxy::Tell(
    ::filesystem::mojom::FileError* param_error, int64_t* param_position) {
  size_t size = sizeof(::filesystem::mojom::internal::File_Tell_Params_Data);

  mojo::internal::RequestMessageBuilder builder(internal::kFile_Tell_Name, size,
                                                mojo::Message::kFlagIsSync);

  auto params =
      ::filesystem::mojom::internal::File_Tell_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());

  bool result = false;
  mojo::MessageReceiver* responder =
      new File_Tell_HandleSyncResponse(
          serialization_context_.group_controller, &result, param_error, param_position);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
  return result;
}

void FileProxy::Tell(
    const TellCallback& callback) {
  size_t size = sizeof(::filesystem::mojom::internal::File_Tell_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kFile_Tell_Name, size);

  auto params =
      ::filesystem::mojom::internal::File_Tell_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new File_Tell_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
bool FileProxy::Seek(
    int64_t param_offset, ::filesystem::mojom::Whence param_whence, ::filesystem::mojom::FileError* param_error, int64_t* param_position) {
  size_t size = sizeof(::filesystem::mojom::internal::File_Seek_Params_Data);

  mojo::internal::RequestMessageBuilder builder(internal::kFile_Seek_Name, size,
                                                mojo::Message::kFlagIsSync);

  auto params =
      ::filesystem::mojom::internal::File_Seek_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->offset = param_offset;
  mojo::internal::Serialize<::filesystem::mojom::Whence>(
      param_whence, &params->whence);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());

  bool result = false;
  mojo::MessageReceiver* responder =
      new File_Seek_HandleSyncResponse(
          serialization_context_.group_controller, &result, param_error, param_position);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
  return result;
}

void FileProxy::Seek(
    int64_t in_offset, ::filesystem::mojom::Whence in_whence, const SeekCallback& callback) {
  size_t size = sizeof(::filesystem::mojom::internal::File_Seek_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kFile_Seek_Name, size);

  auto params =
      ::filesystem::mojom::internal::File_Seek_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->offset = in_offset;
  mojo::internal::Serialize<::filesystem::mojom::Whence>(
      in_whence, &params->whence);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new File_Seek_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
bool FileProxy::Stat(
    ::filesystem::mojom::FileError* param_error, ::filesystem::mojom::FileInformationPtr* param_file_information) {
  size_t size = sizeof(::filesystem::mojom::internal::File_Stat_Params_Data);

  mojo::internal::RequestMessageBuilder builder(internal::kFile_Stat_Name, size,
                                                mojo::Message::kFlagIsSync);

  auto params =
      ::filesystem::mojom::internal::File_Stat_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());

  bool result = false;
  mojo::MessageReceiver* responder =
      new File_Stat_HandleSyncResponse(
          serialization_context_.group_controller, &result, param_error, param_file_information);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
  return result;
}

void FileProxy::Stat(
    const StatCallback& callback) {
  size_t size = sizeof(::filesystem::mojom::internal::File_Stat_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kFile_Stat_Name, size);

  auto params =
      ::filesystem::mojom::internal::File_Stat_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new File_Stat_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
bool FileProxy::Truncate(
    int64_t param_size, ::filesystem::mojom::FileError* param_error) {
  size_t size = sizeof(::filesystem::mojom::internal::File_Truncate_Params_Data);

  mojo::internal::RequestMessageBuilder builder(internal::kFile_Truncate_Name, size,
                                                mojo::Message::kFlagIsSync);

  auto params =
      ::filesystem::mojom::internal::File_Truncate_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->size = param_size;
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());

  bool result = false;
  mojo::MessageReceiver* responder =
      new File_Truncate_HandleSyncResponse(
          serialization_context_.group_controller, &result, param_error);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
  return result;
}

void FileProxy::Truncate(
    int64_t in_size, const TruncateCallback& callback) {
  size_t size = sizeof(::filesystem::mojom::internal::File_Truncate_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kFile_Truncate_Name, size);

  auto params =
      ::filesystem::mojom::internal::File_Truncate_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->size = in_size;
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new File_Truncate_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
bool FileProxy::Touch(
    ::filesystem::mojom::TimespecOrNowPtr param_atime, ::filesystem::mojom::TimespecOrNowPtr param_mtime, ::filesystem::mojom::FileError* param_error) {
  size_t size = sizeof(::filesystem::mojom::internal::File_Touch_Params_Data);
  size += mojo::internal::PrepareToSerialize<::filesystem::mojom::TimespecOrNowPtr>(
      param_atime, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<::filesystem::mojom::TimespecOrNowPtr>(
      param_mtime, &serialization_context_);

  mojo::internal::RequestMessageBuilder builder(internal::kFile_Touch_Name, size,
                                                mojo::Message::kFlagIsSync);

  auto params =
      ::filesystem::mojom::internal::File_Touch_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->atime)::BaseType* atime_ptr;
  mojo::internal::Serialize<::filesystem::mojom::TimespecOrNowPtr>(
      param_atime, builder.buffer(), &atime_ptr, &serialization_context_);
  params->atime.Set(atime_ptr);
  typename decltype(params->mtime)::BaseType* mtime_ptr;
  mojo::internal::Serialize<::filesystem::mojom::TimespecOrNowPtr>(
      param_mtime, builder.buffer(), &mtime_ptr, &serialization_context_);
  params->mtime.Set(mtime_ptr);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());

  bool result = false;
  mojo::MessageReceiver* responder =
      new File_Touch_HandleSyncResponse(
          serialization_context_.group_controller, &result, param_error);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
  return result;
}

void FileProxy::Touch(
    ::filesystem::mojom::TimespecOrNowPtr in_atime, ::filesystem::mojom::TimespecOrNowPtr in_mtime, const TouchCallback& callback) {
  size_t size = sizeof(::filesystem::mojom::internal::File_Touch_Params_Data);
  size += mojo::internal::PrepareToSerialize<::filesystem::mojom::TimespecOrNowPtr>(
      in_atime, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<::filesystem::mojom::TimespecOrNowPtr>(
      in_mtime, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kFile_Touch_Name, size);

  auto params =
      ::filesystem::mojom::internal::File_Touch_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->atime)::BaseType* atime_ptr;
  mojo::internal::Serialize<::filesystem::mojom::TimespecOrNowPtr>(
      in_atime, builder.buffer(), &atime_ptr, &serialization_context_);
  params->atime.Set(atime_ptr);
  typename decltype(params->mtime)::BaseType* mtime_ptr;
  mojo::internal::Serialize<::filesystem::mojom::TimespecOrNowPtr>(
      in_mtime, builder.buffer(), &mtime_ptr, &serialization_context_);
  params->mtime.Set(mtime_ptr);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new File_Touch_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
bool FileProxy::Dup(
    FileRequest param_file, ::filesystem::mojom::FileError* param_error) {
  size_t size = sizeof(::filesystem::mojom::internal::File_Dup_Params_Data);

  mojo::internal::RequestMessageBuilder builder(internal::kFile_Dup_Name, size,
                                                mojo::Message::kFlagIsSync);

  auto params =
      ::filesystem::mojom::internal::File_Dup_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::filesystem::mojom::FileRequest>(
      param_file, &params->file, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->file),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid file in File.Dup request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());

  bool result = false;
  mojo::MessageReceiver* responder =
      new File_Dup_HandleSyncResponse(
          serialization_context_.group_controller, &result, param_error);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
  return result;
}

void FileProxy::Dup(
    FileRequest in_file, const DupCallback& callback) {
  size_t size = sizeof(::filesystem::mojom::internal::File_Dup_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kFile_Dup_Name, size);

  auto params =
      ::filesystem::mojom::internal::File_Dup_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::filesystem::mojom::FileRequest>(
      in_file, &params->file, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->file),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid file in File.Dup request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new File_Dup_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
bool FileProxy::Flush(
    ::filesystem::mojom::FileError* param_error) {
  size_t size = sizeof(::filesystem::mojom::internal::File_Flush_Params_Data);

  mojo::internal::RequestMessageBuilder builder(internal::kFile_Flush_Name, size,
                                                mojo::Message::kFlagIsSync);

  auto params =
      ::filesystem::mojom::internal::File_Flush_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());

  bool result = false;
  mojo::MessageReceiver* responder =
      new File_Flush_HandleSyncResponse(
          serialization_context_.group_controller, &result, param_error);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
  return result;
}

void FileProxy::Flush(
    const FlushCallback& callback) {
  size_t size = sizeof(::filesystem::mojom::internal::File_Flush_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kFile_Flush_Name, size);

  auto params =
      ::filesystem::mojom::internal::File_Flush_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new File_Flush_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
bool FileProxy::Lock(
    ::filesystem::mojom::FileError* param_error) {
  size_t size = sizeof(::filesystem::mojom::internal::File_Lock_Params_Data);

  mojo::internal::RequestMessageBuilder builder(internal::kFile_Lock_Name, size,
                                                mojo::Message::kFlagIsSync);

  auto params =
      ::filesystem::mojom::internal::File_Lock_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());

  bool result = false;
  mojo::MessageReceiver* responder =
      new File_Lock_HandleSyncResponse(
          serialization_context_.group_controller, &result, param_error);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
  return result;
}

void FileProxy::Lock(
    const LockCallback& callback) {
  size_t size = sizeof(::filesystem::mojom::internal::File_Lock_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kFile_Lock_Name, size);

  auto params =
      ::filesystem::mojom::internal::File_Lock_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new File_Lock_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
bool FileProxy::Unlock(
    ::filesystem::mojom::FileError* param_error) {
  size_t size = sizeof(::filesystem::mojom::internal::File_Unlock_Params_Data);

  mojo::internal::RequestMessageBuilder builder(internal::kFile_Unlock_Name, size,
                                                mojo::Message::kFlagIsSync);

  auto params =
      ::filesystem::mojom::internal::File_Unlock_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());

  bool result = false;
  mojo::MessageReceiver* responder =
      new File_Unlock_HandleSyncResponse(
          serialization_context_.group_controller, &result, param_error);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
  return result;
}

void FileProxy::Unlock(
    const UnlockCallback& callback) {
  size_t size = sizeof(::filesystem::mojom::internal::File_Unlock_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kFile_Unlock_Name, size);

  auto params =
      ::filesystem::mojom::internal::File_Unlock_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new File_Unlock_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
bool FileProxy::AsHandle(
    ::filesystem::mojom::FileError* param_error, mojo::ScopedHandle* param_file_handle) {
  size_t size = sizeof(::filesystem::mojom::internal::File_AsHandle_Params_Data);

  mojo::internal::RequestMessageBuilder builder(internal::kFile_AsHandle_Name, size,
                                                mojo::Message::kFlagIsSync);

  auto params =
      ::filesystem::mojom::internal::File_AsHandle_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());

  bool result = false;
  mojo::MessageReceiver* responder =
      new File_AsHandle_HandleSyncResponse(
          serialization_context_.group_controller, &result, param_error, param_file_handle);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
  return result;
}

void FileProxy::AsHandle(
    const AsHandleCallback& callback) {
  size_t size = sizeof(::filesystem::mojom::internal::File_AsHandle_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kFile_AsHandle_Name, size);

  auto params =
      ::filesystem::mojom::internal::File_AsHandle_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new File_AsHandle_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
class File_Close_ProxyToResponder {
 public:
  static File::CloseCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<File_Close_ProxyToResponder> proxy(
        new File_Close_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&File_Close_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~File_Close_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "File::Close() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  File_Close_ProxyToResponder(
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

  DISALLOW_COPY_AND_ASSIGN(File_Close_ProxyToResponder);
};

void File_Close_ProxyToResponder::Run(
    ::filesystem::mojom::FileError in_err) {
  size_t size = sizeof(::filesystem::mojom::internal::File_Close_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kFile_Close_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::filesystem::mojom::internal::File_Close_ResponseParams_Data::New(builder.buffer());
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
class File_Read_ProxyToResponder {
 public:
  static File::ReadCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<File_Read_ProxyToResponder> proxy(
        new File_Read_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&File_Read_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~File_Read_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "File::Read() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  File_Read_ProxyToResponder(
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
      ::filesystem::mojom::FileError in_error, mojo::Array<uint8_t> in_bytes_read);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(File_Read_ProxyToResponder);
};

void File_Read_ProxyToResponder::Run(
    ::filesystem::mojom::FileError in_error, mojo::Array<uint8_t> in_bytes_read) {
  size_t size = sizeof(::filesystem::mojom::internal::File_Read_ResponseParams_Data);
  size += mojo::internal::PrepareToSerialize<mojo::Array<uint8_t>>(
      in_bytes_read, &serialization_context_);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kFile_Read_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::filesystem::mojom::internal::File_Read_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::filesystem::mojom::FileError>(
      in_error, &params->error);
  typename decltype(params->bytes_read)::BaseType* bytes_read_ptr;
  const mojo::internal::ContainerValidateParams bytes_read_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::Array<uint8_t>>(
      in_bytes_read, builder.buffer(), &bytes_read_ptr, &bytes_read_validate_params,
      &serialization_context_);
  params->bytes_read.Set(bytes_read_ptr);
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
class File_Write_ProxyToResponder {
 public:
  static File::WriteCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<File_Write_ProxyToResponder> proxy(
        new File_Write_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&File_Write_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~File_Write_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "File::Write() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  File_Write_ProxyToResponder(
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
      ::filesystem::mojom::FileError in_error, uint32_t in_num_bytes_written);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(File_Write_ProxyToResponder);
};

void File_Write_ProxyToResponder::Run(
    ::filesystem::mojom::FileError in_error, uint32_t in_num_bytes_written) {
  size_t size = sizeof(::filesystem::mojom::internal::File_Write_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kFile_Write_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::filesystem::mojom::internal::File_Write_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::filesystem::mojom::FileError>(
      in_error, &params->error);
  params->num_bytes_written = in_num_bytes_written;
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
class File_Tell_ProxyToResponder {
 public:
  static File::TellCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<File_Tell_ProxyToResponder> proxy(
        new File_Tell_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&File_Tell_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~File_Tell_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "File::Tell() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  File_Tell_ProxyToResponder(
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
      ::filesystem::mojom::FileError in_error, int64_t in_position);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(File_Tell_ProxyToResponder);
};

void File_Tell_ProxyToResponder::Run(
    ::filesystem::mojom::FileError in_error, int64_t in_position) {
  size_t size = sizeof(::filesystem::mojom::internal::File_Tell_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kFile_Tell_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::filesystem::mojom::internal::File_Tell_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::filesystem::mojom::FileError>(
      in_error, &params->error);
  params->position = in_position;
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
class File_Seek_ProxyToResponder {
 public:
  static File::SeekCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<File_Seek_ProxyToResponder> proxy(
        new File_Seek_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&File_Seek_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~File_Seek_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "File::Seek() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  File_Seek_ProxyToResponder(
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
      ::filesystem::mojom::FileError in_error, int64_t in_position);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(File_Seek_ProxyToResponder);
};

void File_Seek_ProxyToResponder::Run(
    ::filesystem::mojom::FileError in_error, int64_t in_position) {
  size_t size = sizeof(::filesystem::mojom::internal::File_Seek_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kFile_Seek_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::filesystem::mojom::internal::File_Seek_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::filesystem::mojom::FileError>(
      in_error, &params->error);
  params->position = in_position;
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
class File_Stat_ProxyToResponder {
 public:
  static File::StatCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<File_Stat_ProxyToResponder> proxy(
        new File_Stat_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&File_Stat_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~File_Stat_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "File::Stat() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  File_Stat_ProxyToResponder(
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
      ::filesystem::mojom::FileError in_error, ::filesystem::mojom::FileInformationPtr in_file_information);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(File_Stat_ProxyToResponder);
};

void File_Stat_ProxyToResponder::Run(
    ::filesystem::mojom::FileError in_error, ::filesystem::mojom::FileInformationPtr in_file_information) {
  size_t size = sizeof(::filesystem::mojom::internal::File_Stat_ResponseParams_Data);
  size += mojo::internal::PrepareToSerialize<::filesystem::mojom::FileInformationPtr>(
      in_file_information, &serialization_context_);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kFile_Stat_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::filesystem::mojom::internal::File_Stat_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::filesystem::mojom::FileError>(
      in_error, &params->error);
  typename decltype(params->file_information)::BaseType* file_information_ptr;
  mojo::internal::Serialize<::filesystem::mojom::FileInformationPtr>(
      in_file_information, builder.buffer(), &file_information_ptr, &serialization_context_);
  params->file_information.Set(file_information_ptr);
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
class File_Truncate_ProxyToResponder {
 public:
  static File::TruncateCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<File_Truncate_ProxyToResponder> proxy(
        new File_Truncate_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&File_Truncate_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~File_Truncate_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "File::Truncate() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  File_Truncate_ProxyToResponder(
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

  DISALLOW_COPY_AND_ASSIGN(File_Truncate_ProxyToResponder);
};

void File_Truncate_ProxyToResponder::Run(
    ::filesystem::mojom::FileError in_error) {
  size_t size = sizeof(::filesystem::mojom::internal::File_Truncate_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kFile_Truncate_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::filesystem::mojom::internal::File_Truncate_ResponseParams_Data::New(builder.buffer());
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
class File_Touch_ProxyToResponder {
 public:
  static File::TouchCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<File_Touch_ProxyToResponder> proxy(
        new File_Touch_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&File_Touch_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~File_Touch_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "File::Touch() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  File_Touch_ProxyToResponder(
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

  DISALLOW_COPY_AND_ASSIGN(File_Touch_ProxyToResponder);
};

void File_Touch_ProxyToResponder::Run(
    ::filesystem::mojom::FileError in_error) {
  size_t size = sizeof(::filesystem::mojom::internal::File_Touch_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kFile_Touch_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::filesystem::mojom::internal::File_Touch_ResponseParams_Data::New(builder.buffer());
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
class File_Dup_ProxyToResponder {
 public:
  static File::DupCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<File_Dup_ProxyToResponder> proxy(
        new File_Dup_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&File_Dup_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~File_Dup_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "File::Dup() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  File_Dup_ProxyToResponder(
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

  DISALLOW_COPY_AND_ASSIGN(File_Dup_ProxyToResponder);
};

void File_Dup_ProxyToResponder::Run(
    ::filesystem::mojom::FileError in_error) {
  size_t size = sizeof(::filesystem::mojom::internal::File_Dup_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kFile_Dup_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::filesystem::mojom::internal::File_Dup_ResponseParams_Data::New(builder.buffer());
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
class File_Flush_ProxyToResponder {
 public:
  static File::FlushCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<File_Flush_ProxyToResponder> proxy(
        new File_Flush_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&File_Flush_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~File_Flush_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "File::Flush() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  File_Flush_ProxyToResponder(
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

  DISALLOW_COPY_AND_ASSIGN(File_Flush_ProxyToResponder);
};

void File_Flush_ProxyToResponder::Run(
    ::filesystem::mojom::FileError in_error) {
  size_t size = sizeof(::filesystem::mojom::internal::File_Flush_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kFile_Flush_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::filesystem::mojom::internal::File_Flush_ResponseParams_Data::New(builder.buffer());
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
class File_Lock_ProxyToResponder {
 public:
  static File::LockCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<File_Lock_ProxyToResponder> proxy(
        new File_Lock_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&File_Lock_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~File_Lock_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "File::Lock() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  File_Lock_ProxyToResponder(
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

  DISALLOW_COPY_AND_ASSIGN(File_Lock_ProxyToResponder);
};

void File_Lock_ProxyToResponder::Run(
    ::filesystem::mojom::FileError in_error) {
  size_t size = sizeof(::filesystem::mojom::internal::File_Lock_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kFile_Lock_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::filesystem::mojom::internal::File_Lock_ResponseParams_Data::New(builder.buffer());
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
class File_Unlock_ProxyToResponder {
 public:
  static File::UnlockCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<File_Unlock_ProxyToResponder> proxy(
        new File_Unlock_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&File_Unlock_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~File_Unlock_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "File::Unlock() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  File_Unlock_ProxyToResponder(
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

  DISALLOW_COPY_AND_ASSIGN(File_Unlock_ProxyToResponder);
};

void File_Unlock_ProxyToResponder::Run(
    ::filesystem::mojom::FileError in_error) {
  size_t size = sizeof(::filesystem::mojom::internal::File_Unlock_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kFile_Unlock_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::filesystem::mojom::internal::File_Unlock_ResponseParams_Data::New(builder.buffer());
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
class File_AsHandle_ProxyToResponder {
 public:
  static File::AsHandleCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<File_AsHandle_ProxyToResponder> proxy(
        new File_AsHandle_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&File_AsHandle_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~File_AsHandle_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "File::AsHandle() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  File_AsHandle_ProxyToResponder(
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
      ::filesystem::mojom::FileError in_error, mojo::ScopedHandle in_file_handle);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(File_AsHandle_ProxyToResponder);
};

void File_AsHandle_ProxyToResponder::Run(
    ::filesystem::mojom::FileError in_error, mojo::ScopedHandle in_file_handle) {
  size_t size = sizeof(::filesystem::mojom::internal::File_AsHandle_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kFile_AsHandle_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::filesystem::mojom::internal::File_AsHandle_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::filesystem::mojom::FileError>(
      in_error, &params->error);
  mojo::internal::Serialize<mojo::ScopedHandle>(
      in_file_handle, &params->file_handle, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->file_handle),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid file_handle in File.AsHandle response");
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

FileStub::FileStub()
    : sink_(nullptr),
      control_message_handler_(File::Version_) {
}

FileStub::~FileStub() {}

bool FileStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kFile_Close_Name: {
      break;
    }
    case internal::kFile_Read_Name: {
      break;
    }
    case internal::kFile_Write_Name: {
      break;
    }
    case internal::kFile_Tell_Name: {
      break;
    }
    case internal::kFile_Seek_Name: {
      break;
    }
    case internal::kFile_Stat_Name: {
      break;
    }
    case internal::kFile_Truncate_Name: {
      break;
    }
    case internal::kFile_Touch_Name: {
      break;
    }
    case internal::kFile_Dup_Name: {
      break;
    }
    case internal::kFile_Flush_Name: {
      break;
    }
    case internal::kFile_Lock_Name: {
      break;
    }
    case internal::kFile_Unlock_Name: {
      break;
    }
    case internal::kFile_AsHandle_Name: {
      break;
    }
  }
  return false;
}

bool FileStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kFile_Close_Name: {
      internal::File_Close_Params_Data* params =
          reinterpret_cast<internal::File_Close_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      File_Close_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "File::Close deserializer");
        return false;
      }
      File::CloseCallback callback =
          File_Close_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "File::Close");
      mojo::internal::MessageDispatchContext context(message);
      sink_->Close(callback);
      return true;
    }
    case internal::kFile_Read_Name: {
      internal::File_Read_Params_Data* params =
          reinterpret_cast<internal::File_Read_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      uint32_t p_num_bytes_to_read{};
      int64_t p_offset{};
      ::filesystem::mojom::Whence p_whence{};
      File_Read_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_num_bytes_to_read = input_data_view.num_bytes_to_read();
      p_offset = input_data_view.offset();
      if (!input_data_view.ReadWhence(&p_whence))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "File::Read deserializer");
        return false;
      }
      File::ReadCallback callback =
          File_Read_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "File::Read");
      mojo::internal::MessageDispatchContext context(message);
      sink_->Read(
std::move(p_num_bytes_to_read), 
std::move(p_offset), 
std::move(p_whence), callback);
      return true;
    }
    case internal::kFile_Write_Name: {
      internal::File_Write_Params_Data* params =
          reinterpret_cast<internal::File_Write_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      mojo::Array<uint8_t> p_bytes_to_write{};
      int64_t p_offset{};
      ::filesystem::mojom::Whence p_whence{};
      File_Write_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadBytesToWrite(&p_bytes_to_write))
        success = false;
      p_offset = input_data_view.offset();
      if (!input_data_view.ReadWhence(&p_whence))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "File::Write deserializer");
        return false;
      }
      File::WriteCallback callback =
          File_Write_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "File::Write");
      mojo::internal::MessageDispatchContext context(message);
      sink_->Write(
std::move(p_bytes_to_write), 
std::move(p_offset), 
std::move(p_whence), callback);
      return true;
    }
    case internal::kFile_Tell_Name: {
      internal::File_Tell_Params_Data* params =
          reinterpret_cast<internal::File_Tell_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      File_Tell_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "File::Tell deserializer");
        return false;
      }
      File::TellCallback callback =
          File_Tell_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "File::Tell");
      mojo::internal::MessageDispatchContext context(message);
      sink_->Tell(callback);
      return true;
    }
    case internal::kFile_Seek_Name: {
      internal::File_Seek_Params_Data* params =
          reinterpret_cast<internal::File_Seek_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      int64_t p_offset{};
      ::filesystem::mojom::Whence p_whence{};
      File_Seek_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_offset = input_data_view.offset();
      if (!input_data_view.ReadWhence(&p_whence))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "File::Seek deserializer");
        return false;
      }
      File::SeekCallback callback =
          File_Seek_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "File::Seek");
      mojo::internal::MessageDispatchContext context(message);
      sink_->Seek(
std::move(p_offset), 
std::move(p_whence), callback);
      return true;
    }
    case internal::kFile_Stat_Name: {
      internal::File_Stat_Params_Data* params =
          reinterpret_cast<internal::File_Stat_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      File_Stat_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "File::Stat deserializer");
        return false;
      }
      File::StatCallback callback =
          File_Stat_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "File::Stat");
      mojo::internal::MessageDispatchContext context(message);
      sink_->Stat(callback);
      return true;
    }
    case internal::kFile_Truncate_Name: {
      internal::File_Truncate_Params_Data* params =
          reinterpret_cast<internal::File_Truncate_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      int64_t p_size{};
      File_Truncate_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_size = input_data_view.size();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "File::Truncate deserializer");
        return false;
      }
      File::TruncateCallback callback =
          File_Truncate_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "File::Truncate");
      mojo::internal::MessageDispatchContext context(message);
      sink_->Truncate(
std::move(p_size), callback);
      return true;
    }
    case internal::kFile_Touch_Name: {
      internal::File_Touch_Params_Data* params =
          reinterpret_cast<internal::File_Touch_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      ::filesystem::mojom::TimespecOrNowPtr p_atime{};
      ::filesystem::mojom::TimespecOrNowPtr p_mtime{};
      File_Touch_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadAtime(&p_atime))
        success = false;
      if (!input_data_view.ReadMtime(&p_mtime))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "File::Touch deserializer");
        return false;
      }
      File::TouchCallback callback =
          File_Touch_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "File::Touch");
      mojo::internal::MessageDispatchContext context(message);
      sink_->Touch(
std::move(p_atime), 
std::move(p_mtime), callback);
      return true;
    }
    case internal::kFile_Dup_Name: {
      internal::File_Dup_Params_Data* params =
          reinterpret_cast<internal::File_Dup_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      FileRequest p_file{};
      File_Dup_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_file = input_data_view.TakeFile();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "File::Dup deserializer");
        return false;
      }
      File::DupCallback callback =
          File_Dup_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "File::Dup");
      mojo::internal::MessageDispatchContext context(message);
      sink_->Dup(
std::move(p_file), callback);
      return true;
    }
    case internal::kFile_Flush_Name: {
      internal::File_Flush_Params_Data* params =
          reinterpret_cast<internal::File_Flush_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      File_Flush_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "File::Flush deserializer");
        return false;
      }
      File::FlushCallback callback =
          File_Flush_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "File::Flush");
      mojo::internal::MessageDispatchContext context(message);
      sink_->Flush(callback);
      return true;
    }
    case internal::kFile_Lock_Name: {
      internal::File_Lock_Params_Data* params =
          reinterpret_cast<internal::File_Lock_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      File_Lock_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "File::Lock deserializer");
        return false;
      }
      File::LockCallback callback =
          File_Lock_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "File::Lock");
      mojo::internal::MessageDispatchContext context(message);
      sink_->Lock(callback);
      return true;
    }
    case internal::kFile_Unlock_Name: {
      internal::File_Unlock_Params_Data* params =
          reinterpret_cast<internal::File_Unlock_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      File_Unlock_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "File::Unlock deserializer");
        return false;
      }
      File::UnlockCallback callback =
          File_Unlock_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "File::Unlock");
      mojo::internal::MessageDispatchContext context(message);
      sink_->Unlock(callback);
      return true;
    }
    case internal::kFile_AsHandle_Name: {
      internal::File_AsHandle_Params_Data* params =
          reinterpret_cast<internal::File_AsHandle_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      File_AsHandle_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "File::AsHandle deserializer");
        return false;
      }
      File::AsHandleCallback callback =
          File_AsHandle_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "File::AsHandle");
      mojo::internal::MessageDispatchContext context(message);
      sink_->AsHandle(callback);
      return true;
    }
  }
  return false;
}

FileRequestValidator::FileRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool FileRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "File RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kFile_Close_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::File_Close_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kFile_Read_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::File_Read_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kFile_Write_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::File_Write_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kFile_Tell_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::File_Tell_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kFile_Seek_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::File_Seek_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kFile_Stat_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::File_Stat_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kFile_Truncate_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::File_Truncate_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kFile_Touch_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::File_Touch_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kFile_Dup_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::File_Dup_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kFile_Flush_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::File_Flush_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kFile_Lock_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::File_Lock_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kFile_Unlock_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::File_Unlock_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kFile_AsHandle_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::File_AsHandle_Params_Data>(
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

FileResponseValidator::FileResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool FileResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "File ResponseValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kFile_Close_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::File_Close_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kFile_Read_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::File_Read_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kFile_Write_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::File_Write_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kFile_Tell_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::File_Tell_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kFile_Seek_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::File_Seek_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kFile_Stat_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::File_Stat_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kFile_Truncate_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::File_Truncate_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kFile_Touch_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::File_Touch_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kFile_Dup_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::File_Dup_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kFile_Flush_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::File_Flush_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kFile_Lock_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::File_Lock_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kFile_Unlock_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::File_Unlock_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kFile_AsHandle_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::File_AsHandle_ResponseParams_Data>(
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
// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_FILESYSTEM_PUBLIC_INTERFACES_TYPES_MOJOM_H_
#define COMPONENTS_FILESYSTEM_PUBLIC_INTERFACES_TYPES_MOJOM_H_

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
#include "components/filesystem/public/interfaces/types.mojom-shared.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"


namespace filesystem {
namespace mojom {
const uint32_t kFlagOpen = 0x1U;
const uint32_t kFlagCreate = 0x2U;
const uint32_t kFlagOpenAlways = 0x4U;
const uint32_t kCreateAlways = 0x8U;
const uint32_t kFlagOpenTruncated = 0x10U;
const uint32_t kFlagRead = 0x20U;
const uint32_t kFlagWrite = 0x40U;
const uint32_t kFlagAppend = 0x80U;
const uint32_t kDeleteOnClose = 0x2000U;
const uint32_t kDeleteFlagRecursive = 0x1U;
class TimespecOrNow;
class TimespecOrNowDataView;
using TimespecOrNowPtr = mojo::InlinedStructPtr<TimespecOrNow>;

class FileInformation;
class FileInformationDataView;
using FileInformationPtr = mojo::StructPtr<FileInformation>;

class DirectoryEntry;
class DirectoryEntryDataView;
using DirectoryEntryPtr = mojo::InlinedStructPtr<DirectoryEntry>;



class  TimespecOrNow {
 public:
  using DataView = TimespecOrNowDataView;
  using Data_ = internal::TimespecOrNow_Data;

  static TimespecOrNowPtr New();

  template <typename U>
  static TimespecOrNowPtr From(const U& u) {
    return mojo::TypeConverter<TimespecOrNowPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, TimespecOrNow>::Convert(*this);
  }

  TimespecOrNow();
  ~TimespecOrNow();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = TimespecOrNowPtr>
  TimespecOrNowPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, TimespecOrNow>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        TimespecOrNowPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        TimespecOrNowPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  bool now;
  double seconds;
};

class TimespecOrNowDataView {
 public:
  TimespecOrNowDataView() {}

  TimespecOrNowDataView(
      internal::TimespecOrNow_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool now() const {
    return data_->now;
  }
  double seconds() const {
    return data_->seconds;
  }
 private:
  internal::TimespecOrNow_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace filesystem

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::filesystem::mojom::TimespecOrNowDataView> {
  using MojomType = ::filesystem::mojom::TimespecOrNowPtr;
};
}  // namespace internal
}  // namespace mojo

namespace filesystem {
namespace mojom {




class  DirectoryEntry {
 public:
  using DataView = DirectoryEntryDataView;
  using Data_ = internal::DirectoryEntry_Data;

  static DirectoryEntryPtr New();

  template <typename U>
  static DirectoryEntryPtr From(const U& u) {
    return mojo::TypeConverter<DirectoryEntryPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DirectoryEntry>::Convert(*this);
  }

  DirectoryEntry();
  ~DirectoryEntry();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DirectoryEntryPtr>
  DirectoryEntryPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, DirectoryEntry>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        DirectoryEntryPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        DirectoryEntryPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  FsFileType type;
  mojo::String name;
};

class DirectoryEntryDataView {
 public:
  DirectoryEntryDataView() {}

  DirectoryEntryDataView(
      internal::DirectoryEntry_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::filesystem::mojom::FsFileType>(
        data_value, output);
  }

  ::filesystem::mojom::FsFileType type() const {
    return static_cast<::filesystem::mojom::FsFileType>(data_->type);
  }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadName(UserType* output) {
    auto pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::DirectoryEntry_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace filesystem

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::filesystem::mojom::DirectoryEntryDataView> {
  using MojomType = ::filesystem::mojom::DirectoryEntryPtr;
};
}  // namespace internal
}  // namespace mojo

namespace filesystem {
namespace mojom {






class  FileInformation {
 public:
  using DataView = FileInformationDataView;
  using Data_ = internal::FileInformation_Data;

  static FileInformationPtr New();

  template <typename U>
  static FileInformationPtr From(const U& u) {
    return mojo::TypeConverter<FileInformationPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, FileInformation>::Convert(*this);
  }

  FileInformation();
  ~FileInformation();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = FileInformationPtr>
  FileInformationPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, FileInformation>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        FileInformationPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        FileInformationPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  FsFileType type;
  int64_t size;
  double atime;
  double mtime;
  double ctime;
};

class FileInformationDataView {
 public:
  FileInformationDataView() {}

  FileInformationDataView(
      internal::FileInformation_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::filesystem::mojom::FsFileType>(
        data_value, output);
  }

  ::filesystem::mojom::FsFileType type() const {
    return static_cast<::filesystem::mojom::FsFileType>(data_->type);
  }
  int64_t size() const {
    return data_->size;
  }
  double atime() const {
    return data_->atime;
  }
  double mtime() const {
    return data_->mtime;
  }
  double ctime() const {
    return data_->ctime;
  }
 private:
  internal::FileInformation_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace filesystem

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::filesystem::mojom::FileInformationDataView> {
  using MojomType = ::filesystem::mojom::FileInformationPtr;
};
}  // namespace internal
}  // namespace mojo

namespace filesystem {
namespace mojom {



template <typename StructPtrType>
TimespecOrNowPtr TimespecOrNow::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->now = mojo::internal::Clone(now);
  rv->seconds = mojo::internal::Clone(seconds);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, TimespecOrNow>::value>::type*>
bool TimespecOrNow::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->now, other.now))
    return false;
  if (!mojo::internal::Equals(this->seconds, other.seconds))
    return false;
  return true;
}


template <typename StructPtrType>
FileInformationPtr FileInformation::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->type = mojo::internal::Clone(type);
  rv->size = mojo::internal::Clone(size);
  rv->atime = mojo::internal::Clone(atime);
  rv->mtime = mojo::internal::Clone(mtime);
  rv->ctime = mojo::internal::Clone(ctime);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, FileInformation>::value>::type*>
bool FileInformation::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->type, other.type))
    return false;
  if (!mojo::internal::Equals(this->size, other.size))
    return false;
  if (!mojo::internal::Equals(this->atime, other.atime))
    return false;
  if (!mojo::internal::Equals(this->mtime, other.mtime))
    return false;
  if (!mojo::internal::Equals(this->ctime, other.ctime))
    return false;
  return true;
}


template <typename StructPtrType>
DirectoryEntryPtr DirectoryEntry::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->type = mojo::internal::Clone(type);
  rv->name = mojo::internal::Clone(name);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, DirectoryEntry>::value>::type*>
bool DirectoryEntry::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->type, other.type))
    return false;
  if (!mojo::internal::Equals(this->name, other.name))
    return false;
  return true;
}

inline void DirectoryEntryDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace filesystem

namespace mojo {


template <>
struct  StructTraits<::filesystem::mojom::TimespecOrNow, ::filesystem::mojom::TimespecOrNowPtr> {
  static bool IsNull(const ::filesystem::mojom::TimespecOrNowPtr& input) { return !input; }
  static void SetToNull(::filesystem::mojom::TimespecOrNowPtr* output) { output->reset(); }
  static decltype(::filesystem::mojom::TimespecOrNow::now) now(
      const ::filesystem::mojom::TimespecOrNowPtr& input) {
    return input->now;
  }
  static decltype(::filesystem::mojom::TimespecOrNow::seconds) seconds(
      const ::filesystem::mojom::TimespecOrNowPtr& input) {
    return input->seconds;
  }

  static bool Read(::filesystem::mojom::TimespecOrNowDataView input, ::filesystem::mojom::TimespecOrNowPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::filesystem::mojom::TimespecOrNowPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::filesystem::mojom::TimespecOrNow, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::filesystem::mojom::internal::TimespecOrNow_Data);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::filesystem::mojom::internal::TimespecOrNow_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::filesystem::mojom::internal::TimespecOrNow_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->now = CallWithContext(Traits::now, input, custom_context);
      result->seconds = CallWithContext(Traits::seconds, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::filesystem::mojom::internal::TimespecOrNow_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::filesystem::mojom::TimespecOrNowDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::filesystem::mojom::FileInformation, ::filesystem::mojom::FileInformationPtr> {
  static bool IsNull(const ::filesystem::mojom::FileInformationPtr& input) { return !input; }
  static void SetToNull(::filesystem::mojom::FileInformationPtr* output) { output->reset(); }
  static decltype(::filesystem::mojom::FileInformation::type) type(
      const ::filesystem::mojom::FileInformationPtr& input) {
    return input->type;
  }
  static decltype(::filesystem::mojom::FileInformation::size) size(
      const ::filesystem::mojom::FileInformationPtr& input) {
    return input->size;
  }
  static decltype(::filesystem::mojom::FileInformation::atime) atime(
      const ::filesystem::mojom::FileInformationPtr& input) {
    return input->atime;
  }
  static decltype(::filesystem::mojom::FileInformation::mtime) mtime(
      const ::filesystem::mojom::FileInformationPtr& input) {
    return input->mtime;
  }
  static decltype(::filesystem::mojom::FileInformation::ctime) ctime(
      const ::filesystem::mojom::FileInformationPtr& input) {
    return input->ctime;
  }

  static bool Read(::filesystem::mojom::FileInformationDataView input, ::filesystem::mojom::FileInformationPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::filesystem::mojom::FileInformationPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::filesystem::mojom::FileInformation, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::filesystem::mojom::internal::FileInformation_Data);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::filesystem::mojom::internal::FileInformation_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::filesystem::mojom::internal::FileInformation_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      mojo::internal::Serialize<::filesystem::mojom::FsFileType>(
          CallWithContext(Traits::type, input, custom_context), &result->type);
      result->size = CallWithContext(Traits::size, input, custom_context);
      result->atime = CallWithContext(Traits::atime, input, custom_context);
      result->mtime = CallWithContext(Traits::mtime, input, custom_context);
      result->ctime = CallWithContext(Traits::ctime, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::filesystem::mojom::internal::FileInformation_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::filesystem::mojom::FileInformationDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::filesystem::mojom::DirectoryEntry, ::filesystem::mojom::DirectoryEntryPtr> {
  static bool IsNull(const ::filesystem::mojom::DirectoryEntryPtr& input) { return !input; }
  static void SetToNull(::filesystem::mojom::DirectoryEntryPtr* output) { output->reset(); }
  static decltype(::filesystem::mojom::DirectoryEntry::type) type(
      const ::filesystem::mojom::DirectoryEntryPtr& input) {
    return input->type;
  }
  static decltype(::filesystem::mojom::DirectoryEntry::name)& name(
      ::filesystem::mojom::DirectoryEntryPtr& input) {
    return input->name;
  }

  static bool Read(::filesystem::mojom::DirectoryEntryDataView input, ::filesystem::mojom::DirectoryEntryPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::filesystem::mojom::DirectoryEntryPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::filesystem::mojom::DirectoryEntry, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::filesystem::mojom::internal::DirectoryEntry_Data);
    decltype(CallWithContext(Traits::name, input, custom_context)) in_name = CallWithContext(Traits::name, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_name, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::filesystem::mojom::internal::DirectoryEntry_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::filesystem::mojom::internal::DirectoryEntry_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      mojo::internal::Serialize<::filesystem::mojom::FsFileType>(
          CallWithContext(Traits::type, input, custom_context), &result->type);
      decltype(CallWithContext(Traits::name, input, custom_context)) in_name = CallWithContext(Traits::name, input, custom_context);
      typename decltype(result->name)::BaseType* name_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_name, buffer, &name_ptr, context);
      result->name.Set(name_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->name.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null name in DirectoryEntry struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::filesystem::mojom::internal::DirectoryEntry_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::filesystem::mojom::DirectoryEntryDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // COMPONENTS_FILESYSTEM_PUBLIC_INTERFACES_TYPES_MOJOM_H_
// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_INTERFACE_CONTROL_MESSAGES_MOJOM_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_INTERFACE_CONTROL_MESSAGES_MOJOM_H_

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
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom-shared.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"


namespace mojo {
const uint32_t kRunMessageId = 0xFFFFFFFFU;
const uint32_t kRunOrClosePipeMessageId = 0xFFFFFFFEU;
class RunMessageParams;
class RunMessageParamsDataView;
using RunMessageParamsPtr = mojo::StructPtr<RunMessageParams>;

class RunResponseMessageParams;
class RunResponseMessageParamsDataView;
using RunResponseMessageParamsPtr = mojo::StructPtr<RunResponseMessageParams>;

class QueryVersion;
class QueryVersionDataView;
using QueryVersionPtr = mojo::InlinedStructPtr<QueryVersion>;

class QueryVersionResult;
class QueryVersionResultDataView;
using QueryVersionResultPtr = mojo::InlinedStructPtr<QueryVersionResult>;

class RunOrClosePipeMessageParams;
class RunOrClosePipeMessageParamsDataView;
using RunOrClosePipeMessageParamsPtr = mojo::StructPtr<RunOrClosePipeMessageParams>;

class RequireVersion;
class RequireVersionDataView;
using RequireVersionPtr = mojo::InlinedStructPtr<RequireVersion>;





class  QueryVersion {
 public:
  using DataView = QueryVersionDataView;
  using Data_ = internal::QueryVersion_Data;

  static QueryVersionPtr New();

  template <typename U>
  static QueryVersionPtr From(const U& u) {
    return mojo::TypeConverter<QueryVersionPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, QueryVersion>::Convert(*this);
  }

  QueryVersion();
  ~QueryVersion();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = QueryVersionPtr>
  QueryVersionPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, QueryVersion>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        QueryVersionPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        QueryVersionPtr, mojo::Array<uint8_t>>(
            input, output);
  }

};

class QueryVersionDataView {
 public:
  QueryVersionDataView() {}

  QueryVersionDataView(
      internal::QueryVersion_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::QueryVersion_Data* data_ = nullptr;
};



}  // namespace mojo

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::mojo::QueryVersionDataView> {
  using MojomType = ::mojo::QueryVersionPtr;
};
}  // namespace internal
}  // namespace mojo

namespace mojo {



class  QueryVersionResult {
 public:
  using DataView = QueryVersionResultDataView;
  using Data_ = internal::QueryVersionResult_Data;

  static QueryVersionResultPtr New();

  template <typename U>
  static QueryVersionResultPtr From(const U& u) {
    return mojo::TypeConverter<QueryVersionResultPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, QueryVersionResult>::Convert(*this);
  }

  QueryVersionResult();
  ~QueryVersionResult();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = QueryVersionResultPtr>
  QueryVersionResultPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, QueryVersionResult>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        QueryVersionResultPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        QueryVersionResultPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  uint32_t version;
};

class QueryVersionResultDataView {
 public:
  QueryVersionResultDataView() {}

  QueryVersionResultDataView(
      internal::QueryVersionResult_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t version() const {
    return data_->version;
  }
 private:
  internal::QueryVersionResult_Data* data_ = nullptr;
};



}  // namespace mojo

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::mojo::QueryVersionResultDataView> {
  using MojomType = ::mojo::QueryVersionResultPtr;
};
}  // namespace internal
}  // namespace mojo

namespace mojo {




class  RequireVersion {
 public:
  using DataView = RequireVersionDataView;
  using Data_ = internal::RequireVersion_Data;

  static RequireVersionPtr New();

  template <typename U>
  static RequireVersionPtr From(const U& u) {
    return mojo::TypeConverter<RequireVersionPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RequireVersion>::Convert(*this);
  }

  RequireVersion();
  ~RequireVersion();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = RequireVersionPtr>
  RequireVersionPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, RequireVersion>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        RequireVersionPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        RequireVersionPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  uint32_t version;
};

class RequireVersionDataView {
 public:
  RequireVersionDataView() {}

  RequireVersionDataView(
      internal::RequireVersion_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t version() const {
    return data_->version;
  }
 private:
  internal::RequireVersion_Data* data_ = nullptr;
};



}  // namespace mojo

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::mojo::RequireVersionDataView> {
  using MojomType = ::mojo::RequireVersionPtr;
};
}  // namespace internal
}  // namespace mojo

namespace mojo {





class  RunMessageParams {
 public:
  using DataView = RunMessageParamsDataView;
  using Data_ = internal::RunMessageParams_Data;

  static RunMessageParamsPtr New();

  template <typename U>
  static RunMessageParamsPtr From(const U& u) {
    return mojo::TypeConverter<RunMessageParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RunMessageParams>::Convert(*this);
  }

  RunMessageParams();
  ~RunMessageParams();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = RunMessageParamsPtr>
  RunMessageParamsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, RunMessageParams>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        RunMessageParamsPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        RunMessageParamsPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  uint32_t reserved0;
  uint32_t reserved1;
  QueryVersionPtr query_version;
 private:
  DISALLOW_COPY_AND_ASSIGN(RunMessageParams);
};

class RunMessageParamsDataView {
 public:
  RunMessageParamsDataView() {}

  RunMessageParamsDataView(
      internal::RunMessageParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t reserved0() const {
    return data_->reserved0;
  }
  uint32_t reserved1() const {
    return data_->reserved1;
  }
  inline void GetQueryVersionDataView(
      QueryVersionDataView* output);

  template <typename UserType>
  bool ReadQueryVersion(UserType* output) {
    auto pointer = data_->query_version.Get();
    return mojo::internal::Deserialize<::mojo::QueryVersionPtr>(
        pointer, output, context_);
  }
 private:
  internal::RunMessageParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojo

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::mojo::RunMessageParamsDataView> {
  using MojomType = ::mojo::RunMessageParamsPtr;
};
}  // namespace internal
}  // namespace mojo

namespace mojo {



class  RunResponseMessageParams {
 public:
  using DataView = RunResponseMessageParamsDataView;
  using Data_ = internal::RunResponseMessageParams_Data;

  static RunResponseMessageParamsPtr New();

  template <typename U>
  static RunResponseMessageParamsPtr From(const U& u) {
    return mojo::TypeConverter<RunResponseMessageParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RunResponseMessageParams>::Convert(*this);
  }

  RunResponseMessageParams();
  ~RunResponseMessageParams();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = RunResponseMessageParamsPtr>
  RunResponseMessageParamsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, RunResponseMessageParams>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        RunResponseMessageParamsPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        RunResponseMessageParamsPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  uint32_t reserved0;
  uint32_t reserved1;
  QueryVersionResultPtr query_version_result;
 private:
  DISALLOW_COPY_AND_ASSIGN(RunResponseMessageParams);
};

class RunResponseMessageParamsDataView {
 public:
  RunResponseMessageParamsDataView() {}

  RunResponseMessageParamsDataView(
      internal::RunResponseMessageParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t reserved0() const {
    return data_->reserved0;
  }
  uint32_t reserved1() const {
    return data_->reserved1;
  }
  inline void GetQueryVersionResultDataView(
      QueryVersionResultDataView* output);

  template <typename UserType>
  bool ReadQueryVersionResult(UserType* output) {
    auto pointer = data_->query_version_result.Get();
    return mojo::internal::Deserialize<::mojo::QueryVersionResultPtr>(
        pointer, output, context_);
  }
 private:
  internal::RunResponseMessageParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojo

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::mojo::RunResponseMessageParamsDataView> {
  using MojomType = ::mojo::RunResponseMessageParamsPtr;
};
}  // namespace internal
}  // namespace mojo

namespace mojo {





class  RunOrClosePipeMessageParams {
 public:
  using DataView = RunOrClosePipeMessageParamsDataView;
  using Data_ = internal::RunOrClosePipeMessageParams_Data;

  static RunOrClosePipeMessageParamsPtr New();

  template <typename U>
  static RunOrClosePipeMessageParamsPtr From(const U& u) {
    return mojo::TypeConverter<RunOrClosePipeMessageParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RunOrClosePipeMessageParams>::Convert(*this);
  }

  RunOrClosePipeMessageParams();
  ~RunOrClosePipeMessageParams();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = RunOrClosePipeMessageParamsPtr>
  RunOrClosePipeMessageParamsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, RunOrClosePipeMessageParams>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        RunOrClosePipeMessageParamsPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        RunOrClosePipeMessageParamsPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  uint32_t reserved0;
  uint32_t reserved1;
  RequireVersionPtr require_version;
 private:
  DISALLOW_COPY_AND_ASSIGN(RunOrClosePipeMessageParams);
};

class RunOrClosePipeMessageParamsDataView {
 public:
  RunOrClosePipeMessageParamsDataView() {}

  RunOrClosePipeMessageParamsDataView(
      internal::RunOrClosePipeMessageParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t reserved0() const {
    return data_->reserved0;
  }
  uint32_t reserved1() const {
    return data_->reserved1;
  }
  inline void GetRequireVersionDataView(
      RequireVersionDataView* output);

  template <typename UserType>
  bool ReadRequireVersion(UserType* output) {
    auto pointer = data_->require_version.Get();
    return mojo::internal::Deserialize<::mojo::RequireVersionPtr>(
        pointer, output, context_);
  }
 private:
  internal::RunOrClosePipeMessageParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojo

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::mojo::RunOrClosePipeMessageParamsDataView> {
  using MojomType = ::mojo::RunOrClosePipeMessageParamsPtr;
};
}  // namespace internal
}  // namespace mojo

namespace mojo {



template <typename StructPtrType>
RunMessageParamsPtr RunMessageParams::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->reserved0 = mojo::internal::Clone(reserved0);
  rv->reserved1 = mojo::internal::Clone(reserved1);
  rv->query_version = mojo::internal::Clone(query_version);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, RunMessageParams>::value>::type*>
bool RunMessageParams::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->reserved0, other.reserved0))
    return false;
  if (!mojo::internal::Equals(this->reserved1, other.reserved1))
    return false;
  if (!mojo::internal::Equals(this->query_version, other.query_version))
    return false;
  return true;
}

inline void RunMessageParamsDataView::GetQueryVersionDataView(
    QueryVersionDataView* output) {
  auto pointer = data_->query_version.Get();
  *output = QueryVersionDataView(pointer, context_);
}

template <typename StructPtrType>
RunResponseMessageParamsPtr RunResponseMessageParams::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->reserved0 = mojo::internal::Clone(reserved0);
  rv->reserved1 = mojo::internal::Clone(reserved1);
  rv->query_version_result = mojo::internal::Clone(query_version_result);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, RunResponseMessageParams>::value>::type*>
bool RunResponseMessageParams::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->reserved0, other.reserved0))
    return false;
  if (!mojo::internal::Equals(this->reserved1, other.reserved1))
    return false;
  if (!mojo::internal::Equals(this->query_version_result, other.query_version_result))
    return false;
  return true;
}

inline void RunResponseMessageParamsDataView::GetQueryVersionResultDataView(
    QueryVersionResultDataView* output) {
  auto pointer = data_->query_version_result.Get();
  *output = QueryVersionResultDataView(pointer, context_);
}

template <typename StructPtrType>
QueryVersionPtr QueryVersion::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, QueryVersion>::value>::type*>
bool QueryVersion::Equals(const T& other) const {
  return true;
}


template <typename StructPtrType>
QueryVersionResultPtr QueryVersionResult::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->version = mojo::internal::Clone(version);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, QueryVersionResult>::value>::type*>
bool QueryVersionResult::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->version, other.version))
    return false;
  return true;
}


template <typename StructPtrType>
RunOrClosePipeMessageParamsPtr RunOrClosePipeMessageParams::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->reserved0 = mojo::internal::Clone(reserved0);
  rv->reserved1 = mojo::internal::Clone(reserved1);
  rv->require_version = mojo::internal::Clone(require_version);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, RunOrClosePipeMessageParams>::value>::type*>
bool RunOrClosePipeMessageParams::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->reserved0, other.reserved0))
    return false;
  if (!mojo::internal::Equals(this->reserved1, other.reserved1))
    return false;
  if (!mojo::internal::Equals(this->require_version, other.require_version))
    return false;
  return true;
}

inline void RunOrClosePipeMessageParamsDataView::GetRequireVersionDataView(
    RequireVersionDataView* output) {
  auto pointer = data_->require_version.Get();
  *output = RequireVersionDataView(pointer, context_);
}

template <typename StructPtrType>
RequireVersionPtr RequireVersion::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->version = mojo::internal::Clone(version);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, RequireVersion>::value>::type*>
bool RequireVersion::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->version, other.version))
    return false;
  return true;
}




}  // namespace mojo

namespace mojo {


template <>
struct  StructTraits<::mojo::RunMessageParams, ::mojo::RunMessageParamsPtr> {
  static bool IsNull(const ::mojo::RunMessageParamsPtr& input) { return !input; }
  static void SetToNull(::mojo::RunMessageParamsPtr* output) { output->reset(); }
  static decltype(::mojo::RunMessageParams::reserved0) reserved0(
      const ::mojo::RunMessageParamsPtr& input) {
    return input->reserved0;
  }
  static decltype(::mojo::RunMessageParams::reserved1) reserved1(
      const ::mojo::RunMessageParamsPtr& input) {
    return input->reserved1;
  }
  static decltype(::mojo::RunMessageParams::query_version)& query_version(
      ::mojo::RunMessageParamsPtr& input) {
    return input->query_version;
  }

  static bool Read(::mojo::RunMessageParamsDataView input, ::mojo::RunMessageParamsPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::RunMessageParamsPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::RunMessageParams, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::mojo::internal::RunMessageParams_Data);
    decltype(CallWithContext(Traits::query_version, input, custom_context)) in_query_version = CallWithContext(Traits::query_version, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::mojo::QueryVersionPtr>(
        in_query_version, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::internal::RunMessageParams_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::mojo::internal::RunMessageParams_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->reserved0 = CallWithContext(Traits::reserved0, input, custom_context);
      result->reserved1 = CallWithContext(Traits::reserved1, input, custom_context);
      decltype(CallWithContext(Traits::query_version, input, custom_context)) in_query_version = CallWithContext(Traits::query_version, input, custom_context);
      typename decltype(result->query_version)::BaseType* query_version_ptr;
      mojo::internal::Serialize<::mojo::QueryVersionPtr>(
          in_query_version, buffer, &query_version_ptr, context);
      result->query_version.Set(query_version_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->query_version.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null query_version in RunMessageParams struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::mojo::internal::RunMessageParams_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::RunMessageParamsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::mojo::RunResponseMessageParams, ::mojo::RunResponseMessageParamsPtr> {
  static bool IsNull(const ::mojo::RunResponseMessageParamsPtr& input) { return !input; }
  static void SetToNull(::mojo::RunResponseMessageParamsPtr* output) { output->reset(); }
  static decltype(::mojo::RunResponseMessageParams::reserved0) reserved0(
      const ::mojo::RunResponseMessageParamsPtr& input) {
    return input->reserved0;
  }
  static decltype(::mojo::RunResponseMessageParams::reserved1) reserved1(
      const ::mojo::RunResponseMessageParamsPtr& input) {
    return input->reserved1;
  }
  static decltype(::mojo::RunResponseMessageParams::query_version_result)& query_version_result(
      ::mojo::RunResponseMessageParamsPtr& input) {
    return input->query_version_result;
  }

  static bool Read(::mojo::RunResponseMessageParamsDataView input, ::mojo::RunResponseMessageParamsPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::RunResponseMessageParamsPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::RunResponseMessageParams, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::mojo::internal::RunResponseMessageParams_Data);
    decltype(CallWithContext(Traits::query_version_result, input, custom_context)) in_query_version_result = CallWithContext(Traits::query_version_result, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::mojo::QueryVersionResultPtr>(
        in_query_version_result, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::internal::RunResponseMessageParams_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::mojo::internal::RunResponseMessageParams_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->reserved0 = CallWithContext(Traits::reserved0, input, custom_context);
      result->reserved1 = CallWithContext(Traits::reserved1, input, custom_context);
      decltype(CallWithContext(Traits::query_version_result, input, custom_context)) in_query_version_result = CallWithContext(Traits::query_version_result, input, custom_context);
      typename decltype(result->query_version_result)::BaseType* query_version_result_ptr;
      mojo::internal::Serialize<::mojo::QueryVersionResultPtr>(
          in_query_version_result, buffer, &query_version_result_ptr, context);
      result->query_version_result.Set(query_version_result_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->query_version_result.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null query_version_result in RunResponseMessageParams struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::mojo::internal::RunResponseMessageParams_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::RunResponseMessageParamsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::mojo::QueryVersion, ::mojo::QueryVersionPtr> {
  static bool IsNull(const ::mojo::QueryVersionPtr& input) { return !input; }
  static void SetToNull(::mojo::QueryVersionPtr* output) { output->reset(); }

  static bool Read(::mojo::QueryVersionDataView input, ::mojo::QueryVersionPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::QueryVersionPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::QueryVersion, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::mojo::internal::QueryVersion_Data);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::internal::QueryVersion_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::mojo::internal::QueryVersion_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::mojo::internal::QueryVersion_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::QueryVersionDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::mojo::QueryVersionResult, ::mojo::QueryVersionResultPtr> {
  static bool IsNull(const ::mojo::QueryVersionResultPtr& input) { return !input; }
  static void SetToNull(::mojo::QueryVersionResultPtr* output) { output->reset(); }
  static decltype(::mojo::QueryVersionResult::version) version(
      const ::mojo::QueryVersionResultPtr& input) {
    return input->version;
  }

  static bool Read(::mojo::QueryVersionResultDataView input, ::mojo::QueryVersionResultPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::QueryVersionResultPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::QueryVersionResult, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::mojo::internal::QueryVersionResult_Data);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::internal::QueryVersionResult_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::mojo::internal::QueryVersionResult_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->version = CallWithContext(Traits::version, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::mojo::internal::QueryVersionResult_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::QueryVersionResultDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::mojo::RunOrClosePipeMessageParams, ::mojo::RunOrClosePipeMessageParamsPtr> {
  static bool IsNull(const ::mojo::RunOrClosePipeMessageParamsPtr& input) { return !input; }
  static void SetToNull(::mojo::RunOrClosePipeMessageParamsPtr* output) { output->reset(); }
  static decltype(::mojo::RunOrClosePipeMessageParams::reserved0) reserved0(
      const ::mojo::RunOrClosePipeMessageParamsPtr& input) {
    return input->reserved0;
  }
  static decltype(::mojo::RunOrClosePipeMessageParams::reserved1) reserved1(
      const ::mojo::RunOrClosePipeMessageParamsPtr& input) {
    return input->reserved1;
  }
  static decltype(::mojo::RunOrClosePipeMessageParams::require_version)& require_version(
      ::mojo::RunOrClosePipeMessageParamsPtr& input) {
    return input->require_version;
  }

  static bool Read(::mojo::RunOrClosePipeMessageParamsDataView input, ::mojo::RunOrClosePipeMessageParamsPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::RunOrClosePipeMessageParamsPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::RunOrClosePipeMessageParams, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::mojo::internal::RunOrClosePipeMessageParams_Data);
    decltype(CallWithContext(Traits::require_version, input, custom_context)) in_require_version = CallWithContext(Traits::require_version, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::mojo::RequireVersionPtr>(
        in_require_version, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::internal::RunOrClosePipeMessageParams_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::mojo::internal::RunOrClosePipeMessageParams_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->reserved0 = CallWithContext(Traits::reserved0, input, custom_context);
      result->reserved1 = CallWithContext(Traits::reserved1, input, custom_context);
      decltype(CallWithContext(Traits::require_version, input, custom_context)) in_require_version = CallWithContext(Traits::require_version, input, custom_context);
      typename decltype(result->require_version)::BaseType* require_version_ptr;
      mojo::internal::Serialize<::mojo::RequireVersionPtr>(
          in_require_version, buffer, &require_version_ptr, context);
      result->require_version.Set(require_version_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->require_version.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null require_version in RunOrClosePipeMessageParams struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::mojo::internal::RunOrClosePipeMessageParams_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::RunOrClosePipeMessageParamsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::mojo::RequireVersion, ::mojo::RequireVersionPtr> {
  static bool IsNull(const ::mojo::RequireVersionPtr& input) { return !input; }
  static void SetToNull(::mojo::RequireVersionPtr* output) { output->reset(); }
  static decltype(::mojo::RequireVersion::version) version(
      const ::mojo::RequireVersionPtr& input) {
    return input->version;
  }

  static bool Read(::mojo::RequireVersionDataView input, ::mojo::RequireVersionPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::RequireVersionPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::RequireVersion, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::mojo::internal::RequireVersion_Data);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::internal::RequireVersion_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::mojo::internal::RequireVersion_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->version = CallWithContext(Traits::version, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::mojo::internal::RequireVersion_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::RequireVersionDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_INTERFACE_CONTROL_MESSAGES_MOJOM_H_
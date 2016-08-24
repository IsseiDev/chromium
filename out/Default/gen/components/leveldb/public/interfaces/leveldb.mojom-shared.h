// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_LEVELDB_PUBLIC_INTERFACES_LEVELDB_MOJOM_SHARED_H_
#define COMPONENTS_LEVELDB_PUBLIC_INTERFACES_LEVELDB_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization_forward.h"
#include "mojo/public/cpp/bindings/native_enum.h"
#include "components/leveldb/public/interfaces/leveldb.mojom-shared-internal.h"
#include "components/filesystem/public/interfaces/directory.mojom-shared.h"
namespace leveldb {
namespace mojom {

enum class DatabaseError : int32_t {
  OK,
  NOT_FOUND,
  CORRUPTION,
  NOT_SUPPORTED,
  INVALID_ARGUMENT,
  IO_ERROR,
};

inline std::ostream& operator<<(std::ostream& os, DatabaseError value) {
  switch(value) {
    case DatabaseError::OK:
      return os << "DatabaseError::OK";
    case DatabaseError::NOT_FOUND:
      return os << "DatabaseError::NOT_FOUND";
    case DatabaseError::CORRUPTION:
      return os << "DatabaseError::CORRUPTION";
    case DatabaseError::NOT_SUPPORTED:
      return os << "DatabaseError::NOT_SUPPORTED";
    case DatabaseError::INVALID_ARGUMENT:
      return os << "DatabaseError::INVALID_ARGUMENT";
    case DatabaseError::IO_ERROR:
      return os << "DatabaseError::IO_ERROR";
    default:
      return os << "Unknown DatabaseError value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(DatabaseError value) {
  return internal::DatabaseError_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class BatchOperationType : int32_t {
  PUT_KEY,
  DELETE_KEY,
  DELETE_PREFIXED_KEY,
};

inline std::ostream& operator<<(std::ostream& os, BatchOperationType value) {
  switch(value) {
    case BatchOperationType::PUT_KEY:
      return os << "BatchOperationType::PUT_KEY";
    case BatchOperationType::DELETE_KEY:
      return os << "BatchOperationType::DELETE_KEY";
    case BatchOperationType::DELETE_PREFIXED_KEY:
      return os << "BatchOperationType::DELETE_PREFIXED_KEY";
    default:
      return os << "Unknown BatchOperationType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(BatchOperationType value) {
  return internal::BatchOperationType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
}  // namespace mojom
}  // namespace leveldb

namespace std {

template <>
struct hash<::leveldb::mojom::DatabaseError>
    : public mojo::internal::EnumHashImpl<::leveldb::mojom::DatabaseError> {};

template <>
struct hash<::leveldb::mojom::BatchOperationType>
    : public mojo::internal::EnumHashImpl<::leveldb::mojom::BatchOperationType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::leveldb::mojom::DatabaseError, ::leveldb::mojom::DatabaseError> {
  static ::leveldb::mojom::DatabaseError ToMojom(::leveldb::mojom::DatabaseError input) { return input; }
  static bool FromMojom(::leveldb::mojom::DatabaseError input, ::leveldb::mojom::DatabaseError* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::leveldb::mojom::DatabaseError, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::leveldb::mojom::DatabaseError, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::leveldb::mojom::DatabaseError>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::leveldb::mojom::BatchOperationType, ::leveldb::mojom::BatchOperationType> {
  static ::leveldb::mojom::BatchOperationType ToMojom(::leveldb::mojom::BatchOperationType input) { return input; }
  static bool FromMojom(::leveldb::mojom::BatchOperationType input, ::leveldb::mojom::BatchOperationType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::leveldb::mojom::BatchOperationType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::leveldb::mojom::BatchOperationType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::leveldb::mojom::BatchOperationType>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // COMPONENTS_LEVELDB_PUBLIC_INTERFACES_LEVELDB_MOJOM_SHARED_H_

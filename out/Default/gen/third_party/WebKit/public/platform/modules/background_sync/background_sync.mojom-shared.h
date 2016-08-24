// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_BACKGROUND_SYNC_BACKGROUND_SYNC_MOJOM_SHARED_H_
#define THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_BACKGROUND_SYNC_BACKGROUND_SYNC_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization_forward.h"
#include "mojo/public/cpp/bindings/native_enum.h"
#include "third_party/WebKit/public/platform/modules/background_sync/background_sync.mojom-shared-internal.h"
#include "third_party/WebKit/public/platform/modules/serviceworker/service_worker_event_status.mojom-shared.h"
namespace blink {
namespace mojom {

enum class BackgroundSyncNetworkState : int32_t {
  ANY,
  AVOID_CELLULAR,
  ONLINE,
  MAX = BackgroundSyncNetworkState::ONLINE,
};

inline std::ostream& operator<<(std::ostream& os, BackgroundSyncNetworkState value) {
  switch(value) {
    case BackgroundSyncNetworkState::ANY:
      return os << "BackgroundSyncNetworkState::ANY";
    case BackgroundSyncNetworkState::AVOID_CELLULAR:
      return os << "BackgroundSyncNetworkState::AVOID_CELLULAR";
    case BackgroundSyncNetworkState::ONLINE:
      return os << "BackgroundSyncNetworkState::{ONLINE, MAX}";
    default:
      return os << "Unknown BackgroundSyncNetworkState value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(BackgroundSyncNetworkState value) {
  return internal::BackgroundSyncNetworkState_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class BackgroundSyncError : int32_t {
  NONE,
  STORAGE,
  NOT_FOUND,
  NO_SERVICE_WORKER,
  NOT_ALLOWED,
  PERMISSION_DENIED,
  MAX = BackgroundSyncError::PERMISSION_DENIED,
};

inline std::ostream& operator<<(std::ostream& os, BackgroundSyncError value) {
  switch(value) {
    case BackgroundSyncError::NONE:
      return os << "BackgroundSyncError::NONE";
    case BackgroundSyncError::STORAGE:
      return os << "BackgroundSyncError::STORAGE";
    case BackgroundSyncError::NOT_FOUND:
      return os << "BackgroundSyncError::NOT_FOUND";
    case BackgroundSyncError::NO_SERVICE_WORKER:
      return os << "BackgroundSyncError::NO_SERVICE_WORKER";
    case BackgroundSyncError::NOT_ALLOWED:
      return os << "BackgroundSyncError::NOT_ALLOWED";
    case BackgroundSyncError::PERMISSION_DENIED:
      return os << "BackgroundSyncError::{PERMISSION_DENIED, MAX}";
    default:
      return os << "Unknown BackgroundSyncError value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(BackgroundSyncError value) {
  return internal::BackgroundSyncError_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class BackgroundSyncState : int32_t {
  PENDING,
  FIRING,
  REREGISTERED_WHILE_FIRING,
};

inline std::ostream& operator<<(std::ostream& os, BackgroundSyncState value) {
  switch(value) {
    case BackgroundSyncState::PENDING:
      return os << "BackgroundSyncState::PENDING";
    case BackgroundSyncState::FIRING:
      return os << "BackgroundSyncState::FIRING";
    case BackgroundSyncState::REREGISTERED_WHILE_FIRING:
      return os << "BackgroundSyncState::REREGISTERED_WHILE_FIRING";
    default:
      return os << "Unknown BackgroundSyncState value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(BackgroundSyncState value) {
  return internal::BackgroundSyncState_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class BackgroundSyncEventLastChance : int32_t {
  IS_NOT_LAST_CHANCE,
  IS_LAST_CHANCE,
};

inline std::ostream& operator<<(std::ostream& os, BackgroundSyncEventLastChance value) {
  switch(value) {
    case BackgroundSyncEventLastChance::IS_NOT_LAST_CHANCE:
      return os << "BackgroundSyncEventLastChance::IS_NOT_LAST_CHANCE";
    case BackgroundSyncEventLastChance::IS_LAST_CHANCE:
      return os << "BackgroundSyncEventLastChance::IS_LAST_CHANCE";
    default:
      return os << "Unknown BackgroundSyncEventLastChance value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(BackgroundSyncEventLastChance value) {
  return internal::BackgroundSyncEventLastChance_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::BackgroundSyncNetworkState>
    : public mojo::internal::EnumHashImpl<::blink::mojom::BackgroundSyncNetworkState> {};

template <>
struct hash<::blink::mojom::BackgroundSyncError>
    : public mojo::internal::EnumHashImpl<::blink::mojom::BackgroundSyncError> {};

template <>
struct hash<::blink::mojom::BackgroundSyncState>
    : public mojo::internal::EnumHashImpl<::blink::mojom::BackgroundSyncState> {};

template <>
struct hash<::blink::mojom::BackgroundSyncEventLastChance>
    : public mojo::internal::EnumHashImpl<::blink::mojom::BackgroundSyncEventLastChance> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::BackgroundSyncNetworkState, ::blink::mojom::BackgroundSyncNetworkState> {
  static ::blink::mojom::BackgroundSyncNetworkState ToMojom(::blink::mojom::BackgroundSyncNetworkState input) { return input; }
  static bool FromMojom(::blink::mojom::BackgroundSyncNetworkState input, ::blink::mojom::BackgroundSyncNetworkState* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::BackgroundSyncNetworkState, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::BackgroundSyncNetworkState, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::BackgroundSyncNetworkState>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::BackgroundSyncError, ::blink::mojom::BackgroundSyncError> {
  static ::blink::mojom::BackgroundSyncError ToMojom(::blink::mojom::BackgroundSyncError input) { return input; }
  static bool FromMojom(::blink::mojom::BackgroundSyncError input, ::blink::mojom::BackgroundSyncError* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::BackgroundSyncError, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::BackgroundSyncError, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::BackgroundSyncError>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::BackgroundSyncState, ::blink::mojom::BackgroundSyncState> {
  static ::blink::mojom::BackgroundSyncState ToMojom(::blink::mojom::BackgroundSyncState input) { return input; }
  static bool FromMojom(::blink::mojom::BackgroundSyncState input, ::blink::mojom::BackgroundSyncState* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::BackgroundSyncState, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::BackgroundSyncState, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::BackgroundSyncState>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::BackgroundSyncEventLastChance, ::blink::mojom::BackgroundSyncEventLastChance> {
  static ::blink::mojom::BackgroundSyncEventLastChance ToMojom(::blink::mojom::BackgroundSyncEventLastChance input) { return input; }
  static bool FromMojom(::blink::mojom::BackgroundSyncEventLastChance input, ::blink::mojom::BackgroundSyncEventLastChance* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::BackgroundSyncEventLastChance, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::BackgroundSyncEventLastChance, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::BackgroundSyncEventLastChance>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_BACKGROUND_SYNC_BACKGROUND_SYNC_MOJOM_SHARED_H_

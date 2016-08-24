// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_WEBSOCKET_MOJOM_SHARED_H_
#define CONTENT_COMMON_WEBSOCKET_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization_forward.h"
#include "mojo/public/cpp/bindings/native_enum.h"
#include "content/common/websocket.mojom-shared-internal.h"
#include "url/mojo/origin.mojom-shared.h"
#include "url/mojo/url.mojom-shared.h"
namespace content {
namespace mojom {

enum class WebSocketMessageType : int32_t {
  CONTINUATION,
  TEXT,
  BINARY,
  LAST = WebSocketMessageType::BINARY,
};

inline std::ostream& operator<<(std::ostream& os, WebSocketMessageType value) {
  switch(value) {
    case WebSocketMessageType::CONTINUATION:
      return os << "WebSocketMessageType::CONTINUATION";
    case WebSocketMessageType::TEXT:
      return os << "WebSocketMessageType::TEXT";
    case WebSocketMessageType::BINARY:
      return os << "WebSocketMessageType::{BINARY, LAST}";
    default:
      return os << "Unknown WebSocketMessageType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(WebSocketMessageType value) {
  return internal::WebSocketMessageType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
}  // namespace mojom
}  // namespace content

namespace std {

template <>
struct hash<::content::mojom::WebSocketMessageType>
    : public mojo::internal::EnumHashImpl<::content::mojom::WebSocketMessageType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::content::mojom::WebSocketMessageType, ::content::mojom::WebSocketMessageType> {
  static ::content::mojom::WebSocketMessageType ToMojom(::content::mojom::WebSocketMessageType input) { return input; }
  static bool FromMojom(::content::mojom::WebSocketMessageType input, ::content::mojom::WebSocketMessageType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::WebSocketMessageType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::content::mojom::WebSocketMessageType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::content::mojom::WebSocketMessageType>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // CONTENT_COMMON_WEBSOCKET_MOJOM_SHARED_H_

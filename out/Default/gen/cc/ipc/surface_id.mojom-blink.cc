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

#include "cc/ipc/surface_id.mojom-blink.h"

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
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "cc/ipc/surface_sequence_struct_traits.h"
#include "cc/ipc/surface_id_struct_traits.h"
namespace cc {
namespace mojom {
namespace blink {

namespace {

}  // namespace// static
SurfaceIdPtr SurfaceId::New() {
  SurfaceIdPtr rv;
  mojo::internal::StructHelper<SurfaceId>::Initialize(&rv);
  return rv;
}

SurfaceId::SurfaceId()
    : client_id(),
      local_id(),
      nonce() {
}

SurfaceId::~SurfaceId() {
}
}  // namespace blink
}  // namespace mojom
}  // namespace cc

namespace mojo {


// static
bool StructTraits<::cc::mojom::blink::SurfaceId, ::cc::mojom::blink::SurfaceIdPtr>::Read(
    ::cc::mojom::blink::SurfaceIdDataView input,
    ::cc::mojom::blink::SurfaceIdPtr* output) {
  bool success = true;
  ::cc::mojom::blink::SurfaceIdPtr result(::cc::mojom::blink::SurfaceId::New());
  
      result->client_id = input.client_id();
      result->local_id = input.local_id();
      result->nonce = input.nonce();
  *output = std::move(result);
  return success;
}

}  // namespace mojo


#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
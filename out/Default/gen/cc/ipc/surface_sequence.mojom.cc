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

#include "cc/ipc/surface_sequence.mojom.h"

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
#include "cc/ipc/surface_sequence_struct_traits.h"
#include "cc/ipc/surface_id_struct_traits.h"
namespace cc {
namespace mojom {

namespace {

}  // namespace// static
SurfaceSequencePtr SurfaceSequence::New() {
  SurfaceSequencePtr rv;
  mojo::internal::StructHelper<SurfaceSequence>::Initialize(&rv);
  return rv;
}

SurfaceSequence::SurfaceSequence()
    : client_id(),
      sequence() {
}

SurfaceSequence::~SurfaceSequence() {
}
}  // namespace mojom
}  // namespace cc

namespace mojo {


// static
bool StructTraits<::cc::mojom::SurfaceSequence, ::cc::mojom::SurfaceSequencePtr>::Read(
    ::cc::mojom::SurfaceSequenceDataView input,
    ::cc::mojom::SurfaceSequencePtr* output) {
  bool success = true;
  ::cc::mojom::SurfaceSequencePtr result(::cc::mojom::SurfaceSequence::New());
  
      result->client_id = input.client_id();
      result->sequence = input.sequence();
  *output = std::move(result);
  return success;
}

}  // namespace mojo


#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
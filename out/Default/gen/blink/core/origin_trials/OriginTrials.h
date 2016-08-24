// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef OriginTrials_h
#define OriginTrials_h

#include "core/CoreExport.h"
#include "wtf/text/WTFString.h"

namespace blink {

class ExecutionContext;

// A namespace with dynamic tests for experimental features which can be enabled through the
// experimental framework via origin trial tokens.
namespace OriginTrials {
    CORE_EXPORT bool durableStorageEnabled(ExecutionContext*);
    CORE_EXPORT bool foreignFetchEnabled(ExecutionContext*);
    CORE_EXPORT bool linkServiceWorkerEnabled(ExecutionContext*);
    CORE_EXPORT bool originTrialsSampleAPIEnabled(ExecutionContext*);
    CORE_EXPORT bool webBluetoothEnabled(ExecutionContext*);
} // namespace OriginTrials

} // namespace blink

#endif // OriginTrials_h

// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "core/origin_trials/OriginTrials.h"

#include "core/origin_trials/OriginTrialContext.h"
#include "platform/RuntimeEnabledFeatures.h"

namespace blink {


bool OriginTrials::durableStorageEnabled(ExecutionContext* executionContext) {
    if (RuntimeEnabledFeatures::durableStorageEnabled())
        return true;
    OriginTrialContext* context = OriginTrialContext::from(executionContext, OriginTrialContext::DontCreateIfNotExists);
    return context && context->isFeatureEnabled("DurableStorage");
}


bool OriginTrials::foreignFetchEnabled(ExecutionContext* executionContext) {
    if (RuntimeEnabledFeatures::foreignFetchEnabled())
        return true;
    OriginTrialContext* context = OriginTrialContext::from(executionContext, OriginTrialContext::DontCreateIfNotExists);
    return context && context->isFeatureEnabled("ForeignFetch");
}


bool OriginTrials::linkServiceWorkerEnabled(ExecutionContext* executionContext) {
    if (RuntimeEnabledFeatures::linkServiceWorkerEnabled())
        return true;
    OriginTrialContext* context = OriginTrialContext::from(executionContext, OriginTrialContext::DontCreateIfNotExists);
    return context && context->isFeatureEnabled("ForeignFetch");
}


bool OriginTrials::originTrialsSampleAPIEnabled(ExecutionContext* executionContext) {
    if (RuntimeEnabledFeatures::originTrialsSampleAPIEnabled())
        return true;
    OriginTrialContext* context = OriginTrialContext::from(executionContext, OriginTrialContext::DontCreateIfNotExists);
    return context && context->isFeatureEnabled("Frobulate");
}


bool OriginTrials::webBluetoothEnabled(ExecutionContext* executionContext) {
    if (RuntimeEnabledFeatures::webBluetoothEnabled())
        return true;
    OriginTrialContext* context = OriginTrialContext::from(executionContext, OriginTrialContext::DontCreateIfNotExists);
    return context && context->isFeatureEnabled("WebBluetooth");
}


} // namespace blink

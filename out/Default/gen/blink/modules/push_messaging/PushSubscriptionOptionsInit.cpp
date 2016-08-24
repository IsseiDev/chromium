// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "PushSubscriptionOptionsInit.h"

namespace blink {

PushSubscriptionOptionsInit::PushSubscriptionOptionsInit()
{
    setUserVisibleOnly(false);
}

PushSubscriptionOptionsInit::~PushSubscriptionOptionsInit()
{
}

DEFINE_TRACE(PushSubscriptionOptionsInit)
{
    visitor->trace(m_applicationServerKey);
    IDLDictionaryBase::trace(visitor);
}

} // namespace blink

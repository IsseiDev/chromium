// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "RequestDeviceOptions.h"

namespace blink {

RequestDeviceOptions::RequestDeviceOptions()
{
    setOptionalServices(HeapVector<StringOrUnsignedLong>());
}

RequestDeviceOptions::~RequestDeviceOptions()
{
}

DEFINE_TRACE(RequestDeviceOptions)
{
    visitor->trace(m_filters);
    visitor->trace(m_optionalServices);
    IDLDictionaryBase::trace(visitor);
}

} // namespace blink

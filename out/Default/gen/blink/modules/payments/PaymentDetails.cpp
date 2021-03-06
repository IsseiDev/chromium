// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "PaymentDetails.h"

namespace blink {

PaymentDetails::PaymentDetails()
{
}

PaymentDetails::~PaymentDetails()
{
}

DEFINE_TRACE(PaymentDetails)
{
    visitor->trace(m_displayItems);
    visitor->trace(m_modifiers);
    visitor->trace(m_shippingOptions);
    visitor->trace(m_total);
    IDLDictionaryBase::trace(visitor);
}

} // namespace blink

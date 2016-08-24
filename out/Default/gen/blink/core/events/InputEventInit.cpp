// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "InputEventInit.h"

namespace blink {

InputEventInit::InputEventInit()
{
    setData(String(""));
    setInputType(String(""));
    setIsComposing(false);
    setRanges(HeapVector<Member<Range>>());
}

InputEventInit::~InputEventInit()
{
}

DEFINE_TRACE(InputEventInit)
{
    visitor->trace(m_ranges);
    UIEventInit::trace(visitor);
}

} // namespace blink
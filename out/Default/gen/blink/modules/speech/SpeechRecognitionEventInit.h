// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef SpeechRecognitionEventInit_h
#define SpeechRecognitionEventInit_h

#include "bindings/core/v8/Nullable.h"
#include "core/events/EventInit.h"
#include "modules/ModulesExport.h"
#include "modules/speech/SpeechRecognitionResultList.h"
#include "platform/heap/Handle.h"

namespace blink {

class MODULES_EXPORT SpeechRecognitionEventInit : public EventInit {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
public:
    SpeechRecognitionEventInit();
    virtual ~SpeechRecognitionEventInit();

    bool hasResultIndex() const { return !m_resultIndex.isNull(); }
    unsigned resultIndex() const { return m_resultIndex.get(); }
    void setResultIndex(unsigned value) { m_resultIndex = value; }

    bool hasResults() const { return m_results; }
    SpeechRecognitionResultList* results() const { return m_results; }
    void setResults(SpeechRecognitionResultList* value) { m_results = value; }

    v8::Local<v8::Value> toV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
    DECLARE_VIRTUAL_TRACE();

private:
    Nullable<unsigned> m_resultIndex;
    Member<SpeechRecognitionResultList> m_results;

    friend class V8SpeechRecognitionEventInit;
};

} // namespace blink

#endif // SpeechRecognitionEventInit_h

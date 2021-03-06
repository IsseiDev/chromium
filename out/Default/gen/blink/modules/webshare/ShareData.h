// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef ShareData_h
#define ShareData_h

#include "bindings/core/v8/IDLDictionaryBase.h"
#include "modules/ModulesExport.h"
#include "platform/heap/Handle.h"
#include "wtf/text/WTFString.h"

namespace blink {

class MODULES_EXPORT ShareData : public IDLDictionaryBase {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
public:
    ShareData();
    virtual ~ShareData();

    bool hasText() const { return !m_text.isNull(); }
    String text() const { return m_text; }
    void setText(String value) { m_text = value; }
    void setTextToNull() { m_text = String(); }

    bool hasTitle() const { return !m_title.isNull(); }
    String title() const { return m_title; }
    void setTitle(String value) { m_title = value; }
    void setTitleToNull() { m_title = String(); }

    bool hasURL() const { return !m_url.isNull(); }
    String url() const { return m_url; }
    void setURL(String value) { m_url = value; }
    void setURLToNull() { m_url = String(); }

    v8::Local<v8::Value> toV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
    DECLARE_VIRTUAL_TRACE();

private:
    String m_text;
    String m_title;
    String m_url;

    friend class V8ShareData;
};

} // namespace blink

#endif // ShareData_h

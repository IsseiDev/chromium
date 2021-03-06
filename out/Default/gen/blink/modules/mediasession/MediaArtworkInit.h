// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef MediaArtworkInit_h
#define MediaArtworkInit_h

#include "bindings/core/v8/IDLDictionaryBase.h"
#include "modules/ModulesExport.h"
#include "platform/heap/Handle.h"
#include "wtf/text/WTFString.h"

namespace blink {

class MODULES_EXPORT MediaArtworkInit : public IDLDictionaryBase {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
public:
    MediaArtworkInit();
    virtual ~MediaArtworkInit();

    bool hasSizes() const { return !m_sizes.isNull(); }
    String sizes() const { return m_sizes; }
    void setSizes(String value) { m_sizes = value; }

    bool hasSrc() const { return !m_src.isNull(); }
    String src() const { return m_src; }
    void setSrc(String value) { m_src = value; }

    bool hasType() const { return !m_type.isNull(); }
    String type() const { return m_type; }
    void setType(String value) { m_type = value; }

    v8::Local<v8::Value> toV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
    DECLARE_VIRTUAL_TRACE();

private:
    String m_sizes;
    String m_src;
    String m_type;

    friend class V8MediaArtworkInit;
};

} // namespace blink

#endif // MediaArtworkInit_h

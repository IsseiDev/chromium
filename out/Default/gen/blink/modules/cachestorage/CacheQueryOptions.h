// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef CacheQueryOptions_h
#define CacheQueryOptions_h

#include "bindings/core/v8/IDLDictionaryBase.h"
#include "bindings/core/v8/Nullable.h"
#include "modules/ModulesExport.h"
#include "platform/heap/Handle.h"
#include "wtf/text/WTFString.h"

namespace blink {

class MODULES_EXPORT CacheQueryOptions : public IDLDictionaryBase {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
public:
    CacheQueryOptions();
    virtual ~CacheQueryOptions();

    bool hasCacheName() const { return !m_cacheName.isNull(); }
    String cacheName() const { return m_cacheName; }
    void setCacheName(String value) { m_cacheName = value; }

    bool hasIgnoreMethod() const { return !m_ignoreMethod.isNull(); }
    bool ignoreMethod() const { return m_ignoreMethod.get(); }
    void setIgnoreMethod(bool value) { m_ignoreMethod = value; }

    bool hasIgnoreSearch() const { return !m_ignoreSearch.isNull(); }
    bool ignoreSearch() const { return m_ignoreSearch.get(); }
    void setIgnoreSearch(bool value) { m_ignoreSearch = value; }

    bool hasIgnoreVary() const { return !m_ignoreVary.isNull(); }
    bool ignoreVary() const { return m_ignoreVary.get(); }
    void setIgnoreVary(bool value) { m_ignoreVary = value; }

    v8::Local<v8::Value> toV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
    DECLARE_VIRTUAL_TRACE();

private:
    String m_cacheName;
    Nullable<bool> m_ignoreMethod;
    Nullable<bool> m_ignoreSearch;
    Nullable<bool> m_ignoreVary;

    friend class V8CacheQueryOptions;
};

} // namespace blink

#endif // CacheQueryOptions_h

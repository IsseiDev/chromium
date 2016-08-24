// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef StorageEventInit_h
#define StorageEventInit_h

#include "core/events/EventInit.h"
#include "modules/ModulesExport.h"
#include "modules/storage/Storage.h"
#include "platform/heap/Handle.h"
#include "wtf/text/WTFString.h"

namespace blink {

class MODULES_EXPORT StorageEventInit : public EventInit {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
public:
    StorageEventInit();
    virtual ~StorageEventInit();

    bool hasKey() const { return !m_key.isNull(); }
    String key() const { return m_key; }
    void setKey(String value) { m_key = value; }
    void setKeyToNull() { m_key = String(); }

    bool hasNewValue() const { return !m_newValue.isNull(); }
    String newValue() const { return m_newValue; }
    void setNewValue(String value) { m_newValue = value; }
    void setNewValueToNull() { m_newValue = String(); }

    bool hasOldValue() const { return !m_oldValue.isNull(); }
    String oldValue() const { return m_oldValue; }
    void setOldValue(String value) { m_oldValue = value; }
    void setOldValueToNull() { m_oldValue = String(); }

    bool hasStorageArea() const { return m_storageArea; }
    Storage* storageArea() const { return m_storageArea; }
    void setStorageArea(Storage* value) { m_storageArea = value; }
    void setStorageAreaToNull() { m_storageArea = Member<Storage>(); }

    bool hasURL() const { return !m_url.isNull(); }
    String url() const { return m_url; }
    void setURL(String value) { m_url = value; }

    v8::Local<v8::Value> toV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
    DECLARE_VIRTUAL_TRACE();

private:
    String m_key;
    String m_newValue;
    String m_oldValue;
    Member<Storage> m_storageArea;
    String m_url;

    friend class V8StorageEventInit;
};

} // namespace blink

#endif // StorageEventInit_h

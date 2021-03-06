// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef NotificationEventInit_h
#define NotificationEventInit_h

#include "modules/ModulesExport.h"
#include "modules/notifications/Notification.h"
#include "modules/serviceworkers/ExtendableEventInit.h"
#include "platform/heap/Handle.h"
#include "wtf/text/WTFString.h"

namespace blink {

class MODULES_EXPORT NotificationEventInit : public ExtendableEventInit {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
public:
    NotificationEventInit();
    virtual ~NotificationEventInit();

    bool hasAction() const { return !m_action.isNull(); }
    String action() const { return m_action; }
    void setAction(String value) { m_action = value; }

    bool hasNotification() const { return m_notification; }
    Notification* notification() const { return m_notification; }
    void setNotification(Notification* value) { m_notification = value; }

    v8::Local<v8::Value> toV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
    DECLARE_VIRTUAL_TRACE();

private:
    String m_action;
    Member<Notification> m_notification;

    friend class V8NotificationEventInit;
};

} // namespace blink

#endif // NotificationEventInit_h

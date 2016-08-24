// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/notifications/NotificationPlatformBridge

#ifndef org_chromium_chrome_browser_notifications_NotificationPlatformBridge_JNI
#define org_chromium_chrome_browser_notifications_NotificationPlatformBridge_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kNotificationPlatformBridgeClassPath[] =
    "org/chromium/chrome/browser/notifications/NotificationPlatformBridge";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_NotificationPlatformBridge_clazz
    __attribute__((unused)) = 0;
#define NotificationPlatformBridge_clazz(env) base::android::LazyGetClass(env, kNotificationPlatformBridgeClassPath, &g_NotificationPlatformBridge_clazz)

}  // namespace

// Step 2: method stubs.

static void InitializeNotificationPlatformBridge(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller);

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_notifications_NotificationPlatformBridge_nativeInitializeNotificationPlatformBridge(JNIEnv*
    env, jclass jcaller) {
  return InitializeNotificationPlatformBridge(env,
      base::android::JavaParamRef<jclass>(env, jcaller));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_notifications_NotificationPlatformBridge_nativeOnNotificationClicked(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeNotificationPlatformBridgeAndroid,
    jstring notificationId,
    jstring origin,
    jstring profileId,
    jboolean incognito,
    jstring tag,
    jstring webApkPackage,
    jint actionIndex) {
  NotificationPlatformBridgeAndroid* native =
      reinterpret_cast<NotificationPlatformBridgeAndroid*>(nativeNotificationPlatformBridgeAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnNotificationClicked");
  return native->OnNotificationClicked(env,
      base::android::JavaParamRef<jobject>(env, jcaller),
      base::android::JavaParamRef<jstring>(env, notificationId),
      base::android::JavaParamRef<jstring>(env, origin),
      base::android::JavaParamRef<jstring>(env, profileId), incognito,
      base::android::JavaParamRef<jstring>(env, tag),
      base::android::JavaParamRef<jstring>(env, webApkPackage), actionIndex);
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_notifications_NotificationPlatformBridge_nativeOnNotificationClosed(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeNotificationPlatformBridgeAndroid,
    jstring notificationId,
    jstring origin,
    jstring profileId,
    jboolean incognito,
    jstring tag,
    jboolean byUser) {
  NotificationPlatformBridgeAndroid* native =
      reinterpret_cast<NotificationPlatformBridgeAndroid*>(nativeNotificationPlatformBridgeAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnNotificationClosed");
  return native->OnNotificationClosed(env,
      base::android::JavaParamRef<jobject>(env, jcaller),
      base::android::JavaParamRef<jstring>(env, notificationId),
      base::android::JavaParamRef<jstring>(env, origin),
      base::android::JavaParamRef<jstring>(env, profileId), incognito,
      base::android::JavaParamRef<jstring>(env, tag), byUser);
}

static base::subtle::AtomicWord g_NotificationPlatformBridge_create = 0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_NotificationPlatformBridge_create(JNIEnv* env, jlong
    nativeNotificationPlatformBridge) {
  CHECK_CLAZZ(env, NotificationPlatformBridge_clazz(env),
      NotificationPlatformBridge_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, NotificationPlatformBridge_clazz(env),
      "create",

"("
"J"
")"
"Lorg/chromium/chrome/browser/notifications/NotificationPlatformBridge;",
      &g_NotificationPlatformBridge_create);

  jobject ret =
      env->CallStaticObjectMethod(NotificationPlatformBridge_clazz(env),
          method_id, nativeNotificationPlatformBridge);
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_NotificationPlatformBridge_destroy = 0;
static void Java_NotificationPlatformBridge_destroy(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      NotificationPlatformBridge_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, NotificationPlatformBridge_clazz(env),
      "destroy",

"("
")"
"V",
      &g_NotificationPlatformBridge_destroy);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_NotificationPlatformBridge_queryWebApkPackage
    = 0;
static base::android::ScopedJavaLocalRef<jstring>
    Java_NotificationPlatformBridge_queryWebApkPackage(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, const
    base::android::JavaRefOrBare<jstring>& url) {
  CHECK_CLAZZ(env, obj.obj(),
      NotificationPlatformBridge_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, NotificationPlatformBridge_clazz(env),
      "queryWebApkPackage",

"("
"Ljava/lang/String;"
")"
"Ljava/lang/String;",
      &g_NotificationPlatformBridge_queryWebApkPackage);

  jstring ret =
      static_cast<jstring>(env->CallObjectMethod(obj.obj(),
          method_id, url.obj()));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static base::subtle::AtomicWord g_NotificationPlatformBridge_displayNotification
    = 0;
static void Java_NotificationPlatformBridge_displayNotification(JNIEnv* env,
    const base::android::JavaRefOrBare<jobject>& obj, const
    base::android::JavaRefOrBare<jstring>& notificationId,
    const base::android::JavaRefOrBare<jstring>& origin,
    const base::android::JavaRefOrBare<jstring>& profileId,
    jboolean incognito,
    const base::android::JavaRefOrBare<jstring>& tag,
    const base::android::JavaRefOrBare<jstring>& webApkPackage,
    const base::android::JavaRefOrBare<jstring>& title,
    const base::android::JavaRefOrBare<jstring>& body,
    const base::android::JavaRefOrBare<jobject>& icon,
    const base::android::JavaRefOrBare<jobject>& badge,
    const base::android::JavaRefOrBare<jintArray>& vibrationPattern,
    jlong timestamp,
    jboolean renotify,
    jboolean silent,
    const base::android::JavaRefOrBare<jobjectArray>& actionTitles,
    const base::android::JavaRefOrBare<jobjectArray>& actionIcons) {
  CHECK_CLAZZ(env, obj.obj(),
      NotificationPlatformBridge_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, NotificationPlatformBridge_clazz(env),
      "displayNotification",

"("
"Ljava/lang/String;"
"Ljava/lang/String;"
"Ljava/lang/String;"
"Z"
"Ljava/lang/String;"
"Ljava/lang/String;"
"Ljava/lang/String;"
"Ljava/lang/String;"
"Landroid/graphics/Bitmap;"
"Landroid/graphics/Bitmap;"
"[I"
"J"
"Z"
"Z"
"[Ljava/lang/String;"
"[Landroid/graphics/Bitmap;"
")"
"V",
      &g_NotificationPlatformBridge_displayNotification);

     env->CallVoidMethod(obj.obj(),
          method_id, notificationId.obj(), origin.obj(), profileId.obj(),
              incognito, tag.obj(), webApkPackage.obj(), title.obj(),
              body.obj(), icon.obj(), badge.obj(), vibrationPattern.obj(),
              timestamp, renotify, silent, actionTitles.obj(),
              actionIcons.obj());
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_NotificationPlatformBridge_closeNotification =
    0;
static void Java_NotificationPlatformBridge_closeNotification(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, const
    base::android::JavaRefOrBare<jstring>& profileId,
    const base::android::JavaRefOrBare<jstring>& notificationId,
    const base::android::JavaRefOrBare<jstring>& origin,
    const base::android::JavaRefOrBare<jstring>& tag,
    const base::android::JavaRefOrBare<jstring>& webApkPackage) {
  CHECK_CLAZZ(env, obj.obj(),
      NotificationPlatformBridge_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, NotificationPlatformBridge_clazz(env),
      "closeNotification",

"("
"Ljava/lang/String;"
"Ljava/lang/String;"
"Ljava/lang/String;"
"Ljava/lang/String;"
"Ljava/lang/String;"
")"
"V",
      &g_NotificationPlatformBridge_closeNotification);

     env->CallVoidMethod(obj.obj(),
          method_id, profileId.obj(), notificationId.obj(), origin.obj(),
              tag.obj(), webApkPackage.obj());
  jni_generator::CheckException(env);

}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsNotificationPlatformBridge[] = {
    { "nativeInitializeNotificationPlatformBridge",
"("
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_notifications_NotificationPlatformBridge_nativeInitializeNotificationPlatformBridge)
    },
    { "nativeOnNotificationClicked",
"("
"J"
"Ljava/lang/String;"
"Ljava/lang/String;"
"Ljava/lang/String;"
"Z"
"Ljava/lang/String;"
"Ljava/lang/String;"
"I"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_notifications_NotificationPlatformBridge_nativeOnNotificationClicked)
    },
    { "nativeOnNotificationClosed",
"("
"J"
"Ljava/lang/String;"
"Ljava/lang/String;"
"Ljava/lang/String;"
"Z"
"Ljava/lang/String;"
"Z"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_notifications_NotificationPlatformBridge_nativeOnNotificationClosed)
    },
};

static bool RegisterNativesImpl(JNIEnv* env) {
  if (base::android::IsManualJniRegistrationDisabled()) return true;

  const int kMethodsNotificationPlatformBridgeSize =
      arraysize(kMethodsNotificationPlatformBridge);

  if (env->RegisterNatives(NotificationPlatformBridge_clazz(env),
                           kMethodsNotificationPlatformBridge,
                           kMethodsNotificationPlatformBridgeSize) < 0) {
    jni_generator::HandleRegistrationError(
        env, NotificationPlatformBridge_clazz(env), __FILE__);
    return false;
  }

  return true;
}

#endif  // org_chromium_chrome_browser_notifications_NotificationPlatformBridge_JNI

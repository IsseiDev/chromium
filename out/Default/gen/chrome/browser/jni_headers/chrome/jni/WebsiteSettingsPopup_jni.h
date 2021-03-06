// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/pageinfo/WebsiteSettingsPopup

#ifndef org_chromium_chrome_browser_pageinfo_WebsiteSettingsPopup_JNI
#define org_chromium_chrome_browser_pageinfo_WebsiteSettingsPopup_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kWebsiteSettingsPopupClassPath[] =
    "org/chromium/chrome/browser/pageinfo/WebsiteSettingsPopup";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_WebsiteSettingsPopup_clazz __attribute__((unused)) =
    0;
#define WebsiteSettingsPopup_clazz(env) base::android::LazyGetClass(env, kWebsiteSettingsPopupClassPath, &g_WebsiteSettingsPopup_clazz)

}  // namespace

// Step 2: method stubs.

static jlong Init(JNIEnv* env, const base::android::JavaParamRef<jclass>&
    jcaller,
    const base::android::JavaParamRef<jobject>& popup,
    const base::android::JavaParamRef<jobject>& webContents);

extern "C" __attribute__((visibility("default")))
jlong
    Java_org_chromium_chrome_browser_pageinfo_WebsiteSettingsPopup_nativeInit(JNIEnv*
    env, jclass jcaller,
    jobject popup,
    jobject webContents) {
  return Init(env, base::android::JavaParamRef<jclass>(env, jcaller),
      base::android::JavaParamRef<jobject>(env, popup),
      base::android::JavaParamRef<jobject>(env, webContents));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_pageinfo_WebsiteSettingsPopup_nativeDestroy(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeWebsiteSettingsPopupAndroid) {
  WebsiteSettingsPopupAndroid* native =
      reinterpret_cast<WebsiteSettingsPopupAndroid*>(nativeWebsiteSettingsPopupAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "Destroy");
  return native->Destroy(env, base::android::JavaParamRef<jobject>(env,
      jcaller));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_pageinfo_WebsiteSettingsPopup_nativeRecordWebsiteSettingsAction(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeWebsiteSettingsPopupAndroid,
    jint action) {
  WebsiteSettingsPopupAndroid* native =
      reinterpret_cast<WebsiteSettingsPopupAndroid*>(nativeWebsiteSettingsPopupAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "RecordWebsiteSettingsAction");
  return native->RecordWebsiteSettingsAction(env,
      base::android::JavaParamRef<jobject>(env, jcaller), action);
}

static base::subtle::AtomicWord g_WebsiteSettingsPopup_addPermissionSection = 0;
static void Java_WebsiteSettingsPopup_addPermissionSection(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, const
    base::android::JavaRefOrBare<jstring>& name,
    JniIntWrapper type,
    JniIntWrapper currentSettingValue) {
  CHECK_CLAZZ(env, obj.obj(),
      WebsiteSettingsPopup_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, WebsiteSettingsPopup_clazz(env),
      "addPermissionSection",

"("
"Ljava/lang/String;"
"I"
"I"
")"
"V",
      &g_WebsiteSettingsPopup_addPermissionSection);

     env->CallVoidMethod(obj.obj(),
          method_id, name.obj(), as_jint(type), as_jint(currentSettingValue));
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_WebsiteSettingsPopup_updatePermissionDisplay =
    0;
static void Java_WebsiteSettingsPopup_updatePermissionDisplay(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      WebsiteSettingsPopup_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, WebsiteSettingsPopup_clazz(env),
      "updatePermissionDisplay",

"("
")"
"V",
      &g_WebsiteSettingsPopup_updatePermissionDisplay);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_WebsiteSettingsPopup_showDialog = 0;
static void Java_WebsiteSettingsPopup_showDialog(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      WebsiteSettingsPopup_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, WebsiteSettingsPopup_clazz(env),
      "showDialog",

"("
")"
"V",
      &g_WebsiteSettingsPopup_showDialog);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);

}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsWebsiteSettingsPopup[] = {
    { "nativeInit",
"("
"Lorg/chromium/chrome/browser/pageinfo/WebsiteSettingsPopup;"
"Lorg/chromium/content_public/browser/WebContents;"
")"
"J",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_pageinfo_WebsiteSettingsPopup_nativeInit)
    },
    { "nativeDestroy",
"("
"J"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_pageinfo_WebsiteSettingsPopup_nativeDestroy)
    },
    { "nativeRecordWebsiteSettingsAction",
"("
"J"
"I"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_pageinfo_WebsiteSettingsPopup_nativeRecordWebsiteSettingsAction)
    },
};

static bool RegisterNativesImpl(JNIEnv* env) {
  if (base::android::IsManualJniRegistrationDisabled()) return true;

  const int kMethodsWebsiteSettingsPopupSize =
      arraysize(kMethodsWebsiteSettingsPopup);

  if (env->RegisterNatives(WebsiteSettingsPopup_clazz(env),
                           kMethodsWebsiteSettingsPopup,
                           kMethodsWebsiteSettingsPopupSize) < 0) {
    jni_generator::HandleRegistrationError(
        env, WebsiteSettingsPopup_clazz(env), __FILE__);
    return false;
  }

  return true;
}

#endif  // org_chromium_chrome_browser_pageinfo_WebsiteSettingsPopup_JNI

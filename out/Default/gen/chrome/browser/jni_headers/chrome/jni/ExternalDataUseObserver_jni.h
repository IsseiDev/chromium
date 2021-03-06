// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/datausage/ExternalDataUseObserver

#ifndef org_chromium_chrome_browser_datausage_ExternalDataUseObserver_JNI
#define org_chromium_chrome_browser_datausage_ExternalDataUseObserver_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kExternalDataUseObserverClassPath[] =
    "org/chromium/chrome/browser/datausage/ExternalDataUseObserver";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_ExternalDataUseObserver_clazz __attribute__((unused))
    = 0;
#define ExternalDataUseObserver_clazz(env) base::android::LazyGetClass(env, kExternalDataUseObserverClassPath, &g_ExternalDataUseObserver_clazz)

}  // namespace

namespace chrome {
namespace android {

// Step 2: method stubs.
extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_datausage_ExternalDataUseObserver_nativeFetchMatchingRulesDone(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeExternalDataUseObserver,
    jobjectArray appPackageName,
    jobjectArray domainPathRegEx,
    jobjectArray label) {
  ExternalDataUseObserverBridge* native =
      reinterpret_cast<ExternalDataUseObserverBridge*>(nativeExternalDataUseObserver);
  CHECK_NATIVE_PTR(env, jcaller, native, "FetchMatchingRulesDone");
  return native->FetchMatchingRulesDone(env,
      base::android::JavaParamRef<jobject>(env, jcaller),
      base::android::JavaParamRef<jobjectArray>(env, appPackageName),
      base::android::JavaParamRef<jobjectArray>(env, domainPathRegEx),
      base::android::JavaParamRef<jobjectArray>(env, label));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_datausage_ExternalDataUseObserver_nativeOnReportDataUseDone(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeExternalDataUseObserver,
    jboolean success) {
  ExternalDataUseObserverBridge* native =
      reinterpret_cast<ExternalDataUseObserverBridge*>(nativeExternalDataUseObserver);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnReportDataUseDone");
  return native->OnReportDataUseDone(env,
      base::android::JavaParamRef<jobject>(env, jcaller), success);
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_datausage_ExternalDataUseObserver_nativeOnControlAppInstallStateChange(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeExternalDataUseObserver,
    jboolean isControlAppInstalled) {
  ExternalDataUseObserverBridge* native =
      reinterpret_cast<ExternalDataUseObserverBridge*>(nativeExternalDataUseObserver);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnControlAppInstallStateChange");
  return native->OnControlAppInstallStateChange(env,
      base::android::JavaParamRef<jobject>(env, jcaller),
      isControlAppInstalled);
}

static base::subtle::AtomicWord g_ExternalDataUseObserver_create = 0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_ExternalDataUseObserver_create(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& context,
    jlong nativePtr) {
  CHECK_CLAZZ(env, ExternalDataUseObserver_clazz(env),
      ExternalDataUseObserver_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, ExternalDataUseObserver_clazz(env),
      "create",

"("
"Landroid/content/Context;"
"J"
")"
"Lorg/chromium/chrome/browser/datausage/ExternalDataUseObserver;",
      &g_ExternalDataUseObserver_create);

  jobject ret =
      env->CallStaticObjectMethod(ExternalDataUseObserver_clazz(env),
          method_id, context.obj(), nativePtr);
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_ExternalDataUseObserver_getGoogleVariationID =
    0;
static jint Java_ExternalDataUseObserver_getGoogleVariationID(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      ExternalDataUseObserver_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, ExternalDataUseObserver_clazz(env),
      "getGoogleVariationID",

"("
")"
"I",
      &g_ExternalDataUseObserver_getGoogleVariationID);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_ExternalDataUseObserver_initControlAppManager
    = 0;
static void Java_ExternalDataUseObserver_initControlAppManager(JNIEnv* env,
    const base::android::JavaRefOrBare<jobject>& obj, const
    base::android::JavaRefOrBare<jstring>& controlAppPackageName) {
  CHECK_CLAZZ(env, obj.obj(),
      ExternalDataUseObserver_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, ExternalDataUseObserver_clazz(env),
      "initControlAppManager",

"("
"Ljava/lang/String;"
")"
"V",
      &g_ExternalDataUseObserver_initControlAppManager);

     env->CallVoidMethod(obj.obj(),
          method_id, controlAppPackageName.obj());
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_ExternalDataUseObserver_onDestroy = 0;
static void Java_ExternalDataUseObserver_onDestroy(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      ExternalDataUseObserver_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, ExternalDataUseObserver_clazz(env),
      "onDestroy",

"("
")"
"V",
      &g_ExternalDataUseObserver_onDestroy);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_ExternalDataUseObserver_fetchMatchingRules =
    0;
static void Java_ExternalDataUseObserver_fetchMatchingRules(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      ExternalDataUseObserver_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, ExternalDataUseObserver_clazz(env),
      "fetchMatchingRules",

"("
")"
"V",
      &g_ExternalDataUseObserver_fetchMatchingRules);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_ExternalDataUseObserver_reportDataUse = 0;
static void Java_ExternalDataUseObserver_reportDataUse(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, const
    base::android::JavaRefOrBare<jstring>& label,
    const base::android::JavaRefOrBare<jstring>& tag,
    JniIntWrapper networkType,
    const base::android::JavaRefOrBare<jstring>& mccMnc,
    jlong startTimeInMillis,
    jlong endTimeInMillis,
    jlong bytesDownloaded,
    jlong bytesUploaded) {
  CHECK_CLAZZ(env, obj.obj(),
      ExternalDataUseObserver_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, ExternalDataUseObserver_clazz(env),
      "reportDataUse",

"("
"Ljava/lang/String;"
"Ljava/lang/String;"
"I"
"Ljava/lang/String;"
"J"
"J"
"J"
"J"
")"
"V",
      &g_ExternalDataUseObserver_reportDataUse);

     env->CallVoidMethod(obj.obj(),
          method_id, label.obj(), tag.obj(), as_jint(networkType), mccMnc.obj(),
              startTimeInMillis, endTimeInMillis, bytesDownloaded,
              bytesUploaded);
  jni_generator::CheckException(env);

}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsExternalDataUseObserver[] = {
    { "nativeFetchMatchingRulesDone",
"("
"J"
"[Ljava/lang/String;"
"[Ljava/lang/String;"
"[Ljava/lang/String;"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_datausage_ExternalDataUseObserver_nativeFetchMatchingRulesDone)
    },
    { "nativeOnReportDataUseDone",
"("
"J"
"Z"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_datausage_ExternalDataUseObserver_nativeOnReportDataUseDone)
    },
    { "nativeOnControlAppInstallStateChange",
"("
"J"
"Z"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_datausage_ExternalDataUseObserver_nativeOnControlAppInstallStateChange)
    },
};

static bool RegisterNativesImpl(JNIEnv* env) {
  if (base::android::IsManualJniRegistrationDisabled()) return true;

  const int kMethodsExternalDataUseObserverSize =
      arraysize(kMethodsExternalDataUseObserver);

  if (env->RegisterNatives(ExternalDataUseObserver_clazz(env),
                           kMethodsExternalDataUseObserver,
                           kMethodsExternalDataUseObserverSize) < 0) {
    jni_generator::HandleRegistrationError(
        env, ExternalDataUseObserver_clazz(env), __FILE__);
    return false;
  }

  return true;
}

}  // namespace android
}  // namespace chrome

#endif  // org_chromium_chrome_browser_datausage_ExternalDataUseObserver_JNI

// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/contextualsearch/ContextualSearchTabHelper

#ifndef org_chromium_chrome_browser_contextualsearch_ContextualSearchTabHelper_JNI
#define org_chromium_chrome_browser_contextualsearch_ContextualSearchTabHelper_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kContextualSearchTabHelperClassPath[] =
    "org/chromium/chrome/browser/contextualsearch/ContextualSearchTabHelper";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_ContextualSearchTabHelper_clazz
    __attribute__((unused)) = 0;
#define ContextualSearchTabHelper_clazz(env) base::android::LazyGetClass(env, kContextualSearchTabHelperClassPath, &g_ContextualSearchTabHelper_clazz)

}  // namespace

// Step 2: method stubs.

static jlong Init(JNIEnv* env, const base::android::JavaParamRef<jobject>&
    jcaller,
    const base::android::JavaParamRef<jobject>& profile);

extern "C" __attribute__((visibility("default")))
jlong
    Java_org_chromium_chrome_browser_contextualsearch_ContextualSearchTabHelper_nativeInit(JNIEnv*
    env, jobject jcaller,
    jobject profile) {
  return Init(env, base::android::JavaParamRef<jobject>(env, jcaller),
      base::android::JavaParamRef<jobject>(env, profile));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_contextualsearch_ContextualSearchTabHelper_nativeDestroy(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeContextualSearchTabHelper) {
  ContextualSearchTabHelper* native =
      reinterpret_cast<ContextualSearchTabHelper*>(nativeContextualSearchTabHelper);
  CHECK_NATIVE_PTR(env, jcaller, native, "Destroy");
  return native->Destroy(env, base::android::JavaParamRef<jobject>(env,
      jcaller));
}

static base::subtle::AtomicWord
    g_ContextualSearchTabHelper_onContextualSearchPrefChanged = 0;
static void Java_ContextualSearchTabHelper_onContextualSearchPrefChanged(JNIEnv*
    env, const base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      ContextualSearchTabHelper_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, ContextualSearchTabHelper_clazz(env),
      "onContextualSearchPrefChanged",

"("
")"
"V",
      &g_ContextualSearchTabHelper_onContextualSearchPrefChanged);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);

}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsContextualSearchTabHelper[] = {
    { "nativeInit",
"("
"Lorg/chromium/chrome/browser/profiles/Profile;"
")"
"J",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_contextualsearch_ContextualSearchTabHelper_nativeInit)
    },
    { "nativeDestroy",
"("
"J"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_contextualsearch_ContextualSearchTabHelper_nativeDestroy)
    },
};

static bool RegisterNativesImpl(JNIEnv* env) {
  if (base::android::IsManualJniRegistrationDisabled()) return true;

  const int kMethodsContextualSearchTabHelperSize =
      arraysize(kMethodsContextualSearchTabHelper);

  if (env->RegisterNatives(ContextualSearchTabHelper_clazz(env),
                           kMethodsContextualSearchTabHelper,
                           kMethodsContextualSearchTabHelperSize) < 0) {
    jni_generator::HandleRegistrationError(
        env, ContextualSearchTabHelper_clazz(env), __FILE__);
    return false;
  }

  return true;
}

#endif  // org_chromium_chrome_browser_contextualsearch_ContextualSearchTabHelper_JNI
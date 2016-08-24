// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/infobar/DataReductionPromoInfoBarDelegate

#ifndef org_chromium_chrome_browser_infobar_DataReductionPromoInfoBarDelegate_JNI
#define org_chromium_chrome_browser_infobar_DataReductionPromoInfoBarDelegate_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kDataReductionPromoInfoBarDelegateClassPath[] =
    "org/chromium/chrome/browser/infobar/DataReductionPromoInfoBarDelegate";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_DataReductionPromoInfoBarDelegate_clazz
    __attribute__((unused)) = 0;
#define DataReductionPromoInfoBarDelegate_clazz(env) base::android::LazyGetClass(env, kDataReductionPromoInfoBarDelegateClassPath, &g_DataReductionPromoInfoBarDelegate_clazz)

}  // namespace

// Step 2: method stubs.

static void Launch(JNIEnv* env, const base::android::JavaParamRef<jclass>&
    jcaller,
    const base::android::JavaParamRef<jobject>& webContents);

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_infobar_DataReductionPromoInfoBarDelegate_nativeLaunch(JNIEnv*
    env, jclass jcaller,
    jobject webContents) {
  return Launch(env, base::android::JavaParamRef<jclass>(env, jcaller),
      base::android::JavaParamRef<jobject>(env, webContents));
}

static base::subtle::AtomicWord
    g_DataReductionPromoInfoBarDelegate_showPromoInfoBar = 0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_DataReductionPromoInfoBarDelegate_showPromoInfoBar(JNIEnv* env) {
  CHECK_CLAZZ(env, DataReductionPromoInfoBarDelegate_clazz(env),
      DataReductionPromoInfoBarDelegate_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, DataReductionPromoInfoBarDelegate_clazz(env),
      "showPromoInfoBar",

"("
")"
"Lorg/chromium/chrome/browser/infobar/InfoBar;",
      &g_DataReductionPromoInfoBarDelegate_showPromoInfoBar);

  jobject ret =
      env->CallStaticObjectMethod(DataReductionPromoInfoBarDelegate_clazz(env),
          method_id);
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_DataReductionPromoInfoBarDelegate_accept = 0;
static void Java_DataReductionPromoInfoBarDelegate_accept(JNIEnv* env) {
  CHECK_CLAZZ(env, DataReductionPromoInfoBarDelegate_clazz(env),
      DataReductionPromoInfoBarDelegate_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, DataReductionPromoInfoBarDelegate_clazz(env),
      "accept",

"("
")"
"V",
      &g_DataReductionPromoInfoBarDelegate_accept);

     env->CallStaticVoidMethod(DataReductionPromoInfoBarDelegate_clazz(env),
          method_id);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord
    g_DataReductionPromoInfoBarDelegate_onNativeDestroyed = 0;
static void Java_DataReductionPromoInfoBarDelegate_onNativeDestroyed(JNIEnv*
    env) {
  CHECK_CLAZZ(env, DataReductionPromoInfoBarDelegate_clazz(env),
      DataReductionPromoInfoBarDelegate_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, DataReductionPromoInfoBarDelegate_clazz(env),
      "onNativeDestroyed",

"("
")"
"V",
      &g_DataReductionPromoInfoBarDelegate_onNativeDestroyed);

     env->CallStaticVoidMethod(DataReductionPromoInfoBarDelegate_clazz(env),
          method_id);
  jni_generator::CheckException(env);

}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsDataReductionPromoInfoBarDelegate[] = {
    { "nativeLaunch",
"("
"Lorg/chromium/content_public/browser/WebContents;"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_infobar_DataReductionPromoInfoBarDelegate_nativeLaunch)
    },
};

static bool RegisterNativesImpl(JNIEnv* env) {
  if (base::android::IsManualJniRegistrationDisabled()) return true;

  const int kMethodsDataReductionPromoInfoBarDelegateSize =
      arraysize(kMethodsDataReductionPromoInfoBarDelegate);

  if (env->RegisterNatives(DataReductionPromoInfoBarDelegate_clazz(env),
                           kMethodsDataReductionPromoInfoBarDelegate,
                           kMethodsDataReductionPromoInfoBarDelegateSize) < 0) {
    jni_generator::HandleRegistrationError(
        env, DataReductionPromoInfoBarDelegate_clazz(env), __FILE__);
    return false;
  }

  return true;
}

#endif  // org_chromium_chrome_browser_infobar_DataReductionPromoInfoBarDelegate_JNI

// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/infobar/TranslateInfoBar

#ifndef org_chromium_chrome_browser_infobar_TranslateInfoBar_JNI
#define org_chromium_chrome_browser_infobar_TranslateInfoBar_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kTranslateInfoBarClassPath[] =
    "org/chromium/chrome/browser/infobar/TranslateInfoBar";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_TranslateInfoBar_clazz __attribute__((unused)) = 0;
#define TranslateInfoBar_clazz(env) base::android::LazyGetClass(env, kTranslateInfoBarClassPath, &g_TranslateInfoBar_clazz)

}  // namespace

// Step 2: method stubs.
extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_infobar_TranslateInfoBar_nativeApplyTranslateOptions(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeTranslateInfoBar,
    jstring sourceLanguageCode,
    jstring targetLanguageCode,
    jboolean alwaysTranslate,
    jboolean neverTranslateLanguage,
    jboolean neverTranslateSite) {
  TranslateInfoBar* native =
      reinterpret_cast<TranslateInfoBar*>(nativeTranslateInfoBar);
  CHECK_NATIVE_PTR(env, jcaller, native, "ApplyTranslateOptions");
  return native->ApplyTranslateOptions(env,
      base::android::JavaParamRef<jobject>(env, jcaller),
      base::android::JavaParamRef<jstring>(env, sourceLanguageCode),
      base::android::JavaParamRef<jstring>(env, targetLanguageCode),
      alwaysTranslate, neverTranslateLanguage, neverTranslateSite);
}

static base::subtle::AtomicWord g_TranslateInfoBar_show = 0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_TranslateInfoBar_show(JNIEnv* env, JniIntWrapper translateBarType,
    const base::android::JavaRefOrBare<jstring>& sourceLanguageCode,
    const base::android::JavaRefOrBare<jstring>& targetLanguageCode,
    jboolean autoTranslatePair,
    jboolean showNeverInfobar,
    jboolean triggeredFromMenu,
    const base::android::JavaRefOrBare<jobjectArray>& languages,
    const base::android::JavaRefOrBare<jobjectArray>& codes) {
  CHECK_CLAZZ(env, TranslateInfoBar_clazz(env),
      TranslateInfoBar_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, TranslateInfoBar_clazz(env),
      "show",

"("
"I"
"Ljava/lang/String;"
"Ljava/lang/String;"
"Z"
"Z"
"Z"
"[Ljava/lang/String;"
"[Ljava/lang/String;"
")"
"Lorg/chromium/chrome/browser/infobar/InfoBar;",
      &g_TranslateInfoBar_show);

  jobject ret =
      env->CallStaticObjectMethod(TranslateInfoBar_clazz(env),
          method_id, as_jint(translateBarType), sourceLanguageCode.obj(),
              targetLanguageCode.obj(), autoTranslatePair, showNeverInfobar,
              triggeredFromMenu, languages.obj(), codes.obj());
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_TranslateInfoBar_setNativePtr = 0;
static void Java_TranslateInfoBar_setNativePtr(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, jlong nativePtr) {
  CHECK_CLAZZ(env, obj.obj(),
      TranslateInfoBar_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, TranslateInfoBar_clazz(env),
      "setNativePtr",

"("
"J"
")"
"V",
      &g_TranslateInfoBar_setNativePtr);

     env->CallVoidMethod(obj.obj(),
          method_id, nativePtr);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_TranslateInfoBar_changeTranslateInfoBarType =
    0;
static void Java_TranslateInfoBar_changeTranslateInfoBarType(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, JniIntWrapper infoBarType) {
  CHECK_CLAZZ(env, obj.obj(),
      TranslateInfoBar_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, TranslateInfoBar_clazz(env),
      "changeTranslateInfoBarType",

"("
"I"
")"
"V",
      &g_TranslateInfoBar_changeTranslateInfoBarType);

     env->CallVoidMethod(obj.obj(),
          method_id, as_jint(infoBarType));
  jni_generator::CheckException(env);

}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsTranslateInfoBar[] = {
    { "nativeApplyTranslateOptions",
"("
"J"
"Ljava/lang/String;"
"Ljava/lang/String;"
"Z"
"Z"
"Z"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_infobar_TranslateInfoBar_nativeApplyTranslateOptions)
    },
};

static bool RegisterNativesImpl(JNIEnv* env) {
  if (base::android::IsManualJniRegistrationDisabled()) return true;

  const int kMethodsTranslateInfoBarSize = arraysize(kMethodsTranslateInfoBar);

  if (env->RegisterNatives(TranslateInfoBar_clazz(env),
                           kMethodsTranslateInfoBar,
                           kMethodsTranslateInfoBarSize) < 0) {
    jni_generator::HandleRegistrationError(
        env, TranslateInfoBar_clazz(env), __FILE__);
    return false;
  }

  return true;
}

#endif  // org_chromium_chrome_browser_infobar_TranslateInfoBar_JNI

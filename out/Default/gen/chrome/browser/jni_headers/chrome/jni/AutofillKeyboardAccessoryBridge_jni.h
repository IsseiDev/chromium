// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/autofill/AutofillKeyboardAccessoryBridge

#ifndef org_chromium_chrome_browser_autofill_AutofillKeyboardAccessoryBridge_JNI
#define org_chromium_chrome_browser_autofill_AutofillKeyboardAccessoryBridge_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kAutofillKeyboardAccessoryBridgeClassPath[] =
    "org/chromium/chrome/browser/autofill/AutofillKeyboardAccessoryBridge";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_AutofillKeyboardAccessoryBridge_clazz
    __attribute__((unused)) = 0;
#define AutofillKeyboardAccessoryBridge_clazz(env) base::android::LazyGetClass(env, kAutofillKeyboardAccessoryBridgeClassPath, &g_AutofillKeyboardAccessoryBridge_clazz)

}  // namespace

namespace autofill {

// Step 2: method stubs.
extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_autofill_AutofillKeyboardAccessoryBridge_nativeViewDismissed(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeAutofillKeyboardAccessoryView) {
  AutofillKeyboardAccessoryView* native =
      reinterpret_cast<AutofillKeyboardAccessoryView*>(nativeAutofillKeyboardAccessoryView);
  CHECK_NATIVE_PTR(env, jcaller, native, "ViewDismissed");
  return native->ViewDismissed(env, base::android::JavaParamRef<jobject>(env,
      jcaller));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_autofill_AutofillKeyboardAccessoryBridge_nativeSuggestionSelected(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeAutofillKeyboardAccessoryView,
    jint listIndex) {
  AutofillKeyboardAccessoryView* native =
      reinterpret_cast<AutofillKeyboardAccessoryView*>(nativeAutofillKeyboardAccessoryView);
  CHECK_NATIVE_PTR(env, jcaller, native, "SuggestionSelected");
  return native->SuggestionSelected(env,
      base::android::JavaParamRef<jobject>(env, jcaller), listIndex);
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_autofill_AutofillKeyboardAccessoryBridge_nativeDeletionRequested(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeAutofillKeyboardAccessoryView,
    jint listIndex) {
  AutofillKeyboardAccessoryView* native =
      reinterpret_cast<AutofillKeyboardAccessoryView*>(nativeAutofillKeyboardAccessoryView);
  CHECK_NATIVE_PTR(env, jcaller, native, "DeletionRequested");
  return native->DeletionRequested(env,
      base::android::JavaParamRef<jobject>(env, jcaller), listIndex);
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_autofill_AutofillKeyboardAccessoryBridge_nativeDeletionConfirmed(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeAutofillKeyboardAccessoryView) {
  AutofillKeyboardAccessoryView* native =
      reinterpret_cast<AutofillKeyboardAccessoryView*>(nativeAutofillKeyboardAccessoryView);
  CHECK_NATIVE_PTR(env, jcaller, native, "DeletionConfirmed");
  return native->DeletionConfirmed(env,
      base::android::JavaParamRef<jobject>(env, jcaller));
}

static base::subtle::AtomicWord g_AutofillKeyboardAccessoryBridge_create = 0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_AutofillKeyboardAccessoryBridge_create(JNIEnv* env) {
  CHECK_CLAZZ(env, AutofillKeyboardAccessoryBridge_clazz(env),
      AutofillKeyboardAccessoryBridge_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, AutofillKeyboardAccessoryBridge_clazz(env),
      "create",

"("
")"
"Lorg/chromium/chrome/browser/autofill/AutofillKeyboardAccessoryBridge;",
      &g_AutofillKeyboardAccessoryBridge_create);

  jobject ret =
      env->CallStaticObjectMethod(AutofillKeyboardAccessoryBridge_clazz(env),
          method_id);
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_AutofillKeyboardAccessoryBridge_init = 0;
static void Java_AutofillKeyboardAccessoryBridge_init(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, jlong
    nativeAutofillKeyboardAccessory,
    const base::android::JavaRefOrBare<jobject>& windowAndroid) {
  CHECK_CLAZZ(env, obj.obj(),
      AutofillKeyboardAccessoryBridge_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, AutofillKeyboardAccessoryBridge_clazz(env),
      "init",

"("
"J"
"Lorg/chromium/ui/base/WindowAndroid;"
")"
"V",
      &g_AutofillKeyboardAccessoryBridge_init);

     env->CallVoidMethod(obj.obj(),
          method_id, nativeAutofillKeyboardAccessory, windowAndroid.obj());
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord
    g_AutofillKeyboardAccessoryBridge_resetNativeViewPointer = 0;
static void Java_AutofillKeyboardAccessoryBridge_resetNativeViewPointer(JNIEnv*
    env, const base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      AutofillKeyboardAccessoryBridge_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, AutofillKeyboardAccessoryBridge_clazz(env),
      "resetNativeViewPointer",

"("
")"
"V",
      &g_AutofillKeyboardAccessoryBridge_resetNativeViewPointer);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_AutofillKeyboardAccessoryBridge_dismiss = 0;
static void Java_AutofillKeyboardAccessoryBridge_dismiss(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      AutofillKeyboardAccessoryBridge_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, AutofillKeyboardAccessoryBridge_clazz(env),
      "dismiss",

"("
")"
"V",
      &g_AutofillKeyboardAccessoryBridge_dismiss);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_AutofillKeyboardAccessoryBridge_show = 0;
static void Java_AutofillKeyboardAccessoryBridge_show(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, const
    base::android::JavaRefOrBare<jobjectArray>& suggestions,
    jboolean isRtl) {
  CHECK_CLAZZ(env, obj.obj(),
      AutofillKeyboardAccessoryBridge_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, AutofillKeyboardAccessoryBridge_clazz(env),
      "show",

"("
"[Lorg/chromium/ui/autofill/AutofillSuggestion;"
"Z"
")"
"V",
      &g_AutofillKeyboardAccessoryBridge_show);

     env->CallVoidMethod(obj.obj(),
          method_id, suggestions.obj(), isRtl);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord
    g_AutofillKeyboardAccessoryBridge_confirmDeletion = 0;
static void Java_AutofillKeyboardAccessoryBridge_confirmDeletion(JNIEnv* env,
    const base::android::JavaRefOrBare<jobject>& obj, const
    base::android::JavaRefOrBare<jstring>& title,
    const base::android::JavaRefOrBare<jstring>& body) {
  CHECK_CLAZZ(env, obj.obj(),
      AutofillKeyboardAccessoryBridge_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, AutofillKeyboardAccessoryBridge_clazz(env),
      "confirmDeletion",

"("
"Ljava/lang/String;"
"Ljava/lang/String;"
")"
"V",
      &g_AutofillKeyboardAccessoryBridge_confirmDeletion);

     env->CallVoidMethod(obj.obj(),
          method_id, title.obj(), body.obj());
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord
    g_AutofillKeyboardAccessoryBridge_createAutofillSuggestionArray = 0;
static base::android::ScopedJavaLocalRef<jobjectArray>
    Java_AutofillKeyboardAccessoryBridge_createAutofillSuggestionArray(JNIEnv*
    env, JniIntWrapper size) {
  CHECK_CLAZZ(env, AutofillKeyboardAccessoryBridge_clazz(env),
      AutofillKeyboardAccessoryBridge_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, AutofillKeyboardAccessoryBridge_clazz(env),
      "createAutofillSuggestionArray",

"("
"I"
")"
"[Lorg/chromium/ui/autofill/AutofillSuggestion;",
      &g_AutofillKeyboardAccessoryBridge_createAutofillSuggestionArray);

  jobjectArray ret =
static_cast<jobjectArray>(env->CallStaticObjectMethod(AutofillKeyboardAccessoryBridge_clazz(env),
          method_id, as_jint(size)));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobjectArray>(env, ret);
}

static base::subtle::AtomicWord
    g_AutofillKeyboardAccessoryBridge_addToAutofillSuggestionArray = 0;
static void
    Java_AutofillKeyboardAccessoryBridge_addToAutofillSuggestionArray(JNIEnv*
    env, const base::android::JavaRefOrBare<jobjectArray>& array,
    JniIntWrapper index,
    const base::android::JavaRefOrBare<jstring>& label,
    const base::android::JavaRefOrBare<jstring>& sublabel,
    JniIntWrapper iconId,
    JniIntWrapper suggestionId,
    jboolean deletable) {
  CHECK_CLAZZ(env, AutofillKeyboardAccessoryBridge_clazz(env),
      AutofillKeyboardAccessoryBridge_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, AutofillKeyboardAccessoryBridge_clazz(env),
      "addToAutofillSuggestionArray",

"("
"[Lorg/chromium/ui/autofill/AutofillSuggestion;"
"I"
"Ljava/lang/String;"
"Ljava/lang/String;"
"I"
"I"
"Z"
")"
"V",
      &g_AutofillKeyboardAccessoryBridge_addToAutofillSuggestionArray);

     env->CallStaticVoidMethod(AutofillKeyboardAccessoryBridge_clazz(env),
          method_id, array.obj(), as_jint(index), label.obj(), sublabel.obj(),
              as_jint(iconId), as_jint(suggestionId), deletable);
  jni_generator::CheckException(env);

}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsAutofillKeyboardAccessoryBridge[] = {
    { "nativeViewDismissed",
"("
"J"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_autofill_AutofillKeyboardAccessoryBridge_nativeViewDismissed)
    },
    { "nativeSuggestionSelected",
"("
"J"
"I"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_autofill_AutofillKeyboardAccessoryBridge_nativeSuggestionSelected)
    },
    { "nativeDeletionRequested",
"("
"J"
"I"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_autofill_AutofillKeyboardAccessoryBridge_nativeDeletionRequested)
    },
    { "nativeDeletionConfirmed",
"("
"J"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_autofill_AutofillKeyboardAccessoryBridge_nativeDeletionConfirmed)
    },
};

static bool RegisterNativesImpl(JNIEnv* env) {
  if (base::android::IsManualJniRegistrationDisabled()) return true;

  const int kMethodsAutofillKeyboardAccessoryBridgeSize =
      arraysize(kMethodsAutofillKeyboardAccessoryBridge);

  if (env->RegisterNatives(AutofillKeyboardAccessoryBridge_clazz(env),
                           kMethodsAutofillKeyboardAccessoryBridge,
                           kMethodsAutofillKeyboardAccessoryBridgeSize) < 0) {
    jni_generator::HandleRegistrationError(
        env, AutofillKeyboardAccessoryBridge_clazz(env), __FILE__);
    return false;
  }

  return true;
}

}  // namespace autofill

#endif  // org_chromium_chrome_browser_autofill_AutofillKeyboardAccessoryBridge_JNI

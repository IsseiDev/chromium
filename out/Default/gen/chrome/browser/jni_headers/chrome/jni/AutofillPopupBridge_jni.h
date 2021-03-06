// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/autofill/AutofillPopupBridge

#ifndef org_chromium_chrome_browser_autofill_AutofillPopupBridge_JNI
#define org_chromium_chrome_browser_autofill_AutofillPopupBridge_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kAutofillPopupBridgeClassPath[] =
    "org/chromium/chrome/browser/autofill/AutofillPopupBridge";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_AutofillPopupBridge_clazz __attribute__((unused)) =
    0;
#define AutofillPopupBridge_clazz(env) base::android::LazyGetClass(env, kAutofillPopupBridgeClassPath, &g_AutofillPopupBridge_clazz)

}  // namespace

namespace autofill {

// Step 2: method stubs.
extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_autofill_AutofillPopupBridge_nativeSuggestionSelected(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeAutofillPopupViewAndroid,
    jint listIndex) {
  AutofillPopupViewAndroid* native =
      reinterpret_cast<AutofillPopupViewAndroid*>(nativeAutofillPopupViewAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "SuggestionSelected");
  return native->SuggestionSelected(env,
      base::android::JavaParamRef<jobject>(env, jcaller), listIndex);
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_autofill_AutofillPopupBridge_nativeDeletionRequested(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeAutofillPopupViewAndroid,
    jint listIndex) {
  AutofillPopupViewAndroid* native =
      reinterpret_cast<AutofillPopupViewAndroid*>(nativeAutofillPopupViewAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "DeletionRequested");
  return native->DeletionRequested(env,
      base::android::JavaParamRef<jobject>(env, jcaller), listIndex);
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_autofill_AutofillPopupBridge_nativeDeletionConfirmed(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeAutofillPopupViewAndroid) {
  AutofillPopupViewAndroid* native =
      reinterpret_cast<AutofillPopupViewAndroid*>(nativeAutofillPopupViewAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "DeletionConfirmed");
  return native->DeletionConfirmed(env,
      base::android::JavaParamRef<jobject>(env, jcaller));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_autofill_AutofillPopupBridge_nativePopupDismissed(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeAutofillPopupViewAndroid) {
  AutofillPopupViewAndroid* native =
      reinterpret_cast<AutofillPopupViewAndroid*>(nativeAutofillPopupViewAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "PopupDismissed");
  return native->PopupDismissed(env, base::android::JavaParamRef<jobject>(env,
      jcaller));
}

static base::subtle::AtomicWord g_AutofillPopupBridge_create = 0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_AutofillPopupBridge_create(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& anchorView,
    jlong nativeAutofillPopupViewAndroid,
    const base::android::JavaRefOrBare<jobject>& windowAndroid) {
  CHECK_CLAZZ(env, AutofillPopupBridge_clazz(env),
      AutofillPopupBridge_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, AutofillPopupBridge_clazz(env),
      "create",

"("
"Landroid/view/View;"
"J"
"Lorg/chromium/ui/base/WindowAndroid;"
")"
"Lorg/chromium/chrome/browser/autofill/AutofillPopupBridge;",
      &g_AutofillPopupBridge_create);

  jobject ret =
      env->CallStaticObjectMethod(AutofillPopupBridge_clazz(env),
          method_id, anchorView.obj(), nativeAutofillPopupViewAndroid,
              windowAndroid.obj());
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_AutofillPopupBridge_dismiss = 0;
static void Java_AutofillPopupBridge_dismiss(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      AutofillPopupBridge_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, AutofillPopupBridge_clazz(env),
      "dismiss",

"("
")"
"V",
      &g_AutofillPopupBridge_dismiss);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_AutofillPopupBridge_show = 0;
static void Java_AutofillPopupBridge_show(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, const
    base::android::JavaRefOrBare<jobjectArray>& suggestions,
    jboolean isRtl) {
  CHECK_CLAZZ(env, obj.obj(),
      AutofillPopupBridge_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, AutofillPopupBridge_clazz(env),
      "show",

"("
"[Lorg/chromium/ui/autofill/AutofillSuggestion;"
"Z"
")"
"V",
      &g_AutofillPopupBridge_show);

     env->CallVoidMethod(obj.obj(),
          method_id, suggestions.obj(), isRtl);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_AutofillPopupBridge_confirmDeletion = 0;
static void Java_AutofillPopupBridge_confirmDeletion(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, const
    base::android::JavaRefOrBare<jstring>& title,
    const base::android::JavaRefOrBare<jstring>& body) {
  CHECK_CLAZZ(env, obj.obj(),
      AutofillPopupBridge_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, AutofillPopupBridge_clazz(env),
      "confirmDeletion",

"("
"Ljava/lang/String;"
"Ljava/lang/String;"
")"
"V",
      &g_AutofillPopupBridge_confirmDeletion);

     env->CallVoidMethod(obj.obj(),
          method_id, title.obj(), body.obj());
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord
    g_AutofillPopupBridge_createAutofillSuggestionArray = 0;
static base::android::ScopedJavaLocalRef<jobjectArray>
    Java_AutofillPopupBridge_createAutofillSuggestionArray(JNIEnv* env,
    JniIntWrapper size) {
  CHECK_CLAZZ(env, AutofillPopupBridge_clazz(env),
      AutofillPopupBridge_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, AutofillPopupBridge_clazz(env),
      "createAutofillSuggestionArray",

"("
"I"
")"
"[Lorg/chromium/ui/autofill/AutofillSuggestion;",
      &g_AutofillPopupBridge_createAutofillSuggestionArray);

  jobjectArray ret =
static_cast<jobjectArray>(env->CallStaticObjectMethod(AutofillPopupBridge_clazz(env),
          method_id, as_jint(size)));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobjectArray>(env, ret);
}

static base::subtle::AtomicWord
    g_AutofillPopupBridge_addToAutofillSuggestionArray = 0;
static void Java_AutofillPopupBridge_addToAutofillSuggestionArray(JNIEnv* env,
    const base::android::JavaRefOrBare<jobjectArray>& array,
    JniIntWrapper index,
    const base::android::JavaRefOrBare<jstring>& label,
    const base::android::JavaRefOrBare<jstring>& sublabel,
    JniIntWrapper iconId,
    JniIntWrapper suggestionId,
    jboolean deletable,
    jboolean isLabelMultiline) {
  CHECK_CLAZZ(env, AutofillPopupBridge_clazz(env),
      AutofillPopupBridge_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, AutofillPopupBridge_clazz(env),
      "addToAutofillSuggestionArray",

"("
"[Lorg/chromium/ui/autofill/AutofillSuggestion;"
"I"
"Ljava/lang/String;"
"Ljava/lang/String;"
"I"
"I"
"Z"
"Z"
")"
"V",
      &g_AutofillPopupBridge_addToAutofillSuggestionArray);

     env->CallStaticVoidMethod(AutofillPopupBridge_clazz(env),
          method_id, array.obj(), as_jint(index), label.obj(), sublabel.obj(),
              as_jint(iconId), as_jint(suggestionId), deletable,
              isLabelMultiline);
  jni_generator::CheckException(env);

}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsAutofillPopupBridge[] = {
    { "nativeSuggestionSelected",
"("
"J"
"I"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_autofill_AutofillPopupBridge_nativeSuggestionSelected)
    },
    { "nativeDeletionRequested",
"("
"J"
"I"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_autofill_AutofillPopupBridge_nativeDeletionRequested)
    },
    { "nativeDeletionConfirmed",
"("
"J"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_autofill_AutofillPopupBridge_nativeDeletionConfirmed)
    },
    { "nativePopupDismissed",
"("
"J"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_autofill_AutofillPopupBridge_nativePopupDismissed)
    },
};

static bool RegisterNativesImpl(JNIEnv* env) {
  if (base::android::IsManualJniRegistrationDisabled()) return true;

  const int kMethodsAutofillPopupBridgeSize =
      arraysize(kMethodsAutofillPopupBridge);

  if (env->RegisterNatives(AutofillPopupBridge_clazz(env),
                           kMethodsAutofillPopupBridge,
                           kMethodsAutofillPopupBridgeSize) < 0) {
    jni_generator::HandleRegistrationError(
        env, AutofillPopupBridge_clazz(env), __FILE__);
    return false;
  }

  return true;
}

}  // namespace autofill

#endif  // org_chromium_chrome_browser_autofill_AutofillPopupBridge_JNI

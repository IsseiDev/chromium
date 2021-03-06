// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/JavascriptAppModalDialog

#ifndef org_chromium_chrome_browser_JavascriptAppModalDialog_JNI
#define org_chromium_chrome_browser_JavascriptAppModalDialog_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kJavascriptAppModalDialogClassPath[] =
    "org/chromium/chrome/browser/JavascriptAppModalDialog";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_JavascriptAppModalDialog_clazz
    __attribute__((unused)) = 0;
#define JavascriptAppModalDialog_clazz(env) base::android::LazyGetClass(env, kJavascriptAppModalDialogClassPath, &g_JavascriptAppModalDialog_clazz)

}  // namespace

// Step 2: method stubs.
extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_JavascriptAppModalDialog_nativeDidAcceptAppModalDialog(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeJavascriptAppModalDialogAndroid,
    jstring prompt,
    jboolean suppress) {
  JavascriptAppModalDialogAndroid* native =
      reinterpret_cast<JavascriptAppModalDialogAndroid*>(nativeJavascriptAppModalDialogAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "DidAcceptAppModalDialog");
  return native->DidAcceptAppModalDialog(env,
      base::android::JavaParamRef<jobject>(env, jcaller),
      base::android::JavaParamRef<jstring>(env, prompt), suppress);
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_JavascriptAppModalDialog_nativeDidCancelAppModalDialog(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeJavascriptAppModalDialogAndroid,
    jboolean suppress) {
  JavascriptAppModalDialogAndroid* native =
      reinterpret_cast<JavascriptAppModalDialogAndroid*>(nativeJavascriptAppModalDialogAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "DidCancelAppModalDialog");
  return native->DidCancelAppModalDialog(env,
      base::android::JavaParamRef<jobject>(env, jcaller), suppress);
}

static base::android::ScopedJavaLocalRef<jobject> GetCurrentModalDialog(JNIEnv*
    env, const base::android::JavaParamRef<jclass>& jcaller);

extern "C" __attribute__((visibility("default")))
jobject
    Java_org_chromium_chrome_browser_JavascriptAppModalDialog_nativeGetCurrentModalDialog(JNIEnv*
    env, jclass jcaller) {
  return GetCurrentModalDialog(env, base::android::JavaParamRef<jclass>(env,
      jcaller)).Release();
}

static base::subtle::AtomicWord g_JavascriptAppModalDialog_createAlertDialog =
    0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_JavascriptAppModalDialog_createAlertDialog(JNIEnv* env, const
    base::android::JavaRefOrBare<jstring>& title,
    const base::android::JavaRefOrBare<jstring>& message,
    jboolean shouldShowSuppressCheckBox) {
  CHECK_CLAZZ(env, JavascriptAppModalDialog_clazz(env),
      JavascriptAppModalDialog_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, JavascriptAppModalDialog_clazz(env),
      "createAlertDialog",

"("
"Ljava/lang/String;"
"Ljava/lang/String;"
"Z"
")"
"Lorg/chromium/chrome/browser/JavascriptAppModalDialog;",
      &g_JavascriptAppModalDialog_createAlertDialog);

  jobject ret =
      env->CallStaticObjectMethod(JavascriptAppModalDialog_clazz(env),
          method_id, title.obj(), message.obj(), shouldShowSuppressCheckBox);
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_JavascriptAppModalDialog_createConfirmDialog =
    0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_JavascriptAppModalDialog_createConfirmDialog(JNIEnv* env, const
    base::android::JavaRefOrBare<jstring>& title,
    const base::android::JavaRefOrBare<jstring>& message,
    jboolean shouldShowSuppressCheckBox) {
  CHECK_CLAZZ(env, JavascriptAppModalDialog_clazz(env),
      JavascriptAppModalDialog_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, JavascriptAppModalDialog_clazz(env),
      "createConfirmDialog",

"("
"Ljava/lang/String;"
"Ljava/lang/String;"
"Z"
")"
"Lorg/chromium/chrome/browser/JavascriptAppModalDialog;",
      &g_JavascriptAppModalDialog_createConfirmDialog);

  jobject ret =
      env->CallStaticObjectMethod(JavascriptAppModalDialog_clazz(env),
          method_id, title.obj(), message.obj(), shouldShowSuppressCheckBox);
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord
    g_JavascriptAppModalDialog_createBeforeUnloadDialog = 0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_JavascriptAppModalDialog_createBeforeUnloadDialog(JNIEnv* env, const
    base::android::JavaRefOrBare<jstring>& title,
    const base::android::JavaRefOrBare<jstring>& message,
    jboolean isReload,
    jboolean shouldShowSuppressCheckBox) {
  CHECK_CLAZZ(env, JavascriptAppModalDialog_clazz(env),
      JavascriptAppModalDialog_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, JavascriptAppModalDialog_clazz(env),
      "createBeforeUnloadDialog",

"("
"Ljava/lang/String;"
"Ljava/lang/String;"
"Z"
"Z"
")"
"Lorg/chromium/chrome/browser/JavascriptAppModalDialog;",
      &g_JavascriptAppModalDialog_createBeforeUnloadDialog);

  jobject ret =
      env->CallStaticObjectMethod(JavascriptAppModalDialog_clazz(env),
          method_id, title.obj(), message.obj(), isReload,
              shouldShowSuppressCheckBox);
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_JavascriptAppModalDialog_createPromptDialog =
    0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_JavascriptAppModalDialog_createPromptDialog(JNIEnv* env, const
    base::android::JavaRefOrBare<jstring>& title,
    const base::android::JavaRefOrBare<jstring>& message,
    jboolean shouldShowSuppressCheckBox,
    const base::android::JavaRefOrBare<jstring>& defaultPromptText) {
  CHECK_CLAZZ(env, JavascriptAppModalDialog_clazz(env),
      JavascriptAppModalDialog_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, JavascriptAppModalDialog_clazz(env),
      "createPromptDialog",

"("
"Ljava/lang/String;"
"Ljava/lang/String;"
"Z"
"Ljava/lang/String;"
")"
"Lorg/chromium/chrome/browser/JavascriptAppModalDialog;",
      &g_JavascriptAppModalDialog_createPromptDialog);

  jobject ret =
      env->CallStaticObjectMethod(JavascriptAppModalDialog_clazz(env),
          method_id, title.obj(), message.obj(), shouldShowSuppressCheckBox,
              defaultPromptText.obj());
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord
    g_JavascriptAppModalDialog_showJavascriptAppModalDialog = 0;
static void Java_JavascriptAppModalDialog_showJavascriptAppModalDialog(JNIEnv*
    env, const base::android::JavaRefOrBare<jobject>& obj, const
    base::android::JavaRefOrBare<jobject>& window,
    jlong nativeDialogPointer) {
  CHECK_CLAZZ(env, obj.obj(),
      JavascriptAppModalDialog_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, JavascriptAppModalDialog_clazz(env),
      "showJavascriptAppModalDialog",

"("
"Lorg/chromium/ui/base/WindowAndroid;"
"J"
")"
"V",
      &g_JavascriptAppModalDialog_showJavascriptAppModalDialog);

     env->CallVoidMethod(obj.obj(),
          method_id, window.obj(), nativeDialogPointer);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_JavascriptAppModalDialog_dismiss = 0;
static void Java_JavascriptAppModalDialog_dismiss(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      JavascriptAppModalDialog_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, JavascriptAppModalDialog_clazz(env),
      "dismiss",

"("
")"
"V",
      &g_JavascriptAppModalDialog_dismiss);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);

}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsJavascriptAppModalDialog[] = {
    { "nativeDidAcceptAppModalDialog",
"("
"J"
"Ljava/lang/String;"
"Z"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_JavascriptAppModalDialog_nativeDidAcceptAppModalDialog)
    },
    { "nativeDidCancelAppModalDialog",
"("
"J"
"Z"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_JavascriptAppModalDialog_nativeDidCancelAppModalDialog)
    },
    { "nativeGetCurrentModalDialog",
"("
")"
"Lorg/chromium/chrome/browser/JavascriptAppModalDialog;",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_JavascriptAppModalDialog_nativeGetCurrentModalDialog)
    },
};

static bool RegisterNativesImpl(JNIEnv* env) {
  if (base::android::IsManualJniRegistrationDisabled()) return true;

  const int kMethodsJavascriptAppModalDialogSize =
      arraysize(kMethodsJavascriptAppModalDialog);

  if (env->RegisterNatives(JavascriptAppModalDialog_clazz(env),
                           kMethodsJavascriptAppModalDialog,
                           kMethodsJavascriptAppModalDialogSize) < 0) {
    jni_generator::HandleRegistrationError(
        env, JavascriptAppModalDialog_clazz(env), __FILE__);
    return false;
  }

  return true;
}

#endif  // org_chromium_chrome_browser_JavascriptAppModalDialog_JNI

// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/webapps/AddToHomescreenDialogHelper

#ifndef org_chromium_chrome_browser_webapps_AddToHomescreenDialogHelper_JNI
#define org_chromium_chrome_browser_webapps_AddToHomescreenDialogHelper_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kAddToHomescreenDialogHelperClassPath[] =
    "org/chromium/chrome/browser/webapps/AddToHomescreenDialogHelper";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_AddToHomescreenDialogHelper_clazz
    __attribute__((unused)) = 0;
#define AddToHomescreenDialogHelper_clazz(env) base::android::LazyGetClass(env, kAddToHomescreenDialogHelperClassPath, &g_AddToHomescreenDialogHelper_clazz)

}  // namespace

// Step 2: method stubs.

static jlong Initialize(JNIEnv* env, const base::android::JavaParamRef<jobject>&
    jcaller,
    const base::android::JavaParamRef<jobject>& webContents);

extern "C" __attribute__((visibility("default")))
jlong
    Java_org_chromium_chrome_browser_webapps_AddToHomescreenDialogHelper_nativeInitialize(JNIEnv*
    env, jobject jcaller,
    jobject webContents) {
  return Initialize(env, base::android::JavaParamRef<jobject>(env, jcaller),
      base::android::JavaParamRef<jobject>(env, webContents));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_webapps_AddToHomescreenDialogHelper_nativeAddShortcut(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeAddToHomescreenDialogHelper,
    jstring userRequestedTitle) {
  AddToHomescreenDialogHelper* native =
      reinterpret_cast<AddToHomescreenDialogHelper*>(nativeAddToHomescreenDialogHelper);
  CHECK_NATIVE_PTR(env, jcaller, native, "AddShortcut");
  return native->AddShortcut(env, base::android::JavaParamRef<jobject>(env,
      jcaller), base::android::JavaParamRef<jstring>(env, userRequestedTitle));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_webapps_AddToHomescreenDialogHelper_nativeDestroy(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeAddToHomescreenDialogHelper) {
  AddToHomescreenDialogHelper* native =
      reinterpret_cast<AddToHomescreenDialogHelper*>(nativeAddToHomescreenDialogHelper);
  CHECK_NATIVE_PTR(env, jcaller, native, "Destroy");
  return native->Destroy(env, base::android::JavaParamRef<jobject>(env,
      jcaller));
}

static base::subtle::AtomicWord
    g_AddToHomescreenDialogHelper_onUserTitleAvailable = 0;
static void Java_AddToHomescreenDialogHelper_onUserTitleAvailable(JNIEnv* env,
    const base::android::JavaRefOrBare<jobject>& obj, const
    base::android::JavaRefOrBare<jstring>& title) {
  CHECK_CLAZZ(env, obj.obj(),
      AddToHomescreenDialogHelper_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, AddToHomescreenDialogHelper_clazz(env),
      "onUserTitleAvailable",

"("
"Ljava/lang/String;"
")"
"V",
      &g_AddToHomescreenDialogHelper_onUserTitleAvailable);

     env->CallVoidMethod(obj.obj(),
          method_id, title.obj());
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_AddToHomescreenDialogHelper_onIconAvailable =
    0;
static void Java_AddToHomescreenDialogHelper_onIconAvailable(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, const
    base::android::JavaRefOrBare<jobject>& icon) {
  CHECK_CLAZZ(env, obj.obj(),
      AddToHomescreenDialogHelper_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, AddToHomescreenDialogHelper_clazz(env),
      "onIconAvailable",

"("
"Landroid/graphics/Bitmap;"
")"
"V",
      &g_AddToHomescreenDialogHelper_onIconAvailable);

     env->CallVoidMethod(obj.obj(),
          method_id, icon.obj());
  jni_generator::CheckException(env);

}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsAddToHomescreenDialogHelper[] = {
    { "nativeInitialize",
"("
"Lorg/chromium/content_public/browser/WebContents;"
")"
"J",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_webapps_AddToHomescreenDialogHelper_nativeInitialize)
    },
    { "nativeAddShortcut",
"("
"J"
"Ljava/lang/String;"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_webapps_AddToHomescreenDialogHelper_nativeAddShortcut)
    },
    { "nativeDestroy",
"("
"J"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_webapps_AddToHomescreenDialogHelper_nativeDestroy)
    },
};

static bool RegisterNativesImpl(JNIEnv* env) {
  if (base::android::IsManualJniRegistrationDisabled()) return true;

  const int kMethodsAddToHomescreenDialogHelperSize =
      arraysize(kMethodsAddToHomescreenDialogHelper);

  if (env->RegisterNatives(AddToHomescreenDialogHelper_clazz(env),
                           kMethodsAddToHomescreenDialogHelper,
                           kMethodsAddToHomescreenDialogHelperSize) < 0) {
    jni_generator::HandleRegistrationError(
        env, AddToHomescreenDialogHelper_clazz(env), __FILE__);
    return false;
  }

  return true;
}

#endif  // org_chromium_chrome_browser_webapps_AddToHomescreenDialogHelper_JNI
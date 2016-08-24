// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/infobar/PermissionUpdateInfoBarDelegate

#ifndef org_chromium_chrome_browser_infobar_PermissionUpdateInfoBarDelegate_JNI
#define org_chromium_chrome_browser_infobar_PermissionUpdateInfoBarDelegate_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kPermissionUpdateInfoBarDelegateClassPath[] =
    "org/chromium/chrome/browser/infobar/PermissionUpdateInfoBarDelegate";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_PermissionUpdateInfoBarDelegate_clazz
    __attribute__((unused)) = 0;
#define PermissionUpdateInfoBarDelegate_clazz(env) base::android::LazyGetClass(env, kPermissionUpdateInfoBarDelegateClassPath, &g_PermissionUpdateInfoBarDelegate_clazz)

}  // namespace

// Step 2: method stubs.
extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_infobar_PermissionUpdateInfoBarDelegate_nativeOnPermissionResult(JNIEnv*
    env,
    jobject jcaller,
    jlong nativePermissionUpdateInfoBarDelegate,
    jboolean allPermissionsGranted) {
  PermissionUpdateInfoBarDelegate* native =
      reinterpret_cast<PermissionUpdateInfoBarDelegate*>(nativePermissionUpdateInfoBarDelegate);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnPermissionResult");
  return native->OnPermissionResult(env,
      base::android::JavaParamRef<jobject>(env, jcaller),
      allPermissionsGranted);
}

static base::subtle::AtomicWord g_PermissionUpdateInfoBarDelegate_create = 0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_PermissionUpdateInfoBarDelegate_create(JNIEnv* env, jlong nativePtr,
    const base::android::JavaRefOrBare<jobject>& webContents,
    const base::android::JavaRefOrBare<jobjectArray>& permissions) {
  CHECK_CLAZZ(env, PermissionUpdateInfoBarDelegate_clazz(env),
      PermissionUpdateInfoBarDelegate_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, PermissionUpdateInfoBarDelegate_clazz(env),
      "create",

"("
"J"
"Lorg/chromium/content_public/browser/WebContents;"
"[Ljava/lang/String;"
")"
"Lorg/chromium/chrome/browser/infobar/PermissionUpdateInfoBarDelegate;",
      &g_PermissionUpdateInfoBarDelegate_create);

  jobject ret =
      env->CallStaticObjectMethod(PermissionUpdateInfoBarDelegate_clazz(env),
          method_id, nativePtr, webContents.obj(), permissions.obj());
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord
    g_PermissionUpdateInfoBarDelegate_onNativeDestroyed = 0;
static void Java_PermissionUpdateInfoBarDelegate_onNativeDestroyed(JNIEnv* env,
    const base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      PermissionUpdateInfoBarDelegate_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, PermissionUpdateInfoBarDelegate_clazz(env),
      "onNativeDestroyed",

"("
")"
"V",
      &g_PermissionUpdateInfoBarDelegate_onNativeDestroyed);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord
    g_PermissionUpdateInfoBarDelegate_requestPermissions = 0;
static void Java_PermissionUpdateInfoBarDelegate_requestPermissions(JNIEnv* env,
    const base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      PermissionUpdateInfoBarDelegate_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, PermissionUpdateInfoBarDelegate_clazz(env),
      "requestPermissions",

"("
")"
"V",
      &g_PermissionUpdateInfoBarDelegate_requestPermissions);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);

}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsPermissionUpdateInfoBarDelegate[] = {
    { "nativeOnPermissionResult",
"("
"J"
"Z"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_infobar_PermissionUpdateInfoBarDelegate_nativeOnPermissionResult)
    },
};

static bool RegisterNativesImpl(JNIEnv* env) {
  if (base::android::IsManualJniRegistrationDisabled()) return true;

  const int kMethodsPermissionUpdateInfoBarDelegateSize =
      arraysize(kMethodsPermissionUpdateInfoBarDelegate);

  if (env->RegisterNatives(PermissionUpdateInfoBarDelegate_clazz(env),
                           kMethodsPermissionUpdateInfoBarDelegate,
                           kMethodsPermissionUpdateInfoBarDelegateSize) < 0) {
    jni_generator::HandleRegistrationError(
        env, PermissionUpdateInfoBarDelegate_clazz(env), __FILE__);
    return false;
  }

  return true;
}

#endif  // org_chromium_chrome_browser_infobar_PermissionUpdateInfoBarDelegate_JNI

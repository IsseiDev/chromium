// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/contextmenu/ContextMenuHelper

#ifndef org_chromium_chrome_browser_contextmenu_ContextMenuHelper_JNI
#define org_chromium_chrome_browser_contextmenu_ContextMenuHelper_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kContextMenuHelperClassPath[] =
    "org/chromium/chrome/browser/contextmenu/ContextMenuHelper";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_ContextMenuHelper_clazz __attribute__((unused)) = 0;
#define ContextMenuHelper_clazz(env) base::android::LazyGetClass(env, kContextMenuHelperClassPath, &g_ContextMenuHelper_clazz)

}  // namespace

// Step 2: method stubs.
extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_contextmenu_ContextMenuHelper_nativeOnStartDownload(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeContextMenuHelper,
    jboolean isLink,
    jboolean isDataReductionProxyEnabled) {
  ContextMenuHelper* native =
      reinterpret_cast<ContextMenuHelper*>(nativeContextMenuHelper);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnStartDownload");
  return native->OnStartDownload(env, base::android::JavaParamRef<jobject>(env,
      jcaller), isLink, isDataReductionProxyEnabled);
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_contextmenu_ContextMenuHelper_nativeSearchForImage(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeContextMenuHelper) {
  ContextMenuHelper* native =
      reinterpret_cast<ContextMenuHelper*>(nativeContextMenuHelper);
  CHECK_NATIVE_PTR(env, jcaller, native, "SearchForImage");
  return native->SearchForImage(env, base::android::JavaParamRef<jobject>(env,
      jcaller));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_contextmenu_ContextMenuHelper_nativeShareImage(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeContextMenuHelper) {
  ContextMenuHelper* native =
      reinterpret_cast<ContextMenuHelper*>(nativeContextMenuHelper);
  CHECK_NATIVE_PTR(env, jcaller, native, "ShareImage");
  return native->ShareImage(env, base::android::JavaParamRef<jobject>(env,
      jcaller));
}

static base::subtle::AtomicWord g_ContextMenuHelper_create = 0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_ContextMenuHelper_create(JNIEnv* env, jlong nativeContextMenuHelper) {
  CHECK_CLAZZ(env, ContextMenuHelper_clazz(env),
      ContextMenuHelper_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, ContextMenuHelper_clazz(env),
      "create",

"("
"J"
")"
"Lorg/chromium/chrome/browser/contextmenu/ContextMenuHelper;",
      &g_ContextMenuHelper_create);

  jobject ret =
      env->CallStaticObjectMethod(ContextMenuHelper_clazz(env),
          method_id, nativeContextMenuHelper);
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_ContextMenuHelper_destroy = 0;
static void Java_ContextMenuHelper_destroy(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      ContextMenuHelper_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, ContextMenuHelper_clazz(env),
      "destroy",

"("
")"
"V",
      &g_ContextMenuHelper_destroy);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_ContextMenuHelper_setPopulator = 0;
static void Java_ContextMenuHelper_setPopulator(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, const
    base::android::JavaRefOrBare<jobject>& populator) {
  CHECK_CLAZZ(env, obj.obj(),
      ContextMenuHelper_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, ContextMenuHelper_clazz(env),
      "setPopulator",

"("
"Lorg/chromium/chrome/browser/contextmenu/ContextMenuPopulator;"
")"
"V",
      &g_ContextMenuHelper_setPopulator);

     env->CallVoidMethod(obj.obj(),
          method_id, populator.obj());
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_ContextMenuHelper_showContextMenu = 0;
static jboolean Java_ContextMenuHelper_showContextMenu(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, const
    base::android::JavaRefOrBare<jobject>& contentViewCore,
    const base::android::JavaRefOrBare<jobject>& params) {
  CHECK_CLAZZ(env, obj.obj(),
      ContextMenuHelper_clazz(env), false);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, ContextMenuHelper_clazz(env),
      "showContextMenu",

"("
"Lorg/chromium/content/browser/ContentViewCore;"
"Lorg/chromium/chrome/browser/contextmenu/ContextMenuParams;"
")"
"Z",
      &g_ContextMenuHelper_showContextMenu);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id, contentViewCore.obj(), params.obj());
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_ContextMenuHelper_onShareImageReceived = 0;
static void Java_ContextMenuHelper_onShareImageReceived(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, const
    base::android::JavaRefOrBare<jobject>& windowAndroid,
    const base::android::JavaRefOrBare<jbyteArray>& jpegImageData) {
  CHECK_CLAZZ(env, obj.obj(),
      ContextMenuHelper_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, ContextMenuHelper_clazz(env),
      "onShareImageReceived",

"("
"Lorg/chromium/ui/base/WindowAndroid;"
"[B"
")"
"V",
      &g_ContextMenuHelper_onShareImageReceived);

     env->CallVoidMethod(obj.obj(),
          method_id, windowAndroid.obj(), jpegImageData.obj());
  jni_generator::CheckException(env);

}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsContextMenuHelper[] = {
    { "nativeOnStartDownload",
"("
"J"
"Z"
"Z"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_contextmenu_ContextMenuHelper_nativeOnStartDownload)
    },
    { "nativeSearchForImage",
"("
"J"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_contextmenu_ContextMenuHelper_nativeSearchForImage)
    },
    { "nativeShareImage",
"("
"J"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_contextmenu_ContextMenuHelper_nativeShareImage)
    },
};

static bool RegisterNativesImpl(JNIEnv* env) {
  if (base::android::IsManualJniRegistrationDisabled()) return true;

  const int kMethodsContextMenuHelperSize =
      arraysize(kMethodsContextMenuHelper);

  if (env->RegisterNatives(ContextMenuHelper_clazz(env),
                           kMethodsContextMenuHelper,
                           kMethodsContextMenuHelperSize) < 0) {
    jni_generator::HandleRegistrationError(
        env, ContextMenuHelper_clazz(env), __FILE__);
    return false;
  }

  return true;
}

#endif  // org_chromium_chrome_browser_contextmenu_ContextMenuHelper_JNI

// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/infobar/InfoBarContainer

#ifndef org_chromium_chrome_browser_infobar_InfoBarContainer_JNI
#define org_chromium_chrome_browser_infobar_InfoBarContainer_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kInfoBarContainerClassPath[] =
    "org/chromium/chrome/browser/infobar/InfoBarContainer";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_InfoBarContainer_clazz __attribute__((unused)) = 0;
#define InfoBarContainer_clazz(env) base::android::LazyGetClass(env, kInfoBarContainerClassPath, &g_InfoBarContainer_clazz)

}  // namespace

// Step 2: method stubs.

static jlong Init(JNIEnv* env, const base::android::JavaParamRef<jobject>&
    jcaller);

extern "C" __attribute__((visibility("default")))
jlong
    Java_org_chromium_chrome_browser_infobar_InfoBarContainer_nativeInit(JNIEnv*
    env, jobject jcaller) {
  return Init(env, base::android::JavaParamRef<jobject>(env, jcaller));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_infobar_InfoBarContainer_nativeSetWebContents(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeInfoBarContainerAndroid,
    jobject webContents) {
  InfoBarContainerAndroid* native =
      reinterpret_cast<InfoBarContainerAndroid*>(nativeInfoBarContainerAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "SetWebContents");
  return native->SetWebContents(env, base::android::JavaParamRef<jobject>(env,
      jcaller), base::android::JavaParamRef<jobject>(env, webContents));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_infobar_InfoBarContainer_nativeDestroy(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeInfoBarContainerAndroid) {
  InfoBarContainerAndroid* native =
      reinterpret_cast<InfoBarContainerAndroid*>(nativeInfoBarContainerAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "Destroy");
  return native->Destroy(env, base::android::JavaParamRef<jobject>(env,
      jcaller));
}

static base::subtle::AtomicWord g_InfoBarContainer_addInfoBar = 0;
static void Java_InfoBarContainer_addInfoBar(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, const
    base::android::JavaRefOrBare<jobject>& infoBar) {
  CHECK_CLAZZ(env, obj.obj(),
      InfoBarContainer_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, InfoBarContainer_clazz(env),
      "addInfoBar",

"("
"Lorg/chromium/chrome/browser/infobar/InfoBar;"
")"
"V",
      &g_InfoBarContainer_addInfoBar);

     env->CallVoidMethod(obj.obj(),
          method_id, infoBar.obj());
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_InfoBarContainer_nextInfoBarWillBeVisible = 0;
static jboolean Java_InfoBarContainer_nextInfoBarWillBeVisible(JNIEnv* env,
    const base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      InfoBarContainer_clazz(env), false);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, InfoBarContainer_clazz(env),
      "nextInfoBarWillBeVisible",

"("
")"
"Z",
      &g_InfoBarContainer_nextInfoBarWillBeVisible);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsInfoBarContainer[] = {
    { "nativeInit",
"("
")"
"J",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_infobar_InfoBarContainer_nativeInit)
    },
    { "nativeSetWebContents",
"("
"J"
"Lorg/chromium/content_public/browser/WebContents;"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_infobar_InfoBarContainer_nativeSetWebContents)
    },
    { "nativeDestroy",
"("
"J"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_infobar_InfoBarContainer_nativeDestroy)
    },
};

static bool RegisterNativesImpl(JNIEnv* env) {
  if (base::android::IsManualJniRegistrationDisabled()) return true;

  const int kMethodsInfoBarContainerSize = arraysize(kMethodsInfoBarContainer);

  if (env->RegisterNatives(InfoBarContainer_clazz(env),
                           kMethodsInfoBarContainer,
                           kMethodsInfoBarContainerSize) < 0) {
    jni_generator::HandleRegistrationError(
        env, InfoBarContainer_clazz(env), __FILE__);
    return false;
  }

  return true;
}

#endif  // org_chromium_chrome_browser_infobar_InfoBarContainer_JNI

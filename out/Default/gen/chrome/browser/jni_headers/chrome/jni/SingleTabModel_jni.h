// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/tabmodel/SingleTabModel

#ifndef org_chromium_chrome_browser_tabmodel_SingleTabModel_JNI
#define org_chromium_chrome_browser_tabmodel_SingleTabModel_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kSingleTabModelClassPath[] =
    "org/chromium/chrome/browser/tabmodel/SingleTabModel";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_SingleTabModel_clazz __attribute__((unused)) = 0;
#define SingleTabModel_clazz(env) base::android::LazyGetClass(env, kSingleTabModelClassPath, &g_SingleTabModel_clazz)

}  // namespace

// Step 2: method stubs.

static void PermanentlyBlockAllNewWindows(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller,
    const base::android::JavaParamRef<jobject>& nativeTabAndroid);

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_tabmodel_SingleTabModel_nativePermanentlyBlockAllNewWindows(JNIEnv*
    env, jclass jcaller,
    jobject nativeTabAndroid) {
  return PermanentlyBlockAllNewWindows(env,
      base::android::JavaParamRef<jclass>(env, jcaller),
      base::android::JavaParamRef<jobject>(env, nativeTabAndroid));
}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsSingleTabModel[] = {
    { "nativePermanentlyBlockAllNewWindows",
"("
"Lorg/chromium/chrome/browser/tab/Tab;"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_tabmodel_SingleTabModel_nativePermanentlyBlockAllNewWindows)
    },
};

static bool RegisterNativesImpl(JNIEnv* env) {
  if (base::android::IsManualJniRegistrationDisabled()) return true;

  const int kMethodsSingleTabModelSize = arraysize(kMethodsSingleTabModel);

  if (env->RegisterNatives(SingleTabModel_clazz(env),
                           kMethodsSingleTabModel,
                           kMethodsSingleTabModelSize) < 0) {
    jni_generator::HandleRegistrationError(
        env, SingleTabModel_clazz(env), __FILE__);
    return false;
  }

  return true;
}

#endif  // org_chromium_chrome_browser_tabmodel_SingleTabModel_JNI

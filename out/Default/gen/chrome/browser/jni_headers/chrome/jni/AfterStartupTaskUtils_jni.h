// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/AfterStartupTaskUtils

#ifndef org_chromium_chrome_browser_AfterStartupTaskUtils_JNI
#define org_chromium_chrome_browser_AfterStartupTaskUtils_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kAfterStartupTaskUtilsClassPath[] =
    "org/chromium/chrome/browser/AfterStartupTaskUtils";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_AfterStartupTaskUtils_clazz __attribute__((unused)) =
    0;
#define AfterStartupTaskUtils_clazz(env) base::android::LazyGetClass(env, kAfterStartupTaskUtilsClassPath, &g_AfterStartupTaskUtils_clazz)

}  // namespace

// Step 2: method stubs.

static void SetStartupComplete(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller);

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_AfterStartupTaskUtils_nativeSetStartupComplete(JNIEnv*
    env, jclass jcaller) {
  return SetStartupComplete(env, base::android::JavaParamRef<jclass>(env,
      jcaller));
}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsAfterStartupTaskUtils[] = {
    { "nativeSetStartupComplete",
"("
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_AfterStartupTaskUtils_nativeSetStartupComplete)
    },
};

static bool RegisterNativesImpl(JNIEnv* env) {
  if (base::android::IsManualJniRegistrationDisabled()) return true;

  const int kMethodsAfterStartupTaskUtilsSize =
      arraysize(kMethodsAfterStartupTaskUtils);

  if (env->RegisterNatives(AfterStartupTaskUtils_clazz(env),
                           kMethodsAfterStartupTaskUtils,
                           kMethodsAfterStartupTaskUtilsSize) < 0) {
    jni_generator::HandleRegistrationError(
        env, AfterStartupTaskUtils_clazz(env), __FILE__);
    return false;
  }

  return true;
}

#endif  // org_chromium_chrome_browser_AfterStartupTaskUtils_JNI

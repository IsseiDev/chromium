// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/childaccounts/ChildAccountService

#ifndef org_chromium_chrome_browser_childaccounts_ChildAccountService_JNI
#define org_chromium_chrome_browser_childaccounts_ChildAccountService_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kChildAccountServiceClassPath[] =
    "org/chromium/chrome/browser/childaccounts/ChildAccountService";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_ChildAccountService_clazz __attribute__((unused)) =
    0;
#define ChildAccountService_clazz(env) base::android::LazyGetClass(env, kChildAccountServiceClassPath, &g_ChildAccountService_clazz)

}  // namespace

// Step 2: method stubs.

static jboolean IsChildAccount(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller);

extern "C" __attribute__((visibility("default")))
jboolean
    Java_org_chromium_chrome_browser_childaccounts_ChildAccountService_nativeIsChildAccount(JNIEnv*
    env, jclass jcaller) {
  return IsChildAccount(env, base::android::JavaParamRef<jclass>(env, jcaller));
}

static jboolean IsChildAccountDetectionEnabled(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller);

extern "C" __attribute__((visibility("default")))
jboolean
    Java_org_chromium_chrome_browser_childaccounts_ChildAccountService_nativeIsChildAccountDetectionEnabled(JNIEnv*
    env, jclass jcaller) {
  return IsChildAccountDetectionEnabled(env,
      base::android::JavaParamRef<jclass>(env, jcaller));
}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsChildAccountService[] = {
    { "nativeIsChildAccount",
"("
")"
"Z",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_childaccounts_ChildAccountService_nativeIsChildAccount)
    },
    { "nativeIsChildAccountDetectionEnabled",
"("
")"
"Z",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_childaccounts_ChildAccountService_nativeIsChildAccountDetectionEnabled)
    },
};

static bool RegisterNativesImpl(JNIEnv* env) {
  if (base::android::IsManualJniRegistrationDisabled()) return true;

  const int kMethodsChildAccountServiceSize =
      arraysize(kMethodsChildAccountService);

  if (env->RegisterNatives(ChildAccountService_clazz(env),
                           kMethodsChildAccountService,
                           kMethodsChildAccountServiceSize) < 0) {
    jni_generator::HandleRegistrationError(
        env, ChildAccountService_clazz(env), __FILE__);
    return false;
  }

  return true;
}

#endif  // org_chromium_chrome_browser_childaccounts_ChildAccountService_JNI

// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/signin/AccountTrackerService

#ifndef org_chromium_chrome_browser_signin_AccountTrackerService_JNI
#define org_chromium_chrome_browser_signin_AccountTrackerService_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kAccountTrackerServiceClassPath[] =
    "org/chromium/chrome/browser/signin/AccountTrackerService";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_AccountTrackerService_clazz __attribute__((unused)) =
    0;
#define AccountTrackerService_clazz(env) base::android::LazyGetClass(env, kAccountTrackerServiceClassPath, &g_AccountTrackerService_clazz)

}  // namespace

namespace signin {
namespace android {

// Step 2: method stubs.

static void SeedAccountsInfo(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller,
    const base::android::JavaParamRef<jobjectArray>& gaiaIds,
    const base::android::JavaParamRef<jobjectArray>& accountNames);

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_signin_AccountTrackerService_nativeSeedAccountsInfo(JNIEnv*
    env, jclass jcaller,
    jobjectArray gaiaIds,
    jobjectArray accountNames) {
  return SeedAccountsInfo(env, base::android::JavaParamRef<jclass>(env,
      jcaller), base::android::JavaParamRef<jobjectArray>(env, gaiaIds),
      base::android::JavaParamRef<jobjectArray>(env, accountNames));
}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsAccountTrackerService[] = {
    { "nativeSeedAccountsInfo",
"("
"[Ljava/lang/String;"
"[Ljava/lang/String;"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_signin_AccountTrackerService_nativeSeedAccountsInfo)
    },
};

static bool RegisterNativesImpl(JNIEnv* env) {
  if (base::android::IsManualJniRegistrationDisabled()) return true;

  const int kMethodsAccountTrackerServiceSize =
      arraysize(kMethodsAccountTrackerService);

  if (env->RegisterNatives(AccountTrackerService_clazz(env),
                           kMethodsAccountTrackerService,
                           kMethodsAccountTrackerServiceSize) < 0) {
    jni_generator::HandleRegistrationError(
        env, AccountTrackerService_clazz(env), __FILE__);
    return false;
  }

  return true;
}

}  // namespace android
}  // namespace signin

#endif  // org_chromium_chrome_browser_signin_AccountTrackerService_JNI

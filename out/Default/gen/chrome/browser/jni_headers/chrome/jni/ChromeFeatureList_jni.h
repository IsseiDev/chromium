// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/ChromeFeatureList

#ifndef org_chromium_chrome_browser_ChromeFeatureList_JNI
#define org_chromium_chrome_browser_ChromeFeatureList_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kChromeFeatureListClassPath[] =
    "org/chromium/chrome/browser/ChromeFeatureList";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_ChromeFeatureList_clazz __attribute__((unused)) = 0;
#define ChromeFeatureList_clazz(env) base::android::LazyGetClass(env, kChromeFeatureListClassPath, &g_ChromeFeatureList_clazz)

}  // namespace

namespace chrome {
namespace android {

// Step 2: method stubs.

static jboolean IsEnabled(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller,
    const base::android::JavaParamRef<jstring>& featureName);

extern "C" __attribute__((visibility("default")))
jboolean
    Java_org_chromium_chrome_browser_ChromeFeatureList_nativeIsEnabled(JNIEnv*
    env, jclass jcaller,
    jstring featureName) {
  return IsEnabled(env, base::android::JavaParamRef<jclass>(env, jcaller),
      base::android::JavaParamRef<jstring>(env, featureName));
}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsChromeFeatureList[] = {
    { "nativeIsEnabled",
"("
"Ljava/lang/String;"
")"
"Z",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_ChromeFeatureList_nativeIsEnabled)
    },
};

static bool RegisterNativesImpl(JNIEnv* env) {
  if (base::android::IsManualJniRegistrationDisabled()) return true;

  const int kMethodsChromeFeatureListSize =
      arraysize(kMethodsChromeFeatureList);

  if (env->RegisterNatives(ChromeFeatureList_clazz(env),
                           kMethodsChromeFeatureList,
                           kMethodsChromeFeatureListSize) < 0) {
    jni_generator::HandleRegistrationError(
        env, ChromeFeatureList_clazz(env), __FILE__);
    return false;
  }

  return true;
}

}  // namespace android
}  // namespace chrome

#endif  // org_chromium_chrome_browser_ChromeFeatureList_JNI

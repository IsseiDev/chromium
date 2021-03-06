// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/findinpage/FindInPageBridge

#ifndef org_chromium_chrome_browser_findinpage_FindInPageBridge_JNI
#define org_chromium_chrome_browser_findinpage_FindInPageBridge_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kFindInPageBridgeClassPath[] =
    "org/chromium/chrome/browser/findinpage/FindInPageBridge";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_FindInPageBridge_clazz __attribute__((unused)) = 0;
#define FindInPageBridge_clazz(env) base::android::LazyGetClass(env, kFindInPageBridgeClassPath, &g_FindInPageBridge_clazz)

}  // namespace

// Step 2: method stubs.

static jlong Init(JNIEnv* env, const base::android::JavaParamRef<jobject>&
    jcaller,
    const base::android::JavaParamRef<jobject>& webContents);

extern "C" __attribute__((visibility("default")))
jlong
    Java_org_chromium_chrome_browser_findinpage_FindInPageBridge_nativeInit(JNIEnv*
    env, jobject jcaller,
    jobject webContents) {
  return Init(env, base::android::JavaParamRef<jobject>(env, jcaller),
      base::android::JavaParamRef<jobject>(env, webContents));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_findinpage_FindInPageBridge_nativeDestroy(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeFindInPageBridge) {
  FindInPageBridge* native =
      reinterpret_cast<FindInPageBridge*>(nativeFindInPageBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "Destroy");
  return native->Destroy(env, base::android::JavaParamRef<jobject>(env,
      jcaller));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_findinpage_FindInPageBridge_nativeStartFinding(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeFindInPageBridge,
    jstring searchString,
    jboolean forwardDirection,
    jboolean caseSensitive) {
  FindInPageBridge* native =
      reinterpret_cast<FindInPageBridge*>(nativeFindInPageBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "StartFinding");
  return native->StartFinding(env, base::android::JavaParamRef<jobject>(env,
      jcaller), base::android::JavaParamRef<jstring>(env, searchString),
      forwardDirection, caseSensitive);
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_findinpage_FindInPageBridge_nativeStopFinding(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeFindInPageBridge,
    jboolean clearSelection) {
  FindInPageBridge* native =
      reinterpret_cast<FindInPageBridge*>(nativeFindInPageBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "StopFinding");
  return native->StopFinding(env, base::android::JavaParamRef<jobject>(env,
      jcaller), clearSelection);
}

extern "C" __attribute__((visibility("default")))
jstring
    Java_org_chromium_chrome_browser_findinpage_FindInPageBridge_nativeGetPreviousFindText(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeFindInPageBridge) {
  FindInPageBridge* native =
      reinterpret_cast<FindInPageBridge*>(nativeFindInPageBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "GetPreviousFindText", NULL);
  return native->GetPreviousFindText(env,
      base::android::JavaParamRef<jobject>(env, jcaller)).Release();
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_findinpage_FindInPageBridge_nativeRequestFindMatchRects(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeFindInPageBridge,
    jint currentVersion) {
  FindInPageBridge* native =
      reinterpret_cast<FindInPageBridge*>(nativeFindInPageBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "RequestFindMatchRects");
  return native->RequestFindMatchRects(env,
      base::android::JavaParamRef<jobject>(env, jcaller), currentVersion);
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_findinpage_FindInPageBridge_nativeActivateNearestFindResult(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeFindInPageBridge,
    jfloat x,
    jfloat y) {
  FindInPageBridge* native =
      reinterpret_cast<FindInPageBridge*>(nativeFindInPageBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "ActivateNearestFindResult");
  return native->ActivateNearestFindResult(env,
      base::android::JavaParamRef<jobject>(env, jcaller), x, y);
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_findinpage_FindInPageBridge_nativeActivateFindInPageResultForAccessibility(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeFindInPageBridge) {
  FindInPageBridge* native =
      reinterpret_cast<FindInPageBridge*>(nativeFindInPageBridge);
  CHECK_NATIVE_PTR(env, jcaller, native,
      "ActivateFindInPageResultForAccessibility");
  return native->ActivateFindInPageResultForAccessibility(env,
      base::android::JavaParamRef<jobject>(env, jcaller));
}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsFindInPageBridge[] = {
    { "nativeInit",
"("
"Lorg/chromium/content_public/browser/WebContents;"
")"
"J",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_findinpage_FindInPageBridge_nativeInit)
    },
    { "nativeDestroy",
"("
"J"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_findinpage_FindInPageBridge_nativeDestroy)
    },
    { "nativeStartFinding",
"("
"J"
"Ljava/lang/String;"
"Z"
"Z"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_findinpage_FindInPageBridge_nativeStartFinding)
    },
    { "nativeStopFinding",
"("
"J"
"Z"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_findinpage_FindInPageBridge_nativeStopFinding)
    },
    { "nativeGetPreviousFindText",
"("
"J"
")"
"Ljava/lang/String;",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_findinpage_FindInPageBridge_nativeGetPreviousFindText)
    },
    { "nativeRequestFindMatchRects",
"("
"J"
"I"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_findinpage_FindInPageBridge_nativeRequestFindMatchRects)
    },
    { "nativeActivateNearestFindResult",
"("
"J"
"F"
"F"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_findinpage_FindInPageBridge_nativeActivateNearestFindResult)
    },
    { "nativeActivateFindInPageResultForAccessibility",
"("
"J"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_findinpage_FindInPageBridge_nativeActivateFindInPageResultForAccessibility)
    },
};

static bool RegisterNativesImpl(JNIEnv* env) {
  if (base::android::IsManualJniRegistrationDisabled()) return true;

  const int kMethodsFindInPageBridgeSize = arraysize(kMethodsFindInPageBridge);

  if (env->RegisterNatives(FindInPageBridge_clazz(env),
                           kMethodsFindInPageBridge,
                           kMethodsFindInPageBridgeSize) < 0) {
    jni_generator::HandleRegistrationError(
        env, FindInPageBridge_clazz(env), __FILE__);
    return false;
  }

  return true;
}

#endif  // org_chromium_chrome_browser_findinpage_FindInPageBridge_JNI

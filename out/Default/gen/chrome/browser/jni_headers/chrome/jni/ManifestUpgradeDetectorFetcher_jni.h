// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/webapps/ManifestUpgradeDetectorFetcher

#ifndef org_chromium_chrome_browser_webapps_ManifestUpgradeDetectorFetcher_JNI
#define org_chromium_chrome_browser_webapps_ManifestUpgradeDetectorFetcher_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kManifestUpgradeDetectorFetcherClassPath[] =
    "org/chromium/chrome/browser/webapps/ManifestUpgradeDetectorFetcher";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_ManifestUpgradeDetectorFetcher_clazz
    __attribute__((unused)) = 0;
#define ManifestUpgradeDetectorFetcher_clazz(env) base::android::LazyGetClass(env, kManifestUpgradeDetectorFetcherClassPath, &g_ManifestUpgradeDetectorFetcher_clazz)

}  // namespace

// Step 2: method stubs.

static jlong Initialize(JNIEnv* env, const base::android::JavaParamRef<jobject>&
    jcaller,
    const base::android::JavaParamRef<jstring>& scope,
    const base::android::JavaParamRef<jstring>& webManifestUrl);

extern "C" __attribute__((visibility("default")))
jlong
    Java_org_chromium_chrome_browser_webapps_ManifestUpgradeDetectorFetcher_nativeInitialize(JNIEnv*
    env, jobject jcaller,
    jstring scope,
    jstring webManifestUrl) {
  return Initialize(env, base::android::JavaParamRef<jobject>(env, jcaller),
      base::android::JavaParamRef<jstring>(env, scope),
      base::android::JavaParamRef<jstring>(env, webManifestUrl));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_webapps_ManifestUpgradeDetectorFetcher_nativeReplaceWebContents(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeManifestUpgradeDetectorFetcher,
    jobject webContents) {
  ManifestUpgradeDetectorFetcher* native =
      reinterpret_cast<ManifestUpgradeDetectorFetcher*>(nativeManifestUpgradeDetectorFetcher);
  CHECK_NATIVE_PTR(env, jcaller, native, "ReplaceWebContents");
  return native->ReplaceWebContents(env,
      base::android::JavaParamRef<jobject>(env, jcaller),
      base::android::JavaParamRef<jobject>(env, webContents));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_webapps_ManifestUpgradeDetectorFetcher_nativeDestroy(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeManifestUpgradeDetectorFetcher) {
  ManifestUpgradeDetectorFetcher* native =
      reinterpret_cast<ManifestUpgradeDetectorFetcher*>(nativeManifestUpgradeDetectorFetcher);
  CHECK_NATIVE_PTR(env, jcaller, native, "Destroy");
  return native->Destroy(env, base::android::JavaParamRef<jobject>(env,
      jcaller));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_webapps_ManifestUpgradeDetectorFetcher_nativeStart(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeManifestUpgradeDetectorFetcher,
    jobject webContents) {
  ManifestUpgradeDetectorFetcher* native =
      reinterpret_cast<ManifestUpgradeDetectorFetcher*>(nativeManifestUpgradeDetectorFetcher);
  CHECK_NATIVE_PTR(env, jcaller, native, "Start");
  return native->Start(env, base::android::JavaParamRef<jobject>(env, jcaller),
      base::android::JavaParamRef<jobject>(env, webContents));
}

static base::subtle::AtomicWord g_ManifestUpgradeDetectorFetcher_onDataAvailable
    = 0;
static void Java_ManifestUpgradeDetectorFetcher_onDataAvailable(JNIEnv* env,
    const base::android::JavaRefOrBare<jobject>& obj, const
    base::android::JavaRefOrBare<jstring>& startUrl,
    const base::android::JavaRefOrBare<jstring>& scopeUrl,
    const base::android::JavaRefOrBare<jstring>& name,
    const base::android::JavaRefOrBare<jstring>& shortName,
    const base::android::JavaRefOrBare<jstring>& iconUrl,
    jlong iconMurmur2Hash,
    const base::android::JavaRefOrBare<jobject>& iconBitmap,
    JniIntWrapper displayMode,
    JniIntWrapper orientation,
    jlong themeColor,
    jlong backgroundColor) {
  CHECK_CLAZZ(env, obj.obj(),
      ManifestUpgradeDetectorFetcher_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, ManifestUpgradeDetectorFetcher_clazz(env),
      "onDataAvailable",

"("
"Ljava/lang/String;"
"Ljava/lang/String;"
"Ljava/lang/String;"
"Ljava/lang/String;"
"Ljava/lang/String;"
"J"
"Landroid/graphics/Bitmap;"
"I"
"I"
"J"
"J"
")"
"V",
      &g_ManifestUpgradeDetectorFetcher_onDataAvailable);

     env->CallVoidMethod(obj.obj(),
          method_id, startUrl.obj(), scopeUrl.obj(), name.obj(),
              shortName.obj(), iconUrl.obj(), iconMurmur2Hash, iconBitmap.obj(),
              as_jint(displayMode), as_jint(orientation), themeColor,
              backgroundColor);
  jni_generator::CheckException(env);

}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsManifestUpgradeDetectorFetcher[] = {
    { "nativeInitialize",
"("
"Ljava/lang/String;"
"Ljava/lang/String;"
")"
"J",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_webapps_ManifestUpgradeDetectorFetcher_nativeInitialize)
    },
    { "nativeReplaceWebContents",
"("
"J"
"Lorg/chromium/content_public/browser/WebContents;"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_webapps_ManifestUpgradeDetectorFetcher_nativeReplaceWebContents)
    },
    { "nativeDestroy",
"("
"J"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_webapps_ManifestUpgradeDetectorFetcher_nativeDestroy)
    },
    { "nativeStart",
"("
"J"
"Lorg/chromium/content_public/browser/WebContents;"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_webapps_ManifestUpgradeDetectorFetcher_nativeStart)
    },
};

static bool RegisterNativesImpl(JNIEnv* env) {
  if (base::android::IsManualJniRegistrationDisabled()) return true;

  const int kMethodsManifestUpgradeDetectorFetcherSize =
      arraysize(kMethodsManifestUpgradeDetectorFetcher);

  if (env->RegisterNatives(ManifestUpgradeDetectorFetcher_clazz(env),
                           kMethodsManifestUpgradeDetectorFetcher,
                           kMethodsManifestUpgradeDetectorFetcherSize) < 0) {
    jni_generator::HandleRegistrationError(
        env, ManifestUpgradeDetectorFetcher_clazz(env), __FILE__);
    return false;
  }

  return true;
}

#endif  // org_chromium_chrome_browser_webapps_ManifestUpgradeDetectorFetcher_JNI

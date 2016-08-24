// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/compositor/LayerTitleCache

#ifndef org_chromium_chrome_browser_compositor_LayerTitleCache_JNI
#define org_chromium_chrome_browser_compositor_LayerTitleCache_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kLayerTitleCacheClassPath[] =
    "org/chromium/chrome/browser/compositor/LayerTitleCache";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_LayerTitleCache_clazz __attribute__((unused)) = 0;
#define LayerTitleCache_clazz(env) base::android::LazyGetClass(env, kLayerTitleCacheClassPath, &g_LayerTitleCache_clazz)

}  // namespace

namespace chrome {
namespace android {

// Step 2: method stubs.

static jlong Init(JNIEnv* env, const base::android::JavaParamRef<jobject>&
    jcaller,
    jint fadeWidth,
    jint faviconStartlPadding,
    jint faviconEndPadding,
    jint spinnerResId,
    jint spinnerIncognitoResId);

extern "C" __attribute__((visibility("default")))
jlong
    Java_org_chromium_chrome_browser_compositor_LayerTitleCache_nativeInit(JNIEnv*
    env, jobject jcaller,
    jint fadeWidth,
    jint faviconStartlPadding,
    jint faviconEndPadding,
    jint spinnerResId,
    jint spinnerIncognitoResId) {
  return Init(env, base::android::JavaParamRef<jobject>(env, jcaller),
      fadeWidth, faviconStartlPadding, faviconEndPadding, spinnerResId,
      spinnerIncognitoResId);
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_compositor_LayerTitleCache_nativeDestroy(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeLayerTitleCache) {
  LayerTitleCache* native =
      reinterpret_cast<LayerTitleCache*>(nativeLayerTitleCache);
  CHECK_NATIVE_PTR(env, jcaller, native, "Destroy");
  return native->Destroy(env, base::android::JavaParamRef<jobject>(env,
      jcaller));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_compositor_LayerTitleCache_nativeClearExcept(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeLayerTitleCache,
    jint exceptId) {
  LayerTitleCache* native =
      reinterpret_cast<LayerTitleCache*>(nativeLayerTitleCache);
  CHECK_NATIVE_PTR(env, jcaller, native, "ClearExcept");
  return native->ClearExcept(env, base::android::JavaParamRef<jobject>(env,
      jcaller), exceptId);
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_compositor_LayerTitleCache_nativeUpdateLayer(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeLayerTitleCache,
    jint tabId,
    jint titleResId,
    jint faviconResId,
    jboolean isIncognito,
    jboolean isRtl) {
  LayerTitleCache* native =
      reinterpret_cast<LayerTitleCache*>(nativeLayerTitleCache);
  CHECK_NATIVE_PTR(env, jcaller, native, "UpdateLayer");
  return native->UpdateLayer(env, base::android::JavaParamRef<jobject>(env,
      jcaller), tabId, titleResId, faviconResId, isIncognito, isRtl);
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_compositor_LayerTitleCache_nativeUpdateFavicon(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeLayerTitleCache,
    jint tabId,
    jint faviconResId) {
  LayerTitleCache* native =
      reinterpret_cast<LayerTitleCache*>(nativeLayerTitleCache);
  CHECK_NATIVE_PTR(env, jcaller, native, "UpdateFavicon");
  return native->UpdateFavicon(env, base::android::JavaParamRef<jobject>(env,
      jcaller), tabId, faviconResId);
}

static base::subtle::AtomicWord g_LayerTitleCache_getNativePtr = 0;
static jlong Java_LayerTitleCache_getNativePtr(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      LayerTitleCache_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, LayerTitleCache_clazz(env),
      "getNativePtr",

"("
")"
"J",
      &g_LayerTitleCache_getNativePtr);

  jlong ret =
      env->CallLongMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsLayerTitleCache[] = {
    { "nativeInit",
"("
"I"
"I"
"I"
"I"
"I"
")"
"J",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_compositor_LayerTitleCache_nativeInit)
    },
    { "nativeDestroy",
"("
"J"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_compositor_LayerTitleCache_nativeDestroy)
    },
    { "nativeClearExcept",
"("
"J"
"I"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_compositor_LayerTitleCache_nativeClearExcept)
    },
    { "nativeUpdateLayer",
"("
"J"
"I"
"I"
"I"
"Z"
"Z"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_compositor_LayerTitleCache_nativeUpdateLayer)
    },
    { "nativeUpdateFavicon",
"("
"J"
"I"
"I"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_compositor_LayerTitleCache_nativeUpdateFavicon)
    },
};

static bool RegisterNativesImpl(JNIEnv* env) {
  if (base::android::IsManualJniRegistrationDisabled()) return true;

  const int kMethodsLayerTitleCacheSize = arraysize(kMethodsLayerTitleCache);

  if (env->RegisterNatives(LayerTitleCache_clazz(env),
                           kMethodsLayerTitleCache,
                           kMethodsLayerTitleCacheSize) < 0) {
    jni_generator::HandleRegistrationError(
        env, LayerTitleCache_clazz(env), __FILE__);
    return false;
  }

  return true;
}

}  // namespace android
}  // namespace chrome

#endif  // org_chromium_chrome_browser_compositor_LayerTitleCache_JNI
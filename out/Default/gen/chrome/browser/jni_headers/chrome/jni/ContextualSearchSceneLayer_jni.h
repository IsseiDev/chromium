// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//
//    org/chromium/chrome/browser/compositor/scene_layer/ContextualSearchSceneLayer

#ifndef org_chromium_chrome_browser_compositor_scene_layer_ContextualSearchSceneLayer_JNI
#define org_chromium_chrome_browser_compositor_scene_layer_ContextualSearchSceneLayer_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kContextualSearchSceneLayerClassPath[] =
    "org/chromium/chrome/browser/compositor/scene_layer/ContextualSearchSceneLayer";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_ContextualSearchSceneLayer_clazz
    __attribute__((unused)) = 0;
#define ContextualSearchSceneLayer_clazz(env) base::android::LazyGetClass(env, kContextualSearchSceneLayerClassPath, &g_ContextualSearchSceneLayer_clazz)

}  // namespace

namespace chrome {
namespace android {

// Step 2: method stubs.

static jlong Init(JNIEnv* env, const base::android::JavaParamRef<jobject>&
    jcaller);

extern "C" __attribute__((visibility("default")))
jlong
    Java_org_chromium_chrome_browser_compositor_scene_1layer_ContextualSearchSceneLayer_nativeInit(JNIEnv*
    env, jobject jcaller) {
  return Init(env, base::android::JavaParamRef<jobject>(env, jcaller));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_compositor_scene_1layer_ContextualSearchSceneLayer_nativeCreateContextualSearchLayer(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeContextualSearchSceneLayer,
    jobject resourceManager) {
  ContextualSearchSceneLayer* native =
      reinterpret_cast<ContextualSearchSceneLayer*>(nativeContextualSearchSceneLayer);
  CHECK_NATIVE_PTR(env, jcaller, native, "CreateContextualSearchLayer");
  return native->CreateContextualSearchLayer(env,
      base::android::JavaParamRef<jobject>(env, jcaller),
      base::android::JavaParamRef<jobject>(env, resourceManager));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_compositor_scene_1layer_ContextualSearchSceneLayer_nativeSetContentTree(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeContextualSearchSceneLayer,
    jobject contentTree) {
  ContextualSearchSceneLayer* native =
      reinterpret_cast<ContextualSearchSceneLayer*>(nativeContextualSearchSceneLayer);
  CHECK_NATIVE_PTR(env, jcaller, native, "SetContentTree");
  return native->SetContentTree(env, base::android::JavaParamRef<jobject>(env,
      jcaller), base::android::JavaParamRef<jobject>(env, contentTree));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_compositor_scene_1layer_ContextualSearchSceneLayer_nativeHideTree(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeContextualSearchSceneLayer) {
  ContextualSearchSceneLayer* native =
      reinterpret_cast<ContextualSearchSceneLayer*>(nativeContextualSearchSceneLayer);
  CHECK_NATIVE_PTR(env, jcaller, native, "HideTree");
  return native->HideTree(env, base::android::JavaParamRef<jobject>(env,
      jcaller));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_compositor_scene_1layer_ContextualSearchSceneLayer_nativeUpdateContextualSearchLayer(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeContextualSearchSceneLayer,
    jint searchBarBackgroundResourceId,
    jint searchContextResourceId,
    jint searchTermResourceId,
    jint searchCaptionResourceId,
    jint searchBarShadowResourceId,
    jint panelIconResourceId,
    jint searchProviderIconSpriteMetadataResourceId,
    jint arrowUpResourceId,
    jint closeIconResourceId,
    jint progressBarBackgroundResourceId,
    jint progressBarResourceId,
    jint searchPromoResourceId,
    jint peekPromoRippleResourceId,
    jint peekPromoTextResourceId,
    jfloat dpToPx,
    jfloat basePageBrightness,
    jfloat basePageYOffset,
    jobject webContents,
    jboolean searchPromoVisible,
    jfloat searchPromoHeight,
    jfloat searchPromoOpacity,
    jboolean searchPeekPromoVisible,
    jfloat searchPeekPromoHeight,
    jfloat searchPeekPromoPaddingPx,
    jfloat searchPeekPromoRippleWidth,
    jfloat searchPeekPromoRippleOpacity,
    jfloat searchPeekPromoTextOpacity,
    jfloat searchPanelX,
    jfloat searchPanelY,
    jfloat searchPanelWidth,
    jfloat searchPanelHeight,
    jfloat searchBarMarginSide,
    jfloat searchBarHeight,
    jfloat searchContextOpacity,
    jfloat searchTermOpacity,
    jfloat searchCaptionAnimationPercentage,
    jboolean searchCaptionVisible,
    jboolean searchBarBorderVisible,
    jfloat searchBarBorderHeight,
    jboolean searchBarShadowVisible,
    jfloat searchBarShadowOpacity,
    jboolean searchProviderIconSpriteVisible,
    jfloat searchProviderIconCompletionPercentage,
    jfloat arrowIconOpacity,
    jfloat arrowIconRotation,
    jfloat closeIconOpacity,
    jboolean isProgressBarVisible,
    jfloat progressBarHeight,
    jfloat progressBarOpacity,
    jint progressBarCompletion) {
  ContextualSearchSceneLayer* native =
      reinterpret_cast<ContextualSearchSceneLayer*>(nativeContextualSearchSceneLayer);
  CHECK_NATIVE_PTR(env, jcaller, native, "UpdateContextualSearchLayer");
  return native->UpdateContextualSearchLayer(env,
      base::android::JavaParamRef<jobject>(env, jcaller),
      searchBarBackgroundResourceId, searchContextResourceId,
      searchTermResourceId, searchCaptionResourceId, searchBarShadowResourceId,
      panelIconResourceId, searchProviderIconSpriteMetadataResourceId,
      arrowUpResourceId, closeIconResourceId, progressBarBackgroundResourceId,
      progressBarResourceId, searchPromoResourceId, peekPromoRippleResourceId,
      peekPromoTextResourceId, dpToPx, basePageBrightness, basePageYOffset,
      base::android::JavaParamRef<jobject>(env, webContents),
      searchPromoVisible, searchPromoHeight, searchPromoOpacity,
      searchPeekPromoVisible, searchPeekPromoHeight, searchPeekPromoPaddingPx,
      searchPeekPromoRippleWidth, searchPeekPromoRippleOpacity,
      searchPeekPromoTextOpacity, searchPanelX, searchPanelY, searchPanelWidth,
      searchPanelHeight, searchBarMarginSide, searchBarHeight,
      searchContextOpacity, searchTermOpacity, searchCaptionAnimationPercentage,
      searchCaptionVisible, searchBarBorderVisible, searchBarBorderHeight,
      searchBarShadowVisible, searchBarShadowOpacity,
      searchProviderIconSpriteVisible, searchProviderIconCompletionPercentage,
      arrowIconOpacity, arrowIconRotation, closeIconOpacity,
      isProgressBarVisible, progressBarHeight, progressBarOpacity,
      progressBarCompletion);
}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsContextualSearchSceneLayer[] = {
    { "nativeInit",
"("
")"
"J",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_compositor_scene_1layer_ContextualSearchSceneLayer_nativeInit)
    },
    { "nativeCreateContextualSearchLayer",
"("
"J"
"Lorg/chromium/ui/resources/ResourceManager;"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_compositor_scene_1layer_ContextualSearchSceneLayer_nativeCreateContextualSearchLayer)
    },
    { "nativeSetContentTree",
"("
"J"
"Lorg/chromium/chrome/browser/compositor/scene_layer/SceneLayer;"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_compositor_scene_1layer_ContextualSearchSceneLayer_nativeSetContentTree)
    },
    { "nativeHideTree",
"("
"J"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_compositor_scene_1layer_ContextualSearchSceneLayer_nativeHideTree)
    },
    { "nativeUpdateContextualSearchLayer",
"("
"J"
"I"
"I"
"I"
"I"
"I"
"I"
"I"
"I"
"I"
"I"
"I"
"I"
"I"
"I"
"F"
"F"
"F"
"Lorg/chromium/content_public/browser/WebContents;"
"Z"
"F"
"F"
"Z"
"F"
"F"
"F"
"F"
"F"
"F"
"F"
"F"
"F"
"F"
"F"
"F"
"F"
"F"
"Z"
"Z"
"F"
"Z"
"F"
"Z"
"F"
"F"
"F"
"F"
"Z"
"F"
"F"
"I"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_compositor_scene_1layer_ContextualSearchSceneLayer_nativeUpdateContextualSearchLayer)
    },
};

static bool RegisterNativesImpl(JNIEnv* env) {
  if (base::android::IsManualJniRegistrationDisabled()) return true;

  const int kMethodsContextualSearchSceneLayerSize =
      arraysize(kMethodsContextualSearchSceneLayer);

  if (env->RegisterNatives(ContextualSearchSceneLayer_clazz(env),
                           kMethodsContextualSearchSceneLayer,
                           kMethodsContextualSearchSceneLayerSize) < 0) {
    jni_generator::HandleRegistrationError(
        env, ContextualSearchSceneLayer_clazz(env), __FILE__);
    return false;
  }

  return true;
}

}  // namespace android
}  // namespace chrome

#endif  // org_chromium_chrome_browser_compositor_scene_layer_ContextualSearchSceneLayer_JNI

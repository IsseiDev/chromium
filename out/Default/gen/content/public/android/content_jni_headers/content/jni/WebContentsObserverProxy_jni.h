// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/content/browser/webcontents/WebContentsObserverProxy

#ifndef org_chromium_content_browser_webcontents_WebContentsObserverProxy_JNI
#define org_chromium_content_browser_webcontents_WebContentsObserverProxy_JNI

#include <jni.h>

#include "../../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kWebContentsObserverProxyClassPath[] =
    "org/chromium/content/browser/webcontents/WebContentsObserverProxy";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_WebContentsObserverProxy_clazz
    __attribute__((unused)) = 0;
#define WebContentsObserverProxy_clazz(env) base::android::LazyGetClass(env, kWebContentsObserverProxyClassPath, &g_WebContentsObserverProxy_clazz)

}  // namespace

namespace content {

// Step 2: method stubs.

static jlong Init(JNIEnv* env, const base::android::JavaParamRef<jobject>&
    jcaller,
    const base::android::JavaParamRef<jobject>& webContents);

extern "C" __attribute__((visibility("default")))
jlong
    Java_org_chromium_content_browser_webcontents_WebContentsObserverProxy_nativeInit(JNIEnv*
    env, jobject jcaller,
    jobject webContents) {
  return Init(env, base::android::JavaParamRef<jobject>(env, jcaller),
      base::android::JavaParamRef<jobject>(env, webContents));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_content_browser_webcontents_WebContentsObserverProxy_nativeDestroy(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeWebContentsObserverProxy) {
  WebContentsObserverProxy* native =
      reinterpret_cast<WebContentsObserverProxy*>(nativeWebContentsObserverProxy);
  CHECK_NATIVE_PTR(env, jcaller, native, "Destroy");
  return native->Destroy(env, base::android::JavaParamRef<jobject>(env,
      jcaller));
}

static base::subtle::AtomicWord g_WebContentsObserverProxy_renderViewReady = 0;
static void Java_WebContentsObserverProxy_renderViewReady(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      WebContentsObserverProxy_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, WebContentsObserverProxy_clazz(env),
      "renderViewReady",

"("
")"
"V",
      &g_WebContentsObserverProxy_renderViewReady);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_WebContentsObserverProxy_renderProcessGone =
    0;
static void Java_WebContentsObserverProxy_renderProcessGone(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, jboolean wasOomProtected) {
  CHECK_CLAZZ(env, obj.obj(),
      WebContentsObserverProxy_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, WebContentsObserverProxy_clazz(env),
      "renderProcessGone",

"("
"Z"
")"
"V",
      &g_WebContentsObserverProxy_renderProcessGone);

     env->CallVoidMethod(obj.obj(),
          method_id, wasOomProtected);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_WebContentsObserverProxy_didFinishNavigation =
    0;
static void Java_WebContentsObserverProxy_didFinishNavigation(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, jboolean isMainFrame,
    jboolean isErrorPage,
    jboolean hasCommitted) {
  CHECK_CLAZZ(env, obj.obj(),
      WebContentsObserverProxy_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, WebContentsObserverProxy_clazz(env),
      "didFinishNavigation",

"("
"Z"
"Z"
"Z"
")"
"V",
      &g_WebContentsObserverProxy_didFinishNavigation);

     env->CallVoidMethod(obj.obj(),
          method_id, isMainFrame, isErrorPage, hasCommitted);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_WebContentsObserverProxy_didStartLoading = 0;
static void Java_WebContentsObserverProxy_didStartLoading(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, const
    base::android::JavaRefOrBare<jstring>& url) {
  CHECK_CLAZZ(env, obj.obj(),
      WebContentsObserverProxy_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, WebContentsObserverProxy_clazz(env),
      "didStartLoading",

"("
"Ljava/lang/String;"
")"
"V",
      &g_WebContentsObserverProxy_didStartLoading);

     env->CallVoidMethod(obj.obj(),
          method_id, url.obj());
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_WebContentsObserverProxy_didStopLoading = 0;
static void Java_WebContentsObserverProxy_didStopLoading(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, const
    base::android::JavaRefOrBare<jstring>& url) {
  CHECK_CLAZZ(env, obj.obj(),
      WebContentsObserverProxy_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, WebContentsObserverProxy_clazz(env),
      "didStopLoading",

"("
"Ljava/lang/String;"
")"
"V",
      &g_WebContentsObserverProxy_didStopLoading);

     env->CallVoidMethod(obj.obj(),
          method_id, url.obj());
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_WebContentsObserverProxy_didFailLoad = 0;
static void Java_WebContentsObserverProxy_didFailLoad(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, jboolean isProvisionalLoad,
    jboolean isMainFrame,
    JniIntWrapper errorCode,
    const base::android::JavaRefOrBare<jstring>& description,
    const base::android::JavaRefOrBare<jstring>& failingUrl,
    jboolean wasIgnoredByHandler) {
  CHECK_CLAZZ(env, obj.obj(),
      WebContentsObserverProxy_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, WebContentsObserverProxy_clazz(env),
      "didFailLoad",

"("
"Z"
"Z"
"I"
"Ljava/lang/String;"
"Ljava/lang/String;"
"Z"
")"
"V",
      &g_WebContentsObserverProxy_didFailLoad);

     env->CallVoidMethod(obj.obj(),
          method_id, isProvisionalLoad, isMainFrame, as_jint(errorCode),
              description.obj(), failingUrl.obj(), wasIgnoredByHandler);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_WebContentsObserverProxy_didNavigateMainFrame
    = 0;
static void Java_WebContentsObserverProxy_didNavigateMainFrame(JNIEnv* env,
    const base::android::JavaRefOrBare<jobject>& obj, const
    base::android::JavaRefOrBare<jstring>& url,
    const base::android::JavaRefOrBare<jstring>& baseUrl,
    jboolean isNavigationToDifferentPage,
    jboolean isFragmentNavigation,
    JniIntWrapper statusCode) {
  CHECK_CLAZZ(env, obj.obj(),
      WebContentsObserverProxy_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, WebContentsObserverProxy_clazz(env),
      "didNavigateMainFrame",

"("
"Ljava/lang/String;"
"Ljava/lang/String;"
"Z"
"Z"
"I"
")"
"V",
      &g_WebContentsObserverProxy_didNavigateMainFrame);

     env->CallVoidMethod(obj.obj(),
          method_id, url.obj(), baseUrl.obj(), isNavigationToDifferentPage,
              isFragmentNavigation, as_jint(statusCode));
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord
    g_WebContentsObserverProxy_didFirstVisuallyNonEmptyPaint = 0;
static void Java_WebContentsObserverProxy_didFirstVisuallyNonEmptyPaint(JNIEnv*
    env, const base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      WebContentsObserverProxy_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, WebContentsObserverProxy_clazz(env),
      "didFirstVisuallyNonEmptyPaint",

"("
")"
"V",
      &g_WebContentsObserverProxy_didFirstVisuallyNonEmptyPaint);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_WebContentsObserverProxy_didNavigateAnyFrame =
    0;
static void Java_WebContentsObserverProxy_didNavigateAnyFrame(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, const
    base::android::JavaRefOrBare<jstring>& url,
    const base::android::JavaRefOrBare<jstring>& baseUrl,
    jboolean isReload) {
  CHECK_CLAZZ(env, obj.obj(),
      WebContentsObserverProxy_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, WebContentsObserverProxy_clazz(env),
      "didNavigateAnyFrame",

"("
"Ljava/lang/String;"
"Ljava/lang/String;"
"Z"
")"
"V",
      &g_WebContentsObserverProxy_didNavigateAnyFrame);

     env->CallVoidMethod(obj.obj(),
          method_id, url.obj(), baseUrl.obj(), isReload);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord
    g_WebContentsObserverProxy_documentAvailableInMainFrame = 0;
static void Java_WebContentsObserverProxy_documentAvailableInMainFrame(JNIEnv*
    env, const base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      WebContentsObserverProxy_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, WebContentsObserverProxy_clazz(env),
      "documentAvailableInMainFrame",

"("
")"
"V",
      &g_WebContentsObserverProxy_documentAvailableInMainFrame);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord
    g_WebContentsObserverProxy_didStartProvisionalLoadForFrame = 0;
static void
    Java_WebContentsObserverProxy_didStartProvisionalLoadForFrame(JNIEnv* env,
    const base::android::JavaRefOrBare<jobject>& obj, jlong frameId,
    jlong parentFrameId,
    jboolean isMainFrame,
    const base::android::JavaRefOrBare<jstring>& validatedUrl,
    jboolean isErrorPage,
    jboolean isIframeSrcdoc) {
  CHECK_CLAZZ(env, obj.obj(),
      WebContentsObserverProxy_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, WebContentsObserverProxy_clazz(env),
      "didStartProvisionalLoadForFrame",

"("
"J"
"J"
"Z"
"Ljava/lang/String;"
"Z"
"Z"
")"
"V",
      &g_WebContentsObserverProxy_didStartProvisionalLoadForFrame);

     env->CallVoidMethod(obj.obj(),
          method_id, frameId, parentFrameId, isMainFrame, validatedUrl.obj(),
              isErrorPage, isIframeSrcdoc);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord
    g_WebContentsObserverProxy_didCommitProvisionalLoadForFrame = 0;
static void
    Java_WebContentsObserverProxy_didCommitProvisionalLoadForFrame(JNIEnv* env,
    const base::android::JavaRefOrBare<jobject>& obj, jlong frameId,
    jboolean isMainFrame,
    const base::android::JavaRefOrBare<jstring>& url,
    JniIntWrapper transitionType) {
  CHECK_CLAZZ(env, obj.obj(),
      WebContentsObserverProxy_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, WebContentsObserverProxy_clazz(env),
      "didCommitProvisionalLoadForFrame",

"("
"J"
"Z"
"Ljava/lang/String;"
"I"
")"
"V",
      &g_WebContentsObserverProxy_didCommitProvisionalLoadForFrame);

     env->CallVoidMethod(obj.obj(),
          method_id, frameId, isMainFrame, url.obj(), as_jint(transitionType));
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_WebContentsObserverProxy_didFinishLoad = 0;
static void Java_WebContentsObserverProxy_didFinishLoad(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, jlong frameId,
    const base::android::JavaRefOrBare<jstring>& validatedUrl,
    jboolean isMainFrame) {
  CHECK_CLAZZ(env, obj.obj(),
      WebContentsObserverProxy_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, WebContentsObserverProxy_clazz(env),
      "didFinishLoad",

"("
"J"
"Ljava/lang/String;"
"Z"
")"
"V",
      &g_WebContentsObserverProxy_didFinishLoad);

     env->CallVoidMethod(obj.obj(),
          method_id, frameId, validatedUrl.obj(), isMainFrame);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_WebContentsObserverProxy_documentLoadedInFrame
    = 0;
static void Java_WebContentsObserverProxy_documentLoadedInFrame(JNIEnv* env,
    const base::android::JavaRefOrBare<jobject>& obj, jlong frameId,
    jboolean isMainFrame) {
  CHECK_CLAZZ(env, obj.obj(),
      WebContentsObserverProxy_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, WebContentsObserverProxy_clazz(env),
      "documentLoadedInFrame",

"("
"J"
"Z"
")"
"V",
      &g_WebContentsObserverProxy_documentLoadedInFrame);

     env->CallVoidMethod(obj.obj(),
          method_id, frameId, isMainFrame);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord
    g_WebContentsObserverProxy_navigationEntryCommitted = 0;
static void Java_WebContentsObserverProxy_navigationEntryCommitted(JNIEnv* env,
    const base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      WebContentsObserverProxy_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, WebContentsObserverProxy_clazz(env),
      "navigationEntryCommitted",

"("
")"
"V",
      &g_WebContentsObserverProxy_navigationEntryCommitted);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord
    g_WebContentsObserverProxy_didAttachInterstitialPage = 0;
static void Java_WebContentsObserverProxy_didAttachInterstitialPage(JNIEnv* env,
    const base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      WebContentsObserverProxy_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, WebContentsObserverProxy_clazz(env),
      "didAttachInterstitialPage",

"("
")"
"V",
      &g_WebContentsObserverProxy_didAttachInterstitialPage);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord
    g_WebContentsObserverProxy_didDetachInterstitialPage = 0;
static void Java_WebContentsObserverProxy_didDetachInterstitialPage(JNIEnv* env,
    const base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      WebContentsObserverProxy_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, WebContentsObserverProxy_clazz(env),
      "didDetachInterstitialPage",

"("
")"
"V",
      &g_WebContentsObserverProxy_didDetachInterstitialPage);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_WebContentsObserverProxy_didChangeThemeColor =
    0;
static void Java_WebContentsObserverProxy_didChangeThemeColor(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, JniIntWrapper color) {
  CHECK_CLAZZ(env, obj.obj(),
      WebContentsObserverProxy_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, WebContentsObserverProxy_clazz(env),
      "didChangeThemeColor",

"("
"I"
")"
"V",
      &g_WebContentsObserverProxy_didChangeThemeColor);

     env->CallVoidMethod(obj.obj(),
          method_id, as_jint(color));
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord
    g_WebContentsObserverProxy_didStartNavigationToPendingEntry = 0;
static void
    Java_WebContentsObserverProxy_didStartNavigationToPendingEntry(JNIEnv* env,
    const base::android::JavaRefOrBare<jobject>& obj, const
    base::android::JavaRefOrBare<jstring>& url) {
  CHECK_CLAZZ(env, obj.obj(),
      WebContentsObserverProxy_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, WebContentsObserverProxy_clazz(env),
      "didStartNavigationToPendingEntry",

"("
"Ljava/lang/String;"
")"
"V",
      &g_WebContentsObserverProxy_didStartNavigationToPendingEntry);

     env->CallVoidMethod(obj.obj(),
          method_id, url.obj());
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord
    g_WebContentsObserverProxy_mediaSessionStateChanged = 0;
static void Java_WebContentsObserverProxy_mediaSessionStateChanged(JNIEnv* env,
    const base::android::JavaRefOrBare<jobject>& obj, jboolean isControllable,
    jboolean isSuspended,
    const base::android::JavaRefOrBare<jobject>& metadata) {
  CHECK_CLAZZ(env, obj.obj(),
      WebContentsObserverProxy_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, WebContentsObserverProxy_clazz(env),
      "mediaSessionStateChanged",

"("
"Z"
"Z"
"Lorg/chromium/content_public/common/MediaMetadata;"
")"
"V",
      &g_WebContentsObserverProxy_mediaSessionStateChanged);

     env->CallVoidMethod(obj.obj(),
          method_id, isControllable, isSuspended, metadata.obj());
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_WebContentsObserverProxy_destroy = 0;
static void Java_WebContentsObserverProxy_destroy(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      WebContentsObserverProxy_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, WebContentsObserverProxy_clazz(env),
      "destroy",

"("
")"
"V",
      &g_WebContentsObserverProxy_destroy);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);

}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsWebContentsObserverProxy[] = {
    { "nativeInit",
"("
"Lorg/chromium/content/browser/webcontents/WebContentsImpl;"
")"
"J",
    reinterpret_cast<void*>(Java_org_chromium_content_browser_webcontents_WebContentsObserverProxy_nativeInit)
    },
    { "nativeDestroy",
"("
"J"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_content_browser_webcontents_WebContentsObserverProxy_nativeDestroy)
    },
};

static bool RegisterNativesImpl(JNIEnv* env) {
  if (base::android::IsManualJniRegistrationDisabled()) return true;

  const int kMethodsWebContentsObserverProxySize =
      arraysize(kMethodsWebContentsObserverProxy);

  if (env->RegisterNatives(WebContentsObserverProxy_clazz(env),
                           kMethodsWebContentsObserverProxy,
                           kMethodsWebContentsObserverProxySize) < 0) {
    jni_generator::HandleRegistrationError(
        env, WebContentsObserverProxy_clazz(env), __FILE__);
    return false;
  }

  return true;
}

}  // namespace content

#endif  // org_chromium_content_browser_webcontents_WebContentsObserverProxy_JNI
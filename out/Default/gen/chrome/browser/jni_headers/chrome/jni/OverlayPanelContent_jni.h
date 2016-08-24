// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/compositor/bottombar/OverlayPanelContent

#ifndef org_chromium_chrome_browser_compositor_bottombar_OverlayPanelContent_JNI
#define org_chromium_chrome_browser_compositor_bottombar_OverlayPanelContent_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kOverlayPanelContentClassPath[] =
    "org/chromium/chrome/browser/compositor/bottombar/OverlayPanelContent";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_OverlayPanelContent_clazz __attribute__((unused)) =
    0;
#define OverlayPanelContent_clazz(env) base::android::LazyGetClass(env, kOverlayPanelContentClassPath, &g_OverlayPanelContent_clazz)

}  // namespace

// Step 2: method stubs.

static jlong Init(JNIEnv* env, const base::android::JavaParamRef<jobject>&
    jcaller);

extern "C" __attribute__((visibility("default")))
jlong
    Java_org_chromium_chrome_browser_compositor_bottombar_OverlayPanelContent_nativeInit(JNIEnv*
    env, jobject jcaller) {
  return Init(env, base::android::JavaParamRef<jobject>(env, jcaller));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_compositor_bottombar_OverlayPanelContent_nativeDestroy(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeOverlayPanelContent) {
  OverlayPanelContent* native =
      reinterpret_cast<OverlayPanelContent*>(nativeOverlayPanelContent);
  CHECK_NATIVE_PTR(env, jcaller, native, "Destroy");
  return native->Destroy(env, base::android::JavaParamRef<jobject>(env,
      jcaller));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_compositor_bottombar_OverlayPanelContent_nativeRemoveLastHistoryEntry(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeOverlayPanelContent,
    jstring historyUrl,
    jlong urlTimeMs) {
  OverlayPanelContent* native =
      reinterpret_cast<OverlayPanelContent*>(nativeOverlayPanelContent);
  CHECK_NATIVE_PTR(env, jcaller, native, "RemoveLastHistoryEntry");
  return native->RemoveLastHistoryEntry(env,
      base::android::JavaParamRef<jobject>(env, jcaller),
      base::android::JavaParamRef<jstring>(env, historyUrl), urlTimeMs);
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_compositor_bottombar_OverlayPanelContent_nativeSetWebContents(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeOverlayPanelContent,
    jobject webContents,
    jobject delegate) {
  OverlayPanelContent* native =
      reinterpret_cast<OverlayPanelContent*>(nativeOverlayPanelContent);
  CHECK_NATIVE_PTR(env, jcaller, native, "SetWebContents");
  return native->SetWebContents(env, base::android::JavaParamRef<jobject>(env,
      jcaller), base::android::JavaParamRef<jobject>(env, webContents),
      base::android::JavaParamRef<jobject>(env, delegate));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_compositor_bottombar_OverlayPanelContent_nativeDestroyWebContents(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeOverlayPanelContent) {
  OverlayPanelContent* native =
      reinterpret_cast<OverlayPanelContent*>(nativeOverlayPanelContent);
  CHECK_NATIVE_PTR(env, jcaller, native, "DestroyWebContents");
  return native->DestroyWebContents(env,
      base::android::JavaParamRef<jobject>(env, jcaller));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_compositor_bottombar_OverlayPanelContent_nativeSetInterceptNavigationDelegate(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeOverlayPanelContent,
    jobject delegate,
    jobject webContents) {
  OverlayPanelContent* native =
      reinterpret_cast<OverlayPanelContent*>(nativeOverlayPanelContent);
  CHECK_NATIVE_PTR(env, jcaller, native, "SetInterceptNavigationDelegate");
  return native->SetInterceptNavigationDelegate(env,
      base::android::JavaParamRef<jobject>(env, jcaller),
      base::android::JavaParamRef<jobject>(env, delegate),
      base::android::JavaParamRef<jobject>(env, webContents));
}

static base::subtle::AtomicWord g_OverlayPanelContent_clearNativePanelContentPtr
    = 0;
static void Java_OverlayPanelContent_clearNativePanelContentPtr(JNIEnv* env,
    const base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      OverlayPanelContent_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, OverlayPanelContent_clazz(env),
      "clearNativePanelContentPtr",

"("
")"
"V",
      &g_OverlayPanelContent_clearNativePanelContentPtr);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);

}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsOverlayPanelContent[] = {
    { "nativeInit",
"("
")"
"J",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_compositor_bottombar_OverlayPanelContent_nativeInit)
    },
    { "nativeDestroy",
"("
"J"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_compositor_bottombar_OverlayPanelContent_nativeDestroy)
    },
    { "nativeRemoveLastHistoryEntry",
"("
"J"
"Ljava/lang/String;"
"J"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_compositor_bottombar_OverlayPanelContent_nativeRemoveLastHistoryEntry)
    },
    { "nativeSetWebContents",
"("
"J"
"Lorg/chromium/content_public/browser/WebContents;"
"Lorg/chromium/components/web_contents_delegate_android/WebContentsDelegateAndroid;"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_compositor_bottombar_OverlayPanelContent_nativeSetWebContents)
    },
    { "nativeDestroyWebContents",
"("
"J"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_compositor_bottombar_OverlayPanelContent_nativeDestroyWebContents)
    },
    { "nativeSetInterceptNavigationDelegate",
"("
"J"
"Lorg/chromium/components/navigation_interception/InterceptNavigationDelegate;"
"Lorg/chromium/content_public/browser/WebContents;"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_compositor_bottombar_OverlayPanelContent_nativeSetInterceptNavigationDelegate)
    },
};

static bool RegisterNativesImpl(JNIEnv* env) {
  if (base::android::IsManualJniRegistrationDisabled()) return true;

  const int kMethodsOverlayPanelContentSize =
      arraysize(kMethodsOverlayPanelContent);

  if (env->RegisterNatives(OverlayPanelContent_clazz(env),
                           kMethodsOverlayPanelContent,
                           kMethodsOverlayPanelContentSize) < 0) {
    jni_generator::HandleRegistrationError(
        env, OverlayPanelContent_clazz(env), __FILE__);
    return false;
  }

  return true;
}

#endif  // org_chromium_chrome_browser_compositor_bottombar_OverlayPanelContent_JNI

// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/tab/Tab

#ifndef org_chromium_chrome_browser_tab_Tab_JNI
#define org_chromium_chrome_browser_tab_Tab_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kTabClassPath[] = "org/chromium/chrome/browser/tab/Tab";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_Tab_clazz __attribute__((unused)) = 0;
#define Tab_clazz(env) base::android::LazyGetClass(env, kTabClassPath, &g_Tab_clazz)

}  // namespace

// Step 2: method stubs.

static void Init(JNIEnv* env, const base::android::JavaParamRef<jobject>&
    jcaller);

extern "C" __attribute__((visibility("default")))
void Java_org_chromium_chrome_browser_tab_Tab_nativeInit(JNIEnv* env, jobject
    jcaller) {
  return Init(env, base::android::JavaParamRef<jobject>(env, jcaller));
}

extern "C" __attribute__((visibility("default")))
void Java_org_chromium_chrome_browser_tab_Tab_nativeDestroy(JNIEnv* env,
    jobject jcaller,
    jlong nativeTabAndroid) {
  TabAndroid* native = reinterpret_cast<TabAndroid*>(nativeTabAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "Destroy");
  return native->Destroy(env, base::android::JavaParamRef<jobject>(env,
      jcaller));
}

extern "C" __attribute__((visibility("default")))
void Java_org_chromium_chrome_browser_tab_Tab_nativeInitWebContents(JNIEnv* env,
    jobject jcaller,
    jlong nativeTabAndroid,
    jboolean incognito,
    jobject webContents,
    jobject delegate,
    jobject contextMenuPopulator) {
  TabAndroid* native = reinterpret_cast<TabAndroid*>(nativeTabAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "InitWebContents");
  return native->InitWebContents(env, base::android::JavaParamRef<jobject>(env,
      jcaller), incognito, base::android::JavaParamRef<jobject>(env,
      webContents), base::android::JavaParamRef<jobject>(env, delegate),
      base::android::JavaParamRef<jobject>(env, contextMenuPopulator));
}

extern "C" __attribute__((visibility("default")))
void Java_org_chromium_chrome_browser_tab_Tab_nativeUpdateDelegates(JNIEnv* env,
    jobject jcaller,
    jlong nativeTabAndroid,
    jobject delegate,
    jobject contextMenuPopulator) {
  TabAndroid* native = reinterpret_cast<TabAndroid*>(nativeTabAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "UpdateDelegates");
  return native->UpdateDelegates(env, base::android::JavaParamRef<jobject>(env,
      jcaller), base::android::JavaParamRef<jobject>(env, delegate),
      base::android::JavaParamRef<jobject>(env, contextMenuPopulator));
}

extern "C" __attribute__((visibility("default")))
void Java_org_chromium_chrome_browser_tab_Tab_nativeDestroyWebContents(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeTabAndroid,
    jboolean deleteNative) {
  TabAndroid* native = reinterpret_cast<TabAndroid*>(nativeTabAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "DestroyWebContents");
  return native->DestroyWebContents(env,
      base::android::JavaParamRef<jobject>(env, jcaller), deleteNative);
}

extern "C" __attribute__((visibility("default")))
jobject Java_org_chromium_chrome_browser_tab_Tab_nativeGetProfileAndroid(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeTabAndroid) {
  TabAndroid* native = reinterpret_cast<TabAndroid*>(nativeTabAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "GetProfileAndroid", NULL);
  return native->GetProfileAndroid(env,
      base::android::JavaParamRef<jobject>(env, jcaller)).Release();
}

extern "C" __attribute__((visibility("default")))
jint Java_org_chromium_chrome_browser_tab_Tab_nativeLoadUrl(JNIEnv* env,
    jobject jcaller,
    jlong nativeTabAndroid,
    jstring url,
    jstring extraHeaders,
    jobject postData,
    jint transition,
    jstring referrerUrl,
    jint referrerPolicy,
    jboolean isRendererInitiated,
    jboolean shoulReplaceCurrentEntry,
    jlong intentReceivedTimestamp,
    jboolean hasUserGesture) {
  TabAndroid* native = reinterpret_cast<TabAndroid*>(nativeTabAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "LoadUrl", 0);
  return native->LoadUrl(env, base::android::JavaParamRef<jobject>(env,
      jcaller), base::android::JavaParamRef<jstring>(env, url),
      base::android::JavaParamRef<jstring>(env, extraHeaders),
      base::android::JavaParamRef<jobject>(env, postData), transition,
      base::android::JavaParamRef<jstring>(env, referrerUrl), referrerPolicy,
      isRendererInitiated, shoulReplaceCurrentEntry, intentReceivedTimestamp,
      hasUserGesture);
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_tab_Tab_nativeSetActiveNavigationEntryTitleForUrl(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeTabAndroid,
    jstring url,
    jstring title) {
  TabAndroid* native = reinterpret_cast<TabAndroid*>(nativeTabAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "SetActiveNavigationEntryTitleForUrl");
  return native->SetActiveNavigationEntryTitleForUrl(env,
      base::android::JavaParamRef<jobject>(env, jcaller),
      base::android::JavaParamRef<jstring>(env, url),
      base::android::JavaParamRef<jstring>(env, title));
}

extern "C" __attribute__((visibility("default")))
jboolean Java_org_chromium_chrome_browser_tab_Tab_nativePrint(JNIEnv* env,
    jobject jcaller,
    jlong nativeTabAndroid) {
  TabAndroid* native = reinterpret_cast<TabAndroid*>(nativeTabAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "Print", false);
  return native->Print(env, base::android::JavaParamRef<jobject>(env, jcaller));
}

extern "C" __attribute__((visibility("default")))
jobject Java_org_chromium_chrome_browser_tab_Tab_nativeGetFavicon(JNIEnv* env,
    jobject jcaller,
    jlong nativeTabAndroid) {
  TabAndroid* native = reinterpret_cast<TabAndroid*>(nativeTabAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "GetFavicon", NULL);
  return native->GetFavicon(env, base::android::JavaParamRef<jobject>(env,
      jcaller)).Release();
}

extern "C" __attribute__((visibility("default")))
void Java_org_chromium_chrome_browser_tab_Tab_nativeCreateHistoricalTab(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeTabAndroid) {
  TabAndroid* native = reinterpret_cast<TabAndroid*>(nativeTabAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "CreateHistoricalTab");
  return native->CreateHistoricalTab(env,
      base::android::JavaParamRef<jobject>(env, jcaller));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_tab_Tab_nativeUpdateTopControlsState(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeTabAndroid,
    jint constraints,
    jint current,
    jboolean animate) {
  TabAndroid* native = reinterpret_cast<TabAndroid*>(nativeTabAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "UpdateTopControlsState");
  return native->UpdateTopControlsState(env,
      base::android::JavaParamRef<jobject>(env, jcaller), constraints, current,
      animate);
}

extern "C" __attribute__((visibility("default")))
void Java_org_chromium_chrome_browser_tab_Tab_nativeLoadOriginalImage(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeTabAndroid) {
  TabAndroid* native = reinterpret_cast<TabAndroid*>(nativeTabAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "LoadOriginalImage");
  return native->LoadOriginalImage(env,
      base::android::JavaParamRef<jobject>(env, jcaller));
}

extern "C" __attribute__((visibility("default")))
jlong Java_org_chromium_chrome_browser_tab_Tab_nativeGetBookmarkId(JNIEnv* env,
    jobject jcaller,
    jlong nativeTabAndroid,
    jboolean onlyEditable) {
  TabAndroid* native = reinterpret_cast<TabAndroid*>(nativeTabAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "GetBookmarkId", 0);
  return native->GetBookmarkId(env, base::android::JavaParamRef<jobject>(env,
      jcaller), onlyEditable);
}

extern "C" __attribute__((visibility("default")))
jboolean Java_org_chromium_chrome_browser_tab_Tab_nativeIsOfflinePage(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeTabAndroid) {
  TabAndroid* native = reinterpret_cast<TabAndroid*>(nativeTabAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "IsOfflinePage", false);
  return native->IsOfflinePage(env, base::android::JavaParamRef<jobject>(env,
      jcaller));
}

extern "C" __attribute__((visibility("default")))
jobject Java_org_chromium_chrome_browser_tab_Tab_nativeGetOfflinePage(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeTabAndroid) {
  TabAndroid* native = reinterpret_cast<TabAndroid*>(nativeTabAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "GetOfflinePage", NULL);
  return native->GetOfflinePage(env, base::android::JavaParamRef<jobject>(env,
      jcaller)).Release();
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_tab_Tab_nativeSetInterceptNavigationDelegate(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeTabAndroid,
    jobject delegate) {
  TabAndroid* native = reinterpret_cast<TabAndroid*>(nativeTabAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "SetInterceptNavigationDelegate");
  return native->SetInterceptNavigationDelegate(env,
      base::android::JavaParamRef<jobject>(env, jcaller),
      base::android::JavaParamRef<jobject>(env, delegate));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_tab_Tab_nativeAttachToTabContentManager(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeTabAndroid,
    jobject tabContentManager) {
  TabAndroid* native = reinterpret_cast<TabAndroid*>(nativeTabAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "AttachToTabContentManager");
  return native->AttachToTabContentManager(env,
      base::android::JavaParamRef<jobject>(env, jcaller),
      base::android::JavaParamRef<jobject>(env, tabContentManager));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_tab_Tab_nativeAttachOverlayWebContents(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeTabAndroid,
    jobject webContents,
    jboolean visible) {
  TabAndroid* native = reinterpret_cast<TabAndroid*>(nativeTabAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "AttachOverlayWebContents");
  return native->AttachOverlayWebContents(env,
      base::android::JavaParamRef<jobject>(env, jcaller),
      base::android::JavaParamRef<jobject>(env, webContents), visible);
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_tab_Tab_nativeDetachOverlayWebContents(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeTabAndroid,
    jobject webContents) {
  TabAndroid* native = reinterpret_cast<TabAndroid*>(nativeTabAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "DetachOverlayWebContents");
  return native->DetachOverlayWebContents(env,
      base::android::JavaParamRef<jobject>(env, jcaller),
      base::android::JavaParamRef<jobject>(env, webContents));
}

extern "C" __attribute__((visibility("default")))
jboolean
    Java_org_chromium_chrome_browser_tab_Tab_nativeHasPrerenderedUrl(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeTabAndroid,
    jstring url) {
  TabAndroid* native = reinterpret_cast<TabAndroid*>(nativeTabAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "HasPrerenderedUrl", false);
  return native->HasPrerenderedUrl(env,
      base::android::JavaParamRef<jobject>(env, jcaller),
      base::android::JavaParamRef<jstring>(env, url));
}

static base::subtle::AtomicWord g_Tab_setPendingPrint = 0;
static void Java_Tab_setPendingPrint(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      Tab_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, Tab_clazz(env),
      "setPendingPrint",

"("
")"
"V",
      &g_Tab_setPendingPrint);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_Tab_getId = 0;
static jint Java_Tab_getId(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      Tab_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, Tab_clazz(env),
      "getId",

"("
")"
"I",
      &g_Tab_getId);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_Tab_getSyncId = 0;
static jint Java_Tab_getSyncId(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      Tab_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, Tab_clazz(env),
      "getSyncId",

"("
")"
"I",
      &g_Tab_getSyncId);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_Tab_setSyncId = 0;
static void Java_Tab_setSyncId(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, JniIntWrapper syncId) {
  CHECK_CLAZZ(env, obj.obj(),
      Tab_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, Tab_clazz(env),
      "setSyncId",

"("
"I"
")"
"V",
      &g_Tab_setSyncId);

     env->CallVoidMethod(obj.obj(),
          method_id, as_jint(syncId));
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_Tab_getUrl = 0;
static base::android::ScopedJavaLocalRef<jstring> Java_Tab_getUrl(JNIEnv* env,
    const base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      Tab_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, Tab_clazz(env),
      "getUrl",

"("
")"
"Ljava/lang/String;",
      &g_Tab_getUrl);

  jstring ret =
      static_cast<jstring>(env->CallObjectMethod(obj.obj(),
          method_id));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static base::subtle::AtomicWord g_Tab_getTitle = 0;
static base::android::ScopedJavaLocalRef<jstring> Java_Tab_getTitle(JNIEnv* env,
    const base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      Tab_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, Tab_clazz(env),
      "getTitle",

"("
")"
"Ljava/lang/String;",
      &g_Tab_getTitle);

  jstring ret =
      static_cast<jstring>(env->CallObjectMethod(obj.obj(),
          method_id));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static base::subtle::AtomicWord g_Tab_loadIfNeeded = 0;
static jboolean Java_Tab_loadIfNeeded(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      Tab_clazz(env), false);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, Tab_clazz(env),
      "loadIfNeeded",

"("
")"
"Z",
      &g_Tab_loadIfNeeded);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_Tab_onWebContentsInstantSupportDisabled = 0;
static void Java_Tab_onWebContentsInstantSupportDisabled(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      Tab_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, Tab_clazz(env),
      "onWebContentsInstantSupportDisabled",

"("
")"
"V",
      &g_Tab_onWebContentsInstantSupportDisabled);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_Tab_onFaviconAvailable = 0;
static void Java_Tab_onFaviconAvailable(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, const
    base::android::JavaRefOrBare<jobject>& icon) {
  CHECK_CLAZZ(env, obj.obj(),
      Tab_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, Tab_clazz(env),
      "onFaviconAvailable",

"("
"Landroid/graphics/Bitmap;"
")"
"V",
      &g_Tab_onFaviconAvailable);

     env->CallVoidMethod(obj.obj(),
          method_id, icon.obj());
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_Tab_onNavEntryChanged = 0;
static void Java_Tab_onNavEntryChanged(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      Tab_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, Tab_clazz(env),
      "onNavEntryChanged",

"("
")"
"V",
      &g_Tab_onNavEntryChanged);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_Tab_getNativePtr = 0;
static jlong Java_Tab_getNativePtr(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      Tab_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, Tab_clazz(env),
      "getNativePtr",

"("
")"
"J",
      &g_Tab_getNativePtr);

  jlong ret =
      env->CallLongMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_Tab_swapWebContents = 0;
static void Java_Tab_swapWebContents(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, const
    base::android::JavaRefOrBare<jobject>& webContents,
    jboolean didStartLoad,
    jboolean didFinishLoad) {
  CHECK_CLAZZ(env, obj.obj(),
      Tab_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, Tab_clazz(env),
      "swapWebContents",

"("
"Lorg/chromium/content_public/browser/WebContents;"
"Z"
"Z"
")"
"V",
      &g_Tab_swapWebContents);

     env->CallVoidMethod(obj.obj(),
          method_id, webContents.obj(), didStartLoad, didFinishLoad);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_Tab_clearNativePtr = 0;
static void Java_Tab_clearNativePtr(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      Tab_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, Tab_clazz(env),
      "clearNativePtr",

"("
")"
"V",
      &g_Tab_clearNativePtr);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_Tab_setNativePtr = 0;
static void Java_Tab_setNativePtr(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, jlong nativePtr) {
  CHECK_CLAZZ(env, obj.obj(),
      Tab_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, Tab_clazz(env),
      "setNativePtr",

"("
"J"
")"
"V",
      &g_Tab_setNativePtr);

     env->CallVoidMethod(obj.obj(),
          method_id, nativePtr);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_Tab_showOfflinePages = 0;
static void Java_Tab_showOfflinePages(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      Tab_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, Tab_clazz(env),
      "showOfflinePages",

"("
")"
"V",
      &g_Tab_showOfflinePages);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_Tab_onLoFiResponseReceived = 0;
static void Java_Tab_onLoFiResponseReceived(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, jboolean isPreview) {
  CHECK_CLAZZ(env, obj.obj(),
      Tab_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, Tab_clazz(env),
      "onLoFiResponseReceived",

"("
"Z"
")"
"V",
      &g_Tab_onLoFiResponseReceived);

     env->CallVoidMethod(obj.obj(),
          method_id, isPreview);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_Tab_openNewTab = 0;
static void Java_Tab_openNewTab(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, const
    base::android::JavaRefOrBare<jstring>& url,
    const base::android::JavaRefOrBare<jstring>& extraHeaders,
    const base::android::JavaRefOrBare<jobject>& postData,
    JniIntWrapper disposition,
    jboolean hasParent,
    jboolean isRendererInitiated) {
  CHECK_CLAZZ(env, obj.obj(),
      Tab_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, Tab_clazz(env),
      "openNewTab",

"("
"Ljava/lang/String;"
"Ljava/lang/String;"
"Lorg/chromium/content_public/common/ResourceRequestBody;"
"I"
"Z"
"Z"
")"
"V",
      &g_Tab_openNewTab);

     env->CallVoidMethod(obj.obj(),
          method_id, url.obj(), extraHeaders.obj(), postData.obj(),
              as_jint(disposition), hasParent, isRendererInitiated);
  jni_generator::CheckException(env);

}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsTab[] = {
    { "nativeInit",
"("
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_tab_Tab_nativeInit)
    },
    { "nativeDestroy",
"("
"J"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_tab_Tab_nativeDestroy)
    },
    { "nativeInitWebContents",
"("
"J"
"Z"
"Lorg/chromium/content_public/browser/WebContents;"
"Lorg/chromium/chrome/browser/tab/TabWebContentsDelegateAndroid;"
"Lorg/chromium/chrome/browser/contextmenu/ContextMenuPopulator;"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_tab_Tab_nativeInitWebContents)
    },
    { "nativeUpdateDelegates",
"("
"J"
"Lorg/chromium/chrome/browser/tab/TabWebContentsDelegateAndroid;"
"Lorg/chromium/chrome/browser/contextmenu/ContextMenuPopulator;"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_tab_Tab_nativeUpdateDelegates)
    },
    { "nativeDestroyWebContents",
"("
"J"
"Z"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_tab_Tab_nativeDestroyWebContents)
    },
    { "nativeGetProfileAndroid",
"("
"J"
")"
"Lorg/chromium/chrome/browser/profiles/Profile;",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_tab_Tab_nativeGetProfileAndroid)
    },
    { "nativeLoadUrl",
"("
"J"
"Ljava/lang/String;"
"Ljava/lang/String;"
"Lorg/chromium/content_public/common/ResourceRequestBody;"
"I"
"Ljava/lang/String;"
"I"
"Z"
"Z"
"J"
"Z"
")"
"I",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_tab_Tab_nativeLoadUrl)
    },
    { "nativeSetActiveNavigationEntryTitleForUrl",
"("
"J"
"Ljava/lang/String;"
"Ljava/lang/String;"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_tab_Tab_nativeSetActiveNavigationEntryTitleForUrl)
    },
    { "nativePrint",
"("
"J"
")"
"Z",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_tab_Tab_nativePrint)
    },
    { "nativeGetFavicon",
"("
"J"
")"
"Landroid/graphics/Bitmap;",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_tab_Tab_nativeGetFavicon)
    },
    { "nativeCreateHistoricalTab",
"("
"J"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_tab_Tab_nativeCreateHistoricalTab)
    },
    { "nativeUpdateTopControlsState",
"("
"J"
"I"
"I"
"Z"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_tab_Tab_nativeUpdateTopControlsState)
    },
    { "nativeLoadOriginalImage",
"("
"J"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_tab_Tab_nativeLoadOriginalImage)
    },
    { "nativeGetBookmarkId",
"("
"J"
"Z"
")"
"J",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_tab_Tab_nativeGetBookmarkId)
    },
    { "nativeIsOfflinePage",
"("
"J"
")"
"Z",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_tab_Tab_nativeIsOfflinePage)
    },
    { "nativeGetOfflinePage",
"("
"J"
")"
"Lorg/chromium/chrome/browser/offlinepages/OfflinePageItem;",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_tab_Tab_nativeGetOfflinePage)
    },
    { "nativeSetInterceptNavigationDelegate",
"("
"J"
"Lorg/chromium/components/navigation_interception/InterceptNavigationDelegate;"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_tab_Tab_nativeSetInterceptNavigationDelegate)
    },
    { "nativeAttachToTabContentManager",
"("
"J"
"Lorg/chromium/chrome/browser/compositor/layouts/content/TabContentManager;"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_tab_Tab_nativeAttachToTabContentManager)
    },
    { "nativeAttachOverlayWebContents",
"("
"J"
"Lorg/chromium/content_public/browser/WebContents;"
"Z"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_tab_Tab_nativeAttachOverlayWebContents)
    },
    { "nativeDetachOverlayWebContents",
"("
"J"
"Lorg/chromium/content_public/browser/WebContents;"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_tab_Tab_nativeDetachOverlayWebContents)
    },
    { "nativeHasPrerenderedUrl",
"("
"J"
"Ljava/lang/String;"
")"
"Z",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_tab_Tab_nativeHasPrerenderedUrl)
    },
};

static bool RegisterNativesImpl(JNIEnv* env) {
  if (base::android::IsManualJniRegistrationDisabled()) return true;

  const int kMethodsTabSize = arraysize(kMethodsTab);

  if (env->RegisterNatives(Tab_clazz(env),
                           kMethodsTab,
                           kMethodsTabSize) < 0) {
    jni_generator::HandleRegistrationError(
        env, Tab_clazz(env), __FILE__);
    return false;
  }

  return true;
}

#endif  // org_chromium_chrome_browser_tab_Tab_JNI

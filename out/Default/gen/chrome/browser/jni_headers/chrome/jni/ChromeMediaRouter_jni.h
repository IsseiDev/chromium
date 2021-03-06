// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/media/router/ChromeMediaRouter

#ifndef org_chromium_chrome_browser_media_router_ChromeMediaRouter_JNI
#define org_chromium_chrome_browser_media_router_ChromeMediaRouter_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kChromeMediaRouterClassPath[] =
    "org/chromium/chrome/browser/media/router/ChromeMediaRouter";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_ChromeMediaRouter_clazz __attribute__((unused)) = 0;
#define ChromeMediaRouter_clazz(env) base::android::LazyGetClass(env, kChromeMediaRouterClassPath, &g_ChromeMediaRouter_clazz)

}  // namespace

namespace media_router {

// Step 2: method stubs.
extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_media_router_ChromeMediaRouter_nativeOnSinksReceived(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeMediaRouterAndroid,
    jstring sourceUrn,
    jint count) {
  MediaRouterAndroid* native =
      reinterpret_cast<MediaRouterAndroid*>(nativeMediaRouterAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnSinksReceived");
  return native->OnSinksReceived(env, base::android::JavaParamRef<jobject>(env,
      jcaller), base::android::JavaParamRef<jstring>(env, sourceUrn), count);
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_media_router_ChromeMediaRouter_nativeOnRouteCreated(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeMediaRouterAndroid,
    jstring mediaRouteId,
    jstring mediaSinkId,
    jint createRouteRequestId,
    jboolean wasLaunched) {
  MediaRouterAndroid* native =
      reinterpret_cast<MediaRouterAndroid*>(nativeMediaRouterAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnRouteCreated");
  return native->OnRouteCreated(env, base::android::JavaParamRef<jobject>(env,
      jcaller), base::android::JavaParamRef<jstring>(env, mediaRouteId),
      base::android::JavaParamRef<jstring>(env, mediaSinkId),
      createRouteRequestId, wasLaunched);
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_media_router_ChromeMediaRouter_nativeOnRouteRequestError(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeMediaRouterAndroid,
    jstring errorText,
    jint createRouteRequestId) {
  MediaRouterAndroid* native =
      reinterpret_cast<MediaRouterAndroid*>(nativeMediaRouterAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnRouteRequestError");
  return native->OnRouteRequestError(env,
      base::android::JavaParamRef<jobject>(env, jcaller),
      base::android::JavaParamRef<jstring>(env, errorText),
      createRouteRequestId);
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_media_router_ChromeMediaRouter_nativeOnRouteClosed(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeMediaRouterAndroid,
    jstring mediaRouteId) {
  MediaRouterAndroid* native =
      reinterpret_cast<MediaRouterAndroid*>(nativeMediaRouterAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnRouteClosed");
  return native->OnRouteClosed(env, base::android::JavaParamRef<jobject>(env,
      jcaller), base::android::JavaParamRef<jstring>(env, mediaRouteId));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_media_router_ChromeMediaRouter_nativeOnRouteClosedWithError(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeMediaRouterAndroid,
    jstring mediaRouteId,
    jstring message) {
  MediaRouterAndroid* native =
      reinterpret_cast<MediaRouterAndroid*>(nativeMediaRouterAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnRouteClosedWithError");
  return native->OnRouteClosedWithError(env,
      base::android::JavaParamRef<jobject>(env, jcaller),
      base::android::JavaParamRef<jstring>(env, mediaRouteId),
      base::android::JavaParamRef<jstring>(env, message));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_media_router_ChromeMediaRouter_nativeOnMessageSentResult(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeMediaRouterAndroid,
    jboolean success,
    jint callbackId) {
  MediaRouterAndroid* native =
      reinterpret_cast<MediaRouterAndroid*>(nativeMediaRouterAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnMessageSentResult");
  return native->OnMessageSentResult(env,
      base::android::JavaParamRef<jobject>(env, jcaller), success, callbackId);
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_media_router_ChromeMediaRouter_nativeOnMessage(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeMediaRouterAndroid,
    jstring mediaRouteId,
    jstring message) {
  MediaRouterAndroid* native =
      reinterpret_cast<MediaRouterAndroid*>(nativeMediaRouterAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnMessage");
  return native->OnMessage(env, base::android::JavaParamRef<jobject>(env,
      jcaller), base::android::JavaParamRef<jstring>(env, mediaRouteId),
      base::android::JavaParamRef<jstring>(env, message));
}

static base::subtle::AtomicWord g_ChromeMediaRouter_create = 0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_ChromeMediaRouter_create(JNIEnv* env, jlong nativeMediaRouterAndroid,
    const base::android::JavaRefOrBare<jobject>& applicationContext) {
  CHECK_CLAZZ(env, ChromeMediaRouter_clazz(env),
      ChromeMediaRouter_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, ChromeMediaRouter_clazz(env),
      "create",

"("
"J"
"Landroid/content/Context;"
")"
"Lorg/chromium/chrome/browser/media/router/ChromeMediaRouter;",
      &g_ChromeMediaRouter_create);

  jobject ret =
      env->CallStaticObjectMethod(ChromeMediaRouter_clazz(env),
          method_id, nativeMediaRouterAndroid, applicationContext.obj());
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_ChromeMediaRouter_startObservingMediaSinks =
    0;
static jboolean Java_ChromeMediaRouter_startObservingMediaSinks(JNIEnv* env,
    const base::android::JavaRefOrBare<jobject>& obj, const
    base::android::JavaRefOrBare<jstring>& sourceId) {
  CHECK_CLAZZ(env, obj.obj(),
      ChromeMediaRouter_clazz(env), false);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, ChromeMediaRouter_clazz(env),
      "startObservingMediaSinks",

"("
"Ljava/lang/String;"
")"
"Z",
      &g_ChromeMediaRouter_startObservingMediaSinks);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id, sourceId.obj());
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_ChromeMediaRouter_stopObservingMediaSinks = 0;
static void Java_ChromeMediaRouter_stopObservingMediaSinks(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, const
    base::android::JavaRefOrBare<jstring>& sourceId) {
  CHECK_CLAZZ(env, obj.obj(),
      ChromeMediaRouter_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, ChromeMediaRouter_clazz(env),
      "stopObservingMediaSinks",

"("
"Ljava/lang/String;"
")"
"V",
      &g_ChromeMediaRouter_stopObservingMediaSinks);

     env->CallVoidMethod(obj.obj(),
          method_id, sourceId.obj());
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_ChromeMediaRouter_getSinkUrn = 0;
static base::android::ScopedJavaLocalRef<jstring>
    Java_ChromeMediaRouter_getSinkUrn(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, const
    base::android::JavaRefOrBare<jstring>& sourceUrn,
    JniIntWrapper index) {
  CHECK_CLAZZ(env, obj.obj(),
      ChromeMediaRouter_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, ChromeMediaRouter_clazz(env),
      "getSinkUrn",

"("
"Ljava/lang/String;"
"I"
")"
"Ljava/lang/String;",
      &g_ChromeMediaRouter_getSinkUrn);

  jstring ret =
      static_cast<jstring>(env->CallObjectMethod(obj.obj(),
          method_id, sourceUrn.obj(), as_jint(index)));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static base::subtle::AtomicWord g_ChromeMediaRouter_getSinkName = 0;
static base::android::ScopedJavaLocalRef<jstring>
    Java_ChromeMediaRouter_getSinkName(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, const
    base::android::JavaRefOrBare<jstring>& sourceUrn,
    JniIntWrapper index) {
  CHECK_CLAZZ(env, obj.obj(),
      ChromeMediaRouter_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, ChromeMediaRouter_clazz(env),
      "getSinkName",

"("
"Ljava/lang/String;"
"I"
")"
"Ljava/lang/String;",
      &g_ChromeMediaRouter_getSinkName);

  jstring ret =
      static_cast<jstring>(env->CallObjectMethod(obj.obj(),
          method_id, sourceUrn.obj(), as_jint(index)));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static base::subtle::AtomicWord g_ChromeMediaRouter_createRoute = 0;
static void Java_ChromeMediaRouter_createRoute(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, const
    base::android::JavaRefOrBare<jstring>& sourceId,
    const base::android::JavaRefOrBare<jstring>& sinkId,
    const base::android::JavaRefOrBare<jstring>& presentationId,
    const base::android::JavaRefOrBare<jstring>& origin,
    JniIntWrapper tabId,
    jboolean isIncognito,
    JniIntWrapper requestId) {
  CHECK_CLAZZ(env, obj.obj(),
      ChromeMediaRouter_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, ChromeMediaRouter_clazz(env),
      "createRoute",

"("
"Ljava/lang/String;"
"Ljava/lang/String;"
"Ljava/lang/String;"
"Ljava/lang/String;"
"I"
"Z"
"I"
")"
"V",
      &g_ChromeMediaRouter_createRoute);

     env->CallVoidMethod(obj.obj(),
          method_id, sourceId.obj(), sinkId.obj(), presentationId.obj(),
              origin.obj(), as_jint(tabId), isIncognito, as_jint(requestId));
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_ChromeMediaRouter_joinRoute = 0;
static void Java_ChromeMediaRouter_joinRoute(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, const
    base::android::JavaRefOrBare<jstring>& sourceId,
    const base::android::JavaRefOrBare<jstring>& presentationId,
    const base::android::JavaRefOrBare<jstring>& origin,
    JniIntWrapper tabId,
    JniIntWrapper requestId) {
  CHECK_CLAZZ(env, obj.obj(),
      ChromeMediaRouter_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, ChromeMediaRouter_clazz(env),
      "joinRoute",

"("
"Ljava/lang/String;"
"Ljava/lang/String;"
"Ljava/lang/String;"
"I"
"I"
")"
"V",
      &g_ChromeMediaRouter_joinRoute);

     env->CallVoidMethod(obj.obj(),
          method_id, sourceId.obj(), presentationId.obj(), origin.obj(),
              as_jint(tabId), as_jint(requestId));
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_ChromeMediaRouter_closeRoute = 0;
static void Java_ChromeMediaRouter_closeRoute(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, const
    base::android::JavaRefOrBare<jstring>& routeId) {
  CHECK_CLAZZ(env, obj.obj(),
      ChromeMediaRouter_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, ChromeMediaRouter_clazz(env),
      "closeRoute",

"("
"Ljava/lang/String;"
")"
"V",
      &g_ChromeMediaRouter_closeRoute);

     env->CallVoidMethod(obj.obj(),
          method_id, routeId.obj());
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_ChromeMediaRouter_detachRoute = 0;
static void Java_ChromeMediaRouter_detachRoute(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, const
    base::android::JavaRefOrBare<jstring>& routeId) {
  CHECK_CLAZZ(env, obj.obj(),
      ChromeMediaRouter_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, ChromeMediaRouter_clazz(env),
      "detachRoute",

"("
"Ljava/lang/String;"
")"
"V",
      &g_ChromeMediaRouter_detachRoute);

     env->CallVoidMethod(obj.obj(),
          method_id, routeId.obj());
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_ChromeMediaRouter_sendStringMessage = 0;
static void Java_ChromeMediaRouter_sendStringMessage(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, const
    base::android::JavaRefOrBare<jstring>& routeId,
    const base::android::JavaRefOrBare<jstring>& message,
    JniIntWrapper callbackId) {
  CHECK_CLAZZ(env, obj.obj(),
      ChromeMediaRouter_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, ChromeMediaRouter_clazz(env),
      "sendStringMessage",

"("
"Ljava/lang/String;"
"Ljava/lang/String;"
"I"
")"
"V",
      &g_ChromeMediaRouter_sendStringMessage);

     env->CallVoidMethod(obj.obj(),
          method_id, routeId.obj(), message.obj(), as_jint(callbackId));
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_ChromeMediaRouter_sendBinaryMessage = 0;
static void Java_ChromeMediaRouter_sendBinaryMessage(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, const
    base::android::JavaRefOrBare<jstring>& routeId,
    const base::android::JavaRefOrBare<jbyteArray>& data,
    JniIntWrapper callbackId) {
  CHECK_CLAZZ(env, obj.obj(),
      ChromeMediaRouter_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, ChromeMediaRouter_clazz(env),
      "sendBinaryMessage",

"("
"Ljava/lang/String;"
"[B"
"I"
")"
"V",
      &g_ChromeMediaRouter_sendBinaryMessage);

     env->CallVoidMethod(obj.obj(),
          method_id, routeId.obj(), data.obj(), as_jint(callbackId));
  jni_generator::CheckException(env);

}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsChromeMediaRouter[] = {
    { "nativeOnSinksReceived",
"("
"J"
"Ljava/lang/String;"
"I"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_media_router_ChromeMediaRouter_nativeOnSinksReceived)
    },
    { "nativeOnRouteCreated",
"("
"J"
"Ljava/lang/String;"
"Ljava/lang/String;"
"I"
"Z"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_media_router_ChromeMediaRouter_nativeOnRouteCreated)
    },
    { "nativeOnRouteRequestError",
"("
"J"
"Ljava/lang/String;"
"I"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_media_router_ChromeMediaRouter_nativeOnRouteRequestError)
    },
    { "nativeOnRouteClosed",
"("
"J"
"Ljava/lang/String;"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_media_router_ChromeMediaRouter_nativeOnRouteClosed)
    },
    { "nativeOnRouteClosedWithError",
"("
"J"
"Ljava/lang/String;"
"Ljava/lang/String;"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_media_router_ChromeMediaRouter_nativeOnRouteClosedWithError)
    },
    { "nativeOnMessageSentResult",
"("
"J"
"Z"
"I"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_media_router_ChromeMediaRouter_nativeOnMessageSentResult)
    },
    { "nativeOnMessage",
"("
"J"
"Ljava/lang/String;"
"Ljava/lang/String;"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_media_router_ChromeMediaRouter_nativeOnMessage)
    },
};

static bool RegisterNativesImpl(JNIEnv* env) {
  if (base::android::IsManualJniRegistrationDisabled()) return true;

  const int kMethodsChromeMediaRouterSize =
      arraysize(kMethodsChromeMediaRouter);

  if (env->RegisterNatives(ChromeMediaRouter_clazz(env),
                           kMethodsChromeMediaRouter,
                           kMethodsChromeMediaRouterSize) < 0) {
    jni_generator::HandleRegistrationError(
        env, ChromeMediaRouter_clazz(env), __FILE__);
    return false;
  }

  return true;
}

}  // namespace media_router

#endif  // org_chromium_chrome_browser_media_router_ChromeMediaRouter_JNI

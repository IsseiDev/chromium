// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/media/remote/RemoteMediaPlayerBridge

#ifndef org_chromium_chrome_browser_media_remote_RemoteMediaPlayerBridge_JNI
#define org_chromium_chrome_browser_media_remote_RemoteMediaPlayerBridge_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kRemoteMediaPlayerBridgeClassPath[] =
    "org/chromium/chrome/browser/media/remote/RemoteMediaPlayerBridge";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_RemoteMediaPlayerBridge_clazz __attribute__((unused))
    = 0;
#define RemoteMediaPlayerBridge_clazz(env) base::android::LazyGetClass(env, kRemoteMediaPlayerBridgeClassPath, &g_RemoteMediaPlayerBridge_clazz)

}  // namespace

namespace remote_media {

// Step 2: method stubs.
extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_media_remote_RemoteMediaPlayerBridge_nativeOnPlaying(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeRemoteMediaPlayerBridge) {
  RemoteMediaPlayerBridge* native =
      reinterpret_cast<RemoteMediaPlayerBridge*>(nativeRemoteMediaPlayerBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnPlaying");
  return native->OnPlaying(env, base::android::JavaParamRef<jobject>(env,
      jcaller));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_media_remote_RemoteMediaPlayerBridge_nativeOnPaused(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeRemoteMediaPlayerBridge) {
  RemoteMediaPlayerBridge* native =
      reinterpret_cast<RemoteMediaPlayerBridge*>(nativeRemoteMediaPlayerBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnPaused");
  return native->OnPaused(env, base::android::JavaParamRef<jobject>(env,
      jcaller));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_media_remote_RemoteMediaPlayerBridge_nativeOnRouteUnselected(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeRemoteMediaPlayerBridge) {
  RemoteMediaPlayerBridge* native =
      reinterpret_cast<RemoteMediaPlayerBridge*>(nativeRemoteMediaPlayerBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnRouteUnselected");
  return native->OnRouteUnselected(env,
      base::android::JavaParamRef<jobject>(env, jcaller));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_media_remote_RemoteMediaPlayerBridge_nativeOnPlaybackFinished(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeRemoteMediaPlayerBridge) {
  RemoteMediaPlayerBridge* native =
      reinterpret_cast<RemoteMediaPlayerBridge*>(nativeRemoteMediaPlayerBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnPlaybackFinished");
  return native->OnPlaybackFinished(env,
      base::android::JavaParamRef<jobject>(env, jcaller));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_media_remote_RemoteMediaPlayerBridge_nativeOnRouteAvailabilityChanged(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeRemoteMediaPlayerBridge,
    jboolean available) {
  RemoteMediaPlayerBridge* native =
      reinterpret_cast<RemoteMediaPlayerBridge*>(nativeRemoteMediaPlayerBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnRouteAvailabilityChanged");
  return native->OnRouteAvailabilityChanged(env,
      base::android::JavaParamRef<jobject>(env, jcaller), available);
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_media_remote_RemoteMediaPlayerBridge_nativeOnCancelledRemotePlaybackRequest(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeRemoteMediaPlayerBridge) {
  RemoteMediaPlayerBridge* native =
      reinterpret_cast<RemoteMediaPlayerBridge*>(nativeRemoteMediaPlayerBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnCancelledRemotePlaybackRequest");
  return native->OnCancelledRemotePlaybackRequest(env,
      base::android::JavaParamRef<jobject>(env, jcaller));
}

extern "C" __attribute__((visibility("default")))
jstring
    Java_org_chromium_chrome_browser_media_remote_RemoteMediaPlayerBridge_nativeGetTitle(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeRemoteMediaPlayerBridge) {
  RemoteMediaPlayerBridge* native =
      reinterpret_cast<RemoteMediaPlayerBridge*>(nativeRemoteMediaPlayerBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "GetTitle", NULL);
  return native->GetTitle(env, base::android::JavaParamRef<jobject>(env,
      jcaller)).Release();
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_media_remote_RemoteMediaPlayerBridge_nativePauseLocal(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeRemoteMediaPlayerBridge) {
  RemoteMediaPlayerBridge* native =
      reinterpret_cast<RemoteMediaPlayerBridge*>(nativeRemoteMediaPlayerBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "PauseLocal");
  return native->PauseLocal(env, base::android::JavaParamRef<jobject>(env,
      jcaller));
}

extern "C" __attribute__((visibility("default")))
jint
    Java_org_chromium_chrome_browser_media_remote_RemoteMediaPlayerBridge_nativeGetLocalPosition(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeRemoteMediaPlayerBridge) {
  RemoteMediaPlayerBridge* native =
      reinterpret_cast<RemoteMediaPlayerBridge*>(nativeRemoteMediaPlayerBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "GetLocalPosition", 0);
  return native->GetLocalPosition(env, base::android::JavaParamRef<jobject>(env,
      jcaller));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_media_remote_RemoteMediaPlayerBridge_nativeOnCastStarting(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeRemoteMediaPlayerBridge,
    jstring castingMessage) {
  RemoteMediaPlayerBridge* native =
      reinterpret_cast<RemoteMediaPlayerBridge*>(nativeRemoteMediaPlayerBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnCastStarting");
  return native->OnCastStarting(env, base::android::JavaParamRef<jobject>(env,
      jcaller), base::android::JavaParamRef<jstring>(env, castingMessage));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_media_remote_RemoteMediaPlayerBridge_nativeOnCastStopping(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeRemoteMediaPlayerBridge) {
  RemoteMediaPlayerBridge* native =
      reinterpret_cast<RemoteMediaPlayerBridge*>(nativeRemoteMediaPlayerBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnCastStopping");
  return native->OnCastStopping(env, base::android::JavaParamRef<jobject>(env,
      jcaller));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_media_remote_RemoteMediaPlayerBridge_nativeOnError(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeRemoteMediaPlayerBridge) {
  RemoteMediaPlayerBridge* native =
      reinterpret_cast<RemoteMediaPlayerBridge*>(nativeRemoteMediaPlayerBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnError");
  return native->OnError(env, base::android::JavaParamRef<jobject>(env,
      jcaller));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_media_remote_RemoteMediaPlayerBridge_nativeOnSeekCompleted(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeRemoteMediaPlayerBridge) {
  RemoteMediaPlayerBridge* native =
      reinterpret_cast<RemoteMediaPlayerBridge*>(nativeRemoteMediaPlayerBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnSeekCompleted");
  return native->OnSeekCompleted(env, base::android::JavaParamRef<jobject>(env,
      jcaller));
}

static base::subtle::AtomicWord g_RemoteMediaPlayerBridge_create = 0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_RemoteMediaPlayerBridge_create(JNIEnv* env, jlong
    nativeRemoteMediaPlayerBridge,
    const base::android::JavaRefOrBare<jstring>& sourceUrl,
    const base::android::JavaRefOrBare<jstring>& frameUrl,
    const base::android::JavaRefOrBare<jstring>& userAgent) {
  CHECK_CLAZZ(env, RemoteMediaPlayerBridge_clazz(env),
      RemoteMediaPlayerBridge_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, RemoteMediaPlayerBridge_clazz(env),
      "create",

"("
"J"
"Ljava/lang/String;"
"Ljava/lang/String;"
"Ljava/lang/String;"
")"
"Lorg/chromium/chrome/browser/media/remote/RemoteMediaPlayerBridge;",
      &g_RemoteMediaPlayerBridge_create);

  jobject ret =
      env->CallStaticObjectMethod(RemoteMediaPlayerBridge_clazz(env),
          method_id, nativeRemoteMediaPlayerBridge, sourceUrl.obj(),
              frameUrl.obj(), userAgent.obj());
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_RemoteMediaPlayerBridge_requestRemotePlayback
    = 0;
static void Java_RemoteMediaPlayerBridge_requestRemotePlayback(JNIEnv* env,
    const base::android::JavaRefOrBare<jobject>& obj, jlong startPositionMillis)
    {
  CHECK_CLAZZ(env, obj.obj(),
      RemoteMediaPlayerBridge_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, RemoteMediaPlayerBridge_clazz(env),
      "requestRemotePlayback",

"("
"J"
")"
"V",
      &g_RemoteMediaPlayerBridge_requestRemotePlayback);

     env->CallVoidMethod(obj.obj(),
          method_id, startPositionMillis);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord
    g_RemoteMediaPlayerBridge_requestRemotePlaybackControl = 0;
static void Java_RemoteMediaPlayerBridge_requestRemotePlaybackControl(JNIEnv*
    env, const base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      RemoteMediaPlayerBridge_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, RemoteMediaPlayerBridge_clazz(env),
      "requestRemotePlaybackControl",

"("
")"
"V",
      &g_RemoteMediaPlayerBridge_requestRemotePlaybackControl);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_RemoteMediaPlayerBridge_setNativePlayer = 0;
static void Java_RemoteMediaPlayerBridge_setNativePlayer(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      RemoteMediaPlayerBridge_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, RemoteMediaPlayerBridge_clazz(env),
      "setNativePlayer",

"("
")"
"V",
      &g_RemoteMediaPlayerBridge_setNativePlayer);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_RemoteMediaPlayerBridge_onPlayerCreated = 0;
static void Java_RemoteMediaPlayerBridge_onPlayerCreated(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      RemoteMediaPlayerBridge_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, RemoteMediaPlayerBridge_clazz(env),
      "onPlayerCreated",

"("
")"
"V",
      &g_RemoteMediaPlayerBridge_onPlayerCreated);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_RemoteMediaPlayerBridge_onPlayerDestroyed = 0;
static void Java_RemoteMediaPlayerBridge_onPlayerDestroyed(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      RemoteMediaPlayerBridge_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, RemoteMediaPlayerBridge_clazz(env),
      "onPlayerDestroyed",

"("
")"
"V",
      &g_RemoteMediaPlayerBridge_onPlayerDestroyed);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_RemoteMediaPlayerBridge_setPosterBitmap = 0;
static void Java_RemoteMediaPlayerBridge_setPosterBitmap(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, const
    base::android::JavaRefOrBare<jobject>& bitmap) {
  CHECK_CLAZZ(env, obj.obj(),
      RemoteMediaPlayerBridge_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, RemoteMediaPlayerBridge_clazz(env),
      "setPosterBitmap",

"("
"Landroid/graphics/Bitmap;"
")"
"V",
      &g_RemoteMediaPlayerBridge_setPosterBitmap);

     env->CallVoidMethod(obj.obj(),
          method_id, bitmap.obj());
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_RemoteMediaPlayerBridge_isPlaying = 0;
static jboolean Java_RemoteMediaPlayerBridge_isPlaying(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      RemoteMediaPlayerBridge_clazz(env), false);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, RemoteMediaPlayerBridge_clazz(env),
      "isPlaying",

"("
")"
"Z",
      &g_RemoteMediaPlayerBridge_isPlaying);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_RemoteMediaPlayerBridge_getCurrentPosition =
    0;
static jint Java_RemoteMediaPlayerBridge_getCurrentPosition(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      RemoteMediaPlayerBridge_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, RemoteMediaPlayerBridge_clazz(env),
      "getCurrentPosition",

"("
")"
"I",
      &g_RemoteMediaPlayerBridge_getCurrentPosition);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_RemoteMediaPlayerBridge_getDuration = 0;
static jint Java_RemoteMediaPlayerBridge_getDuration(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      RemoteMediaPlayerBridge_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, RemoteMediaPlayerBridge_clazz(env),
      "getDuration",

"("
")"
"I",
      &g_RemoteMediaPlayerBridge_getDuration);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_RemoteMediaPlayerBridge_release = 0;
static void Java_RemoteMediaPlayerBridge_release(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      RemoteMediaPlayerBridge_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, RemoteMediaPlayerBridge_clazz(env),
      "release",

"("
")"
"V",
      &g_RemoteMediaPlayerBridge_release);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_RemoteMediaPlayerBridge_setVolume = 0;
static void Java_RemoteMediaPlayerBridge_setVolume(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, jdouble volume) {
  CHECK_CLAZZ(env, obj.obj(),
      RemoteMediaPlayerBridge_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, RemoteMediaPlayerBridge_clazz(env),
      "setVolume",

"("
"D"
")"
"V",
      &g_RemoteMediaPlayerBridge_setVolume);

     env->CallVoidMethod(obj.obj(),
          method_id, volume);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_RemoteMediaPlayerBridge_start = 0;
static void Java_RemoteMediaPlayerBridge_start(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      RemoteMediaPlayerBridge_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, RemoteMediaPlayerBridge_clazz(env),
      "start",

"("
")"
"V",
      &g_RemoteMediaPlayerBridge_start);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_RemoteMediaPlayerBridge_pause = 0;
static void Java_RemoteMediaPlayerBridge_pause(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      RemoteMediaPlayerBridge_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, RemoteMediaPlayerBridge_clazz(env),
      "pause",

"("
")"
"V",
      &g_RemoteMediaPlayerBridge_pause);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_RemoteMediaPlayerBridge_seekTo = 0;
static void Java_RemoteMediaPlayerBridge_seekTo(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, JniIntWrapper msec) {
  CHECK_CLAZZ(env, obj.obj(),
      RemoteMediaPlayerBridge_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, RemoteMediaPlayerBridge_clazz(env),
      "seekTo",

"("
"I"
")"
"V",
      &g_RemoteMediaPlayerBridge_seekTo);

     env->CallVoidMethod(obj.obj(),
          method_id, as_jint(msec));
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_RemoteMediaPlayerBridge_destroy = 0;
static void Java_RemoteMediaPlayerBridge_destroy(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      RemoteMediaPlayerBridge_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, RemoteMediaPlayerBridge_clazz(env),
      "destroy",

"("
")"
"V",
      &g_RemoteMediaPlayerBridge_destroy);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_RemoteMediaPlayerBridge_setCookies = 0;
static void Java_RemoteMediaPlayerBridge_setCookies(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, const
    base::android::JavaRefOrBare<jstring>& cookies) {
  CHECK_CLAZZ(env, obj.obj(),
      RemoteMediaPlayerBridge_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, RemoteMediaPlayerBridge_clazz(env),
      "setCookies",

"("
"Ljava/lang/String;"
")"
"V",
      &g_RemoteMediaPlayerBridge_setCookies);

     env->CallVoidMethod(obj.obj(),
          method_id, cookies.obj());
  jni_generator::CheckException(env);

}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsRemoteMediaPlayerBridge[] = {
    { "nativeOnPlaying",
"("
"J"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_media_remote_RemoteMediaPlayerBridge_nativeOnPlaying)
    },
    { "nativeOnPaused",
"("
"J"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_media_remote_RemoteMediaPlayerBridge_nativeOnPaused)
    },
    { "nativeOnRouteUnselected",
"("
"J"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_media_remote_RemoteMediaPlayerBridge_nativeOnRouteUnselected)
    },
    { "nativeOnPlaybackFinished",
"("
"J"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_media_remote_RemoteMediaPlayerBridge_nativeOnPlaybackFinished)
    },
    { "nativeOnRouteAvailabilityChanged",
"("
"J"
"Z"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_media_remote_RemoteMediaPlayerBridge_nativeOnRouteAvailabilityChanged)
    },
    { "nativeOnCancelledRemotePlaybackRequest",
"("
"J"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_media_remote_RemoteMediaPlayerBridge_nativeOnCancelledRemotePlaybackRequest)
    },
    { "nativeGetTitle",
"("
"J"
")"
"Ljava/lang/String;",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_media_remote_RemoteMediaPlayerBridge_nativeGetTitle)
    },
    { "nativePauseLocal",
"("
"J"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_media_remote_RemoteMediaPlayerBridge_nativePauseLocal)
    },
    { "nativeGetLocalPosition",
"("
"J"
")"
"I",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_media_remote_RemoteMediaPlayerBridge_nativeGetLocalPosition)
    },
    { "nativeOnCastStarting",
"("
"J"
"Ljava/lang/String;"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_media_remote_RemoteMediaPlayerBridge_nativeOnCastStarting)
    },
    { "nativeOnCastStopping",
"("
"J"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_media_remote_RemoteMediaPlayerBridge_nativeOnCastStopping)
    },
    { "nativeOnError",
"("
"J"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_media_remote_RemoteMediaPlayerBridge_nativeOnError)
    },
    { "nativeOnSeekCompleted",
"("
"J"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_media_remote_RemoteMediaPlayerBridge_nativeOnSeekCompleted)
    },
};

static bool RegisterNativesImpl(JNIEnv* env) {
  if (base::android::IsManualJniRegistrationDisabled()) return true;

  const int kMethodsRemoteMediaPlayerBridgeSize =
      arraysize(kMethodsRemoteMediaPlayerBridge);

  if (env->RegisterNatives(RemoteMediaPlayerBridge_clazz(env),
                           kMethodsRemoteMediaPlayerBridge,
                           kMethodsRemoteMediaPlayerBridgeSize) < 0) {
    jni_generator::HandleRegistrationError(
        env, RemoteMediaPlayerBridge_clazz(env), __FILE__);
    return false;
  }

  return true;
}

}  // namespace remote_media

#endif  // org_chromium_chrome_browser_media_remote_RemoteMediaPlayerBridge_JNI

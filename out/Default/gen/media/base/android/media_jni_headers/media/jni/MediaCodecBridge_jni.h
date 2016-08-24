// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/media/MediaCodecBridge

#ifndef org_chromium_media_MediaCodecBridge_JNI
#define org_chromium_media_MediaCodecBridge_JNI

#include <jni.h>

#include "../../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kDequeueOutputResultClassPath[] =
    "org/chromium/media/MediaCodecBridge$DequeueOutputResult";
const char kGetOutputFormatResultClassPath[] =
    "org/chromium/media/MediaCodecBridge$GetOutputFormatResult";
const char kMediaCodecBridgeClassPath[] = "org/chromium/media/MediaCodecBridge";
const char kDequeueInputResultClassPath[] =
    "org/chromium/media/MediaCodecBridge$DequeueInputResult";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_DequeueOutputResult_clazz __attribute__((unused)) =
    0;
#define DequeueOutputResult_clazz(env) base::android::LazyGetClass(env, kDequeueOutputResultClassPath, &g_DequeueOutputResult_clazz)
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_GetOutputFormatResult_clazz __attribute__((unused)) =
    0;
#define GetOutputFormatResult_clazz(env) base::android::LazyGetClass(env, kGetOutputFormatResultClassPath, &g_GetOutputFormatResult_clazz)
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_MediaCodecBridge_clazz __attribute__((unused)) = 0;
#define MediaCodecBridge_clazz(env) base::android::LazyGetClass(env, kMediaCodecBridgeClassPath, &g_MediaCodecBridge_clazz)
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_DequeueInputResult_clazz __attribute__((unused)) = 0;
#define DequeueInputResult_clazz(env) base::android::LazyGetClass(env, kDequeueInputResultClassPath, &g_DequeueInputResult_clazz)

}  // namespace

namespace media {

// Step 2: method stubs.

static base::subtle::AtomicWord g_DequeueInputResult_status = 0;
static jint Java_DequeueInputResult_status(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      DequeueInputResult_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, DequeueInputResult_clazz(env),
      "status",

"("
")"
"I",
      &g_DequeueInputResult_status);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_DequeueInputResult_index = 0;
static jint Java_DequeueInputResult_index(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      DequeueInputResult_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, DequeueInputResult_clazz(env),
      "index",

"("
")"
"I",
      &g_DequeueInputResult_index);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_DequeueOutputResult_status = 0;
static jint Java_DequeueOutputResult_status(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      DequeueOutputResult_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, DequeueOutputResult_clazz(env),
      "status",

"("
")"
"I",
      &g_DequeueOutputResult_status);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_DequeueOutputResult_index = 0;
static jint Java_DequeueOutputResult_index(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      DequeueOutputResult_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, DequeueOutputResult_clazz(env),
      "index",

"("
")"
"I",
      &g_DequeueOutputResult_index);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_DequeueOutputResult_flags = 0;
static jint Java_DequeueOutputResult_flags(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      DequeueOutputResult_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, DequeueOutputResult_clazz(env),
      "flags",

"("
")"
"I",
      &g_DequeueOutputResult_flags);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_DequeueOutputResult_offset = 0;
static jint Java_DequeueOutputResult_offset(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      DequeueOutputResult_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, DequeueOutputResult_clazz(env),
      "offset",

"("
")"
"I",
      &g_DequeueOutputResult_offset);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord
    g_DequeueOutputResult_presentationTimeMicroseconds = 0;
static jlong Java_DequeueOutputResult_presentationTimeMicroseconds(JNIEnv* env,
    const base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      DequeueOutputResult_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, DequeueOutputResult_clazz(env),
      "presentationTimeMicroseconds",

"("
")"
"J",
      &g_DequeueOutputResult_presentationTimeMicroseconds);

  jlong ret =
      env->CallLongMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_DequeueOutputResult_numBytes = 0;
static jint Java_DequeueOutputResult_numBytes(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      DequeueOutputResult_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, DequeueOutputResult_clazz(env),
      "numBytes",

"("
")"
"I",
      &g_DequeueOutputResult_numBytes);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_GetOutputFormatResult_status = 0;
static jint Java_GetOutputFormatResult_status(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      GetOutputFormatResult_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, GetOutputFormatResult_clazz(env),
      "status",

"("
")"
"I",
      &g_GetOutputFormatResult_status);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_GetOutputFormatResult_width = 0;
static jint Java_GetOutputFormatResult_width(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      GetOutputFormatResult_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, GetOutputFormatResult_clazz(env),
      "width",

"("
")"
"I",
      &g_GetOutputFormatResult_width);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_GetOutputFormatResult_height = 0;
static jint Java_GetOutputFormatResult_height(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      GetOutputFormatResult_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, GetOutputFormatResult_clazz(env),
      "height",

"("
")"
"I",
      &g_GetOutputFormatResult_height);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_GetOutputFormatResult_sampleRate = 0;
static jint Java_GetOutputFormatResult_sampleRate(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      GetOutputFormatResult_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, GetOutputFormatResult_clazz(env),
      "sampleRate",

"("
")"
"I",
      &g_GetOutputFormatResult_sampleRate);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_GetOutputFormatResult_channelCount = 0;
static jint Java_GetOutputFormatResult_channelCount(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      GetOutputFormatResult_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, GetOutputFormatResult_clazz(env),
      "channelCount",

"("
")"
"I",
      &g_GetOutputFormatResult_channelCount);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_MediaCodecBridge_create = 0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_MediaCodecBridge_create(JNIEnv* env, const
    base::android::JavaRefOrBare<jstring>& mime,
    jboolean isSecure,
    JniIntWrapper direction,
    jboolean requireSoftwareCodec) {
  CHECK_CLAZZ(env, MediaCodecBridge_clazz(env),
      MediaCodecBridge_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, MediaCodecBridge_clazz(env),
      "create",

"("
"Ljava/lang/String;"
"Z"
"I"
"Z"
")"
"Lorg/chromium/media/MediaCodecBridge;",
      &g_MediaCodecBridge_create);

  jobject ret =
      env->CallStaticObjectMethod(MediaCodecBridge_clazz(env),
          method_id, mime.obj(), isSecure, as_jint(direction),
              requireSoftwareCodec);
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_MediaCodecBridge_release = 0;
static void Java_MediaCodecBridge_release(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      MediaCodecBridge_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, MediaCodecBridge_clazz(env),
      "release",

"("
")"
"V",
      &g_MediaCodecBridge_release);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_MediaCodecBridge_start = 0;
static jboolean Java_MediaCodecBridge_start(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      MediaCodecBridge_clazz(env), false);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, MediaCodecBridge_clazz(env),
      "start",

"("
")"
"Z",
      &g_MediaCodecBridge_start);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_MediaCodecBridge_dequeueInputBuffer = 0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_MediaCodecBridge_dequeueInputBuffer(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, jlong timeoutUs) {
  CHECK_CLAZZ(env, obj.obj(),
      MediaCodecBridge_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, MediaCodecBridge_clazz(env),
      "dequeueInputBuffer",

"("
"J"
")"
"Lorg/chromium/media/MediaCodecBridge$DequeueInputResult;",
      &g_MediaCodecBridge_dequeueInputBuffer);

  jobject ret =
      env->CallObjectMethod(obj.obj(),
          method_id, timeoutUs);
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_MediaCodecBridge_flush = 0;
static jint Java_MediaCodecBridge_flush(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      MediaCodecBridge_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, MediaCodecBridge_clazz(env),
      "flush",

"("
")"
"I",
      &g_MediaCodecBridge_flush);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_MediaCodecBridge_stop = 0;
static void Java_MediaCodecBridge_stop(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      MediaCodecBridge_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, MediaCodecBridge_clazz(env),
      "stop",

"("
")"
"V",
      &g_MediaCodecBridge_stop);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_MediaCodecBridge_getName = 0;
static base::android::ScopedJavaLocalRef<jstring>
    Java_MediaCodecBridge_getName(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      MediaCodecBridge_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, MediaCodecBridge_clazz(env),
      "getName",

"("
")"
"Ljava/lang/String;",
      &g_MediaCodecBridge_getName);

  jstring ret =
      static_cast<jstring>(env->CallObjectMethod(obj.obj(),
          method_id));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static base::subtle::AtomicWord g_MediaCodecBridge_getOutputFormat = 0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_MediaCodecBridge_getOutputFormat(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      MediaCodecBridge_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, MediaCodecBridge_clazz(env),
      "getOutputFormat",

"("
")"
"Lorg/chromium/media/MediaCodecBridge$GetOutputFormatResult;",
      &g_MediaCodecBridge_getOutputFormat);

  jobject ret =
      env->CallObjectMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_MediaCodecBridge_getInputBuffer = 0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_MediaCodecBridge_getInputBuffer(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, JniIntWrapper index) {
  CHECK_CLAZZ(env, obj.obj(),
      MediaCodecBridge_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, MediaCodecBridge_clazz(env),
      "getInputBuffer",

"("
"I"
")"
"Ljava/nio/ByteBuffer;",
      &g_MediaCodecBridge_getInputBuffer);

  jobject ret =
      env->CallObjectMethod(obj.obj(),
          method_id, as_jint(index));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_MediaCodecBridge_getOutputBuffer = 0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_MediaCodecBridge_getOutputBuffer(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, JniIntWrapper index) {
  CHECK_CLAZZ(env, obj.obj(),
      MediaCodecBridge_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, MediaCodecBridge_clazz(env),
      "getOutputBuffer",

"("
"I"
")"
"Ljava/nio/ByteBuffer;",
      &g_MediaCodecBridge_getOutputBuffer);

  jobject ret =
      env->CallObjectMethod(obj.obj(),
          method_id, as_jint(index));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_MediaCodecBridge_queueInputBuffer = 0;
static jint Java_MediaCodecBridge_queueInputBuffer(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, JniIntWrapper index,
    JniIntWrapper offset,
    JniIntWrapper size,
    jlong presentationTimeUs,
    JniIntWrapper flags) {
  CHECK_CLAZZ(env, obj.obj(),
      MediaCodecBridge_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, MediaCodecBridge_clazz(env),
      "queueInputBuffer",

"("
"I"
"I"
"I"
"J"
"I"
")"
"I",
      &g_MediaCodecBridge_queueInputBuffer);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id, as_jint(index), as_jint(offset), as_jint(size),
              presentationTimeUs, as_jint(flags));
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_MediaCodecBridge_setVideoBitrate = 0;
static void Java_MediaCodecBridge_setVideoBitrate(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, JniIntWrapper bps) {
  CHECK_CLAZZ(env, obj.obj(),
      MediaCodecBridge_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, MediaCodecBridge_clazz(env),
      "setVideoBitrate",

"("
"I"
")"
"V",
      &g_MediaCodecBridge_setVideoBitrate);

     env->CallVoidMethod(obj.obj(),
          method_id, as_jint(bps));
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_MediaCodecBridge_requestKeyFrameSoon = 0;
static void Java_MediaCodecBridge_requestKeyFrameSoon(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      MediaCodecBridge_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, MediaCodecBridge_clazz(env),
      "requestKeyFrameSoon",

"("
")"
"V",
      &g_MediaCodecBridge_requestKeyFrameSoon);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_MediaCodecBridge_queueSecureInputBuffer = 0;
static jint Java_MediaCodecBridge_queueSecureInputBuffer(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, JniIntWrapper index,
    JniIntWrapper offset,
    const base::android::JavaRefOrBare<jbyteArray>& iv,
    const base::android::JavaRefOrBare<jbyteArray>& keyId,
    const base::android::JavaRefOrBare<jintArray>& numBytesOfClearData,
    const base::android::JavaRefOrBare<jintArray>& numBytesOfEncryptedData,
    JniIntWrapper numSubSamples,
    jlong presentationTimeUs) {
  CHECK_CLAZZ(env, obj.obj(),
      MediaCodecBridge_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, MediaCodecBridge_clazz(env),
      "queueSecureInputBuffer",

"("
"I"
"I"
"[B"
"[B"
"[I"
"[I"
"I"
"J"
")"
"I",
      &g_MediaCodecBridge_queueSecureInputBuffer);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id, as_jint(index), as_jint(offset), iv.obj(), keyId.obj(),
              numBytesOfClearData.obj(), numBytesOfEncryptedData.obj(),
              as_jint(numSubSamples), presentationTimeUs);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_MediaCodecBridge_releaseOutputBuffer = 0;
static void Java_MediaCodecBridge_releaseOutputBuffer(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, JniIntWrapper index,
    jboolean render) {
  CHECK_CLAZZ(env, obj.obj(),
      MediaCodecBridge_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, MediaCodecBridge_clazz(env),
      "releaseOutputBuffer",

"("
"I"
"Z"
")"
"V",
      &g_MediaCodecBridge_releaseOutputBuffer);

     env->CallVoidMethod(obj.obj(),
          method_id, as_jint(index), render);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_MediaCodecBridge_dequeueOutputBuffer = 0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_MediaCodecBridge_dequeueOutputBuffer(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, jlong timeoutUs) {
  CHECK_CLAZZ(env, obj.obj(),
      MediaCodecBridge_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, MediaCodecBridge_clazz(env),
      "dequeueOutputBuffer",

"("
"J"
")"
"Lorg/chromium/media/MediaCodecBridge$DequeueOutputResult;",
      &g_MediaCodecBridge_dequeueOutputBuffer);

  jobject ret =
      env->CallObjectMethod(obj.obj(),
          method_id, timeoutUs);
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_MediaCodecBridge_configureVideo = 0;
static jboolean Java_MediaCodecBridge_configureVideo(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, const
    base::android::JavaRefOrBare<jobject>& format,
    const base::android::JavaRefOrBare<jobject>& surface,
    const base::android::JavaRefOrBare<jobject>& crypto,
    JniIntWrapper flags,
    jboolean allowAdaptivePlayback) {
  CHECK_CLAZZ(env, obj.obj(),
      MediaCodecBridge_clazz(env), false);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, MediaCodecBridge_clazz(env),
      "configureVideo",

"("
"Landroid/media/MediaFormat;"
"Landroid/view/Surface;"
"Landroid/media/MediaCrypto;"
"I"
"Z"
")"
"Z",
      &g_MediaCodecBridge_configureVideo);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id, format.obj(), surface.obj(), crypto.obj(), as_jint(flags),
              allowAdaptivePlayback);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_MediaCodecBridge_createAudioFormat = 0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_MediaCodecBridge_createAudioFormat(JNIEnv* env, const
    base::android::JavaRefOrBare<jstring>& mime,
    JniIntWrapper sampleRate,
    JniIntWrapper channelCount) {
  CHECK_CLAZZ(env, MediaCodecBridge_clazz(env),
      MediaCodecBridge_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, MediaCodecBridge_clazz(env),
      "createAudioFormat",

"("
"Ljava/lang/String;"
"I"
"I"
")"
"Landroid/media/MediaFormat;",
      &g_MediaCodecBridge_createAudioFormat);

  jobject ret =
      env->CallStaticObjectMethod(MediaCodecBridge_clazz(env),
          method_id, mime.obj(), as_jint(sampleRate), as_jint(channelCount));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_MediaCodecBridge_createVideoDecoderFormat = 0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_MediaCodecBridge_createVideoDecoderFormat(JNIEnv* env, const
    base::android::JavaRefOrBare<jstring>& mime,
    JniIntWrapper width,
    JniIntWrapper height) {
  CHECK_CLAZZ(env, MediaCodecBridge_clazz(env),
      MediaCodecBridge_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, MediaCodecBridge_clazz(env),
      "createVideoDecoderFormat",

"("
"Ljava/lang/String;"
"I"
"I"
")"
"Landroid/media/MediaFormat;",
      &g_MediaCodecBridge_createVideoDecoderFormat);

  jobject ret =
      env->CallStaticObjectMethod(MediaCodecBridge_clazz(env),
          method_id, mime.obj(), as_jint(width), as_jint(height));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_MediaCodecBridge_createVideoEncoderFormat = 0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_MediaCodecBridge_createVideoEncoderFormat(JNIEnv* env, const
    base::android::JavaRefOrBare<jstring>& mime,
    JniIntWrapper width,
    JniIntWrapper height,
    JniIntWrapper bitRate,
    JniIntWrapper frameRate,
    JniIntWrapper iFrameInterval,
    JniIntWrapper colorFormat) {
  CHECK_CLAZZ(env, MediaCodecBridge_clazz(env),
      MediaCodecBridge_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, MediaCodecBridge_clazz(env),
      "createVideoEncoderFormat",

"("
"Ljava/lang/String;"
"I"
"I"
"I"
"I"
"I"
"I"
")"
"Landroid/media/MediaFormat;",
      &g_MediaCodecBridge_createVideoEncoderFormat);

  jobject ret =
      env->CallStaticObjectMethod(MediaCodecBridge_clazz(env),
          method_id, mime.obj(), as_jint(width), as_jint(height),
              as_jint(bitRate), as_jint(frameRate), as_jint(iFrameInterval),
              as_jint(colorFormat));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_MediaCodecBridge_isAdaptivePlaybackSupported =
    0;
static jboolean Java_MediaCodecBridge_isAdaptivePlaybackSupported(JNIEnv* env,
    const base::android::JavaRefOrBare<jobject>& obj, JniIntWrapper width,
    JniIntWrapper height) {
  CHECK_CLAZZ(env, obj.obj(),
      MediaCodecBridge_clazz(env), false);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, MediaCodecBridge_clazz(env),
      "isAdaptivePlaybackSupported",

"("
"I"
"I"
")"
"Z",
      &g_MediaCodecBridge_isAdaptivePlaybackSupported);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id, as_jint(width), as_jint(height));
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_MediaCodecBridge_setCodecSpecificData = 0;
static void Java_MediaCodecBridge_setCodecSpecificData(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& format,
    JniIntWrapper index,
    const base::android::JavaRefOrBare<jbyteArray>& bytes) {
  CHECK_CLAZZ(env, MediaCodecBridge_clazz(env),
      MediaCodecBridge_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, MediaCodecBridge_clazz(env),
      "setCodecSpecificData",

"("
"Landroid/media/MediaFormat;"
"I"
"[B"
")"
"V",
      &g_MediaCodecBridge_setCodecSpecificData);

     env->CallStaticVoidMethod(MediaCodecBridge_clazz(env),
          method_id, format.obj(), as_jint(index), bytes.obj());
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_MediaCodecBridge_setFrameHasADTSHeader = 0;
static void Java_MediaCodecBridge_setFrameHasADTSHeader(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& format) {
  CHECK_CLAZZ(env, MediaCodecBridge_clazz(env),
      MediaCodecBridge_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, MediaCodecBridge_clazz(env),
      "setFrameHasADTSHeader",

"("
"Landroid/media/MediaFormat;"
")"
"V",
      &g_MediaCodecBridge_setFrameHasADTSHeader);

     env->CallStaticVoidMethod(MediaCodecBridge_clazz(env),
          method_id, format.obj());
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_MediaCodecBridge_configureAudio = 0;
static jboolean Java_MediaCodecBridge_configureAudio(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, const
    base::android::JavaRefOrBare<jobject>& format,
    const base::android::JavaRefOrBare<jobject>& crypto,
    JniIntWrapper flags,
    jboolean playAudio) {
  CHECK_CLAZZ(env, obj.obj(),
      MediaCodecBridge_clazz(env), false);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, MediaCodecBridge_clazz(env),
      "configureAudio",

"("
"Landroid/media/MediaFormat;"
"Landroid/media/MediaCrypto;"
"I"
"Z"
")"
"Z",
      &g_MediaCodecBridge_configureAudio);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id, format.obj(), crypto.obj(), as_jint(flags), playAudio);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_MediaCodecBridge_createAudioTrack = 0;
static jboolean Java_MediaCodecBridge_createAudioTrack(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, JniIntWrapper sampleRate,
    JniIntWrapper channelCount) {
  CHECK_CLAZZ(env, obj.obj(),
      MediaCodecBridge_clazz(env), false);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, MediaCodecBridge_clazz(env),
      "createAudioTrack",

"("
"I"
"I"
")"
"Z",
      &g_MediaCodecBridge_createAudioTrack);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id, as_jint(sampleRate), as_jint(channelCount));
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_MediaCodecBridge_playOutputBuffer = 0;
static jlong Java_MediaCodecBridge_playOutputBuffer(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, const
    base::android::JavaRefOrBare<jbyteArray>& buf,
    jboolean postpone) {
  CHECK_CLAZZ(env, obj.obj(),
      MediaCodecBridge_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, MediaCodecBridge_clazz(env),
      "playOutputBuffer",

"("
"[B"
"Z"
")"
"J",
      &g_MediaCodecBridge_playOutputBuffer);

  jlong ret =
      env->CallLongMethod(obj.obj(),
          method_id, buf.obj(), postpone);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_MediaCodecBridge_setVolume = 0;
static void Java_MediaCodecBridge_setVolume(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, jdouble volume) {
  CHECK_CLAZZ(env, obj.obj(),
      MediaCodecBridge_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, MediaCodecBridge_clazz(env),
      "setVolume",

"("
"D"
")"
"V",
      &g_MediaCodecBridge_setVolume);

     env->CallVoidMethod(obj.obj(),
          method_id, volume);
  jni_generator::CheckException(env);

}

// Step 3: RegisterNatives.

}  // namespace media

#endif  // org_chromium_media_MediaCodecBridge_JNI

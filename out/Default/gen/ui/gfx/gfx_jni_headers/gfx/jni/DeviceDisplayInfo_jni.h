// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/ui/gfx/DeviceDisplayInfo

#ifndef org_chromium_ui_gfx_DeviceDisplayInfo_JNI
#define org_chromium_ui_gfx_DeviceDisplayInfo_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kDeviceDisplayInfoClassPath[] =
    "org/chromium/ui/gfx/DeviceDisplayInfo";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_DeviceDisplayInfo_clazz __attribute__((unused)) = 0;
#define DeviceDisplayInfo_clazz(env) base::android::LazyGetClass(env, kDeviceDisplayInfoClassPath, &g_DeviceDisplayInfo_clazz)

}  // namespace

namespace gfx {

// Step 2: method stubs.

static void UpdateSharedDeviceDisplayInfo(JNIEnv* env, const
    base::android::JavaParamRef<jobject>& jcaller,
    jint displayHeight,
    jint displayWidth,
    jint physicalDisplayHeight,
    jint physicalDisplayWidth,
    jint bitsPerPixel,
    jint bitsPerComponent,
    jdouble dipScale,
    jint smallestDIPWidth,
    jint rotationDegrees);

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_ui_gfx_DeviceDisplayInfo_nativeUpdateSharedDeviceDisplayInfo(JNIEnv*
    env, jobject jcaller,
    jint displayHeight,
    jint displayWidth,
    jint physicalDisplayHeight,
    jint physicalDisplayWidth,
    jint bitsPerPixel,
    jint bitsPerComponent,
    jdouble dipScale,
    jint smallestDIPWidth,
    jint rotationDegrees) {
  return UpdateSharedDeviceDisplayInfo(env,
      base::android::JavaParamRef<jobject>(env, jcaller), displayHeight,
      displayWidth, physicalDisplayHeight, physicalDisplayWidth, bitsPerPixel,
      bitsPerComponent, dipScale, smallestDIPWidth, rotationDegrees);
}

static base::subtle::AtomicWord g_DeviceDisplayInfo_getDisplayHeight = 0;
static jint Java_DeviceDisplayInfo_getDisplayHeight(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      DeviceDisplayInfo_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, DeviceDisplayInfo_clazz(env),
      "getDisplayHeight",

"("
")"
"I",
      &g_DeviceDisplayInfo_getDisplayHeight);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_DeviceDisplayInfo_getDisplayWidth = 0;
static jint Java_DeviceDisplayInfo_getDisplayWidth(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      DeviceDisplayInfo_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, DeviceDisplayInfo_clazz(env),
      "getDisplayWidth",

"("
")"
"I",
      &g_DeviceDisplayInfo_getDisplayWidth);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_DeviceDisplayInfo_getPhysicalDisplayHeight =
    0;
static jint Java_DeviceDisplayInfo_getPhysicalDisplayHeight(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      DeviceDisplayInfo_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, DeviceDisplayInfo_clazz(env),
      "getPhysicalDisplayHeight",

"("
")"
"I",
      &g_DeviceDisplayInfo_getPhysicalDisplayHeight);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_DeviceDisplayInfo_getPhysicalDisplayWidth = 0;
static jint Java_DeviceDisplayInfo_getPhysicalDisplayWidth(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      DeviceDisplayInfo_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, DeviceDisplayInfo_clazz(env),
      "getPhysicalDisplayWidth",

"("
")"
"I",
      &g_DeviceDisplayInfo_getPhysicalDisplayWidth);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_DeviceDisplayInfo_getBitsPerPixel = 0;
static jint Java_DeviceDisplayInfo_getBitsPerPixel(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      DeviceDisplayInfo_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, DeviceDisplayInfo_clazz(env),
      "getBitsPerPixel",

"("
")"
"I",
      &g_DeviceDisplayInfo_getBitsPerPixel);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_DeviceDisplayInfo_getBitsPerComponent = 0;
static jint Java_DeviceDisplayInfo_getBitsPerComponent(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      DeviceDisplayInfo_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, DeviceDisplayInfo_clazz(env),
      "getBitsPerComponent",

"("
")"
"I",
      &g_DeviceDisplayInfo_getBitsPerComponent);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_DeviceDisplayInfo_getDIPScale = 0;
static jdouble Java_DeviceDisplayInfo_getDIPScale(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      DeviceDisplayInfo_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, DeviceDisplayInfo_clazz(env),
      "getDIPScale",

"("
")"
"D",
      &g_DeviceDisplayInfo_getDIPScale);

  jdouble ret =
      env->CallDoubleMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_DeviceDisplayInfo_getSmallestDIPWidth = 0;
static jint Java_DeviceDisplayInfo_getSmallestDIPWidth(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      DeviceDisplayInfo_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, DeviceDisplayInfo_clazz(env),
      "getSmallestDIPWidth",

"("
")"
"I",
      &g_DeviceDisplayInfo_getSmallestDIPWidth);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_DeviceDisplayInfo_getRotationDegrees = 0;
static jint Java_DeviceDisplayInfo_getRotationDegrees(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      DeviceDisplayInfo_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, DeviceDisplayInfo_clazz(env),
      "getRotationDegrees",

"("
")"
"I",
      &g_DeviceDisplayInfo_getRotationDegrees);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_DeviceDisplayInfo_create = 0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_DeviceDisplayInfo_create(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& context) {
  CHECK_CLAZZ(env, DeviceDisplayInfo_clazz(env),
      DeviceDisplayInfo_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, DeviceDisplayInfo_clazz(env),
      "create",

"("
"Landroid/content/Context;"
")"
"Lorg/chromium/ui/gfx/DeviceDisplayInfo;",
      &g_DeviceDisplayInfo_create);

  jobject ret =
      env->CallStaticObjectMethod(DeviceDisplayInfo_clazz(env),
          method_id, context.obj());
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsDeviceDisplayInfo[] = {
    { "nativeUpdateSharedDeviceDisplayInfo",
"("
"I"
"I"
"I"
"I"
"I"
"I"
"D"
"I"
"I"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_ui_gfx_DeviceDisplayInfo_nativeUpdateSharedDeviceDisplayInfo)
    },
};

static bool RegisterNativesImpl(JNIEnv* env) {
  if (base::android::IsManualJniRegistrationDisabled()) return true;

  const int kMethodsDeviceDisplayInfoSize =
      arraysize(kMethodsDeviceDisplayInfo);

  if (env->RegisterNatives(DeviceDisplayInfo_clazz(env),
                           kMethodsDeviceDisplayInfo,
                           kMethodsDeviceDisplayInfoSize) < 0) {
    jni_generator::HandleRegistrationError(
        env, DeviceDisplayInfo_clazz(env), __FILE__);
    return false;
  }

  return true;
}

}  // namespace gfx

#endif  // org_chromium_ui_gfx_DeviceDisplayInfo_JNI

// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/device/usb/ChromeUsbDevice

#ifndef org_chromium_device_usb_ChromeUsbDevice_JNI
#define org_chromium_device_usb_ChromeUsbDevice_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kChromeUsbDeviceClassPath[] =
    "org/chromium/device/usb/ChromeUsbDevice";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_ChromeUsbDevice_clazz __attribute__((unused)) = 0;
#define ChromeUsbDevice_clazz(env) base::android::LazyGetClass(env, kChromeUsbDeviceClassPath, &g_ChromeUsbDevice_clazz)

}  // namespace

namespace device {

// Step 2: method stubs.

static base::subtle::AtomicWord g_ChromeUsbDevice_create = 0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_ChromeUsbDevice_create(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& device) {
  CHECK_CLAZZ(env, ChromeUsbDevice_clazz(env),
      ChromeUsbDevice_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, ChromeUsbDevice_clazz(env),
      "create",

"("
"Landroid/hardware/usb/UsbDevice;"
")"
"Lorg/chromium/device/usb/ChromeUsbDevice;",
      &g_ChromeUsbDevice_create);

  jobject ret =
      env->CallStaticObjectMethod(ChromeUsbDevice_clazz(env),
          method_id, device.obj());
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_ChromeUsbDevice_getDeviceId = 0;
static jint Java_ChromeUsbDevice_getDeviceId(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      ChromeUsbDevice_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, ChromeUsbDevice_clazz(env),
      "getDeviceId",

"("
")"
"I",
      &g_ChromeUsbDevice_getDeviceId);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_ChromeUsbDevice_getDeviceClass = 0;
static jint Java_ChromeUsbDevice_getDeviceClass(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      ChromeUsbDevice_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, ChromeUsbDevice_clazz(env),
      "getDeviceClass",

"("
")"
"I",
      &g_ChromeUsbDevice_getDeviceClass);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_ChromeUsbDevice_getDeviceSubclass = 0;
static jint Java_ChromeUsbDevice_getDeviceSubclass(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      ChromeUsbDevice_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, ChromeUsbDevice_clazz(env),
      "getDeviceSubclass",

"("
")"
"I",
      &g_ChromeUsbDevice_getDeviceSubclass);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_ChromeUsbDevice_getDeviceProtocol = 0;
static jint Java_ChromeUsbDevice_getDeviceProtocol(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      ChromeUsbDevice_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, ChromeUsbDevice_clazz(env),
      "getDeviceProtocol",

"("
")"
"I",
      &g_ChromeUsbDevice_getDeviceProtocol);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_ChromeUsbDevice_getVendorId = 0;
static jint Java_ChromeUsbDevice_getVendorId(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      ChromeUsbDevice_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, ChromeUsbDevice_clazz(env),
      "getVendorId",

"("
")"
"I",
      &g_ChromeUsbDevice_getVendorId);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_ChromeUsbDevice_getProductId = 0;
static jint Java_ChromeUsbDevice_getProductId(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      ChromeUsbDevice_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, ChromeUsbDevice_clazz(env),
      "getProductId",

"("
")"
"I",
      &g_ChromeUsbDevice_getProductId);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_ChromeUsbDevice_getDeviceVersion = 0;
static jint Java_ChromeUsbDevice_getDeviceVersion(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      ChromeUsbDevice_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, ChromeUsbDevice_clazz(env),
      "getDeviceVersion",

"("
")"
"I",
      &g_ChromeUsbDevice_getDeviceVersion);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_ChromeUsbDevice_getManufacturerName = 0;
static base::android::ScopedJavaLocalRef<jstring>
    Java_ChromeUsbDevice_getManufacturerName(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      ChromeUsbDevice_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, ChromeUsbDevice_clazz(env),
      "getManufacturerName",

"("
")"
"Ljava/lang/String;",
      &g_ChromeUsbDevice_getManufacturerName);

  jstring ret =
      static_cast<jstring>(env->CallObjectMethod(obj.obj(),
          method_id));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static base::subtle::AtomicWord g_ChromeUsbDevice_getProductName = 0;
static base::android::ScopedJavaLocalRef<jstring>
    Java_ChromeUsbDevice_getProductName(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      ChromeUsbDevice_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, ChromeUsbDevice_clazz(env),
      "getProductName",

"("
")"
"Ljava/lang/String;",
      &g_ChromeUsbDevice_getProductName);

  jstring ret =
      static_cast<jstring>(env->CallObjectMethod(obj.obj(),
          method_id));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static base::subtle::AtomicWord g_ChromeUsbDevice_getSerialNumber = 0;
static base::android::ScopedJavaLocalRef<jstring>
    Java_ChromeUsbDevice_getSerialNumber(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      ChromeUsbDevice_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, ChromeUsbDevice_clazz(env),
      "getSerialNumber",

"("
")"
"Ljava/lang/String;",
      &g_ChromeUsbDevice_getSerialNumber);

  jstring ret =
      static_cast<jstring>(env->CallObjectMethod(obj.obj(),
          method_id));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static base::subtle::AtomicWord g_ChromeUsbDevice_getConfigurations = 0;
static base::android::ScopedJavaLocalRef<jobjectArray>
    Java_ChromeUsbDevice_getConfigurations(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      ChromeUsbDevice_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, ChromeUsbDevice_clazz(env),
      "getConfigurations",

"("
")"
"[Landroid/hardware/usb/UsbConfiguration;",
      &g_ChromeUsbDevice_getConfigurations);

  jobjectArray ret =
      static_cast<jobjectArray>(env->CallObjectMethod(obj.obj(),
          method_id));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobjectArray>(env, ret);
}

static base::subtle::AtomicWord g_ChromeUsbDevice_getInterfaces = 0;
static base::android::ScopedJavaLocalRef<jobjectArray>
    Java_ChromeUsbDevice_getInterfaces(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      ChromeUsbDevice_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, ChromeUsbDevice_clazz(env),
      "getInterfaces",

"("
")"
"[Landroid/hardware/usb/UsbInterface;",
      &g_ChromeUsbDevice_getInterfaces);

  jobjectArray ret =
      static_cast<jobjectArray>(env->CallObjectMethod(obj.obj(),
          method_id));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobjectArray>(env, ret);
}

// Step 3: RegisterNatives.

}  // namespace device

#endif  // org_chromium_device_usb_ChromeUsbDevice_JNI
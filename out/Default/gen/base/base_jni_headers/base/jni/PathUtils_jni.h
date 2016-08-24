// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/base/PathUtils

#ifndef org_chromium_base_PathUtils_JNI
#define org_chromium_base_PathUtils_JNI

#include <jni.h>

#include "../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kPathUtilsClassPath[] = "org/chromium/base/PathUtils";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_PathUtils_clazz __attribute__((unused)) = 0;
#define PathUtils_clazz(env) base::android::LazyGetClass(env, kPathUtilsClassPath, &g_PathUtils_clazz)

}  // namespace

// Step 2: method stubs.

static base::subtle::AtomicWord g_PathUtils_getDataDirectory = 0;
static base::android::ScopedJavaLocalRef<jstring>
    Java_PathUtils_getDataDirectory(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& appContext) {
  CHECK_CLAZZ(env, PathUtils_clazz(env),
      PathUtils_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, PathUtils_clazz(env),
      "getDataDirectory",

"("
"Landroid/content/Context;"
")"
"Ljava/lang/String;",
      &g_PathUtils_getDataDirectory);

  jstring ret =
      static_cast<jstring>(env->CallStaticObjectMethod(PathUtils_clazz(env),
          method_id, appContext.obj()));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static base::subtle::AtomicWord g_PathUtils_getDatabaseDirectory = 0;
static base::android::ScopedJavaLocalRef<jstring>
    Java_PathUtils_getDatabaseDirectory(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& appContext) {
  CHECK_CLAZZ(env, PathUtils_clazz(env),
      PathUtils_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, PathUtils_clazz(env),
      "getDatabaseDirectory",

"("
"Landroid/content/Context;"
")"
"Ljava/lang/String;",
      &g_PathUtils_getDatabaseDirectory);

  jstring ret =
      static_cast<jstring>(env->CallStaticObjectMethod(PathUtils_clazz(env),
          method_id, appContext.obj()));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static base::subtle::AtomicWord g_PathUtils_getCacheDirectory = 0;
static base::android::ScopedJavaLocalRef<jstring>
    Java_PathUtils_getCacheDirectory(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& appContext) {
  CHECK_CLAZZ(env, PathUtils_clazz(env),
      PathUtils_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, PathUtils_clazz(env),
      "getCacheDirectory",

"("
"Landroid/content/Context;"
")"
"Ljava/lang/String;",
      &g_PathUtils_getCacheDirectory);

  jstring ret =
      static_cast<jstring>(env->CallStaticObjectMethod(PathUtils_clazz(env),
          method_id, appContext.obj()));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static base::subtle::AtomicWord g_PathUtils_getThumbnailCacheDirectory = 0;
static base::android::ScopedJavaLocalRef<jstring>
    Java_PathUtils_getThumbnailCacheDirectory(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& appContext) {
  CHECK_CLAZZ(env, PathUtils_clazz(env),
      PathUtils_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, PathUtils_clazz(env),
      "getThumbnailCacheDirectory",

"("
"Landroid/content/Context;"
")"
"Ljava/lang/String;",
      &g_PathUtils_getThumbnailCacheDirectory);

  jstring ret =
      static_cast<jstring>(env->CallStaticObjectMethod(PathUtils_clazz(env),
          method_id, appContext.obj()));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static base::subtle::AtomicWord g_PathUtils_getDownloadsDirectory = 0;
static base::android::ScopedJavaLocalRef<jstring>
    Java_PathUtils_getDownloadsDirectory(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& appContext) {
  CHECK_CLAZZ(env, PathUtils_clazz(env),
      PathUtils_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, PathUtils_clazz(env),
      "getDownloadsDirectory",

"("
"Landroid/content/Context;"
")"
"Ljava/lang/String;",
      &g_PathUtils_getDownloadsDirectory);

  jstring ret =
      static_cast<jstring>(env->CallStaticObjectMethod(PathUtils_clazz(env),
          method_id, appContext.obj()));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static base::subtle::AtomicWord g_PathUtils_getNativeLibraryDirectory = 0;
static base::android::ScopedJavaLocalRef<jstring>
    Java_PathUtils_getNativeLibraryDirectory(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& appContext) {
  CHECK_CLAZZ(env, PathUtils_clazz(env),
      PathUtils_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, PathUtils_clazz(env),
      "getNativeLibraryDirectory",

"("
"Landroid/content/Context;"
")"
"Ljava/lang/String;",
      &g_PathUtils_getNativeLibraryDirectory);

  jstring ret =
      static_cast<jstring>(env->CallStaticObjectMethod(PathUtils_clazz(env),
          method_id, appContext.obj()));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static base::subtle::AtomicWord g_PathUtils_getExternalStorageDirectory = 0;
static base::android::ScopedJavaLocalRef<jstring>
    Java_PathUtils_getExternalStorageDirectory(JNIEnv* env) {
  CHECK_CLAZZ(env, PathUtils_clazz(env),
      PathUtils_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, PathUtils_clazz(env),
      "getExternalStorageDirectory",

"("
")"
"Ljava/lang/String;",
      &g_PathUtils_getExternalStorageDirectory);

  jstring ret =
      static_cast<jstring>(env->CallStaticObjectMethod(PathUtils_clazz(env),
          method_id));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

// Step 3: RegisterNatives.

#endif  // org_chromium_base_PathUtils_JNI
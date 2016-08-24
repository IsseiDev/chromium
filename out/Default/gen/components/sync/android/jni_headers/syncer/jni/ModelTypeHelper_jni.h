// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/components/sync/ModelTypeHelper

#ifndef org_chromium_components_sync_ModelTypeHelper_JNI
#define org_chromium_components_sync_ModelTypeHelper_JNI

#include <jni.h>

#include "../../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kModelTypeHelperClassPath[] =
    "org/chromium/components/sync/ModelTypeHelper";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_ModelTypeHelper_clazz __attribute__((unused)) = 0;
#define ModelTypeHelper_clazz(env) base::android::LazyGetClass(env, kModelTypeHelperClassPath, &g_ModelTypeHelper_clazz)

}  // namespace

namespace syncer {

// Step 2: method stubs.

static base::android::ScopedJavaLocalRef<jstring>
    ModelTypeToNotificationType(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller,
    jint modelType);

extern "C" __attribute__((visibility("default")))
jstring
    Java_org_chromium_components_sync_ModelTypeHelper_nativeModelTypeToNotificationType(JNIEnv*
    env, jclass jcaller,
    jint modelType) {
  return ModelTypeToNotificationType(env,
      base::android::JavaParamRef<jclass>(env, jcaller), modelType).Release();
}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsModelTypeHelper[] = {
    { "nativeModelTypeToNotificationType",
"("
"I"
")"
"Ljava/lang/String;",
    reinterpret_cast<void*>(Java_org_chromium_components_sync_ModelTypeHelper_nativeModelTypeToNotificationType)
    },
};

static bool RegisterNativesImpl(JNIEnv* env) {
  if (base::android::IsManualJniRegistrationDisabled()) return true;

  const int kMethodsModelTypeHelperSize = arraysize(kMethodsModelTypeHelper);

  if (env->RegisterNatives(ModelTypeHelper_clazz(env),
                           kMethodsModelTypeHelper,
                           kMethodsModelTypeHelperSize) < 0) {
    jni_generator::HandleRegistrationError(
        env, ModelTypeHelper_clazz(env), __FILE__);
    return false;
  }

  return true;
}

}  // namespace syncer

#endif  // org_chromium_components_sync_ModelTypeHelper_JNI

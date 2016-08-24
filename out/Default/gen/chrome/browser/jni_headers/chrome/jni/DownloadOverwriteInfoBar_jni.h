// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/infobar/DownloadOverwriteInfoBar

#ifndef org_chromium_chrome_browser_infobar_DownloadOverwriteInfoBar_JNI
#define org_chromium_chrome_browser_infobar_DownloadOverwriteInfoBar_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kDownloadOverwriteInfoBarClassPath[] =
    "org/chromium/chrome/browser/infobar/DownloadOverwriteInfoBar";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_DownloadOverwriteInfoBar_clazz
    __attribute__((unused)) = 0;
#define DownloadOverwriteInfoBar_clazz(env) base::android::LazyGetClass(env, kDownloadOverwriteInfoBarClassPath, &g_DownloadOverwriteInfoBar_clazz)

}  // namespace

// Step 2: method stubs.

static base::subtle::AtomicWord g_DownloadOverwriteInfoBar_createInfoBar = 0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_DownloadOverwriteInfoBar_createInfoBar(JNIEnv* env, const
    base::android::JavaRefOrBare<jstring>& fileName,
    const base::android::JavaRefOrBare<jstring>& dirName,
    const base::android::JavaRefOrBare<jstring>& dirFullPath) {
  CHECK_CLAZZ(env, DownloadOverwriteInfoBar_clazz(env),
      DownloadOverwriteInfoBar_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, DownloadOverwriteInfoBar_clazz(env),
      "createInfoBar",

"("
"Ljava/lang/String;"
"Ljava/lang/String;"
"Ljava/lang/String;"
")"
"Lorg/chromium/chrome/browser/infobar/InfoBar;",
      &g_DownloadOverwriteInfoBar_createInfoBar);

  jobject ret =
      env->CallStaticObjectMethod(DownloadOverwriteInfoBar_clazz(env),
          method_id, fileName.obj(), dirName.obj(), dirFullPath.obj());
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

// Step 3: RegisterNatives.

#endif  // org_chromium_chrome_browser_infobar_DownloadOverwriteInfoBar_JNI

// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/document/DocumentWebContentsDelegate

#ifndef org_chromium_chrome_browser_document_DocumentWebContentsDelegate_JNI
#define org_chromium_chrome_browser_document_DocumentWebContentsDelegate_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kDocumentWebContentsDelegateClassPath[] =
    "org/chromium/chrome/browser/document/DocumentWebContentsDelegate";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_DocumentWebContentsDelegate_clazz
    __attribute__((unused)) = 0;
#define DocumentWebContentsDelegate_clazz(env) base::android::LazyGetClass(env, kDocumentWebContentsDelegateClassPath, &g_DocumentWebContentsDelegate_clazz)

}  // namespace

// Step 2: method stubs.

static jlong Initialize(JNIEnv* env, const base::android::JavaParamRef<jobject>&
    jcaller);

extern "C" __attribute__((visibility("default")))
jlong
    Java_org_chromium_chrome_browser_document_DocumentWebContentsDelegate_nativeInitialize(JNIEnv*
    env, jobject jcaller) {
  return Initialize(env, base::android::JavaParamRef<jobject>(env, jcaller));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_document_DocumentWebContentsDelegate_nativeAttachContents(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeDocumentWebContentsDelegate,
    jobject webContents) {
  DocumentWebContentsDelegate* native =
      reinterpret_cast<DocumentWebContentsDelegate*>(nativeDocumentWebContentsDelegate);
  CHECK_NATIVE_PTR(env, jcaller, native, "AttachContents");
  return native->AttachContents(env, base::android::JavaParamRef<jobject>(env,
      jcaller), base::android::JavaParamRef<jobject>(env, webContents));
}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsDocumentWebContentsDelegate[] = {
    { "nativeInitialize",
"("
")"
"J",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_document_DocumentWebContentsDelegate_nativeInitialize)
    },
    { "nativeAttachContents",
"("
"J"
"Lorg/chromium/content_public/browser/WebContents;"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_document_DocumentWebContentsDelegate_nativeAttachContents)
    },
};

static bool RegisterNativesImpl(JNIEnv* env) {
  if (base::android::IsManualJniRegistrationDisabled()) return true;

  const int kMethodsDocumentWebContentsDelegateSize =
      arraysize(kMethodsDocumentWebContentsDelegate);

  if (env->RegisterNatives(DocumentWebContentsDelegate_clazz(env),
                           kMethodsDocumentWebContentsDelegate,
                           kMethodsDocumentWebContentsDelegateSize) < 0) {
    jni_generator::HandleRegistrationError(
        env, DocumentWebContentsDelegate_clazz(env), __FILE__);
    return false;
  }

  return true;
}

#endif  // org_chromium_chrome_browser_document_DocumentWebContentsDelegate_JNI
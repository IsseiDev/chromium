// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/autofill/AutofillLogger

#ifndef org_chromium_chrome_browser_autofill_AutofillLogger_JNI
#define org_chromium_chrome_browser_autofill_AutofillLogger_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kAutofillLoggerClassPath[] =
    "org/chromium/chrome/browser/autofill/AutofillLogger";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_AutofillLogger_clazz __attribute__((unused)) = 0;
#define AutofillLogger_clazz(env) base::android::LazyGetClass(env, kAutofillLoggerClassPath, &g_AutofillLogger_clazz)

}  // namespace

namespace autofill {

// Step 2: method stubs.

static base::subtle::AtomicWord g_AutofillLogger_didFillField = 0;
static void Java_AutofillLogger_didFillField(JNIEnv* env, const
    base::android::JavaRefOrBare<jstring>& autofilledValue,
    const base::android::JavaRefOrBare<jstring>& profileFullName) {
  CHECK_CLAZZ(env, AutofillLogger_clazz(env),
      AutofillLogger_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, AutofillLogger_clazz(env),
      "didFillField",

"("
"Ljava/lang/String;"
"Ljava/lang/String;"
")"
"V",
      &g_AutofillLogger_didFillField);

     env->CallStaticVoidMethod(AutofillLogger_clazz(env),
          method_id, autofilledValue.obj(), profileFullName.obj());
  jni_generator::CheckException(env);

}

// Step 3: RegisterNatives.

}  // namespace autofill

#endif  // org_chromium_chrome_browser_autofill_AutofillLogger_JNI
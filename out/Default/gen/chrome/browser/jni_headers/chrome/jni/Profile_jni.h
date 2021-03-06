// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/chrome/browser/profiles/Profile

#ifndef org_chromium_chrome_browser_profiles_Profile_JNI
#define org_chromium_chrome_browser_profiles_Profile_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kProfileClassPath[] = "org/chromium/chrome/browser/profiles/Profile";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_Profile_clazz __attribute__((unused)) = 0;
#define Profile_clazz(env) base::android::LazyGetClass(env, kProfileClassPath, &g_Profile_clazz)

}  // namespace

// Step 2: method stubs.

static base::android::ScopedJavaLocalRef<jobject> GetLastUsedProfile(JNIEnv*
    env, const base::android::JavaParamRef<jclass>& jcaller);

extern "C" __attribute__((visibility("default")))
jobject
    Java_org_chromium_chrome_browser_profiles_Profile_nativeGetLastUsedProfile(JNIEnv*
    env, jclass jcaller) {
  return GetLastUsedProfile(env, base::android::JavaParamRef<jclass>(env,
      jcaller)).Release();
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_chrome_browser_profiles_Profile_nativeDestroyWhenAppropriate(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeProfileAndroid) {
  ProfileAndroid* native =
      reinterpret_cast<ProfileAndroid*>(nativeProfileAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "DestroyWhenAppropriate");
  return native->DestroyWhenAppropriate(env,
      base::android::JavaParamRef<jobject>(env, jcaller));
}

extern "C" __attribute__((visibility("default")))
jobject
    Java_org_chromium_chrome_browser_profiles_Profile_nativeGetOriginalProfile(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeProfileAndroid) {
  ProfileAndroid* native =
      reinterpret_cast<ProfileAndroid*>(nativeProfileAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "GetOriginalProfile", NULL);
  return native->GetOriginalProfile(env,
      base::android::JavaParamRef<jobject>(env, jcaller)).Release();
}

extern "C" __attribute__((visibility("default")))
jobject
    Java_org_chromium_chrome_browser_profiles_Profile_nativeGetOffTheRecordProfile(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeProfileAndroid) {
  ProfileAndroid* native =
      reinterpret_cast<ProfileAndroid*>(nativeProfileAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "GetOffTheRecordProfile", NULL);
  return native->GetOffTheRecordProfile(env,
      base::android::JavaParamRef<jobject>(env, jcaller)).Release();
}

extern "C" __attribute__((visibility("default")))
jboolean
    Java_org_chromium_chrome_browser_profiles_Profile_nativeHasOffTheRecordProfile(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeProfileAndroid) {
  ProfileAndroid* native =
      reinterpret_cast<ProfileAndroid*>(nativeProfileAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "HasOffTheRecordProfile", false);
  return native->HasOffTheRecordProfile(env,
      base::android::JavaParamRef<jobject>(env, jcaller));
}

extern "C" __attribute__((visibility("default")))
jboolean
    Java_org_chromium_chrome_browser_profiles_Profile_nativeIsOffTheRecord(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeProfileAndroid) {
  ProfileAndroid* native =
      reinterpret_cast<ProfileAndroid*>(nativeProfileAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "IsOffTheRecord", false);
  return native->IsOffTheRecord(env, base::android::JavaParamRef<jobject>(env,
      jcaller));
}

static base::subtle::AtomicWord g_Profile_create = 0;
static base::android::ScopedJavaLocalRef<jobject> Java_Profile_create(JNIEnv*
    env, jlong nativeProfileAndroid) {
  CHECK_CLAZZ(env, Profile_clazz(env),
      Profile_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, Profile_clazz(env),
      "create",

"("
"J"
")"
"Lorg/chromium/chrome/browser/profiles/Profile;",
      &g_Profile_create);

  jobject ret =
      env->CallStaticObjectMethod(Profile_clazz(env),
          method_id, nativeProfileAndroid);
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_Profile_onNativeDestroyed = 0;
static void Java_Profile_onNativeDestroyed(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      Profile_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, Profile_clazz(env),
      "onNativeDestroyed",

"("
")"
"V",
      &g_Profile_onNativeDestroyed);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_Profile_getNativePointer = 0;
static jlong Java_Profile_getNativePointer(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      Profile_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, Profile_clazz(env),
      "getNativePointer",

"("
")"
"J",
      &g_Profile_getNativePointer);

  jlong ret =
      env->CallLongMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsProfile[] = {
    { "nativeGetLastUsedProfile",
"("
")"
"Ljava/lang/Object;",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_profiles_Profile_nativeGetLastUsedProfile)
    },
    { "nativeDestroyWhenAppropriate",
"("
"J"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_profiles_Profile_nativeDestroyWhenAppropriate)
    },
    { "nativeGetOriginalProfile",
"("
"J"
")"
"Ljava/lang/Object;",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_profiles_Profile_nativeGetOriginalProfile)
    },
    { "nativeGetOffTheRecordProfile",
"("
"J"
")"
"Ljava/lang/Object;",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_profiles_Profile_nativeGetOffTheRecordProfile)
    },
    { "nativeHasOffTheRecordProfile",
"("
"J"
")"
"Z",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_profiles_Profile_nativeHasOffTheRecordProfile)
    },
    { "nativeIsOffTheRecord",
"("
"J"
")"
"Z",
    reinterpret_cast<void*>(Java_org_chromium_chrome_browser_profiles_Profile_nativeIsOffTheRecord)
    },
};

static bool RegisterNativesImpl(JNIEnv* env) {
  if (base::android::IsManualJniRegistrationDisabled()) return true;

  const int kMethodsProfileSize = arraysize(kMethodsProfile);

  if (env->RegisterNatives(Profile_clazz(env),
                           kMethodsProfile,
                           kMethodsProfileSize) < 0) {
    jni_generator::HandleRegistrationError(
        env, Profile_clazz(env), __FILE__);
    return false;
  }

  return true;
}

#endif  // org_chromium_chrome_browser_profiles_Profile_JNI

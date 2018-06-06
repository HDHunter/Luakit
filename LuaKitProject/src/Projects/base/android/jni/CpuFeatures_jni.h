// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/base/CpuFeatures

#ifndef org_chromium_base_CpuFeatures_JNI
#define org_chromium_base_CpuFeatures_JNI

#include <jni.h>
#include "base/android/jni_generator/jni_generator_helper.h"
// Step 1: forward declarations.
namespace {
const char kCpuFeaturesClassPath[] = "org/chromium/base/CpuFeatures";
// Leaking this jclass as we cannot use LazyInstance from some threads.
jclass g_CpuFeatures_clazz = NULL;

}  // namespace

namespace base {
namespace android {

static jint GetCoreCount(JNIEnv* env, jclass jcaller);

static jlong GetCpuFeatures(JNIEnv* env, jclass jcaller);

// Step 2: method stubs.

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsCpuFeatures[] = {
    { "nativeGetCoreCount",
"("
")"
"I", reinterpret_cast<void*>(GetCoreCount) },
    { "nativeGetCpuFeatures",
"("
")"
"J", reinterpret_cast<void*>(GetCpuFeatures) },
};

static bool RegisterNativesImpl(JNIEnv* env) {
  g_CpuFeatures_clazz = reinterpret_cast<jclass>(env->NewGlobalRef(
      base::android::GetClass(env, kCpuFeaturesClassPath).obj()));

  const int kMethodsCpuFeaturesSize = arraysize(kMethodsCpuFeatures);

  if (env->RegisterNatives(g_CpuFeatures_clazz,
                           kMethodsCpuFeatures,
                           kMethodsCpuFeaturesSize) < 0) {
    jni_generator::HandleRegistrationError(
        env, g_CpuFeatures_clazz, __FILE__);
    return false;
  }

  return true;
}

}  // namespace android
}  // namespace base

#endif  // org_chromium_base_CpuFeatures_JNI
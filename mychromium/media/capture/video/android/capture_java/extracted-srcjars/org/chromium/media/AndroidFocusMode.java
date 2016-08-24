
// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     java_cpp_enum.py
// From
//     ../../media/capture/video/android/photo_capabilities.h

package org.chromium.media;

import android.support.annotation.IntDef;

import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;

public class AndroidFocusMode {
  @IntDef({
      UNAVAILABLE, FIXED, SINGLE_SHOT, CONTINUOUS
  })
  @Retention(RetentionPolicy.SOURCE)
  public @interface AndroidFocusModeEnum {}
  public static final int UNAVAILABLE = 0;
  public static final int FIXED = 1;
  public static final int SINGLE_SHOT = 2;
  public static final int CONTINUOUS = 3;
}
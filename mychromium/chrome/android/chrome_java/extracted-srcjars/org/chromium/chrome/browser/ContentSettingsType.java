
// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     java_cpp_enum.py
// From
//     ../../components/content_settings/core/common/content_settings_types.h

package org.chromium.chrome.browser;

import android.support.annotation.IntDef;

import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;

public class ContentSettingsType {
  @IntDef({
      CONTENT_SETTINGS_TYPE_DEFAULT, CONTENT_SETTINGS_TYPE_COOKIES, CONTENT_SETTINGS_TYPE_IMAGES,
      CONTENT_SETTINGS_TYPE_JAVASCRIPT, CONTENT_SETTINGS_TYPE_PLUGINS, CONTENT_SETTINGS_TYPE_POPUPS,
      CONTENT_SETTINGS_TYPE_GEOLOCATION, CONTENT_SETTINGS_TYPE_NOTIFICATIONS,
      CONTENT_SETTINGS_TYPE_AUTO_SELECT_CERTIFICATE, CONTENT_SETTINGS_TYPE_FULLSCREEN,
      CONTENT_SETTINGS_TYPE_MOUSELOCK, CONTENT_SETTINGS_TYPE_MIXEDSCRIPT,
      CONTENT_SETTINGS_TYPE_MEDIASTREAM_MIC, CONTENT_SETTINGS_TYPE_MEDIASTREAM_CAMERA,
      CONTENT_SETTINGS_TYPE_PROTOCOL_HANDLERS, CONTENT_SETTINGS_TYPE_PPAPI_BROKER,
      CONTENT_SETTINGS_TYPE_AUTOMATIC_DOWNLOADS, CONTENT_SETTINGS_TYPE_MIDI_SYSEX,
      CONTENT_SETTINGS_TYPE_SSL_CERT_DECISIONS, CONTENT_SETTINGS_TYPE_PROTECTED_MEDIA_IDENTIFIER,
      CONTENT_SETTINGS_TYPE_APP_BANNER, CONTENT_SETTINGS_TYPE_SITE_ENGAGEMENT,
      CONTENT_SETTINGS_TYPE_DURABLE_STORAGE, CONTENT_SETTINGS_TYPE_USB_CHOOSER_DATA,
      CONTENT_SETTINGS_TYPE_BLUETOOTH_GUARD, CONTENT_SETTINGS_TYPE_KEYGEN,
      CONTENT_SETTINGS_TYPE_BACKGROUND_SYNC, CONTENT_SETTINGS_TYPE_AUTOPLAY,
      CONTENT_SETTINGS_TYPE_PROMPT_NO_DECISION_COUNT, CONTENT_SETTINGS_NUM_TYPES_DO_NOT_USE
  })
  @Retention(RetentionPolicy.SOURCE)
  public @interface ContentSettingsTypeEnum {}
  /**
   * "DEFAULT" is only used as an argument to the Content Settings Window opener; there it means
   * "whatever was last shown".
   */
  public static final int CONTENT_SETTINGS_TYPE_DEFAULT = -1;
  public static final int CONTENT_SETTINGS_TYPE_COOKIES = 0;
  public static final int CONTENT_SETTINGS_TYPE_IMAGES = 1;
  public static final int CONTENT_SETTINGS_TYPE_JAVASCRIPT = 2;
  public static final int CONTENT_SETTINGS_TYPE_PLUGINS = 3;
  public static final int CONTENT_SETTINGS_TYPE_POPUPS = 4;
  public static final int CONTENT_SETTINGS_TYPE_GEOLOCATION = 5;
  public static final int CONTENT_SETTINGS_TYPE_NOTIFICATIONS = 6;
  public static final int CONTENT_SETTINGS_TYPE_AUTO_SELECT_CERTIFICATE = 7;
  public static final int CONTENT_SETTINGS_TYPE_FULLSCREEN = 8;
  public static final int CONTENT_SETTINGS_TYPE_MOUSELOCK = 9;
  public static final int CONTENT_SETTINGS_TYPE_MIXEDSCRIPT = 10;
  public static final int CONTENT_SETTINGS_TYPE_MEDIASTREAM_MIC = 11;
  public static final int CONTENT_SETTINGS_TYPE_MEDIASTREAM_CAMERA = 12;
  public static final int CONTENT_SETTINGS_TYPE_PROTOCOL_HANDLERS = 13;
  public static final int CONTENT_SETTINGS_TYPE_PPAPI_BROKER = 14;
  public static final int CONTENT_SETTINGS_TYPE_AUTOMATIC_DOWNLOADS = 15;
  public static final int CONTENT_SETTINGS_TYPE_MIDI_SYSEX = 16;
  public static final int CONTENT_SETTINGS_TYPE_SSL_CERT_DECISIONS = 17;
  public static final int CONTENT_SETTINGS_TYPE_PROTECTED_MEDIA_IDENTIFIER = 18;
  public static final int CONTENT_SETTINGS_TYPE_APP_BANNER = 19;
  public static final int CONTENT_SETTINGS_TYPE_SITE_ENGAGEMENT = 20;
  public static final int CONTENT_SETTINGS_TYPE_DURABLE_STORAGE = 21;
  public static final int CONTENT_SETTINGS_TYPE_USB_CHOOSER_DATA = 22;
  public static final int CONTENT_SETTINGS_TYPE_BLUETOOTH_GUARD = 23;
  public static final int CONTENT_SETTINGS_TYPE_KEYGEN = 24;
  public static final int CONTENT_SETTINGS_TYPE_BACKGROUND_SYNC = 25;
  public static final int CONTENT_SETTINGS_TYPE_AUTOPLAY = 26;
  public static final int CONTENT_SETTINGS_TYPE_PROMPT_NO_DECISION_COUNT = 27;
  /**
   * WARNING: This enum is going to be removed soon. Do not depend on NUM_TYPES.
   */
  public static final int CONTENT_SETTINGS_NUM_TYPES_DO_NOT_USE = 28;
}

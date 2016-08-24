// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("third_party/WebKit/public/platform/modules/permissions/permission_status.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {
  var PermissionStatus = {};
  PermissionStatus.GRANTED = 0;
  PermissionStatus.DENIED = PermissionStatus.GRANTED + 1;
  PermissionStatus.ASK = PermissionStatus.DENIED + 1;
  PermissionStatus.LAST = PermissionStatus.ASK;


  var exports = {};
  exports.PermissionStatus = PermissionStatus;

  return exports;
});
// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("services/ui/public/interfaces/mus_constants.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {
  var kWaitForUnderlay_Property = "property:wait-for-underlay";
  var OrderDirection = {};
  OrderDirection.ABOVE = 1;
  OrderDirection.BELOW = OrderDirection.ABOVE + 1;


  var exports = {};
  exports.kWaitForUnderlay_Property = kWaitForUnderlay_Property;
  exports.OrderDirection = OrderDirection;

  return exports;
});
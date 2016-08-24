// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("third_party/WebKit/public/platform/modules/serviceworker/service_worker_event_status.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {
  var ServiceWorkerEventStatus = {};
  ServiceWorkerEventStatus.COMPLETED = 0;
  ServiceWorkerEventStatus.REJECTED = ServiceWorkerEventStatus.COMPLETED + 1;
  ServiceWorkerEventStatus.ABORTED = ServiceWorkerEventStatus.REJECTED + 1;
  ServiceWorkerEventStatus.MAX = ServiceWorkerEventStatus.ABORTED;


  var exports = {};
  exports.ServiceWorkerEventStatus = ServiceWorkerEventStatus;

  return exports;
});
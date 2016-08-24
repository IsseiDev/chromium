// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("ui/gfx/mojo/buffer_types.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {
  var BufferFormat = {};
  BufferFormat.ATC = 0;
  BufferFormat.ATCIA = BufferFormat.ATC + 1;
  BufferFormat.DXT1 = BufferFormat.ATCIA + 1;
  BufferFormat.DXT5 = BufferFormat.DXT1 + 1;
  BufferFormat.ETC1 = BufferFormat.DXT5 + 1;
  BufferFormat.R_8 = BufferFormat.ETC1 + 1;
  BufferFormat.BGR_565 = BufferFormat.R_8 + 1;
  BufferFormat.RGBA_4444 = BufferFormat.BGR_565 + 1;
  BufferFormat.RGBX_8888 = BufferFormat.RGBA_4444 + 1;
  BufferFormat.RGBA_8888 = BufferFormat.RGBX_8888 + 1;
  BufferFormat.BGRX_8888 = BufferFormat.RGBA_8888 + 1;
  BufferFormat.BGRA_8888 = BufferFormat.BGRX_8888 + 1;
  BufferFormat.YVU_420 = BufferFormat.BGRA_8888 + 1;
  BufferFormat.YUV_420_BIPLANAR = BufferFormat.YVU_420 + 1;
  BufferFormat.UYVY_422 = BufferFormat.YUV_420_BIPLANAR + 1;
  BufferFormat.LAST = BufferFormat.UYVY_422;
  var BufferUsage = {};
  BufferUsage.GPU_READ = 0;
  BufferUsage.SCANOUT = BufferUsage.GPU_READ + 1;
  BufferUsage.GPU_READ_CPU_READ_WRITE = BufferUsage.SCANOUT + 1;
  BufferUsage.GPU_READ_CPU_READ_WRITE_PERSISTENT = BufferUsage.GPU_READ_CPU_READ_WRITE + 1;
  BufferUsage.LAST = BufferUsage.GPU_READ_CPU_READ_WRITE_PERSISTENT;


  var exports = {};
  exports.BufferFormat = BufferFormat;
  exports.BufferUsage = BufferUsage;

  return exports;
});
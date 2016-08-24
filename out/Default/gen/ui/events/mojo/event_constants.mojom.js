// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("ui/events/mojo/event_constants.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {
  var kEventFlagNone = 0x00000;
  var kEventFlagIsSynthesized = 0x00001;
  var kEventFlagShiftDown = 0x00002;
  var kEventFlagControlDown = 0x00004;
  var kEventFlagAltDown = 0x00008;
  var kEventFlagCommandDown = 0x00010;
  var kEventFlagAltgrDown = 0x00020;
  var kEventFlagMod3Down = 0x00040;
  var kEventFlagNumLockOn = 0x00080;
  var kEventFlagCapsLockOn = 0x00100;
  var kEventFlagScrollLockOn = 0x00200;
  var kEventFlagLeftMouseButton = 0x00400;
  var kEventFlagMiddleMouseButton = 0x00800;
  var kEventFlagRightMouseButton = 0x01000;
  var kEventFlagBackMouseButton = 0x02000;
  var kEventFlagForwardMouseButton = 0x04000;
  var kMouseEventFlagIsDoubleClick = 0x08000;
  var kMouseEventFlagIsTripleClick = 0x10000;
  var kMouseEventFlagIsNonClient = 0x20000;
  var AcceleratorPhase = {};
  AcceleratorPhase.PRE_TARGET = 0;
  AcceleratorPhase.POST_TARGET = AcceleratorPhase.PRE_TARGET + 1;
  var EventType = {};
  EventType.UNKNOWN = 0;
  EventType.KEY_PRESSED = EventType.UNKNOWN + 1;
  EventType.KEY_RELEASED = EventType.KEY_PRESSED + 1;
  EventType.POINTER_CANCEL = EventType.KEY_RELEASED + 1;
  EventType.POINTER_DOWN = EventType.POINTER_CANCEL + 1;
  EventType.POINTER_MOVE = EventType.POINTER_DOWN + 1;
  EventType.POINTER_UP = EventType.POINTER_MOVE + 1;
  EventType.MOUSE_EXIT = EventType.POINTER_UP + 1;
  EventType.WHEEL = EventType.MOUSE_EXIT + 1;
  var PointerKind = {};
  PointerKind.MOUSE = 0;
  PointerKind.PEN = PointerKind.MOUSE + 1;
  PointerKind.TOUCH = PointerKind.PEN + 1;
  var WheelMode = {};
  WheelMode.PIXEL = 0;
  WheelMode.LINE = WheelMode.PIXEL + 1;
  WheelMode.PAGE = WheelMode.LINE + 1;
  WheelMode.SCALING = WheelMode.PAGE + 1;


  var exports = {};
  exports.kEventFlagNone = kEventFlagNone;
  exports.kEventFlagIsSynthesized = kEventFlagIsSynthesized;
  exports.kEventFlagShiftDown = kEventFlagShiftDown;
  exports.kEventFlagControlDown = kEventFlagControlDown;
  exports.kEventFlagAltDown = kEventFlagAltDown;
  exports.kEventFlagCommandDown = kEventFlagCommandDown;
  exports.kEventFlagAltgrDown = kEventFlagAltgrDown;
  exports.kEventFlagMod3Down = kEventFlagMod3Down;
  exports.kEventFlagNumLockOn = kEventFlagNumLockOn;
  exports.kEventFlagCapsLockOn = kEventFlagCapsLockOn;
  exports.kEventFlagScrollLockOn = kEventFlagScrollLockOn;
  exports.kEventFlagLeftMouseButton = kEventFlagLeftMouseButton;
  exports.kEventFlagMiddleMouseButton = kEventFlagMiddleMouseButton;
  exports.kEventFlagRightMouseButton = kEventFlagRightMouseButton;
  exports.kEventFlagBackMouseButton = kEventFlagBackMouseButton;
  exports.kEventFlagForwardMouseButton = kEventFlagForwardMouseButton;
  exports.kMouseEventFlagIsDoubleClick = kMouseEventFlagIsDoubleClick;
  exports.kMouseEventFlagIsTripleClick = kMouseEventFlagIsTripleClick;
  exports.kMouseEventFlagIsNonClient = kMouseEventFlagIsNonClient;
  exports.AcceleratorPhase = AcceleratorPhase;
  exports.EventType = EventType;
  exports.PointerKind = PointerKind;
  exports.WheelMode = WheelMode;

  return exports;
});
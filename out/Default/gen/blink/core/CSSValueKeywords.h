
// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CSSValueKeywords_h
#define CSSValueKeywords_h

#include "core/css/parser/CSSParserMode.h"
#include <string.h>

namespace blink {

enum CSSValueID {
    CSSValueInvalid = 0,
    CSSValueInherit = 1,
    CSSValueInitial = 2,
    CSSValueNone = 3,
    CSSValueHidden = 4,
    CSSValueInset = 5,
    CSSValueGroove = 6,
    CSSValueOutset = 7,
    CSSValueRidge = 8,
    CSSValueDotted = 9,
    CSSValueDashed = 10,
    CSSValueSolid = 11,
    CSSValueDouble = 12,
    CSSValueCaption = 13,
    CSSValueIcon = 14,
    CSSValueMenu = 15,
    CSSValueMessageBox = 16,
    CSSValueSmallCaption = 17,
    CSSValueWebkitMiniControl = 18,
    CSSValueWebkitSmallControl = 19,
    CSSValueWebkitControl = 20,
    CSSValueStatusBar = 21,
    CSSValueItalic = 22,
    CSSValueOblique = 23,
    CSSValueAll = 24,
    CSSValueCommonLigatures = 25,
    CSSValueNoCommonLigatures = 26,
    CSSValueDiscretionaryLigatures = 27,
    CSSValueNoDiscretionaryLigatures = 28,
    CSSValueHistoricalLigatures = 29,
    CSSValueNoHistoricalLigatures = 30,
    CSSValueContextual = 31,
    CSSValueNoContextual = 32,
    CSSValueSmallCaps = 33,
    CSSValueAllSmallCaps = 34,
    CSSValuePetiteCaps = 35,
    CSSValueAllPetiteCaps = 36,
    CSSValueUnicase = 37,
    CSSValueTitlingCaps = 38,
    CSSValueLiningNums = 39,
    CSSValueOldstyleNums = 40,
    CSSValueProportionalNums = 41,
    CSSValueTabularNums = 42,
    CSSValueDiagonalFractions = 43,
    CSSValueStackedFractions = 44,
    CSSValueOrdinal = 45,
    CSSValueSlashedZero = 46,
    CSSValueNormal = 47,
    CSSValueBold = 48,
    CSSValueBolder = 49,
    CSSValueLighter = 50,
    CSSValue100 = 51,
    CSSValue200 = 52,
    CSSValue300 = 53,
    CSSValue400 = 54,
    CSSValue500 = 55,
    CSSValue600 = 56,
    CSSValue700 = 57,
    CSSValue800 = 58,
    CSSValue900 = 59,
    CSSValueUltraCondensed = 60,
    CSSValueExtraCondensed = 61,
    CSSValueCondensed = 62,
    CSSValueSemiCondensed = 63,
    CSSValueSemiExpanded = 64,
    CSSValueExpanded = 65,
    CSSValueExtraExpanded = 66,
    CSSValueUltraExpanded = 67,
    CSSValueXxSmall = 68,
    CSSValueXSmall = 69,
    CSSValueSmall = 70,
    CSSValueMedium = 71,
    CSSValueLarge = 72,
    CSSValueXLarge = 73,
    CSSValueXxLarge = 74,
    CSSValueWebkitXxxLarge = 75,
    CSSValueSmaller = 76,
    CSSValueLarger = 77,
    CSSValueSerif = 78,
    CSSValueSansSerif = 79,
    CSSValueCursive = 80,
    CSSValueFantasy = 81,
    CSSValueMonospace = 82,
    CSSValueWebkitBody = 83,
    CSSValueWebkitPictograph = 84,
    CSSValueSwap = 85,
    CSSValueFallback = 86,
    CSSValueOptional = 87,
    CSSValueAqua = 88,
    CSSValueBlack = 89,
    CSSValueBlue = 90,
    CSSValueFuchsia = 91,
    CSSValueGray = 92,
    CSSValueGreen = 93,
    CSSValueLime = 94,
    CSSValueMaroon = 95,
    CSSValueNavy = 96,
    CSSValueOlive = 97,
    CSSValueOrange = 98,
    CSSValuePurple = 99,
    CSSValueRed = 100,
    CSSValueSilver = 101,
    CSSValueTeal = 102,
    CSSValueWhite = 103,
    CSSValueYellow = 104,
    CSSValueTransparent = 105,
    CSSValueWebkitLink = 106,
    CSSValueWebkitActivelink = 107,
    CSSValueActiveborder = 108,
    CSSValueActivecaption = 109,
    CSSValueAppworkspace = 110,
    CSSValueBackground = 111,
    CSSValueButtonface = 112,
    CSSValueButtonhighlight = 113,
    CSSValueButtonshadow = 114,
    CSSValueButtontext = 115,
    CSSValueCaptiontext = 116,
    CSSValueGraytext = 117,
    CSSValueHighlight = 118,
    CSSValueHighlighttext = 119,
    CSSValueInactiveborder = 120,
    CSSValueInactivecaption = 121,
    CSSValueInactivecaptiontext = 122,
    CSSValueInfobackground = 123,
    CSSValueInfotext = 124,
    CSSValueMenutext = 125,
    CSSValueScrollbar = 126,
    CSSValueThreeddarkshadow = 127,
    CSSValueThreedface = 128,
    CSSValueThreedhighlight = 129,
    CSSValueThreedlightshadow = 130,
    CSSValueThreedshadow = 131,
    CSSValueWindow = 132,
    CSSValueWindowframe = 133,
    CSSValueWindowtext = 134,
    CSSValueInternalActiveListBoxSelection = 135,
    CSSValueInternalActiveListBoxSelectionText = 136,
    CSSValueInternalInactiveListBoxSelection = 137,
    CSSValueInternalInactiveListBoxSelectionText = 138,
    CSSValueWebkitFocusRingColor = 139,
    CSSValueCurrentcolor = 140,
    CSSValueGrey = 141,
    CSSValueInternalQuirkInherit = 142,
    CSSValueRepeat = 143,
    CSSValueRepeatX = 144,
    CSSValueRepeatY = 145,
    CSSValueNoRepeat = 146,
    CSSValueClear = 147,
    CSSValueCopy = 148,
    CSSValueSourceOver = 149,
    CSSValueSourceIn = 150,
    CSSValueSourceOut = 151,
    CSSValueSourceAtop = 152,
    CSSValueDestinationOver = 153,
    CSSValueDestinationIn = 154,
    CSSValueDestinationOut = 155,
    CSSValueDestinationAtop = 156,
    CSSValueXor = 157,
    CSSValuePlusLighter = 158,
    CSSValueBaseline = 159,
    CSSValueMiddle = 160,
    CSSValueSub = 161,
    CSSValueSuper = 162,
    CSSValueTextTop = 163,
    CSSValueTextBottom = 164,
    CSSValueTop = 165,
    CSSValueBottom = 166,
    CSSValueWebkitBaselineMiddle = 167,
    CSSValueWebkitAuto = 168,
    CSSValueLeft = 169,
    CSSValueRight = 170,
    CSSValueCenter = 171,
    CSSValueJustify = 172,
    CSSValueWebkitLeft = 173,
    CSSValueWebkitRight = 174,
    CSSValueWebkitCenter = 175,
    CSSValueWebkitMatchParent = 176,
    CSSValueInternalCenter = 177,
    CSSValueInterWord = 178,
    CSSValueDistribute = 179,
    CSSValueOutside = 180,
    CSSValueInside = 181,
    CSSValueDisc = 182,
    CSSValueCircle = 183,
    CSSValueSquare = 184,
    CSSValueDecimal = 185,
    CSSValueDecimalLeadingZero = 186,
    CSSValueArabicIndic = 187,
    CSSValueBengali = 188,
    CSSValueCambodian = 189,
    CSSValueKhmer = 190,
    CSSValueDevanagari = 191,
    CSSValueGujarati = 192,
    CSSValueGurmukhi = 193,
    CSSValueKannada = 194,
    CSSValueLao = 195,
    CSSValueMalayalam = 196,
    CSSValueMongolian = 197,
    CSSValueMyanmar = 198,
    CSSValueOriya = 199,
    CSSValuePersian = 200,
    CSSValueUrdu = 201,
    CSSValueTelugu = 202,
    CSSValueTibetan = 203,
    CSSValueThai = 204,
    CSSValueLowerRoman = 205,
    CSSValueUpperRoman = 206,
    CSSValueLowerGreek = 207,
    CSSValueLowerAlpha = 208,
    CSSValueLowerLatin = 209,
    CSSValueUpperAlpha = 210,
    CSSValueUpperLatin = 211,
    CSSValueCjkEarthlyBranch = 212,
    CSSValueCjkHeavenlyStem = 213,
    CSSValueEthiopicHalehame = 214,
    CSSValueEthiopicHalehameAm = 215,
    CSSValueEthiopicHalehameTiEr = 216,
    CSSValueEthiopicHalehameTiEt = 217,
    CSSValueHangul = 218,
    CSSValueHangulConsonant = 219,
    CSSValueKoreanHangulFormal = 220,
    CSSValueKoreanHanjaFormal = 221,
    CSSValueKoreanHanjaInformal = 222,
    CSSValueHebrew = 223,
    CSSValueArmenian = 224,
    CSSValueLowerArmenian = 225,
    CSSValueUpperArmenian = 226,
    CSSValueGeorgian = 227,
    CSSValueCjkIdeographic = 228,
    CSSValueSimpChineseFormal = 229,
    CSSValueSimpChineseInformal = 230,
    CSSValueTradChineseFormal = 231,
    CSSValueTradChineseInformal = 232,
    CSSValueHiragana = 233,
    CSSValueKatakana = 234,
    CSSValueHiraganaIroha = 235,
    CSSValueKatakanaIroha = 236,
    CSSValueInline = 237,
    CSSValueBlock = 238,
    CSSValueListItem = 239,
    CSSValueInlineBlock = 240,
    CSSValueTable = 241,
    CSSValueInlineTable = 242,
    CSSValueTableRowGroup = 243,
    CSSValueTableHeaderGroup = 244,
    CSSValueTableFooterGroup = 245,
    CSSValueTableRow = 246,
    CSSValueTableColumnGroup = 247,
    CSSValueTableColumn = 248,
    CSSValueTableCell = 249,
    CSSValueTableCaption = 250,
    CSSValueWebkitBox = 251,
    CSSValueWebkitInlineBox = 252,
    CSSValueFlex = 253,
    CSSValueInlineFlex = 254,
    CSSValueGrid = 255,
    CSSValueInlineGrid = 256,
    CSSValueWebkitFlex = 257,
    CSSValueWebkitInlineFlex = 258,
    CSSValueAuto = 259,
    CSSValueCrosshair = 260,
    CSSValueDefault = 261,
    CSSValuePointer = 262,
    CSSValueMove = 263,
    CSSValueVerticalText = 264,
    CSSValueCell = 265,
    CSSValueContextMenu = 266,
    CSSValueAlias = 267,
    CSSValueProgress = 268,
    CSSValueNoDrop = 269,
    CSSValueNotAllowed = 270,
    CSSValueZoomIn = 271,
    CSSValueZoomOut = 272,
    CSSValueEResize = 273,
    CSSValueNeResize = 274,
    CSSValueNwResize = 275,
    CSSValueNResize = 276,
    CSSValueSeResize = 277,
    CSSValueSwResize = 278,
    CSSValueSResize = 279,
    CSSValueWResize = 280,
    CSSValueEwResize = 281,
    CSSValueNsResize = 282,
    CSSValueNeswResize = 283,
    CSSValueNwseResize = 284,
    CSSValueColResize = 285,
    CSSValueRowResize = 286,
    CSSValueText = 287,
    CSSValueWait = 288,
    CSSValueHelp = 289,
    CSSValueAllScroll = 290,
    CSSValueWebkitGrab = 291,
    CSSValueWebkitGrabbing = 292,
    CSSValueWebkitZoomIn = 293,
    CSSValueWebkitZoomOut = 294,
    CSSValueLtr = 295,
    CSSValueRtl = 296,
    CSSValueCapitalize = 297,
    CSSValueUppercase = 298,
    CSSValueLowercase = 299,
    CSSValueVisible = 300,
    CSSValueCollapse = 301,
    CSSValueA3 = 302,
    CSSValueA4 = 303,
    CSSValueA5 = 304,
    CSSValueAbove = 305,
    CSSValueAbsolute = 306,
    CSSValueAlways = 307,
    CSSValueAvoid = 308,
    CSSValueB4 = 309,
    CSSValueB5 = 310,
    CSSValueBelow = 311,
    CSSValueBidiOverride = 312,
    CSSValueBlink = 313,
    CSSValueBoth = 314,
    CSSValueCloseQuote = 315,
    CSSValueEmbed = 316,
    CSSValueFixed = 317,
    CSSValueHand = 318,
    CSSValueHide = 319,
    CSSValueIsolate = 320,
    CSSValueIsolateOverride = 321,
    CSSValuePlaintext = 322,
    CSSValueWebkitIsolate = 323,
    CSSValueWebkitIsolateOverride = 324,
    CSSValueWebkitPlaintext = 325,
    CSSValueLandscape = 326,
    CSSValueLedger = 327,
    CSSValueLegal = 328,
    CSSValueLetter = 329,
    CSSValueLineThrough = 330,
    CSSValueLocal = 331,
    CSSValueNoCloseQuote = 332,
    CSSValueNoOpenQuote = 333,
    CSSValueNowrap = 334,
    CSSValueOpenQuote = 335,
    CSSValueOverlay = 336,
    CSSValueOverline = 337,
    CSSValuePortrait = 338,
    CSSValuePre = 339,
    CSSValuePreLine = 340,
    CSSValuePreWrap = 341,
    CSSValueRelative = 342,
    CSSValueScroll = 343,
    CSSValueSeparate = 344,
    CSSValueShow = 345,
    CSSValueStatic = 346,
    CSSValueThick = 347,
    CSSValueThin = 348,
    CSSValueUnderline = 349,
    CSSValueWavy = 350,
    CSSValueWebkitNowrap = 351,
    CSSValueStretch = 352,
    CSSValueStart = 353,
    CSSValueEnd = 354,
    CSSValueClone = 355,
    CSSValueSlice = 356,
    CSSValueReverse = 357,
    CSSValueHorizontal = 358,
    CSSValueVertical = 359,
    CSSValueInlineAxis = 360,
    CSSValueBlockAxis = 361,
    CSSValueSingle = 362,
    CSSValueMultiple = 363,
    CSSValueFlexStart = 364,
    CSSValueFlexEnd = 365,
    CSSValueSpaceBetween = 366,
    CSSValueSpaceAround = 367,
    CSSValueSpaceEvenly = 368,
    CSSValueUnsafe = 369,
    CSSValueSafe = 370,
    CSSValueRow = 371,
    CSSValueRowReverse = 372,
    CSSValueColumn = 373,
    CSSValueColumnReverse = 374,
    CSSValueWrap = 375,
    CSSValueWrapReverse = 376,
    CSSValueDense = 377,
    CSSValueReadOnly = 378,
    CSSValueReadWrite = 379,
    CSSValueReadWritePlaintextOnly = 380,
    CSSValueElement = 381,
    CSSValueWebkitMinContent = 382,
    CSSValueWebkitMaxContent = 383,
    CSSValueWebkitFillAvailable = 384,
    CSSValueWebkitFitContent = 385,
    CSSValueMinContent = 386,
    CSSValueMaxContent = 387,
    CSSValueFitContent = 388,
    CSSValueClip = 389,
    CSSValueEllipsis = 390,
    CSSValueDiscard = 391,
    CSSValueBreakAll = 392,
    CSSValueKeepAll = 393,
    CSSValueBreakWord = 394,
    CSSValueSpace = 395,
    CSSValueLoose = 396,
    CSSValueStrict = 397,
    CSSValueAfterWhiteSpace = 398,
    CSSValueManual = 399,
    CSSValueCheckbox = 400,
    CSSValueRadio = 401,
    CSSValuePushButton = 402,
    CSSValueSquareButton = 403,
    CSSValueButton = 404,
    CSSValueButtonBevel = 405,
    CSSValueInnerSpinButton = 406,
    CSSValueListbox = 407,
    CSSValueListitem = 408,
    CSSValueMediaEnterFullscreenButton = 409,
    CSSValueMediaExitFullscreenButton = 410,
    CSSValueMediaFullscreenVolumeSlider = 411,
    CSSValueMediaFullscreenVolumeSliderThumb = 412,
    CSSValueMediaMuteButton = 413,
    CSSValueMediaPlayButton = 414,
    CSSValueMediaOverlayPlayButton = 415,
    CSSValueMediaToggleClosedCaptionsButton = 416,
    CSSValueMediaSlider = 417,
    CSSValueMediaSliderthumb = 418,
    CSSValueMediaVolumeSliderContainer = 419,
    CSSValueMediaVolumeSlider = 420,
    CSSValueMediaVolumeSliderthumb = 421,
    CSSValueMediaControlsBackground = 422,
    CSSValueMediaControlsFullscreenBackground = 423,
    CSSValueMediaCurrentTimeDisplay = 424,
    CSSValueMediaTimeRemainingDisplay = 425,
    CSSValueInternalMediaCastOffButton = 426,
    CSSValueInternalMediaOverlayCastOffButton = 427,
    CSSValueInternalMediaTrackSelectionCheckmark = 428,
    CSSValueInternalMediaClosedCaptionsIcon = 429,
    CSSValueInternalMediaSubtitlesIcon = 430,
    CSSValueMenulist = 431,
    CSSValueMenulistButton = 432,
    CSSValueMenulistText = 433,
    CSSValueMenulistTextfield = 434,
    CSSValueMeter = 435,
    CSSValueProgressBar = 436,
    CSSValueProgressBarValue = 437,
    CSSValueSliderHorizontal = 438,
    CSSValueSliderVertical = 439,
    CSSValueSliderthumbHorizontal = 440,
    CSSValueSliderthumbVertical = 441,
    CSSValueCaret = 442,
    CSSValueSearchfield = 443,
    CSSValueSearchfieldCancelButton = 444,
    CSSValueTextfield = 445,
    CSSValueTextarea = 446,
    CSSValueCapsLockIndicator = 447,
    CSSValueRound = 448,
    CSSValueBorder = 449,
    CSSValueBorderBox = 450,
    CSSValueContent = 451,
    CSSValueContentBox = 452,
    CSSValuePadding = 453,
    CSSValuePaddingBox = 454,
    CSSValueMarginBox = 455,
    CSSValueContain = 456,
    CSSValueCover = 457,
    CSSValueLogical = 458,
    CSSValueVisual = 459,
    CSSValueAlternate = 460,
    CSSValueAlternateReverse = 461,
    CSSValueForwards = 462,
    CSSValueBackwards = 463,
    CSSValueInfinite = 464,
    CSSValueRunning = 465,
    CSSValuePaused = 466,
    CSSValueFlat = 467,
    CSSValuePreserve3d = 468,
    CSSValueEase = 469,
    CSSValueLinear = 470,
    CSSValueEaseIn = 471,
    CSSValueEaseOut = 472,
    CSSValueEaseInOut = 473,
    CSSValueStepStart = 474,
    CSSValueStepMiddle = 475,
    CSSValueStepEnd = 476,
    CSSValueSteps = 477,
    CSSValueCubicBezier = 478,
    CSSValueDocument = 479,
    CSSValueReset = 480,
    CSSValueZoom = 481,
    CSSValueVisiblePainted = 482,
    CSSValueVisibleFill = 483,
    CSSValueVisibleStroke = 484,
    CSSValuePainted = 485,
    CSSValueFill = 486,
    CSSValueStroke = 487,
    CSSValueBoundingBox = 488,
    CSSValueSpellOut = 489,
    CSSValueDigits = 490,
    CSSValueLiteralPunctuation = 491,
    CSSValueNoPunctuation = 492,
    CSSValueAntialiased = 493,
    CSSValueSubpixelAntialiased = 494,
    CSSValueOptimizeSpeed = 495,
    CSSValueOptimizeLegibility = 496,
    CSSValueGeometricPrecision = 497,
    CSSValueEconomy = 498,
    CSSValueExact = 499,
    CSSValueLr = 500,
    CSSValueRl = 501,
    CSSValueTb = 502,
    CSSValueLrTb = 503,
    CSSValueRlTb = 504,
    CSSValueTbRl = 505,
    CSSValueHorizontalTb = 506,
    CSSValueVerticalRl = 507,
    CSSValueVerticalLr = 508,
    CSSValueAfter = 509,
    CSSValueBefore = 510,
    CSSValueOver = 511,
    CSSValueUnder = 512,
    CSSValueFilled = 513,
    CSSValueOpen = 514,
    CSSValueDot = 515,
    CSSValueDoubleCircle = 516,
    CSSValueTriangle = 517,
    CSSValueSesame = 518,
    CSSValueEllipse = 519,
    CSSValueClosestSide = 520,
    CSSValueClosestCorner = 521,
    CSSValueFarthestSide = 522,
    CSSValueFarthestCorner = 523,
    CSSValueMixed = 524,
    CSSValueSideways = 525,
    CSSValueSidewaysRight = 526,
    CSSValueUpright = 527,
    CSSValueVerticalRight = 528,
    CSSValueOn = 529,
    CSSValueOff = 530,
    CSSValueOptimizeQuality = 531,
    CSSValuePixelated = 532,
    CSSValueWebkitOptimizeContrast = 533,
    CSSValueNonzero = 534,
    CSSValueEvenodd = 535,
    CSSValueAt = 536,
    CSSValueAlphabetic = 537,
    CSSValueFullscreen = 538,
    CSSValueStandalone = 539,
    CSSValueMinimalUi = 540,
    CSSValueBrowser = 541,
    CSSValueSticky = 542,
    CSSValueCoarse = 543,
    CSSValueFine = 544,
    CSSValueOnDemand = 545,
    CSSValueHover = 546,
    CSSValueMultiply = 547,
    CSSValueScreen = 548,
    CSSValueDarken = 549,
    CSSValueLighten = 550,
    CSSValueColorDodge = 551,
    CSSValueColorBurn = 552,
    CSSValueHardLight = 553,
    CSSValueSoftLight = 554,
    CSSValueDifference = 555,
    CSSValueExclusion = 556,
    CSSValueHue = 557,
    CSSValueSaturation = 558,
    CSSValueColor = 559,
    CSSValueLuminosity = 560,
    CSSValueScaleDown = 561,
    CSSValueBalance = 562,
    CSSValueWebkitPagedX = 563,
    CSSValueWebkitPagedY = 564,
    CSSValueDrag = 565,
    CSSValueNoDrag = 566,
    CSSValueSpan = 567,
    CSSValueMinmax = 568,
    CSSValueEachLine = 569,
    CSSValueProgressive = 570,
    CSSValueInterlace = 571,
    CSSValueMarkers = 572,
    CSSValueInternalExtendToZoom = 573,
    CSSValuePanX = 574,
    CSSValuePanY = 575,
    CSSValuePanLeft = 576,
    CSSValuePanRight = 577,
    CSSValuePanUp = 578,
    CSSValuePanDown = 579,
    CSSValueManipulation = 580,
    CSSValueLastBaseline = 581,
    CSSValueSelfStart = 582,
    CSSValueSelfEnd = 583,
    CSSValueLegacy = 584,
    CSSValueSmooth = 585,
    CSSValueContents = 586,
    CSSValueScrollPosition = 587,
    CSSValueRevert = 588,
    CSSValueUnset = 589,
    CSSValueLinearGradient = 590,
    CSSValueRadialGradient = 591,
    CSSValueRepeatingLinearGradient = 592,
    CSSValueRepeatingRadialGradient = 593,
    CSSValuePaint = 594,
    CSSValueWebkitCrossFade = 595,
    CSSValueWebkitGradient = 596,
    CSSValueWebkitLinearGradient = 597,
    CSSValueWebkitRadialGradient = 598,
    CSSValueWebkitRepeatingLinearGradient = 599,
    CSSValueWebkitRepeatingRadialGradient = 600,
    CSSValueWebkitImageSet = 601,
    CSSValueFrom = 602,
    CSSValueTo = 603,
    CSSValueColorStop = 604,
    CSSValueRadial = 605,
    CSSValueAttr = 606,
    CSSValueCounter = 607,
    CSSValueCounters = 608,
    CSSValueRect = 609,
    CSSValuePolygon = 610,
    CSSValueFormat = 611,
    CSSValueInvert = 612,
    CSSValueGrayscale = 613,
    CSSValueSepia = 614,
    CSSValueSaturate = 615,
    CSSValueHueRotate = 616,
    CSSValueOpacity = 617,
    CSSValueBrightness = 618,
    CSSValueContrast = 619,
    CSSValueBlur = 620,
    CSSValueDropShadow = 621,
    CSSValueUrl = 622,
    CSSValueRgb = 623,
    CSSValueRgba = 624,
    CSSValueHsl = 625,
    CSSValueHsla = 626,
    CSSValueMatrix = 627,
    CSSValueMatrix3d = 628,
    CSSValuePerspective = 629,
    CSSValueRotate = 630,
    CSSValueRotateX = 631,
    CSSValueRotateY = 632,
    CSSValueRotateZ = 633,
    CSSValueRotate3d = 634,
    CSSValueScale = 635,
    CSSValueScaleX = 636,
    CSSValueScaleY = 637,
    CSSValueScaleZ = 638,
    CSSValueScale3d = 639,
    CSSValueSkew = 640,
    CSSValueSkewX = 641,
    CSSValueSkewY = 642,
    CSSValueTranslate = 643,
    CSSValueTranslateX = 644,
    CSSValueTranslateY = 645,
    CSSValueTranslateZ = 646,
    CSSValueTranslate3d = 647,
    CSSValuePath = 648,
    CSSValueCalc = 649,
    CSSValueWebkitCalc = 650,
    CSSValueMandatory = 651,
    CSSValueProximity = 652,
    CSSValueFromImage = 653,
    CSSValueStyle = 654,
    CSSValueLayout = 655,
    CSSValueSize = 656,
    CSSValueAutoFill = 657,
    CSSValueAutoFit = 658,
    CSSValueVar = 659,
    CSSValueInternalVariableValue = 660,
    CSSValueAvoidPage = 661,
    CSSValuePage = 662,
    CSSValueRecto = 663,
    CSSValueVerso = 664,
    CSSValueAvoidColumn = 665,
    CSSValueAliceblue = 666,
    CSSValueAntiquewhite = 667,
    CSSValueAquamarine = 668,
    CSSValueAzure = 669,
    CSSValueBeige = 670,
    CSSValueBisque = 671,
    CSSValueBlanchedalmond = 672,
    CSSValueBlueviolet = 673,
    CSSValueBrown = 674,
    CSSValueBurlywood = 675,
    CSSValueCadetblue = 676,
    CSSValueChartreuse = 677,
    CSSValueChocolate = 678,
    CSSValueCoral = 679,
    CSSValueCornflowerblue = 680,
    CSSValueCornsilk = 681,
    CSSValueCrimson = 682,
    CSSValueCyan = 683,
    CSSValueDarkblue = 684,
    CSSValueDarkcyan = 685,
    CSSValueDarkgoldenrod = 686,
    CSSValueDarkgray = 687,
    CSSValueDarkgreen = 688,
    CSSValueDarkgrey = 689,
    CSSValueDarkkhaki = 690,
    CSSValueDarkmagenta = 691,
    CSSValueDarkolivegreen = 692,
    CSSValueDarkorange = 693,
    CSSValueDarkorchid = 694,
    CSSValueDarkred = 695,
    CSSValueDarksalmon = 696,
    CSSValueDarkseagreen = 697,
    CSSValueDarkslateblue = 698,
    CSSValueDarkslategray = 699,
    CSSValueDarkslategrey = 700,
    CSSValueDarkturquoise = 701,
    CSSValueDarkviolet = 702,
    CSSValueDeeppink = 703,
    CSSValueDeepskyblue = 704,
    CSSValueDimgray = 705,
    CSSValueDimgrey = 706,
    CSSValueDodgerblue = 707,
    CSSValueFirebrick = 708,
    CSSValueFloralwhite = 709,
    CSSValueForestgreen = 710,
    CSSValueGainsboro = 711,
    CSSValueGhostwhite = 712,
    CSSValueGold = 713,
    CSSValueGoldenrod = 714,
    CSSValueGreenyellow = 715,
    CSSValueHoneydew = 716,
    CSSValueHotpink = 717,
    CSSValueIndianred = 718,
    CSSValueIndigo = 719,
    CSSValueIvory = 720,
    CSSValueKhaki = 721,
    CSSValueLavender = 722,
    CSSValueLavenderblush = 723,
    CSSValueLawngreen = 724,
    CSSValueLemonchiffon = 725,
    CSSValueLightblue = 726,
    CSSValueLightcoral = 727,
    CSSValueLightcyan = 728,
    CSSValueLightgoldenrodyellow = 729,
    CSSValueLightgray = 730,
    CSSValueLightgreen = 731,
    CSSValueLightgrey = 732,
    CSSValueLightpink = 733,
    CSSValueLightsalmon = 734,
    CSSValueLightseagreen = 735,
    CSSValueLightskyblue = 736,
    CSSValueLightslategray = 737,
    CSSValueLightslategrey = 738,
    CSSValueLightsteelblue = 739,
    CSSValueLightyellow = 740,
    CSSValueLimegreen = 741,
    CSSValueLinen = 742,
    CSSValueMagenta = 743,
    CSSValueMediumaquamarine = 744,
    CSSValueMediumblue = 745,
    CSSValueMediumorchid = 746,
    CSSValueMediumpurple = 747,
    CSSValueMediumseagreen = 748,
    CSSValueMediumslateblue = 749,
    CSSValueMediumspringgreen = 750,
    CSSValueMediumturquoise = 751,
    CSSValueMediumvioletred = 752,
    CSSValueMidnightblue = 753,
    CSSValueMintcream = 754,
    CSSValueMistyrose = 755,
    CSSValueMoccasin = 756,
    CSSValueNavajowhite = 757,
    CSSValueOldlace = 758,
    CSSValueOlivedrab = 759,
    CSSValueOrangered = 760,
    CSSValueOrchid = 761,
    CSSValuePalegoldenrod = 762,
    CSSValuePalegreen = 763,
    CSSValuePaleturquoise = 764,
    CSSValuePalevioletred = 765,
    CSSValuePapayawhip = 766,
    CSSValuePeachpuff = 767,
    CSSValuePeru = 768,
    CSSValuePink = 769,
    CSSValuePlum = 770,
    CSSValuePowderblue = 771,
    CSSValueRebeccapurple = 772,
    CSSValueRosybrown = 773,
    CSSValueRoyalblue = 774,
    CSSValueSaddlebrown = 775,
    CSSValueSalmon = 776,
    CSSValueSandybrown = 777,
    CSSValueSeagreen = 778,
    CSSValueSeashell = 779,
    CSSValueSienna = 780,
    CSSValueSkyblue = 781,
    CSSValueSlateblue = 782,
    CSSValueSlategray = 783,
    CSSValueSlategrey = 784,
    CSSValueSnow = 785,
    CSSValueSpringgreen = 786,
    CSSValueSteelblue = 787,
    CSSValueTan = 788,
    CSSValueThistle = 789,
    CSSValueTomato = 790,
    CSSValueTurquoise = 791,
    CSSValueViolet = 792,
    CSSValueWheat = 793,
    CSSValueWhitesmoke = 794,
    CSSValueYellowgreen = 795,
    CSSValueAlpha = 796,
    CSSValueLuminance = 797,
    CSSValueAccumulate = 798,
    CSSValueNew = 799,
    CSSValueSRGB = 800,
    CSSValueLinearRGB = 801,
    CSSValueCrispEdges = 802,
    CSSValueButt = 803,
    CSSValueMiter = 804,
    CSSValueBevel = 805,
    CSSValueBeforeEdge = 806,
    CSSValueAfterEdge = 807,
    CSSValueCentral = 808,
    CSSValueTextBeforeEdge = 809,
    CSSValueTextAfterEdge = 810,
    CSSValueIdeographic = 811,
    CSSValueHanging = 812,
    CSSValueMathematical = 813,
    CSSValueUseScript = 814,
    CSSValueNoChange = 815,
    CSSValueResetSize = 816,
    CSSValueDynamic = 817,
    CSSValueNonScalingStroke = 818,
};

const int numCSSValueKeywords = 819;
const size_t maxCSSValueKeywordLength = 42;

const char* getValueName(CSSValueID);
bool isValueAllowedInMode(unsigned short id, CSSParserMode mode);

} // namespace blink

#endif // CSSValueKeywords_h

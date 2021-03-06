
// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CSSPropertyNames_h
#define CSSPropertyNames_h

#include "core/CoreExport.h"
#include "wtf/Assertions.h"
#include <stddef.h>

namespace WTF {
class AtomicString;
class String;
}

namespace blink {

enum CSSPropertyID {
    CSSPropertyInvalid = 0,
    // This isn't a property, but we need to know the position of @apply rules in style rules
    CSSPropertyApplyAtRule = 1,
    CSSPropertyVariable = 2,
    CSSPropertyColor = 3,
    CSSPropertyDirection = 4,
    CSSPropertyFontFamily = 5,
    CSSPropertyFontKerning = 6,
    CSSPropertyFontSize = 7,
    CSSPropertyFontSizeAdjust = 8,
    CSSPropertyFontStretch = 9,
    CSSPropertyFontStyle = 10,
    CSSPropertyFontVariantLigatures = 11,
    CSSPropertyFontVariantCaps = 12,
    CSSPropertyFontVariantNumeric = 13,
    CSSPropertyFontWeight = 14,
    CSSPropertyFontFeatureSettings = 15,
    CSSPropertyWebkitFontSmoothing = 16,
    CSSPropertyWebkitLocale = 17,
    CSSPropertyTextOrientation = 18,
    CSSPropertyWebkitTextOrientation = 19,
    CSSPropertyWritingMode = 20,
    CSSPropertyWebkitWritingMode = 21,
    CSSPropertyTextRendering = 22,
    CSSPropertyZoom = 23,
    CSSPropertyAlignContent = 24,
    CSSPropertyAlignItems = 25,
    CSSPropertyAlignmentBaseline = 26,
    CSSPropertyAlignSelf = 27,
    CSSPropertyAnimationDelay = 28,
    CSSPropertyAnimationDirection = 29,
    CSSPropertyAnimationDuration = 30,
    CSSPropertyAnimationFillMode = 31,
    CSSPropertyAnimationIterationCount = 32,
    CSSPropertyAnimationName = 33,
    CSSPropertyAnimationPlayState = 34,
    CSSPropertyAnimationTimingFunction = 35,
    CSSPropertyBackdropFilter = 36,
    CSSPropertyBackfaceVisibility = 37,
    CSSPropertyBackgroundAttachment = 38,
    CSSPropertyBackgroundBlendMode = 39,
    CSSPropertyBackgroundClip = 40,
    CSSPropertyBackgroundColor = 41,
    CSSPropertyBackgroundImage = 42,
    CSSPropertyBackgroundOrigin = 43,
    CSSPropertyBackgroundPositionX = 44,
    CSSPropertyBackgroundPositionY = 45,
    CSSPropertyBackgroundRepeatX = 46,
    CSSPropertyBackgroundRepeatY = 47,
    CSSPropertyBackgroundSize = 48,
    CSSPropertyBaselineShift = 49,
    CSSPropertyBorderBottomColor = 50,
    CSSPropertyBorderBottomLeftRadius = 51,
    CSSPropertyBorderBottomRightRadius = 52,
    CSSPropertyBorderBottomStyle = 53,
    CSSPropertyBorderBottomWidth = 54,
    CSSPropertyBorderCollapse = 55,
    CSSPropertyBorderImageOutset = 56,
    CSSPropertyBorderImageRepeat = 57,
    CSSPropertyBorderImageSlice = 58,
    CSSPropertyBorderImageSource = 59,
    CSSPropertyBorderImageWidth = 60,
    CSSPropertyBorderLeftColor = 61,
    CSSPropertyBorderLeftStyle = 62,
    CSSPropertyBorderLeftWidth = 63,
    CSSPropertyBorderRightColor = 64,
    CSSPropertyBorderRightStyle = 65,
    CSSPropertyBorderRightWidth = 66,
    CSSPropertyBorderTopColor = 67,
    CSSPropertyBorderTopLeftRadius = 68,
    CSSPropertyBorderTopRightRadius = 69,
    CSSPropertyBorderTopStyle = 70,
    CSSPropertyBorderTopWidth = 71,
    CSSPropertyBottom = 72,
    CSSPropertyBoxShadow = 73,
    CSSPropertyBoxSizing = 74,
    CSSPropertyBreakAfter = 75,
    CSSPropertyBreakBefore = 76,
    CSSPropertyBreakInside = 77,
    CSSPropertyBufferedRendering = 78,
    CSSPropertyCaptionSide = 79,
    CSSPropertyClear = 80,
    CSSPropertyClip = 81,
    CSSPropertyClipPath = 82,
    CSSPropertyClipRule = 83,
    CSSPropertyColorInterpolation = 84,
    CSSPropertyColorInterpolationFilters = 85,
    CSSPropertyColorRendering = 86,
    CSSPropertyColumnFill = 87,
    CSSPropertyContain = 88,
    CSSPropertyContent = 89,
    CSSPropertyCounterIncrement = 90,
    CSSPropertyCounterReset = 91,
    CSSPropertyCursor = 92,
    CSSPropertyCx = 93,
    CSSPropertyCy = 94,
    CSSPropertyD = 95,
    CSSPropertyDisplay = 96,
    CSSPropertyDominantBaseline = 97,
    CSSPropertyEmptyCells = 98,
    CSSPropertyFill = 99,
    CSSPropertyFillOpacity = 100,
    CSSPropertyFillRule = 101,
    CSSPropertyFilter = 102,
    CSSPropertyFlexBasis = 103,
    CSSPropertyFlexDirection = 104,
    CSSPropertyFlexGrow = 105,
    CSSPropertyFlexShrink = 106,
    CSSPropertyFlexWrap = 107,
    CSSPropertyFloat = 108,
    CSSPropertyFloodColor = 109,
    CSSPropertyFloodOpacity = 110,
    CSSPropertyGridAutoColumns = 111,
    CSSPropertyGridAutoFlow = 112,
    CSSPropertyGridAutoRows = 113,
    CSSPropertyGridColumnEnd = 114,
    CSSPropertyGridColumnGap = 115,
    CSSPropertyGridColumnStart = 116,
    CSSPropertyGridRowEnd = 117,
    CSSPropertyGridRowGap = 118,
    CSSPropertyGridRowStart = 119,
    CSSPropertyGridTemplateAreas = 120,
    CSSPropertyGridTemplateColumns = 121,
    CSSPropertyGridTemplateRows = 122,
    CSSPropertyHeight = 123,
    CSSPropertyHyphens = 124,
    CSSPropertyImageRendering = 125,
    CSSPropertyImageOrientation = 126,
    CSSPropertyIsolation = 127,
    CSSPropertyJustifyContent = 128,
    CSSPropertyJustifyItems = 129,
    CSSPropertyJustifySelf = 130,
    CSSPropertyLeft = 131,
    CSSPropertyLetterSpacing = 132,
    CSSPropertyLightingColor = 133,
    CSSPropertyLineHeight = 134,
    CSSPropertyListStyleImage = 135,
    CSSPropertyListStylePosition = 136,
    CSSPropertyListStyleType = 137,
    CSSPropertyMarginBottom = 138,
    CSSPropertyMarginLeft = 139,
    CSSPropertyMarginRight = 140,
    CSSPropertyMarginTop = 141,
    CSSPropertyMarkerEnd = 142,
    CSSPropertyMarkerMid = 143,
    CSSPropertyMarkerStart = 144,
    CSSPropertyMask = 145,
    CSSPropertyMaskSourceType = 146,
    CSSPropertyMaskType = 147,
    CSSPropertyMaxHeight = 148,
    CSSPropertyMaxWidth = 149,
    CSSPropertyMinHeight = 150,
    CSSPropertyMinWidth = 151,
    CSSPropertyMixBlendMode = 152,
    CSSPropertyMotionOffset = 153,
    CSSPropertyMotionPath = 154,
    CSSPropertyMotionRotation = 155,
    CSSPropertyObjectFit = 156,
    CSSPropertyObjectPosition = 157,
    CSSPropertyOpacity = 158,
    CSSPropertyOrder = 159,
    CSSPropertyOrphans = 160,
    CSSPropertyOutlineColor = 161,
    CSSPropertyOutlineOffset = 162,
    CSSPropertyOutlineStyle = 163,
    CSSPropertyOutlineWidth = 164,
    CSSPropertyOverflowAnchor = 165,
    CSSPropertyOverflowWrap = 166,
    CSSPropertyOverflowX = 167,
    CSSPropertyOverflowY = 168,
    CSSPropertyPaddingBottom = 169,
    CSSPropertyPaddingLeft = 170,
    CSSPropertyPaddingRight = 171,
    CSSPropertyPaddingTop = 172,
    CSSPropertyPaintOrder = 173,
    CSSPropertyPerspective = 174,
    CSSPropertyPerspectiveOrigin = 175,
    CSSPropertyPointerEvents = 176,
    CSSPropertyPosition = 177,
    CSSPropertyQuotes = 178,
    CSSPropertyResize = 179,
    CSSPropertyRight = 180,
    CSSPropertyR = 181,
    CSSPropertyRx = 182,
    CSSPropertyRy = 183,
    CSSPropertyScrollBehavior = 184,
    CSSPropertyScrollSnapType = 185,
    CSSPropertyScrollSnapPointsX = 186,
    CSSPropertyScrollSnapPointsY = 187,
    CSSPropertyScrollSnapDestination = 188,
    CSSPropertyScrollSnapCoordinate = 189,
    CSSPropertyShapeImageThreshold = 190,
    CSSPropertyShapeMargin = 191,
    CSSPropertyShapeOutside = 192,
    CSSPropertyShapeRendering = 193,
    CSSPropertySize = 194,
    CSSPropertySnapHeight = 195,
    CSSPropertySpeak = 196,
    CSSPropertyStopColor = 197,
    CSSPropertyStopOpacity = 198,
    CSSPropertyStroke = 199,
    CSSPropertyStrokeDasharray = 200,
    CSSPropertyStrokeDashoffset = 201,
    CSSPropertyStrokeLinecap = 202,
    CSSPropertyStrokeLinejoin = 203,
    CSSPropertyStrokeMiterlimit = 204,
    CSSPropertyStrokeOpacity = 205,
    CSSPropertyStrokeWidth = 206,
    CSSPropertyTableLayout = 207,
    CSSPropertyTabSize = 208,
    CSSPropertyTextAlign = 209,
    CSSPropertyTextAlignLast = 210,
    CSSPropertyTextAnchor = 211,
    CSSPropertyTextCombineUpright = 212,
    CSSPropertyTextDecoration = 213,
    CSSPropertyTextDecorationColor = 214,
    CSSPropertyTextDecorationLine = 215,
    CSSPropertyTextDecorationStyle = 216,
    CSSPropertyTextIndent = 217,
    CSSPropertyTextJustify = 218,
    CSSPropertyTextOverflow = 219,
    CSSPropertyTextShadow = 220,
    CSSPropertyTextSizeAdjust = 221,
    CSSPropertyTextTransform = 222,
    CSSPropertyTextUnderlinePosition = 223,
    CSSPropertyTop = 224,
    CSSPropertyTouchAction = 225,
    CSSPropertyTransform = 226,
    CSSPropertyTransformOrigin = 227,
    CSSPropertyTransformStyle = 228,
    CSSPropertyTranslate = 229,
    CSSPropertyRotate = 230,
    CSSPropertyScale = 231,
    CSSPropertyTransitionDelay = 232,
    CSSPropertyTransitionDuration = 233,
    CSSPropertyTransitionProperty = 234,
    CSSPropertyTransitionTimingFunction = 235,
    CSSPropertyUnicodeBidi = 236,
    CSSPropertyVectorEffect = 237,
    CSSPropertyVerticalAlign = 238,
    CSSPropertyVisibility = 239,
    CSSPropertyX = 240,
    CSSPropertyY = 241,
    CSSPropertyWebkitAppearance = 242,
    CSSPropertyWebkitAppRegion = 243,
    CSSPropertyWebkitBackgroundClip = 244,
    CSSPropertyWebkitBackgroundOrigin = 245,
    CSSPropertyWebkitBorderHorizontalSpacing = 246,
    CSSPropertyWebkitBorderImage = 247,
    CSSPropertyWebkitBorderVerticalSpacing = 248,
    CSSPropertyWebkitBoxAlign = 249,
    CSSPropertyWebkitBoxDecorationBreak = 250,
    CSSPropertyWebkitBoxDirection = 251,
    CSSPropertyWebkitBoxFlex = 252,
    CSSPropertyWebkitBoxFlexGroup = 253,
    CSSPropertyWebkitBoxLines = 254,
    CSSPropertyWebkitBoxOrdinalGroup = 255,
    CSSPropertyWebkitBoxOrient = 256,
    CSSPropertyWebkitBoxPack = 257,
    CSSPropertyWebkitBoxReflect = 258,
    CSSPropertyWebkitClipPath = 259,
    CSSPropertyColumnCount = 260,
    CSSPropertyColumnGap = 261,
    CSSPropertyColumnRuleColor = 262,
    CSSPropertyColumnRuleStyle = 263,
    CSSPropertyColumnRuleWidth = 264,
    CSSPropertyColumnSpan = 265,
    CSSPropertyColumnWidth = 266,
    CSSPropertyWebkitHighlight = 267,
    CSSPropertyWebkitHyphenateCharacter = 268,
    CSSPropertyWebkitLineBreak = 269,
    CSSPropertyWebkitLineClamp = 270,
    CSSPropertyWebkitMarginAfterCollapse = 271,
    CSSPropertyWebkitMarginBeforeCollapse = 272,
    CSSPropertyWebkitMarginBottomCollapse = 273,
    CSSPropertyWebkitMarginTopCollapse = 274,
    CSSPropertyWebkitMaskBoxImageOutset = 275,
    CSSPropertyWebkitMaskBoxImageRepeat = 276,
    CSSPropertyWebkitMaskBoxImageSlice = 277,
    CSSPropertyWebkitMaskBoxImageSource = 278,
    CSSPropertyWebkitMaskBoxImageWidth = 279,
    CSSPropertyWebkitMaskClip = 280,
    CSSPropertyWebkitMaskComposite = 281,
    CSSPropertyWebkitMaskImage = 282,
    CSSPropertyWebkitMaskOrigin = 283,
    CSSPropertyWebkitMaskPositionX = 284,
    CSSPropertyWebkitMaskPositionY = 285,
    CSSPropertyWebkitMaskRepeatX = 286,
    CSSPropertyWebkitMaskRepeatY = 287,
    CSSPropertyWebkitMaskSize = 288,
    CSSPropertyWebkitPerspectiveOriginX = 289,
    CSSPropertyWebkitPerspectiveOriginY = 290,
    CSSPropertyWebkitPrintColorAdjust = 291,
    CSSPropertyWebkitRtlOrdering = 292,
    CSSPropertyWebkitRubyPosition = 293,
    CSSPropertyWebkitTapHighlightColor = 294,
    CSSPropertyWebkitTextCombine = 295,
    CSSPropertyWebkitTextEmphasisColor = 296,
    CSSPropertyWebkitTextEmphasisPosition = 297,
    CSSPropertyWebkitTextEmphasisStyle = 298,
    CSSPropertyWebkitTextFillColor = 299,
    CSSPropertyWebkitTextSecurity = 300,
    CSSPropertyWebkitTextStrokeColor = 301,
    CSSPropertyWebkitTextStrokeWidth = 302,
    CSSPropertyWebkitTransformOriginX = 303,
    CSSPropertyWebkitTransformOriginY = 304,
    CSSPropertyWebkitTransformOriginZ = 305,
    CSSPropertyWebkitUserDrag = 306,
    CSSPropertyWebkitUserModify = 307,
    CSSPropertyUserSelect = 308,
    CSSPropertyWhiteSpace = 309,
    CSSPropertyWidows = 310,
    CSSPropertyWidth = 311,
    CSSPropertyWillChange = 312,
    CSSPropertyWordBreak = 313,
    CSSPropertyWordSpacing = 314,
    CSSPropertyWordWrap = 315,
    CSSPropertyZIndex = 316,
    CSSPropertyWebkitBorderEndColor = 317,
    CSSPropertyWebkitBorderEndStyle = 318,
    CSSPropertyWebkitBorderEndWidth = 319,
    CSSPropertyWebkitBorderStartColor = 320,
    CSSPropertyWebkitBorderStartStyle = 321,
    CSSPropertyWebkitBorderStartWidth = 322,
    CSSPropertyWebkitBorderBeforeColor = 323,
    CSSPropertyWebkitBorderBeforeStyle = 324,
    CSSPropertyWebkitBorderBeforeWidth = 325,
    CSSPropertyWebkitBorderAfterColor = 326,
    CSSPropertyWebkitBorderAfterStyle = 327,
    CSSPropertyWebkitBorderAfterWidth = 328,
    CSSPropertyWebkitMarginEnd = 329,
    CSSPropertyWebkitMarginStart = 330,
    CSSPropertyWebkitMarginBefore = 331,
    CSSPropertyWebkitMarginAfter = 332,
    CSSPropertyWebkitPaddingEnd = 333,
    CSSPropertyWebkitPaddingStart = 334,
    CSSPropertyWebkitPaddingBefore = 335,
    CSSPropertyWebkitPaddingAfter = 336,
    CSSPropertyWebkitLogicalWidth = 337,
    CSSPropertyWebkitLogicalHeight = 338,
    CSSPropertyWebkitMinLogicalWidth = 339,
    CSSPropertyWebkitMinLogicalHeight = 340,
    CSSPropertyWebkitMaxLogicalWidth = 341,
    CSSPropertyWebkitMaxLogicalHeight = 342,
    CSSPropertyAll = 343,
    CSSPropertyPage = 344,
    CSSPropertyWebkitFontSizeDelta = 345,
    CSSPropertyWebkitTextDecorationsInEffect = 346,
    CSSPropertyFontDisplay = 347,
    CSSPropertyMaxZoom = 348,
    CSSPropertyMinZoom = 349,
    CSSPropertyOrientation = 350,
    CSSPropertySrc = 351,
    CSSPropertyUnicodeRange = 352,
    CSSPropertyUserZoom = 353,
    CSSPropertyAnimation = 354,
    CSSPropertyBackground = 355,
    CSSPropertyBackgroundPosition = 356,
    CSSPropertyBackgroundRepeat = 357,
    CSSPropertyBorder = 358,
    CSSPropertyBorderBottom = 359,
    CSSPropertyBorderColor = 360,
    CSSPropertyBorderImage = 361,
    CSSPropertyBorderLeft = 362,
    CSSPropertyBorderRadius = 363,
    CSSPropertyBorderRight = 364,
    CSSPropertyBorderSpacing = 365,
    CSSPropertyBorderStyle = 366,
    CSSPropertyBorderTop = 367,
    CSSPropertyBorderWidth = 368,
    CSSPropertyFlex = 369,
    CSSPropertyFlexFlow = 370,
    CSSPropertyFont = 371,
    CSSPropertyFontVariant = 372,
    CSSPropertyGrid = 373,
    CSSPropertyGridArea = 374,
    CSSPropertyGridColumn = 375,
    CSSPropertyGridGap = 376,
    CSSPropertyGridRow = 377,
    CSSPropertyGridTemplate = 378,
    CSSPropertyListStyle = 379,
    CSSPropertyMargin = 380,
    CSSPropertyMarker = 381,
    CSSPropertyMotion = 382,
    CSSPropertyOutline = 383,
    CSSPropertyOverflow = 384,
    CSSPropertyPadding = 385,
    CSSPropertyPageBreakAfter = 386,
    CSSPropertyPageBreakBefore = 387,
    CSSPropertyPageBreakInside = 388,
    CSSPropertyTransition = 389,
    CSSPropertyWebkitBorderAfter = 390,
    CSSPropertyWebkitBorderBefore = 391,
    CSSPropertyWebkitBorderEnd = 392,
    CSSPropertyWebkitBorderStart = 393,
    CSSPropertyWebkitColumnBreakAfter = 394,
    CSSPropertyWebkitColumnBreakBefore = 395,
    CSSPropertyWebkitColumnBreakInside = 396,
    CSSPropertyColumnRule = 397,
    CSSPropertyColumns = 398,
    CSSPropertyWebkitMarginCollapse = 399,
    CSSPropertyWebkitMask = 400,
    CSSPropertyWebkitMaskBoxImage = 401,
    CSSPropertyWebkitMaskPosition = 402,
    CSSPropertyWebkitMaskRepeat = 403,
    CSSPropertyWebkitTextEmphasis = 404,
    CSSPropertyWebkitTextStroke = 405,
    CSSPropertyAliasEpubCaptionSide = 591,
    CSSPropertyAliasEpubTextCombine = 807,
    CSSPropertyAliasEpubTextEmphasis = 916,
    CSSPropertyAliasEpubTextEmphasisColor = 808,
    CSSPropertyAliasEpubTextEmphasisStyle = 810,
    CSSPropertyAliasEpubTextOrientation = 531,
    CSSPropertyAliasEpubTextTransform = 734,
    CSSPropertyAliasEpubWordBreak = 825,
    CSSPropertyAliasEpubWritingMode = 533,
    CSSPropertyAliasWebkitAlignContent = 536,
    CSSPropertyAliasWebkitAlignItems = 537,
    CSSPropertyAliasWebkitAlignSelf = 539,
    CSSPropertyAliasWebkitAnimation = 866,
    CSSPropertyAliasWebkitAnimationDelay = 540,
    CSSPropertyAliasWebkitAnimationDirection = 541,
    CSSPropertyAliasWebkitAnimationDuration = 542,
    CSSPropertyAliasWebkitAnimationFillMode = 543,
    CSSPropertyAliasWebkitAnimationIterationCount = 544,
    CSSPropertyAliasWebkitAnimationName = 545,
    CSSPropertyAliasWebkitAnimationPlayState = 546,
    CSSPropertyAliasWebkitAnimationTimingFunction = 547,
    CSSPropertyAliasWebkitBackfaceVisibility = 549,
    CSSPropertyAliasWebkitBackgroundSize = 560,
    CSSPropertyAliasWebkitBorderBottomLeftRadius = 563,
    CSSPropertyAliasWebkitBorderBottomRightRadius = 564,
    CSSPropertyAliasWebkitBorderRadius = 875,
    CSSPropertyAliasWebkitBorderTopLeftRadius = 580,
    CSSPropertyAliasWebkitBorderTopRightRadius = 581,
    CSSPropertyAliasWebkitBoxShadow = 585,
    CSSPropertyAliasWebkitBoxSizing = 586,
    CSSPropertyAliasWebkitColumnCount = 772,
    CSSPropertyAliasWebkitColumnGap = 773,
    CSSPropertyAliasWebkitColumnRule = 909,
    CSSPropertyAliasWebkitColumnRuleColor = 774,
    CSSPropertyAliasWebkitColumnRuleStyle = 775,
    CSSPropertyAliasWebkitColumnRuleWidth = 776,
    CSSPropertyAliasWebkitColumnSpan = 777,
    CSSPropertyAliasWebkitColumnWidth = 778,
    CSSPropertyAliasWebkitColumns = 910,
    CSSPropertyAliasWebkitFilter = 614,
    CSSPropertyAliasWebkitFlex = 881,
    CSSPropertyAliasWebkitFlexBasis = 615,
    CSSPropertyAliasWebkitFlexDirection = 616,
    CSSPropertyAliasWebkitFlexFlow = 882,
    CSSPropertyAliasWebkitFlexGrow = 617,
    CSSPropertyAliasWebkitFlexShrink = 618,
    CSSPropertyAliasWebkitFlexWrap = 619,
    CSSPropertyAliasWebkitFontFeatureSettings = 527,
    CSSPropertyAliasWebkitJustifyContent = 640,
    CSSPropertyAliasWebkitOpacity = 670,
    CSSPropertyAliasWebkitOrder = 671,
    CSSPropertyAliasWebkitPerspective = 686,
    CSSPropertyAliasWebkitPerspectiveOrigin = 687,
    CSSPropertyAliasWebkitShapeImageThreshold = 702,
    CSSPropertyAliasWebkitShapeMargin = 703,
    CSSPropertyAliasWebkitShapeOutside = 704,
    CSSPropertyAliasWebkitTextSizeAdjust = 733,
    CSSPropertyAliasWebkitTransform = 738,
    CSSPropertyAliasWebkitTransformOrigin = 739,
    CSSPropertyAliasWebkitTransformStyle = 740,
    CSSPropertyAliasWebkitTransition = 901,
    CSSPropertyAliasWebkitTransitionDelay = 744,
    CSSPropertyAliasWebkitTransitionDuration = 745,
    CSSPropertyAliasWebkitTransitionProperty = 746,
    CSSPropertyAliasWebkitTransitionTimingFunction = 747,
    CSSPropertyAliasWebkitUserSelect = 820,
};

const int firstCSSProperty = 3;
const int numCSSProperties = 403;
const int lastCSSProperty = 405;
const int lastUnresolvedCSSProperty = 916;
const size_t maxCSSPropertyNameLength = 40;

const char* getPropertyName(CSSPropertyID);
const WTF::AtomicString& getPropertyNameAtomicString(CSSPropertyID);
WTF::String getPropertyNameString(CSSPropertyID);
WTF::String getJSPropertyName(CSSPropertyID);

inline CSSPropertyID convertToCSSPropertyID(int value)
{
    ASSERT(value >= CSSPropertyInvalid && value <= lastCSSProperty);
    return static_cast<CSSPropertyID>(value);
}

inline CSSPropertyID resolveCSSPropertyID(CSSPropertyID id)
{
    return convertToCSSPropertyID(id & ~512);
}

inline bool isPropertyAlias(CSSPropertyID id) { return id & 512; }

CSSPropertyID unresolvedCSSPropertyID(const WTF::String&);

CSSPropertyID CORE_EXPORT cssPropertyID(const WTF::String&);

} // namespace blink

#endif // CSSPropertyNames_h

// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "core/css/CSSPropertyMetadata.h"

#include "platform/RuntimeEnabledFeatures.h"
#include <bitset>

namespace blink {

bool CSSPropertyMetadata::isInterpolableProperty(CSSPropertyID property)
{
    switch(property) {
    case CSSPropertyInvalid:
        ASSERT_NOT_REACHED();
        return false;
    case CSSPropertyWebkitMaskBoxImageWidth:
    case CSSPropertyCx:
    case CSSPropertyCy:
    case CSSPropertyShapeOutside:
    case CSSPropertyTextDecorationColor:
    case CSSPropertyOutlineWidth:
    case CSSPropertyColumnRuleWidth:
    case CSSPropertyStrokeOpacity:
    case CSSPropertyHeight:
    case CSSPropertyBorderBottomLeftRadius:
    case CSSPropertyWebkitMaskPositionY:
    case CSSPropertyWebkitMaskPositionX:
    case CSSPropertyFilter:
    case CSSPropertyShapeMargin:
    case CSSPropertyOutlineColor:
    case CSSPropertyPaddingBottom:
    case CSSPropertyStopOpacity:
    case CSSPropertyBorderTopRightRadius:
    case CSSPropertyFontWeight:
    case CSSPropertyShapeImageThreshold:
    case CSSPropertyRy:
    case CSSPropertyRx:
    case CSSPropertyMarginRight:
    case CSSPropertyWebkitTextStrokeColor:
    case CSSPropertyOpacity:
    case CSSPropertyWebkitMaskBoxImageOutset:
    case CSSPropertyWebkitMaskBoxImageSource:
    case CSSPropertyMotionRotation:
    case CSSPropertyWebkitBorderHorizontalSpacing:
    case CSSPropertyColumnCount:
    case CSSPropertyStrokeDasharray:
    case CSSPropertyFlexBasis:
    case CSSPropertyWidows:
    case CSSPropertyLetterSpacing:
    case CSSPropertyWebkitTransformOriginZ:
    case CSSPropertyWebkitTransformOriginY:
    case CSSPropertyWebkitTransformOriginX:
    case CSSPropertyTransform:
    case CSSPropertyFill:
    case CSSPropertyStopColor:
    case CSSPropertyWordSpacing:
    case CSSPropertyPerspectiveOrigin:
    case CSSPropertyBorderBottomRightRadius:
    case CSSPropertyBorderRightWidth:
    case CSSPropertyBorderTopLeftRadius:
    case CSSPropertyBorderLeftWidth:
    case CSSPropertyBackgroundImage:
    case CSSPropertyBorderImageSlice:
    case CSSPropertyFillOpacity:
    case CSSPropertyBorderTopWidth:
    case CSSPropertyBottom:
    case CSSPropertyTop:
    case CSSPropertyTransformOrigin:
    case CSSPropertyMarginTop:
    case CSSPropertyMaxWidth:
    case CSSPropertyTextIndent:
    case CSSPropertyTextShadow:
    case CSSPropertyBorderImageOutset:
    case CSSPropertyPaddingRight:
    case CSSPropertyColumnRuleColor:
    case CSSPropertyPerspective:
    case CSSPropertyLineHeight:
    case CSSPropertyColumnGap:
    case CSSPropertyScale:
    case CSSPropertyStrokeDashoffset:
    case CSSPropertyBaselineShift:
    case CSSPropertyPaddingLeft:
    case CSSPropertyVerticalAlign:
    case CSSPropertyBackdropFilter:
    case CSSPropertyBorderRightColor:
    case CSSPropertyWidth:
    case CSSPropertyWebkitClipPath:
    case CSSPropertyStrokeMiterlimit:
    case CSSPropertyMarginBottom:
    case CSSPropertyOutlineOffset:
    case CSSPropertyWebkitMaskSize:
    case CSSPropertyRotate:
    case CSSPropertyBorderImageWidth:
    case CSSPropertyFlexGrow:
    case CSSPropertyWebkitMaskImage:
    case CSSPropertyLeft:
    case CSSPropertyX:
    case CSSPropertyY:
    case CSSPropertyR:
    case CSSPropertyFontSizeAdjust:
    case CSSPropertyFlexShrink:
    case CSSPropertyD:
    case CSSPropertyRight:
    case CSSPropertyBackgroundSize:
    case CSSPropertyClip:
    case CSSPropertyColor:
    case CSSPropertyWebkitBorderVerticalSpacing:
    case CSSPropertyMarginLeft:
    case CSSPropertyMinHeight:
    case CSSPropertyBorderLeftColor:
    case CSSPropertyFloodColor:
    case CSSPropertyMaxHeight:
    case CSSPropertyStroke:
    case CSSPropertyWebkitMaskBoxImageSlice:
    case CSSPropertyOrphans:
    case CSSPropertyBackgroundPositionY:
    case CSSPropertyBackgroundPositionX:
    case CSSPropertyMinWidth:
    case CSSPropertyColumnWidth:
    case CSSPropertyBorderBottomWidth:
    case CSSPropertyBorderImageSource:
    case CSSPropertyMotionOffset:
    case CSSPropertyStrokeWidth:
    case CSSPropertyTranslate:
    case CSSPropertyBorderTopColor:
    case CSSPropertyBackgroundColor:
    case CSSPropertyPaddingTop:
    case CSSPropertyBoxShadow:
    case CSSPropertyZIndex:
    case CSSPropertyListStyleImage:
    case CSSPropertyFloodOpacity:
    case CSSPropertyLightingColor:
    case CSSPropertyObjectPosition:
    case CSSPropertyWebkitPerspectiveOriginY:
    case CSSPropertyWebkitPerspectiveOriginX:
    case CSSPropertyBorderBottomColor:
    case CSSPropertyFontSize:
    case CSSPropertyVisibility:
        return true;
    default:
        return false;
    }
}

bool CSSPropertyMetadata::isInheritedProperty(CSSPropertyID property)
{
    switch(property) {
    case CSSPropertyInvalid:
        ASSERT_NOT_REACHED();
        return false;
    case CSSPropertyFillRule:
    case CSSPropertyFontVariantNumeric:
    case CSSPropertyWebkitWritingMode:
    case CSSPropertyWebkitHyphenateCharacter:
    case CSSPropertyStrokeOpacity:
    case CSSPropertyFontFamily:
    case CSSPropertyPaintOrder:
    case CSSPropertyTextRendering:
    case CSSPropertyColorInterpolation:
    case CSSPropertyImageRendering:
    case CSSPropertyWebkitTextEmphasisStyle:
    case CSSPropertyQuotes:
    case CSSPropertyWebkitBoxDirection:
    case CSSPropertyWebkitUserModify:
    case CSSPropertyFontKerning:
    case CSSPropertyFontWeight:
    case CSSPropertyWebkitFontSmoothing:
    case CSSPropertyWebkitTextStrokeColor:
    case CSSPropertyDominantBaseline:
    case CSSPropertyTextCombineUpright:
    case CSSPropertyWebkitBorderHorizontalSpacing:
    case CSSPropertyWebkitTapHighlightColor:
    case CSSPropertyCaptionSide:
    case CSSPropertyWebkitPrintColorAdjust:
    case CSSPropertyStrokeDasharray:
    case CSSPropertyWidows:
    case CSSPropertyLetterSpacing:
    case CSSPropertyWebkitRubyPosition:
    case CSSPropertyFill:
    case CSSPropertyTextJustify:
    case CSSPropertyWordSpacing:
    case CSSPropertyTextAnchor:
    case CSSPropertyFontStyle:
    case CSSPropertyWritingMode:
    case CSSPropertyWebkitTextSecurity:
    case CSSPropertyWebkitLineBreak:
    case CSSPropertyFillOpacity:
    case CSSPropertyBorderCollapse:
    case CSSPropertyWebkitRtlOrdering:
    case CSSPropertyWordWrap:
    case CSSPropertyTextIndent:
    case CSSPropertyTextShadow:
    case CSSPropertyFontVariantCaps:
    case CSSPropertyHyphens:
    case CSSPropertyTextSizeAdjust:
    case CSSPropertyUserSelect:
    case CSSPropertyLineHeight:
    case CSSPropertySnapHeight:
    case CSSPropertyWebkitTextStrokeWidth:
    case CSSPropertyStrokeDashoffset:
    case CSSPropertyWebkitTextDecorationsInEffect:
    case CSSPropertyWebkitTextFillColor:
    case CSSPropertyFontStretch:
    case CSSPropertyWhiteSpace:
    case CSSPropertyOverflowWrap:
    case CSSPropertyWebkitLocale:
    case CSSPropertyWebkitTextEmphasisPosition:
    case CSSPropertyMarkerEnd:
    case CSSPropertyTextUnderlinePosition:
    case CSSPropertyFontFeatureSettings:
    case CSSPropertyStrokeMiterlimit:
    case CSSPropertyListStylePosition:
    case CSSPropertyShapeRendering:
    case CSSPropertyColorRendering:
    case CSSPropertyStrokeLinejoin:
    case CSSPropertyPointerEvents:
    case CSSPropertyStrokeLinecap:
    case CSSPropertyFontVariantLigatures:
    case CSSPropertyMarkerMid:
    case CSSPropertyWebkitTextCombine:
    case CSSPropertyFontSizeAdjust:
    case CSSPropertyWebkitTextOrientation:
    case CSSPropertyColorInterpolationFilters:
    case CSSPropertyTextTransform:
    case CSSPropertyDirection:
    case CSSPropertyTextOrientation:
    case CSSPropertyColor:
    case CSSPropertyWebkitBorderVerticalSpacing:
    case CSSPropertyStroke:
    case CSSPropertyOrphans:
    case CSSPropertyTextAlignLast:
    case CSSPropertyCursor:
    case CSSPropertyTabSize:
    case CSSPropertyWebkitHighlight:
    case CSSPropertyEmptyCells:
    case CSSPropertyStrokeWidth:
    case CSSPropertyMarkerStart:
    case CSSPropertyWebkitTextEmphasisColor:
    case CSSPropertyWordBreak:
    case CSSPropertySpeak:
    case CSSPropertyListStyleImage:
    case CSSPropertyClipRule:
    case CSSPropertyListStyleType:
    case CSSPropertyImageOrientation:
    case CSSPropertyTextAlign:
    case CSSPropertyFontSize:
    case CSSPropertyVisibility:
    case CSSPropertyVariable:
        return true;
    default:
        return false;
    }
}

bool CSSPropertyMetadata::propertySupportsPercentage(CSSPropertyID property)
{
    switch(property) {
    case CSSPropertyInvalid:
        ASSERT_NOT_REACHED();
        return false;
    case CSSPropertyHeight:
    case CSSPropertyBorderTopWidth:
    case CSSPropertyBottom:
    case CSSPropertyTop:
    case CSSPropertyWidth:
    case CSSPropertyLeft:
    case CSSPropertyRight:
        return true;
    default:
        return false;
    }
}

bool CSSPropertyMetadata::propertySupportsMultiple(CSSPropertyID property)
{
    switch(property) {
    case CSSPropertyInvalid:
        ASSERT_NOT_REACHED();
        return false;
    case CSSPropertyContent:
        return true;
    default:
        return false;
    }
}

bool CSSPropertyMetadata::isEnabledProperty(CSSPropertyID unresolvedProperty)
{
    CSSPropertyID property = resolveCSSPropertyID(unresolvedProperty);
    static std::bitset<numCSSProperties>* enabledProperties = nullptr;
    if (!enabledProperties) {
        enabledProperties = new std::bitset<numCSSProperties>();
        enabledProperties->set(); // All bits sets to 1.
        if (!RuntimeEnabledFeatures::cssFontDisplayEnabled())
            enabledProperties->reset(CSSPropertyFontDisplay - 3);
        if (!RuntimeEnabledFeatures::css3TextDecorationsEnabled())
            enabledProperties->reset(CSSPropertyTextDecorationColor - 3);
        if (!RuntimeEnabledFeatures::cssContainmentEnabled())
            enabledProperties->reset(CSSPropertyContain - 3);
        if (!RuntimeEnabledFeatures::cssGridLayoutEnabled())
            enabledProperties->reset(CSSPropertyGridTemplate - 3);
        if (!RuntimeEnabledFeatures::css3TextDecorationsEnabled())
            enabledProperties->reset(CSSPropertyTextDecorationLine - 3);
        if (!RuntimeEnabledFeatures::cssScrollSnapPointsEnabled())
            enabledProperties->reset(CSSPropertyScrollSnapType - 3);
        if (!RuntimeEnabledFeatures::cssGridLayoutEnabled())
            enabledProperties->reset(CSSPropertyGridGap - 3);
        if (!RuntimeEnabledFeatures::cssGridLayoutEnabled())
            enabledProperties->reset(CSSPropertyGridAutoRows - 3);
        if (!RuntimeEnabledFeatures::cssGridLayoutEnabled())
            enabledProperties->reset(CSSPropertyGridColumn - 3);
        if (!RuntimeEnabledFeatures::cssGridLayoutEnabled())
            enabledProperties->reset(CSSPropertyGrid - 3);
        if (!RuntimeEnabledFeatures::cssGridLayoutEnabled())
            enabledProperties->reset(CSSPropertyGridTemplateRows - 3);
        if (!RuntimeEnabledFeatures::cssomSmoothScrollEnabled())
            enabledProperties->reset(CSSPropertyScrollBehavior - 3);
        if (!RuntimeEnabledFeatures::cssGridLayoutEnabled())
            enabledProperties->reset(CSSPropertyGridAutoFlow - 3);
        if (!RuntimeEnabledFeatures::cssGridLayoutEnabled())
            enabledProperties->reset(CSSPropertyJustifySelf - 3);
        if (!RuntimeEnabledFeatures::css3TextEnabled())
            enabledProperties->reset(CSSPropertyTextJustify - 3);
        if (!RuntimeEnabledFeatures::cssScrollSnapPointsEnabled())
            enabledProperties->reset(CSSPropertyScrollSnapPointsX - 3);
        if (!RuntimeEnabledFeatures::cssScrollSnapPointsEnabled())
            enabledProperties->reset(CSSPropertyScrollSnapPointsY - 3);
        if (!RuntimeEnabledFeatures::cssHyphensEnabled())
            enabledProperties->reset(CSSPropertyHyphens - 3);
        if (!RuntimeEnabledFeatures::cssGridLayoutEnabled())
            enabledProperties->reset(CSSPropertyGridTemplateColumns - 3);
        if (!RuntimeEnabledFeatures::cssMaskSourceTypeEnabled())
            enabledProperties->reset(CSSPropertyMaskSourceType - 3);
        if (!RuntimeEnabledFeatures::cssSnapSizeEnabled())
            enabledProperties->reset(CSSPropertySnapHeight - 3);
        if (!RuntimeEnabledFeatures::cssIndependentTransformPropertiesEnabled())
            enabledProperties->reset(CSSPropertyScale - 3);
        if (!RuntimeEnabledFeatures::cssGridLayoutEnabled())
            enabledProperties->reset(CSSPropertyGridAutoColumns - 3);
        if (!RuntimeEnabledFeatures::cssGridLayoutEnabled())
            enabledProperties->reset(CSSPropertyGridRowStart - 3);
        if (!RuntimeEnabledFeatures::cssBackdropFilterEnabled())
            enabledProperties->reset(CSSPropertyBackdropFilter - 3);
        if (!RuntimeEnabledFeatures::cssGridLayoutEnabled())
            enabledProperties->reset(CSSPropertyGridRowGap - 3);
        if (!RuntimeEnabledFeatures::cssGridLayoutEnabled())
            enabledProperties->reset(CSSPropertyGridRowEnd - 3);
        if (!RuntimeEnabledFeatures::css3TextDecorationsEnabled())
            enabledProperties->reset(CSSPropertyTextUnderlinePosition - 3);
        if (!RuntimeEnabledFeatures::cssGridLayoutEnabled())
            enabledProperties->reset(CSSPropertyGridRow - 3);
        if (!RuntimeEnabledFeatures::scrollAnchoringEnabled())
            enabledProperties->reset(CSSPropertyOverflowAnchor - 3);
        if (!RuntimeEnabledFeatures::cssGridLayoutEnabled())
            enabledProperties->reset(CSSPropertyGridColumnStart - 3);
        if (!RuntimeEnabledFeatures::cssGridLayoutEnabled())
            enabledProperties->reset(CSSPropertyJustifyItems - 3);
        if (!RuntimeEnabledFeatures::cssIndependentTransformPropertiesEnabled())
            enabledProperties->reset(CSSPropertyRotate - 3);
        if (!RuntimeEnabledFeatures::cssGridLayoutEnabled())
            enabledProperties->reset(CSSPropertyGridTemplateAreas - 3);
        if (!RuntimeEnabledFeatures::cssFontSizeAdjustEnabled())
            enabledProperties->reset(CSSPropertyFontSizeAdjust - 3);
        if (!RuntimeEnabledFeatures::cssPropertyDEnabled())
            enabledProperties->reset(CSSPropertyD - 3);
        if (!RuntimeEnabledFeatures::cssGridLayoutEnabled())
            enabledProperties->reset(CSSPropertyGridColumnEnd - 3);
        if (!RuntimeEnabledFeatures::cssScrollSnapPointsEnabled())
            enabledProperties->reset(CSSPropertyScrollSnapCoordinate - 3);
        if (!RuntimeEnabledFeatures::cssGridLayoutEnabled())
            enabledProperties->reset(CSSPropertyGridArea - 3);
        if (!RuntimeEnabledFeatures::css3TextDecorationsEnabled())
            enabledProperties->reset(CSSPropertyTextDecorationStyle - 3);
        if (!RuntimeEnabledFeatures::cssIndependentTransformPropertiesEnabled())
            enabledProperties->reset(CSSPropertyTranslate - 3);
        if (!RuntimeEnabledFeatures::imageOrientationEnabled())
            enabledProperties->reset(CSSPropertyImageOrientation - 3);
        if (!RuntimeEnabledFeatures::cssGridLayoutEnabled())
            enabledProperties->reset(CSSPropertyGridColumnGap - 3);
        if (!RuntimeEnabledFeatures::cssScrollSnapPointsEnabled())
            enabledProperties->reset(CSSPropertyScrollSnapDestination - 3);
    }

    if (unresolvedProperty >= 3)
        return enabledProperties->test(property - 3);

    if (unresolvedProperty == CSSPropertyVariable)
        return RuntimeEnabledFeatures::cssVariablesEnabled();
    ASSERT(unresolvedProperty == CSSPropertyApplyAtRule);
    return RuntimeEnabledFeatures::cssApplyAtRulesEnabled();
}

void CSSPropertyMetadata::filterEnabledCSSPropertiesIntoVector(const CSSPropertyID* properties, size_t propertyCount, Vector<CSSPropertyID>& outVector)
{
    for (unsigned i = 0; i < propertyCount; i++) {
        CSSPropertyID property = properties[i];
        if (isEnabledProperty(property))
            outVector.append(property);
    }
}

bool CSSPropertyMetadata::isDescriptorOnly(CSSPropertyID property)
{
    return property >= CSSPropertyFontDisplay && property <= CSSPropertyUserZoom;
}

} // namespace blink

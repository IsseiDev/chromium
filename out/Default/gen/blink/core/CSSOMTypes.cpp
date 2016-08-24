// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "core/css/cssom/CSSOMTypes.h"

#include "core/css/CSSPropertyMetadata.h"
#include "core/css/cssom/CSSOMKeywords.h"
#include "core/css/cssom/CSSKeywordValue.h"
#include "core/css/cssom/CSSLengthValue.h"

namespace blink {

bool CSSOMTypes::propertyCanTake(CSSPropertyID id, const CSSStyleValue& styleValue)
{
    // Shortcut special case.
    if (styleValue.type() == CSSStyleValue::SimpleLengthType || styleValue.type() == CSSStyleValue::CalcLengthType) {
        if (toCSSLengthValue(styleValue).containsPercent() && !CSSPropertyMetadata::propertySupportsPercentage(id)) {
            return false;
        }
    } else if (styleValue.type() == CSSStyleValue::KeywordType) {
        // Keywords are also handled differently.
        return CSSOMKeywords::validKeywordForProperty(id, toCSSKeywordValue(styleValue));
    } else if (styleValue.type() == CSSStyleValue::Unknown) {
        // The check happens later in this case.
        return true;
    }

    switch (id) {
    case CSSPropertyShapeOutside:
    return (
        styleValue.type() == CSSStyleValue::URLImageType
        );
    case CSSPropertyHeight:
    return (
        styleValue.type() == CSSStyleValue::SimpleLengthType
        || styleValue.type() == CSSStyleValue::CalcLengthType
        );
    case CSSPropertyContent:
    return (
        styleValue.type() == CSSStyleValue::URLImageType
        );
    case CSSPropertyTransform:
    return (
        styleValue.type() == CSSStyleValue::TransformType
        );
    case CSSPropertyBackgroundImage:
    return (
        styleValue.type() == CSSStyleValue::URLImageType
        );
    case CSSPropertyBorderTopWidth:
    return (
        styleValue.type() == CSSStyleValue::SimpleLengthType
        || styleValue.type() == CSSStyleValue::CalcLengthType
        );
    case CSSPropertyBottom:
    return (
        styleValue.type() == CSSStyleValue::SimpleLengthType
        || styleValue.type() == CSSStyleValue::CalcLengthType
        );
    case CSSPropertyTop:
    return (
        styleValue.type() == CSSStyleValue::SimpleLengthType
        || styleValue.type() == CSSStyleValue::CalcLengthType
        );
    case CSSPropertyWidth:
    return (
        styleValue.type() == CSSStyleValue::SimpleLengthType
        || styleValue.type() == CSSStyleValue::CalcLengthType
        );
    case CSSPropertyLeft:
    return (
        styleValue.type() == CSSStyleValue::SimpleLengthType
        || styleValue.type() == CSSStyleValue::CalcLengthType
        );
    case CSSPropertyRight:
    return (
        styleValue.type() == CSSStyleValue::SimpleLengthType
        || styleValue.type() == CSSStyleValue::CalcLengthType
        );
    case CSSPropertyBorderImageSource:
    return (
        styleValue.type() == CSSStyleValue::URLImageType
        );
    case CSSPropertyListStyleImage:
    return (
        styleValue.type() == CSSStyleValue::URLImageType
        );
    default:
        return false;
    }
}

}  // namespace blink

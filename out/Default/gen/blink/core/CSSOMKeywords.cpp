// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "core/css/cssom/CSSOMKeywords.h"

#include "core/css/CSSPropertyIDTemplates.h"
#include "core/css/cssom/CSSKeywordValue.h"
#include "wtf/HashMap.h"

namespace blink {

namespace {

using KeywordTable = HashMap<CSSPropertyID, Vector<CSSValueID>>;

KeywordTable createKeywordTable()
{
    KeywordTable table;

    {
        Vector<CSSValueID> heightKeywords;
        heightKeywords.append(CSSValueAuto);
        table.set(CSSPropertyHeight, heightKeywords);
    }
    {
        Vector<CSSValueID> transformKeywords;
        transformKeywords.append(CSSValueNone);
        table.set(CSSPropertyTransform, transformKeywords);
    }
    {
        Vector<CSSValueID> backgroundImageKeywords;
        backgroundImageKeywords.append(CSSValueAuto);
        table.set(CSSPropertyBackgroundImage, backgroundImageKeywords);
    }
    {
        Vector<CSSValueID> borderTopWidthKeywords;
        borderTopWidthKeywords.append(CSSValueThin);
        borderTopWidthKeywords.append(CSSValueMedium);
        borderTopWidthKeywords.append(CSSValueThick);
        table.set(CSSPropertyBorderTopWidth, borderTopWidthKeywords);
    }
    {
        Vector<CSSValueID> bottomKeywords;
        bottomKeywords.append(CSSValueAuto);
        table.set(CSSPropertyBottom, bottomKeywords);
    }
    {
        Vector<CSSValueID> topKeywords;
        topKeywords.append(CSSValueAuto);
        table.set(CSSPropertyTop, topKeywords);
    }
    {
        Vector<CSSValueID> widthKeywords;
        widthKeywords.append(CSSValueAuto);
        table.set(CSSPropertyWidth, widthKeywords);
    }
    {
        Vector<CSSValueID> leftKeywords;
        leftKeywords.append(CSSValueAuto);
        table.set(CSSPropertyLeft, leftKeywords);
    }
    {
        Vector<CSSValueID> rightKeywords;
        rightKeywords.append(CSSValueAuto);
        table.set(CSSPropertyRight, rightKeywords);
    }
    {
        Vector<CSSValueID> borderImageSourceKeywords;
        borderImageSourceKeywords.append(CSSValueNone);
        table.set(CSSPropertyBorderImageSource, borderImageSourceKeywords);
    }
    return table;
}

KeywordTable& keywordTable()
{
    DEFINE_STATIC_LOCAL(KeywordTable, keywordTable, (createKeywordTable()));
    return keywordTable;
}

} // namespace

bool CSSOMKeywords::validKeywordForProperty(CSSPropertyID id, const CSSKeywordValue& keyword)
{
    CSSValueID valueID = keyword.keywordValueID();
    if (valueID == CSSValueInvalid) {
        return false;
    }

    if (valueID == CSSValueInherit || valueID == CSSValueInitial || valueID == CSSValueUnset) {
        // These are css-wide keywords that are valid for all properties.
        return true;
    }

    const KeywordTable::iterator tableIterator = keywordTable().find(id);
    if (tableIterator == keywordTable().end()) {
        return false;
    }

    return tableIterator->value.contains(valueID);
}

} // namespace blink

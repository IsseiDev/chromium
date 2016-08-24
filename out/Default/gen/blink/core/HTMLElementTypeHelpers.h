// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef HTMLElementTypeHelpers_h
#define HTMLElementTypeHelpers_h

#include "core/dom/Element.h"
#include "HTMLNames.h"
#include "platform/RuntimeEnabledFeatures.h"

namespace blink {
// Type checking.
class HTMLAnchorElement;
void isHTMLAnchorElement(const HTMLAnchorElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLAnchorElement(const HTMLAnchorElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLAnchorElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::aTag);
}
inline bool isHTMLAnchorElement(const HTMLElement* element) { return element && isHTMLAnchorElement(*element); }
inline bool isHTMLAnchorElement(const Node& node) { return node.isHTMLElement() && isHTMLAnchorElement(toHTMLElement(node)); }
inline bool isHTMLAnchorElement(const Node* node) { return node && isHTMLAnchorElement(*node); }
template <> inline bool isElementOfType<const HTMLAnchorElement>(const Node& node) { return isHTMLAnchorElement(node); }
template <> inline bool isElementOfType<const HTMLAnchorElement>(const HTMLElement& element) { return isHTMLAnchorElement(element); }

class HTMLAreaElement;
void isHTMLAreaElement(const HTMLAreaElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLAreaElement(const HTMLAreaElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLAreaElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::areaTag);
}
inline bool isHTMLAreaElement(const HTMLElement* element) { return element && isHTMLAreaElement(*element); }
inline bool isHTMLAreaElement(const Node& node) { return node.isHTMLElement() && isHTMLAreaElement(toHTMLElement(node)); }
inline bool isHTMLAreaElement(const Node* node) { return node && isHTMLAreaElement(*node); }
template <> inline bool isElementOfType<const HTMLAreaElement>(const Node& node) { return isHTMLAreaElement(node); }
template <> inline bool isElementOfType<const HTMLAreaElement>(const HTMLElement& element) { return isHTMLAreaElement(element); }

class HTMLAudioElement;
void isHTMLAudioElement(const HTMLAudioElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLAudioElement(const HTMLAudioElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLAudioElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::audioTag);
}
inline bool isHTMLAudioElement(const HTMLElement* element) { return element && isHTMLAudioElement(*element); }
inline bool isHTMLAudioElement(const Node& node) { return node.isHTMLElement() && isHTMLAudioElement(toHTMLElement(node)); }
inline bool isHTMLAudioElement(const Node* node) { return node && isHTMLAudioElement(*node); }
template <> inline bool isElementOfType<const HTMLAudioElement>(const Node& node) { return isHTMLAudioElement(node); }
template <> inline bool isElementOfType<const HTMLAudioElement>(const HTMLElement& element) { return isHTMLAudioElement(element); }

class HTMLBRElement;
void isHTMLBRElement(const HTMLBRElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLBRElement(const HTMLBRElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLBRElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::brTag);
}
inline bool isHTMLBRElement(const HTMLElement* element) { return element && isHTMLBRElement(*element); }
inline bool isHTMLBRElement(const Node& node) { return node.isHTMLElement() && isHTMLBRElement(toHTMLElement(node)); }
inline bool isHTMLBRElement(const Node* node) { return node && isHTMLBRElement(*node); }
template <> inline bool isElementOfType<const HTMLBRElement>(const Node& node) { return isHTMLBRElement(node); }
template <> inline bool isElementOfType<const HTMLBRElement>(const HTMLElement& element) { return isHTMLBRElement(element); }

class HTMLBaseElement;
void isHTMLBaseElement(const HTMLBaseElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLBaseElement(const HTMLBaseElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLBaseElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::baseTag);
}
inline bool isHTMLBaseElement(const HTMLElement* element) { return element && isHTMLBaseElement(*element); }
inline bool isHTMLBaseElement(const Node& node) { return node.isHTMLElement() && isHTMLBaseElement(toHTMLElement(node)); }
inline bool isHTMLBaseElement(const Node* node) { return node && isHTMLBaseElement(*node); }
template <> inline bool isElementOfType<const HTMLBaseElement>(const Node& node) { return isHTMLBaseElement(node); }
template <> inline bool isElementOfType<const HTMLBaseElement>(const HTMLElement& element) { return isHTMLBaseElement(element); }

class HTMLBodyElement;
void isHTMLBodyElement(const HTMLBodyElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLBodyElement(const HTMLBodyElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLBodyElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::bodyTag);
}
inline bool isHTMLBodyElement(const HTMLElement* element) { return element && isHTMLBodyElement(*element); }
inline bool isHTMLBodyElement(const Node& node) { return node.isHTMLElement() && isHTMLBodyElement(toHTMLElement(node)); }
inline bool isHTMLBodyElement(const Node* node) { return node && isHTMLBodyElement(*node); }
template <> inline bool isElementOfType<const HTMLBodyElement>(const Node& node) { return isHTMLBodyElement(node); }
template <> inline bool isElementOfType<const HTMLBodyElement>(const HTMLElement& element) { return isHTMLBodyElement(element); }

class HTMLCanvasElement;
void isHTMLCanvasElement(const HTMLCanvasElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLCanvasElement(const HTMLCanvasElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLCanvasElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::canvasTag);
}
inline bool isHTMLCanvasElement(const HTMLElement* element) { return element && isHTMLCanvasElement(*element); }
inline bool isHTMLCanvasElement(const Node& node) { return node.isHTMLElement() && isHTMLCanvasElement(toHTMLElement(node)); }
inline bool isHTMLCanvasElement(const Node* node) { return node && isHTMLCanvasElement(*node); }
template <> inline bool isElementOfType<const HTMLCanvasElement>(const Node& node) { return isHTMLCanvasElement(node); }
template <> inline bool isElementOfType<const HTMLCanvasElement>(const HTMLElement& element) { return isHTMLCanvasElement(element); }

class HTMLContentElement;
void isHTMLContentElement(const HTMLContentElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLContentElement(const HTMLContentElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLContentElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::contentTag);
}
inline bool isHTMLContentElement(const HTMLElement* element) { return element && isHTMLContentElement(*element); }
inline bool isHTMLContentElement(const Node& node) { return node.isHTMLElement() && isHTMLContentElement(toHTMLElement(node)); }
inline bool isHTMLContentElement(const Node* node) { return node && isHTMLContentElement(*node); }
template <> inline bool isElementOfType<const HTMLContentElement>(const Node& node) { return isHTMLContentElement(node); }
template <> inline bool isElementOfType<const HTMLContentElement>(const HTMLElement& element) { return isHTMLContentElement(element); }

class HTMLDListElement;
void isHTMLDListElement(const HTMLDListElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLDListElement(const HTMLDListElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLDListElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::dlTag);
}
inline bool isHTMLDListElement(const HTMLElement* element) { return element && isHTMLDListElement(*element); }
inline bool isHTMLDListElement(const Node& node) { return node.isHTMLElement() && isHTMLDListElement(toHTMLElement(node)); }
inline bool isHTMLDListElement(const Node* node) { return node && isHTMLDListElement(*node); }
template <> inline bool isElementOfType<const HTMLDListElement>(const Node& node) { return isHTMLDListElement(node); }
template <> inline bool isElementOfType<const HTMLDListElement>(const HTMLElement& element) { return isHTMLDListElement(element); }

class HTMLDataListElement;
void isHTMLDataListElement(const HTMLDataListElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLDataListElement(const HTMLDataListElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLDataListElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::datalistTag);
}
inline bool isHTMLDataListElement(const HTMLElement* element) { return element && isHTMLDataListElement(*element); }
inline bool isHTMLDataListElement(const Node& node) { return node.isHTMLElement() && isHTMLDataListElement(toHTMLElement(node)); }
inline bool isHTMLDataListElement(const Node* node) { return node && isHTMLDataListElement(*node); }
template <> inline bool isElementOfType<const HTMLDataListElement>(const Node& node) { return isHTMLDataListElement(node); }
template <> inline bool isElementOfType<const HTMLDataListElement>(const HTMLElement& element) { return isHTMLDataListElement(element); }

class HTMLDetailsElement;
void isHTMLDetailsElement(const HTMLDetailsElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLDetailsElement(const HTMLDetailsElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLDetailsElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::detailsTag);
}
inline bool isHTMLDetailsElement(const HTMLElement* element) { return element && isHTMLDetailsElement(*element); }
inline bool isHTMLDetailsElement(const Node& node) { return node.isHTMLElement() && isHTMLDetailsElement(toHTMLElement(node)); }
inline bool isHTMLDetailsElement(const Node* node) { return node && isHTMLDetailsElement(*node); }
template <> inline bool isElementOfType<const HTMLDetailsElement>(const Node& node) { return isHTMLDetailsElement(node); }
template <> inline bool isElementOfType<const HTMLDetailsElement>(const HTMLElement& element) { return isHTMLDetailsElement(element); }

class HTMLDialogElement;
void isHTMLDialogElement(const HTMLDialogElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLDialogElement(const HTMLDialogElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLDialogElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::dialogTag);
}
inline bool isHTMLDialogElement(const HTMLElement* element) { return element && isHTMLDialogElement(*element); }
inline bool isHTMLDialogElement(const Node& node) { return node.isHTMLElement() && isHTMLDialogElement(toHTMLElement(node)); }
inline bool isHTMLDialogElement(const Node* node) { return node && isHTMLDialogElement(*node); }
template <> inline bool isElementOfType<const HTMLDialogElement>(const Node& node) { return isHTMLDialogElement(node); }
template <> inline bool isElementOfType<const HTMLDialogElement>(const HTMLElement& element) { return isHTMLDialogElement(element); }

class HTMLDirectoryElement;
void isHTMLDirectoryElement(const HTMLDirectoryElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLDirectoryElement(const HTMLDirectoryElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLDirectoryElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::dirTag);
}
inline bool isHTMLDirectoryElement(const HTMLElement* element) { return element && isHTMLDirectoryElement(*element); }
inline bool isHTMLDirectoryElement(const Node& node) { return node.isHTMLElement() && isHTMLDirectoryElement(toHTMLElement(node)); }
inline bool isHTMLDirectoryElement(const Node* node) { return node && isHTMLDirectoryElement(*node); }
template <> inline bool isElementOfType<const HTMLDirectoryElement>(const Node& node) { return isHTMLDirectoryElement(node); }
template <> inline bool isElementOfType<const HTMLDirectoryElement>(const HTMLElement& element) { return isHTMLDirectoryElement(element); }

class HTMLDivElement;
void isHTMLDivElement(const HTMLDivElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLDivElement(const HTMLDivElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLDivElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::divTag);
}
inline bool isHTMLDivElement(const HTMLElement* element) { return element && isHTMLDivElement(*element); }
inline bool isHTMLDivElement(const Node& node) { return node.isHTMLElement() && isHTMLDivElement(toHTMLElement(node)); }
inline bool isHTMLDivElement(const Node* node) { return node && isHTMLDivElement(*node); }
template <> inline bool isElementOfType<const HTMLDivElement>(const Node& node) { return isHTMLDivElement(node); }
template <> inline bool isElementOfType<const HTMLDivElement>(const HTMLElement& element) { return isHTMLDivElement(element); }

class HTMLFontElement;
void isHTMLFontElement(const HTMLFontElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLFontElement(const HTMLFontElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLFontElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::fontTag);
}
inline bool isHTMLFontElement(const HTMLElement* element) { return element && isHTMLFontElement(*element); }
inline bool isHTMLFontElement(const Node& node) { return node.isHTMLElement() && isHTMLFontElement(toHTMLElement(node)); }
inline bool isHTMLFontElement(const Node* node) { return node && isHTMLFontElement(*node); }
template <> inline bool isElementOfType<const HTMLFontElement>(const Node& node) { return isHTMLFontElement(node); }
template <> inline bool isElementOfType<const HTMLFontElement>(const HTMLElement& element) { return isHTMLFontElement(element); }

class HTMLFormElement;
void isHTMLFormElement(const HTMLFormElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLFormElement(const HTMLFormElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLFormElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::formTag);
}
inline bool isHTMLFormElement(const HTMLElement* element) { return element && isHTMLFormElement(*element); }
inline bool isHTMLFormElement(const Node& node) { return node.isHTMLElement() && isHTMLFormElement(toHTMLElement(node)); }
inline bool isHTMLFormElement(const Node* node) { return node && isHTMLFormElement(*node); }
template <> inline bool isElementOfType<const HTMLFormElement>(const Node& node) { return isHTMLFormElement(node); }
template <> inline bool isElementOfType<const HTMLFormElement>(const HTMLElement& element) { return isHTMLFormElement(element); }

class HTMLFrameElement;
void isHTMLFrameElement(const HTMLFrameElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLFrameElement(const HTMLFrameElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLFrameElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::frameTag);
}
inline bool isHTMLFrameElement(const HTMLElement* element) { return element && isHTMLFrameElement(*element); }
inline bool isHTMLFrameElement(const Node& node) { return node.isHTMLElement() && isHTMLFrameElement(toHTMLElement(node)); }
inline bool isHTMLFrameElement(const Node* node) { return node && isHTMLFrameElement(*node); }
template <> inline bool isElementOfType<const HTMLFrameElement>(const Node& node) { return isHTMLFrameElement(node); }
template <> inline bool isElementOfType<const HTMLFrameElement>(const HTMLElement& element) { return isHTMLFrameElement(element); }

class HTMLFrameSetElement;
void isHTMLFrameSetElement(const HTMLFrameSetElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLFrameSetElement(const HTMLFrameSetElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLFrameSetElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::framesetTag);
}
inline bool isHTMLFrameSetElement(const HTMLElement* element) { return element && isHTMLFrameSetElement(*element); }
inline bool isHTMLFrameSetElement(const Node& node) { return node.isHTMLElement() && isHTMLFrameSetElement(toHTMLElement(node)); }
inline bool isHTMLFrameSetElement(const Node* node) { return node && isHTMLFrameSetElement(*node); }
template <> inline bool isElementOfType<const HTMLFrameSetElement>(const Node& node) { return isHTMLFrameSetElement(node); }
template <> inline bool isElementOfType<const HTMLFrameSetElement>(const HTMLElement& element) { return isHTMLFrameSetElement(element); }

class HTMLHRElement;
void isHTMLHRElement(const HTMLHRElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLHRElement(const HTMLHRElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLHRElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::hrTag);
}
inline bool isHTMLHRElement(const HTMLElement* element) { return element && isHTMLHRElement(*element); }
inline bool isHTMLHRElement(const Node& node) { return node.isHTMLElement() && isHTMLHRElement(toHTMLElement(node)); }
inline bool isHTMLHRElement(const Node* node) { return node && isHTMLHRElement(*node); }
template <> inline bool isElementOfType<const HTMLHRElement>(const Node& node) { return isHTMLHRElement(node); }
template <> inline bool isElementOfType<const HTMLHRElement>(const HTMLElement& element) { return isHTMLHRElement(element); }

class HTMLHeadElement;
void isHTMLHeadElement(const HTMLHeadElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLHeadElement(const HTMLHeadElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLHeadElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::headTag);
}
inline bool isHTMLHeadElement(const HTMLElement* element) { return element && isHTMLHeadElement(*element); }
inline bool isHTMLHeadElement(const Node& node) { return node.isHTMLElement() && isHTMLHeadElement(toHTMLElement(node)); }
inline bool isHTMLHeadElement(const Node* node) { return node && isHTMLHeadElement(*node); }
template <> inline bool isElementOfType<const HTMLHeadElement>(const Node& node) { return isHTMLHeadElement(node); }
template <> inline bool isElementOfType<const HTMLHeadElement>(const HTMLElement& element) { return isHTMLHeadElement(element); }

class HTMLHtmlElement;
void isHTMLHtmlElement(const HTMLHtmlElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLHtmlElement(const HTMLHtmlElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLHtmlElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::htmlTag);
}
inline bool isHTMLHtmlElement(const HTMLElement* element) { return element && isHTMLHtmlElement(*element); }
inline bool isHTMLHtmlElement(const Node& node) { return node.isHTMLElement() && isHTMLHtmlElement(toHTMLElement(node)); }
inline bool isHTMLHtmlElement(const Node* node) { return node && isHTMLHtmlElement(*node); }
template <> inline bool isElementOfType<const HTMLHtmlElement>(const Node& node) { return isHTMLHtmlElement(node); }
template <> inline bool isElementOfType<const HTMLHtmlElement>(const HTMLElement& element) { return isHTMLHtmlElement(element); }

class HTMLIFrameElement;
void isHTMLIFrameElement(const HTMLIFrameElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLIFrameElement(const HTMLIFrameElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLIFrameElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::iframeTag);
}
inline bool isHTMLIFrameElement(const HTMLElement* element) { return element && isHTMLIFrameElement(*element); }
inline bool isHTMLIFrameElement(const Node& node) { return node.isHTMLElement() && isHTMLIFrameElement(toHTMLElement(node)); }
inline bool isHTMLIFrameElement(const Node* node) { return node && isHTMLIFrameElement(*node); }
template <> inline bool isElementOfType<const HTMLIFrameElement>(const Node& node) { return isHTMLIFrameElement(node); }
template <> inline bool isElementOfType<const HTMLIFrameElement>(const HTMLElement& element) { return isHTMLIFrameElement(element); }

class HTMLLIElement;
void isHTMLLIElement(const HTMLLIElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLLIElement(const HTMLLIElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLLIElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::liTag);
}
inline bool isHTMLLIElement(const HTMLElement* element) { return element && isHTMLLIElement(*element); }
inline bool isHTMLLIElement(const Node& node) { return node.isHTMLElement() && isHTMLLIElement(toHTMLElement(node)); }
inline bool isHTMLLIElement(const Node* node) { return node && isHTMLLIElement(*node); }
template <> inline bool isElementOfType<const HTMLLIElement>(const Node& node) { return isHTMLLIElement(node); }
template <> inline bool isElementOfType<const HTMLLIElement>(const HTMLElement& element) { return isHTMLLIElement(element); }

class HTMLLabelElement;
void isHTMLLabelElement(const HTMLLabelElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLLabelElement(const HTMLLabelElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLLabelElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::labelTag);
}
inline bool isHTMLLabelElement(const HTMLElement* element) { return element && isHTMLLabelElement(*element); }
inline bool isHTMLLabelElement(const Node& node) { return node.isHTMLElement() && isHTMLLabelElement(toHTMLElement(node)); }
inline bool isHTMLLabelElement(const Node* node) { return node && isHTMLLabelElement(*node); }
template <> inline bool isElementOfType<const HTMLLabelElement>(const Node& node) { return isHTMLLabelElement(node); }
template <> inline bool isElementOfType<const HTMLLabelElement>(const HTMLElement& element) { return isHTMLLabelElement(element); }

class HTMLLegendElement;
void isHTMLLegendElement(const HTMLLegendElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLLegendElement(const HTMLLegendElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLLegendElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::legendTag);
}
inline bool isHTMLLegendElement(const HTMLElement* element) { return element && isHTMLLegendElement(*element); }
inline bool isHTMLLegendElement(const Node& node) { return node.isHTMLElement() && isHTMLLegendElement(toHTMLElement(node)); }
inline bool isHTMLLegendElement(const Node* node) { return node && isHTMLLegendElement(*node); }
template <> inline bool isElementOfType<const HTMLLegendElement>(const Node& node) { return isHTMLLegendElement(node); }
template <> inline bool isElementOfType<const HTMLLegendElement>(const HTMLElement& element) { return isHTMLLegendElement(element); }

class HTMLMapElement;
void isHTMLMapElement(const HTMLMapElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLMapElement(const HTMLMapElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLMapElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::mapTag);
}
inline bool isHTMLMapElement(const HTMLElement* element) { return element && isHTMLMapElement(*element); }
inline bool isHTMLMapElement(const Node& node) { return node.isHTMLElement() && isHTMLMapElement(toHTMLElement(node)); }
inline bool isHTMLMapElement(const Node* node) { return node && isHTMLMapElement(*node); }
template <> inline bool isElementOfType<const HTMLMapElement>(const Node& node) { return isHTMLMapElement(node); }
template <> inline bool isElementOfType<const HTMLMapElement>(const HTMLElement& element) { return isHTMLMapElement(element); }

class HTMLMarqueeElement;
void isHTMLMarqueeElement(const HTMLMarqueeElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLMarqueeElement(const HTMLMarqueeElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLMarqueeElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::marqueeTag);
}
inline bool isHTMLMarqueeElement(const HTMLElement* element) { return element && isHTMLMarqueeElement(*element); }
inline bool isHTMLMarqueeElement(const Node& node) { return node.isHTMLElement() && isHTMLMarqueeElement(toHTMLElement(node)); }
inline bool isHTMLMarqueeElement(const Node* node) { return node && isHTMLMarqueeElement(*node); }
template <> inline bool isElementOfType<const HTMLMarqueeElement>(const Node& node) { return isHTMLMarqueeElement(node); }
template <> inline bool isElementOfType<const HTMLMarqueeElement>(const HTMLElement& element) { return isHTMLMarqueeElement(element); }

class HTMLMenuElement;
void isHTMLMenuElement(const HTMLMenuElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLMenuElement(const HTMLMenuElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLMenuElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::menuTag);
}
inline bool isHTMLMenuElement(const HTMLElement* element) { return element && isHTMLMenuElement(*element); }
inline bool isHTMLMenuElement(const Node& node) { return node.isHTMLElement() && isHTMLMenuElement(toHTMLElement(node)); }
inline bool isHTMLMenuElement(const Node* node) { return node && isHTMLMenuElement(*node); }
template <> inline bool isElementOfType<const HTMLMenuElement>(const Node& node) { return isHTMLMenuElement(node); }
template <> inline bool isElementOfType<const HTMLMenuElement>(const HTMLElement& element) { return isHTMLMenuElement(element); }

class HTMLMenuItemElement;
void isHTMLMenuItemElement(const HTMLMenuItemElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLMenuItemElement(const HTMLMenuItemElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLMenuItemElement(const HTMLElement& element) {
    if (!RuntimeEnabledFeatures::contextMenuEnabled())
        return false;
    return element.hasTagName(HTMLNames::menuitemTag);
}
inline bool isHTMLMenuItemElement(const HTMLElement* element) { return element && isHTMLMenuItemElement(*element); }
inline bool isHTMLMenuItemElement(const Node& node) { return node.isHTMLElement() && isHTMLMenuItemElement(toHTMLElement(node)); }
inline bool isHTMLMenuItemElement(const Node* node) { return node && isHTMLMenuItemElement(*node); }
template <> inline bool isElementOfType<const HTMLMenuItemElement>(const Node& node) { return isHTMLMenuItemElement(node); }
template <> inline bool isElementOfType<const HTMLMenuItemElement>(const HTMLElement& element) { return isHTMLMenuItemElement(element); }

class HTMLMetaElement;
void isHTMLMetaElement(const HTMLMetaElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLMetaElement(const HTMLMetaElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLMetaElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::metaTag);
}
inline bool isHTMLMetaElement(const HTMLElement* element) { return element && isHTMLMetaElement(*element); }
inline bool isHTMLMetaElement(const Node& node) { return node.isHTMLElement() && isHTMLMetaElement(toHTMLElement(node)); }
inline bool isHTMLMetaElement(const Node* node) { return node && isHTMLMetaElement(*node); }
template <> inline bool isElementOfType<const HTMLMetaElement>(const Node& node) { return isHTMLMetaElement(node); }
template <> inline bool isElementOfType<const HTMLMetaElement>(const HTMLElement& element) { return isHTMLMetaElement(element); }

class HTMLMeterElement;
void isHTMLMeterElement(const HTMLMeterElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLMeterElement(const HTMLMeterElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLMeterElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::meterTag);
}
inline bool isHTMLMeterElement(const HTMLElement* element) { return element && isHTMLMeterElement(*element); }
inline bool isHTMLMeterElement(const Node& node) { return node.isHTMLElement() && isHTMLMeterElement(toHTMLElement(node)); }
inline bool isHTMLMeterElement(const Node* node) { return node && isHTMLMeterElement(*node); }
template <> inline bool isElementOfType<const HTMLMeterElement>(const Node& node) { return isHTMLMeterElement(node); }
template <> inline bool isElementOfType<const HTMLMeterElement>(const HTMLElement& element) { return isHTMLMeterElement(element); }

class HTMLOListElement;
void isHTMLOListElement(const HTMLOListElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLOListElement(const HTMLOListElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLOListElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::olTag);
}
inline bool isHTMLOListElement(const HTMLElement* element) { return element && isHTMLOListElement(*element); }
inline bool isHTMLOListElement(const Node& node) { return node.isHTMLElement() && isHTMLOListElement(toHTMLElement(node)); }
inline bool isHTMLOListElement(const Node* node) { return node && isHTMLOListElement(*node); }
template <> inline bool isElementOfType<const HTMLOListElement>(const Node& node) { return isHTMLOListElement(node); }
template <> inline bool isElementOfType<const HTMLOListElement>(const HTMLElement& element) { return isHTMLOListElement(element); }

class HTMLOptGroupElement;
void isHTMLOptGroupElement(const HTMLOptGroupElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLOptGroupElement(const HTMLOptGroupElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLOptGroupElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::optgroupTag);
}
inline bool isHTMLOptGroupElement(const HTMLElement* element) { return element && isHTMLOptGroupElement(*element); }
inline bool isHTMLOptGroupElement(const Node& node) { return node.isHTMLElement() && isHTMLOptGroupElement(toHTMLElement(node)); }
inline bool isHTMLOptGroupElement(const Node* node) { return node && isHTMLOptGroupElement(*node); }
template <> inline bool isElementOfType<const HTMLOptGroupElement>(const Node& node) { return isHTMLOptGroupElement(node); }
template <> inline bool isElementOfType<const HTMLOptGroupElement>(const HTMLElement& element) { return isHTMLOptGroupElement(element); }

class HTMLOptionElement;
void isHTMLOptionElement(const HTMLOptionElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLOptionElement(const HTMLOptionElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLOptionElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::optionTag);
}
inline bool isHTMLOptionElement(const HTMLElement* element) { return element && isHTMLOptionElement(*element); }
inline bool isHTMLOptionElement(const Node& node) { return node.isHTMLElement() && isHTMLOptionElement(toHTMLElement(node)); }
inline bool isHTMLOptionElement(const Node* node) { return node && isHTMLOptionElement(*node); }
template <> inline bool isElementOfType<const HTMLOptionElement>(const Node& node) { return isHTMLOptionElement(node); }
template <> inline bool isElementOfType<const HTMLOptionElement>(const HTMLElement& element) { return isHTMLOptionElement(element); }

class HTMLParagraphElement;
void isHTMLParagraphElement(const HTMLParagraphElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLParagraphElement(const HTMLParagraphElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLParagraphElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::pTag);
}
inline bool isHTMLParagraphElement(const HTMLElement* element) { return element && isHTMLParagraphElement(*element); }
inline bool isHTMLParagraphElement(const Node& node) { return node.isHTMLElement() && isHTMLParagraphElement(toHTMLElement(node)); }
inline bool isHTMLParagraphElement(const Node* node) { return node && isHTMLParagraphElement(*node); }
template <> inline bool isElementOfType<const HTMLParagraphElement>(const Node& node) { return isHTMLParagraphElement(node); }
template <> inline bool isElementOfType<const HTMLParagraphElement>(const HTMLElement& element) { return isHTMLParagraphElement(element); }

class HTMLParamElement;
void isHTMLParamElement(const HTMLParamElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLParamElement(const HTMLParamElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLParamElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::paramTag);
}
inline bool isHTMLParamElement(const HTMLElement* element) { return element && isHTMLParamElement(*element); }
inline bool isHTMLParamElement(const Node& node) { return node.isHTMLElement() && isHTMLParamElement(toHTMLElement(node)); }
inline bool isHTMLParamElement(const Node* node) { return node && isHTMLParamElement(*node); }
template <> inline bool isElementOfType<const HTMLParamElement>(const Node& node) { return isHTMLParamElement(node); }
template <> inline bool isElementOfType<const HTMLParamElement>(const HTMLElement& element) { return isHTMLParamElement(element); }

class HTMLPictureElement;
void isHTMLPictureElement(const HTMLPictureElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLPictureElement(const HTMLPictureElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLPictureElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::pictureTag);
}
inline bool isHTMLPictureElement(const HTMLElement* element) { return element && isHTMLPictureElement(*element); }
inline bool isHTMLPictureElement(const Node& node) { return node.isHTMLElement() && isHTMLPictureElement(toHTMLElement(node)); }
inline bool isHTMLPictureElement(const Node* node) { return node && isHTMLPictureElement(*node); }
template <> inline bool isElementOfType<const HTMLPictureElement>(const Node& node) { return isHTMLPictureElement(node); }
template <> inline bool isElementOfType<const HTMLPictureElement>(const HTMLElement& element) { return isHTMLPictureElement(element); }

class HTMLProgressElement;
void isHTMLProgressElement(const HTMLProgressElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLProgressElement(const HTMLProgressElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLProgressElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::progressTag);
}
inline bool isHTMLProgressElement(const HTMLElement* element) { return element && isHTMLProgressElement(*element); }
inline bool isHTMLProgressElement(const Node& node) { return node.isHTMLElement() && isHTMLProgressElement(toHTMLElement(node)); }
inline bool isHTMLProgressElement(const Node* node) { return node && isHTMLProgressElement(*node); }
template <> inline bool isElementOfType<const HTMLProgressElement>(const Node& node) { return isHTMLProgressElement(node); }
template <> inline bool isElementOfType<const HTMLProgressElement>(const HTMLElement& element) { return isHTMLProgressElement(element); }

class HTMLShadowElement;
void isHTMLShadowElement(const HTMLShadowElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLShadowElement(const HTMLShadowElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLShadowElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::shadowTag);
}
inline bool isHTMLShadowElement(const HTMLElement* element) { return element && isHTMLShadowElement(*element); }
inline bool isHTMLShadowElement(const Node& node) { return node.isHTMLElement() && isHTMLShadowElement(toHTMLElement(node)); }
inline bool isHTMLShadowElement(const Node* node) { return node && isHTMLShadowElement(*node); }
template <> inline bool isElementOfType<const HTMLShadowElement>(const Node& node) { return isHTMLShadowElement(node); }
template <> inline bool isElementOfType<const HTMLShadowElement>(const HTMLElement& element) { return isHTMLShadowElement(element); }

class HTMLSlotElement;
void isHTMLSlotElement(const HTMLSlotElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLSlotElement(const HTMLSlotElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLSlotElement(const HTMLElement& element) {
    if (!RuntimeEnabledFeatures::shadowDOMV1Enabled())
        return false;
    return element.hasTagName(HTMLNames::slotTag);
}
inline bool isHTMLSlotElement(const HTMLElement* element) { return element && isHTMLSlotElement(*element); }
inline bool isHTMLSlotElement(const Node& node) { return node.isHTMLElement() && isHTMLSlotElement(toHTMLElement(node)); }
inline bool isHTMLSlotElement(const Node* node) { return node && isHTMLSlotElement(*node); }
template <> inline bool isElementOfType<const HTMLSlotElement>(const Node& node) { return isHTMLSlotElement(node); }
template <> inline bool isElementOfType<const HTMLSlotElement>(const HTMLElement& element) { return isHTMLSlotElement(element); }

class HTMLSourceElement;
void isHTMLSourceElement(const HTMLSourceElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLSourceElement(const HTMLSourceElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLSourceElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::sourceTag);
}
inline bool isHTMLSourceElement(const HTMLElement* element) { return element && isHTMLSourceElement(*element); }
inline bool isHTMLSourceElement(const Node& node) { return node.isHTMLElement() && isHTMLSourceElement(toHTMLElement(node)); }
inline bool isHTMLSourceElement(const Node* node) { return node && isHTMLSourceElement(*node); }
template <> inline bool isElementOfType<const HTMLSourceElement>(const Node& node) { return isHTMLSourceElement(node); }
template <> inline bool isElementOfType<const HTMLSourceElement>(const HTMLElement& element) { return isHTMLSourceElement(element); }

class HTMLSpanElement;
void isHTMLSpanElement(const HTMLSpanElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLSpanElement(const HTMLSpanElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLSpanElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::spanTag);
}
inline bool isHTMLSpanElement(const HTMLElement* element) { return element && isHTMLSpanElement(*element); }
inline bool isHTMLSpanElement(const Node& node) { return node.isHTMLElement() && isHTMLSpanElement(toHTMLElement(node)); }
inline bool isHTMLSpanElement(const Node* node) { return node && isHTMLSpanElement(*node); }
template <> inline bool isElementOfType<const HTMLSpanElement>(const Node& node) { return isHTMLSpanElement(node); }
template <> inline bool isElementOfType<const HTMLSpanElement>(const HTMLElement& element) { return isHTMLSpanElement(element); }

class HTMLTableCaptionElement;
void isHTMLTableCaptionElement(const HTMLTableCaptionElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLTableCaptionElement(const HTMLTableCaptionElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLTableCaptionElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::captionTag);
}
inline bool isHTMLTableCaptionElement(const HTMLElement* element) { return element && isHTMLTableCaptionElement(*element); }
inline bool isHTMLTableCaptionElement(const Node& node) { return node.isHTMLElement() && isHTMLTableCaptionElement(toHTMLElement(node)); }
inline bool isHTMLTableCaptionElement(const Node* node) { return node && isHTMLTableCaptionElement(*node); }
template <> inline bool isElementOfType<const HTMLTableCaptionElement>(const Node& node) { return isHTMLTableCaptionElement(node); }
template <> inline bool isElementOfType<const HTMLTableCaptionElement>(const HTMLElement& element) { return isHTMLTableCaptionElement(element); }

class HTMLTableElement;
void isHTMLTableElement(const HTMLTableElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLTableElement(const HTMLTableElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLTableElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::tableTag);
}
inline bool isHTMLTableElement(const HTMLElement* element) { return element && isHTMLTableElement(*element); }
inline bool isHTMLTableElement(const Node& node) { return node.isHTMLElement() && isHTMLTableElement(toHTMLElement(node)); }
inline bool isHTMLTableElement(const Node* node) { return node && isHTMLTableElement(*node); }
template <> inline bool isElementOfType<const HTMLTableElement>(const Node& node) { return isHTMLTableElement(node); }
template <> inline bool isElementOfType<const HTMLTableElement>(const HTMLElement& element) { return isHTMLTableElement(element); }

class HTMLTableRowElement;
void isHTMLTableRowElement(const HTMLTableRowElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLTableRowElement(const HTMLTableRowElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLTableRowElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::trTag);
}
inline bool isHTMLTableRowElement(const HTMLElement* element) { return element && isHTMLTableRowElement(*element); }
inline bool isHTMLTableRowElement(const Node& node) { return node.isHTMLElement() && isHTMLTableRowElement(toHTMLElement(node)); }
inline bool isHTMLTableRowElement(const Node* node) { return node && isHTMLTableRowElement(*node); }
template <> inline bool isElementOfType<const HTMLTableRowElement>(const Node& node) { return isHTMLTableRowElement(node); }
template <> inline bool isElementOfType<const HTMLTableRowElement>(const HTMLElement& element) { return isHTMLTableRowElement(element); }

class HTMLTemplateElement;
void isHTMLTemplateElement(const HTMLTemplateElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLTemplateElement(const HTMLTemplateElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLTemplateElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::templateTag);
}
inline bool isHTMLTemplateElement(const HTMLElement* element) { return element && isHTMLTemplateElement(*element); }
inline bool isHTMLTemplateElement(const Node& node) { return node.isHTMLElement() && isHTMLTemplateElement(toHTMLElement(node)); }
inline bool isHTMLTemplateElement(const Node* node) { return node && isHTMLTemplateElement(*node); }
template <> inline bool isElementOfType<const HTMLTemplateElement>(const Node& node) { return isHTMLTemplateElement(node); }
template <> inline bool isElementOfType<const HTMLTemplateElement>(const HTMLElement& element) { return isHTMLTemplateElement(element); }

class HTMLTitleElement;
void isHTMLTitleElement(const HTMLTitleElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLTitleElement(const HTMLTitleElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLTitleElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::titleTag);
}
inline bool isHTMLTitleElement(const HTMLElement* element) { return element && isHTMLTitleElement(*element); }
inline bool isHTMLTitleElement(const Node& node) { return node.isHTMLElement() && isHTMLTitleElement(toHTMLElement(node)); }
inline bool isHTMLTitleElement(const Node* node) { return node && isHTMLTitleElement(*node); }
template <> inline bool isElementOfType<const HTMLTitleElement>(const Node& node) { return isHTMLTitleElement(node); }
template <> inline bool isElementOfType<const HTMLTitleElement>(const HTMLElement& element) { return isHTMLTitleElement(element); }

class HTMLTrackElement;
void isHTMLTrackElement(const HTMLTrackElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLTrackElement(const HTMLTrackElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLTrackElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::trackTag);
}
inline bool isHTMLTrackElement(const HTMLElement* element) { return element && isHTMLTrackElement(*element); }
inline bool isHTMLTrackElement(const Node& node) { return node.isHTMLElement() && isHTMLTrackElement(toHTMLElement(node)); }
inline bool isHTMLTrackElement(const Node* node) { return node && isHTMLTrackElement(*node); }
template <> inline bool isElementOfType<const HTMLTrackElement>(const Node& node) { return isHTMLTrackElement(node); }
template <> inline bool isElementOfType<const HTMLTrackElement>(const HTMLElement& element) { return isHTMLTrackElement(element); }

class HTMLUListElement;
void isHTMLUListElement(const HTMLUListElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLUListElement(const HTMLUListElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLUListElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::ulTag);
}
inline bool isHTMLUListElement(const HTMLElement* element) { return element && isHTMLUListElement(*element); }
inline bool isHTMLUListElement(const Node& node) { return node.isHTMLElement() && isHTMLUListElement(toHTMLElement(node)); }
inline bool isHTMLUListElement(const Node* node) { return node && isHTMLUListElement(*node); }
template <> inline bool isElementOfType<const HTMLUListElement>(const Node& node) { return isHTMLUListElement(node); }
template <> inline bool isElementOfType<const HTMLUListElement>(const HTMLElement& element) { return isHTMLUListElement(element); }

class HTMLVideoElement;
void isHTMLVideoElement(const HTMLVideoElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLVideoElement(const HTMLVideoElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLVideoElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::videoTag);
}
inline bool isHTMLVideoElement(const HTMLElement* element) { return element && isHTMLVideoElement(*element); }
inline bool isHTMLVideoElement(const Node& node) { return node.isHTMLElement() && isHTMLVideoElement(toHTMLElement(node)); }
inline bool isHTMLVideoElement(const Node* node) { return node && isHTMLVideoElement(*node); }
template <> inline bool isElementOfType<const HTMLVideoElement>(const Node& node) { return isHTMLVideoElement(node); }
template <> inline bool isElementOfType<const HTMLVideoElement>(const HTMLElement& element) { return isHTMLVideoElement(element); }

class HTMLButtonElement;
void isHTMLButtonElement(const HTMLButtonElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLButtonElement(const HTMLButtonElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLButtonElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::buttonTag);
}
inline bool isHTMLButtonElement(const HTMLElement* element) { return element && isHTMLButtonElement(*element); }
inline bool isHTMLButtonElement(const Node& node) { return node.isHTMLElement() && isHTMLButtonElement(toHTMLElement(node)); }
inline bool isHTMLButtonElement(const Node* node) { return node && isHTMLButtonElement(*node); }
template <> inline bool isElementOfType<const HTMLButtonElement>(const Node& node) { return isHTMLButtonElement(node); }
template <> inline bool isElementOfType<const HTMLButtonElement>(const HTMLElement& element) { return isHTMLButtonElement(element); }

class HTMLFieldSetElement;
void isHTMLFieldSetElement(const HTMLFieldSetElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLFieldSetElement(const HTMLFieldSetElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLFieldSetElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::fieldsetTag);
}
inline bool isHTMLFieldSetElement(const HTMLElement* element) { return element && isHTMLFieldSetElement(*element); }
inline bool isHTMLFieldSetElement(const Node& node) { return node.isHTMLElement() && isHTMLFieldSetElement(toHTMLElement(node)); }
inline bool isHTMLFieldSetElement(const Node* node) { return node && isHTMLFieldSetElement(*node); }
template <> inline bool isElementOfType<const HTMLFieldSetElement>(const Node& node) { return isHTMLFieldSetElement(node); }
template <> inline bool isElementOfType<const HTMLFieldSetElement>(const HTMLElement& element) { return isHTMLFieldSetElement(element); }

class HTMLKeygenElement;
void isHTMLKeygenElement(const HTMLKeygenElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLKeygenElement(const HTMLKeygenElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLKeygenElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::keygenTag);
}
inline bool isHTMLKeygenElement(const HTMLElement* element) { return element && isHTMLKeygenElement(*element); }
inline bool isHTMLKeygenElement(const Node& node) { return node.isHTMLElement() && isHTMLKeygenElement(toHTMLElement(node)); }
inline bool isHTMLKeygenElement(const Node* node) { return node && isHTMLKeygenElement(*node); }
template <> inline bool isElementOfType<const HTMLKeygenElement>(const Node& node) { return isHTMLKeygenElement(node); }
template <> inline bool isElementOfType<const HTMLKeygenElement>(const HTMLElement& element) { return isHTMLKeygenElement(element); }

class HTMLOutputElement;
void isHTMLOutputElement(const HTMLOutputElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLOutputElement(const HTMLOutputElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLOutputElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::outputTag);
}
inline bool isHTMLOutputElement(const HTMLElement* element) { return element && isHTMLOutputElement(*element); }
inline bool isHTMLOutputElement(const Node& node) { return node.isHTMLElement() && isHTMLOutputElement(toHTMLElement(node)); }
inline bool isHTMLOutputElement(const Node* node) { return node && isHTMLOutputElement(*node); }
template <> inline bool isElementOfType<const HTMLOutputElement>(const Node& node) { return isHTMLOutputElement(node); }
template <> inline bool isElementOfType<const HTMLOutputElement>(const HTMLElement& element) { return isHTMLOutputElement(element); }

class HTMLSelectElement;
void isHTMLSelectElement(const HTMLSelectElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLSelectElement(const HTMLSelectElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLSelectElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::selectTag);
}
inline bool isHTMLSelectElement(const HTMLElement* element) { return element && isHTMLSelectElement(*element); }
inline bool isHTMLSelectElement(const Node& node) { return node.isHTMLElement() && isHTMLSelectElement(toHTMLElement(node)); }
inline bool isHTMLSelectElement(const Node* node) { return node && isHTMLSelectElement(*node); }
template <> inline bool isElementOfType<const HTMLSelectElement>(const Node& node) { return isHTMLSelectElement(node); }
template <> inline bool isElementOfType<const HTMLSelectElement>(const HTMLElement& element) { return isHTMLSelectElement(element); }

class HTMLTextAreaElement;
void isHTMLTextAreaElement(const HTMLTextAreaElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLTextAreaElement(const HTMLTextAreaElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLTextAreaElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::textareaTag);
}
inline bool isHTMLTextAreaElement(const HTMLElement* element) { return element && isHTMLTextAreaElement(*element); }
inline bool isHTMLTextAreaElement(const Node& node) { return node.isHTMLElement() && isHTMLTextAreaElement(toHTMLElement(node)); }
inline bool isHTMLTextAreaElement(const Node* node) { return node && isHTMLTextAreaElement(*node); }
template <> inline bool isElementOfType<const HTMLTextAreaElement>(const Node& node) { return isHTMLTextAreaElement(node); }
template <> inline bool isElementOfType<const HTMLTextAreaElement>(const HTMLElement& element) { return isHTMLTextAreaElement(element); }

class HTMLEmbedElement;
void isHTMLEmbedElement(const HTMLEmbedElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLEmbedElement(const HTMLEmbedElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLEmbedElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::embedTag);
}
inline bool isHTMLEmbedElement(const HTMLElement* element) { return element && isHTMLEmbedElement(*element); }
inline bool isHTMLEmbedElement(const Node& node) { return node.isHTMLElement() && isHTMLEmbedElement(toHTMLElement(node)); }
inline bool isHTMLEmbedElement(const Node* node) { return node && isHTMLEmbedElement(*node); }
template <> inline bool isElementOfType<const HTMLEmbedElement>(const Node& node) { return isHTMLEmbedElement(node); }
template <> inline bool isElementOfType<const HTMLEmbedElement>(const HTMLElement& element) { return isHTMLEmbedElement(element); }

class HTMLLinkElement;
void isHTMLLinkElement(const HTMLLinkElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLLinkElement(const HTMLLinkElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLLinkElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::linkTag);
}
inline bool isHTMLLinkElement(const HTMLElement* element) { return element && isHTMLLinkElement(*element); }
inline bool isHTMLLinkElement(const Node& node) { return node.isHTMLElement() && isHTMLLinkElement(toHTMLElement(node)); }
inline bool isHTMLLinkElement(const Node* node) { return node && isHTMLLinkElement(*node); }
template <> inline bool isElementOfType<const HTMLLinkElement>(const Node& node) { return isHTMLLinkElement(node); }
template <> inline bool isElementOfType<const HTMLLinkElement>(const HTMLElement& element) { return isHTMLLinkElement(element); }

class HTMLScriptElement;
void isHTMLScriptElement(const HTMLScriptElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLScriptElement(const HTMLScriptElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLScriptElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::scriptTag);
}
inline bool isHTMLScriptElement(const HTMLElement* element) { return element && isHTMLScriptElement(*element); }
inline bool isHTMLScriptElement(const Node& node) { return node.isHTMLElement() && isHTMLScriptElement(toHTMLElement(node)); }
inline bool isHTMLScriptElement(const Node* node) { return node && isHTMLScriptElement(*node); }
template <> inline bool isElementOfType<const HTMLScriptElement>(const Node& node) { return isHTMLScriptElement(node); }
template <> inline bool isElementOfType<const HTMLScriptElement>(const HTMLElement& element) { return isHTMLScriptElement(element); }

class HTMLStyleElement;
void isHTMLStyleElement(const HTMLStyleElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLStyleElement(const HTMLStyleElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLStyleElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::styleTag);
}
inline bool isHTMLStyleElement(const HTMLElement* element) { return element && isHTMLStyleElement(*element); }
inline bool isHTMLStyleElement(const Node& node) { return node.isHTMLElement() && isHTMLStyleElement(toHTMLElement(node)); }
inline bool isHTMLStyleElement(const Node* node) { return node && isHTMLStyleElement(*node); }
template <> inline bool isElementOfType<const HTMLStyleElement>(const Node& node) { return isHTMLStyleElement(node); }
template <> inline bool isElementOfType<const HTMLStyleElement>(const HTMLElement& element) { return isHTMLStyleElement(element); }

class HTMLImageElement;
void isHTMLImageElement(const HTMLImageElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLImageElement(const HTMLImageElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLImageElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::imgTag);
}
inline bool isHTMLImageElement(const HTMLElement* element) { return element && isHTMLImageElement(*element); }
inline bool isHTMLImageElement(const Node& node) { return node.isHTMLElement() && isHTMLImageElement(toHTMLElement(node)); }
inline bool isHTMLImageElement(const Node* node) { return node && isHTMLImageElement(*node); }
template <> inline bool isElementOfType<const HTMLImageElement>(const Node& node) { return isHTMLImageElement(node); }
template <> inline bool isElementOfType<const HTMLImageElement>(const HTMLElement& element) { return isHTMLImageElement(element); }

class HTMLInputElement;
void isHTMLInputElement(const HTMLInputElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLInputElement(const HTMLInputElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLInputElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::inputTag);
}
inline bool isHTMLInputElement(const HTMLElement* element) { return element && isHTMLInputElement(*element); }
inline bool isHTMLInputElement(const Node& node) { return node.isHTMLElement() && isHTMLInputElement(toHTMLElement(node)); }
inline bool isHTMLInputElement(const Node* node) { return node && isHTMLInputElement(*node); }
template <> inline bool isElementOfType<const HTMLInputElement>(const Node& node) { return isHTMLInputElement(node); }
template <> inline bool isElementOfType<const HTMLInputElement>(const HTMLElement& element) { return isHTMLInputElement(element); }

class HTMLObjectElement;
void isHTMLObjectElement(const HTMLObjectElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLObjectElement(const HTMLObjectElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLObjectElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::objectTag);
}
inline bool isHTMLObjectElement(const HTMLElement* element) { return element && isHTMLObjectElement(*element); }
inline bool isHTMLObjectElement(const Node& node) { return node.isHTMLElement() && isHTMLObjectElement(toHTMLElement(node)); }
inline bool isHTMLObjectElement(const Node* node) { return node && isHTMLObjectElement(*node); }
template <> inline bool isElementOfType<const HTMLObjectElement>(const Node& node) { return isHTMLObjectElement(node); }
template <> inline bool isElementOfType<const HTMLObjectElement>(const HTMLElement& element) { return isHTMLObjectElement(element); }

class HTMLBDIElement;
void isHTMLBDIElement(const HTMLBDIElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLBDIElement(const HTMLBDIElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLBDIElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::bdiTag);
}
inline bool isHTMLBDIElement(const HTMLElement* element) { return element && isHTMLBDIElement(*element); }
inline bool isHTMLBDIElement(const Node& node) { return node.isHTMLElement() && isHTMLBDIElement(toHTMLElement(node)); }
inline bool isHTMLBDIElement(const Node* node) { return node && isHTMLBDIElement(*node); }
template <> inline bool isElementOfType<const HTMLBDIElement>(const Node& node) { return isHTMLBDIElement(node); }
template <> inline bool isElementOfType<const HTMLBDIElement>(const HTMLElement& element) { return isHTMLBDIElement(element); }

class HTMLNoEmbedElement;
void isHTMLNoEmbedElement(const HTMLNoEmbedElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLNoEmbedElement(const HTMLNoEmbedElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLNoEmbedElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::noembedTag);
}
inline bool isHTMLNoEmbedElement(const HTMLElement* element) { return element && isHTMLNoEmbedElement(*element); }
inline bool isHTMLNoEmbedElement(const Node& node) { return node.isHTMLElement() && isHTMLNoEmbedElement(toHTMLElement(node)); }
inline bool isHTMLNoEmbedElement(const Node* node) { return node && isHTMLNoEmbedElement(*node); }
template <> inline bool isElementOfType<const HTMLNoEmbedElement>(const Node& node) { return isHTMLNoEmbedElement(node); }
template <> inline bool isElementOfType<const HTMLNoEmbedElement>(const HTMLElement& element) { return isHTMLNoEmbedElement(element); }

class HTMLNoScriptElement;
void isHTMLNoScriptElement(const HTMLNoScriptElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLNoScriptElement(const HTMLNoScriptElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLNoScriptElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::noscriptTag);
}
inline bool isHTMLNoScriptElement(const HTMLElement* element) { return element && isHTMLNoScriptElement(*element); }
inline bool isHTMLNoScriptElement(const Node& node) { return node.isHTMLElement() && isHTMLNoScriptElement(toHTMLElement(node)); }
inline bool isHTMLNoScriptElement(const Node* node) { return node && isHTMLNoScriptElement(*node); }
template <> inline bool isElementOfType<const HTMLNoScriptElement>(const Node& node) { return isHTMLNoScriptElement(node); }
template <> inline bool isElementOfType<const HTMLNoScriptElement>(const HTMLElement& element) { return isHTMLNoScriptElement(element); }

class HTMLRTElement;
void isHTMLRTElement(const HTMLRTElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLRTElement(const HTMLRTElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLRTElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::rtTag);
}
inline bool isHTMLRTElement(const HTMLElement* element) { return element && isHTMLRTElement(*element); }
inline bool isHTMLRTElement(const Node& node) { return node.isHTMLElement() && isHTMLRTElement(toHTMLElement(node)); }
inline bool isHTMLRTElement(const Node* node) { return node && isHTMLRTElement(*node); }
template <> inline bool isElementOfType<const HTMLRTElement>(const Node& node) { return isHTMLRTElement(node); }
template <> inline bool isElementOfType<const HTMLRTElement>(const HTMLElement& element) { return isHTMLRTElement(element); }

class HTMLRubyElement;
void isHTMLRubyElement(const HTMLRubyElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLRubyElement(const HTMLRubyElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLRubyElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::rubyTag);
}
inline bool isHTMLRubyElement(const HTMLElement* element) { return element && isHTMLRubyElement(*element); }
inline bool isHTMLRubyElement(const Node& node) { return node.isHTMLElement() && isHTMLRubyElement(toHTMLElement(node)); }
inline bool isHTMLRubyElement(const Node* node) { return node && isHTMLRubyElement(*node); }
template <> inline bool isElementOfType<const HTMLRubyElement>(const Node& node) { return isHTMLRubyElement(node); }
template <> inline bool isElementOfType<const HTMLRubyElement>(const HTMLElement& element) { return isHTMLRubyElement(element); }

class HTMLSummaryElement;
void isHTMLSummaryElement(const HTMLSummaryElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLSummaryElement(const HTMLSummaryElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLSummaryElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::summaryTag);
}
inline bool isHTMLSummaryElement(const HTMLElement* element) { return element && isHTMLSummaryElement(*element); }
inline bool isHTMLSummaryElement(const Node& node) { return node.isHTMLElement() && isHTMLSummaryElement(toHTMLElement(node)); }
inline bool isHTMLSummaryElement(const Node* node) { return node && isHTMLSummaryElement(*node); }
template <> inline bool isElementOfType<const HTMLSummaryElement>(const Node& node) { return isHTMLSummaryElement(node); }
template <> inline bool isElementOfType<const HTMLSummaryElement>(const HTMLElement& element) { return isHTMLSummaryElement(element); }

class HTMLWBRElement;
void isHTMLWBRElement(const HTMLWBRElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLWBRElement(const HTMLWBRElement*); // Catch unnecessary runtime check of type known at compile time.

inline bool isHTMLWBRElement(const HTMLElement& element) {
    return element.hasTagName(HTMLNames::wbrTag);
}
inline bool isHTMLWBRElement(const HTMLElement* element) { return element && isHTMLWBRElement(*element); }
inline bool isHTMLWBRElement(const Node& node) { return node.isHTMLElement() && isHTMLWBRElement(toHTMLElement(node)); }
inline bool isHTMLWBRElement(const Node* node) { return node && isHTMLWBRElement(*node); }
template <> inline bool isElementOfType<const HTMLWBRElement>(const Node& node) { return isHTMLWBRElement(node); }
template <> inline bool isElementOfType<const HTMLWBRElement>(const HTMLElement& element) { return isHTMLWBRElement(element); }

// Using macros because the types are forward-declared and we don't want to use reinterpret_cast in the
// casting functions above. reinterpret_cast would be unsafe due to multiple inheritence.

#define toHTMLAnchorElement(x) blink::toElement<blink::HTMLAnchorElement>(x)
#define toHTMLAreaElement(x) blink::toElement<blink::HTMLAreaElement>(x)
#define toHTMLAudioElement(x) blink::toElement<blink::HTMLAudioElement>(x)
#define toHTMLBRElement(x) blink::toElement<blink::HTMLBRElement>(x)
#define toHTMLBaseElement(x) blink::toElement<blink::HTMLBaseElement>(x)
#define toHTMLBodyElement(x) blink::toElement<blink::HTMLBodyElement>(x)
#define toHTMLCanvasElement(x) blink::toElement<blink::HTMLCanvasElement>(x)
#define toHTMLContentElement(x) blink::toElement<blink::HTMLContentElement>(x)
#define toHTMLDListElement(x) blink::toElement<blink::HTMLDListElement>(x)
#define toHTMLDataListElement(x) blink::toElement<blink::HTMLDataListElement>(x)
#define toHTMLDetailsElement(x) blink::toElement<blink::HTMLDetailsElement>(x)
#define toHTMLDialogElement(x) blink::toElement<blink::HTMLDialogElement>(x)
#define toHTMLDirectoryElement(x) blink::toElement<blink::HTMLDirectoryElement>(x)
#define toHTMLDivElement(x) blink::toElement<blink::HTMLDivElement>(x)
#define toHTMLFontElement(x) blink::toElement<blink::HTMLFontElement>(x)
#define toHTMLFormElement(x) blink::toElement<blink::HTMLFormElement>(x)
#define toHTMLFrameElement(x) blink::toElement<blink::HTMLFrameElement>(x)
#define toHTMLFrameSetElement(x) blink::toElement<blink::HTMLFrameSetElement>(x)
#define toHTMLHRElement(x) blink::toElement<blink::HTMLHRElement>(x)
#define toHTMLHeadElement(x) blink::toElement<blink::HTMLHeadElement>(x)
#define toHTMLHtmlElement(x) blink::toElement<blink::HTMLHtmlElement>(x)
#define toHTMLIFrameElement(x) blink::toElement<blink::HTMLIFrameElement>(x)
#define toHTMLLIElement(x) blink::toElement<blink::HTMLLIElement>(x)
#define toHTMLLabelElement(x) blink::toElement<blink::HTMLLabelElement>(x)
#define toHTMLLegendElement(x) blink::toElement<blink::HTMLLegendElement>(x)
#define toHTMLMapElement(x) blink::toElement<blink::HTMLMapElement>(x)
#define toHTMLMarqueeElement(x) blink::toElement<blink::HTMLMarqueeElement>(x)
#define toHTMLMenuElement(x) blink::toElement<blink::HTMLMenuElement>(x)
#define toHTMLMenuItemElement(x) blink::toElement<blink::HTMLMenuItemElement>(x)
#define toHTMLMetaElement(x) blink::toElement<blink::HTMLMetaElement>(x)
#define toHTMLMeterElement(x) blink::toElement<blink::HTMLMeterElement>(x)
#define toHTMLOListElement(x) blink::toElement<blink::HTMLOListElement>(x)
#define toHTMLOptGroupElement(x) blink::toElement<blink::HTMLOptGroupElement>(x)
#define toHTMLOptionElement(x) blink::toElement<blink::HTMLOptionElement>(x)
#define toHTMLParagraphElement(x) blink::toElement<blink::HTMLParagraphElement>(x)
#define toHTMLParamElement(x) blink::toElement<blink::HTMLParamElement>(x)
#define toHTMLPictureElement(x) blink::toElement<blink::HTMLPictureElement>(x)
#define toHTMLProgressElement(x) blink::toElement<blink::HTMLProgressElement>(x)
#define toHTMLShadowElement(x) blink::toElement<blink::HTMLShadowElement>(x)
#define toHTMLSlotElement(x) blink::toElement<blink::HTMLSlotElement>(x)
#define toHTMLSourceElement(x) blink::toElement<blink::HTMLSourceElement>(x)
#define toHTMLSpanElement(x) blink::toElement<blink::HTMLSpanElement>(x)
#define toHTMLTableCaptionElement(x) blink::toElement<blink::HTMLTableCaptionElement>(x)
#define toHTMLTableElement(x) blink::toElement<blink::HTMLTableElement>(x)
#define toHTMLTableRowElement(x) blink::toElement<blink::HTMLTableRowElement>(x)
#define toHTMLTemplateElement(x) blink::toElement<blink::HTMLTemplateElement>(x)
#define toHTMLTitleElement(x) blink::toElement<blink::HTMLTitleElement>(x)
#define toHTMLTrackElement(x) blink::toElement<blink::HTMLTrackElement>(x)
#define toHTMLUListElement(x) blink::toElement<blink::HTMLUListElement>(x)
#define toHTMLVideoElement(x) blink::toElement<blink::HTMLVideoElement>(x)
#define toHTMLButtonElement(x) blink::toElement<blink::HTMLButtonElement>(x)
#define toHTMLFieldSetElement(x) blink::toElement<blink::HTMLFieldSetElement>(x)
#define toHTMLKeygenElement(x) blink::toElement<blink::HTMLKeygenElement>(x)
#define toHTMLOutputElement(x) blink::toElement<blink::HTMLOutputElement>(x)
#define toHTMLSelectElement(x) blink::toElement<blink::HTMLSelectElement>(x)
#define toHTMLTextAreaElement(x) blink::toElement<blink::HTMLTextAreaElement>(x)
#define toHTMLEmbedElement(x) blink::toElement<blink::HTMLEmbedElement>(x)
#define toHTMLLinkElement(x) blink::toElement<blink::HTMLLinkElement>(x)
#define toHTMLScriptElement(x) blink::toElement<blink::HTMLScriptElement>(x)
#define toHTMLStyleElement(x) blink::toElement<blink::HTMLStyleElement>(x)
#define toHTMLImageElement(x) blink::toElement<blink::HTMLImageElement>(x)
#define toHTMLInputElement(x) blink::toElement<blink::HTMLInputElement>(x)
#define toHTMLObjectElement(x) blink::toElement<blink::HTMLObjectElement>(x)
#define toHTMLBDIElement(x) blink::toElement<blink::HTMLBDIElement>(x)
#define toHTMLNoEmbedElement(x) blink::toElement<blink::HTMLNoEmbedElement>(x)
#define toHTMLNoScriptElement(x) blink::toElement<blink::HTMLNoScriptElement>(x)
#define toHTMLRTElement(x) blink::toElement<blink::HTMLRTElement>(x)
#define toHTMLRubyElement(x) blink::toElement<blink::HTMLRubyElement>(x)
#define toHTMLSummaryElement(x) blink::toElement<blink::HTMLSummaryElement>(x)
#define toHTMLWBRElement(x) blink::toElement<blink::HTMLWBRElement>(x)
} // namespace blink

#endif

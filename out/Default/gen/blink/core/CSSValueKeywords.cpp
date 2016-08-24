/* C++ code produced by gperf version 3.0.4 */
/* Command-line: gperf --key-positions='*' -P -n -m 50 -D  */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif


// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "CSSValueKeywords.h"
#include "core/css/HashTools.h"
#include <string.h>

#ifdef _MSC_VER
// Disable the warnings from casting a 64-bit pointer to 32-bit long
// warning C4302: 'type cast': truncation from 'char (*)[28]' to 'long'
// warning C4311: 'type cast': pointer truncation from 'char (*)[18]' to 'long'
#pragma warning(disable : 4302 4311)
#endif

namespace blink {
static const char valueListStringPool[] = {
    "inherit\0"
    "initial\0"
    "none\0"
    "hidden\0"
    "inset\0"
    "groove\0"
    "outset\0"
    "ridge\0"
    "dotted\0"
    "dashed\0"
    "solid\0"
    "double\0"
    "caption\0"
    "icon\0"
    "menu\0"
    "message-box\0"
    "small-caption\0"
    "-webkit-mini-control\0"
    "-webkit-small-control\0"
    "-webkit-control\0"
    "status-bar\0"
    "italic\0"
    "oblique\0"
    "all\0"
    "common-ligatures\0"
    "no-common-ligatures\0"
    "discretionary-ligatures\0"
    "no-discretionary-ligatures\0"
    "historical-ligatures\0"
    "no-historical-ligatures\0"
    "contextual\0"
    "no-contextual\0"
    "small-caps\0"
    "all-small-caps\0"
    "petite-caps\0"
    "all-petite-caps\0"
    "unicase\0"
    "titling-caps\0"
    "lining-nums\0"
    "oldstyle-nums\0"
    "proportional-nums\0"
    "tabular-nums\0"
    "diagonal-fractions\0"
    "stacked-fractions\0"
    "ordinal\0"
    "slashed-zero\0"
    "normal\0"
    "bold\0"
    "bolder\0"
    "lighter\0"
    "100\0"
    "200\0"
    "300\0"
    "400\0"
    "500\0"
    "600\0"
    "700\0"
    "800\0"
    "900\0"
    "ultra-condensed\0"
    "extra-condensed\0"
    "condensed\0"
    "semi-condensed\0"
    "semi-expanded\0"
    "expanded\0"
    "extra-expanded\0"
    "ultra-expanded\0"
    "xx-small\0"
    "x-small\0"
    "small\0"
    "medium\0"
    "large\0"
    "x-large\0"
    "xx-large\0"
    "-webkit-xxx-large\0"
    "smaller\0"
    "larger\0"
    "serif\0"
    "sans-serif\0"
    "cursive\0"
    "fantasy\0"
    "monospace\0"
    "-webkit-body\0"
    "-webkit-pictograph\0"
    "swap\0"
    "fallback\0"
    "optional\0"
    "aqua\0"
    "black\0"
    "blue\0"
    "fuchsia\0"
    "gray\0"
    "green\0"
    "lime\0"
    "maroon\0"
    "navy\0"
    "olive\0"
    "orange\0"
    "purple\0"
    "red\0"
    "silver\0"
    "teal\0"
    "white\0"
    "yellow\0"
    "transparent\0"
    "-webkit-link\0"
    "-webkit-activelink\0"
    "activeborder\0"
    "activecaption\0"
    "appworkspace\0"
    "background\0"
    "buttonface\0"
    "buttonhighlight\0"
    "buttonshadow\0"
    "buttontext\0"
    "captiontext\0"
    "graytext\0"
    "highlight\0"
    "highlighttext\0"
    "inactiveborder\0"
    "inactivecaption\0"
    "inactivecaptiontext\0"
    "infobackground\0"
    "infotext\0"
    "menutext\0"
    "scrollbar\0"
    "threeddarkshadow\0"
    "threedface\0"
    "threedhighlight\0"
    "threedlightshadow\0"
    "threedshadow\0"
    "window\0"
    "windowframe\0"
    "windowtext\0"
    "-internal-active-list-box-selection\0"
    "-internal-active-list-box-selection-text\0"
    "-internal-inactive-list-box-selection\0"
    "-internal-inactive-list-box-selection-text\0"
    "-webkit-focus-ring-color\0"
    "currentcolor\0"
    "grey\0"
    "-internal-quirk-inherit\0"
    "repeat\0"
    "repeat-x\0"
    "repeat-y\0"
    "no-repeat\0"
    "clear\0"
    "copy\0"
    "source-over\0"
    "source-in\0"
    "source-out\0"
    "source-atop\0"
    "destination-over\0"
    "destination-in\0"
    "destination-out\0"
    "destination-atop\0"
    "xor\0"
    "plus-lighter\0"
    "baseline\0"
    "middle\0"
    "sub\0"
    "super\0"
    "text-top\0"
    "text-bottom\0"
    "top\0"
    "bottom\0"
    "-webkit-baseline-middle\0"
    "-webkit-auto\0"
    "left\0"
    "right\0"
    "center\0"
    "justify\0"
    "-webkit-left\0"
    "-webkit-right\0"
    "-webkit-center\0"
    "-webkit-match-parent\0"
    "-internal-center\0"
    "inter-word\0"
    "distribute\0"
    "outside\0"
    "inside\0"
    "disc\0"
    "circle\0"
    "square\0"
    "decimal\0"
    "decimal-leading-zero\0"
    "arabic-indic\0"
    "bengali\0"
    "cambodian\0"
    "khmer\0"
    "devanagari\0"
    "gujarati\0"
    "gurmukhi\0"
    "kannada\0"
    "lao\0"
    "malayalam\0"
    "mongolian\0"
    "myanmar\0"
    "oriya\0"
    "persian\0"
    "urdu\0"
    "telugu\0"
    "tibetan\0"
    "thai\0"
    "lower-roman\0"
    "upper-roman\0"
    "lower-greek\0"
    "lower-alpha\0"
    "lower-latin\0"
    "upper-alpha\0"
    "upper-latin\0"
    "cjk-earthly-branch\0"
    "cjk-heavenly-stem\0"
    "ethiopic-halehame\0"
    "ethiopic-halehame-am\0"
    "ethiopic-halehame-ti-er\0"
    "ethiopic-halehame-ti-et\0"
    "hangul\0"
    "hangul-consonant\0"
    "korean-hangul-formal\0"
    "korean-hanja-formal\0"
    "korean-hanja-informal\0"
    "hebrew\0"
    "armenian\0"
    "lower-armenian\0"
    "upper-armenian\0"
    "georgian\0"
    "cjk-ideographic\0"
    "simp-chinese-formal\0"
    "simp-chinese-informal\0"
    "trad-chinese-formal\0"
    "trad-chinese-informal\0"
    "hiragana\0"
    "katakana\0"
    "hiragana-iroha\0"
    "katakana-iroha\0"
    "inline\0"
    "block\0"
    "list-item\0"
    "inline-block\0"
    "table\0"
    "inline-table\0"
    "table-row-group\0"
    "table-header-group\0"
    "table-footer-group\0"
    "table-row\0"
    "table-column-group\0"
    "table-column\0"
    "table-cell\0"
    "table-caption\0"
    "-webkit-box\0"
    "-webkit-inline-box\0"
    "flex\0"
    "inline-flex\0"
    "grid\0"
    "inline-grid\0"
    "-webkit-flex\0"
    "-webkit-inline-flex\0"
    "auto\0"
    "crosshair\0"
    "default\0"
    "pointer\0"
    "move\0"
    "vertical-text\0"
    "cell\0"
    "context-menu\0"
    "alias\0"
    "progress\0"
    "no-drop\0"
    "not-allowed\0"
    "zoom-in\0"
    "zoom-out\0"
    "e-resize\0"
    "ne-resize\0"
    "nw-resize\0"
    "n-resize\0"
    "se-resize\0"
    "sw-resize\0"
    "s-resize\0"
    "w-resize\0"
    "ew-resize\0"
    "ns-resize\0"
    "nesw-resize\0"
    "nwse-resize\0"
    "col-resize\0"
    "row-resize\0"
    "text\0"
    "wait\0"
    "help\0"
    "all-scroll\0"
    "-webkit-grab\0"
    "-webkit-grabbing\0"
    "-webkit-zoom-in\0"
    "-webkit-zoom-out\0"
    "ltr\0"
    "rtl\0"
    "capitalize\0"
    "uppercase\0"
    "lowercase\0"
    "visible\0"
    "collapse\0"
    "a3\0"
    "a4\0"
    "a5\0"
    "above\0"
    "absolute\0"
    "always\0"
    "avoid\0"
    "b4\0"
    "b5\0"
    "below\0"
    "bidi-override\0"
    "blink\0"
    "both\0"
    "close-quote\0"
    "embed\0"
    "fixed\0"
    "hand\0"
    "hide\0"
    "isolate\0"
    "isolate-override\0"
    "plaintext\0"
    "-webkit-isolate\0"
    "-webkit-isolate-override\0"
    "-webkit-plaintext\0"
    "landscape\0"
    "ledger\0"
    "legal\0"
    "letter\0"
    "line-through\0"
    "local\0"
    "no-close-quote\0"
    "no-open-quote\0"
    "nowrap\0"
    "open-quote\0"
    "overlay\0"
    "overline\0"
    "portrait\0"
    "pre\0"
    "pre-line\0"
    "pre-wrap\0"
    "relative\0"
    "scroll\0"
    "separate\0"
    "show\0"
    "static\0"
    "thick\0"
    "thin\0"
    "underline\0"
    "wavy\0"
    "-webkit-nowrap\0"
    "stretch\0"
    "start\0"
    "end\0"
    "clone\0"
    "slice\0"
    "reverse\0"
    "horizontal\0"
    "vertical\0"
    "inline-axis\0"
    "block-axis\0"
    "single\0"
    "multiple\0"
    "flex-start\0"
    "flex-end\0"
    "space-between\0"
    "space-around\0"
    "space-evenly\0"
    "unsafe\0"
    "safe\0"
    "row\0"
    "row-reverse\0"
    "column\0"
    "column-reverse\0"
    "wrap\0"
    "wrap-reverse\0"
    "dense\0"
    "read-only\0"
    "read-write\0"
    "read-write-plaintext-only\0"
    "element\0"
    "-webkit-min-content\0"
    "-webkit-max-content\0"
    "-webkit-fill-available\0"
    "-webkit-fit-content\0"
    "min-content\0"
    "max-content\0"
    "fit-content\0"
    "clip\0"
    "ellipsis\0"
    "discard\0"
    "break-all\0"
    "keep-all\0"
    "break-word\0"
    "space\0"
    "loose\0"
    "strict\0"
    "after-white-space\0"
    "manual\0"
    "checkbox\0"
    "radio\0"
    "push-button\0"
    "square-button\0"
    "button\0"
    "button-bevel\0"
    "inner-spin-button\0"
    "listbox\0"
    "listitem\0"
    "media-enter-fullscreen-button\0"
    "media-exit-fullscreen-button\0"
    "media-fullscreen-volume-slider\0"
    "media-fullscreen-volume-slider-thumb\0"
    "media-mute-button\0"
    "media-play-button\0"
    "media-overlay-play-button\0"
    "media-toggle-closed-captions-button\0"
    "media-slider\0"
    "media-sliderthumb\0"
    "media-volume-slider-container\0"
    "media-volume-slider\0"
    "media-volume-sliderthumb\0"
    "media-controls-background\0"
    "media-controls-fullscreen-background\0"
    "media-current-time-display\0"
    "media-time-remaining-display\0"
    "-internal-media-cast-off-button\0"
    "-internal-media-overlay-cast-off-button\0"
    "-internal-media-track-selection-checkmark\0"
    "-internal-media-closed-captions-icon\0"
    "-internal-media-subtitles-icon\0"
    "menulist\0"
    "menulist-button\0"
    "menulist-text\0"
    "menulist-textfield\0"
    "meter\0"
    "progress-bar\0"
    "progress-bar-value\0"
    "slider-horizontal\0"
    "slider-vertical\0"
    "sliderthumb-horizontal\0"
    "sliderthumb-vertical\0"
    "caret\0"
    "searchfield\0"
    "searchfield-cancel-button\0"
    "textfield\0"
    "textarea\0"
    "caps-lock-indicator\0"
    "round\0"
    "border\0"
    "border-box\0"
    "content\0"
    "content-box\0"
    "padding\0"
    "padding-box\0"
    "margin-box\0"
    "contain\0"
    "cover\0"
    "logical\0"
    "visual\0"
    "alternate\0"
    "alternate-reverse\0"
    "forwards\0"
    "backwards\0"
    "infinite\0"
    "running\0"
    "paused\0"
    "flat\0"
    "preserve-3d\0"
    "ease\0"
    "linear\0"
    "ease-in\0"
    "ease-out\0"
    "ease-in-out\0"
    "step-start\0"
    "step-middle\0"
    "step-end\0"
    "steps\0"
    "cubic-bezier\0"
    "document\0"
    "reset\0"
    "zoom\0"
    "visiblePainted\0"
    "visibleFill\0"
    "visibleStroke\0"
    "painted\0"
    "fill\0"
    "stroke\0"
    "bounding-box\0"
    "spell-out\0"
    "digits\0"
    "literal-punctuation\0"
    "no-punctuation\0"
    "antialiased\0"
    "subpixel-antialiased\0"
    "optimizeSpeed\0"
    "optimizeLegibility\0"
    "geometricPrecision\0"
    "economy\0"
    "exact\0"
    "lr\0"
    "rl\0"
    "tb\0"
    "lr-tb\0"
    "rl-tb\0"
    "tb-rl\0"
    "horizontal-tb\0"
    "vertical-rl\0"
    "vertical-lr\0"
    "after\0"
    "before\0"
    "over\0"
    "under\0"
    "filled\0"
    "open\0"
    "dot\0"
    "double-circle\0"
    "triangle\0"
    "sesame\0"
    "ellipse\0"
    "closest-side\0"
    "closest-corner\0"
    "farthest-side\0"
    "farthest-corner\0"
    "mixed\0"
    "sideways\0"
    "sideways-right\0"
    "upright\0"
    "vertical-right\0"
    "on\0"
    "off\0"
    "optimizeQuality\0"
    "pixelated\0"
    "-webkit-optimize-contrast\0"
    "nonzero\0"
    "evenodd\0"
    "at\0"
    "alphabetic\0"
    "fullscreen\0"
    "standalone\0"
    "minimal-ui\0"
    "browser\0"
    "sticky\0"
    "coarse\0"
    "fine\0"
    "on-demand\0"
    "hover\0"
    "multiply\0"
    "screen\0"
    "darken\0"
    "lighten\0"
    "color-dodge\0"
    "color-burn\0"
    "hard-light\0"
    "soft-light\0"
    "difference\0"
    "exclusion\0"
    "hue\0"
    "saturation\0"
    "color\0"
    "luminosity\0"
    "scale-down\0"
    "balance\0"
    "-webkit-paged-x\0"
    "-webkit-paged-y\0"
    "drag\0"
    "no-drag\0"
    "span\0"
    "minmax\0"
    "each-line\0"
    "progressive\0"
    "interlace\0"
    "markers\0"
    "-internal-extend-to-zoom\0"
    "pan-x\0"
    "pan-y\0"
    "pan-left\0"
    "pan-right\0"
    "pan-up\0"
    "pan-down\0"
    "manipulation\0"
    "last-baseline\0"
    "self-start\0"
    "self-end\0"
    "legacy\0"
    "smooth\0"
    "contents\0"
    "scroll-position\0"
    "revert\0"
    "unset\0"
    "linear-gradient\0"
    "radial-gradient\0"
    "repeating-linear-gradient\0"
    "repeating-radial-gradient\0"
    "paint\0"
    "-webkit-cross-fade\0"
    "-webkit-gradient\0"
    "-webkit-linear-gradient\0"
    "-webkit-radial-gradient\0"
    "-webkit-repeating-linear-gradient\0"
    "-webkit-repeating-radial-gradient\0"
    "-webkit-image-set\0"
    "from\0"
    "to\0"
    "color-stop\0"
    "radial\0"
    "attr\0"
    "counter\0"
    "counters\0"
    "rect\0"
    "polygon\0"
    "format\0"
    "invert\0"
    "grayscale\0"
    "sepia\0"
    "saturate\0"
    "hue-rotate\0"
    "opacity\0"
    "brightness\0"
    "contrast\0"
    "blur\0"
    "drop-shadow\0"
    "url\0"
    "rgb\0"
    "rgba\0"
    "hsl\0"
    "hsla\0"
    "matrix\0"
    "matrix3d\0"
    "perspective\0"
    "rotate\0"
    "rotateX\0"
    "rotateY\0"
    "rotateZ\0"
    "rotate3d\0"
    "scale\0"
    "scaleX\0"
    "scaleY\0"
    "scaleZ\0"
    "scale3d\0"
    "skew\0"
    "skewX\0"
    "skewY\0"
    "translate\0"
    "translateX\0"
    "translateY\0"
    "translateZ\0"
    "translate3d\0"
    "path\0"
    "calc\0"
    "-webkit-calc\0"
    "mandatory\0"
    "proximity\0"
    "from-image\0"
    "style\0"
    "layout\0"
    "size\0"
    "auto-fill\0"
    "auto-fit\0"
    "var\0"
    "-internal-variable-value\0"
    "avoid-page\0"
    "page\0"
    "recto\0"
    "verso\0"
    "avoid-column\0"
    "aliceblue\0"
    "antiquewhite\0"
    "aquamarine\0"
    "azure\0"
    "beige\0"
    "bisque\0"
    "blanchedalmond\0"
    "blueviolet\0"
    "brown\0"
    "burlywood\0"
    "cadetblue\0"
    "chartreuse\0"
    "chocolate\0"
    "coral\0"
    "cornflowerblue\0"
    "cornsilk\0"
    "crimson\0"
    "cyan\0"
    "darkblue\0"
    "darkcyan\0"
    "darkgoldenrod\0"
    "darkgray\0"
    "darkgreen\0"
    "darkgrey\0"
    "darkkhaki\0"
    "darkmagenta\0"
    "darkolivegreen\0"
    "darkorange\0"
    "darkorchid\0"
    "darkred\0"
    "darksalmon\0"
    "darkseagreen\0"
    "darkslateblue\0"
    "darkslategray\0"
    "darkslategrey\0"
    "darkturquoise\0"
    "darkviolet\0"
    "deeppink\0"
    "deepskyblue\0"
    "dimgray\0"
    "dimgrey\0"
    "dodgerblue\0"
    "firebrick\0"
    "floralwhite\0"
    "forestgreen\0"
    "gainsboro\0"
    "ghostwhite\0"
    "gold\0"
    "goldenrod\0"
    "greenyellow\0"
    "honeydew\0"
    "hotpink\0"
    "indianred\0"
    "indigo\0"
    "ivory\0"
    "khaki\0"
    "lavender\0"
    "lavenderblush\0"
    "lawngreen\0"
    "lemonchiffon\0"
    "lightblue\0"
    "lightcoral\0"
    "lightcyan\0"
    "lightgoldenrodyellow\0"
    "lightgray\0"
    "lightgreen\0"
    "lightgrey\0"
    "lightpink\0"
    "lightsalmon\0"
    "lightseagreen\0"
    "lightskyblue\0"
    "lightslategray\0"
    "lightslategrey\0"
    "lightsteelblue\0"
    "lightyellow\0"
    "limegreen\0"
    "linen\0"
    "magenta\0"
    "mediumaquamarine\0"
    "mediumblue\0"
    "mediumorchid\0"
    "mediumpurple\0"
    "mediumseagreen\0"
    "mediumslateblue\0"
    "mediumspringgreen\0"
    "mediumturquoise\0"
    "mediumvioletred\0"
    "midnightblue\0"
    "mintcream\0"
    "mistyrose\0"
    "moccasin\0"
    "navajowhite\0"
    "oldlace\0"
    "olivedrab\0"
    "orangered\0"
    "orchid\0"
    "palegoldenrod\0"
    "palegreen\0"
    "paleturquoise\0"
    "palevioletred\0"
    "papayawhip\0"
    "peachpuff\0"
    "peru\0"
    "pink\0"
    "plum\0"
    "powderblue\0"
    "rebeccapurple\0"
    "rosybrown\0"
    "royalblue\0"
    "saddlebrown\0"
    "salmon\0"
    "sandybrown\0"
    "seagreen\0"
    "seashell\0"
    "sienna\0"
    "skyblue\0"
    "slateblue\0"
    "slategray\0"
    "slategrey\0"
    "snow\0"
    "springgreen\0"
    "steelblue\0"
    "tan\0"
    "thistle\0"
    "tomato\0"
    "turquoise\0"
    "violet\0"
    "wheat\0"
    "whitesmoke\0"
    "yellowgreen\0"
    "alpha\0"
    "luminance\0"
    "accumulate\0"
    "new\0"
    "sRGB\0"
    "linearRGB\0"
    "crispEdges\0"
    "butt\0"
    "miter\0"
    "bevel\0"
    "before-edge\0"
    "after-edge\0"
    "central\0"
    "text-before-edge\0"
    "text-after-edge\0"
    "ideographic\0"
    "hanging\0"
    "mathematical\0"
    "use-script\0"
    "no-change\0"
    "reset-size\0"
    "dynamic\0"
    "non-scaling-stroke\0"
};

static const unsigned short valueListStringOffsets[] = {
  0,
  8,
  16,
  21,
  28,
  34,
  41,
  48,
  54,
  61,
  68,
  74,
  81,
  89,
  94,
  99,
  111,
  125,
  146,
  168,
  184,
  195,
  202,
  210,
  214,
  231,
  251,
  275,
  302,
  323,
  347,
  358,
  372,
  383,
  398,
  410,
  426,
  434,
  447,
  459,
  473,
  491,
  504,
  523,
  541,
  549,
  562,
  569,
  574,
  581,
  589,
  593,
  597,
  601,
  605,
  609,
  613,
  617,
  621,
  625,
  641,
  657,
  667,
  682,
  696,
  705,
  720,
  735,
  744,
  752,
  758,
  765,
  771,
  779,
  788,
  806,
  814,
  821,
  827,
  838,
  846,
  854,
  864,
  877,
  896,
  901,
  910,
  919,
  924,
  930,
  935,
  943,
  948,
  954,
  959,
  966,
  971,
  977,
  984,
  991,
  995,
  1002,
  1007,
  1013,
  1020,
  1032,
  1045,
  1064,
  1077,
  1091,
  1104,
  1115,
  1126,
  1142,
  1155,
  1166,
  1178,
  1187,
  1197,
  1211,
  1226,
  1242,
  1262,
  1277,
  1286,
  1295,
  1305,
  1322,
  1333,
  1349,
  1367,
  1380,
  1387,
  1399,
  1410,
  1446,
  1487,
  1525,
  1568,
  1593,
  1606,
  1611,
  1635,
  1642,
  1651,
  1660,
  1670,
  1676,
  1681,
  1693,
  1703,
  1714,
  1726,
  1743,
  1758,
  1774,
  1791,
  1795,
  1808,
  1817,
  1824,
  1828,
  1834,
  1843,
  1855,
  1859,
  1866,
  1890,
  1903,
  1908,
  1914,
  1921,
  1929,
  1942,
  1956,
  1971,
  1992,
  2009,
  2020,
  2031,
  2039,
  2046,
  2051,
  2058,
  2065,
  2073,
  2094,
  2107,
  2115,
  2125,
  2131,
  2142,
  2151,
  2160,
  2168,
  2172,
  2182,
  2192,
  2200,
  2206,
  2214,
  2219,
  2226,
  2234,
  2239,
  2251,
  2263,
  2275,
  2287,
  2299,
  2311,
  2323,
  2342,
  2360,
  2378,
  2399,
  2423,
  2447,
  2454,
  2471,
  2492,
  2512,
  2534,
  2541,
  2550,
  2565,
  2580,
  2589,
  2605,
  2625,
  2647,
  2667,
  2689,
  2698,
  2707,
  2722,
  2737,
  2744,
  2750,
  2760,
  2773,
  2779,
  2792,
  2808,
  2827,
  2846,
  2856,
  2875,
  2888,
  2899,
  2913,
  2925,
  2944,
  2949,
  2961,
  2966,
  2978,
  2991,
  3011,
  3016,
  3026,
  3034,
  3042,
  3047,
  3061,
  3066,
  3079,
  3085,
  3094,
  3102,
  3114,
  3122,
  3131,
  3140,
  3150,
  3160,
  3169,
  3179,
  3189,
  3198,
  3207,
  3217,
  3227,
  3239,
  3251,
  3262,
  3273,
  3278,
  3283,
  3288,
  3299,
  3312,
  3329,
  3345,
  3362,
  3366,
  3370,
  3381,
  3391,
  3401,
  3409,
  3418,
  3421,
  3424,
  3427,
  3433,
  3442,
  3449,
  3455,
  3458,
  3461,
  3467,
  3481,
  3487,
  3492,
  3504,
  3510,
  3516,
  3521,
  3526,
  3534,
  3551,
  3561,
  3577,
  3602,
  3620,
  3630,
  3637,
  3643,
  3650,
  3663,
  3669,
  3684,
  3698,
  3705,
  3716,
  3724,
  3733,
  3742,
  3746,
  3755,
  3764,
  3773,
  3780,
  3789,
  3794,
  3801,
  3807,
  3812,
  3822,
  3827,
  3842,
  3850,
  3856,
  3860,
  3866,
  3872,
  3880,
  3891,
  3900,
  3912,
  3923,
  3930,
  3939,
  3950,
  3959,
  3973,
  3986,
  3999,
  4006,
  4011,
  4015,
  4027,
  4034,
  4049,
  4054,
  4067,
  4073,
  4083,
  4094,
  4120,
  4128,
  4148,
  4168,
  4191,
  4211,
  4223,
  4235,
  4247,
  4252,
  4261,
  4269,
  4279,
  4288,
  4299,
  4305,
  4311,
  4318,
  4336,
  4343,
  4352,
  4358,
  4370,
  4384,
  4391,
  4404,
  4422,
  4430,
  4439,
  4469,
  4498,
  4529,
  4566,
  4584,
  4602,
  4628,
  4664,
  4677,
  4695,
  4725,
  4745,
  4770,
  4796,
  4833,
  4860,
  4889,
  4921,
  4961,
  5003,
  5040,
  5071,
  5080,
  5096,
  5110,
  5129,
  5135,
  5148,
  5167,
  5185,
  5201,
  5224,
  5245,
  5251,
  5263,
  5289,
  5299,
  5308,
  5328,
  5334,
  5341,
  5352,
  5360,
  5372,
  5380,
  5392,
  5403,
  5411,
  5417,
  5425,
  5432,
  5442,
  5460,
  5469,
  5479,
  5488,
  5496,
  5503,
  5508,
  5520,
  5525,
  5532,
  5540,
  5549,
  5561,
  5572,
  5584,
  5593,
  5599,
  5612,
  5621,
  5627,
  5632,
  5647,
  5659,
  5673,
  5681,
  5686,
  5693,
  5706,
  5716,
  5723,
  5743,
  5758,
  5770,
  5791,
  5805,
  5824,
  5843,
  5851,
  5857,
  5860,
  5863,
  5866,
  5872,
  5878,
  5884,
  5898,
  5910,
  5922,
  5928,
  5935,
  5940,
  5946,
  5953,
  5958,
  5962,
  5976,
  5985,
  5992,
  6000,
  6013,
  6028,
  6042,
  6058,
  6064,
  6073,
  6088,
  6096,
  6111,
  6114,
  6118,
  6134,
  6144,
  6170,
  6178,
  6186,
  6189,
  6200,
  6211,
  6222,
  6233,
  6241,
  6248,
  6255,
  6260,
  6270,
  6276,
  6285,
  6292,
  6299,
  6307,
  6319,
  6330,
  6341,
  6352,
  6363,
  6373,
  6377,
  6388,
  6394,
  6405,
  6416,
  6424,
  6440,
  6456,
  6461,
  6469,
  6474,
  6481,
  6491,
  6503,
  6513,
  6521,
  6546,
  6552,
  6558,
  6567,
  6577,
  6584,
  6593,
  6606,
  6620,
  6631,
  6640,
  6647,
  6654,
  6663,
  6679,
  6686,
  6692,
  6708,
  6724,
  6750,
  6776,
  6782,
  6801,
  6818,
  6842,
  6866,
  6900,
  6934,
  6952,
  6957,
  6960,
  6971,
  6978,
  6983,
  6991,
  7000,
  7005,
  7013,
  7020,
  7027,
  7037,
  7043,
  7052,
  7063,
  7071,
  7082,
  7091,
  7096,
  7108,
  7112,
  7116,
  7121,
  7125,
  7130,
  7137,
  7146,
  7158,
  7165,
  7173,
  7181,
  7189,
  7198,
  7204,
  7211,
  7218,
  7225,
  7233,
  7238,
  7244,
  7250,
  7260,
  7271,
  7282,
  7293,
  7305,
  7310,
  7315,
  7328,
  7338,
  7348,
  7359,
  7365,
  7372,
  7377,
  7387,
  7396,
  7400,
  7425,
  7436,
  7441,
  7447,
  7453,
  7466,
  7476,
  7489,
  7500,
  7506,
  7512,
  7519,
  7534,
  7545,
  7551,
  7561,
  7571,
  7582,
  7592,
  7598,
  7613,
  7622,
  7630,
  7635,
  7644,
  7653,
  7667,
  7676,
  7686,
  7695,
  7705,
  7717,
  7732,
  7743,
  7754,
  7762,
  7773,
  7786,
  7800,
  7814,
  7828,
  7842,
  7853,
  7862,
  7874,
  7882,
  7890,
  7901,
  7911,
  7923,
  7935,
  7945,
  7956,
  7961,
  7971,
  7983,
  7992,
  8000,
  8010,
  8017,
  8023,
  8029,
  8038,
  8052,
  8062,
  8075,
  8085,
  8096,
  8106,
  8127,
  8137,
  8148,
  8158,
  8168,
  8180,
  8194,
  8207,
  8222,
  8237,
  8252,
  8264,
  8274,
  8280,
  8288,
  8305,
  8316,
  8329,
  8342,
  8357,
  8373,
  8391,
  8407,
  8423,
  8436,
  8446,
  8456,
  8465,
  8477,
  8485,
  8495,
  8505,
  8512,
  8526,
  8536,
  8550,
  8564,
  8575,
  8585,
  8590,
  8595,
  8600,
  8611,
  8625,
  8635,
  8645,
  8657,
  8664,
  8675,
  8684,
  8693,
  8700,
  8708,
  8718,
  8728,
  8738,
  8743,
  8755,
  8765,
  8769,
  8777,
  8784,
  8794,
  8801,
  8807,
  8818,
  8830,
  8836,
  8846,
  8857,
  8861,
  8866,
  8876,
  8887,
  8892,
  8898,
  8904,
  8916,
  8927,
  8935,
  8952,
  8968,
  8980,
  8988,
  9001,
  9012,
  9022,
  9033,
  9041,
};

/* maximum key range = 6317, duplicates = 0 */

class CSSValueKeywordsHash
{
private:
  static inline unsigned int value_hash_function (const char *str, unsigned int len);
public:
  static const struct Value *findValueImpl (const char *str, unsigned int len);
};

inline unsigned int
CSSValueKeywordsHash::value_hash_function (register const char *str, register unsigned int len)
{
  static const unsigned short asso_values[] =
    {
      6347, 6347, 6347, 6347, 6347, 6347, 6347, 6347, 6347, 6347,
      6347, 6347, 6347, 6347, 6347, 6347, 6347, 6347, 6347, 6347,
      6347, 6347, 6347, 6347, 6347, 6347, 6347, 6347, 6347, 6347,
      6347, 6347, 6347, 6347, 6347, 6347, 6347, 6347, 6347, 6347,
      6347, 6347, 6347, 6347, 6347,   70,  403,   91,   10, 6347,
        43,   13,   19,   16,   40,   37,   28,   25,   10, 6347,
      6347, 6347, 6347, 6347, 6347, 6347, 6347, 6347, 6347, 6347,
      6347, 6347, 6347, 6347, 6347, 6347, 6347, 6347, 6347, 6347,
      6347, 6347, 6347, 6347, 6347, 6347, 6347, 6347, 6347, 6347,
      6347, 6347, 6347, 6347, 6347, 6347, 6347,   13,  427,  190,
        49,   10,  778,   25,  724,   13, 1192,  559,   67,   19,
        16,   22,  352, 1087,   22,  127,   10,  154,  163, 1849,
       421, 1753, 1270,   82,   10, 6347, 6347, 6347, 6347, 6347,
      6347, 6347, 6347, 6347, 6347, 6347, 6347, 6347, 6347, 6347,
      6347, 6347, 6347, 6347, 6347, 6347, 6347, 6347, 6347, 6347,
      6347, 6347, 6347, 6347, 6347, 6347, 6347, 6347, 6347, 6347,
      6347, 6347, 6347, 6347, 6347, 6347, 6347, 6347, 6347, 6347,
      6347, 6347, 6347, 6347, 6347, 6347, 6347, 6347, 6347, 6347,
      6347, 6347, 6347, 6347, 6347, 6347, 6347, 6347, 6347, 6347,
      6347, 6347, 6347, 6347, 6347, 6347, 6347, 6347, 6347, 6347,
      6347, 6347, 6347, 6347, 6347, 6347, 6347, 6347, 6347, 6347,
      6347, 6347, 6347, 6347, 6347, 6347, 6347, 6347, 6347, 6347,
      6347, 6347, 6347, 6347, 6347, 6347, 6347, 6347, 6347, 6347,
      6347, 6347, 6347, 6347, 6347, 6347, 6347, 6347, 6347, 6347,
      6347, 6347, 6347, 6347, 6347, 6347, 6347, 6347, 6347, 6347,
      6347, 6347, 6347, 6347, 6347, 6347, 6347, 6347
    };
  register int hval = 0;

  switch (len)
    {
      default:
        hval += asso_values[(unsigned char)str[41]];
      /*FALLTHROUGH*/
      case 41:
        hval += asso_values[(unsigned char)str[40]];
      /*FALLTHROUGH*/
      case 40:
        hval += asso_values[(unsigned char)str[39]];
      /*FALLTHROUGH*/
      case 39:
        hval += asso_values[(unsigned char)str[38]];
      /*FALLTHROUGH*/
      case 38:
        hval += asso_values[(unsigned char)str[37]];
      /*FALLTHROUGH*/
      case 37:
        hval += asso_values[(unsigned char)str[36]];
      /*FALLTHROUGH*/
      case 36:
        hval += asso_values[(unsigned char)str[35]];
      /*FALLTHROUGH*/
      case 35:
        hval += asso_values[(unsigned char)str[34]];
      /*FALLTHROUGH*/
      case 34:
        hval += asso_values[(unsigned char)str[33]];
      /*FALLTHROUGH*/
      case 33:
        hval += asso_values[(unsigned char)str[32]];
      /*FALLTHROUGH*/
      case 32:
        hval += asso_values[(unsigned char)str[31]];
      /*FALLTHROUGH*/
      case 31:
        hval += asso_values[(unsigned char)str[30]];
      /*FALLTHROUGH*/
      case 30:
        hval += asso_values[(unsigned char)str[29]];
      /*FALLTHROUGH*/
      case 29:
        hval += asso_values[(unsigned char)str[28]];
      /*FALLTHROUGH*/
      case 28:
        hval += asso_values[(unsigned char)str[27]];
      /*FALLTHROUGH*/
      case 27:
        hval += asso_values[(unsigned char)str[26]];
      /*FALLTHROUGH*/
      case 26:
        hval += asso_values[(unsigned char)str[25]];
      /*FALLTHROUGH*/
      case 25:
        hval += asso_values[(unsigned char)str[24]];
      /*FALLTHROUGH*/
      case 24:
        hval += asso_values[(unsigned char)str[23]];
      /*FALLTHROUGH*/
      case 23:
        hval += asso_values[(unsigned char)str[22]];
      /*FALLTHROUGH*/
      case 22:
        hval += asso_values[(unsigned char)str[21]];
      /*FALLTHROUGH*/
      case 21:
        hval += asso_values[(unsigned char)str[20]];
      /*FALLTHROUGH*/
      case 20:
        hval += asso_values[(unsigned char)str[19]];
      /*FALLTHROUGH*/
      case 19:
        hval += asso_values[(unsigned char)str[18]];
      /*FALLTHROUGH*/
      case 18:
        hval += asso_values[(unsigned char)str[17]];
      /*FALLTHROUGH*/
      case 17:
        hval += asso_values[(unsigned char)str[16]];
      /*FALLTHROUGH*/
      case 16:
        hval += asso_values[(unsigned char)str[15]];
      /*FALLTHROUGH*/
      case 15:
        hval += asso_values[(unsigned char)str[14]];
      /*FALLTHROUGH*/
      case 14:
        hval += asso_values[(unsigned char)str[13]];
      /*FALLTHROUGH*/
      case 13:
        hval += asso_values[(unsigned char)str[12]];
      /*FALLTHROUGH*/
      case 12:
        hval += asso_values[(unsigned char)str[11]];
      /*FALLTHROUGH*/
      case 11:
        hval += asso_values[(unsigned char)str[10]+1];
      /*FALLTHROUGH*/
      case 10:
        hval += asso_values[(unsigned char)str[9]];
      /*FALLTHROUGH*/
      case 9:
        hval += asso_values[(unsigned char)str[8]];
      /*FALLTHROUGH*/
      case 8:
        hval += asso_values[(unsigned char)str[7]];
      /*FALLTHROUGH*/
      case 7:
        hval += asso_values[(unsigned char)str[6]];
      /*FALLTHROUGH*/
      case 6:
        hval += asso_values[(unsigned char)str[5]];
      /*FALLTHROUGH*/
      case 5:
        hval += asso_values[(unsigned char)str[4]];
      /*FALLTHROUGH*/
      case 4:
        hval += asso_values[(unsigned char)str[3]+2];
      /*FALLTHROUGH*/
      case 3:
        hval += asso_values[(unsigned char)str[2]];
      /*FALLTHROUGH*/
      case 2:
        hval += asso_values[(unsigned char)str[1]];
      /*FALLTHROUGH*/
      case 1:
        hval += asso_values[(unsigned char)str[0]+1];
        break;
    }
  return hval;
}

struct stringpool_t
  {
    char stringpool_str0[sizeof("900")];
    char stringpool_str1[sizeof("200")];
    char stringpool_str2[sizeof("400")];
    char stringpool_str3[sizeof("300")];
    char stringpool_str4[sizeof("lr")];
    char stringpool_str5[sizeof("dot")];
    char stringpool_str6[sizeof("800")];
    char stringpool_str7[sizeof("700")];
    char stringpool_str8[sizeof("ltr")];
    char stringpool_str9[sizeof("start")];
    char stringpool_str10[sizeof("lao")];
    char stringpool_str11[sizeof("600")];
    char stringpool_str12[sizeof("drag")];
    char stringpool_str13[sizeof("500")];
    char stringpool_str14[sizeof("100")];
    char stringpool_str15[sizeof("lime")];
    char stringpool_str16[sizeof("large")];
    char stringpool_str17[sizeof("fine")];
    char stringpool_str18[sizeof("meter")];
    char stringpool_str19[sizeof("none")];
    char stringpool_str20[sizeof("miter")];
    char stringpool_str21[sizeof("linen")];
    char stringpool_str22[sizeof("darken")];
    char stringpool_str23[sizeof("from")];
    char stringpool_str24[sizeof("larger")];
    char stringpool_str25[sizeof("hide")];
    char stringpool_str26[sizeof("seagreen")];
    char stringpool_str27[sizeof("srgb")];
    char stringpool_str28[sizeof("linear")];
    char stringpool_str29[sizeof("hanging")];
    char stringpool_str30[sizeof("slice")];
    char stringpool_str31[sizeof("help")];
    char stringpool_str32[sizeof("format")];
    char stringpool_str33[sizeof("magenta")];
    char stringpool_str34[sizeof("caret")];
    char stringpool_str35[sizeof("fill")];
    char stringpool_str36[sizeof("ledger")];
    char stringpool_str37[sizeof("nonzero")];
    char stringpool_str38[sizeof("small")];
    char stringpool_str39[sizeof("single")];
    char stringpool_str40[sizeof("calc")];
    char stringpool_str41[sizeof("cell")];
    char stringpool_str42[sizeof("darkred")];
    char stringpool_str43[sizeof("darkgreen")];
    char stringpool_str44[sizeof("zoom")];
    char stringpool_str45[sizeof("salmon")];
    char stringpool_str46[sizeof("clip")];
    char stringpool_str47[sizeof("smaller")];
    char stringpool_str48[sizeof("limegreen")];
    char stringpool_str49[sizeof("disc")];
    char stringpool_str50[sizeof("normal")];
    char stringpool_str51[sizeof("circle")];
    char stringpool_str52[sizeof("darkorange")];
    char stringpool_str53[sizeof("to")];
    char stringpool_str54[sizeof("hue")];
    char stringpool_str55[sizeof("steps")];
    char stringpool_str56[sizeof("filled")];
    char stringpool_str57[sizeof("tan")];
    char stringpool_str58[sizeof("red")];
    char stringpool_str59[sizeof("teal")];
    char stringpool_str60[sizeof("rl")];
    char stringpool_str61[sizeof("step-end")];
    char stringpool_str62[sizeof("mongolian")];
    char stringpool_str63[sizeof("dense")];
    char stringpool_str64[sizeof("rtl")];
    char stringpool_str65[sizeof("b5")];
    char stringpool_str66[sizeof("hsl")];
    char stringpool_str67[sizeof("b4")];
    char stringpool_str68[sizeof("ridge")];
    char stringpool_str69[sizeof("move")];
    char stringpool_str70[sizeof("loose")];
    char stringpool_str71[sizeof("markers")];
    char stringpool_str72[sizeof("coarse")];
    char stringpool_str73[sizeof("letter")];
    char stringpool_str74[sizeof("beige")];
    char stringpool_str75[sizeof("scale")];
    char stringpool_str76[sizeof("from-image")];
    char stringpool_str77[sizeof("cambodian")];
    char stringpool_str78[sizeof("discard")];
    char stringpool_str79[sizeof("hover")];
    char stringpool_str80[sizeof("zoom-in")];
    char stringpool_str81[sizeof("url")];
    char stringpool_str82[sizeof("dotted")];
    char stringpool_str83[sizeof("flat")];
    char stringpool_str84[sizeof("center")];
    char stringpool_str85[sizeof("crimson")];
    char stringpool_str86[sizeof("screen")];
    char stringpool_str87[sizeof("under")];
    char stringpool_str88[sizeof("hangul")];
    char stringpool_str89[sizeof("navy")];
    char stringpool_str90[sizeof("cover")];
    char stringpool_str91[sizeof("content")];
    char stringpool_str92[sizeof("contain")];
    char stringpool_str93[sizeof("linear-gradient")];
    char stringpool_str94[sizeof("reset")];
    char stringpool_str95[sizeof("scale3d")];
    char stringpool_str96[sizeof("step-start")];
    char stringpool_str97[sizeof("hiragana")];
    char stringpool_str98[sizeof("legal")];
    char stringpool_str99[sizeof("double")];
    char stringpool_str100[sizeof("lavender")];
    char stringpool_str101[sizeof("forestgreen")];
    char stringpool_str102[sizeof("bengali")];
    char stringpool_str103[sizeof("keep-all")];
    char stringpool_str104[sizeof("darksalmon")];
    char stringpool_str105[sizeof("clear")];
    char stringpool_str106[sizeof("central")];
    char stringpool_str107[sizeof("unset")];
    char stringpool_str108[sizeof("darkviolet")];
    char stringpool_str109[sizeof("coral")];
    char stringpool_str110[sizeof("unicase")];
    char stringpool_str111[sizeof("hue-rotate")];
    char stringpool_str112[sizeof("revert")];
    char stringpool_str113[sizeof("sesame")];
    char stringpool_str114[sizeof("on")];
    char stringpool_str115[sizeof("rotate")];
    char stringpool_str116[sizeof("listitem")];
    char stringpool_str117[sizeof("underline")];
    char stringpool_str118[sizeof("space")];
    char stringpool_str119[sizeof("hsla")];
    char stringpool_str120[sizeof("static")];
    char stringpool_str121[sizeof("zoom-out")];
    char stringpool_str122[sizeof("moccasin")];
    char stringpool_str123[sizeof("contents")];
    char stringpool_str124[sizeof("sienna")];
    char stringpool_str125[sizeof("tomato")];
    char stringpool_str126[sizeof("blur")];
    char stringpool_str127[sizeof("contrast")];
    char stringpool_str128[sizeof("bottom")];
    char stringpool_str129[sizeof("rotate3d")];
    char stringpool_str130[sizeof("blue")];
    char stringpool_str131[sizeof("at")];
    char stringpool_str132[sizeof("a3")];
    char stringpool_str133[sizeof("a5")];
    char stringpool_str134[sizeof("list-item")];
    char stringpool_str135[sizeof("a4")];
    char stringpool_str136[sizeof("darkgoldenrod")];
    char stringpool_str137[sizeof("bevel")];
    char stringpool_str138[sizeof("attr")];
    char stringpool_str139[sizeof("baseline")];
    char stringpool_str140[sizeof("mintcream")];
    char stringpool_str141[sizeof("devanagari")];
    char stringpool_str142[sizeof("wrap")];
    char stringpool_str143[sizeof("oriya")];
    char stringpool_str144[sizeof("matrix")];
    char stringpool_str145[sizeof("reverse")];
    char stringpool_str146[sizeof("local")];
    char stringpool_str147[sizeof("rect")];
    char stringpool_str148[sizeof("source-in")];
    char stringpool_str149[sizeof("triangle")];
    char stringpool_str150[sizeof("clone")];
    char stringpool_str151[sizeof("minmax")];
    char stringpool_str152[sizeof("copy")];
    char stringpool_str153[sizeof("recto")];
    char stringpool_str154[sizeof("butt")];
    char stringpool_str155[sizeof("destination-in")];
    char stringpool_str156[sizeof("no-repeat")];
    char stringpool_str157[sizeof("kannada")];
    char stringpool_str158[sizeof("mixed")];
    char stringpool_str159[sizeof("darkolivegreen")];
    char stringpool_str160[sizeof("top")];
    char stringpool_str161[sizeof("fixed")];
    char stringpool_str162[sizeof("over")];
    char stringpool_str163[sizeof("repeat")];
    char stringpool_str164[sizeof("silver")];
    char stringpool_str165[sizeof("matrix3d")];
    char stringpool_str166[sizeof("armenian")];
    char stringpool_str167[sizeof("min-content")];
    char stringpool_str168[sizeof("button")];
    char stringpool_str169[sizeof("fit-content")];
    char stringpool_str170[sizeof("all")];
    char stringpool_str171[sizeof("standalone")];
    char stringpool_str172[sizeof("super")];
    char stringpool_str173[sizeof("cursive")];
    char stringpool_str174[sizeof("rgb")];
    char stringpool_str175[sizeof("tb")];
    char stringpool_str176[sizeof("linearrgb")];
    char stringpool_str177[sizeof("darkmagenta")];
    char stringpool_str178[sizeof("relative")];
    char stringpool_str179[sizeof("sub")];
    char stringpool_str180[sizeof("alternate")];
    char stringpool_str181[sizeof("wait")];
    char stringpool_str182[sizeof("separate")];
    char stringpool_str183[sizeof("counter")];
    char stringpool_str184[sizeof("table")];
    char stringpool_str185[sizeof("bisque")];
    char stringpool_str186[sizeof("caption")];
    char stringpool_str187[sizeof("fullscreen")];
    char stringpool_str188[sizeof("overline")];
    char stringpool_str189[sizeof("source-out")];
    char stringpool_str190[sizeof("hotpink")];
    char stringpool_str191[sizeof("collapse")];
    char stringpool_str192[sizeof("tibetan")];
    char stringpool_str193[sizeof("scalex")];
    char stringpool_str194[sizeof("hangul-consonant")];
    char stringpool_str195[sizeof("closest-side")];
    char stringpool_str196[sizeof("destination-out")];
    char stringpool_str197[sizeof("balance")];
    char stringpool_str198[sizeof("wavy")];
    char stringpool_str199[sizeof("no-common-ligatures")];
    char stringpool_str200[sizeof("outset")];
    char stringpool_str201[sizeof("oldlace")];
    char stringpool_str202[sizeof("background")];
    char stringpool_str203[sizeof("lr-tb")];
    char stringpool_str204[sizeof("running")];
    char stringpool_str205[sizeof("round")];
    char stringpool_str206[sizeof("destination-over")];
    char stringpool_str207[sizeof("solid")];
    char stringpool_str208[sizeof("spell-out")];
    char stringpool_str209[sizeof("blueviolet")];
    char stringpool_str210[sizeof("darkblue")];
    char stringpool_str211[sizeof("span")];
    char stringpool_str212[sizeof("tb-rl")];
    char stringpool_str213[sizeof("double-circle")];
    char stringpool_str214[sizeof("outside")];
    char stringpool_str215[sizeof("digits")];
    char stringpool_str216[sizeof("counters")];
    char stringpool_str217[sizeof("space-around")];
    char stringpool_str218[sizeof("text")];
    char stringpool_str219[sizeof("translate")];
    char stringpool_str220[sizeof("rgba")];
    char stringpool_str221[sizeof("radio")];
    char stringpool_str222[sizeof("orange")];
    char stringpool_str223[sizeof("steelblue")];
    char stringpool_str224[sizeof("turquoise")];
    char stringpool_str225[sizeof("dodgerblue")];
    char stringpool_str226[sizeof("source-over")];
    char stringpool_str227[sizeof("rotatex")];
    char stringpool_str228[sizeof("translate3d")];
    char stringpool_str229[sizeof("wrap-reverse")];
    char stringpool_str230[sizeof("green")];
    char stringpool_str231[sizeof("strict")];
    char stringpool_str232[sizeof("cadetblue")];
    char stringpool_str233[sizeof("textarea")];
    char stringpool_str234[sizeof("medium")];
    char stringpool_str235[sizeof("crispedges")];
    char stringpool_str236[sizeof("hand")];
    char stringpool_str237[sizeof("alias")];
    char stringpool_str238[sizeof("safe")];
    char stringpool_str239[sizeof("radial")];
    char stringpool_str240[sizeof("georgian")];
    char stringpool_str241[sizeof("khaki")];
    char stringpool_str242[sizeof("grey")];
    char stringpool_str243[sizeof("black")];
    char stringpool_str244[sizeof("gray")];
    char stringpool_str245[sizeof("multiple")];
    char stringpool_str246[sizeof("end")];
    char stringpool_str247[sizeof("block")];
    char stringpool_str248[sizeof("rl-tb")];
    char stringpool_str249[sizeof("orangered")];
    char stringpool_str250[sizeof("no-contextual")];
    char stringpool_str251[sizeof("khmer")];
    char stringpool_str252[sizeof("olive")];
    char stringpool_str253[sizeof("decimal")];
    char stringpool_str254[sizeof("small-caps")];
    char stringpool_str255[sizeof("no-punctuation")];
    char stringpool_str256[sizeof("hidden")];
    char stringpool_str257[sizeof("katakana")];
    char stringpool_str258[sizeof("destination-atop")];
    char stringpool_str259[sizeof("logical")];
    char stringpool_str260[sizeof("closest-corner")];
    char stringpool_str261[sizeof("darkslateblue")];
    char stringpool_str262[sizeof("-internal-center")];
    char stringpool_str263[sizeof("no-change")];
    char stringpool_str264[sizeof("element")];
    char stringpool_str265[sizeof("lining-nums")];
    char stringpool_str266[sizeof("slateblue")];
    char stringpool_str267[sizeof("currentcolor")];
    char stringpool_str268[sizeof("contextual")];
    char stringpool_str269[sizeof("chocolate")];
    char stringpool_str270[sizeof("middle")];
    char stringpool_str271[sizeof("minimal-ui")];
    char stringpool_str272[sizeof("ease")];
    char stringpool_str273[sizeof("sepia")];
    char stringpool_str274[sizeof("distribute")];
    char stringpool_str275[sizeof("no-drag")];
    char stringpool_str276[sizeof("self-end")];
    char stringpool_str277[sizeof("max-content")];
    char stringpool_str278[sizeof("context-menu")];
    char stringpool_str279[sizeof("left")];
    char stringpool_str280[sizeof("repeating-linear-gradient")];
    char stringpool_str281[sizeof("stretch")];
    char stringpool_str282[sizeof("deeppink")];
    char stringpool_str283[sizeof("luminance")];
    char stringpool_str284[sizeof("buttontext")];
    char stringpool_str285[sizeof("status-bar")];
    char stringpool_str286[sizeof("radial-gradient")];
    char stringpool_str287[sizeof("table-cell")];
    char stringpool_str288[sizeof("repeat-x")];
    char stringpool_str289[sizeof("margin-box")];
    char stringpool_str290[sizeof("ease-in")];
    char stringpool_str291[sizeof("border")];
    char stringpool_str292[sizeof("seashell")];
    char stringpool_str293[sizeof("bold")];
    char stringpool_str294[sizeof("self-start")];
    char stringpool_str295[sizeof("darkseagreen")];
    char stringpool_str296[sizeof("open")];
    char stringpool_str297[sizeof("springgreen")];
    char stringpool_str298[sizeof("common-ligatures")];
    char stringpool_str299[sizeof("condensed")];
    char stringpool_str300[sizeof("ordinal")];
    char stringpool_str301[sizeof("upper-roman")];
    char stringpool_str302[sizeof("darkorchid")];
    char stringpool_str303[sizeof("bolder")];
    char stringpool_str304[sizeof("step-middle")];
    char stringpool_str305[sizeof("use-script")];
    char stringpool_str306[sizeof("upper-latin")];
    char stringpool_str307[sizeof("upper-armenian")];
    char stringpool_str308[sizeof("pre")];
    char stringpool_str309[sizeof("chartreuse")];
    char stringpool_str310[sizeof("thistle")];
    char stringpool_str311[sizeof("pink")];
    char stringpool_str312[sizeof("alternate-reverse")];
    char stringpool_str313[sizeof("mediumseagreen")];
    char stringpool_str314[sizeof("crosshair")];
    char stringpool_str315[sizeof("all-scroll")];
    char stringpool_str316[sizeof("page")];
    char stringpool_str317[sizeof("table-column")];
    char stringpool_str318[sizeof("semi-condensed")];
    char stringpool_str319[sizeof("repeating-radial-gradient")];
    char stringpool_str320[sizeof("maroon")];
    char stringpool_str321[sizeof("blink")];
    char stringpool_str322[sizeof("aliceblue")];
    char stringpool_str323[sizeof("break-all")];
    char stringpool_str324[sizeof("translatex")];
    char stringpool_str325[sizeof("listbox")];
    char stringpool_str326[sizeof("literal-punctuation")];
    char stringpool_str327[sizeof("ease-out")];
    char stringpool_str328[sizeof("text-top")];
    char stringpool_str329[sizeof("cornsilk")];
    char stringpool_str330[sizeof("sans-serif")];
    char stringpool_str331[sizeof("default")];
    char stringpool_str332[sizeof("avoid")];
    char stringpool_str333[sizeof("captiontext")];
    char stringpool_str334[sizeof("exact")];
    char stringpool_str335[sizeof("transparent")];
    char stringpool_str336[sizeof("thin")];
    char stringpool_str337[sizeof("color")];
    char stringpool_str338[sizeof("grayscale")];
    char stringpool_str339[sizeof("brightness")];
    char stringpool_str340[sizeof("uppercase")];
    char stringpool_str341[sizeof("ultra-expanded")];
    char stringpool_str342[sizeof("after")];
    char stringpool_str343[sizeof("antialiased")];
    char stringpool_str344[sizeof("hiragana-iroha")];
    char stringpool_str345[sizeof("palegreen")];
    char stringpool_str346[sizeof("unsafe")];
    char stringpool_str347[sizeof("lighten")];
    char stringpool_str348[sizeof("no-drop")];
    char stringpool_str349[sizeof("lighter")];
    char stringpool_str350[sizeof("graytext")];
    char stringpool_str351[sizeof("firebrick")];
    char stringpool_str352[sizeof("embed")];
    char stringpool_str353[sizeof("above")];
    char stringpool_str354[sizeof("fallback")];
    char stringpool_str355[sizeof("persian")];
    char stringpool_str356[sizeof("pre-line")];
    char stringpool_str357[sizeof("size")];
    char stringpool_str358[sizeof("polygon")];
    char stringpool_str359[sizeof("on-demand")];
    char stringpool_str360[sizeof("text-bottom")];
    char stringpool_str361[sizeof("plum")];
    char stringpool_str362[sizeof("white")];
    char stringpool_str363[sizeof("lightgreen")];
    char stringpool_str364[sizeof("portrait")];
    char stringpool_str365[sizeof("wheat")];
    char stringpool_str366[sizeof("purple")];
    char stringpool_str367[sizeof("right")];
    char stringpool_str368[sizeof("inset")];
    char stringpool_str369[sizeof("flex")];
    char stringpool_str370[sizeof("olivedrab")];
    char stringpool_str371[sizeof("serif")];
    char stringpool_str372[sizeof("isolate")];
    char stringpool_str373[sizeof("optional")];
    char stringpool_str374[sizeof("dashed")];
    char stringpool_str375[sizeof("both")];
    char stringpool_str376[sizeof("evenodd")];
    char stringpool_str377[sizeof("after-edge")];
    char stringpool_str378[sizeof("invert")];
    char stringpool_str379[sizeof("progress")];
    char stringpool_str380[sizeof("italic")];
    char stringpool_str381[sizeof("ease-in-out")];
    char stringpool_str382[sizeof("scroll")];
    char stringpool_str383[sizeof("thai")];
    char stringpool_str384[sizeof("mediumspringgreen")];
    char stringpool_str385[sizeof("thick")];
    char stringpool_str386[sizeof("mediumblue")];
    char stringpool_str387[sizeof("paused")];
    char stringpool_str388[sizeof("square")];
    char stringpool_str389[sizeof("paint")];
    char stringpool_str390[sizeof("initial")];
    char stringpool_str391[sizeof("historical-ligatures")];
    char stringpool_str392[sizeof("block-axis")];
    char stringpool_str393[sizeof("drop-shadow")];
    char stringpool_str394[sizeof("media-volume-slider")];
    char stringpool_str395[sizeof("scalez")];
    char stringpool_str396[sizeof("pointer")];
    char stringpool_str397[sizeof("flex-end")];
    char stringpool_str398[sizeof("landscape")];
    char stringpool_str399[sizeof("lightsalmon")];
    char stringpool_str400[sizeof("se-resize")];
    char stringpool_str401[sizeof("diagonal-fractions")];
    char stringpool_str402[sizeof("painted")];
    char stringpool_str403[sizeof("grid")];
    char stringpool_str404[sizeof("ne-resize")];
    char stringpool_str405[sizeof("subpixel-antialiased")];
    char stringpool_str406[sizeof("interlace")];
    char stringpool_str407[sizeof("buttonface")];
    char stringpool_str408[sizeof("s-resize")];
    char stringpool_str409[sizeof("semi-expanded")];
    char stringpool_str410[sizeof("all-small-caps")];
    char stringpool_str411[sizeof("n-resize")];
    char stringpool_str412[sizeof("preserve-3d")];
    char stringpool_str413[sizeof("lightcoral")];
    char stringpool_str414[sizeof("palegoldenrod")];
    char stringpool_str415[sizeof("manipulation")];
    char stringpool_str416[sizeof("ultra-condensed")];
    char stringpool_str417[sizeof("gold")];
    char stringpool_str418[sizeof("source-atop")];
    char stringpool_str419[sizeof("slider-vertical")];
    char stringpool_str420[sizeof("flex-start")];
    char stringpool_str421[sizeof("pan-x")];
    char stringpool_str422[sizeof("rotatez")];
    char stringpool_str423[sizeof("ns-resize")];
    char stringpool_str424[sizeof("palevioletred")];
    char stringpool_str425[sizeof("textfield")];
    char stringpool_str426[sizeof("auto")];
    char stringpool_str427[sizeof("col-resize")];
    char stringpool_str428[sizeof("avoid-page")];
    char stringpool_str429[sizeof("pixelated")];
    char stringpool_str430[sizeof("stroke")];
    char stringpool_str431[sizeof("goldenrod")];
    char stringpool_str432[sizeof("no-close-quote")];
    char stringpool_str433[sizeof("pan-up")];
    char stringpool_str434[sizeof("fuchsia")];
    char stringpool_str435[sizeof("mediumpurple")];
    char stringpool_str436[sizeof("gainsboro")];
    char stringpool_str437[sizeof("titling-caps")];
    char stringpool_str438[sizeof("hard-light")];
    char stringpool_str439[sizeof("exclusion")];
    char stringpool_str440[sizeof("avoid-column")];
    char stringpool_str441[sizeof("icon")];
    char stringpool_str442[sizeof("media-slider")];
    char stringpool_str443[sizeof("farthest-corner")];
    char stringpool_str444[sizeof("blanchedalmond")];
    char stringpool_str445[sizeof("difference")];
    char stringpool_str446[sizeof("reset-size")];
    char stringpool_str447[sizeof("xor")];
    char stringpool_str448[sizeof("style")];
    char stringpool_str449[sizeof("table-column-group")];
    char stringpool_str450[sizeof("snow")];
    char stringpool_str451[sizeof("orchid")];
    char stringpool_str452[sizeof("lavenderblush")];
    char stringpool_str453[sizeof("color-stop")];
    char stringpool_str454[sizeof("monospace")];
    char stringpool_str455[sizeof("searchfield")];
    char stringpool_str456[sizeof("dimgrey")];
    char stringpool_str457[sizeof("dimgray")];
    char stringpool_str458[sizeof("katakana-iroha")];
    char stringpool_str459[sizeof("upright")];
    char stringpool_str460[sizeof("aqua")];
    char stringpool_str461[sizeof("inline")];
    char stringpool_str462[sizeof("indigo")];
    char stringpool_str463[sizeof("expanded")];
    char stringpool_str464[sizeof("midnightblue")];
    char stringpool_str465[sizeof("azure")];
    char stringpool_str466[sizeof("smooth")];
    char stringpool_str467[sizeof("darkgrey")];
    char stringpool_str468[sizeof("darkgray")];
    char stringpool_str469[sizeof("new")];
    char stringpool_str470[sizeof("soft-light")];
    char stringpool_str471[sizeof("var")];
    char stringpool_str472[sizeof("media-volume-slider-container")];
    char stringpool_str473[sizeof("menu")];
    char stringpool_str474[sizeof("geometricprecision")];
    char stringpool_str475[sizeof("swap")];
    char stringpool_str476[sizeof("lightsteelblue")];
    char stringpool_str477[sizeof("scrollbar")];
    char stringpool_str478[sizeof("off")];
    char stringpool_str479[sizeof("lightblue")];
    char stringpool_str480[sizeof("violet")];
    char stringpool_str481[sizeof("indianred")];
    char stringpool_str482[sizeof("darkkhaki")];
    char stringpool_str483[sizeof("color-burn")];
    char stringpool_str484[sizeof("saturate")];
    char stringpool_str485[sizeof("mediumvioletred")];
    char stringpool_str486[sizeof("aquamarine")];
    char stringpool_str487[sizeof("media-mute-button")];
    char stringpool_str488[sizeof("inside")];
    char stringpool_str489[sizeof("w-resize")];
    char stringpool_str490[sizeof("ellipse")];
    char stringpool_str491[sizeof("manual")];
    char stringpool_str492[sizeof("threedface")];
    char stringpool_str493[sizeof("saturation")];
    char stringpool_str494[sizeof("mathematical")];
    char stringpool_str495[sizeof("padding")];
    char stringpool_str496[sizeof("border-box")];
    char stringpool_str497[sizeof("small-caption")];
    char stringpool_str498[sizeof("scaley")];
    char stringpool_str499[sizeof("row")];
    char stringpool_str500[sizeof("inline-grid")];
    char stringpool_str501[sizeof("pan-right")];
    char stringpool_str502[sizeof("inherit")];
    char stringpool_str503[sizeof("brown")];
    char stringpool_str504[sizeof("horizontal")];
    char stringpool_str505[sizeof("column")];
    char stringpool_str506[sizeof("groove")];
    char stringpool_str507[sizeof("forwards")];
    char stringpool_str508[sizeof("darkcyan")];
    char stringpool_str509[sizeof("translatez")];
    char stringpool_str510[sizeof("alpha")];
    char stringpool_str511[sizeof("verso")];
    char stringpool_str512[sizeof("whitesmoke")];
    char stringpool_str513[sizeof("button-bevel")];
    char stringpool_str514[sizeof("pan-left")];
    char stringpool_str515[sizeof("slategrey")];
    char stringpool_str516[sizeof("slategray")];
    char stringpool_str517[sizeof("highlight")];
    char stringpool_str518[sizeof("urdu")];
    char stringpool_str519[sizeof("inactiveborder")];
    char stringpool_str520[sizeof("ellipsis")];
    char stringpool_str521[sizeof("bounding-box")];
    char stringpool_str522[sizeof("before")];
    char stringpool_str523[sizeof("simp-chinese-formal")];
    char stringpool_str524[sizeof("lower-roman")];
    char stringpool_str525[sizeof("menulist")];
    char stringpool_str526[sizeof("fantasy")];
    char stringpool_str527[sizeof("x-small")];
    char stringpool_str528[sizeof("non-scaling-stroke")];
    char stringpool_str529[sizeof("rotatey")];
    char stringpool_str530[sizeof("document")];
    char stringpool_str531[sizeof("simp-chinese-informal")];
    char stringpool_str532[sizeof("lower-latin")];
    char stringpool_str533[sizeof("lower-armenian")];
    char stringpool_str534[sizeof("x-large")];
    char stringpool_str535[sizeof("proportional-nums")];
    char stringpool_str536[sizeof("lower-greek")];
    char stringpool_str537[sizeof("all-petite-caps")];
    char stringpool_str538[sizeof("browser")];
    char stringpool_str539[sizeof("text-after-edge")];
    char stringpool_str540[sizeof("malayalam")];
    char stringpool_str541[sizeof("no-historical-ligatures")];
    char stringpool_str542[sizeof("mediumaquamarine")];
    char stringpool_str543[sizeof("cyan")];
    char stringpool_str544[sizeof("not-allowed")];
    char stringpool_str545[sizeof("legacy")];
    char stringpool_str546[sizeof("myanmar")];
    char stringpool_str547[sizeof("dynamic")];
    char stringpool_str548[sizeof("plaintext")];
    char stringpool_str549[sizeof("lightpink")];
    char stringpool_str550[sizeof("darkslategrey")];
    char stringpool_str551[sizeof("darkslategray")];
    char stringpool_str552[sizeof("-internal-media-subtitles-icon")];
    char stringpool_str553[sizeof("checkbox")];
    char stringpool_str554[sizeof("extra-expanded")];
    char stringpool_str555[sizeof("color-dodge")];
    char stringpool_str556[sizeof("arabic-indic")];
    char stringpool_str557[sizeof("scale-down")];
    char stringpool_str558[sizeof("mistyrose")];
    char stringpool_str559[sizeof("last-baseline")];
    char stringpool_str560[sizeof("telugu")];
    char stringpool_str561[sizeof("lightseagreen")];
    char stringpool_str562[sizeof("nowrap")];
    char stringpool_str563[sizeof("lowercase")];
    char stringpool_str564[sizeof("path")];
    char stringpool_str565[sizeof("absolute")];
    char stringpool_str566[sizeof("e-resize")];
    char stringpool_str567[sizeof("lawngreen")];
    char stringpool_str568[sizeof("gujarati")];
    char stringpool_str569[sizeof("hebrew")];
    char stringpool_str570[sizeof("petite-caps")];
    char stringpool_str571[sizeof("square-button")];
    char stringpool_str572[sizeof("vertical")];
    char stringpool_str573[sizeof("xx-large")];
    char stringpool_str574[sizeof("skew")];
    char stringpool_str575[sizeof("stacked-fractions")];
    char stringpool_str576[sizeof("menutext")];
    char stringpool_str577[sizeof("each-line")];
    char stringpool_str578[sizeof("sticky")];
    char stringpool_str579[sizeof("capitalize")];
    char stringpool_str580[sizeof("repeat-y")];
    char stringpool_str581[sizeof("overlay")];
    char stringpool_str582[sizeof("bidi-override")];
    char stringpool_str583[sizeof("gurmukhi")];
    char stringpool_str584[sizeof("progress-bar")];
    char stringpool_str585[sizeof("progressive")];
    char stringpool_str586[sizeof("inline-axis")];
    char stringpool_str587[sizeof("inline-table")];
    char stringpool_str588[sizeof("mediumturquoise")];
    char stringpool_str589[sizeof("open-quote")];
    char stringpool_str590[sizeof("close-quote")];
    char stringpool_str591[sizeof("space-evenly")];
    char stringpool_str592[sizeof("vertical-rl")];
    char stringpool_str593[sizeof("-internal-quirk-inherit")];
    char stringpool_str594[sizeof("mediumslateblue")];
    char stringpool_str595[sizeof("backwards")];
    char stringpool_str596[sizeof("table-caption")];
    char stringpool_str597[sizeof("opacity")];
    char stringpool_str598[sizeof("show")];
    char stringpool_str599[sizeof("translatey")];
    char stringpool_str600[sizeof("line-through")];
    char stringpool_str601[sizeof("slashed-zero")];
    char stringpool_str602[sizeof("isolate-override")];
    char stringpool_str603[sizeof("farthest-side")];
    char stringpool_str604[sizeof("auto-fit")];
    char stringpool_str605[sizeof("korean-hanja-formal")];
    char stringpool_str606[sizeof("-internal-media-closed-captions-icon")];
    char stringpool_str607[sizeof("sliderthumb-vertical")];
    char stringpool_str608[sizeof("content-box")];
    char stringpool_str609[sizeof("extra-condensed")];
    char stringpool_str610[sizeof("xx-small")];
    char stringpool_str611[sizeof("upper-alpha")];
    char stringpool_str612[sizeof("korean-hanja-informal")];
    char stringpool_str613[sizeof("table-row")];
    char stringpool_str614[sizeof("multiply")];
    char stringpool_str615[sizeof("vertical-lr")];
    char stringpool_str616[sizeof("infinite")];
    char stringpool_str617[sizeof("skyblue")];
    char stringpool_str618[sizeof("message-box")];
    char stringpool_str619[sizeof("mandatory")];
    char stringpool_str620[sizeof("oblique")];
    char stringpool_str621[sizeof("auto-fill")];
    char stringpool_str622[sizeof("rebeccapurple")];
    char stringpool_str623[sizeof("activeborder")];
    char stringpool_str624[sizeof("luminosity")];
    char stringpool_str625[sizeof("rosybrown")];
    char stringpool_str626[sizeof("alphabetic")];
    char stringpool_str627[sizeof("skewx")];
    char stringpool_str628[sizeof("inactivecaption")];
    char stringpool_str629[sizeof("perspective")];
    char stringpool_str630[sizeof("royalblue")];
    char stringpool_str631[sizeof("menulist-button")];
    char stringpool_str632[sizeof("buttonhighlight")];
    char stringpool_str633[sizeof("media-volume-sliderthumb")];
    char stringpool_str634[sizeof("darkturquoise")];
    char stringpool_str635[sizeof("media-controls-background")];
    char stringpool_str636[sizeof("progress-bar-value")];
    char stringpool_str637[sizeof("horizontal-tb")];
    char stringpool_str638[sizeof("read-only")];
    char stringpool_str639[sizeof("oldstyle-nums")];
    char stringpool_str640[sizeof("media-toggle-closed-captions-button")];
    char stringpool_str641[sizeof("inner-spin-button")];
    char stringpool_str642[sizeof("read-write")];
    char stringpool_str643[sizeof("media-fullscreen-volume-slider")];
    char stringpool_str644[sizeof("korean-hangul-formal")];
    char stringpool_str645[sizeof("tabular-nums")];
    char stringpool_str646[sizeof("accumulate")];
    char stringpool_str647[sizeof("table-header-group")];
    char stringpool_str648[sizeof("decimal-leading-zero")];
    char stringpool_str649[sizeof("pan-y")];
    char stringpool_str650[sizeof("discretionary-ligatures")];
    char stringpool_str651[sizeof("table-footer-group")];
    char stringpool_str652[sizeof("peru")];
    char stringpool_str653[sizeof("break-word")];
    char stringpool_str654[sizeof("trad-chinese-formal")];
    char stringpool_str655[sizeof("mediumorchid")];
    char stringpool_str656[sizeof("text-before-edge")];
    char stringpool_str657[sizeof("before-edge")];
    char stringpool_str658[sizeof("trad-chinese-informal")];
    char stringpool_str659[sizeof("layout")];
    char stringpool_str660[sizeof("visible")];
    char stringpool_str661[sizeof("inline-block")];
    char stringpool_str662[sizeof("lightgrey")];
    char stringpool_str663[sizeof("lightgray")];
    char stringpool_str664[sizeof("caps-lock-indicator")];
    char stringpool_str665[sizeof("-webkit-left")];
    char stringpool_str666[sizeof("window")];
    char stringpool_str667[sizeof("searchfield-cancel-button")];
    char stringpool_str668[sizeof("media-sliderthumb")];
    char stringpool_str669[sizeof("media-enter-fullscreen-button")];
    char stringpool_str670[sizeof("economy")];
    char stringpool_str671[sizeof("greenyellow")];
    char stringpool_str672[sizeof("ivory")];
    char stringpool_str673[sizeof("pan-down")];
    char stringpool_str674[sizeof("activecaption")];
    char stringpool_str675[sizeof("plus-lighter")];
    char stringpool_str676[sizeof("below")];
    char stringpool_str677[sizeof("row-reverse")];
    char stringpool_str678[sizeof("column-reverse")];
    char stringpool_str679[sizeof("-webkit-center")];
    char stringpool_str680[sizeof("inactivecaptiontext")];
    char stringpool_str681[sizeof("lightcyan")];
    char stringpool_str682[sizeof("yellow")];
    char stringpool_str683[sizeof("threedhighlight")];
    char stringpool_str684[sizeof("no-open-quote")];
    char stringpool_str685[sizeof("scroll-position")];
    char stringpool_str686[sizeof("saddlebrown")];
    char stringpool_str687[sizeof("push-button")];
    char stringpool_str688[sizeof("inter-word")];
    char stringpool_str689[sizeof("highlighttext")];
    char stringpool_str690[sizeof("-webkit-auto")];
    char stringpool_str691[sizeof("-webkit-control")];
    char stringpool_str692[sizeof("yellowgreen")];
    char stringpool_str693[sizeof("-webkit-radial-gradient")];
    char stringpool_str694[sizeof("-webkit-linear-gradient")];
    char stringpool_str695[sizeof("-webkit-min-content")];
    char stringpool_str696[sizeof("-internal-active-list-box-selection")];
    char stringpool_str697[sizeof("sw-resize")];
    char stringpool_str698[sizeof("-webkit-calc")];
    char stringpool_str699[sizeof("nw-resize")];
    char stringpool_str700[sizeof("menulist-text")];
    char stringpool_str701[sizeof("pre-wrap")];
    char stringpool_str702[sizeof("-webkit-mini-control")];
    char stringpool_str703[sizeof("visiblepainted")];
    char stringpool_str704[sizeof("infotext")];
    char stringpool_str705[sizeof("-webkit-gradient")];
    char stringpool_str706[sizeof("ideographic")];
    char stringpool_str707[sizeof("row-resize")];
    char stringpool_str708[sizeof("justify")];
    char stringpool_str709[sizeof("windowtext")];
    char stringpool_str710[sizeof("-webkit-isolate")];
    char stringpool_str711[sizeof("space-between")];
    char stringpool_str712[sizeof("floralwhite")];
    char stringpool_str713[sizeof("-internal-extend-to-zoom")];
    char stringpool_str714[sizeof("lower-alpha")];
    char stringpool_str715[sizeof("lightyellow")];
    char stringpool_str716[sizeof("cornflowerblue")];
    char stringpool_str717[sizeof("vertical-text")];
    char stringpool_str718[sizeof("-webkit-link")];
    char stringpool_str719[sizeof("-internal-media-cast-off-button")];
    char stringpool_str720[sizeof("buttonshadow")];
    char stringpool_str721[sizeof("-webkit-image-set")];
    char stringpool_str722[sizeof("-internal-variable-value")];
    char stringpool_str723[sizeof("media-exit-fullscreen-button")];
    char stringpool_str724[sizeof("honeydew")];
    char stringpool_str725[sizeof("cjk-ideographic")];
    char stringpool_str726[sizeof("media-time-remaining-display")];
    char stringpool_str727[sizeof("-webkit-baseline-middle")];
    char stringpool_str728[sizeof("-webkit-nowrap")];
    char stringpool_str729[sizeof("sideways")];
    char stringpool_str730[sizeof("-webkit-grab")];
    char stringpool_str731[sizeof("-internal-active-list-box-selection-text")];
    char stringpool_str732[sizeof("optimizespeed")];
    char stringpool_str733[sizeof("peachpuff")];
    char stringpool_str734[sizeof("deepskyblue")];
    char stringpool_str735[sizeof("visual")];
    char stringpool_str736[sizeof("table-row-group")];
    char stringpool_str737[sizeof("visiblefill")];
    char stringpool_str738[sizeof("-webkit-isolate-override")];
    char stringpool_str739[sizeof("media-play-button")];
    char stringpool_str740[sizeof("cubic-bezier")];
    char stringpool_str741[sizeof("paleturquoise")];
    char stringpool_str742[sizeof("-webkit-inline-box")];
    char stringpool_str743[sizeof("lightslategrey")];
    char stringpool_str744[sizeof("lightslategray")];
    char stringpool_str745[sizeof("lemonchiffon")];
    char stringpool_str746[sizeof("appworkspace")];
    char stringpool_str747[sizeof("burlywood")];
    char stringpool_str748[sizeof("skewy")];
    char stringpool_str749[sizeof("-webkit-small-control")];
    char stringpool_str750[sizeof("threedshadow")];
    char stringpool_str751[sizeof("visiblestroke")];
    char stringpool_str752[sizeof("ew-resize")];
    char stringpool_str753[sizeof("-webkit-activelink")];
    char stringpool_str754[sizeof("-internal-inactive-list-box-selection")];
    char stringpool_str755[sizeof("nesw-resize")];
    char stringpool_str756[sizeof("proximity")];
    char stringpool_str757[sizeof("ghostwhite")];
    char stringpool_str758[sizeof("sliderthumb-horizontal")];
    char stringpool_str759[sizeof("-webkit-fit-content")];
    char stringpool_str760[sizeof("padding-box")];
    char stringpool_str761[sizeof("-webkit-plaintext")];
    char stringpool_str762[sizeof("threeddarkshadow")];
    char stringpool_str763[sizeof("media-fullscreen-volume-slider-thumb")];
    char stringpool_str764[sizeof("nwse-resize")];
    char stringpool_str765[sizeof("menulist-textfield")];
    char stringpool_str766[sizeof("slider-horizontal")];
    char stringpool_str767[sizeof("-webkit-grabbing")];
    char stringpool_str768[sizeof("media-controls-fullscreen-background")];
    char stringpool_str769[sizeof("lightskyblue")];
    char stringpool_str770[sizeof("vertical-right")];
    char stringpool_str771[sizeof("-webkit-inline-flex")];
    char stringpool_str772[sizeof("always")];
    char stringpool_str773[sizeof("powderblue")];
    char stringpool_str774[sizeof("-webkit-right")];
    char stringpool_str775[sizeof("media-current-time-display")];
    char stringpool_str776[sizeof("inline-flex")];
    char stringpool_str777[sizeof("-webkit-pictograph")];
    char stringpool_str778[sizeof("-webkit-match-parent")];
    char stringpool_str779[sizeof("-webkit-paged-x")];
    char stringpool_str780[sizeof("-webkit-repeating-linear-gradient")];
    char stringpool_str781[sizeof("-webkit-focus-ring-color")];
    char stringpool_str782[sizeof("-webkit-repeating-radial-gradient")];
    char stringpool_str783[sizeof("-internal-media-track-selection-checkmark")];
    char stringpool_str784[sizeof("-internal-inactive-list-box-selection-text")];
    char stringpool_str785[sizeof("-webkit-fill-available")];
    char stringpool_str786[sizeof("-webkit-cross-fade")];
    char stringpool_str787[sizeof("windowframe")];
    char stringpool_str788[sizeof("ethiopic-halehame")];
    char stringpool_str789[sizeof("-webkit-zoom-in")];
    char stringpool_str790[sizeof("threedlightshadow")];
    char stringpool_str791[sizeof("no-discretionary-ligatures")];
    char stringpool_str792[sizeof("ethiopic-halehame-am")];
    char stringpool_str793[sizeof("cjk-heavenly-stem")];
    char stringpool_str794[sizeof("infobackground")];
    char stringpool_str795[sizeof("-webkit-zoom-out")];
    char stringpool_str796[sizeof("ethiopic-halehame-ti-et")];
    char stringpool_str797[sizeof("sandybrown")];
    char stringpool_str798[sizeof("ethiopic-halehame-ti-er")];
    char stringpool_str799[sizeof("navajowhite")];
    char stringpool_str800[sizeof("-webkit-flex")];
    char stringpool_str801[sizeof("antiquewhite")];
    char stringpool_str802[sizeof("-webkit-max-content")];
    char stringpool_str803[sizeof("-webkit-box")];
    char stringpool_str804[sizeof("-webkit-body")];
    char stringpool_str805[sizeof("-webkit-optimize-contrast")];
    char stringpool_str806[sizeof("lightgoldenrodyellow")];
    char stringpool_str807[sizeof("after-white-space")];
    char stringpool_str808[sizeof("cjk-earthly-branch")];
    char stringpool_str809[sizeof("optimizelegibility")];
    char stringpool_str810[sizeof("media-overlay-play-button")];
    char stringpool_str811[sizeof("-webkit-xxx-large")];
    char stringpool_str812[sizeof("-internal-media-overlay-cast-off-button")];
    char stringpool_str813[sizeof("sideways-right")];
    char stringpool_str814[sizeof("-webkit-paged-y")];
    char stringpool_str815[sizeof("optimizequality")];
    char stringpool_str816[sizeof("read-write-plaintext-only")];
    char stringpool_str817[sizeof("papayawhip")];
  };
static const struct stringpool_t stringpool_contents =
  {
    "900",
    "200",
    "400",
    "300",
    "lr",
    "dot",
    "800",
    "700",
    "ltr",
    "start",
    "lao",
    "600",
    "drag",
    "500",
    "100",
    "lime",
    "large",
    "fine",
    "meter",
    "none",
    "miter",
    "linen",
    "darken",
    "from",
    "larger",
    "hide",
    "seagreen",
    "srgb",
    "linear",
    "hanging",
    "slice",
    "help",
    "format",
    "magenta",
    "caret",
    "fill",
    "ledger",
    "nonzero",
    "small",
    "single",
    "calc",
    "cell",
    "darkred",
    "darkgreen",
    "zoom",
    "salmon",
    "clip",
    "smaller",
    "limegreen",
    "disc",
    "normal",
    "circle",
    "darkorange",
    "to",
    "hue",
    "steps",
    "filled",
    "tan",
    "red",
    "teal",
    "rl",
    "step-end",
    "mongolian",
    "dense",
    "rtl",
    "b5",
    "hsl",
    "b4",
    "ridge",
    "move",
    "loose",
    "markers",
    "coarse",
    "letter",
    "beige",
    "scale",
    "from-image",
    "cambodian",
    "discard",
    "hover",
    "zoom-in",
    "url",
    "dotted",
    "flat",
    "center",
    "crimson",
    "screen",
    "under",
    "hangul",
    "navy",
    "cover",
    "content",
    "contain",
    "linear-gradient",
    "reset",
    "scale3d",
    "step-start",
    "hiragana",
    "legal",
    "double",
    "lavender",
    "forestgreen",
    "bengali",
    "keep-all",
    "darksalmon",
    "clear",
    "central",
    "unset",
    "darkviolet",
    "coral",
    "unicase",
    "hue-rotate",
    "revert",
    "sesame",
    "on",
    "rotate",
    "listitem",
    "underline",
    "space",
    "hsla",
    "static",
    "zoom-out",
    "moccasin",
    "contents",
    "sienna",
    "tomato",
    "blur",
    "contrast",
    "bottom",
    "rotate3d",
    "blue",
    "at",
    "a3",
    "a5",
    "list-item",
    "a4",
    "darkgoldenrod",
    "bevel",
    "attr",
    "baseline",
    "mintcream",
    "devanagari",
    "wrap",
    "oriya",
    "matrix",
    "reverse",
    "local",
    "rect",
    "source-in",
    "triangle",
    "clone",
    "minmax",
    "copy",
    "recto",
    "butt",
    "destination-in",
    "no-repeat",
    "kannada",
    "mixed",
    "darkolivegreen",
    "top",
    "fixed",
    "over",
    "repeat",
    "silver",
    "matrix3d",
    "armenian",
    "min-content",
    "button",
    "fit-content",
    "all",
    "standalone",
    "super",
    "cursive",
    "rgb",
    "tb",
    "linearrgb",
    "darkmagenta",
    "relative",
    "sub",
    "alternate",
    "wait",
    "separate",
    "counter",
    "table",
    "bisque",
    "caption",
    "fullscreen",
    "overline",
    "source-out",
    "hotpink",
    "collapse",
    "tibetan",
    "scalex",
    "hangul-consonant",
    "closest-side",
    "destination-out",
    "balance",
    "wavy",
    "no-common-ligatures",
    "outset",
    "oldlace",
    "background",
    "lr-tb",
    "running",
    "round",
    "destination-over",
    "solid",
    "spell-out",
    "blueviolet",
    "darkblue",
    "span",
    "tb-rl",
    "double-circle",
    "outside",
    "digits",
    "counters",
    "space-around",
    "text",
    "translate",
    "rgba",
    "radio",
    "orange",
    "steelblue",
    "turquoise",
    "dodgerblue",
    "source-over",
    "rotatex",
    "translate3d",
    "wrap-reverse",
    "green",
    "strict",
    "cadetblue",
    "textarea",
    "medium",
    "crispedges",
    "hand",
    "alias",
    "safe",
    "radial",
    "georgian",
    "khaki",
    "grey",
    "black",
    "gray",
    "multiple",
    "end",
    "block",
    "rl-tb",
    "orangered",
    "no-contextual",
    "khmer",
    "olive",
    "decimal",
    "small-caps",
    "no-punctuation",
    "hidden",
    "katakana",
    "destination-atop",
    "logical",
    "closest-corner",
    "darkslateblue",
    "-internal-center",
    "no-change",
    "element",
    "lining-nums",
    "slateblue",
    "currentcolor",
    "contextual",
    "chocolate",
    "middle",
    "minimal-ui",
    "ease",
    "sepia",
    "distribute",
    "no-drag",
    "self-end",
    "max-content",
    "context-menu",
    "left",
    "repeating-linear-gradient",
    "stretch",
    "deeppink",
    "luminance",
    "buttontext",
    "status-bar",
    "radial-gradient",
    "table-cell",
    "repeat-x",
    "margin-box",
    "ease-in",
    "border",
    "seashell",
    "bold",
    "self-start",
    "darkseagreen",
    "open",
    "springgreen",
    "common-ligatures",
    "condensed",
    "ordinal",
    "upper-roman",
    "darkorchid",
    "bolder",
    "step-middle",
    "use-script",
    "upper-latin",
    "upper-armenian",
    "pre",
    "chartreuse",
    "thistle",
    "pink",
    "alternate-reverse",
    "mediumseagreen",
    "crosshair",
    "all-scroll",
    "page",
    "table-column",
    "semi-condensed",
    "repeating-radial-gradient",
    "maroon",
    "blink",
    "aliceblue",
    "break-all",
    "translatex",
    "listbox",
    "literal-punctuation",
    "ease-out",
    "text-top",
    "cornsilk",
    "sans-serif",
    "default",
    "avoid",
    "captiontext",
    "exact",
    "transparent",
    "thin",
    "color",
    "grayscale",
    "brightness",
    "uppercase",
    "ultra-expanded",
    "after",
    "antialiased",
    "hiragana-iroha",
    "palegreen",
    "unsafe",
    "lighten",
    "no-drop",
    "lighter",
    "graytext",
    "firebrick",
    "embed",
    "above",
    "fallback",
    "persian",
    "pre-line",
    "size",
    "polygon",
    "on-demand",
    "text-bottom",
    "plum",
    "white",
    "lightgreen",
    "portrait",
    "wheat",
    "purple",
    "right",
    "inset",
    "flex",
    "olivedrab",
    "serif",
    "isolate",
    "optional",
    "dashed",
    "both",
    "evenodd",
    "after-edge",
    "invert",
    "progress",
    "italic",
    "ease-in-out",
    "scroll",
    "thai",
    "mediumspringgreen",
    "thick",
    "mediumblue",
    "paused",
    "square",
    "paint",
    "initial",
    "historical-ligatures",
    "block-axis",
    "drop-shadow",
    "media-volume-slider",
    "scalez",
    "pointer",
    "flex-end",
    "landscape",
    "lightsalmon",
    "se-resize",
    "diagonal-fractions",
    "painted",
    "grid",
    "ne-resize",
    "subpixel-antialiased",
    "interlace",
    "buttonface",
    "s-resize",
    "semi-expanded",
    "all-small-caps",
    "n-resize",
    "preserve-3d",
    "lightcoral",
    "palegoldenrod",
    "manipulation",
    "ultra-condensed",
    "gold",
    "source-atop",
    "slider-vertical",
    "flex-start",
    "pan-x",
    "rotatez",
    "ns-resize",
    "palevioletred",
    "textfield",
    "auto",
    "col-resize",
    "avoid-page",
    "pixelated",
    "stroke",
    "goldenrod",
    "no-close-quote",
    "pan-up",
    "fuchsia",
    "mediumpurple",
    "gainsboro",
    "titling-caps",
    "hard-light",
    "exclusion",
    "avoid-column",
    "icon",
    "media-slider",
    "farthest-corner",
    "blanchedalmond",
    "difference",
    "reset-size",
    "xor",
    "style",
    "table-column-group",
    "snow",
    "orchid",
    "lavenderblush",
    "color-stop",
    "monospace",
    "searchfield",
    "dimgrey",
    "dimgray",
    "katakana-iroha",
    "upright",
    "aqua",
    "inline",
    "indigo",
    "expanded",
    "midnightblue",
    "azure",
    "smooth",
    "darkgrey",
    "darkgray",
    "new",
    "soft-light",
    "var",
    "media-volume-slider-container",
    "menu",
    "geometricprecision",
    "swap",
    "lightsteelblue",
    "scrollbar",
    "off",
    "lightblue",
    "violet",
    "indianred",
    "darkkhaki",
    "color-burn",
    "saturate",
    "mediumvioletred",
    "aquamarine",
    "media-mute-button",
    "inside",
    "w-resize",
    "ellipse",
    "manual",
    "threedface",
    "saturation",
    "mathematical",
    "padding",
    "border-box",
    "small-caption",
    "scaley",
    "row",
    "inline-grid",
    "pan-right",
    "inherit",
    "brown",
    "horizontal",
    "column",
    "groove",
    "forwards",
    "darkcyan",
    "translatez",
    "alpha",
    "verso",
    "whitesmoke",
    "button-bevel",
    "pan-left",
    "slategrey",
    "slategray",
    "highlight",
    "urdu",
    "inactiveborder",
    "ellipsis",
    "bounding-box",
    "before",
    "simp-chinese-formal",
    "lower-roman",
    "menulist",
    "fantasy",
    "x-small",
    "non-scaling-stroke",
    "rotatey",
    "document",
    "simp-chinese-informal",
    "lower-latin",
    "lower-armenian",
    "x-large",
    "proportional-nums",
    "lower-greek",
    "all-petite-caps",
    "browser",
    "text-after-edge",
    "malayalam",
    "no-historical-ligatures",
    "mediumaquamarine",
    "cyan",
    "not-allowed",
    "legacy",
    "myanmar",
    "dynamic",
    "plaintext",
    "lightpink",
    "darkslategrey",
    "darkslategray",
    "-internal-media-subtitles-icon",
    "checkbox",
    "extra-expanded",
    "color-dodge",
    "arabic-indic",
    "scale-down",
    "mistyrose",
    "last-baseline",
    "telugu",
    "lightseagreen",
    "nowrap",
    "lowercase",
    "path",
    "absolute",
    "e-resize",
    "lawngreen",
    "gujarati",
    "hebrew",
    "petite-caps",
    "square-button",
    "vertical",
    "xx-large",
    "skew",
    "stacked-fractions",
    "menutext",
    "each-line",
    "sticky",
    "capitalize",
    "repeat-y",
    "overlay",
    "bidi-override",
    "gurmukhi",
    "progress-bar",
    "progressive",
    "inline-axis",
    "inline-table",
    "mediumturquoise",
    "open-quote",
    "close-quote",
    "space-evenly",
    "vertical-rl",
    "-internal-quirk-inherit",
    "mediumslateblue",
    "backwards",
    "table-caption",
    "opacity",
    "show",
    "translatey",
    "line-through",
    "slashed-zero",
    "isolate-override",
    "farthest-side",
    "auto-fit",
    "korean-hanja-formal",
    "-internal-media-closed-captions-icon",
    "sliderthumb-vertical",
    "content-box",
    "extra-condensed",
    "xx-small",
    "upper-alpha",
    "korean-hanja-informal",
    "table-row",
    "multiply",
    "vertical-lr",
    "infinite",
    "skyblue",
    "message-box",
    "mandatory",
    "oblique",
    "auto-fill",
    "rebeccapurple",
    "activeborder",
    "luminosity",
    "rosybrown",
    "alphabetic",
    "skewx",
    "inactivecaption",
    "perspective",
    "royalblue",
    "menulist-button",
    "buttonhighlight",
    "media-volume-sliderthumb",
    "darkturquoise",
    "media-controls-background",
    "progress-bar-value",
    "horizontal-tb",
    "read-only",
    "oldstyle-nums",
    "media-toggle-closed-captions-button",
    "inner-spin-button",
    "read-write",
    "media-fullscreen-volume-slider",
    "korean-hangul-formal",
    "tabular-nums",
    "accumulate",
    "table-header-group",
    "decimal-leading-zero",
    "pan-y",
    "discretionary-ligatures",
    "table-footer-group",
    "peru",
    "break-word",
    "trad-chinese-formal",
    "mediumorchid",
    "text-before-edge",
    "before-edge",
    "trad-chinese-informal",
    "layout",
    "visible",
    "inline-block",
    "lightgrey",
    "lightgray",
    "caps-lock-indicator",
    "-webkit-left",
    "window",
    "searchfield-cancel-button",
    "media-sliderthumb",
    "media-enter-fullscreen-button",
    "economy",
    "greenyellow",
    "ivory",
    "pan-down",
    "activecaption",
    "plus-lighter",
    "below",
    "row-reverse",
    "column-reverse",
    "-webkit-center",
    "inactivecaptiontext",
    "lightcyan",
    "yellow",
    "threedhighlight",
    "no-open-quote",
    "scroll-position",
    "saddlebrown",
    "push-button",
    "inter-word",
    "highlighttext",
    "-webkit-auto",
    "-webkit-control",
    "yellowgreen",
    "-webkit-radial-gradient",
    "-webkit-linear-gradient",
    "-webkit-min-content",
    "-internal-active-list-box-selection",
    "sw-resize",
    "-webkit-calc",
    "nw-resize",
    "menulist-text",
    "pre-wrap",
    "-webkit-mini-control",
    "visiblepainted",
    "infotext",
    "-webkit-gradient",
    "ideographic",
    "row-resize",
    "justify",
    "windowtext",
    "-webkit-isolate",
    "space-between",
    "floralwhite",
    "-internal-extend-to-zoom",
    "lower-alpha",
    "lightyellow",
    "cornflowerblue",
    "vertical-text",
    "-webkit-link",
    "-internal-media-cast-off-button",
    "buttonshadow",
    "-webkit-image-set",
    "-internal-variable-value",
    "media-exit-fullscreen-button",
    "honeydew",
    "cjk-ideographic",
    "media-time-remaining-display",
    "-webkit-baseline-middle",
    "-webkit-nowrap",
    "sideways",
    "-webkit-grab",
    "-internal-active-list-box-selection-text",
    "optimizespeed",
    "peachpuff",
    "deepskyblue",
    "visual",
    "table-row-group",
    "visiblefill",
    "-webkit-isolate-override",
    "media-play-button",
    "cubic-bezier",
    "paleturquoise",
    "-webkit-inline-box",
    "lightslategrey",
    "lightslategray",
    "lemonchiffon",
    "appworkspace",
    "burlywood",
    "skewy",
    "-webkit-small-control",
    "threedshadow",
    "visiblestroke",
    "ew-resize",
    "-webkit-activelink",
    "-internal-inactive-list-box-selection",
    "nesw-resize",
    "proximity",
    "ghostwhite",
    "sliderthumb-horizontal",
    "-webkit-fit-content",
    "padding-box",
    "-webkit-plaintext",
    "threeddarkshadow",
    "media-fullscreen-volume-slider-thumb",
    "nwse-resize",
    "menulist-textfield",
    "slider-horizontal",
    "-webkit-grabbing",
    "media-controls-fullscreen-background",
    "lightskyblue",
    "vertical-right",
    "-webkit-inline-flex",
    "always",
    "powderblue",
    "-webkit-right",
    "media-current-time-display",
    "inline-flex",
    "-webkit-pictograph",
    "-webkit-match-parent",
    "-webkit-paged-x",
    "-webkit-repeating-linear-gradient",
    "-webkit-focus-ring-color",
    "-webkit-repeating-radial-gradient",
    "-internal-media-track-selection-checkmark",
    "-internal-inactive-list-box-selection-text",
    "-webkit-fill-available",
    "-webkit-cross-fade",
    "windowframe",
    "ethiopic-halehame",
    "-webkit-zoom-in",
    "threedlightshadow",
    "no-discretionary-ligatures",
    "ethiopic-halehame-am",
    "cjk-heavenly-stem",
    "infobackground",
    "-webkit-zoom-out",
    "ethiopic-halehame-ti-et",
    "sandybrown",
    "ethiopic-halehame-ti-er",
    "navajowhite",
    "-webkit-flex",
    "antiquewhite",
    "-webkit-max-content",
    "-webkit-box",
    "-webkit-body",
    "-webkit-optimize-contrast",
    "lightgoldenrodyellow",
    "after-white-space",
    "cjk-earthly-branch",
    "optimizelegibility",
    "media-overlay-play-button",
    "-webkit-xxx-large",
    "-internal-media-overlay-cast-off-button",
    "sideways-right",
    "-webkit-paged-y",
    "optimizequality",
    "read-write-plaintext-only",
    "papayawhip"
  };
#define stringpool ((const char *) &stringpool_contents)
const struct Value *
CSSValueKeywordsHash::findValueImpl (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 818,
      MIN_WORD_LENGTH = 2,
      MAX_WORD_LENGTH = 42,
      MIN_HASH_VALUE = 30,
      MAX_HASH_VALUE = 6346
    };

  static const struct Value value_word_list[] =
    {
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str0, CSSValue900},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str1, CSSValue200},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str2, CSSValue400},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str3, CSSValue300},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str4, CSSValueLr},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str5, CSSValueDot},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str6, CSSValue800},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str7, CSSValue700},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str8, CSSValueLtr},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str9, CSSValueStart},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str10, CSSValueLao},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str11, CSSValue600},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str12, CSSValueDrag},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str13, CSSValue500},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str14, CSSValue100},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str15, CSSValueLime},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str16, CSSValueLarge},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str17, CSSValueFine},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str18, CSSValueMeter},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str19, CSSValueNone},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str20, CSSValueMiter},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str21, CSSValueLinen},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str22, CSSValueDarken},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str23, CSSValueFrom},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str24, CSSValueLarger},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str25, CSSValueHide},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str26, CSSValueSeagreen},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str27, CSSValueSRGB},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str28, CSSValueLinear},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str29, CSSValueHanging},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str30, CSSValueSlice},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str31, CSSValueHelp},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str32, CSSValueFormat},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str33, CSSValueMagenta},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str34, CSSValueCaret},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str35, CSSValueFill},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str36, CSSValueLedger},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str37, CSSValueNonzero},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str38, CSSValueSmall},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str39, CSSValueSingle},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str40, CSSValueCalc},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str41, CSSValueCell},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str42, CSSValueDarkred},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str43, CSSValueDarkgreen},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str44, CSSValueZoom},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str45, CSSValueSalmon},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str46, CSSValueClip},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str47, CSSValueSmaller},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str48, CSSValueLimegreen},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str49, CSSValueDisc},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str50, CSSValueNormal},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str51, CSSValueCircle},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str52, CSSValueDarkorange},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str53, CSSValueTo},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str54, CSSValueHue},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str55, CSSValueSteps},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str56, CSSValueFilled},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str57, CSSValueTan},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str58, CSSValueRed},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str59, CSSValueTeal},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str60, CSSValueRl},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str61, CSSValueStepEnd},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str62, CSSValueMongolian},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str63, CSSValueDense},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str64, CSSValueRtl},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str65, CSSValueB5},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str66, CSSValueHsl},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str67, CSSValueB4},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str68, CSSValueRidge},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str69, CSSValueMove},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str70, CSSValueLoose},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str71, CSSValueMarkers},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str72, CSSValueCoarse},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str73, CSSValueLetter},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str74, CSSValueBeige},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str75, CSSValueScale},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str76, CSSValueFromImage},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str77, CSSValueCambodian},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str78, CSSValueDiscard},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str79, CSSValueHover},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str80, CSSValueZoomIn},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str81, CSSValueUrl},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str82, CSSValueDotted},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str83, CSSValueFlat},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str84, CSSValueCenter},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str85, CSSValueCrimson},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str86, CSSValueScreen},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str87, CSSValueUnder},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str88, CSSValueHangul},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str89, CSSValueNavy},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str90, CSSValueCover},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str91, CSSValueContent},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str92, CSSValueContain},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str93, CSSValueLinearGradient},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str94, CSSValueReset},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str95, CSSValueScale3d},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str96, CSSValueStepStart},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str97, CSSValueHiragana},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str98, CSSValueLegal},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str99, CSSValueDouble},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str100, CSSValueLavender},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str101, CSSValueForestgreen},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str102, CSSValueBengali},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str103, CSSValueKeepAll},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str104, CSSValueDarksalmon},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str105, CSSValueClear},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str106, CSSValueCentral},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str107, CSSValueUnset},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str108, CSSValueDarkviolet},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str109, CSSValueCoral},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str110, CSSValueUnicase},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str111, CSSValueHueRotate},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str112, CSSValueRevert},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str113, CSSValueSesame},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str114, CSSValueOn},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str115, CSSValueRotate},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str116, CSSValueListitem},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str117, CSSValueUnderline},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str118, CSSValueSpace},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str119, CSSValueHsla},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str120, CSSValueStatic},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str121, CSSValueZoomOut},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str122, CSSValueMoccasin},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str123, CSSValueContents},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str124, CSSValueSienna},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str125, CSSValueTomato},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str126, CSSValueBlur},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str127, CSSValueContrast},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str128, CSSValueBottom},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str129, CSSValueRotate3d},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str130, CSSValueBlue},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str131, CSSValueAt},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str132, CSSValueA3},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str133, CSSValueA5},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str134, CSSValueListItem},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str135, CSSValueA4},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str136, CSSValueDarkgoldenrod},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str137, CSSValueBevel},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str138, CSSValueAttr},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str139, CSSValueBaseline},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str140, CSSValueMintcream},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str141, CSSValueDevanagari},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str142, CSSValueWrap},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str143, CSSValueOriya},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str144, CSSValueMatrix},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str145, CSSValueReverse},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str146, CSSValueLocal},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str147, CSSValueRect},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str148, CSSValueSourceIn},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str149, CSSValueTriangle},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str150, CSSValueClone},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str151, CSSValueMinmax},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str152, CSSValueCopy},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str153, CSSValueRecto},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str154, CSSValueButt},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str155, CSSValueDestinationIn},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str156, CSSValueNoRepeat},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str157, CSSValueKannada},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str158, CSSValueMixed},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str159, CSSValueDarkolivegreen},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str160, CSSValueTop},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str161, CSSValueFixed},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str162, CSSValueOver},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str163, CSSValueRepeat},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str164, CSSValueSilver},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str165, CSSValueMatrix3d},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str166, CSSValueArmenian},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str167, CSSValueMinContent},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str168, CSSValueButton},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str169, CSSValueFitContent},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str170, CSSValueAll},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str171, CSSValueStandalone},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str172, CSSValueSuper},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str173, CSSValueCursive},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str174, CSSValueRgb},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str175, CSSValueTb},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str176, CSSValueLinearRGB},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str177, CSSValueDarkmagenta},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str178, CSSValueRelative},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str179, CSSValueSub},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str180, CSSValueAlternate},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str181, CSSValueWait},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str182, CSSValueSeparate},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str183, CSSValueCounter},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str184, CSSValueTable},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str185, CSSValueBisque},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str186, CSSValueCaption},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str187, CSSValueFullscreen},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str188, CSSValueOverline},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str189, CSSValueSourceOut},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str190, CSSValueHotpink},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str191, CSSValueCollapse},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str192, CSSValueTibetan},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str193, CSSValueScaleX},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str194, CSSValueHangulConsonant},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str195, CSSValueClosestSide},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str196, CSSValueDestinationOut},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str197, CSSValueBalance},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str198, CSSValueWavy},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str199, CSSValueNoCommonLigatures},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str200, CSSValueOutset},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str201, CSSValueOldlace},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str202, CSSValueBackground},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str203, CSSValueLrTb},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str204, CSSValueRunning},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str205, CSSValueRound},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str206, CSSValueDestinationOver},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str207, CSSValueSolid},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str208, CSSValueSpellOut},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str209, CSSValueBlueviolet},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str210, CSSValueDarkblue},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str211, CSSValueSpan},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str212, CSSValueTbRl},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str213, CSSValueDoubleCircle},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str214, CSSValueOutside},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str215, CSSValueDigits},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str216, CSSValueCounters},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str217, CSSValueSpaceAround},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str218, CSSValueText},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str219, CSSValueTranslate},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str220, CSSValueRgba},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str221, CSSValueRadio},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str222, CSSValueOrange},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str223, CSSValueSteelblue},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str224, CSSValueTurquoise},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str225, CSSValueDodgerblue},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str226, CSSValueSourceOver},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str227, CSSValueRotateX},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str228, CSSValueTranslate3d},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str229, CSSValueWrapReverse},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str230, CSSValueGreen},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str231, CSSValueStrict},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str232, CSSValueCadetblue},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str233, CSSValueTextarea},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str234, CSSValueMedium},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str235, CSSValueCrispEdges},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str236, CSSValueHand},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str237, CSSValueAlias},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str238, CSSValueSafe},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str239, CSSValueRadial},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str240, CSSValueGeorgian},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str241, CSSValueKhaki},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str242, CSSValueGrey},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str243, CSSValueBlack},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str244, CSSValueGray},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str245, CSSValueMultiple},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str246, CSSValueEnd},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str247, CSSValueBlock},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str248, CSSValueRlTb},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str249, CSSValueOrangered},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str250, CSSValueNoContextual},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str251, CSSValueKhmer},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str252, CSSValueOlive},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str253, CSSValueDecimal},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str254, CSSValueSmallCaps},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str255, CSSValueNoPunctuation},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str256, CSSValueHidden},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str257, CSSValueKatakana},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str258, CSSValueDestinationAtop},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str259, CSSValueLogical},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str260, CSSValueClosestCorner},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str261, CSSValueDarkslateblue},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str262, CSSValueInternalCenter},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str263, CSSValueNoChange},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str264, CSSValueElement},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str265, CSSValueLiningNums},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str266, CSSValueSlateblue},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str267, CSSValueCurrentcolor},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str268, CSSValueContextual},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str269, CSSValueChocolate},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str270, CSSValueMiddle},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str271, CSSValueMinimalUi},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str272, CSSValueEase},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str273, CSSValueSepia},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str274, CSSValueDistribute},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str275, CSSValueNoDrag},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str276, CSSValueSelfEnd},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str277, CSSValueMaxContent},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str278, CSSValueContextMenu},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str279, CSSValueLeft},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str280, CSSValueRepeatingLinearGradient},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str281, CSSValueStretch},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str282, CSSValueDeeppink},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str283, CSSValueLuminance},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str284, CSSValueButtontext},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str285, CSSValueStatusBar},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str286, CSSValueRadialGradient},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str287, CSSValueTableCell},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str288, CSSValueRepeatX},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str289, CSSValueMarginBox},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str290, CSSValueEaseIn},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str291, CSSValueBorder},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str292, CSSValueSeashell},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str293, CSSValueBold},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str294, CSSValueSelfStart},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str295, CSSValueDarkseagreen},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str296, CSSValueOpen},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str297, CSSValueSpringgreen},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str298, CSSValueCommonLigatures},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str299, CSSValueCondensed},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str300, CSSValueOrdinal},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str301, CSSValueUpperRoman},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str302, CSSValueDarkorchid},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str303, CSSValueBolder},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str304, CSSValueStepMiddle},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str305, CSSValueUseScript},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str306, CSSValueUpperLatin},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str307, CSSValueUpperArmenian},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str308, CSSValuePre},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str309, CSSValueChartreuse},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str310, CSSValueThistle},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str311, CSSValuePink},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str312, CSSValueAlternateReverse},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str313, CSSValueMediumseagreen},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str314, CSSValueCrosshair},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str315, CSSValueAllScroll},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str316, CSSValuePage},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str317, CSSValueTableColumn},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str318, CSSValueSemiCondensed},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str319, CSSValueRepeatingRadialGradient},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str320, CSSValueMaroon},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str321, CSSValueBlink},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str322, CSSValueAliceblue},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str323, CSSValueBreakAll},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str324, CSSValueTranslateX},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str325, CSSValueListbox},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str326, CSSValueLiteralPunctuation},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str327, CSSValueEaseOut},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str328, CSSValueTextTop},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str329, CSSValueCornsilk},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str330, CSSValueSansSerif},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str331, CSSValueDefault},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str332, CSSValueAvoid},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str333, CSSValueCaptiontext},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str334, CSSValueExact},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str335, CSSValueTransparent},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str336, CSSValueThin},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str337, CSSValueColor},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str338, CSSValueGrayscale},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str339, CSSValueBrightness},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str340, CSSValueUppercase},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str341, CSSValueUltraExpanded},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str342, CSSValueAfter},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str343, CSSValueAntialiased},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str344, CSSValueHiraganaIroha},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str345, CSSValuePalegreen},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str346, CSSValueUnsafe},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str347, CSSValueLighten},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str348, CSSValueNoDrop},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str349, CSSValueLighter},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str350, CSSValueGraytext},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str351, CSSValueFirebrick},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str352, CSSValueEmbed},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str353, CSSValueAbove},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str354, CSSValueFallback},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str355, CSSValuePersian},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str356, CSSValuePreLine},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str357, CSSValueSize},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str358, CSSValuePolygon},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str359, CSSValueOnDemand},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str360, CSSValueTextBottom},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str361, CSSValuePlum},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str362, CSSValueWhite},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str363, CSSValueLightgreen},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str364, CSSValuePortrait},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str365, CSSValueWheat},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str366, CSSValuePurple},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str367, CSSValueRight},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str368, CSSValueInset},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str369, CSSValueFlex},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str370, CSSValueOlivedrab},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str371, CSSValueSerif},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str372, CSSValueIsolate},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str373, CSSValueOptional},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str374, CSSValueDashed},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str375, CSSValueBoth},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str376, CSSValueEvenodd},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str377, CSSValueAfterEdge},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str378, CSSValueInvert},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str379, CSSValueProgress},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str380, CSSValueItalic},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str381, CSSValueEaseInOut},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str382, CSSValueScroll},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str383, CSSValueThai},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str384, CSSValueMediumspringgreen},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str385, CSSValueThick},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str386, CSSValueMediumblue},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str387, CSSValuePaused},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str388, CSSValueSquare},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str389, CSSValuePaint},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str390, CSSValueInitial},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str391, CSSValueHistoricalLigatures},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str392, CSSValueBlockAxis},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str393, CSSValueDropShadow},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str394, CSSValueMediaVolumeSlider},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str395, CSSValueScaleZ},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str396, CSSValuePointer},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str397, CSSValueFlexEnd},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str398, CSSValueLandscape},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str399, CSSValueLightsalmon},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str400, CSSValueSeResize},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str401, CSSValueDiagonalFractions},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str402, CSSValuePainted},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str403, CSSValueGrid},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str404, CSSValueNeResize},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str405, CSSValueSubpixelAntialiased},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str406, CSSValueInterlace},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str407, CSSValueButtonface},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str408, CSSValueSResize},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str409, CSSValueSemiExpanded},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str410, CSSValueAllSmallCaps},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str411, CSSValueNResize},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str412, CSSValuePreserve3d},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str413, CSSValueLightcoral},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str414, CSSValuePalegoldenrod},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str415, CSSValueManipulation},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str416, CSSValueUltraCondensed},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str417, CSSValueGold},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str418, CSSValueSourceAtop},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str419, CSSValueSliderVertical},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str420, CSSValueFlexStart},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str421, CSSValuePanX},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str422, CSSValueRotateZ},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str423, CSSValueNsResize},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str424, CSSValuePalevioletred},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str425, CSSValueTextfield},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str426, CSSValueAuto},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str427, CSSValueColResize},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str428, CSSValueAvoidPage},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str429, CSSValuePixelated},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str430, CSSValueStroke},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str431, CSSValueGoldenrod},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str432, CSSValueNoCloseQuote},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str433, CSSValuePanUp},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str434, CSSValueFuchsia},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str435, CSSValueMediumpurple},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str436, CSSValueGainsboro},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str437, CSSValueTitlingCaps},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str438, CSSValueHardLight},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str439, CSSValueExclusion},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str440, CSSValueAvoidColumn},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str441, CSSValueIcon},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str442, CSSValueMediaSlider},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str443, CSSValueFarthestCorner},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str444, CSSValueBlanchedalmond},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str445, CSSValueDifference},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str446, CSSValueResetSize},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str447, CSSValueXor},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str448, CSSValueStyle},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str449, CSSValueTableColumnGroup},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str450, CSSValueSnow},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str451, CSSValueOrchid},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str452, CSSValueLavenderblush},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str453, CSSValueColorStop},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str454, CSSValueMonospace},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str455, CSSValueSearchfield},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str456, CSSValueDimgrey},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str457, CSSValueDimgray},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str458, CSSValueKatakanaIroha},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str459, CSSValueUpright},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str460, CSSValueAqua},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str461, CSSValueInline},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str462, CSSValueIndigo},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str463, CSSValueExpanded},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str464, CSSValueMidnightblue},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str465, CSSValueAzure},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str466, CSSValueSmooth},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str467, CSSValueDarkgrey},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str468, CSSValueDarkgray},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str469, CSSValueNew},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str470, CSSValueSoftLight},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str471, CSSValueVar},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str472, CSSValueMediaVolumeSliderContainer},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str473, CSSValueMenu},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str474, CSSValueGeometricPrecision},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str475, CSSValueSwap},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str476, CSSValueLightsteelblue},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str477, CSSValueScrollbar},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str478, CSSValueOff},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str479, CSSValueLightblue},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str480, CSSValueViolet},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str481, CSSValueIndianred},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str482, CSSValueDarkkhaki},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str483, CSSValueColorBurn},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str484, CSSValueSaturate},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str485, CSSValueMediumvioletred},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str486, CSSValueAquamarine},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str487, CSSValueMediaMuteButton},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str488, CSSValueInside},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str489, CSSValueWResize},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str490, CSSValueEllipse},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str491, CSSValueManual},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str492, CSSValueThreedface},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str493, CSSValueSaturation},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str494, CSSValueMathematical},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str495, CSSValuePadding},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str496, CSSValueBorderBox},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str497, CSSValueSmallCaption},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str498, CSSValueScaleY},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str499, CSSValueRow},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str500, CSSValueInlineGrid},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str501, CSSValuePanRight},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str502, CSSValueInherit},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str503, CSSValueBrown},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str504, CSSValueHorizontal},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str505, CSSValueColumn},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str506, CSSValueGroove},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str507, CSSValueForwards},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str508, CSSValueDarkcyan},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str509, CSSValueTranslateZ},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str510, CSSValueAlpha},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str511, CSSValueVerso},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str512, CSSValueWhitesmoke},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str513, CSSValueButtonBevel},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str514, CSSValuePanLeft},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str515, CSSValueSlategrey},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str516, CSSValueSlategray},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str517, CSSValueHighlight},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str518, CSSValueUrdu},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str519, CSSValueInactiveborder},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str520, CSSValueEllipsis},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str521, CSSValueBoundingBox},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str522, CSSValueBefore},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str523, CSSValueSimpChineseFormal},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str524, CSSValueLowerRoman},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str525, CSSValueMenulist},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str526, CSSValueFantasy},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str527, CSSValueXSmall},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str528, CSSValueNonScalingStroke},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str529, CSSValueRotateY},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str530, CSSValueDocument},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str531, CSSValueSimpChineseInformal},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str532, CSSValueLowerLatin},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str533, CSSValueLowerArmenian},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str534, CSSValueXLarge},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str535, CSSValueProportionalNums},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str536, CSSValueLowerGreek},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str537, CSSValueAllPetiteCaps},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str538, CSSValueBrowser},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str539, CSSValueTextAfterEdge},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str540, CSSValueMalayalam},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str541, CSSValueNoHistoricalLigatures},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str542, CSSValueMediumaquamarine},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str543, CSSValueCyan},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str544, CSSValueNotAllowed},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str545, CSSValueLegacy},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str546, CSSValueMyanmar},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str547, CSSValueDynamic},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str548, CSSValuePlaintext},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str549, CSSValueLightpink},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str550, CSSValueDarkslategrey},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str551, CSSValueDarkslategray},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str552, CSSValueInternalMediaSubtitlesIcon},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str553, CSSValueCheckbox},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str554, CSSValueExtraExpanded},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str555, CSSValueColorDodge},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str556, CSSValueArabicIndic},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str557, CSSValueScaleDown},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str558, CSSValueMistyrose},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str559, CSSValueLastBaseline},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str560, CSSValueTelugu},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str561, CSSValueLightseagreen},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str562, CSSValueNowrap},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str563, CSSValueLowercase},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str564, CSSValuePath},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str565, CSSValueAbsolute},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str566, CSSValueEResize},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str567, CSSValueLawngreen},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str568, CSSValueGujarati},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str569, CSSValueHebrew},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str570, CSSValuePetiteCaps},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str571, CSSValueSquareButton},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str572, CSSValueVertical},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str573, CSSValueXxLarge},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str574, CSSValueSkew},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str575, CSSValueStackedFractions},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str576, CSSValueMenutext},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str577, CSSValueEachLine},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str578, CSSValueSticky},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str579, CSSValueCapitalize},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str580, CSSValueRepeatY},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str581, CSSValueOverlay},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str582, CSSValueBidiOverride},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str583, CSSValueGurmukhi},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str584, CSSValueProgressBar},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str585, CSSValueProgressive},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str586, CSSValueInlineAxis},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str587, CSSValueInlineTable},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str588, CSSValueMediumturquoise},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str589, CSSValueOpenQuote},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str590, CSSValueCloseQuote},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str591, CSSValueSpaceEvenly},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str592, CSSValueVerticalRl},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str593, CSSValueInternalQuirkInherit},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str594, CSSValueMediumslateblue},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str595, CSSValueBackwards},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str596, CSSValueTableCaption},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str597, CSSValueOpacity},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str598, CSSValueShow},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str599, CSSValueTranslateY},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str600, CSSValueLineThrough},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str601, CSSValueSlashedZero},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str602, CSSValueIsolateOverride},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str603, CSSValueFarthestSide},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str604, CSSValueAutoFit},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str605, CSSValueKoreanHanjaFormal},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str606, CSSValueInternalMediaClosedCaptionsIcon},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str607, CSSValueSliderthumbVertical},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str608, CSSValueContentBox},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str609, CSSValueExtraCondensed},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str610, CSSValueXxSmall},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str611, CSSValueUpperAlpha},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str612, CSSValueKoreanHanjaInformal},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str613, CSSValueTableRow},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str614, CSSValueMultiply},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str615, CSSValueVerticalLr},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str616, CSSValueInfinite},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str617, CSSValueSkyblue},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str618, CSSValueMessageBox},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str619, CSSValueMandatory},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str620, CSSValueOblique},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str621, CSSValueAutoFill},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str622, CSSValueRebeccapurple},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str623, CSSValueActiveborder},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str624, CSSValueLuminosity},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str625, CSSValueRosybrown},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str626, CSSValueAlphabetic},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str627, CSSValueSkewX},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str628, CSSValueInactivecaption},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str629, CSSValuePerspective},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str630, CSSValueRoyalblue},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str631, CSSValueMenulistButton},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str632, CSSValueButtonhighlight},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str633, CSSValueMediaVolumeSliderthumb},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str634, CSSValueDarkturquoise},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str635, CSSValueMediaControlsBackground},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str636, CSSValueProgressBarValue},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str637, CSSValueHorizontalTb},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str638, CSSValueReadOnly},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str639, CSSValueOldstyleNums},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str640, CSSValueMediaToggleClosedCaptionsButton},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str641, CSSValueInnerSpinButton},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str642, CSSValueReadWrite},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str643, CSSValueMediaFullscreenVolumeSlider},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str644, CSSValueKoreanHangulFormal},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str645, CSSValueTabularNums},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str646, CSSValueAccumulate},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str647, CSSValueTableHeaderGroup},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str648, CSSValueDecimalLeadingZero},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str649, CSSValuePanY},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str650, CSSValueDiscretionaryLigatures},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str651, CSSValueTableFooterGroup},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str652, CSSValuePeru},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str653, CSSValueBreakWord},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str654, CSSValueTradChineseFormal},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str655, CSSValueMediumorchid},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str656, CSSValueTextBeforeEdge},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str657, CSSValueBeforeEdge},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str658, CSSValueTradChineseInformal},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str659, CSSValueLayout},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str660, CSSValueVisible},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str661, CSSValueInlineBlock},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str662, CSSValueLightgrey},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str663, CSSValueLightgray},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str664, CSSValueCapsLockIndicator},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str665, CSSValueWebkitLeft},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str666, CSSValueWindow},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str667, CSSValueSearchfieldCancelButton},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str668, CSSValueMediaSliderthumb},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str669, CSSValueMediaEnterFullscreenButton},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str670, CSSValueEconomy},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str671, CSSValueGreenyellow},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str672, CSSValueIvory},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str673, CSSValuePanDown},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str674, CSSValueActivecaption},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str675, CSSValuePlusLighter},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str676, CSSValueBelow},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str677, CSSValueRowReverse},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str678, CSSValueColumnReverse},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str679, CSSValueWebkitCenter},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str680, CSSValueInactivecaptiontext},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str681, CSSValueLightcyan},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str682, CSSValueYellow},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str683, CSSValueThreedhighlight},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str684, CSSValueNoOpenQuote},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str685, CSSValueScrollPosition},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str686, CSSValueSaddlebrown},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str687, CSSValuePushButton},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str688, CSSValueInterWord},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str689, CSSValueHighlighttext},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str690, CSSValueWebkitAuto},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str691, CSSValueWebkitControl},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str692, CSSValueYellowgreen},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str693, CSSValueWebkitRadialGradient},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str694, CSSValueWebkitLinearGradient},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str695, CSSValueWebkitMinContent},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str696, CSSValueInternalActiveListBoxSelection},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str697, CSSValueSwResize},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str698, CSSValueWebkitCalc},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str699, CSSValueNwResize},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str700, CSSValueMenulistText},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str701, CSSValuePreWrap},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str702, CSSValueWebkitMiniControl},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str703, CSSValueVisiblePainted},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str704, CSSValueInfotext},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str705, CSSValueWebkitGradient},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str706, CSSValueIdeographic},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str707, CSSValueRowResize},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str708, CSSValueJustify},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str709, CSSValueWindowtext},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str710, CSSValueWebkitIsolate},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str711, CSSValueSpaceBetween},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str712, CSSValueFloralwhite},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str713, CSSValueInternalExtendToZoom},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str714, CSSValueLowerAlpha},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str715, CSSValueLightyellow},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str716, CSSValueCornflowerblue},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str717, CSSValueVerticalText},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str718, CSSValueWebkitLink},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str719, CSSValueInternalMediaCastOffButton},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str720, CSSValueButtonshadow},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str721, CSSValueWebkitImageSet},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str722, CSSValueInternalVariableValue},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str723, CSSValueMediaExitFullscreenButton},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str724, CSSValueHoneydew},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str725, CSSValueCjkIdeographic},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str726, CSSValueMediaTimeRemainingDisplay},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str727, CSSValueWebkitBaselineMiddle},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str728, CSSValueWebkitNowrap},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str729, CSSValueSideways},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str730, CSSValueWebkitGrab},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str731, CSSValueInternalActiveListBoxSelectionText},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str732, CSSValueOptimizeSpeed},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str733, CSSValuePeachpuff},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str734, CSSValueDeepskyblue},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str735, CSSValueVisual},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str736, CSSValueTableRowGroup},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str737, CSSValueVisibleFill},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str738, CSSValueWebkitIsolateOverride},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str739, CSSValueMediaPlayButton},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str740, CSSValueCubicBezier},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str741, CSSValuePaleturquoise},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str742, CSSValueWebkitInlineBox},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str743, CSSValueLightslategrey},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str744, CSSValueLightslategray},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str745, CSSValueLemonchiffon},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str746, CSSValueAppworkspace},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str747, CSSValueBurlywood},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str748, CSSValueSkewY},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str749, CSSValueWebkitSmallControl},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str750, CSSValueThreedshadow},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str751, CSSValueVisibleStroke},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str752, CSSValueEwResize},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str753, CSSValueWebkitActivelink},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str754, CSSValueInternalInactiveListBoxSelection},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str755, CSSValueNeswResize},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str756, CSSValueProximity},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str757, CSSValueGhostwhite},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str758, CSSValueSliderthumbHorizontal},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str759, CSSValueWebkitFitContent},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str760, CSSValuePaddingBox},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str761, CSSValueWebkitPlaintext},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str762, CSSValueThreeddarkshadow},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str763, CSSValueMediaFullscreenVolumeSliderThumb},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str764, CSSValueNwseResize},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str765, CSSValueMenulistTextfield},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str766, CSSValueSliderHorizontal},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str767, CSSValueWebkitGrabbing},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str768, CSSValueMediaControlsFullscreenBackground},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str769, CSSValueLightskyblue},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str770, CSSValueVerticalRight},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str771, CSSValueWebkitInlineFlex},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str772, CSSValueAlways},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str773, CSSValuePowderblue},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str774, CSSValueWebkitRight},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str775, CSSValueMediaCurrentTimeDisplay},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str776, CSSValueInlineFlex},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str777, CSSValueWebkitPictograph},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str778, CSSValueWebkitMatchParent},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str779, CSSValueWebkitPagedX},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str780, CSSValueWebkitRepeatingLinearGradient},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str781, CSSValueWebkitFocusRingColor},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str782, CSSValueWebkitRepeatingRadialGradient},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str783, CSSValueInternalMediaTrackSelectionCheckmark},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str784, CSSValueInternalInactiveListBoxSelectionText},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str785, CSSValueWebkitFillAvailable},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str786, CSSValueWebkitCrossFade},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str787, CSSValueWindowframe},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str788, CSSValueEthiopicHalehame},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str789, CSSValueWebkitZoomIn},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str790, CSSValueThreedlightshadow},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str791, CSSValueNoDiscretionaryLigatures},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str792, CSSValueEthiopicHalehameAm},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str793, CSSValueCjkHeavenlyStem},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str794, CSSValueInfobackground},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str795, CSSValueWebkitZoomOut},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str796, CSSValueEthiopicHalehameTiEt},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str797, CSSValueSandybrown},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str798, CSSValueEthiopicHalehameTiEr},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str799, CSSValueNavajowhite},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str800, CSSValueWebkitFlex},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str801, CSSValueAntiquewhite},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str802, CSSValueWebkitMaxContent},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str803, CSSValueWebkitBox},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str804, CSSValueWebkitBody},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str805, CSSValueWebkitOptimizeContrast},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str806, CSSValueLightgoldenrodyellow},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str807, CSSValueAfterWhiteSpace},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str808, CSSValueCjkEarthlyBranch},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str809, CSSValueOptimizeLegibility},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str810, CSSValueMediaOverlayPlayButton},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str811, CSSValueWebkitXxxLarge},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str812, CSSValueInternalMediaOverlayCastOffButton},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str813, CSSValueSidewaysRight},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str814, CSSValueWebkitPagedY},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str815, CSSValueOptimizeQuality},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str816, CSSValueReadWritePlaintextOnly},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str817, CSSValuePapayawhip}
    };

  static const short lookup[] =
    {
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
        0,  -1,  -1,   1,  -1,  -1,   2,  -1,  -1,   3,
       -1,   4,   5,  -1,  -1,   6,  -1,  -1,   7,  -1,
       -1,   8,  -1,   9,  10,  -1,  -1,  11,  12,  -1,
       13,  -1,  -1,  14,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  15,  16,  -1,  17,
       -1,  -1,  -1,  18,  -1,  19,  20,  -1,  -1,  21,
       22,  23,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  24,
       25,  -1,  -1,  -1,  26,  -1,  27,  -1,  28,  29,
       30,  -1,  31,  -1,  32,  -1,  -1,  -1,  33,  34,
       -1,  35,  -1,  36,  37,  38,  -1,  -1,  -1,  39,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  40,
       -1,  -1,  41,  -1,  -1,  42,  -1,  43,  44,  -1,
       45,  46,  -1,  -1,  -1,  -1,  -1,  47,  -1,  48,
       49,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  50,  -1,
       -1,  51,  52,  -1,  -1,  -1,  53,  54,  -1,  55,
       56,  -1,  -1,  57,  -1,  -1,  58,  -1,  -1,  -1,
       -1,  -1,  -1,  59,  60,  -1,  -1,  61,  62,  -1,
       63,  -1,  -1,  -1,  64,  -1,  65,  66,  -1,  67,
       -1,  -1,  68,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  69,  70,  -1,  71,
       -1,  72,  -1,  -1,  73,  -1,  74,  -1,  -1,  75,
       -1,  76,  -1,  77,  78,  79,  -1,  80,  -1,  -1,
       -1,  -1,  81,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  82,  -1,  -1,  -1,  83,  -1,
       84,  85,  -1,  86,  -1,  87,  88,  -1,  -1,  -1,
       89,  90,  -1,  -1,  -1,  -1,  91,  -1,  -1,  -1,
       -1,  -1,  92,  -1,  -1,  -1,  -1,  93,  -1,  94,
       -1,  95,  -1,  -1,  96,  97,  -1,  -1,  -1,  -1,
       -1,  98,  99,  -1,  -1,  -1,  -1, 100,  -1,  -1,
      101,  -1, 102,  -1,  -1,  -1, 103,  -1, 104,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 105,  -1,
      106, 107,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 108,
      109,  -1, 110,  -1,  -1, 111,  -1, 112,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1, 113,  -1, 114, 115,
       -1,  -1,  -1,  -1, 116,  -1,  -1,  -1,  -1,  -1,
       -1, 117,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1, 118,  -1, 119,  -1, 120,
       -1,  -1,  -1,  -1, 121,  -1,  -1, 122,  -1,  -1,
       -1,  -1,  -1, 123, 124,  -1,  -1, 125,  -1,  -1,
       -1, 126, 127,  -1,  -1,  -1, 128,  -1,  -1,  -1,
       -1, 129,  -1,  -1,  -1,  -1, 130, 131,  -1,  -1,
      132,  -1,  -1, 133, 134,  -1, 135,  -1,  -1,  -1,
       -1, 136,  -1,  -1,  -1, 137,  -1, 138,  -1,  -1,
       -1, 139, 140,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1, 141,  -1,  -1, 142,  -1,
       -1,  -1, 143, 144, 145,  -1,  -1,  -1, 146,  -1,
      147,  -1,  -1,  -1,  -1, 148,  -1, 149,  -1,  -1,
      150, 151,  -1,  -1,  -1, 152,  -1,  -1,  -1,  -1,
       -1,  -1, 153,  -1,  -1,  -1,  -1, 154, 155, 156,
       -1,  -1,  -1, 157, 158,  -1,  -1, 159, 160,  -1,
       -1,  -1,  -1, 161,  -1, 162,  -1, 163,  -1,  -1,
       -1,  -1,  -1, 164,  -1, 165,  -1,  -1,  -1,  -1,
       -1, 166,  -1,  -1, 167, 168,  -1, 169,  -1,  -1,
       -1, 170, 171, 172,  -1, 173,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 174,
       -1, 175, 176,  -1, 177,  -1,  -1,  -1,  -1,  -1,
      178, 179,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
      180,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
      181,  -1,  -1,  -1,  -1,  -1,  -1, 182,  -1, 183,
      184, 185,  -1,  -1,  -1,  -1,  -1,  -1, 186,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1, 187,  -1,  -1,
       -1, 188,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1, 189,  -1,  -1, 190, 191,  -1, 192,  -1,
      193, 194,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 195,
       -1,  -1,  -1,  -1,  -1, 196, 197,  -1,  -1, 198,
       -1,  -1,  -1,  -1,  -1, 199,  -1,  -1,  -1,  -1,
      200,  -1,  -1,  -1,  -1,  -1,  -1, 201,  -1,  -1,
      202, 203,  -1, 204, 205,  -1, 206, 207,  -1,  -1,
       -1, 208,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1, 209, 210,  -1,  -1,  -1,  -1, 211, 212,  -1,
       -1,  -1,  -1, 213,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1, 214,  -1, 215,  -1, 216, 217, 218,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 219, 220,
      221,  -1,  -1,  -1, 222,  -1,  -1,  -1,  -1,  -1,
      223,  -1,  -1, 224, 225,  -1,  -1,  -1, 226,  -1,
      227, 228,  -1,  -1,  -1, 229,  -1, 230,  -1,  -1,
       -1, 231,  -1,  -1, 232,  -1, 233, 234,  -1,  -1,
       -1, 235,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
      236,  -1,  -1,  -1, 237,  -1, 238,  -1, 239,  -1,
       -1,  -1,  -1, 240,  -1,  -1, 241,  -1, 242, 243,
       -1, 244, 245, 246,  -1,  -1,  -1,  -1, 247,  -1,
       -1,  -1,  -1,  -1, 248, 249, 250, 251,  -1,  -1,
       -1,  -1,  -1, 252,  -1,  -1,  -1,  -1, 253,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1, 254, 255, 256,
       -1, 257,  -1,  -1,  -1,  -1, 258,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1, 259, 260,  -1,  -1,  -1,
       -1, 261,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
      262,  -1, 263, 264,  -1,  -1,  -1, 265,  -1,  -1,
       -1, 266,  -1,  -1, 267, 268,  -1, 269,  -1,  -1,
       -1,  -1,  -1, 270,  -1,  -1,  -1,  -1,  -1,  -1,
      271,  -1,  -1, 272, 273,  -1,  -1,  -1,  -1, 274,
       -1,  -1, 275,  -1,  -1,  -1, 276,  -1,  -1, 277,
       -1,  -1,  -1,  -1,  -1,  -1, 278,  -1,  -1,  -1,
      279,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1, 280,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1, 281, 282,  -1,  -1,  -1, 283,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1, 284,  -1,  -1, 285,
       -1,  -1,  -1,  -1,  -1,  -1,  -1, 286,  -1,  -1,
       -1,  -1,  -1,  -1, 287,  -1,  -1,  -1, 288,  -1,
       -1,  -1,  -1, 289,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1, 290,  -1, 291,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1, 292,  -1, 293,  -1,  -1,
       -1,  -1,  -1, 294,  -1, 295, 296,  -1,  -1,  -1,
       -1,  -1,  -1, 297,  -1, 298,  -1, 299, 300,  -1,
       -1,  -1, 301,  -1, 302,  -1,  -1,  -1,  -1, 303,
       -1,  -1,  -1,  -1,  -1,  -1,  -1, 304,  -1,  -1,
       -1,  -1,  -1,  -1,  -1, 305,  -1,  -1,  -1, 306,
       -1,  -1, 307,  -1,  -1,  -1,  -1,  -1,  -1, 308,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 309,
       -1,  -1, 310,  -1,  -1, 311,  -1,  -1,  -1, 312,
       -1,  -1,  -1,  -1,  -1, 313, 314, 315,  -1,  -1,
      316,  -1,  -1,  -1,  -1, 317,  -1,  -1,  -1,  -1,
       -1,  -1,  -1, 318,  -1,  -1,  -1,  -1,  -1,  -1,
       -1, 319,  -1,  -1,  -1,  -1, 320,  -1,  -1,  -1,
       -1, 321,  -1,  -1,  -1, 322,  -1,  -1, 323, 324,
       -1,  -1, 325,  -1,  -1, 326,  -1,  -1,  -1, 327,
       -1,  -1, 328,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1, 329,  -1, 330,  -1,  -1,  -1,  -1,  -1, 331,
      332,  -1,  -1, 333,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1, 334,  -1,  -1, 335,  -1,  -1,  -1,  -1,
       -1,  -1,  -1, 336,  -1,  -1,  -1, 337, 338,  -1,
       -1,  -1, 339,  -1, 340,  -1,  -1,  -1,  -1, 341,
       -1,  -1, 342,  -1,  -1, 343,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1, 344, 345,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1, 346, 347,  -1,  -1, 348,  -1,
       -1, 349, 350,  -1,  -1,  -1, 351,  -1, 352,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1, 353,  -1,  -1,
      354,  -1,  -1,  -1,  -1, 355, 356,  -1, 357,  -1,
       -1, 358,  -1, 359,  -1, 360,  -1,  -1,  -1,  -1,
      361, 362,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1, 363,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1, 364,  -1,  -1, 365,  -1,  -1,  -1,  -1,
       -1,  -1, 366,  -1,  -1,  -1,  -1, 367,  -1,  -1,
      368,  -1, 369,  -1, 370,  -1,  -1,  -1,  -1, 371,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
      372, 373,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1, 374,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1, 375,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1, 376,  -1,  -1, 377,  -1, 378,  -1,
      379,  -1,  -1,  -1, 380,  -1,  -1,  -1,  -1,  -1,
       -1,  -1, 381, 382,  -1,  -1,  -1,  -1,  -1,  -1,
      383, 384,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
      385,  -1,  -1,  -1,  -1, 386,  -1, 387,  -1,  -1,
       -1,  -1,  -1, 388,  -1, 389,  -1, 390,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1, 391,  -1,  -1,
       -1,  -1, 392,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1, 393,  -1,  -1,  -1,  -1, 394,  -1, 395,
       -1,  -1,  -1,  -1,  -1,  -1, 396, 397, 398,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 399,
      400,  -1,  -1, 401, 402,  -1,  -1, 403,  -1,  -1,
       -1,  -1, 404,  -1, 405, 406, 407, 408,  -1, 409,
       -1,  -1,  -1,  -1,  -1,  -1, 410,  -1,  -1, 411,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1, 412,  -1, 413,  -1,  -1,  -1,  -1,  -1, 414,
       -1, 415,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
      416, 417,  -1,  -1,  -1,  -1,  -1,  -1, 418,  -1,
       -1,  -1, 419,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1, 420,  -1,  -1,  -1, 421,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 422,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 423,
       -1,  -1,  -1, 424,  -1, 425,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 426,  -1,
       -1, 427,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
      428,  -1,  -1,  -1,  -1, 429,  -1,  -1, 430,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
      431,  -1, 432, 433, 434,  -1, 435,  -1,  -1,  -1,
       -1,  -1, 436,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1, 437, 438,  -1, 439,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1, 440, 441,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1, 442,  -1,  -1, 443,  -1, 444,  -1,
       -1,  -1,  -1, 445,  -1,  -1,  -1,  -1,  -1, 446,
       -1,  -1,  -1,  -1,  -1,  -1,  -1, 447,  -1, 448,
      449, 450,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 451,  -1,
       -1,  -1,  -1,  -1,  -1, 452,  -1,  -1, 453,  -1,
       -1,  -1,  -1, 454,  -1, 455,  -1,  -1,  -1,  -1,
      456,  -1,  -1, 457,  -1,  -1,  -1,  -1,  -1,  -1,
      458,  -1,  -1,  -1,  -1, 459,  -1,  -1, 460,  -1,
      461,  -1,  -1, 462,  -1, 463,  -1,  -1,  -1, 464,
       -1, 465, 466,  -1, 467,  -1,  -1, 468,  -1,  -1,
       -1, 469, 470,  -1, 471,  -1,  -1,  -1,  -1, 472,
       -1, 473,  -1, 474, 475,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1, 476, 477,  -1,  -1, 478,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1, 479,  -1,  -1,
      480,  -1,  -1,  -1,  -1,  -1, 481,  -1,  -1,  -1,
       -1,  -1, 482,  -1,  -1,  -1, 483, 484,  -1,  -1,
       -1, 485,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1, 486, 487, 488,  -1,  -1,  -1,  -1, 489,  -1,
      490,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1, 491, 492,  -1,  -1, 493,  -1,
      494, 495,  -1,  -1, 496,  -1,  -1,  -1,  -1,  -1,
      497,  -1, 498,  -1,  -1,  -1,  -1,  -1, 499,  -1,
      500, 501, 502, 503,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1, 504,  -1,  -1,  -1,  -1,  -1,
       -1,  -1, 505,  -1,  -1,  -1,  -1,  -1, 506,  -1,
       -1,  -1,  -1, 507,  -1,  -1, 508,  -1, 509,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1, 510,  -1,  -1,  -1,  -1,  -1, 511,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 512,  -1,
      513,  -1, 514, 515,  -1,  -1, 516,  -1,  -1,  -1,
       -1,  -1, 517, 518, 519,  -1,  -1,  -1,  -1,  -1,
      520, 521,  -1,  -1,  -1,  -1,  -1, 522, 523,  -1,
       -1,  -1,  -1,  -1,  -1, 524,  -1,  -1, 525,  -1,
      526,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 527,
       -1, 528, 529,  -1,  -1,  -1, 530, 531,  -1,  -1,
       -1,  -1, 532,  -1,  -1, 533,  -1, 534, 535,  -1,
       -1, 536, 537,  -1,  -1,  -1, 538,  -1, 539,  -1,
       -1, 540,  -1, 541,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1, 542,  -1,  -1, 543,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1, 544,  -1,  -1,  -1, 545, 546,  -1,
       -1, 547,  -1, 548,  -1,  -1,  -1,  -1,  -1, 549,
       -1,  -1,  -1,  -1,  -1,  -1, 550,  -1,  -1, 551,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
      552,  -1, 553,  -1,  -1,  -1,  -1,  -1, 554,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
      555,  -1,  -1,  -1, 556, 557,  -1,  -1,  -1,  -1,
       -1,  -1,  -1, 558, 559,  -1,  -1,  -1,  -1, 560,
      561,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 562,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1, 563,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1, 564,  -1,  -1,  -1,  -1,  -1,  -1, 565,
       -1,  -1,  -1,  -1,  -1, 566, 567,  -1, 568, 569,
       -1, 570,  -1,  -1,  -1,  -1, 571, 572,  -1,  -1,
      573,  -1, 574,  -1,  -1,  -1, 575,  -1,  -1,  -1,
       -1,  -1, 576,  -1,  -1,  -1,  -1,  -1,  -1, 577,
       -1,  -1,  -1,  -1,  -1, 578, 579,  -1,  -1,  -1,
      580,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 581,  -1,
       -1, 582, 583,  -1,  -1,  -1, 584,  -1,  -1,  -1,
       -1,  -1,  -1,  -1, 585,  -1,  -1, 586,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 587,
       -1,  -1,  -1,  -1,  -1, 588,  -1,  -1,  -1, 589,
       -1,  -1,  -1, 590,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1, 591,  -1, 592,  -1,
       -1, 593,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
      594,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1, 595,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1, 596,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1, 597,  -1,  -1,  -1,  -1,  -1, 598,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1, 599,  -1, 600,  -1,  -1, 601,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 602,
       -1,  -1, 603,  -1,  -1,  -1,  -1,  -1,  -1, 604,
       -1, 605,  -1, 606,  -1, 607,  -1,  -1, 608, 609,
       -1,  -1,  -1,  -1, 610,  -1,  -1, 611,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
      612,  -1,  -1, 613,  -1, 614,  -1,  -1,  -1,  -1,
       -1, 615,  -1,  -1, 616,  -1,  -1,  -1,  -1,  -1,
       -1,  -1, 617,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1, 618,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1, 619,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1, 620,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1, 621, 622,  -1,  -1,  -1,  -1, 623,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1, 624,  -1, 625,  -1,  -1,  -1,  -1,  -1,
       -1, 626,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1, 627,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 628,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 629,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1, 630,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1, 631,  -1,  -1,  -1,
       -1,  -1, 632,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1, 633, 634,  -1,  -1, 635,  -1,  -1,  -1,  -1,
       -1,  -1,  -1, 636, 637,  -1, 638, 639,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1, 640,  -1,  -1,  -1,  -1,
       -1, 641,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1, 642,  -1, 643,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1, 644,  -1,  -1,  -1, 645, 646,
       -1, 647,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 648,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
      649,  -1,  -1,  -1,  -1,  -1, 650, 651, 652,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1, 653,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1, 654,  -1,  -1,  -1,  -1, 655,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 656,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 657,
      658,  -1,  -1,  -1,  -1,  -1, 659,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1, 660,  -1, 661,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 662,
       -1,  -1, 663, 664,  -1, 665,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 666,
      667,  -1,  -1,  -1,  -1,  -1,  -1, 668,  -1,  -1,
      669,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1, 670, 671,  -1,  -1,
      672,  -1,  -1, 673,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1, 674,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1, 675,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1, 676,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1, 677,  -1,  -1, 678,  -1,  -1, 679,  -1, 680,
       -1, 681,  -1,  -1, 682,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1, 683, 684,  -1,  -1,  -1,  -1, 685,  -1, 686,
       -1,  -1,  -1,  -1,  -1, 687,  -1, 688,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1, 689,  -1,  -1,  -1,  -1, 690,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 691,  -1,
       -1,  -1,  -1, 692,  -1,  -1,  -1,  -1,  -1, 693,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 694,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1, 695,  -1,  -1,  -1,  -1,  -1,  -1, 696, 697,
       -1,  -1,  -1,  -1,  -1, 698,  -1,  -1,  -1,  -1,
       -1, 699,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1, 700,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1, 701,  -1,  -1, 702,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1, 703,  -1,  -1, 704,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1, 705, 706,  -1,  -1,  -1,
       -1, 707,  -1,  -1,  -1,  -1,  -1, 708,  -1,  -1,
      709,  -1,  -1,  -1,  -1, 710,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1, 711,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 712,  -1,
       -1,  -1, 713,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
      714,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 715,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1, 716,  -1, 717,  -1,  -1,  -1,
       -1,  -1,  -1,  -1, 718,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1, 719,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 720,
       -1,  -1,  -1,  -1, 721,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1, 722,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1, 723,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1, 724, 725,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1, 726,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1, 727,  -1,  -1, 728,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 729,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1, 730,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 731,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1, 732,  -1,  -1,  -1,  -1, 733,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1, 734, 735,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1, 736,  -1, 737,
       -1,  -1,  -1,  -1,  -1,  -1, 738,  -1,  -1,  -1,
       -1,  -1,  -1,  -1, 739,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 740,
      741,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
      742,  -1,  -1,  -1,  -1, 743,  -1,  -1, 744,  -1,
       -1,  -1, 745,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 746,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1, 747,  -1,  -1,
       -1,  -1,  -1,  -1,  -1, 748,  -1,  -1,  -1, 749,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 750,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1, 751,  -1,  -1,  -1,  -1, 752,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1, 753, 754,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1, 755,  -1,  -1,  -1,  -1,  -1,  -1, 756,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
      757,  -1,  -1,  -1,  -1,  -1, 758,  -1,  -1,  -1,
       -1,  -1, 759, 760,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 761,
       -1,  -1,  -1,  -1, 762,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 763,  -1,
       -1,  -1,  -1, 764, 765,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 766,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1, 767,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1, 768,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1, 769,  -1,  -1,  -1,  -1,
      770,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1, 771,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1, 772,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1, 773,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1, 774,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1, 775,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 776,  -1,
       -1,  -1,  -1,  -1,  -1, 777,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1, 778,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1, 779,  -1,  -1,  -1,  -1,  -1, 780,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1, 781,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1, 782,  -1,  -1,  -1,  -1, 783,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1, 784,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1, 785,  -1,  -1,  -1,
       -1, 786,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 787,
       -1,  -1, 788,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1, 789,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1, 790,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1, 791,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1, 792,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1, 793,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
      794,  -1, 795,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1, 796,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1, 797, 798,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1, 799,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1, 800,  -1,  -1,
       -1,  -1,  -1, 801,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1, 802,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1, 803,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1, 804,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1, 805,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1, 806,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 807, 808,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1, 809, 810,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1, 811,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1, 812,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1, 813,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1, 814,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1, 815,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1, 816,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1, 817
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = value_hash_function (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = value_word_list[index].nameOffset + stringpool;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &value_word_list[index];
            }
        }
    }
  return 0;
}

const Value* findValue(register const char* str, register unsigned int len)
{
    return CSSValueKeywordsHash::findValueImpl(str, len);
}

const char* getValueName(CSSValueID id)
{
    ASSERT(id > 0 && id < numCSSValueKeywords);
    return valueListStringPool + valueListStringOffsets[id - 1];
}

bool isValueAllowedInMode(unsigned short id, CSSParserMode mode)
{
    switch (id) {
        case CSSValueInternalActiveListBoxSelection:
        case CSSValueInternalActiveListBoxSelectionText:
        case CSSValueInternalInactiveListBoxSelection:
        case CSSValueInternalInactiveListBoxSelectionText:
        case CSSValueInternalQuirkInherit:
        case CSSValueInternalCenter:
        case CSSValueInternalMediaCastOffButton:
        case CSSValueInternalMediaOverlayCastOffButton:
        case CSSValueInternalMediaTrackSelectionCheckmark:
        case CSSValueInternalMediaClosedCaptionsIcon:
        case CSSValueInternalMediaSubtitlesIcon:
        case CSSValueInternalExtendToZoom:
        case CSSValueInternalVariableValue:
            return isUASheetBehavior(mode);
        case CSSValueWebkitFocusRingColor:
            return isUASheetBehavior(mode) || isQuirksModeBehavior(mode);
        default:
            return true;
    }
}

} // namespace blink

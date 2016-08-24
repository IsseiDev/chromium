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

#include "CSSPropertyNames.h"
#include "core/css/HashTools.h"
#include <string.h>

#include "wtf/ASCIICType.h"
#include "wtf/text/AtomicString.h"
#include "wtf/text/WTFString.h"

#ifdef _MSC_VER
// Disable the warnings from casting a 64-bit pointer to 32-bit long
// warning C4302: 'type cast': truncation from 'char (*)[28]' to 'long'
// warning C4311: 'type cast': pointer truncation from 'char (*)[18]' to 'long'
#pragma warning(disable : 4302 4311)
#endif

namespace blink {
static const char propertyNameStringsPool[] = {
    "color\0"
    "direction\0"
    "font-family\0"
    "font-kerning\0"
    "font-size\0"
    "font-size-adjust\0"
    "font-stretch\0"
    "font-style\0"
    "font-variant-ligatures\0"
    "font-variant-caps\0"
    "font-variant-numeric\0"
    "font-weight\0"
    "font-feature-settings\0"
    "-webkit-font-smoothing\0"
    "-webkit-locale\0"
    "text-orientation\0"
    "-webkit-text-orientation\0"
    "writing-mode\0"
    "-webkit-writing-mode\0"
    "text-rendering\0"
    "zoom\0"
    "align-content\0"
    "align-items\0"
    "alignment-baseline\0"
    "align-self\0"
    "animation-delay\0"
    "animation-direction\0"
    "animation-duration\0"
    "animation-fill-mode\0"
    "animation-iteration-count\0"
    "animation-name\0"
    "animation-play-state\0"
    "animation-timing-function\0"
    "backdrop-filter\0"
    "backface-visibility\0"
    "background-attachment\0"
    "background-blend-mode\0"
    "background-clip\0"
    "background-color\0"
    "background-image\0"
    "background-origin\0"
    "background-position-x\0"
    "background-position-y\0"
    "background-repeat-x\0"
    "background-repeat-y\0"
    "background-size\0"
    "baseline-shift\0"
    "border-bottom-color\0"
    "border-bottom-left-radius\0"
    "border-bottom-right-radius\0"
    "border-bottom-style\0"
    "border-bottom-width\0"
    "border-collapse\0"
    "border-image-outset\0"
    "border-image-repeat\0"
    "border-image-slice\0"
    "border-image-source\0"
    "border-image-width\0"
    "border-left-color\0"
    "border-left-style\0"
    "border-left-width\0"
    "border-right-color\0"
    "border-right-style\0"
    "border-right-width\0"
    "border-top-color\0"
    "border-top-left-radius\0"
    "border-top-right-radius\0"
    "border-top-style\0"
    "border-top-width\0"
    "bottom\0"
    "box-shadow\0"
    "box-sizing\0"
    "break-after\0"
    "break-before\0"
    "break-inside\0"
    "buffered-rendering\0"
    "caption-side\0"
    "clear\0"
    "clip\0"
    "clip-path\0"
    "clip-rule\0"
    "color-interpolation\0"
    "color-interpolation-filters\0"
    "color-rendering\0"
    "column-fill\0"
    "contain\0"
    "content\0"
    "counter-increment\0"
    "counter-reset\0"
    "cursor\0"
    "cx\0"
    "cy\0"
    "d\0"
    "display\0"
    "dominant-baseline\0"
    "empty-cells\0"
    "fill\0"
    "fill-opacity\0"
    "fill-rule\0"
    "filter\0"
    "flex-basis\0"
    "flex-direction\0"
    "flex-grow\0"
    "flex-shrink\0"
    "flex-wrap\0"
    "float\0"
    "flood-color\0"
    "flood-opacity\0"
    "grid-auto-columns\0"
    "grid-auto-flow\0"
    "grid-auto-rows\0"
    "grid-column-end\0"
    "grid-column-gap\0"
    "grid-column-start\0"
    "grid-row-end\0"
    "grid-row-gap\0"
    "grid-row-start\0"
    "grid-template-areas\0"
    "grid-template-columns\0"
    "grid-template-rows\0"
    "height\0"
    "hyphens\0"
    "image-rendering\0"
    "image-orientation\0"
    "isolation\0"
    "justify-content\0"
    "justify-items\0"
    "justify-self\0"
    "left\0"
    "letter-spacing\0"
    "lighting-color\0"
    "line-height\0"
    "list-style-image\0"
    "list-style-position\0"
    "list-style-type\0"
    "margin-bottom\0"
    "margin-left\0"
    "margin-right\0"
    "margin-top\0"
    "marker-end\0"
    "marker-mid\0"
    "marker-start\0"
    "mask\0"
    "mask-source-type\0"
    "mask-type\0"
    "max-height\0"
    "max-width\0"
    "min-height\0"
    "min-width\0"
    "mix-blend-mode\0"
    "motion-offset\0"
    "motion-path\0"
    "motion-rotation\0"
    "object-fit\0"
    "object-position\0"
    "opacity\0"
    "order\0"
    "orphans\0"
    "outline-color\0"
    "outline-offset\0"
    "outline-style\0"
    "outline-width\0"
    "overflow-anchor\0"
    "overflow-wrap\0"
    "overflow-x\0"
    "overflow-y\0"
    "padding-bottom\0"
    "padding-left\0"
    "padding-right\0"
    "padding-top\0"
    "paint-order\0"
    "perspective\0"
    "perspective-origin\0"
    "pointer-events\0"
    "position\0"
    "quotes\0"
    "resize\0"
    "right\0"
    "r\0"
    "rx\0"
    "ry\0"
    "scroll-behavior\0"
    "scroll-snap-type\0"
    "scroll-snap-points-x\0"
    "scroll-snap-points-y\0"
    "scroll-snap-destination\0"
    "scroll-snap-coordinate\0"
    "shape-image-threshold\0"
    "shape-margin\0"
    "shape-outside\0"
    "shape-rendering\0"
    "size\0"
    "snap-height\0"
    "speak\0"
    "stop-color\0"
    "stop-opacity\0"
    "stroke\0"
    "stroke-dasharray\0"
    "stroke-dashoffset\0"
    "stroke-linecap\0"
    "stroke-linejoin\0"
    "stroke-miterlimit\0"
    "stroke-opacity\0"
    "stroke-width\0"
    "table-layout\0"
    "tab-size\0"
    "text-align\0"
    "text-align-last\0"
    "text-anchor\0"
    "text-combine-upright\0"
    "text-decoration\0"
    "text-decoration-color\0"
    "text-decoration-line\0"
    "text-decoration-style\0"
    "text-indent\0"
    "text-justify\0"
    "text-overflow\0"
    "text-shadow\0"
    "text-size-adjust\0"
    "text-transform\0"
    "text-underline-position\0"
    "top\0"
    "touch-action\0"
    "transform\0"
    "transform-origin\0"
    "transform-style\0"
    "translate\0"
    "rotate\0"
    "scale\0"
    "transition-delay\0"
    "transition-duration\0"
    "transition-property\0"
    "transition-timing-function\0"
    "unicode-bidi\0"
    "vector-effect\0"
    "vertical-align\0"
    "visibility\0"
    "x\0"
    "y\0"
    "-webkit-appearance\0"
    "-webkit-app-region\0"
    "-webkit-background-clip\0"
    "-webkit-background-origin\0"
    "-webkit-border-horizontal-spacing\0"
    "-webkit-border-image\0"
    "-webkit-border-vertical-spacing\0"
    "-webkit-box-align\0"
    "-webkit-box-decoration-break\0"
    "-webkit-box-direction\0"
    "-webkit-box-flex\0"
    "-webkit-box-flex-group\0"
    "-webkit-box-lines\0"
    "-webkit-box-ordinal-group\0"
    "-webkit-box-orient\0"
    "-webkit-box-pack\0"
    "-webkit-box-reflect\0"
    "-webkit-clip-path\0"
    "column-count\0"
    "column-gap\0"
    "column-rule-color\0"
    "column-rule-style\0"
    "column-rule-width\0"
    "column-span\0"
    "column-width\0"
    "-webkit-highlight\0"
    "-webkit-hyphenate-character\0"
    "-webkit-line-break\0"
    "-webkit-line-clamp\0"
    "-webkit-margin-after-collapse\0"
    "-webkit-margin-before-collapse\0"
    "-webkit-margin-bottom-collapse\0"
    "-webkit-margin-top-collapse\0"
    "-webkit-mask-box-image-outset\0"
    "-webkit-mask-box-image-repeat\0"
    "-webkit-mask-box-image-slice\0"
    "-webkit-mask-box-image-source\0"
    "-webkit-mask-box-image-width\0"
    "-webkit-mask-clip\0"
    "-webkit-mask-composite\0"
    "-webkit-mask-image\0"
    "-webkit-mask-origin\0"
    "-webkit-mask-position-x\0"
    "-webkit-mask-position-y\0"
    "-webkit-mask-repeat-x\0"
    "-webkit-mask-repeat-y\0"
    "-webkit-mask-size\0"
    "-webkit-perspective-origin-x\0"
    "-webkit-perspective-origin-y\0"
    "-webkit-print-color-adjust\0"
    "-webkit-rtl-ordering\0"
    "-webkit-ruby-position\0"
    "-webkit-tap-highlight-color\0"
    "-webkit-text-combine\0"
    "-webkit-text-emphasis-color\0"
    "-webkit-text-emphasis-position\0"
    "-webkit-text-emphasis-style\0"
    "-webkit-text-fill-color\0"
    "-webkit-text-security\0"
    "-webkit-text-stroke-color\0"
    "-webkit-text-stroke-width\0"
    "-webkit-transform-origin-x\0"
    "-webkit-transform-origin-y\0"
    "-webkit-transform-origin-z\0"
    "-webkit-user-drag\0"
    "-webkit-user-modify\0"
    "user-select\0"
    "white-space\0"
    "widows\0"
    "width\0"
    "will-change\0"
    "word-break\0"
    "word-spacing\0"
    "word-wrap\0"
    "z-index\0"
    "-webkit-border-end-color\0"
    "-webkit-border-end-style\0"
    "-webkit-border-end-width\0"
    "-webkit-border-start-color\0"
    "-webkit-border-start-style\0"
    "-webkit-border-start-width\0"
    "-webkit-border-before-color\0"
    "-webkit-border-before-style\0"
    "-webkit-border-before-width\0"
    "-webkit-border-after-color\0"
    "-webkit-border-after-style\0"
    "-webkit-border-after-width\0"
    "-webkit-margin-end\0"
    "-webkit-margin-start\0"
    "-webkit-margin-before\0"
    "-webkit-margin-after\0"
    "-webkit-padding-end\0"
    "-webkit-padding-start\0"
    "-webkit-padding-before\0"
    "-webkit-padding-after\0"
    "-webkit-logical-width\0"
    "-webkit-logical-height\0"
    "-webkit-min-logical-width\0"
    "-webkit-min-logical-height\0"
    "-webkit-max-logical-width\0"
    "-webkit-max-logical-height\0"
    "all\0"
    "page\0"
    "-webkit-font-size-delta\0"
    "-webkit-text-decorations-in-effect\0"
    "font-display\0"
    "max-zoom\0"
    "min-zoom\0"
    "orientation\0"
    "src\0"
    "unicode-range\0"
    "user-zoom\0"
    "animation\0"
    "background\0"
    "background-position\0"
    "background-repeat\0"
    "border\0"
    "border-bottom\0"
    "border-color\0"
    "border-image\0"
    "border-left\0"
    "border-radius\0"
    "border-right\0"
    "border-spacing\0"
    "border-style\0"
    "border-top\0"
    "border-width\0"
    "flex\0"
    "flex-flow\0"
    "font\0"
    "font-variant\0"
    "grid\0"
    "grid-area\0"
    "grid-column\0"
    "grid-gap\0"
    "grid-row\0"
    "grid-template\0"
    "list-style\0"
    "margin\0"
    "marker\0"
    "motion\0"
    "outline\0"
    "overflow\0"
    "padding\0"
    "page-break-after\0"
    "page-break-before\0"
    "page-break-inside\0"
    "transition\0"
    "-webkit-border-after\0"
    "-webkit-border-before\0"
    "-webkit-border-end\0"
    "-webkit-border-start\0"
    "-webkit-column-break-after\0"
    "-webkit-column-break-before\0"
    "-webkit-column-break-inside\0"
    "column-rule\0"
    "columns\0"
    "-webkit-margin-collapse\0"
    "-webkit-mask\0"
    "-webkit-mask-box-image\0"
    "-webkit-mask-position\0"
    "-webkit-mask-repeat\0"
    "-webkit-text-emphasis\0"
    "-webkit-text-stroke\0"
    "-webkit-font-feature-settings\0"
    "-epub-text-orientation\0"
    "-epub-writing-mode\0"
    "-webkit-align-content\0"
    "-webkit-align-items\0"
    "-webkit-align-self\0"
    "-webkit-animation-delay\0"
    "-webkit-animation-direction\0"
    "-webkit-animation-duration\0"
    "-webkit-animation-fill-mode\0"
    "-webkit-animation-iteration-count\0"
    "-webkit-animation-name\0"
    "-webkit-animation-play-state\0"
    "-webkit-animation-timing-function\0"
    "-webkit-backface-visibility\0"
    "-webkit-background-size\0"
    "-webkit-border-bottom-left-radius\0"
    "-webkit-border-bottom-right-radius\0"
    "-webkit-border-top-left-radius\0"
    "-webkit-border-top-right-radius\0"
    "-webkit-box-shadow\0"
    "-webkit-box-sizing\0"
    "-epub-caption-side\0"
    "-webkit-filter\0"
    "-webkit-flex-basis\0"
    "-webkit-flex-direction\0"
    "-webkit-flex-grow\0"
    "-webkit-flex-shrink\0"
    "-webkit-flex-wrap\0"
    "-webkit-justify-content\0"
    "-webkit-opacity\0"
    "-webkit-order\0"
    "-webkit-perspective\0"
    "-webkit-perspective-origin\0"
    "-webkit-shape-image-threshold\0"
    "-webkit-shape-margin\0"
    "-webkit-shape-outside\0"
    "-webkit-text-size-adjust\0"
    "-epub-text-transform\0"
    "-webkit-transform\0"
    "-webkit-transform-origin\0"
    "-webkit-transform-style\0"
    "-webkit-transition-delay\0"
    "-webkit-transition-duration\0"
    "-webkit-transition-property\0"
    "-webkit-transition-timing-function\0"
    "-webkit-column-count\0"
    "-webkit-column-gap\0"
    "-webkit-column-rule-color\0"
    "-webkit-column-rule-style\0"
    "-webkit-column-rule-width\0"
    "-webkit-column-span\0"
    "-webkit-column-width\0"
    "-epub-text-combine\0"
    "-epub-text-emphasis-color\0"
    "-epub-text-emphasis-style\0"
    "-webkit-user-select\0"
    "-epub-word-break\0"
    "-webkit-animation\0"
    "-webkit-border-radius\0"
    "-webkit-flex\0"
    "-webkit-flex-flow\0"
    "-webkit-transition\0"
    "-webkit-column-rule\0"
    "-webkit-columns\0"
    "-epub-text-emphasis\0"
};

static const unsigned short propertyNameStringsOffsets[] = {
    0,
    6,
    16,
    28,
    41,
    51,
    68,
    81,
    92,
    115,
    133,
    154,
    166,
    188,
    211,
    226,
    243,
    268,
    281,
    302,
    317,
    322,
    336,
    348,
    367,
    378,
    394,
    414,
    433,
    453,
    479,
    494,
    515,
    541,
    557,
    577,
    599,
    621,
    637,
    654,
    671,
    689,
    711,
    733,
    753,
    773,
    789,
    804,
    824,
    850,
    877,
    897,
    917,
    933,
    953,
    973,
    992,
    1012,
    1031,
    1049,
    1067,
    1085,
    1104,
    1123,
    1142,
    1159,
    1182,
    1206,
    1223,
    1240,
    1247,
    1258,
    1269,
    1281,
    1294,
    1307,
    1326,
    1339,
    1345,
    1350,
    1360,
    1370,
    1390,
    1418,
    1434,
    1446,
    1454,
    1462,
    1480,
    1494,
    1501,
    1504,
    1507,
    1509,
    1517,
    1535,
    1547,
    1552,
    1565,
    1575,
    1582,
    1593,
    1608,
    1618,
    1630,
    1640,
    1646,
    1658,
    1672,
    1690,
    1705,
    1720,
    1736,
    1752,
    1770,
    1783,
    1796,
    1811,
    1831,
    1853,
    1872,
    1879,
    1887,
    1903,
    1921,
    1931,
    1947,
    1961,
    1974,
    1979,
    1994,
    2009,
    2021,
    2038,
    2058,
    2074,
    2088,
    2100,
    2113,
    2124,
    2135,
    2146,
    2159,
    2164,
    2181,
    2191,
    2202,
    2212,
    2223,
    2233,
    2248,
    2262,
    2274,
    2290,
    2301,
    2317,
    2325,
    2331,
    2339,
    2353,
    2368,
    2382,
    2396,
    2412,
    2426,
    2437,
    2448,
    2463,
    2476,
    2490,
    2502,
    2514,
    2526,
    2545,
    2560,
    2569,
    2576,
    2583,
    2589,
    2591,
    2594,
    2597,
    2613,
    2630,
    2651,
    2672,
    2696,
    2719,
    2741,
    2754,
    2768,
    2784,
    2789,
    2801,
    2807,
    2818,
    2831,
    2838,
    2855,
    2873,
    2888,
    2904,
    2922,
    2937,
    2950,
    2963,
    2972,
    2983,
    2999,
    3011,
    3032,
    3048,
    3070,
    3091,
    3113,
    3125,
    3138,
    3152,
    3164,
    3181,
    3196,
    3220,
    3224,
    3237,
    3247,
    3264,
    3280,
    3290,
    3297,
    3303,
    3320,
    3340,
    3360,
    3387,
    3400,
    3414,
    3429,
    3440,
    3442,
    3444,
    3463,
    3482,
    3506,
    3532,
    3566,
    3587,
    3619,
    3637,
    3666,
    3688,
    3705,
    3728,
    3746,
    3772,
    3791,
    3808,
    3828,
    3846,
    3859,
    3870,
    3888,
    3906,
    3924,
    3936,
    3949,
    3967,
    3995,
    4014,
    4033,
    4063,
    4094,
    4125,
    4153,
    4183,
    4213,
    4242,
    4272,
    4301,
    4319,
    4342,
    4361,
    4381,
    4405,
    4429,
    4451,
    4473,
    4491,
    4520,
    4549,
    4576,
    4597,
    4619,
    4647,
    4668,
    4696,
    4727,
    4755,
    4779,
    4801,
    4827,
    4853,
    4880,
    4907,
    4934,
    4952,
    4972,
    4984,
    4996,
    5003,
    5009,
    5021,
    5032,
    5045,
    5055,
    5063,
    5088,
    5113,
    5138,
    5165,
    5192,
    5219,
    5247,
    5275,
    5303,
    5330,
    5357,
    5384,
    5403,
    5424,
    5446,
    5467,
    5487,
    5509,
    5532,
    5554,
    5576,
    5599,
    5625,
    5652,
    5678,
    5705,
    5709,
    5714,
    5738,
    5773,
    5786,
    5795,
    5804,
    5816,
    5820,
    5834,
    5844,
    5854,
    5865,
    5885,
    5903,
    5910,
    5924,
    5937,
    5950,
    5962,
    5976,
    5989,
    6004,
    6017,
    6028,
    6041,
    6046,
    6056,
    6061,
    6074,
    6079,
    6089,
    6101,
    6110,
    6119,
    6133,
    6144,
    6151,
    6158,
    6165,
    6173,
    6182,
    6190,
    6207,
    6225,
    6243,
    6254,
    6275,
    6297,
    6316,
    6337,
    6364,
    6392,
    6420,
    6432,
    6440,
    6464,
    6477,
    6500,
    6522,
    6542,
    6564,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6584,
    6614,
    6614,
    6614,
    6614,
    6637,
    6637,
    6656,
    6656,
    6656,
    6678,
    6698,
    6698,
    6717,
    6741,
    6769,
    6796,
    6824,
    6858,
    6881,
    6910,
    6944,
    6944,
    6972,
    6972,
    6972,
    6972,
    6972,
    6972,
    6972,
    6972,
    6972,
    6972,
    6972,
    6996,
    6996,
    6996,
    7030,
    7065,
    7065,
    7065,
    7065,
    7065,
    7065,
    7065,
    7065,
    7065,
    7065,
    7065,
    7065,
    7065,
    7065,
    7065,
    7065,
    7096,
    7128,
    7128,
    7128,
    7128,
    7147,
    7166,
    7166,
    7166,
    7166,
    7166,
    7185,
    7185,
    7185,
    7185,
    7185,
    7185,
    7185,
    7185,
    7185,
    7185,
    7185,
    7185,
    7185,
    7185,
    7185,
    7185,
    7185,
    7185,
    7185,
    7185,
    7185,
    7185,
    7185,
    7200,
    7219,
    7242,
    7260,
    7280,
    7298,
    7298,
    7298,
    7298,
    7298,
    7298,
    7298,
    7298,
    7298,
    7298,
    7298,
    7298,
    7298,
    7298,
    7298,
    7298,
    7298,
    7298,
    7298,
    7298,
    7298,
    7322,
    7322,
    7322,
    7322,
    7322,
    7322,
    7322,
    7322,
    7322,
    7322,
    7322,
    7322,
    7322,
    7322,
    7322,
    7322,
    7322,
    7322,
    7322,
    7322,
    7322,
    7322,
    7322,
    7322,
    7322,
    7322,
    7322,
    7322,
    7322,
    7322,
    7338,
    7352,
    7352,
    7352,
    7352,
    7352,
    7352,
    7352,
    7352,
    7352,
    7352,
    7352,
    7352,
    7352,
    7352,
    7352,
    7372,
    7399,
    7399,
    7399,
    7399,
    7399,
    7399,
    7399,
    7399,
    7399,
    7399,
    7399,
    7399,
    7399,
    7399,
    7399,
    7429,
    7450,
    7472,
    7472,
    7472,
    7472,
    7472,
    7472,
    7472,
    7472,
    7472,
    7472,
    7472,
    7472,
    7472,
    7472,
    7472,
    7472,
    7472,
    7472,
    7472,
    7472,
    7472,
    7472,
    7472,
    7472,
    7472,
    7472,
    7472,
    7472,
    7472,
    7497,
    7518,
    7518,
    7518,
    7518,
    7536,
    7561,
    7585,
    7585,
    7585,
    7585,
    7610,
    7638,
    7666,
    7701,
    7701,
    7701,
    7701,
    7701,
    7701,
    7701,
    7701,
    7701,
    7701,
    7701,
    7701,
    7701,
    7701,
    7701,
    7701,
    7701,
    7701,
    7701,
    7701,
    7701,
    7701,
    7701,
    7701,
    7701,
    7722,
    7741,
    7767,
    7793,
    7819,
    7839,
    7860,
    7860,
    7860,
    7860,
    7860,
    7860,
    7860,
    7860,
    7860,
    7860,
    7860,
    7860,
    7860,
    7860,
    7860,
    7860,
    7860,
    7860,
    7860,
    7860,
    7860,
    7860,
    7860,
    7860,
    7860,
    7860,
    7860,
    7860,
    7860,
    7879,
    7905,
    7905,
    7931,
    7931,
    7931,
    7931,
    7931,
    7931,
    7931,
    7931,
    7931,
    7931,
    7951,
    7951,
    7951,
    7951,
    7951,
    7968,
    7968,
    7968,
    7968,
    7968,
    7968,
    7968,
    7968,
    7968,
    7968,
    7968,
    7968,
    7968,
    7968,
    7968,
    7968,
    7968,
    7968,
    7968,
    7968,
    7968,
    7968,
    7968,
    7968,
    7968,
    7968,
    7968,
    7968,
    7968,
    7968,
    7968,
    7968,
    7968,
    7968,
    7968,
    7968,
    7968,
    7968,
    7968,
    7968,
    7968,
    7986,
    7986,
    7986,
    7986,
    7986,
    7986,
    7986,
    7986,
    7986,
    8008,
    8008,
    8008,
    8008,
    8008,
    8008,
    8021,
    8039,
    8039,
    8039,
    8039,
    8039,
    8039,
    8039,
    8039,
    8039,
    8039,
    8039,
    8039,
    8039,
    8039,
    8039,
    8039,
    8039,
    8039,
    8039,
    8058,
    8058,
    8058,
    8058,
    8058,
    8058,
    8058,
    8058,
    8078,
    8094,
    8094,
    8094,
    8094,
    8094,
    8094,
};

enum
  {
    TOTAL_KEYWORDS = 469,
    MIN_WORD_LENGTH = 1,
    MAX_WORD_LENGTH = 34,
    MIN_HASH_VALUE = 5,
    MAX_HASH_VALUE = 2964
  };

/* maximum key range = 2960, duplicates = 0 */

class CSSPropertyNamesHash
{
private:
  static inline unsigned int property_hash_function (const char *str, unsigned int len);
public:
  static const struct Property *findPropertyImpl (const char *str, unsigned int len);
};

inline unsigned int
CSSPropertyNamesHash::property_hash_function (register const char *str, register unsigned int len)
{
  static const unsigned short asso_values[] =
    {
      2965, 2965, 2965, 2965, 2965, 2965, 2965, 2965, 2965, 2965,
      2965, 2965, 2965, 2965, 2965, 2965, 2965, 2965, 2965, 2965,
      2965, 2965, 2965, 2965, 2965, 2965, 2965, 2965, 2965, 2965,
      2965, 2965, 2965, 2965, 2965, 2965, 2965, 2965, 2965, 2965,
      2965, 2965, 2965, 2965, 2965,    5, 2965, 2965, 2965, 2965,
      2965, 2965, 2965, 2965, 2965, 2965, 2965, 2965, 2965, 2965,
      2965, 2965, 2965, 2965, 2965, 2965, 2965, 2965, 2965, 2965,
      2965, 2965, 2965, 2965, 2965, 2965, 2965, 2965, 2965, 2965,
      2965, 2965, 2965, 2965, 2965, 2965, 2965, 2965, 2965, 2965,
      2965, 2965, 2965, 2965, 2965, 2965, 2965,    5,    7,  138,
         7,    6,  452,    5,  504,    5,   14,   27,  122,    5,
         5,    5,  102,    5,    5,   34,    6,  254,  365,    5,
       831,  863,  150, 2965, 2965, 2965, 2965, 2965, 2965, 2965,
      2965, 2965, 2965, 2965, 2965, 2965, 2965, 2965, 2965, 2965,
      2965, 2965, 2965, 2965, 2965, 2965, 2965, 2965, 2965, 2965,
      2965, 2965, 2965, 2965, 2965, 2965, 2965, 2965, 2965, 2965,
      2965, 2965, 2965, 2965, 2965, 2965, 2965, 2965, 2965, 2965,
      2965, 2965, 2965, 2965, 2965, 2965, 2965, 2965, 2965, 2965,
      2965, 2965, 2965, 2965, 2965, 2965, 2965, 2965, 2965, 2965,
      2965, 2965, 2965, 2965, 2965, 2965, 2965, 2965, 2965, 2965,
      2965, 2965, 2965, 2965, 2965, 2965, 2965, 2965, 2965, 2965,
      2965, 2965, 2965, 2965, 2965, 2965, 2965, 2965, 2965, 2965,
      2965, 2965, 2965, 2965, 2965, 2965, 2965, 2965, 2965, 2965,
      2965, 2965, 2965, 2965, 2965, 2965, 2965, 2965, 2965, 2965,
      2965, 2965, 2965, 2965, 2965, 2965, 2965, 2965, 2965, 2965,
      2965, 2965, 2965, 2965, 2965, 2965
    };
  register int hval = 0;

  switch (len)
    {
      default:
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
        hval += asso_values[(unsigned char)str[10]];
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
        hval += asso_values[(unsigned char)str[3]];
      /*FALLTHROUGH*/
      case 3:
        hval += asso_values[(unsigned char)str[2]];
      /*FALLTHROUGH*/
      case 2:
        hval += asso_values[(unsigned char)str[1]];
      /*FALLTHROUGH*/
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval;
}

struct stringpool_t
  {
    char stringpool_str0[sizeof("r")];
    char stringpool_str1[sizeof("d")];
    char stringpool_str2[sizeof("grid")];
    char stringpool_str3[sizeof("order")];
    char stringpool_str4[sizeof("margin")];
    char stringpool_str5[sizeof("motion")];
    char stringpool_str6[sizeof("rotate")];
    char stringpool_str7[sizeof("bottom")];
    char stringpool_str8[sizeof("border")];
    char stringpool_str9[sizeof("grid-row")];
    char stringpool_str10[sizeof("animation")];
    char stringpool_str11[sizeof("grid-area")];
    char stringpool_str12[sizeof("marker")];
    char stringpool_str13[sizeof("orientation")];
    char stringpool_str14[sizeof("widows")];
    char stringpool_str15[sizeof("writing-mode")];
    char stringpool_str16[sizeof("grid-row-end")];
    char stringpool_str17[sizeof("border-image")];
    char stringpool_str18[sizeof("margin-bottom")];
    char stringpool_str19[sizeof("mask")];
    char stringpool_str20[sizeof("animation-name")];
    char stringpool_str21[sizeof("border-bottom")];
    char stringpool_str22[sizeof("marker-mid")];
    char stringpool_str23[sizeof("marker-end")];
    char stringpool_str24[sizeof("word-break")];
    char stringpool_str25[sizeof("motion-rotation")];
    char stringpool_str26[sizeof("image-rendering")];
    char stringpool_str27[sizeof("transition")];
    char stringpool_str28[sizeof("stroke")];
    char stringpool_str29[sizeof("image-orientation")];
    char stringpool_str30[sizeof("-webkit-order")];
    char stringpool_str31[sizeof("grid-row-start")];
    char stringpool_str32[sizeof("-webkit-animation")];
    char stringpool_str33[sizeof("top")];
    char stringpool_str34[sizeof("marker-start")];
    char stringpool_str35[sizeof("break-inside")];
    char stringpool_str36[sizeof("page")];
    char stringpool_str37[sizeof("-webkit-margin-end")];
    char stringpool_str38[sizeof("-webkit-border-end")];
    char stringpool_str39[sizeof("-webkit-writing-mode")];
    char stringpool_str40[sizeof("-webkit-border-image")];
    char stringpool_str41[sizeof("padding")];
    char stringpool_str42[sizeof("-webkit-mask")];
    char stringpool_str43[sizeof("-webkit-animation-name")];
    char stringpool_str44[sizeof("grid-gap")];
    char stringpool_str45[sizeof("word-wrap")];
    char stringpool_str46[sizeof("-webkit-transition")];
    char stringpool_str47[sizeof("margin-top")];
    char stringpool_str48[sizeof("border-top")];
    char stringpool_str49[sizeof("paint-order")];
    char stringpool_str50[sizeof("-webkit-margin-start")];
    char stringpool_str51[sizeof("grid-row-gap")];
    char stringpool_str52[sizeof("-webkit-border-start")];
    char stringpool_str53[sizeof("zoom")];
    char stringpool_str54[sizeof("position")];
    char stringpool_str55[sizeof("-webkit-mask-image")];
    char stringpool_str56[sizeof("contain")];
    char stringpool_str57[sizeof("content")];
    char stringpool_str58[sizeof("-webkit-mask-origin")];
    char stringpool_str59[sizeof("speak")];
    char stringpool_str60[sizeof("padding-bottom")];
    char stringpool_str61[sizeof("src")];
    char stringpool_str62[sizeof("direction")];
    char stringpool_str63[sizeof("min-zoom")];
    char stringpool_str64[sizeof("isolation")];
    char stringpool_str65[sizeof("translate")];
    char stringpool_str66[sizeof("size")];
    char stringpool_str67[sizeof("border-image-repeat")];
    char stringpool_str68[sizeof("align-items")];
    char stringpool_str69[sizeof("resize")];
    char stringpool_str70[sizeof("tab-size")];
    char stringpool_str71[sizeof("-webkit-padding-end")];
    char stringpool_str72[sizeof("animation-direction")];
    char stringpool_str73[sizeof("dominant-baseline")];
    char stringpool_str74[sizeof("page-break-inside")];
    char stringpool_str75[sizeof("-webkit-rtl-ordering")];
    char stringpool_str76[sizeof("all")];
    char stringpool_str77[sizeof("padding-top")];
    char stringpool_str78[sizeof("stroke-linejoin")];
    char stringpool_str79[sizeof("stroke-miterlimit")];
    char stringpool_str80[sizeof("-webkit-line-break")];
    char stringpool_str81[sizeof("-webkit-padding-start")];
    char stringpool_str82[sizeof("-webkit-align-items")];
    char stringpool_str83[sizeof("-webkit-mask-repeat")];
    char stringpool_str84[sizeof("color")];
    char stringpool_str85[sizeof("clear")];
    char stringpool_str86[sizeof("grid-template")];
    char stringpool_str87[sizeof("-webkit-animation-direction")];
    char stringpool_str88[sizeof("scale")];
    char stringpool_str89[sizeof("-webkit-mask-position")];
    char stringpool_str90[sizeof("quotes")];
    char stringpool_str91[sizeof("-webkit-app-region")];
    char stringpool_str92[sizeof("border-color")];
    char stringpool_str93[sizeof("align-content")];
    char stringpool_str94[sizeof("word-spacing")];
    char stringpool_str95[sizeof("caption-side")];
    char stringpool_str96[sizeof("color-rendering")];
    char stringpool_str97[sizeof("border-spacing")];
    char stringpool_str98[sizeof("-webkit-mask-size")];
    char stringpool_str99[sizeof("grid-template-rows")];
    char stringpool_str100[sizeof("animation-duration")];
    char stringpool_str101[sizeof("grid-template-areas")];
    char stringpool_str102[sizeof("object-position")];
    char stringpool_str103[sizeof("border-radius")];
    char stringpool_str104[sizeof("grid-auto-rows")];
    char stringpool_str105[sizeof("border-bottom-color")];
    char stringpool_str106[sizeof("alignment-baseline")];
    char stringpool_str107[sizeof("clip")];
    char stringpool_str108[sizeof("border-image-slice")];
    char stringpool_str109[sizeof("transition-duration")];
    char stringpool_str110[sizeof("border-image-outset")];
    char stringpool_str111[sizeof("-webkit-align-content")];
    char stringpool_str112[sizeof("-webkit-user-drag")];
    char stringpool_str113[sizeof("outline")];
    char stringpool_str114[sizeof("-webkit-border-end-color")];
    char stringpool_str115[sizeof("-webkit-animation-duration")];
    char stringpool_str116[sizeof("-webkit-border-radius")];
    char stringpool_str117[sizeof("stop-color")];
    char stringpool_str118[sizeof("border-top-color")];
    char stringpool_str119[sizeof("cursor")];
    char stringpool_str120[sizeof("-webkit-border-start-color")];
    char stringpool_str121[sizeof("-epub-writing-mode")];
    char stringpool_str122[sizeof("-webkit-transition-duration")];
    char stringpool_str123[sizeof("-webkit-appearance")];
    char stringpool_str124[sizeof("-webkit-mask-composite")];
    char stringpool_str125[sizeof("unicode-bidi")];
    char stringpool_str126[sizeof("letter-spacing")];
    char stringpool_str127[sizeof("unicode-range")];
    char stringpool_str128[sizeof("-epub-word-break")];
    char stringpool_str129[sizeof("background")];
    char stringpool_str130[sizeof("-webkit-locale")];
    char stringpool_str131[sizeof("font")];
    char stringpool_str132[sizeof("user-zoom")];
    char stringpool_str133[sizeof("stroke-linecap")];
    char stringpool_str134[sizeof("counter-reset")];
    char stringpool_str135[sizeof("background-image")];
    char stringpool_str136[sizeof("background-origin")];
    char stringpool_str137[sizeof("-webkit-mask-clip")];
    char stringpool_str138[sizeof("animation-iteration-count")];
    char stringpool_str139[sizeof("border-image-source")];
    char stringpool_str140[sizeof("transform")];
    char stringpool_str141[sizeof("right")];
    char stringpool_str142[sizeof("width")];
    char stringpool_str143[sizeof("break-after")];
    char stringpool_str144[sizeof("font-kerning")];
    char stringpool_str145[sizeof("break-before")];
    char stringpool_str146[sizeof("min-width")];
    char stringpool_str147[sizeof("grid-column")];
    char stringpool_str148[sizeof("transform-origin")];
    char stringpool_str149[sizeof("-webkit-background-origin")];
    char stringpool_str150[sizeof("margin-right")];
    char stringpool_str151[sizeof("pointer-events")];
    char stringpool_str152[sizeof("color-interpolation")];
    char stringpool_str153[sizeof("columns")];
    char stringpool_str154[sizeof("border-right")];
    char stringpool_str155[sizeof("border-width")];
    char stringpool_str156[sizeof("border-collapse")];
    char stringpool_str157[sizeof("-webkit-margin-after")];
    char stringpool_str158[sizeof("-webkit-animation-iteration-count")];
    char stringpool_str159[sizeof("grid-column-end")];
    char stringpool_str160[sizeof("-webkit-border-after")];
    char stringpool_str161[sizeof("-webkit-line-clamp")];
    char stringpool_str162[sizeof("-webkit-margin-before")];
    char stringpool_str163[sizeof("left")];
    char stringpool_str164[sizeof("-webkit-border-before")];
    char stringpool_str165[sizeof("-webkit-transform")];
    char stringpool_str166[sizeof("float")];
    char stringpool_str167[sizeof("background-repeat")];
    char stringpool_str168[sizeof("filter")];
    char stringpool_str169[sizeof("border-image-width")];
    char stringpool_str170[sizeof("counter-increment")];
    char stringpool_str171[sizeof("border-bottom-width")];
    char stringpool_str172[sizeof("stroke-width")];
    char stringpool_str173[sizeof("user-select")];
    char stringpool_str174[sizeof("grid-column-start")];
    char stringpool_str175[sizeof("margin-left")];
    char stringpool_str176[sizeof("-webkit-transform-origin")];
    char stringpool_str177[sizeof("border-left")];
    char stringpool_str178[sizeof("-webkit-columns")];
    char stringpool_str179[sizeof("background-position")];
    char stringpool_str180[sizeof("-webkit-margin-collapse")];
    char stringpool_str181[sizeof("background-blend-mode")];
    char stringpool_str182[sizeof("object-fit")];
    char stringpool_str183[sizeof("column-gap")];
    char stringpool_str184[sizeof("page-break-after")];
    char stringpool_str185[sizeof("motion-path")];
    char stringpool_str186[sizeof("-webkit-border-end-width")];
    char stringpool_str187[sizeof("background-size")];
    char stringpool_str188[sizeof("page-break-before")];
    char stringpool_str189[sizeof("orphans")];
    char stringpool_str190[sizeof("-webkit-filter")];
    char stringpool_str191[sizeof("padding-right")];
    char stringpool_str192[sizeof("font-size")];
    char stringpool_str193[sizeof("scroll-snap-destination")];
    char stringpool_str194[sizeof("grid-column-gap")];
    char stringpool_str195[sizeof("-webkit-margin-bottom-collapse")];
    char stringpool_str196[sizeof("column-span")];
    char stringpool_str197[sizeof("-webkit-padding-after")];
    char stringpool_str198[sizeof("-webkit-user-select")];
    char stringpool_str199[sizeof("outline-color")];
    char stringpool_str200[sizeof("border-top-width")];
    char stringpool_str201[sizeof("shape-margin")];
    char stringpool_str202[sizeof("-webkit-padding-before")];
    char stringpool_str203[sizeof("-webkit-border-start-width")];
    char stringpool_str204[sizeof("fill")];
    char stringpool_str205[sizeof("-epub-caption-side")];
    char stringpool_str206[sizeof("shape-rendering")];
    char stringpool_str207[sizeof("-webkit-column-gap")];
    char stringpool_str208[sizeof("-webkit-column-break-inside")];
    char stringpool_str209[sizeof("-webkit-background-size")];
    char stringpool_str210[sizeof("padding-left")];
    char stringpool_str211[sizeof("background-color")];
    char stringpool_str212[sizeof("-webkit-column-span")];
    char stringpool_str213[sizeof("-webkit-shape-margin")];
    char stringpool_str214[sizeof("-webkit-margin-top-collapse")];
    char stringpool_str215[sizeof("clip-rule")];
    char stringpool_str216[sizeof("align-self")];
    char stringpool_str217[sizeof("scroll-snap-coordinate")];
    char stringpool_str218[sizeof("perspective")];
    char stringpool_str219[sizeof("-webkit-transform-origin-z")];
    char stringpool_str220[sizeof("animation-fill-mode")];
    char stringpool_str221[sizeof("-webkit-print-color-adjust")];
    char stringpool_str222[sizeof("vertical-align")];
    char stringpool_str223[sizeof("perspective-origin")];
    char stringpool_str224[sizeof("white-space")];
    char stringpool_str225[sizeof("-webkit-align-self")];
    char stringpool_str226[sizeof("background-clip")];
    char stringpool_str227[sizeof("x")];
    char stringpool_str228[sizeof("rx")];
    char stringpool_str229[sizeof("-webkit-perspective")];
    char stringpool_str230[sizeof("border-right-color")];
    char stringpool_str231[sizeof("-webkit-animation-fill-mode")];
    char stringpool_str232[sizeof("grid-template-columns")];
    char stringpool_str233[sizeof("-webkit-border-after-color")];
    char stringpool_str234[sizeof("y")];
    char stringpool_str235[sizeof("grid-auto-columns")];
    char stringpool_str236[sizeof("-webkit-border-before-color")];
    char stringpool_str237[sizeof("ry")];
    char stringpool_str238[sizeof("font-variant")];
    char stringpool_str239[sizeof("flood-color")];
    char stringpool_str240[sizeof("-webkit-perspective-origin")];
    char stringpool_str241[sizeof("-webkit-font-size-delta")];
    char stringpool_str242[sizeof("grid-auto-flow")];
    char stringpool_str243[sizeof("text-indent")];
    char stringpool_str244[sizeof("-webkit-background-clip")];
    char stringpool_str245[sizeof("backdrop-filter")];
    char stringpool_str246[sizeof("text-rendering")];
    char stringpool_str247[sizeof("border-left-color")];
    char stringpool_str248[sizeof("text-orientation")];
    char stringpool_str249[sizeof("border-bottom-right-radius")];
    char stringpool_str250[sizeof("column-rule")];
    char stringpool_str251[sizeof("will-change")];
    char stringpool_str252[sizeof("outline-width")];
    char stringpool_str253[sizeof("lighting-color")];
    char stringpool_str254[sizeof("column-count")];
    char stringpool_str255[sizeof("-webkit-box-orient")];
    char stringpool_str256[sizeof("animation-timing-function")];
    char stringpool_str257[sizeof("overflow")];
    char stringpool_str258[sizeof("cx")];
    char stringpool_str259[sizeof("shape-outside")];
    char stringpool_str260[sizeof("-webkit-text-orientation")];
    char stringpool_str261[sizeof("border-bottom-left-radius")];
    char stringpool_str262[sizeof("-webkit-border-bottom-right-radius")];
    char stringpool_str263[sizeof("-webkit-column-rule")];
    char stringpool_str264[sizeof("clip-path")];
    char stringpool_str265[sizeof("motion-offset")];
    char stringpool_str266[sizeof("transition-timing-function")];
    char stringpool_str267[sizeof("font-size-adjust")];
    char stringpool_str268[sizeof("text-align")];
    char stringpool_str269[sizeof("border-top-right-radius")];
    char stringpool_str270[sizeof("-webkit-logical-width")];
    char stringpool_str271[sizeof("cy")];
    char stringpool_str272[sizeof("-webkit-text-stroke")];
    char stringpool_str273[sizeof("font-weight")];
    char stringpool_str274[sizeof("-webkit-column-count")];
    char stringpool_str275[sizeof("z-index")];
    char stringpool_str276[sizeof("max-zoom")];
    char stringpool_str277[sizeof("-webkit-mask-box-image")];
    char stringpool_str278[sizeof("-webkit-min-logical-width")];
    char stringpool_str279[sizeof("mix-blend-mode")];
    char stringpool_str280[sizeof("-webkit-animation-timing-function")];
    char stringpool_str281[sizeof("height")];
    char stringpool_str282[sizeof("-webkit-shape-outside")];
    char stringpool_str283[sizeof("text-decoration")];
    char stringpool_str284[sizeof("-webkit-border-bottom-left-radius")];
    char stringpool_str285[sizeof("min-height")];
    char stringpool_str286[sizeof("box-sizing")];
    char stringpool_str287[sizeof("mask-type")];
    char stringpool_str288[sizeof("animation-delay")];
    char stringpool_str289[sizeof("-webkit-clip-path")];
    char stringpool_str290[sizeof("-webkit-box-align")];
    char stringpool_str291[sizeof("-webkit-border-vertical-spacing")];
    char stringpool_str292[sizeof("-webkit-transition-timing-function")];
    char stringpool_str293[sizeof("border-top-left-radius")];
    char stringpool_str294[sizeof("column-width")];
    char stringpool_str295[sizeof("-webkit-border-top-right-radius")];
    char stringpool_str296[sizeof("border-style")];
    char stringpool_str297[sizeof("touch-action")];
    char stringpool_str298[sizeof("-webkit-box-lines")];
    char stringpool_str299[sizeof("overflow-wrap")];
    char stringpool_str300[sizeof("transition-delay")];
    char stringpool_str301[sizeof("-webkit-text-combine")];
    char stringpool_str302[sizeof("fill-rule")];
    char stringpool_str303[sizeof("-webkit-box-direction")];
    char stringpool_str304[sizeof("border-right-width")];
    char stringpool_str305[sizeof("-webkit-mask-repeat-x")];
    char stringpool_str306[sizeof("border-bottom-style")];
    char stringpool_str307[sizeof("-webkit-border-after-width")];
    char stringpool_str308[sizeof("-webkit-font-smoothing")];
    char stringpool_str309[sizeof("-webkit-margin-after-collapse")];
    char stringpool_str310[sizeof("-webkit-box-sizing")];
    char stringpool_str311[sizeof("-webkit-border-before-width")];
    char stringpool_str312[sizeof("-webkit-animation-delay")];
    char stringpool_str313[sizeof("-webkit-margin-before-collapse")];
    char stringpool_str314[sizeof("opacity")];
    char stringpool_str315[sizeof("-webkit-border-top-left-radius")];
    char stringpool_str316[sizeof("-webkit-column-width")];
    char stringpool_str317[sizeof("-webkit-column-break-after")];
    char stringpool_str318[sizeof("-webkit-column-break-before")];
    char stringpool_str319[sizeof("display")];
    char stringpool_str320[sizeof("-webkit-mask-repeat-y")];
    char stringpool_str321[sizeof("-webkit-mask-position-x")];
    char stringpool_str322[sizeof("background-attachment")];
    char stringpool_str323[sizeof("-webkit-mask-box-image-repeat")];
    char stringpool_str324[sizeof("font-variant-caps")];
    char stringpool_str325[sizeof("-webkit-transition-delay")];
    char stringpool_str326[sizeof("-webkit-box-decoration-break")];
    char stringpool_str327[sizeof("border-left-width")];
    char stringpool_str328[sizeof("-webkit-border-end-style")];
    char stringpool_str329[sizeof("text-align-last")];
    char stringpool_str330[sizeof("font-stretch")];
    char stringpool_str331[sizeof("line-height")];
    char stringpool_str332[sizeof("-webkit-mask-position-y")];
    char stringpool_str333[sizeof("transition-property")];
    char stringpool_str334[sizeof("snap-height")];
    char stringpool_str335[sizeof("text-decoration-line")];
    char stringpool_str336[sizeof("-webkit-box-pack")];
    char stringpool_str337[sizeof("border-top-style")];
    char stringpool_str338[sizeof("-webkit-opacity")];
    char stringpool_str339[sizeof("baseline-shift")];
    char stringpool_str340[sizeof("color-interpolation-filters")];
    char stringpool_str341[sizeof("-webkit-border-start-style")];
    char stringpool_str342[sizeof("column-rule-color")];
    char stringpool_str343[sizeof("list-style")];
    char stringpool_str344[sizeof("animation-play-state")];
    char stringpool_str345[sizeof("stroke-opacity")];
    char stringpool_str346[sizeof("-webkit-border-horizontal-spacing")];
    char stringpool_str347[sizeof("list-style-image")];
    char stringpool_str348[sizeof("column-fill")];
    char stringpool_str349[sizeof("buffered-rendering")];
    char stringpool_str350[sizeof("-webkit-transition-property")];
    char stringpool_str351[sizeof("-webkit-column-rule-color")];
    char stringpool_str352[sizeof("-webkit-animation-play-state")];
    char stringpool_str353[sizeof("stop-opacity")];
    char stringpool_str354[sizeof("-webkit-text-stroke-color")];
    char stringpool_str355[sizeof("-epub-text-orientation")];
    char stringpool_str356[sizeof("font-variant-numeric")];
    char stringpool_str357[sizeof("font-feature-settings")];
    char stringpool_str358[sizeof("font-variant-ligatures")];
    char stringpool_str359[sizeof("text-decoration-color")];
    char stringpool_str360[sizeof("-webkit-mask-box-image-slice")];
    char stringpool_str361[sizeof("-webkit-mask-box-image-outset")];
    char stringpool_str362[sizeof("scroll-behavior")];
    char stringpool_str363[sizeof("outline-offset")];
    char stringpool_str364[sizeof("-webkit-ruby-position")];
    char stringpool_str365[sizeof("max-width")];
    char stringpool_str366[sizeof("text-size-adjust")];
    char stringpool_str367[sizeof("list-style-position")];
    char stringpool_str368[sizeof("text-transform")];
    char stringpool_str369[sizeof("-webkit-font-feature-settings")];
    char stringpool_str370[sizeof("-epub-text-combine")];
    char stringpool_str371[sizeof("table-layout")];
    char stringpool_str372[sizeof("box-shadow")];
    char stringpool_str373[sizeof("empty-cells")];
    char stringpool_str374[sizeof("flex")];
    char stringpool_str375[sizeof("text-shadow")];
    char stringpool_str376[sizeof("visibility")];
    char stringpool_str377[sizeof("background-repeat-x")];
    char stringpool_str378[sizeof("flex-grow")];
    char stringpool_str379[sizeof("outline-style")];
    char stringpool_str380[sizeof("-webkit-text-size-adjust")];
    char stringpool_str381[sizeof("text-underline-position")];
    char stringpool_str382[sizeof("-webkit-box-ordinal-group")];
    char stringpool_str383[sizeof("column-rule-width")];
    char stringpool_str384[sizeof("-webkit-transform-origin-x")];
    char stringpool_str385[sizeof("background-repeat-y")];
    char stringpool_str386[sizeof("-webkit-mask-box-image-source")];
    char stringpool_str387[sizeof("background-position-x")];
    char stringpool_str388[sizeof("-webkit-box-shadow")];
    char stringpool_str389[sizeof("-webkit-flex")];
    char stringpool_str390[sizeof("-webkit-transform-origin-y")];
    char stringpool_str391[sizeof("background-position-y")];
    char stringpool_str392[sizeof("mask-source-type")];
    char stringpool_str393[sizeof("flex-basis")];
    char stringpool_str394[sizeof("-webkit-flex-grow")];
    char stringpool_str395[sizeof("-webkit-logical-height")];
    char stringpool_str396[sizeof("font-style")];
    char stringpool_str397[sizeof("text-anchor")];
    char stringpool_str398[sizeof("-webkit-column-rule-width")];
    char stringpool_str399[sizeof("stroke-dasharray")];
    char stringpool_str400[sizeof("-webkit-min-logical-height")];
    char stringpool_str401[sizeof("flex-wrap")];
    char stringpool_str402[sizeof("-webkit-text-stroke-width")];
    char stringpool_str403[sizeof("-webkit-mask-box-image-width")];
    char stringpool_str404[sizeof("transform-style")];
    char stringpool_str405[sizeof("scroll-snap-type")];
    char stringpool_str406[sizeof("-webkit-flex-basis")];
    char stringpool_str407[sizeof("scroll-snap-points-x")];
    char stringpool_str408[sizeof("vector-effect")];
    char stringpool_str409[sizeof("stroke-dashoffset")];
    char stringpool_str410[sizeof("flex-direction")];
    char stringpool_str411[sizeof("-webkit-flex-wrap")];
    char stringpool_str412[sizeof("border-right-style")];
    char stringpool_str413[sizeof("scroll-snap-points-y")];
    char stringpool_str414[sizeof("font-display")];
    char stringpool_str415[sizeof("-webkit-text-emphasis")];
    char stringpool_str416[sizeof("-webkit-border-after-style")];
    char stringpool_str417[sizeof("-webkit-border-before-style")];
    char stringpool_str418[sizeof("-webkit-transform-style")];
    char stringpool_str419[sizeof("overflow-anchor")];
    char stringpool_str420[sizeof("-webkit-box-reflect")];
    char stringpool_str421[sizeof("border-left-style")];
    char stringpool_str422[sizeof("-webkit-flex-direction")];
    char stringpool_str423[sizeof("justify-items")];
    char stringpool_str424[sizeof("-webkit-user-modify")];
    char stringpool_str425[sizeof("-webkit-perspective-origin-x")];
    char stringpool_str426[sizeof("flood-opacity")];
    char stringpool_str427[sizeof("-webkit-highlight")];
    char stringpool_str428[sizeof("-webkit-perspective-origin-y")];
    char stringpool_str429[sizeof("-epub-text-transform")];
    char stringpool_str430[sizeof("-webkit-text-emphasis-position")];
    char stringpool_str431[sizeof("overflow-x")];
    char stringpool_str432[sizeof("justify-content")];
    char stringpool_str433[sizeof("text-overflow")];
    char stringpool_str434[sizeof("fill-opacity")];
    char stringpool_str435[sizeof("overflow-y")];
    char stringpool_str436[sizeof("-webkit-max-logical-width")];
    char stringpool_str437[sizeof("-webkit-justify-content")];
    char stringpool_str438[sizeof("max-height")];
    char stringpool_str439[sizeof("shape-image-threshold")];
    char stringpool_str440[sizeof("-webkit-text-emphasis-color")];
    char stringpool_str441[sizeof("-webkit-text-fill-color")];
    char stringpool_str442[sizeof("text-combine-upright")];
    char stringpool_str443[sizeof("font-family")];
    char stringpool_str444[sizeof("-epub-text-emphasis")];
    char stringpool_str445[sizeof("-webkit-shape-image-threshold")];
    char stringpool_str446[sizeof("column-rule-style")];
    char stringpool_str447[sizeof("flex-shrink")];
    char stringpool_str448[sizeof("flex-flow")];
    char stringpool_str449[sizeof("hyphens")];
    char stringpool_str450[sizeof("-webkit-column-rule-style")];
    char stringpool_str451[sizeof("-webkit-flex-shrink")];
    char stringpool_str452[sizeof("-webkit-flex-flow")];
    char stringpool_str453[sizeof("text-decoration-style")];
    char stringpool_str454[sizeof("-webkit-tap-highlight-color")];
    char stringpool_str455[sizeof("list-style-type")];
    char stringpool_str456[sizeof("backface-visibility")];
    char stringpool_str457[sizeof("-epub-text-emphasis-color")];
    char stringpool_str458[sizeof("-webkit-text-decorations-in-effect")];
    char stringpool_str459[sizeof("-webkit-text-security")];
    char stringpool_str460[sizeof("justify-self")];
    char stringpool_str461[sizeof("-webkit-backface-visibility")];
    char stringpool_str462[sizeof("-webkit-box-flex")];
    char stringpool_str463[sizeof("-webkit-max-logical-height")];
    char stringpool_str464[sizeof("text-justify")];
    char stringpool_str465[sizeof("-webkit-text-emphasis-style")];
    char stringpool_str466[sizeof("-webkit-box-flex-group")];
    char stringpool_str467[sizeof("-webkit-hyphenate-character")];
    char stringpool_str468[sizeof("-epub-text-emphasis-style")];
  };
static const struct stringpool_t stringpool_contents =
  {
    "r",
    "d",
    "grid",
    "order",
    "margin",
    "motion",
    "rotate",
    "bottom",
    "border",
    "grid-row",
    "animation",
    "grid-area",
    "marker",
    "orientation",
    "widows",
    "writing-mode",
    "grid-row-end",
    "border-image",
    "margin-bottom",
    "mask",
    "animation-name",
    "border-bottom",
    "marker-mid",
    "marker-end",
    "word-break",
    "motion-rotation",
    "image-rendering",
    "transition",
    "stroke",
    "image-orientation",
    "-webkit-order",
    "grid-row-start",
    "-webkit-animation",
    "top",
    "marker-start",
    "break-inside",
    "page",
    "-webkit-margin-end",
    "-webkit-border-end",
    "-webkit-writing-mode",
    "-webkit-border-image",
    "padding",
    "-webkit-mask",
    "-webkit-animation-name",
    "grid-gap",
    "word-wrap",
    "-webkit-transition",
    "margin-top",
    "border-top",
    "paint-order",
    "-webkit-margin-start",
    "grid-row-gap",
    "-webkit-border-start",
    "zoom",
    "position",
    "-webkit-mask-image",
    "contain",
    "content",
    "-webkit-mask-origin",
    "speak",
    "padding-bottom",
    "src",
    "direction",
    "min-zoom",
    "isolation",
    "translate",
    "size",
    "border-image-repeat",
    "align-items",
    "resize",
    "tab-size",
    "-webkit-padding-end",
    "animation-direction",
    "dominant-baseline",
    "page-break-inside",
    "-webkit-rtl-ordering",
    "all",
    "padding-top",
    "stroke-linejoin",
    "stroke-miterlimit",
    "-webkit-line-break",
    "-webkit-padding-start",
    "-webkit-align-items",
    "-webkit-mask-repeat",
    "color",
    "clear",
    "grid-template",
    "-webkit-animation-direction",
    "scale",
    "-webkit-mask-position",
    "quotes",
    "-webkit-app-region",
    "border-color",
    "align-content",
    "word-spacing",
    "caption-side",
    "color-rendering",
    "border-spacing",
    "-webkit-mask-size",
    "grid-template-rows",
    "animation-duration",
    "grid-template-areas",
    "object-position",
    "border-radius",
    "grid-auto-rows",
    "border-bottom-color",
    "alignment-baseline",
    "clip",
    "border-image-slice",
    "transition-duration",
    "border-image-outset",
    "-webkit-align-content",
    "-webkit-user-drag",
    "outline",
    "-webkit-border-end-color",
    "-webkit-animation-duration",
    "-webkit-border-radius",
    "stop-color",
    "border-top-color",
    "cursor",
    "-webkit-border-start-color",
    "-epub-writing-mode",
    "-webkit-transition-duration",
    "-webkit-appearance",
    "-webkit-mask-composite",
    "unicode-bidi",
    "letter-spacing",
    "unicode-range",
    "-epub-word-break",
    "background",
    "-webkit-locale",
    "font",
    "user-zoom",
    "stroke-linecap",
    "counter-reset",
    "background-image",
    "background-origin",
    "-webkit-mask-clip",
    "animation-iteration-count",
    "border-image-source",
    "transform",
    "right",
    "width",
    "break-after",
    "font-kerning",
    "break-before",
    "min-width",
    "grid-column",
    "transform-origin",
    "-webkit-background-origin",
    "margin-right",
    "pointer-events",
    "color-interpolation",
    "columns",
    "border-right",
    "border-width",
    "border-collapse",
    "-webkit-margin-after",
    "-webkit-animation-iteration-count",
    "grid-column-end",
    "-webkit-border-after",
    "-webkit-line-clamp",
    "-webkit-margin-before",
    "left",
    "-webkit-border-before",
    "-webkit-transform",
    "float",
    "background-repeat",
    "filter",
    "border-image-width",
    "counter-increment",
    "border-bottom-width",
    "stroke-width",
    "user-select",
    "grid-column-start",
    "margin-left",
    "-webkit-transform-origin",
    "border-left",
    "-webkit-columns",
    "background-position",
    "-webkit-margin-collapse",
    "background-blend-mode",
    "object-fit",
    "column-gap",
    "page-break-after",
    "motion-path",
    "-webkit-border-end-width",
    "background-size",
    "page-break-before",
    "orphans",
    "-webkit-filter",
    "padding-right",
    "font-size",
    "scroll-snap-destination",
    "grid-column-gap",
    "-webkit-margin-bottom-collapse",
    "column-span",
    "-webkit-padding-after",
    "-webkit-user-select",
    "outline-color",
    "border-top-width",
    "shape-margin",
    "-webkit-padding-before",
    "-webkit-border-start-width",
    "fill",
    "-epub-caption-side",
    "shape-rendering",
    "-webkit-column-gap",
    "-webkit-column-break-inside",
    "-webkit-background-size",
    "padding-left",
    "background-color",
    "-webkit-column-span",
    "-webkit-shape-margin",
    "-webkit-margin-top-collapse",
    "clip-rule",
    "align-self",
    "scroll-snap-coordinate",
    "perspective",
    "-webkit-transform-origin-z",
    "animation-fill-mode",
    "-webkit-print-color-adjust",
    "vertical-align",
    "perspective-origin",
    "white-space",
    "-webkit-align-self",
    "background-clip",
    "x",
    "rx",
    "-webkit-perspective",
    "border-right-color",
    "-webkit-animation-fill-mode",
    "grid-template-columns",
    "-webkit-border-after-color",
    "y",
    "grid-auto-columns",
    "-webkit-border-before-color",
    "ry",
    "font-variant",
    "flood-color",
    "-webkit-perspective-origin",
    "-webkit-font-size-delta",
    "grid-auto-flow",
    "text-indent",
    "-webkit-background-clip",
    "backdrop-filter",
    "text-rendering",
    "border-left-color",
    "text-orientation",
    "border-bottom-right-radius",
    "column-rule",
    "will-change",
    "outline-width",
    "lighting-color",
    "column-count",
    "-webkit-box-orient",
    "animation-timing-function",
    "overflow",
    "cx",
    "shape-outside",
    "-webkit-text-orientation",
    "border-bottom-left-radius",
    "-webkit-border-bottom-right-radius",
    "-webkit-column-rule",
    "clip-path",
    "motion-offset",
    "transition-timing-function",
    "font-size-adjust",
    "text-align",
    "border-top-right-radius",
    "-webkit-logical-width",
    "cy",
    "-webkit-text-stroke",
    "font-weight",
    "-webkit-column-count",
    "z-index",
    "max-zoom",
    "-webkit-mask-box-image",
    "-webkit-min-logical-width",
    "mix-blend-mode",
    "-webkit-animation-timing-function",
    "height",
    "-webkit-shape-outside",
    "text-decoration",
    "-webkit-border-bottom-left-radius",
    "min-height",
    "box-sizing",
    "mask-type",
    "animation-delay",
    "-webkit-clip-path",
    "-webkit-box-align",
    "-webkit-border-vertical-spacing",
    "-webkit-transition-timing-function",
    "border-top-left-radius",
    "column-width",
    "-webkit-border-top-right-radius",
    "border-style",
    "touch-action",
    "-webkit-box-lines",
    "overflow-wrap",
    "transition-delay",
    "-webkit-text-combine",
    "fill-rule",
    "-webkit-box-direction",
    "border-right-width",
    "-webkit-mask-repeat-x",
    "border-bottom-style",
    "-webkit-border-after-width",
    "-webkit-font-smoothing",
    "-webkit-margin-after-collapse",
    "-webkit-box-sizing",
    "-webkit-border-before-width",
    "-webkit-animation-delay",
    "-webkit-margin-before-collapse",
    "opacity",
    "-webkit-border-top-left-radius",
    "-webkit-column-width",
    "-webkit-column-break-after",
    "-webkit-column-break-before",
    "display",
    "-webkit-mask-repeat-y",
    "-webkit-mask-position-x",
    "background-attachment",
    "-webkit-mask-box-image-repeat",
    "font-variant-caps",
    "-webkit-transition-delay",
    "-webkit-box-decoration-break",
    "border-left-width",
    "-webkit-border-end-style",
    "text-align-last",
    "font-stretch",
    "line-height",
    "-webkit-mask-position-y",
    "transition-property",
    "snap-height",
    "text-decoration-line",
    "-webkit-box-pack",
    "border-top-style",
    "-webkit-opacity",
    "baseline-shift",
    "color-interpolation-filters",
    "-webkit-border-start-style",
    "column-rule-color",
    "list-style",
    "animation-play-state",
    "stroke-opacity",
    "-webkit-border-horizontal-spacing",
    "list-style-image",
    "column-fill",
    "buffered-rendering",
    "-webkit-transition-property",
    "-webkit-column-rule-color",
    "-webkit-animation-play-state",
    "stop-opacity",
    "-webkit-text-stroke-color",
    "-epub-text-orientation",
    "font-variant-numeric",
    "font-feature-settings",
    "font-variant-ligatures",
    "text-decoration-color",
    "-webkit-mask-box-image-slice",
    "-webkit-mask-box-image-outset",
    "scroll-behavior",
    "outline-offset",
    "-webkit-ruby-position",
    "max-width",
    "text-size-adjust",
    "list-style-position",
    "text-transform",
    "-webkit-font-feature-settings",
    "-epub-text-combine",
    "table-layout",
    "box-shadow",
    "empty-cells",
    "flex",
    "text-shadow",
    "visibility",
    "background-repeat-x",
    "flex-grow",
    "outline-style",
    "-webkit-text-size-adjust",
    "text-underline-position",
    "-webkit-box-ordinal-group",
    "column-rule-width",
    "-webkit-transform-origin-x",
    "background-repeat-y",
    "-webkit-mask-box-image-source",
    "background-position-x",
    "-webkit-box-shadow",
    "-webkit-flex",
    "-webkit-transform-origin-y",
    "background-position-y",
    "mask-source-type",
    "flex-basis",
    "-webkit-flex-grow",
    "-webkit-logical-height",
    "font-style",
    "text-anchor",
    "-webkit-column-rule-width",
    "stroke-dasharray",
    "-webkit-min-logical-height",
    "flex-wrap",
    "-webkit-text-stroke-width",
    "-webkit-mask-box-image-width",
    "transform-style",
    "scroll-snap-type",
    "-webkit-flex-basis",
    "scroll-snap-points-x",
    "vector-effect",
    "stroke-dashoffset",
    "flex-direction",
    "-webkit-flex-wrap",
    "border-right-style",
    "scroll-snap-points-y",
    "font-display",
    "-webkit-text-emphasis",
    "-webkit-border-after-style",
    "-webkit-border-before-style",
    "-webkit-transform-style",
    "overflow-anchor",
    "-webkit-box-reflect",
    "border-left-style",
    "-webkit-flex-direction",
    "justify-items",
    "-webkit-user-modify",
    "-webkit-perspective-origin-x",
    "flood-opacity",
    "-webkit-highlight",
    "-webkit-perspective-origin-y",
    "-epub-text-transform",
    "-webkit-text-emphasis-position",
    "overflow-x",
    "justify-content",
    "text-overflow",
    "fill-opacity",
    "overflow-y",
    "-webkit-max-logical-width",
    "-webkit-justify-content",
    "max-height",
    "shape-image-threshold",
    "-webkit-text-emphasis-color",
    "-webkit-text-fill-color",
    "text-combine-upright",
    "font-family",
    "-epub-text-emphasis",
    "-webkit-shape-image-threshold",
    "column-rule-style",
    "flex-shrink",
    "flex-flow",
    "hyphens",
    "-webkit-column-rule-style",
    "-webkit-flex-shrink",
    "-webkit-flex-flow",
    "text-decoration-style",
    "-webkit-tap-highlight-color",
    "list-style-type",
    "backface-visibility",
    "-epub-text-emphasis-color",
    "-webkit-text-decorations-in-effect",
    "-webkit-text-security",
    "justify-self",
    "-webkit-backface-visibility",
    "-webkit-box-flex",
    "-webkit-max-logical-height",
    "text-justify",
    "-webkit-text-emphasis-style",
    "-webkit-box-flex-group",
    "-webkit-hyphenate-character",
    "-epub-text-emphasis-style"
  };
#define stringpool ((const char *) &stringpool_contents)

static const struct Property property_word_list[] =
  {
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str0, CSSPropertyR},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str1, CSSPropertyD},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str2, CSSPropertyGrid},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str3, CSSPropertyOrder},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str4, CSSPropertyMargin},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str5, CSSPropertyMotion},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str6, CSSPropertyRotate},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str7, CSSPropertyBottom},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str8, CSSPropertyBorder},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str9, CSSPropertyGridRow},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str10, CSSPropertyAnimation},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str11, CSSPropertyGridArea},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str12, CSSPropertyMarker},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str13, CSSPropertyOrientation},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str14, CSSPropertyWidows},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str15, CSSPropertyWritingMode},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str16, CSSPropertyGridRowEnd},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str17, CSSPropertyBorderImage},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str18, CSSPropertyMarginBottom},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str19, CSSPropertyMask},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str20, CSSPropertyAnimationName},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str21, CSSPropertyBorderBottom},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str22, CSSPropertyMarkerMid},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str23, CSSPropertyMarkerEnd},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str24, CSSPropertyWordBreak},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str25, CSSPropertyMotionRotation},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str26, CSSPropertyImageRendering},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str27, CSSPropertyTransition},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str28, CSSPropertyStroke},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str29, CSSPropertyImageOrientation},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str30, CSSPropertyAliasWebkitOrder},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str31, CSSPropertyGridRowStart},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str32, CSSPropertyAliasWebkitAnimation},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str33, CSSPropertyTop},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str34, CSSPropertyMarkerStart},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str35, CSSPropertyBreakInside},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str36, CSSPropertyPage},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str37, CSSPropertyWebkitMarginEnd},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str38, CSSPropertyWebkitBorderEnd},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str39, CSSPropertyWebkitWritingMode},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str40, CSSPropertyWebkitBorderImage},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str41, CSSPropertyPadding},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str42, CSSPropertyWebkitMask},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str43, CSSPropertyAliasWebkitAnimationName},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str44, CSSPropertyGridGap},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str45, CSSPropertyWordWrap},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str46, CSSPropertyAliasWebkitTransition},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str47, CSSPropertyMarginTop},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str48, CSSPropertyBorderTop},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str49, CSSPropertyPaintOrder},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str50, CSSPropertyWebkitMarginStart},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str51, CSSPropertyGridRowGap},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str52, CSSPropertyWebkitBorderStart},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str53, CSSPropertyZoom},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str54, CSSPropertyPosition},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str55, CSSPropertyWebkitMaskImage},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str56, CSSPropertyContain},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str57, CSSPropertyContent},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str58, CSSPropertyWebkitMaskOrigin},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str59, CSSPropertySpeak},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str60, CSSPropertyPaddingBottom},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str61, CSSPropertySrc},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str62, CSSPropertyDirection},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str63, CSSPropertyMinZoom},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str64, CSSPropertyIsolation},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str65, CSSPropertyTranslate},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str66, CSSPropertySize},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str67, CSSPropertyBorderImageRepeat},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str68, CSSPropertyAlignItems},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str69, CSSPropertyResize},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str70, CSSPropertyTabSize},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str71, CSSPropertyWebkitPaddingEnd},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str72, CSSPropertyAnimationDirection},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str73, CSSPropertyDominantBaseline},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str74, CSSPropertyPageBreakInside},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str75, CSSPropertyWebkitRtlOrdering},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str76, CSSPropertyAll},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str77, CSSPropertyPaddingTop},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str78, CSSPropertyStrokeLinejoin},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str79, CSSPropertyStrokeMiterlimit},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str80, CSSPropertyWebkitLineBreak},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str81, CSSPropertyWebkitPaddingStart},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str82, CSSPropertyAliasWebkitAlignItems},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str83, CSSPropertyWebkitMaskRepeat},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str84, CSSPropertyColor},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str85, CSSPropertyClear},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str86, CSSPropertyGridTemplate},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str87, CSSPropertyAliasWebkitAnimationDirection},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str88, CSSPropertyScale},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str89, CSSPropertyWebkitMaskPosition},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str90, CSSPropertyQuotes},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str91, CSSPropertyWebkitAppRegion},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str92, CSSPropertyBorderColor},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str93, CSSPropertyAlignContent},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str94, CSSPropertyWordSpacing},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str95, CSSPropertyCaptionSide},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str96, CSSPropertyColorRendering},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str97, CSSPropertyBorderSpacing},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str98, CSSPropertyWebkitMaskSize},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str99, CSSPropertyGridTemplateRows},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str100, CSSPropertyAnimationDuration},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str101, CSSPropertyGridTemplateAreas},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str102, CSSPropertyObjectPosition},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str103, CSSPropertyBorderRadius},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str104, CSSPropertyGridAutoRows},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str105, CSSPropertyBorderBottomColor},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str106, CSSPropertyAlignmentBaseline},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str107, CSSPropertyClip},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str108, CSSPropertyBorderImageSlice},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str109, CSSPropertyTransitionDuration},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str110, CSSPropertyBorderImageOutset},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str111, CSSPropertyAliasWebkitAlignContent},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str112, CSSPropertyWebkitUserDrag},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str113, CSSPropertyOutline},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str114, CSSPropertyWebkitBorderEndColor},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str115, CSSPropertyAliasWebkitAnimationDuration},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str116, CSSPropertyAliasWebkitBorderRadius},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str117, CSSPropertyStopColor},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str118, CSSPropertyBorderTopColor},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str119, CSSPropertyCursor},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str120, CSSPropertyWebkitBorderStartColor},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str121, CSSPropertyAliasEpubWritingMode},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str122, CSSPropertyAliasWebkitTransitionDuration},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str123, CSSPropertyWebkitAppearance},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str124, CSSPropertyWebkitMaskComposite},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str125, CSSPropertyUnicodeBidi},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str126, CSSPropertyLetterSpacing},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str127, CSSPropertyUnicodeRange},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str128, CSSPropertyAliasEpubWordBreak},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str129, CSSPropertyBackground},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str130, CSSPropertyWebkitLocale},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str131, CSSPropertyFont},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str132, CSSPropertyUserZoom},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str133, CSSPropertyStrokeLinecap},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str134, CSSPropertyCounterReset},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str135, CSSPropertyBackgroundImage},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str136, CSSPropertyBackgroundOrigin},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str137, CSSPropertyWebkitMaskClip},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str138, CSSPropertyAnimationIterationCount},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str139, CSSPropertyBorderImageSource},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str140, CSSPropertyTransform},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str141, CSSPropertyRight},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str142, CSSPropertyWidth},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str143, CSSPropertyBreakAfter},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str144, CSSPropertyFontKerning},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str145, CSSPropertyBreakBefore},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str146, CSSPropertyMinWidth},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str147, CSSPropertyGridColumn},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str148, CSSPropertyTransformOrigin},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str149, CSSPropertyWebkitBackgroundOrigin},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str150, CSSPropertyMarginRight},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str151, CSSPropertyPointerEvents},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str152, CSSPropertyColorInterpolation},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str153, CSSPropertyColumns},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str154, CSSPropertyBorderRight},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str155, CSSPropertyBorderWidth},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str156, CSSPropertyBorderCollapse},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str157, CSSPropertyWebkitMarginAfter},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str158, CSSPropertyAliasWebkitAnimationIterationCount},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str159, CSSPropertyGridColumnEnd},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str160, CSSPropertyWebkitBorderAfter},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str161, CSSPropertyWebkitLineClamp},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str162, CSSPropertyWebkitMarginBefore},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str163, CSSPropertyLeft},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str164, CSSPropertyWebkitBorderBefore},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str165, CSSPropertyAliasWebkitTransform},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str166, CSSPropertyFloat},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str167, CSSPropertyBackgroundRepeat},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str168, CSSPropertyFilter},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str169, CSSPropertyBorderImageWidth},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str170, CSSPropertyCounterIncrement},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str171, CSSPropertyBorderBottomWidth},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str172, CSSPropertyStrokeWidth},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str173, CSSPropertyUserSelect},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str174, CSSPropertyGridColumnStart},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str175, CSSPropertyMarginLeft},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str176, CSSPropertyAliasWebkitTransformOrigin},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str177, CSSPropertyBorderLeft},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str178, CSSPropertyAliasWebkitColumns},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str179, CSSPropertyBackgroundPosition},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str180, CSSPropertyWebkitMarginCollapse},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str181, CSSPropertyBackgroundBlendMode},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str182, CSSPropertyObjectFit},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str183, CSSPropertyColumnGap},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str184, CSSPropertyPageBreakAfter},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str185, CSSPropertyMotionPath},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str186, CSSPropertyWebkitBorderEndWidth},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str187, CSSPropertyBackgroundSize},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str188, CSSPropertyPageBreakBefore},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str189, CSSPropertyOrphans},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str190, CSSPropertyAliasWebkitFilter},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str191, CSSPropertyPaddingRight},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str192, CSSPropertyFontSize},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str193, CSSPropertyScrollSnapDestination},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str194, CSSPropertyGridColumnGap},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str195, CSSPropertyWebkitMarginBottomCollapse},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str196, CSSPropertyColumnSpan},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str197, CSSPropertyWebkitPaddingAfter},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str198, CSSPropertyAliasWebkitUserSelect},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str199, CSSPropertyOutlineColor},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str200, CSSPropertyBorderTopWidth},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str201, CSSPropertyShapeMargin},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str202, CSSPropertyWebkitPaddingBefore},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str203, CSSPropertyWebkitBorderStartWidth},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str204, CSSPropertyFill},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str205, CSSPropertyAliasEpubCaptionSide},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str206, CSSPropertyShapeRendering},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str207, CSSPropertyAliasWebkitColumnGap},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str208, CSSPropertyWebkitColumnBreakInside},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str209, CSSPropertyAliasWebkitBackgroundSize},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str210, CSSPropertyPaddingLeft},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str211, CSSPropertyBackgroundColor},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str212, CSSPropertyAliasWebkitColumnSpan},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str213, CSSPropertyAliasWebkitShapeMargin},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str214, CSSPropertyWebkitMarginTopCollapse},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str215, CSSPropertyClipRule},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str216, CSSPropertyAlignSelf},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str217, CSSPropertyScrollSnapCoordinate},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str218, CSSPropertyPerspective},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str219, CSSPropertyWebkitTransformOriginZ},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str220, CSSPropertyAnimationFillMode},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str221, CSSPropertyWebkitPrintColorAdjust},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str222, CSSPropertyVerticalAlign},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str223, CSSPropertyPerspectiveOrigin},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str224, CSSPropertyWhiteSpace},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str225, CSSPropertyAliasWebkitAlignSelf},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str226, CSSPropertyBackgroundClip},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str227, CSSPropertyX},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str228, CSSPropertyRx},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str229, CSSPropertyAliasWebkitPerspective},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str230, CSSPropertyBorderRightColor},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str231, CSSPropertyAliasWebkitAnimationFillMode},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str232, CSSPropertyGridTemplateColumns},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str233, CSSPropertyWebkitBorderAfterColor},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str234, CSSPropertyY},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str235, CSSPropertyGridAutoColumns},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str236, CSSPropertyWebkitBorderBeforeColor},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str237, CSSPropertyRy},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str238, CSSPropertyFontVariant},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str239, CSSPropertyFloodColor},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str240, CSSPropertyAliasWebkitPerspectiveOrigin},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str241, CSSPropertyWebkitFontSizeDelta},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str242, CSSPropertyGridAutoFlow},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str243, CSSPropertyTextIndent},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str244, CSSPropertyWebkitBackgroundClip},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str245, CSSPropertyBackdropFilter},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str246, CSSPropertyTextRendering},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str247, CSSPropertyBorderLeftColor},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str248, CSSPropertyTextOrientation},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str249, CSSPropertyBorderBottomRightRadius},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str250, CSSPropertyColumnRule},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str251, CSSPropertyWillChange},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str252, CSSPropertyOutlineWidth},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str253, CSSPropertyLightingColor},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str254, CSSPropertyColumnCount},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str255, CSSPropertyWebkitBoxOrient},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str256, CSSPropertyAnimationTimingFunction},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str257, CSSPropertyOverflow},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str258, CSSPropertyCx},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str259, CSSPropertyShapeOutside},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str260, CSSPropertyWebkitTextOrientation},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str261, CSSPropertyBorderBottomLeftRadius},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str262, CSSPropertyAliasWebkitBorderBottomRightRadius},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str263, CSSPropertyAliasWebkitColumnRule},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str264, CSSPropertyClipPath},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str265, CSSPropertyMotionOffset},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str266, CSSPropertyTransitionTimingFunction},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str267, CSSPropertyFontSizeAdjust},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str268, CSSPropertyTextAlign},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str269, CSSPropertyBorderTopRightRadius},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str270, CSSPropertyWebkitLogicalWidth},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str271, CSSPropertyCy},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str272, CSSPropertyWebkitTextStroke},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str273, CSSPropertyFontWeight},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str274, CSSPropertyAliasWebkitColumnCount},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str275, CSSPropertyZIndex},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str276, CSSPropertyMaxZoom},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str277, CSSPropertyWebkitMaskBoxImage},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str278, CSSPropertyWebkitMinLogicalWidth},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str279, CSSPropertyMixBlendMode},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str280, CSSPropertyAliasWebkitAnimationTimingFunction},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str281, CSSPropertyHeight},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str282, CSSPropertyAliasWebkitShapeOutside},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str283, CSSPropertyTextDecoration},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str284, CSSPropertyAliasWebkitBorderBottomLeftRadius},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str285, CSSPropertyMinHeight},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str286, CSSPropertyBoxSizing},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str287, CSSPropertyMaskType},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str288, CSSPropertyAnimationDelay},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str289, CSSPropertyWebkitClipPath},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str290, CSSPropertyWebkitBoxAlign},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str291, CSSPropertyWebkitBorderVerticalSpacing},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str292, CSSPropertyAliasWebkitTransitionTimingFunction},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str293, CSSPropertyBorderTopLeftRadius},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str294, CSSPropertyColumnWidth},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str295, CSSPropertyAliasWebkitBorderTopRightRadius},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str296, CSSPropertyBorderStyle},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str297, CSSPropertyTouchAction},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str298, CSSPropertyWebkitBoxLines},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str299, CSSPropertyOverflowWrap},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str300, CSSPropertyTransitionDelay},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str301, CSSPropertyWebkitTextCombine},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str302, CSSPropertyFillRule},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str303, CSSPropertyWebkitBoxDirection},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str304, CSSPropertyBorderRightWidth},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str305, CSSPropertyWebkitMaskRepeatX},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str306, CSSPropertyBorderBottomStyle},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str307, CSSPropertyWebkitBorderAfterWidth},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str308, CSSPropertyWebkitFontSmoothing},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str309, CSSPropertyWebkitMarginAfterCollapse},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str310, CSSPropertyAliasWebkitBoxSizing},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str311, CSSPropertyWebkitBorderBeforeWidth},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str312, CSSPropertyAliasWebkitAnimationDelay},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str313, CSSPropertyWebkitMarginBeforeCollapse},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str314, CSSPropertyOpacity},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str315, CSSPropertyAliasWebkitBorderTopLeftRadius},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str316, CSSPropertyAliasWebkitColumnWidth},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str317, CSSPropertyWebkitColumnBreakAfter},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str318, CSSPropertyWebkitColumnBreakBefore},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str319, CSSPropertyDisplay},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str320, CSSPropertyWebkitMaskRepeatY},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str321, CSSPropertyWebkitMaskPositionX},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str322, CSSPropertyBackgroundAttachment},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str323, CSSPropertyWebkitMaskBoxImageRepeat},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str324, CSSPropertyFontVariantCaps},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str325, CSSPropertyAliasWebkitTransitionDelay},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str326, CSSPropertyWebkitBoxDecorationBreak},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str327, CSSPropertyBorderLeftWidth},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str328, CSSPropertyWebkitBorderEndStyle},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str329, CSSPropertyTextAlignLast},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str330, CSSPropertyFontStretch},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str331, CSSPropertyLineHeight},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str332, CSSPropertyWebkitMaskPositionY},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str333, CSSPropertyTransitionProperty},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str334, CSSPropertySnapHeight},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str335, CSSPropertyTextDecorationLine},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str336, CSSPropertyWebkitBoxPack},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str337, CSSPropertyBorderTopStyle},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str338, CSSPropertyAliasWebkitOpacity},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str339, CSSPropertyBaselineShift},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str340, CSSPropertyColorInterpolationFilters},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str341, CSSPropertyWebkitBorderStartStyle},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str342, CSSPropertyColumnRuleColor},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str343, CSSPropertyListStyle},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str344, CSSPropertyAnimationPlayState},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str345, CSSPropertyStrokeOpacity},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str346, CSSPropertyWebkitBorderHorizontalSpacing},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str347, CSSPropertyListStyleImage},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str348, CSSPropertyColumnFill},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str349, CSSPropertyBufferedRendering},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str350, CSSPropertyAliasWebkitTransitionProperty},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str351, CSSPropertyAliasWebkitColumnRuleColor},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str352, CSSPropertyAliasWebkitAnimationPlayState},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str353, CSSPropertyStopOpacity},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str354, CSSPropertyWebkitTextStrokeColor},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str355, CSSPropertyAliasEpubTextOrientation},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str356, CSSPropertyFontVariantNumeric},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str357, CSSPropertyFontFeatureSettings},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str358, CSSPropertyFontVariantLigatures},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str359, CSSPropertyTextDecorationColor},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str360, CSSPropertyWebkitMaskBoxImageSlice},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str361, CSSPropertyWebkitMaskBoxImageOutset},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str362, CSSPropertyScrollBehavior},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str363, CSSPropertyOutlineOffset},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str364, CSSPropertyWebkitRubyPosition},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str365, CSSPropertyMaxWidth},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str366, CSSPropertyTextSizeAdjust},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str367, CSSPropertyListStylePosition},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str368, CSSPropertyTextTransform},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str369, CSSPropertyAliasWebkitFontFeatureSettings},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str370, CSSPropertyAliasEpubTextCombine},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str371, CSSPropertyTableLayout},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str372, CSSPropertyBoxShadow},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str373, CSSPropertyEmptyCells},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str374, CSSPropertyFlex},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str375, CSSPropertyTextShadow},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str376, CSSPropertyVisibility},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str377, CSSPropertyBackgroundRepeatX},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str378, CSSPropertyFlexGrow},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str379, CSSPropertyOutlineStyle},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str380, CSSPropertyAliasWebkitTextSizeAdjust},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str381, CSSPropertyTextUnderlinePosition},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str382, CSSPropertyWebkitBoxOrdinalGroup},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str383, CSSPropertyColumnRuleWidth},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str384, CSSPropertyWebkitTransformOriginX},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str385, CSSPropertyBackgroundRepeatY},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str386, CSSPropertyWebkitMaskBoxImageSource},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str387, CSSPropertyBackgroundPositionX},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str388, CSSPropertyAliasWebkitBoxShadow},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str389, CSSPropertyAliasWebkitFlex},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str390, CSSPropertyWebkitTransformOriginY},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str391, CSSPropertyBackgroundPositionY},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str392, CSSPropertyMaskSourceType},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str393, CSSPropertyFlexBasis},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str394, CSSPropertyAliasWebkitFlexGrow},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str395, CSSPropertyWebkitLogicalHeight},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str396, CSSPropertyFontStyle},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str397, CSSPropertyTextAnchor},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str398, CSSPropertyAliasWebkitColumnRuleWidth},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str399, CSSPropertyStrokeDasharray},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str400, CSSPropertyWebkitMinLogicalHeight},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str401, CSSPropertyFlexWrap},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str402, CSSPropertyWebkitTextStrokeWidth},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str403, CSSPropertyWebkitMaskBoxImageWidth},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str404, CSSPropertyTransformStyle},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str405, CSSPropertyScrollSnapType},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str406, CSSPropertyAliasWebkitFlexBasis},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str407, CSSPropertyScrollSnapPointsX},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str408, CSSPropertyVectorEffect},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str409, CSSPropertyStrokeDashoffset},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str410, CSSPropertyFlexDirection},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str411, CSSPropertyAliasWebkitFlexWrap},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str412, CSSPropertyBorderRightStyle},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str413, CSSPropertyScrollSnapPointsY},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str414, CSSPropertyFontDisplay},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str415, CSSPropertyWebkitTextEmphasis},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str416, CSSPropertyWebkitBorderAfterStyle},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str417, CSSPropertyWebkitBorderBeforeStyle},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str418, CSSPropertyAliasWebkitTransformStyle},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str419, CSSPropertyOverflowAnchor},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str420, CSSPropertyWebkitBoxReflect},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str421, CSSPropertyBorderLeftStyle},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str422, CSSPropertyAliasWebkitFlexDirection},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str423, CSSPropertyJustifyItems},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str424, CSSPropertyWebkitUserModify},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str425, CSSPropertyWebkitPerspectiveOriginX},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str426, CSSPropertyFloodOpacity},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str427, CSSPropertyWebkitHighlight},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str428, CSSPropertyWebkitPerspectiveOriginY},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str429, CSSPropertyAliasEpubTextTransform},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str430, CSSPropertyWebkitTextEmphasisPosition},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str431, CSSPropertyOverflowX},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str432, CSSPropertyJustifyContent},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str433, CSSPropertyTextOverflow},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str434, CSSPropertyFillOpacity},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str435, CSSPropertyOverflowY},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str436, CSSPropertyWebkitMaxLogicalWidth},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str437, CSSPropertyAliasWebkitJustifyContent},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str438, CSSPropertyMaxHeight},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str439, CSSPropertyShapeImageThreshold},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str440, CSSPropertyWebkitTextEmphasisColor},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str441, CSSPropertyWebkitTextFillColor},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str442, CSSPropertyTextCombineUpright},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str443, CSSPropertyFontFamily},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str444, CSSPropertyAliasEpubTextEmphasis},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str445, CSSPropertyAliasWebkitShapeImageThreshold},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str446, CSSPropertyColumnRuleStyle},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str447, CSSPropertyFlexShrink},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str448, CSSPropertyFlexFlow},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str449, CSSPropertyHyphens},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str450, CSSPropertyAliasWebkitColumnRuleStyle},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str451, CSSPropertyAliasWebkitFlexShrink},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str452, CSSPropertyAliasWebkitFlexFlow},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str453, CSSPropertyTextDecorationStyle},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str454, CSSPropertyWebkitTapHighlightColor},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str455, CSSPropertyListStyleType},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str456, CSSPropertyBackfaceVisibility},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str457, CSSPropertyAliasEpubTextEmphasisColor},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str458, CSSPropertyWebkitTextDecorationsInEffect},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str459, CSSPropertyWebkitTextSecurity},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str460, CSSPropertyJustifySelf},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str461, CSSPropertyAliasWebkitBackfaceVisibility},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str462, CSSPropertyWebkitBoxFlex},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str463, CSSPropertyWebkitMaxLogicalHeight},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str464, CSSPropertyTextJustify},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str465, CSSPropertyWebkitTextEmphasisStyle},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str466, CSSPropertyWebkitBoxFlexGroup},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str467, CSSPropertyWebkitHyphenateCharacter},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str468, CSSPropertyAliasEpubTextEmphasisStyle}
  };

static const short lookup[] =
  {
     -1,  -1,  -1,  -1,  -1,   0,  -1,   1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,   2,  -1,  -1,  -1,  -1,  -1,   3,  -1,
      4,   5,  -1,   6,   7,   8,  -1,  -1,  -1,  -1,
     -1,  -1,   9,  -1,  -1,  -1,  10,  -1,  11,  -1,
     -1,  -1,  -1,  12,  -1,  -1,  -1,  -1,  13,  -1,
     -1,  14,  -1,  -1,  15,  16,  17,  -1,  -1,  18,
     -1,  19,  20,  -1,  21,  22,  23,  24,  25,  -1,
     26,  27,  -1,  28,  -1,  -1,  -1,  -1,  -1,  29,
     -1,  -1,  -1,  -1,  30,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  31,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  32,  33,  34,  -1,  -1,  35,  36,  37,
     -1,  -1,  -1,  -1,  38,  -1,  -1,  -1,  -1,  -1,
     39,  -1,  40,  -1,  -1,  -1,  41,  42,  43,  44,
     -1,  -1,  -1,  -1,  45,  -1,  -1,  46,  47,  -1,
     -1,  -1,  -1,  48,  -1,  -1,  49,  50,  -1,  51,
     -1,  -1,  52,  -1,  -1,  53,  -1,  54,  55,  56,
     -1,  57,  58,  -1,  59,  60,  -1,  61,  -1,  -1,
     -1,  -1,  62,  -1,  -1,  63,  -1,  -1,  -1,  -1,
     -1,  -1,  64,  -1,  65,  66,  -1,  -1,  -1,  -1,
     -1,  67,  -1,  68,  -1,  -1,  69,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  70,  -1,
     -1,  -1,  -1,  -1,  -1,  71,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  72,  -1,  -1,  -1,  -1,  73,  -1,
     74,  -1,  -1,  -1,  -1,  -1,  -1,  75,  -1,  76,
     -1,  -1,  -1,  -1,  77,  78,  -1,  -1,  79,  80,
     -1,  -1,  -1,  81,  -1,  -1,  -1,  -1,  -1,  82,
     -1,  -1,  83,  -1,  -1,  84,  85,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  86,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  87,
     -1,  -1,  -1,  -1,  -1,  88,  -1,  -1,  -1,  89,
     90,  91,  -1,  -1,  -1,  92,  -1,  -1,  93,  -1,
     -1,  94,  -1,  95,  -1,  -1,  -1,  -1,  -1,  96,
     -1,  -1,  -1,  -1,  97,  -1,  -1,  98,  -1,  99,
     -1,  -1,  -1, 100,  -1, 101,  -1,  -1, 102,  -1,
    103, 104,  -1,  -1, 105,  -1,  -1,  -1,  -1, 106,
     -1,  -1,  -1,  -1,  -1,  -1,  -1, 107,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1, 108,  -1, 109,  -1,
     -1,  -1, 110,  -1, 111,  -1,  -1,  -1,  -1,  -1,
     -1,  -1, 112,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1, 113, 114,  -1,  -1,  -1,  -1, 115,
     -1,  -1,  -1,  -1,  -1,  -1, 116,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1, 117,  -1,  -1,
     -1,  -1,  -1, 118,  -1,  -1,  -1,  -1,  -1,  -1,
     -1, 119, 120, 121, 122, 123,  -1,  -1, 124, 125,
    126, 127,  -1,  -1,  -1,  -1, 128,  -1, 129,  -1,
     -1,  -1,  -1,  -1, 130,  -1,  -1,  -1, 131, 132,
     -1, 133,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1, 134,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 135,
     -1,  -1,  -1, 136,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 137,
     -1,  -1, 138, 139,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1, 140,  -1,  -1, 141,  -1, 142,  -1, 143,
     -1, 144,  -1,  -1,  -1,  -1, 145,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1, 146,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1, 147, 148,  -1, 149,
    150, 151, 152, 153,  -1, 154,  -1, 155,  -1,  -1,
     -1,  -1,  -1,  -1, 156, 157,  -1,  -1, 158, 159,
    160, 161, 162,  -1,  -1,  -1, 163, 164, 165,  -1,
    166,  -1,  -1, 167,  -1,  -1, 168,  -1, 169,  -1,
     -1,  -1,  -1,  -1,  -1, 170, 171,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1, 172, 173, 174,  -1,  -1,
     -1, 175,  -1, 176,  -1,  -1, 177,  -1,  -1, 178,
    179,  -1,  -1,  -1,  -1, 180,  -1,  -1, 181,  -1,
     -1,  -1,  -1,  -1, 182,  -1, 183,  -1,  -1,  -1,
     -1,  -1, 184, 185,  -1,  -1, 186,  -1, 187, 188,
    189,  -1, 190,  -1,  -1,  -1, 191,  -1, 192,  -1,
     -1, 193,  -1, 194, 195,  -1,  -1,  -1,  -1,  -1,
    196, 197, 198, 199,  -1, 200, 201,  -1, 202,  -1,
     -1,  -1,  -1,  -1, 203,  -1,  -1,  -1,  -1,  -1,
     -1, 204, 205,  -1,  -1, 206,  -1,  -1,  -1,  -1,
     -1,  -1, 207,  -1,  -1,  -1,  -1, 208,  -1,  -1,
     -1,  -1,  -1,  -1, 209,  -1,  -1, 210,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 211,  -1,
     -1,  -1,  -1,  -1,  -1,  -1, 212,  -1,  -1,  -1,
     -1,  -1, 213, 214,  -1,  -1,  -1,  -1,  -1, 215,
     -1, 216,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 217,
     -1,  -1,  -1,  -1,  -1, 218,  -1,  -1, 219,  -1,
    220,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1, 221,  -1,  -1,  -1,  -1, 222,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
    223,  -1,  -1,  -1,  -1,  -1, 224,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1, 225,  -1,  -1,
    226, 227,  -1,  -1,  -1,  -1, 228,  -1,  -1,  -1,
     -1, 229,  -1,  -1,  -1, 230, 231,  -1,  -1,  -1,
     -1,  -1,  -1, 232,  -1,  -1,  -1,  -1,  -1,  -1,
    233,  -1,  -1, 234,  -1, 235,  -1, 236, 237, 238,
     -1, 239,  -1,  -1,  -1,  -1, 240,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1, 241, 242,  -1, 243,  -1,
     -1,  -1,  -1,  -1,  -1,  -1, 244, 245,  -1,  -1,
     -1,  -1,  -1, 246,  -1,  -1, 247,  -1,  -1,  -1,
     -1,  -1, 248,  -1,  -1,  -1,  -1,  -1,  -1, 249,
     -1, 250, 251,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1, 252,  -1, 253,  -1,  -1,
     -1,  -1, 254,  -1,  -1,  -1, 255,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1, 256,  -1,  -1,
     -1,  -1,  -1,  -1,  -1, 257,  -1,  -1,  -1, 258,
     -1,  -1,  -1, 259,  -1,  -1,  -1,  -1, 260,  -1,
    261,  -1,  -1,  -1,  -1, 262,  -1, 263,  -1, 264,
     -1, 265, 266, 267,  -1,  -1, 268,  -1, 269,  -1,
    270, 271,  -1, 272, 273,  -1,  -1,  -1, 274, 275,
     -1, 276,  -1,  -1,  -1,  -1, 277,  -1,  -1,  -1,
    278, 279,  -1, 280,  -1,  -1,  -1,  -1,  -1,  -1,
    281,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 282,
     -1, 283,  -1,  -1,  -1,  -1, 284,  -1,  -1,  -1,
    285,  -1, 286, 287, 288, 289, 290, 291, 292, 293,
     -1, 294,  -1,  -1, 295,  -1,  -1,  -1,  -1,  -1,
     -1, 296,  -1,  -1,  -1,  -1, 297,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1, 298, 299,  -1, 300,
     -1, 301,  -1, 302,  -1,  -1, 303, 304,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 305,  -1,
    306,  -1, 307, 308, 309,  -1,  -1,  -1, 310, 311,
    312, 313,  -1,  -1, 314, 315,  -1, 316,  -1, 317,
     -1,  -1,  -1,  -1,  -1,  -1, 318,  -1, 319,  -1,
    320,  -1,  -1,  -1,  -1, 321,  -1,  -1,  -1, 322,
     -1, 323,  -1, 324,  -1, 325, 326,  -1, 327,  -1,
    328,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 329,  -1,
     -1,  -1, 330, 331,  -1,  -1,  -1, 332,  -1,  -1,
    333, 334,  -1,  -1, 335,  -1, 336,  -1,  -1, 337,
    338,  -1,  -1,  -1,  -1,  -1, 339, 340, 341,  -1,
     -1, 342,  -1, 343,  -1, 344,  -1,  -1,  -1,  -1,
     -1,  -1, 345,  -1,  -1,  -1,  -1, 346,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1, 347, 348,  -1,  -1,  -1,  -1,
     -1,  -1,  -1, 349,  -1,  -1, 350,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1, 351,  -1,  -1,
     -1, 352,  -1,  -1,  -1,  -1, 353,  -1,  -1,  -1,
     -1,  -1,  -1, 354,  -1,  -1,  -1,  -1,  -1,  -1,
     -1, 355, 356,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1, 357,  -1,  -1, 358,  -1,  -1,  -1,
     -1, 359,  -1,  -1,  -1,  -1, 360,  -1,  -1,  -1,
     -1,  -1, 361, 362,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1, 363,  -1,  -1,  -1, 364,  -1,  -1,
     -1,  -1,  -1, 365, 366, 367, 368,  -1,  -1, 369,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1, 370,  -1, 371,  -1, 372, 373,
     -1, 374,  -1,  -1, 375,  -1,  -1, 376,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 377,
     -1,  -1,  -1,  -1,  -1,  -1, 378,  -1,  -1, 379,
    380, 381,  -1,  -1, 382,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1, 383,  -1,  -1,  -1,  -1,  -1, 384,
     -1, 385,  -1, 386,  -1,  -1, 387,  -1,  -1,  -1,
     -1,  -1,  -1,  -1, 388,  -1,  -1, 389,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1, 390,  -1,  -1,  -1,  -1,  -1,  -1, 391,  -1,
    392, 393, 394, 395, 396,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1, 397,  -1,  -1, 398,
     -1, 399,  -1, 400,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1, 401,  -1, 402,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 403,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 404, 405,
     -1,  -1,  -1,  -1,  -1,  -1,  -1, 406,  -1,  -1,
     -1,  -1,  -1,  -1,  -1, 407,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
    408,  -1,  -1, 409,  -1,  -1,  -1,  -1, 410, 411,
     -1, 412,  -1,  -1,  -1,  -1,  -1, 413,  -1,  -1,
     -1, 414,  -1,  -1,  -1, 415, 416,  -1,  -1,  -1,
     -1,  -1,  -1, 417, 418,  -1,  -1,  -1,  -1,  -1,
     -1,  -1, 419,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 420,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1, 421,  -1, 422,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 423,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1, 424,  -1,  -1,
     -1,  -1, 425,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
    426,  -1,  -1,  -1,  -1,  -1, 427,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1, 428,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1, 429,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1, 430,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1, 431,  -1,  -1, 432,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 433,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
    434,  -1,  -1, 435,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1, 436,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
    437,  -1,  -1,  -1,  -1,  -1, 438,  -1,  -1,  -1,
    439,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1, 440,  -1,  -1,  -1,  -1,
     -1, 441,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1, 442,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1, 443,  -1,  -1, 444,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1, 445,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1, 446,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1, 447,  -1,  -1,  -1,
    448,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 449,  -1,
     -1,  -1,  -1, 450,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1, 451,  -1,  -1,  -1, 452,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1, 453,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1, 454,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1, 455,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
    456,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 457,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1, 458,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1, 459,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1, 460,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1, 461,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1, 462,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 463,
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
     -1,  -1, 464,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
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
     -1, 465,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1, 466,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
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
     -1,  -1,  -1,  -1, 467,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1, 468
  };

const struct Property *
CSSPropertyNamesHash::findPropertyImpl (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = property_hash_function (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = property_word_list[index].nameOffset + stringpool;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &property_word_list[index];
            }
        }
    }
  return 0;
}

const Property* findProperty(register const char* str, register unsigned int len)
{
    return CSSPropertyNamesHash::findPropertyImpl(str, len);
}

const char* getPropertyName(CSSPropertyID id)
{
    ASSERT(id >= firstCSSProperty && id <= lastUnresolvedCSSProperty);
    int index = id - firstCSSProperty;
    return propertyNameStringsPool + propertyNameStringsOffsets[index];
}

const AtomicString& getPropertyNameAtomicString(CSSPropertyID id)
{
    ASSERT(id >= firstCSSProperty && id <= lastUnresolvedCSSProperty);
    int index = id - firstCSSProperty;
    static AtomicString* propertyStrings = new AtomicString[lastUnresolvedCSSProperty]; // Intentionally never destroyed.
    AtomicString& propertyString = propertyStrings[index];
    if (propertyString.isNull())
        propertyString = AtomicString(propertyNameStringsPool + propertyNameStringsOffsets[index]);
    return propertyString;
}

String getPropertyNameString(CSSPropertyID id)
{
    // We share the StringImpl with the AtomicStrings.
    return getPropertyNameAtomicString(id).getString();
}

String getJSPropertyName(CSSPropertyID id)
{
    char result[maxCSSPropertyNameLength + 1];
    const char* cssPropertyName = getPropertyName(id);
    const char* propertyNamePointer = cssPropertyName;
    if (!propertyNamePointer)
        return emptyString();

    char* resultPointer = result;
    while (char character = *propertyNamePointer++) {
        if (character == '-') {
            char nextCharacter = *propertyNamePointer++;
            if (!nextCharacter)
                break;
            character = (propertyNamePointer - 2 != cssPropertyName) ? toASCIIUpper(nextCharacter) : nextCharacter;
        }
        *resultPointer++ = character;
    }
    *resultPointer = '\0';
    return String(result);
}

CSSPropertyID cssPropertyID(const String& string)
{
    return resolveCSSPropertyID(unresolvedCSSPropertyID(string));
}

} // namespace blink

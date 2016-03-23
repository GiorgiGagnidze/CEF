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
    "font-variant\0"
    "font-variant-ligatures\0"
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
    "overflow-wrap\0"
    "overflow-x\0"
    "overflow-y\0"
    "padding-bottom\0"
    "padding-left\0"
    "padding-right\0"
    "padding-top\0"
    "page-break-after\0"
    "page-break-before\0"
    "page-break-inside\0"
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
    "-webkit-background-composite\0"
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
    "-webkit-column-break-after\0"
    "-webkit-column-break-before\0"
    "-webkit-column-break-inside\0"
    "-webkit-column-count\0"
    "-webkit-column-gap\0"
    "-webkit-column-rule-color\0"
    "-webkit-column-rule-style\0"
    "-webkit-column-rule-width\0"
    "-webkit-column-span\0"
    "-webkit-column-width\0"
    "-webkit-filter\0"
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
    "-webkit-user-select\0"
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
    "font-display\0"
    "max-zoom\0"
    "min-zoom\0"
    "orientation\0"
    "page\0"
    "src\0"
    "unicode-range\0"
    "user-zoom\0"
    "-webkit-font-size-delta\0"
    "-webkit-text-decorations-in-effect\0"
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
    "transition\0"
    "-webkit-border-after\0"
    "-webkit-border-before\0"
    "-webkit-border-end\0"
    "-webkit-border-start\0"
    "-webkit-column-rule\0"
    "-webkit-columns\0"
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
    "-epub-text-transform\0"
    "-webkit-transform\0"
    "-webkit-transform-origin\0"
    "-webkit-transform-style\0"
    "-webkit-transition-delay\0"
    "-webkit-transition-duration\0"
    "-webkit-transition-property\0"
    "-webkit-transition-timing-function\0"
    "-epub-text-combine\0"
    "-epub-text-emphasis-color\0"
    "-epub-text-emphasis-style\0"
    "-epub-word-break\0"
    "-webkit-animation\0"
    "-webkit-border-radius\0"
    "-webkit-flex\0"
    "-webkit-flex-flow\0"
    "-webkit-transition\0"
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
    105,
    128,
    140,
    162,
    185,
    200,
    217,
    242,
    255,
    276,
    291,
    296,
    310,
    322,
    341,
    352,
    368,
    388,
    407,
    427,
    453,
    468,
    489,
    515,
    531,
    551,
    573,
    595,
    611,
    628,
    645,
    663,
    685,
    707,
    727,
    747,
    763,
    778,
    798,
    824,
    851,
    871,
    891,
    907,
    927,
    947,
    966,
    986,
    1005,
    1023,
    1041,
    1059,
    1078,
    1097,
    1116,
    1133,
    1156,
    1180,
    1197,
    1214,
    1221,
    1232,
    1243,
    1262,
    1275,
    1281,
    1286,
    1296,
    1306,
    1326,
    1354,
    1370,
    1382,
    1390,
    1398,
    1416,
    1430,
    1437,
    1440,
    1443,
    1445,
    1453,
    1471,
    1483,
    1488,
    1501,
    1511,
    1518,
    1529,
    1544,
    1554,
    1566,
    1576,
    1582,
    1594,
    1608,
    1626,
    1641,
    1656,
    1672,
    1688,
    1706,
    1719,
    1732,
    1747,
    1767,
    1789,
    1808,
    1815,
    1831,
    1849,
    1859,
    1875,
    1889,
    1902,
    1907,
    1922,
    1937,
    1949,
    1966,
    1986,
    2002,
    2016,
    2028,
    2041,
    2052,
    2063,
    2074,
    2087,
    2092,
    2109,
    2119,
    2130,
    2140,
    2151,
    2161,
    2176,
    2190,
    2202,
    2218,
    2229,
    2245,
    2253,
    2259,
    2267,
    2281,
    2296,
    2310,
    2324,
    2338,
    2349,
    2360,
    2375,
    2388,
    2402,
    2414,
    2431,
    2449,
    2467,
    2479,
    2491,
    2510,
    2525,
    2534,
    2541,
    2548,
    2554,
    2556,
    2559,
    2562,
    2578,
    2595,
    2616,
    2637,
    2661,
    2684,
    2706,
    2719,
    2733,
    2749,
    2754,
    2760,
    2771,
    2784,
    2791,
    2808,
    2826,
    2841,
    2857,
    2875,
    2890,
    2903,
    2916,
    2925,
    2936,
    2952,
    2964,
    2985,
    3001,
    3023,
    3044,
    3066,
    3078,
    3091,
    3105,
    3117,
    3132,
    3156,
    3160,
    3173,
    3183,
    3200,
    3216,
    3226,
    3233,
    3239,
    3256,
    3276,
    3296,
    3323,
    3336,
    3350,
    3365,
    3376,
    3378,
    3380,
    3399,
    3418,
    3442,
    3471,
    3497,
    3531,
    3552,
    3584,
    3602,
    3631,
    3653,
    3670,
    3693,
    3711,
    3737,
    3756,
    3773,
    3793,
    3811,
    3838,
    3866,
    3894,
    3915,
    3934,
    3960,
    3986,
    4012,
    4032,
    4053,
    4068,
    4086,
    4114,
    4133,
    4152,
    4182,
    4213,
    4244,
    4272,
    4302,
    4332,
    4361,
    4391,
    4420,
    4438,
    4461,
    4480,
    4500,
    4524,
    4548,
    4570,
    4592,
    4610,
    4639,
    4668,
    4695,
    4716,
    4738,
    4766,
    4787,
    4815,
    4846,
    4874,
    4898,
    4920,
    4946,
    4972,
    4999,
    5026,
    5053,
    5071,
    5091,
    5111,
    5123,
    5130,
    5136,
    5148,
    5159,
    5172,
    5182,
    5190,
    5215,
    5240,
    5265,
    5292,
    5319,
    5346,
    5374,
    5402,
    5430,
    5457,
    5484,
    5511,
    5530,
    5551,
    5573,
    5594,
    5614,
    5636,
    5659,
    5681,
    5703,
    5726,
    5752,
    5779,
    5805,
    5832,
    5836,
    5849,
    5858,
    5867,
    5879,
    5884,
    5888,
    5902,
    5912,
    5936,
    5971,
    5981,
    5992,
    6012,
    6030,
    6037,
    6051,
    6064,
    6077,
    6089,
    6103,
    6116,
    6131,
    6144,
    6155,
    6168,
    6173,
    6183,
    6188,
    6193,
    6203,
    6215,
    6224,
    6233,
    6247,
    6258,
    6265,
    6272,
    6279,
    6287,
    6296,
    6304,
    6315,
    6336,
    6358,
    6377,
    6398,
    6418,
    6434,
    6458,
    6471,
    6494,
    6516,
    6536,
    6558,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6578,
    6608,
    6608,
    6608,
    6608,
    6631,
    6631,
    6650,
    6650,
    6650,
    6672,
    6692,
    6692,
    6711,
    6735,
    6763,
    6790,
    6818,
    6852,
    6875,
    6904,
    6938,
    6938,
    6966,
    6966,
    6966,
    6966,
    6966,
    6966,
    6966,
    6966,
    6966,
    6966,
    6966,
    6990,
    6990,
    6990,
    7024,
    7059,
    7059,
    7059,
    7059,
    7059,
    7059,
    7059,
    7059,
    7059,
    7059,
    7059,
    7059,
    7059,
    7059,
    7059,
    7059,
    7090,
    7122,
    7122,
    7122,
    7122,
    7141,
    7160,
    7160,
    7179,
    7179,
    7179,
    7179,
    7179,
    7179,
    7179,
    7179,
    7179,
    7179,
    7179,
    7179,
    7179,
    7179,
    7179,
    7179,
    7179,
    7179,
    7179,
    7179,
    7179,
    7179,
    7179,
    7179,
    7198,
    7221,
    7239,
    7259,
    7277,
    7277,
    7277,
    7277,
    7277,
    7277,
    7277,
    7277,
    7277,
    7277,
    7277,
    7277,
    7277,
    7277,
    7277,
    7277,
    7277,
    7277,
    7277,
    7277,
    7301,
    7301,
    7301,
    7301,
    7301,
    7301,
    7301,
    7301,
    7301,
    7301,
    7301,
    7301,
    7301,
    7301,
    7301,
    7301,
    7301,
    7301,
    7301,
    7301,
    7301,
    7301,
    7301,
    7301,
    7301,
    7301,
    7301,
    7301,
    7301,
    7301,
    7317,
    7331,
    7331,
    7331,
    7331,
    7331,
    7331,
    7331,
    7331,
    7331,
    7331,
    7331,
    7331,
    7331,
    7331,
    7331,
    7331,
    7331,
    7351,
    7378,
    7378,
    7378,
    7378,
    7378,
    7378,
    7378,
    7378,
    7378,
    7378,
    7378,
    7378,
    7378,
    7378,
    7378,
    7408,
    7429,
    7451,
    7451,
    7451,
    7451,
    7451,
    7451,
    7451,
    7451,
    7451,
    7451,
    7451,
    7451,
    7451,
    7451,
    7451,
    7451,
    7451,
    7451,
    7451,
    7451,
    7451,
    7451,
    7451,
    7451,
    7451,
    7451,
    7451,
    7451,
    7472,
    7472,
    7472,
    7472,
    7490,
    7515,
    7539,
    7539,
    7539,
    7539,
    7564,
    7592,
    7620,
    7655,
    7655,
    7655,
    7655,
    7655,
    7655,
    7655,
    7655,
    7655,
    7655,
    7655,
    7655,
    7655,
    7655,
    7655,
    7655,
    7655,
    7655,
    7655,
    7655,
    7655,
    7655,
    7655,
    7655,
    7655,
    7655,
    7655,
    7655,
    7655,
    7655,
    7655,
    7655,
    7655,
    7655,
    7655,
    7655,
    7655,
    7655,
    7655,
    7655,
    7655,
    7655,
    7655,
    7655,
    7655,
    7655,
    7655,
    7655,
    7655,
    7655,
    7655,
    7655,
    7655,
    7655,
    7655,
    7655,
    7655,
    7655,
    7655,
    7655,
    7655,
    7655,
    7655,
    7655,
    7655,
    7674,
    7700,
    7700,
    7726,
    7726,
    7726,
    7726,
    7726,
    7726,
    7726,
    7726,
    7726,
    7726,
    7726,
    7726,
    7726,
    7726,
    7726,
    7743,
    7743,
    7743,
    7743,
    7743,
    7743,
    7743,
    7743,
    7743,
    7743,
    7743,
    7743,
    7743,
    7743,
    7743,
    7743,
    7743,
    7743,
    7743,
    7743,
    7743,
    7743,
    7743,
    7743,
    7743,
    7743,
    7743,
    7743,
    7743,
    7743,
    7743,
    7743,
    7743,
    7743,
    7743,
    7743,
    7743,
    7743,
    7743,
    7743,
    7743,
    7761,
    7761,
    7761,
    7761,
    7761,
    7761,
    7761,
    7761,
    7761,
    7783,
    7783,
    7783,
    7783,
    7783,
    7783,
    7796,
    7814,
    7814,
    7814,
    7814,
    7814,
    7814,
    7814,
    7814,
    7814,
    7814,
    7814,
    7814,
    7814,
    7814,
    7814,
    7833,
    7833,
    7833,
    7833,
    7833,
    7833,
    7833,
    7833,
    7833,
    7833,
    7833,
    7833,
};

enum
  {
    TOTAL_KEYWORDS = 450,
    MIN_WORD_LENGTH = 1,
    MAX_WORD_LENGTH = 34,
    MIN_HASH_VALUE = 2,
    MAX_HASH_VALUE = 2918
  };

/* maximum key range = 2917, duplicates = 0 */

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
      2919, 2919, 2919, 2919, 2919, 2919, 2919, 2919, 2919, 2919,
      2919, 2919, 2919, 2919, 2919, 2919, 2919, 2919, 2919, 2919,
      2919, 2919, 2919, 2919, 2919, 2919, 2919, 2919, 2919, 2919,
      2919, 2919, 2919, 2919, 2919, 2919, 2919, 2919, 2919, 2919,
      2919, 2919, 2919, 2919, 2919,    2, 2919, 2919, 2919, 2919,
      2919, 2919, 2919, 2919, 2919, 2919, 2919, 2919, 2919, 2919,
      2919, 2919, 2919, 2919, 2919, 2919, 2919, 2919, 2919, 2919,
      2919, 2919, 2919, 2919, 2919, 2919, 2919, 2919, 2919, 2919,
      2919, 2919, 2919, 2919, 2919, 2919, 2919, 2919, 2919, 2919,
      2919, 2919, 2919, 2919, 2919, 2919, 2919,    2,   14,  139,
         5,    3,  453,    2,  504,    2,    3,   26,  128,    2,
         2,    2,   87,    2,    2,   35,    3,  188,  199,   17,
       739,  943,  173, 2919, 2919, 2919, 2919, 2919, 2919, 2919,
      2919, 2919, 2919, 2919, 2919, 2919, 2919, 2919, 2919, 2919,
      2919, 2919, 2919, 2919, 2919, 2919, 2919, 2919, 2919, 2919,
      2919, 2919, 2919, 2919, 2919, 2919, 2919, 2919, 2919, 2919,
      2919, 2919, 2919, 2919, 2919, 2919, 2919, 2919, 2919, 2919,
      2919, 2919, 2919, 2919, 2919, 2919, 2919, 2919, 2919, 2919,
      2919, 2919, 2919, 2919, 2919, 2919, 2919, 2919, 2919, 2919,
      2919, 2919, 2919, 2919, 2919, 2919, 2919, 2919, 2919, 2919,
      2919, 2919, 2919, 2919, 2919, 2919, 2919, 2919, 2919, 2919,
      2919, 2919, 2919, 2919, 2919, 2919, 2919, 2919, 2919, 2919,
      2919, 2919, 2919, 2919, 2919, 2919, 2919, 2919, 2919, 2919,
      2919, 2919, 2919, 2919, 2919, 2919, 2919, 2919, 2919, 2919,
      2919, 2919, 2919, 2919, 2919, 2919, 2919, 2919, 2919, 2919,
      2919, 2919, 2919, 2919, 2919, 2919
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
    char stringpool_str3[sizeof("margin")];
    char stringpool_str4[sizeof("motion")];
    char stringpool_str5[sizeof("order")];
    char stringpool_str6[sizeof("rotate")];
    char stringpool_str7[sizeof("animation")];
    char stringpool_str8[sizeof("grid-area")];
    char stringpool_str9[sizeof("orientation")];
    char stringpool_str10[sizeof("bottom")];
    char stringpool_str11[sizeof("border")];
    char stringpool_str12[sizeof("animation-name")];
    char stringpool_str13[sizeof("motion-rotation")];
    char stringpool_str14[sizeof("grid-row")];
    char stringpool_str15[sizeof("image-rendering")];
    char stringpool_str16[sizeof("marker")];
    char stringpool_str17[sizeof("image-orientation")];
    char stringpool_str18[sizeof("margin-bottom")];
    char stringpool_str19[sizeof("border-image")];
    char stringpool_str20[sizeof("writing-mode")];
    char stringpool_str21[sizeof("grid-row-end")];
    char stringpool_str22[sizeof("marker-mid")];
    char stringpool_str23[sizeof("marker-end")];
    char stringpool_str24[sizeof("transition")];
    char stringpool_str25[sizeof("border-bottom")];
    char stringpool_str26[sizeof("mask")];
    char stringpool_str27[sizeof("stroke")];
    char stringpool_str28[sizeof("word-break")];
    char stringpool_str29[sizeof("widows")];
    char stringpool_str30[sizeof("grid-row-start")];
    char stringpool_str31[sizeof("-webkit-order")];
    char stringpool_str32[sizeof("marker-start")];
    char stringpool_str33[sizeof("-webkit-animation")];
    char stringpool_str34[sizeof("top")];
    char stringpool_str35[sizeof("-webkit-margin-end")];
    char stringpool_str36[sizeof("page")];
    char stringpool_str37[sizeof("-webkit-animation-name")];
    char stringpool_str38[sizeof("grid-gap")];
    char stringpool_str39[sizeof("padding")];
    char stringpool_str40[sizeof("margin-top")];
    char stringpool_str41[sizeof("-webkit-border-end")];
    char stringpool_str42[sizeof("-webkit-border-image")];
    char stringpool_str43[sizeof("paint-order")];
    char stringpool_str44[sizeof("-webkit-writing-mode")];
    char stringpool_str45[sizeof("border-top")];
    char stringpool_str46[sizeof("-webkit-transition")];
    char stringpool_str47[sizeof("grid-row-gap")];
    char stringpool_str48[sizeof("-webkit-margin-start")];
    char stringpool_str49[sizeof("padding-bottom")];
    char stringpool_str50[sizeof("-webkit-mask")];
    char stringpool_str51[sizeof("position")];
    char stringpool_str52[sizeof("word-wrap")];
    char stringpool_str53[sizeof("border-image-repeat")];
    char stringpool_str54[sizeof("-webkit-border-start")];
    char stringpool_str55[sizeof("-webkit-mask-image")];
    char stringpool_str56[sizeof("-webkit-mask-origin")];
    char stringpool_str57[sizeof("contain")];
    char stringpool_str58[sizeof("speak")];
    char stringpool_str59[sizeof("content")];
    char stringpool_str60[sizeof("direction")];
    char stringpool_str61[sizeof("src")];
    char stringpool_str62[sizeof("isolation")];
    char stringpool_str63[sizeof("zoom")];
    char stringpool_str64[sizeof("translate")];
    char stringpool_str65[sizeof("animation-direction")];
    char stringpool_str66[sizeof("align-items")];
    char stringpool_str67[sizeof("-webkit-padding-end")];
    char stringpool_str68[sizeof("min-zoom")];
    char stringpool_str69[sizeof("page-break-inside")];
    char stringpool_str70[sizeof("padding-top")];
    char stringpool_str71[sizeof("dominant-baseline")];
    char stringpool_str72[sizeof("size")];
    char stringpool_str73[sizeof("stroke-linejoin")];
    char stringpool_str74[sizeof("resize")];
    char stringpool_str75[sizeof("-webkit-padding-start")];
    char stringpool_str76[sizeof("stroke-miterlimit")];
    char stringpool_str77[sizeof("-webkit-rtl-ordering")];
    char stringpool_str78[sizeof("animation-duration")];
    char stringpool_str79[sizeof("quotes")];
    char stringpool_str80[sizeof("tab-size")];
    char stringpool_str81[sizeof("-webkit-mask-repeat")];
    char stringpool_str82[sizeof("grid-template")];
    char stringpool_str83[sizeof("-webkit-animation-direction")];
    char stringpool_str84[sizeof("-webkit-align-items")];
    char stringpool_str85[sizeof("-webkit-line-break")];
    char stringpool_str86[sizeof("all")];
    char stringpool_str87[sizeof("-webkit-app-region")];
    char stringpool_str88[sizeof("transition-duration")];
    char stringpool_str89[sizeof("border-radius")];
    char stringpool_str90[sizeof("grid-auto-rows")];
    char stringpool_str91[sizeof("-webkit-mask-position")];
    char stringpool_str92[sizeof("color")];
    char stringpool_str93[sizeof("clear")];
    char stringpool_str94[sizeof("border-image-outset")];
    char stringpool_str95[sizeof("caption-side")];
    char stringpool_str96[sizeof("grid-template-areas")];
    char stringpool_str97[sizeof("align-content")];
    char stringpool_str98[sizeof("-webkit-animation-duration")];
    char stringpool_str99[sizeof("word-spacing")];
    char stringpool_str100[sizeof("color-rendering")];
    char stringpool_str101[sizeof("border-spacing")];
    char stringpool_str102[sizeof("object-position")];
    char stringpool_str103[sizeof("grid-template-rows")];
    char stringpool_str104[sizeof("border-color")];
    char stringpool_str105[sizeof("scale")];
    char stringpool_str106[sizeof("-webkit-user-drag")];
    char stringpool_str107[sizeof("outline")];
    char stringpool_str108[sizeof("border-bottom-color")];
    char stringpool_str109[sizeof("-webkit-transition-duration")];
    char stringpool_str110[sizeof("-webkit-border-radius")];
    char stringpool_str111[sizeof("alignment-baseline")];
    char stringpool_str112[sizeof("-epub-writing-mode")];
    char stringpool_str113[sizeof("pointer-events")];
    char stringpool_str114[sizeof("-webkit-mask-size")];
    char stringpool_str115[sizeof("border-image-slice")];
    char stringpool_str116[sizeof("unicode-range")];
    char stringpool_str117[sizeof("clip")];
    char stringpool_str118[sizeof("-webkit-align-content")];
    char stringpool_str119[sizeof("unicode-bidi")];
    char stringpool_str120[sizeof("cursor")];
    char stringpool_str121[sizeof("-epub-word-break")];
    char stringpool_str122[sizeof("animation-iteration-count")];
    char stringpool_str123[sizeof("background")];
    char stringpool_str124[sizeof("-webkit-border-end-color")];
    char stringpool_str125[sizeof("counter-reset")];
    char stringpool_str126[sizeof("background-image")];
    char stringpool_str127[sizeof("background-origin")];
    char stringpool_str128[sizeof("border-top-color")];
    char stringpool_str129[sizeof("-webkit-appearance")];
    char stringpool_str130[sizeof("stop-color")];
    char stringpool_str131[sizeof("user-zoom")];
    char stringpool_str132[sizeof("-webkit-mask-composite")];
    char stringpool_str133[sizeof("border-image-source")];
    char stringpool_str134[sizeof("letter-spacing")];
    char stringpool_str135[sizeof("-webkit-border-start-color")];
    char stringpool_str136[sizeof("stroke-linecap")];
    char stringpool_str137[sizeof("-webkit-animation-iteration-count")];
    char stringpool_str138[sizeof("font")];
    char stringpool_str139[sizeof("-webkit-background-origin")];
    char stringpool_str140[sizeof("-webkit-locale")];
    char stringpool_str141[sizeof("grid-column")];
    char stringpool_str142[sizeof("background-repeat")];
    char stringpool_str143[sizeof("grid-column-end")];
    char stringpool_str144[sizeof("-webkit-mask-clip")];
    char stringpool_str145[sizeof("counter-increment")];
    char stringpool_str146[sizeof("font-kerning")];
    char stringpool_str147[sizeof("transform")];
    char stringpool_str148[sizeof("right")];
    char stringpool_str149[sizeof("color-interpolation")];
    char stringpool_str150[sizeof("transform-origin")];
    char stringpool_str151[sizeof("background-position")];
    char stringpool_str152[sizeof("grid-column-start")];
    char stringpool_str153[sizeof("margin-right")];
    char stringpool_str154[sizeof("width")];
    char stringpool_str155[sizeof("min-width")];
    char stringpool_str156[sizeof("border-right")];
    char stringpool_str157[sizeof("-webkit-margin-after")];
    char stringpool_str158[sizeof("background-blend-mode")];
    char stringpool_str159[sizeof("border-collapse")];
    char stringpool_str160[sizeof("-webkit-margin-before")];
    char stringpool_str161[sizeof("border-width")];
    char stringpool_str162[sizeof("-webkit-border-after")];
    char stringpool_str163[sizeof("perspective")];
    char stringpool_str164[sizeof("-webkit-line-clamp")];
    char stringpool_str165[sizeof("-webkit-columns")];
    char stringpool_str166[sizeof("grid-column-gap")];
    char stringpool_str167[sizeof("-webkit-transform")];
    char stringpool_str168[sizeof("border-image-width")];
    char stringpool_str169[sizeof("-webkit-border-before")];
    char stringpool_str170[sizeof("perspective-origin")];
    char stringpool_str171[sizeof("-epub-caption-side")];
    char stringpool_str172[sizeof("-webkit-transform-origin")];
    char stringpool_str173[sizeof("left")];
    char stringpool_str174[sizeof("float")];
    char stringpool_str175[sizeof("border-bottom-width")];
    char stringpool_str176[sizeof("filter")];
    char stringpool_str177[sizeof("background-size")];
    char stringpool_str178[sizeof("margin-left")];
    char stringpool_str179[sizeof("outline-color")];
    char stringpool_str180[sizeof("stroke-width")];
    char stringpool_str181[sizeof("-webkit-margin-collapse")];
    char stringpool_str182[sizeof("page-break-after")];
    char stringpool_str183[sizeof("-webkit-user-select")];
    char stringpool_str184[sizeof("motion-path")];
    char stringpool_str185[sizeof("vertical-align")];
    char stringpool_str186[sizeof("border-left")];
    char stringpool_str187[sizeof("padding-right")];
    char stringpool_str188[sizeof("page-break-before")];
    char stringpool_str189[sizeof("-webkit-column-gap")];
    char stringpool_str190[sizeof("object-fit")];
    char stringpool_str191[sizeof("scroll-snap-destination")];
    char stringpool_str192[sizeof("-webkit-column-break-inside")];
    char stringpool_str193[sizeof("-webkit-perspective")];
    char stringpool_str194[sizeof("orphans")];
    char stringpool_str195[sizeof("-webkit-margin-bottom-collapse")];
    char stringpool_str196[sizeof("-webkit-padding-after")];
    char stringpool_str197[sizeof("-webkit-border-end-width")];
    char stringpool_str198[sizeof("shape-margin")];
    char stringpool_str199[sizeof("-webkit-perspective-origin")];
    char stringpool_str200[sizeof("-webkit-padding-before")];
    char stringpool_str201[sizeof("border-top-width")];
    char stringpool_str202[sizeof("shape-rendering")];
    char stringpool_str203[sizeof("background-color")];
    char stringpool_str204[sizeof("-webkit-column-span")];
    char stringpool_str205[sizeof("-webkit-filter")];
    char stringpool_str206[sizeof("-webkit-background-size")];
    char stringpool_str207[sizeof("font-variant")];
    char stringpool_str208[sizeof("font-size")];
    char stringpool_str209[sizeof("-webkit-border-start-width")];
    char stringpool_str210[sizeof("-webkit-print-color-adjust")];
    char stringpool_str211[sizeof("clip-rule")];
    char stringpool_str212[sizeof("padding-left")];
    char stringpool_str213[sizeof("-webkit-margin-top-collapse")];
    char stringpool_str214[sizeof("grid-auto-columns")];
    char stringpool_str215[sizeof("fill")];
    char stringpool_str216[sizeof("-webkit-shape-margin")];
    char stringpool_str217[sizeof("scroll-snap-coordinate")];
    char stringpool_str218[sizeof("-webkit-background-composite")];
    char stringpool_str219[sizeof("x")];
    char stringpool_str220[sizeof("background-clip")];
    char stringpool_str221[sizeof("rx")];
    char stringpool_str222[sizeof("grid-template-columns")];
    char stringpool_str223[sizeof("animation-fill-mode")];
    char stringpool_str224[sizeof("align-self")];
    char stringpool_str225[sizeof("-webkit-transform-origin-z")];
    char stringpool_str226[sizeof("text-indent")];
    char stringpool_str227[sizeof("text-rendering")];
    char stringpool_str228[sizeof("text-orientation")];
    char stringpool_str229[sizeof("white-space")];
    char stringpool_str230[sizeof("overflow")];
    char stringpool_str231[sizeof("border-bottom-right-radius")];
    char stringpool_str232[sizeof("-webkit-background-clip")];
    char stringpool_str233[sizeof("grid-auto-flow")];
    char stringpool_str234[sizeof("-webkit-animation-fill-mode")];
    char stringpool_str235[sizeof("border-right-color")];
    char stringpool_str236[sizeof("-webkit-align-self")];
    char stringpool_str237[sizeof("animation-timing-function")];
    char stringpool_str238[sizeof("-webkit-border-after-color")];
    char stringpool_str239[sizeof("-webkit-box-orient")];
    char stringpool_str240[sizeof("-webkit-text-orientation")];
    char stringpool_str241[sizeof("-webkit-border-vertical-spacing")];
    char stringpool_str242[sizeof("-webkit-border-before-color")];
    char stringpool_str243[sizeof("-webkit-column-rule")];
    char stringpool_str244[sizeof("outline-width")];
    char stringpool_str245[sizeof("transition-timing-function")];
    char stringpool_str246[sizeof("flood-color")];
    char stringpool_str247[sizeof("-webkit-column-count")];
    char stringpool_str248[sizeof("backdrop-filter")];
    char stringpool_str249[sizeof("shape-outside")];
    char stringpool_str250[sizeof("border-top-right-radius")];
    char stringpool_str251[sizeof("-webkit-border-bottom-right-radius")];
    char stringpool_str252[sizeof("cx")];
    char stringpool_str253[sizeof("border-bottom-left-radius")];
    char stringpool_str254[sizeof("text-align")];
    char stringpool_str255[sizeof("-webkit-font-size-delta")];
    char stringpool_str256[sizeof("-webkit-text-stroke")];
    char stringpool_str257[sizeof("border-left-color")];
    char stringpool_str258[sizeof("-webkit-animation-timing-function")];
    char stringpool_str259[sizeof("-webkit-mask-box-image")];
    char stringpool_str260[sizeof("mix-blend-mode")];
    char stringpool_str261[sizeof("text-decoration")];
    char stringpool_str262[sizeof("font-size-adjust")];
    char stringpool_str263[sizeof("overflow-wrap")];
    char stringpool_str264[sizeof("lighting-color")];
    char stringpool_str265[sizeof("max-zoom")];
    char stringpool_str266[sizeof("z-index")];
    char stringpool_str267[sizeof("will-change")];
    char stringpool_str268[sizeof("-webkit-transition-timing-function")];
    char stringpool_str269[sizeof("-webkit-shape-outside")];
    char stringpool_str270[sizeof("-webkit-border-top-right-radius")];
    char stringpool_str271[sizeof("y")];
    char stringpool_str272[sizeof("ry")];
    char stringpool_str273[sizeof("border-top-left-radius")];
    char stringpool_str274[sizeof("-webkit-border-bottom-left-radius")];
    char stringpool_str275[sizeof("clip-path")];
    char stringpool_str276[sizeof("-webkit-box-align")];
    char stringpool_str277[sizeof("motion-offset")];
    char stringpool_str278[sizeof("box-sizing")];
    char stringpool_str279[sizeof("-webkit-mask-repeat-x")];
    char stringpool_str280[sizeof("-webkit-text-combine")];
    char stringpool_str281[sizeof("-webkit-box-direction")];
    char stringpool_str282[sizeof("touch-action")];
    char stringpool_str283[sizeof("font-weight")];
    char stringpool_str284[sizeof("-webkit-box-lines")];
    char stringpool_str285[sizeof("-webkit-logical-width")];
    char stringpool_str286[sizeof("-webkit-mask-box-image-repeat")];
    char stringpool_str287[sizeof("-webkit-mask-position-x")];
    char stringpool_str288[sizeof("-webkit-min-logical-width")];
    char stringpool_str289[sizeof("-webkit-border-top-left-radius")];
    char stringpool_str290[sizeof("height")];
    char stringpool_str291[sizeof("-webkit-clip-path")];
    char stringpool_str292[sizeof("min-height")];
    char stringpool_str293[sizeof("fill-rule")];
    char stringpool_str294[sizeof("-webkit-box-decoration-break")];
    char stringpool_str295[sizeof("font-variant-ligatures")];
    char stringpool_str296[sizeof("-webkit-box-sizing")];
    char stringpool_str297[sizeof("-webkit-column-break-after")];
    char stringpool_str298[sizeof("background-attachment")];
    char stringpool_str299[sizeof("text-decoration-line")];
    char stringpool_str300[sizeof("text-align-last")];
    char stringpool_str301[sizeof("-webkit-column-break-before")];
    char stringpool_str302[sizeof("-webkit-column-width")];
    char stringpool_str303[sizeof("-epub-text-orientation")];
    char stringpool_str304[sizeof("-webkit-margin-after-collapse")];
    char stringpool_str305[sizeof("border-right-width")];
    char stringpool_str306[sizeof("-webkit-box-pack")];
    char stringpool_str307[sizeof("cy")];
    char stringpool_str308[sizeof("-webkit-font-smoothing")];
    char stringpool_str309[sizeof("-webkit-margin-before-collapse")];
    char stringpool_str310[sizeof("-webkit-border-after-width")];
    char stringpool_str311[sizeof("animation-delay")];
    char stringpool_str312[sizeof("mask-type")];
    char stringpool_str313[sizeof("-webkit-border-before-width")];
    char stringpool_str314[sizeof("-webkit-column-rule-color")];
    char stringpool_str315[sizeof("transition-delay")];
    char stringpool_str316[sizeof("-webkit-mask-box-image-outset")];
    char stringpool_str317[sizeof("border-style")];
    char stringpool_str318[sizeof("color-interpolation-filters")];
    char stringpool_str319[sizeof("buffered-rendering")];
    char stringpool_str320[sizeof("border-left-width")];
    char stringpool_str321[sizeof("font-stretch")];
    char stringpool_str322[sizeof("line-height")];
    char stringpool_str323[sizeof("scroll-behavior")];
    char stringpool_str324[sizeof("-webkit-text-stroke-color")];
    char stringpool_str325[sizeof("border-bottom-style")];
    char stringpool_str326[sizeof("-webkit-animation-delay")];
    char stringpool_str327[sizeof("column-fill")];
    char stringpool_str328[sizeof("opacity")];
    char stringpool_str329[sizeof("-webkit-mask-repeat-y")];
    char stringpool_str330[sizeof("transition-property")];
    char stringpool_str331[sizeof("text-decoration-color")];
    char stringpool_str332[sizeof("baseline-shift")];
    char stringpool_str333[sizeof("-webkit-border-horizontal-spacing")];
    char stringpool_str334[sizeof("display")];
    char stringpool_str335[sizeof("font-feature-settings")];
    char stringpool_str336[sizeof("-webkit-transition-delay")];
    char stringpool_str337[sizeof("-epub-text-combine")];
    char stringpool_str338[sizeof("-webkit-mask-box-image-slice")];
    char stringpool_str339[sizeof("-webkit-mask-position-y")];
    char stringpool_str340[sizeof("text-underline-position")];
    char stringpool_str341[sizeof("-webkit-border-end-style")];
    char stringpool_str342[sizeof("background-repeat-x")];
    char stringpool_str343[sizeof("animation-play-state")];
    char stringpool_str344[sizeof("border-top-style")];
    char stringpool_str345[sizeof("-webkit-opacity")];
    char stringpool_str346[sizeof("stroke-opacity")];
    char stringpool_str347[sizeof("-webkit-box-ordinal-group")];
    char stringpool_str348[sizeof("text-transform")];
    char stringpool_str349[sizeof("-webkit-transition-property")];
    char stringpool_str350[sizeof("-webkit-border-start-style")];
    char stringpool_str351[sizeof("background-position-x")];
    char stringpool_str352[sizeof("-webkit-font-feature-settings")];
    char stringpool_str353[sizeof("-webkit-mask-box-image-source")];
    char stringpool_str354[sizeof("max-width")];
    char stringpool_str355[sizeof("outline-offset")];
    char stringpool_str356[sizeof("list-style")];
    char stringpool_str357[sizeof("list-style-image")];
    char stringpool_str358[sizeof("-webkit-animation-play-state")];
    char stringpool_str359[sizeof("stop-opacity")];
    char stringpool_str360[sizeof("text-shadow")];
    char stringpool_str361[sizeof("box-shadow")];
    char stringpool_str362[sizeof("flex")];
    char stringpool_str363[sizeof("-webkit-transform-origin-x")];
    char stringpool_str364[sizeof("visibility")];
    char stringpool_str365[sizeof("flex-grow")];
    char stringpool_str366[sizeof("-webkit-ruby-position")];
    char stringpool_str367[sizeof("-webkit-column-rule-width")];
    char stringpool_str368[sizeof("-webkit-perspective-origin-x")];
    char stringpool_str369[sizeof("-webkit-box-shadow")];
    char stringpool_str370[sizeof("-webkit-flex")];
    char stringpool_str371[sizeof("text-anchor")];
    char stringpool_str372[sizeof("vector-effect")];
    char stringpool_str373[sizeof("flex-basis")];
    char stringpool_str374[sizeof("-webkit-flex-grow")];
    char stringpool_str375[sizeof("table-layout")];
    char stringpool_str376[sizeof("list-style-position")];
    char stringpool_str377[sizeof("-webkit-text-stroke-width")];
    char stringpool_str378[sizeof("background-repeat-y")];
    char stringpool_str379[sizeof("flex-wrap")];
    char stringpool_str380[sizeof("scroll-snap-points-x")];
    char stringpool_str381[sizeof("-webkit-mask-box-image-width")];
    char stringpool_str382[sizeof("outline-style")];
    char stringpool_str383[sizeof("background-position-y")];
    char stringpool_str384[sizeof("empty-cells")];
    char stringpool_str385[sizeof("mask-source-type")];
    char stringpool_str386[sizeof("-webkit-flex-basis")];
    char stringpool_str387[sizeof("flex-direction")];
    char stringpool_str388[sizeof("-webkit-text-emphasis")];
    char stringpool_str389[sizeof("-webkit-logical-height")];
    char stringpool_str390[sizeof("-webkit-min-logical-height")];
    char stringpool_str391[sizeof("-webkit-flex-wrap")];
    char stringpool_str392[sizeof("-webkit-transform-origin-y")];
    char stringpool_str393[sizeof("overflow-x")];
    char stringpool_str394[sizeof("-epub-text-transform")];
    char stringpool_str395[sizeof("-webkit-flex-direction")];
    char stringpool_str396[sizeof("text-overflow")];
    char stringpool_str397[sizeof("-webkit-box-reflect")];
    char stringpool_str398[sizeof("stroke-dashoffset")];
    char stringpool_str399[sizeof("stroke-dasharray")];
    char stringpool_str400[sizeof("font-style")];
    char stringpool_str401[sizeof("-webkit-perspective-origin-y")];
    char stringpool_str402[sizeof("scroll-snap-type")];
    char stringpool_str403[sizeof("transform-style")];
    char stringpool_str404[sizeof("-webkit-text-emphasis-position")];
    char stringpool_str405[sizeof("scroll-snap-points-y")];
    char stringpool_str406[sizeof("border-right-style")];
    char stringpool_str407[sizeof("font-display")];
    char stringpool_str408[sizeof("justify-items")];
    char stringpool_str409[sizeof("-webkit-border-after-style")];
    char stringpool_str410[sizeof("-webkit-transform-style")];
    char stringpool_str411[sizeof("-webkit-border-before-style")];
    char stringpool_str412[sizeof("text-combine-upright")];
    char stringpool_str413[sizeof("-webkit-user-modify")];
    char stringpool_str414[sizeof("-epub-text-emphasis")];
    char stringpool_str415[sizeof("-webkit-highlight")];
    char stringpool_str416[sizeof("border-left-style")];
    char stringpool_str417[sizeof("-webkit-max-logical-width")];
    char stringpool_str418[sizeof("overflow-y")];
    char stringpool_str419[sizeof("max-height")];
    char stringpool_str420[sizeof("-webkit-text-emphasis-color")];
    char stringpool_str421[sizeof("flood-opacity")];
    char stringpool_str422[sizeof("justify-content")];
    char stringpool_str423[sizeof("-webkit-text-fill-color")];
    char stringpool_str424[sizeof("shape-image-threshold")];
    char stringpool_str425[sizeof("-webkit-justify-content")];
    char stringpool_str426[sizeof("fill-opacity")];
    char stringpool_str427[sizeof("flex-shrink")];
    char stringpool_str428[sizeof("-webkit-shape-image-threshold")];
    char stringpool_str429[sizeof("flex-flow")];
    char stringpool_str430[sizeof("-webkit-flex-shrink")];
    char stringpool_str431[sizeof("-webkit-column-rule-style")];
    char stringpool_str432[sizeof("-epub-text-emphasis-color")];
    char stringpool_str433[sizeof("font-family")];
    char stringpool_str434[sizeof("-webkit-flex-flow")];
    char stringpool_str435[sizeof("text-decoration-style")];
    char stringpool_str436[sizeof("-webkit-text-decorations-in-effect")];
    char stringpool_str437[sizeof("-webkit-tap-highlight-color")];
    char stringpool_str438[sizeof("backface-visibility")];
    char stringpool_str439[sizeof("-webkit-text-security")];
    char stringpool_str440[sizeof("-webkit-box-flex")];
    char stringpool_str441[sizeof("-webkit-backface-visibility")];
    char stringpool_str442[sizeof("-webkit-max-logical-height")];
    char stringpool_str443[sizeof("justify-self")];
    char stringpool_str444[sizeof("list-style-type")];
    char stringpool_str445[sizeof("text-justify")];
    char stringpool_str446[sizeof("-webkit-box-flex-group")];
    char stringpool_str447[sizeof("-webkit-text-emphasis-style")];
    char stringpool_str448[sizeof("-epub-text-emphasis-style")];
    char stringpool_str449[sizeof("-webkit-hyphenate-character")];
  };
static const struct stringpool_t stringpool_contents =
  {
    "r",
    "d",
    "grid",
    "margin",
    "motion",
    "order",
    "rotate",
    "animation",
    "grid-area",
    "orientation",
    "bottom",
    "border",
    "animation-name",
    "motion-rotation",
    "grid-row",
    "image-rendering",
    "marker",
    "image-orientation",
    "margin-bottom",
    "border-image",
    "writing-mode",
    "grid-row-end",
    "marker-mid",
    "marker-end",
    "transition",
    "border-bottom",
    "mask",
    "stroke",
    "word-break",
    "widows",
    "grid-row-start",
    "-webkit-order",
    "marker-start",
    "-webkit-animation",
    "top",
    "-webkit-margin-end",
    "page",
    "-webkit-animation-name",
    "grid-gap",
    "padding",
    "margin-top",
    "-webkit-border-end",
    "-webkit-border-image",
    "paint-order",
    "-webkit-writing-mode",
    "border-top",
    "-webkit-transition",
    "grid-row-gap",
    "-webkit-margin-start",
    "padding-bottom",
    "-webkit-mask",
    "position",
    "word-wrap",
    "border-image-repeat",
    "-webkit-border-start",
    "-webkit-mask-image",
    "-webkit-mask-origin",
    "contain",
    "speak",
    "content",
    "direction",
    "src",
    "isolation",
    "zoom",
    "translate",
    "animation-direction",
    "align-items",
    "-webkit-padding-end",
    "min-zoom",
    "page-break-inside",
    "padding-top",
    "dominant-baseline",
    "size",
    "stroke-linejoin",
    "resize",
    "-webkit-padding-start",
    "stroke-miterlimit",
    "-webkit-rtl-ordering",
    "animation-duration",
    "quotes",
    "tab-size",
    "-webkit-mask-repeat",
    "grid-template",
    "-webkit-animation-direction",
    "-webkit-align-items",
    "-webkit-line-break",
    "all",
    "-webkit-app-region",
    "transition-duration",
    "border-radius",
    "grid-auto-rows",
    "-webkit-mask-position",
    "color",
    "clear",
    "border-image-outset",
    "caption-side",
    "grid-template-areas",
    "align-content",
    "-webkit-animation-duration",
    "word-spacing",
    "color-rendering",
    "border-spacing",
    "object-position",
    "grid-template-rows",
    "border-color",
    "scale",
    "-webkit-user-drag",
    "outline",
    "border-bottom-color",
    "-webkit-transition-duration",
    "-webkit-border-radius",
    "alignment-baseline",
    "-epub-writing-mode",
    "pointer-events",
    "-webkit-mask-size",
    "border-image-slice",
    "unicode-range",
    "clip",
    "-webkit-align-content",
    "unicode-bidi",
    "cursor",
    "-epub-word-break",
    "animation-iteration-count",
    "background",
    "-webkit-border-end-color",
    "counter-reset",
    "background-image",
    "background-origin",
    "border-top-color",
    "-webkit-appearance",
    "stop-color",
    "user-zoom",
    "-webkit-mask-composite",
    "border-image-source",
    "letter-spacing",
    "-webkit-border-start-color",
    "stroke-linecap",
    "-webkit-animation-iteration-count",
    "font",
    "-webkit-background-origin",
    "-webkit-locale",
    "grid-column",
    "background-repeat",
    "grid-column-end",
    "-webkit-mask-clip",
    "counter-increment",
    "font-kerning",
    "transform",
    "right",
    "color-interpolation",
    "transform-origin",
    "background-position",
    "grid-column-start",
    "margin-right",
    "width",
    "min-width",
    "border-right",
    "-webkit-margin-after",
    "background-blend-mode",
    "border-collapse",
    "-webkit-margin-before",
    "border-width",
    "-webkit-border-after",
    "perspective",
    "-webkit-line-clamp",
    "-webkit-columns",
    "grid-column-gap",
    "-webkit-transform",
    "border-image-width",
    "-webkit-border-before",
    "perspective-origin",
    "-epub-caption-side",
    "-webkit-transform-origin",
    "left",
    "float",
    "border-bottom-width",
    "filter",
    "background-size",
    "margin-left",
    "outline-color",
    "stroke-width",
    "-webkit-margin-collapse",
    "page-break-after",
    "-webkit-user-select",
    "motion-path",
    "vertical-align",
    "border-left",
    "padding-right",
    "page-break-before",
    "-webkit-column-gap",
    "object-fit",
    "scroll-snap-destination",
    "-webkit-column-break-inside",
    "-webkit-perspective",
    "orphans",
    "-webkit-margin-bottom-collapse",
    "-webkit-padding-after",
    "-webkit-border-end-width",
    "shape-margin",
    "-webkit-perspective-origin",
    "-webkit-padding-before",
    "border-top-width",
    "shape-rendering",
    "background-color",
    "-webkit-column-span",
    "-webkit-filter",
    "-webkit-background-size",
    "font-variant",
    "font-size",
    "-webkit-border-start-width",
    "-webkit-print-color-adjust",
    "clip-rule",
    "padding-left",
    "-webkit-margin-top-collapse",
    "grid-auto-columns",
    "fill",
    "-webkit-shape-margin",
    "scroll-snap-coordinate",
    "-webkit-background-composite",
    "x",
    "background-clip",
    "rx",
    "grid-template-columns",
    "animation-fill-mode",
    "align-self",
    "-webkit-transform-origin-z",
    "text-indent",
    "text-rendering",
    "text-orientation",
    "white-space",
    "overflow",
    "border-bottom-right-radius",
    "-webkit-background-clip",
    "grid-auto-flow",
    "-webkit-animation-fill-mode",
    "border-right-color",
    "-webkit-align-self",
    "animation-timing-function",
    "-webkit-border-after-color",
    "-webkit-box-orient",
    "-webkit-text-orientation",
    "-webkit-border-vertical-spacing",
    "-webkit-border-before-color",
    "-webkit-column-rule",
    "outline-width",
    "transition-timing-function",
    "flood-color",
    "-webkit-column-count",
    "backdrop-filter",
    "shape-outside",
    "border-top-right-radius",
    "-webkit-border-bottom-right-radius",
    "cx",
    "border-bottom-left-radius",
    "text-align",
    "-webkit-font-size-delta",
    "-webkit-text-stroke",
    "border-left-color",
    "-webkit-animation-timing-function",
    "-webkit-mask-box-image",
    "mix-blend-mode",
    "text-decoration",
    "font-size-adjust",
    "overflow-wrap",
    "lighting-color",
    "max-zoom",
    "z-index",
    "will-change",
    "-webkit-transition-timing-function",
    "-webkit-shape-outside",
    "-webkit-border-top-right-radius",
    "y",
    "ry",
    "border-top-left-radius",
    "-webkit-border-bottom-left-radius",
    "clip-path",
    "-webkit-box-align",
    "motion-offset",
    "box-sizing",
    "-webkit-mask-repeat-x",
    "-webkit-text-combine",
    "-webkit-box-direction",
    "touch-action",
    "font-weight",
    "-webkit-box-lines",
    "-webkit-logical-width",
    "-webkit-mask-box-image-repeat",
    "-webkit-mask-position-x",
    "-webkit-min-logical-width",
    "-webkit-border-top-left-radius",
    "height",
    "-webkit-clip-path",
    "min-height",
    "fill-rule",
    "-webkit-box-decoration-break",
    "font-variant-ligatures",
    "-webkit-box-sizing",
    "-webkit-column-break-after",
    "background-attachment",
    "text-decoration-line",
    "text-align-last",
    "-webkit-column-break-before",
    "-webkit-column-width",
    "-epub-text-orientation",
    "-webkit-margin-after-collapse",
    "border-right-width",
    "-webkit-box-pack",
    "cy",
    "-webkit-font-smoothing",
    "-webkit-margin-before-collapse",
    "-webkit-border-after-width",
    "animation-delay",
    "mask-type",
    "-webkit-border-before-width",
    "-webkit-column-rule-color",
    "transition-delay",
    "-webkit-mask-box-image-outset",
    "border-style",
    "color-interpolation-filters",
    "buffered-rendering",
    "border-left-width",
    "font-stretch",
    "line-height",
    "scroll-behavior",
    "-webkit-text-stroke-color",
    "border-bottom-style",
    "-webkit-animation-delay",
    "column-fill",
    "opacity",
    "-webkit-mask-repeat-y",
    "transition-property",
    "text-decoration-color",
    "baseline-shift",
    "-webkit-border-horizontal-spacing",
    "display",
    "font-feature-settings",
    "-webkit-transition-delay",
    "-epub-text-combine",
    "-webkit-mask-box-image-slice",
    "-webkit-mask-position-y",
    "text-underline-position",
    "-webkit-border-end-style",
    "background-repeat-x",
    "animation-play-state",
    "border-top-style",
    "-webkit-opacity",
    "stroke-opacity",
    "-webkit-box-ordinal-group",
    "text-transform",
    "-webkit-transition-property",
    "-webkit-border-start-style",
    "background-position-x",
    "-webkit-font-feature-settings",
    "-webkit-mask-box-image-source",
    "max-width",
    "outline-offset",
    "list-style",
    "list-style-image",
    "-webkit-animation-play-state",
    "stop-opacity",
    "text-shadow",
    "box-shadow",
    "flex",
    "-webkit-transform-origin-x",
    "visibility",
    "flex-grow",
    "-webkit-ruby-position",
    "-webkit-column-rule-width",
    "-webkit-perspective-origin-x",
    "-webkit-box-shadow",
    "-webkit-flex",
    "text-anchor",
    "vector-effect",
    "flex-basis",
    "-webkit-flex-grow",
    "table-layout",
    "list-style-position",
    "-webkit-text-stroke-width",
    "background-repeat-y",
    "flex-wrap",
    "scroll-snap-points-x",
    "-webkit-mask-box-image-width",
    "outline-style",
    "background-position-y",
    "empty-cells",
    "mask-source-type",
    "-webkit-flex-basis",
    "flex-direction",
    "-webkit-text-emphasis",
    "-webkit-logical-height",
    "-webkit-min-logical-height",
    "-webkit-flex-wrap",
    "-webkit-transform-origin-y",
    "overflow-x",
    "-epub-text-transform",
    "-webkit-flex-direction",
    "text-overflow",
    "-webkit-box-reflect",
    "stroke-dashoffset",
    "stroke-dasharray",
    "font-style",
    "-webkit-perspective-origin-y",
    "scroll-snap-type",
    "transform-style",
    "-webkit-text-emphasis-position",
    "scroll-snap-points-y",
    "border-right-style",
    "font-display",
    "justify-items",
    "-webkit-border-after-style",
    "-webkit-transform-style",
    "-webkit-border-before-style",
    "text-combine-upright",
    "-webkit-user-modify",
    "-epub-text-emphasis",
    "-webkit-highlight",
    "border-left-style",
    "-webkit-max-logical-width",
    "overflow-y",
    "max-height",
    "-webkit-text-emphasis-color",
    "flood-opacity",
    "justify-content",
    "-webkit-text-fill-color",
    "shape-image-threshold",
    "-webkit-justify-content",
    "fill-opacity",
    "flex-shrink",
    "-webkit-shape-image-threshold",
    "flex-flow",
    "-webkit-flex-shrink",
    "-webkit-column-rule-style",
    "-epub-text-emphasis-color",
    "font-family",
    "-webkit-flex-flow",
    "text-decoration-style",
    "-webkit-text-decorations-in-effect",
    "-webkit-tap-highlight-color",
    "backface-visibility",
    "-webkit-text-security",
    "-webkit-box-flex",
    "-webkit-backface-visibility",
    "-webkit-max-logical-height",
    "justify-self",
    "list-style-type",
    "text-justify",
    "-webkit-box-flex-group",
    "-webkit-text-emphasis-style",
    "-epub-text-emphasis-style",
    "-webkit-hyphenate-character"
  };
#define stringpool ((const char *) &stringpool_contents)

static const struct Property property_word_list[] =
  {
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str0, CSSPropertyR},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str1, CSSPropertyD},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str2, CSSPropertyGrid},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str3, CSSPropertyMargin},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str4, CSSPropertyMotion},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str5, CSSPropertyOrder},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str6, CSSPropertyRotate},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str7, CSSPropertyAnimation},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str8, CSSPropertyGridArea},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str9, CSSPropertyOrientation},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str10, CSSPropertyBottom},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str11, CSSPropertyBorder},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str12, CSSPropertyAnimationName},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str13, CSSPropertyMotionRotation},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str14, CSSPropertyGridRow},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str15, CSSPropertyImageRendering},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str16, CSSPropertyMarker},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str17, CSSPropertyImageOrientation},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str18, CSSPropertyMarginBottom},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str19, CSSPropertyBorderImage},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str20, CSSPropertyWritingMode},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str21, CSSPropertyGridRowEnd},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str22, CSSPropertyMarkerMid},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str23, CSSPropertyMarkerEnd},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str24, CSSPropertyTransition},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str25, CSSPropertyBorderBottom},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str26, CSSPropertyMask},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str27, CSSPropertyStroke},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str28, CSSPropertyWordBreak},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str29, CSSPropertyWidows},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str30, CSSPropertyGridRowStart},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str31, CSSPropertyAliasWebkitOrder},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str32, CSSPropertyMarkerStart},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str33, CSSPropertyAliasWebkitAnimation},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str34, CSSPropertyTop},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str35, CSSPropertyWebkitMarginEnd},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str36, CSSPropertyPage},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str37, CSSPropertyAliasWebkitAnimationName},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str38, CSSPropertyGridGap},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str39, CSSPropertyPadding},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str40, CSSPropertyMarginTop},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str41, CSSPropertyWebkitBorderEnd},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str42, CSSPropertyWebkitBorderImage},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str43, CSSPropertyPaintOrder},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str44, CSSPropertyWebkitWritingMode},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str45, CSSPropertyBorderTop},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str46, CSSPropertyAliasWebkitTransition},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str47, CSSPropertyGridRowGap},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str48, CSSPropertyWebkitMarginStart},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str49, CSSPropertyPaddingBottom},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str50, CSSPropertyWebkitMask},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str51, CSSPropertyPosition},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str52, CSSPropertyWordWrap},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str53, CSSPropertyBorderImageRepeat},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str54, CSSPropertyWebkitBorderStart},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str55, CSSPropertyWebkitMaskImage},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str56, CSSPropertyWebkitMaskOrigin},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str57, CSSPropertyContain},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str58, CSSPropertySpeak},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str59, CSSPropertyContent},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str60, CSSPropertyDirection},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str61, CSSPropertySrc},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str62, CSSPropertyIsolation},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str63, CSSPropertyZoom},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str64, CSSPropertyTranslate},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str65, CSSPropertyAnimationDirection},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str66, CSSPropertyAlignItems},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str67, CSSPropertyWebkitPaddingEnd},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str68, CSSPropertyMinZoom},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str69, CSSPropertyPageBreakInside},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str70, CSSPropertyPaddingTop},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str71, CSSPropertyDominantBaseline},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str72, CSSPropertySize},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str73, CSSPropertyStrokeLinejoin},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str74, CSSPropertyResize},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str75, CSSPropertyWebkitPaddingStart},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str76, CSSPropertyStrokeMiterlimit},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str77, CSSPropertyWebkitRtlOrdering},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str78, CSSPropertyAnimationDuration},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str79, CSSPropertyQuotes},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str80, CSSPropertyTabSize},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str81, CSSPropertyWebkitMaskRepeat},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str82, CSSPropertyGridTemplate},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str83, CSSPropertyAliasWebkitAnimationDirection},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str84, CSSPropertyAliasWebkitAlignItems},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str85, CSSPropertyWebkitLineBreak},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str86, CSSPropertyAll},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str87, CSSPropertyWebkitAppRegion},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str88, CSSPropertyTransitionDuration},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str89, CSSPropertyBorderRadius},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str90, CSSPropertyGridAutoRows},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str91, CSSPropertyWebkitMaskPosition},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str92, CSSPropertyColor},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str93, CSSPropertyClear},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str94, CSSPropertyBorderImageOutset},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str95, CSSPropertyCaptionSide},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str96, CSSPropertyGridTemplateAreas},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str97, CSSPropertyAlignContent},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str98, CSSPropertyAliasWebkitAnimationDuration},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str99, CSSPropertyWordSpacing},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str100, CSSPropertyColorRendering},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str101, CSSPropertyBorderSpacing},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str102, CSSPropertyObjectPosition},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str103, CSSPropertyGridTemplateRows},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str104, CSSPropertyBorderColor},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str105, CSSPropertyScale},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str106, CSSPropertyWebkitUserDrag},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str107, CSSPropertyOutline},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str108, CSSPropertyBorderBottomColor},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str109, CSSPropertyAliasWebkitTransitionDuration},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str110, CSSPropertyAliasWebkitBorderRadius},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str111, CSSPropertyAlignmentBaseline},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str112, CSSPropertyAliasEpubWritingMode},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str113, CSSPropertyPointerEvents},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str114, CSSPropertyWebkitMaskSize},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str115, CSSPropertyBorderImageSlice},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str116, CSSPropertyUnicodeRange},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str117, CSSPropertyClip},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str118, CSSPropertyAliasWebkitAlignContent},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str119, CSSPropertyUnicodeBidi},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str120, CSSPropertyCursor},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str121, CSSPropertyAliasEpubWordBreak},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str122, CSSPropertyAnimationIterationCount},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str123, CSSPropertyBackground},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str124, CSSPropertyWebkitBorderEndColor},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str125, CSSPropertyCounterReset},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str126, CSSPropertyBackgroundImage},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str127, CSSPropertyBackgroundOrigin},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str128, CSSPropertyBorderTopColor},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str129, CSSPropertyWebkitAppearance},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str130, CSSPropertyStopColor},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str131, CSSPropertyUserZoom},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str132, CSSPropertyWebkitMaskComposite},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str133, CSSPropertyBorderImageSource},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str134, CSSPropertyLetterSpacing},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str135, CSSPropertyWebkitBorderStartColor},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str136, CSSPropertyStrokeLinecap},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str137, CSSPropertyAliasWebkitAnimationIterationCount},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str138, CSSPropertyFont},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str139, CSSPropertyWebkitBackgroundOrigin},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str140, CSSPropertyWebkitLocale},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str141, CSSPropertyGridColumn},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str142, CSSPropertyBackgroundRepeat},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str143, CSSPropertyGridColumnEnd},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str144, CSSPropertyWebkitMaskClip},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str145, CSSPropertyCounterIncrement},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str146, CSSPropertyFontKerning},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str147, CSSPropertyTransform},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str148, CSSPropertyRight},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str149, CSSPropertyColorInterpolation},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str150, CSSPropertyTransformOrigin},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str151, CSSPropertyBackgroundPosition},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str152, CSSPropertyGridColumnStart},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str153, CSSPropertyMarginRight},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str154, CSSPropertyWidth},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str155, CSSPropertyMinWidth},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str156, CSSPropertyBorderRight},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str157, CSSPropertyWebkitMarginAfter},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str158, CSSPropertyBackgroundBlendMode},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str159, CSSPropertyBorderCollapse},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str160, CSSPropertyWebkitMarginBefore},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str161, CSSPropertyBorderWidth},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str162, CSSPropertyWebkitBorderAfter},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str163, CSSPropertyPerspective},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str164, CSSPropertyWebkitLineClamp},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str165, CSSPropertyWebkitColumns},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str166, CSSPropertyGridColumnGap},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str167, CSSPropertyAliasWebkitTransform},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str168, CSSPropertyBorderImageWidth},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str169, CSSPropertyWebkitBorderBefore},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str170, CSSPropertyPerspectiveOrigin},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str171, CSSPropertyAliasEpubCaptionSide},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str172, CSSPropertyAliasWebkitTransformOrigin},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str173, CSSPropertyLeft},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str174, CSSPropertyFloat},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str175, CSSPropertyBorderBottomWidth},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str176, CSSPropertyFilter},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str177, CSSPropertyBackgroundSize},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str178, CSSPropertyMarginLeft},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str179, CSSPropertyOutlineColor},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str180, CSSPropertyStrokeWidth},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str181, CSSPropertyWebkitMarginCollapse},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str182, CSSPropertyPageBreakAfter},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str183, CSSPropertyWebkitUserSelect},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str184, CSSPropertyMotionPath},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str185, CSSPropertyVerticalAlign},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str186, CSSPropertyBorderLeft},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str187, CSSPropertyPaddingRight},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str188, CSSPropertyPageBreakBefore},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str189, CSSPropertyWebkitColumnGap},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str190, CSSPropertyObjectFit},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str191, CSSPropertyScrollSnapDestination},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str192, CSSPropertyWebkitColumnBreakInside},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str193, CSSPropertyAliasWebkitPerspective},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str194, CSSPropertyOrphans},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str195, CSSPropertyWebkitMarginBottomCollapse},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str196, CSSPropertyWebkitPaddingAfter},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str197, CSSPropertyWebkitBorderEndWidth},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str198, CSSPropertyShapeMargin},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str199, CSSPropertyAliasWebkitPerspectiveOrigin},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str200, CSSPropertyWebkitPaddingBefore},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str201, CSSPropertyBorderTopWidth},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str202, CSSPropertyShapeRendering},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str203, CSSPropertyBackgroundColor},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str204, CSSPropertyWebkitColumnSpan},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str205, CSSPropertyWebkitFilter},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str206, CSSPropertyAliasWebkitBackgroundSize},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str207, CSSPropertyFontVariant},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str208, CSSPropertyFontSize},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str209, CSSPropertyWebkitBorderStartWidth},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str210, CSSPropertyWebkitPrintColorAdjust},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str211, CSSPropertyClipRule},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str212, CSSPropertyPaddingLeft},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str213, CSSPropertyWebkitMarginTopCollapse},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str214, CSSPropertyGridAutoColumns},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str215, CSSPropertyFill},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str216, CSSPropertyAliasWebkitShapeMargin},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str217, CSSPropertyScrollSnapCoordinate},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str218, CSSPropertyWebkitBackgroundComposite},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str219, CSSPropertyX},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str220, CSSPropertyBackgroundClip},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str221, CSSPropertyRx},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str222, CSSPropertyGridTemplateColumns},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str223, CSSPropertyAnimationFillMode},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str224, CSSPropertyAlignSelf},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str225, CSSPropertyWebkitTransformOriginZ},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str226, CSSPropertyTextIndent},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str227, CSSPropertyTextRendering},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str228, CSSPropertyTextOrientation},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str229, CSSPropertyWhiteSpace},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str230, CSSPropertyOverflow},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str231, CSSPropertyBorderBottomRightRadius},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str232, CSSPropertyWebkitBackgroundClip},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str233, CSSPropertyGridAutoFlow},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str234, CSSPropertyAliasWebkitAnimationFillMode},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str235, CSSPropertyBorderRightColor},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str236, CSSPropertyAliasWebkitAlignSelf},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str237, CSSPropertyAnimationTimingFunction},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str238, CSSPropertyWebkitBorderAfterColor},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str239, CSSPropertyWebkitBoxOrient},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str240, CSSPropertyWebkitTextOrientation},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str241, CSSPropertyWebkitBorderVerticalSpacing},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str242, CSSPropertyWebkitBorderBeforeColor},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str243, CSSPropertyWebkitColumnRule},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str244, CSSPropertyOutlineWidth},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str245, CSSPropertyTransitionTimingFunction},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str246, CSSPropertyFloodColor},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str247, CSSPropertyWebkitColumnCount},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str248, CSSPropertyBackdropFilter},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str249, CSSPropertyShapeOutside},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str250, CSSPropertyBorderTopRightRadius},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str251, CSSPropertyAliasWebkitBorderBottomRightRadius},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str252, CSSPropertyCx},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str253, CSSPropertyBorderBottomLeftRadius},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str254, CSSPropertyTextAlign},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str255, CSSPropertyWebkitFontSizeDelta},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str256, CSSPropertyWebkitTextStroke},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str257, CSSPropertyBorderLeftColor},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str258, CSSPropertyAliasWebkitAnimationTimingFunction},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str259, CSSPropertyWebkitMaskBoxImage},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str260, CSSPropertyMixBlendMode},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str261, CSSPropertyTextDecoration},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str262, CSSPropertyFontSizeAdjust},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str263, CSSPropertyOverflowWrap},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str264, CSSPropertyLightingColor},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str265, CSSPropertyMaxZoom},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str266, CSSPropertyZIndex},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str267, CSSPropertyWillChange},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str268, CSSPropertyAliasWebkitTransitionTimingFunction},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str269, CSSPropertyAliasWebkitShapeOutside},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str270, CSSPropertyAliasWebkitBorderTopRightRadius},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str271, CSSPropertyY},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str272, CSSPropertyRy},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str273, CSSPropertyBorderTopLeftRadius},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str274, CSSPropertyAliasWebkitBorderBottomLeftRadius},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str275, CSSPropertyClipPath},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str276, CSSPropertyWebkitBoxAlign},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str277, CSSPropertyMotionOffset},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str278, CSSPropertyBoxSizing},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str279, CSSPropertyWebkitMaskRepeatX},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str280, CSSPropertyWebkitTextCombine},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str281, CSSPropertyWebkitBoxDirection},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str282, CSSPropertyTouchAction},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str283, CSSPropertyFontWeight},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str284, CSSPropertyWebkitBoxLines},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str285, CSSPropertyWebkitLogicalWidth},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str286, CSSPropertyWebkitMaskBoxImageRepeat},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str287, CSSPropertyWebkitMaskPositionX},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str288, CSSPropertyWebkitMinLogicalWidth},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str289, CSSPropertyAliasWebkitBorderTopLeftRadius},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str290, CSSPropertyHeight},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str291, CSSPropertyWebkitClipPath},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str292, CSSPropertyMinHeight},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str293, CSSPropertyFillRule},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str294, CSSPropertyWebkitBoxDecorationBreak},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str295, CSSPropertyFontVariantLigatures},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str296, CSSPropertyAliasWebkitBoxSizing},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str297, CSSPropertyWebkitColumnBreakAfter},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str298, CSSPropertyBackgroundAttachment},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str299, CSSPropertyTextDecorationLine},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str300, CSSPropertyTextAlignLast},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str301, CSSPropertyWebkitColumnBreakBefore},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str302, CSSPropertyWebkitColumnWidth},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str303, CSSPropertyAliasEpubTextOrientation},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str304, CSSPropertyWebkitMarginAfterCollapse},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str305, CSSPropertyBorderRightWidth},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str306, CSSPropertyWebkitBoxPack},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str307, CSSPropertyCy},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str308, CSSPropertyWebkitFontSmoothing},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str309, CSSPropertyWebkitMarginBeforeCollapse},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str310, CSSPropertyWebkitBorderAfterWidth},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str311, CSSPropertyAnimationDelay},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str312, CSSPropertyMaskType},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str313, CSSPropertyWebkitBorderBeforeWidth},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str314, CSSPropertyWebkitColumnRuleColor},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str315, CSSPropertyTransitionDelay},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str316, CSSPropertyWebkitMaskBoxImageOutset},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str317, CSSPropertyBorderStyle},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str318, CSSPropertyColorInterpolationFilters},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str319, CSSPropertyBufferedRendering},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str320, CSSPropertyBorderLeftWidth},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str321, CSSPropertyFontStretch},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str322, CSSPropertyLineHeight},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str323, CSSPropertyScrollBehavior},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str324, CSSPropertyWebkitTextStrokeColor},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str325, CSSPropertyBorderBottomStyle},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str326, CSSPropertyAliasWebkitAnimationDelay},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str327, CSSPropertyColumnFill},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str328, CSSPropertyOpacity},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str329, CSSPropertyWebkitMaskRepeatY},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str330, CSSPropertyTransitionProperty},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str331, CSSPropertyTextDecorationColor},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str332, CSSPropertyBaselineShift},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str333, CSSPropertyWebkitBorderHorizontalSpacing},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str334, CSSPropertyDisplay},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str335, CSSPropertyFontFeatureSettings},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str336, CSSPropertyAliasWebkitTransitionDelay},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str337, CSSPropertyAliasEpubTextCombine},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str338, CSSPropertyWebkitMaskBoxImageSlice},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str339, CSSPropertyWebkitMaskPositionY},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str340, CSSPropertyTextUnderlinePosition},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str341, CSSPropertyWebkitBorderEndStyle},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str342, CSSPropertyBackgroundRepeatX},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str343, CSSPropertyAnimationPlayState},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str344, CSSPropertyBorderTopStyle},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str345, CSSPropertyAliasWebkitOpacity},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str346, CSSPropertyStrokeOpacity},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str347, CSSPropertyWebkitBoxOrdinalGroup},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str348, CSSPropertyTextTransform},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str349, CSSPropertyAliasWebkitTransitionProperty},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str350, CSSPropertyWebkitBorderStartStyle},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str351, CSSPropertyBackgroundPositionX},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str352, CSSPropertyAliasWebkitFontFeatureSettings},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str353, CSSPropertyWebkitMaskBoxImageSource},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str354, CSSPropertyMaxWidth},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str355, CSSPropertyOutlineOffset},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str356, CSSPropertyListStyle},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str357, CSSPropertyListStyleImage},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str358, CSSPropertyAliasWebkitAnimationPlayState},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str359, CSSPropertyStopOpacity},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str360, CSSPropertyTextShadow},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str361, CSSPropertyBoxShadow},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str362, CSSPropertyFlex},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str363, CSSPropertyWebkitTransformOriginX},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str364, CSSPropertyVisibility},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str365, CSSPropertyFlexGrow},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str366, CSSPropertyWebkitRubyPosition},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str367, CSSPropertyWebkitColumnRuleWidth},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str368, CSSPropertyWebkitPerspectiveOriginX},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str369, CSSPropertyAliasWebkitBoxShadow},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str370, CSSPropertyAliasWebkitFlex},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str371, CSSPropertyTextAnchor},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str372, CSSPropertyVectorEffect},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str373, CSSPropertyFlexBasis},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str374, CSSPropertyAliasWebkitFlexGrow},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str375, CSSPropertyTableLayout},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str376, CSSPropertyListStylePosition},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str377, CSSPropertyWebkitTextStrokeWidth},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str378, CSSPropertyBackgroundRepeatY},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str379, CSSPropertyFlexWrap},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str380, CSSPropertyScrollSnapPointsX},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str381, CSSPropertyWebkitMaskBoxImageWidth},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str382, CSSPropertyOutlineStyle},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str383, CSSPropertyBackgroundPositionY},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str384, CSSPropertyEmptyCells},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str385, CSSPropertyMaskSourceType},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str386, CSSPropertyAliasWebkitFlexBasis},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str387, CSSPropertyFlexDirection},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str388, CSSPropertyWebkitTextEmphasis},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str389, CSSPropertyWebkitLogicalHeight},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str390, CSSPropertyWebkitMinLogicalHeight},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str391, CSSPropertyAliasWebkitFlexWrap},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str392, CSSPropertyWebkitTransformOriginY},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str393, CSSPropertyOverflowX},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str394, CSSPropertyAliasEpubTextTransform},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str395, CSSPropertyAliasWebkitFlexDirection},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str396, CSSPropertyTextOverflow},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str397, CSSPropertyWebkitBoxReflect},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str398, CSSPropertyStrokeDashoffset},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str399, CSSPropertyStrokeDasharray},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str400, CSSPropertyFontStyle},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str401, CSSPropertyWebkitPerspectiveOriginY},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str402, CSSPropertyScrollSnapType},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str403, CSSPropertyTransformStyle},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str404, CSSPropertyWebkitTextEmphasisPosition},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str405, CSSPropertyScrollSnapPointsY},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str406, CSSPropertyBorderRightStyle},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str407, CSSPropertyFontDisplay},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str408, CSSPropertyJustifyItems},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str409, CSSPropertyWebkitBorderAfterStyle},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str410, CSSPropertyAliasWebkitTransformStyle},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str411, CSSPropertyWebkitBorderBeforeStyle},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str412, CSSPropertyTextCombineUpright},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str413, CSSPropertyWebkitUserModify},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str414, CSSPropertyAliasEpubTextEmphasis},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str415, CSSPropertyWebkitHighlight},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str416, CSSPropertyBorderLeftStyle},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str417, CSSPropertyWebkitMaxLogicalWidth},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str418, CSSPropertyOverflowY},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str419, CSSPropertyMaxHeight},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str420, CSSPropertyWebkitTextEmphasisColor},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str421, CSSPropertyFloodOpacity},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str422, CSSPropertyJustifyContent},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str423, CSSPropertyWebkitTextFillColor},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str424, CSSPropertyShapeImageThreshold},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str425, CSSPropertyAliasWebkitJustifyContent},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str426, CSSPropertyFillOpacity},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str427, CSSPropertyFlexShrink},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str428, CSSPropertyAliasWebkitShapeImageThreshold},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str429, CSSPropertyFlexFlow},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str430, CSSPropertyAliasWebkitFlexShrink},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str431, CSSPropertyWebkitColumnRuleStyle},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str432, CSSPropertyAliasEpubTextEmphasisColor},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str433, CSSPropertyFontFamily},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str434, CSSPropertyAliasWebkitFlexFlow},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str435, CSSPropertyTextDecorationStyle},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str436, CSSPropertyWebkitTextDecorationsInEffect},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str437, CSSPropertyWebkitTapHighlightColor},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str438, CSSPropertyBackfaceVisibility},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str439, CSSPropertyWebkitTextSecurity},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str440, CSSPropertyWebkitBoxFlex},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str441, CSSPropertyAliasWebkitBackfaceVisibility},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str442, CSSPropertyWebkitMaxLogicalHeight},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str443, CSSPropertyJustifySelf},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str444, CSSPropertyListStyleType},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str445, CSSPropertyTextJustify},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str446, CSSPropertyWebkitBoxFlexGroup},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str447, CSSPropertyWebkitTextEmphasisStyle},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str448, CSSPropertyAliasEpubTextEmphasisStyle},
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str449, CSSPropertyWebkitHyphenateCharacter}
  };

static const short lookup[] =
  {
     -1,  -1,   0,  -1,  -1,   1,  -1,  -1,  -1,  -1,
     -1,   2,   3,   4,   5,   6,  -1,  -1,  -1,   7,
     -1,  -1,   8,  -1,  -1,   9,  10,  -1,  11,  -1,
     12,  -1,  -1,  13,  14,  -1,  15,  16,  17,  -1,
     18,  19,  -1,  -1,  20,  -1,  21,  -1,  22,  23,
     -1,  -1,  -1,  -1,  -1,  24,  25,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  26,  -1,  -1,  -1,  -1,
     -1,  27,  -1,  -1,  -1,  28,  -1,  -1,  29,  -1,
     -1,  30,  -1,  31,  32,  -1,  -1,  -1,  33,  -1,
     -1,  -1,  34,  35,  36,  -1,  -1,  -1,  -1,  37,
     -1,  -1,  -1,  -1,  38,  39,  40,  -1,  -1,  41,
     42,  -1,  43,  44,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  45,  -1,  46,  -1,  -1,  47,  48,  -1,
     -1,  -1,  -1,  49,  50,  51,  52,  -1,  -1,  -1,
     -1,  -1,  -1,  53,  54,  -1,  -1,  55,  56,  -1,
     -1,  -1,  57,  58,  59,  -1,  -1,  -1,  -1,  -1,
     60,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  61,  -1,  62,  63,
     64,  65,  -1,  66,  -1,  -1,  67,  68,  -1,  -1,
     -1,  -1,  -1,  -1,  69,  -1,  -1,  -1,  -1,  70,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  71,  -1,  72,  -1,  -1,  -1,  73,  74,  -1,
     -1,  75,  76,  -1,  77,  -1,  -1,  78,  -1,  -1,
     -1,  -1,  -1,  79,  80,  -1,  81,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  82,  -1,  -1,  -1,  -1,  -1,
     83,  -1,  84,  85,  -1,  -1,  -1,  -1,  86,  -1,
     87,  -1,  -1,  88,  89,  -1,  90,  -1,  -1,  -1,
     -1,  91,  -1,  92,  93,  -1,  -1,  94,  -1,  -1,
     -1,  -1,  -1,  -1,  95,  -1,  -1,  -1,  -1,  -1,
     96,  -1,  97,  -1,  -1,  -1,  98,  99, 100, 101,
     -1, 102, 103, 104,  -1,  -1,  -1, 105,  -1,  -1,
    106,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 107,  -1,
     -1, 108, 109, 110,  -1,  -1,  -1, 111,  -1,  -1,
    112,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 113, 114,
    115,  -1,  -1,  -1, 116,  -1, 117,  -1,  -1,  -1,
     -1, 118,  -1,  -1,  -1,  -1, 119,  -1, 120,  -1,
     -1, 121,  -1,  -1,  -1,  -1,  -1,  -1, 122,  -1,
     -1,  -1, 123,  -1, 124,  -1,  -1, 125,  -1,  -1,
     -1,  -1,  -1,  -1,  -1, 126, 127, 128, 129,  -1,
     -1,  -1, 130,  -1,  -1,  -1,  -1,  -1,  -1, 131,
     -1, 132, 133, 134,  -1,  -1,  -1,  -1,  -1, 135,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1, 136,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1, 137,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
    138,  -1,  -1,  -1,  -1, 139,  -1,  -1,  -1,  -1,
     -1, 140,  -1,  -1, 141,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1, 142,  -1, 143,  -1,  -1,  -1,
     -1,  -1, 144,  -1,  -1,  -1,  -1,  -1,  -1, 145,
     -1, 146,  -1, 147,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1, 148,  -1, 149,  -1, 150,  -1, 151,
     -1, 152,  -1,  -1,  -1,  -1,  -1, 153,  -1,  -1,
     -1, 154,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 155,
     -1,  -1,  -1, 156,  -1,  -1, 157,  -1,  -1,  -1,
    158,  -1,  -1,  -1, 159,  -1,  -1,  -1,  -1,  -1,
    160, 161, 162, 163, 164, 165,  -1, 166,  -1,  -1,
     -1,  -1, 167,  -1, 168,  -1, 169, 170,  -1,  -1,
    171,  -1,  -1,  -1,  -1,  -1, 172, 173, 174, 175,
     -1, 176,  -1,  -1,  -1,  -1,  -1, 177,  -1,  -1,
     -1, 178,  -1, 179, 180,  -1,  -1, 181, 182,  -1,
    183, 184,  -1,  -1,  -1,  -1, 185, 186,  -1,  -1,
    187,  -1, 188, 189, 190, 191,  -1,  -1,  -1,  -1,
    192,  -1, 193,  -1, 194, 195,  -1,  -1,  -1, 196,
     -1,  -1, 197,  -1,  -1, 198, 199,  -1,  -1,  -1,
     -1,  -1,  -1, 200,  -1, 201, 202, 203, 204,  -1,
    205,  -1,  -1,  -1,  -1,  -1, 206,  -1,  -1,  -1,
     -1,  -1,  -1,  -1, 207, 208,  -1, 209, 210, 211,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1, 212,  -1,  -1,  -1,  -1,  -1,
     -1, 213,  -1,  -1,  -1,  -1, 214,  -1,  -1,  -1,
     -1, 215,  -1,  -1, 216,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1, 217,  -1, 218,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 219,
    220, 221, 222,  -1,  -1,  -1, 223,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1, 224,  -1,  -1,
     -1, 225,  -1,  -1,  -1,  -1,  -1, 226,  -1,  -1,
     -1,  -1,  -1, 227,  -1, 228,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1, 229,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1, 230, 231,  -1, 232,
    233,  -1,  -1,  -1,  -1, 234,  -1,  -1, 235,  -1,
     -1,  -1,  -1,  -1,  -1,  -1, 236, 237,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1, 238,  -1,  -1,
    239,  -1,  -1,  -1, 240,  -1,  -1,  -1, 241,  -1,
     -1, 242,  -1, 243,  -1,  -1,  -1,  -1,  -1,  -1,
     -1, 244,  -1, 245,  -1, 246, 247,  -1,  -1,  -1,
    248, 249,  -1, 250,  -1,  -1, 251,  -1, 252,  -1,
     -1, 253,  -1,  -1,  -1,  -1, 254, 255,  -1,  -1,
    256,  -1, 257,  -1,  -1,  -1, 258,  -1,  -1,  -1,
     -1,  -1,  -1,  -1, 259,  -1,  -1,  -1,  -1,  -1,
     -1, 260, 261, 262,  -1,  -1, 263,  -1,  -1,  -1,
    264,  -1,  -1,  -1, 265,  -1, 266,  -1,  -1, 267,
     -1,  -1, 268,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
    269,  -1, 270, 271,  -1, 272,  -1, 273,  -1,  -1,
    274,  -1,  -1,  -1, 275,  -1,  -1,  -1,  -1,  -1,
     -1,  -1, 276,  -1, 277,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1, 278,  -1,  -1,  -1, 279,  -1,  -1,
     -1,  -1,  -1, 280,  -1,  -1, 281,  -1, 282,  -1,
     -1,  -1,  -1, 283,  -1,  -1, 284,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1, 285, 286,  -1,  -1,  -1,
     -1,  -1, 287, 288,  -1,  -1, 289,  -1, 290,  -1,
     -1,  -1,  -1, 291,  -1,  -1, 292,  -1,  -1,  -1,
     -1,  -1,  -1,  -1, 293,  -1,  -1, 294,  -1,  -1,
     -1, 295, 296,  -1, 297,  -1,  -1, 298,  -1, 299,
     -1,  -1,  -1,  -1,  -1,  -1, 300,  -1, 301,  -1,
     -1,  -1,  -1, 302,  -1,  -1,  -1,  -1,  -1,  -1,
     -1, 303, 304,  -1,  -1,  -1, 305,  -1,  -1,  -1,
    306,  -1, 307,  -1,  -1, 308, 309,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1, 310,  -1,  -1,  -1,  -1,
     -1,  -1, 311, 312,  -1,  -1,  -1,  -1,  -1, 313,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 314,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 315,  -1,
    316,  -1, 317, 318,  -1,  -1, 319,  -1,  -1,  -1,
    320, 321,  -1,  -1,  -1, 322,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1, 323, 324,  -1,  -1,  -1,  -1,
    325, 326,  -1,  -1, 327,  -1,  -1,  -1, 328,  -1,
     -1, 329,  -1,  -1,  -1,  -1, 330, 331, 332,  -1,
    333,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1, 334, 335,  -1,  -1,  -1, 336,  -1,  -1,
    337,  -1,  -1, 338,  -1,  -1, 339,  -1,  -1,  -1,
     -1,  -1, 340, 341,  -1, 342,  -1,  -1,  -1, 343,
     -1,  -1,  -1,  -1,  -1,  -1, 344,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1, 345,  -1,  -1,
     -1, 346, 347, 348,  -1, 349,  -1,  -1, 350,  -1,
    351,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1, 352,  -1,  -1, 353, 354,  -1,  -1, 355,
     -1,  -1, 356,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1, 357,  -1,  -1, 358,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1, 359,  -1,  -1,
     -1,  -1,  -1,  -1,  -1, 360,  -1,  -1,  -1,  -1,
     -1,  -1, 361, 362,  -1,  -1,  -1, 363,  -1,  -1,
    364,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 365,  -1,
     -1,  -1,  -1, 366,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1, 367, 368,  -1,  -1,
     -1, 369, 370,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1, 371,  -1,  -1, 372,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1, 373,  -1,  -1,  -1, 374, 375, 376,
     -1,  -1,  -1, 377,  -1,  -1,  -1,  -1,  -1, 378,
     -1,  -1,  -1, 379,  -1,  -1, 380, 381,  -1,  -1,
     -1,  -1, 382,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1, 383,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1, 384, 385,  -1,  -1,  -1,  -1,  -1,
     -1,  -1, 386,  -1,  -1, 387,  -1,  -1,  -1, 388,
     -1,  -1, 389,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
    390,  -1, 391,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1, 392,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1, 393,  -1, 394,
     -1,  -1,  -1,  -1, 395,  -1, 396, 397,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 398,  -1,
    399,  -1,  -1,  -1, 400,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1, 401,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
    402,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1, 403,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1, 404,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
    405,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1, 406,  -1,  -1,
     -1,  -1,  -1,  -1, 407,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1, 408,  -1, 409,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1, 410,  -1,  -1,  -1,
    411,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1, 412,  -1, 413,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1, 414,  -1,  -1,  -1,
    415,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1, 416,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
    417, 418,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1, 419, 420,  -1,  -1,  -1,  -1,  -1,
    421,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1, 422,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1, 423,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1, 424,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1, 425,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1, 426,  -1,  -1,  -1,  -1, 427,  -1,  -1,  -1,
     -1, 428,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1, 429,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1, 430,  -1, 431,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1, 432, 433,  -1, 434,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1, 435,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 436,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 437,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
    438,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1, 439,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 440,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 441,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1, 442,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 443,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
    444,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1, 445,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1, 446,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
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
     -1,  -1,  -1, 447,  -1,  -1,  -1,  -1,  -1,  -1,
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
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
    448,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 449
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
    if (propertyString.isNull()) {
        const char* propertyName = propertyNameStringsPool + propertyNameStringsOffsets[index];
        propertyString = AtomicString(propertyName, strlen(propertyName), AtomicString::ConstructFromLiteral);
    }
    return propertyString;
}

String getPropertyNameString(CSSPropertyID id)
{
    // We share the StringImpl with the AtomicStrings.
    return getPropertyNameAtomicString(id).string();
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

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
    "small-caps\0"
    "common-ligatures\0"
    "no-common-ligatures\0"
    "discretionary-ligatures\0"
    "no-discretionary-ligatures\0"
    "historical-ligatures\0"
    "no-historical-ligatures\0"
    "contextual\0"
    "no-contextual\0"
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
    "-webkit-text\0"
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
    "searchfield-decoration\0"
    "searchfield-results-decoration\0"
    "searchfield-cancel-button\0"
    "textfield\0"
    "relevancy-level-indicator\0"
    "continuous-capacity-level-indicator\0"
    "discrete-capacity-level-indicator\0"
    "rating-level-indicator\0"
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
    "paint\0"
    "style\0"
    "layout\0"
    "auto-fill\0"
    "auto-fit\0"
    "var\0"
    "-internal-variable-value\0"
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
  225,
  242,
  262,
  286,
  313,
  334,
  358,
  369,
  383,
  390,
  395,
  402,
  410,
  414,
  418,
  422,
  426,
  430,
  434,
  438,
  442,
  446,
  462,
  478,
  488,
  503,
  517,
  526,
  541,
  556,
  565,
  573,
  579,
  586,
  592,
  600,
  609,
  627,
  635,
  642,
  648,
  659,
  667,
  675,
  685,
  698,
  717,
  722,
  731,
  740,
  745,
  751,
  756,
  764,
  769,
  775,
  780,
  787,
  792,
  798,
  805,
  812,
  816,
  823,
  828,
  834,
  841,
  853,
  866,
  885,
  898,
  912,
  925,
  936,
  947,
  963,
  976,
  987,
  999,
  1008,
  1018,
  1032,
  1047,
  1063,
  1083,
  1098,
  1107,
  1116,
  1126,
  1143,
  1154,
  1170,
  1188,
  1201,
  1208,
  1220,
  1231,
  1267,
  1308,
  1346,
  1389,
  1414,
  1427,
  1432,
  1445,
  1452,
  1461,
  1470,
  1480,
  1486,
  1491,
  1503,
  1513,
  1524,
  1536,
  1553,
  1568,
  1584,
  1601,
  1605,
  1618,
  1627,
  1634,
  1638,
  1644,
  1653,
  1665,
  1669,
  1676,
  1700,
  1713,
  1718,
  1724,
  1731,
  1739,
  1752,
  1766,
  1781,
  1802,
  1813,
  1824,
  1832,
  1839,
  1844,
  1851,
  1858,
  1866,
  1887,
  1900,
  1908,
  1918,
  1924,
  1935,
  1944,
  1953,
  1961,
  1965,
  1975,
  1985,
  1993,
  1999,
  2007,
  2012,
  2019,
  2027,
  2032,
  2044,
  2056,
  2068,
  2080,
  2092,
  2104,
  2116,
  2135,
  2153,
  2171,
  2192,
  2216,
  2240,
  2247,
  2264,
  2285,
  2305,
  2327,
  2334,
  2343,
  2358,
  2373,
  2382,
  2398,
  2418,
  2440,
  2460,
  2482,
  2491,
  2500,
  2515,
  2530,
  2537,
  2543,
  2553,
  2566,
  2572,
  2585,
  2601,
  2620,
  2639,
  2649,
  2668,
  2681,
  2692,
  2706,
  2718,
  2737,
  2742,
  2754,
  2759,
  2771,
  2784,
  2804,
  2809,
  2819,
  2827,
  2835,
  2840,
  2854,
  2859,
  2872,
  2878,
  2887,
  2895,
  2907,
  2915,
  2924,
  2933,
  2943,
  2953,
  2962,
  2972,
  2982,
  2991,
  3000,
  3010,
  3020,
  3032,
  3044,
  3055,
  3066,
  3071,
  3076,
  3081,
  3092,
  3105,
  3122,
  3138,
  3155,
  3159,
  3163,
  3174,
  3184,
  3194,
  3202,
  3211,
  3214,
  3217,
  3220,
  3226,
  3235,
  3242,
  3248,
  3251,
  3254,
  3260,
  3274,
  3280,
  3285,
  3297,
  3303,
  3309,
  3314,
  3319,
  3327,
  3344,
  3354,
  3370,
  3395,
  3413,
  3423,
  3430,
  3436,
  3443,
  3456,
  3462,
  3477,
  3491,
  3498,
  3509,
  3517,
  3526,
  3535,
  3539,
  3548,
  3557,
  3566,
  3573,
  3582,
  3587,
  3594,
  3600,
  3605,
  3615,
  3620,
  3635,
  3643,
  3649,
  3653,
  3659,
  3665,
  3673,
  3684,
  3693,
  3705,
  3716,
  3723,
  3732,
  3743,
  3752,
  3766,
  3779,
  3792,
  3799,
  3804,
  3808,
  3820,
  3827,
  3842,
  3847,
  3860,
  3866,
  3876,
  3887,
  3913,
  3921,
  3941,
  3961,
  3984,
  4004,
  4016,
  4028,
  4040,
  4045,
  4054,
  4062,
  4072,
  4081,
  4092,
  4098,
  4104,
  4111,
  4129,
  4138,
  4144,
  4156,
  4170,
  4177,
  4190,
  4208,
  4216,
  4225,
  4255,
  4284,
  4315,
  4352,
  4370,
  4388,
  4414,
  4450,
  4463,
  4481,
  4511,
  4531,
  4556,
  4582,
  4619,
  4646,
  4675,
  4707,
  4747,
  4756,
  4772,
  4786,
  4805,
  4811,
  4824,
  4843,
  4861,
  4877,
  4900,
  4921,
  4927,
  4939,
  4962,
  4993,
  5019,
  5029,
  5055,
  5091,
  5125,
  5148,
  5157,
  5177,
  5183,
  5190,
  5201,
  5209,
  5221,
  5229,
  5241,
  5252,
  5260,
  5266,
  5274,
  5281,
  5291,
  5309,
  5318,
  5328,
  5337,
  5345,
  5352,
  5357,
  5369,
  5374,
  5381,
  5389,
  5398,
  5410,
  5421,
  5433,
  5442,
  5448,
  5461,
  5470,
  5476,
  5481,
  5496,
  5508,
  5522,
  5530,
  5535,
  5542,
  5555,
  5565,
  5572,
  5592,
  5607,
  5619,
  5640,
  5654,
  5673,
  5692,
  5700,
  5706,
  5709,
  5712,
  5715,
  5721,
  5727,
  5733,
  5747,
  5759,
  5771,
  5777,
  5784,
  5789,
  5795,
  5802,
  5807,
  5811,
  5825,
  5834,
  5841,
  5849,
  5862,
  5877,
  5891,
  5907,
  5913,
  5922,
  5937,
  5945,
  5960,
  5963,
  5967,
  5983,
  5993,
  6019,
  6027,
  6035,
  6038,
  6049,
  6060,
  6071,
  6082,
  6090,
  6097,
  6104,
  6109,
  6119,
  6125,
  6134,
  6141,
  6148,
  6156,
  6168,
  6179,
  6190,
  6201,
  6212,
  6222,
  6226,
  6237,
  6243,
  6254,
  6265,
  6273,
  6289,
  6305,
  6310,
  6318,
  6323,
  6330,
  6340,
  6352,
  6362,
  6370,
  6395,
  6401,
  6407,
  6416,
  6426,
  6433,
  6442,
  6455,
  6469,
  6480,
  6489,
  6496,
  6503,
  6512,
  6528,
  6535,
  6541,
  6557,
  6573,
  6599,
  6625,
  6644,
  6661,
  6685,
  6709,
  6743,
  6777,
  6795,
  6800,
  6803,
  6814,
  6821,
  6826,
  6834,
  6843,
  6848,
  6856,
  6863,
  6870,
  6880,
  6886,
  6895,
  6906,
  6914,
  6925,
  6934,
  6939,
  6951,
  6955,
  6959,
  6964,
  6968,
  6973,
  6980,
  6989,
  7001,
  7008,
  7016,
  7024,
  7032,
  7041,
  7047,
  7054,
  7061,
  7068,
  7076,
  7081,
  7087,
  7093,
  7103,
  7114,
  7125,
  7136,
  7148,
  7153,
  7158,
  7171,
  7181,
  7191,
  7202,
  7208,
  7214,
  7221,
  7231,
  7240,
  7244,
  7269,
  7279,
  7292,
  7303,
  7309,
  7315,
  7322,
  7337,
  7348,
  7354,
  7364,
  7374,
  7385,
  7395,
  7401,
  7416,
  7425,
  7433,
  7438,
  7447,
  7456,
  7470,
  7479,
  7489,
  7498,
  7508,
  7520,
  7535,
  7546,
  7557,
  7565,
  7576,
  7589,
  7603,
  7617,
  7631,
  7645,
  7656,
  7665,
  7677,
  7685,
  7693,
  7704,
  7714,
  7726,
  7738,
  7748,
  7759,
  7764,
  7774,
  7786,
  7795,
  7803,
  7813,
  7820,
  7826,
  7832,
  7841,
  7855,
  7865,
  7878,
  7888,
  7899,
  7909,
  7930,
  7940,
  7951,
  7961,
  7971,
  7983,
  7997,
  8010,
  8025,
  8040,
  8055,
  8067,
  8077,
  8083,
  8091,
  8108,
  8119,
  8132,
  8145,
  8160,
  8176,
  8194,
  8210,
  8226,
  8239,
  8249,
  8259,
  8268,
  8280,
  8288,
  8298,
  8308,
  8315,
  8329,
  8339,
  8353,
  8367,
  8378,
  8388,
  8393,
  8398,
  8403,
  8414,
  8428,
  8438,
  8448,
  8460,
  8467,
  8478,
  8487,
  8496,
  8503,
  8511,
  8521,
  8531,
  8541,
  8546,
  8558,
  8568,
  8572,
  8580,
  8587,
  8597,
  8604,
  8610,
  8621,
  8633,
  8639,
  8649,
  8660,
  8664,
  8669,
  8679,
  8690,
  8695,
  8701,
  8707,
  8719,
  8730,
  8738,
  8755,
  8771,
  8783,
  8791,
  8804,
  8815,
  8825,
  8836,
  8844,
};

/* maximum key range = 5774, duplicates = 0 */

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
      5794, 5794, 5794, 5794, 5794, 5794, 5794, 5794, 5794, 5794,
      5794, 5794, 5794, 5794, 5794, 5794, 5794, 5794, 5794, 5794,
      5794, 5794, 5794, 5794, 5794, 5794, 5794, 5794, 5794, 5794,
      5794, 5794, 5794, 5794, 5794, 5794, 5794, 5794, 5794, 5794,
      5794, 5794, 5794, 5794, 5794,  153,   70,   11,    9, 5794,
        16,   12,   19,   14,   15,   13,   11,    9,    8, 5794,
      5794, 5794, 5794, 5794, 5794, 5794, 5794, 5794, 5794, 5794,
      5794, 5794, 5794, 5794, 5794, 5794, 5794, 5794, 5794, 5794,
      5794, 5794, 5794, 5794, 5794, 5794, 5794, 5794, 5794, 5794,
      5794, 5794, 5794, 5794, 5794, 5794, 5794,    9,  405,  134,
        50,    8,  674,   15,  570,    9, 1123,  458,   31,    8,
        10,   31,  116, 1393,   12,   85,    8,  120,   85, 1404,
      1236,  933,  401,   53,    8, 5794, 5794, 5794, 5794, 5794,
      5794, 5794, 5794, 5794, 5794, 5794, 5794, 5794, 5794, 5794,
      5794, 5794, 5794, 5794, 5794, 5794, 5794, 5794, 5794, 5794,
      5794, 5794, 5794, 5794, 5794, 5794, 5794, 5794, 5794, 5794,
      5794, 5794, 5794, 5794, 5794, 5794, 5794, 5794, 5794, 5794,
      5794, 5794, 5794, 5794, 5794, 5794, 5794, 5794, 5794, 5794,
      5794, 5794, 5794, 5794, 5794, 5794, 5794, 5794, 5794, 5794,
      5794, 5794, 5794, 5794, 5794, 5794, 5794, 5794, 5794, 5794,
      5794, 5794, 5794, 5794, 5794, 5794, 5794, 5794, 5794, 5794,
      5794, 5794, 5794, 5794, 5794, 5794, 5794, 5794, 5794, 5794,
      5794, 5794, 5794, 5794, 5794, 5794, 5794, 5794, 5794, 5794,
      5794, 5794, 5794, 5794, 5794, 5794, 5794, 5794, 5794, 5794,
      5794, 5794, 5794, 5794, 5794, 5794, 5794, 5794, 5794, 5794,
      5794, 5794, 5794, 5794, 5794, 5794, 5794, 5794
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
    char stringpool_str0[sizeof("lr")];
    char stringpool_str1[sizeof("900")];
    char stringpool_str2[sizeof("800")];
    char stringpool_str3[sizeof("ltr")];
    char stringpool_str4[sizeof("700")];
    char stringpool_str5[sizeof("200")];
    char stringpool_str6[sizeof("600")];
    char stringpool_str7[sizeof("400")];
    char stringpool_str8[sizeof("500")];
    char stringpool_str9[sizeof("100")];
    char stringpool_str10[sizeof("300")];
    char stringpool_str11[sizeof("drag")];
    char stringpool_str12[sizeof("lime")];
    char stringpool_str13[sizeof("start")];
    char stringpool_str14[sizeof("large")];
    char stringpool_str15[sizeof("dot")];
    char stringpool_str16[sizeof("lao")];
    char stringpool_str17[sizeof("fine")];
    char stringpool_str18[sizeof("linen")];
    char stringpool_str19[sizeof("meter")];
    char stringpool_str20[sizeof("miter")];
    char stringpool_str21[sizeof("darken")];
    char stringpool_str22[sizeof("larger")];
    char stringpool_str23[sizeof("help")];
    char stringpool_str24[sizeof("linear")];
    char stringpool_str25[sizeof("slice")];
    char stringpool_str26[sizeof("fill")];
    char stringpool_str27[sizeof("small")];
    char stringpool_str28[sizeof("hanging")];
    char stringpool_str29[sizeof("seagreen")];
    char stringpool_str30[sizeof("single")];
    char stringpool_str31[sizeof("magenta")];
    char stringpool_str32[sizeof("hide")];
    char stringpool_str33[sizeof("srgb")];
    char stringpool_str34[sizeof("smaller")];
    char stringpool_str35[sizeof("none")];
    char stringpool_str36[sizeof("from")];
    char stringpool_str37[sizeof("darkgreen")];
    char stringpool_str38[sizeof("limegreen")];
    char stringpool_str39[sizeof("caret")];
    char stringpool_str40[sizeof("ledger")];
    char stringpool_str41[sizeof("calc")];
    char stringpool_str42[sizeof("cell")];
    char stringpool_str43[sizeof("clip")];
    char stringpool_str44[sizeof("format")];
    char stringpool_str45[sizeof("darkred")];
    char stringpool_str46[sizeof("disc")];
    char stringpool_str47[sizeof("rl")];
    char stringpool_str48[sizeof("circle")];
    char stringpool_str49[sizeof("salmon")];
    char stringpool_str50[sizeof("steps")];
    char stringpool_str51[sizeof("darkorange")];
    char stringpool_str52[sizeof("filled")];
    char stringpool_str53[sizeof("rtl")];
    char stringpool_str54[sizeof("hsl")];
    char stringpool_str55[sizeof("on")];
    char stringpool_str56[sizeof("url")];
    char stringpool_str57[sizeof("letter")];
    char stringpool_str58[sizeof("nonzero")];
    char stringpool_str59[sizeof("hue")];
    char stringpool_str60[sizeof("tan")];
    char stringpool_str61[sizeof("flat")];
    char stringpool_str62[sizeof("move")];
    char stringpool_str63[sizeof("red")];
    char stringpool_str64[sizeof("markers")];
    char stringpool_str65[sizeof("normal")];
    char stringpool_str66[sizeof("zoom")];
    char stringpool_str67[sizeof("teal")];
    char stringpool_str68[sizeof("b5")];
    char stringpool_str69[sizeof("space")];
    char stringpool_str70[sizeof("mongolian")];
    char stringpool_str71[sizeof("to")];
    char stringpool_str72[sizeof("hover")];
    char stringpool_str73[sizeof("b4")];
    char stringpool_str74[sizeof("dense")];
    char stringpool_str75[sizeof("sienna")];
    char stringpool_str76[sizeof("ridge")];
    char stringpool_str77[sizeof("beige")];
    char stringpool_str78[sizeof("scale")];
    char stringpool_str79[sizeof("under")];
    char stringpool_str80[sizeof("center")];
    char stringpool_str81[sizeof("navy")];
    char stringpool_str82[sizeof("discard")];
    char stringpool_str83[sizeof("screen")];
    char stringpool_str84[sizeof("hangul")];
    char stringpool_str85[sizeof("dotted")];
    char stringpool_str86[sizeof("coarse")];
    char stringpool_str87[sizeof("cover")];
    char stringpool_str88[sizeof("legal")];
    char stringpool_str89[sizeof("lavender")];
    char stringpool_str90[sizeof("loose")];
    char stringpool_str91[sizeof("oriya")];
    char stringpool_str92[sizeof("reset")];
    char stringpool_str93[sizeof("content")];
    char stringpool_str94[sizeof("unset")];
    char stringpool_str95[sizeof("contain")];
    char stringpool_str96[sizeof("central")];
    char stringpool_str97[sizeof("hiragana")];
    char stringpool_str98[sizeof("darkviolet")];
    char stringpool_str99[sizeof("bengali")];
    char stringpool_str100[sizeof("darksalmon")];
    char stringpool_str101[sizeof("revert")];
    char stringpool_str102[sizeof("over")];
    char stringpool_str103[sizeof("listitem")];
    char stringpool_str104[sizeof("hue-rotate")];
    char stringpool_str105[sizeof("cambodian")];
    char stringpool_str106[sizeof("crimson")];
    char stringpool_str107[sizeof("underline")];
    char stringpool_str108[sizeof("scale3d")];
    char stringpool_str109[sizeof("kannada")];
    char stringpool_str110[sizeof("clear")];
    char stringpool_str111[sizeof("clone")];
    char stringpool_str112[sizeof("forestgreen")];
    char stringpool_str113[sizeof("repeat")];
    char stringpool_str114[sizeof("double")];
    char stringpool_str115[sizeof("span")];
    char stringpool_str116[sizeof("copy")];
    char stringpool_str117[sizeof("sesame")];
    char stringpool_str118[sizeof("static")];
    char stringpool_str119[sizeof("step-end")];
    char stringpool_str120[sizeof("coral")];
    char stringpool_str121[sizeof("hsla")];
    char stringpool_str122[sizeof("top")];
    char stringpool_str123[sizeof("super")];
    char stringpool_str124[sizeof("bevel")];
    char stringpool_str125[sizeof("rotate")];
    char stringpool_str126[sizeof("overline")];
    char stringpool_str127[sizeof("orange")];
    char stringpool_str128[sizeof("standalone")];
    char stringpool_str129[sizeof("keep-all")];
    char stringpool_str130[sizeof("mintcream")];
    char stringpool_str131[sizeof("contents")];
    char stringpool_str132[sizeof("contrast")];
    char stringpool_str133[sizeof("from-image")];
    char stringpool_str134[sizeof("blur")];
    char stringpool_str135[sizeof("linear-gradient")];
    char stringpool_str136[sizeof("moccasin")];
    char stringpool_str137[sizeof("bottom")];
    char stringpool_str138[sizeof("reverse")];
    char stringpool_str139[sizeof("devanagari")];
    char stringpool_str140[sizeof("blue")];
    char stringpool_str141[sizeof("baseline")];
    char stringpool_str142[sizeof("separate")];
    char stringpool_str143[sizeof("caption")];
    char stringpool_str144[sizeof("step-start")];
    char stringpool_str145[sizeof("rect")];
    char stringpool_str146[sizeof("zoom-in")];
    char stringpool_str147[sizeof("darkolivegreen")];
    char stringpool_str148[sizeof("tomato")];
    char stringpool_str149[sizeof("rotate3d")];
    char stringpool_str150[sizeof("local")];
    char stringpool_str151[sizeof("triangle")];
    char stringpool_str152[sizeof("collapse")];
    char stringpool_str153[sizeof("counter")];
    char stringpool_str154[sizeof("orangered")];
    char stringpool_str155[sizeof("butt")];
    char stringpool_str156[sizeof("darkgoldenrod")];
    char stringpool_str157[sizeof("open")];
    char stringpool_str158[sizeof("oldlace")];
    char stringpool_str159[sizeof("min-content")];
    char stringpool_str160[sizeof("fit-content")];
    char stringpool_str161[sizeof("running")];
    char stringpool_str162[sizeof("relative")];
    char stringpool_str163[sizeof("no-repeat")];
    char stringpool_str164[sizeof("list-item")];
    char stringpool_str165[sizeof("outset")];
    char stringpool_str166[sizeof("button")];
    char stringpool_str167[sizeof("translate")];
    char stringpool_str168[sizeof("round")];
    char stringpool_str169[sizeof("cursive")];
    char stringpool_str170[sizeof("multiple")];
    char stringpool_str171[sizeof("at")];
    char stringpool_str172[sizeof("a3")];
    char stringpool_str173[sizeof("translate3d")];
    char stringpool_str174[sizeof("a5")];
    char stringpool_str175[sizeof("a4")];
    char stringpool_str176[sizeof("attr")];
    char stringpool_str177[sizeof("counters")];
    char stringpool_str178[sizeof("outside")];
    char stringpool_str179[sizeof("fullscreen")];
    char stringpool_str180[sizeof("bisque")];
    char stringpool_str181[sizeof("flex")];
    char stringpool_str182[sizeof("zoom-out")];
    char stringpool_str183[sizeof("balance")];
    char stringpool_str184[sizeof("destination-in")];
    char stringpool_str185[sizeof("all")];
    char stringpool_str186[sizeof("blueviolet")];
    char stringpool_str187[sizeof("crispedges")];
    char stringpool_str188[sizeof("armenian")];
    char stringpool_str189[sizeof("source-in")];
    char stringpool_str190[sizeof("spell-out")];
    char stringpool_str191[sizeof("linearrgb")];
    char stringpool_str192[sizeof("darkmagenta")];
    char stringpool_str193[sizeof("rgb")];
    char stringpool_str194[sizeof("alternate")];
    char stringpool_str195[sizeof("background")];
    char stringpool_str196[sizeof("tb")];
    char stringpool_str197[sizeof("sub")];
    char stringpool_str198[sizeof("hotpink")];
    char stringpool_str199[sizeof("currentcolor")];
    char stringpool_str200[sizeof("table")];
    char stringpool_str201[sizeof("use-script")];
    char stringpool_str202[sizeof("space-around")];
    char stringpool_str203[sizeof("small-caps")];
    char stringpool_str204[sizeof("scalez")];
    char stringpool_str205[sizeof("tibetan")];
    char stringpool_str206[sizeof("solid")];
    char stringpool_str207[sizeof("uppercase")];
    char stringpool_str208[sizeof("destination-over")];
    char stringpool_str209[sizeof("digits")];
    char stringpool_str210[sizeof("upper-latin")];
    char stringpool_str211[sizeof("upper-roman")];
    char stringpool_str212[sizeof("turquoise")];
    char stringpool_str213[sizeof("hangul-consonant")];
    char stringpool_str214[sizeof("upper-armenian")];
    char stringpool_str215[sizeof("closest-side")];
    char stringpool_str216[sizeof("sepia")];
    char stringpool_str217[sizeof("darkblue")];
    char stringpool_str218[sizeof("destination-out")];
    char stringpool_str219[sizeof("destination-atop")];
    char stringpool_str220[sizeof("green")];
    char stringpool_str221[sizeof("transparent")];
    char stringpool_str222[sizeof("source-out")];
    char stringpool_str223[sizeof("khaki")];
    char stringpool_str224[sizeof("strict")];
    char stringpool_str225[sizeof("deeppink")];
    char stringpool_str226[sizeof("radio")];
    char stringpool_str227[sizeof("steelblue")];
    char stringpool_str228[sizeof("khmer")];
    char stringpool_str229[sizeof("rgba")];
    char stringpool_str230[sizeof("black")];
    char stringpool_str231[sizeof("radial")];
    char stringpool_str232[sizeof("grey")];
    char stringpool_str233[sizeof("gray")];
    char stringpool_str234[sizeof("double-circle")];
    char stringpool_str235[sizeof("col-resize")];
    char stringpool_str236[sizeof("medium")];
    char stringpool_str237[sizeof("decimal")];
    char stringpool_str238[sizeof("georgian")];
    char stringpool_str239[sizeof("block")];
    char stringpool_str240[sizeof("lr-tb")];
    char stringpool_str241[sizeof("alias")];
    char stringpool_str242[sizeof("katakana")];
    char stringpool_str243[sizeof("source-over")];
    char stringpool_str244[sizeof("rotatez")];
    char stringpool_str245[sizeof("flex-end")];
    char stringpool_str246[sizeof("dodgerblue")];
    char stringpool_str247[sizeof("logical")];
    char stringpool_str248[sizeof("se-resize")];
    char stringpool_str249[sizeof("s-resize")];
    char stringpool_str250[sizeof("springgreen")];
    char stringpool_str251[sizeof("cadetblue")];
    char stringpool_str252[sizeof("hand")];
    char stringpool_str253[sizeof("slateblue")];
    char stringpool_str254[sizeof("safe")];
    char stringpool_str255[sizeof("ne-resize")];
    char stringpool_str256[sizeof("n-resize")];
    char stringpool_str257[sizeof("tb-rl")];
    char stringpool_str258[sizeof("darkslateblue")];
    char stringpool_str259[sizeof("flex-start")];
    char stringpool_str260[sizeof("end")];
    char stringpool_str261[sizeof("no-common-ligatures")];
    char stringpool_str262[sizeof("chocolate")];
    char stringpool_str263[sizeof("blink")];
    char stringpool_str264[sizeof("distribute")];
    char stringpool_str265[sizeof("stretch")];
    char stringpool_str266[sizeof("repeating-linear-gradient")];
    char stringpool_str267[sizeof("rl-tb")];
    char stringpool_str268[sizeof("hidden")];
    char stringpool_str269[sizeof("luminance")];
    char stringpool_str270[sizeof("closest-corner")];
    char stringpool_str271[sizeof("element")];
    char stringpool_str272[sizeof("left")];
    char stringpool_str273[sizeof("optional")];
    char stringpool_str274[sizeof("historical-ligatures")];
    char stringpool_str275[sizeof("middle")];
    char stringpool_str276[sizeof("ease")];
    char stringpool_str277[sizeof("seashell")];
    char stringpool_str278[sizeof("ns-resize")];
    char stringpool_str279[sizeof("cornsilk")];
    char stringpool_str280[sizeof("no-punctuation")];
    char stringpool_str281[sizeof("translatez")];
    char stringpool_str282[sizeof("all-scroll")];
    char stringpool_str283[sizeof("thin")];
    char stringpool_str284[sizeof("minimal-ui")];
    char stringpool_str285[sizeof("no-change")];
    char stringpool_str286[sizeof("self-end")];
    char stringpool_str287[sizeof("literal-punctuation")];
    char stringpool_str288[sizeof("darkorchid")];
    char stringpool_str289[sizeof("reset-size")];
    char stringpool_str290[sizeof("darkseagreen")];
    char stringpool_str291[sizeof("thistle")];
    char stringpool_str292[sizeof("bold")];
    char stringpool_str293[sizeof("border")];
    char stringpool_str294[sizeof("radial-gradient")];
    char stringpool_str295[sizeof("chartreuse")];
    char stringpool_str296[sizeof("mediumseagreen")];
    char stringpool_str297[sizeof("bolder")];
    char stringpool_str298[sizeof("self-start")];
    char stringpool_str299[sizeof("status-bar")];
    char stringpool_str300[sizeof("repeating-radial-gradient")];
    char stringpool_str301[sizeof("crosshair")];
    char stringpool_str302[sizeof("manipulation")];
    char stringpool_str303[sizeof("table-cell")];
    char stringpool_str304[sizeof("grayscale")];
    char stringpool_str305[sizeof("no-drag")];
    char stringpool_str306[sizeof("condensed")];
    char stringpool_str307[sizeof("brightness")];
    char stringpool_str308[sizeof("azure")];
    char stringpool_str309[sizeof("alternate-reverse")];
    char stringpool_str310[sizeof("ease-in")];
    char stringpool_str311[sizeof("style")];
    char stringpool_str312[sizeof("break-all")];
    char stringpool_str313[sizeof("mediumspringgreen")];
    char stringpool_str314[sizeof("xor")];
    char stringpool_str315[sizeof("snow")];
    char stringpool_str316[sizeof("default")];
    char stringpool_str317[sizeof("dimgrey")];
    char stringpool_str318[sizeof("dimgray")];
    char stringpool_str319[sizeof("unsafe")];
    char stringpool_str320[sizeof("horizontal")];
    char stringpool_str321[sizeof("darkgrey")];
    char stringpool_str322[sizeof("darkgray")];
    char stringpool_str323[sizeof("common-ligatures")];
    char stringpool_str324[sizeof("step-middle")];
    char stringpool_str325[sizeof("evenodd")];
    char stringpool_str326[sizeof("aliceblue")];
    char stringpool_str327[sizeof("avoid")];
    char stringpool_str328[sizeof("mediumpurple")];
    char stringpool_str329[sizeof("on-demand")];
    char stringpool_str330[sizeof("antialiased")];
    char stringpool_str331[sizeof("table-column")];
    char stringpool_str332[sizeof("semi-condensed")];
    char stringpool_str333[sizeof("no-drop")];
    char stringpool_str334[sizeof("landscape")];
    char stringpool_str335[sizeof("hiragana-iroha")];
    char stringpool_str336[sizeof("firebrick")];
    char stringpool_str337[sizeof("fallback")];
    char stringpool_str338[sizeof("sans-serif")];
    char stringpool_str339[sizeof("ease-out")];
    char stringpool_str340[sizeof("myanmar")];
    char stringpool_str341[sizeof("capitalize")];
    char stringpool_str342[sizeof("scaley")];
    char stringpool_str343[sizeof("cyan")];
    char stringpool_str344[sizeof("slategrey")];
    char stringpool_str345[sizeof("slategray")];
    char stringpool_str346[sizeof("after")];
    char stringpool_str347[sizeof("brown")];
    char stringpool_str348[sizeof("darkcyan")];
    char stringpool_str349[sizeof("fantasy")];
    char stringpool_str350[sizeof("forwards")];
    char stringpool_str351[sizeof("embed")];
    char stringpool_str352[sizeof("thai")];
    char stringpool_str353[sizeof("serif")];
    char stringpool_str354[sizeof("thick")];
    char stringpool_str355[sizeof("malayalam")];
    char stringpool_str356[sizeof("lighten")];
    char stringpool_str357[sizeof("lighter")];
    char stringpool_str358[sizeof("overlay")];
    char stringpool_str359[sizeof("blanchedalmond")];
    char stringpool_str360[sizeof("opacity")];
    char stringpool_str361[sizeof("rotatey")];
    char stringpool_str362[sizeof("buttonface")];
    char stringpool_str363[sizeof("browser")];
    char stringpool_str364[sizeof("lightgreen")];
    char stringpool_str365[sizeof("mediumblue")];
    char stringpool_str366[sizeof("darkslategrey")];
    char stringpool_str367[sizeof("darkslategray")];
    char stringpool_str368[sizeof("legacy")];
    char stringpool_str369[sizeof("dynamic")];
    char stringpool_str370[sizeof("farthest-corner")];
    char stringpool_str371[sizeof("right")];
    char stringpool_str372[sizeof("inset")];
    char stringpool_str373[sizeof("invert")];
    char stringpool_str374[sizeof("mistyrose")];
    char stringpool_str375[sizeof("upright")];
    char stringpool_str376[sizeof("grid")];
    char stringpool_str377[sizeof("gainsboro")];
    char stringpool_str378[sizeof("wrap")];
    char stringpool_str379[sizeof("x-small")];
    char stringpool_str380[sizeof("isolate")];
    char stringpool_str381[sizeof("initial")];
    char stringpool_str382[sizeof("matrix")];
    char stringpool_str383[sizeof("dashed")];
    char stringpool_str384[sizeof("x-large")];
    char stringpool_str385[sizeof("italic")];
    char stringpool_str386[sizeof("both")];
    char stringpool_str387[sizeof("geometricprecision")];
    char stringpool_str388[sizeof("slider-vertical")];
    char stringpool_str389[sizeof("silver")];
    char stringpool_str390[sizeof("minmax")];
    char stringpool_str391[sizeof("gold")];
    char stringpool_str392[sizeof("midnightblue")];
    char stringpool_str393[sizeof("mixed")];
    char stringpool_str394[sizeof("media-volume-slider")];
    char stringpool_str395[sizeof("fixed")];
    char stringpool_str396[sizeof("repeat-y")];
    char stringpool_str397[sizeof("translatey")];
    char stringpool_str398[sizeof("multiply")];
    char stringpool_str399[sizeof("wait")];
    char stringpool_str400[sizeof("matrix3d")];
    char stringpool_str401[sizeof("ultra-condensed")];
    char stringpool_str402[sizeof("after-edge")];
    char stringpool_str403[sizeof("interlace")];
    char stringpool_str404[sizeof("space-evenly")];
    char stringpool_str405[sizeof("e-resize")];
    char stringpool_str406[sizeof("lightsalmon")];
    char stringpool_str407[sizeof("lavenderblush")];
    char stringpool_str408[sizeof("ease-in-out")];
    char stringpool_str409[sizeof("lightcoral")];
    char stringpool_str410[sizeof("wavy")];
    char stringpool_str411[sizeof("olive")];
    char stringpool_str412[sizeof("ellipse")];
    char stringpool_str413[sizeof("icon")];
    char stringpool_str414[sizeof("scalex")];
    char stringpool_str415[sizeof("skew")];
    char stringpool_str416[sizeof("pre")];
    char stringpool_str417[sizeof("goldenrod")];
    char stringpool_str418[sizeof("pink")];
    char stringpool_str419[sizeof("sticky")];
    char stringpool_str420[sizeof("var")];
    char stringpool_str421[sizeof("menu")];
    char stringpool_str422[sizeof("swap")];
    char stringpool_str423[sizeof("difference")];
    char stringpool_str424[sizeof("new")];
    char stringpool_str425[sizeof("orchid")];
    char stringpool_str426[sizeof("text")];
    char stringpool_str427[sizeof("off")];
    char stringpool_str428[sizeof("maroon")];
    char stringpool_str429[sizeof("saturate")];
    char stringpool_str430[sizeof("searchfield")];
    char stringpool_str431[sizeof("violet")];
    char stringpool_str432[sizeof("pre-line")];
    char stringpool_str433[sizeof("horizontal-tb")];
    char stringpool_str434[sizeof("media-mute-button")];
    char stringpool_str435[sizeof("textarea")];
    char stringpool_str436[sizeof("table-column-group")];
    char stringpool_str437[sizeof("ellipsis")];
    char stringpool_str438[sizeof("hard-light")];
    char stringpool_str439[sizeof("fuchsia")];
    char stringpool_str440[sizeof("palegreen")];
    char stringpool_str441[sizeof("saturation")];
    char stringpool_str442[sizeof("rotatex")];
    char stringpool_str443[sizeof("color")];
    char stringpool_str444[sizeof("row")];
    char stringpool_str445[sizeof("katakana-iroha")];
    char stringpool_str446[sizeof("column")];
    char stringpool_str447[sizeof("paint")];
    char stringpool_str448[sizeof("darkkhaki")];
    char stringpool_str449[sizeof("show")];
    char stringpool_str450[sizeof("media-slider")];
    char stringpool_str451[sizeof("urdu")];
    char stringpool_str452[sizeof("portrait")];
    char stringpool_str453[sizeof("persian")];
    char stringpool_str454[sizeof("mediumvioletred")];
    char stringpool_str455[sizeof("wrap-reverse")];
    char stringpool_str456[sizeof("polygon")];
    char stringpool_str457[sizeof("menulist")];
    char stringpool_str458[sizeof("plum")];
    char stringpool_str459[sizeof("purple")];
    char stringpool_str460[sizeof("pointer")];
    char stringpool_str461[sizeof("soft-light")];
    char stringpool_str462[sizeof("max-content")];
    char stringpool_str463[sizeof("contextual")];
    char stringpool_str464[sizeof("lawngreen")];
    char stringpool_str465[sizeof("painted")];
    char stringpool_str466[sizeof("lightsteelblue")];
    char stringpool_str467[sizeof("nowrap")];
    char stringpool_str468[sizeof("threedface")];
    char stringpool_str469[sizeof("not-allowed")];
    char stringpool_str470[sizeof("skyblue")];
    char stringpool_str471[sizeof("scroll")];
    char stringpool_str472[sizeof("document")];
    char stringpool_str473[sizeof("upper-alpha")];
    char stringpool_str474[sizeof("repeat-x")];
    char stringpool_str475[sizeof("translatex")];
    char stringpool_str476[sizeof("progress")];
    char stringpool_str477[sizeof("inline")];
    char stringpool_str478[sizeof("buttontext")];
    char stringpool_str479[sizeof("no-contextual")];
    char stringpool_str480[sizeof("small-caption")];
    char stringpool_str481[sizeof("pan-up")];
    char stringpool_str482[sizeof("luminosity")];
    char stringpool_str483[sizeof("square")];
    char stringpool_str484[sizeof("captiontext")];
    char stringpool_str485[sizeof("alpha")];
    char stringpool_str486[sizeof("non-scaling-stroke")];
    char stringpool_str487[sizeof("indigo")];
    char stringpool_str488[sizeof("vertical")];
    char stringpool_str489[sizeof("mandatory")];
    char stringpool_str490[sizeof("lower-greek")];
    char stringpool_str491[sizeof("telugu")];
    char stringpool_str492[sizeof("paused")];
    char stringpool_str493[sizeof("media-volume-slider-container")];
    char stringpool_str494[sizeof("lowercase")];
    char stringpool_str495[sizeof("lower-latin")];
    char stringpool_str496[sizeof("lower-roman")];
    char stringpool_str497[sizeof("lower-armenian")];
    char stringpool_str498[sizeof("content-box")];
    char stringpool_str499[sizeof("lightblue")];
    char stringpool_str500[sizeof("indianred")];
    char stringpool_str501[sizeof("inside")];
    char stringpool_str502[sizeof("button-bevel")];
    char stringpool_str503[sizeof("inherit")];
    char stringpool_str504[sizeof("context-menu")];
    char stringpool_str505[sizeof("lightpink")];
    char stringpool_str506[sizeof("text-top")];
    char stringpool_str507[sizeof("palegoldenrod")];
    char stringpool_str508[sizeof("mathematical")];
    char stringpool_str509[sizeof("palevioletred")];
    char stringpool_str510[sizeof("message-box")];
    char stringpool_str511[sizeof("royalblue")];
    char stringpool_str512[sizeof("highlight")];
    char stringpool_str513[sizeof("monospace")];
    char stringpool_str514[sizeof("ultra-expanded")];
    char stringpool_str515[sizeof("scale-down")];
    char stringpool_str516[sizeof("preserve-3d")];
    char stringpool_str517[sizeof("inline-grid")];
    char stringpool_str518[sizeof("hebrew")];
    char stringpool_str519[sizeof("backwards")];
    char stringpool_str520[sizeof("inactiveborder")];
    char stringpool_str521[sizeof("simp-chinese-formal")];
    char stringpool_str522[sizeof("listbox")];
    char stringpool_str523[sizeof("vertical-rl")];
    char stringpool_str524[sizeof("simp-chinese-informal")];
    char stringpool_str525[sizeof("olivedrab")];
    char stringpool_str526[sizeof("margin-box")];
    char stringpool_str527[sizeof("yellow")];
    char stringpool_str528[sizeof("stroke")];
    char stringpool_str529[sizeof("gurmukhi")];
    char stringpool_str530[sizeof("source-atop")];
    char stringpool_str531[sizeof("graytext")];
    char stringpool_str532[sizeof("white")];
    char stringpool_str533[sizeof("color-stop")];
    char stringpool_str534[sizeof("w-resize")];
    char stringpool_str535[sizeof("searchfield-decoration")];
    char stringpool_str536[sizeof("auto")];
    char stringpool_str537[sizeof("economy")];
    char stringpool_str538[sizeof("read-only")];
    char stringpool_str539[sizeof("exact")];
    char stringpool_str540[sizeof("decimal-leading-zero")];
    char stringpool_str541[sizeof("wheat")];
    char stringpool_str542[sizeof("yellowgreen")];
    char stringpool_str543[sizeof("vertical-lr")];
    char stringpool_str544[sizeof("lightseagreen")];
    char stringpool_str545[sizeof("gujarati")];
    char stringpool_str546[sizeof("discretionary-ligatures")];
    char stringpool_str547[sizeof("rating-level-indicator")];
    char stringpool_str548[sizeof("smooth")];
    char stringpool_str549[sizeof("last-baseline")];
    char stringpool_str550[sizeof("mediumslateblue")];
    char stringpool_str551[sizeof("relevancy-level-indicator")];
    char stringpool_str552[sizeof("sliderthumb-vertical")];
    char stringpool_str553[sizeof("no-historical-ligatures")];
    char stringpool_str554[sizeof("scrollbar")];
    char stringpool_str555[sizeof("pan-right")];
    char stringpool_str556[sizeof("aqua")];
    char stringpool_str557[sizeof("row-resize")];
    char stringpool_str558[sizeof("no-close-quote")];
    char stringpool_str559[sizeof("optimizespeed")];
    char stringpool_str560[sizeof("open-quote")];
    char stringpool_str561[sizeof("line-through")];
    char stringpool_str562[sizeof("semi-expanded")];
    char stringpool_str563[sizeof("sw-resize")];
    char stringpool_str564[sizeof("above")];
    char stringpool_str565[sizeof("text-bottom")];
    char stringpool_str566[sizeof("arabic-indic")];
    char stringpool_str567[sizeof("groove")];
    char stringpool_str568[sizeof("nw-resize")];
    char stringpool_str569[sizeof("aquamarine")];
    char stringpool_str570[sizeof("rosybrown")];
    char stringpool_str571[sizeof("lightgrey")];
    char stringpool_str572[sizeof("lightgray")];
    char stringpool_str573[sizeof("bidi-override")];
    char stringpool_str574[sizeof("table-caption")];
    char stringpool_str575[sizeof("pan-left")];
    char stringpool_str576[sizeof("each-line")];
    char stringpool_str577[sizeof("table-row")];
    char stringpool_str578[sizeof("block-axis")];
    char stringpool_str579[sizeof("padding")];
    char stringpool_str580[sizeof("buttonhighlight")];
    char stringpool_str581[sizeof("ivory")];
    char stringpool_str582[sizeof("inner-spin-button")];
    char stringpool_str583[sizeof("drop-shadow")];
    char stringpool_str584[sizeof("farthest-side")];
    char stringpool_str585[sizeof("color-burn")];
    char stringpool_str586[sizeof("textfield")];
    char stringpool_str587[sizeof("-webkit-left")];
    char stringpool_str588[sizeof("before")];
    char stringpool_str589[sizeof("inline-table")];
    char stringpool_str590[sizeof("korean-hanja-formal")];
    char stringpool_str591[sizeof("subpixel-antialiased")];
    char stringpool_str592[sizeof("mediumaquamarine")];
    char stringpool_str593[sizeof("alphabetic")];
    char stringpool_str594[sizeof("lightcyan")];
    char stringpool_str595[sizeof("korean-hanja-informal")];
    char stringpool_str596[sizeof("accumulate")];
    char stringpool_str597[sizeof("menulist-button")];
    char stringpool_str598[sizeof("media-time-remaining-display")];
    char stringpool_str599[sizeof("expanded")];
    char stringpool_str600[sizeof("activeborder")];
    char stringpool_str601[sizeof("infinite")];
    char stringpool_str602[sizeof("isolate-override")];
    char stringpool_str603[sizeof("exclusion")];
    char stringpool_str604[sizeof("appworkspace")];
    char stringpool_str605[sizeof("skewy")];
    char stringpool_str606[sizeof("pan-y")];
    char stringpool_str607[sizeof("-webkit-center")];
    char stringpool_str608[sizeof("justify")];
    char stringpool_str609[sizeof("read-write")];
    char stringpool_str610[sizeof("xx-large")];
    char stringpool_str611[sizeof("bounding-box")];
    char stringpool_str612[sizeof("break-word")];
    char stringpool_str613[sizeof("nesw-resize")];
    char stringpool_str614[sizeof("visible")];
    char stringpool_str615[sizeof("progressive")];
    char stringpool_str616[sizeof("mediumturquoise")];
    char stringpool_str617[sizeof("row-reverse")];
    char stringpool_str618[sizeof("searchfield-results-decoration")];
    char stringpool_str619[sizeof("-webkit-isolate")];
    char stringpool_str620[sizeof("media-play-button")];
    char stringpool_str621[sizeof("media-volume-sliderthumb")];
    char stringpool_str622[sizeof("-webkit-control")];
    char stringpool_str623[sizeof("-webkit-auto")];
    char stringpool_str624[sizeof("-webkit-calc")];
    char stringpool_str625[sizeof("absolute")];
    char stringpool_str626[sizeof("honeydew")];
    char stringpool_str627[sizeof("text-after-edge")];
    char stringpool_str628[sizeof("rebeccapurple")];
    char stringpool_str629[sizeof("layout")];
    char stringpool_str630[sizeof("table-header-group")];
    char stringpool_str631[sizeof("korean-hangul-formal")];
    char stringpool_str632[sizeof("color-dodge")];
    char stringpool_str633[sizeof("whitesmoke")];
    char stringpool_str634[sizeof("media-controls-background")];
    char stringpool_str635[sizeof("media-fullscreen-volume-slider")];
    char stringpool_str636[sizeof("-webkit-radial-gradient")];
    char stringpool_str637[sizeof("sideways")];
    char stringpool_str638[sizeof("xx-small")];
    char stringpool_str639[sizeof("square-button")];
    char stringpool_str640[sizeof("activecaption")];
    char stringpool_str641[sizeof("oblique")];
    char stringpool_str642[sizeof("path")];
    char stringpool_str643[sizeof("-webkit-linear-gradient")];
    char stringpool_str644[sizeof("threedhighlight")];
    char stringpool_str645[sizeof("media-toggle-closed-captions-button")];
    char stringpool_str646[sizeof("perspective")];
    char stringpool_str647[sizeof("-webkit-min-content")];
    char stringpool_str648[sizeof("column-reverse")];
    char stringpool_str649[sizeof("mediumorchid")];
    char stringpool_str650[sizeof("table-footer-group")];
    char stringpool_str651[sizeof("progress-bar")];
    char stringpool_str652[sizeof("close-quote")];
    char stringpool_str653[sizeof("buttonshadow")];
    char stringpool_str654[sizeof("-webkit-mini-control")];
    char stringpool_str655[sizeof("visiblepainted")];
    char stringpool_str656[sizeof("trad-chinese-formal")];
    char stringpool_str657[sizeof("caps-lock-indicator")];
    char stringpool_str658[sizeof("skewx")];
    char stringpool_str659[sizeof("trad-chinese-informal")];
    char stringpool_str660[sizeof("pan-x")];
    char stringpool_str661[sizeof("media-sliderthumb")];
    char stringpool_str662[sizeof("cornflowerblue")];
    char stringpool_str663[sizeof("saddlebrown")];
    char stringpool_str664[sizeof("-webkit-gradient")];
    char stringpool_str665[sizeof("searchfield-cancel-button")];
    char stringpool_str666[sizeof("-webkit-link")];
    char stringpool_str667[sizeof("-internal-variable-value")];
    char stringpool_str668[sizeof("menutext")];
    char stringpool_str669[sizeof("border-box")];
    char stringpool_str670[sizeof("continuous-capacity-level-indicator")];
    char stringpool_str671[sizeof("burlywood")];
    char stringpool_str672[sizeof("deepskyblue")];
    char stringpool_str673[sizeof("ew-resize")];
    char stringpool_str674[sizeof("lower-alpha")];
    char stringpool_str675[sizeof("pixelated")];
    char stringpool_str676[sizeof("checkbox")];
    char stringpool_str677[sizeof("inline-block")];
    char stringpool_str678[sizeof("auto-fit")];
    char stringpool_str679[sizeof("discrete-capacity-level-indicator")];
    char stringpool_str680[sizeof("floralwhite")];
    char stringpool_str681[sizeof("-webkit-isolate-override")];
    char stringpool_str682[sizeof("proximity")];
    char stringpool_str683[sizeof("media-enter-fullscreen-button")];
    char stringpool_str684[sizeof("peru")];
    char stringpool_str685[sizeof("inter-word")];
    char stringpool_str686[sizeof("space-between")];
    char stringpool_str687[sizeof("auto-fill")];
    char stringpool_str688[sizeof("lightslategrey")];
    char stringpool_str689[sizeof("lightslategray")];
    char stringpool_str690[sizeof("cubic-bezier")];
    char stringpool_str691[sizeof("sliderthumb-horizontal")];
    char stringpool_str692[sizeof("inactivecaption")];
    char stringpool_str693[sizeof("-webkit-image-set")];
    char stringpool_str694[sizeof("nwse-resize")];
    char stringpool_str695[sizeof("greenyellow")];
    char stringpool_str696[sizeof("-webkit-zoom-in")];
    char stringpool_str697[sizeof("pan-down")];
    char stringpool_str698[sizeof("darkturquoise")];
    char stringpool_str699[sizeof("visual")];
    char stringpool_str700[sizeof("-webkit-baseline-middle")];
    char stringpool_str701[sizeof("pre-wrap")];
    char stringpool_str702[sizeof("below")];
    char stringpool_str703[sizeof("always")];
    char stringpool_str704[sizeof("-webkit-grab")];
    char stringpool_str705[sizeof("cjk-ideographic")];
    char stringpool_str706[sizeof("threedshadow")];
    char stringpool_str707[sizeof("progress-bar-value")];
    char stringpool_str708[sizeof("-webkit-zoom-out")];
    char stringpool_str709[sizeof("-webkit-activelink")];
    char stringpool_str710[sizeof("inline-axis")];
    char stringpool_str711[sizeof("visiblestroke")];
    char stringpool_str712[sizeof("-webkit-pictograph")];
    char stringpool_str713[sizeof("-webkit-text")];
    char stringpool_str714[sizeof("slider-horizontal")];
    char stringpool_str715[sizeof("visiblefill")];
    char stringpool_str716[sizeof("before-edge")];
    char stringpool_str717[sizeof("-webkit-small-control")];
    char stringpool_str718[sizeof("plus-lighter")];
    char stringpool_str719[sizeof("optimizelegibility")];
    char stringpool_str720[sizeof("-internal-media-cast-off-button")];
    char stringpool_str721[sizeof("extra-condensed")];
    char stringpool_str722[sizeof("table-row-group")];
    char stringpool_str723[sizeof("plaintext")];
    char stringpool_str724[sizeof("lightskyblue")];
    char stringpool_str725[sizeof("scroll-position")];
    char stringpool_str726[sizeof("-internal-extend-to-zoom")];
    char stringpool_str727[sizeof("media-current-time-display")];
    char stringpool_str728[sizeof("ghostwhite")];
    char stringpool_str729[sizeof("-webkit-optimize-contrast")];
    char stringpool_str730[sizeof("-webkit-match-parent")];
    char stringpool_str731[sizeof("-webkit-fit-content")];
    char stringpool_str732[sizeof("-webkit-right")];
    char stringpool_str733[sizeof("ideographic")];
    char stringpool_str734[sizeof("window")];
    char stringpool_str735[sizeof("threeddarkshadow")];
    char stringpool_str736[sizeof("lightyellow")];
    char stringpool_str737[sizeof("-webkit-grabbing")];
    char stringpool_str738[sizeof("inline-flex")];
    char stringpool_str739[sizeof("-webkit-max-content")];
    char stringpool_str740[sizeof("push-button")];
    char stringpool_str741[sizeof("-webkit-cross-fade")];
    char stringpool_str742[sizeof("sandybrown")];
    char stringpool_str743[sizeof("-webkit-box")];
    char stringpool_str744[sizeof("cjk-heavenly-stem")];
    char stringpool_str745[sizeof("-webkit-body")];
    char stringpool_str746[sizeof("no-open-quote")];
    char stringpool_str747[sizeof("peachpuff")];
    char stringpool_str748[sizeof("vertical-right")];
    char stringpool_str749[sizeof("-webkit-nowrap")];
    char stringpool_str750[sizeof("extra-expanded")];
    char stringpool_str751[sizeof("lemonchiffon")];
    char stringpool_str752[sizeof("-webkit-fill-available")];
    char stringpool_str753[sizeof("-internal-active-list-box-selection")];
    char stringpool_str754[sizeof("text-before-edge")];
    char stringpool_str755[sizeof("menulist-text")];
    char stringpool_str756[sizeof("threedlightshadow")];
    char stringpool_str757[sizeof("padding-box")];
    char stringpool_str758[sizeof("-webkit-focus-ring-color")];
    char stringpool_str759[sizeof("no-discretionary-ligatures")];
    char stringpool_str760[sizeof("highlighttext")];
    char stringpool_str761[sizeof("media-overlay-play-button")];
    char stringpool_str762[sizeof("ethiopic-halehame")];
    char stringpool_str763[sizeof("media-controls-fullscreen-background")];
    char stringpool_str764[sizeof("vertical-text")];
    char stringpool_str765[sizeof("media-fullscreen-volume-slider-thumb")];
    char stringpool_str766[sizeof("lightgoldenrodyellow")];
    char stringpool_str767[sizeof("media-exit-fullscreen-button")];
    char stringpool_str768[sizeof("ethiopic-halehame-am")];
    char stringpool_str769[sizeof("cjk-earthly-branch")];
    char stringpool_str770[sizeof("-webkit-plaintext")];
    char stringpool_str771[sizeof("-webkit-paged-y")];
    char stringpool_str772[sizeof("optimizequality")];
    char stringpool_str773[sizeof("-webkit-inline-box")];
    char stringpool_str774[sizeof("navajowhite")];
    char stringpool_str775[sizeof("powderblue")];
    char stringpool_str776[sizeof("ethiopic-halehame-ti-et")];
    char stringpool_str777[sizeof("ethiopic-halehame-ti-er")];
    char stringpool_str778[sizeof("inactivecaptiontext")];
    char stringpool_str779[sizeof("-webkit-repeating-linear-gradient")];
    char stringpool_str780[sizeof("-webkit-repeating-radial-gradient")];
    char stringpool_str781[sizeof("-webkit-paged-x")];
    char stringpool_str782[sizeof("-webkit-inline-flex")];
    char stringpool_str783[sizeof("paleturquoise")];
    char stringpool_str784[sizeof("-internal-inactive-list-box-selection")];
    char stringpool_str785[sizeof("sideways-right")];
    char stringpool_str786[sizeof("-internal-media-overlay-cast-off-button")];
    char stringpool_str787[sizeof("menulist-textfield")];
    char stringpool_str788[sizeof("after-white-space")];
    char stringpool_str789[sizeof("infotext")];
    char stringpool_str790[sizeof("antiquewhite")];
    char stringpool_str791[sizeof("infobackground")];
    char stringpool_str792[sizeof("windowtext")];
    char stringpool_str793[sizeof("papayawhip")];
    char stringpool_str794[sizeof("windowframe")];
    char stringpool_str795[sizeof("-webkit-flex")];
    char stringpool_str796[sizeof("read-write-plaintext-only")];
    char stringpool_str797[sizeof("-internal-active-list-box-selection-text")];
    char stringpool_str798[sizeof("-internal-inactive-list-box-selection-text")];
    char stringpool_str799[sizeof("-webkit-xxx-large")];
  };
static const struct stringpool_t stringpool_contents =
  {
    "lr",
    "900",
    "800",
    "ltr",
    "700",
    "200",
    "600",
    "400",
    "500",
    "100",
    "300",
    "drag",
    "lime",
    "start",
    "large",
    "dot",
    "lao",
    "fine",
    "linen",
    "meter",
    "miter",
    "darken",
    "larger",
    "help",
    "linear",
    "slice",
    "fill",
    "small",
    "hanging",
    "seagreen",
    "single",
    "magenta",
    "hide",
    "srgb",
    "smaller",
    "none",
    "from",
    "darkgreen",
    "limegreen",
    "caret",
    "ledger",
    "calc",
    "cell",
    "clip",
    "format",
    "darkred",
    "disc",
    "rl",
    "circle",
    "salmon",
    "steps",
    "darkorange",
    "filled",
    "rtl",
    "hsl",
    "on",
    "url",
    "letter",
    "nonzero",
    "hue",
    "tan",
    "flat",
    "move",
    "red",
    "markers",
    "normal",
    "zoom",
    "teal",
    "b5",
    "space",
    "mongolian",
    "to",
    "hover",
    "b4",
    "dense",
    "sienna",
    "ridge",
    "beige",
    "scale",
    "under",
    "center",
    "navy",
    "discard",
    "screen",
    "hangul",
    "dotted",
    "coarse",
    "cover",
    "legal",
    "lavender",
    "loose",
    "oriya",
    "reset",
    "content",
    "unset",
    "contain",
    "central",
    "hiragana",
    "darkviolet",
    "bengali",
    "darksalmon",
    "revert",
    "over",
    "listitem",
    "hue-rotate",
    "cambodian",
    "crimson",
    "underline",
    "scale3d",
    "kannada",
    "clear",
    "clone",
    "forestgreen",
    "repeat",
    "double",
    "span",
    "copy",
    "sesame",
    "static",
    "step-end",
    "coral",
    "hsla",
    "top",
    "super",
    "bevel",
    "rotate",
    "overline",
    "orange",
    "standalone",
    "keep-all",
    "mintcream",
    "contents",
    "contrast",
    "from-image",
    "blur",
    "linear-gradient",
    "moccasin",
    "bottom",
    "reverse",
    "devanagari",
    "blue",
    "baseline",
    "separate",
    "caption",
    "step-start",
    "rect",
    "zoom-in",
    "darkolivegreen",
    "tomato",
    "rotate3d",
    "local",
    "triangle",
    "collapse",
    "counter",
    "orangered",
    "butt",
    "darkgoldenrod",
    "open",
    "oldlace",
    "min-content",
    "fit-content",
    "running",
    "relative",
    "no-repeat",
    "list-item",
    "outset",
    "button",
    "translate",
    "round",
    "cursive",
    "multiple",
    "at",
    "a3",
    "translate3d",
    "a5",
    "a4",
    "attr",
    "counters",
    "outside",
    "fullscreen",
    "bisque",
    "flex",
    "zoom-out",
    "balance",
    "destination-in",
    "all",
    "blueviolet",
    "crispedges",
    "armenian",
    "source-in",
    "spell-out",
    "linearrgb",
    "darkmagenta",
    "rgb",
    "alternate",
    "background",
    "tb",
    "sub",
    "hotpink",
    "currentcolor",
    "table",
    "use-script",
    "space-around",
    "small-caps",
    "scalez",
    "tibetan",
    "solid",
    "uppercase",
    "destination-over",
    "digits",
    "upper-latin",
    "upper-roman",
    "turquoise",
    "hangul-consonant",
    "upper-armenian",
    "closest-side",
    "sepia",
    "darkblue",
    "destination-out",
    "destination-atop",
    "green",
    "transparent",
    "source-out",
    "khaki",
    "strict",
    "deeppink",
    "radio",
    "steelblue",
    "khmer",
    "rgba",
    "black",
    "radial",
    "grey",
    "gray",
    "double-circle",
    "col-resize",
    "medium",
    "decimal",
    "georgian",
    "block",
    "lr-tb",
    "alias",
    "katakana",
    "source-over",
    "rotatez",
    "flex-end",
    "dodgerblue",
    "logical",
    "se-resize",
    "s-resize",
    "springgreen",
    "cadetblue",
    "hand",
    "slateblue",
    "safe",
    "ne-resize",
    "n-resize",
    "tb-rl",
    "darkslateblue",
    "flex-start",
    "end",
    "no-common-ligatures",
    "chocolate",
    "blink",
    "distribute",
    "stretch",
    "repeating-linear-gradient",
    "rl-tb",
    "hidden",
    "luminance",
    "closest-corner",
    "element",
    "left",
    "optional",
    "historical-ligatures",
    "middle",
    "ease",
    "seashell",
    "ns-resize",
    "cornsilk",
    "no-punctuation",
    "translatez",
    "all-scroll",
    "thin",
    "minimal-ui",
    "no-change",
    "self-end",
    "literal-punctuation",
    "darkorchid",
    "reset-size",
    "darkseagreen",
    "thistle",
    "bold",
    "border",
    "radial-gradient",
    "chartreuse",
    "mediumseagreen",
    "bolder",
    "self-start",
    "status-bar",
    "repeating-radial-gradient",
    "crosshair",
    "manipulation",
    "table-cell",
    "grayscale",
    "no-drag",
    "condensed",
    "brightness",
    "azure",
    "alternate-reverse",
    "ease-in",
    "style",
    "break-all",
    "mediumspringgreen",
    "xor",
    "snow",
    "default",
    "dimgrey",
    "dimgray",
    "unsafe",
    "horizontal",
    "darkgrey",
    "darkgray",
    "common-ligatures",
    "step-middle",
    "evenodd",
    "aliceblue",
    "avoid",
    "mediumpurple",
    "on-demand",
    "antialiased",
    "table-column",
    "semi-condensed",
    "no-drop",
    "landscape",
    "hiragana-iroha",
    "firebrick",
    "fallback",
    "sans-serif",
    "ease-out",
    "myanmar",
    "capitalize",
    "scaley",
    "cyan",
    "slategrey",
    "slategray",
    "after",
    "brown",
    "darkcyan",
    "fantasy",
    "forwards",
    "embed",
    "thai",
    "serif",
    "thick",
    "malayalam",
    "lighten",
    "lighter",
    "overlay",
    "blanchedalmond",
    "opacity",
    "rotatey",
    "buttonface",
    "browser",
    "lightgreen",
    "mediumblue",
    "darkslategrey",
    "darkslategray",
    "legacy",
    "dynamic",
    "farthest-corner",
    "right",
    "inset",
    "invert",
    "mistyrose",
    "upright",
    "grid",
    "gainsboro",
    "wrap",
    "x-small",
    "isolate",
    "initial",
    "matrix",
    "dashed",
    "x-large",
    "italic",
    "both",
    "geometricprecision",
    "slider-vertical",
    "silver",
    "minmax",
    "gold",
    "midnightblue",
    "mixed",
    "media-volume-slider",
    "fixed",
    "repeat-y",
    "translatey",
    "multiply",
    "wait",
    "matrix3d",
    "ultra-condensed",
    "after-edge",
    "interlace",
    "space-evenly",
    "e-resize",
    "lightsalmon",
    "lavenderblush",
    "ease-in-out",
    "lightcoral",
    "wavy",
    "olive",
    "ellipse",
    "icon",
    "scalex",
    "skew",
    "pre",
    "goldenrod",
    "pink",
    "sticky",
    "var",
    "menu",
    "swap",
    "difference",
    "new",
    "orchid",
    "text",
    "off",
    "maroon",
    "saturate",
    "searchfield",
    "violet",
    "pre-line",
    "horizontal-tb",
    "media-mute-button",
    "textarea",
    "table-column-group",
    "ellipsis",
    "hard-light",
    "fuchsia",
    "palegreen",
    "saturation",
    "rotatex",
    "color",
    "row",
    "katakana-iroha",
    "column",
    "paint",
    "darkkhaki",
    "show",
    "media-slider",
    "urdu",
    "portrait",
    "persian",
    "mediumvioletred",
    "wrap-reverse",
    "polygon",
    "menulist",
    "plum",
    "purple",
    "pointer",
    "soft-light",
    "max-content",
    "contextual",
    "lawngreen",
    "painted",
    "lightsteelblue",
    "nowrap",
    "threedface",
    "not-allowed",
    "skyblue",
    "scroll",
    "document",
    "upper-alpha",
    "repeat-x",
    "translatex",
    "progress",
    "inline",
    "buttontext",
    "no-contextual",
    "small-caption",
    "pan-up",
    "luminosity",
    "square",
    "captiontext",
    "alpha",
    "non-scaling-stroke",
    "indigo",
    "vertical",
    "mandatory",
    "lower-greek",
    "telugu",
    "paused",
    "media-volume-slider-container",
    "lowercase",
    "lower-latin",
    "lower-roman",
    "lower-armenian",
    "content-box",
    "lightblue",
    "indianred",
    "inside",
    "button-bevel",
    "inherit",
    "context-menu",
    "lightpink",
    "text-top",
    "palegoldenrod",
    "mathematical",
    "palevioletred",
    "message-box",
    "royalblue",
    "highlight",
    "monospace",
    "ultra-expanded",
    "scale-down",
    "preserve-3d",
    "inline-grid",
    "hebrew",
    "backwards",
    "inactiveborder",
    "simp-chinese-formal",
    "listbox",
    "vertical-rl",
    "simp-chinese-informal",
    "olivedrab",
    "margin-box",
    "yellow",
    "stroke",
    "gurmukhi",
    "source-atop",
    "graytext",
    "white",
    "color-stop",
    "w-resize",
    "searchfield-decoration",
    "auto",
    "economy",
    "read-only",
    "exact",
    "decimal-leading-zero",
    "wheat",
    "yellowgreen",
    "vertical-lr",
    "lightseagreen",
    "gujarati",
    "discretionary-ligatures",
    "rating-level-indicator",
    "smooth",
    "last-baseline",
    "mediumslateblue",
    "relevancy-level-indicator",
    "sliderthumb-vertical",
    "no-historical-ligatures",
    "scrollbar",
    "pan-right",
    "aqua",
    "row-resize",
    "no-close-quote",
    "optimizespeed",
    "open-quote",
    "line-through",
    "semi-expanded",
    "sw-resize",
    "above",
    "text-bottom",
    "arabic-indic",
    "groove",
    "nw-resize",
    "aquamarine",
    "rosybrown",
    "lightgrey",
    "lightgray",
    "bidi-override",
    "table-caption",
    "pan-left",
    "each-line",
    "table-row",
    "block-axis",
    "padding",
    "buttonhighlight",
    "ivory",
    "inner-spin-button",
    "drop-shadow",
    "farthest-side",
    "color-burn",
    "textfield",
    "-webkit-left",
    "before",
    "inline-table",
    "korean-hanja-formal",
    "subpixel-antialiased",
    "mediumaquamarine",
    "alphabetic",
    "lightcyan",
    "korean-hanja-informal",
    "accumulate",
    "menulist-button",
    "media-time-remaining-display",
    "expanded",
    "activeborder",
    "infinite",
    "isolate-override",
    "exclusion",
    "appworkspace",
    "skewy",
    "pan-y",
    "-webkit-center",
    "justify",
    "read-write",
    "xx-large",
    "bounding-box",
    "break-word",
    "nesw-resize",
    "visible",
    "progressive",
    "mediumturquoise",
    "row-reverse",
    "searchfield-results-decoration",
    "-webkit-isolate",
    "media-play-button",
    "media-volume-sliderthumb",
    "-webkit-control",
    "-webkit-auto",
    "-webkit-calc",
    "absolute",
    "honeydew",
    "text-after-edge",
    "rebeccapurple",
    "layout",
    "table-header-group",
    "korean-hangul-formal",
    "color-dodge",
    "whitesmoke",
    "media-controls-background",
    "media-fullscreen-volume-slider",
    "-webkit-radial-gradient",
    "sideways",
    "xx-small",
    "square-button",
    "activecaption",
    "oblique",
    "path",
    "-webkit-linear-gradient",
    "threedhighlight",
    "media-toggle-closed-captions-button",
    "perspective",
    "-webkit-min-content",
    "column-reverse",
    "mediumorchid",
    "table-footer-group",
    "progress-bar",
    "close-quote",
    "buttonshadow",
    "-webkit-mini-control",
    "visiblepainted",
    "trad-chinese-formal",
    "caps-lock-indicator",
    "skewx",
    "trad-chinese-informal",
    "pan-x",
    "media-sliderthumb",
    "cornflowerblue",
    "saddlebrown",
    "-webkit-gradient",
    "searchfield-cancel-button",
    "-webkit-link",
    "-internal-variable-value",
    "menutext",
    "border-box",
    "continuous-capacity-level-indicator",
    "burlywood",
    "deepskyblue",
    "ew-resize",
    "lower-alpha",
    "pixelated",
    "checkbox",
    "inline-block",
    "auto-fit",
    "discrete-capacity-level-indicator",
    "floralwhite",
    "-webkit-isolate-override",
    "proximity",
    "media-enter-fullscreen-button",
    "peru",
    "inter-word",
    "space-between",
    "auto-fill",
    "lightslategrey",
    "lightslategray",
    "cubic-bezier",
    "sliderthumb-horizontal",
    "inactivecaption",
    "-webkit-image-set",
    "nwse-resize",
    "greenyellow",
    "-webkit-zoom-in",
    "pan-down",
    "darkturquoise",
    "visual",
    "-webkit-baseline-middle",
    "pre-wrap",
    "below",
    "always",
    "-webkit-grab",
    "cjk-ideographic",
    "threedshadow",
    "progress-bar-value",
    "-webkit-zoom-out",
    "-webkit-activelink",
    "inline-axis",
    "visiblestroke",
    "-webkit-pictograph",
    "-webkit-text",
    "slider-horizontal",
    "visiblefill",
    "before-edge",
    "-webkit-small-control",
    "plus-lighter",
    "optimizelegibility",
    "-internal-media-cast-off-button",
    "extra-condensed",
    "table-row-group",
    "plaintext",
    "lightskyblue",
    "scroll-position",
    "-internal-extend-to-zoom",
    "media-current-time-display",
    "ghostwhite",
    "-webkit-optimize-contrast",
    "-webkit-match-parent",
    "-webkit-fit-content",
    "-webkit-right",
    "ideographic",
    "window",
    "threeddarkshadow",
    "lightyellow",
    "-webkit-grabbing",
    "inline-flex",
    "-webkit-max-content",
    "push-button",
    "-webkit-cross-fade",
    "sandybrown",
    "-webkit-box",
    "cjk-heavenly-stem",
    "-webkit-body",
    "no-open-quote",
    "peachpuff",
    "vertical-right",
    "-webkit-nowrap",
    "extra-expanded",
    "lemonchiffon",
    "-webkit-fill-available",
    "-internal-active-list-box-selection",
    "text-before-edge",
    "menulist-text",
    "threedlightshadow",
    "padding-box",
    "-webkit-focus-ring-color",
    "no-discretionary-ligatures",
    "highlighttext",
    "media-overlay-play-button",
    "ethiopic-halehame",
    "media-controls-fullscreen-background",
    "vertical-text",
    "media-fullscreen-volume-slider-thumb",
    "lightgoldenrodyellow",
    "media-exit-fullscreen-button",
    "ethiopic-halehame-am",
    "cjk-earthly-branch",
    "-webkit-plaintext",
    "-webkit-paged-y",
    "optimizequality",
    "-webkit-inline-box",
    "navajowhite",
    "powderblue",
    "ethiopic-halehame-ti-et",
    "ethiopic-halehame-ti-er",
    "inactivecaptiontext",
    "-webkit-repeating-linear-gradient",
    "-webkit-repeating-radial-gradient",
    "-webkit-paged-x",
    "-webkit-inline-flex",
    "paleturquoise",
    "-internal-inactive-list-box-selection",
    "sideways-right",
    "-internal-media-overlay-cast-off-button",
    "menulist-textfield",
    "after-white-space",
    "infotext",
    "antiquewhite",
    "infobackground",
    "windowtext",
    "papayawhip",
    "windowframe",
    "-webkit-flex",
    "read-write-plaintext-only",
    "-internal-active-list-box-selection-text",
    "-internal-inactive-list-box-selection-text",
    "-webkit-xxx-large"
  };
#define stringpool ((const char *) &stringpool_contents)
const struct Value *
CSSValueKeywordsHash::findValueImpl (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 800,
      MIN_WORD_LENGTH = 2,
      MAX_WORD_LENGTH = 42,
      MIN_HASH_VALUE = 20,
      MAX_HASH_VALUE = 5793
    };

  static const struct Value value_word_list[] =
    {
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str0, CSSValueLr},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str1, CSSValue900},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str2, CSSValue800},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str3, CSSValueLtr},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str4, CSSValue700},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str5, CSSValue200},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str6, CSSValue600},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str7, CSSValue400},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str8, CSSValue500},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str9, CSSValue100},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str10, CSSValue300},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str11, CSSValueDrag},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str12, CSSValueLime},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str13, CSSValueStart},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str14, CSSValueLarge},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str15, CSSValueDot},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str16, CSSValueLao},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str17, CSSValueFine},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str18, CSSValueLinen},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str19, CSSValueMeter},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str20, CSSValueMiter},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str21, CSSValueDarken},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str22, CSSValueLarger},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str23, CSSValueHelp},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str24, CSSValueLinear},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str25, CSSValueSlice},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str26, CSSValueFill},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str27, CSSValueSmall},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str28, CSSValueHanging},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str29, CSSValueSeagreen},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str30, CSSValueSingle},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str31, CSSValueMagenta},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str32, CSSValueHide},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str33, CSSValueSRGB},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str34, CSSValueSmaller},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str35, CSSValueNone},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str36, CSSValueFrom},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str37, CSSValueDarkgreen},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str38, CSSValueLimegreen},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str39, CSSValueCaret},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str40, CSSValueLedger},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str41, CSSValueCalc},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str42, CSSValueCell},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str43, CSSValueClip},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str44, CSSValueFormat},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str45, CSSValueDarkred},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str46, CSSValueDisc},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str47, CSSValueRl},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str48, CSSValueCircle},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str49, CSSValueSalmon},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str50, CSSValueSteps},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str51, CSSValueDarkorange},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str52, CSSValueFilled},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str53, CSSValueRtl},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str54, CSSValueHsl},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str55, CSSValueOn},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str56, CSSValueUrl},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str57, CSSValueLetter},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str58, CSSValueNonzero},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str59, CSSValueHue},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str60, CSSValueTan},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str61, CSSValueFlat},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str62, CSSValueMove},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str63, CSSValueRed},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str64, CSSValueMarkers},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str65, CSSValueNormal},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str66, CSSValueZoom},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str67, CSSValueTeal},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str68, CSSValueB5},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str69, CSSValueSpace},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str70, CSSValueMongolian},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str71, CSSValueTo},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str72, CSSValueHover},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str73, CSSValueB4},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str74, CSSValueDense},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str75, CSSValueSienna},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str76, CSSValueRidge},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str77, CSSValueBeige},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str78, CSSValueScale},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str79, CSSValueUnder},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str80, CSSValueCenter},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str81, CSSValueNavy},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str82, CSSValueDiscard},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str83, CSSValueScreen},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str84, CSSValueHangul},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str85, CSSValueDotted},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str86, CSSValueCoarse},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str87, CSSValueCover},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str88, CSSValueLegal},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str89, CSSValueLavender},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str90, CSSValueLoose},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str91, CSSValueOriya},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str92, CSSValueReset},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str93, CSSValueContent},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str94, CSSValueUnset},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str95, CSSValueContain},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str96, CSSValueCentral},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str97, CSSValueHiragana},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str98, CSSValueDarkviolet},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str99, CSSValueBengali},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str100, CSSValueDarksalmon},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str101, CSSValueRevert},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str102, CSSValueOver},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str103, CSSValueListitem},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str104, CSSValueHueRotate},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str105, CSSValueCambodian},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str106, CSSValueCrimson},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str107, CSSValueUnderline},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str108, CSSValueScale3d},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str109, CSSValueKannada},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str110, CSSValueClear},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str111, CSSValueClone},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str112, CSSValueForestgreen},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str113, CSSValueRepeat},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str114, CSSValueDouble},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str115, CSSValueSpan},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str116, CSSValueCopy},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str117, CSSValueSesame},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str118, CSSValueStatic},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str119, CSSValueStepEnd},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str120, CSSValueCoral},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str121, CSSValueHsla},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str122, CSSValueTop},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str123, CSSValueSuper},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str124, CSSValueBevel},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str125, CSSValueRotate},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str126, CSSValueOverline},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str127, CSSValueOrange},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str128, CSSValueStandalone},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str129, CSSValueKeepAll},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str130, CSSValueMintcream},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str131, CSSValueContents},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str132, CSSValueContrast},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str133, CSSValueFromImage},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str134, CSSValueBlur},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str135, CSSValueLinearGradient},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str136, CSSValueMoccasin},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str137, CSSValueBottom},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str138, CSSValueReverse},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str139, CSSValueDevanagari},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str140, CSSValueBlue},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str141, CSSValueBaseline},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str142, CSSValueSeparate},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str143, CSSValueCaption},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str144, CSSValueStepStart},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str145, CSSValueRect},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str146, CSSValueZoomIn},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str147, CSSValueDarkolivegreen},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str148, CSSValueTomato},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str149, CSSValueRotate3d},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str150, CSSValueLocal},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str151, CSSValueTriangle},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str152, CSSValueCollapse},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str153, CSSValueCounter},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str154, CSSValueOrangered},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str155, CSSValueButt},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str156, CSSValueDarkgoldenrod},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str157, CSSValueOpen},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str158, CSSValueOldlace},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str159, CSSValueMinContent},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str160, CSSValueFitContent},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str161, CSSValueRunning},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str162, CSSValueRelative},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str163, CSSValueNoRepeat},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str164, CSSValueListItem},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str165, CSSValueOutset},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str166, CSSValueButton},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str167, CSSValueTranslate},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str168, CSSValueRound},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str169, CSSValueCursive},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str170, CSSValueMultiple},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str171, CSSValueAt},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str172, CSSValueA3},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str173, CSSValueTranslate3d},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str174, CSSValueA5},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str175, CSSValueA4},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str176, CSSValueAttr},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str177, CSSValueCounters},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str178, CSSValueOutside},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str179, CSSValueFullscreen},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str180, CSSValueBisque},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str181, CSSValueFlex},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str182, CSSValueZoomOut},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str183, CSSValueBalance},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str184, CSSValueDestinationIn},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str185, CSSValueAll},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str186, CSSValueBlueviolet},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str187, CSSValueCrispEdges},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str188, CSSValueArmenian},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str189, CSSValueSourceIn},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str190, CSSValueSpellOut},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str191, CSSValueLinearRGB},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str192, CSSValueDarkmagenta},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str193, CSSValueRgb},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str194, CSSValueAlternate},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str195, CSSValueBackground},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str196, CSSValueTb},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str197, CSSValueSub},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str198, CSSValueHotpink},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str199, CSSValueCurrentcolor},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str200, CSSValueTable},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str201, CSSValueUseScript},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str202, CSSValueSpaceAround},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str203, CSSValueSmallCaps},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str204, CSSValueScaleZ},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str205, CSSValueTibetan},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str206, CSSValueSolid},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str207, CSSValueUppercase},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str208, CSSValueDestinationOver},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str209, CSSValueDigits},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str210, CSSValueUpperLatin},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str211, CSSValueUpperRoman},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str212, CSSValueTurquoise},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str213, CSSValueHangulConsonant},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str214, CSSValueUpperArmenian},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str215, CSSValueClosestSide},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str216, CSSValueSepia},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str217, CSSValueDarkblue},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str218, CSSValueDestinationOut},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str219, CSSValueDestinationAtop},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str220, CSSValueGreen},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str221, CSSValueTransparent},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str222, CSSValueSourceOut},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str223, CSSValueKhaki},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str224, CSSValueStrict},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str225, CSSValueDeeppink},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str226, CSSValueRadio},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str227, CSSValueSteelblue},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str228, CSSValueKhmer},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str229, CSSValueRgba},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str230, CSSValueBlack},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str231, CSSValueRadial},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str232, CSSValueGrey},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str233, CSSValueGray},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str234, CSSValueDoubleCircle},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str235, CSSValueColResize},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str236, CSSValueMedium},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str237, CSSValueDecimal},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str238, CSSValueGeorgian},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str239, CSSValueBlock},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str240, CSSValueLrTb},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str241, CSSValueAlias},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str242, CSSValueKatakana},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str243, CSSValueSourceOver},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str244, CSSValueRotateZ},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str245, CSSValueFlexEnd},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str246, CSSValueDodgerblue},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str247, CSSValueLogical},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str248, CSSValueSeResize},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str249, CSSValueSResize},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str250, CSSValueSpringgreen},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str251, CSSValueCadetblue},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str252, CSSValueHand},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str253, CSSValueSlateblue},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str254, CSSValueSafe},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str255, CSSValueNeResize},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str256, CSSValueNResize},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str257, CSSValueTbRl},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str258, CSSValueDarkslateblue},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str259, CSSValueFlexStart},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str260, CSSValueEnd},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str261, CSSValueNoCommonLigatures},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str262, CSSValueChocolate},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str263, CSSValueBlink},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str264, CSSValueDistribute},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str265, CSSValueStretch},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str266, CSSValueRepeatingLinearGradient},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str267, CSSValueRlTb},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str268, CSSValueHidden},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str269, CSSValueLuminance},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str270, CSSValueClosestCorner},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str271, CSSValueElement},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str272, CSSValueLeft},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str273, CSSValueOptional},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str274, CSSValueHistoricalLigatures},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str275, CSSValueMiddle},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str276, CSSValueEase},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str277, CSSValueSeashell},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str278, CSSValueNsResize},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str279, CSSValueCornsilk},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str280, CSSValueNoPunctuation},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str281, CSSValueTranslateZ},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str282, CSSValueAllScroll},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str283, CSSValueThin},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str284, CSSValueMinimalUi},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str285, CSSValueNoChange},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str286, CSSValueSelfEnd},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str287, CSSValueLiteralPunctuation},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str288, CSSValueDarkorchid},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str289, CSSValueResetSize},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str290, CSSValueDarkseagreen},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str291, CSSValueThistle},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str292, CSSValueBold},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str293, CSSValueBorder},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str294, CSSValueRadialGradient},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str295, CSSValueChartreuse},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str296, CSSValueMediumseagreen},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str297, CSSValueBolder},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str298, CSSValueSelfStart},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str299, CSSValueStatusBar},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str300, CSSValueRepeatingRadialGradient},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str301, CSSValueCrosshair},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str302, CSSValueManipulation},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str303, CSSValueTableCell},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str304, CSSValueGrayscale},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str305, CSSValueNoDrag},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str306, CSSValueCondensed},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str307, CSSValueBrightness},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str308, CSSValueAzure},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str309, CSSValueAlternateReverse},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str310, CSSValueEaseIn},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str311, CSSValueStyle},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str312, CSSValueBreakAll},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str313, CSSValueMediumspringgreen},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str314, CSSValueXor},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str315, CSSValueSnow},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str316, CSSValueDefault},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str317, CSSValueDimgrey},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str318, CSSValueDimgray},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str319, CSSValueUnsafe},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str320, CSSValueHorizontal},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str321, CSSValueDarkgrey},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str322, CSSValueDarkgray},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str323, CSSValueCommonLigatures},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str324, CSSValueStepMiddle},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str325, CSSValueEvenodd},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str326, CSSValueAliceblue},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str327, CSSValueAvoid},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str328, CSSValueMediumpurple},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str329, CSSValueOnDemand},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str330, CSSValueAntialiased},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str331, CSSValueTableColumn},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str332, CSSValueSemiCondensed},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str333, CSSValueNoDrop},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str334, CSSValueLandscape},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str335, CSSValueHiraganaIroha},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str336, CSSValueFirebrick},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str337, CSSValueFallback},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str338, CSSValueSansSerif},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str339, CSSValueEaseOut},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str340, CSSValueMyanmar},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str341, CSSValueCapitalize},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str342, CSSValueScaleY},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str343, CSSValueCyan},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str344, CSSValueSlategrey},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str345, CSSValueSlategray},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str346, CSSValueAfter},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str347, CSSValueBrown},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str348, CSSValueDarkcyan},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str349, CSSValueFantasy},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str350, CSSValueForwards},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str351, CSSValueEmbed},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str352, CSSValueThai},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str353, CSSValueSerif},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str354, CSSValueThick},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str355, CSSValueMalayalam},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str356, CSSValueLighten},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str357, CSSValueLighter},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str358, CSSValueOverlay},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str359, CSSValueBlanchedalmond},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str360, CSSValueOpacity},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str361, CSSValueRotateY},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str362, CSSValueButtonface},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str363, CSSValueBrowser},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str364, CSSValueLightgreen},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str365, CSSValueMediumblue},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str366, CSSValueDarkslategrey},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str367, CSSValueDarkslategray},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str368, CSSValueLegacy},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str369, CSSValueDynamic},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str370, CSSValueFarthestCorner},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str371, CSSValueRight},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str372, CSSValueInset},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str373, CSSValueInvert},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str374, CSSValueMistyrose},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str375, CSSValueUpright},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str376, CSSValueGrid},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str377, CSSValueGainsboro},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str378, CSSValueWrap},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str379, CSSValueXSmall},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str380, CSSValueIsolate},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str381, CSSValueInitial},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str382, CSSValueMatrix},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str383, CSSValueDashed},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str384, CSSValueXLarge},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str385, CSSValueItalic},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str386, CSSValueBoth},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str387, CSSValueGeometricPrecision},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str388, CSSValueSliderVertical},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str389, CSSValueSilver},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str390, CSSValueMinmax},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str391, CSSValueGold},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str392, CSSValueMidnightblue},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str393, CSSValueMixed},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str394, CSSValueMediaVolumeSlider},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str395, CSSValueFixed},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str396, CSSValueRepeatY},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str397, CSSValueTranslateY},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str398, CSSValueMultiply},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str399, CSSValueWait},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str400, CSSValueMatrix3d},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str401, CSSValueUltraCondensed},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str402, CSSValueAfterEdge},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str403, CSSValueInterlace},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str404, CSSValueSpaceEvenly},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str405, CSSValueEResize},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str406, CSSValueLightsalmon},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str407, CSSValueLavenderblush},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str408, CSSValueEaseInOut},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str409, CSSValueLightcoral},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str410, CSSValueWavy},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str411, CSSValueOlive},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str412, CSSValueEllipse},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str413, CSSValueIcon},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str414, CSSValueScaleX},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str415, CSSValueSkew},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str416, CSSValuePre},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str417, CSSValueGoldenrod},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str418, CSSValuePink},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str419, CSSValueSticky},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str420, CSSValueVar},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str421, CSSValueMenu},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str422, CSSValueSwap},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str423, CSSValueDifference},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str424, CSSValueNew},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str425, CSSValueOrchid},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str426, CSSValueText},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str427, CSSValueOff},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str428, CSSValueMaroon},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str429, CSSValueSaturate},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str430, CSSValueSearchfield},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str431, CSSValueViolet},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str432, CSSValuePreLine},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str433, CSSValueHorizontalTb},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str434, CSSValueMediaMuteButton},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str435, CSSValueTextarea},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str436, CSSValueTableColumnGroup},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str437, CSSValueEllipsis},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str438, CSSValueHardLight},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str439, CSSValueFuchsia},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str440, CSSValuePalegreen},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str441, CSSValueSaturation},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str442, CSSValueRotateX},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str443, CSSValueColor},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str444, CSSValueRow},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str445, CSSValueKatakanaIroha},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str446, CSSValueColumn},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str447, CSSValuePaint},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str448, CSSValueDarkkhaki},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str449, CSSValueShow},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str450, CSSValueMediaSlider},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str451, CSSValueUrdu},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str452, CSSValuePortrait},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str453, CSSValuePersian},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str454, CSSValueMediumvioletred},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str455, CSSValueWrapReverse},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str456, CSSValuePolygon},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str457, CSSValueMenulist},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str458, CSSValuePlum},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str459, CSSValuePurple},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str460, CSSValuePointer},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str461, CSSValueSoftLight},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str462, CSSValueMaxContent},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str463, CSSValueContextual},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str464, CSSValueLawngreen},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str465, CSSValuePainted},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str466, CSSValueLightsteelblue},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str467, CSSValueNowrap},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str468, CSSValueThreedface},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str469, CSSValueNotAllowed},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str470, CSSValueSkyblue},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str471, CSSValueScroll},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str472, CSSValueDocument},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str473, CSSValueUpperAlpha},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str474, CSSValueRepeatX},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str475, CSSValueTranslateX},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str476, CSSValueProgress},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str477, CSSValueInline},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str478, CSSValueButtontext},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str479, CSSValueNoContextual},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str480, CSSValueSmallCaption},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str481, CSSValuePanUp},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str482, CSSValueLuminosity},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str483, CSSValueSquare},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str484, CSSValueCaptiontext},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str485, CSSValueAlpha},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str486, CSSValueNonScalingStroke},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str487, CSSValueIndigo},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str488, CSSValueVertical},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str489, CSSValueMandatory},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str490, CSSValueLowerGreek},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str491, CSSValueTelugu},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str492, CSSValuePaused},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str493, CSSValueMediaVolumeSliderContainer},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str494, CSSValueLowercase},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str495, CSSValueLowerLatin},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str496, CSSValueLowerRoman},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str497, CSSValueLowerArmenian},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str498, CSSValueContentBox},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str499, CSSValueLightblue},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str500, CSSValueIndianred},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str501, CSSValueInside},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str502, CSSValueButtonBevel},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str503, CSSValueInherit},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str504, CSSValueContextMenu},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str505, CSSValueLightpink},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str506, CSSValueTextTop},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str507, CSSValuePalegoldenrod},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str508, CSSValueMathematical},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str509, CSSValuePalevioletred},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str510, CSSValueMessageBox},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str511, CSSValueRoyalblue},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str512, CSSValueHighlight},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str513, CSSValueMonospace},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str514, CSSValueUltraExpanded},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str515, CSSValueScaleDown},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str516, CSSValuePreserve3d},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str517, CSSValueInlineGrid},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str518, CSSValueHebrew},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str519, CSSValueBackwards},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str520, CSSValueInactiveborder},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str521, CSSValueSimpChineseFormal},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str522, CSSValueListbox},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str523, CSSValueVerticalRl},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str524, CSSValueSimpChineseInformal},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str525, CSSValueOlivedrab},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str526, CSSValueMarginBox},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str527, CSSValueYellow},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str528, CSSValueStroke},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str529, CSSValueGurmukhi},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str530, CSSValueSourceAtop},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str531, CSSValueGraytext},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str532, CSSValueWhite},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str533, CSSValueColorStop},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str534, CSSValueWResize},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str535, CSSValueSearchfieldDecoration},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str536, CSSValueAuto},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str537, CSSValueEconomy},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str538, CSSValueReadOnly},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str539, CSSValueExact},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str540, CSSValueDecimalLeadingZero},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str541, CSSValueWheat},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str542, CSSValueYellowgreen},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str543, CSSValueVerticalLr},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str544, CSSValueLightseagreen},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str545, CSSValueGujarati},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str546, CSSValueDiscretionaryLigatures},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str547, CSSValueRatingLevelIndicator},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str548, CSSValueSmooth},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str549, CSSValueLastBaseline},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str550, CSSValueMediumslateblue},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str551, CSSValueRelevancyLevelIndicator},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str552, CSSValueSliderthumbVertical},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str553, CSSValueNoHistoricalLigatures},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str554, CSSValueScrollbar},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str555, CSSValuePanRight},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str556, CSSValueAqua},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str557, CSSValueRowResize},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str558, CSSValueNoCloseQuote},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str559, CSSValueOptimizeSpeed},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str560, CSSValueOpenQuote},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str561, CSSValueLineThrough},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str562, CSSValueSemiExpanded},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str563, CSSValueSwResize},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str564, CSSValueAbove},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str565, CSSValueTextBottom},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str566, CSSValueArabicIndic},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str567, CSSValueGroove},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str568, CSSValueNwResize},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str569, CSSValueAquamarine},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str570, CSSValueRosybrown},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str571, CSSValueLightgrey},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str572, CSSValueLightgray},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str573, CSSValueBidiOverride},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str574, CSSValueTableCaption},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str575, CSSValuePanLeft},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str576, CSSValueEachLine},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str577, CSSValueTableRow},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str578, CSSValueBlockAxis},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str579, CSSValuePadding},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str580, CSSValueButtonhighlight},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str581, CSSValueIvory},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str582, CSSValueInnerSpinButton},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str583, CSSValueDropShadow},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str584, CSSValueFarthestSide},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str585, CSSValueColorBurn},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str586, CSSValueTextfield},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str587, CSSValueWebkitLeft},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str588, CSSValueBefore},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str589, CSSValueInlineTable},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str590, CSSValueKoreanHanjaFormal},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str591, CSSValueSubpixelAntialiased},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str592, CSSValueMediumaquamarine},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str593, CSSValueAlphabetic},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str594, CSSValueLightcyan},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str595, CSSValueKoreanHanjaInformal},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str596, CSSValueAccumulate},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str597, CSSValueMenulistButton},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str598, CSSValueMediaTimeRemainingDisplay},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str599, CSSValueExpanded},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str600, CSSValueActiveborder},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str601, CSSValueInfinite},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str602, CSSValueIsolateOverride},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str603, CSSValueExclusion},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str604, CSSValueAppworkspace},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str605, CSSValueSkewY},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str606, CSSValuePanY},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str607, CSSValueWebkitCenter},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str608, CSSValueJustify},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str609, CSSValueReadWrite},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str610, CSSValueXxLarge},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str611, CSSValueBoundingBox},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str612, CSSValueBreakWord},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str613, CSSValueNeswResize},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str614, CSSValueVisible},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str615, CSSValueProgressive},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str616, CSSValueMediumturquoise},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str617, CSSValueRowReverse},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str618, CSSValueSearchfieldResultsDecoration},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str619, CSSValueWebkitIsolate},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str620, CSSValueMediaPlayButton},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str621, CSSValueMediaVolumeSliderthumb},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str622, CSSValueWebkitControl},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str623, CSSValueWebkitAuto},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str624, CSSValueWebkitCalc},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str625, CSSValueAbsolute},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str626, CSSValueHoneydew},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str627, CSSValueTextAfterEdge},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str628, CSSValueRebeccapurple},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str629, CSSValueLayout},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str630, CSSValueTableHeaderGroup},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str631, CSSValueKoreanHangulFormal},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str632, CSSValueColorDodge},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str633, CSSValueWhitesmoke},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str634, CSSValueMediaControlsBackground},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str635, CSSValueMediaFullscreenVolumeSlider},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str636, CSSValueWebkitRadialGradient},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str637, CSSValueSideways},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str638, CSSValueXxSmall},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str639, CSSValueSquareButton},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str640, CSSValueActivecaption},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str641, CSSValueOblique},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str642, CSSValuePath},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str643, CSSValueWebkitLinearGradient},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str644, CSSValueThreedhighlight},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str645, CSSValueMediaToggleClosedCaptionsButton},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str646, CSSValuePerspective},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str647, CSSValueWebkitMinContent},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str648, CSSValueColumnReverse},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str649, CSSValueMediumorchid},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str650, CSSValueTableFooterGroup},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str651, CSSValueProgressBar},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str652, CSSValueCloseQuote},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str653, CSSValueButtonshadow},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str654, CSSValueWebkitMiniControl},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str655, CSSValueVisiblePainted},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str656, CSSValueTradChineseFormal},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str657, CSSValueCapsLockIndicator},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str658, CSSValueSkewX},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str659, CSSValueTradChineseInformal},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str660, CSSValuePanX},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str661, CSSValueMediaSliderthumb},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str662, CSSValueCornflowerblue},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str663, CSSValueSaddlebrown},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str664, CSSValueWebkitGradient},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str665, CSSValueSearchfieldCancelButton},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str666, CSSValueWebkitLink},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str667, CSSValueInternalVariableValue},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str668, CSSValueMenutext},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str669, CSSValueBorderBox},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str670, CSSValueContinuousCapacityLevelIndicator},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str671, CSSValueBurlywood},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str672, CSSValueDeepskyblue},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str673, CSSValueEwResize},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str674, CSSValueLowerAlpha},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str675, CSSValuePixelated},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str676, CSSValueCheckbox},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str677, CSSValueInlineBlock},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str678, CSSValueAutoFit},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str679, CSSValueDiscreteCapacityLevelIndicator},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str680, CSSValueFloralwhite},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str681, CSSValueWebkitIsolateOverride},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str682, CSSValueProximity},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str683, CSSValueMediaEnterFullscreenButton},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str684, CSSValuePeru},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str685, CSSValueInterWord},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str686, CSSValueSpaceBetween},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str687, CSSValueAutoFill},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str688, CSSValueLightslategrey},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str689, CSSValueLightslategray},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str690, CSSValueCubicBezier},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str691, CSSValueSliderthumbHorizontal},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str692, CSSValueInactivecaption},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str693, CSSValueWebkitImageSet},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str694, CSSValueNwseResize},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str695, CSSValueGreenyellow},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str696, CSSValueWebkitZoomIn},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str697, CSSValuePanDown},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str698, CSSValueDarkturquoise},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str699, CSSValueVisual},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str700, CSSValueWebkitBaselineMiddle},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str701, CSSValuePreWrap},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str702, CSSValueBelow},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str703, CSSValueAlways},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str704, CSSValueWebkitGrab},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str705, CSSValueCjkIdeographic},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str706, CSSValueThreedshadow},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str707, CSSValueProgressBarValue},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str708, CSSValueWebkitZoomOut},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str709, CSSValueWebkitActivelink},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str710, CSSValueInlineAxis},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str711, CSSValueVisibleStroke},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str712, CSSValueWebkitPictograph},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str713, CSSValueWebkitText},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str714, CSSValueSliderHorizontal},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str715, CSSValueVisibleFill},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str716, CSSValueBeforeEdge},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str717, CSSValueWebkitSmallControl},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str718, CSSValuePlusLighter},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str719, CSSValueOptimizeLegibility},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str720, CSSValueInternalMediaCastOffButton},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str721, CSSValueExtraCondensed},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str722, CSSValueTableRowGroup},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str723, CSSValuePlaintext},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str724, CSSValueLightskyblue},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str725, CSSValueScrollPosition},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str726, CSSValueInternalExtendToZoom},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str727, CSSValueMediaCurrentTimeDisplay},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str728, CSSValueGhostwhite},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str729, CSSValueWebkitOptimizeContrast},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str730, CSSValueWebkitMatchParent},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str731, CSSValueWebkitFitContent},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str732, CSSValueWebkitRight},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str733, CSSValueIdeographic},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str734, CSSValueWindow},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str735, CSSValueThreeddarkshadow},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str736, CSSValueLightyellow},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str737, CSSValueWebkitGrabbing},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str738, CSSValueInlineFlex},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str739, CSSValueWebkitMaxContent},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str740, CSSValuePushButton},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str741, CSSValueWebkitCrossFade},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str742, CSSValueSandybrown},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str743, CSSValueWebkitBox},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str744, CSSValueCjkHeavenlyStem},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str745, CSSValueWebkitBody},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str746, CSSValueNoOpenQuote},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str747, CSSValuePeachpuff},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str748, CSSValueVerticalRight},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str749, CSSValueWebkitNowrap},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str750, CSSValueExtraExpanded},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str751, CSSValueLemonchiffon},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str752, CSSValueWebkitFillAvailable},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str753, CSSValueInternalActiveListBoxSelection},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str754, CSSValueTextBeforeEdge},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str755, CSSValueMenulistText},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str756, CSSValueThreedlightshadow},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str757, CSSValuePaddingBox},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str758, CSSValueWebkitFocusRingColor},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str759, CSSValueNoDiscretionaryLigatures},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str760, CSSValueHighlighttext},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str761, CSSValueMediaOverlayPlayButton},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str762, CSSValueEthiopicHalehame},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str763, CSSValueMediaControlsFullscreenBackground},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str764, CSSValueVerticalText},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str765, CSSValueMediaFullscreenVolumeSliderThumb},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str766, CSSValueLightgoldenrodyellow},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str767, CSSValueMediaExitFullscreenButton},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str768, CSSValueEthiopicHalehameAm},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str769, CSSValueCjkEarthlyBranch},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str770, CSSValueWebkitPlaintext},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str771, CSSValueWebkitPagedY},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str772, CSSValueOptimizeQuality},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str773, CSSValueWebkitInlineBox},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str774, CSSValueNavajowhite},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str775, CSSValuePowderblue},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str776, CSSValueEthiopicHalehameTiEt},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str777, CSSValueEthiopicHalehameTiEr},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str778, CSSValueInactivecaptiontext},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str779, CSSValueWebkitRepeatingLinearGradient},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str780, CSSValueWebkitRepeatingRadialGradient},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str781, CSSValueWebkitPagedX},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str782, CSSValueWebkitInlineFlex},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str783, CSSValuePaleturquoise},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str784, CSSValueInternalInactiveListBoxSelection},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str785, CSSValueSidewaysRight},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str786, CSSValueInternalMediaOverlayCastOffButton},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str787, CSSValueMenulistTextfield},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str788, CSSValueAfterWhiteSpace},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str789, CSSValueInfotext},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str790, CSSValueAntiquewhite},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str791, CSSValueInfobackground},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str792, CSSValueWindowtext},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str793, CSSValuePapayawhip},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str794, CSSValueWindowframe},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str795, CSSValueWebkitFlex},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str796, CSSValueReadWritePlaintextOnly},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str797, CSSValueInternalActiveListBoxSelectionText},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str798, CSSValueInternalInactiveListBoxSelectionText},
      {(int)(long)&((struct stringpool_t *)0)->stringpool_str799, CSSValueWebkitXxxLarge}
    };

  static const short lookup[] =
    {
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
        0,  -1,  -1,  -1,  -1,  -1,   1,   2,   3,   4,
        5,   6,   7,   8,   9,  -1,  -1,  10,  11,  -1,
       12,  13,  -1,  -1,  -1,  -1,  14,  15,  16,  17,
       -1,  -1,  18,  19,  20,  21,  -1,  -1,  22,  -1,
       23,  -1,  -1,  24,  25,  26,  27,  -1,  -1,  -1,
       -1,  28,  29,  -1,  -1,  30,  31,  -1,  -1,  -1,
       -1,  -1,  -1,  32,  -1,  33,  34,  35,  -1,  36,
       37,  -1,  -1,  38,  39,  40,  -1,  -1,  41,  42,
       -1,  -1,  43,  -1,  -1,  -1,  44,  45,  -1,  -1,
       46,  -1,  -1,  -1,  -1,  -1,  47,  -1,  48,  -1,
       49,  50,  51,  52,  53,  54,  55,  -1,  56,  57,
       -1,  58,  -1,  -1,  -1,  -1,  -1,  59,  -1,  60,
       61,  62,  -1,  63,  64,  65,  66,  67,  68,  69,
       70,  71,  72,  73,  74,  -1,  -1,  -1,  -1,  -1,
       75,  76,  -1,  -1,  -1,  -1,  -1,  -1,  77,  78,
       -1,  -1,  79,  80,  -1,  -1,  -1,  -1,  81,  -1,
       -1,  82,  -1,  -1,  -1,  -1,  -1,  83,  84,  -1,
       85,  86,  -1,  87,  -1,  -1,  88,  89,  90,  91,
       -1,  92,  93,  94,  95,  96,  -1,  97,  -1,  98,
       99, 100,  -1, 101,  -1,  -1,  -1, 102,  -1,  -1,
      103,  -1,  -1,  -1, 104,  -1, 105,  -1, 106,  -1,
      107, 108,  -1,  -1, 109, 110, 111,  -1,  -1,  -1,
      112, 113,  -1,  -1,  -1,  -1,  -1,  -1, 114, 115,
      116, 117,  -1, 118,  -1,  -1,  -1, 119, 120, 121,
       -1,  -1,  -1,  -1,  -1,  -1,  -1, 122,  -1,  -1,
       -1, 123,  -1, 124, 125, 126, 127,  -1,  -1,  -1,
      128,  -1,  -1, 129,  -1, 130,  -1, 131,  -1,  -1,
      132, 133,  -1, 134,  -1, 135, 136, 137, 138, 139,
      140, 141,  -1, 142,  -1,  -1,  -1,  -1,  -1,  -1,
      143, 144, 145,  -1,  -1,  -1,  -1,  -1, 146,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1, 147,  -1,  -1,
       -1,  -1, 148,  -1,  -1,  -1, 149,  -1, 150, 151,
      152,  -1,  -1,  -1,  -1, 153, 154, 155, 156,  -1,
       -1,  -1,  -1,  -1,  -1,  -1, 157,  -1, 158,  -1,
       -1, 159,  -1,  -1, 160, 161,  -1,  -1, 162,  -1,
       -1,  -1, 163, 164,  -1,  -1,  -1,  -1,  -1,  -1,
      165,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 166,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 167,  -1,
       -1,  -1, 168,  -1, 169,  -1,  -1,  -1,  -1,  -1,
      170,  -1,  -1, 171,  -1,  -1,  -1, 172, 173, 174,
       -1,  -1,  -1,  -1, 175,  -1,  -1,  -1,  -1, 176,
      177, 178,  -1, 179,  -1,  -1,  -1,  -1,  -1,  -1,
       -1, 180,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1, 181,  -1,  -1, 182,  -1,
      183,  -1,  -1,  -1,  -1, 184,  -1, 185,  -1,  -1,
       -1,  -1, 186, 187,  -1,  -1,  -1,  -1, 188,  -1,
       -1, 189,  -1,  -1,  -1, 190,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1, 191,  -1,  -1,  -1,  -1,
      192,  -1,  -1,  -1,  -1, 193, 194,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1, 195,  -1, 196,  -1,  -1,  -1,  -1,
       -1,  -1,  -1, 197,  -1,  -1,  -1, 198,  -1,  -1,
      199,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1, 200, 201,  -1, 202,  -1,  -1,  -1,  -1,
       -1,  -1,  -1, 203,  -1,  -1,  -1,  -1,  -1,  -1,
      204,  -1,  -1,  -1,  -1,  -1, 205,  -1, 206,  -1,
      207,  -1, 208, 209,  -1, 210,  -1,  -1, 211,  -1,
      212,  -1, 213, 214,  -1,  -1, 215,  -1,  -1, 216,
       -1, 217,  -1,  -1,  -1, 218,  -1,  -1,  -1,  -1,
      219,  -1,  -1,  -1,  -1, 220,  -1, 221,  -1,  -1,
       -1, 222,  -1,  -1,  -1,  -1,  -1, 223, 224, 225,
       -1,  -1,  -1, 226, 227,  -1, 228,  -1,  -1, 229,
      230,  -1, 231, 232, 233, 234, 235,  -1,  -1,  -1,
       -1,  -1,  -1,  -1, 236,  -1, 237,  -1,  -1,  -1,
      238,  -1, 239, 240, 241,  -1,  -1,  -1, 242,  -1,
       -1, 243,  -1,  -1,  -1, 244, 245,  -1,  -1,  -1,
       -1,  -1, 246,  -1,  -1,  -1, 247,  -1, 248,  -1,
       -1, 249,  -1, 250,  -1,  -1, 251,  -1,  -1,  -1,
       -1,  -1, 252,  -1,  -1, 253, 254,  -1,  -1,  -1,
       -1, 255,  -1,  -1, 256,  -1,  -1, 257,  -1, 258,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
      259,  -1,  -1,  -1, 260,  -1,  -1,  -1, 261,  -1,
       -1,  -1,  -1,  -1,  -1,  -1, 262,  -1, 263, 264,
       -1,  -1,  -1,  -1,  -1, 265,  -1,  -1, 266, 267,
      268,  -1,  -1,  -1,  -1, 269, 270,  -1,  -1,  -1,
      271,  -1,  -1,  -1,  -1, 272,  -1,  -1,  -1, 273,
       -1, 274, 275, 276,  -1, 277,  -1,  -1, 278,  -1,
       -1,  -1, 279,  -1,  -1,  -1,  -1,  -1, 280, 281,
       -1,  -1, 282,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1, 283,  -1, 284,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1, 285,  -1,  -1, 286,  -1,
       -1, 287,  -1, 288,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1, 289, 290,  -1,
       -1,  -1,  -1,  -1,  -1,  -1, 291,  -1,  -1,  -1,
      292, 293,  -1,  -1, 294,  -1,  -1,  -1, 295,  -1,
       -1,  -1, 296,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
      297,  -1, 298,  -1, 299, 300,  -1,  -1, 301,  -1,
       -1,  -1,  -1,  -1,  -1,  -1, 302,  -1,  -1, 303,
       -1, 304,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1, 305, 306,  -1,  -1,  -1,
      307,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1, 308,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
      309,  -1,  -1,  -1,  -1, 310,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1, 311,  -1,  -1,
      312,  -1,  -1,  -1,  -1, 313, 314,  -1,  -1,  -1,
       -1,  -1, 315, 316,  -1,  -1,  -1, 317, 318,  -1,
       -1,  -1,  -1,  -1,  -1,  -1, 319,  -1,  -1,  -1,
      320,  -1,  -1,  -1,  -1, 321, 322, 323,  -1,  -1,
       -1, 324,  -1,  -1, 325,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1, 326,  -1,  -1,  -1, 327,
       -1,  -1,  -1,  -1, 328,  -1,  -1,  -1, 329,  -1,
      330, 331, 332,  -1,  -1,  -1,  -1,  -1, 333,  -1,
       -1,  -1,  -1, 334,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1, 335,  -1,  -1,  -1,  -1, 336,
       -1, 337,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 338,  -1,
       -1,  -1,  -1,  -1,  -1, 339,  -1, 340,  -1, 341,
       -1,  -1, 342,  -1,  -1,  -1,  -1,  -1, 343, 344,
      345,  -1,  -1,  -1, 346,  -1,  -1,  -1,  -1,  -1,
      347,  -1,  -1, 348,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1, 349, 350,  -1,  -1,
       -1,  -1, 351,  -1,  -1,  -1,  -1, 352,  -1,  -1,
      353,  -1,  -1,  -1,  -1, 354,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1, 355,  -1,  -1,  -1,  -1,  -1,
       -1, 356,  -1, 357,  -1,  -1,  -1,  -1,  -1,  -1,
      358,  -1,  -1, 359,  -1,  -1,  -1,  -1,  -1, 360,
       -1,  -1,  -1,  -1,  -1,  -1,  -1, 361,  -1,  -1,
       -1,  -1,  -1, 362,  -1, 363, 364,  -1, 365, 366,
      367,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1, 368,  -1,  -1,  -1, 369, 370,  -1,  -1,
      371, 372,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1, 373,  -1,  -1,  -1,  -1, 374,  -1,
       -1,  -1,  -1,  -1, 375, 376,  -1,  -1, 377, 378,
       -1,  -1,  -1, 379, 380,  -1, 381,  -1,  -1,  -1,
      382,  -1,  -1, 383,  -1,  -1, 384,  -1,  -1,  -1,
       -1,  -1,  -1, 385,  -1,  -1, 386,  -1, 387,  -1,
       -1,  -1,  -1, 388, 389, 390, 391,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1, 392,  -1,  -1,  -1,
      393, 394,  -1,  -1,  -1, 395,  -1, 396,  -1,  -1,
       -1, 397,  -1,  -1,  -1, 398,  -1,  -1,  -1, 399,
       -1,  -1, 400,  -1,  -1,  -1, 401,  -1, 402,  -1,
      403,  -1,  -1,  -1, 404,  -1,  -1, 405, 406,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1, 407,  -1,  -1,  -1,  -1,  -1, 408,
      409,  -1,  -1, 410,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
      411,  -1,  -1, 412, 413, 414,  -1, 415,  -1,  -1,
       -1,  -1,  -1, 416,  -1,  -1,  -1, 417,  -1,  -1,
      418,  -1,  -1,  -1, 419, 420,  -1,  -1,  -1,  -1,
       -1,  -1, 421, 422,  -1,  -1,  -1,  -1,  -1,  -1,
       -1, 423,  -1, 424, 425,  -1,  -1,  -1,  -1, 426,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1, 427, 428, 429, 430,  -1,  -1,
      431,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1, 432, 433, 434,  -1,  -1, 435, 436, 437,
      438,  -1,  -1,  -1,  -1, 439,  -1,  -1,  -1,  -1,
       -1, 440,  -1,  -1,  -1,  -1,  -1,  -1, 441,  -1,
      442,  -1,  -1,  -1,  -1,  -1,  -1, 443,  -1,  -1,
      444,  -1,  -1,  -1,  -1, 445,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1, 446, 447,  -1,  -1,  -1,  -1,
       -1, 448, 449,  -1,  -1,  -1,  -1,  -1,  -1, 450,
       -1, 451,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 452,
       -1, 453, 454, 455, 456, 457,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1, 458, 459, 460,  -1,  -1,
       -1,  -1,  -1,  -1, 461,  -1,  -1, 462, 463,  -1,
      464,  -1,  -1, 465,  -1,  -1, 466,  -1,  -1, 467,
      468,  -1,  -1, 469,  -1,  -1,  -1,  -1, 470, 471,
       -1, 472,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 473,  -1,
      474,  -1,  -1,  -1, 475, 476,  -1,  -1,  -1,  -1,
      477,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 478, 479,
      480,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 481,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
      482,  -1,  -1,  -1,  -1, 483,  -1,  -1,  -1,  -1,
       -1,  -1, 484,  -1, 485,  -1, 486, 487,  -1,  -1,
       -1,  -1, 488,  -1,  -1,  -1, 489, 490, 491,  -1,
      492,  -1,  -1,  -1,  -1, 493, 494,  -1,  -1,  -1,
       -1, 495,  -1,  -1, 496,  -1,  -1,  -1,  -1, 497,
       -1,  -1,  -1,  -1, 498,  -1,  -1, 499,  -1,  -1,
      500,  -1,  -1,  -1, 501,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1, 502,  -1,  -1, 503, 504,  -1,
       -1,  -1,  -1,  -1,  -1,  -1, 505, 506,  -1, 507,
       -1,  -1, 508, 509,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1, 510, 511,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 512,
       -1,  -1,  -1,  -1,  -1,  -1, 513,  -1,  -1,  -1,
       -1,  -1, 514,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1, 515,  -1, 516,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1, 517,  -1,  -1,
       -1,  -1, 518,  -1,  -1, 519,  -1,  -1,  -1,  -1,
       -1, 520,  -1,  -1,  -1, 521,  -1,  -1,  -1, 522,
       -1,  -1,  -1,  -1,  -1, 523,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1, 524,  -1, 525,  -1,  -1,  -1,
       -1,  -1,  -1,  -1, 526, 527,  -1, 528,  -1,  -1,
      529,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1, 530, 531,  -1,  -1,  -1, 532,  -1,
      533,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 534,
       -1,  -1, 535,  -1,  -1,  -1, 536, 537,  -1,  -1,
       -1,  -1,  -1,  -1, 538, 539,  -1,  -1,  -1,  -1,
       -1,  -1, 540,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1, 541,  -1,  -1, 542,
       -1, 543,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1, 544, 545,  -1,  -1, 546,  -1,
       -1,  -1, 547,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 548, 549,
       -1,  -1,  -1,  -1,  -1, 550,  -1,  -1, 551,  -1,
       -1, 552, 553,  -1,  -1, 554,  -1, 555,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1, 556,  -1, 557,  -1, 558, 559,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 560,
       -1,  -1,  -1,  -1,  -1,  -1, 561,  -1,  -1,  -1,
      562,  -1,  -1,  -1, 563, 564,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1, 565,  -1,  -1, 566, 567,
       -1,  -1,  -1,  -1,  -1,  -1,  -1, 568, 569,  -1,
       -1,  -1,  -1,  -1,  -1,  -1, 570,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1, 571, 572, 573,  -1,  -1, 574,  -1,  -1,  -1,
       -1,  -1,  -1,  -1, 575,  -1,  -1,  -1,  -1,  -1,
       -1, 576, 577,  -1, 578,  -1,  -1,  -1,  -1,  -1,
      579,  -1, 580,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
      581,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1, 582,  -1, 583,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1, 584,  -1,  -1,  -1,  -1,  -1, 585,  -1,  -1,
       -1, 586, 587,  -1,  -1,  -1,  -1,  -1,  -1, 588,
       -1, 589,  -1,  -1,  -1, 590,  -1,  -1,  -1,  -1,
      591,  -1,  -1, 592,  -1,  -1,  -1,  -1, 593, 594,
       -1,  -1,  -1,  -1, 595,  -1,  -1,  -1,  -1,  -1,
       -1, 596,  -1,  -1,  -1, 597,  -1, 598,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 599,  -1,
       -1,  -1, 600,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
      601,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 602, 603,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 604,
      605,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1, 606,  -1,  -1,  -1,
       -1, 607,  -1,  -1, 608,  -1,  -1,  -1,  -1,  -1,
      609,  -1,  -1,  -1,  -1,  -1, 610,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1, 611, 612,  -1,  -1, 613,
      614,  -1,  -1, 615,  -1, 616,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1, 617,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1, 618,  -1, 619,  -1,  -1, 620,
       -1,  -1, 621,  -1,  -1,  -1,  -1,  -1, 622,  -1,
      623,  -1,  -1,  -1,  -1, 624,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1, 625,  -1,  -1,  -1,  -1,
      626,  -1,  -1,  -1, 627,  -1,  -1,  -1,  -1,  -1,
      628, 629,  -1,  -1,  -1, 630,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 631,
      632,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 633,  -1,
      634,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 635,  -1,
       -1,  -1, 636, 637,  -1,  -1,  -1,  -1,  -1,  -1,
       -1, 638, 639,  -1,  -1,  -1,  -1,  -1,  -1, 640,
       -1, 641,  -1, 642, 643,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 644,
       -1,  -1,  -1,  -1,  -1, 645,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1, 646,  -1,  -1,
      647, 648,  -1,  -1, 649,  -1,  -1,  -1,  -1,  -1,
       -1,  -1, 650,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
      651,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 652,
       -1,  -1, 653,  -1,  -1,  -1,  -1, 654,  -1,  -1,
       -1, 655,  -1, 656,  -1,  -1,  -1,  -1,  -1,  -1,
       -1, 657,  -1, 658,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1, 659,  -1,  -1,  -1,  -1,  -1,  -1, 660,
      661,  -1, 662, 663,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1, 664,  -1,  -1,
       -1, 665,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 666,
      667,  -1, 668,  -1,  -1,  -1, 669,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1, 670,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1, 671,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1, 672,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
      673,  -1,  -1,  -1, 674,  -1,  -1,  -1,  -1, 675,
       -1,  -1,  -1,  -1,  -1,  -1, 676,  -1, 677,  -1,
      678,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 679,  -1,
      680,  -1,  -1,  -1, 681,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1, 682,  -1,  -1,  -1, 683,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1, 684, 685, 686,
       -1,  -1,  -1,  -1, 687,  -1,  -1, 688, 689, 690,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1, 691,  -1,  -1,
       -1,  -1,  -1,  -1, 692,  -1,  -1,  -1,  -1, 693,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1, 694,  -1,  -1,
       -1,  -1,  -1,  -1,  -1, 695,  -1,  -1, 696,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 697,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1, 698,  -1,  -1,
       -1,  -1, 699,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1, 700,  -1,  -1,
       -1,  -1,  -1,  -1,  -1, 701,  -1,  -1,  -1,  -1,
      702,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1, 703,  -1,  -1,  -1,  -1, 704,  -1,  -1,
       -1, 705,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 706,
       -1,  -1,  -1,  -1,  -1,  -1, 707,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 708,  -1,
       -1,  -1,  -1, 709,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1, 710,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1, 711,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1, 712,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1, 713,  -1,  -1,
       -1, 714, 715,  -1,  -1,  -1,  -1,  -1,  -1, 716,
      717,  -1,  -1,  -1,  -1,  -1, 718, 719,  -1, 720,
      721,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1, 722,  -1,  -1,  -1,  -1,  -1,
       -1, 723,  -1,  -1,  -1,  -1,  -1,  -1, 724,  -1,
       -1,  -1,  -1,  -1,  -1, 725,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 726,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
      727,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 728,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1, 729,  -1,  -1,  -1,  -1, 730,  -1,  -1,
       -1,  -1,  -1,  -1,  -1, 731,  -1,  -1,  -1, 732,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1, 733,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1, 734,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1, 735,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1, 736,  -1,  -1, 737,  -1,  -1, 738,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1, 739,  -1,  -1,  -1,  -1, 740,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1, 741,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1, 742,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 743,
       -1,  -1,  -1,  -1,  -1, 744,  -1, 745,  -1,  -1,
      746,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1, 747, 748, 749,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1, 750,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1, 751,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1, 752,  -1,  -1, 753,  -1,  -1,  -1,  -1,  -1,
      754,  -1,  -1,  -1, 755,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 756,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1, 757,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1, 758,  -1, 759,  -1, 760,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1, 761,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1, 762,  -1,  -1,  -1, 763,  -1,  -1,  -1,
       -1, 764, 765,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
      766,  -1,  -1,  -1,  -1,  -1,  -1, 767,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1, 768,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1, 769,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1, 770,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 771,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1, 772,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 773,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 774,  -1,
       -1,  -1,  -1,  -1,  -1,  -1, 775,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1, 776,  -1,  -1,  -1, 777,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1, 778,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 779,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 780,
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
       -1,  -1, 781,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1, 782,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 783,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1, 784,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1, 785,  -1,  -1,  -1,  -1,  -1,
       -1, 786,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1, 787,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1, 788,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
      789,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1, 790,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 791,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1, 792,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1, 793,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1, 794,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1, 795,  -1,  -1,  -1,  -1,
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
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1, 796,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1, 797,  -1,  -1,
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
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1, 798,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1, 799
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
        case CSSValueInternalMediaCastOffButton:
        case CSSValueInternalMediaOverlayCastOffButton:
        case CSSValueInternalExtendToZoom:
        case CSSValueInternalVariableValue:
            return isUASheetBehavior(mode);
        case CSSValueWebkitFocusRingColor:
    case CSSValueWebkitText:
            return isUASheetBehavior(mode) || isQuirksModeBehavior(mode);
        default:
            return true;
    }
}

} // namespace blink

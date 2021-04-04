#pragma once
typedef enum tagLAYER_IDX{
    _BL = 0,
    _FL,
    _NL,
    _CL,
    _MAX_LAYER
} LAYER_IDX;

typedef enum tagTP_KEYCODE {
    TP_LCTL = SAFE_RANGE,
    TP_RCTL
} TP_KEYCODE;

#define _______ KC_TRNS
#define xxxxxxx KC_NO
#define LT_NLCK LT(_NL, KC_NLCK)
#define S_F1    S(KC_F1)

#define RGB_SWR RGB_M_SW        // Swirl Animation alias
#define RGB_SNK RGB_M_SN        // Snake Animation alias

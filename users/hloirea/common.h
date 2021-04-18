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
    TP_RCTL,
    TP_BSPC,
    TP_ENT
} TP_KEYCODE;

#define _______ KC_TRNS
#define xxxxxxx KC_NO
#define LT_NLCK LT(_NL, KC_NLCK)
#define MT_BSPC MT(MOD_LCTL, KC_BSPC)
#define MT_ENT  MT(MOD_LCTL, KC_ENT)
#define S_F1    S(KC_F1)
#define S_F2    S(KC_F2)

#define RGB_SWR RGB_M_SW        // Swirl Animation alias
#define RGB_SNK RGB_M_SN        // Snake Animation alias

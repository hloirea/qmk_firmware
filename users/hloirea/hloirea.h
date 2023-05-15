#pragma once

#include "layers.h"

#define HLOIREA_LAYER_LIST                       \
    HLOIREA_LAYER_FORMAT(BASE,    "Base")        \
    HLOIREA_LAYER_FORMAT(SIMPLE,  "Simple")      \
    HLOIREA_LAYER_FORMAT(LOWER,   "Lower")       \
    HLOIREA_LAYER_FORMAT(UPPER,   "Upper")       \

    
#define HLOIREA_TD_TAP_HOLD                     \
    HLOIREA_TD_FORMAT(COMM, COMM, DQUO)         \
    HLOIREA_TD_FORMAT(DOT,  DOT,  UNDS)         \
    HLOIREA_TD_FORMAT(2,    2,    COMM)         \
    HLOIREA_TD_FORMAT(3,    3,    DOT)

enum hloirea_layers {
#define HLOIREA_LAYER_FORMAT(LAYER, STRING) L_##LAYER,
    HLOIREA_LAYER_LIST
#undef HLOIREA_LAYER_FORMAT
};
#define U_P1 LSFT(KC_F2)
#define U_P2 LSFT(KC_F1)

#define U_P_TAB    LCTL_T(KC_TAB)
#define U_P_SPC    LT(L_LOWER, KC_SPC)
#define U_P_P1     LSFT_T(U_P1)
#define U_P_P2     LSFT_T(U_P2)
#define U_P_ESC    RSFT_T(KC_ESC)
#define U_P_BSPC   LT(L_UPPER, KC_BSPC)
#define U_P_ENT    LCTL_T(KC_ENT)
#define U_C_Z      LALT_T(KC_Z)
#define U_C_SLSH   RALT_T(KC_SLSH)
#define U_C_SCLN   RGUI_T(KC_SCLN)

enum custom_keycodes {
    U_MACRO_00 = SAFE_RANGE,
    U_MACRO_01,
    U_MACRO_02,
    U_MACRO_03,
    U_MACRO_04,
    U_MACRO_05,
    U_MACRO_06,
    U_MACRO_07,
    U_MACRO_08,
    U_MACRO_09,
    U_MACRO_10,
    U_MACRO_11,
    U_MACRO_12,
    U_MACRO_13,
    U_MACRO_14
};

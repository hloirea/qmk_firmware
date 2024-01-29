#pragma once

#include "layers.h"

#define HLOIREA_LAYER_LIST                       \
    HLOIREA_LAYER_FORMAT(BASE,    "Base")        \
    HLOIREA_LAYER_FORMAT(LOWER,   "Lower")       \
    HLOIREA_LAYER_FORMAT(UPPER,   "Upper")       \

#if 0 /* advanced tap dances is not currently in use */
#define HLOIREA_TD_TAP_HOLD                     \
    HLOIREA_TD_FORMAT(COMM, COMM, DQUO)         \
    HLOIREA_TD_FORMAT(DOT,  DOT,  UNDS)         \
    HLOIREA_TD_FORMAT(2,    2,    COMM)         \
    HLOIREA_TD_FORMAT(3,    3,    DOT)
#else
#define HLOIREA_TD_TAP_HOLD
#endif

enum hloirea_layers_e {
#define HLOIREA_LAYER_FORMAT(LAYER, STRING) L_##LAYER,
    HLOIREA_LAYER_LIST
#undef HLOIREA_LAYER_FORMAT
};
<<<<<<< HEAD
#define U_P1 LSFT(KC_F1)
#define U_P2 LSFT(KC_F2)
=======
>>>>>>> master

#define U_P1       S(KC_F1)
#define U_P2       S(KC_F2)

#define U_P_TAB    LALT_T(KC_TAB)
#define U_P_SPC    LT(L_LOWER, KC_SPC)
<<<<<<< HEAD
#define U_P_P1     LSFT_T(U_P1)
#define U_P_P2     RSFT_T(U_P2)
=======
#define U_P_P1     LGUI_T(U_P1)
#define U_P_P2     RGUI_T(U_P2)
>>>>>>> master
#define U_P_BSPC   LT(L_UPPER, KC_BSPC)
#define U_P_ENT    RALT_T(KC_ENT)

#define U_P_UNDS   LSFT_T(KC_UNDS)
#define U_P_DQUO   RSFT_T(KC_DQUO)
#define U_P_LNG1   RCTL_T(KC_LNG1)

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
    U_MACRO_09
};

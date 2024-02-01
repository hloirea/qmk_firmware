#pragma once

#include "layers.h"

#define HLOIREA_LAYER_LIST                     \
    HLOIREA_LAYER_FORMAT(BASE,    "Base")      \
    HLOIREA_LAYER_FORMAT(TO_FUNC, "ToFunc")    \
    HLOIREA_LAYER_FORMAT(FUNC,    "Func")      \
    HLOIREA_LAYER_FORMAT(TO_NUM,  "ToNum")     \
    HLOIREA_LAYER_FORMAT(NUM,     "Num")       \
    HLOIREA_LAYER_FORMAT(MOUSE,   "Mouse")     \

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

#define U_P1       S(KC_F1)
#define U_P2       S(KC_F2)

#define U_P_TAB    LALT_T(KC_TAB)
#define U_P_SPC    LT(L_TO_FUNC, KC_SPC)
#define U_P_P1     LSFT_T(U_P1)
#define U_P_P2     RGUI_T(U_P2)
#define U_P_BSPC   LT(L_TO_NUM, KC_BSPC)
#define U_P_ENT    RALT_T(KC_ENT)

#define U_P_CUT    S(KC_DEL)
#define U_P_COPY   C(KC_INS)
#define U_P_PSTE   S(KC_INS)

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

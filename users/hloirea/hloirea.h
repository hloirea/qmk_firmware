#pragma once

#include "layers.h"

#define HLOIREA_LAYER_LIST                  \
    HLOIREA_LAYER_FORMAT(BASE,  "Base")     \
    HLOIREA_LAYER_FORMAT(FUN,   "Fun")      \
    HLOIREA_LAYER_FORMAT(NUM,   "Num")      \
    HLOIREA_LAYER_FORMAT(NAV,   "Nav")      \
    HLOIREA_LAYER_FORMAT(SYM,   "Sym")      \
    HLOIREA_LAYER_FORMAT(MOUSE, "Mouse")    \

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

#define U_P_SPC    LALT_T(KC_SPC)
#define U_P_P1     LSFT_T(U_P1)
#define U_P_P2     RSFT_T(U_P2)
#define U_P_BSPC   RGUI_T(KC_BSPC)

#define U_P_LNG1   RCTL_T(KC_LNG1)

#define U_P_UNDO   C(KC_Z)
#define U_P_CUT    S(KC_DEL)
#define U_P_COPY   C(KC_INS)
#define U_P_PSTE   S(KC_INS)

enum custom_keycodes {
    U_MACRO_00 = SAFE_RANGE,
    U_MACRO_01,
    U_MACRO_02,
    U_MACRO_03,
    U_MACRO_04,
    U_MACRO_05
};

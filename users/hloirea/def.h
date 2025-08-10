#pragma once

#include "users/hloirea/layers.h"

#define HLOIREA_LAYER_LIST                 \
    HLOIREA_LAYER_FORMAT(BASE,  "Base ")   \
    HLOIREA_LAYER_FORMAT(FUN,   "Func ")   \
    HLOIREA_LAYER_FORMAT(NAV,   "Nav  ")   \
    HLOIREA_LAYER_FORMAT(SYM,   "Sym  ")   \
    HLOIREA_LAYER_FORMAT(NUM,   "Num  ")   \
    HLOIREA_LAYER_FORMAT(MOUSE, "Mouse")   \

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

enum tap_dance_action_idx_e {
#define HLOIREA_TD_FORMAT(DANCE, TAP, HOLD) TD_T_##DANCE,
    HLOIREA_TD_TAP_HOLD
#undef HLOIREA_TD_FORMAT
    TD_T_CUSTOM_MAX,
#define HLOIREA_LAYER_FORMAT(LAYER, STRING) TD_L_##LAYER,
    HLOIREA_LAYER_LIST
#undef HLOIREA_LAYER_FORMAT
    TD_RESET
};

#define U_P1       S(KC_F1)
#define U_P2       S(KC_F2)

#define U_P_P1     LT(L_FUN, U_P1)
#define U_P_P2     LT(L_NAV, U_P2)

#define U_P_SPC    LT(L_SYM, KC_SPC)
#define U_P_BSPC   LT(L_SYM, KC_BSPC)

#define U_P_Z      LT(L_MOUSE, KC_Z)
#define U_P_SLSH   LT(L_MOUSE, KC_SLSH)

#define U_P_TAB    LCTL_T(KC_TAB)
#define U_P_ENT    RCTL_T(KC_ENT)

#define U_P_UNDO   C(KC_Z)
#define U_P_REDO   C(KC_Y)
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

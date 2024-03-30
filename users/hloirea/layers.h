#pragma once

#define HLOIREA_LAYER_BASE \
XXXXXXX,      KC_Q,         KC_W,         KC_E,         KC_R,         KC_T,         KC_Y,         KC_U,         KC_I,         KC_O,         KC_P,         XXXXXXX,      \
XXXXXXX,      KC_A,         KC_S,         KC_D,         KC_F,         KC_G,         KC_H,         KC_J,         KC_K,         KC_L,         KC_SCLN,      XXXXXXX,      \
XXXXXXX,      U_P_Z,        KC_X,         KC_C,         KC_V,         KC_B,         KC_N,         KC_M,         KC_COMM,      KC_DOT,       U_P_SLSH,     XXXXXXX,      \
                                          U_P_TAB,      U_P_SPC,      U_P_P1,       U_P_P2,       U_P_BSPC,     U_P_ENT

#define HLOIREA_LAYER_FUN \
XXXXXXX,      TD(TD_RESET), XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      KC_PSCR,      KC_F7,        KC_F8,        KC_F9,        KC_F12,       XXXXXXX,      \
XXXXXXX,      TO(L_MOUSE),  TO(L_SYM),    TO(L_NAV),    TO(L_FUN),    XXXXXXX,      KC_SCRL,      KC_F4,        KC_F5,        KC_F6,        KC_F11,       XXXXXXX,      \
XXXXXXX,      KC_CAPS,      U_P_CUT,      U_P_COPY,     U_P_PSTE,     XXXXXXX,      KC_PAUS,      KC_F1,        KC_F2,        KC_F3,        KC_F10,       XXXXXXX,      \
                                          KC_TAB,       KC_SPC,       TO(L_BASE),   TO(L_BASE),   KC_BSPC,      KC_ENT

#define HLOIREA_LAYER_NAV \
XXXXXXX,      KC_HOME,      KC_UP,        KC_END,       KC_PGUP,      KC_VOLU,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      \
XXXXXXX,      KC_LEFT,      KC_DOWN,      KC_RGHT,      KC_PGDN,      KC_VOLD,      XXXXXXX,      TO(L_NAV),    TO(L_FUN),    TO(L_SYM),    TO(L_MOUSE),  XXXXXXX,      \
XXXXXXX,      KC_LSFT,      XXXXXXX,      XXXXXXX,      XXXXXXX,      KC_MUTE,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      KC_RSFT,      XXXXXXX,      \
                                          KC_TAB,       KC_SPC,       TO(L_BASE),   TO(L_BASE),   KC_BSPC,      KC_ENT

#define HLOIREA_LAYER_SYM \
XXXXXXX,      KC_TILD,      KC_CIRC,      KC_PIPE,      KC_AMPR,      KC_AT,        KC_HASH,      KC_7,         KC_8,         KC_9,         KC_DLR,       XXXXXXX,      \
XXXXXXX,      KC_EXLM,      KC_LABK,      KC_EQL,       KC_RABK,      KC_QUES,      KC_QUOT,      KC_4,         KC_5,         KC_6,         KC_DOT,       XXXXXXX,      \
XXXXXXX,      U_P_SLSH,     KC_PLUS,      KC_MINS,      KC_ASTR,      KC_PERC,      KC_0,         KC_1,         KC_2,         KC_3,         U_P_BSLS,     XXXXXXX,      \
                                          KC_TAB,       KC_SPC,       TO(L_BASE),   TO(L_BASE),   KC_BSPC,      KC_ENT

#define HLOIREA_LAYER_MOUSE \
XXXXXXX,      KC_BTN3,      KC_MS_U,      KC_BTN2,      KC_BTN1,      KC_WH_U,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      \
XXXXXXX,      KC_MS_L,      KC_MS_D,      KC_MS_R,      TO(L_MOUSE),  KC_WH_D,      XXXXXXX,      KC_ACL0,      KC_ACL1,      KC_ACL2,      XXXXXXX,      XXXXXXX,      \
XXXXXXX,      U_P_UNDO,     U_P_CUT,      U_P_COPY,     U_P_PSTE,     U_P_REDO,     XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      \
                                          KC_TAB,       KC_SPC,       TO(L_BASE),   TO(L_BASE),   KC_BSPC,      KC_ENT

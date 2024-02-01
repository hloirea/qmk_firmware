#pragma once

#define HLOIREA_LAYER_BASE \
KC_ESC,       KC_Q,         KC_W,         KC_E,         KC_R,         KC_T,         KC_Y,         KC_U,         KC_I,         KC_O,         KC_P,         KC_DEL,    \
OSL(L_FUNC),  KC_A,         KC_S,         KC_D,         KC_F,         KC_G,         KC_H,         KC_J,         KC_K,         KC_L,         KC_SCLN,      OSL(L_NUM),\
KC_LCTL,      KC_Z,         KC_X,         KC_C,         KC_V,         KC_B,         KC_N,         KC_M,         KC_COMM,      KC_DOT,       KC_SLSH,      U_P_LNG1,  \
                                          U_P_TAB,      U_P_SPC,      U_P_P1,       U_P_P2,       U_P_BSPC,     U_P_ENT

#define HLOIREA_LAYER_TO_FUNC \
XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,   \
TO(L_FUNC),   XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,   \
XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,   \
                                          XXXXXXX,      _______,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX

#define HLOIREA_LAYER_FUNC \
TO(L_BASE),   KC_HOME,      KC_UP,        KC_END,       KC_PGUP,      XXXXXXX,      KC_PSCR,      KC_F7,        KC_F8,        KC_F9,        KC_F12,       KC_VOLU,   \
KC_UNDS,      KC_LEFT,      KC_DOWN,      KC_RGHT,      KC_PGDN,      XXXXXXX,      KC_SCRL,      KC_F4,        KC_F5,        KC_F6,        KC_F11,       KC_VOLD,   \
KC_CALC,      TD(TD_RESET), U_P_CUT,      U_P_COPY,     U_P_PSTE,     XXXXXXX,      KC_PAUS,      KC_F1,        KC_F2,        KC_F3,        KC_F10,       KC_MUTE,   \
                                          XXXXXXX,      XXXXXXX,      XXXXXXX,      KC_RGUI,      KC_BSPC,      KC_RALT

#define HLOIREA_LAYER_TO_NUM \
XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,   \
XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      TO(L_NUM), \
XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,   \
                                          XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      _______,      XXXXXXX

#define HLOIREA_LAYER_NUM \
KC_GRV,       KC_TILD,      KC_CIRC,      KC_PIPE,      KC_AMPR,      XXXXXXX,      KC_AT,        KC_7,         KC_8,         KC_9,         KC_HASH,      TO(L_BASE),\
KC_LSFT,      KC_EXLM,      KC_LABK,      KC_PEQL,      KC_RABK,      KC_QUES,      KC_QUOT,      KC_4,         KC_5,         KC_6,         KC_DLR,       KC_DQUO,   \
KC_LALT,      KC_PSLS,      KC_PPLS,      KC_PMNS,      KC_PAST,      KC_PERC,      KC_0,         KC_1,         KC_2,         KC_3,         KC_BSLS,      KC_LNG2,   \
                                          KC_LALT,      KC_SPC,       KC_LGUI,      XXXXXXX,      XXXXXXX,      XXXXXXX

#define HLOIREA_LAYER_MOUSE \
TO(L_BASE),   XXXXXXX,      KC_ACL0,      KC_ACL1,      KC_ACL2,      KC_WH_U,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      TO(L_BASE),\
XXXXXXX,      XXXXXXX,      KC_BTN1,      KC_BTN2,      KC_BTN3,      KC_WH_D,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,   \
XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,   \
                                          XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX

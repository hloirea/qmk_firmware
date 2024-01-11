#pragma once

#define HLOIREA_LAYER_BASE \
QK_GESC,      KC_Q,         KC_W,         KC_E,         KC_R,         KC_T,         KC_Y,         KC_U,         KC_I,         KC_O,         KC_P,         KC_DEL,    \
U_P_UNDS,     KC_A,         KC_S,         KC_D,         KC_F,         KC_G,         KC_H,         KC_J,         KC_K,         KC_L,         KC_SCLN,      U_P_DQUO,  \
KC_LALT,      KC_Z,         KC_X,         KC_C,         KC_V,         KC_B,         KC_N,         KC_M,         KC_COMM,      KC_DOT,       KC_SLSH,      KC_LNG1,   \
                                          U_P_TAB,      U_P_SPC,      U_P_P1,       U_P_P2,       U_P_BSPC,     U_P_ENT

#define HLOIREA_LAYER_UPPER \
KC_ESC,       KC_TILD,      KC_CIRC,      KC_PIPE,      KC_AMPR,      XXXXXXX,      KC_AT,        KC_7,         KC_8,         KC_9,         XXXXXXX,      KC_DEL,    \
KC_LGUI,      KC_EXLM,      KC_LABK,      KC_PEQL,      KC_RABK,      KC_QUES,      KC_HASH,      KC_4,         KC_5,         KC_6,         KC_DLR,       KC_QUOT,   \
KC_LALT,      KC_PSLS,      KC_PPLS,      KC_PMNS,      KC_PAST,      KC_PERC,      KC_0,         KC_1,         KC_2,         KC_3,         KC_BSLS,      KC_RALT,   \
                                          KC_LCTL,      KC_SPC,       KC_LSFT,      XXXXXXX,      XXXXXXX,      XXXXXXX

#define HLOIREA_LAYER_LOWER \
KC_APP,       KC_HOME,      KC_UP,        KC_END,       KC_PGUP,      KC_BTN1,      KC_PSCR,      KC_F7,        KC_F8,        KC_F9,        KC_F12,       KC_VOLU,   \
KC_CAPS,      KC_LEFT,      KC_DOWN,      KC_RGHT,      KC_PGDN,      KC_BTN3,      KC_SCRL,      KC_F4,        KC_F5,        KC_F6,        KC_F11,       KC_VOLD,   \
KC_CALC,      TD(TD_RESET), S(KC_DEL),    C(KC_INS),    S(KC_INS),    KC_BTN2,      KC_PAUS,      KC_F1,        KC_F2,        KC_F3,        KC_F10,       KC_MUTE,   \
                                          XXXXXXX,      XXXXXXX,      XXXXXXX,      KC_RSFT,      KC_BSPC,      KC_RCTL

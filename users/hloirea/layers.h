#pragma once

#define HLOIREA_LAYER_BASE \
QK_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_DEL,   \
KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,           \
U_P1,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,            \
KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, U_P2,              \
KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RALT, KC_RGUI, U_P_FUNC,U_P_LNG1

#define HLOIREA_LAYER_FUNC \
KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, _______,  \
KC_APP,  KC_HOME, KC_UP,   KC_END,  KC_PGUP, _______, KC_PSCR, _______, _______, _______, _______, _______, _______, _______,           \
KC_CAPS, KC_LEFT, KC_DOWN, KC_RIGHT,KC_PGDN, _______, KC_SCRL, _______, _______, _______, _______, _______,          _______,           \
KC_CALC,     TD(TD_RESET), U_P_CUT, U_P_COPY,U_P_PSTE,_______, KC_PAUS, _______, _______, _______, _______, _______, _______,           \
_______, _______, _______,                            _______,                            _______, _______, _______, KC_RCTL

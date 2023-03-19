#pragma once

#define HLOIREA_LAYER_BASE \
KC_Q,                 KC_W,                 KC_E,                 KC_R,                 KC_T,                 KC_Y,                 KC_U,                 KC_I,                 KC_O,                 KC_P,              \
KC_A,                 KC_S,                 KC_D,                 KC_F,                 KC_G,                 KC_H,                 KC_J,                 KC_K,                 KC_L,                 TD(TD_T_CUSTOM_0), \
LSFT_T(KC_Z),         KC_X,                 KC_C,                 KC_V,                 KC_B,                 KC_N,                 KC_M,                 TD(TD_T_CUSTOM_1),    KC_DOT,               RSFT_T(KC_SLSH),   \
                                            LCTL_T(KC_ESC),       LT(L_LOWER, KC_SPC),  LALT_T(U_P1),         RGUI_T(KC_ENT),       LT(L_UPPER, KC_SPC),  LCTL_T(KC_TAB)

#define HLOIREA_LAYER_UPPER \
KC_TILD,              KC_CIRC,              KC_PIPE,              KC_AMPR,              KC_DLR,               KC_AT,                KC_7,                 KC_8,                 KC_9,                 KC_GRV,            \
KC_EXLM,              KC_LABK,              KC_EQL,               KC_RABK,              KC_HASH,              KC_QUOT,              KC_4,                 KC_5,                 KC_6,                 KC_QUES,           \
LSFT_T(KC_SLSH),      KC_PLUS,              KC_MINS,              KC_ASTR,              KC_PERC,              KC_0,                 KC_1,                 TD(TD_T_CUSTOM_2),    TD(TD_T_CUSTOM_3),    KC_BSLS,           \
                                            KC_LCTL,              KC_SPC,               LALT_T(U_P2),         XXXXXXX,              XXXXXXX,              XXXXXXX

#define HLOIREA_LAYER_LOWER \
KC_HOME,              KC_UP,                KC_END,               KC_PGUP,              KC_VOLU,              KC_PSCR,              KC_F7,                KC_F8,                KC_F9,                KC_F12,            \
KC_LEFT,              KC_DOWN,              KC_RGHT,              KC_PGDN,              KC_VOLD,              KC_SCRL,              KC_F4,                KC_F5,                KC_F6,                KC_F11,            \
TD(TD_RESET),         S(KC_DEL),            C(KC_INS),            S(KC_INS),            KC_MUTE,              KC_PAUS,              KC_F1,                KC_F2,                KC_F3,                RSFT_T(KC_F10),    \
                                            XXXXXXX,              XXXXXXX,              XXXXXXX,              KC_RALT,              KC_SPC,               KC_RCTL


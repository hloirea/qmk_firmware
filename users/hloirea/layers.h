#pragma once

#define HLOIREA_LAYER_BASE \
KC_TAB,               KC_Q,                 KC_W,                 KC_E,                 KC_R,                 KC_T,                 KC_Y,                 KC_U,                 KC_I,                 KC_O,                 KC_P,                 KC_BSPC,           \
KC_ESC,               KC_A,                 KC_S,                 KC_D,                 KC_F,                 KC_G,                 KC_H,                 KC_J,                 KC_K,                 KC_L,                 U_C_SCLN,             KC_ENT,            \
KC_LSFT,              U_C_Z,                KC_X,                 KC_C,                 KC_V,                 KC_B,                 KC_N,                 KC_M,                 TD(TD_T_COMM),        TD(TD_T_DOT),         U_C_SLSH,             KC_RSFT,           \
                                                                  U_P_TAB,              U_P_SPC,              U_P_P1,               U_P_ESC ,             U_P_BSPC,             U_P_ENT

#define HLOIREA_LAYER_UPPER \
KC_TAB,               KC_TILD,              KC_CIRC,              KC_PIPE,              KC_AMPR,              KC_DLR,               KC_AT,                KC_7,                 KC_8,                 KC_9,                 KC_GRV,               KC_BSPC,           \
KC_ESC,               KC_EXLM,              KC_LABK,              KC_EQL,               KC_RABK,              KC_HASH,              KC_QUOT,              KC_4,                 KC_5,                 KC_6,                 KC_QUES,              KC_ENT,            \
KC_LSFT,              KC_SLSH,              KC_PLUS,              KC_MINS,              KC_ASTR,              KC_PERC,              KC_0,                 KC_1,                 TD(TD_T_2),           TD(TD_T_3),           KC_BSLS,              KC_RSFT,           \
                                                                  KC_LCTL,              KC_SPC,               U_P_P2,               XXXXXXX,              XXXXXXX,              XXXXXXX

#define HLOIREA_LAYER_LOWER \
KC_TAB,               KC_HOME,              KC_UP,                KC_END,               KC_PGUP,              KC_VOLU,              KC_PSCR,              KC_F7,                KC_F8,                KC_F9,                KC_F12,               KC_BSPC,           \
KC_ESC,               KC_LEFT,              KC_DOWN,              KC_RGHT,              KC_PGDN,              KC_VOLD,              KC_SCRL,              KC_F4,                KC_F5,                KC_F6,                KC_F11,               TD(TD_L_SIMPLE),   \
CW_TOGG,              TD(TD_RESET),         S(KC_DEL),            C(KC_INS),            S(KC_INS),            KC_MUTE,              KC_PAUS,              KC_F1,                KC_F2,                KC_F3,                KC_F10,               KC_RSFT,           \
                                                                  XXXXXXX,              XXXXXXX,              XXXXXXX,              KC_RSFT,              KC_DEL,               KC_RCTL

#define HLOIREA_LAYER_SIMPLE \
KC_TAB,               KC_Q,                 KC_W,                 KC_E,                 KC_R,                 KC_T,                 KC_Y,                 KC_U,                 KC_I,                 KC_O,                 KC_P,                 KC_BSPC,           \
KC_ESC,               KC_A,                 KC_S,                 KC_D,                 KC_F,                 KC_G,                 KC_H,                 KC_J,                 KC_K,                 KC_L,                 KC_SCLN,              TD(TD_L_BASE),     \
KC_LALT,              KC_Z,                 KC_X,                 KC_C,                 KC_V,                 KC_B,                 KC_N,                 KC_M,                 KC_COMM,              KC_DOT,               KC_SLSH,              KC_RGUI,           \
                                                                  KC_LCTL,              U_P_SPC,              KC_LSFT,              KC_ESC,               U_P_BSPC,             KC_ENT

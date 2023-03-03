#pragma once

#define HLOIREA_ALTERNATIVES_BASE_QWERTY \
QK_GESC,           KC_Q,              KC_W,              KC_E,              KC_R,              KC_T,              KC_Y,              KC_U,              KC_I,              KC_O,              KC_P,              KC_BSPC,        \
LALT_T(KC_TAB),    KC_A,              KC_S,              KC_D,              KC_F,              KC_G,              KC_H,              KC_J,              KC_K,              KC_L,              KC_SCLN,           RGUI_T(KC_ENT), \
LSFT_T(KC_DQUO),   KC_Z,              KC_X,              KC_C,              KC_V,              KC_B,              KC_N,              KC_M,              KC_COMM,           KC_DOT,            KC_SLSH,           RSFT_T(KC_UNDS),\
XXXXXXX,           XXXXXXX,           XXXXXXX,           KC_LCTL,           LT(U_NUM,KC_DEL),  LT(U_SYM,U_M1),    LT(U_FUN,U_M2),    LT(U_NAV,KC_SPC),  KC_LCTL,           XXXXXXX,           XXXXXXX,           U_NP        

#define HLOIREA_ALTERNATIVES_NUM \
QK_GESC,           XXXXXXX,           TD(U_TD_BOOT),     XXXXXXX,           TD(U_TD_U_BASE),   XXXXXXX,           KC_ASTR,           KC_7,              KC_8,              KC_9,              KC_EQL,            KC_BSPC,        \
KC_ALGR,           XXXXXXX,           XXXXXXX,           XXXXXXX,           TD(U_TD_U_NUM),    XXXXXXX,           KC_PLUS,           KC_4,              KC_5,              KC_6,              KC_MINS,           KC_ENT,         \
KC_LSFT,           XXXXXXX,           XXXXXXX,           XXXXXXX,           TD(U_TD_U_NAV),    XXXXXXX,           KC_0,              KC_1,              KC_2,              KC_3,              KC_SLSH,           KC_UNDS,        \
XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,           U_M2,              KC_DEL,            KC_LCTL,           XXXXXXX,           XXXXXXX,           U_NP           

#define HLOIREA_ALTERNATIVES_SYM \
QK_GESC,           XXXXXXX,           TD(U_TD_BOOT),     XXXXXXX,           TD(U_TD_U_BASE),   XXXXXXX,           XXXXXXX,           KC_AMPR,           KC_ASTR,           KC_LPRN,           KC_RPRN,           KC_BSPC,        \
KC_ALGR,           XXXXXXX,           XXXXXXX,           XXXXXXX,           TD(U_TD_U_SYM),    XXXXXXX,           KC_QUOT,           KC_CIRC,           KC_PERC,           KC_DLR,            KC_PIPE,           KC_ENT,         \
KC_LSFT,           XXXXXXX,           XXXXXXX,           XXXXXXX,           TD(U_TD_U_FUN),    XXXXXXX,           XXXXXXX,           KC_EXLM,           KC_AT,             KC_HASH,           KC_BSLS,           KC_UNDS,        \
XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,           U_M2,              KC_DEL,            KC_LCTL,           XXXXXXX,           XXXXXXX,           U_NP           

#define HLOIREA_ALTERNATIVES_NAV \
QK_GESC,           KC_HOME,           KC_UP,             KC_END,            KC_PGUP,           KC_VOLU,           XXXXXXX,           TD(U_TD_U_BASE),   XXXXXXX,           TD(U_TD_BOOT),     XXXXXXX,           KC_BSPC,         \
KC_TAB,            KC_LEFT,           KC_DOWN,           KC_RGHT,           KC_PGDN,           KC_VOLD,           XXXXXXX,           TD(U_TD_U_NAV),    XXXXXXX,           XXXXXXX,           XXXXXXX,           KC_RGUI,        \
KC_DQUO,           KC_MPRV,           KC_MPLY,           KC_MNXT,           XXXXXXX,           KC_MUTE,           XXXXXXX,           TD(U_TD_U_NUM),    XXXXXXX,           XXXXXXX,           XXXXXXX,           KC_RSFT,        \
XXXXXXX,           XXXXXXX,           XXXXXXX,           KC_LCTL,           KC_SPC,            U_M1,              XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,           U_NP           

#define HLOIREA_ALTERNATIVES_FUN \
QK_GESC,           KC_PSCR,           KC_F7,             KC_F8,             KC_F9,             KC_F10,            XXXXXXX,           TD(U_TD_U_BASE),   XXXXXXX,           TD(U_TD_BOOT),     XXXXXXX,           KC_BSPC,        \
KC_TAB,            KC_SCRL,           KC_F4,             KC_F5,             KC_F6,             KC_F11,            XXXXXXX,           TD(U_TD_U_FUN),    XXXXXXX,           XXXXXXX,           XXXXXXX,           KC_RGUI,        \
KC_DQUO,           KC_PAUS,           KC_F1,             KC_F2,             KC_F3,             KC_F12,            XXXXXXX,           TD(U_TD_U_SYM),    XXXXXXX,           XXXXXXX,           XXXXXXX,           KC_RSFT,        \
XXXXXXX,           XXXXXXX,           XXXXXXX,           KC_LCTL,           KC_INS,            U_M1,              XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,           U_NP           

#pragma once

#define HLOIREA_LAYER_BASE \
KC_TAB,            KC_Q,              KC_W,              KC_E,              KC_R,              KC_T,              KC_Y,              KC_U,              KC_I,              KC_O,              KC_P,              KC_BSPC,        \
LGUI_T(U_P1),      KC_A,              KC_S,              KC_D,              KC_F,              KC_G,              KC_H,              KC_J,              KC_K,              KC_L,              KC_SCLN,           LALT_T(KC_QUOT),\
OSM(MOD_LSFT),     KC_Z,              KC_X,              KC_C,              KC_V,              KC_B,              KC_N,              KC_M,              KC_COMM,           KC_DOT,            KC_SLSH,           KC_ENT,         \
                                                         OSM(MOD_LCTL),     MO(L_LOWER),       LT(L_EMACS,KC_ESC),KC_SPC,            MO(L_UPPER),       OSM(MOD_LCTL)

#define HLOIREA_LAYER_LOWER \
KC_TAB,            KC_TILD,           KC_AMPR,           KC_ASTR,           KC_LPRN,           KC_RPRN,           KC_EQL,            KC_7,              KC_8,              KC_9,              KC_ASTR,           KC_BSPC,        \
LGUI_T(U_P2),      KC_GRV,            KC_CIRC,           KC_PERC,           KC_DLR,            KC_UNDS,           KC_MINS,           KC_4,              KC_5,              KC_6,              TD(TD_T_CUSTOM_5), KC_LALT,        \
KC_LSFT,           KC_BSLS,           KC_EXLM,           KC_AT,             KC_HASH,           KC_PIPE,           KC_0,              KC_1,              TD(TD_T_CUSTOM_3), TD(TD_T_CUSTOM_4), KC_SLSH,           KC_ENT,         \
                                                         TD(TD_L_LOWER),    XXXXXXX,           TD(TD_L_UPPER),    KC_SPC,            TD(TD_L_BASE),     KC_LCTL

#define HLOIREA_LAYER_UPPER \
KC_TAB,            KC_HOME,           KC_UP,             KC_END,            KC_PGUP,           KC_VOLU,           KC_PSCR,           KC_F7,             KC_F8,             KC_F9,             KC_F12,            KC_DEL,         \
KC_LGUI,           KC_LEFT,           KC_DOWN,           KC_RGHT,           KC_PGDN,           KC_VOLD,           KC_SCRL,           KC_F4,             KC_F5,             KC_F6,             KC_F11,            KC_ALGR,        \
CW_TOGG,           KC_MPRV,           KC_MPLY,           KC_MNXT,           TD(TD_RESET),      KC_MUTE,           KC_PAUS,           KC_F1,             KC_F2,             KC_F3,             KC_F10,            KC_ENT,         \
                                                         KC_LCTL,           TD(TD_L_BASE),     KC_ESC,            TD(TD_L_LOWER),    XXXXXXX,           TD(TD_L_UPPER)

#define HLOIREA_LAYER_EMACS \
XXXXXXX,           XXXXXXX,           U_MACRO_00,        XXXXXXX,           U_MACRO_12,        U_MACRO_13,        XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,        \
XXXXXXX,           XXXXXXX,           U_MACRO_01,        XXXXXXX,           U_MACRO_02,        U_MACRO_14,        XXXXXXX,           U_MACRO_10,        U_MACRO_11,        XXXXXXX,           XXXXXXX,           U_MACRO_08,     \
XXXXXXX,           XXXXXXX,           U_MACRO_03,        U_MACRO_04,        U_MACRO_05,        U_MACRO_06,        XXXXXXX,           U_MACRO_07,        XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,        \
                                                         XXXXXXX,           XXXXXXX,           XXXXXXX,           U_MACRO_09,        XXXXXXX,           XXXXXXX

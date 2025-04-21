#pragma once

#define HLOIREA_LAYER_BASE \
KC_Q,             KC_W,             KC_E,             KC_R,             KC_T,             KC_Y,             KC_U,             KC_I,             KC_O,             KC_P,             \
KC_A,             KC_S,             KC_D,             KC_F,             KC_G,             KC_H,             KC_J,             KC_K,             KC_L,             KC_SCLN,          \
U_P_Z,            KC_X,             KC_C,             KC_V,             KC_B,             KC_N,             KC_M,             KC_COMM,          KC_DOT,           KC_SLSH,         \
                                    U_P_TAB,          U_P_SPC,          U_P_P1,           U_P_P2,           U_P_BSPC,         U_P_ENT

#define HLOIREA_LAYER_FUN \
TD(TD_RESET),     XXXXXXX,          CW_TOGG,          KC_CAPS,          NK_TOGG,          KC_PSCR,          KC_F7,            KC_F8,            KC_F9,            KC_F12,           \
TD(TD_L_MOUSE),   TD(TD_L_SYM),     TD(TD_L_NAV),     TD(TD_L_FUN),     XXXXXXX,          KC_SCRL,          KC_F4,            KC_F5,            KC_F6,            KC_F11,           \
U_P_UNDO,         U_P_CUT,          U_P_COPY,         U_P_PSTE,         U_P_REDO,         KC_PAUS,          KC_F1,            KC_F2,            KC_F3,            KC_F10,           \
                                    KC_TAB,           KC_SPC,           TD(TD_L_BASE),    TD(TD_L_BASE),    KC_BSPC,          KC_ENT

#define HLOIREA_LAYER_NAV \
KC_HOME,          KC_UP,            KC_END,           KC_PGUP,          KC_VOLU,          XXXXXXX,          XXXXXXX,          XXXXXXX,          XXXXXXX,          XXXXXXX,          \
KC_LEFT,          KC_DOWN,          KC_RGHT,          KC_PGDN,          KC_VOLD,          XXXXXXX,          TD(TD_L_NAV),     TD(TD_L_FUN),     TD(TD_L_SYM),     TD(TD_L_MOUSE),   \
XXXXXXX,          XXXXXXX,          XXXXXXX,          XXXXXXX,          KC_MUTE,          XXXXXXX,          XXXXXXX,          XXXXXXX,          XXXXXXX,          XXXXXXX,          \
                                    KC_TAB,           KC_SPC,           TD(TD_L_BASE),    TD(TD_L_BASE),    KC_BSPC,          KC_ENT

#define HLOIREA_LAYER_SYM \
KC_TILD,          KC_CIRC,          KC_PIPE,          KC_AMPR,          KC_AT,            KC_HASH,          KC_7,             KC_8,             KC_9,             KC_DLR,           \
KC_EXLM,          KC_LABK,          KC_EQL,           KC_RABK,          KC_QUES,          KC_QUOT,          KC_4,             KC_5,             KC_6,             KC_DOT,           \
KC_SLSH,          KC_PLUS,          KC_MINS,          KC_ASTR,          KC_PERC,          KC_0,             KC_1,             KC_2,             KC_3,             KC_BSLS,          \
                                    KC_TAB,           KC_SPC,           TD(TD_L_BASE),    TD(TD_L_BASE),    KC_BSPC,          KC_ENT

#define HLOIREA_LAYER_MOUSE \
XXXXXXX,          OSM(MOD_LGUI),    OSM(MOD_LSFT),    OSM(MOD_LALT),    XXXXXXX,          KC_BTN4,          KC_BTN5,          XXXXXXX,          XXXXXXX,          XXXXXXX,          \
TD(TD_L_MOUSE),   XXXXXXX,          KC_BTN3,          KC_BTN2,          KC_BTN1,          KC_BTN1,          KC_BTN2,          KC_BTN3,          XXXXXXX,          TD(TD_L_MOUSE),   \
U_P_UNDO,         U_P_CUT,          U_P_COPY,         U_P_PSTE,         U_P_REDO,         KC_WH_D,          KC_WH_U,          XXXXXXX,          XXXXXXX,          XXXXXXX,          \
                                    U_P_TAB,          KC_SPC,           TD(TD_L_BASE),    TD(TD_L_BASE),    KC_BSPC,          KC_ENT

#pragma once

#define HLOIREA_LAYER_BASE \
OSL(L_FUN),   KC_Q,         KC_W,         KC_E,         KC_R,         KC_T,         KC_Y,         KC_U,         KC_I,         KC_O,         KC_P,         OSL(L_NAV),   \
OSM(MOD_LSFT),KC_A,         KC_S,         KC_D,         KC_F,         KC_G,         KC_H,         KC_J,         KC_K,         KC_L,         KC_SCLN,      OSM(MOD_RSFT),\
OSM(MOD_LCTL),KC_Z,         KC_X,         KC_C,         KC_V,         KC_B,         KC_N,         KC_M,         KC_COMM,      KC_DOT,       KC_SLSH,      U_P_LNG1,     \
                                          U_P_TAB,      U_P_SPC,      OSL(L_NUM),   OSL(L_SYM),   U_P_BSPC,     U_P_ENT

#define HLOIREA_LAYER_FUN \
KC_ESC,       TD(TD_RESET), XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      KC_PSCR,      KC_F7,        KC_F8,        KC_F9,        KC_F12,       KC_CAPS,      \
OSM(MOD_LSFT),XXXXXXX,      XXXXXXX,      TO(L_NAV),    TO(L_FUN),    XXXXXXX,      KC_SCRL,      KC_F4,        KC_F5,        KC_F6,        KC_F11,       OSM(MOD_RSFT),\
OSM(MOD_LCTL),XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      KC_PAUS,      KC_F1,        KC_F2,        KC_F3,        KC_F10,       KC_LNG2,      \
                                          KC_TAB,       KC_SPC,       TO(L_BASE),   TO(L_BASE),   KC_BSPC,      KC_ENT

#define HLOIREA_LAYER_NAV \
KC_ESC,       KC_HOME,      KC_UP,        KC_END,       KC_PGUP,      KC_VOLU,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      KC_CAPS,      \
OSM(MOD_LSFT),KC_LEFT,      KC_DOWN,      KC_RGHT,      KC_PGDN,      KC_VOLD,      XXXXXXX,      TO(L_NAV),    TO(L_FUN),    XXXXXXX,      XXXXXXX,      OSM(MOD_RSFT),\
OSM(MOD_LCTL),U_P_UNDO,     U_P_CUT,      U_P_COPY,     U_P_PSTE,     KC_MUTE,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      OSM(MOD_RCTL),\
                                          KC_TAB,       KC_SPC,       TO(L_BASE),   TO(L_BASE),   KC_BSPC,      KC_ENT

#define HLOIREA_LAYER_NUM \
KC_GRV,       XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      KC_HASH,      KC_7,         KC_8,         KC_9,         KC_DLR,       KC_DEL,       \
KC_UNDS,      XXXXXXX,      XXXXXXX,      TO(L_SYM),    TO(L_NUM),    XXXXXXX,      KC_QUOT,      KC_4,         KC_5,         KC_6,         KC_COLN,      KC_DQUO,      \
OSM(MOD_LCTL),XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      KC_0,         KC_1,         KC_2,         KC_3,         KC_BSLS,      OSM(MOD_RCTL),\
                                          KC_TAB,       KC_SPC,       TO(L_BASE),   TO(L_EXT),    KC_BSPC,      KC_ENT

#define HLOIREA_LAYER_SYM \
KC_GRV,       KC_TILD,      KC_CIRC,      KC_PIPE,      KC_AMPR,      KC_AT,        XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      KC_DEL,       \
KC_UNDS,      KC_EXLM,      KC_LABK,      KC_EQL,       KC_RABK,      KC_QUES,      XXXXXXX,      TO(L_SYM),    TO(L_NUM),    XXXXXXX,      XXXXXXX,      KC_DQUO,      \
OSM(MOD_LCTL),KC_PSLS,      KC_PPLS,      KC_PMNS,      KC_PAST,      KC_PERC,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      OSM(MOD_RCTL),\
                                          KC_TAB,       KC_SPC,       TO(L_EXT),    TO(L_BASE),   KC_BSPC,      KC_ENT

#define HLOIREA_LAYER_EXT \
KC_GRV,       KC_TILD,      KC_CIRC,      KC_PIPE,      KC_AMPR,      KC_AT,        KC_HASH,      KC_7,         KC_8,         KC_9,         KC_DLR,       KC_DEL,       \
KC_UNDS,      KC_EXLM,      KC_LABK,      KC_EQL,       KC_RABK,      KC_QUES,      KC_QUOT,      KC_4,         KC_5,         KC_6,         KC_COLN,      KC_DQUO,      \
OSM(MOD_LCTL),KC_PSLS,      KC_PPLS,      KC_PMNS,      KC_PAST,      KC_PERC,      KC_0,         KC_1,         KC_2,         KC_3,         KC_BSLS,      OSM(MOD_RCTL),\
                                          KC_TAB,       KC_SPC,       TO(L_BASE),   TO(L_BASE),   KC_BSPC,      KC_ENT

#define HLOIREA_LAYER_MOUSE \
KC_GRV,       KC_BTN2,      KC_MS_U,      KC_BTN1,      KC_BTN3,      KC_WH_U,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      KC_DEL,       \
KC_UNDS,      KC_MS_L,      KC_MS_D,      KC_MS_R,      XXXXXXX,      KC_WH_D,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      KC_DQUO,      \
OSM(MOD_LCTL),XXXXXXX,      KC_ACL0,      KC_ACL1,      KC_ACL2,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      OSM(MOD_RCTL),\
                                          KC_TAB,       KC_SPC,       TO(L_BASE),   TO(L_BASE),   KC_BSPC,      KC_ENT

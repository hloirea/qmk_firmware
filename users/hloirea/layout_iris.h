#pragma once
#include QMK_KEYBOARD_H
#include "common.h"

#define __BL_0__   KC_GESC,KC_1,   KC_2,   KC_3,   KC_4,   KC_5,                           KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS
#define __BL_1__   KC_TAB, KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,                           KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_BSLS
#define __BL_2__   KC_BSPC,KC_A,   KC_S,   KC_D,   KC_F,   KC_G,                           KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT
#define __BL_3__   KC_LSPO,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_LCTL,        KC_RCTL,KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,KC_RSPC
#define __BL_4__                                   KC_LALT,MO(_LL),TP_LCTL,        TP_RCTL,MO(_UL),KC_RGUI

#define __LL_0__   KC_GRV, KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,                          KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11
#define __LL_1__   MO(_NL),KC_VOLD,KC_MUTE,KC_VOLU,_______,_______,                        KC_HOME,KC_PGDN,KC_PGUP,KC_END, KC_PSCR,KC_SLCK
#define __LL_2__   KC_CAPS,KC_MPRV,KC_MPLY,KC_MNXT,_______,_______,                        KC_LEFT,KC_DOWN,KC_UP,  KC_RGHT,_______,_______
#define __LL_3__   KC_LSPO,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_LCTL,        KC_RCTL,KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,KC_RSPC
#define __LL_4__                                   KC_LALT,MO(_LL),TP_LCTL,        TP_RCTL,MO(_UL),KC_RGUI

#define __UL_0__   KC_GESC,KC_EXLM,KC_AT,  KC_HASH,KC_DLR, KC_PERC,                        KC_CIRC,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,KC_UNDS
#define __UL_1__   KC_TAB, KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,                           KC_NLCK,KC_P7,  KC_P8,  KC_P9,  KC_PSLS,KC_PAST
#define __UL_2__   KC_BSPC,KC_A,   KC_S,   KC_D,   KC_F,   KC_G,                           KC_H,   KC_P4,  KC_P5,  KC_P6,  KC_PMNS,KC_PPLS
#define __UL_3__   KC_LSPO,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_LCTL,        KC_RCTL,KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,KC_RSPC
#define __UL_4__                                   KC_LALT,MO(_LL),TP_LCTL,        TP_RCTL,MO(_UL),KC_RGUI

#define __CL_0__   TO(_BL),TO(_FL),TO(_NL),xxxxxxx,xxxxxxx,xxxxxxx,                        xxxxxxx,xxxxxxx,xxxxxxx,xxxxxxx,xxxxxxx,xxxxxxx
#define __CL_1__   xxxxxxx,xxxxxxx,xxxxxxx,xxxxxxx,xxxxxxx,xxxxxxx,                        xxxxxxx,xxxxxxx,xxxxxxx,xxxxxxx,xxxxxxx,xxxxxxx
#define __CL_2__   xxxxxxx,xxxxxxx,xxxxxxx,xxxxxxx,xxxxxxx,xxxxxxx,                        xxxxxxx,xxxxxxx,xxxxxxx,xxxxxxx,xxxxxxx,xxxxxxx
#define __CL_3__   xxxxxxx,xxxxxxx,xxxxxxx,xxxxxxx,xxxxxxx,xxxxxxx,xxxxxxx,        xxxxxxx,xxxxxxx,xxxxxxx,xxxxxxx,xxxxxxx,xxxxxxx,xxxxxxx
#define __CL_4__                                   xxxxxxx,xxxxxxx,xxxxxxx,        xxxxxxx,xxxxxxx,xxxxxxx

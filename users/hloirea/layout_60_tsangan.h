#pragma once
#include QMK_KEYBOARD_H
#include "common.h"

#define __BL_0__ KC_GESC,KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS,KC_EQL, KC_BSLS,KC_DEL
#define __BL_1__ LT_NPAD,KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC,KC_RBRC,KC_BSPC
#define __BL_2__ S_F2,   KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,KC_ENT
#define __BL_3__ KC_LSFT,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,KC_RSFT,S_F1
#define __BL_4__ KC_LGUI,KC_LALT,KC_LCTL,                        KC_SPC,                         KC_RCTL,MO(_FL),MO(_ML)

#define __NL_0__ _______,KC_EXLM,KC_AT,  KC_HASH,KC_DLR, KC_PERC,KC_CIRC,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,KC_UNDS,KC_EQL, KC_PIPE,KC_DEL
#define __NL_1__ _______,xxxxxxx,xxxxxxx,xxxxxxx,xxxxxxx,xxxxxxx,KC_NLCK,KC_P7,  KC_P8,  KC_P9,  KC_PSLS,KC_PAST,KC_RBRC,KC_BSPC
#define __NL_2__ _______,xxxxxxx,xxxxxxx,xxxxxxx,xxxxxxx,xxxxxxx,xxxxxxx,KC_P4,  KC_P5,  KC_P6,  KC_PMNS,KC_PPLS,KC_PENT
#define __NL_3__ _______,xxxxxxx,xxxxxxx,xxxxxxx,xxxxxxx,xxxxxxx,KC_P0,  KC_P1,  KC_P2,  KC_P3,  KC_PDOT,_______,xxxxxxx
#define __NL_4__ _______,_______,_______,                        _______,                        _______,_______,_______

#define __FL_0__ KC_GRV, KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12, xxxxxxx,KC_INS
#define __FL_1__ _______,xxxxxxx,KC_UP,  xxxxxxx,xxxxxxx,xxxxxxx,xxxxxxx,xxxxxxx,xxxxxxx,xxxxxxx,KC_PSCR,KC_SLCK,KC_PAUS,xxxxxxx
#define __FL_2__ KC_CAPS,KC_LEFT,KC_DOWN,KC_RGHT,xxxxxxx,xxxxxxx,xxxxxxx,xxxxxxx,xxxxxxx,KC_MPLY,KC_MPRV,KC_MNXT,xxxxxxx
#define __FL_3__ _______,KC_APP, xxxxxxx,KC_CALC,xxxxxxx,xxxxxxx,xxxxxxx,xxxxxxx,KC_MUTE,KC_VOLD,KC_VOLU,_______,xxxxxxx
#define __FL_4__ _______,_______,_______,                        _______,                        _______,_______,_______

#define __ML_0__ KC_GRV, KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12, xxxxxxx,KC_INS
#define __ML_1__ _______,xxxxxxx,KC_PGUP,xxxxxxx,xxxxxxx,xxxxxxx,xxxxxxx,xxxxxxx,xxxxxxx,xxxxxxx,KC_PSCR,KC_SLCK,KC_PAUS,xxxxxxx
#define __ML_2__ KC_CAPS,KC_HOME,KC_PGDN,KC_END, xxxxxxx,xxxxxxx,xxxxxxx,xxxxxxx,xxxxxxx,KC_MPLY,KC_MPRV,KC_MNXT,xxxxxxx
#define __ML_3__ _______,KC_APP, xxxxxxx,KC_CALC,xxxxxxx,xxxxxxx,xxxxxxx,xxxxxxx,KC_MUTE,KC_VOLD,KC_VOLU,_______,xxxxxxx
#define __ML_4__ TO(_BL),TO(_NL),TO(_FL),                        _______,                        _______,_______,_______
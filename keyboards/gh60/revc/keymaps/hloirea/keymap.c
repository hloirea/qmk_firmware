#include QMK_KEYBOARD_H

enum LAYER_IDX {
  _BL = 0,
  _FL,
  _UL,
  _ML,
  _CL,
  _MAX_LAYER
};

#define _______ KC_TRNS
#define xxxxxxx KC_NO
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* _BL: Basic Layer */
	[_BL] =
      LAYOUT_60_ansi_split_bs_rshift(
         KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_GRV,  KC_DEL,
         KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
         KC_BSPC, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
         KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, MO(_CL),
         KC_LALT, MO(_FL), KC_LCTL,                   KC_SPC,                    KC_LCTL, KC_RGUI, MO(_FL), KC_RALT),
  /* _FL: Function key Layer */
	[_FL] =
      LAYOUT_60_ansi_split_bs_rshift(
         _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, KC_INS,
         _______, KC_VOLD, KC_MUTE, KC_VOLU, _______, _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_PSCR, KC_SLCK, KC_PAUS, _______,
         KC_CAPS, KC_MPRV, KC_MPLY, KC_MNXT, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______, _______,
         _______, KC_APP,  KC_EXEC, KC_CALC, _______, _______, _______, _______, _______, _______, _______, _______, MO(_CL),
         _______, _______, _______,                   _______,                   _______, _______, _______, _______),
  /* _UL: Utility Layer */
	[_UL] =
      LAYOUT_60_ansi_split_bs_rshift(
         _______, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, KC_DEL,
         _______, xxxxxxx, xxxxxxx, KC_E,    xxxxxxx, xxxxxxx, KC_NLCK, KC_P7,   KC_P8,   KC_P9,   KC_PSLS, KC_PAST, xxxxxxx, xxxxxxx,
         KC_BSPC, KC_A,    xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, KC_P4,   KC_P5,   KC_P6,   KC_PMNS, KC_PPLS, KC_PENT,
         xxxxxxx, xxxxxxx, xxxxxxx, KC_C,    KC_V,    xxxxxxx, KC_P0,   KC_P1,   KC_P2,   KC_P3,   KC_PDOT, xxxxxxx, MO(_CL),
         _______, _______, _______,                   _______,                   _______, _______, _______, _______),
  /* _ML: Mouse layer */
	[_ML] =
      LAYOUT_60_ansi_split_bs_rshift(
         xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx,
         xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, KC_WH_D, KC_WH_U, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx,
         xxxxxxx, KC_BTN1, KC_BTN2, KC_BTN3, xxxxxxx, xxxxxxx, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, xxxxxxx, xxxxxxx, xxxxxxx,
         xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, MO(_CL),
         xxxxxxx, _______, xxxxxxx,                   xxxxxxx,                   xxxxxxx, xxxxxxx, _______, xxxxxxx),
  /* _CL: Control Layer */
	[_CL] =
  LAYOUT_60_ansi_split_bs_rshift(
         TO(_BL), TO(_FL), TO(_UL), TO(_ML), xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx,
         xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx,
         xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx,
         xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, _______,
         xxxxxxx, _______, xxxxxxx,                   xxxxxxx,                   xxxxxxx, xxxxxxx, _______, xxxxxxx),
};

layer_state_t layer_state_set_user(layer_state_t state) {
  uint8_t layer = get_highest_layer(state);
  // esc led
  if (layer == _BL) {
    gh60_esc_led_off();
  } else if (layer == _FL || layer == _UL || layer == _ML) {
    gh60_esc_led_on();
  }
  // fn led
  if (layer == _CL) {
    gh60_fn_led_on();
  } else {
    gh60_fn_led_off();
  }
  return state;
}
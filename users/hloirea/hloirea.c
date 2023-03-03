#include QMK_KEYBOARD_H

#include "hloirea.h"

enum {
    U_TD_BOOT,
#define HLOIREA_X(LAYER, STRING) U_TD_U_##LAYER,
HLOIREA_LAYER_LIST
#undef HLOIREA_X
};

void u_td_fn_boot(tap_dance_state_t *state, void *user_data) { \
  if (state->count == 2) {
    reset_keyboard();
  }
}

#define HLOIREA_X(LAYER, STRING) \
void u_td_fn_U_##LAYER(tap_dance_state_t *state, void *user_data) { \
  if (state->count == 2) { \
    default_layer_set((layer_state_t)1 << U_##LAYER); \
  } \
}
HLOIREA_LAYER_LIST
#undef HLOIREA_X

tap_dance_action_t tap_dance_actions[] = {
    [U_TD_BOOT] = ACTION_TAP_DANCE_FN(u_td_fn_boot),
#define HLOIREA_X(LAYER, STRING) [U_TD_U_##LAYER] = ACTION_TAP_DANCE_FN(u_td_fn_U_##LAYER),
HLOIREA_LAYER_LIST
#undef HLOIREA_X
};


// keymap
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
#define HLOIREA_X(LAYER, STRING) [U_##LAYER] = U_MACRO_VA_ARGS(HLOIREA_LAYERMAPPING_##LAYER, HLOIREA_LAYER_##LAYER),
HLOIREA_LAYER_LIST
#undef HLOIREA_X
};

#if 0
// shift functions
const key_override_t caret_ko  = ko_make_basic(MOD_MASK_SHIFT, KC_4, KC_CIRC);
const key_override_t dollar_ko = ko_make_basic(MOD_MASK_SHIFT, KC_6, KC_DLR);
const key_override_t **key_overrides = (const key_override_t *[]){
    &caret_ko,
    &dollar_ko,    
    NULL
};
#endif

const uint16_t PROGMEM combos_caps_word[]  = {LSFT_T(KC_DQUO), RSFT_T(KC_UNDS), COMBO_END};
const uint16_t PROGMEM combos_left_br_0[]  = {KC_E, KC_D, COMBO_END};
const uint16_t PROGMEM combos_left_br_1[]  = {KC_R, KC_F, COMBO_END};
const uint16_t PROGMEM combos_left_br_2[]  = {KC_W, KC_S, COMBO_END};
const uint16_t PROGMEM combos_right_br_0[] = {KC_I, KC_K, COMBO_END};
const uint16_t PROGMEM combos_right_br_1[] = {KC_U, KC_J, COMBO_END};
const uint16_t PROGMEM combos_right_br_2[] = {KC_O, KC_L, COMBO_END};
const uint16_t PROGMEM combos_alpha_b[]    = {KC_M, KC_COMM, COMBO_END};
const uint16_t PROGMEM combos_alpha_dquo[] = {KC_T, KC_G, COMBO_END};
const uint16_t PROGMEM combos_alpha_unds[] = {KC_Y, KC_H, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
	COMBO(combos_caps_word,  CW_TOGG),
	COMBO(combos_left_br_0,  KC_LCBR),
	COMBO(combos_left_br_1,  KC_LPRN),
	COMBO(combos_left_br_2,  KC_LBRC),
	COMBO(combos_right_br_0, KC_RCBR),
	COMBO(combos_right_br_1, KC_RPRN),
	COMBO(combos_right_br_2, KC_RBRC),
	COMBO(combos_alpha_b,    KC_B),
	COMBO(combos_alpha_unds, KC_UNDS),
	COMBO(combos_alpha_dquo, KC_DQUO)
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(U_SYM,U_M1):
            if (record->tap.count && record->event.pressed) {
                tap_code16(U_M2);
                return false;
            }
            break;
        case LT(U_FUN,U_M2):
            if (record->tap.count && record->event.pressed) {
                tap_code16(U_M1);
                return false;
            }
            break;
        case LSFT_T(KC_DQUO):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_DQUO);
                return false;
            }
            break;
        case RSFT_T(KC_UNDS):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_UNDS);
                return false;
            }
            break;			
    }
    return true;
}


#include QMK_KEYBOARD_H

#include "hloirea.h"
#include "tap_dance.h"

#define ASSIGN_LAYER(layout, ...) layout(__VA_ARGS__)

enum {
#define HLOIREA_TD_FORMAT(DANCE, TAP, HOLD) TD_T_##DANCE,
    HLOIREA_TD_TAP_HOLD
#undef HLOIREA_TD_FORMAT
    TD_T_CUSTOM_MAX,
#define HLOIREA_LAYER_FORMAT(LAYER, STRING) TD_L_##LAYER,
    HLOIREA_LAYER_LIST
#undef HLOIREA_LAYER_FORMAT
    TD_RESET
};

#define HLOIREA_LAYER_FORMAT(LAYER, STRING)                             \
void td_fn_L_##LAYER(tap_dance_state_t *state, void *user_data) {       \
    if (state->count == 2) {                                            \
        layer_move(L_##LAYER);                                          \
    }                                                                   \
}
HLOIREA_LAYER_LIST
#undef HLOIREA_LAYER_FORMAT

static td_tap_state_t tap_state[TD_T_CUSTOM_MAX];
#define HLOIREA_TD_FORMAT(DANCE, TAP, HOLD)                             \
void td_fn_tap_##DANCE(tap_dance_state_t *state, void *user_data) {     \
    uint16_t tap = KC_##TAP;                                            \
    if (state->count == 3) {                                            \
        tap_code16(tap);                                                \
        tap_code16(tap);                                                \
        tap_code16(tap);                                                \
    }                                                                   \
    if (state->count > 3) {                                             \
        tap_code16(tap);                                                \
    }                                                                   \
}                                                                       \
void td_fn_finish_##DANCE(tap_dance_state_t *state, void *user_data) {  \
    int idx = TD_T_##DANCE;                                             \
    uint16_t tap = KC_##TAP;                                            \
    uint16_t hold = KC_##HOLD;                                          \
    tap_state[idx].step = td_step(state);                               \
    switch (tap_state[idx].step) {                                      \
    case SINGLE_TAP: register_code16(tap); break;                       \
    case SINGLE_HOLD: register_code16(hold); break;                     \
    case DOUBLE_TAP: register_code16(tap); register_code16(tap); break; \
    case DOUBLE_SINGLE_TAP: tap_code16(tap); register_code16(tap);      \
    }                                                                   \
}                                                                       \
void td_fn_reset_##DANCE(tap_dance_state_t *state, void *user_data) {   \
    int idx = TD_T_##DANCE;                                             \
    uint16_t tap = KC_##TAP;                                            \
    uint16_t hold = KC_##HOLD;                                          \
    wait_ms(10);                                                        \
    switch (tap_state[idx].step) {                                      \
    case SINGLE_TAP: unregister_code16(tap); break;                     \
    case SINGLE_HOLD: unregister_code16(hold); break;                   \
    case DOUBLE_TAP: unregister_code16(tap); break;                     \
    case DOUBLE_SINGLE_TAP: unregister_code16(tap); break;              \
    }                                                                   \
    tap_state[idx].step = 0;                                            \
}
HLOIREA_TD_TAP_HOLD
#undef HLOIREA_TD_FORMAT


void td_fn_boot(tap_dance_state_t *state, void *user_data) {
    if (state->count >= 2) {
        reset_keyboard();
    }
}

tap_dance_action_t tap_dance_actions[] = {
#define HLOIREA_TD_FORMAT(DANCE, TAP, HOLD) [TD_T_##DANCE] = ACTION_TAP_DANCE_FN_ADVANCED(td_fn_tap_##DANCE, td_fn_finish_##DANCE, td_fn_reset_##DANCE),
    HLOIREA_TD_TAP_HOLD
#undef HLOIREA_TD_FORMAT
#define HLOIREA_LAYER_FORMAT(LAYER, STRING) [TD_L_##LAYER] = ACTION_TAP_DANCE_FN(td_fn_L_##LAYER),
    HLOIREA_LAYER_LIST
#undef HLOIREA_LAYER_FORMAT
    [TD_RESET] = ACTION_TAP_DANCE_FN(td_fn_boot)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
#define HLOIREA_LAYER_FORMAT(LAYER, STRING) [L_##LAYER] = ASSIGN_LAYER(LAYOUT_hloirea, HLOIREA_LAYER_##LAYER),
    HLOIREA_LAYER_LIST
#undef HLOIREA_LAYER_FORMAT
};

const uint16_t PROGMEM combos_left_br_0[]  = {KC_E, KC_D, COMBO_END};
const uint16_t PROGMEM combos_left_br_1[]  = {KC_R, KC_F, COMBO_END};
const uint16_t PROGMEM combos_left_br_2[]  = {KC_W, KC_S, COMBO_END};
const uint16_t PROGMEM combos_right_br_0[] = {KC_I, KC_K, COMBO_END};
const uint16_t PROGMEM combos_right_br_1[] = {KC_U, KC_J, COMBO_END};
const uint16_t PROGMEM combos_right_br_2[] = {KC_O, KC_L, COMBO_END};
const uint16_t PROGMEM combos_alpha_b[]    = {KC_N, KC_M, COMBO_END};
const uint16_t PROGMEM combos_bspc[]       = {KC_M, TD(TD_T_CUSTOM_1), COMBO_END};
const uint16_t PROGMEM combos_del[]        = {TD(TD_T_CUSTOM_1), KC_DOT, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combos_left_br_0,  KC_LCBR),
    COMBO(combos_left_br_1,  KC_LPRN),
    COMBO(combos_left_br_2,  KC_LBRC),
    COMBO(combos_right_br_0, KC_RCBR),
    COMBO(combos_right_br_1, KC_RPRN),
    COMBO(combos_right_br_2, KC_RBRC),
    COMBO(combos_alpha_b,    KC_B),
    COMBO(combos_bspc,       KC_BSPC),
    COMBO(combos_del,        KC_DEL)
};

const key_override_t ko_list[] = {
	ko_make_basic(MOD_MASK_SHIFT, TD(TD_T_CUSTOM_0), KC_COLN), // prevent input delay
	ko_make_basic(MOD_MASK_SHIFT, TD(TD_T_CUSTOM_1), KC_MINS),
	ko_make_basic(MOD_MASK_SHIFT, KC_DOT, KC_EXLM)
};

const key_override_t **key_overrides = (const key_override_t *[]){
    &ko_list[0],
    &ko_list[1],
    &ko_list[2],
    NULL
};

bool caps_word_press_user(uint16_t keycode) {
    switch (keycode) {
        case KC_A:
        case KC_B:
        case KC_C:
        case KC_D:
        case KC_E:
        case KC_F:
        case KC_G:
        case KC_H:
        case KC_I:
        case KC_J:
        case KC_K:
        case KC_L:
        case KC_M:
        case KC_N:
        case KC_O:
        case KC_P:
        case KC_Q:
        case KC_R:
        case KC_S:
        case KC_T:
        case KC_U:
        case KC_V:
        case KC_W:
        case KC_X:
        case KC_Y:
        case KC_Z:
        case KC_MINS:
            add_weak_mods(MOD_BIT(KC_LSFT));
            return true;

        case TD(TD_T_CUSTOM_1):
        case KC_0:
        case KC_1:
        case KC_2:
        case KC_3:
        case KC_4:
        case KC_5:
        case KC_6:
        case KC_7:
        case KC_8:
        case KC_9:
        case KC_BSPC:
        case KC_DEL:
        case KC_UNDS:
            return true;

        default:
            return false;
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LALT_T(U_P1):
        if (record->tap.count && record->event.pressed) {
            tap_code16(U_P1);
            return false;
        }
        break;
        case LALT_T(U_P2):
        if (record->tap.count && record->event.pressed) {
            tap_code16(U_P2);
            return false;
        }
        break;
#if 0
        case U_MACRO_00:
        if (record->event.pressed) {
            tap_code16(C(KC_X));
            wait_ms(10);
            tap_code16(C(KC_W));
            return false;
        }
        break;
        case U_MACRO_01:
        if (record->event.pressed) {
            tap_code16(C(KC_X));
            wait_ms(10);
            tap_code16(C(KC_S));
            return false;
        }
        break;
        case U_MACRO_02:
        if (record->event.pressed) {
            tap_code16(C(KC_X));
            wait_ms(10);
            tap_code16(C(KC_F));
            return false;
        }
        break;
        case U_MACRO_03:
        if (record->event.pressed) {
            tap_code16(C(KC_X));
            wait_ms(10);
            tap_code16(KC_0);
            return false;
        }
        break;
        case U_MACRO_04:
        if (record->event.pressed) {
            tap_code16(C(KC_X));
            wait_ms(10);
            tap_code16(KC_1);
            return false;
        }
        break;
        case U_MACRO_05:
        if (record->event.pressed) {
            tap_code16(C(KC_X));
            wait_ms(10);
            tap_code16(KC_3);
            return false;
        }
        break;
        case U_MACRO_06:
        if (record->event.pressed) {
            tap_code16(C(KC_X));
            wait_ms(10);
            tap_code16(KC_2);
            return false;
        }
        break;
        case U_MACRO_07:
        if (record->event.pressed) {
            tap_code16(C(KC_X));
            wait_ms(10);
            tap_code16(KC_R);
            wait_ms(10);
            tap_code16(KC_SPC);
            return false;
        }
        break;
        case U_MACRO_08:
        if (record->event.pressed) {
            tap_code16(C(KC_X));
            wait_ms(10);
            tap_code16(KC_R);
            wait_ms(10);
            tap_code16(KC_J);
            return false;
        }
        break;

        case U_MACRO_09:
        if (record->event.pressed) {
            tap_code16(C(KC_X));
            wait_ms(10);
            tap_code16(KC_SPC);
            return false;
        }
        break;
        case U_MACRO_10:
        if (record->event.pressed) {
            tap_code16(C(KC_X));
            wait_ms(10);
            tap_code16(KC_B);
            return false;
        }
        break;
        case U_MACRO_11:
        if (record->event.pressed) {
            tap_code16(C(KC_X));
            wait_ms(10);
            tap_code16(KC_K);
            return false;
        }
        break;
        case U_MACRO_12:
        if (record->event.pressed) {
            tap_code16(A(KC_PERC));
            return false;
        }
        break;
        case U_MACRO_13:
        if (record->event.pressed) {
            tap_code16(A(KC_LABK));
            return false;
        }
        break;
        case U_MACRO_14:
        if (record->event.pressed) {
            tap_code16(A(KC_RABK));
            return false;
        }
        break;
#endif
    }
    return true;
}

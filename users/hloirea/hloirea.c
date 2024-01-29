#include QMK_KEYBOARD_H

#include "hloirea.h"
#include "tap_dance.h"

#define ASSIGN_LAYER(layout, ...) layout(__VA_ARGS__)

enum tap_dance_action_idx_e {
#define HLOIREA_TD_FORMAT(DANCE, TAP, HOLD) TD_T_##DANCE,
    HLOIREA_TD_TAP_HOLD
#undef HLOIREA_TD_FORMAT
    TD_T_CUSTOM_MAX,
#define HLOIREA_LAYER_FORMAT(LAYER, STRING) TD_L_##LAYER,
    HLOIREA_LAYER_LIST
#undef HLOIREA_LAYER_FORMAT
    TD_RESET
};

/* tap dance for layer functions */
#define HLOIREA_LAYER_FORMAT(LAYER, STRING)                             \
void td_fn_L_##LAYER(tap_dance_state_t *state, void *user_data) {       \
    if (state->count >= 2) {                                            \
        layer_move(L_##LAYER);                                          \
    }                                                                   \
}
HLOIREA_LAYER_LIST
#undef HLOIREA_LAYER_FORMAT

/* tap dance for advanced functions */
#define HLOIREA_TD_FORMAT(DANCE, TAP, HOLD)                             \
static td_tap_state_t tap_state[TD_T_CUSTOM_MAX];                       \
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

/* tap dance for reset (QK_BOOT) */
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
#if 0 /* LAYOUT_hloirea(layouts/community/split_3x6_3/hloirea) is identical to LAYOUT_split_3x6_3 */
#define HLOIREA_LAYER_FORMAT(LAYER, STRING) [L_##LAYER] = ASSIGN_LAYER(LAYOUT_hloirea, HLOIREA_LAYER_##LAYER),
#else
#define HLOIREA_LAYER_FORMAT(LAYER, STRING) [L_##LAYER] = ASSIGN_LAYER(LAYOUT_split_3x6_3, HLOIREA_LAYER_##LAYER),
#endif
    HLOIREA_LAYER_LIST
#undef HLOIREA_LAYER_FORMAT
};

const uint16_t PROGMEM combos_left_br_0[]  = {KC_E, KC_D, COMBO_END};
const uint16_t PROGMEM combos_left_br_1[]  = {KC_R, KC_F, COMBO_END};
const uint16_t PROGMEM combos_left_br_2[]  = {KC_W, KC_S, COMBO_END};
const uint16_t PROGMEM combos_right_br_0[] = {KC_I, KC_K, COMBO_END};
const uint16_t PROGMEM combos_right_br_1[] = {KC_U, KC_J, COMBO_END};
const uint16_t PROGMEM combos_right_br_2[] = {KC_O, KC_L, COMBO_END};
const uint16_t PROGMEM combos_alpha_b[]    = {KC_M, KC_COMM, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combos_left_br_0,  KC_LCBR),
    COMBO(combos_left_br_1,  KC_LPRN),
    COMBO(combos_left_br_2,  KC_LBRC),
    COMBO(combos_right_br_0, KC_RCBR),
    COMBO(combos_right_br_1, KC_RPRN),
    COMBO(combos_right_br_2, KC_RBRC),
    COMBO(combos_alpha_b,    KC_B)
};

bool caps_word_press_user(uint16_t keycode) {
    switch (keycode) {
        case KC_A ... KC_Z:
        case KC_MINS:
            add_weak_mods(MOD_BIT(KC_LSFT));
            return true;

        case KC_1 ... KC_0:
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
        case U_P_P1:
        if (record->tap.count && record->event.pressed) {
            tap_code16(U_P1);
            return false;
        }
        break;
        case U_P_P2:
        if (record->tap.count && record->event.pressed) {
            tap_code16(U_P2);
            return false;
        }
        break;

        case U_P_UNDS:
        if (record->tap.count && record->event.pressed) {
            tap_code16(KC_UNDS);
            return false;
        }
        break;

        case U_P_DQUO:
        if (record->tap.count && record->event.pressed) {
            tap_code16(KC_DQUO);
            return false;
        }
        break;

        case U_P_LNG1:
        if (record->tap.count && record->event.pressed) {
            tap_code16(KC_LNG1);
            return false;
        }
        break;
    }
    return true;
}

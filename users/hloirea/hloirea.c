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

const uint16_t PROGMEM combos_lbr[][3] = {
    {KC_R, KC_F, COMBO_END},
    {KC_E, KC_D, COMBO_END},
    {KC_W, KC_S, COMBO_END}
};
const uint16_t PROGMEM combos_rbr[][3] = {
    {KC_U, KC_J, COMBO_END},
    {KC_I, KC_K, COMBO_END},
    {KC_O, KC_L, COMBO_END}
};
const uint16_t PROGMEM combos_p1[] = {
    KC_G, KC_B, COMBO_END
};
const uint16_t PROGMEM combos_p2[] = {
    KC_H, KC_N, COMBO_END
};
const uint16_t PROGMEM combos_caps_word[] = {
    KC_F, KC_J, COMBO_END
};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combos_lbr[0],    KC_LPRN),
    COMBO(combos_lbr[1],    KC_LCBR),
    COMBO(combos_lbr[2],    KC_LBRC),
    COMBO(combos_rbr[0],    KC_RPRN),
    COMBO(combos_rbr[1],    KC_RCBR),
    COMBO(combos_rbr[2],    KC_RBRC),
    COMBO(combos_caps_word, CW_TOGG),
    COMBO(combos_p1,        U_P1),
    COMBO(combos_p2,        U_P2)
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

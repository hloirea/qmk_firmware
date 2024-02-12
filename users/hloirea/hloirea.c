#include QMK_KEYBOARD_H

#include "users/hloirea/def.h"

#define ASSIGN_LAYER(layout, ...) layout(__VA_ARGS__)

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

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combos_lbr[0],    KC_LPRN),
    COMBO(combos_lbr[1],    KC_LCBR),
    COMBO(combos_lbr[2],    KC_LBRC),
    COMBO(combos_rbr[0],    KC_RPRN),
    COMBO(combos_rbr[1],    KC_RCBR),
    COMBO(combos_rbr[2],    KC_RBRC)
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
    }
    return true;
}

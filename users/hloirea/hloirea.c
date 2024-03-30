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

const uint16_t PROGMEM combos_ul[][3] = {
    {KC_T,   KC_G,    COMBO_END},
    {KC_R,   KC_F,    COMBO_END},
    {KC_E,   KC_D,    COMBO_END},
    {KC_W,   KC_S,    COMBO_END},
    {KC_Q,   KC_A,    COMBO_END}
};

const uint16_t PROGMEM combos_ll[][3] = {
    {KC_G,   KC_B,    COMBO_END},
    {KC_F,   KC_V,    COMBO_END},
    {KC_D,   KC_C,    COMBO_END},
    {KC_S,   KC_X,    COMBO_END}
};

const uint16_t PROGMEM combos_ur[][3] = {
    {KC_Y,   KC_H,    COMBO_END},
    {KC_HASH,KC_QUOT, COMBO_END},
    {KC_U,   KC_J,    COMBO_END},
    {KC_I,   KC_K,    COMBO_END},
    {KC_O,   KC_L,    COMBO_END},
    {KC_P,   KC_SCLN, COMBO_END}
};

const uint16_t PROGMEM combos_lr[][3] = {
    {KC_H,   KC_N,    COMBO_END},
    {KC_J,   KC_M,    COMBO_END},
    {KC_K,   KC_COMM, COMBO_END},
    {KC_L,   KC_DOT,  COMBO_END}
};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combos_ul[0],    KC_ESC),
    COMBO(combos_ul[1],    KC_LPRN),
    COMBO(combos_ul[2],    KC_LCBR),
    COMBO(combos_ul[3],    KC_LBRC),
    COMBO(combos_ul[4],    KC_GRV),

    COMBO(combos_ll[0],    KC_UNDS),
    COMBO(combos_ll[1],    OSM(MOD_LGUI)),
    COMBO(combos_ll[2],    OSM(MOD_LALT)),
    COMBO(combos_ll[3],    OSM(MOD_LCTL)),

    COMBO(combos_ur[0],    KC_LNG1),
    COMBO(combos_ur[1],    KC_LNG2),
    COMBO(combos_ur[2],    KC_RPRN),
    COMBO(combos_ur[3],    KC_RCBR),
    COMBO(combos_ur[4],    KC_RBRC),
    COMBO(combos_ur[5],    KC_DEL),

    COMBO(combos_lr[0],    KC_DQUO),
    COMBO(combos_lr[1],    OSM(MOD_RGUI)),
    COMBO(combos_lr[2],    OSM(MOD_RALT)),
    COMBO(combos_lr[3],    OSM(MOD_RCTL))
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

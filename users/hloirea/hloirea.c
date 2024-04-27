#include QMK_KEYBOARD_H

#include "users/hloirea/def.h"

#define ASSIGN_LAYER(layout, ...) layout(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
#if 0 /* LAYOUT_hloirea(layouts/community/split_3x6_3/hloirea) is identical to LAYOUT_split_3x6_3 */
#define HLOIREA_LAYER_FORMAT(LAYER, STRING) [L_##LAYER] = ASSIGN_LAYER(LAYOUT_hloirea, HLOIREA_LAYER_##LAYER),
#else
#define HLOIREA_LAYER_FORMAT(LAYER, STRING) [L_##LAYER] = ASSIGN_LAYER(LAYOUT_split_3x5_3, HLOIREA_LAYER_##LAYER),
#endif
    HLOIREA_LAYER_LIST
#undef HLOIREA_LAYER_FORMAT
};

const uint16_t PROGMEM combos_lbr[][3] = {
    {KC_F,   KC_V,    COMBO_END},
    {KC_D,   KC_C,    COMBO_END},
    {KC_S,   KC_X,    COMBO_END}
};

const uint16_t PROGMEM combos_rbr[][3] = {
    {KC_J,   KC_M,    COMBO_END},
    {KC_K,   KC_COMM, COMBO_END},
    {KC_L,   KC_DOT,  COMBO_END}
};

const uint16_t PROGMEM combos_lmod[][3] = {
    {KC_R,   KC_F,    COMBO_END},
    {KC_E,   KC_D,    COMBO_END},
    {KC_W,   KC_S,    COMBO_END},
    {KC_PIPE,KC_EQL,  COMBO_END}
};

const uint16_t PROGMEM combos_rmod[][3] = {
    {KC_U,   KC_J,    COMBO_END},
    {KC_I,   KC_K,    COMBO_END},
    {KC_O,   KC_L,    COMBO_END},
    {KC_8,   KC_5,    COMBO_END}
};

const uint16_t PROGMEM combos_lang[][3] = {
    {KC_H,   KC_N,    COMBO_END},
    {KC_QUOT,KC_0,    COMBO_END}
};

const uint16_t PROGMEM combos_char[][3] = {
    {KC_T,   KC_G,    COMBO_END},
    {KC_AT,  KC_QUES, COMBO_END},
    {KC_Y,   KC_H,    COMBO_END},
    {KC_HASH,KC_QUOT, COMBO_END},
    {KC_Q,   KC_A,    COMBO_END}
};
const uint16_t PROGMEM combos_etc[][3] = {
    {KC_G,   KC_B,    COMBO_END},
    {KC_P,   KC_SCLN, COMBO_END}
};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combos_lbr[0],    KC_LPRN),
    COMBO(combos_lbr[1],    KC_LCBR),
    COMBO(combos_lbr[2],    KC_LBRC),

    COMBO(combos_rbr[0],    KC_RPRN),
    COMBO(combos_rbr[1],    KC_RCBR),
    COMBO(combos_rbr[2],    KC_RBRC),

    COMBO(combos_lmod[0],   OSM(MOD_LALT)),
    COMBO(combos_lmod[1],   OSM(MOD_LSFT)),
    COMBO(combos_lmod[2],   OSM(MOD_LGUI)),
    COMBO(combos_lmod[3],   OSM(MOD_LSFT)),

    COMBO(combos_rmod[0],   OSM(MOD_RALT)),
    COMBO(combos_rmod[1],   OSM(MOD_RSFT)),
    COMBO(combos_rmod[2],   OSM(MOD_RGUI)),
    COMBO(combos_rmod[3],   OSM(MOD_RSFT)),

    COMBO(combos_lang[0],   KC_LNG1),
    COMBO(combos_lang[1],   KC_LNG2),

    COMBO(combos_char[0],    KC_UNDS),
    COMBO(combos_char[1],    KC_UNDS),
    COMBO(combos_char[2],    KC_DQUO),
    COMBO(combos_char[3],    KC_DQUO),
    COMBO(combos_char[4],    KC_GRV),

    COMBO(combos_etc[0],    KC_ESC),
    COMBO(combos_etc[1],    KC_DEL)
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

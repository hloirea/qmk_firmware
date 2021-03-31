#include QMK_KEYBOARD_H
#include "common.h"
#include "layer_state_set.h"

layer_state_t layer_state_set_user(layer_state_t state) {
#if defined(HLOIREA_KEYBOARD_GH60)
    uint8_t layer = get_highest_layer(state);
    // esc led
    if (layer == _BL) {
        gh60_esc_led_off();
    } else if (layer == _FL || layer == _NL) {
        gh60_esc_led_on();
    }
    // fn led
    if (layer == _CL) {
        gh60_fn_led_on();
    } else {
        gh60_fn_led_off();
    }
#endif
    return state;
}

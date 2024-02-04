#include QMK_KEYBOARD_H
#include "users/hloirea/def.h"

static const char PROGMEM qmk_logo[][7] = {
    {0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x00},
    {0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0x00},
    {0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0x00}
};

bool oled_task_user(void) {
    int row = 0;
    oled_set_cursor(0, row);
    oled_write_P(qmk_logo[row], false);
    oled_write_P(PSTR(" LAYER: "), false);

    switch (get_highest_layer(layer_state)) {
#define HLOIREA_LAYER_FORMAT(LAYER, STRING) case L_##LAYER: oled_write_P(PSTR(STRING), false); break;
        HLOIREA_LAYER_LIST
#undef HLOIREA_LAYER_FORMAT
        default:
            oled_write_P(PSTR("UNDEF "), false);
    }
    row++;
    oled_set_cursor(0, row);
    oled_write_P(qmk_logo[row], false);

    row++;
    oled_set_cursor(0, row);
    oled_write_P(qmk_logo[row], false);
    oled_write_P(PSTR(" SHIFT: "), false);

    bool is_caps_lock_p = host_keyboard_led_state().caps_lock;
    bool is_caps_word_p = is_caps_word_on();
    if (is_caps_lock_p && is_caps_word_p) {
        oled_write_P(PSTR("BOTH"), false);
    } else if (is_caps_lock_p) {
        oled_write_P(PSTR("LOCK"), false);
    } else if (is_caps_word_p) {
        oled_write_P(PSTR("WORD"), false);
    } else {
        oled_write_P(PSTR("OFF "), false);
    }

    return false;
}

bool shutdown_user(bool jump_to_bootloader) {
    oled_clear();
    oled_set_cursor(0, 1);
    if (jump_to_bootloader) {
        oled_write_P(PSTR("Awaiting New Firmware "), false);
    } else {
        oled_write_P(PSTR("Rebooting "), false);
    }
    oled_render_dirty(true);

    return false;
}

#include QMK_KEYBOARD_H
#include "hloirea.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* _BL: Basic Layer */
    [_BL] = LAYOUT_hloirea_wrapper(__BL_0__,
                                   __BL_1__,
                                   __BL_2__,
                                   __BL_3__,
                                   __BL_4__),
    /* _FL: Function key Layer */
    [_FL] = LAYOUT_hloirea_wrapper(__FL_0__,
                                   __FL_1__,
                                   __FL_2__,
                                   __FL_3__,
                                   __FL_4__)
};

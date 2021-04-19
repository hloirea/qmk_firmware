#include QMK_KEYBOARD_H
#include "hloirea.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* _BL: Basic Layer */
    [_BL] = LAYOUT_hloirea_wrapper(__BL_0__,
                                   __BL_1__,
                                   __BL_2__,
                                   __BL_3__,
                                   __BL_4__),
    /* _NL: Numpad Layer */
    [_NL] = LAYOUT_hloirea_wrapper(__NL_0__,
                                   __NL_1__,
                                   __NL_2__,
                                   __NL_3__,
                                   __NL_4__),
    /* _FL: Function key Layer */
    [_FL] = LAYOUT_hloirea_wrapper(__FL_0__,
                                   __FL_1__,
                                   __FL_2__,
                                   __FL_3__,
                                   __FL_4__),
    /* _ML: Meta key Layer */
    [_ML] = LAYOUT_hloirea_wrapper(__ML_0__,
                                   __ML_1__,
                                   __ML_2__,
                                   __ML_3__,
                                   __ML_4__),
};

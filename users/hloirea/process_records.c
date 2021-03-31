#include QMK_KEYBOARD_H
#include "common.h"
#include "process_records.h"

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    bool ret = true;
    switch (keycode) {
    case TP_LCTL:
        perform_space_cadet(record, keycode, KC_LCTL, KC_LSFT, KC_LBRC);
        ret = false;
        break;
    case TP_RCTL:
        perform_space_cadet(record, keycode, KC_RCTL, KC_RSFT, KC_RBRC);
        ret = false;
        break;
    default:
        break;
    }
    return ret;
}

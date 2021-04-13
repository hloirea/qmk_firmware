#include QMK_KEYBOARD_H
#include "common.h"
#include "process_records.h"
#include "action_tapping.h"

static uint8_t  sc_last  = 0;
static uint16_t sc_timer = 0;
#ifdef MODDED_MT_CARRYOVER
static uint8_t sc_mods = 0;
#endif

void perform_modded_mt(keyrecord_t *record, uint16_t sc_keycode, uint8_t holdMod, uint8_t keycode, uint8_t tapMod) {
    if (record->event.pressed) {
        sc_last  = holdMod;
        sc_timer = timer_read();
#ifdef MODDED_MT_CARRYOVER
        sc_mods = get_mods();
#endif
        if (IS_MOD(holdMod)) {
            register_mods(MOD_BIT(holdMod));
        }
    } else {
#ifdef TAPPING_TERM_PER_KEY
        if (sc_last == holdMod && timer_elapsed(sc_timer) < get_tapping_term(sc_keycode, record))
#else
        if (sc_last == holdMod && timer_elapsed(sc_timer) < TAPPING_TERM)
#endif
        {
            if (holdMod != tapMod) {
                if (IS_MOD(holdMod)) {
                    unregister_mods(MOD_BIT(holdMod));
                }
                if (IS_MOD(tapMod)) {
                    register_mods(MOD_BIT(tapMod));
                }
            }
#ifdef MODDED_MT_CARRYOVER
            set_weak_mods(sc_mods);
#endif
            tap_code(keycode);
#ifdef MODDED_MT_CARRYOVER
            clear_weak_mods();
#endif
            if (IS_MOD(tapMod)) {
                unregister_mods(MOD_BIT(tapMod));
            }
        } else {
            if (IS_MOD(holdMod)) {
                unregister_mods(MOD_BIT(holdMod));
            }
        }
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    bool ret = true;
    switch (keycode) {
    case TP_LCTL:
        perform_modded_mt(record, keycode, KC_LCTL, KC_LBRC, KC_LSFT);
        ret = false;
        break;
    case TP_RCTL:
        perform_modded_mt(record, keycode, KC_RCTL, KC_RBRC, KC_RSFT);
        ret = false;
        break;
    case TP_BSPC:
        perform_modded_mt(record, keycode, KC_LCTL, KC_BSPC, KC_NO);
        ret = false;
        break;
    case TP_ENT:
        perform_modded_mt(record, keycode, KC_LCTL, KC_ENT, KC_NO);
        ret = false;
        break;
    default:
        break;
    }
    return ret;
}

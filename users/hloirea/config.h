#pragma once

#define DEBOUNCE 8

#ifdef TAPPING_TERM
#undef TAPPING_TERM
#endif
#define TAPPING_TERM 200
/* #define TAPPING_TERM_PER_KEY */

/* Mode-Tap Setting */
#ifdef RETRO_TAPPING
#undef RETRO_TAPPING
#endif
#ifndef PERMISSIVE_HOLD
#define PERMISSIVE_HOLD
#endif

/* Disable Quick Tap */
#ifdef QUICK_TAP_TERM
#undef QUICK_TAP_TERM
#endif
#define QUICK_TAP_TERM 0

#ifdef HOLD_ON_OTHER_KEY_PRESS
#undef HOLD_ON_OTHER_KEY_PRESS
#endif

/* Combo Setup */
#ifdef COMBO_COUNT
#undef COMBO_COUNT
#endif
#define COMBO_COUNT 20
#ifdef COMBO_TERM
#undef COMBO_TERM
#endif
#define COMBO_TERM  100
#define EXTRA_SHORT_COMBOS

#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD

/* Right MCU is Master */
#define MASTER_RIGHT
#define SPLIT_LAYER_STATE_ENABLE
#define SPLIT_LED_STATE_ENABLE
// #define SPLIT_POINTING_ENABLE

/* Trackball */
// #define POINTING_DEVICE_RIGHT
#define POINTING_DEVICE_ROTATION_90
#define PIMORONI_TRACKBALL_SCALE 1
#define MOUSE_EXTENDED_REPORT

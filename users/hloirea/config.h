#pragma once

#ifdef TAPPING_TERM
#undef TAPPING_TERM
#endif
#define TAPPING_TERM 256

/* Mode-Tap Setting */
#ifndef IGNORE_MOD_TAP_INTERRUPT
#define IGNORE_MOD_TAP_INTERRUPT
#endif
#ifdef RETRO_TAPPING
#undef RETRO_TAPPING
#endif
#ifndef PERMISSIVE_HOLD
#define PERMISSIVE_HOLD
#endif

#ifndef NO_AUTO_SHIFT_ALPHA
#define NO_AUTO_SHIFT_ALPHA
#endif

/* Auto Shift Timeout */
#ifdef AUTO_SHIFT_TIMEOUT
#undef AUTO_SHIFT_TIMEOUT
#endif
#define AUTO_SHIFT_TIMEOUT 256

/* Disable Auto Shift Setup Mode */
#ifndef AUTO_SHIFT_NO_SETUP
#define AUTO_SHIFT_NO_SETUP
#endif

/* Combo Setup */
#define COMBO_COUNT 10
#define COMBO_TERM  128
#define EXTRA_SHORT_COMBOS

/* Disable Quick Tap */
#ifdef QUICK_TAP_TERM
#undef QUICK_TAP_TERM
#endif
#define QUICK_TAP_TERM 0

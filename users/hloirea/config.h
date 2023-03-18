#pragma once

#ifdef TAPPING_TERM
#undef TAPPING_TERM
#endif
#define TAPPING_TERM 200

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


#if 0
/* Auto Shift Timeout */
#ifdef AUTO_SHIFT_TIMEOUT
#undef AUTO_SHIFT_TIMEOUT
#endif
#define AUTO_SHIFT_TIMEOUT TAPPING_TERM

/* Disable Auto Shift Setup Mode */
#ifndef AUTO_SHIFT_NO_SETUP
#define AUTO_SHIFT_NO_SETUP
#endif

#ifndef NO_AUTO_SHIFT_ALPHA
#define NO_AUTO_SHIFT_ALPHA
#endif
#endif

/* Combo Setup */
#ifdef COMBO_COUNT
#undef COMBO_COUNT
#endif
#define COMBO_COUNT 7
#ifdef COMBO_TERM
#undef COMBO_TERM
#endif
#define COMBO_TERM  96
/* #define EXTRA_SHORT_COMBOS */

/* Disable Quick Tap */
#ifdef QUICK_TAP_TERM
#undef QUICK_TAP_TERM
#endif
#define QUICK_TAP_TERM 0

/* Oneshot */
#ifdef ONESHOT_TIMEOUT
#undef ONESHOT_TIMEOUT
#endif
#define ONESHOT_TIMEOUT 500

#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD

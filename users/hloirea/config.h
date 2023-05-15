#pragma once

#define DEBOUNCE 10

#ifdef TAPPING_TERM
#undef TAPPING_TERM
#endif
#define TAPPING_TERM 200
#define TAPPING_TERM_PER_KEY

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

/* Disable Quick Tap */
#ifdef QUICK_TAP_TERM
#undef QUICK_TAP_TERM
#endif
#define QUICK_TAP_TERM 0

/* Combo Setup */
#ifdef COMBO_COUNT
#undef COMBO_COUNT
#endif
#define COMBO_COUNT 7
#ifdef COMBO_TERM
#undef COMBO_TERM
#endif
#define COMBO_TERM  96
#define EXTRA_SHORT_COMBOS

#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD

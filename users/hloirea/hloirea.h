#pragma once

#include "layer_selection.h"
#include "layer_list.h"

enum hloirea_layers {
#define HLOIREA_X(LAYER, STRING) U_##LAYER,
HLOIREA_LAYER_LIST
#undef HLOIREA_X
};

#define U_MACRO_VA_ARGS(macro, ...) macro(__VA_ARGS__)

#if !defined (HLOIREA_MAPPING)
  #define HLOIREA_MAPPING LAYOUT_hloirea
#endif

#define U_M1 LSFT(KC_F1) // leader key for tmux
#define U_M2 LSFT(KC_F2) // leader key for emacs

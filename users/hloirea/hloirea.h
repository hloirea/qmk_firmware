#pragma once

#include QMK_KEYBOARD_H
#include "common.h"
#include "process_records.h"
#include "layer_state_set.h"

#if defined (HLOIREA_LAYOUT_60_DEFAULT)
#include "layout_60_default.h"
#define LAYOUT_hloirea_wrapper(...) LAYOUT_60_ansi_split_bs_rshift(__VA_ARGS__)

#elif defined (HLOIREA_LAYOUT_60_TSANGAN)
#include "layout_60_tsangan.h"
#define LAYOUT_hloirea_wrapper(...) LAYOUT_60_tsangan_hhkb(__VA_ARGS__)

#elif defined (HLOIREA_LAYOUT_65_SHINAH)
#include "layout_65_shinah.h"
#define LAYOUT_hloirea_wrapper(...) LAYOUT_65_ansi_split_bs(__VA_ARGS__)
#endif

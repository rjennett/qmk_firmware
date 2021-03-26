#pragma once

#include "config_common.h"

#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x0000
#define DEVICE_VER      0x0001
#define MANUFACTURER    mango
#define PRODUCT         Mango 50
#define DESCRIPTION     A custom keyboard

#define MATRIX_ROWS 5
#define MATRIX_COLS 13

#define MATRIX_ROW_PINS { B6, B2, B3, B1, F7}
#define MATRIX_COL_PINS { D1, D0, D4, C6, D7, E6, B4, B5, F4, F5, F6, D3, D2 }

#define DIODE_DIRECTION COL2ROW
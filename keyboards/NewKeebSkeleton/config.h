#pragma once

#include "config_common.h"

// CHANGE THESE VALUES TO REFLECT YOUR PCB IDENTITY
/* USB Device descriptor parameter */
#define VENDOR_ID 0xFEED
#define PRODUCT_ID 0x0000
#define MANUFACTURER    YOUR NAME OR COOL NICKNAME
#define PRODUCT         YOUR KEEB NAME

// CHANGE THESE VALUES TO REFLECT YOUR MATRIX SIZE AND LAYOUT
/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 14
// ROWS: Top to bottom, COLS: Left to right
#define MATRIX_ROW_PINS {C2,D0,B0,C7,C5}
#define MATRIX_COL_PINS {C4,C6,B7,B6,B5,B4,B3,B2,B1,D6,D5,D4,D2,D1}

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

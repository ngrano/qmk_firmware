#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0xCB10
#define PRODUCT_ID      0x6256
#define DEVICE_VER      0x0600
#define MANUFACTURER    Keebio
#define PRODUCT         Keebio Iris *Handwired*

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 10
#define MATRIX_COLS 6

// wiring of each half

/*
 Pro Micro Pinout:

     D3 +--------+ RAW
     D2 | +----+ | GND
     GND|        | RST
     GND|        | VCC
SDA  D1 |        | F4
SCL  D0 |        | F5
     D4 |        | F6
     C6 |        | F7
     D7 |        | B1
     E6 |        | B3
     B4 |        | B2
     B5 +--------+ B6

*/

#define MATRIX_ROW_PINS { C6, D7, E6, B4, B5 }
#define MATRIX_COL_PINS { B6, B2, B3, F7, B1, F6 }
#define MATRIX_ROW_PINS_RIGHT { F7, B1, B3, B2, B6 }
#define MATRIX_COL_PINS_RIGHT { B5, B4, E6, D7, C6, D4 }

//#define SPLIT_HAND_PIN D5

//#define ENCODERS_PAD_A { B2 }
//#define ENCODERS_PAD_B { B3 }
//#define ENCODERS_PAD_A_RIGHT { F7 }
//#define ENCODERS_PAD_B_RIGHT { F6 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* number of backlight levels */
// #define BACKLIGHT_LEVELS 3

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 0

/* serial.c configuration for split keyboard */
#define SOFT_SERIAL_PIN D0

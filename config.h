#pragma once

#define SOFT_SERIAL_PIN GP1
// #define USE_SERIAL
// #define EE_HANDS
#define MASTER_LEFT
// #define SPLIT_HAND_PIN GP22
// #define SERIAL_USART_FULL_DUPLEX  // Enable full-duplex serial communication
// #define SERIAL_USART_TX_PIN GP0   // Define the TX pin (e.g., GP0)
// #define SERIAL_USART_RX_PIN GP1   // Define the RX pin (e.g., GP1)

#define SPLIT_POINTING_ENABLE
#define POINTING_DEVICE_GESTURES_SCROLL_ENABLE
#define ROTATIONAL_TRANSFORM_ANGLE -25
#define POINTING_DEVICE_INVERT_X
#define POINTING_DEVICE_RIGHT
#define PMW33XX_CS_PIN GP21
#define SPI_DRIVER                           SPID0
#define SPI_SCK_PIN                          GP18
#define SPI_MOSI_PIN                         GP19
#define SPI_MISO_PIN                         GP20
#define POINTING_DEVICE_TASK_THROTTLE_MS 5
#define PMW33XX_LIFTOFF_DISTANCE 0x02

// Pin definitions for the left half
#define MATRIX_ROW_PINS { GP3, GP4, GP5, GP6, GP7, GP8, GP9 }
#define MATRIX_COL_PINS { GP10, GP11, GP12, GP13, GP14, GP15, GP16 }

// Pin definitions for the right half
#define MATRIX_ROW_PINS_RIGHT { GP3, GP4, GP5, GP6, GP7, GP8, NO_PIN }
#define MATRIX_COL_PINS_RIGHT { GP10, GP11, GP12, GP13, GP14, GP15, GP16 }

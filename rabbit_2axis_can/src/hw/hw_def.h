#ifndef SRC_HW_HW_DEF_H_
#define SRC_HW_HW_DEF_H_


#include "bsp.h"


#define _DEF_FIRMWATRE_VERSION    "V230515R1"
#define _DEF_BOARD_NAME           "RP2040_RABBIT_FIRM"




#define _USE_HW_FLASH
#define _USE_HW_RESET
#define _USE_HW_BUZZER
//#define _USE_HW_RC100
//#define _USE_HW_TEA5767


#define _USE_HW_LED
#define      HW_LED_MAX_CH          1

#define _USE_HW_UART
#define      HW_UART_MAX_CH         1


#define _USE_HW_CLI
#define      HW_CLI_CMD_LIST_MAX    32
#define      HW_CLI_CMD_NAME_MAX    16
#define      HW_CLI_LINE_HIS_MAX    4
#define      HW_CLI_LINE_BUF_MAX    64

#define _USE_HW_LOG
#define      HW_LOG_CH              _DEF_UART1
#define      HW_LOG_BOOT_BUF_MAX    1024
#define      HW_LOG_LIST_BUF_MAX    1024

//#define _USE_HW_BUTTON
#define      HW_BUTTON_MAX_CH       4
#define      HW_BUTTON_OBJ_USE      1

//#define _USE_HW_WS2812
#define      HW_WS2812_MAX_CH       1

#define _USE_HW_GPIO
#define      HW_GPIO_MAX_CH         5

#define _USE_HW_SPI
#define      HW_SPI_MAX_CH          1

#define _USE_HW_I2C
#define      HW_I2C_MAX_CH          1

//#define _USE_HW_LCD
#define      HW_LCD_LVGL            1
#define      HW_LCD_LOGO            1
#define _USE_HW_ST7735
#define      HW_ST7735_MODEL        0
#define      HW_LCD_WIDTH           160
#define      HW_LCD_HEIGHT          80

//#define _USE_HW_PWM
#define      HW_PWM_MAX_CH          1

//#define _USE_HW_DXL
#define      HW_DXL_PACKET_BUF_MAX  512
#define      HW_DXL_DEVICE_CNT_MAX  16

#define _USE_HW_FS
#define      HW_FS_MAX_SIZE         (1*1024*1024)
#define      HW_FS_FLASH_OFFSET     0x10100000

//#define _PIN_GPIO_LCD_BLK           2
//#define _PIN_GPIO_LCD_DC            1
//#define _PIN_GPIO_LCD_CS            0
//#define _PIN_GPIO_LCD_RST           3
//#define _PIN_GPIO_RADIO_SPK         4

#endif /* SRC_HW_HW_DEF_H_ */
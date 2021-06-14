
#ifndef PINOUT_H_
#define PINOUT_H_

// UART config
#define PINOUT_UART_TX 4
#define PINOUT_UART_RX 5
#define PINOUT_UART_CTS 10
#define PINOUT_UART_RTS 11
#define PINOUT_UART_INTERFACE uart1
#define PINOUT_UART_BAUDRATE 115200

// JTAG config
#define PINOUT_JTAG_TCK    2 // == SWCLK
#define PINOUT_JTAG_TMS    3 // == SWDIO
#define PINOUT_JTAG_TDI    6
#define PINOUT_JTAG_TDO    7
#define PINOUT_JTAG_nTRST  8
#define PINOUT_JTAG_nRESET 9

// SPI config
#define PINOUT_SPI_DEV spi1
#define PINOUT_SPI_SCLK 14
#define PINOUT_SPI_MOSI 15
#define PINOUT_SPI_MISO 12
#define PINOUT_SPI_nCS  13

// I2C config
#define PINOUT_I2C_DEV i2c0
#define PINOUT_I2C_SCL 21
#define PINOUT_I2C_SDA 20

// LED config

// you can change these two as you like
#define PINOUT_LED_CONNECTED 1
#define PINOUT_LED_RUNNING   0

#ifndef PINOUT_LED
#ifndef PICO_DEFAULT_LED_PIN
#error "PICO_DEFAULT_LED_PIN is not defined, run PICOPROBE_LED=<led_pin> cmake"
#elif PICO_DEFAULT_LED_PIN == -1
#error "PICO_DEFAULT_LED_PIN is defined as -1, run PICOPROBE_LED=<led_pin> cmake"
#else
#define PINOUT_LED PICO_DEFAULT_LED_PIN
#endif
#endif /* PICOPROBE_LED */

#endif

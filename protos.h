
#ifndef PROTOS_H_
#define PROTOS_H_

#include <stdbool.h>

#include "protocfg.h"

#ifdef DBOARD_HAS_UART
void cdc_uart_init(void);
void cdc_uart_task(void);

void cdc_uart_set_hwflow(bool enable);
#endif

#ifdef DBOARD_HAS_SERPROG
void cdc_serprog_init(void);
void cdc_serprog_task(void);
#endif

#ifdef USE_USBCDC_FOR_STDIO
//#ifndef PICO_BOARD
bool stdio_usb_init(void);
//#endif
#endif

#endif


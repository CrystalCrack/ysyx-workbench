#ifndef _SOC_H_
#define _SOC_H_

#include "../riscv.h"

#define UART_BASE 0x10000000L
#define UART_TX   (UART_BASE + 0)
#define UART_RX   (UART_BASE + 0)
#define UART_IER  (UART_BASE + 1)
#define UART_IIR  (UART_BASE + 2)
#define UART_FCR  (UART_BASE + 2)
#define UART_LCR  (UART_BASE + 3)
#define UART_MCR  (UART_BASE + 4)
#define UART_LSR  (UART_BASE + 5)
#define UART_MSR  (UART_BASE + 6)


#endif
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

#define SPI_BASE 0x10001000L
#define SPI_RX0 (SPI_BASE + 0x00)
#define SPI_RX1 (SPI_BASE + 0x04)
#define SPI_RX2 (SPI_BASE + 0x08)
#define SPI_RX3 (SPI_BASE + 0x0c)
#define SPI_TX0 (SPI_BASE + 0x00)
#define SPI_TX1 (SPI_BASE + 0x04)
#define SPI_TX2 (SPI_BASE + 0x08)
#define SPI_TX3 (SPI_BASE + 0x0c)
#define SPI_CTRL (SPI_BASE + 0x10)
#define SPI_DIVIDER (SPI_BASE + 0x14)
#define SPI_SS (SPI_BASE + 0x18)

#define CLINT_BASE  0x02000000L
#define RTC_ADDR        (CLINT_BASE + 0x0000048)


#endif
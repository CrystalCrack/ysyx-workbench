#include <am.h>
#include <klib-macros.h>
#include <klib.h>
#include "soc.h"

#define soc_trap(code) asm volatile("mv a0, %0; ebreak" : :"r"(code))

extern char _heap_start, _heap_end;
int main(const char *args);

Area heap = RANGE(&_heap_start, &_heap_end);
static const char mainargs[MAINARGS_MAX_LEN] = MAINARGS_PLACEHOLDER; 

void uart_init(){
  outb(UART_FCR, 0xC7); // 14 bits trigger, enable FIFO, clear RX FIFO, clear TX FIFO
  outb(UART_LCR, 0x83); // 8 bits, no parity, 1 stop bit, enable DLAB
  // Set divisor to 115200 baud rate
  // The value set should be equal to (system clock speed) / (16 x desired baud rate)
  // assuming 50MHz clock
  outb(UART_IER, 0x00); // DLH
  outb(UART_TX, 0x1b); // DLL
  outb(UART_LCR, 0x03); // Disable DLAB
}

void putch(char ch) {
  // Polling for the transmitter holding register to be empty
  while ((inb(UART_LSR) & 0x20) == 0);
  outb(UART_TX, ch);
}

void halt(int code) {
  soc_trap(code);
  while (1);
}

void _trm_init() {
  uart_init();
  int ret = main(mainargs);
  halt(ret);
}

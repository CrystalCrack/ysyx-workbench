#ifndef COMMON_H
#define COMMON_H
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vnpc.h"
#include "Vnpc___024root.h"
#include "Vnpc__Dpi.h"

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

#define Assert(cond, ...) \
  do { \
    if (!(cond)) { \
      fprintf(stderr, __VA_ARGS__); \
      assert(0); \
    } \
  } while (0)
#endif

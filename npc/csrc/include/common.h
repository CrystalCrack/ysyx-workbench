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

#define ANSI_BOLD          "\x1b[1m"
#define ANSI_DIM           "\x1b[2m"
#define ANSI_ITALLIC       "\x1b[3m"
#define ANSI_UNDERLINE     "\x1b[4m"
#define ANSI_DASHED        "\x1b[9m"
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

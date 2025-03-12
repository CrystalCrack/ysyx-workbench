/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>

word_t isa_raise_intr(word_t NO, vaddr_t epc) {
<<<<<<< HEAD
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   */

  return 0;
=======
  IFDEF(CONFIG_ETRACE, printf(ANSI_FG_YELLOW "Exception trace:" ANSI_NONE " epc = " FMT_WORD " cause = " FMT_WORD "\n", epc, NO));
  cpu.csrs.mcause = NO;
  cpu.csrs.mepc = epc;

  /* mstatus set */
  // save mie to mpie
  cpu.csrs.mstatus &= ~(1 << 7); // clear mpie
  cpu.csrs.mstatus |= (cpu.csrs.mstatus << 4) & (1 << 7); // mie -> mpie
  // clear mie
  cpu.csrs.mstatus &= ~(1 << 3); // clear mie

  return cpu.csrs.mtvec;
>>>>>>> 2ef2916 (restore git repo)
}

word_t isa_query_intr() {
  return INTR_EMPTY;
}

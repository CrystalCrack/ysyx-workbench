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
#include <cpu/difftest.h>
#include "../local-include/reg.h"

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  for(int i = 0; i < 32; i++) {
    if(ref_r->gpr[i] != cpu.gpr[i]) {
      printf("reg[%d] is different after executing instruction at pc = " FMT_WORD ", right = " FMT_WORD ", wrong = " FMT_WORD "\n", i, pc, ref_r->gpr[i], cpu.gpr[i]);
      return false;
    }
  }
  if(ref_r->pc != cpu.pc) {
    printf("pc is different after executing instruction at pc = " FMT_WORD ", right = " FMT_WORD ", wrong = " FMT_WORD "\n", pc, ref_r->pc, cpu.pc);
    return false;
  }
  return true;
}

void isa_difftest_attach() {
}

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

#include <common.h>

void init_monitor(int, char *[]);
void am_init_monitor();
void engine_start();
int is_exit_status_bad();

word_t expr(char *e, bool *success);

int main(int argc, char *argv[]) {
//   /* Initialize the monitor. */
// #ifdef CONFIG_TARGET_AM
//   am_init_monitor();
// #else
//   init_monitor(argc, argv);
// #endif

//   /* Start engine. */
//   engine_start();

//   return is_exit_status_bad();
  FILE *fp = fopen("/home/crystc/ysyx-workbench/nemu/tools/gen-expr/input", "r");
  assert(fp != NULL);
  uint32_t result;
  uint32_t expr_result;
  char e[65535];
  bool success;
  int ret;
  for(int i=0;i<10000;i++){
    ret = fscanf(fp,"%u %s",&result, e);
    if(ret!=0) continue;
    expr_result = expr(e, &success);
    if(!success){
      return -1;
    }
    Assert(result==expr_result,"assertion failed:%u!=%u\n",result,expr_result);
  }
}

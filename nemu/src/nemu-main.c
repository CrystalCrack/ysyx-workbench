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
void free_sdb();
#ifdef CONFIG_ITRACE
void free_trace();
#endif

__attribute__((unused)) static void test_expr(){
  word_t expr(char *e, bool *success);

  FILE *fp = fopen("/home/crystc/ysyx-workbench/nemu/tools/gen-expr/input", "r");
  assert(fp != NULL);
  uint32_t result;
  uint32_t expr_result;
  char line[65535+32];
  char e[65535];
  bool success = true;
  int ret;
  while (fgets(line, sizeof(line), fp)) {
    memset(e,'\0',sizeof(e));
    if (sscanf(line, "%u %[^\n]", &result, e) == 2) {
      printf("%s\n",e);
      expr_result = expr(e, &success);
      if(!success){
        exit(-1);
      }
      printf("expr_result=%u\tresult=%u\n",expr_result,result);
      Assert(result==expr_result,"assertion failed:%u!=%u\n",expr_result,result);
    }
  }
  for(int i=0;i<10000;i++){
    ret = fscanf(fp,"%u %s",&result, e);
    if(ret!=0) continue;
  }
  fclose(fp);
}

int main(int argc, char *argv[]) {
  /* Initialize the monitor. */
#ifdef CONFIG_TARGET_AM
  am_init_monitor();
#else
  init_monitor(argc, argv);
#endif

  /* Start engine. */
  engine_start();

  free_sdb();

  IFDEF(CONFIG_FTRACE, free_trace());

  return is_exit_status_bad();
}

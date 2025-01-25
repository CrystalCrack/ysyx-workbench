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

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>
int choose(int n){
  if(n<0){
    return -1;
  }
  return rand()%n;
}
// this should be enough
static char expr[65536] = {};
static char buf[65536] = {};
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"#include <stdint.h>\n"
"int main() { "
"  uint32_t result = %s; "
"  printf(\"%%u\", result); "
"  return 0; "
"}";
static int position = 0;
static int position2 = 0;

static void gen_num(){
  uint32_t num = rand()%2000;
  char buffer[11];
  snprintf(buffer,sizeof(buffer),"%u",num);
  int len = strlen(buffer);

  for(int i=0;i<len;i++){
    expr[position++] = buffer[i];
    buf[position2++] = buffer[i];
  }
  buf[position2++] = 'u';
}

static void gen_c(char c){
  expr[position++] = c;
  buf[position2++] = c;
}

static void gen_op(){
  switch(choose(4)){
    case 0: buf[position2++] = '+'; expr[position++] = '+'; break;
    case 1: buf[position2++] = '-'; expr[position++] = '-'; break;
    case 2: buf[position2++] = '*'; expr[position++] = '*'; break;
    default: buf[position2++] = '/'; expr[position++] = '/'; break;
  }
}
static void gen_rand_expr(int depth) {
  if(depth > 6){
    gen_num();
    return;
  }
  switch(choose(3)){
    case 0: gen_num();break;
    case 1: gen_c('(');gen_rand_expr(depth+1);gen_c(')');break;
    default: gen_rand_expr(depth+1);gen_op();gen_rand_expr(depth+1);break;
  }
}

int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }
  int i;
  for (i = 0; i < loop; i ++) {
    position = 0;
    position2 = 0;
    gen_rand_expr(0);
    expr[position++] = '\0';
    buf[position2++] = '\0';

    sprintf(code_buf, code_format, buf);

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc /tmp/.code.c -o /tmp/.expr");
    if (ret != 0) continue;

    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    uint32_t result;
    ret = fscanf(fp, "%u", &result);
    pclose(fp);

    printf("%u %s\n", result, expr);

  }
  return 0;
}

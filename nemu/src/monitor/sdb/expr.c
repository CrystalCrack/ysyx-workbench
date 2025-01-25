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

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>
#define EXPR_DEBUG 1
enum {
  TK_NOTYPE = 256, TK_EQ,

  /* TODO: Add more token types */
  TK_DEC,
};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */
  {"==", TK_EQ},        // equal
  {" +", TK_NOTYPE},    // spaces
  {"\\+", '+'},         // plus
  {"-", '-'},           // minus
  {"\\*", '*'},         // multiply
  {"\\/", '/'},         // divide
  {"[0-9]+", TK_DEC},   // decimal numbers
  {"\\(", '('},         // left paran
  {"\\)", ')'},         // right paran
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[32] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        if(nr_token>=32){
          Log("Too many tokens~\n");
          return false;
        }

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */

        switch (rules[i].token_type) {
          case '+':
            tokens[nr_token].type = '+';
            memset(tokens[nr_token].str,'\0',sizeof(tokens[nr_token].str));
            nr_token++;
            break;
          case '-':
            tokens[nr_token].type = '-';
            memset(tokens[nr_token].str,'\0',sizeof(tokens[nr_token].str));
            nr_token++;
            break;
          case '*':
            tokens[nr_token].type = '*';
            memset(tokens[nr_token].str,'\0',sizeof(tokens[nr_token].str));
            nr_token++;
            break;
          case '/':
            tokens[nr_token].type = '/';
            memset(tokens[nr_token].str,'\0',sizeof(tokens[nr_token].str));
            nr_token++;
            break;
          case TK_DEC:
            tokens[nr_token].type = TK_DEC;
            if(substr_len >= 32){
              Log("Token too long: %.*s. Cut to %.*s\n", substr_len, substr_start, 31, substr_start);
              //cut
              substr_len = 31;
            }
            strncpy(tokens[nr_token].str, substr_start, substr_len);
            tokens[nr_token].str[substr_len] = '\0';
            nr_token++;
            break;
          case '(':
            tokens[nr_token].type = '(';
            memset(tokens[nr_token].str,'\0',sizeof(tokens[nr_token].str));
            nr_token++;
            break;
          case ')':
            tokens[nr_token].type = ')';
            memset(tokens[nr_token].str,'\0',sizeof(tokens[nr_token].str));
            nr_token++;
            break;
          case TK_NOTYPE:
          default: 
        }

        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}
enum {PAREN_INVALID, PAREN_MATCH, PAREN_DISMATCH};
int check_parenthesis(Token *p, Token *q){
  int i = 0;
  int dismatch_flag = 0;
  for(int j=0;p+j<q;j++){
    if((p+j)->type == '('){
      i=i+1;
    }
    if((p+j)->type == ')'){
      i=i-1;
    }
    if(i==0&&p+j!=q-1){
      dismatch_flag = 1;
    }
  }
  if(i!=0){
    return PAREN_INVALID;
  }else if(p->type!='('||(q-1)->type!=')'||dismatch_flag){
    return PAREN_DISMATCH;
  }else{
    return PAREN_MATCH;
  }
}
Token* FindMainOP(Token* p, Token* q){
  int i;
  int mainoptype = 0;
  int mainoppos = -1;
  for(i=0;p+i<q;i++){
    if((p+i)->type=='*'||(p+i)->type=='/'){
      if(mainoptype==0|| mainoptype=='*'|| mainoptype=='/'){
        mainoptype = (p+i)->type;
        mainoppos = i;
      }
    }else if((p+i)->type=='+'||(p+i)->type=='-'){
      if(mainoptype==0 || mainoptype=='*' || mainoptype=='/' || mainoptype=='+' || mainoptype=='-'){
        mainoptype = (p+i)->type;
        mainoppos = i;
      }
    }else if((p+i)->type=='('){
      int layer = 1;
      while(layer>0){
        i++;
        switch((p+i)->type){
          case '(':
            layer++;
            break;
          case ')':
            layer--;
            break;
        }
      }
    }
  }
  return p+mainoppos;
}

static void print_expr(Token* p, Token* q){
  printf("Evaluating:");
  for(int i=0;p+i<q;i++){
    switch((p+i)->type){
      case '+': case '-': case '*': case '/': case '(': case ')':
      printf("%c",(p+i)->type);
      break;
      case TK_DEC:
      printf("%s",(p+i)->str);
      break;
      default:
        assert(0);
    }
  }
  printf("\n");
}
enum {PAREN_ERR=1, BADEXPR_ERR, MAINOP_ERR, UNDEF_OP};
uint32_t eval(Token* p, Token* q, int *errflag){
  IFDEF(EXPR_DEBUG, print_expr(p,q));
  if(p+1>q){
    //bad expression
    *errflag = BADEXPR_ERR;
    return 0;
  }
  else if(p+1==q){
    //refer to a number in this case
    //return the number directly
    int num = strtoul(p->str, NULL, 10);
    IFDEF(EXPR_DEBUG, printf("this is a number:%u\n", num));
    return num;
  }else {
    int ret = check_parenthesis(p,q);
    switch(ret){
      case PAREN_INVALID:
        *errflag = PAREN_ERR;
        return 0;
      case PAREN_MATCH:
        return eval(p+1, q-1, errflag);
    }
    Token* pos = FindMainOP(p,q);
    if(pos < p){
      *errflag = MAINOP_ERR;
      return 0;
    }
    IFDEF(EXPR_DEBUG, printf("main operator %c found at %d\n", pos->type, (int)(pos-p)));
    uint32_t val1 = eval(p, pos, errflag);
    if(*errflag!=0) return 0;
    uint32_t val2 = eval(pos+1, q, errflag);
    if(*errflag!=0) return 0;
    int ret_val;
    switch(pos->type){
      case '+':
        ret_val = val1+val2;
        break;
      case '-':
        ret_val = val1-val2;
        break;
      case '*':
        ret_val = val1*val2;
        break;
      case '/':
        ret_val = val1/val2;
        break;
      default:
        *errflag = UNDEF_OP;
        return 0;
    }
    IFDEF(EXPR_DEBUG, printf("executing operation: %u %c %u = %u\n", val1, pos->type, val2, ret_val));
    return ret_val;
  }
}


word_t expr(char *e, bool *success) {
  init_regex();
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  /* TODO: Insert codes to evaluate the expression. */
  Token* p = tokens;
  Token* q = p+nr_token;
  int token_err = 0;
  uint32_t result = eval(p,q,&token_err);
  if(token_err!=0){
    *success = false;
    switch(token_err){
      case PAREN_ERR:
        printf("parenthesis invalid\n");
        break;
      case UNDEF_OP:
        printf("undefined operation\n");
        break;
      case BADEXPR_ERR:
        printf("syntax error\n");
        break;
      case MAINOP_ERR:
        printf("cannot find main operator\n");
        break;
    }
    return 0;
  }
  *success = true;
  return result;
}

#ifndef __STACK_H__
#define __STACK_H__

#include <lcthw/list.h>

#define Stack List

#define Stack_create() List_create()
#define Stack_destroy(A) List_destroy(A)
#define Stack_push(A, B) List_push(A, B)
#define Stack_pop(A) List_pop(A)
#define Stack_count(A) List_count(A)
#define Stack_peek(A) List_last(A)

#define STACK_FOREACH(L, V) LIST_FOREACH(L, first, next, V)

#endif
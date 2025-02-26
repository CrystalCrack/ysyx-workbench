#ifndef __ QUEUE_H__
#define __ QUEUE_H__

#include <lcthw/list.h>

#define Queue List

#define Queue_create() List_create()
#define Queue_destroy(A) List_destroy(A)
#define Queue_send(A, B) List_push(A, B)
#define Queue_peek(A) List_first(A)
#define Queue_recv(A) List_shift(A)
#define Queue_count(A) List_count(A)

#define QUEUE_FOREACH(L, V) LIST_FOREACH(L, first, next, V)

#endif
#ifndef __LIST_ALGOS_H__
#define __LIST_ALGOS_H__

#include <lcthw/list.h>
typedef int (*List_compare)(void *node1, void *node2);
int List_bubble_sort(List *list, List_compare cmp);
List* List_merge_sort(List *list, List_compare cmp);


#endif
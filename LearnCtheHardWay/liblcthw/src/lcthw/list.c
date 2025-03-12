#include <lcthw/list.h>
#include <lcthw/dbg.h>

static void List_verify(List *list) {
    if (list->count < 0) {
        log_err("Invalid list count: %d", list->count);
        exit(EXIT_FAILURE);
    }
    if (list->count > 0) {
        assert(list->first != NULL && "Non-empty list has NULL first");
        assert(list->last != NULL && "Non-empty list has NULL last");
    }
}

List *List_create()
{
    return calloc(1, sizeof(List));
}

void List_destroy(List *list)
{
    check(list!=NULL, "The list about to be destroyed is NULL");
    LIST_FOREACH(list, first, next, cur) {
        if(cur->prev) {
            free(cur->prev);
        }
    }

    free(list->last);
    free(list);

error:
    return;
}


void List_clear(List *list)
{
    check(list!=NULL, "The list about to be cleared is NULL");
    LIST_FOREACH(list, first, next, cur) {
        free(cur->value);
    }
error:
    return;
}


void List_clear_destroy(List *list)
{
    List_clear(list);
    List_destroy(list);
}


void List_push(List *list, void *value)
{
    check(list!=NULL, "list cannot be NULL");
    check(value!=NULL, "value cannot be NULL");
    ListNode *node = calloc(1, sizeof(ListNode));
    check_mem(node);
    node->value = value;

    if(list->last == NULL) {
        list->first = node;
        list->last = node;
    } else {
        list->last->next = node;
        node->prev = list->last;
        list->last = node;
    }

    list->count++;

error:
    return;
}

void *List_pop(List *list)
{
    ListNode *node = list->last;
    return node != NULL ? List_remove(list, node) : NULL;
}

void List_unshift(List *list, void *value)
{
    ListNode *node = calloc(1, sizeof(ListNode));
    check_mem(node);

    node->value = value;

    if(list->first == NULL) {
        list->first = node;
        list->last = node;
    } else {
        node->next = list->first;
        list->first->prev = node;
        list->first = node;
    }

    list->count++;

error:
    return;
}

void *List_shift(List *list)
{
    ListNode *node = list->first;
    return node != NULL ? List_remove(list, node) : NULL;
}

void *List_remove(List *list, ListNode *node)
{
    void *result = NULL;

    check(list->first && list->last, "List is empty.");
    check(node, "node can't be NULL");

    if(node == list->first && node == list->last) {
        list->first = NULL;
        list->last = NULL;
    } else if(node == list->first) {
        list->first = node->next;
        check(list->first != NULL, "Invalid list, somehow got a first that is NULL.");
        list->first->prev = NULL;
    } else if (node == list->last) {
        list->last = node->prev;
        check(list->last != NULL, "Invalid list, somehow got a next that is NULL.");
        list->last->next = NULL;
    } else {
        ListNode *after = node->next;
        ListNode *before = node->prev;
        after->prev = before;
        before->next = after;
    }

    list->count--;
    result = node->value;
    free(node);

error:
    return result;
}

void* ListNode_swap(ListNode *node1, ListNode *node2)
{
    void *temp = node1->value;
    node1->value = node2->value;
    node2->value = temp;
    return temp;
}

List* List_copy(List* list){
    List *new_list = List_create();
    check_mem(new_list);
    LIST_FOREACH(list, first, next, curr){
        List_push(new_list, curr->value);
    }
    return new_list;
error:
    return NULL;
}

void List_concat(List *dest, List *src) {
    check(dest != NULL && src != NULL, "Lists cannot be NULL");
    if (src->count == 0) return;
    
    if (dest->count == 0) {
        dest->first = src->first;
    } else {
        dest->last->next = src->first;
        src->first->prev = dest->last;
    }
    dest->last = src->last;
    dest->count += src->count;
    
    // empty the source list
    src->first = src->last = NULL;
    src->count = 0;
error:
    return;
}

void List_split(List *list, List *left, List *right){
    check(list!=NULL, "List cannot be NULL");
    int target = list->count/2;
    LIST_FOREACH(list, first, next, curr){
        if(target>0){
            List_push(left, curr->value);
        }else{
            List_push(right, curr->value);
        }
        target--;
    }

error:
    return;
}
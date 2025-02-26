#include<lcthw/list.h>
#include<lcthw/list_algos.h>

int List_bubble_sort(List* list, List_compare cmp){
    int compare;
    LIST_FOREACH(list,first,next,curr){
        LIST_FOREACH(curr,next,next,curr2){
            if(cmp(curr->value,curr2->value)>0){
                ListNode_swap(curr,curr2);
            }
        }
    }
    return 0;
}

static List* List_merge(List* left, List* right, List_compare cmp){
    void *val = NULL;
    List *res = List_create();
    while(left->count>0||right->count>0){
        if(left->count>0&&right->count>0){
            if(cmp(left->first->value,right->first->value)<0){
                val = List_shift(left);
            }else{
                val = List_shift(right);
            }
            List_push(res, val);
        }else if(left->count>0){
            val = List_shift(left);
            List_push(res, val);
        }else if(right->count>0){
            val = List_shift(right);
            List_push(res, val);
        }
    }

    // List_destroy(left);
    // List_destroy(right);

    return res;
}

List* List_merge_sort(List *list, List_compare cmp){
    if(list->count<=1){
        return list;
    }else{
        ListNode* mid = list->first;
        int target = list->count/2;
        //find mid node
        List *left_part = List_create();
        List *right_part = List_create();
        void *val;
        LIST_FOREACH(list,first,next,curr){
            if(target>0){
                List_push(left_part,curr->value);
            }else{
                val = List_shift(list);
                List_push(right_part, curr->value);
            }
            target--;
        }

        List *left = List_merge_sort(left_part, cmp);
        List *right = List_merge_sort(right_part, cmp);

        if(left != left_part) List_destroy(left_part);
        if(right != right_part) List_destroy(right_part);

        return List_merge(left, right, cmp);
    }
}

void List_insert_sorted(List *list, void *value, List_compare cmp) {
    ListNode *node = malloc(sizeof(ListNode));
    node->value = value;

    if (list->first == NULL) {
        list->first = list->last = node;
        node->prev = node->next = NULL;
        list->count++;
        return;
    }

    ListNode *cur = list->first;
    while (cur && cmp(cur->value, value) <= 0) {
        cur = cur->next;
    }

    if (!cur) { 
        node->prev = list->last;
        list->last->next = node;
        list->last = node;
    } else if (cur == list->first) { 
        node->next = list->first;
        list->first->prev = node;
        list->first = node;
    } else { 
        node->prev = cur->prev;
        node->next = cur;
        cur->prev->next = node;
        cur->prev = node;
    }
    list->count++;
}

List *List_merge_sort_bottom_up(List *list, List_compare cmp) {
    if (List_count(list) <= 1) return list;

    List *work[2];
    work[0] = List_create();
    work[1] = List_create();
    List *result = List_copy(list);

    int width, i;
    for (width = 1; width < List_count(list); width *= 2) {
        List *target = work[0];
        while (result->count != 0) {
            List *left, *right;
            List_split(result, left, right);
            List *merged = List_merge(left, right, cmp);
            List_concat(target, merged);
            List_destroy(left);
            List_destroy(right);
            List_destroy(merged);
        }
        List *temp = result;
        result = target;
        target = temp;
        List_clear(target);
    }

    List_destroy(work[0]);
    List_destroy(work[1]);
    return result;
}
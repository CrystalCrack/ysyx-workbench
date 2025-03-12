#include "minunit.h"
#include <lcthw/list.h>
#include <assert.h>

static List *list = NULL;
char *test1 = "test1 data";
char *test2 = "test2 data";
char *test3 = "test3 data";
char *concat1 = "concat1";
char *concat2 = "concat2";


char *test_create()
{
    list = List_create();
    mu_assert(list != NULL, "Failed to create list.");

    return NULL;
}


char *test_destroy()
{
    List_destroy(list);

    return NULL;

}


char *test_push_pop()
{
    List_push(list, test1);
    mu_assert(List_last(list) == test1, "Wrong last value.");

    List_push(list, test2);
    mu_assert(List_last(list) == test2, "Wrong last value");

    List_push(list, test3);
    mu_assert(List_last(list) == test3, "Wrong last value.");
    mu_assert(List_count(list) == 3, "Wrong count on push.");

    char *val = List_pop(list);
    mu_assert(val == test3, "Wrong value on pop.");

    val = List_pop(list);
    mu_assert(val == test2, "Wrong value on pop.");

    val = List_pop(list);
    mu_assert(val == test1, "Wrong value on pop.");
    mu_assert(List_count(list) == 0, "Wrong count after pop.");

    return NULL;
}

char *test_unshift()
{
    List_unshift(list, test1);
    mu_assert(List_first(list) == test1, "Wrong first value.");

    List_unshift(list, test2);
    mu_assert(List_first(list) == test2, "Wrong first value");

    List_unshift(list, test3);
    mu_assert(List_first(list) == test3, "Wrong last value.");
    mu_assert(List_count(list) == 3, "Wrong count on unshift.");

    return NULL;
}

char *test_remove()
{
    // we only need to test the middle remove case since push/shift
    // already tests the other cases

    char *val = List_remove(list, list->first->next);
    mu_assert(val == test2, "Wrong removed element.");
    mu_assert(List_count(list) == 2, "Wrong count after remove.");
    mu_assert(List_first(list) == test3, "Wrong first after remove.");
    mu_assert(List_last(list) == test1, "Wrong last after remove.");

    return NULL;
}


char *test_shift()
{
    mu_assert(List_count(list) != 0, "Wrong count before shift.");

    char *val = List_shift(list);
    mu_assert(val == test3, "Wrong value on shift.");

    val = List_shift(list);
    mu_assert(val == test1, "Wrong value on shift.");
    mu_assert(List_count(list) == 0, "Wrong count after shift.");

    return NULL;
}

char *test_copy() {
    List *copy = List_copy(list);
    mu_assert(List_count(copy) == 3, "Copy count wrong");
    mu_assert(List_first(copy) == test3, "First value mismatch");
    mu_assert(List_last(copy) == test1, "Last value mismatch");
    List_destroy(copy);
    return NULL;
}

char *test_concat() {
    List *other = List_create();
    List_push(other, concat1);
    List_push(other, concat2);
    
    List_concat(list, other);
    mu_assert(List_count(list) == 5, "Concat count wrong");
    mu_assert(List_last(list) == "concat2", "Last value wrong");
    mu_assert(other->count == 0, "Source not cleared");
    
    List_destroy(other);
    return NULL;
}

char *test_split() {
    List *left = List_create();
    List *right = List_create();
    List_split(list, left, right);
    
    mu_assert(List_count(left) == 2, "Left list count wrong");
    mu_assert(List_count(right) == 3, "Right list count wrong");
    mu_assert(List_last(left) == test2, "Left last value wrong");
    mu_assert(List_first(right) == test1, "Right first value wrong");
    
    List_destroy(left);
    List_destroy(right);
    return NULL;
}



char *all_tests() {
    mu_suite_start();

    mu_run_test(test_create);
    mu_run_test(test_push_pop);
    mu_run_test(test_unshift);
    mu_run_test(test_remove);
    mu_run_test(test_shift);
    mu_run_test(test_unshift);
    mu_run_test(test_copy);
    mu_run_test(test_concat);
    mu_run_test(test_split);
    mu_run_test(test_destroy);
    return NULL;
}

RUN_TESTS(all_tests);
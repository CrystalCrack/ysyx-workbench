#include "minunit.h"
#include <lcthw/list_algos.h>
#include <assert.h>
#include <string.h>
#include <sys/time.h>

char *values[] = {"XXXX", "1234", "abcd", "xjvef", "NDSS"};
#define NUM_VALUES 5
void* List_print(List* list){
    LIST_FOREACH(list,first,next,curr){
        printf("%s ",curr->value);
    }
    printf("\n");
}
List *create_words()
{
    int i = 0;
    List *words = List_create();

    for(i = 0; i < NUM_VALUES; i++) {
        List_push(words, values[i]);
    }

    return words;
}

int is_sorted(List *words)
{
    LIST_FOREACH(words, first, next, cur) {
        if(cur->next && strcmp(cur->value, cur->next->value) > 0) {
            debug("%s %s", (char *)cur->value, (char *)cur->next->value);
            return 0;
        }
    }

    return 1;
}

char *test_bubble_sort()
{
    List *words = create_words();

    // should work on a list that needs sorting
    int rc = List_bubble_sort(words, (List_compare)strcmp);
    mu_assert(rc == 0, "Bubble sort failed.");
    mu_assert(is_sorted(words), "Words are not sorted after bubble sort.");

    // should work on an already sorted list
    rc = List_bubble_sort(words, (List_compare)strcmp);
    mu_assert(rc == 0, "Bubble sort of already sorted failed.");
    mu_assert(is_sorted(words), "Words should be sort if already bubble sorted.");

    List_destroy(words);

    // should work on an empty list
    words = List_create(words);
    rc = List_bubble_sort(words, (List_compare)strcmp);
    mu_assert(rc == 0, "Bubble sort failed on empty list.");
    mu_assert(is_sorted(words), "Words should be sorted if empty.");

    List_destroy(words);

    return NULL;
}

char *test_merge_sort()
{
    List *words = create_words();

    // should work on a list that needs sorting
    List_print(words);
    List *res = List_merge_sort(words, (List_compare)strcmp);
    List_print(res);
    mu_assert(is_sorted(res), "Words are not sorted after merge sort.");

    List *res2 = List_merge_sort(res, (List_compare)strcmp);
    mu_assert(is_sorted(res), "Should still be sorted after merge sort.");
    List_destroy(res2);
    List_destroy(res);

    List_destroy(words);
    return NULL;
}

List *create_random_list(int count) {
    List *list = List_create();
    if (!list) return NULL;
    srand(time(NULL));
    for (int i = 0; i < count; i++) {
        int num = rand() % 100000;
        char *str = malloc(6);
        sprintf(str, "%05d", num);
        List_push(list, str);
    }
    return list;
}

char *test_performance() {
    const int sizes[] = {10, 100, 500, 1000, 5000};
    const int iterations = 10;

    for (int i = 0; i < sizeof(sizes)/sizeof(sizes[0]); i++) {
        int size = sizes[i];
        List *original = create_random_list(size);
        mu_assert(original != NULL, "Failed to create list.");

        struct timeval start, end;
        gettimeofday(&start, NULL);
        for (int j = 0; j < iterations; j++) {
            List *copy = List_copy(original);
            List_bubble_sort(copy, (List_compare)strcmp);
            List_destroy(copy); 
        }
        gettimeofday(&end, NULL);
        double bubble_time = (end.tv_sec - start.tv_sec) + (end.tv_usec - start.tv_usec) / 1e6;

        gettimeofday(&start, NULL);
        for (int j = 0; j < iterations; j++) {
            List *copy = List_copy(original);
            List *sorted = List_merge_sort(copy, (List_compare)strcmp);
            List_destroy(copy);
            List_destroy(sorted);
        }
        gettimeofday(&end, NULL);
        double merge_time = (end.tv_sec - start.tv_sec) + (end.tv_usec - start.tv_usec) / 1e6;

        printf("Size: %d\n", size);
        printf("Bubble Sort: %f sec\n", bubble_time);
        printf("Merge Sort: %f sec\n\n", merge_time);

        List_destroy(original);
    }
    return NULL;
}

char *all_tests()
{
    mu_suite_start();

    mu_run_test(test_bubble_sort);
    mu_run_test(test_merge_sort);
    mu_run_test(test_performance);

    return NULL;
}

RUN_TESTS(all_tests);
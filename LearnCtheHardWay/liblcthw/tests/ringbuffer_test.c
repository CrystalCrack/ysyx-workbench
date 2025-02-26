#include "minunit.h"
#include <lcthw/ringbuffer.h>

static RingBuffer *buffer = NULL;

char *test_create()
{
    buffer = RingBuffer_create(5);
    mu_assert(buffer != NULL, "Failed to create RingBuffer.");
    mu_assert(buffer->length == 6, "Incorrect length.");
    mu_assert(RingBuffer_empty(buffer), "New buffer should be empty.");
    return NULL;
}

char *test_read_write()
{
    char data[] = "test";
    int rc = RingBuffer_write(buffer, data, 4);
    mu_assert(rc == 4, "Failed to write data.");
    mu_assert(RingBuffer_available_data(buffer) == 4, "Available data should be 4.");
    mu_assert(!RingBuffer_empty(buffer), "Buffer should not be empty.");
    mu_assert(!RingBuffer_full(buffer), "Buffer should not be full.");

    char target[5] = {0};
    rc = RingBuffer_read(buffer, target, 4);
    mu_assert(rc == 4, "Failed to read data.");
    mu_assert(strncmp(target, "test", 4) == 0, "Data read is incorrect.");
    mu_assert(RingBuffer_empty(buffer), "Buffer should be empty after read.");

    rc = RingBuffer_write(buffer, "12345", 5); 
    mu_assert(rc == 5, "Failed to write wrapped data.");
    mu_assert(RingBuffer_full(buffer), "Buffer should be full.");

    rc = RingBuffer_read(buffer, target, 5);
    mu_assert(rc == 5, "Failed to read wrapped data.");
    mu_assert(strncmp(target, "12345", 5) == 0, "Wrapped data read is incorrect.");

    return NULL;
}

char *test_edge_cases()
{
    // end beyond start
    buffer->start = 3;
    buffer->end = 1;
    buffer->length = 5;
    mu_assert(RingBuffer_available_data(buffer) == 3, "Available data should be 3 when wrapped.");
    mu_assert(RingBuffer_available_space(buffer) == 1, "Available space should be 1 when wrapped.");

    return NULL;
}

char *test_destroy()
{
    RingBuffer_destroy(buffer);
    return NULL;
}

char *all_tests()
{
    mu_suite_start();

    mu_run_test(test_create);
    mu_run_test(test_read_write);
    mu_run_test(test_edge_cases);
    mu_run_test(test_destroy);

    return NULL;
}

RUN_TESTS(all_tests);

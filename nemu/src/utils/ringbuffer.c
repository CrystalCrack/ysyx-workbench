#include <common.h>
#include "ringbuffer.h"


RingBuffer *RingBuffer_create(int length)
{
    RingBuffer *buffer = calloc(1, sizeof(RingBuffer));
    buffer->length  = length + 1;
    buffer->start = 0;
    buffer->end = 0;
    buffer->buffer = calloc(buffer->length * 128, 1);

    return buffer;
}

void RingBuffer_destroy(RingBuffer *buffer)
{
    if(buffer) {
        free(buffer->buffer);
        free(buffer);
    }
}

int RingBuffer_write(RingBuffer *buffer, char *data, int length)
{
    //defensive Assert
    Assert(buffer != NULL, "Invalid RingBuffer pointer.");
    Assert(data != NULL, "Invalid data pointer.");
    Assert(length >= 0, "Negative write length is invalid.");

    if(RingBuffer_available_data(buffer) == 0) {
        buffer->start = buffer->end = 0;
    }

    Assert(length <= RingBuffer_available_space(buffer),
            "Not enough space: %d request, %d available",
            RingBuffer_available_data(buffer), length);

    void *result = memcpy(RingBuffer_ends_at(buffer), data, length);
    Assert(result != NULL, "Failed to write data into buffer.");

    RingBuffer_commit_write(buffer, length);

    return length;
}

int RingBuffer_read(RingBuffer *buffer, char *target, int amount)
{
    //Defensive Assert
    Assert(buffer != NULL, "Invalid RingBuffer pointer.");
    Assert(target != NULL, "Invalid target pointer.");
    Assert(amount >= 0, "Negative read amount is invalid.");

    Assert(amount <= RingBuffer_available_data(buffer),
            "Not enough in the buffer: has %d, needs %d",
            RingBuffer_available_data(buffer), amount);

    void *result = memcpy(target, RingBuffer_starts_at(buffer), amount);
    Assert(result != NULL, "Failed to write buffer into data.");

    RingBuffer_commit_read(buffer, amount);

    if(buffer->end == buffer->start) {
        buffer->start = buffer->end = 0;
    }

    return amount;
}

char* RingBuffer_gets(RingBuffer *buffer, int amount)
{
    Assert(amount > 0, "Need more than 0 for gets, you gave: %d ", amount);
    Assert(amount <= RingBuffer_available_data(buffer),
            "Not enough in the buffer.");

    char* result = strncpy(calloc(amount + 1, 1), RingBuffer_starts_at(buffer), amount);
    result[amount] = '\0';
    Assert(result != NULL, "Failed to create gets result.");
    Assert(strlen(result) == amount, "Wrong result length.");

    RingBuffer_commit_read(buffer, amount);
    assert(RingBuffer_available_data(buffer) >= 0 && "Error in read commit.");

    return result;
}
#define _BSD_SOURCE     
#define _DEFAULT_SOURCE 

#include <lcthw/posix_ringbuffer.h>
#include <lcthw/dbg.h>
#include <sys/mman.h>

// RingBuffer powered by POSIX
POSIXRingBuffer *POSIXRingBuffer_create(size_t capacity) {
    check(capacity > 0, "Capacity must be positive.");

    // map virtual memory: allocate double capacity of continuous address space
    size_t mapped_size = 2 * (capacity+1);
    char *buffer = mmap(
        NULL,                   // let kernel select address
        mapped_size,            
        PROT_READ | PROT_WRITE, 
        MAP_ANONYMOUS | MAP_PRIVATE, 
        -1,                     
        0                       
    );
    check(buffer != MAP_FAILED, "mmap failed.");

    POSIXRingBuffer *rb = calloc(1, sizeof(POSIXRingBuffer));
    check_mem(rb);

    rb->buffer = buffer;
    rb->capacity = capacity+1;
    rb->start = 0;
    rb->end = 0;

    return rb;

error:
    if (buffer != MAP_FAILED) munmap(buffer, mapped_size);
    return NULL;
}

// destroy buffer
void POSIXRingBuffer_destroy(POSIXRingBuffer *rb) {
    if (rb) {
        munmap(rb->buffer, 2 * rb->capacity); // release memory
        free(rb);
    }
}

// available data
size_t POSIXRingBuffer_available_data(const POSIXRingBuffer *rb) {
    return (rb->end >= rb->start) ? (rb->end - rb->start) : (rb->capacity - rb->start + rb->end);
}

// available space
size_t POSIXRingBuffer_available_space(const POSIXRingBuffer *rb) {
    return rb->capacity - POSIXRingBuffer_available_data(rb);
}

// write data
ssize_t POSIXRingBuffer_write(POSIXRingBuffer *rb, const char *data, size_t len) {
    check(rb != NULL, "Invalid RingBuffer pointer.");
    check(data != NULL, "Invalid data pointer.");

    size_t available = POSIXRingBuffer_available_space(rb);
    if (len > available) len = available; 
    if (len == 0) return 0;

    memcpy(rb->buffer + rb->end, data, len);
    rb->end = (rb->end + len) % rb->capacity;

    return len;

error:
    return -1;
}

// read data
ssize_t POSIXRingBuffer_read(POSIXRingBuffer *rb, char *target, size_t len) {
    check(rb != NULL, "Invalid RingBuffer pointer.");
    check(target != NULL, "Invalid target pointer.");

    size_t available = POSIXRingBuffer_available_data(rb);
    if (len > available) len = available; 
    if (len == 0) return 0;

    memcpy(target, rb->buffer + rb->start, len);
    rb->start = (rb->start + len) % rb->capacity;

    return len;

error:
    return -1;
}

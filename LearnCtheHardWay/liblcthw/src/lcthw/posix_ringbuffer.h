#ifndef _LCTHW_POSIX_RINGBUFFER_H
#define _LCTHW_POSIX_RINGBUFFER_H

#include <sys/mman.h>
#include <unistd.h>

typedef struct {
    char *buffer;       // 虚拟连续内存地址（实际映射为两倍长度）
    size_t capacity;    // 用户指定的缓冲区容量
    size_t start;       // 读指针
    size_t end;         // 写指针
} POSIXRingBuffer;

POSIXRingBuffer *POSIXRingBuffer_create(size_t capacity);
void POSIXRingBuffer_destroy(POSIXRingBuffer *rb);
ssize_t POSIXRingBuffer_write(POSIXRingBuffer *rb, const char *data, size_t len);
ssize_t POSIXRingBuffer_read(POSIXRingBuffer *rb, char *target, size_t len);
size_t POSIXRingBuffer_available_data(const POSIXRingBuffer *rb);
size_t POSIXRingBuffer_available_space(const POSIXRingBuffer *rb);

#endif

#include <am.h>
#include <klib.h>
#include <klib-macros.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
static unsigned long int next = 1;

extern Area heap;
static uintptr_t addr;
static bool malloc_initialized = false;

int rand(void) {
  // RAND_MAX assumed to be 32767
  next = next * 1103515245 + 12345;
  return (unsigned int)(next/65536) % 32768;
}

void srand(unsigned int seed) {
  next = seed;
}

int abs(int x) {
  return (x < 0 ? -x : x);
}

int atoi(const char* nptr) {
  int x = 0;
  while (*nptr == ' ') { nptr ++; }
  while (*nptr >= '0' && *nptr <= '9') {
    x = x * 10 + *nptr - '0';
    nptr ++;
  }
  return x;
}

void *malloc(size_t size) {
  if (!malloc_initialized) {
    addr = (uintptr_t)heap.start;
    malloc_initialized = true;
  }
  if(size == 0) return NULL;

  size_t aligned_size = ROUNDUP(size, 8);
  void* ptr = (void*)addr;
  if (ptr > heap.end) {
    return NULL;
  }
  addr = addr + aligned_size;
  return ptr;
}

void free(void *ptr) {
}

#endif

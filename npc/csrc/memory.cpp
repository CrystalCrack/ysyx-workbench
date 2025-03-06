
#include <memory.h>

char *img_file = NULL;

uint8_t pmem[MSIZE] = {
  // 0x00500093 (addi x1, x0, 5)
  0x93, 0x00, 0x50, 0x00,

  // 0xffd08113 (addi x2, x1, -3)
  0x13, 0x81, 0xd0, 0xff,

  // 0xff600193 (addi x3, x0, -10)
  0x93, 0x01, 0x60, 0xff,

  // 0x00f18213 (addi x4, x3, 15)
  0x13, 0x82, 0xf1, 0x00,

  // 0x00000293 (addi x5, x0, 0)
  0x93, 0x02, 0x00, 0x00,

  // 0x06428313 (addi x6, x5, 100)
  0x13, 0x83, 0x42, 0x06,

  // 0x7ff00393 (addi x7, x0, 2047)
  0x93, 0x03, 0xf0, 0x7f,

  // 0x80000413 (addi x8, x0, -2048)
  0x13, 0x04, 0x00, 0x80,

  // 0x00148493 (addi x9, x9, 1)
  0x93, 0x84, 0x14, 0x00,

  //ebreak
  0x73, 0x00, 0x10, 0x00
};

long load_img() {
  if (img_file == NULL) {
    std::cout<<"No image is given. Use the default build-in image."<<std::endl;
    return 40; // built-in image size
  }

  FILE *fp = fopen(img_file, "rb");
  Assert(fp, "Can not open '%s'\n", img_file);

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  printf("The image is %s, size = %ld\n", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(pmem, size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  return size;
}

bool memory_out_of_bound(uint32_t addr) {
  if (addr < MBASE || addr >= MBASE + MSIZE) {
    printf("Memory access out of bound: addr = 0x%08x\n", addr);
    return true;
  }
  return false;
}

extern "C" int pmem_read(int raddr) {
  #ifdef CONFIG_MTRACE
    printf("read memory from 0x" FMT_WORD "\n", raddr);
  #endif

  uint32_t addr = raddr & ~0x3u;
  Assert(!memory_out_of_bound(addr), "read address out of bound\n");
  return *(int *)(pmem + addr - MBASE);
}

extern "C" void pmem_write(int waddr, int wdata, char wmask) {
  #ifdef CONFIG_MTRACE
    printf("write memory to 0x" FMT_WORD "\n", waddr);
  #endif

  uint32_t addr = waddr & ~0x3u;
  Assert(!memory_out_of_bound(addr), "write address out of bound\n");

  int *p = (int *)(pmem + addr - MBASE);
  int mask = 0;
  for (int i = 0; i < 4; i++) {
    if ((wmask >> i) & 0x1) {
      mask |= 0xff << (i * 8);
    }
  }
  *p = (*p & ~mask) | (wdata & mask);
}

uint8_t pmem_read(uint32_t addr){
  return *(pmem + addr - MBASE);
}

uint32_t paddr_read(uint32_t addr, int len){
  uint32_t data = 0;
  for(int i = 0; i < len; i++){
    data |= pmem_read(addr + i) << (i * 8);
  }
  return data;
}

uint32_t vaddr_read(uint32_t addr, int len){
  return paddr_read(addr, len);
}

uint8_t *guest_to_host(uint32_t addr) {
  return pmem + addr - MBASE;
}

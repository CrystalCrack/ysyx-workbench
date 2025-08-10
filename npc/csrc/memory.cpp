
#include <memory.h>
#include <cpu.h>
#include <device.h>

char *img_file = NULL;
extern CPU_state state;


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

uint8_t flash_mem[FLASH_SIZE] = {
  // initialize with string "Hello, Flash!\n"
  // 0x48, 0x65, 0x6c, 0x6c,
  // 0x6f, 0x2c, 0x20, 0x46,
  // 0x6c, 0x61, 0x73, 0x68,
  // 0x21, 0x0a
  0x10, 0x00, 0x05, 0x37, // lui a0, 0x10000
  0x04, 0x10, 0x05, 0x93, // addi a1, zero, 0x41
  0x00, 0xb5, 0x00, 0x23, // sb a1, 0(a0)
  0x00, 0xa0, 0x05, 0x93, // addi a1, zero, 0x0a
  0x00, 0xb5, 0x00, 0x23, // sb a1, 0(a0)
  0x00, 0x00, 0x00, 0x6f // j .
};

uint8_t psram_mem[PSRAM_SIZE];

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
  int ret = fread(flash_mem, size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  return size;
}

bool memory_out_of_bound(uint32_t addr, int verbose) {
  if (addr < MBASE || addr >= MBASE + MSIZE) {
    if(verbose)
      printf("Memory access out of bound: addr = 0x%08x\n", addr);
    return true;
  }
  return false;
}

extern "C" int pmem_read(int raddr) {

  uint32_t addr = raddr;

  // MMIO
  #ifdef CONFIG_DEVICE
  if(in_mmio(raddr)){
    uint32_t ret = mmio_read(raddr);
    return ret;
  }
  #endif

  if(memory_out_of_bound(addr, 1)){
    printf(ANSI_BOLD ANSI_COLOR_RED "read address out of bound\n" ANSI_COLOR_RESET );
    state = ABORT;
    return 0;
  }
  
  int ret = *(int *)(pmem + addr - MBASE);

  #ifdef CONFIG_MTRACE
  static int last_raddr, last_ret;
  CPU_reg _this = get_cpu_state();
  if(_this.pc == raddr){
    return ret;
  }
  if (last_raddr != raddr || last_ret != ret) {
    printf("(NPC) " FMT_WORD ":read from " FMT_WORD ", get " FMT_WORD "\n", _this.pc, raddr, ret);
    last_raddr = raddr;
    last_ret = ret;
  }
  #endif

  return ret;
}

extern "C" void pmem_write(int waddr, int wdata, char wmask) {

  uint32_t addr = waddr;

  // MMIO
  #ifdef CONFIG_DEVICE
  if(in_mmio(addr)){
    mmio_write(addr, wdata);
    return;
  }
  #endif

  if(memory_out_of_bound(addr, 1)){
    printf(ANSI_BOLD ANSI_COLOR_RED "write address out of bound\n" ANSI_COLOR_RESET );
    state = ABORT;
    return;
  }

  int *p = (int *)(pmem + addr - MBASE);
  int mask = 0;
  for (int i = 0; i < 4; i++) {
    if ((wmask >> i) & 0x1) {
      mask |= 0xff << (i * 8);
    }
  }
  uint32_t ret = (*p & ~mask) | (wdata & mask);
  *p = ret;

  #ifdef CONFIG_MTRACE
  CPU_reg _this = get_cpu_state();
  printf("(NPC) " FMT_WORD ":write " FMT_WORD " to " FMT_WORD "\n", _this.pc, ret, waddr);
  #endif
}

uint8_t pmem_read(uint32_t addr){
  if(memory_out_of_bound(addr,  0)){
    // printf(ANSI_BOLD ANSI_COLOR_RED "write address out of bound\n" ANSI_COLOR_RESET );
    // state = ABORT;
    return 0;
  }
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
  if(addr >= FLASH_BASE && addr < FLASH_BASE + FLASH_SIZE) {
    return flash_mem + addr - FLASH_BASE;
  }else if (addr >= PSRAM_BASE && addr < PSRAM_BASE + PSRAM_SIZE) {
    return psram_mem + addr - PSRAM_BASE;
  } else return pmem + addr - MBASE;
}

extern "C" void mrom_read(int32_t addr, int32_t *data) { 
  *data = pmem_read(addr);
}

extern "C" void flash_read(int32_t addr, int32_t *data) { 
  *data = *((uint32_t *)flash_mem + (addr / sizeof(uint32_t)));
  #if defined(CONFIG_MTRACE)
  // printf("flash read addr = 0x%08x, data = 0x%08x\n", addr, *((uint32_t *)flash_mem + (addr / sizeof(uint32_t))));
  #endif
}

extern "C" void psram_read(int32_t addr, char *data) { 
  *data = *(psram_mem + addr);
  #if defined(CONFIG_MTRACE)
  printf("psram read addr = 0x%08x, data = 0x%08x\n", addr, *((uint32_t *)psram_mem + (addr / sizeof(uint32_t))));
  #endif
}

extern "C" void psram_write(int32_t addr, char data) { 
  *(psram_mem + addr) = data;
  #if defined(CONFIG_MTRACE)
  // printf("psram write addr = 0x%08x, data = 0x%08x\n", addr, data);
  #endif
}
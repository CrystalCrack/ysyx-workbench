/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <memory/host.h>
#include <memory/paddr.h>
#include <device/mmio.h>
#include <isa.h>



#if   defined(CONFIG_PMEM_MALLOC)
static uint8_t *pmem = NULL;
#else // CONFIG_PMEM_GARRAY

#if defined(CONFIG_SOC_MEM)
// mrom 0x2000_0000~0x2000_0fff
static uint8_t mrom[CONFIG_MROM_SIZE] PG_ALIGN = {};
// sram 0x0f00_0000~0x0f00_1fff
static uint8_t sram[CONFIG_SRAM_SIZE] PG_ALIGN = {};
// flash 0x3000_0000~0x3fff_ffff
static uint8_t flash[CONFIG_FLASH_SIZE] PG_ALIGN = {};
// psram 0x8000_0000~0x80ff_ffff
static uint8_t psram[CONFIG_PSRAM_SIZE] PG_ALIGN = {};

#else
static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {}; 
#endif

#endif

static void out_of_bound(paddr_t addr) {
  #if defined(CONFIG_SOC_MEM)
  panic("address = " FMT_PADDR " is out of bound of pmem [" FMT_PADDR ", " FMT_PADDR "] or [" FMT_PADDR ", " FMT_PADDR "] or [" FMT_PADDR ", " FMT_PADDR "] or [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
      addr, MROM_LEFT, MROM_RIGHT, SRAM_LEFT, SRAM_RIGHT, FLASH_LEFT, FLASH_RIGHT, PSRAM_LEFT, PSRAM_RIGHT, cpu.pc);
  #else
  panic("address = " FMT_PADDR " is out of bound of pmem [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
      addr, PMEM_LEFT, PMEM_RIGHT, cpu.pc);
  #endif
}

uint8_t* guest_to_host(paddr_t paddr) { 
  #if defined(CONFIG_SOC_MEM)
  if (paddr >= CONFIG_MROM_BASE && paddr < CONFIG_MROM_BASE + CONFIG_MROM_SIZE) {
    return mrom + (paddr - CONFIG_MROM_BASE);
  } else if (paddr >= CONFIG_SRAM_BASE && paddr < CONFIG_SRAM_BASE + CONFIG_SRAM_SIZE) {
    return sram + (paddr - CONFIG_SRAM_BASE);
  } else if (paddr >= CONFIG_FLASH_BASE && paddr < CONFIG_FLASH_BASE + CONFIG_FLASH_SIZE) {
    return flash + (paddr - CONFIG_FLASH_BASE);
  } else if( paddr >= CONFIG_PSRAM_BASE && paddr < CONFIG_PSRAM_BASE + CONFIG_PSRAM_SIZE) {
    return psram + (paddr - CONFIG_PSRAM_BASE);
  } else {
    out_of_bound(paddr);
    return NULL;
  }
  #else
  return pmem + paddr - CONFIG_MBASE;
  #endif
}

paddr_t host_to_guest(uint8_t *haddr) { 
  #if defined(CONFIG_SOC_MEM)
  if (haddr >= mrom && haddr < mrom + CONFIG_MROM_SIZE) {
    return CONFIG_MROM_BASE + (haddr - mrom);
  } else if (haddr >= sram && haddr < sram + CONFIG_SRAM_SIZE) {
    return CONFIG_SRAM_BASE + (haddr - sram);
  } else if (haddr >= flash && haddr < flash + CONFIG_FLASH_SIZE) {
    return CONFIG_FLASH_BASE + (haddr - flash);
  } else if (haddr >= psram && haddr < psram + CONFIG_PSRAM_SIZE) {
    return CONFIG_PSRAM_BASE + (haddr - psram);
  } else {
    panic("host address = %p is out of bound", haddr);
    return 0;
  }
  #else
  return haddr - pmem + CONFIG_MBASE; 
  #endif
}

static word_t pmem_read(paddr_t addr, int len) {

  word_t ret = host_read(guest_to_host(addr), len);
  
  if(addr != cpu.pc){
    IFDEF(CONFIG_MTRACE, printf("(NEMU) " FMT_WORD ":read from " FMT_WORD ", get " FMT_WORD "\n",cpu.pc , addr, ret));
    // printf(ANSI_FG_GREEN "(NEMU) " FMT_WORD ":read from " FMT_WORD ", get " FMT_WORD "\n" ANSI_NONE ,cpu.pc , addr, ret);
  }
  
  return ret;
}

static void pmem_write(paddr_t addr, int len, word_t data) {

  IFDEF(CONFIG_MTRACE, printf("(NEMU) " FMT_WORD ":write " FMT_WORD " to " FMT_WORD "\n",cpu.pc , data, addr));
  // printf(ANSI_FG_GREEN "(NEMU) " FMT_WORD ":write " FMT_WORD " to " FMT_WORD "\n" ANSI_NONE,cpu.pc , data, addr);
  host_write(guest_to_host(addr), len, data);
}

void init_mem() {
#if   defined(CONFIG_PMEM_MALLOC)
  pmem = malloc(CONFIG_MSIZE);
  assert(pmem);
#endif
  IFNDEF(CONFIG_SOC_MEM, IFDEF(CONFIG_MEM_RANDOM, memset(pmem, rand(), CONFIG_MSIZE)));
  #if defined(CONFIG_SOC_MEM)
  Log("MROM memory area [" FMT_PADDR ", " FMT_PADDR "]", MROM_LEFT, MROM_RIGHT);
  Log("SRAM memory area [" FMT_PADDR ", " FMT_PADDR "]", SRAM_LEFT, SRAM_RIGHT);
  Log("FLASH memory area [" FMT_PADDR ", " FMT_PADDR "]", FLASH_LEFT, FLASH_RIGHT);
  Log("PSRAM memory area [" FMT_PADDR ", " FMT_PADDR "]", PSRAM_LEFT, PSRAM_RIGHT);
  #else
  // Log("physical memory area [" FMT_PADDR ", " FMT_PADDR "]", PMEM_LEFT, PMEM_RIGHT);
  #endif
}

word_t paddr_read(paddr_t addr, int len) {
  if (likely(in_pmem(addr))) return pmem_read(addr, len);
  IFDEF(CONFIG_DEVICE, return mmio_read(addr, len));
  out_of_bound(addr);
  return 0;
}

void paddr_write(paddr_t addr, int len, word_t data) {
  if (likely(in_pmem(addr))) { pmem_write(addr, len, data); return; }
  IFDEF(CONFIG_DEVICE, mmio_write(addr, len, data); return);
  out_of_bound(addr);
}


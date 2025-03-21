#include <device.h>
#include <cpu.h>

extern int sim_time;
void difftest_skip_ref();

bool in_mmio(paddr_t addr) {
    bool ret = (addr==SERIAL_PORT) ||
                (addr>=RTC_ADDR && addr<RTC_ADDR+0x8);
    return ret;
}

uint32_t mmio_read(paddr_t addr) {

    #ifdef CONFIG_DIFFTEST
    difftest_skip_ref();
    #endif

    if(addr == SERIAL_PORT) {
        return 0;
    } else if(addr>=RTC_ADDR && addr<RTC_ADDR+0x8) {
        uint32_t offset = addr - RTC_ADDR;
        Assert(offset == 0 || offset == 4, "RTC offset cannot be %d\n", offset);

        uint32_t ret;
        if(offset == 0){
          // low 32 bits of time
          ret = get_time();
        }else{
          // high 32 bits of time
          ret = get_time() >> 32;
        }
        #ifdef CONFIG_DTRACE
        printf("(NPC) " FMT_WORD ":read from RTC, get " FMT_WORD "\n", get_cpu_state().pc, ret);
        #endif
        return ret;
    }
    return 0;
}

void mmio_write(paddr_t addr, uint32_t data) {
    // prevent repeat write
    static int last_simtime;
    if (sim_time-last_simtime < 3) {
        return;
    }
    last_simtime = sim_time;
    if(addr == SERIAL_PORT) {
        #ifdef CONFIG_DTRACE
        printf("(NPC) " FMT_WORD ":write to serial port: %c\n", get_cpu_state().pc, (char)data);
        #endif
        putc((char)data, stderr);
    } else if(addr>=RTC_ADDR && addr<RTC_ADDR+0x8) {
        return;
    }
}
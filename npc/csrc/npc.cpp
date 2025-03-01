#include <cpu.h>
#include <getopt.h>

#define MAX_SIM_TIME 100

extern int sim_time;
extern Vnpc *dut;
extern CPU_state state;
extern VerilatedVcdC *m_trace;
extern char *img_file;

extern void get_reg(int addr, int* reg_data);

long load_img();
uint32_t pmem_read(uint32_t addr);

void ebreak(){
    stop();
}

void parse_args(int argc, char** argv){
    static struct option long_options[] = {
        {"image", required_argument, 0, 'i'},
        {0, 0, 0, 0}
    };
    int o;
    while((o = getopt_long(argc, argv, "i:", long_options, NULL)) != -1){
        switch(o){
            case 'i':
                img_file = optarg;
                break;
            default:
                break;
        }
    }
}

int main(int argc, char** argv){

    parse_args(argc, argv);

    cpu_init("npc.vcd");

    load_img();

    reset(5);

    state = RUN;

    while(sim_time < MAX_SIM_TIME){
        svSetScope(svGetScopeFromName("TOP.npc.u_RegisterFile"));
        single_cycle();
        dut->inst = pmem_read(dut->pc);
        if(state == HALT){
            int reg_data;
            get_reg(10, &reg_data);
            if(reg_data == 0){
                printf(ANSI_BOLD ANSI_COLOR_GREEN "HIT GOOD TRAP" ANSI_COLOR_RESET " at pc = 0x%08x\n", dut->pc);
            }else{
                printf(ANSI_BOLD ANSI_COLOR_RED "HIT BAD TRAP" ANSI_COLOR_RESET " at pc = 0x%08x\n", dut->pc);
            }
            break;
        }
    }

    cpu_deinit();

    return 0;


}
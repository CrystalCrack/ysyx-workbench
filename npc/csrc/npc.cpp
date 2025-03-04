#include <cpu.h>
#include <getopt.h>
#include <sdb.h>

#define MAX_SIM_TIME 100

extern int sim_time;
extern Vnpc *dut;
extern CPU_state state;
extern VerilatedVcdC *m_trace;
extern char *img_file;
extern void get_reg(int addr, int* reg_data);


/* memory */
long load_img();
uint32_t paddr_read(uint32_t addr);
/* sdb */
void init_sdb();
void free_sdb();
void sdb_mainloop();
void sdb_set_batch_mode();
/* disasm */
void init_disasm();
/* difftest */
void init_difftest(char *ref_so_file, long img_size, int port);

char *elf_file = NULL;
char *so_file = NULL;
long img_size;

void ebreak(){
    int ret_code;
    svSetScope(svGetScopeFromName("TOP.npc.u_RegisterFile"));
    get_reg(10, &ret_code);
    stop(ret_code, dut->pc);
}

void parse_args(int argc, char** argv){
    static struct option long_options[] = {
        {"image", required_argument, 0, 'i'},
        {"batch", no_argument, 0, 'b'},
        {"elf", required_argument, 0, 'e'},
        {"diff", required_argument, 0, 'd'},
        {0, 0, 0, 0}
    };
    int o;
    while((o = getopt_long(argc, argv, "i:be:d:", long_options, NULL)) != -1){
        switch(o){
            case 'i':
                img_file = optarg;
                break;
            case 'b':
                sdb_set_batch_mode();
                break;
            case 'e':
                elf_file = optarg;
                break;
            case 'd':
                so_file = optarg;
                break;
            default:
                break;
        }
    }
}

static void welcome(){

    #ifdef CONFIG_ITRACE
    Log("ITrace: %s", ANSI_FMT("ON", ANSI_COLOR_GREEN));
    #else
    Log("ITrace: %s", ANSI_FMT("OFF", ANSI_COLOR_RED));
    #endif

    printf("Welcome to %s-NPC!\n", ANSI_FMT("riscv32", ANSI_COLOR_YELLOW ANSI_BG_RED));
    printf("For help, type \"help\"\n");

}

void initialize(int argc, char** argv){
    parse_args(argc, argv);

    cpu_init("npc.vcd");

    img_size = load_img();

    init_trace(elf_file);

    init_sdb();

    init_disasm();

    init_difftest(so_file, img_size, 1);

    reset(5);

    welcome();

    state = RUNNING;
}

void deinitialize(){
    free_sdb();

    free_trace();

    cpu_deinit();
}

int main(int argc, char** argv){

    initialize(argc, argv);

    sdb_mainloop();

    deinitialize();

    return 0;
}

MEMORY {
    ROM (rx)  : ORIGIN = 0x20000000, LENGTH = 4K  /* 0x20000000~0x20000fff */
    SRAM (rwx): ORIGIN = 0x0f000000, LENGTH = 8K    /* 0x0f000000~0x0f001fff */
    FLASH (rx) : ORIGIN = 0x30000000, LENGTH = 256M /* 0x30000000~0x3fffffff */
    PSRAM (rwx) : ORIGIN = 0x80000000, LENGTH = 4M  /* 0x80000000~0x803fffff */
}

ENTRY(_start)

SECTIONS {
    .text : {
        *(entry)
        *(.text*)
    } > FLASH AT > FLASH
    . = ALIGN(4);
    .rodata : {
        *(.rodata*)
        . = ALIGN(4);
    } > FLASH AT > FLASH
    
    . = ORIGIN(SRAM);
    _sdata = .;
    .data : {
        *(.data*)
        *(.sdata*)
    } > SRAM AT > FLASH
    _edata = .;
    _data_lma = LOADADDR(.data);

    . = ALIGN(4);
    .bss : {
        _sbss = .;           
        *(.bss*)
        *(.sbss*)
        *(.scommon)
        . = ALIGN(4);
        _ebss = .;           
    } > SRAM

    . = ALIGN(4);
    _heap_start = .;
    _stack_size = 1K;        

    _stack_top = ORIGIN(SRAM) + LENGTH(SRAM) - _stack_size;
    _stack_pointer = _stack_top + _stack_size - 4;

    _heap_end = _stack_top;
}
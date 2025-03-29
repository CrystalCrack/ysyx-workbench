.section entry, "ax"
.globl _start
.type _start, @function

_start:
    mv s0, zero
    la sp, _stack_pointer

# bootloader
    la a1, _sdata  
    la a2, _edata    
    la a3, _data_lma 

    sub t2, a2, a1
    mv t1, t2
    srli t1, t1, 2   
    andi t2, t2, 3 

_copy_words:
    beqz t1, _copy_bytes  
    lw t0, 0(a3)               
    sw t0, 0(a1)                  
    addi a1, a1, 4
    addi a3, a3, 4
    addi t1, t1, -1
    j _copy_words

_copy_bytes:
    beqz t2, _clear_bss        
    lb t0, 0(a3)              
    sb t0, 0(a1)             
    addi a1, a1, 1
    addi a3, a3, 1
    addi t2, t2, -1
    j _copy_bytes

_clear_bss:
    la a1, _sbss      
    la a2, _ebss    
_clear_loop:
    bge a1, a2, _call_main  
    sb zero, 0(a1)   
    addi a1, a1, 1
    j _clear_loop

_call_main:
    call _trm_init       

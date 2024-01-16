#include <stdint.h>
#include "msp432p401r.h"

void DAC_Init(){
    P4SEL0 &= ~0x0F; // 0000 1111
    P4SEL1 &= ~0x0F;
    P4DIR  |= 0x0F;
}

void DAC_Out(uint8_t Data){

    P4OUT = Data;
}

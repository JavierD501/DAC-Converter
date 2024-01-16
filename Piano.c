#include <stdint.h>
#include "msp432p401r.h"

//piano tells main which button is being pressed
//main does not call sound_play,
//sound will initialize systickinit
//set i bit in main to 0 or 1 to terminate
//

void Piano_Init(){
    //Initialize push buttons
    P5SEL0 &= ~0xF8; // 0000 0111
    P5SEL1 &= ~0xF8;
    P5DIR  &= ~0xF8;
}

uint8_t Piano_In(){
    //return logical key code
    //value = P5IN;
//    uint8_t i = P5IN &= 0x07;
//    return i;
    return P5IN &= 0x07;
}

#include <stdint.h>
#include "msp432p401r.h"
#include "SysTickInts.h"
#include "DAC.h"
#include "Sound.h"


// 4-bit 32-element sine wave
const uint8_t wave[32]= {8,9,11,12,13,14,14,15,15,15,14,14,13,12,11,9,8,7,5,4,3,2,2,1,1,1,2,2,3,4,5,7};
int counter = 0;

//uint16_t noteFrequencies[3] = {494, 440, 349};

void Sound_Init(){
    DAC_Init();
    SysTick_Init(1);

}

void SoundOut(){
    DAC_Out(wave[counter]);
    counter++;
    if(counter >= 32)
    {
        counter = 0;
    }
}

void SoundPlay(uint8_t note){

    switch(note)
    {
    case 0x01:
        SysTick->LOAD = 189;
        break;
    case 0x02:
        SysTick->LOAD = 213;
        break;
    case 0x04:
        SysTick->LOAD = 268;
        break;
    default:
        SysTick->LOAD = 0;
        break;
    }


}





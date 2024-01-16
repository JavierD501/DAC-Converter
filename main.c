#include <stdint.h>
#include "msp432p401r.h"
#include "Piano.h"
#include "Sound.h"


void main(void){

    uint8_t Data;

    Piano_Init();
    Sound_Init();
    while(1){
        Data = Piano_In();
        SoundPlay(Data);


    }

}

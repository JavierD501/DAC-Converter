#include <stdint.h>
#include "msp432p401r.h"
#include "SysTickInts.h"
#include "DAC.h"

#ifndef SOUND_H_
#define SOUND_H_

void Sound_Init();
void SoundPlay(uint8_t note);
void SoundOut();



#endif /* SOUND_H_ */

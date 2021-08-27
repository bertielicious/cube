#include "config.h"
void pulseSTCP(void)
{
    STCP = LO;
    STCP = HI;
    __delay_us(10);
    STCP = LO;   
}
/*
 The data in the shift register is transferred to the storage register
on a LOW-to-HIGH transition of the STCP input.
 */
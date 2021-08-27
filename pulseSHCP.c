#include "config.h"
void pulseSHCP(void)
{   SHCP = LO;
    SHCP = HI;
    __delay_us(10);
    SHCP = LO;
}
/*
 SHCP - Data from DS is shifted on the LOW-to-HIGH
transitions of the SHCP input
    
 */
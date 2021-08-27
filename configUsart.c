#include "config.h"
void configUsart(void)
{
    TXSTAbits.TXEN = HI;
    RCSTAbits.SPEN = HI;    // serial port enabled
    TXSTAbits.SYNC = LO;
    TRISBbits.TRISB2 = LO;  // TX / RB2 is output
    
    TXSTAbits.BRGH = LO;
    SPBRG = 25;
    
}

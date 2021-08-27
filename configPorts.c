#include "config.h"
void configPorts(void)
{
    INTCONbits.GIE = LO;    // disable interrupts
    INTCONbits.PEIE = LO;
    INTCONbits.RBIE = LO;
    INTCONbits.INTE = LO;
    
    CMCONbits.CM0 = HI;  // disable comparator input on  RA0
    CMCONbits.CM1 = HI;  // disable comparator input on  RA1
    CMCONbits.CM2 = HI;  // disable comparator input on  RA2
    CMCON = 0b00000111;
    TRISAbits.TRISA0 = LO;  // pin 17 digital output DS
    TRISAbits.TRISA1 = LO;  // pin 18 digital output SHCP
    TRISAbits.TRISA2 = LO;  // pin 1 digital output STCP
    TRISAbits.TRISA3 = LO;  // pin 2 digital output OE
    TRISAbits.TRISA6 = LO;  // pin 15 digital output LAYER3 of LED cube
    TRISAbits.TRISA7 = LO;  // pin 16 digital output LAYER4 of LED cube
    
    TRISBbits.TRISB3 = LO;  // pin 9 digital output LAYER1 of LED cube
    TRISBbits.TRISB5 = LO;  // pin 11 digital output LAYER2 of LED cube
    //TRISBbits.TRISB6 = LO;  // pin 12 digital output LAYER3 of LED cube
    //TRISBbits.TRISB7 = LO;  // pin 13 digital output LAYER4 of LED cube
    
    TRISBbits.TRISB2 = LO;  // pin 9 TX
    
    VRCONbits.VREN = HI;    // Vref switched off
    VRCONbits.VROE = HI;
    
    PORTA = 0x00;           // clear outputs of PORTA and PORTB
    PORTB = 0x00;
}

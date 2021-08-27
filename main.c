/*
 * File:   main.c
 * Author: User
 *
 * Created on 27 July 2021, 14:13
 */


#include <xc.h>
#include "config.h"
#include "configPorts.h"
#include "configUsart.h"
#include "sendByteMSBfirst.h"
#include "pulseSHCP.h"
#include "pulseSTCP.h"
int main(void) 
{
     bool b;
    unsigned char n = 0;
    PCONbits.OSCF = HI; // 4MHz internal clock
    configPorts();
    configUsart();
    
    DS = LO;
    SHCP = LO;
    STCP = LO;
    OE = LO;
    //printf("hello 16f627\n");
    
    
        LAYER1 = LO;
        LAYER2 = LO;
        LAYER3 = LO;
        LAYER4 = LO;
      
      
      while(1)
      {
          for (n = 8; n >0; n--)
        {
            b = sendByteMSBfirst(n-1, (1<<n-1));    // send to front two rows 01010101
            //printf("n %d bit %d\n", n-1, b);
            DS = b;
           
            
            pulseSHCP();   
            pulseSTCP();
             __delay_ms(25);
        }
        for (n = 8; n >0; n--)
        {
            b = sendByteMSBfirst(n-1, 255>>(n-1));    // send to back two rows 10101010
            //printf("n %d bit %d\n", n-1, b);
            DS = b;
             
            
            pulseSHCP();   
            pulseSTCP();
            __delay_ms(25);
        }
      
      }
          
}


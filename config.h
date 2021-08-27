/* 
 * File:   config.h
 * Author: User
 *
 * Created on 27 July 2021, 14:12
 */

#ifndef CONFIG_H
#define	CONFIG_H


// PIC16F627 Configuration Bit Settings

// 'C' source line config statements

// CONFIG
#pragma config FOSC = INTOSCIO  // Oscillator Selection bits (INTRC oscillator: I/O function on RA6/OSC2/CLKOUT pin, I/O function on RA7/OSC1/CLKIN)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled)
#pragma config PWRTE = ON      // Power-up Timer Enable bit (PWRT disabled)
#pragma config MCLRE = ON       // RA5/MCLR pin function select (RA5/MCLR pin function is MCLR)
#pragma config BOREN = ON       // Brown-out Reset Enable bit (BOD Reset enabled)
#pragma config LVP = ON         // Low-Voltage Programming Enable bit (RB4/PGM pin has PGM function, low-voltage programming enabled)
#pragma config CPD = OFF        // Data Code Protection bit (Data memory code protection off)
#pragma config CP = OFF         // Code Protection bits (Program memory code protection off)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

#include <xc.h>
#include <stdio.h>
#include <stdbool.h>

#define  uchar unsigned char
#define _XTAL_FREQ 4000000
#define DS PORTAbits.RA0    // serial data in pin 17
#define SHCP PORTAbits.RA1  // shift register clock pulse pin 18
#define STCP PORTAbits.RA2  // storage transfer clock pulse pin 1
#define OE PORTAbits.RA3    // output enable (active low) pin 2
//#define GRN_LED PORTBbits.RB5   // diagnostic LED

#define LAYER1 PORTBbits.RB3    //pin 9 - bottom LED x 16 layer pulls down to 0V when active
#define LAYER2 PORTBbits.RB5    // pin 11 - LED x 16 layer pulls down to 0V when active
//#define LAYER3 PORTBbits.RB6    //pin 12 - bottom LED x 16 layer pulls down to 0V when active
//#define LAYER4 PORTBbits.RB7    // pin 13 - top LED x 16 layer pulls down to 0V when active

#define LAYER3 PORTAbits.RA6    //pin 15 - bottom LED x 16 layer pulls down to 0V when active
#define LAYER4 PORTAbits.RA7    // pin 16 - top LED x 16 layer pulls down to 0V when active
enum {LO, HI};

#endif	/* CONFIG_H */


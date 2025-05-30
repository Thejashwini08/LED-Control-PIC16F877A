#pragma config WDT = OFF      // Watchdog Timer Enable bit (WDT disabled)
#pragma config LVP = OFF      // Low-Voltage Programming Enable bit (RB3/PGM pin has PGM function, low-voltage programming disabled)
#pragma config BOREN = OFF    // Brown-out Reset Enable bit (BOR disabled)
#pragma config PWRT = OFF     // Power-up Timer Enable bit (PWRT disabled)
#pragma config CPD = OFF      // Data EEPROM Memory Code Protection bit (Code protection off)
#pragma config WRT = OFF      // Flash Program Memory Write Enable bits (Write protection off)
#pragma config CP = OFF       // Flash Program Memory Code Protection bit (Code protection off)

#include <xc.h>

#define _XTAL_FREQ 6000000    // set the oscillator frequency to 6MHz

void main(void) {
    TRISD = 0xFB;             // 1111 1011 sets RD2 as output
    
    while (1) {
        PORTD = 0x04;         //sets RD2 high
        __delay_ms(1000);     

        PORTD = 0x00;         //sets RD2 low
        __delay_ms(1000);     
    }
}

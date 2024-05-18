#include <mega16.h>
#include <delay.h>

// Declare your global variables here

void main(void)
{

// Port B initialization
// Function: Bit7=In Bit6=In Bit5=In Bit4=In Bit3=In Bit2=In Bit1=Out Bit0=In 
DDRB=(0<<DDB7) | (0<<DDB6) | (0<<DDB5) | (0<<DDB4) | (0<<DDB3) | (0<<DDB2) | (1<<DDB1) | (0<<DDB0);
// State: Bit7=T Bit6=T Bit5=T Bit4=T Bit3=T Bit2=T Bit1=0 Bit0=T 
PORTB=(0<<PORTB7) | (0<<PORTB6) | (0<<PORTB5) | (0<<PORTB4) | (0<<PORTB3) | (0<<PORTB2) | (0<<PORTB1) | (0<<PORTB0);



    while (1)
    {
        PINB.0 = 0 ;
        if(PINB.0 == 1)
        { 
            while(PINB.0 == 1)
            {
                PORTB.1 = 1;
                delay_ms(700);
                PORTB.1 = 0;
                delay_ms(700); 
            }
        }
        else
        {
            PORTB.1 = 0;  
        }
    }
}

#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

void initHardware(void){
	DDRA = 0B11111111; // setting all A pins to output
	DDRC = 0B11111111; //setting all C pins to output
}

int main(void)
{
    /* Replace with your application code */
    while (1) 
    {
    }
}


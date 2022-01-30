#include<pic.h>
#include<htc.h>
#define _XTAL_FREQ 29e6
__CONFIG(0X3F3A);

void main()
{
	TRISC=0X00;
	PORTC=0X00;
	while(1)
	{
		PORTC=0X01;
		__delay_ms(50);
		PORTC=0X04;
		__delay_ms(50);
		PORTC=0X02;
		__delay_ms(50);
		PORTC=0X08;
		__delay_ms(50);
	}
}
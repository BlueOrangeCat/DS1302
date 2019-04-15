#include "DS1302.h"

void write_byte(uint8 dat)//ÏÈ´«ÊäµÍÎ»
{
	uint8 a;
	ACC=dat;
	RST=1;
	for(a=8;a>0;a--)
	{
		IO=ACC0;
		SCLK=0;
		SCLK=1;
		ACC=ACC>>1;
	}
}

unsigned char read_byte()
{
	uint8 a;
	RST=1;
	for(a=8;a>0;a--)
	{
		ACC7=IO;
		SCLK=1;
		SCLK=0;
		ACC=ACC>>1;

	}
	return (ACC);
}

void write_1302(uint8 add,uint8 dat)
{

	RST=0;
	SCLK=0;
	RST=1;
	write_byte(add);
	write_byte(dat);
	SCLK=0;///
	RST=0;
}

unsigned char read_1302(uint8 add)
{
	uint8 temp;
	RST=0;
	SCLK=0;
	RST=1;
	write_byte(add);
	temp=read_byte();
	SCLK=0;//
	RST=0;
	return(temp);
}

unsigned char BCD_Decimal(uint8 bcd)
{
	uint8 Decimal;
	Decimal=bcd>>4;
	return(Decimal=Decimal*10+(bcd&=0x0F));
}
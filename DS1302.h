#ifndef _DS1302_H
#define _DS1302_H
#include "define.h"

sbit SCLK=P2^1;  // 6  P1.1
sbit IO=P2^0;    // 7  P1.0
sbit RST=P2^4;   // ±÷” 5  P1.2

void write_byte(uint8 dat);
void write_1302(uint8 add,uint8 dat);

unsigned char read_byte();
unsigned char read_1302(uint8 add);
unsigned char BCD_Decimal(uint8 bcd);

#endif
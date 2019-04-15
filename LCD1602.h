#ifndef _LCD1602_H
#define _LCD1602_H

#include "define.h"

sbit wr=P1^1;
sbit rs=P1^0;
sbit en=P2^5;

void delay(uint8 xms);
void write_1602dat(uint8 dat);
void write_1602com(unsigned char com);
	
#endif
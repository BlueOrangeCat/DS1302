#include "LCD1602.h"

void delay(uint8 xms)//延时函数
{
	uint8 x,y;
	for(x=xms;x>0;x--)
	 for(y=110;y>0;y--);
}

void write_1602com(unsigned char com)//液晶写入指令函数
{
	rs=0;//置为写入命令
	P0=com;//送入数据
	delay(1);
	en=1;//拉高使能端
	delay(1);
	en=0;//完成高脉冲
}

void write_1602dat(uint8 dat)
{
	rs=1;//置为写入数据
	P0=dat;//送入数据
	delay(1);
	en=1;
	delay(1);
	en=0;
}
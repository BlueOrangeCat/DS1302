#include "LCD1602.h"

void delay(uint8 xms)//��ʱ����
{
	uint8 x,y;
	for(x=xms;x>0;x--)
	 for(y=110;y>0;y--);
}

void write_1602com(unsigned char com)//Һ��д��ָ���
{
	rs=0;//��Ϊд������
	P0=com;//��������
	delay(1);
	en=1;//����ʹ�ܶ�
	delay(1);
	en=0;//��ɸ�����
}

void write_1602dat(uint8 dat)
{
	rs=1;//��Ϊд������
	P0=dat;//��������
	delay(1);
	en=1;
	delay(1);
	en=0;
}
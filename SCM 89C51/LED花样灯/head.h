#include "reg52.h"
#include "intrins.h"

#define uint unsigned int 
#define uchar unsigned char
	
uint p;	//临时变量

uint code x[5]={0xef,0xc7,0xc3,0x81,0x00}; //第三套【1】
uint code y[4]={0x7e,0x3c,0x18,0x00};	     //第三套【2】

uchar led0;	//定义led存储电平变量
uchar led1;
uchar led2;
uchar led3;

sbit keyboard0=P0^0;	//定义独立按键引脚
sbit keyboard1=P0^1;
sbit keyboard2=P0^2;
sbit keyboard3=P0^3;

sbit keyboards0=P0^4;
sbit keyboards1=P0^5;
sbit keyboards2=P0^6;
sbit keyboards3=P0^7;

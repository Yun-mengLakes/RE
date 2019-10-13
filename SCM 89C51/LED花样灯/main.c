#include "head.h"

void led0left(); 
void led0right();
/*色彩1函数*/
void led1left();
void led1right();
/*色彩2函数*/
void led2middle();
void led2outer();
/*色彩3函数*/
void led3open();
void led3out();
/*色彩4函数*/
void delay(uint i)   //延时函数ms
{
  unsigned char a,b,c;
	while(i)
	{
		for(c=1;c>0;c--)
        for(b=142;b>0;b--)
            for(a=2;a>0;a--);
		i--;
	}
}

int main()
{
	if(keyboard0==0)
		{
			delay(20);	//按下消抖
			while(keyboard0==0);	//电压为低时保持当前状态
			delay(20);	//松开消抖
			led0left();
		}
		else if(keyboards0==0)
		{
			delay(20);
			while(keyboards0==0);
			delay(20);
			led0right();
		}
		else if(keyboard1==0)
		{
			delay(20);
			while(keyboard1==0);
			delay(20);
			led1left();
		}
		else if(keyboards1==0)
		{
			delay(20);
			while(keyboards1==0);
			delay(20);
			led1right();
		}
		else if(keyboard2==0)
		{
			delay(20);
			while(keyboard2==0);
			delay(20);
			led2middle();
		}
		else if(keyboards2==0)
		{
			delay(20);
			while(keyboards2==0);
			delay(20);
			led2outer();
		}
		else if(keyboard3==0)
		{
			delay(20);
			while(keyboard3==0);
			delay(20);
			led3open();
		}
		else if(keyboards3==0)
		{
			delay(20);
			while(keyboards3==0);
			delay(20);
			led3out();
		}
}
void led0left()
{
	led0=0xfe;
	while(1)
	{
		P2=led0;
		led0=_crol_(led0,1);
		delay(500);
		if(keyboard0==0)
		{
			delay(20);
			while(keyboard0==0);
			delay(20);
			led0left();
		}
		else if(keyboards0==0)
		{
			delay(20);
			while(keyboards0==0);
			delay(20);
			led0right();
		}
		else if(keyboard1==0)
		{
			delay(20);
			while(keyboard1==0);
			delay(20);
			led1left();
		}
		else if(keyboards1==0)
		{
			delay(20);
			while(keyboards1==0);
			delay(20);
			led1right();
		}
		else if(keyboard2==0)
		{
			delay(20);
			while(keyboard2==0);
			delay(20);
			led2middle();
		}
		else if(keyboards2==0)
		{
			delay(20);
			while(keyboards2==0);
			delay(20);
			led2outer();
		}
		else if(keyboard3==0)
		{
			delay(20);
			while(keyboard3==0);
			delay(20);
			led3open();
		}
		else if(keyboards3==0)
		{
			delay(20);
			while(keyboards3==0);
			delay(20);
			led3out();
		}
	}
}

void led0right()
{
	led0=0x7f;
	while(1)
	{
		P2=led0;
		led0=_cror_(led0,1);
		delay(500);
		if(keyboard0==0)
		{
			delay(20);
			while(keyboard0==0);
			delay(20);
			led0left();
		}
		else if(keyboards0==0)
		{
			delay(20);
			while(keyboards0==0);
			delay(20);
			led0right();
		}
		else if(keyboard1==0)
		{
			delay(20);
			while(keyboard1==0);
			delay(20);
			led1left();
		}
		else if(keyboards1==0)
		{
			delay(20);
			while(keyboards1==0);
			delay(20);
			led1right();
		}
		else if(keyboard2==0)
		{
			delay(20);
			while(keyboard2==0);
			delay(20);
			led2middle();
		}
		else if(keyboards2==0)
		{
			delay(20);
			while(keyboards2==0);
			delay(20);
			led2outer();
		}
		else if(keyboard3==0)
		{
			delay(20);
			while(keyboard3==0);
			delay(20);
			led3open();
		}
		else if(keyboards3==0)
		{
			delay(20);
			while(keyboards3==0);
			delay(20);
			led3out();
		}
	}
}

void led1left()
{
	led1=0xff;
	while(1)
	{
		led1=led1<<1;
		P2=led1;
		delay(500);
		if(led1==0x00)
		{
			for(p=0;p<8;p++)
			{
				P2=led1;
				led1=~(0xfe<<p);
				delay(500);
				if(keyboard0==0)
		{
			delay(20);
			while(keyboard0==0);
			delay(20);
			led0left();
		}
		else if(keyboards0==0)
		{
			delay(20);
			while(keyboards0==0);
			delay(20);
			led0right();
		}
		else if(keyboard1==0)
		{
			delay(20);
			while(keyboard1==0);
			delay(20);
			led1left();
		}
		else if(keyboards1==0)
		{
			delay(20);
			while(keyboards1==0);
			delay(20);
			led1right();
		}
		else if(keyboard2==0)
		{
			delay(20);
			while(keyboard2==0);
			delay(20);
			led2middle();
		}
		else if(keyboards2==0)
		{
			delay(20);
			while(keyboards2==0);
			delay(20);
			led2outer();
		}
		else if(keyboard3==0)
		{
			delay(20);
			while(keyboard3==0);
			delay(20);
			led3open();
		}
		else if(keyboards3==0)
		{
			delay(20);
			while(keyboards3==0);
			delay(20);
			led3out();
		}
			}
		}
		if(keyboard0==0)
		{
			delay(20);
			while(keyboard0==0);
			delay(20);
			led0left();
		}
		else if(keyboards0==0)
		{
			delay(20);
			while(keyboards0==0);
			delay(20);
			led0right();
		}
		else if(keyboard1==0)
		{
			delay(20);
			while(keyboard1==0);
			delay(20);
			led1left();
		}
		else if(keyboards1==0)
		{
			delay(20);
			while(keyboards1==0);
			delay(20);
			led1right();
		}
		else if(keyboard2==0)
		{
			delay(20);
			while(keyboard2==0);
			delay(20);
			led2middle();
		}
		else if(keyboards2==0)
		{
			delay(20);
			while(keyboards2==0);
			delay(20);
			led2outer();
		}
		else if(keyboard3==0)
		{
			delay(20);
			while(keyboard3==0);
			delay(20);
			led3open();
		}
		else if(keyboards3==0)
		{
			delay(20);
			while(keyboards3==0);
			delay(20);
			led3out();
		}
	}
}
void led1right()
{
	led1=0xff;
	while(1)
	{
		led1=led1>>1;
		P2=led1;
		delay(500);
		if(led1==0x00)
		{
			for(p=0;p<8;p++)
			{
				P2=led1;
				led1=~(0x7f>>p);
				delay(500);
				if(keyboard0==0)
		{
			delay(20);
			while(keyboard0==0);
			delay(20);
			led0left();
		}
		else if(keyboards0==0)
		{
			delay(20);
			while(keyboards0==0);
			delay(20);
			led0right();
		}
		else if(keyboard1==0)
		{
			delay(20);
			while(keyboard1==0);
			delay(20);
			led1left();
		}
		else if(keyboards1==0)
		{
			delay(20);
			while(keyboards1==0);
			delay(20);
			led1right();
		}
		else if(keyboard2==0)
		{
			delay(20);
			while(keyboard2==0);
			delay(20);
			led2middle();
		}
		else if(keyboards2==0)
		{
			delay(20);
			while(keyboards2==0);
			delay(20);
			led2outer();
		}
		else if(keyboard3==0)
		{
			delay(20);
			while(keyboard3==0);
			delay(20);
			led3open();
		}
		else if(keyboards3==0)
		{
			delay(20);
			while(keyboards3==0);
			delay(20);
			led3out();
		}
			}
		}
		if(keyboard0==0)
		{
			delay(20);
			while(keyboard0==0);
			delay(20);
			led0left();
		}
		else if(keyboards0==0)
		{
			delay(20);
			while(keyboards0==0);
			delay(20);
			led0right();
		}
		else if(keyboard1==0)
		{
			delay(20);
			while(keyboard1==0);
			delay(20);
			led1left();
		}
		else if(keyboards1==0)
		{
			delay(20);
			while(keyboards1==0);
			delay(20);
			led1right();
		}
		else if(keyboard2==0)
		{
			delay(20);
			while(keyboard2==0);
			delay(20);
			led2middle();
		}
		else if(keyboards2==0)
		{
			delay(20);
			while(keyboards2==0);
			delay(20);
			led2outer();
		}
		else if(keyboard3==0)
		{
			delay(20);
			while(keyboard3==0);
			delay(20);
			led3open();
		}
		else if(keyboards3==0)
		{
			delay(20);
			while(keyboards3==0);
			delay(20);
			led3out();
		}
	}
}

void led2middle()
{
	while(1)
	{
		for(p=0;p<5;p++)
		{
			led2=x[p];
			P2=led2;
			delay(500);
			if(keyboard0==0)
		{
			delay(20);
			while(keyboard0==0);
			delay(20);
			led0left();
		}
		else if(keyboards0==0)
		{
			delay(20);
			while(keyboards0==0);
			delay(20);
			led0right();
		}
		else if(keyboard1==0)
		{
			delay(20);
			while(keyboard1==0);
			delay(20);
			led1left();
		}
		else if(keyboards1==0)
		{
			delay(20);
			while(keyboards1==0);
			delay(20);
			led1right();
		}
		else if(keyboard2==0)
		{
			delay(20);
			while(keyboard2==0);
			delay(20);
			led2middle();
		}
		else if(keyboards2==0)
		{
			delay(20);
			while(keyboards2==0);
			delay(20);
			led2outer();
		}
		else if(keyboard3==0)
		{
			delay(20);
			while(keyboard3==0);
			delay(20);
			led3open();
		}
		else if(keyboards3==0)
		{
			delay(20);
			while(keyboards3==0);
			delay(20);
			led3out();
		}
		}
  }
}

void led2outer()
{
	while(1)
	{
		for(p=0;p<4;p++)
		{
			led2=y[p];
			P2=led2;
			delay(500);
			if(keyboard0==0)
		{
			delay(20);
			while(keyboard0==0);
			delay(20);
			led0left();
		}
		else if(keyboards0==0)
		{
			delay(20);
			while(keyboards0==0);
			delay(20);
			led0right();
		}
		else if(keyboard1==0)
		{
			delay(20);
			while(keyboard1==0);
			delay(20);
			led1left();
		}
		else if(keyboards1==0)
		{
			delay(20);
			while(keyboards1==0);
			delay(20);
			led1right();
		}
		else if(keyboard2==0)
		{
			delay(20);
			while(keyboard2==0);
			delay(20);
			led2middle();
		}
		else if(keyboards2==0)
		{
			delay(20);
			while(keyboards2==0);
			delay(20);
			led2outer();
		}
		else if(keyboard3==0)
		{
			delay(20);
			while(keyboard3==0);
			delay(20);
			led3open();
		}
		else if(keyboards3==0)
		{
			delay(20);
			while(keyboards3==0);
			delay(20);
			led3out();
		}
		}
  }
}

void led3open()
{
	led3=0x00;
	while(1)
	{
		P2=led3;
		if(keyboard0==0)
		{
			delay(20);
			while(keyboard0==0);
			delay(20);
			led0left();
		}
		else if(keyboards0==0)
		{
			delay(20);
			while(keyboards0==0);
			delay(20);
			led0right();
		}
		else if(keyboard1==0)
		{
			delay(20);
			while(keyboard1==0);
			delay(20);
			led1left();
		}
		else if(keyboards1==0)
		{
			delay(20);
			while(keyboards1==0);
			delay(20);
			led1right();
		}
		else if(keyboard2==0)
		{
			delay(20);
			while(keyboard2==0);
			delay(20);
			led2middle();
		}
		else if(keyboards2==0)
		{
			delay(20);
			while(keyboards2==0);
			delay(20);
			led2outer();
		}
		else if(keyboard3==0)
		{
			delay(20);
			while(keyboard3==0);
			delay(20);
			led3open();
		}
		else if(keyboards3==0)
		{
			delay(20);
			while(keyboards3==0);
			delay(20);
			led3out();
		}
	}
}
void led3out()
{
	led3=0xff;
	while(1)
	{
		P2=led3;
		if(keyboard0==0)
		{
			delay(20);
			while(keyboard0==0);
			delay(20);
			led0left();
		}
		else if(keyboards0==0)
		{
			delay(20);
			while(keyboards0==0);
			delay(20);
			led0right();
		}
		else if(keyboard1==0)
		{
			delay(20);
			while(keyboard1==0);
			delay(20);
			led1left();
		}
		else if(keyboards1==0)
		{
			delay(20);
			while(keyboards1==0);
			delay(20);
			led1right();
		}
		else if(keyboard2==0)
		{
			delay(20);
			while(keyboard2==0);
			delay(20);
			led2middle();
		}
		else if(keyboards2==0)
		{
			delay(20);
			while(keyboards2==0);
			delay(20);
			led2outer();
		}
		else if(keyboard3==0)
		{
			delay(20);
			while(keyboard3==0);
			delay(20);
			led3open();
		}
		else if(keyboards3==0)
		{
			delay(20);
			while(keyboards3==0);
			delay(20);
			led3out();
		}
	}
}
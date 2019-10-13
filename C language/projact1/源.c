#include "head.h"

//最后一次维护日志：把goto语句替换为while语句------纠错机制加强，新增刷新缓冲区功能

int main(void)	//本函数入口调用三个自定义函数
{
	char q[30], z[10];
	double p = 0, l = 1, h;
	printf("----------------------------------------------\a\n您好，欢迎使用本程序！\n");
	
	while(l!=0)
	{
		printf("输入圆的面积，周长，体积其中任意一个即可计算.\n【输入后记得按回车键确认】\n我要计算圆的:__\b\b");
		scanf("%s", &q);

		if (strcmp(q, "面积") == 0)
		{
			printf("(面积)请输入半径:");
			one(p);
			
		}
		else if (strcmp(q, "周长") == 0)
		{
			printf("(周长)请输入半径:");
			two(p);
			
		}
		else if (strcmp(q, "体积") == 0)
		{
			printf("(圆柱体积)请输入半径:");
			three(p);
		}
		else {
			printf("-------------------输入错误------------------\n");
		}

		printf("是否继续运行：");	
		scanf("%s", &z);
		if (strcmp(z, "是") ==0)
		{
			l++;
			system("cls");//清屏
		}
		else
		{
			l = 0;
		}
	}
	getchar();
	getchar();

	return 0;
}

void one(double s)
{
	double r;

	if (scanf("%lf", &r) == 1)
	{
		s = PAI * (r * r);
		printf("面积为:%.3lf \n", s);
		printf("计算结束，感谢您的使用！\n");
	}
	else printf("请输入数字！\n");
	while ((ch = getchar() != '\n'));//用于刷新缓存区
}

void two(double c)
{
	double r;

	if (scanf("%lf", &r) == 1)
	{
		c = 2 * PAI * r;
		printf("周长为:%.3lf \n", c);
		printf("计算结束，感谢您的使用！\n");
	}
	else printf("请输入数字！\n");
	while ((ch = getchar() != '\n'));//用于刷新缓存区
}

void three(double s)
{
	double r, h;

	if (scanf("%lf", &r) == 1)
	{
		printf("请输入高:");
		if (scanf("%lf", &h) == 1)
		{
			s = r * r * PAI * h;
			printf("圆柱的体积为:%.3lf \n", s);
			printf("计算结束，感谢您的使用！\n");
		}
		else printf("请输入数字！\n");
		while ((ch = getchar() != '\n'));//用于刷新缓存区
	}
	else printf("请输入数字！\n");
	while ((ch = getchar() != '\n'));//用于刷新缓存区
}
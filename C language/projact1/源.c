#include "head.h"

//���һ��ά����־����goto����滻Ϊwhile���------������Ƽ�ǿ������ˢ�»���������

int main(void)	//��������ڵ��������Զ��庯��
{
	char q[30], z[10];
	double p = 0, l = 1, h;
	printf("----------------------------------------------\a\n���ã���ӭʹ�ñ�����\n");
	
	while(l!=0)
	{
		printf("����Բ��������ܳ��������������һ�����ɼ���.\n�������ǵð��س���ȷ�ϡ�\n��Ҫ����Բ��:__\b\b");
		scanf("%s", &q);

		if (strcmp(q, "���") == 0)
		{
			printf("(���)������뾶:");
			one(p);
			
		}
		else if (strcmp(q, "�ܳ�") == 0)
		{
			printf("(�ܳ�)������뾶:");
			two(p);
			
		}
		else if (strcmp(q, "���") == 0)
		{
			printf("(Բ�����)������뾶:");
			three(p);
		}
		else {
			printf("-------------------�������------------------\n");
		}

		printf("�Ƿ�������У�");	
		scanf("%s", &z);
		if (strcmp(z, "��") ==0)
		{
			l++;
			system("cls");//����
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
		printf("���Ϊ:%.3lf \n", s);
		printf("�����������л����ʹ�ã�\n");
	}
	else printf("���������֣�\n");
	while ((ch = getchar() != '\n'));//����ˢ�»�����
}

void two(double c)
{
	double r;

	if (scanf("%lf", &r) == 1)
	{
		c = 2 * PAI * r;
		printf("�ܳ�Ϊ:%.3lf \n", c);
		printf("�����������л����ʹ�ã�\n");
	}
	else printf("���������֣�\n");
	while ((ch = getchar() != '\n'));//����ˢ�»�����
}

void three(double s)
{
	double r, h;

	if (scanf("%lf", &r) == 1)
	{
		printf("�������:");
		if (scanf("%lf", &h) == 1)
		{
			s = r * r * PAI * h;
			printf("Բ�������Ϊ:%.3lf \n", s);
			printf("�����������л����ʹ�ã�\n");
		}
		else printf("���������֣�\n");
		while ((ch = getchar() != '\n'));//����ˢ�»�����
	}
	else printf("���������֣�\n");
	while ((ch = getchar() != '\n'));//����ˢ�»�����
}
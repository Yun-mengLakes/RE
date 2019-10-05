#include "head.h"

void encryption(char x[]);	//加密函数
void decryption();	//解密函数
int prove(char x[]);	//验证函数
void change();
char k[] = "D:\\Desktop\\测试文档1.txt";
void main(void)
{
	char x[NUMBER];
	FILE* file1;
	int k;
	printf("欢迎使用本系统！\n");
	printf("正在加载中");
	for (k = 0; k < VALUE; k++)	//延时加载模块
	{
		printf("."); Sleep(150); system("cls"); printf("欢迎使用本系统！\n正在加载中");
		printf(".."); Sleep(150); system("cls"); printf("欢迎使用本系统！\n正在加载中");
		printf("..."); Sleep(150); system("cls"); printf("欢迎使用本系统！\n正在加载中");
		printf("...."); Sleep(150); system("cls"); printf("欢迎使用本系统！\n正在加载中");
		printf("....."); Sleep(150); system("cls"); printf("欢迎使用本系统！\n正在加载中");
		printf("......"); Sleep(150); system("cls"); printf("欢迎使用本系统！\n正在加载中");
	}
	system("cls");
	putchar('\n');
	if (file1 = fopen("D:\\Desktop\\测试文档1.txt", "r+") == NULL)
	{
		file1 = fopen("D:\\Desktop\\测试文档1.txt", "w");
		printf("请设置新的密码：");
		//gets(x);
		scanf_s("%s", &x, NUMBER);	//更安全的输入函数
		encryption(x);
	}
	else {
		printf("验证密码：");
		//gets(x);
		scanf_s("%s", &x,NUMBER);	//更安全的输入函数
		system("cls");
		temps=prove(x);
		if (temps == 6)
		{
			printf("\n密码错误！");
			getchar();
			getchar();
			//
			return 0;
		}
		Sleep(150);
		system("cls");
		printf("\n\n选项如下：\n\t\t1.更改密码\n:");
		scanf_s("%s", &temp, NUMBER);
		if ((strcmp(temp, "1") == NULL) || (strcmp(temp, "更改密码") == NULL))
			change();

		//fclose(file1);
	}
}
void encryption(char x[])
{
	FILE* file1;
	int i;
	if ((file1 = fopen("D:\\Desktop\\测试文档1.txt", "w")) == NULL)
		printf("\n文件打开失败!");

	for (i = 0; i < strlen(x); i++)
		x[i] = x[i] + 191;
	fputs(x, file1);
	fclose(file1);
}
void decryption()
{
	FILE* file1;
	char x1[NUMBER];
	int i;

	if ((file1 = fopen("D:\\Desktop\\测试文档1.txt", "r")) == NULL)
		printf("\n文件打开失败!");
	fgets(x1, strlen(x1), file1);
	for (i = 0; i < strlen(x1); i++)
		x1[i] = x1[i] - 191;
	puts(x1);
	fclose(file1);
}
int prove(char x[])
{
	FILE* sq;
	char s[NUMBER];
	int i;
	sq = fopen("D:\\Desktop\\测试文档1.txt", "r");
	fgets(s, strlen(s), sq);
	for (i = 0; i < strlen(s); i++)
		s[i] = s[i] -191;
	if (strcmp(s,x)==0)
	{
		printf("\n验证通过！");
		fclose(sq);
	}
	else {
		fclose(sq);
		return 6;
	}
}
void change()
{
	FILE* files;
	char sv[NUMBER];
	files = fopen("D:\\Desktop\\测试文档1.txt", "w");
	printf("\n请输入新的密码：");
	scanf_s("%s", &sv, NUMBER);
	encryption(sv);
	printf("\n密码修改成功！");
	fclose(files);
}
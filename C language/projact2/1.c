#include "head.h"

void encryption(char x[]);	//���ܺ���
void decryption();	//���ܺ���
int prove(char x[]);	//��֤����
void change();
char k[] = "D:\\Desktop\\�����ĵ�1.txt";
void main(void)
{
	char x[NUMBER];
	FILE* file1;
	int k;
	printf("��ӭʹ�ñ�ϵͳ��\n");
	printf("���ڼ�����");
	for (k = 0; k < VALUE; k++)	//��ʱ����ģ��
	{
		printf("."); Sleep(150); system("cls"); printf("��ӭʹ�ñ�ϵͳ��\n���ڼ�����");
		printf(".."); Sleep(150); system("cls"); printf("��ӭʹ�ñ�ϵͳ��\n���ڼ�����");
		printf("..."); Sleep(150); system("cls"); printf("��ӭʹ�ñ�ϵͳ��\n���ڼ�����");
		printf("...."); Sleep(150); system("cls"); printf("��ӭʹ�ñ�ϵͳ��\n���ڼ�����");
		printf("....."); Sleep(150); system("cls"); printf("��ӭʹ�ñ�ϵͳ��\n���ڼ�����");
		printf("......"); Sleep(150); system("cls"); printf("��ӭʹ�ñ�ϵͳ��\n���ڼ�����");
	}
	system("cls");
	putchar('\n');
	if (file1 = fopen("D:\\Desktop\\�����ĵ�1.txt", "r+") == NULL)
	{
		file1 = fopen("D:\\Desktop\\�����ĵ�1.txt", "w");
		printf("�������µ����룺");
		//gets(x);
		scanf_s("%s", &x, NUMBER);	//����ȫ�����뺯��
		encryption(x);
	}
	else {
		printf("��֤���룺");
		//gets(x);
		scanf_s("%s", &x,NUMBER);	//����ȫ�����뺯��
		system("cls");
		temps=prove(x);
		if (temps == 6)
		{
			printf("\n�������");
			getchar();
			getchar();
			//
			return 0;
		}
		Sleep(150);
		system("cls");
		printf("\n\nѡ�����£�\n\t\t1.��������\n:");
		scanf_s("%s", &temp, NUMBER);
		if ((strcmp(temp, "1") == NULL) || (strcmp(temp, "��������") == NULL))
			change();

		//fclose(file1);
	}
}
void encryption(char x[])
{
	FILE* file1;
	int i;
	if ((file1 = fopen("D:\\Desktop\\�����ĵ�1.txt", "w")) == NULL)
		printf("\n�ļ���ʧ��!");

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

	if ((file1 = fopen("D:\\Desktop\\�����ĵ�1.txt", "r")) == NULL)
		printf("\n�ļ���ʧ��!");
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
	sq = fopen("D:\\Desktop\\�����ĵ�1.txt", "r");
	fgets(s, strlen(s), sq);
	for (i = 0; i < strlen(s); i++)
		s[i] = s[i] -191;
	if (strcmp(s,x)==0)
	{
		printf("\n��֤ͨ����");
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
	files = fopen("D:\\Desktop\\�����ĵ�1.txt", "w");
	printf("\n�������µ����룺");
	scanf_s("%s", &sv, NUMBER);
	encryption(sv);
	printf("\n�����޸ĳɹ���");
	fclose(files);
}
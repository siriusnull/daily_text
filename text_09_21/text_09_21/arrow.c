#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include"09_21.h"

void arrow(void)
{
	int n = 0;
	while (scanf("%d", &n) == 1)
	{
		int i = 0;
		int j = 0;
		for (i = 0; i < n + 1; i++)
		{
			//�ϰ벿�ֿհ�
			for (j = 2 * (n - i); j > 0; j--)
			{
				printf(" ");
			}
			//�ϰ���*
			for (j = 0; j <= i; j++)
			{
				printf("*");
			}
			printf("\n");
		}

		for (i = 0; i < n; i++)

		{   //�°�հ�
			for (j = 0; j < 2 * (i + 1); j++)
			{
				printf(" ");
			}
			//�°�*
			for (j = 0; j < n - i; j++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
}

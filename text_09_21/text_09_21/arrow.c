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
			//上半部分空白
			for (j = 2 * (n - i); j > 0; j--)
			{
				printf(" ");
			}
			//上半区*
			for (j = 0; j <= i; j++)
			{
				printf("*");
			}
			printf("\n");
		}

		for (i = 0; i < n; i++)

		{   //下半空白
			for (j = 0; j < 2 * (i + 1); j++)
			{
				printf(" ");
			}
			//下半*
			for (j = 0; j < n - i; j++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
}

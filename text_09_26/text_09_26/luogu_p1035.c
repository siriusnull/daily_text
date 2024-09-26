#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)

#include<stdio.h>

int main()
{
	int k =0;
	scanf("%d", &k);
	double sum = 0;
	int i = 0;
	for (i = 1; sum < k; i++)
	{
		sum =sum+ (1.0/ i);

	}
	printf("%d", i);
	return 0;
}
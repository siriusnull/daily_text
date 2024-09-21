#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)

#include"09_21.h"

double sort(int arr[],int i)
{
	int k = 0;
	int j = 0;
	int sum = 0;
	int tmp =0;
	for (k = 0; k < i-1; k++)
	{
		for (j = 0; j < i - 1 - k; j++)
		{
		   
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	for (j = 1; j < i - 1; j++)
	{
		sum += arr[j];
	}
	return sum / (i - 2);
}

void average(void)
{
	int arr[5] = {0};
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	double ret=sort(arr, i);
	printf("%.2lf", ret);
}


#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)

#include<stdio.h>
int main()
{
	printf("100-200->:");
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
    }
	int high = 0;
	printf("100-120->:");
	scanf("%d", &high);
	high += 30;
	int arr2[10] = { 0 };
	int j = 0;
	for (i = 0,j=0; i < 10; i++)
	{
		if (arr[i] <=high)
		{
			arr2[j] = arr[i];
			j++;
		}
	}
	printf("%d", j);
	return 0;
}
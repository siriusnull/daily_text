#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
//find single number
void find(int arr[], int* pd1, int* pd2,int sz);

int main()
{
	int arr[] = { 3,4,3,4,5,6 };
	int sign1 =0;
	int sign2 =0;
	int ret1 = 0;
	int ret2 = 0;
	int* pi = arr;
	int i = 0;
	int j = 0;
	int  sz = sizeof(arr) / sizeof(arr[0]);
	for (j = 0; j <sz; j++)
	{
		for (i = 0; i <sz; i++)
		{
			if (arr[i] == *pi)
			{
				if (sign1==2)
				{
					sign2 = !(sign2);
					break;
				}
				sign1 = !(sign1);
			
			}
		}
		if (sign1)
		{
			if (sign2)
			{
				ret2 = *pi;
				break;
			}
			ret1 = *pi;
			sign1 = 2;
			
		}
		pi++;
	}
	printf("%d\n%d\n", ret1, ret2);
	printf("-------------------\n");

	//Òì»ò²Ù×÷
	int dog1 = 0;
	int dog2 = 0;
	find(arr, &dog1, &dog2,sz);
	printf("%d\n%d", dog1, dog2);
	return 0;
}
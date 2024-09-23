#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)

void find(int arr[], int* pd1, int* pd2,int sz)
{
	int i = 0;
	int ret = 0;
	//计算分组标准，保证一组只有一个dog
	for (i = 0; i < sz; i++)
	{
		ret ^= arr[i];
	}
	for (i = 0; i < sz; i++)
	{
		//将末尾为0的一组
		if ((arr[i] >> 1) & 1 == 1)
		{
		*pd1 ^= arr[i];
		}
		else
		{
			*pd2 ^= arr[i];
		}
	}
}